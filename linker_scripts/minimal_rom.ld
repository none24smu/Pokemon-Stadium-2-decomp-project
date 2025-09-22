OUTPUT_ARCH(mips)
SECTIONS
{
  . = 0x00000000;
  .rom : AT(0x00000000)
  {
    build/boot_minimal.o(.text)
    build/boot_minimal.o(.rodata)
    build/pokemon_names.o(.data)
    build/padding.o(.data)
  }
  . = 0x04000000;
}
