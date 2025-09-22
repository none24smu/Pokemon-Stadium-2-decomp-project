/*
 * Pokemon Stadium 2 - Memory Management Definitions
 */

#ifndef MEMORY_H
#define MEMORY_H

#include "types.h"

// Memory pool structure
typedef struct MemoryPool {
    u32 flags;              // Status flags
    u32 pool_base;          // Base address of pool
    u32 pool_size;          // Size of pool
    u32 buffer1_addr;       // Buffer region 1 address
    u32 buffer1_size;       // Buffer region 1 size
    u32 buffer2_addr;       // Buffer region 2 address  
    u32 buffer2_size;       // Buffer region 2 size
    u32 heap1_addr;         // Heap region 1 (aligned)
    u32 heap1_size;         // Heap region 1 size
    u32 heap1_ptr;          // Heap region 1 pointer
    u32 heap1_end;          // Heap region 1 end
    u32 heap2_addr;         // Heap region 2 (aligned)
    u32 heap2_size;         // Heap region 2 size
} MemoryPool;

// Heap allocator structure
typedef struct HeapAllocator {
    u32 heap_size;          // Total heap size
    u32 heap_start;         // Aligned start address
    u32 heap_end;           // Aligned end address
    u32 header_ptr;         // Header block pointer
    u32 footer_ptr;         // Footer block pointer
    u32 free_list;          // Free block list head
} HeapAllocator;

// Memory management functions
void boot_clear_memory(void);
void boot_hardware_init(void);
void memory_pool_init(MemoryPool* pool);
void heap_allocator_init(u32 start_addr, u32 end_addr);

// External memory system functions
extern void memory_system_register(void* pool, s32 flags);
extern void heap_manager_init(s32 param1, s32 param2);

// Memory regions
#define STACK_BASE         0x800b8280
#define MEMORY_CLEAR_START 0x800a7e80
#define MEMORY_CLEAR_SIZE  0x0008c5f0

#define POOL_BASE          0x800bb4a0
#define BUFFER1_ADDR       0x800a63d0
#define BUFFER2_ADDR       0x800a7a00
#define HEAP1_ADDR         0x800bb5a0
#define HEAP2_ADDR         0x800bb9a8
#define HEAP_CONTROL       0x800dcdb0

#endif // MEMORY_H
