#include <n64.h>

// N64 Hardware addresses
#define VI_STATUS_REG     0xA4400000
#define VI_ORIGIN_REG     0xA4400004
#define VI_WIDTH_REG      0xA4400008
#define VI_V_INTR_REG     0xA440000C
#define VI_V_CURRENT_REG  0xA4400010
#define VI_TIMING_REG     0xA4400014
#define VI_V_SYNC_REG     0xA4400018
#define VI_H_SYNC_REG     0xA440001C
#define VI_H_SYNC_LEAP_REG 0xA4400020
#define VI_H_VIDEO_REG    0xA4400024
#define VI_V_VIDEO_REG    0xA4400028
#define VI_V_BURST_REG    0xA440002C
#define VI_X_SCALE_REG    0xA4400030
#define VI_Y_SCALE_REG    0xA4400034

// Framebuffer location in RDRAM
#define FRAMEBUFFER       0x80100000

// Memory mapped I/O write
static inline void io_write(unsigned long addr, unsigned int val) {
    *(volatile unsigned int*)addr = val;
}

// Memory mapped I/O read
static inline unsigned int io_read(unsigned long addr) {
    return *(volatile unsigned int*)addr;
}

// Initialize N64 Video Interface for 320x240 16-bit
void init_video_interface(void) {
    // Set framebuffer origin
    io_write(VI_ORIGIN_REG, FRAMEBUFFER & 0x00FFFFFF);
    
    // Set width (320 pixels)
    io_write(VI_WIDTH_REG, 320);
    
    // Set video timing for NTSC
    io_write(VI_V_SYNC_REG, 525);        // Vertical sync
    io_write(VI_H_SYNC_REG, 0x03E52239); // Horizontal sync
    io_write(VI_H_SYNC_LEAP_REG, 0x0000020D); // Leap pattern
    io_write(VI_H_VIDEO_REG, 0x00C15B3C); // Horizontal video
    io_write(VI_V_VIDEO_REG, 0x00200024); // Vertical video
    io_write(VI_V_BURST_REG, 0x01E01B00); // Vertical burst
    
    // Set scaling
    io_write(VI_X_SCALE_REG, 0x02000800); // X scale
    io_write(VI_Y_SCALE_REG, 0x04000400); // Y scale
    
    // Enable video output - 16-bit pixel format
    io_write(VI_STATUS_REG, 0x3243);
}

// Fill framebuffer with test pattern
void draw_test_pattern(void) {
    volatile unsigned short *fb = (volatile unsigned short*)FRAMEBUFFER;
    int x, y;
    
    // Draw RGB stripes
    for (y = 0; y < 240; y++) {
        for (x = 0; x < 320; x++) {
            int pixel = y * 320 + x;
            
            if (y < 80) {
                fb[pixel] = 0xF800;  // Red (RGB565: 11111 000000 00000)
            } else if (y < 160) {
                fb[pixel] = 0x07E0;  // Green (RGB565: 00000 111111 00000)
            } else {
                fb[pixel] = 0x001F;  // Blue (RGB565: 00000 000000 11111)
            }
        }
    }
}

// N64 boot sequence
void _start(void) {
    // Clear framebuffer memory first
    volatile unsigned int *clear_fb = (volatile unsigned int*)FRAMEBUFFER;
    int i;
    for (i = 0; i < (320 * 240 * 2) / 4; i++) {
        clear_fb[i] = 0x00000000;
    }
    
    // Initialize video interface
    init_video_interface();
    
    // Wait a moment for video to stabilize
    volatile int delay;
    for (delay = 0; delay < 100000; delay++) {
        __asm__ volatile("nop");
    }
    
    // Draw test pattern
    draw_test_pattern();
    
    // Infinite loop to keep displaying
    while (1) {
        for (delay = 0; delay < 1000000; delay++) {
            __asm__ volatile("nop");
        }
    }
}
