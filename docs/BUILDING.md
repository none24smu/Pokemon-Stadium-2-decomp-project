# Building Pokemon Stadium 2 (Work in Progress)

This repository aims to produce a bit-for-bit matching build of Pokemon Stadium 2 (N64) from source. The build is a scaffold to organize code, assets, and configuration.

Important:
- The repository does not include any ROMs or copyrighted assets.
- You must provide your legally obtained ROM in `roms/`.
- Large extracted assets are generated locally during the build and are not committed to Git.

## Prerequisites

- Linux or WSL2
- make, bash, Python 3.8+
- N64 toolchain utilities (binutils)
  - `sudo apt install binutils-mips-linux-gnu`
- Python packages
  - `pip3 install splat64`

## Files/Paths

- Place the US ROM at:
  - `roms/pokemon_stadium_2.z64`
- Splat configuration:
  - `splat_configs/pokemon_stadium_2.yaml`
- Linker script (placeholder):
  - `linker_scripts/pokemon_stadium_2.ld`

## Typical Workflow

1) Verify your ROM hash (optional for now)

```bash
make rom-info PROJECT_NAME=pokemon_stadium_2
```

2) Extract/prepare assets (placeholder step, creates folders)

```bash
make extract-assets PROJECT_NAME=pokemon_stadium_2
```

3) Split the ROM using splat (WIP)

```bash
make split PROJECT_NAME=pokemon_stadium_2
```

4) Build (WIP)

```bash
make build
```

5) Verify SHA1 (once a matching build target exists)

```bash
make verify
```

- Expects `expected_sha1.txt` in repo root.
- For now, `verify` checks the provided ROM until the build is fully matching.

## Notes

- Some steps are placeholders until full matching is in place.
- No large binary assets should be committed. Assets are generated locally from the baserom.
- Keep documentation neutral and technical.
