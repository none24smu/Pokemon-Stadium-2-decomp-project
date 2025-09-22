/*
 * Function: 0x80379f64
 * Category: math
 */

// Decompiled C code
int fcn.80398300 (int esi, int edx) {
// } else {
// } else {
// } else {
// } else {
// } else {
}
return eax;
}

/*
// Full radare2 output
int fcn.80398300 (int esi, int edx) {
    loc_0x8036cd7c:
        v0 = , unsigned  halfword [a0 + 6]
        t7 = v0 & 0x200
        if            // unlikely
        t8 = v0 & 0x100
            
    loc_0x8036cd94:
        if            // fcn.80339168+0x33c3c // unlikely
        t9 = v0 & 0x800
        // chop
            
    loc_0x8036cda4:
        if            // unlikely
        t0 = v0 & 0x400
        // chop
            
    loc_0x8036cdb4:
        if            // unlikely
        v1 = 0 - 0x8000
        // chop
            
    loc_0x8036cdc4:
        // CODE XREFS from fcn.80398300 @ 0x8036cd8c, 0x8036cd9c
        // CODE XREFS from fcn.80339168 @ 0x8036cdac, 0x8036cdbc
        t1 = , unsigned  halfword [a0 + 8]
        t2 = t1 & 0x8000
        if            // unlikely
        0x8036cdd0
        // chop
            
    loc_0x8036cee8:
        ret           // ra
        v0 = v1
         // } else {
    loc_0x8036cdd4:
        v1 |= 0x4000
        v1 <<= 0x10
        ret           // ra
        v0 = , signed  v1 >> 0x10
         // } else {
         // } else {
         // } else {
         // } else {
        }
        return eax;
    loc_0x80377ee8: // orphan
             call 0x87f061f0          // 0x87f061f0(-1, 0x442f71dcfe116408, 0x8, -1)
             
             v0 = [s0 + 0]            // t9
             t0 = [sp + 0x80]
             t4 = 0x37a0 << 16

    loc_0x80377efc: // orphan
         t2 = v0 + 8
         [s0 + 0] = t2
         t4 |= 0xffff             // t9
         t3 = 0xfa00 << 16
         [v0 + 0] = t3
         [v0 + 4] = t4
         v0 = [s0 + 0]
         t5 = 0xfb00 << 16
         t7 = 0 - 1               // s2
         t6 = v0 + 8
         [s0 + 0] = t6
         at = , t0 < 0xa
         [v0 + 4] = t7
         if                       // likely
         [v0 + 0] = t5

    loc_0x80377f38: // orphan
         at = 0x8630 << 16
         lwc1 f0, 0x74e0, at
         at = 0 + 0xa
         div 0, t0, at
         t8 = hi
         mfc1 a2, f0

    loc_0x80377f50: // orphan
         mfc1 a3, f0
         [sp + 0x10] = t8
         a0 = 0 + 0x10d           // arg1
         call 0x87f06240          // 0x87f06240(0x10d, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x6c
         goto 0x80377fd0
         v0 = [s0 + 0]

    loc_0x80377f6c: // orphan
         at = 0x8630 << 16
         lwc1 f0, 0x74e4, at
         at = 0 + 0xa
         div 0, t0, at
         t9 = lo
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t9
         a0 = 0 + 0x104           // arg1 // s0
         a1 = 0 + 0x6c            // arg2
         call 0x87f06240          // 0x87f06240(0x104, 0x6c, 0x8, -1)
         [sp + 0x80] = t0
         t0 = [sp + 0x80]
         at = 0x8630 << 16
         lwc1 f0, 0x74e8, at
         at = 0 + 0xa
         div 0, t0, at
         t1 = hi
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t1
         a0 = 0 + 0x115
         call 0x87f06240          // 0x87f06240(0x115, 0x6c, 0x8, -1)
         a1 = 0 + 0x6c
         v0 = [s0 + 0]

    loc_0x80377fd0: // orphan
         // CODE XREF from fcn.80398300 @ 0x80377f64
         t4 = 0x8009 << 16
         t4 += 0x4f50
         t2 = v0 + 8
         [s0 + 0] = t2
         t3 = 0xde00 << 16
         [v0 + 0] = t3
         call 0x87f061f0          // 0x87f061f0(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 4] = t4
         v0 = [s0 + 0]
         t5 = 0xfa00 << 16
         t7 = 0 | 0x9bff
         t6 = v0 + 8
         [s0 + 0] = t6
         [v0 + 4] = t7
         [v0 + 0] = t5
         v0 = [s0 + 0]
         t1 = 0xaaf5 << 16
         t1 |= 0xffff
         t8 = v0 + 8
         [s0 + 0] = t8
         t9 = 0xfb00 << 16
         [v0 + 0] = t9
         [v0 + 4] = t1
         a0 = 0x8630 << 16
         t2 = 0 + 2
         t3 = 0 + 0x1c
         t4 = 0 + 2
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = [a0 + 0x7334]       // t9
         a1 = 0 + 0x1c
         a2 = 0 + 0x10
         call 0x86302634          // 0x86302634(-1, 0x1c, 0x10, -1)
         a3 = 0 + 0x22
         v0 = [s0 + 0]
         t7 = 0x64 << 16
         t7 |= 0xff
         t6 = v0 + 8
         [s0 + 0] = t6
         t5 = 0xfa00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t7

    loc_0x8037807c: // orphan
         v0 = [s0 + 0]
         t1 = 0xc8ff << 16
         t1 |= 0x9bff
         t8 = v0 + 8
         [s0 + 0] = t8
         t9 = 0xfb00 << 16
         [v0 + 0] = t9
         [v0 + 4] = t1
         a0 = 0x8630 << 16
         t2 = 0 + 2
         t3 = 0 - 0xd
         t4 = 0 + 2
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = [a0 + 0x7380]       // t9
         a1 = 0 + 0x108
         a2 = 0 + 0x10
         call 0x86302634          // 0x86302634(-1, 0x108, 0x10, -1)
         a3 = 0 - 0x13
         v0 = [s0 + 0]
         t7 = 0x7800 << 16
         t7 |= 0xff
         t6 = v0 + 8
         [s0 + 0] = t6
         t5 = 0xfa00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t7
         v0 = [s0 + 0]
         t1 = 0xffa0 << 16
         t1 |= 0xbeff
         t8 = v0 + 8
         [s0 + 0] = t8
         t9 = 0xfb00 << 16
         [v0 + 0] = t9
         [v0 + 4] = t1
         a0 = 0x8630 << 16
         t2 = 0 + 2
         t3 = 0 + 0x1c
         t4 = 0 + 2
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = [a0 + 0x73cc]       // t9
         a1 = 0 + 0x1c
         a2 = 0 + 0xcb
         call 0x86302634          // 0x86302634(-1, 0x1c, 0xcb, 0xffffffffffffffed)
         a3 = 0 + 0x22
         v0 = [s0 + 0]
         t7 = 0xd25a << 16
         t7 |= 0xff
         t6 = v0 + 8
         [s0 + 0] = t6
         t5 = 0xfa00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t7
         v0 = [s0 + 0]
         t9 = 0xfb00 << 16
         t1 = 0 - 0x7301
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = t1
         [v0 + 0] = t9
         a0 = 0x8630 << 16
         t2 = 0 + 2
         t3 = 0 - 0xd
         t4 = 0 + 2
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = [a0 + 0x7418]       // t9

    loc_0x80378198: // orphan
         a1 = 0 + 0x108
         a2 = 0 + 0xcb
         call 0x86302634          // 0x86302634(-1, 0x108, 0xcb, -1)
         a3 = 0 - 0x13
         ra = [sp + 0x3c]

    loc_0x80378224: // orphan
         v0 = 0x8630 << 16
         v0 = [v0 + 0x75d8]       // t9
         at = 0 + 5
         t8 = [v0 + 0]            // t9
         v1 = v0 + 0x7fff
         bnel t8, at, 0x80378290  // likely
         v1 = [v1 + 0xf55]        // t9

    loc_0x80378240: // orphan
         call 0x8630271c          // 0x8630271c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8630 << 16
         v0 = [v0 + 0x75d8]       // t9
         at = 0 | 0x8000
         a1 = v0 + at
         t9 = [a1 + 0xf2c]
         at = , t9 < 8
         bnel at, 0, 0x80378284   // unlikely
         v1 = [a1 + 0xf54]        // t9

    loc_0x80378268: // orphan
         call 0x87f0a5bc          // 0x87f0a5bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x7c
         v0 = 0x8630 << 16
         v0 = [v0 + 0x75d8]       // t9
         at = 0 | 0x8000
         a1 = v0 + at
         v1 = [a1 + 0xf54]        // t9

    loc_0x80378284: // orphan
         goto 0x803782b8
         a0 = v1 & 1

    loc_0x80378290: // orphan
         a0 = v1 & 1              // arg1
         if                       // unlikely
         

    loc_0x8037829c: // orphan
         call 0x8630271c          // 0x8630271c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8630 << 16
         // CODE XREF from fcn.8341bb7c @ +0x504
         v0 = [v0 + 0x75d8]       // t9
         v1 = v0 + 0x7fff
         v1 = [v1 + 0xf55]        // t9
         a0 = v1 & 1              // lo

    loc_0x803782b8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80378284
         beql a0, 0, 0x803782dc   // unlikely
         t1 = v1 & 2

    loc_0x803782c0: // orphan
         call 0x87f07fe8          // 0x87f07fe8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x44
         t0 = 0x8630 << 16
         t0 = [t0 + 0x75d8]       // t9
         v1 = t0 + 0x7fff
         v1 = [v1 + 0xf55]        // t9
         t1 = v1 & 2

    loc_0x803782dc: // orphan
         if                       // unlikely
         

    loc_0x803782e4: // orphan
         call 0x87f022f0          // 0x87f022f0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x803782ec: // orphan
         call 0x87f00930          // 0x87f00930(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x80378358: // orphan
         at = 0 + 2

    loc_0x8037835c: // orphan
         if                       // unlikely
         

    loc_0x80378364: // orphan
         goto 0x803783b8
         ra = [sp + 0x14]

    loc_0x803783a4: // orphan
         call 0x86300020          // 0x86300020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         call 0x800226c0          // 0x800226c0(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         ra = [sp + 0x14]

    loc_0x803783b8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80378364
         // CODE XREF from fcn.803747c4 @ 0x8037839c
         sp += 0x18
         ret                      // ra
         

    loc_0x80378664: // orphan
         t8 = [t7 + 0xf30]        // t9
         t9 = , signed  a3 >> 1   // arg4
         t2 = , signed  v0 >> 1
         div 0, t8, t9
         t1 = hi
         t3 = t1 + 1              // s2
         if                       // likely
         

    loc_0x80378684: // orphan
         break 7

    loc_0x80378688: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803786c0: // orphan
         t4 = [a2 + 0]            // arg3 // t9
         t0 = 0 | 0x8000
         a3 = [sp + 0x1c]
         t5 = t4 + t0
         t6 = [t5 + 0xf30]        // t9
         t7 = , signed  a3 >> 1   // arg4
         t1 = , signed  v0 >> 1
         t8 = t6 + t7             // t9
         t9 = t8 - 1
         div 0, t9, t1
         if                       // likely
         

    loc_0x80379080: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         t7 = , unsigned  halfword [t6 + 8]
         v1 = 0x8630 << 16
         t8 = t7 & 0x10
         if                       // unlikely
         t7 = 0x8630 << 16

    loc_0x8037909c: // orphan
         v1 = [v1 + 0x75d8]       // t9
         at = 0 | 0x8000
         v1 += at
         a0 = , unsigned  byte [v1 + 0xf51] // s4
         v0 = a0 >> 7             // arg1 // lo
         v0 ^= 1
         v0 &= 1

    loc_0x803790b8: // orphan
         t0 = v0 << 7
         t1 = a0 & 0xff7f         // arg1
         t2 = t0 | t1
         if                       // unlikely
         byte [v1 + 0xf51] = t2

    loc_0x803790cc: // orphan
         v0 = [a1 + 0]            // arg2 // t9
         t3 = , unsigned  halfword [v0 + 0x10]
         t4 = t3 & 0xfffe
         goto 0x803790f0
         halfword [v0 + 0x10] = t4

    loc_0x803790e0: // orphan
         // CODE XREF from fcn.80398300 @ 0x803790c4
         v0 = [a1 + 0]            // arg2 // t9
         t5 = , unsigned  halfword [v0 + 0x10]
         t6 = t5 & 0xfffe
         halfword [v0 + 0x10] = t6

    loc_0x803790f0: // orphan
         // CODE XREFS from fcn.80398300 @ 0x80379094, 0x803790d8
         t7 = [t7 + 0x75d8]       // t9
         t8 = t7 + 0x7fff
         t8 = , unsigned  byte [t8 + 0xf52] // s4
         t9 = t8 >> 7             // lo
         beql t9, 0, 0x80379114   // unlikely
         ra = [sp + 0x14]

    loc_0x80379108: // orphan
         call 0x87f04894          // 0x87f04894(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]

    loc_0x80379114: // orphan
         // CODE XREF from fcn.80398300 @ 0x80379100
         sp += 0x18
         ret                      // ra
         

    loc_0x8037918c: // orphan
         v1 = [a2 + 0]            // arg3 // t9
         a3 = 0x8009 << 16
         a3 = [a3 + 0x491c]       // arg4 // t9
         t7 = 0xdb06 << 16
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         t7 |= 0x3c
         [v1 + 0] = t7
         a0 = 0 + 0x97            // arg1
         a1 = 0
         [sp + 0x18] = v1
         call 0x8004c990          // 0x8004c990(0x97, 0x0, 0x8, -1)
         [sp + 0x1c] = a3
         call 0x8004ca60          // 0x8004ca60(0x97, 0x0, 0x8, -1)
         a0 = v0                  // s4
         t8 = [sp + 0x18]         // t9
         a3 = [sp + 0x1c]         // t9
         a2 = 0x800d << 16
         a2 += 0x510
         [t8 + 4] = v0
         v1 = [a2 + 0]            // t9
         t3 = 0xe700 << 16
         t5 = 0xfc30 << 16
         t9 = v1 + 8
         [a2 + 0] = t9
         [v1 + 4] = 0
         [v1 + 0] = t3
         v1 = [a2 + 0]
         t6 = 0x5ffe << 16
         t6 |= 0xfe38
         t4 = v1 + 8
         [a2 + 0] = t4
         t5 |= 0x9bff
         [v1 + 0] = t5
         [v1 + 4] = t6
         v1 = [a2 + 0]
         at = 0xfa00 << 16
         t7 = v1 + 8
         [a2 + 0] = t7
         t1 = , unsigned  byte [a3 + 0x1d] // s4
         t8 = t1 << 8
         t9 = t8 | at

    loc_0x80379234: // orphan
         t3 = t9 | t1
         [v1 + 0] = t3
         t5 = , unsigned  byte [a3 + 0xa0] // arg4 // s4
         t8 = , unsigned  byte [a3 + 0xa1] // arg4 // s4
         t6 = t5 << 0x18
         t5 = , unsigned  byte [a3 + 0xa2] // arg4 // s4
         t9 = t8 << 0x10
         t3 = t6 | t9
         t9 = , unsigned  byte [a3 + 0xa3] // arg4 // s4
         t7 = t5 << 8
         t8 = t3 | t7
         t4 = t8 | t9
         [v1 + 4] = t4
         v1 = [a2 + 0]            // arg3
         t3 = 0xfb00 << 16
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         [v1 + 0] = t3
         t6 = , unsigned  byte [a3 + 0x3c] // arg4 // s4
         t4 = , unsigned  byte [a3 + 0x3d] // arg4 // s4
         t8 = t6 << 0x18
         t6 = , unsigned  byte [a3 + 0x3e] // arg4 // s4
         t5 = t4 << 0x10
         t3 = t8 | t5
         t5 = , unsigned  byte [a3 + 0x1d] // arg4 // s4
         t9 = t6 << 8
         t4 = t3 | t9
         t7 = t4 | t5             // t9
         [v1 + 4] = t7
         v1 = [a2 + 0]            // arg3
         t3 = 0xde00 << 16
         t9 = 0x8630 << 16
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         [v1 + 0] = t3
         t9 = [t9 + 0x75d8]
         t8 = t9 + 0x7fff
         t8 = [t8 + 0xf21]        // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t8
         // CODE XREF from fcn.8037915c @ +0x20
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80379328: // orphan
         [sp + 0x18] = v1
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4

    loc_0x80379338: // orphan
         [sp + 0x18] = v1
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4

    loc_0x80379370: // orphan
         t7 = 0x5ffe << 16
         t7 |= 0xfe38
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         t6 |= 0x1bff

    loc_0x80379384: // orphan
         [v1 + 0] = t6
         [v1 + 4] = t7
         v1 = [a2 + 0]            // arg3
         at = 0xfa00 << 16
         t8 = v1 + 8
         [a2 + 0] = t8            // arg3
         t1 = , unsigned  byte [a3 + 0x1d] // arg4 // s4
         t9 = t1 << 8
         t4 = t9 | at
         t5 = t4 | t1
         [v1 + 0] = t5
         t4 = , unsigned  byte [a3 + 0xa1] // arg4 // s4
         t7 = , unsigned  byte [a3 + 0xa0] // arg4 // s4
         t9 = , unsigned  byte [a3 + 0xa2] // arg4 // s4
         t5 = t4 << 0x10
         t8 = t7 << 0x18
         t7 = , unsigned  byte [a3 + 0xa3] // arg4 // s4
         t6 = t8 | t5

    loc_0x803793cc: // orphan
         t4 = t9 << 8
         t8 = t6 | t4
         t9 = t8 | t7
         [v1 + 4] = t9
         v1 = [a2 + 0]            // arg3
         t4 = 0xfb00 << 16
         at = 0 - 0x100
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         [v1 + 0] = t4
         t8 = , unsigned  byte [a3 + 0x1d] // arg4 // s4
         t6 = 0xde00 << 16

    loc_0x803793fc: // orphan
         t4 = 0x8630 << 16

    loc_0x80379854: // orphan
         at = 0 + 2
         a0 = 0x87f1 << 16
         bnel t7, at, 0x80379920  // likely
         ra = [sp + 0x14]

    loc_0x80379864: // orphan
         a0 = [a0 + 0x19dc]       // arg1 // t9
         a1 = 2 << 16

    loc_0x8037986c: // orphan
         call 0x8003eb74          // 0x8003eb74(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x24
         t8 = 0x87f1 << 16
         t8 = [t8 + 0x19dc]       // t9
         t0 = 0x8630 << 16
         t0 = , unsigned  byte [t0 + 0x745d] // s4
         t9 = halfword [t8 + 0x64]
         bnel t9, t0, 0x80379920  // likely
         ra = [sp + 0x14]

    loc_0x80379890: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 6
         divu 0, v0, at
         t1 = hi
         bnel t1, 0, 0x80379920   // likely
         ra = [sp + 0x14]

    loc_0x803798ac: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x87f1 << 16
         a0 = [a0 + 0x19dc]       // t9
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x24
         v0 = 0x87f1 << 16
         v0 = [v0 + 0x19dc]       // t9
         t2 = 0x8630 << 16
         t6 = 0x8630 << 16
         t3 = [v0 + 0x20]         // t9
         t6 = , unsigned  byte [t6 + 0x745e] // s4
         t2 = [t2 + 0x75d8]       // t9
         t4 = t3 << 3
         t7 = t6 << 2

    loc_0x803798e8: // orphan
         t5 = t2 + t4
         t8 = t5 + t7
         a3 = [t8 + 0xe0]         // t9
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a0 = v0 + 0x24
         a0 = 0x87f1 << 16
         a0 = [a0 + 0x19dc]       // t9
         a1 = 0x8630 << 16
         a1 = , unsigned  byte [a1 + 0x745f] // s4
         call 0x8003f210          // 0x8003f210(-1, 0xff, -1, -1)
         a0 += 0x24
         ra = [sp + 0x14]

    loc_0x80379920: // orphan
         // CODE XREFS from fcn.80398300 @ 0x8037985c, 0x80379888, 0x803798a4
         sp += 0x18
         ret                      // ra
         

    loc_0x80379998: // orphan
         // CODE XREF from fcn.80398300 @ 0x80379a5c
         t6 = [s3 + 0]
         a1 = fp
         call 0x87f025b8          // 0x87f025b8(-1, 0x178000, 0x8, -1)
         a0 = t6 + s4
         s0 = v0                  // s4
         call 0x8003f1dc          // 0x8003f1dc(0xe70000ff, 0x178000, 0x8, -1)
         a0 = v0 + 0x24
         t0 = 0x8630 << 16
         t0 = , unsigned  byte [t0 + 0x745c] // s4
         t7 = [s3 + 0]

    loc_0x803799c0: // orphan
         t8 = s2 << 3
         t1 = t0 << 2
         t9 = t7 + t8
         t2 = t9 + t1
         s1 = s0 + 0x24
         a0 = s1
         a3 = [t2 + 0xe0]         // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x128, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a1 = 0x8630 << 16
         a1 = , unsigned  byte [a1 + 0x745d] // s4
         call 0x8003f210          // 0x8003f210(0x128, 0xff, -1, -1)
         a0 = s1
         call 0x8003570c          // 0x8003570c(0x128, 0xff, -1, -1)
         
         divu 0, v0, s5
         a1 = hi
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s1
         if                       // likely
         

    loc_0x80379a1c: // orphan
         break 7

    loc_0x80379a20: // orphan
         // CODE XREF from fcn.80398300 @ 0x80379a14
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = s1
         call 0x8003eb74          // 0x8003eb74(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a1 = s6
         a0 = s0 + 0x48
         call 0x87f06430          // 0x87f06430(0x14c, 0x442f71dcfe111002, 0x8, -1)
         a1 = s2
         lwc1 f4, 0x4c, s0
         [s0 + 0x20] = s2
         s2 += 1
         sub.s f6, f4, f22
         swc1 f20, 0x5c, s0
         swc1 f20, 0x58, s0
         swc1 f20, 0x54, s0
         if                       // likely
         swc1 f6, 0x4c, s0

    loc_0x80379a64: // orphan
         ra = [sp + 0x4c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         s5 = [sp + 0x3c]
         s6 = [sp + 0x40]
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret
         sp += 0x50

    loc_0x80379b3c: // orphan
         
         sp -= 0x78
         lwc1 f6, 0x8c, sp
         [sp + 0x80] = a2
         lwc1 f4, 0x80, sp
         sub.s f8, f6, f14
         lwc1 f10, 0x88, sp
         [sp + 0x84] = a3
         sub.s f18, f4, f12
         lwc1 f6, 0x84, sp
         sdc1 f22, 0x10, sp
         sub.s f4, f10, f12
         mul.s f0, f18, f8
         sdc1 f20, 8, sp
         sub.s f10, f6, f14
         mov.s f20, f12
         mov.s f22, f14
         v1 = 0
         mul.s f2, f4, f10
         swc1 f10, 0x3c, sp
         lwc1 f6, 0x94, sp
         swc1 f0, 0x20, sp
         swc1 f4, 0x38, sp
         swc1 f8, 0x34, sp
         c.le.s f2, f0
         swc1 f2, 0x1c, sp
         bc1fl 0x80379c30
         lwc1 f0, 0x20, sp
         sub.s f2, f6, f14
         lwc1 f6, 0x90, sp
         mtc1 0, f16
         sub.s f0, f6, f12
         mul.s f6, f4, f2
         
         mul.s f4, f0, f8
         sub.s f8, f6, f4
         lwc1 f4, 0x98, sp
         lwc1 f6, 0x9c, sp
         c.le.s f16, f8
         
         bc1f 0x80379c2c
         
         sub.s f14, f6, f14
         sub.s f12, f4, f12
         mul.s f8, f0, f14
         
         mul.s f6, f12, f2
         sub.s f4, f8, f6
         c.le.s f16, f4
         
         bc1f 0x80379c2c
         
         mul.s f8, f12, f10
         
         mul.s f6, f18, f14
         sub.s f4, f8, f6
         c.le.s f16, f4
         
         bc1t 0x80379cd4
         
         lwc1 f0, 0x20, sp
         lwc1 f2, 0x1c, sp
         mtc1 0, f16
         lwc1 f8, 0x94, sp
         sub.s f10, f0, f2

    loc_0x80379c40: // orphan
         lwc1 f6, 0x90, sp
         // CODE XREF from loc.82de0e8c @ +0x11f0
         c.le.s f10, f16
         
         bc1fl 0x80379cdc
         ldc1 f20, 8, sp
         sub.s f2, f8, f22
         lwc1 f4, 0x38, sp
         lwc1 f8, 0x34, sp
         sub.s f0, f6, f20
         mul.s f10, f4, f2
         
         mul.s f6, f0, f8

    loc_0x80379d00: // orphan
         v1 = 0
         sub.s f8, f4, f6
         swc1 f8                  // arg4
         lwc1 f16, 4, a1          // arg2
         lwc1 f10, 0x4c, a0       // arg1
         lwc1 f2                  // arg4
         mtc1 at, f8
         sub.s f18, f10, f16
         mul.s f4, f2, f2
         swc1 f18, 4, a3          // arg4
         lwc1 f12, 4, a3          // arg4
         t6 = [sp + 0x28]
         mul.s f6, f12, f12
         add.s f0, f4, f6
         sqrt.s f0, f0
         c.lt.s f0, f8
         swc1 f0
         t7 = [sp + 0x28]
         bc1fl 0x80379da8
         ra = [sp + 0x14]
         mtc1 0, f10
         lwc1 f16
         a0 = a3                  // s2
         c.eq.s f10, f16
         
         bc1f 0x80379d80
         
         t9 = [a2 + 0]            // arg3
         [a3 + 0] = t9            // arg4
         t8 = [a2 + 4]            // arg3
         goto 0x80379d88
         [a3 + 4] = t8            // arg4

    loc_0x80379d88: // orphan
         // CODE XREF from fcn.80398300 @ 0x80379d78
         t0 = [sp + 0x28]
         at = 0x41a8 << 16
         mtc1 at, f18
         lwc1 f4
         v1 = 0 + 1               // lo
         sub.s f6, f18, f4
         swc1 f6
         ra = [sp + 0x14]
         sp += 0x18
         v0 = v1                  // lo
         ret
         

    loc_0x80379f08: // orphan
         mul.s f16, f10, f0
         a0 = sp + 0x24           // arg1
         a3 = sp + 0x30           // arg4
         add.s f18, f8, f16
         swc1 f18, 0x30, sp
         lwc1 f6, 4, t8
         lwc1 f4, 4, a2           // arg3
         [sp + 0x2c] = 0
         mul.s f10, f6, f0
         [sp + 0x14] = t0
         a2 = sp + 0x44           // arg3
         [sp + 0x10] = t9
         add.s f8, f4, f10
         call 0x87d00670          // 0x87d00670(0x178024, 0x442f71dcfe116408, 0x178044, 0x178030)
         swc1 f8, 0x34, sp
         if                       // unlikely
         v1 = [sp + 0x2c]

    loc_0x80379f4c: // orphan
         lwc1 f0, 0x44, sp
         mtc1 0, f2
         at = 0x3f80 << 16
         c.lt.s f2, f0
         
         bc1f 0x80379fc0
         
         mtc1 at, f12
         // CALL XREF from fcn.81d00110 @ +0xdc
         
         c.lt.s f0, f12
         lwc1 f0, 0x40, sp
         bc1f 0x80379fc0
         
         c.lt.s f2, f0
         
         bc1f 0x80379fc0
         
         c.lt.s f0, f12
         a0 = sp + 0x24
         a1 = [sp + 0x58]
         a2 = [sp + 0x60]
         bc1f 0x80379fc0
         t1 = [sp + 0x54]
         t2 = [sp + 0x5c]
         a3 = sp + 0x30
         [sp + 0x10] = t1
         call 0x87d00670          // 0x87d00670(0x178024, 0x0, 0x0, 0x178030)
         [sp + 0x14] = t2
         v1 = 0 + 1               // lo

    loc_0x80379fc0: // orphan
         // CODE XREF from fcn.80398300 @ 0x80379f44
         if                       // likely
         a0 = [sp + 0x48]

    loc_0x80379fc8: // orphan
         t3 = [sp + 0x5c]
         t4 = [sp + 0x60]
         a1 = [sp + 0x58]
         a2 = [sp + 0x50]
         a3 = [sp + 0x54]
         [sp + 0x2c] = v1
         [sp + 0x10] = t3
         call 0x86304b98          // 0x86304b98(-1, 0x0, 0x0, 0x0)
         [sp + 0x14] = t4
         if                       // unlikely
         v1 = [sp + 0x2c]

    loc_0x80379ff4: // orphan
         v1 = 0 + 1               // lo

    loc_0x80379ff8: // orphan
         // CODE XREFS from fcn.80398300 @ 0x80379fc0, 0x80379fec
         ra = [sp + 0x1c]         // t9
         sp += 0x48
         v0 = v1
         ret                      // t9
         

    loc_0x8037a060: // orphan
         at = 0x8000 << 16
         if                       // likely
         

    loc_0x8037a06c: // orphan
         break 6

    loc_0x8037a070: // orphan
         // CODE XREFS from fcn.80398300 @ 0xf8, 0x8037a064
         v1 = lo
         at = 0 + 0xa
         if                       // likely
         a0 = v1 + 1              // arg1

    loc_0x8037a080: // orphan
         a0 = 0

    loc_0x8037a084: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037a078
         div 0, v0, t0
         t8 = hi
         mtc1 t8, f4
         if                       // likely
         

    loc_0x8037a098: // orphan
         break 7

    loc_0x8037a09c: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037a090
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8037a0a8: // orphan
         if                       // likely
         

    loc_0x8037a0b4: // orphan
         // CODE XREFS from fcn.80398300 @ 0x8037a0a0, 0x8037a0a8
         cvt.s.w f6, f4
         at = 0x4040 << 16
         mtc1 at, f8
         at = 0x3f80 << 16
         mtc1 at, f16
         t9 = v1 << 2
         div.s f0, f6, f8
         t2 = t1 + t9
         lwc1 f10
         t3 = a0 << 2             // arg1
         t4 = t1 + t3
         lwc1 f6
         sub.s f18, f16, f0
         mul.s f4, f10, f18
         
         mul.s f8, f6, f0
         goto 0x8037a118
         add.s f2, f8, f4

    loc_0x8037a1d0: // orphan
         sub.s f6, f4, f16
         swc1 f6, 0x14, a1        // arg2
         lwc1 f10, 0x18, v0
         lwc1 f8, 0x44, v0
         mul.s f18, f10, f12
         add.s f4, f8, f18
         swc1 f4, 0x18, a1        // arg2
         lwc1 f6, 0x1c, v0
         lwc1 f16, 0x48, v0
         mul.s f10, f6, f12
         add.s f8, f16, f10
         swc1 f8, 0x1c, a1        // arg2
         lwc1 f18
         lwc1 f4, 0x44, v0
         sub.s f6, f18, f4
         swc1 f6                  // arg3
         lwc1 f16, 4, s0
         lwc1 f10, 0x48, v0
         sub.s f8, f16, f10
         swc1 f8, 4, a2           // arg3
         s0 = [sp + 4]
         ret                      // ra
         sp += 8

    loc_0x8037a410: // orphan
         add.s f10, f0, f0
         sub.s f8, f10, f4
         mtc1 at, f4
         sub.s f6, f18, f8
         swc1 f6, 0x40, sp
         t8 = [a0 + 0x7c]         // arg1 // t9

    loc_0x8037a428: // orphan
         t9 = [a0 + 0x78]         // arg1
         t0 = [a0 + 4]            // arg1
         lwc1 f10, 4, t8
         lwc1 f6, 4, t9
         mul.s f8, f10, f4
         lwc1 f4, 0x4c, t0
         add.s f2, f6, f8
         lwc1 f8, 0x4c, sp
         add.s f10, f2, f2
         sub.s f6, f10, f4
         sub.s f10, f8, f6

    loc_0x8037a454: // orphan
         goto 0x8037a480
         swc1 f10, 0x44, sp

    loc_0x8037a45c: // orphan
         // CODE XREF from pc @ +0x490
         t1 = [a2 + 4]            // arg3
         lwc1 f6, 0x4c, sp
         lwc1 f4, 0x48, t1
         sub.s f8, f18, f4

    loc_0x8037a46c: // orphan
         swc1 f8, 0x40, sp
         t2 = [a2 + 4]            // arg3

    loc_0x8037a474: // orphan
         lwc1 f10, 0x4c, t2
         sub.s f4, f6, f10
         swc1 f4, 0x44, sp

    loc_0x8037a480: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037a454
         a0 = sp + 0x40           // arg1
         a1 = sp + 0x44           // arg2
         [sp + 0x50] = a2
         call 0x87d0059c          // 0x87d0059c(0x178040, 0x178044, 0x8, -1)
         swc1 f16, 0x3c, sp
         at = 0x3f80 << 16
         t3 = 0x8630 << 16
         lwc1 f16, 0x3c, sp
         t3 = [t3 + 0x75d8]       // t9
         mtc1 at, f8
         at = 1 << 16
         at += t3
         add.s f16, f16, f8
         lwc1 f0, -0x70cc, at
         a2 = [sp + 0x50]
         lwc1 f6, 0x40, sp
         c.lt.s f0, f16
         
         bc1f 0x8037a4d4
         
         mov.s f16, f0
         mul.s f10, f6, f16
         at = 0x8630 << 16
         lwc1 f0, 0x7578, at
         t4 = [a2 + 0xc]          // t9
         at = 0x8630 << 16
         lwc1 f2, 0x757c, at
         swc1 f10, 0x10, t4
         lwc1 f4, 0x44, sp
         t5 = [a2 + 0xc]          // t9
         mul.s f8, f4, f16
         swc1 f8, 0x14, t5
         t6 = [a2 + 4]
         v0 = [a2 + 8]            // t9
         lwc1 f10, 0x48, t6
         lwc1 f6, 0x28, v0
         lwc1 f8, 0x20, v0
         sub.s f4, f6, f10
         add.s f6, f4, f8
         swc1 f6, 0x10, s0
         t7 = [a2 + 4]
         v0 = [a2 + 8]            // t9
         lwc1 f4, 0x4c, t7
         lwc1 f10, 0x2c, v0
         lwc1 f6, 0x24, v0
         sub.s f8, f10, f4
         lwc1 f4, 0x10, s0
         add.s f10, f8, f6
         div.s f8, f4, f0
         swc1 f10, 0x14, s0
         lwc1 f10, 0x14, s0
         div.s f4, f10, f0
         mul.s f6, f8, f2
         swc1 f6, 0x10, s0
         mul.s f8, f4, f2
         swc1 f8, 0x14, s0
         v1 = [a2 + 4]
         t8 = [v1 + 0xc]          // t9
         t9 = t8 << 1
         bgezl t9, 0x8037a5d0     // likely
         at = 0x3f00 << 16

    loc_0x8037a574: // orphan
         v0 = [v1 + 0x1c]         // t9
         at = , v0 < 3
         if                       // unlikely
         at = , v0 < 0x18

    loc_0x8037a584: // orphan
         if                       // unlikely
         at = 0x4000 << 16

    loc_0x8037a5cc: // orphan
         // CODE XREFS from fcn.80398300 @ 0x8037a57c, 0x8037a584
         at = 0x3f00 << 16

    loc_0x8037a5d0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037a56c
         mtc1 at, f4
         lwc1 f10, 0x18, s0
         at = 0xfdff << 16
         at |= 0xffff
         mul.s f8, f10, f4
         swc1 f8, 0x18, s0
         v0 = [a2 + 0xc]          // t9
         t5 = [v0 + 0xc]          // t9
         t6 = t5 & at
         [v0 + 0xc] = t6
         v0 = [a2 + 0xc]          // t9
         at = 0xfeff << 16
         at |= 0xffff
         t7 = [v0 + 0xc]
         t8 = t7 & at
         [v0 + 0xc] = t8

    loc_0x8037a610: // orphan
         // CODE XREF from fcn.80374110 @ 0x8037a5c4
         a0 = [a2 + 8]            // t9
         call 0x863007b8          // 0x863007b8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x50] = a2
         t9 = [sp + 0x54]
         a2 = [sp + 0x50]
         t1 = 0x8630 << 16
         if                       // unlikely
         a0 = a2

    loc_0x8037a630: // orphan
         t0 = [a2 + 0]
         byte [s0 + 0x21] = t0

    loc_0x8037a638: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037a628
         t1 = [t1 + 0x75d8]       // t9
         at = 0 + 4
         t2 = [t1 + 0]
         bnel t2, at, 0x8037a658  // likely
         ra = [sp + 0x1c]         // t9

    loc_0x8037acd8: // orphan
         
         mul.s f6, f18, f4
         add.s f8, f16, f6
         swc1 f8, 0x88, s0
         t7 = [t7 + 0x75d8]       // t9
         v0 = [t7 + 0xdc0]        // t9
         if                       // unlikely
         [s0 + 0xc] = v0

    loc_0x8037acf8: // orphan
         lwc1 f10, 0x48, v0
         a0 = s0
         swc1 f10, 0x10, s0
         lwc1 f18, 0x4c, v0
         call 0x86305448          // 0x86305448(0x104, 0x442f71dcfe116408, 0x8, -1)
         swc1 f18, 0x14, s0
         if                       // unlikely
         

    loc_0x8037ad18: // orphan
         call 0x86305694          // 0x86305694(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0

    loc_0x8037ad20: // orphan
         call 0x86305840          // 0x86305840(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         t9 = [s0 + 0xc]
         v0 = [t9 + 4]
         if                       // unlikely
         [s0 + 0xc] = v0

    loc_0x8037ad38: // orphan
         v1 = [s0 + 8]            // t9

    loc_0x8037ad3c: // orphan
         lwc1 f4, 0x18, s0
         swc1 f4, 0x44, v1
         t1 = [s0 + 8]            // t9
         lwc1 f16, 0x1c, s0
         swc1 f16, 0x48, t1
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x30
         ret
         

    loc_0x8037ad88: // orphan
         t8 = [sp + 0x28]
         t9 = [t8 + 0x20]
         [sp + 0x2c] = t9
         t0 = [t9 + 0x40]
         beql t0, 0, 0x8037adac   // unlikely
         v0 = [sp + 0x24]

    loc_0x8037ada0: // orphan
         call 0x86305a04          // 0x86305a04(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         v0 = [sp + 0x24]

    loc_0x8037adac: // orphan
         t1 = [sp + 0x28]
         v0 += 1
         at = , v0 < 4

    loc_0x8037adb8: // orphan
         t2 = t1 + 0x18c
         [sp + 0x28] = t2
         if                       // likely
         [sp + 0x24] = v0

    loc_0x8037adc8: // orphan
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]         // v1
         sp += 0xb0
         ret                      // t9
         

    loc_0x8037ae34: // orphan
         ret                      // ra
         swc1 f4, 0x4c, a0        // arg1

    loc_0x8037aff0: // orphan
         div.s f18, f12, f0
         swc1 f10, 0x10, a0       // arg1
         swc1 f18, 0x14, a0       // arg1
         t6 = [t6 + 0x75d8]       // t9
         at += t6
         lwc1 f16, -0x70cc, at
         c.lt.s f16, f14
         
         bc1fl 0x8037b020
         lwc1 f6, 0x10, a0        // arg1
         mov.s f14, f16
         lwc1 f6, 0x10, a0        // arg1
         lwc1 f10, 0x14, a0       // arg1

    loc_0x8037b0c8: // orphan
         lwc1 f4, 0x48, v0
         t6 = 0x8630 << 16
         lwc1 f6
         t6 = [t6 + 0x72b4]       // t9
         s0 = 0x8630 << 16
         sub.s f8, f4, f6
         s1 = a0                  // t9
         fp = 0 + 1               // lo
         s0 += 0x7254

    loc_0x8037b0ec: // orphan
         swc1 f8, 0x94, sp
         lwc1 f10, 0x4c, v0
         lwc1 f16, 4, v1
         s2 = 0
         s5 = sp + 0x74
         sub.s f18, f10, f16
         s6 = sp + 0x58
         s7 = sp + 0x5c
         if                       // likely
         swc1 f18, 0x98, sp

    loc_0x8037b114: // orphan
         s3 = 0x8630 << 16
         s3 += 0x71f0

    loc_0x8037b11c: // orphan
         s4 = sp + 0x94
         t7 = , unsigned  byte [s0 + 8] // s4

    loc_0x8037b124: // orphan
         t9 = , unsigned  byte [s0 + 9] // s4
         a0 = s1
         t8 = t7 << 3
         t0 = t9 << 3

    loc_0x8037b134: // orphan
         a2 = s3 + t8             // arg3
         v0 = s3 + t0
         lwc1 f4
         lwc1 f6                  // arg3
         a1 = s4
         a3 = s5                  // t9
         sub.s f8, f4, f6
         swc1 f8, 0x74, sp
         lwc1 f16, 4, a2          // arg3
         lwc1 f10, 4, v0
         [sp + 0x18] = s7
         [sp + 0x14] = s6
         sub.s f18, f10, f16
         [sp + 0x10] = s0
         call 0x86304ca8          // 0x86304ca8(-1, 0xff, 0x1fffffffe, -1)
         swc1 f18, 0x78, sp
         if                       // unlikely
         a0 = s1

    loc_0x8037b17c: // orphan
         a1 = s0

    loc_0x8037b180: // orphan
         a2 = [sp + 0x5c]
         call 0x86305c48          // 0x86305c48(-1, 0x442f71dcfe116408, 0x0, -1)
         fp = 0
         a0 = s1
         call 0x86305c78          // 0x86305c78(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x0, -1)
         a1 = s0
         call 0x86305d88          // 0x86305d88(0x442f71dcfe117dbd, 0x104, 0x0, -1)
         a0 = s1
         call 0x86305e20          // 0x86305e20(0x442f71dcfe117dbd, 0x104, 0x0, -1)
         a0 = s1

    loc_0x8037b1a8: // orphan
         t1 = 0x8630 << 16
         t1 = [t1 + 0x72b4]       // t9
         s2 += 1
         s0 += 0xc
         at = , s2 < t1           // lo
         bnel at, 0, 0x8037b124   // likely
         t7 = , unsigned  byte [s0 + 8] // s4

    loc_0x8037b1c4: // orphan
         ra = [sp + 0x4c]
         v0 = fp
         fp = [sp + 0x48]
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]         // t9
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         s5 = [sp + 0x3c]
         s6 = [sp + 0x40]
         s7 = [sp + 0x44]
         ret
         sp += 0xa0

    loc_0x8037b2dc: // orphan
         s6 = [sp + 0x34]
         s7 = [sp + 0x38]
         ret                      // ra
         sp += 0x68

    loc_0x8037b380: // orphan
         at = 0x8009 << 16
         at += v1
         lwc1 f4, -0x71b0, at
         at = 0x8008 << 16
         at += v1
         // CODE XREF from fcn.80371f1c @ +0x3dc
         swc1 f4, 0x10, v0
         t9 = [a3 + 0]            // arg4
         lwc1 f6, 0x7e50, at
         mtc1 0, f8
         at = 0xefff << 16
         swc1 f6, 0x14, t9
         t2 = [a3 + 0]            // arg4 // t9
         at |= 0xffff
         a2 = sp + 0x2c           // arg3
         swc1 f8, 0x18, t2
         v0 = [a3 + 0]            // arg4 // t9
         lwc1 f10, 0x10, v0
         mul.s f16, f10, f0
         swc1 f16, 0x10, v0
         v0 = [a3 + 0]            // arg4 // t9
         lwc1 f18, 0x14, v0
         mul.s f4, f18, f0
         swc1 f4, 0x14, v0
         v0 = [a3 + 0]            // arg4 // t9
         t3 = [v0 + 0xc]
         t4 = t3 & at
         [v0 + 0xc] = t4
         a1 = [a3 + 0]            // arg4 // t9
         a0 = [t1 + 0]
         at = 0 | 0x8f5c
         a1 += 0x48               // arg2
         call 0x87c03b60          // 0x87c03b60(0xecffffff, 0x100000047, 0x17802c, -1)
         a0 += at
         a0 = 0 + 0x6f06
         call 0x800277f0          // 0x800277f0(0x6f06, 0x100000047, 0x17802c, -1)
         a1 = sp + 0x2c
         goto 0x8037b5d4          // fcn.8037b56c+0x68
         ra = [sp + 0x14]

    loc_0x8037b724: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398230
         at = 0 + 2
         if                       // unlikely
         t9 = 0xffaa << 16

    loc_0x8037b730: // orphan
         at = 0 + 3
         if                       // unlikely
         // CODE XREF from fcn.80397d7c @ +0x4b8
         t0 = 0 - 0x5600

    loc_0x8037b73c: // orphan
         t6 = 0 - 0x100
         goto 0x8037b76c
         [v0 + 0xc4] = t6

    loc_0x8037b75c: // orphan
         t9 |= 0xaa00
         goto 0x8037b76c
         [v0 + 0xc4] = t9

    loc_0x8037b768: // orphan
         [v0 + 0xc4] = t0

    loc_0x8037b76c: // orphan
         // CODE XREF from fcn.80374110 @ 0x8037b700
         // CODE XREF from fcn.80398300 @ 0x8037b740
         // CODE XREFS from fcn.80374110 @ 0x8037b748, 0x8037b754
         // CODE XREF from fcn.80398300 @ 0x8037b760
         v0 = [a1 + 0]            // arg2 // t9
         v1 = [v0 + 0x1c]         // t9
         at = , v1 < 0x3d
         bnel at, 0, 0x8037b7a4   // unlikely
         mtc1 v1, f6

    loc_0x8037b780: // orphan
         t1 = [v0 + 0xc]          // t9
         at = 0xfdff << 16
         at |= 0xffff
         // CODE XREF from fcn.80398300 @ 0x80398238
         t2 = t1 & at
         [v0 + 0xc] = t2
         t3 = [a1 + 0]            // arg2 // t9
         ret                      // ra
         byte [t3 + 0xc7] = 0

    loc_0x8037b7a0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039823c
         mtc1 v1, f6

    loc_0x8037b7a4: // orphan
         at = 0x437f << 16
         mtc1 at, f0
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f10
         t5 = 0 + 1               // lo

    loc_0x8037b898: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398254
         swc1 f8, 8, a0           // arg1
         t7 = [v0 + 0]
         lwc1 f10, 0x4c, t7
         sub.s f18, f10, f16
         ret                      // ra
         swc1 f18, 0xc, a0        // arg1

    loc_0x8037ba34: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398260
         swc1 f14, 0x38, sp
         a0 = a3 + 0x10           // arg4
         call 0x87d0059c          // 0x87d0059c(0xf, 0x442f71dcfe116408, 0x8, -1)
         a1 = a3 + 0x14
         a3 = [s1 + 0]            // t9
         // CODE XREF from fcn.80397d7c @ +0x4e8
         lwc1 f14, 0x38, sp
         at = 0x8630 << 16
         lwc1 f18, 0x10, a3
         mul.s f4, f18, f14
         swc1 f4, 0x10, a3
         a3 = [s1 + 0]            // t9
         lwc1 f6, 0x14, a3
         mul.s f8, f6, f14
         swc1 f8, 0x14, a3
         // CODE XREF from fcn.80398300 @ 0x80398268
         a3 = [s1 + 0]            // t9
         lwc1 f16, 0x14, s0
         lwc1 f4, 0x10, s0
         lwc1 f10, 0x10, a3
         lwc1 f6, 0x14, a3

    loc_0x8037ba80: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039826c
         t8 = halfword [a3 + 0x46]
         mul.s f18, f10, f16
         lwc1 f16, 0x75a8, at
         mul.s f8, f4, f6
         mtc1 t8, f6
         sub.s f10, f18, f8
         cvt.s.w f18, f6
         mul.s f4, f10, f16
         add.s f8, f18, f4
         trunc.w.s f10, f8
         mfc1 t0, f10
         
         halfword [a3 + 0x46] = t0
         a3 = [s1 + 0]            // t9
         lwc1 f6, 0x30, sp
         lwc1 f16, 0x10, a3
         lwc1 f4, 0x48, a3
         add.s f18, f16, f6
         add.s f8, f4, f18
         swc1 f8, 0x48, a3
         a3 = [s1 + 0]            // t9
         lwc1 f16, 0x34, sp
         lwc1 f10, 0x14, a3
         lwc1 f4, 0x4c, a3
         add.s f6, f10, f16
         add.s f18, f4, f6
         swc1 f18, 0x4c, a3
         call 0x863060cc          // 0x863060cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s1 + 0]            // t9
         // CODE XREF from fcn.80397d7c @ +0x4f4
         a3 = [s1 + 0]            // t9
         at = 0xc37a << 16
         t1 = [a3 + 0xc]
         t2 = t1 << 1
         bgezl t2, 0x8037bbd0     // likely
         mtc1 at, f2

    loc_0x8037bb0c: // orphan
         v0 = , unsigned  byte [a3 + 0x41] // s4
         a0 = 0x87f1 << 16
         at = , v0 < 0x11
         // CODE XREF from fcn.80398300 @ 0x80398274
         if                       // unlikely
         t3 = v0 - 0x10

    loc_0x8037bb20: // orphan
         goto 0x8037bb2c
         byte [a3 + 0x41] = t3

    loc_0x8037bb28: // orphan
         byte [a3 + 0x41] = 0
         // CODE XREF from fcn.80398300 @ 0x8037bb20
         a3 = [s1 + 0]            // t9
         at = 0xc3af << 16
         mtc1 at, f2
         lwc1 f0, 0x48, a3

    loc_0x8037bb3c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398278
         at = 0x43af << 16
         a1 = a3                  // s2
         c.lt.s f0, f2
         
         bc1t 0x8037bb9c
         
         mtc1 at, f12
         
         c.lt.s f12, f0
         // CODE XREF from fcn.80397d7c @ +0x500
         
         bc1t 0x8037bb9c

    loc_0x8037bb68: // orphan
         
         lwc1 f0, 0x4c, a3
         c.lt.s f0, f2
         
         bc1t 0x8037bb9c
         
         c.lt.s f12, f0
         // CODE XREF from fcn.80398300 @ 0x80398280
         
         bc1t 0x8037bb9c
         
         t4 = , unsigned  byte [a3 + 0x41]
         if                       // unlikely
         

    loc_0x8037bbd0: // orphan
         lwc1 f0, 0x48, a3
         at = 0x437a << 16
         c.lt.s f0, f2
         
         bc1t 0x8037bc24
         
         mtc1 at, f12
         
         // CODE XREF from fcn.80397d7c @ +0x510
         c.lt.s f12, f0
         
         bc1t 0x8037bc24
         
         lwc1 f0, 0x4c, a3
         c.lt.s f0, f2
         
         bc1t 0x8037bc24
         
         c.lt.s f12, f0
         
         bc1f 0x8037bc84
         
         call 0x863001bc          // 0x863001bc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a3 = [s1 + 0]            // t9
         mtc1 0, f0

    loc_0x8037bc34: // orphan
         at = 0x4000 << 16
         t8 = [a3 + 0xc]
         a0 = 0x8630 << 16
         a2 = sp + 0x2c
         // CODE XREF from fcn.80397d7c @ +0x514
         t9 = t8 | at
         [a3 + 0xc] = t9
         swc1 f0, 0x10, s0
         swc1 f0, 0x14, s0
         a1 = [s1 + 0]            // t9
         // CODE XREF from fcn.80397d7c @ +0x518
         a0 = [a0 + 0x75d8]       // t9
         at = 0 | 0x8f5c
         a1 += 0x48
         call 0x87c03b60          // 0x87c03b60(-1, 0x100000047, 0x17802c, -1)
         a0 += at
         a0 = 0 + 0x6f05
         call 0x800277f0          // 0x800277f0(0x6f05, 0x100000047, 0x17802c, -1)
         a1 = sp + 0x2c
         a0 = 0 + 0x6f0b
         // CODE XREF from fcn.80397d7c @ +0x51c
         call 0x800277f0          // 0x800277f0(0x6f0b, 0x17802c, 0x17802c, -1)
         a1 = sp + 0x2c
         call 0x863063c0          // 0x863063c0(0x6f0b, 0x17802c, 0x17802c, -1)
         a0 = s0
         t0 = 0x8630 << 16
         // CODE XREF from fcn.80397d7c @ +0x520
         t0 = [t0 + 0x75d8]       // t9
         at = 0 + 5
         a1 = s0
         t1 = [t0 + 0]
         if                       // likely
         

    loc_0x8037bca8: // orphan
         a3 = [s1 + 0]            // t9
         at = 0x2000 << 16
         t2 = [a3 + 0xc]
         t3 = t2 | at
         [a3 + 0xc] = t3

    loc_0x8037bcbc: // orphan
         call 0x86306690          // 0x86306690(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s1 + 0]            // t9
         call 0x8630665c          // 0x8630665c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         ret                      // t9
         sp += 0x40

    loc_0x8037c338: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398304
         swc1 f0
         
         scd 0
         synci -0x1000, t8
         swc1 f0

    loc_0x8037c34c: // orphan
         // CODE XREF from fcn.803b00ac @ 0x80398308
         
         sdc1 f8, 0x800, t3

    loc_0x8037c384: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398310
         
         s0 = halfword [s1 + 0x70c0]
         if                       // unlikely
         a0 = s0 + 0              // arg1

    loc_0x8037c390: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398310
         
         s0 = halfword [s1 + 0x70c0]
         if                       // unlikely
         a0 = s0 + 0              // arg1

    loc_0x8037c394: // orphan
         
         goto 0x80000000
         s0 = halfword [s1 + 0x4f0]

    loc_0x8037c3d0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039831c
         lwc1 f26
         lwc1 f26
         lwc1 f26
         mfhc1 k0, f0
         

    loc_0x8037c3e4: // orphan
         // CODE XREF from fcn.803b00ac @ 0x80398320
         
         mfhc1 k0, f0
         lwc1 f26
         lwc1 f26
         lwc1 f26

    loc_0x8037c3f8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398324
         
         
         mfhc1 k0, f0
         mfhc1 k0, f0
         mfhc1 k0, f0
         lwc1 f26
         
         
         lwc1 f26

    loc_0x8037c41c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398328
         mfhc1 k0, f0
         mfhc1 k0, f0
         mfhc1 k0, f0
         
         
         lwc1 f26
         lwc1 f26
         lwc1 f26
         mfhc1 k0, f0
         
         
         mfhc1 k0, f0
         lwc1 f26

    loc_0x8037c450: // orphan
         // CODE XREF from fcn.803b00ac @ 0x8039832c
         lwc1 f26
         lwc1 f26
         
         
         mfhc1 k0, f0
         mfhc1 k0, f0
         mfhc1 k0, f0
         lwc1 f26
         syscall                  // 255 = unknown ()

    loc_0x8037c474: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398330
         
         
                                  // lo
         
         

    loc_0x8037c4b8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398334
         goto fcn.80180000        // fcn.80180000(-1)
         

    loc_0x8037c524: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398340
         
         
         
         cache 0x15, 0x4f3, t9
         cache 0x15, 0x4f3, t9

    loc_0x8037c5c0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039834c
         
         

    loc_0x8037c870: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039837c
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c87c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c888: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c894: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c8a0: // orphan
         if                       // fcn.803742ac+0x9178 // unlikely
         if                       // unlikely

    loc_0x8037c8ac: // orphan
         if                       // fcn.803742ac+0x9224 // unlikely
         if                       // unlikely

    loc_0x8037c8b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c8c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c8d0: // orphan
         if                       // fcn.803747c4+0x9110 // unlikely
         if                       // unlikely

    loc_0x8037c8dc: // orphan
         if                       // fcn.803742ac+0x98b4 // unlikely
         if                       // fcn.803742ac+0x9928 // unlikely

    loc_0x8037c8e8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398384
         
         
         
         
         
         if                       // fcn.803b00ac-0x3218c // unlikely
         if                       // unlikely

    loc_0x8037c908: // orphan
         if                       // unlikely
         if                       // fcn.803742ac+0x9e84 // unlikely

    loc_0x8037c914: // orphan
         if                       // fcn.803742ac+0x9dac // unlikely
         if                       // unlikely

    loc_0x8037c920: // orphan
         if                       // unlikely
         if                       // fcn.803742ac+0x9eac // unlikely

    loc_0x8037c92c: // orphan
         if                       // fcn.8037e1c0+0x50 // unlikely
         if                       // fcn.8037e1c0+0x64 // unlikely

    loc_0x8037c938: // orphan
         
         
         
         if                       // fcn.803b00ac-0x31b24 // unlikely
         if                       // unlikely

    loc_0x8037c950: // orphan
         if                       // unlikely
         

    loc_0x8037c958: // orphan
         
         
         

    loc_0x8037cbd8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398394
         if                       // fcn.80383e3c+0xb0 // unlikely
         if                       // unlikely

    loc_0x8037cbe4: // orphan
         if                       // unlikely
         

    loc_0x8037cbec: // orphan
         if                       // fcn.80384190+0x70 // unlikely
         if                       // fcn.80384218+0x2c // unlikely

    loc_0x8037cbf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cc04: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cc24: // orphan
         if                       // fcn.80384860+0x28 // unlikely
         

    loc_0x8037cc2c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cc54: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cc84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cc90: // orphan
         
         
         
         
         
         
         
         
         
         
         

    loc_0x8037ccbc: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398398
         
         
         

    loc_0x8037cea4: // orphan
         // CODE XREF from fcn.80398300 @ 0x803983d0
         if                       // unlikely
         

    loc_0x8037cf2c: // orphan
         // CODE XREF from fcn.80398300 @ 0x803983c8
         

    loc_0x8037d0c4: // orphan
         // CODE XREF from fcn.80398300 @ 0x803983e0
         if                       // fcn.8038aba0+0x218 // unlikely
         if                       // unlikely

    loc_0x8037d0d0: // orphan
         

    loc_0x8037d0d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d0e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d0ec: // orphan
         // CODE XREF from fcn.80398300 @ 0x803983f8
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d0f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x803983e8
         if                       // fcn.8038b000 // unlikely

    loc_0x8037d104: // orphan
         if                       // fcn.8038b040+0x8 // unlikely
         

    loc_0x8037d10c: // orphan
         if                       // fcn.8038b0c0+0x60 // unlikely
         if                       // fcn.8038b0c0+0xa4 // unlikely

    loc_0x8037d118: // orphan
         if                       // fcn.8038b0c0+0x10c // unlikely
         if                       // fcn.8038b0c0+0x130 // unlikely

    loc_0x8037d124: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d130: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d140: // orphan
         // CODE XREF from fcn.80398300 @ 0x803983ec
         if                       // unlikely
         

    loc_0x8037d148: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d154: // orphan
         if                       // fcn.8038b470+0x38 // unlikely
         // CODE XREF from fcn.80398300 @ 0x803983f4
         

    loc_0x8037d15c: // orphan
         if                       // unlikely
         if                       // fcn.80387b74+0x39a0 // unlikely

    loc_0x8037d228: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398404
         
         

    loc_0x8037d230: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8037d254: // orphan
         if                       // unlikely
         

    loc_0x8037d25c: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d278: // orphan
         

    loc_0x8037d27c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d28c: // orphan
         if                       // unlikely
         

    loc_0x8037d294: // orphan
         
         if                       // fcn.8038c590+0x1c // unlikely
         if                       // fcn.8038c590+0xb0 // unlikely

    loc_0x8037d2a4: // orphan
         if                       // fcn.8038c590+0x18 // unlikely
         if                       // unlikely

    loc_0x8037d2b0: // orphan
         
         if                       // fcn.8038c590+0x1b8 // unlikely
         if                       // fcn.8038c590+0x26c // unlikely

    loc_0x8037d2c0: // orphan
         if                       // fcn.8038c590+0x1b4 // unlikely
         if                       // fcn.8038c590+0x198 // unlikely

    loc_0x8037d2cc: // orphan
         
         if                       // fcn.8038c590+0x364 // unlikely
         if                       // unlikely

    loc_0x8037d2dc: // orphan
         if                       // fcn.8038c590+0x360 // unlikely
         if                       // fcn.8038c81c+0xb8 // unlikely

    loc_0x8037d2e4: // orphan
         if                       // fcn.8038c590+0x358 // unlikely
         

    loc_0x8037d2e8: // orphan
         

    loc_0x8037d2ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d2f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d304: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d31c: // orphan
         if                       // unlikely
         

    loc_0x8037d324: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d330: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.803747c4+0x18ddc // unlikely
         if                       // unlikely

    loc_0x8037d368: // orphan
         
         
         
         

    loc_0x8037d378: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398414
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.803b00ac @ 0x80398418
         if                       // unlikely

    loc_0x8037d38c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398414
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.803b00ac @ 0x80398418
         if                       // unlikely

    loc_0x8037d394: // orphan
         
         
         
         // CODE XREF from fcn.80398300 @ 0x8039841c
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d3b4: // orphan
         if                       // unlikely
         

    loc_0x8037d3bc: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x80398420
         if                       // unlikely

    loc_0x8037d3c4: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x80398420
         if                       // unlikely

    loc_0x8037d3cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d3d8: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d3fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d408: // orphan
         if                       // unlikely
         

    loc_0x8037d410: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d438: // orphan
         if                       // unlikely
         

    loc_0x8037d654: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x80398428
         if                       // unlikely

    loc_0x8037d664: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d670: // orphan
         if                       // fcn.803747c4+0x20730 // unlikely
         if                       // unlikely

    loc_0x8037d67c: // orphan
         

    loc_0x8037d680: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039842c
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d694: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d6f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d704: // orphan
         if                       // unlikely
         

    loc_0x8037d70c: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d72c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d738: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d744: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x80398434
         

    loc_0x8037d74c: // orphan
         
         
         
         

    loc_0x8037d75c: // orphan
         
         if                       // unlikely
         

    loc_0x8037d768: // orphan
         

    loc_0x8037d76c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398438
         if                       // fcn.803747c4+0x22c6c // unlikely
         if                       // unlikely

    loc_0x8037d770: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398438
         if                       // fcn.803747c4+0x22c6c // unlikely
         if                       // unlikely

    loc_0x8037d778: // orphan
         if                       // fcn.803747c4+0x22ce8 // unlikely
         if                       // unlikely

    loc_0x8037d77c: // orphan
         if                       // fcn.803747c4+0x22ce8 // unlikely
         if                       // unlikely

    loc_0x8037d784: // orphan
         if                       // fcn.803747c4+0x23074 // unlikely
         if                       // unlikely

    loc_0x8037d790: // orphan
         

    loc_0x8037d794: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398440
         
         
         if                       // fcn.803747c4+0x235ec // unlikely
         if                       // unlikely

    loc_0x8037d7a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d7b4: // orphan
         if                       // unlikely
         

    loc_0x8037d7bc: // orphan
         
         
         if                       // fcn.803747c4+0x23994 // unlikely
         if                       // unlikely

    loc_0x8037d7d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d7dc: // orphan
         
         if                       // unlikely
         

    loc_0x8037d7e8: // orphan
         
         if                       // fcn.803747c4+0x23bec // unlikely
         if                       // unlikely

    loc_0x8037d7f8: // orphan
         if                       // fcn.803b00ac-0x17b80 // unlikely
         if                       // unlikely

    loc_0x8037d804: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d81c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d828: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80398300 @ 0x8039844c
         if                       // unlikely

    loc_0x8037d838: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d844: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398450
         if                       // unlikely
         

    loc_0x8037d84c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d85c: // orphan
         
         if                       // fcn.803747c4+0x249f0 // unlikely
         if                       // unlikely

    loc_0x8037d86c: // orphan
         
         

    loc_0x8037d908: // orphan
         s0 -= 0x6978
         s3 -= 0x6998

    loc_0x8037d910: // orphan
         s1 = 0

    loc_0x8037d914: // orphan
         t6 = , unsigned  byte [s0 + 0]
         t8 = , unsigned  byte [s0 + 1]
         s2 = s0 + 0xc
         t7 = t6 << 3
         t9 = t8 << 3
         a1 = t7 + s3
         a2 = t9 + s3
         // CODE XREF from fcn.80398300 @ 0x8039845c
         lwc1 f4
         lwc1 f6
         a0 = s2
         sub.s f8, f4, f6
         swc1 f8, 4, s0

    loc_0x8037d944: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398460
         lwc1 f16, 4, a1          // arg2
         lwc1 f10, 4, a2          // arg3
         sub.s f18, f10, f16
         call 0x87d00648          // 0x87d00648(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f18, 8, s0
         a0 = s2
         call 0x87d0059c          // "&1" // 0x87d0059c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 0x10
         s1 += 1
         at = , s1 < 4
         if                       // unlikely
         s0 += 0x18

    loc_0x8037d974: // orphan
         s0 = 0x8641 << 16
         s0 -= 0x6918
         s1 = 0
         s2 = 0 + 4

    loc_0x8037da58: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398474
         ra = [sp + 0x1c]         // t9
         mtc1 at, f10
         lwc1 f16, 0x3c, sp
         lwc1 f18, 0x2c, sp
         c.le.s f0, f10
         
         bc1fl 0x8037da90
         ra = [sp + 0x1c]         // t9
         sub.s f4, f16, f18
         t9 = [sp + 0x4c]
         t0 = 0 + 1               // lo
         swc1 f4
         [sp + 0x28] = t0
         ra = [sp + 0x1c]         // t9
         v0 = [sp + 0x28]         // lo
         sp += 0x38
         ret                      // t9
         

    loc_0x8037df34: // orphan
         t2 = 0 + 0x82

    loc_0x8037df38: // orphan
         // CODE XREFS from fcn.803b00ac @ 0x8037dee0, 0x8037def8, 0x8037df10, 0x8037df28
         v1 = [a2 + 0]            // arg3
         t6 = 0xe700 << 16
         t4 = t0 << 0x18
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         [v1 + 4] = 0
         [v1 + 0] = t6
         a3 = [a2 + 0]            // arg3
         t5 = t1 & 0xff
         t6 = t5 << 0x10

    loc_0x8037df60: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803984bc
         t7 = a3 + 8              // arg4
         [a2 + 0] = t7            // arg3
         t7 = t4 | t6             // s2
         t6 = 0 + 1               // lo
         cfc1 t4, 31
         ctc1 t6, 31
         t8 = 0xfb00 << 16
         [a3 + 0] = t8            // arg4
         cvt.w.s f6, f2
         t8 = t2 & 0xff           // s4
         t9 = t8 << 8
         t5 = t7 | t9             // s2
         cfc1 t6, 31
         
         t6 &= 0x78
         beql t6, 0, 0x8037dfec   // fcn.803742ac+0x9d40 // likely
         mfc1 t6, f6

    loc_0x8037dfa4: // orphan
         mtc1 at, f6
         t6 = 0 + 1               // lo
         sub.s f6, f2, f6
         ctc1 t6, 31
         
         cvt.w.s f6, f6
         cfc1 t6, 31
         
         // CODE XREF from fcn.8039843c @ +0x84
         t6 &= 0x78
         if                       // fcn.803742ac+0x9d34 // unlikely
         

    loc_0x8037dfd0: // orphan
         mfc1 t6, f6
         at = 0x8000 << 16
         // CODE XREF from fcn.803b00ac @ 0x803984c4
         goto 0x8037dff8          // fcn.803742ac+0x9d4c
         t6 |= at

    loc_0x8037e09c: // orphan
         t7 = t6 + 0x30
         [sp + 0x10] = t7
         a2 = t6 + 0x24
         a3 = t6 + 0x1e
         call 0x87f05fb0          // 0x87f05fb0(-1, 0x442f71dcfe116408, 0xffffffffffff8ac5, 0xffffffffffff8abf)
         a1 += 0x64
         ra = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // t9
         

    loc_0x8037e5dc: // orphan
         mtc1 at, f16
         at = 0x3f00 << 16
         mtc1 at, f4
         div.s f10, f6, f8
         mul.s f18, f10, f16
         add.s f6, f18, f4

    loc_0x8037e5f4: // orphan
         trunc.w.s f8, f6
         mfc1 v1, f8
         goto 0x8037e648
         v0 = [s0 + 0]

    loc_0x8037e648: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037e5fc
         t1 = [v0 + 0x1c]         // t9
         at = , t1 < v1
         bnel at, 0, 0x8037e68c   // fcn.803742ac+0xa3e0 // unlikely
         ra = [sp + 0x1c]         // t9

    loc_0x8037e658: // orphan
         t2 = [v0 + 0xc]
         at = 0xdfff << 16
         at |= 0xffff
         t3 = t2 & at
         [v0 + 0xc] = t3
         v0 = [s0 + 0]
         at = 0x4000 << 16
         t5 = [v0 + 0xc]          // t9
         t4 = t5 | at             // t9
         [v0 + 0xc] = t4
         t6 = [s0 + 0]
         [t6 + 0x1c] = 0

    loc_0x80383f10: // orphan
         ra = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // t9
         

    loc_0x80383f68: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x8038456c: // orphan
         t7 = [t6 + 0x4eac]       // t9

    loc_0x80384570: // orphan
         at = v0 + 0x7fff
         t8 = t7 + 1              // lo
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x4ead] = t8
         call 0x864069dc          // 0x864069dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86406544          // 0x86406544(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = [s2 + 0]            // t9
         t9 = [v0 + 0x10]
         bnel s1, t9, 0x8038456c  // likely
         t6 = v0 + s0

    loc_0x803845a0: // orphan
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]
         ret                      // s4
         sp += 0x28

    loc_0x803847e0: // orphan
           // CALL XREF from fcn.827da614 @ +0x18c
         s1 = 0x87f1 << 16
         [sp + 0x1c] = ra
         [sp + 0x14] = s0
         v1 = [t6 + 0x10]         // t9
         s1 += 0x19dc
         v0 = [s1 + 0]            // t9
         a0 = 0 + 1               // arg1 // lo
         if                       // fcn.8038488c+0x54 // unlikely
         s0 = [v0 + 0x20]         // t9

    loc_0x803847e4: // orphan
         at = 0 + 2
         bnel v1, at, 0x803848e4  // fcn.8038488c+0x58 // likely
         ra = [sp + 0x1c]

    loc_0x803847f0: // orphan
         t7 = halfword [v0 + 0x64]
         a1 = 0 + 1               // arg2 // lo
         beql a0, t7, 0x80384834  // fcn.80384828+0xc // unlikely
         at = 0x4060 << 16

    loc_0x803849e8: // orphan
         call 0x87f025b8          // 0x87f025b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s6
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x803849f8: // orphan
         s5 = s2 << 2
         s5 -= s2
         s5 <<= 3
         s5 -= s2
         s1 = v0 + 0x24
         a0 = s1
         s5 <<= 2
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x442f71dcfe116408, 0x8, -1)
         s3 = s2 << 2
         t7 = [s4 + 0]
         a0 = s1
         a1 = 0
         t8 = t7 + s3
         a3 = [t8 + 0x788]        // t9
         call 0x8003f114          // 0x8003f114(0x123, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = s1
         call 0x8003f210          // 0x8003f210(0x123, 0x0, -1, -1)
         a1 = 0
         call 0x8003570c          // "0E" // 0x8003570c(0x123, 0x0, -1, -1)
         
         a1 = v0 & 0xf
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // 0x8003eb84(0x123, 0xf, -1, -1)
         a0 = s1
         t9 = [s4 + 0]
         a0 = s0 + 0x48
         a1 = s2
         t0 = t9 + s5
         s1 = t0 + s7

    loc_0x80384a74: // orphan
         call 0x87f06430          // 0x87f06430(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 0x20] = s1
         lwc1 f4, 0x4c, s0
         swc1 f20, 0x5c, s0
         swc1 f20, 0x58, s0
         sub.s f6, f4, f26
         swc1 f20, 0x54, s0
         halfword [s0 + 0x42] = fp
         at = 0x8009 << 16
         swc1 f6, 0x4c, s0
         lwc1 f8, -0x7fec, at
         at = 0x8009 << 16
         lwc1 f10, -0x6fec, at
         at = 0xc2c8 << 16
         a0 = s0 + 0x10

    loc_0x80384ab0: // orphan
         div.s f16, f8, f10
         mtc1 at, f10
         mul.s f18, f16, f24
         lwc1 f16, 0x4c, s0
         mul.s f4, f18, f28
         sub.s f18, f10, f16
         swc1 f18, 0x14, s0
         mul.s f6, f4, f30
         lwc1 f4, 0x50, s0
         sub.s f8, f22, f6
         sub.s f6, f24, f4
         swc1 f8, 0x10, s0
         call 0x80035a10          // 0x80035a10(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x18, s0
         swc1 f22, 0x18, s1

    loc_0x80384aec: // orphan
         v0 = [s4 + 0]
         s2 += 1
         t1 = [v0 + 0xe0]         // t9
         at = , s2 < t1           // lo
         bnel at, 0, 0x803849e8   // likely
         a0 = v0 + 0xe0

    loc_0x80384b04: // orphan
         ra = [sp + 0x6c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         ldc1 f28, 0x38, sp
         ldc1 f30, 0x40, sp
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]         // a2
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         s5 = [sp + 0x5c]
         s6 = [sp + 0x60]
         s7 = [sp + 0x64]
         fp = [sp + 0x68]
         ret
         sp += 0x70

    loc_0x80384e80: // orphan
         a3 = [v0 + 0x1c]         // t9
         swc1 f8, 0x10, sp
         lwc1 f10, 0x24, v0
         a0 = [sp + 0x2c]         // t9
         swc1 f10, 0x14, sp
         lwc1 f16, 0x28, v0
         [sp + 0x1c] = 0
         call 0x80038e14          // 0x80038e14(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f16, 0x18, sp
         v1 = 0x8641 << 16
         v1 += 0x6c00
         t7 = 0x8009 << 16
         t7 = , unsigned  halfword [t7 + 0x4904]
         t8 = [v1 + 0]            // t9
         v0 = 0 + 1               // lo
         halfword [t8 + 0x64] = t7
         // CODE XREF from fcn.82b12c10 @ +0x240
         ra = [sp + 0x24]         // s4
         sp += 0x28
         ret                      // s4
         

    loc_0x80384eec: // orphan
         [sp + 0x3c] = s1
         t6 = , unsigned  byte [v0 + 0xc]
         t7 = t6 & 0xff7f
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [v0 + 0xc] = t7
         mtc1 v0, f6
         at = 0x8641 << 16
         lwc1 f4, -0x63c8, at
         cvt.s.w f8, f6
         t8 = [s0 + 0]
         div.s f10, f4, f8
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10
         mtc1 v0, f18
         at = 0x424c << 16
         mtc1 at, f16
         cvt.s.w f6, f18
         t9 = [s0 + 0]
         t0 = 0 + 9
         div.s f4, f16, f6
         swc1 f4, 4, t9
         t1 = [s0 + 0]
         call 0x87f0455c          // 0x87f0455c(-1, 0x442f71dcfe116408, 0x8, -1)
         [t1 + 8] = t0
         t6 = [s0 + 0]
         s1 = 0x8641 << 16
         s2 = 0x8641 << 16
         s2 -= 0x680c
         s1 -= 0x6810
         a3 = 0x8641 << 16
         t2 = 0 + 0xc
         t3 = 0 + 0xa
         t4 = 0 + 5
         t5 = 0 + 3
         t7 = t6 + 0x14
         [sp + 0x24] = t7
         [sp + 0x20] = t5
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         [sp + 0x10] = t2
         a3 -= 0x6430
         [sp + 0x28] = s1
         [sp + 0x2c] = s2
         a0 = 0
         a1 = 0
         a2 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x0, 0x86409bd0)
         [sp + 0x14] = 0
         t3 = [s0 + 0]
         a3 = 0x8641 << 16
         t8 = 0 + 0xc
         t9 = 0 + 1               // lo
         t0 = 0 + 0xa
         t1 = 0 + 5
         t2 = 0 + 3
         t4 = t3 + 0x18
         [sp + 0x24] = t4

    loc_0x8038ae0c: // orphan
         at = 0x8651 << 16
         cvt.d.w f6, f4
         [at - 0x3b4c] = t0
         at = 0x8651 << 16
         ldc1 f8, -0x2950, at
         at = 0x8651 << 16
         lwc1 f16, -0x3b48, at
         div.d f10, f6, f8
         at = 0x3f80 << 16

    loc_0x8038ae30: // orphan
         mtc1 at, f4
         at = 0x4000 << 16
         mtc1 at, f8
         sp -= 0x18
         [sp + 0x14] = ra
         at = 0x8651 << 16
         cvt.s.d f0, f10
         sqrt.s f0, f0
         div.s f18, f0, f16
         add.s f6, f18, f4
         sub.s f10, f6, f8
         trunc.w.s f16, f10
         mfc1 t4, f16
         call 0x865020d8          // 0x865020d8(-1, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x262c] = t4
         at = 0x8651 << 16
         lwc1 f0, -0x3b0c, at
         at = 0x8651 << 16
         ra = [sp + 0x14]
         swc1 f0, 0x48, at
         at = 0x8651 << 16
         swc1 f0, 0x44, at
         swc1 f0, 0x40, at
         at = 0x8651 << 16
         swc1 f0, 0x1b0, at
         at = 0x8651 << 16
         swc1 f0, 0x1ac, at
         swc1 f0, 0x1a8, at
         at = 0x8651 << 16
         swc1 f0, 0x318, at
         at = 0x8651 << 16
         swc1 f0, 0x314, at
         swc1 f0, 0x310, at
         at = 0x8651 << 16
         swc1 f0, 0x480, at
         at = 0x8651 << 16
         sp += 0x18               // fp
         swc1 f0, 0x47c, at
         ret                      // ra
         swc1 f0, 0x478, at

    loc_0x8038aecc: // orphan
         swc1 f0, 0x478, at
         v0 = 0x8651 << 16
         v0 = [v0 - 0x39cc]       // t9

    loc_0x8038aed8: // orphan
         v1 = 0x8651 << 16
         v1 -= 0x2f5c
         if                       // likely
         t6 = 0 + 2

    loc_0x8038aee8: // orphan
         v1 = 0x8651 << 16
         v1 -= 0x2f5c
         goto 0x8038aefc
         [v1 + 0] = t6

    loc_0x8038aef8: // orphan
         [v1 + 0] = v0

    loc_0x8038aefc: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038aef0
         v0 = [v1 + 0]            // s4

    loc_0x8038af00: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x8038af0c: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x8038af14: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x8038af1c: // orphan
         if                       // unlikely
         

    loc_0x8038af24: // orphan
         ret                      // ra
         

    loc_0x8038af2c: // orphan
         at = 0x8651 << 16
         lwc1 f4, -0x3af8, at
         at = 0x8651 << 16

    loc_0x8038af38: // orphan
         ldc1 f8, -0x2948, at
         cvt.d.s f6, f4
         at = 0x8651 << 16
         mul.d f10, f6, f8
         cvt.s.d f16, f10
         ret                      // ra
         swc1 f16, -0x3b48, at

    loc_0x8038af54: // orphan
         at = 0x8651 << 16
         lwc1 f18, -0x3af8, at
         at = 0x8651 << 16
         ldc1 f6, -0x2940, at
         cvt.d.s f4, f18
         at = 0x8651 << 16
         mul.d f8, f4, f6
         cvt.s.d f10, f8
         ret                      // ra
         swc1 f10, -0x3b48, at

    loc_0x8038af7c: // orphan
         at = 0x8651 << 16
         lwc1 f16, -0x3af8, at
         at = 0x8651 << 16
         ldc1 f4, -0x2938, at
         cvt.d.s f18, f16
         at = 0x8651 << 16

    loc_0x8038af94: // orphan
         mul.d f6, f18, f4
         cvt.s.d f8, f6
         ret                      // ra
         swc1 f8, -0x3b48, at

    loc_0x8038afa4: // orphan
         at = 0x8651 << 16
         lwc1 f10, -0x3af8, at
         at = 0x8651 << 16
         ldc1 f18, -0x2930, at
         cvt.d.s f16, f10
         at = 0x8651 << 16
         mul.d f4, f16, f18
         cvt.s.d f6, f4
         swc1 f6, -0x3b48, at
         ret                      // ra
         

    loc_0x8038b24c: // orphan
         fp -= 0x3b54
         s1 -= 0x3b64
         s0 += 0x1698
         s2 = 0 + 1               // lo
         s3 = 0 - 1               // s2
         s4 = 0 + 0x12d
         s5 = 0 - 0x190
         s6 = 0 + 0x65
         s7 = 0 + 5
         [s0 + 0] = s3

    loc_0x8038b338: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s1
         s0 = hi
         if                       // likely
         

    loc_0x8038b350: // orphan
         break 7

    loc_0x8038b354: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8038b36c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s1
         v1 = hi
         if                       // likely
         

    loc_0x8038b384: // orphan
         break 7

    loc_0x8038b388: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8038b394: // orphan
         if                       // likely
         

    loc_0x8038b39c: // orphan
         break 6

    loc_0x8038b3a0: // orphan
         if                       // unlikely
         

    loc_0x8038b3a8: // orphan
         if                       // unlikely
         s2 += 1

    loc_0x8038b3b4: // orphan
         t0 = s0 << 2
         t1 = v1 << 2
         a0 = s3 + t1             // arg1
         t2 = [a0 + 0]            // arg1 // t9
         v0 = s3 + t0
         a1 = [v0 + 0]            // t9
         [v0 + 0] = t2
         [a0 + 0] = a1            // arg1
         if                       // likely
         

    loc_0x8038b3dc: // orphan
         a0 = 0x8651 << 16
         call 0x87f034cc          // 0x87f034cc(0x86510000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x2608
         v0 = 0x8651 << 16
         v0 -= 0x3a20
         [v0 + 0x34] = 0
         [v0 + 0] = 0
         [v0 + 0x20] = 0
         [v0 + 0x4c] = 0
         call 0x86502720          // 0x86502720(0x8650d9f8, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 0x58] = 0
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x40

    loc_0x8038b460: // orphan
         [sp + 0x40] = s2
         [sp + 0x3c] = s1
         sdc1 f22, 0x30, sp
         sdc1 f20, 0x28, sp

    loc_0x8038c010: // orphan
         at = 0 + 2
         if                       // unlikely
         

    loc_0x8038c014: // orphan
         at = 0 + 3
         beql a0, at, 0x8038c148  // unlikely
         ra = [sp + 0x1c]

    loc_0x8038c020: // orphan
         goto 0x8038c148
         ra = [sp + 0x1c]

    loc_0x8038c058: // orphan
         

    loc_0x8038c05c: // orphan
         break 6

    loc_0x8038c148: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038c020
         s0 = [sp + 0x18]
         sp += 0x40
         ret                      // ra
         

    loc_0x8038c178: // orphan
         t8 = [v0 + 0x10]
         sp -= 0x20
         at = 0 + 1               // lo
         if                       // likely
         [sp + 0x14] = ra

    loc_0x8038c18c: // orphan
         t9 = a0 << 2             // arg1
         t9 -= a0                 // arg1

    loc_0x8038c194: // orphan
         t9 <<= 2
         t9 -= a0                 // arg1
         t9 <<= 2
         t9 += a0                 // arg1
         t0 = 0x8651 << 16
         t0 -= 0x1ee0
         t9 <<= 3
         a0 = t9 + t0             // arg1
         [sp + 0x18] = a0
         a1 = [v0 + 0xc]
         call 0x8003f210          // 0x8003f210(0x688650e0b8, 0x5dffffff, 0x8, -1)
         [sp + 0x1c] = v0
         a0 = [sp + 0x18]
         call 0x8003eb84          // 0x8003eb84(0x8650e0b8, 0x5dffffff, 0x8, -1)
         a1 = 0
         v0 = [sp + 0x1c]         // s4
         [v0 + 0x10] = 0

    loc_0x8038c1d8: // orphan
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x8038c1e8: // orphan
         t6 = a0 << 2             // arg1
         t6 += a0                 // arg1
         t6 <<= 2
         t6 -= a0                 // arg1
         t7 = 0x8651 << 16

    loc_0x8038c1fc: // orphan
         t7 += 0x1698
         t6 <<= 3
         v0 = t6 + t7
         t8 = [v0 + 0xc]          // t9
         sp -= 0x30
         [sp + 0x18] = s0
         at = , unsigned  , t8 < 8
         s0 = a0                  // t9
         if                       // likely
         [sp + 0x1c] = ra

    loc_0x8038c224: // orphan
         t8 <<= 2
         at = 0x8651 << 16
         at += t8
         t8 = [at - 0x28f4]       // t9
         goto t8                  // t9
         

    loc_0x8038c2c0: // orphan
         goto 0x8038c434
         [v0 + 0xc] = 0

    loc_0x8038c434: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038c2c0
         // CODE XREF from fcn.803747c4 @ 0x8038c2e8
         ra = [sp + 0x1c]         // s4

    loc_0x8038c438: // orphan
         // CODE XREF from fcn.8038c380 @ 0x8038c3f4
         s0 = [sp + 0x18]
         sp += 0x30
         ret                      // ra
         

    loc_0x8038c58c: // orphan
         bc1fl 0x8038c5b4

    loc_0x8038c9c8: // orphan
         at = 0x8651 << 16
         at += t6
         t6 = [at - 0x28d4]       // t9
         goto t6                  // t9
         

    loc_0x8038ca90: // orphan
         s1 -= 0xe00
         s3 = 0 - 0x352
         sub.d f10, f6, f4
         trunc.w.d f16, f10
         mfc1 v0, f16
         
         [at - 0x3b64] = v0
         at = , v0 < -0x1c2
         beql at, 0, 0x8038cdf4   // likely
         ra = [sp + 0x24]

    loc_0x8038cab8: // orphan
         [t2 + 0x44] = t4

    loc_0x8038cabc: // orphan
         a0 = s1
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(0x442f71dcfe117dbd, 0x0, -1, -1)
         a3 = [s2 + 0]            // t9
         t5 = [s0 + 0]
         t7 = 0x8651 << 16
         t7 -= 0x3b54
         s0 += 4
         t6 = s3 - t5
         s1 += 0x168
         if                       // likely
         [s0 - 4] = t6

    loc_0x8038caf0: // orphan
         goto 0x8038cdf4
         ra = [sp + 0x24]

    loc_0x8038cb84: // orphan
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f0, f8, f6
         c.lt.s f4, f0
         
         bc1fl 0x8038cbb4
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x8038cbbc
         add.s f10, f0, f2

    loc_0x8038cbbc: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038cba8
         t7 = 0x8651 << 16
         t7 -= 0x3b64
         a3 = a1 + t7             // arg4
         trunc.w.s f16, f10
         t8 = [a3 + 0]            // arg4 // t9
         mfc1 t3, f16
         
         t4 = t8 + t3
         [a3 + 0] = t4            // arg4
         t6 = 0x8651 << 16
         t6 = [t6 - 0x3b34]       // t9
         a0 = [a0 - 0x3b54]       // arg1 // t9
         a3 = a1 + t5             // arg4
         t7 = [a3 + 0]            // arg4 // t9
         v0 = a0 + t6             // arg1
         v0 += 0xf
         at = , t7 < v0           // lo
         if                       // unlikely
         v1 = 0

    loc_0x8038cc08: // orphan
         if                       // unlikely
         a1 = 0x8651 << 16

    loc_0x8038cc0c: // orphan
         a1 = 0x8651 << 16

    loc_0x8038cc10: // orphan
         a1 = [a1 - 0x3b90]       // arg2 // t9
         at = 0 + 1               // lo
         v1 = 0 + 1               // lo
         if                       // likely
         t9 = a2 << 2             // arg3 // k0

    loc_0x8038cc24: // orphan
         mtc1 a0, f18
         t9 -= a2                 // arg3
         t9 <<= 2
         cvt.s.w f8, f18
         t9 -= a2                 // arg3
         t9 <<= 2
         [a3 + 0] = v0            // arg4
         t9 += a2                 // arg3
         t8 = 0x8651 << 16
         t8 = [t8 - 0x3b64]       // t9
         t9 <<= 3
         at = 0x8651 << 16
         at += t9
         swc1 f8, -0xdd8, at
         at = , t8 < v0
         if                       // likely
         t3 = 0x8651 << 16

    loc_0x8038cc68: // orphan
         v1 = 0

    loc_0x8038cc6c: // orphan
         t3 = [t3 - 0x3b60]       // t9
         t4 = 0x8651 << 16
         t5 = 0x8651 << 16
         at = , t3 < v0
         if                       // likely
         

    loc_0x8038cc84: // orphan
         v1 = 0

    loc_0x8038cc88: // orphan
         t4 = [t4 - 0x3b5c]       // t9
         at = , t4 < v0
         if                       // likely
         

    loc_0x8038cc98: // orphan
         v1 = 0

    loc_0x8038cc9c: // orphan
         t5 = [t5 - 0x3b58]       // t9
         at = , t5 < v0
         beql at, 0, 0x8038ccb4   // likely
         at = 0 + 3

    loc_0x8038ccac: // orphan
         v1 = 0

    loc_0x8038ccb0: // orphan
         at = 0 + 3

    loc_0x8038ccb4: // orphan
         if                       // likely
         t7 = 0x8651 << 16

    loc_0x8038ccbc: // orphan
         at = , t0 < 0x12
         // CODE XREF from fcn.8057a540 @ +0x5d8
         if                       // likely
         t9 = 0x8651 << 16

    loc_0x8038ccc8: // orphan
         t6 = t0 + 1
         [t1 + 0] = t6
         t0 = t6

    loc_0x8038ccd4: // orphan
         t7 = [t7 + 0x19b8]       // t9
         t8 = 0x8651 << 16
         t3 = 0x8651 << 16
         at = , t7 < 0x12
         if                       // likely
         t4 = t0 << 2

    loc_0x8038ccec: // orphan
         v1 = 0

    loc_0x8038ccf0: // orphan
         t9 = [t9 + 0x19bc]
         t5 = 0x8651 << 16
         t5 += t4
         at = , t9 < 0x12

    loc_0x8038cd00: // orphan
         if                       // unlikely
         

    loc_0x8038cd08: // orphan
         v1 = 0

    loc_0x8038cd0c: // orphan
         t8 = [t8 + 0x19c0]       // t9
         at = , t8 < 0x12
         if                       // likely
         

    loc_0x8038cd1c: // orphan
         v1 = 0

    loc_0x8038cd20: // orphan
         t3 = [t3 + 0x19c4]       // t9
         at = , t3 < 0x12
         if                       // likely
         

    loc_0x8038cd30: // orphan
         v1 = 0

    loc_0x8038cd34: // orphan
         t5 = [t5 - 0x2ec4]       // t9
         [a3 + 0] = t5            // arg4

    loc_0x8038cd3c: // orphan
         at = 0 + 1               // lo
         if                       // likely
         // CALL XREF from fcn.811d700c @ +0x354
         t6 = 0 + 4

    loc_0x8038cd48: // orphan
         goto 0x8038cdf0
         [t2 + 0x44] = t6

    loc_0x8038cdf0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038cd48
         ra = [sp + 0x24]

    loc_0x8038cdf4: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038caf0
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // s4
         s3 = [sp + 0x20]
         ret                      // ra
         sp += 0x28

    loc_0x8038ce60: // orphan
         v0 = t8 + t9
         t0 = [v0 + 0x58]         // t9
         a0 = a2
         t1 = t0 + 1
         at = , t1 < 0x18

    loc_0x8038ce74: // orphan
         if                       // likely
         [v0 + 0x58] = t1

    loc_0x8038ce7c: // orphan
         [v0 + 0x58] = 0

    loc_0x8038ce80: // orphan
         call 0x865040e4          // 0x865040e4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a2
         a2 = [sp + 0x1c]
         t3 = 0x8651 << 16
         t3 = [t3 - 0x3a18]       // t9
         at = 0 - 2               // hi
         t7 = a2 << 2             // k0
         if                       // likely
         t8 = 0x8651 << 16

    loc_0x8038cea4: // orphan
         t4 = a2 << 2             // k0
         v1 = 0x8651 << 16
         v1 += t4
         v1 = [v1 - 0x3b64]       // t9
         v0 = a2 << 2             // k0
         v0 -= a2
         t5 = v1 - 5
         mtc1 t5, f4
         v0 <<= 2
         t6 = v1 + 0x3c
         cvt.s.w f6, f4
         mtc1 t6, f8
         v0 -= a2
         v0 <<= 2
         v0 += a2
         cvt.s.w f10, f8
         v0 <<= 3
         at = 0x8651 << 16
         at += v0

    loc_0x8038cef0: // orphan
         swc1 f6, -0x2458, at
         at = 0x8651 << 16
         at += v0
         goto 0x8038cf48
         swc1 f10, -0x838, at

    loc_0x8038cf04: // orphan
         t8 += t7                 // t9
         t8 = [t8 - 0x3b64]       // t9
         v0 = a2 << 2             // k0
         v0 -= a2
         mtc1 t8, f16
         v0 <<= 2
         v0 -= a2
         cvt.s.w f0, f16
         v0 <<= 2
         v0 += a2
         v0 <<= 3
         at = 0x8651 << 16
         at += v0
         swc1 f0, -0x2458, at

    loc_0x8038cf3c: // orphan
         at = 0x8651 << 16
         at += v0
         swc1 f0, -0x838, at

    loc_0x8038cf48: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038cefc
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x8038d5e4: // orphan
         ldc1 f10, -0x2838, at
         mul.d f18, f16, f10
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         cvt.s.d f12, f18
         t3 = [s0 + 0x14]         // t9
         t6 = 0x8651 << 16
         t6 = [t6 - 0x2e68]       // t9
         t4 = t3 << 2
         t4 -= t3
         mtc1 t6, f4
         t4 <<= 2
         t4 -= t3
         t4 <<= 2
         cvt.s.w f6, f4
         t5 = 0x8651 << 16
         t4 += t3
         t4 <<= 3
         t5 -= 0xe00
         v0 = t4 + t5
         lwc1 f8, 0x28, v0
         lwc1 f18, 0x2c, v0
         div.s f16, f8, f6
         mul.s f10, f16, f0
         add.s f4, f18, f10
         goto 0x8038d74c
         swc1 f4, 0x2c, v0

    loc_0x8038d74c: // orphan
         // CODE XREF from fcn.8038d128 @ 0x8038d158
         // CODE XREF from fcn.8038d3bc @ 0x8038d43c
         // CODE XREF from fcn.803747c4 @ 0x8038d540
         // CODE XREF from fcn.80398300 @ 0x8038d644
         ra = [sp + 0x1c]         // a2

    loc_0x8038d750: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8038d348
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         

    loc_0x8038db10: // orphan
         t6 = [v0 + 0x38]         // t9
         t7 = [v0 + 8]
         lwc1 f4, 0x24, a2        // arg3
         unsigned , hi
         a1 += 0x168              // arg2
         swc1 f20, -0x140, a1     // arg2
         [v0 + 0x20] = 0
         [v0 + 0x3c] = 0
         halfword [v1 + 0x22] = 0
         halfword [v1 + 0x1e] = 0
         swc1 f0, 0x2c, v1
         halfword [a0 + 0x18a] = 0 // arg1
         halfword [a0 + 0x186] = 0 // arg1
         t8 = lo
         swc1 f0, 0x194, a0       // arg1
         swc1 f4, 0x24, v1
         div 0, t8, a3            // arg4
         t9 = lo
         t5 = t0 - t9
         if                       // likely
         

    loc_0x8038db64: // orphan
         break 7

    loc_0x8038db68: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x8038db70: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x8038db74: // orphan
         if                       // likely
         

    loc_0x8038db7c: // orphan
         break 6

    loc_0x8038db80: // orphan
         [v0 + 0x44] = t5
         bnel t7, 0, 0x8038dba0   // unlikely
         a0 += 0x2d0              // arg1

    loc_0x8038db8c: // orphan
         t6 = [v0 + 0x80]         // t9
         bnel t6, 0, 0x8038dba0   // likely
         a0 += 0x2d0              // arg1

    loc_0x8038db98: // orphan
         [v0 + 0x44] = t2
         a0 += 0x2d0              // arg1

    loc_0x8038dba0: // orphan
         v0 += 0x98
         v1 += 0x168
         if                       // likely
         a2 += 0x168              // arg3

    loc_0x8038dbb0: // orphan
         v0 = 0x8651 << 16
         v0 -= 0x2e50
         t8 = 0 + 2
         [v0 + 0] = 0
         [t4 + 0x30] = t8
         call 0x80021ed8          // 0x80021ed8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x13
         goto 0x8038deb4
         

    loc_0x8038deb4: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038dbcc
         // CODE XREF from fcn.803747c4 @ 0x8038dd44
         t4 = 0x8651 << 16
         t4 -= 0x3a20
         v0 = [t4 + 0x30]         // t9
         at = 0 + 2
         t5 = 0x8651 << 16
         if                       // unlikely
         at = 0 + 4

    loc_0x8038ded0: // orphan
         if                       // likely
         at = 0x41c8 << 16

    loc_0x8038ded4: // orphan
         at = 0x41c8 << 16

    loc_0x8038ded8: // orphan
         mtc1 at, f2
         at = 0x4000 << 16
         mtc1 at, f12
         at = 0x40a0 << 16
         mtc1 at, f22
         t5 = [t5 - 0x3b34]       // t9
         at = 0x41a0 << 16
         mtc1 at, f24
         if                       // likely
         t7 = , signed  t5 >> 1   // t9

    loc_0x8038df00: // orphan
         at = t5 + 1
         t7 = , signed  at >> 1

    loc_0x8038df08: // orphan
         mtc1 t7, f4
         at = 0x8651 << 16
         lwc1 f6, 0x1118, at
         cvt.s.w f0, f4
         t6 = 0x8651 << 16
         t6 = [t6 + 0x16d0]       // t9
         at = 0x8651 << 16
         t9 = 0x8651 << 16
         t9 = [t9 + 0x1768]
         add.s f8, f6, f0
         t7 = 0x8651 << 16
         t7 = [t7 + 0x1800]       // t9
         add.s f10, f8, f2
         add.s f4, f10, f12
         swc1 f4, -0xdd8, at
         if                       // likely
         t8 = , signed  t6 >> 1   // t9

    loc_0x8038df4c: // orphan
         at = t6 + 1
         t8 = , signed  at >> 1

    loc_0x8038df54: // orphan
         mtc1 t8, f8
         at = 0x8651 << 16
         t8 = 0x8651 << 16
         cvt.s.w f10, f8
         t8 = [t8 + 0x1898]       // t9
         add.s f4, f10, f6
         add.s f8, f4, f2
         add.s f14, f8, f12
         add.s f10, f14, f0
         swc1 f14, 0x5d8, at
         at = 0x8651 << 16
         sub.s f6, f10, f22
         swc1 f6, 0x740, at
         at = 0x8651 << 16
         lwc1 f4, -0x1ebc, at
         at = 0x8651 << 16
         sub.s f8, f4, f24
         swc1 f8, 0x73c, at
         at = 0x8651 << 16
         lwc1 f10, 0x1280, at
         at = 0x8651 << 16
         add.s f6, f10, f0
         add.s f4, f6, f2
         add.s f8, f4, f12
         swc1 f8, -0xc70, at
         if                       // likely
         t5 = , signed  t9 >> 1

    loc_0x8038dfc0: // orphan
         at = t9 + 1
         t5 = , signed  at >> 1

    loc_0x8038dfc8: // orphan
         mtc1 t5, f6
         at = 0x8651 << 16
         cvt.s.w f4, f6
         add.s f8, f4, f10
         add.s f6, f8, f2
         add.s f16, f6, f12
         add.s f4, f16, f0
         swc1 f16, 0x8a8, at
         at = 0x8651 << 16
         sub.s f10, f4, f22
         swc1 f10, 0xa10, at
         at = 0x8651 << 16
         lwc1 f8, -0x1d54, at
         at = 0x8651 << 16
         sub.s f6, f8, f24
         swc1 f6, 0xa0c, at
         at = 0x8651 << 16
         lwc1 f4, 0x13e8, at
         at = 0x8651 << 16
         add.s f10, f4, f0
         add.s f8, f10, f2
         add.s f6, f8, f12
         swc1 f6, -0xb08, at
         if                       // likely
         t6 = , signed  t7 >> 1

    loc_0x8038e02c: // orphan
         at = t7 + 1              // lo

    loc_0x8038e030: // orphan
         t6 = , signed  at >> 1

    loc_0x8038e034: // orphan
         mtc1 t6, f4
         at = 0x8651 << 16
         lwc1 f8, 0x13e8, at
         cvt.s.w f10, f4
         at = 0x8651 << 16
         add.s f6, f10, f8
         add.s f4, f6, f2
         add.s f18, f4, f12
         add.s f10, f18, f0
         swc1 f18, 0xb78, at
         at = 0x8651 << 16
         sub.s f8, f10, f22
         swc1 f8, 0xce0, at
         at = 0x8651 << 16
         lwc1 f6, -0x1bec, at
         at = 0x8651 << 16
         sub.s f4, f6, f24
         swc1 f4, 0xcdc, at
         at = 0x8651 << 16
         lwc1 f10, 0x1550, at
         at = 0x8651 << 16
         add.s f8, f10, f0
         add.s f6, f8, f2
         add.s f4, f6, f12
         swc1 f4, -0x9a0, at
         if                       // likely
         t9 = , signed  t8 >> 1

    loc_0x8038e0a0: // orphan
         at = t8 + 1
         t9 = , signed  at >> 1

    loc_0x8038e0a8: // orphan
         mtc1 t9, f10
         at = 0x8651 << 16
         lwc1 f6, 0x1550, at
         cvt.s.w f8, f10
         at = 0x8651 << 16
         add.s f4, f8, f6
         add.s f10, f4, f2
         add.s f20, f10, f12
         add.s f8, f20, f0
         swc1 f20, 0xe48, at
         at = 0x8651 << 16
         sub.s f6, f8, f22
         swc1 f6, 0xfb0, at
         at = 0x8651 << 16
         lwc1 f4, -0x1a84, at
         at = 0x8651 << 16
         sub.s f10, f4, f24
         swc1 f10, 0xfac, at

    loc_0x8038e0f0: // orphan
         ra = [sp + 0x2c]
         ldc1 f20, 0x10, sp
         ldc1 f22, 0x18, sp
         ldc1 f24, 0x20, sp
         ret
         sp += 0x88

    loc_0x8038e148: // orphan
         a1 = [v0 + 0x24]
         a3 = [v0 + 0x2c]         // t9
         a0 = [sp + 0x2c]
         [sp + 0x1c] = 0
         swc1 f0, 0x14, sp
         swc1 f2, 0x10, sp
         call 0x80038e14          // 0x80038e14(0x864097f4, 0xfffe117d, 0x8, -1)
         swc1 f2, 0x18, sp
         ra = [sp + 0x24]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x8038e214: // orphan
         call 0x80037120          // 0x80037120(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 + 0xa8
         t7 = halfword [sp + 0x26]
         v0 = [sp + 0x34]
         t8 = 0 - 0x2000
         t9 = t8 - t7
         halfword [v0 + 0x1c] = t9
         t0 = halfword [sp + 0x24]
         t1 = t0 + 0x6000
         halfword [v0 + 0x1e] = t1
         ra = [sp + 0x1c]
         sp += 0x30
         v0 = 0
         ret
         

    loc_0x8038e4a8: // orphan
         t8 = [s7 + 0]
         at = 0 + 0x7f
         t2 = 0 + 0x37
         t9 = t8 + s2
         t0 = [t9 + 8]
         v0 = , unsigned  byte [t0 + 4]
         if                       // likely
         [s0 + 0x88] = v0

    loc_0x8038e4c8: // orphan
         goto 0x8038e4ec
         [s0 + 0x88] = t2

    loc_0x8038e4d0: // orphan
         at = 0 + 0x7b
         if                       // likely
         t4 = 0 + 0xb3

    loc_0x8038e4dc: // orphan
         t3 = 0 + 0x7a
         goto 0x8038e4ec
         [s0 + 0x88] = t3

    loc_0x8038e4e8: // orphan
         [s0 + 0x88] = t4

    loc_0x8038e4ec: // orphan
         // CODE XREFS from fcn.80398300 @ 0x8038e4c8, 0x8038e4e0
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0x88]         // t9
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8038e4f8: // orphan
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         s4 = v0
         a0 = s5                  // t9
         a1 = [s7 + 0]
         a2 = 0 + 2
         call 0x87f0ad50          // 0x87f0ad50(-1, 0xe7000000, 0x2, -1)
         a3 = s1
         a2 = [s5 + 0]
         a0 = s4
         a1 = [s0 + 0x88]         // t9
         call 0x8004dfec          // 0x8004dfec(0xff, -1, 0xe7000000, 0x442f71dcfe117dbd)
         [sp + 8] = a2

    loc_0x8038e534: // orphan
         [s3 + 0] = v0
         call 0x80003120          // "&1" // 0x80003120(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s4
         s1 += 1
         at = , s1 < 4
         s0 += 0x98
         s2 += 0x6c0
         if                       // unlikely
         s3 += 4

    loc_0x8038e558: // orphan
         a1 = 0x8651 << 16
         a1 -= 0x3a20
         s0 = 0x8651 << 16
         v0 = 0x8651 << 16
         [a1 + 0x54] = 0
         v0 -= 0x3ba4
         s0 += 0x1698
         s1 = 0
         v1 = [s7 + 0]            // s4

    loc_0x8038e57c: // orphan
         t7 = , unsigned  byte [v1 + 0x2182] // s4
         t8 = 0 + 1               // lo
         t9 = t8 << s1
         t0 = t7 & t9             // s4
         if                       // unlikely
         t1 = s1 + 5

    loc_0x8038e594: // orphan
         [v0 + 0] = 0
         [s0 + 0x4c] = t1
         goto 0x8038e5bc
         a0 = s1 + 1

    loc_0x8038e5a4: // orphan
         t2 = byte [v1 + 0x2181]  // s4
         a0 = s1 + 1
         [s0 + 0x4c] = a0
         t3 = s6 - t2
         [v0 + 0] = t3
         [a1 + 0x54] = t3

    loc_0x8038e5bc: // orphan
         // CODE XREF from fcn.80398300 @ 0x8038e59c
         at = , a0 < 4
         s1 = a0                  // t9
         s0 += 0x98
         if                       // unlikely
         v0 += 4

    loc_0x8038e5d0: // orphan
         t5 = , unsigned  byte [v1 + 0x2180] // s4
         a0 = 0x8651 << 16
         a0 -= 0x3b34
         if                       // likely
         t4 = 0 + 0x11d

    loc_0x8038e5e4: // orphan
         t6 = byte [v1 + 0x2181]  // s4
         at = 0x8651 << 16
         t8 = s6 - t6
         [at - 0x3ba4] = t8
         t7 = byte [v1 + 0x2181]  // s4
         at = 0x8651 << 16
         t9 = s6 - t7
         [at - 0x3ba0] = t9
         t0 = byte [v1 + 0x2181]  // s4
         t1 = s6 - t0
         [at - 0x3b9c] = t1
         t2 = byte [v1 + 0x2181]  // s4
         t3 = s6 - t2
         [at - 0x3b98] = t3

    loc_0x8038e61c: // orphan
         at = 0x443e << 16
         mtc1 at, f4
         at = 0x8651 << 16
         v1 = 0x8651 << 16
         swc1 f4, 0x2c, a1
         lwc1 f6, -0x27c8, at
         at = 0x8651 << 16
         v1 -= 0x3b54
         swc1 f6, -0x3b30, at
         t5 = 0 + 0x185
         [v1 + 0] = t4
         [a0 + 0] = t5
         at = 0x8651 << 16
         t6 = 0 + 0xc4
         [at - 0x3b3c] = t6
         at = 0x8651 << 16
         lwc1 f8, -0x3af8, at
         at = 0x8651 << 16
         ldc1 f16, -0x27c0, at
         cvt.d.s f10, f8
         a2 = 0x8651 << 16
         mul.d f18, f10, f16
         a2 -= 0x3b48
         at = 0x8651 << 16
         v0 = 0x8651 << 16
         cvt.s.d f4, f18
         swc1 f4
         [at - 0x3b8c] = 0
         t8 = [a0 + 0]
         v0 = [v0 - 0x3b68]       // t9
         at = 0x8651 << 16
         t7 = v0 - t8
         t9 = t7 - 0xa
         [at - 0x3b4c] = t9
         t0 = [v1 + 0]            // t9
         at = 0x8651 << 16
         ldc1 f10, -0x27b8, at
         t1 = t0 - v0
         mtc1 t1, f6
         lwc1 f18
         at = 0x3f80 << 16
         cvt.d.w f8, f6
         mtc1 at, f6
         at = 0x4000 << 16
         div.d f16, f8, f10
         mtc1 at, f10
         at = 0x8651 << 16
         cvt.s.d f0, f16
         sqrt.s f0, f0
         div.s f4, f0, f18
         add.s f8, f4, f6
         sub.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 t3, f18
         call 0x86501d6c          // 0x86501d6c(-1, 0x442f71dcfe116408, 0x8650c4b8, -1)
         [at - 0x262c] = t3
         call 0x8003efe0          // 0x8003efe0(-1, 0x442f71dcfe116408, 0x8650c4b8, -1)
         
         call 0x87f01870          // 0x87f01870(-1, 0x442f71dcfe116408, 0x8650c4b8, -1)
         a0 = [s7 + 0]
         a0 = 0x8651 << 16
         a0 -= 0x2590
         call 0x87f09ebc          // 0x87f09ebc(0x8650da70, 0x442f71dcfe116408, 0x8650c4b8, -1)
         a1 = [s7 + 0]
         call 0x80041e2c          // 0x80041e2c(0x8650da70, 0x185, 0x8650c4b8, -1)
         
         call 0x87f024cc          // 0x87f024cc(0x8650da70, 0x185, 0x8650c4b8, -1)
         
         ra = [sp + 0x34]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         s6 = [sp + 0x2c]
         s7 = [sp + 0x30]
         ret
         sp += 0x58

    loc_0x8038e7fc: // orphan
         a0 -= 0x25e8             // arg1
         call 0x87f03bb0          // 0x87f03bb0(0xffffda17, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x32
         v1 = 0x8651 << 16
         v1 += 0x5b0
         s3 = 0x8651 << 16
         s3 += 0x10f0
         [sp + 0xcc] = v1
         s2 = 0 + 0x2d0

    loc_0x8038e820: // orphan
         s0 = [sp + 0xcc]
         s1 = 0

    loc_0x8038e828: // orphan
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s1 += 0x168
         if                       // likely
         s0 += 0x168

    loc_0x8038e83c: // orphan
         t7 = [sp + 0xcc]
         t8 = t7 + 0x2d0
         at = , unsigned  , t8 < s3 // lo
         if                       // likely
         [sp + 0xcc] = t8

    loc_0x8038e850: // orphan
         at = 0xc3c8 << 16
         mtc1 at, f30
         at = 0x3e80 << 16

    loc_0x8038e85c: // orphan
         mtc1 at, f28
         at = 0x8651 << 16
         t0 = 0x8651 << 16
         t1 = 0x8651 << 16
         t1 -= 0x24d8
         t0 -= 0x191c
         lwc1 f26, -0x27b0, at

    loc_0x8038e878: // orphan
         at = 0x8651 << 16
         [sp + 0xb0] = t0
         [sp + 0xac] = t1
         t9 = 0x8651 << 16
         t9 += 0x5b0
         t1 = 0x8651 << 16
         t0 = 0x8650 << 16
         lwc1 f24, -0x27ac, at
         t2 = 0x8651 << 16
         t3 = 0x8651 << 16
         t4 = 0x8651 << 16
         t5 = 0x8651 << 16
         t6 = 0x8650 << 16
         t7 = 0x8650 << 16
         t8 = 0x8650 << 16
         t8 += 0x4740
         t7 += 0x455c
         t6 += 0x3b98
         t5 -= 0x3b20
         t4 -= 0x13a0
         t3 += 0x10f0
         t2 += 0x1698
         at = 0x8651 << 16
         t0 += 0x4eb0
         t1 -= 0x24c0
         s3 = 0x8651 << 16
         s4 = 0x8651 << 16
         s7 = 0x8651 << 16
         fp = 0x8651 << 16
         s1 = 0x8651 << 16
         s2 = 0x8651 << 16
         s2 -= 0xe00
         s1 -= 0x1940
         fp += 0x10
         s7 -= 0x860
         s4 -= 0x2480
         s3 -= 0x1ee0
         [sp + 0x70] = t1
         [sp + 0x74] = t0
         lwc1 f20, -0x27a8, at
         [sp + 0xa8] = t2
         [sp + 0xa0] = t3
         [sp + 0x98] = t4
         [sp + 0x94] = t5
         [sp + 0x84] = t6
         [sp + 0x80] = t7
         [sp + 0x7c] = t8
         [sp + 0xcc] = t9
         [sp + 0x78] = t9
         s6 = 0
         s5 = 0 + 2

    loc_0x80394ab0: // orphan
                                  // arg1
         

    loc_0x80394d6c: // orphan
         movf 0, 0, fcc0
         // CODE XREF from fcn.803afb68 @ +0x204
         

    loc_0x80394f08: // orphan
         

    loc_0x80395438: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80395440: // orphan
                                  // lo

    loc_0x80395444: // orphan
                                  // lo
         // CODE XREF from fcn.803afb68 @ +0x28c
                                  // lo
         if                       // unlikely
         if                       // likely

    loc_0x80395458: // orphan
         
         // CODE XREF from fcn.803afb68 @ +0x290
         
                                  // lo
                                  // lo

    loc_0x80395468: // orphan
                                  // lo
         if                       // unlikely
         at = t8 - 1

    loc_0x80395470: // orphan
         at = t8 - 1

    loc_0x80395474: // orphan
         s0 = halfword [s2 - 0x4080]
         dsra32 ra, 0, 0x1f

    loc_0x803954b4: // orphan
         dsra32 ra, v0, 0x1f

    loc_0x80395640: // orphan
         s0 = halfword [s2 + 0x780]
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80395650: // orphan
         if                       // unlikely

    loc_0x8039571c: // orphan
                                  // s4
         

    loc_0x80395808: // orphan
         sd t4, 0x11, ra
         
         

    loc_0x803958c4: // orphan
         
         goto 0x80000000
         s0 = halfword [s2 + 0xef8]

    loc_0x80395a80: // orphan
         sd ra, -0x5a, ra
         // CODE XREF from fcn.803afb68 @ +0x2b8
         sd ra, -0x63, ra
         
         

    loc_0x80395b88: // orphan
         s0 = halfword [ra - 0xad0]
         if                       // unlikely

    loc_0x80396424: // orphan
         if                       // fcn.803747c4+0x24b24 // unlikely
         if                       // unlikely

    loc_0x80396430: // orphan
         
         if                       // fcn.80387bbc+0x11d3c // unlikely
         if                       // fcn.80387bbc+0x11d50 // unlikely

    loc_0x80396440: // orphan
         
         if                       // fcn.80399a48 // unlikely
         if                       // unlikely

    loc_0x80396450: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039645c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80396468: // orphan
         if                       // fcn.80387bbc+0x12040 // unlikely
         // CODE XREF from fcn.803afb68 @ +0x350
         

    loc_0x80396470: // orphan
         
         if                       // fcn.80387bbc+0x123dc // unlikely
         if                       // fcn.80387bbc+0x123f0 // unlikely

    loc_0x80396480: // orphan
         
         // CODE XREF from fcn.803afb68 @ +0x358
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80396494: // orphan
         if                       // fcn.803b038c-0x160e4 // unlikely
         if                       // fcn.803b038c-0x16110 // unlikely

    loc_0x803964a0: // orphan
         if                       // fcn.803b038c-0x16098 // unlikely
         if                       // fcn.803b038c-0x16074 // unlikely

    loc_0x803964ac: // orphan
         if                       // fcn.803b038c-0x15ffc // unlikely
         

    loc_0x803964b4: // orphan
         
         
         
         // CODE XREF from fcn.803afb68 @ +0x364
         if                       // unlikely
         if                       // unlikely

    loc_0x803964cc: // orphan
         if                       // unlikely
         

    loc_0x803964d4: // orphan
         if                       // unlikely
         if                       // fcn.80387c30+0x131ac // unlikely

    loc_0x803964e0: // orphan
         if                       // fcn.80387c30+0x131d4 // unlikely
         // CODE XREF from fcn.803afb68 @ +0x368
         if                       // unlikely

    loc_0x803964ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803964f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803afb68 @ +0x370
         if                       // unlikely

    loc_0x80396504: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80396508: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80396510: // orphan
         // CODE XREF from fcn.803afb68 @ +0x374
         if                       // unlikely
         

    loc_0x80396514: // orphan
         // CODE XREF from fcn.803afb68 @ +0x374
         if                       // unlikely
         

    loc_0x80396518: // orphan
         if                       // fcn.803b0508-0x1535c // unlikely
         if                       // unlikely

    loc_0x80396524: // orphan
         if                       // unlikely
         

    loc_0x8039652c: // orphan
         
         
         // CODE XREF from fcn.803afb68 @ +0x378
         
         
         
         if                       // fcn.8039bcfc-0x98 // unlikely
         if                       // fcn.8039bcfc-0x54 // unlikely

    loc_0x8039654c: // orphan
         
         
         
         
         
         if                       // fcn.8039c564+0xf0 // unlikely
         if                       // fcn.8039c564+0x104 // unlikely

    loc_0x8039656c: // orphan
         if                       // fcn.8039c730+0x120 // unlikely
         if                       // unlikely

    loc_0x80396578: // orphan
         

    loc_0x8039657c: // orphan
         // CODE XREF from fcn.803afb68 @ +0x380
         if                       // fcn.8039c950+0x410 // unlikely
         if                       // fcn.8039c950+0x424 // unlikely

    loc_0x80396588: // orphan
         
         

    loc_0x803972e4: // orphan
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x14
         if                       // unlikely

    loc_0x803972f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803972fc: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x18
         if                       // unlikely
         if                       // unlikely

    loc_0x80397308: // orphan
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x8
         if                       // unlikely

    loc_0x80397314: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397320: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039732c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397344: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397350: // orphan
         if                       // unlikely
         if                       // fcn.803abbc8+0x10 // unlikely

    loc_0x8039735c: // orphan
         if                       // fcn.803abbc8+0x28 // unlikely
         if                       // unlikely

    loc_0x80397368: // orphan
         if                       // fcn.803abbc8+0xa4 // unlikely
         if                       // fcn.803abbc8+0x58 // unlikely

    loc_0x80397374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397380: // orphan
         if                       // fcn.803abbc8+0x9c // unlikely
         if                       // unlikely

    loc_0x8039738c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8039739c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803973fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397408: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397414: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397420: // orphan
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x20
         if                       // unlikely

    loc_0x80397474: // orphan
         if                       // fcn.803747c4+0x38694 // unlikely
         if                       // unlikely

    loc_0x80397480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039748c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397498: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803974f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397504: // orphan
         if                       // fcn.80388000+0x255a8 // unlikely
         if                       // fcn.80388000+0x255bc // unlikely

    loc_0x80397510: // orphan
         if                       // fcn.80388000+0x255e4 // unlikely
         if                       // fcn.80388000+0x25608 // unlikely

    loc_0x8039751c: // orphan
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x2c
         

    loc_0x80397524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397530: // orphan
         if                       // unlikely
         

    loc_0x80397538: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x34
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x30
         if                       // unlikely

    loc_0x8039755c: // orphan
         if                       // unlikely
         

    loc_0x80397564: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397580: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397598: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803975a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803975b0: // orphan
         if                       // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x40
         

    loc_0x803975b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803975c4: // orphan
         if                       // unlikely
         

    loc_0x8039792c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8039793c: // orphan
         if                       // unlikely
         

    loc_0x80397944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397950: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039795c: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x78
         if                       // unlikely
         if                       // unlikely

    loc_0x80397968: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397988: // orphan
         if                       // unlikely
         

    loc_0x80397990: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x7c
         if                       // unlikely
         if                       // unlikely

    loc_0x8039799c: // orphan
         if                       // unlikely
         

    loc_0x803979a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803979b0: // orphan
         if                       // fcn.803b0ff0-0x5c // unlikely
         if                       // unlikely

    loc_0x803979bc: // orphan
         if                       // fcn.803b0ff0 // unlikely
         if                       // unlikely

    loc_0x803979c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803979d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803979e0: // orphan
         if                       // fcn.80388000+0x29134 // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x80
         if                       // fcn.80388000+0x29148 // unlikely

    loc_0x803979ec: // orphan
         if                       // fcn.80388000+0x29190 // unlikely
         if                       // unlikely

    loc_0x803979f8: // orphan
         if                       // fcn.80388000+0x291cc // unlikely
         if                       // unlikely

    loc_0x80397a04: // orphan
         if                       // fcn.80388000+0x29268 // unlikely
         // CODE XREF from aav.0x803b0000 @ +0x84
         if                       // fcn.80388000+0x2927c // unlikely

    loc_0x80397a10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397a1c: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x88
         if                       // fcn.80388000+0x29330 // unlikely
         if                       // fcn.803b0ff0+0x394 // unlikely

    loc_0x80397a28: // orphan
         if                       // fcn.80388000+0x2936c // unlikely
         if                       // fcn.803b0ff0+0x390 // unlikely

    loc_0x80397a34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397a40: // orphan
         // CODE XREF from aav.0x803b0000 @ +0x8c
         if                       // unlikely
         if                       // unlikely

    loc_0x80397a4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397dc4: // orphan
         

    loc_0x80397dc8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397de0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397dec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397df8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e14: // orphan
         if                       // unlikely
         

    loc_0x80397e1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e28: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e44: // orphan
         
         // CODE XREF from fcn.803b00ac @ 0x803b00d4
         
         if                       // fcn.803b7620+0x170 // unlikely
         if                       // unlikely

    loc_0x80397e58: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80397e68: // orphan
         if                       // fcn.803b7c00+0x8c // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b00d8
         if                       // fcn.803b7c00+0xc0 // unlikely

    loc_0x80397e74: // orphan
         if                       // fcn.803b7d20+0x28 // unlikely
         if                       // fcn.803b7d20+0x4c // unlikely

    loc_0x80397e80: // orphan
         // CODE XREF from fcn.803b00ac @ +0x30
         if                       // fcn.80377c6c+0x218 // unlikely
         if                       // unlikely

    loc_0x80397e8c: // orphan
         if                       // unlikely
         

    loc_0x80397e94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397ea0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397eac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397eb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397ec4: // orphan
         if                       // unlikely
         

    loc_0x80397ecc: // orphan
         
         
         
         
         if                       // fcn.803784ac+0x184 // unlikely
         if                       // unlikely

    loc_0x80397ee8: // orphan
         if                       // fcn.803784ac+0x1b0 // unlikely
         if                       // unlikely

    loc_0x80397ef4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397fc0: // orphan
         if                       // fcn.80378fd0+0x24 // unlikely
         if                       // fcn.80379030+0x8 // unlikely

    loc_0x80397fcc: // orphan
         if                       // unlikely
         

    loc_0x80397fd4: // orphan
         if                       // unlikely
         

    loc_0x80397fdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80397fe8: // orphan
         if                       // unlikely
         

    loc_0x80397ff0: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803b00ec
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398000: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039800c: // orphan
         if                       // unlikely
         if                       // fcn.80379400+0x4 // unlikely

    loc_0x80398018: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398024: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398030: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039803c: // orphan
         
         
         
         
         
         

    loc_0x80398054: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803b00f0
         
         
         
         
         
         // CODE XREF from fcn.803b00ac @ +0x48
         
         if                       // fcn.803797fc+0x34 // unlikely
         if                       // unlikely

    loc_0x80398078: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398084: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398090: // orphan
         
         

    loc_0x80398098: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803980a4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803980bc: // orphan
         if                       // unlikely
         

    loc_0x803980c4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803980d4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803980e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803980f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398100: // orphan
         if                       // unlikely
         

    loc_0x8039817c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8039818c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8039819c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803981a8: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803981c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803981d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803981dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803981e8: // orphan
         if                       // unlikely
         

    loc_0x803981f0: // orphan
         
         if                       // fcn.8037b2bc+0xc // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b0104
         if                       // unlikely

    loc_0x80398200: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398214: // orphan
         if                       // unlikely
         if                       // fcn.8037b56c+0x20 // unlikely

    loc_0x80398220: // orphan
         if                       // fcn.8037b56c+0x58 // unlikely
         if                       // fcn.8037b56c+0x6c // unlikely

    loc_0x8039822c: // orphan
         if                       // fcn.80374110+0x75e0 // unlikely
         if                       // unlikely

    loc_0x80398238: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398244: // orphan
         if                       // fcn.8037b7bc+0x4c // unlikely
         if                       // fcn.8037b7bc+0x60 // unlikely

    loc_0x80398250: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039825c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398268: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398274: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398280: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398300: // orphan
           // CALL XREF from fcn.80ae13bc @ +0xa5c
         if                       // fcn.803b00ac-0x33d98 // unlikely
         // CALL XREF from fcn.83408b70 @ +0xbb8
         if                       // unlikely

    loc_0x8039830c: // orphan
         if                       // fcn.803b00ac-0x33d3c // unlikely
         // CODE XREF from fcn.803b00ac @ +0x60
         if                       // unlikely

    loc_0x80398318: // orphan
         if                       // fcn.803b00ac-0x33cf0 // unlikely
         if                       // unlikely

    loc_0x80398324: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398330: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039833c: // orphan
         if                       // fcn.803b00ac-0x33bcc // unlikely
         if                       // unlikely

    loc_0x80398348: // orphan
         if                       // fcn.803b00ac-0x33b00 // unlikely
         if                       // unlikely

    loc_0x80398354: // orphan
         if                       // fcn.803b00ac-0x33ab4 // unlikely
         if                       // unlikely

    loc_0x80398360: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b0110
         if                       // unlikely

    loc_0x8039836c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398378: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803b0114
         if                       // fcn.803b00ac-0x33850 // unlikely
         if                       // unlikely

    loc_0x80398384: // orphan
         if                       // unlikely
         if                       // fcn.803742ac+0x86f0 // unlikely

    loc_0x80398390: // orphan
         if                       // fcn.803742ac+0x8918 // unlikely
         if                       // unlikely

    loc_0x8039839c: // orphan
         if                       // fcn.8037ccc8+0x8 // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b011c
         if                       // fcn.8037ccc8+0x1c // unlikely

    loc_0x803983a8: // orphan
         if                       // fcn.8037ccc8+0xa4 // unlikely
         if                       // fcn.8037ccc8+0xb8 // unlikely

    loc_0x803983b4: // orphan
         if                       // fcn.8037ccc8+0xe0 // unlikely
         if                       // fcn.8037ccc8+0x194 // unlikely

    loc_0x803983c0: // orphan
         if                       // fcn.8037ccc8+0x16c // unlikely

    loc_0x803983c4: // orphan
         if                       // fcn.8037ccc8+0x180 // unlikely
         if                       // unlikely

    loc_0x803983cc: // orphan
         if                       // fcn.8037ccc8+0x278 // unlikely

    loc_0x803983d0: // orphan
         if                       // unlikely
         if                       // fcn.8037ccc8+0x1f0 // unlikely

    loc_0x803983d8: // orphan
         

    loc_0x803983dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803983e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803983f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398400: // orphan
         if                       // fcn.80387b74-0xa960 // unlikely
         if                       // unlikely

    loc_0x8039840c: // orphan
         
         if                       // fcn.803b00ac-0x32d48 // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b0120
         if                       // unlikely

    loc_0x8039841c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398428: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398430: // orphan
         

    loc_0x80398434: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b00ac @ +0x78
         if                       // unlikely

    loc_0x80398440: // orphan
         if                       // unlikely
         

    loc_0x80398448: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398458: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398468: // orphan
         if                       // fcn.803742ac+0x9720 // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b0128
         

    loc_0x80398470: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039847c: // orphan
         if                       // fcn.803742ac+0x9914 // unlikely
         // CODE XREF from fcn.803b00ac @ 0x803b012c
         if                       // fcn.803742ac+0x9928 // unlikely

    loc_0x80398488: // orphan
         if                       // fcn.803742ac+0x9950 // unlikely
         if                       // fcn.803742ac+0x9974 // unlikely

    loc_0x803988f8: // orphan
         if                       // fcn.803742ac+0xcedc // unlikely
         if                       // fcn.803742ac+0xcf30 // unlikely

    loc_0x80398904: // orphan
         if                       // fcn.803742ac+0xcf58 // unlikely
         // CODE XREF from fcn.803b01c0 @ +0x10
         if                       // fcn.803742ac+0xcf6c // unlikely

    loc_0x80398910: // orphan
         if                       // fcn.803742ac+0xcff4 // unlikely
         

    loc_0x80398c84: // orphan
         tge s0, 0, 0x362
         teq s0, 0, 0x362

    loc_0x80398d40: // orphan
         sp -= 0x30
         at = 0 + 5
         [sp + 0x14] = ra
         if                       // likely
         [sp + 0x34] = a1

    loc_0x80398d54: // orphan
         a2 = 0x800d << 16
         a2 += 0x510
         a1 = 0x8660 << 16
         a1 = [a1 + 0x7218]       // t9
         v1 = [a2 + 0]
         t7 = 0xe700 << 16
         a1 += 1
         t6 = v1 + 8
         [a2 + 0] = t6
         at = , a1 < 7
         [v1 + 4] = 0
         if                       // unlikely
         [v1 + 0] = t7

    loc_0x80398d88: // orphan
         at = 0x8660 << 16
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x7218] = a1
         at = 0 + 7

    loc_0x80398d98: // orphan
         div 0, v0, at
         a1 = hi
         a2 = 0x800d << 16
         a2 += 0x510              // arg3

    loc_0x80398da8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398d80
         v1 = [a2 + 0]            // arg3
         t9 = 0xfb00 << 16
         // CODE XREF from fcn.803b01c0 @ +0x5c
         t2 = 0 - 1               // s2

    loc_0x80398db4: // orphan
         t8 = v1 + 8
         [a2 + 0] = t8            // arg3
         [v1 + 0] = t9
         [v1 + 4] = t2
         v1 = [a2 + 0]            // arg3
         t5 = 0xffff << 16
         t5 |= 0xff
         t3 = v1 + 8
         // CODE XREF from fcn.803b01c0 @ +0x60
         [a2 + 0] = t3            // arg3
         t4 = 0xfa00 << 16
         [v1 + 0] = t4
         [v1 + 4] = t5
         v1 = [a2 + 0]            // arg3
         t8 = 0x3ffd << 16
         t7 = 0xfc50 << 16
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         t7 |= 0x9bff
         t8 |= 0xfe38
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [a2 + 0]            // arg3
         t2 = 0xdb06 << 16
         t2 |= 0x3c
         t9 = v1 + 8
         // CODE XREF from fcn.803b01c0 @ +0x64
         [a2 + 0] = t9            // arg3
         at = 0x8660 << 16
         [v1 + 0] = t2
         [at + 0x7218] = a1
         a0 = 0 + 0xe1            // arg1
         call 0x8004c990          // 0x8004c990(0xe1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         call 0x8004ca60          // 0x8004ca60(0xe1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         t3 = [sp + 0x1c]
         a2 = 0x800d << 16
         a2 += 0x510
         [t3 + 4] = v0
         v1 = [a2 + 0]
         t6 = 0x8660 << 16
         t6 += 0x6600

    loc_0x80398e58: // orphan
         t4 = v1 + 8
         [a2 + 0] = t4
         t5 = 0xde00 << 16
         [v1 + 0] = t5
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t6

    loc_0x80398e70: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398d4c
         ra = [sp + 0x14]
         sp += 0x30
         ret
         

    loc_0x803991d8: // orphan
         t1 = v1 + a0             // arg1
         // CODE XREF from fcn.803b01c0 @ +0xb8
         a2 = 0 + 5               // arg3
         goto 0x803991f4
         [s0 + 0x88] = t1

    loc_0x803991f4: // orphan
         // CODE XREF from fcn.80398300 @ 0x803991e0
         // CODE XREF from fcn.803b01c0 @ +0xc0
         v0 = [s0 + 0x60]         // t9
         beql v0, 0, 0x80399254   // fcn.803747c4+0x24a90 // unlikely
         a1 = [s0 + 0x5c]         // t9

    loc_0x803992fc: // orphan
         t5 = [t5 + 0x66f0]       // t9
         at = 0x8661 << 16
         // CODE XREF from fcn.803b01c0 @ +0xe0
         [at - 0x54f0] = a2
         at = 0x8661 << 16
         if                       // fcn.803992b0+0x90 // likely
         [at - 0x54f4] = a3

    loc_0x80399314: // orphan
         t8 = [s0 + 0x18]
         t9 = s0 + v1
         at = 0x8661 << 16
         t7 = t8 << 2
         t6 = a0 + t7             // arg1
         [t6 - 0x14] = 0
         [t9 + 0x60] = 0
         a1 = [s0 + 0x5c]         // t9
         [at - 0x54f0] = a2
         // CODE XREF from fcn.803b01c0 @ +0xe4
         at = 0x8661 << 16
         [at - 0x54f4] = a3

    loc_0x80399a6c: // orphan
         at = , t3 < 0xa
         if                       // likely
         v1 = 0

    loc_0x80399a78: // orphan
         t4 = [v0 + 0x94]         // t9

    loc_0x80399a7c: // orphan
         // CODE XREF from fcn.803b034c @ 0x803b0368
         t6 = 0x8660 << 16
         t7 = [v0 + 0x10]
         t5 = t4 << 2
         t6 += t5
         t6 = [t6 + 0x6adc]       // t9
         t9 = 0x8660 << 16
         t9 = [t9 + 0x6724]
         t8 = t6 + t7             // t9
         at = 0x8660 << 16
         // CODE XREF from fcn.803b0320 @ 0x803b036c
         t0 = t8 - t9
         goto 0x80399ac8
         [at + 0x674c] = t0

    loc_0x80399aac: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399a70
         t2 = 0x8660 << 16
         t2 = [t2 + 0x6724]       // t9
         t1 = [v0 + 0x10]
         at = 0x8660 << 16
         t3 = t1 - t2
         t4 = t3 - 5

    loc_0x80399ac4: // orphan
         // CODE XREF from fcn.803b0320 @ 0x803b0370
         [at + 0x674c] = t4

    loc_0x80399ac8: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399aa4
         a2 = 0x8661 << 16
         [v0 + 0] = 0
         a2 -= 0x5670             // arg3
         a3 = 0 + 0x58            // arg4
         a1 = 0 + 4               // arg2

    loc_0x80399adc: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399b00
         t5 = [a0 + 0]            // arg1
         beql t5, 0, 0x80399b00   // unlikely
         v1 += 1

    loc_0x80399ae8: // orphan
         // CODE XREF from fcn.803b0370 @ 0x803b0374
         unsigned , hi            // t9 // s2
         t6 = lo
         v0 = a2 + t6             // arg3
         [v0 + 4] = 0
         [v0 + 0x14] = 0
         v1 += 1

    loc_0x80399b00: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399ae0
         if                       // likely
         a0 += 4                  // arg1

    loc_0x80399b08: // orphan
         call 0x86600298          // 0x86600298(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.803b0320 @ 0x803b037c
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80399b58: // orphan
         lwc1 f8
         v1 += 0x6750
         div.s f16, f8, f10
         swc1 f16
         t7 = [t7 - 0x5620]       // t9
         v0 = 0 + 0xc9
         if                       // likely
         

    loc_0x80399b78: // orphan
         lwc1 f0
         at = 0x8660 << 16
         swc1 f0, 0x7448, at
         at = 0x8660 << 16
         swc1 f0, 0x7444, at
         swc1 f0, 0x7440, at

    loc_0x80399b90: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399b70
         t8 = [t8 - 0x55c8]       // t9
         v1 = 0x8660 << 16
         v1 += 0x6750
         if                       // likely
         

    loc_0x80399ba4: // orphan
         lwc1 f0
         at = 0x8660 << 16
         swc1 f0, 0x75b0, at
         at = 0x8660 << 16

    loc_0x80399bb4: // orphan
         swc1 f0, 0x75ac, at
         swc1 f0, 0x75a8, at

    loc_0x80399bbc: // orphan
         // CODE XREF from fcn.80398300 @ 0x80399b9c
         t9 = [t9 - 0x5570]
         if                       // fcn.80387bbc+0x12024 // likely
         

    loc_0x80399bc8: // orphan
         lwc1 f0
         at = 0x8660 << 16
         swc1 f0, 0x7718, at
         at = 0x8660 << 16
         swc1 f0, 0x7714, at
         swc1 f0, 0x7710, at

    loc_0x8039a1b0: // orphan
         at = 0x8660 << 16
         lwc1 f24, 0x7074, at
         t2 -= a0                 // arg1
         t2 <<= 2
         at = 0x4f80 << 16
         mtc1 at, f22
         t2 += a0                 // arg1
         t3 = 0x8660 << 16
         t3 += 0x7410
         t2 <<= 3
         at = 0xc382 << 16
         t4 = t2 + t3
         fp = 0x8660 << 16
         mtc1 at, f20
         fp += 0x7260
         [sp + 0x78] = t4
         s2 = 0
         s7 = 0 + 4
         s6 = 0 + 3
         s5 = 0 + 1               // lo
         s3 = 0 + 2

    loc_0x8039a898: // orphan
         at = 0 + 0xc
         t1 = [sp + 0x20]
         // CODE XREF from fcn.803b0430 @ 0x803b047c
         v0 = , signed  v0 >> 0x10
         if                       // likely
         

    loc_0x8039a8ac: // orphan
         t2 = [t1 + 0x3c]         // t9
         t3 = s1 << 2

    loc_0x8039a8b4: // orphan
         // CODE XREF from fcn.803b0430 @ 0x803b0480
         t4 = 0x8660 << 16
         at = , t2 < 0x15
         if                       // unlikely
         t4 += t3

    loc_0x8039a8c4: // orphan
         t4 = [t4 + 0x66f4]       // t9
         beql t4, 0, 0x8039a8e4   // unlikely
         at = 0 + 0xd

    loc_0x8039a8d0: // orphan
         t5 = [sp + 0x20]
         a0 = s0
         t6 = [t5 + 8]
         if                       // likely
         at = 0 + 0xd

    loc_0x8039a8e4: // orphan
         if                       // likely
         t7 = [sp + 0x20]

    loc_0x8039a8ec: // orphan
         [t7 + 0x3c] = 0
         a0 = s0
         call 0x8003ef48          // 0x8003ef48(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xd
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0xd, 0x8, -1)
         a1 = 0 + 0xd
         goto 0x8039a924
         

    loc_0x8039a910: // orphan
         call 0x8003ef48          // 0x8003ef48(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xb
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0xb, 0x8, -1)
         // CODE XREF from fcn.803b0430 @ 0x803b048c
         // CODE XREF from fcn.82aebe50 @ +0x318
         a1 = 0 + 0xb

    loc_0x8039a924: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039a908
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         at = 0 + 1               // lo
         if                       // likely
         t8 = [sp + 0x20]

    loc_0x8039a938: // orphan
         [t8 + 0x28] = 0
         t9 = [sp + 0x20]
         a0 = s0

    loc_0x8039a944: // orphan
         // CODE XREF from fcn.803b0430 @ 0x803b0490
         a1 = 0
         call 0x8003ef48          // 0x8003ef48(-1, 0x0, 0x8, -1)
         [t9 + 0x10] = 0
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x0, 0x8, -1)
         a1 = 0
         s0 = s1 << 2
         s0 -= s1
         s0 <<= 2
         s0 -= s1
         s0 <<= 2
         s0 += s1
         t0 = 0x8660 << 16
         t0 += 0x7410
         s0 <<= 3
         a0 = s0 + t0
         call 0x8003f210          // 0x8003f210(0xe2b81ec5cef945d8, 0x0, 0x8, -1)
         a1 = 0
         mtc1 0, f0
         t1 = 0x8661 << 16
         t1 -= 0x6760
         v1 = s0 + t1
         swc1 f0, 0x34, v1
         swc1 f0, 0x30, v1

    loc_0x8039a9a4: // orphan
         ra = [sp + 0x1c]

    loc_0x8039ad10: // orphan
         s2 = a3 + t8             // arg4
         t4 = t3 + v1
         t5 = 0x8660 << 16
         swc1 f6, 0x24, s2
         t5 += t4
         t5 = [t5 + 0x6bc0]       // t9
         at = 0x8660 << 16
         [sp + 0x18] = s0
         mtc1 t5, f8
         s0 = a1                  // t0
         [sp + 0x24] = ra
         cvt.s.w f10, f8
         [sp + 0x28] = a0
         v0 = 0 + 2
         swc1 f10, 0x28, s2
         lwc1 f0, 0x6718, at
         swc1 f0, 0x34, s2
         if                       // unlikely
         swc1 f0, 0x30, s2

    loc_0x8039ad5c: // orphan
         beql a2, v0, 0x8039ae2c  // unlikely
         t1 = [s1 + 0x28]         // t9

    loc_0x8039ad64: // orphan
         v0 = 0 + 3
         beql a2, v0, 0x8039ae8c  // unlikely
         t3 = [s1 + 0x28]         // t9

    loc_0x8039ad70: // orphan
         v0 = 0 + 4
         beql a2, v0, 0x8039aeec  // unlikely
         t5 = [s1 + 0x28]         // t9

    loc_0x8039ad7c: // orphan
         mtc1 0, f0
         [s1 + 0x4c] = 0
         swc1 f0, 0x34, s2
         goto 0x8039af44          // fcn.80387c30+0x13314
         swc1 f0, 0x30, s2

    loc_0x8039ad90: // orphan
         t6 = [s1 + 0x28]         // t9
         t7 = 0x8660 << 16
         t7 += 0x7410
         if                       // likely
         a0 = a3 + t7             // arg4

    loc_0x8039ada4: // orphan
         mtc1 0, f0
         goto 0x8039af48          // fcn.80387c30+0x13318
         t7 = [s1 + 0x10]         // t9

    loc_0x8039adb0: // orphan
         [s1 + 0x28] = t0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         a0 = [sp + 0x28]         // t9
         call 0x8003ef48          // 0x8003ef48(-1, 0x3, 0x8, -1)
         a1 = 0
         a0 = [sp + 0x28]         // t9
         call 0x8003f3bc          // 0x8003f3bc(-1, 0x0, 0x8, -1)

    loc_0x8039ae2c: // orphan
         t2 = 0x8660 << 16
         t2 += 0x7410
         if                       // likely
         a0 = a3 + t2             // arg4

    loc_0x8039ae3c: // orphan
         mtc1 0, f0
         goto 0x8039af48          // fcn.80387c30+0x13318
         t7 = [s1 + 0x10]         // t9

    loc_0x8039ae48: // orphan
         [s1 + 0x28] = v0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 4
         a0 = [sp + 0x28]         // t9
         call 0x8003ef48          // 0x8003ef48(-1, 0x4, 0x8, -1)
         a1 = 0
         a0 = [sp + 0x28]         // t9
         call 0x8003f3bc          // 0x8003f3bc(-1, 0x0, 0x8, -1)
         a1 = 0 + 4
         a0 = s0 + 0x2f04
         a0 &= 0xffff
         call 0x80027a28          // 0x80027a28(0x3008, 0x4, 0x8, -1)
         a1 = s0 & 0xff
         // CODE XREF from fcn.803b0430 @ +0xc8
         mtc1 0, f0
         goto 0x8039af44          // fcn.80387c30+0x13314
         t0 = 0 + 1               // lo

    loc_0x8039ae8c: // orphan
         t4 = 0x8660 << 16

    loc_0x8039ae90: // orphan
         // CODE XREF from fcn.803b0430 @ +0xcc
         t4 += 0x7410
         if                       // likely
         a0 = a3 + t4             // arg4

    loc_0x8039ae9c: // orphan
         mtc1 0, f0
         goto 0x8039af48          // fcn.80387c30+0x13318
         t7 = [s1 + 0x10]         // t9

    loc_0x8039aea8: // orphan
         [s1 + 0x28] = v0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = t0
         a0 = [sp + 0x28]         // t9
         call 0x8003ef48          // 0x8003ef48(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = [sp + 0x28]         // t9
         call 0x8003f3bc          // 0x8003f3bc(-1, 0x0, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = s0 + 0x2f04
         a0 &= 0xffff
         call 0x80027a28          // 0x80027a28(0x3008, 0x1, 0x8, -1)
         a1 = s0 & 0xff
         mtc1 0, f0
         goto 0x8039af44          // fcn.80387c30+0x13314
         t0 = 0 + 1               // lo

    loc_0x8039aeec: // orphan
         t6 = 0x8660 << 16
         t6 += 0x7410
         if                       // likely
         a0 = a3 + t6             // arg4

    loc_0x8039aefc: // orphan
         mtc1 0, f0
         goto 0x8039af48          // fcn.80387c30+0x13318
         t7 = [s1 + 0x10]         // t9

    loc_0x8039af08: // orphan
         [s1 + 0x28] = v0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         // CODE XREF from fcn.803b0508 @ +0x8
         a0 = [sp + 0x28]         // t9
         call 0x8003ef48          // 0x8003ef48(-1, 0x2, 0x8, -1)
         a1 = 0
         a0 = [sp + 0x28]         // t9
         call 0x8003f3bc          // 0x8003f3bc(-1, 0x0, 0x8, -1)
         // CODE XREF from fcn.803b0508 @ 0x803b0514
         a1 = 0 + 2
         a0 = s0 + 0x2f04
         a0 &= 0xffff
         call 0x80027a28          // 0x80027a28(0x3008, 0x2, 0x8, -1)
         a1 = s0 & 0xff

    loc_0x8039afc4: // orphan
         if                       // likely
         a1 = 1 << 16

    loc_0x8039afcc: // orphan
         t8 -= s0
         t8 <<= 2
         t8 -= s0
         t8 <<= 3
         at = 0x8661 << 16
         at += t8
         goto 0x8039b100          // fcn.803b0508-0x15408
         [at - 0x5654] = v0

    loc_0x8039afec: // orphan
         call 0x8003eb74          // 0x8003eb74(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x3c] = a2
         t9 = s0 << 2
         t9 -= s0
         t9 <<= 2
         t9 -= s0
         t0 = 0x8661 << 16
         t0 -= 0x5670
         t9 <<= 3
         v1 = t9 + t0
         a0 = [v1 + 0x3c]         // t9
         a1 = s0
         if                       // unlikely
         t1 = a0 + 1

    loc_0x8039b024: // orphan
         [v1 + 0x3c] = t1

    loc_0x8039b028: // orphan
         a0 = [sp + 0x3c]         // a2
         call 0x86601a04          // 0x86601a04(0x8, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v1
         v1 = [sp + 0x24]
         at = 0 - 1               // s2
         v0 = [v1 + 0x28]         // t9

    loc_0x8039b040: // orphan
         [v1 + 0x10] = 0
         if                       // fcn.803b0508-0x15408 // unlikely
         at = 0 + 1               // lo

    loc_0x8039b04c: // orphan
         if                       // unlikely
         a0 = s0 << 8

    loc_0x8039b054: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x8039b060: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x8039b068: // orphan
         if                       // likely
         a0 |= 0x200b             // t9

    loc_0x8039b06c: // orphan
         a0 |= 0x200b             // t9

    loc_0x8039b070: // orphan
         a0 &= 0xffff

    loc_0x8039b074: // orphan
         a1 = s0 & 0xff
         call 0x80027a28          // 0x80027a28(-1, 0x4, 0x8, -1)
         [sp + 0x24] = v1
         v1 = [sp + 0x24]

    loc_0x8039b084: // orphan
         t2 = s0 << 2
         t2 += s0
         t3 = 0x800d << 16
         t3 -= 0x1fa0
         t2 <<= 3
         [v1 + 0x4c] = 0
         a0 = t2 + t3
         call 0x86601c98          // 0x86601c98(0x800d0900, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         at = 0 + 1               // lo
         if                       // likely
         t4 = s0 << 2

    loc_0x8039b0b4: // orphan
         call 0x866017e0          // 0x866017e0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.803b0508 @ 0x803b0544
         a0 = s0
         a0 = [sp + 0x3c]         // a2
         call 0x86601f70          // 0x86601f70(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         goto 0x8039b104          // fcn.803b0508-0x15404
         ra = [sp + 0x1c]

    loc_0x8039b0d0: // orphan
         t4 -= s0
         t4 <<= 2
         t4 -= s0

    loc_0x8039b134: // orphan
         a2 = v0 << 2             // arg3

    loc_0x8039b1c0: // orphan
         call 0x8003eb74          // 0x8003eb74(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a2
         v0 = [s0 + 0x48]         // t9
         a2 = [sp + 0x24]
         a3 = 0 + 1               // lo
         v0 = , signed  v0 >> 0x10 // t9
         at = , v0 < 4
         if                       // unlikely
         t9 = 0x8660 << 16

    loc_0x8039b238: // orphan
         v0 = a2 + t9             // arg3
         v1 = [v0 + 0x44]         // t9
         beql v1, 0, 0x8039b36c   // fcn.80387c30+0x1373c // unlikely
         ra = [sp + 0x1c]

    loc_0x8039c894: // orphan
         t0 = , unsigned  halfword [s0 + 0]
         t8 = [s2 + 0]            // t9
         a3 = halfword [s0 + 2]
         t2 = 0 + 0x36
         t1 = v1 << 1
         t9 = t8 + t0
         a2 = t2 - t1
         a0 = t9 + v1
         t4 = t0 - 1
         t5 = t4 << 5
         a0 <<= 0x10
         a2 <<= 0x10
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x10] = t5
         [sp + 0x20] = 0
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xfffff8cf, 0x442f71dcfe116408, 0xfffffbf6, 0xafb8)
         a1 = halfword [s2 + 6]
         t7 = [s2 + 0]            // t9
         t3 = , unsigned  halfword [s0 + 0]
         t9 = 0x8660 << 16
         t9 = [t9 + 0x6808]
         t8 = t7 + t3
         t2 = 0 + 1               // lo
         a0 = t8 - t9
         a0 += 0x36
         [sp + 0x10] = t2
         [sp + 0x14] = 0
         a1 = [s2 + 4]
         a2 = s0
         call 0x8004d150          // 0x8004d150(0xf6e6, 0xfefe38ff, 0x104, 0xafb8)
         a3 = 0
         v1 = 0x8660 << 16
         v1 = [v1 + 0x6808]       // t9
         t1 = 0x8660 << 16
         bltzl v1, 0x8039c95c     // unlikely
         t5 = [s1 + 0x10]         // t9

    loc_0x8039c938: // orphan
         t1 = [t1 + 0x6714]       // t9
         t4 = v1 - 1
         at = 0x8660 << 16
         if                       // fcn.8039c950 // fcn.8039c950 // likely
         

    loc_0x8039c94c: // orphan
         [at + 0x6808] = t4

    loc_0x8039c95c: // orphan
         mtc1 0, f22
         at = 0 + 1               // lo
         if                       // likely
         mov.s f24, f22

    loc_0x8039c96c: // orphan
         call 0x8003570c          // "0N" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = v0 & 1              // lo
         mtc1 t6, f8
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f24, f8

    loc_0x8039c988: // orphan
         mtc1 at, f4
         
         add.s f24, f24, f4

    loc_0x8039c994: // orphan
         t7 = 0x8660 << 16
         t7 = [t7 + 0x6714]       // t9
         t3 = 0x8660 << 16
         t1 = 0x8660 << 16
         if                       // likely
         a0 = 0 + 0x199

    loc_0x8039c9ac: // orphan
         t3 = halfword [t3 + 0x7228]
         at = 0x8660 << 16
         t8 = t3 + 0x1000
         halfword [at + 0x7228] = t8
         t9 = [s1 + 0x54]
         t2 = t9 + 1
         goto 0x8039c9d0
         [s1 + 0x54] = t2

    loc_0x8039c9cc: // orphan
         mov.s f24, f22

    loc_0x8039c9d0: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039c9c4
         t1 = [t1 + 0x678c]       // t9
         at = 0 + 1               // lo
         beql t1, at, 0x8039ca00  // unlikely
         t6 = [s1 + 0x54]

    loc_0x8039c9e0: // orphan
         t4 = [s1 + 0x28]         // s4
         at = 0 + 5
         t5 = 0 + 0xa
         beql t4, at, 0x8039ca00  // unlikely
         t6 = [s1 + 0x54]

    loc_0x8039c9f4: // orphan
         [s1 + 0x54] = t5
         mov.s f24, f22
         t6 = [s1 + 0x54]         // t9

    loc_0x8039ca00: // orphan
         at = , t6 < 0x15         // lo
         bnel at, 0, 0x8039ca14   // likely
         t7 = [s1 + 0xc]          // t9

    loc_0x8039ca0c: // orphan
         [s1 + 0x54] = 0
         t7 = [s1 + 0xc]          // t9

    loc_0x8039ca14: // orphan
         at = 0x8660 << 16
         lwc1 f10, 0x673c, at
         mtc1 t7, f6
         t3 = [s1 + 0x28]         // s4
         at = 0 + 5
         cvt.s.w f20, f6
         if                       // likely
         div.s f20, f20, f10

    loc_0x803ab108: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x84
         // CODE XREF from fcn.80398300 @ 0x803ab1a4
         a0 = 0x8673 << 16
         a0 -= 0x7bf8
         v0 = 0

    loc_0x803ab114: // orphan
         lwc1 f2, 0x10, a0
         t9 = v0 << 2
         t0 = a2 + t9

    loc_0x803ab120: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a077c
         c.le.s f0, f2
         
         bc1fl 0x803ab144

    loc_0x803ab12c: // orphan
         v0 += 1
         t1 = [t0 + 0]            // t9
         bnel t1, 0, 0x803ab144   // likely
         v0 += 1

    loc_0x803ab13c: // orphan
         mov.s f0, f2
         v0 += 1

    loc_0x803ab144: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x90
         at = , v0 < 4
         if                       // unlikely
         // CODE XREF from fcn.803747c4 @ 0x803a0778
         a0 += 0xac

    loc_0x803ab150: // orphan
         a0 = 0x8673 << 16
         a0 -= 0x7bf8
         v0 = 0

    loc_0x803ab15c: // orphan
         lwc1 f4, 0x10, a0
         t2 = v0 << 2
         t3 = a2 + t2
         c.eq.s f0, f4
         t4 = a1 + 1
         bc1fl 0x803ab188
         v0 += 1
         [t3 + 0] = a3
         v1 += 1

    loc_0x803ab180: // orphan
         [a0 + 0x34] = t4
         v0 += 1
         at = , v0 < 4
         if                       // unlikely
         a0 += 0xac

    loc_0x803ab194: // orphan
         at = , v1 < 4
         if                       // likely
         

    loc_0x803ab1a0: // orphan
         mtc1 0, f0
         goto 0x803ab108
         a1 = v1

    loc_0x803ab1ac: // orphan
         v0 = 0x8673 << 16
         v0 = [v0 - 0x7b50]       // t9
         at = 0x8673 << 16

    loc_0x803ab1b8: // orphan
         if                       // unlikely
         

    loc_0x803ab1c0: // orphan
         [at - 0x7bc4] = v0

    loc_0x803ab1c4: // orphan
         v0 = 0x8673 << 16
         v0 = [v0 - 0x7aa4]       // t9
         at = 0x8673 << 16
         if                       // unlikely
         

    loc_0x803ab1d8: // orphan
         [at - 0x7b18] = v0

    loc_0x803ab1dc: // orphan
         v0 = 0x8673 << 16
         v0 = [v0 - 0x79f8]       // t9
         at = 0x8673 << 16
         if                       // unlikely
         

    loc_0x803ab1f0: // orphan
         [at - 0x7a6c] = v0

    loc_0x803ab1f4: // orphan
         v0 = 0x8673 << 16
         v0 = [v0 - 0x794c]       // t9
         at = 0x8673 << 16
         if                       // unlikely
         

    loc_0x803ab208: // orphan
         [at - 0x79c0] = v0

    loc_0x803ab20c: // orphan
         ret                      // ra
         sp += 0x30

    loc_0x803ab214: // orphan
         sp -= 0x48
         [sp + 0x44] = ra
         a0 = 0x8671 << 16
         [sp + 0x40] = fp
         [sp + 0x3c] = s7

    loc_0x803ab228: // orphan
         [sp + 0x38] = s6
         [sp + 0x34] = s5
         [sp + 0x30] = s4
         [sp + 0x2c] = s3
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         [sp + 0x20] = s0
         sdc1 f20, 0x18, sp
         call 0x87f0277c          // 0x87f0277c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x26b8
         a0 = 0x8671 << 16
         call 0x87f0277c          // 0x87f0277c(0x86710000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x798
         a0 = 0x8671 << 16
         call 0x87f0277c          // 0x87f0277c(0x86710000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x1a40
         t6 = 0x8671 << 16
         t6 = [t6 - 0x4c6c]       // t9
         at = 0 + 1               // lo
         t7 = 0x8671 << 16
         if                       // unlikely
         s3 = 0

    loc_0x803ab280: // orphan
         t7 = [t7 - 0x447c]       // t9
         at = 0x8671 << 16
         fp = 0x8671 << 16
         t8 = t7 + 1
         [at - 0x447c] = t8
         at = , t8 < 6
         if                       // unlikely
         fp -= 0x3680

    loc_0x803ab2a0: // orphan
         at = 0x8671 << 16
         [at - 0x447c] = 0

    loc_0x803ab2a8: // orphan
         at = 0x43e1 << 16
         s6 = 0x8671 << 16
         s4 = 0x8671 << 16
         mtc1 at, f20
         s4 += 0x1760
         s6 -= 0xf8
         s7 = 0 + 0x3c
         s5 = 0 + 0x168
         s2 = 0 - 1

    loc_0x803ab2cc: // orphan
         s0 = 0
         s1 = fp

    loc_0x803ab2d4: // orphan
         v0 = [s1 + 0]            // t9
         t9 = s3 << 2
         beql s2, v0, 0x803ab348  // unlikely
         s0 += 1

    loc_0x803ab2e4: // orphan
         unsigned , hi
         t9 += s3
         t9 <<= 2
         t9 += s3
         t9 <<= 3
         t9 += s3
         t9 <<= 2
         t9 -= s3
         t9 <<= 5
         t0 = s4 + t9
         t1 = lo
         a0 = t0 + t1
         lwc1 f4, 0x2c, a0
         a2 = s2 << 0x10
         t2 = v0 << 2
         c.lt.s f4, f20
         t3 = s6 + t2
         a2 = , signed  a2 >> 0x10 // t9
         a1 = 0
         bc1fl 0x803ab348
         s0 += 1
         call 0x8003f114          // 0x8003f114(0x245fffffdb9b, 0x0, -1, -1)
         a3 = [t3 + 0]            // t9

    loc_0x803ab340: // orphan
         [s1 + 0] = s2
         s0 += 1

    loc_0x803ab348: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a0784
         if                       // likely
         s1 += 0x10

    loc_0x803ab350: // orphan
         s3 += 1
         at = 0 + 4
         if                       // likely
         fp += 0x3c0

    loc_0x803ab360: // orphan
         call 0x867097d8          // 0x867097d8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t4 = 0x8671 << 16

    loc_0x803ab36c: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a0788
         t4 = [t4 - 0x44a8]       // t9
         at = 0x8671 << 16
         t5 = t4 + 1
         [at - 0x44a8] = t5

    loc_0x803ab37c: // orphan
         ra = [sp + 0x44]
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]         // t9
         s3 = [sp + 0x2c]         // t9
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]         // t9
         s6 = [sp + 0x38]
         // CODE XREF from fcn.803a06f0 @ +0x9c
         s7 = [sp + 0x3c]         // a2
         fp = [sp + 0x40]         // t9
         ret
         sp += 0x48

    loc_0x803ab5b4: // orphan
         s0 = 0
         // CODE XREF from fcn.803747c4 @ 0x803a07d4
         s1 = s6

    loc_0x803ab5bc: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         s0 += 0x168
         if                       // likely
         // CODE XREF from fcn.803747c4 @ 0x803a07d8
         s1 += 0x168

    loc_0x803ab5d0: // orphan
         t5 = [s5 + 0x44]         // t9
         at = 0 + 1               // lo
         t6 = s3 << 2
         if                       // likely
         t8 = 0x8671 << 16

    loc_0x803ab5e4: // orphan
         t7 = [sp + 0x44]
         t8 -= 0x3f18
         at = 0 - 1               // s2
         if                       // likely
         s0 = t6 + t8

    loc_0x803ab5f8: // orphan
         goto 0x803ab604
         [sp + 0x44] = s3

    loc_0x803ab600: // orphan
         [sp + 0x40] = s3

    loc_0x803ab604: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a07e0
         // CODE XREF from fcn.80398300 @ 0x803ab5f8
         t9 = 0 + 9
         [s5 + 0x2c] = t9
         a0 = s4
         call 0x8003f210          // "\u0182" // 0x8003f210(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 6

    loc_0x803ab618: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a07e4
         lwc1 f2, 0x24, s4
         t2 = 0x8671 << 16
         at = 0x8671 << 16
         swc1 f2
         t2 = [t2 - 0x3f08]       // t9
         t1 = [sp + 0x50]         // a2
         [at - 0x3790] = s3
         mtc1 t2, f8
         at = 0x8671 << 16
         swc1 f2, -0x37a4, at
         cvt.s.w f10, f8
         at = 0x8671 << 16
         t3 = t1 + 1
         [sp + 0x50] = t3

    loc_0x803ab650: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a07ec
         div.s f12, f2, f10
         goto 0x803ab66c
         swc1 f12, -0x3788, at

    loc_0x803ab65c: // orphan
         [s5 + 0x2c] = s7
         a0 = s4
         call 0x8003f210          // "&s" // 0x8003f210(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = fp

    loc_0x803ab66c: // orphan
         // CODE XREF from fcn.80398300 @ 0x803ab654
         s3 += 1
         s6 += 0x5460
         s5 += 0xac
         if                       // likely
         s4 += 0x168

    loc_0x803ab680: // orphan
         t4 = [sp + 0x50]
         v0 = 0x8671 << 16
         t5 = [sp + 0x40]         // t9
         at = , t4 < 2
         if                       // unlikely
         t3 = 0x8671 << 16

    loc_0x803ab698: // orphan
         t7 = [sp + 0x44]         // t9
         v0 -= 0x3f18
         t6 = t5 << 2
         t9 = t7 << 2
         // CODE XREF from fcn.803747c4 @ 0x803a07f4
         t2 = v0 + t9
         t8 = v0 + t6
         lwc1 f16
         lwc1 f18
         at = 0x4000 << 16
         mtc1 at, f6
         add.s f4, f16, f18
         mtc1 0, f10
         t1 = 0x8671 << 16

    loc_0x803ab6cc: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a07f8
         t1 = [t1 - 0x3f08]       // t9

    loc_0x803ab6d0: // orphan
         div.s f2, f4, f6
         at = 0x4040 << 16
         mtc1 t1, f8
         
         cvt.s.w f0, f8
         c.eq.s f2, f10
         
         bc1fl 0x803ab700
         div.s f12, f2, f0
         mtc1 at, f2
         
         div.s f12, f2, f0
         at = 0x8671 << 16
         // CODE XREF from fcn.803747c4 @ 0x803a0800
         swc1 f2, -0x37a4, at
         at = 0x8671 << 16
         swc1 f12, -0x3788, at

    loc_0x803ab710: // orphan
         t3 = [t3 - 0x4454]       // t9
         at = 0 + 1               // lo

    loc_0x803ab718: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a0804
         t4 = 0x8671 << 16
         if                       // likely
         t5 = 0 + 1               // lo

    loc_0x803ab724: // orphan
         t4 = [t4 - 0x3f08]       // t9
         at = 0x4040 << 16
         mtc1 at, f16
         mtc1 t4, f18
         mtc1 at, f2
         at = 0x8671 << 16
         cvt.s.w f4, f18
         swc1 f2, -0x37a4, at
         at = 0x8671 << 16
         div.s f12, f16, f4
         swc1 f12, -0x3788, at

    loc_0x803ab750: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a080c
         at = 0x8671 << 16
         goto 0x803ab92c
         [at - 0x4478] = t5

    loc_0x803ab8a8: // orphan
         
         bc1fl 0x803ab8e4
         lwc1 f4, 0x20, t0
         lwc1 f16, 0x20, t0
         at = 0x8671 << 16

    loc_0x803ab8bc: // orphan
         lwc1 f2, -0x37a4, at
         add.s f0, f16, f12
         c.le.s f0, f2
         
         bc1f 0x803ab908
         
         swc1 f0, 0x20, t0
         goto 0x803ab908
         s6 += 1

    loc_0x803ab908: // orphan
         // CODE XREF from fcn.80398300 @ 0x803ab8d8
         bnel s6, 0, 0x803ab930   // likely
         ra = [sp + 0x3c]         // a2

    loc_0x803ab910: // orphan
         goto 0x803ab92c
         [t0 + 0x40] = t4

    loc_0x803ab92c: // orphan
         // CODE XREFS from fcn.80398300 @ 0x803ab754, 0x803ab910
         ra = [sp + 0x3c]         // a2

    loc_0x803ab930: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803ab408
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // s0
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // s4
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x58

    loc_0x803aba84: // orphan
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.803a06f0 @ +0x1e4
         a2 = 0 - 1               // s2
         // CODE XREFS from fcn.803a06f0 @ +0x168, +0x178, +0x188
         a0 = 0x8672 << 16
         a3 = 0x8671 << 16
         // CODE XREF from fcn.803a06f0 @ +0x160
         a3 = [a3 - 0x110]        // t9
         a0 += 0x7150
         // CODE XREF from fcn.803a06f0 @ +0x1e8
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x86727150, 0x0, -1, -1)
         a2 = 0 - 1               // s2
         a0 = 0x8672 << 16
         a3 = 0x8671 << 16
         a3 = [a3 - 0x10c]        // t9
         a0 += 0x72b8
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x867272b8, 0x0, -1, -1)
         a2 = 0 - 1               // s2
         goto 0x803abcd8          // fcn.803abbc8+0x110
         ra = [sp + 0x14]

    loc_0x803abb20: // orphan
         t8 = t7 + 0x3c0
         at = , t8 < 0x195b       // lo
         bnel at, 0, 0x803abcd8   // fcn.803abbc8+0x110 // likely
         ra = [sp + 0x14]

    loc_0x803abb30: // orphan
         halfword [v1 + 0] = t9
         goto 0x803abcd4          // fcn.803abbc8+0x10c
         [v0 + 0x40] = t2

    loc_0x803abbbc: // orphan
         mtc1 at, f19
         cvt.d.s f16, f10
         at = 0x8671 << 16

    loc_0x803abc74: // orphan
         goto 0x803abcd4
         // CODE XREF from fcn.803a06f0 @ +0x1c0
         [v0 + 0x40] = t8

    loc_0x803abc8c: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x1c8
         a0 = 0x8672 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86720000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x6bb0
         a0 = 0x8672 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86720000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x6d18
         // CODE XREFS from fcn.803a06f0 @ +0x170, +0x180, +0x1d0
         a0 = 0x8672 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86720000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x6e80
         a0 = 0x8672 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86720000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x6fe8
         // CODE XREF from fcn.803a06f0 @ +0x1d8
         a0 = 0x8672 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86720000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x7150
         a0 = 0x8672 << 16

    loc_0x803abf88: // orphan
         v0 -= 0x4180
         t6 = halfword [v0 + 0]
         t7 = t6 - 0x80
         call 0x87f02104          // 0x87f02104(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v0 + 0] = t7
         a1 = 0 + 1               // lo
         if                       // unlikely
         v1 = 0 + 2

    loc_0x803abfa8: // orphan
         if                       // unlikely
         a0 = 0 | 0xffff

    loc_0x803abfb0: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 | 0xffff

    loc_0x803abfbc: // orphan
         goto 0x803ac040
         

    loc_0x803abfc4: // orphan
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80007b34          // 0x80007b34(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         v1 = 0 + 2
         t8 = 0 + 0xc
         [s0 + 0] = t8
         goto 0x803ac040
         [s0 + 0x30] = v1

    loc_0x803abfe8: // orphan
         [s0 + 0x48] = 0
         [s0 + 0] = v1
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 0x30] = v1
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         goto 0x803ac040
         

    loc_0x803ac008: // orphan
         [s0 + 0x48] = a1
         [s0 + 0] = v1
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 0x30] = v1
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         goto 0x803ac040
         

    loc_0x803ac040: // orphan
         // CODE XREFS from fcn.80398300 @ 0x803abfbc, 0x803abfe0, 0x803ac000, 0x803ac020
         a0 = 0x8671 << 16
         call 0x87f0d5b8          // 0x87f0d5b8(0x86710000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x26e0
         call 0x87f00930          // 0x87f00930(0x8670d920, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87f0c9d0          // 0x87f0c9d0(0x8670d920, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         ra = [sp + 0x1c]
         v0 = [s0 + 0]            // v1
         s0 = [sp + 0x18]
         ret
         sp += 0x20

    loc_0x803ac134: // orphan
         s7 = 0 + 0x19
         swc1 f8, -0x4184, at

    loc_0x803ac13c: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s3 + 0]
         a0 = s4
         a1 = 0
         a2 = 0 - 1               // s2

    loc_0x803ac164: // orphan
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = [s6 + 0]            // t9
         a0 = s0
         call 0x8003ef48          // 0x8003ef48(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = s0

    loc_0x803ac17c: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.803a06f0 @ +0x21c
         a1 = 0
         call 0x8007afa0          // 0x8007afa0(-1, 0x0, 0x8, -1)
         
         div 0, v0, s7
         a1 = hi
         // CODE XREF from fcn.803a06f0 @ +0x220
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s0
         if                       // likely
         

    loc_0x803ac1a8: // orphan
         break 7

    loc_0x803ac1ac: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ac1b8: // orphan
         if                       // likely
         

    loc_0x803ac1c0: // orphan
         break 6

    loc_0x803ac1c4: // orphan
         call 0x8003eb84          // "&1" // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s1 += 0xac

    loc_0x803ac1d0: // orphan
         s2 += 0x168
         s0 += 0x168
         s3 += 4
         s4 += 0x168

    loc_0x803ac1e0: // orphan
         if                       // likely
         [s1 - 0x80] = 0

    loc_0x803ac1e8: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x224
         s5 = 0x8671 << 16
         s5 -= 0x44b8
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         s0 = 0 + 3

    loc_0x803ac1fc: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x228
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86708720          // 0x86708720(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8670a4d4          // 0x8670a4d4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s5 + 0]
         if                       // likely
         [s5 + 0] = v0

    loc_0x803ac21c: // orphan
         ra = [sp + 0x3c]         // a2
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // s0
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // s4
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // a2
         sp += 0x40

    loc_0x803ac6f4: // orphan
         call fcn.80183830        // fcn.80183830(-1, 0x442f71dcfe116408)
         
         goto 0x8850000c

    loc_0x803ac77c: // orphan
         goto 0x8490000c
         call 0x8c300c94          // 0x8c300c94(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803ac7d8: // orphan
         goto 0x8410000c
         call 0x8c3c2434          // 0x8c3c2434(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803ac814: // orphan
         goto 0x8410000c
         call 0x8c3c2438          // 0x8c3c2438(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803ac840: // orphan
         goto 0x880c0c0c
         daddiu a0, v1, 0xc00

    loc_0x803ac850: // orphan
         call 0x8c2c2494          // 0x8c2c2494(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x88242424

    loc_0x803acc2c: // orphan
         

    loc_0x803aceac: // orphan
                                  // fp

    loc_0x803ad188: // orphan
         

    loc_0x803ad374: // orphan
         
         scd 0

    loc_0x803ad3c0: // orphan
         sd ra, -0xb4, ra
         sd ra, -0x12c, ra

    loc_0x803ad478: // orphan
         
         
         
         movf 0, 0, fcc0

    loc_0x803ad4e4: // orphan
         movf 0, 0, fcc0
         
         
         
         
         movf 0, 0, fcc0
         
         // CODE XREF from fcn.80387fc4 @ 0x803a0a0c
         
         
         movf 0, 0, fcc0
         
         

    loc_0x803ad514: // orphan
         // CODE XREF from fcn.80387fc4 @ 0x803a0a10
         
         
         movf 0, 0, fcc0
         
         
         
         
         movf 0, 0, fcc0
         
         
         movf 0, 0, fcc0
         
         
         // CODE XREF from fcn.803a06f0 @ +0x324
         
         
         movf 0, 0, fcc0
         
         movf 0, 0, fcc0
         // CODE XREF from fcn.80387fc4 @ 0x803a0a18
         
         
         
         movf 0, 0, fcc0
         

    loc_0x803ad570: // orphan
         
         
         
         movf 0, 0, fcc0
         
         
         
         

    loc_0x803ad590: // orphan
         // CODE XREF from fcn.80387fc4 @ 0x803a0a1c
         movf 0, 0, fcc0
         
         
         movf 0, 0, fcc0
         

    loc_0x803ad76c: // orphan
         call 0x8003fffc          // 0x8003fffc(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x803ad774: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x360
         goto 0x8c000080
         

    loc_0x803ad778: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x360
         goto 0x8c000080
         

    loc_0x803adc08: // orphan
         jalx fcn.81e080f4
         a2 = t3 + 0x206f
         daddi t2, s3, 0x6563
         jalx 0x81e4f494          // 0x81e4f494(-1, 0x442f71dcfe116408, 0x216d, -1)
         daddiu 0, s1, 0xa00
         // CODE XREF from fcn.803a06f0 @ +0x3e8
         lwc1 f28, 0x4000, t4
         lwc1 f28, 0x4000, t4
         s0 = halfword [s3 + 0x21c4]
         s0 = halfword [s3 + 0x220c]
         s0 = halfword [s3 + 0x2254]
         // CODE XREF from fcn.803a06f0 @ +0x3ec
         s0 = halfword [s3 + 0x22a0]
         s0 = halfword [s3 + 0x22ec]

    loc_0x803adeb4: // orphan
         s0 = halfword [s3 - 0x6b30]
         s0 = halfword [s3 - 0x6b10]
         s0 = halfword [s3 - 0x6acc]
         s0 = halfword [s3 - 0x6a10]
         s0 = halfword [s3 - 0x6a10]
         s0 = halfword [s3 - 0x6ac0]
         s0 = halfword [s3 - 0x6aac]
         s0 = halfword [s3 - 0x6a8c]
         s0 = halfword [s3 - 0x6a6c]
         s0 = halfword [s3 - 0x6a4c]
         s0 = halfword [s3 - 0x6a2c]

    loc_0x803adf7c: // orphan
         s0 = halfword [s3 - 0x5a7c]
         s0 = halfword [s3 - 0x5a5c]
         // CODE XREF from fcn.803a06f0 @ +0x440
         s0 = halfword [s3 - 0x58a0]
         s0 = halfword [s3 - 0x595c]
         s0 = halfword [s3 - 0x5a34]
         s0 = halfword [s3 - 0x596c]

    loc_0x803adf94: // orphan
         s0 = halfword [s3 - 0x5a6c]
         s0 = halfword [s3 - 0x598c]
         s0 = halfword [s3 - 0x59c8]
         s0 = halfword [s3 - 0x5a5c]
         s0 = halfword [s3 - 0x5a3c]
         ctc1 t1, 8

    loc_0x803adff0: // orphan
         
         if                       // unlikely
         if                       // fcn.80388000+0x2657c // unlikely

    loc_0x803b0940: // orphan
         goto 0x8680729c
         

    loc_0x803b099c: // orphan
         if                       // likely
         

    loc_0x803b09a4: // orphan
         break 6

    loc_0x803b09a8: // orphan
         // CODE XREFS from fcn.80398300 @ 0x48c, 0x803b099c
         cvt.s.w f8, f6
         cvt.s.w f18, f16
         mul.s f10, f8, f0
         
         mul.s f4, f18, f0
         trunc.w.s f6, f4
         mfc1 t1, f6
         
         t2 = a1 - t1
         mtc1 t2, f8
         
         cvt.s.w f16, f8
         add.s f18, f10, f16
         trunc.w.s f4, f18
         mfc1 v0, f4
         ret                      // ra
         

    loc_0x803b0a38: // orphan
         bnel at, 0, 0x803b0a4c   // likely
         t7 = v1 << 2

    loc_0x803b0a40: // orphan
         v1 = 0 + 0xb
         [t0 + 0x14] = v1
         t7 = v1 << 2

    loc_0x803b0a4c: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0a38
         a1 += t7                 // t0
         a1 = [a1 + 0x7ccc]       // t9
         call 0x8004c990          // 0x8004c990(-1, -1, 0x8, -1)
         [sp + 0x30] = t0
         t0 = [sp + 0x30]
         [sp + 0x38] = v0
         a0 = 0 + 6
         v1 = [t0 + 0x14]         // t9
         a1 = 0 + 0xb9
         a2 = 0 + 0xb
         at = , unsigned  , v1 < 8
         if                       // likely
         a3 = 0

    loc_0x803b0a80: // orphan
         a0 = 0
         a1 = 0 + 0xff            // s4
         a2 = 0 + 6
         a3 = 0 + 0xb9
         [sp + 0x10] = v1
         call 0x86800020          // 0x86800020(0x0, 0xff, 0x6, 0xb9)
         [sp + 0x30] = t0
         t0 = [sp + 0x30]
         goto 0x803b0abc
         t1 = v0                  // s4

    loc_0x803b0aa8: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0a78
         [sp + 0x10] = v1
         call 0x86800020          // 0x86800020(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = t0
         t0 = [sp + 0x30]
         t1 = v0                  // s4

    loc_0x803b0abc: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0aa0
         a1 = 0x800d << 16
         a1 += 0x510
         v1 = [a1 + 0]
         t9 = 0xe700 << 16
         t4 = 0xfa00 << 16
         t8 = v1 + 8
         [a1 + 0] = t8
         [v1 + 0] = t9
         [v1 + 4] = 0
         v1 = [a1 + 0]

    loc_0x803b0ae4: // orphan
         t5 = t1 & 0xff
         t8 = 0xfffc << 16
         t3 = v1 + 8
         [a1 + 0] = t3
         [v1 + 0] = t4
         [v1 + 4] = t5
         v1 = [a1 + 0]
         t7 = 0xfcff << 16
         t7 |= 0x97ff
         t6 = v1 + 8
         [a1 + 0] = t6
         t8 |= 0xfe38
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [a1 + 0]
         t3 = 0xdb06 << 16
         t3 |= 0x3c
         t9 = v1 + 8
         [a1 + 0] = t9
         [v1 + 0] = t3
         [sp + 0x30] = t0
         a0 = [sp + 0x38]         // s4
         call 0x8004ca60          // 0x8004ca60(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v1
         t2 = [sp + 0x20]
         a1 = 0x800d << 16
         a1 += 0x510
         [t2 + 4] = v0
         v1 = [a1 + 0]
         t5 = 0xde00 << 16
         t6 = 0x8681 << 16
         t4 = v1 + 8
         [a1 + 0] = t4
         [v1 + 0] = t5
         t6 = [t6 - 0x79c4]       // t9
         call 0x8003cd84          // 0x8003cd84(0xff, 0x800d0510, 0x8, -1)
         [v1 + 4] = t6
         v0 = 0x8683 << 16
         v0 -= 0xd58
         // CODE XREF from fcn.803747c4 @ 0x803a0d3c
         t7 = [v0 + 0xc]          // t9
         t0 = [sp + 0x30]
         bnel t7, 0, 0x803b0bb0   // likely
         t4 = [v0 + 0]            // t9

    loc_0x803b0b90: // orphan
         t8 = [v0 + 0]

    loc_0x803b0b94: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803a0d40
         at = , t8 < 9
         beql at, 0, 0x803b0bb0   // likely
         t4 = [v0 + 0]

    loc_0x803b0ba0: // orphan
         t9 = [t0 + 0x14]
         t3 = t9 + 1
         [t0 + 0x14] = t3
         t4 = [v0 + 0]

    loc_0x803b0bb0: // orphan
         // CODE XREFS from fcn.80398300 @ 0x803b0b88, 0x803b0b98
         at = 0 + 8               // a2
         bnel t4, at, 0x803b0bcc  // likely
         ra = [sp + 0x1c]

    loc_0x803b0bbc: // orphan
         t5 = [t0 + 0x14]
         t6 = t5 - 1
         [t0 + 0x14] = t6
         // CODE XREF from fcn.803b0508 @ +0x514
         ra = [sp + 0x1c]

    loc_0x803b0bcc: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0bb4
         sp += 0x40
         ret                      // ra
         

    loc_0x803b0da4: // orphan
         call 0x80037120          // 0x80037120(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 + 0xa8
         t7 = halfword [sp + 0x26]
         v0 = [sp + 0x34]         // t9
         t8 = t7 + 0x2000
         halfword [v0 + 0x1c] = t8
         t9 = halfword [sp + 0x24]
         t0 = t9 - 0x2000
         halfword [v0 + 0x1e] = t0
         // CODE XREF from fcn.803b0508 @ +0x878
         ra = [sp + 0x1c]
         sp += 0x30
         v0 = 0
         ret
         

    loc_0x803b0e4c: // orphan
         lwc1 f2, -0xcfc, at
         at = 0x8680 << 16
         lwc1 f14, 0x7c60, at
         at = 0x8680 << 16
         a0 = 0x8681 << 16
         v0 = 0x8681 << 16
         mtc1 0, f18
         v0 -= 0x7940
         a0 -= 0x7968
         lwc1 f16, 0x7c84, at
         v1 = 0 + 0x1f4

    loc_0x803b0e78: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0ec4
         mtc1 v1, f4
         mov.s f0, f18
         cvt.s.w f12, f4

    loc_0x803b0e84: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0ebc
         mul.s f6, f14, f0
         
         mul.s f8, f6, f0
         sub.s f10, f12, f8
         c.le.s f10, f2
         
         bc1f 0x803b0ebc

    loc_0x803b0ea0: // orphan
         
         div.s f4, f0, f16
         a0 += 4
         trunc.w.s f6, f4
         mfc1 t7, f6
         goto 0x803b0ec4
         [a0 - 4] = t7

    loc_0x803b0eb8: // orphan
         [a0 - 4] = t7
         goto 0x803b0e84
         add.s f0, f0, f16

    loc_0x803b0ec4: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b0eb4
         if                       // likely
         v1 += 0xa

    loc_0x803b0ecc: // orphan
         ret                      // ra
         

    loc_0x803b0f3c: // orphan
         mtc1 0, f24
         mtc1 0, f22
         mtc1 0, f26
         mtc1 0, f28
         [sp + 0x64] = ra
         s2 -= 0xd58
         s0 -= 0x11e8
         s1 = 0
         s3 = 0 - 1               // s2
         s4 = 0 + 0x1e
         s5 = 0 + 3
         s6 = 0 + 4

    loc_0x803b0fa8: // orphan
         // CODE XREF from fcn.803b0ff0 @ 0x803b0f94
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803b1040: // orphan
         // CODE XREF from fcn.803b0ff0 @ +0x3c
         div.s f16, f8, f20

    loc_0x803b1044: // orphan
         at = 0x8681 << 16
         lwc1 f18, -0x7e28, at
         mul.s f4, f16, f18
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f4, 0x100, s0
         mtc1 v0, f6
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803b1068: // orphan
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803b1074: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b1060
         div.s f16, f10, f20
         at = 0x8681 << 16
         lwc1 f18, -0x7e24, at
         at = 0x8681 << 16
         ldc1 f8, -0x7e20, at
         t1 = [s2 + 0x38]         // t9
         at = 0x8681 << 16
         mul.s f4, f16, f18
         cvt.d.s f6, f4
         add.d f10, f6, f8
         cvt.s.d f16, f10
         if                       // likely
         swc1 f16, 0xf4, s0

    loc_0x803b10a8: // orphan
         swc1 f24, 0x100, s0
         lwc1 f18, -0x7e18, at
         swc1 f18, 0xf4, s0

    loc_0x803b10b4: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b10a0
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803b10cc: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803b10d8: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b10c4
         div.s f10, f6, f20

    loc_0x803b10dc: // orphan
         at = 0x8681 << 16
         lwc1 f16, -0x7e14, at
         at = 0x8681 << 16
         ldc1 f8, -0x7e10, at
         swc1 f24, 0xfc, s0
         mul.s f18, f10, f16
         cvt.d.s f4, f18
         add.d f6, f4, f8
         // CODE XREF from fcn.80388000 @ 0x803a0d98
         cvt.s.d f10, f6
         goto 0x803b1370          // fcn.803b0ff0+0x380
         swc1 f10, 0xf8, s0

    loc_0x803b11e0: // orphan
         // CODE XREF from fcn.80388000 @ 0x803b11a8
         div.s f4, f10, f20
         at = 0x3f00 << 16
         mtc1 at, f8
         swc1 f24, 0xfc, s0
         mul.s f18, f4, f8
         cvt.d.s f6, f18
         add.d f16, f6, f22
         cvt.s.d f10, f16
         goto 0x803b1370          // fcn.803b0ff0+0x380
         swc1 f10, 0xf8, s0

    loc_0x803b11e4: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f4

    loc_0x803b11fc: // orphan
         mtc1 at, f18
         
         add.s f8, f8, f18

    loc_0x803b1208: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b11f4
         div.s f6, f8, f20
         at = 0x8681 << 16
         ldc1 f10, -0x7e00, at
         t3 = [s2 + 0x38]         // t9
         at = 0x8681 << 16
         cvt.d.s f16, f6
         mul.d f4, f16, f10
         cvt.s.d f18, f4
         if                       // likely
         swc1 f18, 0x100, s0

    loc_0x803b1230: // orphan
         // CODE XREF from fcn.80388000 @ 0x803a0dbc
         lwc1 f8, -0x7df8, at
         swc1 f8, 0x100, s0

    loc_0x803b1238: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b1228
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6

    loc_0x803b12e8: // orphan
         if                       // likely
         swc1 f4, 0x100, s0

    loc_0x803b12f0: // orphan
         lwc1 f18, -0x7df4, at
         swc1 f18, 0x100, s0

    loc_0x803b12f8: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b12e8
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f16
         at = 0x4f80 << 16
         if                       // fcn.80388000+0x2931c // likely
         cvt.s.w f8, f16

    loc_0x803b142c: // orphan
         
         break 7

    loc_0x803b1498: // orphan
         // CODE XREF from fcn.803a06f0 @ +0x704
         t9 = [a0 + 0]            // arg1
         v0 = s3 + t7             // t9
         a1 = [v0 + 0]
         s2 += 1
         at = , s2 < t0           // lo
         // CODE XREF from fcn.803a06f0 @ +0x708
         [v0 + 0] = t9
         if                       // likely
         [a0 + 0] = a1            // arg1

    loc_0x803b6b44: // orphan
         t6 = [s4 + 0x10]
         bnel s6, t6, 0x803b6b5c  // likely
         t7 = [s0 + 0]            // v1

    loc_0x803b6b50: // orphan
         call 0x86806044          // 0x86806044(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         t7 = [s0 + 0]            // v1

    loc_0x803b6b5c: // orphan
         beql s7, t7, 0x803b6c20  // unlikely
         t0 = [s0 + 8]

    loc_0x803b6b64: // orphan
         lwc1 f4, 0x2c, s2
         t8 = 0x8681 << 16
         t8 -= 0x7398
         c.lt.s f4, f22
         a0 = s2
         bc1fl 0x803b6c20
         t0 = [s0 + 8]
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = s5 + t8
         t9 = [s0 + 0]            // v1
         a1 = s3 & 0xff           // s4
         a0 = 0 + 0x7f01
         if                       // likely
         

    loc_0x803b6b9c: // orphan
         call 0x80027a28          // 0x80027a28(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x7f02
         a0 = s1
         call 0x8003f210          // 0x8003f210(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a1 = s6
         goto 0x803b6c08
         [s4 + 0x10] = s6

    loc_0x803b6bb8: // orphan
         call 0x80027a28          // 0x80027a28(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s3 & 0xff           // s4
         v0 = [s0 + 4]
         a0 = s1
         bnel fp, v0, 0x803b6be0  // likely
         at = 0 + 2

    loc_0x803b6bd0: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xa

    loc_0x803b6bd8: // orphan
         v0 = [s0 + 4]
         at = 0 + 2

    loc_0x803b6be0: // orphan
         if                       // likely
         a0 = s1

    loc_0x803b6be8: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xc
         v0 = [s0 + 4]

    loc_0x803b6bf4: // orphan
         at = 0 + 3
         if                       // likely
         a0 = s1

    loc_0x803b6c00: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xb             // arg2

    loc_0x803b6c04: // orphan
         a1 = 0 + 0xb             // arg2

    loc_0x803b6c08: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b6bb0
         a0 = s1
         call 0x8003eb74          // 0x8003eb74(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a1 = 2 << 16
         goto 0x803b6cb0
         [s0 + 0] = s7

    loc_0x803b6c1c: // orphan
         t0 = [s0 + 8]            // t3

    loc_0x803b6c20: // orphan
         at = 0x8681 << 16
         lwc1 f10, -0x7fa0, at
         mtc1 t0, f6
         at = 0x8681 << 16
         t4 = 0x8681 << 16
         cvt.s.w f8, f6
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 t3, f18
         
         mtc1 t3, f4
         [s0 + 8] = t3
         lwc1 f16, -0x7f9c, at
         cvt.s.w f2, f4
         t4 = [t4 - 0x7fb4]       // t9
         at = 0x8683 << 16
         mtc1 t4, f6
         mul.s f18, f16, f2
         cvt.s.w f8, f6
         mul.s f4, f2, f18
         lwc1 f6, 0x1c, s0
         lwc1 f18, 0xc, s0
         add.s f10, f20, f8
         add.s f8, f20, f6
         sub.s f0, f10, f4
         lwc1 f4, 0x10, s0

    loc_0x803b6c88: // orphan
         sub.s f16, f8, f0
         swc1 f0, 0x2c, s2
         mul.s f6, f0, f4
         div.s f10, f16, f18
         swc1 f10, 0x24, s2
         lwc1 f8, -0xd00, at
         mul.s f16, f26, f8
         add.s f18, f24, f16
         add.s f10, f6, f18
         swc1 f10, 0x28, s2

    loc_0x803b6cb0: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b6c14
         s3 += 1
         at = 0 + 4
         s4 += 0x124
         s0 += 0x20
         s5 += 0x168
         if                       // likely
         s2 += 0x168

    loc_0x803b6ccc: // orphan
         ra = [sp + 0x5c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         s0 = [sp + 0x38]         // s4
         s1 = [sp + 0x3c]         // a2
         s2 = [sp + 0x40]         // t9
         s3 = [sp + 0x44]         // t9
         s4 = [sp + 0x48]
         s5 = [sp + 0x4c]
         s6 = [sp + 0x50]
         s7 = [sp + 0x54]
         fp = [sp + 0x58]
         ret
         sp += 0x60

    loc_0x803b6e24: // orphan
         s1 = 0x8683 << 16
         fp = 0x8683 << 16
         fp -= 0xd58
         s1 -= 0x11e8
         s4 -= 0x3300
         s0 -= 0x7938
         s3 -= 0x1c78
         s2 -= 0x7398
         s7 = 0 + 0xa
         s6 = 0 + 0xff            // s4

    loc_0x803b6e4c: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s4 + 0]
         byte [s0 + 0xa0] = s6
         byte [s0 + 0xa1] = 0
         byte [s0 + 0xa2] = 0
         [s1 + 0x10] = s5
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x0, -1, 0x0)
         a1 = s5                  // t9
         call 0x8007afa0          // 0x8007afa0(0x104, -1, -1, 0x0)
         
         div 0, v0, s7
         a1 = hi
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s0
         if                       // likely
         

    loc_0x803b6eb0: // orphan
         break 7

    loc_0x803b6eb4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803b6ec0: // orphan
         if                       // likely
         

    loc_0x803b6ec8: // orphan
         break 6

    loc_0x803b6ecc: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s1 += 0x124
         s2 += 0x168
         s3 += 0x168
         s0 += 0x168
         if                       // likely
         s4 += 4

    loc_0x803b6eec: // orphan
         call 0x86800a7c          // 0x86800a7c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803b6ef0: // orphan
         
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x14
         call 0x87f00688          // 0x87f00688(0x14, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = 0 + 5
         at = 0x8683 << 16
         goto 0x803b6f1c
         [at - 0xd58] = t6

    loc_0x803b6f1c: // orphan
         // CODE XREF from fcn.80398300 @ 0x803b6f0c
         ra = [sp + 0x3c]         // a2
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]

    loc_0x803b6f30: // orphan
         // CODE XREF from fcn.803a002c @ 0x803a131c
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]         // s4
         // CODE XREF from fcn.803a1008 @ +0x318
         ret                      // ra
         sp += 0x40

    loc_0x803b71e8: // orphan
         if                       // likely
         [v0 + 0x14] = t8

    loc_0x803b71f0: // orphan
         goto 0x803b75f8
         [v0 + 0x14] = t0

    loc_0x803b73f4: // orphan
         if                       // unlikely
         v0 = 0x8683 << 16

    loc_0x803b73fc: // orphan
         v0 -= 0xd58
         t0 = [v0 + 0x14]         // t9
         a1 = 0 + 1               // arg2 // lo
         t1 = t0 - 1
         at = , unsigned  , t1 < 0xd
         if                       // likely
         t1 <<= 2

    loc_0x803b7418: // orphan
         at = 0x8681 << 16
         at += t1
         t1 = [at - 0x7bc8]       // t9
         goto t1                  // t9
         

    loc_0x803b74a4: // orphan
         if                       // likely
         [v0 + 0] = t3

    loc_0x803b74ac: // orphan
         goto 0x803b75f8
         [v0 + 0] = 0

    loc_0x803b7500: // orphan
         v0 += 0x7c70
         t5 = [v0 + 0]            // t9
         t6 = t5 - 1
         if                       // likely
         [v0 + 0] = t6

    loc_0x803b7514: // orphan
         goto 0x803b75f8
         [v0 + 0] = 0

    loc_0x803b75f8: // orphan
         // XREFS: CODE 0x803b71f0  CODE 0x803b72dc  CODE 0x803b7444  
         // XREFS: CODE 0x803b748c  CODE 0x803b74ac  CODE 0x803b7514  
         beql a1, 0, 0x803b760c   // unlikely
         ra = [sp + 0x14]

    loc_0x803b7600: // orphan
         call 0x8680671c          // 0x8680671c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]

    loc_0x803b760c: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803b77e4: // orphan
         [sp + 0x18] = a0
         t7 = , unsigned  byte [t6 + 0x2180] // s4
         at = 0 + 4
         // CODE XREF from fcn.803a1008 @ +0x364
         a0 = 0x8681 << 16
         if                       // likely
         

    loc_0x803b77fc: // orphan
         call 0x87f0c6f4          // 0x87f0c6f4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x79d0
         // CODE XREF from fcn.803a002c @ 0x803a1370
         if                       // unlikely
         t8 = 0 + 0xd

    loc_0x803b780c: // orphan
         at = 0x8683 << 16
         [at - 0xd58] = t8
         at = 0x8683 << 16

    loc_0x803b7818: // orphan
         // CODE XREF from fcn.803a002c @ 0x803a1374
         t9 = 0 + 3
         [at - 0xd50] = t9

    loc_0x803b7820: // orphan
         call 0x87f00930          // 0x87f00930(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         t0 = 0x8683 << 16

    loc_0x803b7830: // orphan
         t0 = [t0 - 0xd58]        // t9
         at = 0 + 8               // a2
         if                       // unlikely
         // CODE XREF from fcn.803a1008 @ +0x370
         

    loc_0x803b7840: // orphan
         call 0x87f006bc          // 0x87f006bc(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x803b7848: // orphan
         t1 = 0x8683 << 16
         t1 = [t1 - 0xd58]        // t9
         // CODE XREF from fcn.803a002c @ 0x803a137c
         at = , unsigned  , t1 < 0xd
         if                       // loc.803b7a40 // loc.803b7a40 // likely
         t1 <<= 2

    loc_0x803b785c: // orphan
         at = 0x8681 << 16
         at += t1
         t1 = [at - 0x7b70]       // t9
         goto t1                  // t9
         

    loc_0x803b78f4: // orphan
         a0 = 0 | 0xffff          // arg1
         if                       // likely
         at = 0x8683 << 16

    loc_0x803b7900: // orphan
         [at - 0xd50] = t4
         at = 0x8683 << 16
         [at - 0xd58] = t5
         at = 0x8683 << 16

    loc_0x803b7928: // orphan
         call 0x87f02328          // 0x87f02328(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = 0 + 6
         at = 0x8683 << 16
         goto loc.803b7a40        // loc.803b7a40(-1)
         [at - 0xd58] = t6

}

*/
