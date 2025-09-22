/*
 * Function: 0x804025c4
 * ROM Offset: 0x003035c4
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.804025c4 (int esi, int edx) {
// } else {
}
return eax;
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
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
}

/*
// Full analysis output
int fcn.804025c4 (int esi, int edx) {
    loc_0x803f23ac:
        call 0x8007e9c0 // 0x8007e9c0(0x0, 0x0, 0x0, 0x0)
        swc1 f0, 0x2c, sp
        at = 0x86b1 << 16
        lwc1 f2, -0x2e98, at
        lwc1 f4, 0x2c, sp
        at = 0x86b1 << 16
        lwc1 f12, -0x2e90, at
        mul.s f6, f4, f2
        at = 0x43c8 << 16
        mtc1 at, f8
        mul.s f18, f0, f2
        mtc1 0, f14
        a0 = [sp + 0x3c]
        a1 = 0 + 0
        [sp + 0x1c] = 0
        add.s f10, f6, f8
        swc1 f12, 0x14, sp
        mfc1 a3, f18
        swc1 f14, 0x10, sp
        add.s f16, f10, f12
        swc1 f14, 0x18, sp
        mfc1 a2, f16
        call 0x80038e14 // 0x80038e14(0x0, 0x0, 0x0, 0x0)
        0x803f2408
        t6 = 0x86b1 << 16
        t6 = [t6 + 0x7eac]
        a0 = 0x86b1 << 16
        a0 += 0x7e2c
        bnel t6, 0, 0x803f2430 // likely
        ra = [sp + 0x24]
            
    loc_0x803f2430:
        sp += 0x38
        v0 = 0 + 1
        ret
        0x803f243c
         // } else {
    loc_0x803f2424:
        call 0x87c037c0 // 0x87c037c0(0x0, 0x0, 0x0, 0x0)
        a1 = [sp + 0x3c]
        ra = [sp + 0x24]
        }
        return eax;
    loc_0x803f25f0: // orphan
             v0 = [s6 + 0x1b4]
             t1 = [sp + 0xa4]
             s5 = 0
             if                       // unlikely
             t2 = t1 << 2

    loc_0x803f2604: // orphan
         t4 = t1 << 2
         t4 += t1
         t2 += t1
         t3 = 0x86b1 << 16
         t5 = 0x86b1 << 16
         t5 -= 0x2710
         t3 += 0x7a78
         t2 <<= 2
         t4 <<= 3
         s2 = t4 + t5
         s4 = t2 + t3

    loc_0x803f2630: // orphan
         t6 = s5 + 1
         if                       // likely
         a1 = 0xde00 << 16

    loc_0x803f263c: // orphan
         t7 = [s6 + 0x1a4]
         t0 = 0xfc37 << 16
         t0 |= 0x7e6e
         if                       // likely
         t8 = t7 & 1

    loc_0x803f2650: // orphan
         if                       // likely
         

    loc_0x803f2658: // orphan
         t8 -= 2

    loc_0x803f265c: // orphan
         if                       // likely
         t2 = 0x11fc << 16

    loc_0x803f2664: // orphan
         v0 = [s1 + 0]
         t2 |= 0xf279
         t1 = 0xfa00 << 16
         t9 = v0 + 8
         [s1 + 0] = t9
         [v0 + 4] = t2
         [v0 + 0] = t0
         v0 = [s1 + 0]
         t1 |= 0x6464
         t4 = 0 - 1
         t3 = v0 + 8
         [s1 + 0] = t3
         [v0 + 4] = t4
         goto 0x803f26b8
         [v0 + 0] = t1

    loc_0x803f26a0: // orphan
         v0 = [s1 + 0]
         t5 = v0 + 8
         [s1 + 0] = t5
         [v0 + 0] = a1
         t6 = [sp + 0x70]
         [v0 + 4] = t6

    loc_0x803f26b8: // orphan
         t7 = [s4 + 0x1c4]
         t8 = t7 << 2
         t9 = s7 + t8
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = [t9 + 0]
         v1 = [s4 + 0x1c4]
         t5 = 0x86b1 << 16
         t5 -= 0x2670
         t0 = v1 << 2
         t2 = s7 + t0
         v0 = [t2 + 0]
         at = 0x4f80 << 16
         t4 = v1 << 3
         t3 = , unsigned  halfword [v0 + 0]
         mtc1 t3, f4
         if                       // likely
         cvt.s.w f14, f4

    loc_0x803f26fc: // orphan
         mtc1 at, f6
         
         add.s f14, f14, f6

    loc_0x803f2708: // orphan
         c.lt.s f20, f14
         t3 = 0 + 0x400
         at = 0x4f80 << 16
         bc1fl 0x803f2728
         mov.s f2, f24
         goto 0x803f2728
         mov.s f2, f22

    loc_0x803f2728: // orphan
         t1 = , unsigned  halfword [v0 + 2]
         v0 = t4 + t5
         add.s f16, f2, f14
         mtc1 t1, f8
         if                       // likely
         cvt.s.w f12, f8

    loc_0x803f2740: // orphan
         mtc1 at, f10
         
         add.s f12, f12, f10

    loc_0x803f274c: // orphan
         c.lt.s f20, f12
         t1 = 0 + 0x400
         trunc.w.s f18, f16
         bc1fl 0x803f276c
         mov.s f0, f24
         goto 0x803f276c
         mov.s f0, f22

    loc_0x803f276c: // orphan
         add.s f4, f0, f12
         t6 = [v0 + 0]
         t7 = [s2 + 0]
         t8 = [v0 + 4]
         trunc.w.s f6, f4
         t9 = [s2 + 4]
         mfc1 a2, f18
         a0 = t6 + t7
         mfc1 a3, f6
         a1 = t8 + t9
         a1 <<= 0x10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t3
         [sp + 0x1c] = t1
         call 0x80044270          // 0x80044270(0x2e, 0xfffffff4, 0x0, 0x0)
         [sp + 0x20] = 0
         t4 = [s4 + 0x224]
         t6 = 0xfa00 << 16
         t7 = 0xffb4 << 16
         beql t4, 0, 0x803f2a94   // unlikely
         v0 = [s6 + 0x1b4]

    loc_0x803f27e0: // orphan
         v0 = [s1 + 0]
         t7 |= 0xff
         t9 = 0xfb00 << 16
         t5 = v0 + 8
         [s1 + 0] = t5
         [v0 + 4] = t7
         [v0 + 0] = t6
         v1 = v0
         v0 = [s1 + 0]
         t0 = 0 + 0xff
         t3 = 0xfc30 << 16
         t8 = v0 + 8
         [s1 + 0] = t8
         [v0 + 4] = t0
         [v0 + 0] = t9
         a0 = v0
         v0 = [s1 + 0]
         t3 |= 0xfe61
         t1 = 0 - 0xc07
         t2 = v0 + 8
         [s1 + 0] = t2
         [v0 + 4] = t1
         [v0 + 0] = t3
         s3 = [s4 + 0x224]
         a1 = v0
         div 0, s3, fp
         a2 = lo
         if                       // likely
         

    loc_0x803f2854: // orphan
         break 7

    loc_0x803f2858: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f2864: // orphan
         if                       // unlikely
         

    loc_0x803f286c: // orphan
         break 6

    loc_0x803f2870: // orphan
         if                       // likely
         

    loc_0x803f2878: // orphan
         t5 = 0x86b2 << 16
         t5 -= 0x7ed8
         t4 = a2 << 2
         s0 = t4 + t5
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = [s0 + 0]
         v0 = [s0 + 0]
         t0 = 0 + 0x400
         t2 = 0 + 0x400
         t6 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         mtc1 t6, f8
         if                       // likely
         cvt.s.w f14, f8

    loc_0x803f28b0: // orphan
         mtc1 at, f10
         
         add.s f14, f14, f10

    loc_0x803f28bc: // orphan
         c.lt.s f20, f14
         at = 0x4f80 << 16
         bc1fl 0x803f28d8
         mov.s f2, f24
         goto 0x803f28d8
         mov.s f2, f22

    loc_0x803f28d8: // orphan
         t7 = , unsigned  halfword [v0 + 2]
         add.s f4, f2, f14
         mtc1 t7, f16
         if                       // likely
         cvt.s.w f12, f16

    loc_0x803f28ec: // orphan
         mtc1 at, f18
         
         add.s f12, f12, f18

    loc_0x803f28f8: // orphan
         c.lt.s f20, f12
         trunc.w.s f6, f4
         bc1fl 0x803f2914
         mov.s f0, f24
         goto 0x803f2914
         mov.s f0, f22

    loc_0x803f2914: // orphan
         add.s f8, f0, f12
         a0 = [s2 + 0]
         a1 = [s2 + 4]
         mfc1 a2, f6
         trunc.w.s f10, f8
         a0 += 0xa                // arg1
         a1 += 0xd                // arg2
         a1 <<= 0x10              // arg2
         mfc1 a3, f10
         a0 <<= 0x10              // arg1
         a2 <<= 0x10              // arg3
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         a2 = , signed  a2 >> 0x10 // arg3
         a0 = , signed  a0 >> 0x10 // arg1
         a1 = , signed  a1 >> 0x10 // arg2
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t0
         [sp + 0x1c] = t2
         call 0x80044270          // 0x80044270(0x39, 0xffff0007, 0x0, 0x0)
         [sp + 0x20] = 0

    loc_0x803f296c: // orphan
         div 0, s3, fp
         t3 = hi
         t4 = 0x86b2 << 16
         t4 -= 0x7ed8
         t1 = t3 << 2
         s0 = t1 + t4
         if                       // likely
         

    loc_0x803f298c: // orphan
         break 7

    loc_0x803f2990: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f299c: // orphan
         if                       // unlikely
         

    loc_0x803f29a4: // orphan
         break 6

    loc_0x803f29a8: // orphan
         a0 = [s0 + 0]
         call 0x8004d1fc          // 0x8004d1fc(0x2f, 0x0, 0x0, 0x0)
         
         v0 = [s0 + 0]
         t9 = 0 + 0x400
         t0 = 0 + 0x400
         t5 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         mtc1 t5, f16
         if                       // likely
         cvt.s.w f14, f16

    loc_0x803f29d4: // orphan
         mtc1 at, f18
         
         add.s f14, f14, f18

    loc_0x803f29e0: // orphan
         c.lt.s f20, f14
         at = 0x4f80 << 16
         bc1fl 0x803f29fc
         mov.s f2, f24
         goto 0x803f29fc
         mov.s f2, f22

    loc_0x803f29fc: // orphan
         t6 = , unsigned  halfword [v0 + 2]
         add.s f8, f2, f14
         mtc1 t6, f4
         if                       // likely
         cvt.s.w f12, f4

    loc_0x803f2a10: // orphan
         mtc1 at, f6
         
         add.s f12, f12, f6

    loc_0x803f2a1c: // orphan
         c.lt.s f20, f12
         trunc.w.s f10, f8
         bc1fl 0x803f2a38
         mov.s f0, f24
         goto 0x803f2a38
         mov.s f0, f22

    loc_0x803f2a38: // orphan
         add.s f16, f0, f12
         a0 = [s2 + 0]
         a1 = [s2 + 4]
         mfc1 a2, f10
         trunc.w.s f18, f16
         a0 += 0xe
         a1 += 0xd
         a1 <<= 0x10
         mfc1 a3, f18
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t9
         [sp + 0x1c] = t0
         call 0x80044270          // 0x80044270(0x3d, 0xffff0007, 0x0, 0x0)
         [sp + 0x20] = 0
         v0 = [s6 + 0x1b4]

    loc_0x803f2a94: // orphan
         s5 += 1
         s4 += 4
         at = , s5 < v0
         if                       // unlikely
         s2 += 8

    loc_0x803f2aa8: // orphan
         a1 = 0xde00 << 16

    loc_0x803f2aac: // orphan
         t2 = [sp + 0xa4]
         at = 0 + 2
         s6 += 4
         t3 = t2 + 1
         if                       // likely
         [sp + 0xa4] = t3

    loc_0x803f2ac4: // orphan
         v0 = [s1 + 0]
         t4 = 0x8009 << 16
         t4 += 0x4f50
         t1 = v0 + 8
         [s1 + 0] = t1
         [v0 + 4] = t4
         [v0 + 0] = a1
         ra = [sp + 0x6c]
         ldc1 f20, 0x30, sp
         ldc1 f22, 0x38, sp
         ldc1 f24, 0x40, sp
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         s5 = [sp + 0x5c]
         s6 = [sp + 0x60]
         s7 = [sp + 0x64]
         fp = [sp + 0x68]
         sp += 0xa8
         ret
         v0 = 0 + 1

    loc_0x803f2d50: // orphan
         goto 0x803f2d74
         [at - 0x2ea0] = 0

    loc_0x803f2d74: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803f2fa8: // orphan
         a1 += 0x2af0             // arg2
         a0 += 0x2ad0             // arg1
         call 0x87f024f4          // 0x87f024f4(0x2ad0, 0x2af0, 0x0, 0x0)
         a2 = 0 + 0xa
         s0 = 0x86b1 << 16
         s0 -= 0x1f78
         a1 = s0
         call 0x80037e9c          // 0x80037e9c(0x2ad0, 0x86b0e088, 0xa, 0x0)
         a0 = 0
         a1 = 0x86b1 << 16
         a2 = 0x86b1 << 16
         a2 += 0x3a80
         a1 += 0x3a68
         a0 = s0
         call 0x87f0252c          // 0x87f0252c(0x86b0e088, 0x86b13a68, 0x86b13a80, 0x0)
         a3 = 0 + 0x21
         call 0x8004c8c0          // 0x8004c8c0(0x86b0e088, 0x86b13a68, 0x86b13a80, 0x21)
         a0 = 0 + 0x1b2
         call 0x8004c8c0          // 0x8004c8c0(0x1b2, 0x86b13a68, 0x86b13a80, 0x21)
         a0 = 0 + 0x1ad
         call 0x8004c8c0          // 0x8004c8c0(0x1ad, 0x86b13a68, 0x86b13a80, 0x21)
         a0 = 0 + 0x1ae
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x86b13a68, 0x86b13a80, 0x21)
         a1 = 0 + 6
         s0 = 0x86b2 << 16
         s0 -= 0x7f08
         [s0 + 0] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x6, 0x86b13a80, 0x21)
         a1 = 0 + 7
         [s0 + 4] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x7, 0x86b13a80, 0x21)
         a1 = 0 + 8
         [s0 + 8] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x8, 0x86b13a80, 0x21)
         a1 = 0 + 9
         [s0 + 0xc] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x9, 0x86b13a80, 0x21)
         a1 = 0 + 2
         s0 = 0x86b2 << 16
         s0 -= 0x7ef8
         [s0 + 0] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x2, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 4] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x3, 0x86b13a80, 0x21)
         a1 = 0 + 4
         [s0 + 8] = v0
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x4, 0x86b13a80, 0x21)
         a1 = 0 + 5
         [s0 + 0xc] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x5, 0x86b13a80, 0x21)
         a1 = 0
         s0 = 0x86b2 << 16
         s0 -= 0x7eb0
         [s0 + 0] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x0, 0x86b13a80, 0x21)
         a1 = 0 + 1
         [s0 + 4] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x1, 0x86b13a80, 0x21)
         a1 = 0 + 2
         [s0 + 8] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x2, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 0xc] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x3, 0x86b13a80, 0x21)
         a1 = 0 + 4
         [s0 + 0x10] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x4, 0x86b13a80, 0x21)
         a1 = 0 + 5
         [s0 + 0x14] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x5, 0x86b13a80, 0x21)
         a1 = 0 + 6
         [s0 + 0x18] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x6, 0x86b13a80, 0x21)
         a1 = 0 + 7
         [s0 + 0x1c] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x7, 0x86b13a80, 0x21)
         a1 = 0 + 8
         [s0 + 0x20] = v0
         a0 = 0 + 0x1ad
         call 0x8004c990          // 0x8004c990(0x1ad, 0x8, 0x86b13a80, 0x21)
         a1 = 0 + 9
         [s0 + 0x24] = v0
         a0 = 0 + 0x1ae
         call 0x8004c990          // 0x8004c990(0x1ae, 0x9, 0x86b13a80, 0x21)
         a1 = 0 + 1
         at = 0x86b2 << 16
         [at - 0x7e88] = v0
         call 0x8004c8c0          // 0x8004c8c0(0x1ae, 0x1, 0x86b13a80, 0x21)
         a0 = 0 + 0x189
         call 0x8004c8c0          // 0x8004c8c0(0x189, 0x1, 0x86b13a80, 0x21)
         a0 = 0 + 0x18a
         a0 = 0 + 0x189
         call 0x8004c990          // 0x8004c990(0x189, 0x1, 0x86b13a80, 0x21)
         a1 = 0
         at = 0x86b2 << 16
         [at - 0x7e84] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x0, 0x86b13a80, 0x21)
         a1 = 0
         s0 = 0x86b2 << 16
         s0 -= 0x7e80
         [s0 + 0] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x0, 0x86b13a80, 0x21)
         a1 = 0 + 1
         [s0 + 4] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x1, 0x86b13a80, 0x21)
         a1 = 0 + 2
         [s0 + 8] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x2, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 0xc] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x3, 0x86b13a80, 0x21)
         a1 = 0 + 4
         [s0 + 0x10] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x4, 0x86b13a80, 0x21)
         a1 = 0 + 5
         [s0 + 0x14] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x5, 0x86b13a80, 0x21)
         a1 = 0 + 6
         [s0 + 0x18] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x6, 0x86b13a80, 0x21)
         a1 = 0 + 7
         [s0 + 0x1c] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x7, 0x86b13a80, 0x21)
         a1 = 0 + 8
         [s0 + 0x20] = v0
         a0 = 0 + 0x18a
         call 0x8004c990          // 0x8004c990(0x18a, 0x8, 0x86b13a80, 0x21)
         a1 = 0 + 9
         v1 = 0x86b2 << 16
         v1 -= 0x7e58
         t4 = 0xb43c << 16
         t5 = 0xb48c << 16
         t6 = 0x28a0 << 16
         t7 = 0x2896 << 16
         t8 = 0x5050 << 16
         t9 = 0x963c << 16
         t4 |= 0x3cff
         t5 |= 0x28ff
         t6 |= 0x28ff
         t7 |= 0x96ff
         t8 |= 0xc8ff
         t9 |= 0x96ff
         [s0 + 0x24] = v0
         [v1 + 0] = t4
         [v1 + 4] = t5
         [v1 + 8] = t6
         [v1 + 0xc] = t7
         [v1 + 0x10] = t8
         [v1 + 0x14] = t9
         call 0x8004c8c0          // 0x8004c8c0(0x18a, 0x9, 0x86b13a80, 0x21)
         a0 = 0 + 0x185
         call 0x8004c8c0          // 0x8004c8c0(0x185, 0x9, 0x86b13a80, 0x21)
         a0 = 0 + 0x186
         a0 = 0 + 0x185
         call 0x8004c990          // 0x8004c990(0x185, 0x9, 0x86b13a80, 0x21)
         a1 = 0 + 2
         s0 = 0x86b2 << 16
         s0 -= 0x7ee8
         [s0 + 0] = v0
         a0 = 0 + 0x185
         call 0x8004c990          // 0x8004c990(0x185, 0x2, 0x86b13a80, 0x21)
         a1 = 0
         [s0 + 4] = v0
         a0 = 0 + 0x185
         call 0x8004c990          // 0x8004c990(0x185, 0x0, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 8] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x3, 0x86b13a80, 0x21)
         a1 = 0
         s0 = 0x86b2 << 16
         s0 -= 0x7ed8
         [s0 + 0] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x0, 0x86b13a80, 0x21)
         a1 = 0 + 1
         [s0 + 4] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x1, 0x86b13a80, 0x21)
         a1 = 0 + 2
         [s0 + 8] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x2, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 0xc] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x3, 0x86b13a80, 0x21)
         a1 = 0 + 4
         [s0 + 0x10] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x4, 0x86b13a80, 0x21)
         a1 = 0 + 5
         [s0 + 0x14] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x5, 0x86b13a80, 0x21)
         a1 = 0 + 6
         [s0 + 0x18] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x6, 0x86b13a80, 0x21)
         a1 = 0 + 7
         [s0 + 0x1c] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x7, 0x86b13a80, 0x21)
         a1 = 0 + 8
         [s0 + 0x20] = v0
         a0 = 0 + 0x186
         call 0x8004c990          // 0x8004c990(0x186, 0x8, 0x86b13a80, 0x21)
         a1 = 0 + 9
         [s0 + 0x24] = v0
         call 0x8004c8c0          // 0x8004c8c0(0x186, 0x9, 0x86b13a80, 0x21)
         a0 = 0 + 0x188
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x9, 0x86b13a80, 0x21)
         a1 = 0
         s0 = 0x86b2 << 16
         s0 -= 0x7f20
         [s0 + 0] = v0
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x0, 0x86b13a80, 0x21)
         a1 = 0 + 1
         [s0 + 4] = v0
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x1, 0x86b13a80, 0x21)
         a1 = 0 + 2
         [s0 + 8] = v0
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x2, 0x86b13a80, 0x21)
         a1 = 0 + 3
         [s0 + 0xc] = v0
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x3, 0x86b13a80, 0x21)
         a1 = 0 + 4
         [s0 + 0x10] = v0
         a0 = 0 + 0x188
         call 0x8004c990          // 0x8004c990(0x188, 0x4, 0x86b13a80, 0x21)
         a1 = 0
         mtc1 0, f0
         a0 = v0
         a3 = 0xf00 << 16
         mfc1 a1, f0
         mfc1 a2, f0
         call 0x87f08df8          // 0x87f08df8(0x0, 0x0, 0x86b13a80, 0xf000000)
         
         s0 = 0x86b1 << 16
         s0 -= 0x1f90
         at = 0x86b2 << 16
         [at - 0x7f28] = v0
         a1 = s0
         call 0x80037e9c          // 0x80037e9c(0x0, 0x86b0e070, 0x86b13a80, 0xf000000)
         a0 = 0
         a1 = 0x86b1 << 16
         a2 = 0x86b1 << 16
         a2 += 0x7f48
         a1 += 0x7f30
         a0 = s0
         call 0x87f0252c          // 0x87f0252c(0x86b0e070, 0x86b17f30, 0x86b17f48, 0xf000000)
         a3 = 0 + 1
         s2 = 0x86b1 << 16
         s2 += 0x6d90
         s1 = 0
         s3 = sp + 0x5c

    loc_0x803f3428: // orphan
         call 0x8004ddf4          // 0x8004ddf4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x8f
         call 0x80002b24          // 0x80002b24(0x8f, 0x0, 0x0, 0x0)
         
         a0 = v0
         call 0x800030d0          // 0x800030d0(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         t2 = 0x86b2 << 16
         t2 = [t2 - 0x7e40]
         s0 = v0
         a0 = s3
         a2 = 0 + 0xb
         a3 = s1
         call 0x87f0ad50          // 0x87f0ad50(0x0, 0x0, 0xb, 0x0)
         a1 = [t2 + 0xc]
         a3 = [s3 + 0]
         a0 = s0
         a1 = 0 + 0x8f
         a2 = 0
         call 0x8004e018          // 0x8004e018(0x0, 0x8f, 0x0, 0x37)
         [sp + 0xc] = a3
         [s2 + 0] = v0
         call 0x80003120          // "&1" // 0x80003120(0x0, 0x8f, 0x0, 0x37)
         a0 = s0
         s1 += 1
         at = , s1 < 4
         if                       // likely
         s2 += 4

    loc_0x803f3498: // orphan
         s2 = 0x86b1 << 16
         s0 = 0x86b1 << 16
         s3 = 0x86b1 << 16
         at = 0x86b1 << 16
         lwc1 f20, -0x23d0, at
         s3 += 0x7364
         s0 += 0x7340
         s2 += 0x6d90
         s1 = 0

    loc_0x803f34bc: // orphan
         a1 = 0x87f1 << 16
         a1 += 0x5b70
         call 0x8003f03c          // 0x8003f03c(0x0, 0x87f15b70, 0x0, 0x0)
         a0 = s0
         a0 = s3
         call 0x87f06430          // 0x87f06430(0x0, 0x87f15b70, 0x0, 0x0)
         a1 = s1
         at = 0x4248 << 16
         mtc1 at, f4
         swc1 f20, 0x38, s0
         swc1 f20, 0x34, s0
         swc1 f20, 0x30, s0
         a0 = s0
         a1 = 0
         a2 = 0 - 1
         a3 = [s2 + 0]
         call 0x8003f114          // 0x8003f114(0x0, 0x0, -1, 0x0)
         swc1 f4, 0x28, s0
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x0, 0x0, -1, 0x0)
         a1 = 0
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, -1, 0x0)
         
         at = 0 + 0x1e
         div 0, v0, at
         a1 = hi
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // "&1" // 0x8003eb84(0x0, 0x0, -1, 0x0)
         a0 = s0
         s1 += 1
         at = , s1 < 4
         s2 += 4
         s0 += 0x168
         if                       // likely
         s3 += 0x168

    loc_0x803f354c: // orphan
         s0 = 0x86b1 << 16
         s2 = 0x86b0 << 16
         s2 += 0x23fc
         s0 += 0x6da0
         s1 = 0

    loc_0x803f3560: // orphan
         call 0x8003f018          // 0x8003f018(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         a0 = s0
         a1 = s2
         call 0x80037e3c          // "&1" // 0x80037e3c(0x0, 0x0, 0x0, 0x0)
         a2 = s1
         s1 += 1
         at = , s1 < 4
         s0 += 0x168
         swc1 f20, -0x130, s0
         swc1 f20, -0x134, s0
         if                       // likely
         swc1 f20, -0x138, s0

    loc_0x803f3594: // orphan
         a0 = 0x86b1 << 16
         call 0x8003f018          // 0x8003f018(0x86b10000, 0x0, 0x0, 0x0)
         a0 += 0x7910
         a0 = 0x86b1 << 16
         a1 = 0x86b0 << 16
         a1 += 0x3228
         a0 += 0x7910
         call 0x80037e3c          // 0x80037e3c(0x86b17910, 0x86b03228, 0x0, 0x0)
         a2 = 0
         at = 0x3f00 << 16
         mtc1 at, f6
         v0 = 0x86b1 << 16
         v0 += 0x7910
         swc1 f6, 0x38, v0
         lwc1 f8, 0x38, v0
         a0 = 0 + 0x133
         swc1 f8, 0x34, v0
         lwc1 f10, 0x34, v0
         call 0x8004c8c0          // 0x8004c8c0(0x133, 0x86b03228, 0x0, 0x0)
         swc1 f10, 0x30, v0
         a0 = 0 + 0x133
         call 0x8004c990          // 0x8004c990(0x133, 0x86b03228, 0x0, 0x0)
         a1 = 0
         mtc1 0, f0
         a0 = v0
         a3 = 0xf00 << 16
         mfc1 a1, f0
         mfc1 a2, f0
         call 0x87f08df8          // 0x87f08df8(0x86b17910, 0x0, 0x0, 0xf000000)
         
         at = 0x86b1 << 16
         a0 = 0x86b1 << 16
         a1 = 0x86b1 << 16
         [at - 0x180c] = v0
         a1 -= 0x1e40
         a0 -= 0x1e58
         call 0x87f024f4          // 0x87f024f4(0x86b0e1a8, 0x86b0e1c0, 0x0, 0xf000000)
         a2 = 0 + 4
         a0 = 0x86b1 << 16
         a1 = 0x86b1 << 16
         a1 -= 0x17f0
         a0 -= 0x1808
         call 0x87f024f4          // 0x87f024f4(0x86b0e7f8, 0x86b0e810, 0x4, 0xf000000)
         a2 = 0 + 1
         a0 = 0x86b1 << 16
         a0 += 0x78e8
         call 0x87f03bb0          // 0x87f03bb0(0x86b178e8, 0x86b0e810, 0x1, 0xf000000)
         a1 = 0 + 0x63
         t5 = 0x86b2 << 16
         t5 = [t5 - 0x7e40]
         s3 = 0x86b2 << 16
         s3 -= 0x7e10
         t6 = [t5 + 0xc]
         a0 = s3
         call 0x87f029b8          // 0x87f029b8(0x86b181f0, 0x63, 0x1, 0xf000000)
         a1 = , unsigned  byte [t6 + 0x2182]
         at = 0x425c << 16
         mtc1 at, f12
         at = 0x86b1 << 16
         mtc1 0, f2
         lwc1 f0, -0x23cc, at
         t0 = 0
         a1 = 0
         t1 = 0 + 0xff

    loc_0x803f3694: // orphan
         t7 = [s3 + 0x18]
         a2 = t0 + t7
         [a2 + 0] = 0
         t8 = [s3 + 0x18]
         v1 = t0 + t8
         swc1 f2, 4, v1
         swc1 f12, 8, v1
         swc1 f2, 0xc, v1
         t9 = [s3 + 0x14]
         a0 = a1 + t9
         swc1 f0, 0x54, a0
         swc1 f0, 0x58, a0
         swc1 f0, 0x5c, a0
         t2 = [s3 + 0x18]
         a1 += 0x18c
         at = , a1 < 0x630
         v0 = t0 + t2
         t0 += 0x18
         byte [v0 + 0x12] = t1
         byte [v0 + 0x13] = t1
         byte [v0 + 0x14] = t1
         if                       // likely
         byte [v0 + 0x15] = 0

    loc_0x803f36f0: // orphan
         call 0x86b007d0          // 0x86b007d0(0x0, 0x0, 0x0, 0x0)
         
         t3 = 0x86b2 << 16
         t3 = [t3 - 0x7e40]
         at = 0 + 4
         s2 = 0x86b1 << 16
         t4 = [t3 + 0xc]
         s0 = 0x86b1 << 16
         s0 += 0x6da0
         t5 = , unsigned  byte [t4 + 0x2180]
         s2 += 0x6d90
         s1 = 0
         if                       // likely
         t0 = 0

    loc_0x803f3728: // orphan
         a0 = s0
         a1 = 0
         a2 = 0 - 1
         a3 = [s2 + 0]
         call 0x8003f114          // 0x8003f114(0x0, 0x0, -1, 0x0)
         [sp + 0x34] = t0
         call 0x86b0b608          // 0x86b0b608(0x0, 0x0, -1, 0x0)
         a0 = s1
         t0 = [sp + 0x34]
         t6 = [s3 + 0x18]
         t1 = 0 + 0xff
         s1 += 1
         v0 = t0 + t6
         at = 0 + 4
         t7 = 0 + 0xb4
         s2 += 4
         s0 += 0x168
         byte [v0 + 0x15] = t7
         byte [v0 + 0x12] = t1
         byte [v0 + 0x13] = t1
         byte [v0 + 0x14] = t1
         if                       // likely
         t0 += 0x18

    loc_0x803f3784: // orphan
         a0 = 0x86b1 << 16
         call 0x8003f1dc          // 0x8003f1dc(0x86b10000, 0x0, 0x0, 0x0)
         a0 += 0x7910
         a0 = 0x86b1 << 16
         a3 = 0x86b1 << 16
         a3 = [a3 + 0x7908]
         a0 += 0x7910
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x86b17910, 0x0, 0x0, -1)
         a2 = 0 - 1
         a0 = 0x86b1 << 16
         a0 += 0x7910
         call 0x8003f210          // 0x8003f210(0x86b17910, 0x0, -1, -1)
         a1 = 0 + 1
         a0 = 0x86b1 << 16
         a0 += 0x7910
         call 0x8003eb84          // 0x8003eb84(0x86b17910, 0x1, -1, -1)
         a1 = 0 + 0x1e
         a0 = 0x86b1 << 16
         a0 += 0x7910
         call 0x8003f3bc          // 0x8003f3bc(0x86b17910, 0x1e, -1, -1)
         a1 = 0
         call 0x86b0b9a0          // 0x86b0b9a0(0x86b17910, 0x0, -1, -1)
         
         call 0x80007aec          // 0x80007aec(0x86b17910, 0x0, -1, -1)
         a0 = 0 + 0x14
         t8 = 0x86b2 << 16
         t8 = [t8 - 0x7e40]
         s0 = 0 + 3
         call 0x87f00688          // 0x87f00688(0x14, 0x0, -1, -1)
         [t8 + 0] = s0
         t9 = 0x86b2 << 16
         t9 = [t9 - 0x7e40]
         call 0x87f00688          // 0x87f00688(0x14, 0x0, -1, -1)
         [t9 + 0] = s0
         call 0x800225c4          // 0x800225c4(0x14, 0x0, -1, -1)
         a0 = 0 + 0x28

    loc_0x803f3818: // orphan
         ra = [sp + 0x2c]
         ldc1 f20, 0x10, sp
         s0 = [sp + 0x1c]         // t0
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret
         sp += 0x70

    loc_0x803f4994: // orphan
         lwc1 f4, 0x3c, sp
         lwc1 f6, 0x38, sp
         sub.s f16, f8, f10
         at = 0x4302 << 16
         mtc1 at, f2
         sub.s f8, f4, f6
         lwc1 f6, 0x48, sp
         mul.s f18, f2, f16
         lwc1 f4, 0x4c, sp
         at = 0x47a0 << 16
         mul.s f10, f2, f8
         a0 = s0
         sub.s f8, f4, f6
         mul.s f16, f18, f10
         lwc1 f10, 0x50, sp
         mul.s f18, f2, f8
         sub.s f4, f10, f0
         mtc1 at, f10
         mul.s f6, f4, f2
         lwc1 f4, 0x34, sp
         mul.s f8, f6, f18
         add.s f0, f8, f16
         mul.s f6, f10, f4
         sqrt.s f0, f0
         div.s f18, f6, f0
         trunc.w.s f8, f18
         mfc1 a1, f8
         call 0x8003eb74          // 0x8003eb74(0x0, 0x0, 0x0, 0x0)
         
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         v1 = [s1 + 0x34]
         goto 0x803f53ac
         a3 = [sp + 0x6c]

    loc_0x803f52ec: // orphan
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 3
         v1 = [s1 + 0x34]
         goto 0x803f53ac
         a3 = [sp + 0x6c]

    loc_0x803f53ac: // orphan
         at = 0 + 0xd
         if                       // unlikely
         t0 = a3 << 2

    loc_0x803f53b8: // orphan
         at = 0 + 0xe
         if                       // unlikely
         t8 = a3 << 2

    loc_0x803f53c4: // orphan
         t7 = [sp + 0x20]
         t8 = 0x86b2 << 16
         t8 = [t8 - 0x7df8]
         t6 = a3 << 2
         t6 -= a3
         at = 0x425c << 16
         mtc1 at, f4
         lwc1 f16, 0x14, t7
         t6 <<= 3
         v0 = t6 + t8
         swc1 f16, 4, v0
         swc1 f4, 8, v0
         t9 = [sp + 0x20]
         v1 = 0x8009 << 16
         lwc1 f10, 0x18, t9
         swc1 f10, 0xc, v0
         goto 0x803f5558
         v1 = , unsigned  halfword [v1 + 0x4904]

    loc_0x803f540c: // orphan
         t3 = a3 << 2
         t3 -= a3
         t2 = [sp + 0x20]
         t3 <<= 2
         t1 = 0x86b2 << 16
         t1 = [t1 - 0x7df8]
         t3 -= a3
         t3 <<= 2
         t0 -= a3
         lwc1 f18, 0x14, t2
         t0 <<= 3
         t3 += a3
         t4 = 0x86b1 << 16
         t4 += 0x6da0
         t3 <<= 3
         s0 = t0 + t1
         a0 = t3 + t4
         call 0x8003ec54          // 0x8003ec54(0x86b16da0, 0x0, 0x0, 0x0)
         swc1 f18, 4, s0
         t5 = v0 << 2
         at = 0x86b1 << 16
         at += t5
         lwc1 f8, -0x2df4, at
         at = 0x86b1 << 16
         ldc1 f16, -0x22b8, at
         cvt.d.s f6, f8
         at = 0x4049 << 16
         mul.d f4, f6, f16
         mtc1 at, f11
         mtc1 0, f10
         at = 0x86b1 << 16
         ldc1 f8, -0x22b0, at
         v1 = 0x8009 << 16
         mul.d f18, f4, f10
         sub.d f6, f18, f8
         cvt.s.d f16, f6
         swc1 f16, 8, s0
         t6 = [sp + 0x20]
         lwc1 f4, 0x18, t6
         swc1 f4, 0xc, s0
         goto 0x803f5558
         v1 = , unsigned  halfword [v1 + 0x4904]

    loc_0x803f54b4: // orphan
         t0 = a3 << 2
         t0 -= a3
         t9 = [sp + 0x20]
         t0 <<= 2
         t7 = 0x86b2 << 16
         t7 = [t7 - 0x7df8]
         t0 -= a3
         t0 <<= 2
         t8 -= a3
         lwc1 f10, 0x14, t9
         t8 <<= 3
         t0 += a3
         t1 = 0x86b1 << 16
         t1 += 0x6da0
         t0 <<= 3
         s0 = t8 + t7
         a0 = t0 + t1
         call 0x8003ec54          // 0x8003ec54(0x86b16da0, 0x0, 0x0, 0x0)
         swc1 f10, 4, s0
         t2 = v0 << 2
         at = 0x86b1 << 16
         at += t2
         lwc1 f18, -0x2d2c, at
         at = 0x86b1 << 16
         ldc1 f6, -0x22a8, at
         cvt.d.s f8, f18
         at = 0x4049 << 16
         mul.d f16, f8, f6
         mtc1 at, f5
         mtc1 0, f4
         at = 0x86b1 << 16
         ldc1 f18, -0x22a0, at
         v1 = 0x8009 << 16
         mul.d f10, f16, f4
         sub.d f8, f10, f18
         cvt.s.d f6, f8
         swc1 f6, 8, s0
         t3 = [sp + 0x20]
         lwc1 f16, 0x18, t3
         swc1 f16, 0xc, s0
         v1 = , unsigned  halfword [v1 + 0x4904]

    loc_0x803f5558: // orphan
         t4 = [sp + 0x24]
         v0 = 0
         halfword [t4 + 0] = v1
         ra = [sp + 0x1c]         // t0
         s1 = [sp + 0x18]
         s0 = [sp + 0x14]
         ret                      // t0
         sp += 0x78

    loc_0x803f5578: // orphan
         t6 = 0x8009 << 16
         t7 = 0x86b1 << 16
         t7 = , unsigned  halfword [t7 + 0x78e0]
         t6 = , unsigned  halfword [t6 + 0x4904]
         sp -= 0x18
         [sp + 0x14] = ra
         [sp + 0x18] = a0
         if                       // likely
         [sp + 0x1c] = a1

    loc_0x803f559c: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         at = 0 + 0x12c
         div 0, v0, at
         t8 = hi
         bnel t8, 0, 0x803f55cc   // unlikely
         v0 = [sp + 0x18]

    loc_0x803f55b8: // orphan
         a0 = 0x86b1 << 16
         a0 += 0x7910
         call 0x8003ef48          // 0x8003ef48(0x86b17910, 0x0, 0x0, 0x0)
         a1 = 0
         v0 = [sp + 0x18]

    loc_0x803f55cc: // orphan
         at = 0 + 2
         t9 = 0x86b1 << 16
         beql v0, 0, 0x803f5890   // likely
         ra = [sp + 0x14]

    loc_0x803f55dc: // orphan
         bnel v0, at, 0x803f5890  // unlikely
         ra = [sp + 0x14]

    loc_0x803f55e4: // orphan
         t9 = [t9 + 0x7abc]
         at = , unsigned  , t9 < 7
         if                       // likely
         t9 <<= 2

    loc_0x803f55f4: // orphan
         at = 0x86b1 << 16
         at += t9
         t9 = [at - 0x2298]
         goto t9
         

    loc_0x803f5620: // orphan
         a0 = 0x86b1 << 16
         a0 += 0x7910             // arg1
         call 0x8003f210          // 0x8003f210(0x86b17910, 0x0, 0x0, 0x0)
         a1 = 0 + 1
         t0 = 0x86b1 << 16
         t0 = [t0 + 0x7a78]
         a0 = 0x86b1 << 16
         at = , t0 < 5
         if                       // likely
         

    loc_0x803f5648: // orphan
         call 0x8003ec54          // 0x8003ec54(0x0, 0x0, 0x0, 0x0)
         a0 += 0x7910
         if                       // unlikely
         

    loc_0x803f5658: // orphan
         call 0x800225c4          // 0x800225c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2

    loc_0x803f5660: // orphan
         a0 = 0x86b1 << 16
         call 0x8003ec54          // 0x8003ec54(0x86b10000, 0x0, 0x0, 0x0)
         a0 += 0x7910
         at = 0 + 5
         bnel v0, at, 0x803f5890  // likely
         ra = [sp + 0x14]

    loc_0x803f5678: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 | 0xaf01
         goto 0x803f5890
         ra = [sp + 0x14]

    loc_0x803f56f4: // orphan
         a0 = 0 + 0x36            // arg1
         goto 0x803f5708
         

    loc_0x803f5708: // orphan
         a0 = 0x86b1 << 16
         call 0x8003ec54          // 0x8003ec54(0x86b10000, 0x0, 0x0, 0x0)
         a0 += 0x7910
         at = 0 + 5
         if                       // likely
         t1 = 0x86b1 << 16

    loc_0x803f5720: // orphan
         t1 = [t1 + 0x7a78]
         at = , t1 < 5
         if                       // likely
         

    loc_0x803f5730: // orphan
         call 0x86b0952c          // 0x86b0952c(0x0, 0x0, 0x0, 0x0)
         

    loc_0x803f5738: // orphan
         a0 = 0x86b1 << 16
         call 0x8003ec34          // 0x8003ec34(0x86b10000, 0x0, 0x0, 0x0)
         a0 += 0x7910
         if                       // likely
         at = 0x86b1 << 16

    loc_0x803f574c: // orphan
         goto 0x803f588c
         [at + 0x7abc] = 0

    loc_0x803f588c: // orphan
         ra = [sp + 0x14]

    loc_0x803f5890: // orphan
         t5 = 0x8009 << 16
         t5 = , unsigned  halfword [t5 + 0x4904]
         at = 0x86b1 << 16
         sp += 0x18
         v0 = 0
         ret
         halfword [at + 0x78e0] = t5

    loc_0x804025c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804025d0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804025ec: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80402604: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8040261c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80402638: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80402660: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8040266c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402684: // orphan
         
         
         
         
         
         
         
         
         
         tge s0, 0, 0x346

}

*/
