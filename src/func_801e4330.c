/*
 * Function: 0x801e4330
 * ROM Offset: 0x000e5330
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.801e4330 (int esi, int edx) {
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.801e4330 (int esi, int edx) {
    loc_0x801cf578:
        0x801cf578
        0x801cf57c
        0x801cf580
        syscall       // 0 = unknown ()
        0x801cf588
        0x801cf58c
         // (break)
    loc_0x801cf674: // orphan
             

    loc_0x801cfba0: // orphan
         bnel a1, t9, 0x801cfbc0  // unlikely
         t4 = , unsigned  halfword [a3 + 2]

    loc_0x801cfba8: // orphan
         t1 = halfword [a0 + 0xc]

    loc_0x801cfbac: // orphan
         a2 = a0 + t1
         t2 = byte [a2 + 0xd]
         t3 = t2 + 1
         byte [a2 + 0xd] = t3
         t4 = , unsigned  halfword [a3 + 2]

    loc_0x801cfbc0: // orphan
         bnel a1, t4, 0x801cfbe0  // unlikely
         t8 = , unsigned  halfword [a3 + 4]

    loc_0x801cfbc8: // orphan
         t5 = halfword [a0 + 0xc]
         a2 = a0 + t5
         t7 = byte [a2 + 0xd]
         t6 = t7 + 1
         byte [a2 + 0xd] = t6
         t8 = , unsigned  halfword [a3 + 4]

    loc_0x801cfbe0: // orphan
         bnel a1, t8, 0x801cfc00  // unlikely
         t3 = , unsigned  halfword [a3 + 6]

    loc_0x801cfbe8: // orphan
         t9 = halfword [a0 + 0xc]
         a2 = a0 + t9
         t1 = byte [a2 + 0xd]
         t2 = t1 + 1
         byte [a2 + 0xd] = t2
         t3 = , unsigned  halfword [a3 + 6]

    loc_0x801cfc00: // orphan
         a3 += 8
         if                       // unlikely
         

    loc_0x801cfc0c: // orphan
         t4 = halfword [a0 + 0xc]
         a2 = a0 + t4
         t5 = byte [a2 + 0xd]
         t7 = t5 + 1
         byte [a2 + 0xd] = t7

    loc_0x801cfc20: // orphan
         bnel a3, v0, 0x801cfba0  // unlikely
         t9 = , unsigned  halfword [a3 + 0]

    loc_0x801cfc28: // orphan
         ret
         

    loc_0x801cfc80: // orphan
         bnel a1, t4, 0x801cfca0  // unlikely
         t8 = , unsigned  halfword [v0 + 2]

    loc_0x801cfc88: // orphan
         t5 = halfword [a0 + 0xc]
         a2 = a0 + t5
         t7 = byte [a2 + 0xd]

    loc_0x801cfc94: // orphan
         t6 = t7 + 2
         byte [a2 + 0xd] = t6
         t8 = , unsigned  halfword [v0 + 2]

    loc_0x801cfca0: // orphan
         bnel a1, t8, 0x801cfcc0  // unlikely
         t3 = , unsigned  halfword [v0 + 4]

    loc_0x801cfca8: // orphan
         t9 = halfword [a0 + 0xc]
         a2 = a0 + t9
         t1 = byte [a2 + 0xd]
         t2 = t1 + 2
         byte [a2 + 0xd] = t2
         t3 = , unsigned  halfword [v0 + 4]

    loc_0x801cfcc0: // orphan
         bnel a1, t3, 0x801cfce0  // unlikely
         t6 = , unsigned  halfword [v0 + 6]

    loc_0x801cfcc8: // orphan
         t4 = halfword [a0 + 0xc]
         a2 = a0 + t4
         t5 = byte [a2 + 0xd]
         t7 = t5 + 2
         byte [a2 + 0xd] = t7
         t6 = , unsigned  halfword [v0 + 6]

    loc_0x801cfce0: // orphan
         v0 += 8
         if                       // unlikely
         

    loc_0x801cfcec: // orphan
         t8 = halfword [a0 + 0xc]
         a2 = a0 + t8
         t9 = byte [a2 + 0xd]
         t1 = t9 + 2
         byte [a2 + 0xd] = t1

    loc_0x801cfd00: // orphan
         bnel v0, v1, 0x801cfc80  // unlikely
         t4 = , unsigned  halfword [v0 + 0]

    loc_0x801cfd08: // orphan
         ret
         

    loc_0x801cfddc: // orphan
         t7 = t5 + 1
         halfword [a0 + 0xc] = t7
         v1 = v0 - 1
         a1 = 0
         if                       // likely
         a2 = 0

    loc_0x801cfdf4: // orphan
         t6 = byte [a0 + 0xe]
         v0 = a0
         beql t6, 0, 0x801cfe44   // unlikely
         t8 = a0 + a2

    loc_0x801cfe04: // orphan
         a3 = byte [a0 + 0xe]
         t9 = a3 & 0x80

    loc_0x801cfe0c: // orphan
         if                       // likely
         a1 += 2

    loc_0x801cfe14: // orphan
         a2 += 2
         goto 0x801cfe28
         v0 += 2

    loc_0x801cfe20: // orphan
         a2 += 1
         v0 += 1

    loc_0x801cfe28: // orphan
         at = , a1 < v1
         beql at, 0, 0x801cfe44   // likely
         t8 = a0 + a2

    loc_0x801cfe34: // orphan
         a3 = byte [v0 + 0xe]
         bnel a3, 0, 0x801cfe0c   // likely
         t9 = a3 & 0x80

    loc_0x801cfe40: // orphan
         t8 = a0 + a2

    loc_0x801cfe44: // orphan
         byte [t8 + 0xe] = 0
         t1 = halfword [a0 + 0xc]
         at = , a2 < t1
         if                       // unlikely
         

    loc_0x801cfe58: // orphan
         halfword [a0 + 0xc] = a2

    loc_0x801cfe5c: // orphan
         ret
         

    loc_0x801cffe8: // orphan
         a1 = , unsigned  halfword [sp + 0x18]
         a2 = [sp + 0x20]
         v0 = , unsigned  halfword [t2 + 6]
         a3 = [sp + 0x1c]
         at = 0 | 0xa4ab
         t3 = v0 & 0x20
         if                       // unlikely
         t4 = v0 & 0x10

    loc_0x801d0008: // orphan
         at = , a1 < at
         if                       // unlikely
         v0 = a1

    loc_0x801d0014: // orphan
         at = 0 | 0xa4c9
         at = , v0 < at
         if                       // likely
         at = 0 | 0xa4cf

    loc_0x801d0020: // orphan
         at = 0 | 0xa4cf

    loc_0x801d0024: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa4dc

    loc_0x801d0030: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa5ab

    loc_0x801d0038: // orphan
         at = 0 | 0xa5ab

    loc_0x801d003c: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa5c9

    loc_0x801d0048: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa5cf

    loc_0x801d0050: // orphan
         at = 0 | 0xa5cf

    loc_0x801d0054: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa5dc

    loc_0x801d0060: // orphan
         at = , v0 < at
         beql at, 0, 0x801d00c0   // likely
         at = 0 + 0x5e

    loc_0x801d006c: // orphan
         a1 = v0 + 1
         goto 0x801d00bc
         a1 &= 0xffff

    loc_0x801d0078: // orphan
         if                       // likely
         at = 0 | 0xa4cf

    loc_0x801d0080: // orphan
         at = , a1 < at
         if                       // unlikely
         v0 = a1

    loc_0x801d008c: // orphan
         at = 0 | 0xa4dc
         at = , v0 < at
         if                       // likely
         at = 0 | 0xa5cf

    loc_0x801d0098: // orphan
         at = 0 | 0xa5cf

    loc_0x801d009c: // orphan
         at = , v0 < at
         if                       // unlikely
         at = 0 | 0xa5dc

    loc_0x801d00a8: // orphan
         at = , v0 < at
         beql at, 0, 0x801d00c0   // likely
         at = 0 + 0x5e

    loc_0x801d00b4: // orphan
         a1 = v0 + 2
         a1 &= 0xffff

    loc_0x801d00bc: // orphan
         at = 0 + 0x5e

    loc_0x801d00c0: // orphan
         if                       // likely
         a0 = a2

    loc_0x801d00c8: // orphan
         call 0x8fb002bc          // 0x8fb002bc(0x0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = a3
         goto 0x801d022c
         a3 = [sp + 0x1c]

    loc_0x801d00d8: // orphan
         goto 0x801d022c
         a3 = 0 + 1

    loc_0x801d022c: // orphan
         ra = [sp + 0x14]
         sp += 0x20
         v0 = a3
         ret
         

    loc_0x801d0254: // orphan
         [sp + 0x3c] = s7
         [sp + 0x34] = s5
         [sp + 0x30] = s4
         [sp + 0x2c] = s3
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         [sp + 0x20] = s0
         a3 = , unsigned  halfword [s6 + 6]
         a2 = , unsigned  halfword [s6 + 4]
         a1 = , unsigned  halfword [s6 + 2]
         a0 = , unsigned  halfword [a0 + 0]
         t6 = 0x8fb0 << 16
         t7 = 0x8fb0 << 16
         t7 += 0x3494
         t6 += 0x3490
         [sp + 0x10] = t6
         [sp + 0x14] = t7
         a3 += 0x14
         a2 += 0x1e
         a1 -= 0xa
         call 0x8004ad00          // 0x8004ad00(0xffff, 0xfff5, 0x1001d, 0x10013)
         a0 -= 0x46
         call 0x800498c4          // 0x800498c4(0xffb9, 0xfff5, 0x1001d, 0x10013)
         
         a0 = 0 + 8
         call 0x800496a4          // 0x800496a4(0x8, 0xfff5, 0x1001d, 0x10013)
         a1 = 0
         a0 = 0x8fb0 << 16
         a1 = , unsigned  halfword [s6 + 0]
         a2 = , unsigned  halfword [s6 + 2]
         t8 = 0 + 1
         [sp + 0x10] = t8
         a0 = [a0 + 0x3df0]
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xffff, 0x10013)
         a3 = s6 + 0xe
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0xffff, 0xffff, 0xe)
         a1 = 0
         s7 = 0x8fb0 << 16
         fp = 0x8fb0 << 16
         fp += 0x39e6
         s7 += 0x38d8
         v0 = 0
         s5 = 0
         s4 = 0 + 5
         s3 = 0 + 0xf

    loc_0x801d030c: // orphan
         s0 = 0
         s1 = 0
         s2 = s7

    loc_0x801d0318: // orphan
         div 0, s0, s4
         t1 = lo
         t9 = , unsigned  halfword [s6 + 0]
         t3 = , unsigned  halfword [s6 + 2]
         unsigned , hi
         t0 = t9 + s1
         if                       // unlikely
         

    loc_0x801d0338: // orphan
         break 7

    loc_0x801d033c: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x801d0348: // orphan
         if                       // unlikely
         

    loc_0x801d0350: // orphan
         break 6

    loc_0x801d0354: // orphan
         t2 = lo
         a0 = t0 + t2
         a1 = t3 + s5
         a1 += 0x1e
         a0 -= 0x3c
         call 0x80049628          // 0x80049628(0x800a7e4c, 0x1e, 0x0, 0x0)
         a2 = , unsigned  halfword [s2 + 0]
         s0 += 1
         s1 += 0x14
         if                       // likely
         s2 += 2

    loc_0x801d0380: // orphan
         s7 += 0x1e
         at = , unsigned  , s7 < fp
         if                       // likely
         s5 += 0x14

    loc_0x801d0390: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         
         v1 = halfword [s6 + 0xc]
         a3 = 0
         v0 = s6
         if                       // likely
         a2 = 0 + 0x14

    loc_0x801d03a8: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         
         v1 = halfword [s6 + 0xc]
         a3 = 0
         v0 = s6
         if                       // likely
         a2 = 0 + 0x14

    loc_0x801d03ac: // orphan
         a0 = v1 + s6

    loc_0x801d03b0: // orphan
         t4 = byte [v0 + 0xe]
         t5 = t4 & 0x80
         beql t5, 0, 0x801d03cc   // likely
         v0 += 1

    loc_0x801d03c0: // orphan
         goto 0x801d03cc
         v0 += 2

    loc_0x801d03cc: // orphan
         if                       // unlikely
         a3 += 1

    loc_0x801d03d4: // orphan
         t7 = a3 << 3
         t6 = , unsigned  halfword [s6 + 0]
         a1 = , unsigned  halfword [s6 + 2]
         t7 += a3
         t7 <<= 1
         a0 = t6 + t7
         call 0x8fb00020          // 0x8fb00020(0xffff, 0xffff, 0x0, 0x0)
         a1 += 0x14
         v0 = halfword [s6 + 8]
         v1 = 0 + 0x14
         t4 = halfword [s6 + 0xa]
         unsigned , hi
         t8 = , unsigned  halfword [s6 + 0]
         t3 = , unsigned  halfword [s6 + 2]
         a2 = 0 + 0x10
         t9 = lo
         t1 = t8 + t9
         
         div 0, v0, s4
         t0 = lo
         if                       // unlikely
         

    loc_0x801d042c: // orphan
         break 7

    loc_0x801d0430: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x801d043c: // orphan
         if                       // unlikely
         

    loc_0x801d0444: // orphan
         break 6

    loc_0x801d0448: // orphan
         unsigned , hi
         t2 = lo
         a0 = t1 + t2

    loc_0x801d0454: // orphan
         a0 -= 0x3c
         unsigned , hi
         t5 = lo
         a1 = t3 + t5
         call 0x8fb00020          // 0x8fb00020(0xffffffffffffffc4, 0x0, 0x0, 0x0)
         a1 += 0x2e
         ra = [sp + 0x44]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]
         s7 = [sp + 0x3c]
         fp = [sp + 0x40]
         ret
         sp += 0x48

    loc_0x801d0524: // orphan
         t5 = [a1 + 0x48]
         a0 = , unsigned  byte [t5 + 0]
         call 0x80073450          // 0x80073450(0xff, 0x0, 0x0, 0x0)
         [sp + 0x18] = a2
         a2 = [sp + 0x18]
         v1 = , unsigned  halfword [a2 + 0xc]
         halfword [a2 + 8] = v0
         t6 = halfword [a2 + 8]
         if                       // likely
         t7 = , signed  v1 >> 1

    loc_0x801d054c: // orphan
         at = v1 + 1
         t7 = , signed  at >> 1

    loc_0x801d0554: // orphan
         t8 = t6 - t7
         halfword [a2 + 0xa] = t8
         a0 = halfword [a2 + 0xa]
         bgezl a0, 0x801d0578     // likely
         t9 = , unsigned  halfword [a2 + 0xe]

    loc_0x801d0568: // orphan
         halfword [a2 + 0xa] = 0
         a0 = halfword [a2 + 0xa]
         v1 = , unsigned  halfword [a2 + 0xc]
         t9 = , unsigned  halfword [a2 + 0xe]

    loc_0x801d0578: // orphan
         v0 = t9 - v1
         v0 += 1
         at = , v0 < a0
         if                       // likely
         

    loc_0x801d058c: // orphan
         halfword [a2 + 0xa] = v0

    loc_0x801d0590: // orphan
         goto 0x801d06b0
         v0 = 0 + 1

    loc_0x801d0614: // orphan
         goto 0x801d06b0
         v0 = 0 + 1

    loc_0x801d06a0: // orphan
         halfword [a2 + 0xa] = v0
         goto 0x801d06b0
         v0 = 0 + 1

    loc_0x801d06b0: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x801d07f0: // orphan
         ret
         

    loc_0x801d0adc: // orphan
         call 0x800496a4          // 0x800496a4(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         t8 = , unsigned  halfword [s0 + 0xc]
         s3 = 0
         fp = 0 + 0x14
         if                       // likely
         s5 = 0x8fb0 << 16

    loc_0x801d0af8: // orphan
         s5 += 0x3df0
         a0 = 0 + 0xff

    loc_0x801d0b00: // orphan
         a1 = 0 + 0xff
         a2 = 0 + 0xff
         call 0x8004972c          // 0x8004972c(0x0, 0xff, 0xff, 0x0)
         a3 = 0 + 0xff
         t9 = [s6 + 0x44]
         at = 0 + 1
         v0 = , unsigned  halfword [t9 + 0]
         if                       // unlikely
         t3 = v0 - 1

    loc_0x801d0b24: // orphan
         at = 0 + 4
         beql v0, at, 0x801d0b6c  // unlikely
         at = , unsigned  , t3 < 0xc

    loc_0x801d0b30: // orphan
         t0 = halfword [s0 + 0xa]
         a3 = 0x8fb0 << 16
         a3 += 0x3a4c
         t1 = t0 + s3
         if                       // unlikely
         t2 = 0 + 1

    loc_0x801d0b48: // orphan
         a1 = , unsigned  halfword [s0 + 0]
         a2 = , unsigned  halfword [s0 + 2]
         [sp + 0x10] = t2
         a0 = [s5 + 0]
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xffff, 0x0)
         a1 += 0x50
         goto 0x801d0e40
         t5 = , unsigned  halfword [s0 + 0xc]

    loc_0x801d0b68: // orphan
         at = , unsigned  , t3 < 0xc

    loc_0x801d0b6c: // orphan
         if                       // likely
         t3 <<= 2

    loc_0x801d0b74: // orphan
         at = 0x8fb0 << 16
         at += t3
         t3 = [at + 0x3ba8]
         goto t3
         

    loc_0x801d0c78: // orphan
         a0 = , unsigned  halfword [s0 + 0]
         t3 = , unsigned  halfword [s0 + 2]
         a3 = 0x8fb0 << 16
         a3 += 0x3a54
         [sp + 0x10] = s1
         a2 = 0 + 2
         a0 += 0x50
         call 0x800495f8          // 0x800495f8(0x1004f, 0x0, 0x2, 0x8fb03a54)
         a1 = t3 + s2
         call 0x8004b7a4          // 0x8004b7a4(0x1004f, 0xffff, 0x2, 0x8fb03a54)
         a0 = s1
         a1 = , unsigned  halfword [s0 + 0]
         t4 = , unsigned  halfword [s0 + 2]
         t5 = 0 + 1
         [sp + 0x10] = t5
         a0 = [s5 + 0]
         a3 = v0
         a1 += 0x50

    loc_0x801d0cc0: // orphan
         call 0x80048e30          // 0x80048e30(0x0, 0x0, 0x0, 0x0)
         a2 = t4 + s2
         goto 0x801d0e40
         t5 = , unsigned  halfword [s0 + 0xc]

    loc_0x801d0e3c: // orphan
         t5 = , unsigned  halfword [s0 + 0xc]

    loc_0x801d0e40: // orphan
         s3 += 1
         at = , s3 < t5
         bnel at, 0, 0x801d0b00   // unlikely
         a0 = 0 + 0xff

    loc_0x801d0e50: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         fp = 0 + 0x14
         t6 = halfword [s0 + 8]
         t7 = halfword [s0 + 0xa]
         t0 = , unsigned  halfword [s0 + 2]
         a0 = , unsigned  halfword [s0 + 0]
         t9 = t6 - t7
         unsigned , hi
         a2 = , unsigned  halfword [s0 + 4]
         t8 = lo
         a1 = t0 + t8
         call 0x8fb00020          // 0x8fb00020(0xffff, 0xffff, 0xffff, 0x0)
         a1 += 0x10
         ra = [sp + 0x44]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]
         s7 = [sp + 0x3c]
         fp = [sp + 0x40]
         ret
         sp += 0x48

    loc_0x801d1208: // orphan
         byte [t7 + 0x18] = t6
         a1 = [s2 + 0x14]
         t8 = [s1 + 0x48]
         a1 <<= 6
         a1 &= 0xff
         call 0x80062eb0          // 0x80062eb0(0x0, 0xc0, 0x0, 0x0)
         a0 = , unsigned  byte [t8 + 3]
         t0 = [s2 + 0x14]
         t2 = [s1 + 0x48]
         t1 = t0 << 6
         t9 = v0 | t1
         goto 0x801d12d8
         byte [t2 + 0x19] = t9

    loc_0x801d12d8: // orphan
         v0 = 0 + 1
         ra = [sp + 0x2c]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x801d15c4: // orphan
         at = 0 + 0x100
         a1 = [sp + 0x28]
         a2 = [sp + 0x30]
         if                       // unlikely
         a3 = [sp + 0x20]

    loc_0x801d15d8: // orphan
         at = 0 + 0x200
         if                       // unlikely
         t1 = 0x8008 << 16

    loc_0x801d15e4: // orphan
         at = 0 + 0x400
         if                       // unlikely
         t8 = 0x8008 << 16

    loc_0x801d15f0: // orphan
         at = 0 + 0x800
         if                       // unlikely
         t1 = 0x8008 << 16

    loc_0x801d15fc: // orphan
         t7 = 0x8008 << 16
         t7 = [t7 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t7 + 0xc]

    loc_0x801d160c: // orphan
         t8 = halfword [a1 + 8]
         v0 = , unsigned  halfword [a1 + 0xa]
         t9 = t8 + 1
         halfword [a1 + 8] = t9
         t0 = halfword [a1 + 8]
         at = , v0 < t0
         if                       // unlikely
         

    loc_0x801d162c: // orphan
         halfword [a1 + 8] = v0

    loc_0x801d1630: // orphan
         t1 = [t1 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t1 + 0xc]

    loc_0x801d163c: // orphan
         t2 = halfword [a1 + 8]
         t5 = 0x8008 << 16
         t3 = t2 - 1
         halfword [a1 + 8] = t3
         t4 = halfword [a1 + 8]
         if                       // likely
         

    loc_0x801d1658: // orphan
         halfword [a1 + 8] = 0

    loc_0x801d165c: // orphan
         t5 = [t5 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t5 + 0xc]

    loc_0x801d1668: // orphan
         t6 = halfword [a1 + 8]
         v0 = a1 + t6
         t7 = byte [v0 + 0xc]
         t8 = t7 + 1
         byte [v0 + 0xc] = t8
         t9 = halfword [a1 + 8]
         v0 = a1 + t9
         t0 = byte [v0 + 0xc]
         at = , t0 < 0xa
         if                       // likely
         

    loc_0x801d1694: // orphan
         byte [v0 + 0xc] = 0

    loc_0x801d1698: // orphan
         t1 = [t1 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t1 + 0xc]

    loc_0x801d16a4: // orphan
         t2 = halfword [a1 + 8]
         t7 = 0 + 9
         v0 = a1 + t2
         t3 = byte [v0 + 0xc]
         t4 = t3 - 1
         byte [v0 + 0xc] = t4
         t5 = halfword [a1 + 8]
         v0 = a1 + t5
         t6 = byte [v0 + 0xc]
         if                       // likely
         

    loc_0x801d16d0: // orphan
         byte [v0 + 0xc] = t7

    loc_0x801d16d4: // orphan
         t8 = [t8 + 0x7200]
         v0 = , unsigned  halfword [t8 + 0xc]

    loc_0x801d16dc: // orphan
         t9 = v0 & 0x8000
         if                       // likely
         t2 = v0 & 0x4000

    loc_0x801d16e8: // orphan
         v0 = , unsigned  halfword [a1 + 0xa]
         a0 = 0
         a3 = 0 + 1
         if                       // unlikely
         v1 = a1 + v0

    loc_0x801d16fc: // orphan
         unsigned , hi
         t0 = byte [v1 + 0xc]
         v0 -= 1
         v1 -= 1
         t1 = lo
         a0 = t0 + t1
         if                       // unlikely
         

    loc_0x801d171c: // orphan
         goto 0x801d1730
         [a1 + 0x14] = a0

    loc_0x801d1724: // orphan
         beql t2, 0, 0x801d1734   // likely
         ra = [sp + 0x14]

    loc_0x801d172c: // orphan
         a3 = 0 + 2

    loc_0x801d1730: // orphan
         ra = [sp + 0x14]

    loc_0x801d1734: // orphan
         sp += 0x28
         v0 = a3
         ret
         

    loc_0x801d17b0: // orphan
         s0 = , unsigned  halfword [s2 + 0xa]
         s3 = 0 + 0x14
         if                       // unlikely
         s1 = s2 + s0

    loc_0x801d17c0: // orphan
         t9 = , unsigned  halfword [s2 + 0xa]
         t8 = , unsigned  halfword [s2 + 0]
         a2 = byte [s1 + 0xc]
         t0 = t9 - s0
         unsigned , hi
         a1 = , unsigned  halfword [s2 + 2]
         a2 += 0x30
         t1 = lo
         a0 = t8 + t1
         call 0x80049628          // 0x80049628(0xffff, 0xffff, 0x30, 0x0)
         
         s0 -= 1
         if                       // unlikely
         s1 -= 1

    loc_0x801d17f8: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         s3 = 0 + 0x14
         t2 = , unsigned  halfword [s2 + 0xa]
         t3 = halfword [s2 + 8]
         t6 = , unsigned  halfword [s2 + 0]
         a1 = , unsigned  halfword [s2 + 2]
         t4 = t2 - t3
         unsigned , hi
         a2 = s3
         a1 += 0x12
         t5 = lo
         a0 = t6 + t5
         call 0x8fb00020          // 0x8fb00020(0xffff, 0x10011, 0x14, 0x0)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x801d1a60: // orphan
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x1e0

    loc_0x801d1a8c: // orphan
         [sp + 0x34] = s5
         [sp + 0x30] = s4
         [sp + 0x2c] = s3
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         [sp + 0x20] = s0
         [sp + 0x380] = a0
         s7 = 0
         call 0x80055a74          // 0x80055a74(0x0, 0x0, 0x0, 0x0)
         a0 = [a0 + 0x34]
         t7 = [sp + 0x380]
         [sp + 0x60] = 0
         s6 = sp + 0x368
         t8 = t7 + 0x4c
         [sp + 0x58] = t8
         s5 = 0 + 0x210
         s4 = 0 + 0x3c
         s3 = sp + 0x1f0
         [sp + 0x5c] = t7
         [sp + 0x54] = t7

    loc_0x801d1adc: // orphan
         t9 = [sp + 0x5c]
         s2 = 0
         fp = [sp + 0x58]
         t0 = byte [t9 + 0x4c]
         a0 = 0 + 0x2a
         bnel t0, 0, 0x801d1b08   // likely
         a0 = s3

    loc_0x801d1af8: // orphan
         call 0x8004c874          // 0x8004c874(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x56
         fp = v0
         a0 = s3

    loc_0x801d1b08: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x180
         s1 = 0
         s0 = [sp + 0x54]

    loc_0x801d1b18: // orphan
         t1 = , unsigned  byte [s0 + 0x5c]
         beql t1, 0, 0x801d1b44   // unlikely
         s1 += 0x58

    loc_0x801d1b24: // orphan
         unsigned , hi
         s2 += 1
         a0 = s0 + 0x5c
         t2 = lo
         a1 = s3 + t2
         call 0x80051864          // "&1" // 0x80051864(0x5c, 0x0, 0x0, 0x0)
         a1 += 0x10
         s1 += 0x58

    loc_0x801d1b44: // orphan
         if                       // unlikely
         s0 += 0x58

    loc_0x801d1b4c: // orphan
         if                       // likely
         at = , s2 < 6

    loc_0x801d1b54: // orphan
         if                       // likely
         t3 = [sp + 0x380]

    loc_0x801d1b5c: // orphan
         t4 = [t3 + 0x34]
         at = , s2 < 6
         t5 = t4 << 2
         t6 = t3 + t5
         t8 = [t6 + 0x18]
         bnel t8, 0, 0x801d1bec   // likely
         t1 = [sp + 0x60]

    loc_0x801d1b78: // orphan
         if                       // likely
         t7 = s2 << 4

    loc_0x801d1b80: // orphan
         t7 -= s2
         t7 <<= 2
         s0 = s3 + t7
         s0 += 0x10
         a0 = s0

    loc_0x801d1b94: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = s4
         s0 += 0x3c
         at = , unsigned  , s0 < s6
         bnel at, 0, 0x801d1b94   // unlikely
         a0 = s0

    loc_0x801d1bac: // orphan
         a0 = s3
         call 0x80055b14          // 0x80055b14(0x0, 0x0, 0x0, 0x0)
         a1 = s7
         t9 = [sp + 0x5c]
         a0 = 0 + 0x10
         a1 = s7
         t0 = , unsigned  halfword [t9 + 0x58]
         a2 = fp
         a3 = fp
         call 0x800535d4          // 0x800535d4(0x10, 0x0, 0x178000, 0x178000)
         [sp + 0x10] = t0
         a0 = 0 + 0x10
         call 0x80051d64          // 0x80051d64(0x10, 0x0, 0x178000, 0x178000)
         a1 = s7
         s7 += 1

    loc_0x801d1be8: // orphan
         t1 = [sp + 0x60]

    loc_0x801d1bec: // orphan
         t4 = [sp + 0x5c]
         t5 = [sp + 0x58]
         t8 = [sp + 0x54]
         t2 = t1 + 0x220
         at = , t2 < 0x1540
         t3 = t4 + 0x220
         t6 = t5 + 0x220
         t7 = t8 + 0x220
         [sp + 0x54] = t7
         [sp + 0x58] = t6
         [sp + 0x5c] = t3
         if                       // unlikely
         [sp + 0x60] = t2

    loc_0x801d1c20: // orphan
         at = , s7 < 0xa
         if                       // unlikely
         s0 = sp + 0x64

    loc_0x801d1c2c: // orphan
         a0 = s0

    loc_0x801d1c30: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x180
         a0 = s0
         call 0x80055b14          // 0x80055b14(0x0, 0x180, 0x0, 0x0)
         a1 = s7
         a0 = 0 + 0x10
         call 0x80051d64          // 0x80051d64(0x10, 0x0, 0x0, 0x0)
         a1 = s7
         s7 += 1
         at = , s7 < 0xa
         bnel at, 0, 0x801d1c30   // likely
         a0 = s0

    loc_0x801d1c60: // orphan
         call 0x80055028          // 0x80055028(0x0, 0x0, 0x0, 0x0)
         
         ra = [sp + 0x44]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]
         s7 = [sp + 0x3c]
         fp = [sp + 0x40]
         ret
         sp += 0x380

    loc_0x801d1db4: // orphan
         t5 = t4 << 3
         t1 <<= 3
         t0 = a0 + t9
         t5 += t4
         t2 = t0 + t1
         t5 <<= 2
         t3 = t2 + 0x5c
         t7 = t5 + t6
         [a0 + 0x48] = t3
         ret
         [a0 + 0x44] = t7

    loc_0x801d1f30: // orphan
         s0 = a0
         t7 = v0 & 0x8000
         if                       // likely
         t1 = v0 & 0x4000

    loc_0x801d1f40: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2
         call 0x8fb02608          // 0x8fb02608(0x2, 0x0, 0x0, 0x0)
         a0 = s0
         if                       // likely
         t8 = 0 + 1

    loc_0x801d1f58: // orphan
         goto 0x801d20e4
         [s0 + 0x40] = t8

    loc_0x801d1f60: // orphan
         t9 = [s0 + 0x44]
         at = 0 + 2
         t0 = 0 + 2
         v0 = , unsigned  halfword [t9 + 0]
         if                       // unlikely
         

    loc_0x801d1f78: // orphan
         bnel v0, at, 0x801d20e8  // unlikely
         ra = [sp + 0x1c]

    loc_0x801d1f80: // orphan
         call 0x8fb021f8          // 0x8fb021f8(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         call 0x8fb02108          // 0x8fb02108(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         [s0 + 0x3c] = 0
         [s0 + 0x38] = 0
         call 0x8fb024bc          // 0x8fb024bc(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         goto 0x801d20e8
         ra = [sp + 0x1c]

    loc_0x801d1fa8: // orphan
         goto 0x801d20e4
         [s0 + 0x40] = t0

    loc_0x801d1fb0: // orphan
         if                       // unlikely
         at = 0 + 0x800

    loc_0x801d1fb8: // orphan
         call 0x800226c0          // "$\n" // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 3
         t2 = 0 + 2
         goto 0x801d20e4
         [s0 + 0x30] = t2

    loc_0x801d1fcc: // orphan
         bnel v0, at, 0x801d2004  // unlikely
         at = 0 + 0x400

    loc_0x801d1fd4: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t3 = [s0 + 0x30]
         t5 = 0x8fb0 << 16
         t4 = t3 << 3
         t4 += t3
         t4 <<= 2
         t5 += t4
         t5 = , unsigned  byte [t5 + 0x34ae]
         goto 0x801d20e4
         [s0 + 0x30] = t5

    loc_0x801d2004: // orphan
         bnel v0, at, 0x801d203c  // unlikely
         at = 0 + 0x200

    loc_0x801d200c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t6 = [s0 + 0x30]
         t8 = 0x8fb0 << 16
         t7 = t6 << 3
         t7 += t6
         t7 <<= 2
         t8 += t7
         t8 = , unsigned  byte [t8 + 0x34af]
         goto 0x801d20e4
         [s0 + 0x30] = t8

    loc_0x801d203c: // orphan
         bnel v0, at, 0x801d2074  // unlikely
         at = 0 + 0x100

    loc_0x801d2044: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t9 = [s0 + 0x30]
         t1 = 0x8fb0 << 16
         t0 = t9 << 3
         t0 += t9
         t0 <<= 2
         t1 += t0
         t1 = , unsigned  byte [t1 + 0x34b0]
         goto 0x801d20e4
         [s0 + 0x30] = t1

    loc_0x801d2074: // orphan
         if                       // unlikely
         t5 = v0 & 8

    loc_0x801d207c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t2 = [s0 + 0x30]
         t4 = 0x8fb0 << 16
         t3 = t2 << 3
         t3 += t2
         t3 <<= 2
         t4 += t3
         t4 = , unsigned  byte [t4 + 0x34b1]
         goto 0x801d20e4
         [s0 + 0x30] = t4

    loc_0x801d20a8: // orphan
         if                       // likely
         t8 = v0 & 4

    loc_0x801d20b0: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t6 = [s0 + 0x3c]
         t7 = t6 - 1
         goto 0x801d20e4
         [s0 + 0x3c] = t7

    loc_0x801d20c8: // orphan
         beql t8, 0, 0x801d20e8   // likely
         ra = [sp + 0x1c]

    loc_0x801d20d0: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t9 = [s0 + 0x3c]
         t0 = t9 + 1
         [s0 + 0x3c] = t0

    loc_0x801d20e4: // orphan
         ra = [sp + 0x1c]

    loc_0x801d20e8: // orphan
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x801d2840: // orphan
         t0 = t7 + t9
         a3 = , unsigned  halfword [t0 - 0x10]
         a2 += 0x3af0
         a0 = , unsigned  halfword [s0 + 4]
         call 0x800495bc          // 0x800495bc(0xffff, 0x0, 0x3af0, 0xffff)
         a1 = , unsigned  halfword [s0 + 6]
         goto 0x801d29d4
         ra = [sp + 0x24]

    loc_0x801d29d4: // orphan
         s0 = [sp + 0x20]
         sp += 0x50
         ret
         

    loc_0x801e4330: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e433c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4348: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4354: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4380: // orphan
         if                       // unlikely
         

    loc_0x801e4388: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e43a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e43ac: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e43d8: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e43ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e43f8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4408: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4418: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4424: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4434: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4440: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e444c: // orphan
         if                       // unlikely
         

    loc_0x801e4454: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e449c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44c4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4504: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4524: // orphan
         

}

*/
