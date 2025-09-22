#include <n64.h>

extern void battle_initialize(void);
extern void battle_process_turn(void);

// Simplified N64 initialization
void _start(void) {
    // Basic N64 setup - simplified
    __asm__ volatile(
        "li $t0, 0x80001000\n\t"  // Jump directly to boot function
        "jr $t0\n\t"
        "nop\n\t"
    );
}

void boot_function(void) {
    // Initialize basic systems
    battle_initialize();

    // Simple game loop with guaranteed exit
    int frame_count = 0;
    while (1) {  // Infinite loop with manual exit
        battle_process_turn();

        // Basic frame timing
        volatile int delay = 0;
        for (delay = 0; delay < 50000; delay++) {
            __asm__ volatile("nop");
        }

        frame_count++;

        // Exit after 500 frames for testing
        if (frame_count >= 500) {
            break;
        }
    }

    // Proper exit - return to caller
    __asm__ volatile("jr $ra");
}
