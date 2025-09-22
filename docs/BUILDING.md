# Building Pokemon Stadium 2 (Work in Progress)

This repository aims to produce a bit-for-bit matching build of Pokemon Stadium 2 (N64) from source. The build system now includes extensive data integration and improved compilation handling.

## Prerequisites

- Linux or WSL2
- make, bash, Python 3.8+
- MIPS N64 toolchain
  - `sudo apt-get install gcc-10-mips-linux-gnu`

## Quick Start

1. **Place the ROM:**
   ```bash
   mkdir -p roms
   # Place your legally obtained Pokemon Stadium 2 ROM as roms/pokemon_stadium_2.z64
   ```

2. **Install Dependencies:**
   ```bash
   make setup
   ```

3. **Extract Assets:**
   ```bash
   make extract-assets
   ```

4. **Build the Project:**
   ```bash
   make build
   ```
   This compiles all C files and data arrays to object files and links them.

5. **Verify the Build:**
   ```bash
   make verify
   ```
   This checks the final ROM SHA1 against expected_sha1.txt.

## Build Targets

- `make build`: Compile and link all source files and data
- `make build-data`: Build only data files
- `make clean`: Clean build artifacts
- `make extract-assets`: Extract assets from ROM
- `make verify`: Verify ROM SHA1

## Current Status

- ✅ Source code compilation with MIPS toolchain
- ✅ Data structures integrated as C arrays
- ✅ CI/CD pipeline for automated testing
- ✅ Extensive decompiled function base
- ⚠️ Some compilation warnings/errors expected from decompiled code
- 🔄 Working toward bit-for-bit matching

## Troubleshooting

- **Compilation Errors**: Decompiled code may have MIPS assembly issues. The build system handles this gracefully.
- **Missing Dependencies**: Ensure MIPS toolchain is installed
- **Large Data Files**: Data arrays are compiled separately for better performance

## Notes

- Build system compiles both source code and data structures
- Some functions may have expected compilation warnings from decompilation
- CI pipeline tests individual components for robustness
- Ready for further refinement and matching work
