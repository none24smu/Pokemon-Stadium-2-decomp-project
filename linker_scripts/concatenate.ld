OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  . = 0x00000000;
  .rom : AT(0x00000000)
  {
    build/boot_complete.o
    build/battle.o
    build/stubs.o
    build/game_systems.o
    build/pokemon_systems.o
    build/n64_optimizations.o
    build/pokemon_names.o
    build/move_data_tables.o
    build/all_text_data.o
    build/move_names.o
    build/type_effectiveness_charts.o
    build/padding.o
  }
  . = 0x04000000;
}
