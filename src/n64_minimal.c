#include <n64.h>

// Ultra-minimal N64 test - just a simple infinite loop
void _start(void) {
    // Simple loop using only basic MIPS instructions
    __asm__ volatile(
        "loop:\n\t"
        "j loop\n\t"
        "nop\n\t"
    );
}

// This should never be reached
void main(void) {
    while (1) {
        // Additional safe loop
        __asm__ volatile("nop");
    }
}
