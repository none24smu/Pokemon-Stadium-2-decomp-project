/*
 * Pokemon Stadium 2 - Type Definitions
 * Standard N64 types and definitions
 */

#ifndef TYPES_H
#define TYPES_H

// Standard integer types
typedef unsigned char      u8;
typedef unsigned short     u16;
typedef unsigned int       u32;
typedef unsigned long long u64;

typedef signed char        s8;
typedef signed short       s16;
typedef signed int         s32;
typedef signed long long   s64;

// Floating point types
typedef float              f32;
typedef double             f64;

// Boolean type
typedef s32                bool;
#define TRUE               1
#define FALSE              0

// Pointer types
typedef void*              ptr;
typedef u32                uintptr;

// N64 specific types
typedef u32                OSTime;
typedef s32                OSPri;
typedef s32                OSId;
typedef u32                OSEvent;

// Memory alignment macros
#define ALIGN(x, a)        (((x) + ((a) - 1)) & ~((a) - 1))
#define ALIGN_16(x)        ALIGN(x, 16)
#define ALIGN_32(x)        ALIGN(x, 32)

// Memory regions
#define RAM_START          0x80000000
#define RAM_END            0x80800000
#define RAM_SIZE           0x00800000  // 8MB

// Hardware register base addresses
#define HW_REGS_BASE       0x04000000
#define VI_REGS_BASE       0x04400000
#define AI_REGS_BASE       0x04500000
#define PI_REGS_BASE       0x04600000
#define RI_REGS_BASE       0x04700000
#define SI_REGS_BASE       0x04800000

// Common macros
#define NULL               ((void*)0)
#define ARRAY_SIZE(arr)    (sizeof(arr) / sizeof((arr)[0]))

#endif // TYPES_H
