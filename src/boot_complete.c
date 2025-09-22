#include <n64.h>

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

    // Simple game loop
    while (1) {
        battle_process_turn();
    }
}
