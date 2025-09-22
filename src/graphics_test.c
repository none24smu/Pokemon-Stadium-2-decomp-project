#include <n64.h>

// N64 memory addresses
#define FRAMEBUFFER_BASE 0xA0100000
#define VI_BASE          0xA4400000
#define VI_STATUS        (VI_BASE + 0x00)
#define VI_ORIGIN        (VI_BASE + 0x04)
#define VI_WIDTH         (VI_BASE + 0x08)
#define VI_INTR          (VI_BASE + 0x0C)
#define VI_CURRENT       (VI_BASE + 0x10)
#define VI_BURST         (VI_BASE + 0x14)
#define VI_V_SYNC        (VI_BASE + 0x18)
#define VI_H_SYNC        (VI_BASE + 0x1C)
#define VI_LEAP          (VI_BASE + 0x20)
#define VI_H_START       (VI_BASE + 0x24)
#define VI_V_START       (VI_BASE + 0x28)
#define VI_V_BURST       (VI_BASE + 0x2C)
#define VI_X_SCALE       (VI_BASE + 0x30)
#define VI_Y_SCALE       (VI_BASE + 0x34)

// Simple write to memory function
static inline void write32(unsigned int addr, unsigned int value) {
    *(volatile unsigned int*)addr = value;
}

// Simple read from memory function
static inline unsigned int read32(unsigned int addr) {
    return *(volatile unsigned int*)addr;
}

void _start(void) {
    // Initialize basic video interface for 320x240 16-bit color
    write32(VI_STATUS, 0x3243);        // 16-bit, AA off, serrate off
    write32(VI_ORIGIN, FRAMEBUFFER_BASE); // Framebuffer address
    write32(VI_WIDTH, 320);            // Line width
    write32(VI_V_SYNC, 525);           // NTSC timing
    write32(VI_H_SYNC, 3093);          // NTSC timing
    write32(VI_LEAP, 0x03E52239);      // NTSC timing
    write32(VI_H_START, 0x00710226);   // NTSC timing
    write32(VI_V_START, 0x00200024);   // NTSC timing
    write32(VI_V_BURST, 0x0E0A1700);   // NTSC timing
    write32(VI_X_SCALE, 0x02000800);   // X scale
    write32(VI_Y_SCALE, 0x04000400);   // Y scale

    // Fill framebuffer with a simple pattern
    volatile unsigned short* fb = (volatile unsigned short*)FRAMEBUFFER_BASE;
    int i;
    
    // Fill screen with colored pattern
    for (i = 0; i < 320 * 240; i++) {
        if (i < 320 * 80) {
            fb[i] = 0xF800;  // Red
        } else if (i < 320 * 160) {
            fb[i] = 0x07E0;  // Green  
        } else {
            fb[i] = 0x001F;  // Blue
        }
    }
    
    // Infinite loop to keep displaying
    while (1) {
        // Just wait
        volatile int delay = 0;
        for (delay = 0; delay < 100000; delay++) {
            __asm__ volatile("nop");
        }
    }
}
