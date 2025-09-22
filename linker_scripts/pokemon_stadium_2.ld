/* Placeholder linker script for Pokemon Stadium 2 (WIP)
   Replace with the correct segment layout once symbols/segments are finalized. */
OUTPUT_ARCH(mips)
ENTRY(_start)
SECTIONS
{
  /* Example layout: adjust as real segments are identified */
  .text 0x80000400 : { *(.text*) }
  .data           : { *(.data*) *(.rodata*) }
  .bss            : { *(.bss*) *(COMMON) }
}
