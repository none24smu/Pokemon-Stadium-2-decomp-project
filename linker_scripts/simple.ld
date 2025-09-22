OUTPUT_ARCH(mips)
SECTIONS
{
  . = 0x00000000;
  .data : AT(0x00000000)
  {
    build/pokemon_names.o(.data)
    build/move_data_tables.o(.data)
    build/all_text_data.o(.data)
    build/move_names.o(.data)
    build/type_effectiveness_charts.o(.data)
  }
  . = 0x04000000;
}
