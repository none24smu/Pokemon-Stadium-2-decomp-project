#ifndef N64_H
#define N64_H

// Basic N64 types and macros
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

// N64 registers
#define N64_SR    12
#define N64_CAUSE 13
#define N64_EPC   14
#define N64_COMPARE 11
#define N64_COUNT 9

#endif
