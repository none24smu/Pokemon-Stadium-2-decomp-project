/*
 * Pokemon Stadium 2 - Input/Controller System
 * Decompiled from MIPS assembly
 */

#include "types.h"
#include "input.h"

// Controller data structure (inferred from assembly analysis)
typedef struct {
    u32 controller_count;       // +0xAA4: Number of controllers
    u8  controller_types[4];    // +0xAB0: Controller type for each port
    u8  controller_status[4];   // +0xAB3: Status for each controller
    u32 controller_data[4];     // Controller input data
    u32 rumble_status;          // +0xABC: Rumble pack status
    u32 transfer_pak_status;    // Transfer pak detection
    u32 system_flags;           // +0x1C8: System status flags
} ControllerSystem;

// Global controller system at 0x800ba9e0
static ControllerSystem* g_controller_system = (ControllerSystem*)0x800ba9e0;

// Controller detection and initialization - 0x801013f8
s32 controller_detect_and_init(void) {
    ControllerSystem* ctrl = g_controller_system;
    s32 transfer_pak_count = 0;
    s32 update_needed = 0;
    
    // Check if controller system needs reset
    if (ctrl->controller_count != 0) {
        controller_reset((void*)0x800bb400);  // External function call
    }
    
    // Check controller configuration changes
    if (ctrl->system_flags != 0) {
        u8 old_status = ctrl->controller_status[0];
        u8 new_status = ctrl->controller_status[3];
        
        if (old_status != new_status) {
            // Controller configuration changed
            controller_update_config((void*)0x800bb400, (void*)0x800bb470, 1);
            update_needed = 1;
        }
    }
    
    // Scan for Transfer Pak controllers (signature 0x56545245 = "VTRE")
    u8 controller_count = ctrl->controller_types[0];
    if (controller_count >= 2) {
        for (s32 i = 1; i < controller_count; i++) {
            u32 controller_signature = controller_get_signature(ctrl);
            if (controller_signature == 0x56545245) {  // "VTRE" - Transfer Pak
                transfer_pak_count++;
            }
        }
    }
    
    // Update system status
    if (ctrl->system_flags > 0) {
        // Process controller updates
        do {
            controller_process_update(ctrl);
            ctrl->system_flags--;
        } while (ctrl->system_flags > 0);
        
        controller_get_signature(ctrl);  // Refresh controller data
    }
    
    return transfer_pak_count;
}

// Controller processing loop - 0x801016c8
void controller_process_loop(void) {
    ControllerSystem* ctrl = g_controller_system;
    
    // Get current controller signature/status
    controller_get_signature(ctrl);
    
    // Process controller updates while system is active
    while (ctrl->system_flags > 0) {
        controller_process_update(ctrl);
        ctrl->system_flags--;
    }
    
    // Final signature check
    controller_get_signature(ctrl);
}

// Placeholder for external controller functions
// These would be implemented in the full system

extern void controller_reset(void* config);
extern void controller_update_config(void* config1, void* config2, s32 flags);
extern u32 controller_get_signature(ControllerSystem* ctrl);
extern void controller_process_update(ControllerSystem* ctrl);
