/* N64 Linker Script for Pokemon Stadium 2 */
OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  /* N64 ROM Header (first 0x1000 bytes) */
  .header 0x00000000 : AT(0x00000000)
  {
    KEEP(*(.header))
  }

  /* Boot code */
  .boot 0x00001000 : AT(0x00001000)
  {
    *(.boot)
  }

  /* Main code and data segments */
  .text 0x80000400 : AT(0x00010000)
  {
    *(.text*)
    *(.rodata*)
  }

  .data 0x80200000 : AT(0x00100000)
  {
    *(.data*)
    *(.bss*)
  }

  /* Fill remaining space */
  . = 0x04000000;
}
