/*
 * Pokemon Stadium 2 - Input System Definitions
 */

#ifndef INPUT_H
#define INPUT_H

#include "types.h"

// Controller system structure
typedef struct ControllerSystem {
    u32 controller_count;       // Number of controllers
    u8  controller_types[4];    // Controller type for each port
    u8  controller_status[4];   // Status for each controller
    u32 controller_data[4];     // Controller input data
    u32 rumble_status;          // Rumble pack status
    u32 transfer_pak_status;    // Transfer pak detection
    u32 system_flags;           // System status flags
} ControllerSystem;

// Controller constants
#define MAX_CONTROLLERS    4
#define TRANSFER_PAK_SIG   0x56545245  // "VTRE" signature

// Controller system base address
#define CONTROLLER_SYSTEM  0x800ba9e0

// Input system functions
s32 controller_detect_and_init(void);
void controller_process_loop(void);

// External controller functions
extern void controller_reset(void* config);
extern void controller_update_config(void* config1, void* config2, s32 flags);
extern u32 controller_get_signature(ControllerSystem* ctrl);
extern void controller_process_update(ControllerSystem* ctrl);

#endif // INPUT_H
