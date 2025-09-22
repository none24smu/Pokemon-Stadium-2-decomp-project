# Pokemon Stadium 2 Decompilation Project (WIP)

Neutral, minimal repository structure for an N64 decompilation targeting Pokemon Stadium 2 (Nintendo 64).

- This repo does not contain ROMs or large binary assets.
- Assets are generated locally from a user-supplied baserom during the build process.
- Focus is on reproducible build system, configs, scripts, and verification for a matching ROM.

## Project Structure

```
pokemon-stadium-2-decomp/
├── roms/                   # User-supplied ROMs (not committed)
├── src/                    # Decompiled C source code
├── include/                # Header files
├── data/                   # Data tables and constants
├── tools/                  # Build tools and scripts
├── scripts/                # Verification and utility scripts
├── splat_configs/          # Splat configuration files
├── linker_scripts/         # Linker scripts for segments
├── configs/                # Symbol maps and build configs
├── docs/                   # Documentation
├── build/                  # Build outputs (not committed)
└── expected_sha1.txt       # Expected final ROM SHA1 for verification
```

## Quick Start

1. Place your legally obtained Pokemon Stadium 2 ROM in `roms/` (e.g., `roms/pokemon_stadium_2.z64`).
2. Run `make setup` to install dependencies.
3. Run `make extract-assets` to prepare assets (placeholder for now).
4. Run `make split` to split the ROM (once splat config is ready).
5. Run `make build` to build the project.
6. Run `make verify` to check the build matches the expected SHA1.

## Legal Notes

- This project is for educational and research purposes only.
- You must own the original N64 cartridge/ROM to use this software.
- No copyrighted game assets are included in this repository.
- Assets are generated from the baserom during the build process and are not committed to Git.

## Contributing

Personal project by none24smu. Contributions welcome for code matching and verification.
