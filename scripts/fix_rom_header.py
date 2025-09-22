#!/usr/bin/env python3
import struct

def fix_n64_header(rom_path):
    # N64 ROM header bytes (big endian)
    header = struct.pack('>I', 0x80371240)  # PI_BSD_DOM1
    header += struct.pack('>I', 0x00000000)  # Clock rate
    header += struct.pack('>I', 0x80001000)  # Entry point
    header += struct.pack('>I', 0x00000000)  # Release
    header += struct.pack('>I', 0x00000000)  # CRC1
    header += struct.pack('>I', 0x00000000)  # CRC2
    header += struct.pack('>I', 0x00000000)  # Unknown
    header += struct.pack('>I', 0x00000000)  # Unknown
    header += b'\x00' * 24  # Pad to 64 bytes
    
    with open(rom_path, 'rb') as f:
        rom_data = f.read()
    
    # Prepend header to ROM data
    fixed_rom = header + rom_data[64:] if len(rom_data) >= 64 else header + rom_data
    
    with open(rom_path, 'wb') as f:
        f.write(fixed_rom)
    
    print(f"Fixed ROM header for {rom_path}")

fix_n64_header('/home/smuserverv1/roms/final_pokemon_stadium_2_decomp.z64')
