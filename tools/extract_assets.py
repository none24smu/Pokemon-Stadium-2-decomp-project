#!/usr/bin/env python3
"""
Minimal placeholder: Extract or reconstruct assets from a user-supplied baserom.
- Do not commit large assets. Generate them locally under extracted/ and assets/
- Keep deterministic output so builds are reproducible
"""
import sys
import os
from pathlib import Path

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_assets.py <rom_path>")
        sys.exit(2)
    rom_path = Path(sys.argv[1])
    if not rom_path.exists():
        print(f"ROM not found: {rom_path}")
        sys.exit(1)

    extracted = Path('extracted')
    assets = Path('assets')
    extracted.mkdir(parents=True, exist_ok=True)
    assets.mkdir(parents=True, exist_ok=True)

    # TODO: Implement real extraction and conversion steps.
    # For now, create placeholder markers to show the pipeline is wired up.
    (extracted / 'README.txt').write_text(
        'This directory is generated from the baserom by tools/extract_assets.py.\n'
        'Do not commit large binary assets to Git.\n'
    )
    (assets / 'README.txt').write_text(
        'Built/converted assets should be generated here from extracted data.\n'
        'Do not commit large binary assets to Git.\n'
    )
    print("Assets extraction placeholder complete.")

if __name__ == '__main__':
    main()
