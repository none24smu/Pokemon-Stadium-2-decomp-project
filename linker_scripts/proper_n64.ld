/* Proper N64 Linker Script */
OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  /* N64 ROM Header - must be at start */
  .header 0x00000000 : AT(0x00000000)
  {
    LONG(0x80371240)  /* PI_BSD_DOM1 */
    LONG(0x00000000)  /* Clock rate */
    LONG(0x80001000)  /* Entry point */
    LONG(0x00000000)  /* Release */
    LONG(0x00000000)  /* CRC1 */
    LONG(0x00000000)  /* CRC2 */
    LONG(0x00000000)  /* Unknown */
    LONG(0x00000000)  /* Unknown */
    . += 24;          /* Pad to 64 bytes */
  }

  /* Boot code */
  .boot 0x80001000 : AT(0x00001000)
  {
    build/boot_minimal.o(.text)
    build/boot_minimal.o(.rodata)
  }

  /* Main code */
  .text 0x80002000 : AT(0x00002000)
  {
    build/battle.o(.text)
    build/stubs.o(.text)
  }

  /* Read-only data */
  .rodata 0x80200000 : AT(0x00080000)
  {
    build/battle.o(.rodata)
  }

  /* Fill remaining space */
  .padding 0x04000000 : AT(0x02000000)
  {
    build/padding.o(.data)
  }
}
