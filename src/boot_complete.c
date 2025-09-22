#include <n64.h>

extern void battle_initialize(void);
extern void battle_process_turn(void);

// Simple N64 initialization
void _start(void) {
    // Basic N64 setup
    __asm__ volatile(
        "li $t0, 0x80000000\n\t"
        "mtc0 $t0, $12\n\t"  // Set SR
        "li $t1, 0x00000000\n\t"
        "mtc0 $t1, $13\n\t"  // Set Cause
        "li $t2, 0x00000000\n\t"
        "mtc0 $t2, $14\n\t"  // Set EPC
        "j 0x80001000\n\t"   // Jump to main
        "nop\n\t"
    );
}

void boot_function(void) {
    // Initialize basic systems
    battle_initialize();

    // Simple game loop with basic timing
    volatile int frame_count = 0;
    while (frame_count < 1000) {  // Limit to 1000 frames for testing
        battle_process_turn();

        // Basic frame timing - simple busy wait
        volatile int delay = 0;
        for (delay = 0; delay < 100000; delay++) {
            // Busy wait for frame timing
        }

        frame_count++;
    }

    // Infinite loop with proper exit - just hang for now
    while (1) {
        // Safe infinite loop
        __asm__ volatile("nop");
    }
}
