/*
 * Pokemon Stadium 2 - Memory Management System
 * Decompiled from MIPS assembly
 */

#include "types.h"
#include "memory.h"

// Memory pool structure (inferred from assembly analysis)
typedef struct {
    u32 flags;              // +0x20: Status flags
    u32 pool_base;          // +0x28: Base address of pool
    u32 pool_size;          // +0x2C: Size of pool
    u32 buffer1_addr;       // +0x30: Buffer region 1 address
    u32 buffer1_size;       // +0x34: Buffer region 1 size (4KB)
    u32 buffer2_addr;       // +0x38: Buffer region 2 address  
    u32 buffer2_size;       // +0x3C: Buffer region 2 size (2KB)
    u32 heap1_addr;         // +0x40: Heap region 1 (aligned)
    u32 heap1_size;         // +0x44: Heap region 1 size (1KB)
    u32 heap1_ptr;          // +0x48: Heap region 1 pointer
    u32 heap1_end;          // +0x4C: Heap region 1 end
    u32 heap2_addr;         // +0x58: Heap region 2 (aligned)
    u32 heap2_size;         // +0x5C: Heap region 2 size (3KB)
} MemoryPool;

// Memory pool initialization - 0x801011c0
void memory_pool_init(MemoryPool* pool) {
    // Set up primary memory pool
    pool->pool_base = 0x800bb4a0;
    pool->pool_size = 256;
    pool->flags = 1;  // Enable pool
    
    // Configure buffer regions
    pool->buffer1_addr = 0x800a63d0;
    pool->buffer1_size = 4096;  // 4KB buffer
    
    pool->buffer2_addr = 0x800a7a00;
    pool->buffer2_size = 2048;  // 2KB buffer
    
    // Set up heap regions with 16-byte alignment
    u32 heap1_base = 0x800bb5a0;
    u32 heap1_aligned = (heap1_base + 15) & ~15;  // 16-byte align
    pool->heap1_addr = heap1_aligned;
    pool->heap1_size = 1024;
    
    u32 heap2_base = 0x800bb9a8;
    u32 heap2_aligned = (heap2_base + 15) & ~15;  // 16-byte align
    pool->heap2_addr = heap2_aligned;
    pool->heap2_size = 3072;
    
    // Initialize heap pointers
    pool->heap1_ptr = 0x800bc5b0;
    pool->heap1_end = 0x800dc5b0;
    
    // Register with memory system
    memory_system_register(pool + 1, 1);  // Call external function
}

// Heap allocator structure (inferred from 0x80102280)
typedef struct {
    u32 heap_size;          // +0x1C: Total heap size
    u32 heap_start;         // +0x20: Aligned start address
    u32 heap_end;           // +0x24: Aligned end address
    u32 header_ptr;         // +0x28: Header block pointer
    u32 footer_ptr;         // +0x2C: Footer block pointer
    u32 free_list;          // +0x30: Free block list head
} HeapAllocator;

// Heap allocator initialization - 0x80102280
void heap_allocator_init(u32 start_addr, u32 end_addr) {
    HeapAllocator* heap = (HeapAllocator*)0x800dcdb0;  // Control structure
    
    // Apply 16-byte alignment to addresses
    u32 aligned_start = (start_addr + 15) & ~15;
    aligned_start += 16;  // Reserve space for header
    
    u32 aligned_end = end_addr & ~15;
    aligned_end -= 16;    // Reserve space for footer
    
    // Calculate heap size
    u32 heap_size = aligned_end - aligned_start;
    u32 header_ptr = aligned_start - 16;
    
    // Initialize heap control structure
    heap->heap_start = aligned_start;
    heap->heap_end = aligned_end;
    heap->heap_size = heap_size;
    heap->free_list = 0;  // No free blocks initially
    heap->header_ptr = header_ptr;
    
    // Initialize header block (16 bytes)
    u32* header = (u32*)header_ptr;
    header[0] = 0;  // Previous block size
    header[1] = 0;  // Block flags
    header[2] = 0;  // Next block pointer
    header[3] = 0;  // Previous block pointer
    
    // Initialize footer block (16 bytes)
    heap->footer_ptr = aligned_end;
    u32* footer = (u32*)aligned_end;
    footer[0] = 0;  // Block size
    footer[1] = 0;  // Block flags
    footer[2] = 0;  // Next block pointer
    footer[3] = 0;  // Previous block pointer
    
    // Register heap with memory system
    memory_system_register((void*)0x800dcdb4, 1);
    
    // Initialize heap manager
    heap_manager_init(0, 0);  // Call external function
}
