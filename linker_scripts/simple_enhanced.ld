/* Simple Enhanced N64 Linker Script */
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
    . += 24;          /* Pad to 64 bytes */
  }

  /* All code and data together */
  . = 0x00001000;
  .rom : AT(0x00001000)
  {
    build/boot_complete.o(.text)
    build/boot_complete.o(.rodata)
    build/battle.o(.text)
    build/battle.o(.rodata)
    build/stubs.o(.text)
    build/game_systems.o(.text)
    build/game_systems.o(.rodata)
    build/pokemon_names.o(.data)
    build/move_data_tables.o(.data)
    build/all_text_data.o(.data)
    build/move_names.o(.data)
    build/type_effectiveness_charts.o(.data)
  }

  /* Fill to 67MB */
  . = 0x04000000;
  .padding : AT(0x02000000)
  {
    build/padding.o(.data)
  }
}
