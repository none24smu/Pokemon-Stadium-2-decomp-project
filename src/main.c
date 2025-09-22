/*
 * Pokemon Stadium 2 - Main Initialization System
 * Decompiled from MIPS assembly at 0x80101060
 */

#include "types.h"
#include "memory.h"
#include "input.h"

// Main initialization function - 0x80101060
void main_initialization(void) {
    // Hardware initialization
    hardware_init(254);  // Initialize with parameter 254
    
    // Core system initialization
    system_init(0, 1);   // Initialize system services
    
    // Graphics subsystem initialization
    graphics_init(1);    // Initialize graphics with parameter 1
    
    // Set up floating point unit
    __asm__ volatile (
        "lui $at, 0x3f80\n"      // Load 1.0f in IEEE format
        "mtc1 $at, $f12\n"      // Move to FPU register
    );
    
    // Audio subsystem initialization
    audio_init();
    
    // Memory management initialization
    memory_manager_init();
    
    // Input system initialization  
    input_system_init();
    
    // File system initialization
    file_system_init();
    
    // Game logic initialization
    game_logic_init();
    
    // Asset loader initialization
    asset_loader_init();
    
    // Final system initialization
    final_system_init();
    
    // Set up main game thread
    void* thread_stack = (void*)0x800ba9e0;
    void* thread_config = (void*)0x80064fb0;
    
    // Create main game thread
    thread_create(
        (void*)0x800b8830,  // Thread control block
        6,                  // Thread priority
        0,                  // Thread flags
        thread_config,      // Thread configuration
        thread_stack,       // Stack pointer
        20                  // Stack size parameter
    );
    
    // Initialize thread system
    thread_system_init((void*)0x800b8830);
    
    // Start main game loop
    main_game_loop(0, 0);
    
    // Main loop - should never exit
    while (1) {
        // Game runs in infinite loop
        __asm__ volatile ("nop");
    }
}

// Secondary initialization - 0x80101130
void secondary_initialization(void) {
    // Thread system initialization
    thread_system_init();
    
    // Task scheduler initialization
    task_scheduler_init();
    
    // Memory pool initialization
    memory_pools_init(0);
    
    // Interrupt handler initialization
    interrupt_handler_init();
    
    // Set up secondary thread
    void* secondary_stack = (void*)0x800b8830;
    void* secondary_config = (void*)0x80001460;
    
    // Create secondary thread
    thread_create(
        (void*)0x800b8280,  // Thread control block
        1,                  // Thread priority
        0,                  // Thread flags
        secondary_config,   // Thread configuration
        secondary_stack,    // Stack pointer
        100                 // Stack size parameter
    );
    
    // Initialize secondary thread system
    thread_system_init((void*)0x800b8280);
}

// External function declarations
// These represent calls to functions outside our current ROM analysis range

extern void hardware_init(s32 param);
extern void system_init(s32 param1, s32 param2);
extern void graphics_init(s32 param);
extern void audio_init(void);
extern void memory_manager_init(void);
extern void input_system_init(void);
extern void file_system_init(void);
extern void game_logic_init(void);
extern void asset_loader_init(void);
extern void final_system_init(void);
extern void thread_create(void* tcb, s32 priority, s32 flags, void* config, void* stack, s32 stack_size);
extern void thread_system_init(void* tcb);
extern void main_game_loop(s32 param1, s32 param2);
extern void task_scheduler_init(void);
extern void memory_pools_init(s32 param);
extern void interrupt_handler_init(void);
