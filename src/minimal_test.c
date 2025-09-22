#include <n64.h>

// Minimal N64 test - just show something on screen
void _start(void) {
    // Simple infinite loop that should at least run
    while (1) {
        // Just spin - if this runs, the ROM loads
        volatile int i = 0;
        for (i = 0; i < 1000000; i++) {
            __asm__ volatile("nop");
        }
    }
}
