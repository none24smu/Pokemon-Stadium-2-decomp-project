#!/usr/bin/env python3
"""
Extract assets from Pokemon Stadium 2 baserom.
Generates assets locally without committing large binary files.
"""
import sys
import os
from pathlib import Path
import struct

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_assets.py <rom_path>")
        sys.exit(2)
    rom_path = Path(sys.argv[1])
    if not rom_path.exists():
        print(f"ROM not found: {rom_path}")
        sys.exit(1)

    with open(rom_path, 'rb') as f:
        rom_data = f.read()

    extracted = Path('extracted')
    assets = Path('assets')
    extracted.mkdir(parents=True, exist_ok=True)
    assets.mkdir(parents=True, exist_ok=True)

    # Extract header info
    header = rom_data[0:0x40]
    with open(extracted / 'rom_header.bin', 'wb') as f:
        f.write(header)

    # Create asset placeholders (expand as needed)
    (assets / 'README.txt').write_text(
        'Assets generated from baserom by extract_assets.py\n'
    )
    
    print("Asset extraction complete.")

if __name__ == '__main__':
    main()
