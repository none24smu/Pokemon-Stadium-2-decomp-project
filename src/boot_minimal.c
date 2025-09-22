void _start(void) {
    // Minimal boot - just jump to main
    __asm__ volatile("j 0x80000400\n\t");
}

void boot_function(void) {
    // Placeholder
}
