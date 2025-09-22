/* N64 Linker Script for Pokemon Stadium 2 */
OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  /* N64 ROM Header */
  . = 0x00000000;
  .header : AT(0x00000000)
  {
    KEEP(*(.header))
  }

  /* Boot code */
  . = 0x00001000;
  .boot : AT(0x00001000)
  {
    *(.boot)
  }

  /* Main code and data */
  . = 0x80000400;
  .text : AT(0x00002000)
  {
    *(.text*)
    *(.rodata*)
  }

  . = 0x80200000;
  .data : AT(0x00080000)
  {
    *(.data*)
  }

  /* Fill remaining space */
  . = 0x04000000;
}
