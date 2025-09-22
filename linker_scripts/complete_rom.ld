/* Complete N64 ROM Linker Script */
OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  /* N64 ROM Header */
  . = 0x00000000;
  .header : AT(0x00000000)
  {
    LONG(0x80371240)  /* PI_BSD_DOM1 */
    LONG(0x00000000)  /* Clock rate */
    LONG(0x80001000)  /* Entry point */
    LONG(0x00000000)  /* Release */
    LONG(0x00000000)  /* CRC1 */
    LONG(0x00000000)  /* CRC2 */
    LONG(0x00000000)  /* Unknown */
    LONG(0x00000000)  /* Unknown */
    . += 32;          /* Pad to 64 bytes */
  }

  /* Boot code */
  . = 0x00001000;
  .boot : AT(0x00001000)
  {
    build/boot_minimal.o(.text)
    build/boot_minimal.o(.rodata)
  }

  /* Main code */
  . = 0x80000400;
  .text : AT(0x00002000)
  {
    build/battle.o(.text)
    build/battle.o(.rodata)
  }

  /* Data sections */
  . = 0x80200000;
  .data : AT(0x00080000)
  {
    build/pokemon_names.o(.data)
    build/move_data_tables.o(.data)
    build/all_text_data.o(.data)
    build/move_names.o(.data)
    build/type_effectiveness_charts.o(.data)
  }

  /* Padding to fill ROM */
  . = 0x04000000;
  .padding : AT(0x02000000)
  {
    build/padding.o(.data)
  }
}
