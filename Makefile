# N64 Decompilation Project Makefile

# Project configuration
PROJECT_NAME ?= pokemon_stadium_2
ROM_FILE ?= roms/$(PROJECT_NAME).z64
SPLAT_CONFIG ?= splat_configs/$(PROJECT_NAME).yaml

# Tools
ROM_ANALYZER = tools/rom_analyzer.py
MIPS_ANALYZER = tools/mips_analyzer.py
SPLAT = splat
MIPS_CC = mips64-linux-gnuabi64-gcc
RADARE2 = radare2

# Directories
BUILD_DIR = build
SRC_DIR = src
ASM_DIR = asm
ANALYSIS_DIR = analysis

.PHONY: all clean setup analyze split decompile build help extract-assets verify

# Default target
all: help

# Setup development environment
setup:
	@echo "Setting up N64 decompilation environment..."
	@mkdir -p $(BUILD_DIR) $(SRC_DIR) $(ASM_DIR) $(ANALYSIS_DIR)
	@echo "Installing dependencies..."
	pip3 install splat64 || echo "splat64 already installed or failed to install"
	@echo "Setup complete!"

# Analyze ROM with custom tools
analyze:
	@if [ ! -f "$(ROM_FILE)" ]; then \
		echo "Error: ROM file $(ROM_FILE) not found!"; \
		echo "Place your legally owned N64 ROM in the roms/ directory"; \
		exit 1; \
	fi
	@echo "Analyzing $(ROM_FILE) with custom analysis tools..."
	python3 $(ROM_ANALYZER) $(ROM_FILE)
	python3 $(MIPS_ANALYZER) $(ROM_FILE) find

# Split ROM using splat
split:
	@if [ ! -f "$(SPLAT_CONFIG)" ]; then \
		echo "Error: Splat config $(SPLAT_CONFIG) not found!"; \
		echo "Run 'make splat-config' first to generate it"; \
		exit 1; \
	fi
	@echo "Splitting ROM using splat..."
	$(SPLAT) split $(SPLAT_CONFIG)

# Generate splat configuration
splat-config:
	@if [ ! -f "$(ROM_FILE)" ]; then \
		echo "Error: ROM file $(ROM_FILE) not found!"; \
		exit 1; \
	fi
	@echo "Splat configuration already created at $(SPLAT_CONFIG)"
	@echo "Edit manually or regenerate using ROM analysis data"

# Analyze specific function
decompile:
	@if [ -z "$(ADDR)" ]; then \
		echo "Error: Please specify function address with ADDR=0x..."; \
		echo "Example: make decompile ADDR=0x80240000"; \
		exit 1; \
	fi
	@echo "Analyzing function at $(ADDR)..."
	python3 $(MIPS_ANALYZER) $(ROM_FILE) analyze $(ADDR)

# Build the project (after decompilation)
# Build data files
build-data: $(DATA_OBJS)
	@echo "Data files built"

.PHONY: build-data
# Check for MIPS compiler
ifeq (, $(shell which $(MIPS_CC)))
  $(error "MIPS compiler $(MIPS_CC) not found. Install with: sudo apt install gcc-mips-linux-gnu")
endif
# Compile all source files
build: $(BUILD_DIR)/pokemon_stadium_2.elf

$(BUILD_DIR)/pokemon_stadium_2.elf: $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(wildcard $(SRC_DIR)/*.c))
	$(MIPS_CC) -nostdlib -T linker_scripts/$(PROJECT_NAME).ld -o $@ $^
# Compile source files
# Compile data files
$(BUILD_DIR)/%.o: data/%.c
	$(MIPS_CC) -c $< -o $@ -Idata

# Include data objects in build
DATA_OBJS = $(patsubst data/%.c, $(BUILD_DIR)/%.o, $(wildcard data/*.c))
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(MIPS_CC) -c $< -o $@ -Iinclude -I$(BUILD_DIR) -G 0 -O1 -Wall -Wno-all -mno-branch-likely -Wa,-mno-check-long-branch -msoft-float -mno-abicalls -mno-llsc -fomit-frame-pointer -ffreestanding
# Compile source files
# Compile data files
$(BUILD_DIR)/%.o: data/%.c
	$(MIPS_CC) -c $< -o $@ -Idata

# Include data objects in build
DATA_OBJS = $(patsubst data/%.c, $(BUILD_DIR)/%.o, $(wildcard data/*.c))
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(MIPS_CC) -c $< -o $@ -Iinclude
# Build individual segments
build-header: build/header.o
build-boot: build/boot.o
build-main: build/main.o

# Link segments
link: $(BUILD_DIR)/header.o $(BUILD_DIR)/boot.o $(BUILD_DIR)/main.o
	@echo "Linking segments..."
	$(MIPS_CC) -nostdlib -T linker_scripts/$(PROJECT_NAME).ld -o $(BUILD_DIR)/$(PROJECT_NAME).elf $^
build:
	@echo "Building decompiled project..."
	@if [ -f "$(BUILD_DIR)/Makefile" ]; then \
		$(MAKE) -C $(BUILD_DIR); \
	else \
		echo "No build system found. Complete decompilation first."; \
	fi

# Extract or reconstruct assets from the baserom (placeholder)
extract-assets:
	@if [ ! -f "$(ROM_FILE)" ]; then \
		echo "Error: ROM file $(ROM_FILE) not found!"; \
		echo "Place your legally owned N64 ROM in the roms/ directory"; \
		exit 1; \
	fi
	@echo "Extracting assets (placeholder)..."
	python3 tools/extract_assets.py $(ROM_FILE)

# Verify SHA1 of a ROM against expected_sha1.txt
verify:
	@if [ ! -f "expected_sha1.txt" ]; then \
		echo "expected_sha1.txt missing. Add the expected SHA1 (single line)."; \
		exit 1; \
	fi
	@echo "Verifying SHA1..."
	bash scripts/verify_sha1.sh $(ROM_FILE)

# Clean build artifacts
clean:
	@echo "Cleaning build artifacts..."
	rm -rf $(BUILD_DIR)/*
	rm -rf $(ASM_DIR)/*
	find . -name "*.o" -delete
	find . -name "*.elf" -delete

# Clean everything (including analysis)
clean-all: clean
	@echo "Cleaning all generated files..."
	rm -rf $(ANALYSIS_DIR)/*

# Show ROM info
rom-info:
	@if [ ! -f "$(ROM_FILE)" ]; then \
		echo "Error: ROM file $(ROM_FILE) not found!"; \
		exit 1; \
	fi
	@echo "ROM Information:"
	@echo "File: $(ROM_FILE)"
	@echo "Size: $$(stat -c%s $(ROM_FILE)) bytes"
	@echo "SHA1: $$(sha1sum $(ROM_FILE) | cut -d' ' -f1)"
	@file $(ROM_FILE)

# Help
help:
	@echo "N64 Decompilation Project - Available targets:"
	@echo ""
	@echo "  setup          - Set up development environment"
	@echo "  analyze        - Analyze ROM with custom tools (requires ROM_FILE)"
	@echo "  splat-config   - Generate splat configuration"
	@echo "  split          - Split ROM using splat"
	@echo "  decompile      - Decompile function (requires ADDR=0x...)"
	@echo "  build          - Build the decompiled project"
	@echo "  extract-assets - Extract/reconstruct assets from baserom (placeholder)"
	@echo "  verify         - Verify SHA1 against expected_sha1.txt"
	@echo "  rom-info       - Show ROM information"
	@echo "  clean          - Clean build artifacts"
	@echo "  clean-all      - Clean all generated files"
	@echo ""
	@echo "Configuration:"
	@echo "  PROJECT_NAME   - Name of the project (default: n64_game)"
	@echo "  ROM_FILE       - Path to ROM file (default: roms/\$$PROJECT_NAME.z64)"
	@echo ""
	@echo "Examples:"
	@echo "  make analyze PROJECT_NAME=mario64 ROM_FILE=roms/mario64.z64"
	@echo "  make decompile ADDR=0x80240000"
	@echo "  make split PROJECT_NAME=mario64"

# ROM generation

$(BUILD_DIR)/pokemon_stadium_2.elf: $(ROM_OBJS)

# N64 ROM generation tools
MIPS_OBJCOPY = mips64-linux-gnuabi64-objcopy
MIPS_LD = mips64-linux-gnuabi64-ld

$(BUILD_DIR)/$(PROJECT_NAME).elf: $(ROM_OBJS)
ROM_OBJS = $(BUILD_DIR)/boot.o $(BUILD_DIR)/main.o $(BUILD_DIR)/pokemon_names.o

$(BUILD_DIR)/$(PROJECT_NAME).z64: $(BUILD_DIR)/$(PROJECT_NAME).elf
$(MIPS_OBJCOPY) -O binary $< $@
@echo "ROM generated: $@"
@echo "Size: $$(stat -c%s $@) bytes"
@echo "SHA1: $$(sha1sum $@ | cut -d' ' -f1)"
