#include <n64.h>

// Minimal N64 test - just jump to infinite loop
void _start(void) {
    // Simple infinite loop using only valid N64 instructions
    while (1) {
        // Just a simple nop loop
        __asm__ volatile(
            "nop\n\t"
            "nop\n\t"
            "nop\n\t"
            "nop\n\t"
        );
    }
}
