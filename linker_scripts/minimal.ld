OUTPUT_ARCH(mips)
ENTRY(_start)

SECTIONS
{
  . = 0x00000000;
  .rom : AT(0x00000000)
  {
    build/minimal_test.o
  }
  . = 0x04000000;
}
