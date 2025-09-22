/* Pokemon Stadium 2 - Linker Script for N64 MIPS */

OUTPUT_FORMAT("elf32-bigmips")
OUTPUT_ARCH(mips)
ENTRY(_start)

MEMORY
{
    /* N64 Memory Layout */
    ram (rwx) : ORIGIN = 0x80100000, LENGTH = 8M
}

SECTIONS
{
    . = 0x80100000;
    
    .text : {
        *(.text.boot)
        *(.text)
        *(.text.*)
    } > ram
    
    .rodata : {
        *(.rodata)
        *(.rodata.*)
    } > ram
    
    .data : {
        *(.data)
        *(.data.*)
    } > ram
    
    .bss : {
        *(.bss)
        *(.bss.*)
        *(COMMON)
    } > ram
    
    /* Stack and heap regions */
    . = ALIGN(16);
    _heap_start = .;
    
    . = 0x800a7e80;
    _stack_start = .;
    
    . = 0x800b8280;
    _stack_end = .;
    
    /* Memory pool regions */
    . = 0x800ba9e0;
    _controller_system = .;
    
    . = 0x800bb4a0;
    _memory_pool = .;
    
    . = 0x800dcdb0;
    _heap_control = .;
    
    /* Discard debug sections */
    /DISCARD/ : {
        *(.MIPS.abiflags)
        *(.comment)
        *(.note.*)
    }
}
