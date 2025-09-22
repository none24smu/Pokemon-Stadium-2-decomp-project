# Building Pokemon Stadium 2 (Work in Progress)

This repository aims to produce a bit-for-bit matching build of Pokemon Stadium 2 (N64) from source. The build system is now functional with source code compilation.

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
   This compiles all C files in src/ to object files in build/ and links them.

5. **Verify the Build:**
   ```bash
   make verify
   ```
   This checks the final ROM SHA1 against expected_sha1.txt.

## Build Targets

- `make build`: Compile and link all source files
- `make clean`: Clean build artifacts
- `make extract-assets`: Extract assets from ROM
- `make verify`: Verify ROM SHA1
- `make rom-info`: Show ROM information

## Notes

- The build system compiles C files using the MIPS toolchain
- Assets are generated locally from the ROM and not committed to Git
- Current status: Source code compilation working with expected warnings
- Next: Refine segment configuration and add more matching logic
