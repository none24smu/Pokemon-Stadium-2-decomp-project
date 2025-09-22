# Pokemon Stadium 2 - Decompiled Code Build System

# Compiler settings
CC = mips-linux-gnu-gcc
CFLAGS = -march=vr4300 -mabi=32 -mgp32 -mfp32 -G 0 -mno-shared -msplit-addresses
CFLAGS += -fno-pic -fno-common -fno-zero-initialized-in-bss
CFLAGS += -fno-toplevel-reorder -ffreestanding -fno-stack-protector
CFLAGS += -Wall -Wextra -Wno-unused-parameter -Wno-unused-variable
CFLAGS += -O2 -g3

# Include directories
INCLUDES = -I../include

# Source files
SOURCES = boot.c main.c memory.c input.c battle.c damage_calc.c move_effects.c pokemon_stats.c
OBJECTS = $(SOURCES:.c=.o)

# Target
TARGET = pokemon_stadium_2

# Build rules
.PHONY: all clean

all: $(TARGET).elf

$(TARGET).elf: $(OBJECTS)
	$(CC) $(CFLAGS) -T linker.ld -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	rm -f $(OBJECTS) $(TARGET).elf

# Analysis targets
analyze: $(OBJECTS)
	@echo "Analyzing compiled objects..."
	@for obj in $(OBJECTS); do \
		echo "=== $$obj ==="; \
		mips-linux-gnu-objdump -d $$obj | head -20; \
	done

size: $(TARGET).elf
	mips-linux-gnu-size $<

symbols: $(TARGET).elf
	mips-linux-gnu-nm $< | sort

disasm: $(TARGET).elf
	mips-linux-gnu-objdump -d $< > $(TARGET).disasm
