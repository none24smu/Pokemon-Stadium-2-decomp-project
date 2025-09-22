#!/usr/bin/env python3
"""
Extract assets from Pokemon Stadium 2 baserom.
Generates assets locally without committing large binary files.
"""
import sys
import os
from pathlib import Path
import struct

def extract_header_info(rom_data):
    """Extract ROM header information"""
    header = rom_data[0:0x40]
    with open('extracted/rom_header.bin', 'wb') as f:
        f.write(header)
    
    # Print header info
    print("ROM Header:")
    print(f"  Title: {header[0x20:0x34].decode('ascii').rstrip()}")
    print(f"  Game ID: {header[0x3B:0x3F].decode('ascii')}")
    print(f"  Entry Point: 0x{header[8] << 24 | header[9] << 16 | header[10] << 8 | header[11]:08x}")

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
    extract_header_info(rom_data)

    # Create asset placeholders (expand as needed)
    (assets / 'README.txt').write_text(
        'Assets generated from baserom by extract_assets.py\n'
        'Do not commit large binary assets to Git.\n'
    )
    
    print("Asset extraction complete.")

if __name__ == '__main__':
    main()
