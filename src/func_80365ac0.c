/*
 * Function: 0x80365ac0
 * ROM Offset: 0x00266ac0
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80365ac0 (int esi, int edx) {
// do {
if            // likely
// } while (?);
}
return eax;
// do {
if            // likely
// } while (?);
}
return eax;
// do {
// } while (?);
}
return eax;
if                       // likely
if                       // unlikely
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
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
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
int fcn.80365ac0 (int esi, int edx) {
    loc_0x8034b218:
        mtc1 0, f24
        mul.d f16, f10, f0
        mtc1 0, f25
        sdc1 f22, 0x30, sp
        mtc1 a3, f22
        mtc1 a2, f23
        [sp + 0x58] = s6
        [sp + 0x4c] = s3
        s3 = a0
        s6 = sp + 0xa0
        [sp + 0x5c] = ra
        mfc1 a3, f24
        mfc1 a2, f25
        [sp + 0x54] = s5
        [sp + 0x50] = s4
        [sp + 0x48] = s2
        [sp + 0x44] = s1
        [sp + 0x40] = s0
        sdc1 f20, 0x28, sp
        a0 = s6
        sdc1 f16, 0x18, sp
        call 0x87c00120 // 0x87c00120(0x1780a0, 0x0, 0x0, 0x0)
        sdc1 f8, 0x10, sp
        s0 = 0
        s1 = s3 + 0x7760
         // do {
    loc_0x8034b27c:
        mfc1 a2, f23
        mfc1 a3, f22
        call 0x860095b8 // 0x860095b8(0x0, 0x0, 0x0, 0x0)
        a0 = s1
        s0 += 0x2d8
        at = , s0 < 0xb60
        if            // likely
        s1 += 0x2d8
         // } while (?);
        }
        return eax;
    loc_0x8034b29c:
        mtc1 0, f20
        s0 = 0
        s1 = s3 + 0x7760
        s4 = s3 + 0x75c8
        s5 = sp + 0x80
        s2 = sp + 0x84
         // do {
    loc_0x8034b2b4:
        swc1 f20, 0x84, sp
        swc1 f20, 0x80, sp
        a0 = s4
        a1 = s2
        call 0x86001ce8 // 0x86001ce8(0x0, 0x0, 0x0, 0x0)
        a2 = s5
        lwc1 f18, 0x84, sp
        lwc1 f6, 0x80, sp
        a0 = s1
        cvt.d.s f4, f18
        cvt.d.s f8, f6
        mfc1 a3, f4
        mfc1 a2, f5
        sdc1 f8, 0x10, sp
        call 0x86007d98 // 0x86007d98(0x0, 0x0, 0x0, 0x0)
        sdc1 f22, 0x18, sp
        s0 += 0x2d8
        at = , s0 < 0xb60
        s1 += 0x2d8
        if            // likely
        s4 += 0x2d8
         // } while (?);
        }
        return eax;
    loc_0x8034b308:
        s2 = 0x8601 << 16
        s2 -= 0x2880
        s0 = 0
        s1 = s3 + 0x7760
         // do {
    loc_0x8034b318:
        s5 = sp + 0x88
         // } while (?);
        }
        return eax;
    loc_0x8034b31c: // orphan
             mfc1 a2, f23
             mfc1 a3, f22
             t6 = 0 + 1
             [sp + 0x14] = t6
             a0 = s1
             [sp + 0x10] = s2
             call 0x86009260          // 0x86009260(0x0, 0x0, 0x0, 0x0)
             [sp + 0x18] = s5
             s0 += 0x2d8
             at = , s0 < 0xb60
             if                       // likely
             s1 += 0x2d8

    loc_0x8034b34c: // orphan
         at = 0x4014 << 16
         mtc1 at, f21
         mtc1 0, f20
         s2 = 0
         s4 = 0 + 4
         s1 = 0 + 0x2d8
         s0 = 0

    loc_0x8034b368: // orphan
         beql s2, s0, 0x8034b3a8  // likely
         s0 += 1

    loc_0x8034b370: // orphan
         unsigned , hi
         mfc1 a2, f23
         mfc1 a3, f22
         sdc1 f20, 0x10, sp
         [sp + 0x18] = s5
         t7 = lo
         a0 = s3 + t7
         a0 += 0x7760

    loc_0x8034b390: // orphan
         unsigned , hi
         t8 = lo
         a1 = s3 + t8
         call 0x8600853c          // 0x8600853c(0x0, 0x0, 0x0, 0x0)
         a1 += 0x7760
         s0 += 1

    loc_0x8034b3a8: // orphan
         if                       // unlikely
         

    loc_0x8034b3b0: // orphan
         s2 += 1
         at = , s2 < 4
         bnel at, 0, 0x8034b368   // likely
         s0 = 0

    loc_0x8034b3c0: // orphan
         s0 = 0
         s1 = s3 + 0x7760
         s2 = 0 + 0xb60

    loc_0x8034b3cc: // orphan
         mfc1 a2, f23
         mfc1 a3, f22
         a0 = s1
         call 0x86009674          // 0x86009674(0x0, 0x0, 0x0, 0x0)
         a1 = s6
         s0 += 0x2d8
         if                       // likely
         s1 += 0x2d8

    loc_0x8034b3ec: // orphan
         ra = [sp + 0x5c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         ldc1 f24, 0x38, sp
         s0 = [sp + 0x40]
         s1 = [sp + 0x44]
         s2 = [sp + 0x48]
         s3 = [sp + 0x4c]
         s4 = [sp + 0x50]
         s5 = [sp + 0x54]
         s6 = [sp + 0x58]
         ret
         sp += 0xc0

    loc_0x8034b42c: // orphan
         t7 = v0 & 0x800
         if                       // likely
         t0 = v0 & 0x400

    loc_0x8034b438: // orphan
         t8 = v0 & 0x100
         if                       // likely
         t9 = v0 & 0x200

    loc_0x8034b444: // orphan
         at = 0x8601 << 16
         lwc1 f0, -0x2748, at
         swc1 f0                  // arg2
         ret
         swc1 f0                  // arg3

    loc_0x8034b458: // orphan
         if                       // likely
         at = 0x8601 << 16

    loc_0x8034b460: // orphan
         lwc1 f0, -0x2744, at
         at = 0x8601 << 16
         lwc1 f2, -0x2740, at
         swc1 f2                  // arg2
         ret
         swc1 f0                  // arg3

    loc_0x8034b478: // orphan
         mtc1 0, f4
         at = 0x4280 << 16
         mtc1 at, f6
         swc1 f4                  // arg2
         ret
         swc1 f6                  // arg3

    loc_0x8034b490: // orphan
         if                       // unlikely
         t3 = v0 & 0x100

    loc_0x8034b498: // orphan
         t1 = v0 & 0x100
         if                       // likely
         t2 = v0 & 0x200

    loc_0x8034b4a4: // orphan
         at = 0x8601 << 16
         lwc1 f0, -0x273c, at
         at = 0x8601 << 16
         lwc1 f2, -0x2738, at
         swc1 f0                  // arg2
         ret
         swc1 f2                  // arg3

    loc_0x8034b4c0: // orphan
         if                       // likely
         at = 0x8601 << 16

    loc_0x8034b4c8: // orphan
         lwc1 f2, -0x2734, at
         swc1 f2                  // arg2
         ret
         swc1 f2                  // arg3

    loc_0x8034b4d8: // orphan
         mtc1 0, f8
         at = 0xc280 << 16
         mtc1 at, f10
         swc1 f8                  // arg2
         ret
         swc1 f10                 // arg3

    loc_0x8034b4f0: // orphan
         if                       // likely
         t4 = v0 & 0x200

    loc_0x8034b4f4: // orphan
         if                       // likely
         t4 = v0 & 0x200

    loc_0x8034b4f8: // orphan
         at = 0x4280 << 16
         mtc1 at, f16
         mtc1 0, f18
         swc1 f16                 // arg2
         ret
         swc1 f18                 // arg3

    loc_0x8034b510: // orphan
         if                       // likely
         at = 0xc280 << 16

    loc_0x8034b518: // orphan
         mtc1 at, f4
         mtc1 0, f6
         swc1 f4                  // arg2
         ret
         swc1 f6                  // arg3

    loc_0x8034b554: // orphan
         ret
         

    loc_0x8034b560: // orphan
         t6 = [t6 - 0x1f24]
         sp -= 0x30
         [sp + 0x14] = ra
         [sp + 0x30] = a0
         [sp + 0x34] = a1
         if                       // unlikely
         [sp + 0x38] = a2

    loc_0x8034b57c: // orphan
         t9 = a1 << 2             // arg2
         t9 -= a1                 // arg2
         t2 = a2 << 2             // arg3
         t2 -= a2                 // arg3
         t9 <<= 2
         ldc1 f4                  // arg4
         t9 -= a1                 // arg2
         t2 <<= 2
         t2 -= a2                 // arg3
         t9 <<= 2
         t9 += a1                 // arg2

    loc_0x8034b5a8: // orphan
         t2 <<= 2
         cvt.s.d f6, f4
         t2 += a2                 // arg3
         t9 <<= 5
         t0 = a0 + t9             // arg1
         t2 <<= 3
         v1 = t0 + t2
         at = 0 | 0x8000
         v0 = v1 + at
         swc1 f6, 0x1f4, v0
         ldc1 f8, 8, a3           // arg4
         at = 0 | 0x81d0
         a0 = v1 + at             // arg1
         cvt.s.d f10, f8
         a1 = 0
         swc1 f10, 0x1f8, v0
         ldc1 f16, 0x10, a3       // arg4
         cvt.s.d f18, f16
         swc1 f18, 0x1fc, v0
         [sp + 0x3c] = a3
         [sp + 0x20] = a0
         [sp + 0x24] = v1
         call 0x8003f210          // 0x8003f210(0x81d0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = v0
         a0 = [sp + 0x20]
         v0 = [sp + 0x1c]
         v1 = [sp + 0x24]
         t3 = , unsigned  byte [a0 + 1]
         a3 = [sp + 0x3c]
         at = 0 | 0x8000
         t4 = t3 | 1
         byte [a0 + 1] = t4
         t6 = [sp + 0x34]
         t9 = [sp + 0x38]
         t5 = [sp + 0x30]
         t8 = t6 << 4
         t1 = t9 << 2
         t7 = t5 + t8
         a2 = t7 + t1
         a2 += at
         at = 0x8601 << 16
         ldc1 f4, -0x1f00, at
         cvt.s.d f6, f4
         swc1 f6, 0x2ed0, a2
         t0 = [sp + 0x40]
         beql t0, 0, 0x8034b6c8   // likely
         ra = [sp + 0x14]

    loc_0x8034b664: // orphan
         ldc1 f8
         at = 0 | 0x9850
         a0 = v1 + at
         cvt.s.d f10, f8
         a1 = 0
         swc1 f10, 0x1874, v0
         ldc1 f16, 8, a3
         cvt.s.d f18, f16
         swc1 f18, 0x1878, v0
         ldc1 f4, 0x10, a3
         cvt.s.d f6, f4
         swc1 f6, 0x187c, v0
         [sp + 0x18] = a2
         call 0x8003f210          // 0x8003f210(0x9850, 0x0, 0x0, 0x0)
         [sp + 0x20] = a0
         a0 = [sp + 0x20]
         a2 = [sp + 0x18]
         at = 0x8601 << 16
         t2 = , unsigned  byte [a0 + 1]
         t3 = t2 | 1
         byte [a0 + 1] = t3
         ldc1 f8, -0x1f00, at
         cvt.s.d f10, f8
         swc1 f10, 0x2f10, a2

    loc_0x8034b6c4: // orphan
         ra = [sp + 0x14]

    loc_0x8034b6c8: // orphan
         sp += 0x30
         ret
         

    loc_0x8034b750: // orphan
         t1 = v1 << 2
         t2 = sp + 0x114
         if                       // likely
         v0 = t1 + t2

    loc_0x8034b760: // orphan
         t4 = s7 + 0x3330
         [v0 + 0] = t4
         v0 += 4

    loc_0x8034b76c: // orphan
         t5 = [a0 + 0x6530]       // arg1
         t6 = s7 + 0x4cc8
         at = 0x8601 << 16
         if                       // unlikely
         s5 = sp + 0x128

    loc_0x8034b780: // orphan
         [v0 + 0] = t6
         v0 += 4

    loc_0x8034b788: // orphan
         [v0 + 0] = 0
         t7 = [sp + 0x114]
         s4 = sp + 0x114
         if                       // likely
         

    loc_0x8034b79c: // orphan
         mtc1 0, f23
         mtc1 0, f22
         ldc1 f20, -0x2730, at
         t8 = s4 + 4

    loc_0x8034b7ac: // orphan
         [sp + 0x84] = t8
         t9 = [s4 + 4]
         s2 = t8
         beql t9, 0, 0x8034b868   // unlikely
         s4 = [sp + 0x84]

    loc_0x8034b7c0: // orphan
         a1 = [t8 + 0]
         s0 = [s4 + 0]

    loc_0x8034b7c8: // orphan
         v1 = [s0 + 0x186c]
         a0 = s0
         v1 = , unsigned  , v1 < 1
         beql v1, 0, 0x8034b7fc   // likely
         v0 = v1

    loc_0x8034b7dc: // orphan
         ldc1 f4, 0x17d0, s0
         v1 = 0
         c.le.d f4, f22
         
         bc1fl 0x8034b7fc
         v0 = v1
         v1 = 0 + 1
         v0 = v1

    loc_0x8034b7fc: // orphan
         v1 = [a1 + 0x186c]       // arg2
         v1 = , unsigned  , v1 < 1
         if                       // likely
         

    loc_0x8034b80c: // orphan
         ldc1 f6, 0x17d0, a1      // arg2
         v1 = 0
         c.le.d f6, f22
         
         bc1f 0x8034b828
         
         v1 = 0 + 1

    loc_0x8034b828: // orphan
         bnel v0, 0, 0x8034b83c   // unlikely
         mfc1 a2, f25

    loc_0x8034b830: // orphan
         beql v1, 0, 0x8034b858   // likely
         a1 = [s2 + 4]

    loc_0x8034b838: // orphan
         mfc1 a2, f25

    loc_0x8034b83c: // orphan
         mfc1 a3, f24
         sdc1 f20, 0x10, sp
         [sp + 0x18] = s5
         [sp + 0x1c] = v0
         call 0x860086a4          // 0x860086a4(0x0, 0x0, 0x0, 0x0)
         [sp + 0x20] = v1
         a1 = [s2 + 4]

    loc_0x8034b858: // orphan
         s2 += 4
         bnel a1, 0, 0x8034b7c8   // unlikely
         s0 = [s4 + 0]

    loc_0x8034b864: // orphan
         s4 = [sp + 0x84]

    loc_0x8034b868: // orphan
         t0 = [s4 + 0]
         bnel t0, 0, 0x8034b7ac   // unlikely
         t8 = s4 + 4

    loc_0x8034b874: // orphan
         s4 = sp + 0x114

    loc_0x8034b878: // orphan
         s1 = 0x800d << 16
         mtc1 0, f23
         mtc1 0, f22
         mtc1 0, f20
         s5 = sp + 0x128
         s1 -= 0x1fa0
         s0 = s7
         fp = sp + 0xd4
         s3 = sp + 0xd8

    loc_0x8034b89c: // orphan
         s2 = , unsigned  halfword [s1 + 8]
         a0 = s0
         call 0x860031c8          // 0x860031c8(0x0, 0x0, 0x0, 0x0)
         s2 &= 0xa000
         if                       // likely
         a0 = s1

    loc_0x8034b8b4: // orphan
         a1 = s3
         call 0x86005a00          // 0x86005a00(0x0, 0x0, 0x0, 0x0)
         a2 = fp
         t1 = [s0 + 0x1824]
         beql t1, 0, 0x8034b8f0   // unlikely
         lwc1 f8, 0xd8, sp

    loc_0x8034b8cc: // orphan
         swc1 f20, 0xd8, sp
         swc1 f20, 0xd4, sp
         t9 = [s0 + 0x1824]
         a0 = s0
         a1 = s3
         call t9                  // 0xffffffff(0x0, 0x0, 0x0, 0x0)
         a2 = fp
         s2 = v0
         lwc1 f8, 0xd8, sp

    loc_0x8034b8f0: // orphan
         lwc1 f16, 0xd4, sp
         a0 = s0
         cvt.d.s f10, f8
         cvt.d.s f18, f16
         mfc1 a3, f10
         mfc1 a2, f11
         sdc1 f18, 0x10, sp
         call 0x86007d98          // "\u01e4" // 0x86007d98(0x0, 0x0, 0x0, 0x0)
         sdc1 f24, 0x18, sp
         lwc1 f4, 0xd8, sp
         swc1 f4, 0x1800, s0
         lwc1 f6, 0xd4, sp
         swc1 f6, 0x1804, s0

    loc_0x8034b924: // orphan
         if                       // likely
         

    loc_0x8034b92c: // orphan
         call 0x860022f8          // 0x860022f8(0x0, 0x0, 0x0, 0x0)
         a0 = s0

    loc_0x8034b934: // orphan
         t2 = 0x800d << 16

    loc_0x8034b938: // orphan
         t2 -= 0x1f00
         s1 += 0x28
         if                       // likely
         s0 += 0x1998

    loc_0x8034b948: // orphan
         t3 = [sp + 0x114]
         t4 = sp + 0x114
         beql t3, 0, 0x8034b984   // likely
         t5 = [sp + 0x114]

    loc_0x8034b958: // orphan
         s0 = [t4 + 0]
         mfc1 a2, f25

    loc_0x8034b960: // orphan
         mfc1 a3, f24
         call 0x860095b8          // 0x860095b8(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         s0 = [s4 + 4]
         s4 += 4
         bnel s0, 0, 0x8034b960   // likely
         mfc1 a2, f25

    loc_0x8034b97c: // orphan
         s4 = sp + 0x114
         t5 = [sp + 0x114]

    loc_0x8034b984: // orphan
         t6 = sp + 0x114
         s3 = 0 + 0xa0
         beql t5, 0, 0x8034ba9c   // likely
         t3 = [sp + 0x114]

    loc_0x8034b994: // orphan
         s0 = [t6 + 0]
         fp = 0 + 3
         v0 = [s0 + 0x1828]

    loc_0x8034b9a0: // orphan
         v1 = 0
         at = , v0 < 7
         if                       // likely
         

    loc_0x8034b9b0: // orphan
         goto 0x8034b9e4
         v1 = 0 + 2

    loc_0x8034b9b8: // orphan
         if                       // likely
         

    loc_0x8034b9c0: // orphan
         ldc1 f8, 0x17d0, s0
         c.lt.d f22, f8
         
         bc1f 0x8034b9e4
         
         t7 = [s0 + 0x1898]
         if                       // unlikely
         

    loc_0x8034b9e0: // orphan
         v1 = 0 + 1

    loc_0x8034b9e4: // orphan
         unsigned , hi
         a1 = s0
         t8 = lo
         s1 = s7 + t8
         s2 = s1 + 0x6668
         call 0x86009c08          // 0x86009c08(0x0, 0x0, 0x0, 0x0)
         a0 = s2
         if                       // likely
         t9 = s7 + 0x6848

    loc_0x8034ba08: // orphan
         a0 = [s4 + 0]
         mfc1 a2, f25
         mfc1 a3, f24
         t0 = s1 + 0x66b8
         [sp + 0x10] = t0
         [sp + 0x20] = s5
         call 0x860091f4          // 0x860091f4(0x0, 0x0, 0x0, 0x0)
         sdc1 f22, 0x18, sp
         t1 = [s1 + 0x6700]
         mfc1 a2, f25
         mfc1 a3, f24
         beql t1, 0, 0x8034ba48   // unlikely
         ldc1 f0, 0x66c0, s1

    loc_0x8034ba3c: // orphan
         goto 0x8034ba48
         mov.d f0, f22

    loc_0x8034ba48: // orphan
         a0 = [s4 + 0]
         [sp + 0x20] = s5
         sdc1 f0, 0x18, sp
         call 0x860091f4          // 0x860091f4(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = s2
         goto 0x8034ba88
         s0 = [s4 + 4]

    loc_0x8034ba64: // orphan
         a0 = [s4 + 0]
         mfc1 a2, f25
         mfc1 a3, f24

    loc_0x8034ba70: // orphan
         t2 = 0 + 1
         [sp + 0x14] = t2
         [sp + 0x18] = s5
         call 0x86009260          // 0x86009260(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = t9
         s0 = [s4 + 4]

    loc_0x8034ba88: // orphan
         s4 += 4
         bnel s0, 0, 0x8034b9a0   // unlikely
         v0 = [s0 + 0x1828]

    loc_0x8034ba94: // orphan
         s4 = sp + 0x114
         t3 = [sp + 0x114]

    loc_0x8034ba9c: // orphan
         s3 = 0x8601 << 16
         s3 -= 0x21d0
         beql t3, 0, 0x8034bc24   // likely
         t3 = [sp + 0x114]

    loc_0x8034baac: // orphan
         fp = [sp + 0x150]
         s2 = s4 + 4

    loc_0x8034bab4: // orphan
         [sp + 0x84] = s2
         t5 = [s4 + 4]
         beql t5, 0, 0x8034bc10   // unlikely
         s4 = [sp + 0x84]

    loc_0x8034bac4: // orphan
         s0 = [s4 + 0]

    loc_0x8034bac8: // orphan
         ldc1 f2, 0x118, s3
         t6 = [s0 + 0x186c]
         beql t6, 0, 0x8034bc00   // unlikely
         t9 = [s2 + 4]

    loc_0x8034bad8: // orphan
         a1 = [s2 + 0]
         a0 = s0
         t7 = [a1 + 0x186c]
         beql t7, 0, 0x8034bc00   // unlikely
         t9 = [s2 + 4]

    loc_0x8034baec: // orphan
         ldc1 f0, 0x17e0, s0
         mfc1 a2, f25
         mfc1 a3, f24
         c.lt.d f22, f0
         
         bc1tl 0x8034bb20
         ldc1 f2, 0x168, s3
         ldc1 f10, 0x17e0, a1
         c.lt.d f22, f10
         
         bc1fl 0x8034bb24
         c.lt.d f22, f0
         ldc1 f2, 0x168, s3
         c.lt.d f22, f0
         
         bc1fl 0x8034bb4c
         sdc1 f2, 0x10, sp
         ldc1 f16, 0x17e0, a1
         c.lt.d f22, f16
         
         bc1fl 0x8034bb4c
         sdc1 f2, 0x10, sp
         ldc1 f2, 0x170, s3
         sdc1 f2, 0x10, sp
         call 0x8600853c          // 0x8600853c(0x0, 0x0, 0x0, 0x0)
         [sp + 0x18] = s5
         c.lt.d f22, f0
         mov.d f20, f0
         a0 = sp + 0xb4
         a1 = s5
         bc1f 0x8034bbfc
         at = 0 | 0x8150
         s1 = s7 + at
         t8 = s6 << 1
         s0 = s7 + t8

    loc_0x8034bb78: // orphan
         at = 0 | 0x8138
         call 0x87c007b0          // 0x87c007b0(0x0, 0x0, 0x0, 0x0)
         s0 += at
         a2 = s0
         s0 += 2
         a0 = s1
         a1 = v0
         call 0x87c03b60          // 0x87c03b60(0x0, 0x0, 0x8138, 0x0)
         s6 += 1
         if                       // unlikely
         a2 = s0

    loc_0x8034bba4: // orphan
         a0 = [s4 + 0]
         a1 = [s2 + 0]
         sdc1 f20, 0x10, sp
         s6 += 1
         call 0x86003868          // 0x86003868(0x0, 0x0, 0x0, 0x0)
         s0 += 2
         call 0x8600472c          // 0x8600472c(0x0, 0x0, 0x0, 0x0)
         a0 = [s4 + 0]
         v1 = , unsigned  , 0 < v0
         bnel v1, 0, 0x8034bbe0   // unlikely
         t0 = [s4 + 0]

    loc_0x8034bbd0: // orphan
         call 0x8600472c          // 0x8600472c(0x0, 0x0, 0x0, 0x0)

    loc_0x8034bbd4: // orphan
         a0 = [s2 + 0]
         v1 = , unsigned  , 0 < v0
         t0 = [s4 + 0]

    loc_0x8034bbe0: // orphan
         t1 = [s2 + 0]
         a0 = s7
         a1 = [t0 + 0x1810]
         a2 = [t1 + 0x1810]
         [sp + 0x10] = v1
         call 0x86005b3c          // 0x86005b3c(0x0, -1, -1, 0x0)
         a3 = s5

    loc_0x8034bbfc: // orphan
         t9 = [s2 + 4]

    loc_0x8034bc00: // orphan
         s2 += 4
         bnel t9, 0, 0x8034bac8   // unlikely
         s0 = [s4 + 0]

    loc_0x8034bc0c: // orphan
         s4 = [sp + 0x84]

    loc_0x8034bc10: // orphan
         t2 = [s4 + 0]
         bnel t2, 0, 0x8034bab4   // unlikely
         s2 = s4 + 4

    loc_0x8034bc1c: // orphan
         s4 = sp + 0x114

    loc_0x8034bc20: // orphan
         t3 = [sp + 0x114]

    loc_0x8034bc24: // orphan
         s3 = 0x8601 << 16
         s3 -= 0x21d0
         if                       // likely
         t4 = sp + 0x114

    loc_0x8034bc34: // orphan
         s0 = [t4 + 0]
         s1 = sp + 0x98
         t5 = [s0 + 0x1828]

    loc_0x8034bc40: // orphan
         a1 = s0
         a2 = s1
         at = , t5 < 7
         if                       // likely
         a0 = s1

    loc_0x8034bc54: // orphan
         call 0x86004f2c          // 0x86004f2c(0x0, 0x0, 0x0, 0x0)
         a0 = s7
         ldc1 f18, 0x80, s3
         a0 = s1
         a1 = s1
         neg.d f4, f18
         mfc1 a3, f4
         mfc1 a2, f5
         call 0x87c002a8          // 0x87c002a8(0x0, 0x0, 0x0, 0x0)
         

    loc_0x8034bc7c: // orphan
         goto 0x8034bca4
         mfc1 a2, f25

    loc_0x8034bc84: // orphan
         ldc1 f6, 0x80, s3
         mfc1 a2, f23
         mfc1 a3, f22
         neg.d f8, f6
         sdc1 f22, 0x18, sp
         call 0x87c00120          // 0x87c00120(0x0, 0x0, 0x0, 0x0)
         sdc1 f8, 0x10, sp
         mfc1 a2, f25

    loc_0x8034bca4: // orphan
         mfc1 a3, f24
         a0 = [s4 + 0]
         call 0x86009674          // 0x86009674(0x0, 0x0, 0x0, 0x0)
         a1 = s1
         s0 = [s4 + 4]
         s4 += 4
         bnel s0, 0, 0x8034bc40   // likely
         t5 = [s0 + 0x1828]

    loc_0x8034bcc4: // orphan
         ra = [sp + 0x6c]
         ldc1 f20, 0x30, sp
         ldc1 f22, 0x38, sp
         ldc1 f24, 0x40, sp

    loc_0x8034bcd4: // orphan
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         s5 = [sp + 0x5c]
         s6 = [sp + 0x60]
         s7 = [sp + 0x64]
         fp = [sp + 0x68]
         ret
         sp += 0x140

    loc_0x8034bde0: // orphan
         t7 = [s2 + 0x775c]

    loc_0x8034bde4: // orphan
         at = 0 + 0x1998
         beql t7, 0, 0x8034be34   // likely
         s0 += 1

    loc_0x8034bdf0: // orphan
         unsigned , hi
         a0 = s5
         a1 = s2 + 0x7760         // arg2
         t8 = lo
         s1 = s3 + t8
         call 0x87c007b0          // 0x87c007b0(0x0, 0x7760, 0x0, 0x0)
         s1 += 0x1890
         a0 = s4
         a1 = v0
         call 0x87c03b60          // 0x87c03b60(0x0, 0x0, 0x0, 0x0)
         a2 = s1
         mfc1 a3, f20
         a0 = 0 + 0x4401
         a1 = s0 & 0xff
         call 0x800278c0          // 0x800278c0(0x4401, 0x0, 0x1890, 0x0)
         a2 = s1
         s0 += 1

    loc_0x8034be34: // orphan
         if                       // unlikely
         s2 += 0x2d8

    loc_0x8034be3c: // orphan
         ra = [sp + 0x3c]
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]

    loc_0x8034be50: // orphan
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]
         ret
         sp += 0x68

    loc_0x8034bfb8: // orphan
         ldc1 f4, 0x6890, s2

    loc_0x8034bfbc: // orphan
         a0 = s2
         cvt.d.w f8, f6
         div.d f10, f4, f8
         mfc1 a3, f10
         mfc1 a2, f11
         call 0x860057d0          // 0x860057d0(0x0, 0x0, 0x0, 0x0)

    loc_0x8034bfd4: // orphan
         
         s0 = [s3 + 0]
         s1 += 1
         at = , s1 < s0
         bnel at, 0, 0x8034bfb8   // unlikely
         mtc1 s0, f6

    loc_0x8034bfec: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8034c2d4: // orphan
         v0 = [a3 + 0x1828]       // arg4
         a3 += 0x1998             // arg4
         v1 = a0 ^ v0             // arg1
         v1 = , unsigned  , v1 < 1
         bnel v1, 0, 0x8034c2f8   // unlikely
         [a1 + 0] = v1            // arg2

    loc_0x8034c2ec: // orphan
         v1 = t0 ^ v0
         v1 = , unsigned  , v1 < 1
         [a1 + 0] = v1            // arg2

    loc_0x8034c2f8: // orphan
         v1 = , unsigned  , 0 < a2
         beql v1, 0, 0x8034c310   // likely
         a1 += 4                  // arg2

    loc_0x8034c300: // orphan
         a1 += 4                  // arg2

    loc_0x8034c304: // orphan
         v1 = [a1 + 0]            // arg2
         v1 = , unsigned  , 0 < v1
         a1 += 4                  // arg2

    loc_0x8034c310: // orphan
         if                       // likely
         a2 = v1

    loc_0x8034c318: // orphan
         if                       // likely
         a0 = s0 + 0x751c         // arg1

    loc_0x8034c320: // orphan
         a1 = [s0 + 0x7580]
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a0 = s0 + 0x751c         // arg1
         a2 = 0 + 1               // arg3
         call 0x87f0a098          // 0x87f0a098(0x751c, -1, 0x1, 0x0)
         a3 = 0
         goto 0x8034c374
         ra = [sp + 0x2c]

    loc_0x8034c348: // orphan
         t6 = [sp + 0x4c]
         t7 = [sp + 0x50]
         t8 = [sp + 0x54]
         a1 = [s0 + 0x7580]
         a2 = 0 + 1               // arg3
         a3 = [sp + 0x48]
         [sp + 0x10] = t6
         [sp + 0x14] = t7
         call 0x87f0a098          // 0x87f0a098(0x0, -1, 0x1, 0x0)
         [sp + 0x18] = t8
         ra = [sp + 0x2c]

    loc_0x8034c36c: // orphan
         t6 = [sp + 0x4c]
         t7 = [sp + 0x50]
         t8 = [sp + 0x54]
         a1 = [s0 + 0x7580]
         a2 = 0 + 1               // arg3
         a3 = [sp + 0x48]
         [sp + 0x10] = t6
         [sp + 0x14] = t7
         call 0x87f0a098          // 0x87f0a098(0x0, -1, 0x1, 0x0)
         [sp + 0x18] = t8
         ra = [sp + 0x2c]

    loc_0x8034c374: // orphan
         s0 = [sp + 0x28]
         sp += 0x58
         ret
         

    loc_0x8034c468: // orphan
         v0 = , unsigned  , 0 < a1
         if                       // unlikely
         a0 = 0 + 1               // arg1

    loc_0x8034c474: // orphan
         t4 = halfword [v1 + 0x17b4]
         a1 = 0 + 9               // arg2
         v0 = a1 ^ t4             // arg2
         v0 = , unsigned  , v0 < 1

    loc_0x8034c484: // orphan
         t8 = , unsigned  byte [s1 + 0x75c0]
         t6 = v0 << 3
         t7 = t6 & 8
         t9 = t8 & 0xfff7
         t0 = t7 | t9
         byte [s1 + 0x75c0] = t0
         t1 = [v1 + 0x31c0]
         a1 = 0 + 9               // arg2
         at = , t1 < 4
         beql at, 0, 0x8034c4f4   // likely
         t9 = [v1 + 0x4b58]

    loc_0x8034c4b0: // orphan
         v0 = [s1 + 0x75c0]
         a0 += 1                  // arg1
         v0 <<= 4
         v0 >>= 0x1f
         v0 = , unsigned  , 0 < v0
         bnel v0, 0, 0x8034c4dc   // likely
         t6 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c4cc: // orphan
         t2 = halfword [v1 + 0x314c]
         v0 = a1 ^ t2             // arg2
         v0 = , unsigned  , v0 < 1
         t6 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c4dc: // orphan
         t4 = v0 << 3
         t5 = t4 & 8
         t8 = t6 & 0xfff7
         t7 = t5 | t8
         byte [s1 + 0x75c0] = t7
         t9 = [v1 + 0x4b58]

    loc_0x8034c4f4: // orphan
         s0 = s1
         at = , t9 < 4
         beql at, 0, 0x8034c548   // unlikely
         t8 = [v1 + 0x64f0]

    loc_0x8034c504: // orphan
         v0 = [s1 + 0x75c0]
         a0 += 1                  // arg1
         v0 <<= 4
         v0 >>= 0x1f
         v0 = , unsigned  , 0 < v0
         bnel v0, 0, 0x8034c530   // unlikely
         t4 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c520: // orphan
         t0 = halfword [v1 + 0x4ae4]
         v0 = a1 ^ t0             // arg2
         v0 = , unsigned  , v0 < 1
         t4 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c530: // orphan
         t2 = v0 << 3
         t3 = t2 & 8
         t6 = t4 & 0xfff7
         t5 = t3 | t6
         byte [s1 + 0x75c0] = t5
         t8 = [v1 + 0x64f0]

    loc_0x8034c548: // orphan
         at = , t8 < 4
         if                       // unlikely
         

    loc_0x8034c554: // orphan
         v0 = [s1 + 0x75c0]
         a0 += 1                  // arg1
         v0 <<= 4
         v0 >>= 0x1f
         v0 = , unsigned  , 0 < v0
         bnel v0, 0, 0x8034c580   // unlikely
         t2 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c570: // orphan
         t7 = halfword [v1 + 0x647c]
         v0 = a1 ^ t7             // arg2
         v0 = , unsigned  , v0 < 1
         t2 = , unsigned  byte [s1 + 0x75c0]

    loc_0x8034c580: // orphan
         t0 = v0 << 3
         t1 = t0 & 8
         t4 = t2 & 0xfff7
         t3 = t1 | t4
         byte [s1 + 0x75c0] = t3

    loc_0x8034c594: // orphan
         if                       // unlikely
         v0 = 0

    loc_0x8034c59c: // orphan
         t5 = , unsigned  byte [s1 + 0x75c0]
         t8 = t5 | 8
         byte [s1 + 0x75c0] = t8

    loc_0x8034c5a8: // orphan
         t7 = [s1 + 0x75c0]
         t0 = t7 << 4
         bgezl t0, 0x8034c640     // likely
         ra = [sp + 0x24]

    loc_0x8034c5b8: // orphan
         t2 = [s0 + 0x1828]

    loc_0x8034c5bc: // orphan
         at = 0 + 8
         a0 = s0
         if                       // likely
         a1 = 0 + 7               // arg2

    loc_0x8034c5cc: // orphan
         call 0x86003efc          // 0x86003efc(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v0
         v0 = [sp + 0x28]

    loc_0x8034c5d8: // orphan
         v0 += 0x1998
         at = 0 + 0x6660
         if                       // likely
         s0 += 0x1998

    loc_0x8034c5e8: // orphan
         call 0x8600688c          // 0x8600688c(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         s0 = s1
         s1 = 0 + 4
         v1 = 0

    loc_0x8034c5fc: // orphan
         t1 = [s0 + 0x1828]
         bnel s1, t1, 0x8034c630  // likely
         v1 += 0x1998

    loc_0x8034c604: // orphan
         t1 = [s0 + 0x1828]
         bnel s1, t1, 0x8034c630  // likely
         v1 += 0x1998

    loc_0x8034c608: // orphan
         t4 = [s0 + 0x17a4]
         a1 = 0x8601 << 16
         a1 -= 0x2810
         if                       // likely
         a0 = s0 + 0x17a0

    loc_0x8034c61c: // orphan
         a2 = 0 + 1
         call 0x87c01e30          // 0x87c01e30(0x0, 0x0, 0x1, 0x0)
         [sp + 0x28] = v1
         v1 = [sp + 0x28]

    loc_0x8034c62c: // orphan
         v1 += 0x1998

    loc_0x8034c630: // orphan
         at = 0 + 0x6660
         if                       // likely
         s0 += 0x1998

    loc_0x8034c63c: // orphan
         ra = [sp + 0x24]

    loc_0x8034c640: // orphan
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         ret
         sp += 0x40

    loc_0x8034c724: // orphan
         byte [s2 + 0x75c0] = t6
         ra = [sp + 0x2c]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x8034c794: // orphan
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         call 0x80008970          // 0x80008970(0x0, 0x0, 0x0, 0x0)
         [sp + 0x14] = s0
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         s0 = v0
         mtc1 s0, f4
         mtc1 v0, f8
         at = 0x8601 << 16
         cvt.d.w f6, f4
         ldc1 f18, -0x21c8, at
         t6 = [s3 + 0x75bc]
         t8 = [s3 + 0x7580]
         cvt.d.w f10, f8
         t7 = t6 + 1
         [s3 + 0x75bc] = t7
         a1 = 0 + 0x20
         div.d f16, f6, f10
         mul.d f4, f16, f18
         sdc1 f4, 0x6890, s3
         call 0x860062e0          // 0x860062e0(0x0, 0x20, 0x0, 0x0)
         a0 = , unsigned  byte [t8 + 0x2182]
         if                       // likely
         

    loc_0x8034c7f4: // orphan
         s0 = [s3 + 0x75c0]
         t2 = , unsigned  byte [s3 + 0x75c0]
         s0 <<= 1
         s0 >>= 0x1f
         t9 = , unsigned  , s0 < 1
         t0 = t9 << 6
         t1 = t0 & 0x40
         t3 = t2 & 0xffbf
         t4 = t1 | t3
         byte [s3 + 0x75c0] = t4

    loc_0x8034c81c: // orphan
         call 0x87f0d5b8          // 0x87f0d5b8(0x0, 0x0, 0x0, 0x0)
         a0 = s3 + 0x74f0
         v0 = [s3 + 0x7518]
         at = , unsigned  , v0 < 7
         if                       // likely
         t5 = v0 << 2

    loc_0x8034c834: // orphan
         at = 0x8601 << 16
         at += t5
         t5 = [at - 0x270c]
         goto t5
         

    loc_0x8034c87c: // orphan
         a0 = s3
         goto 0x8034c8b4
         v0 = [s3 + 0x7518]

    loc_0x8034c8b4: // orphan
         at = , v0 < 2
         bnel at, 0, 0x8034c8f0   // likely
         t6 = [s3 + 0x75c0]

    loc_0x8034c8c0: // orphan
         call 0x87f00930          // 0x87f00930(0x0, 0x0, 0x0, 0x0)
         
         if                       // unlikely
         s0 = 0

    loc_0x8034c8d0: // orphan
         s1 = s3
         s2 = 0 + 0x6660

    loc_0x8034c8d8: // orphan
         call 0x860033e8          // 0x860033e8(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         s0 += 0x1998
         if                       // likely
         s1 += 0x1998

    loc_0x8034c8ec: // orphan
         t6 = [s3 + 0x75c0]

    loc_0x8034c8f0: // orphan
         at = 0 | 0xaf50
         t7 = t6 >> 0x1f
         bnel t7, 0, 0x8034c928   // unlikely
         ra = [sp + 0x24]

    loc_0x8034c900: // orphan
         call 0x87f0c6f4          // "P@" // 0x87f0c6f4(0x0, 0x0, 0x0, 0x0)
         a0 = s3 + at
         beql v0, 0, 0x8034c928   // likely
         ra = [sp + 0x24]

    loc_0x8034c910: // orphan
         t9 = , unsigned  byte [s3 + 0x75c0]
         t1 = t9 | 0x80
         byte [s3 + 0x75c0] = t1
         t3 = t1 | 2
         byte [s3 + 0x75c0] = t3
         ra = [sp + 0x24]

    loc_0x8034c928: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8034ca54: // orphan
         t9 = 0 + 1

    loc_0x8034ca58: // orphan
         t0 = t9 << a0            // arg1
         t8 = , unsigned  byte [t7 + 0x2182]
         [sp + 0x8c] = a0
         a2 = s0
         a1 = t8 & t0             // arg2
         call 0x8600ab6c          // 0x8600ab6c(0x0, 0x0, 0x0, 0x0)
         a1 = , unsigned  , a1 < 1
         a0 = [sp + 0x8c]
         a0 += 1
         at = , a0 < 4
         bnel at, 0, 0x8034ca54   // likely
         t7 = [s4 + 0x7580]

    loc_0x8034ca88: // orphan
         s1 = 0
         s0 = s4
         s2 = 0 + 0x6660

    loc_0x8034ca94: // orphan
         call 0x8600ae6c          // 0x8600ae6c(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         s1 += 0x1998
         if                       // likely
         s0 += 0x1998

    loc_0x8034caa8: // orphan
         call 0x87f00930          // 0x87f00930(0x0, 0x0, 0x0, 0x0)
         
         if                       // unlikely
         s1 = 0

    loc_0x8034cab8: // orphan
         mtc1 0, f21
         mtc1 0, f20
         s0 = s4
         s2 = s4 + 0x189c
         s3 = sp + 0x70

    loc_0x8034cacc: // orphan
         t1 = 0x8601 << 16
         t1 -= 0x2d40
         t3 = [t1 + 0]
         at = 0xbf80 << 16
         mtc1 at, f2
         [s3 + 0] = t3
         t2 = [t1 + 4]
         at = 0 + 4
         [s3 + 4] = t2
         t3 = [t1 + 8]
         [s3 + 8] = t3
         v0 = [s0 + 0x1828]
         bnel v0, at, 0x8034cb10  // likely
         at = 0 + 3

    loc_0x8034cb04: // orphan
         t4 = [s0 + 0x17a4]
         if                       // unlikely
         at = 0 + 3

    loc_0x8034cb10: // orphan
         if                       // unlikely
         

    loc_0x8034cb18: // orphan
         ldc1 f4, 0x17f0, s0
         c.lt.d f20, f4
         
         bc1f 0x8034cb54

    loc_0x8034cb28: // orphan
         at = 0 | 0x8150
         t5 = s4 + at
         [sp + 0x48] = t5
         a0 = sp + 0x60
         call 0x87c007b0          // 0x87c007b0(0x178060, 0x0, 0x0, 0x0)
         a1 = s0
         a0 = [sp + 0x48]
         a1 = v0
         call 0x87c039d4          // "F" // 0x87c039d4(0x8150, 0x0, 0x0, 0x0)
         a2 = s3
         mov.s f2, f0

    loc_0x8034cb54: // orphan
         at = 0x8601 << 16
         ldc1 f8, -0x20e0, at
         ldc1 f6, 0x17f0, s0
         a1 = [s0 + 0x1818]
         mfc1 a3, f2
         div.d f10, f6, f8
         a0 = s2
         a2 = s3
         cvt.s.d f16, f10
         call 0x86000c6c          // 0x86000c6c(0x0, -1, 0x0, 0x0)
         swc1 f16, 0x10, sp
         s1 += 0x1998
         at = 0 + 0x6660
         s0 += 0x1998
         if                       // likely
         s2 += 0x1998

    loc_0x8034cb94: // orphan
         s1 = 0
         s2 = s4 + 0x189c
         s0 = 0 + 0x6660

    loc_0x8034cba0: // orphan
         call 0x86000ccc          // 0x86000ccc(0x0, 0x0, 0x0, 0x0)
         a0 = s2
         s1 += 0x1998
         if                       // likely
         s2 += 0x1998

    loc_0x8034cbb4: // orphan
         t6 = [s4 + 0x7580]
         t8 = 0x8601 << 16
         t7 = , unsigned  byte [t6 + 0x2180]
         t9 = t7 ^ 4
         t9 = , unsigned  , t9 < 1
         bnel t9, 0, 0x8034cc58   // unlikely
         t2 = [s4 + 0x7518]

    loc_0x8034cbd0: // orphan
         t8 = [t8 - 0x1fc4]
         ldc1 f6, 0x6888, s4
         t1 = s4 + 0x7fff
         mtc1 t8, f18
         t1 = [t1 + 0x2f5d]
         cvt.d.w f4, f18
         sub.d f8, f4, f6
         trunc.w.d f10, f8
         mfc1 s0, f10
         
         if                       // unlikely
         

    loc_0x8034cc00: // orphan
         if                       // likely
         at = 0 + 1

    loc_0x8034cc08: // orphan
         if                       // likely
         at = 0 + 2

    loc_0x8034cc10: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x8034cc18: // orphan
         bnel s0, at, 0x8034cc3c  // unlikely
         at = s4 + 0x7fff

    loc_0x8034cc20: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 | 0xcf00
         goto 0x8034cc3c
         at = s4 + 0x7fff

    loc_0x8034cc30: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 | 0xcf06
         at = s4 + 0x7fff

    loc_0x8034cc3c: // orphan
         [at + 0x2f5d] = s0

    loc_0x8034cc40: // orphan
         call 0x87f00930          // 0x87f00930(0x0, 0x0, 0x0, 0x0)
         
         a0 = s0
         call 0x8600b474          // 0x8600b474(0x0, 0x0, 0x0, 0x0)
         a1 = v0
         t2 = [s4 + 0x7518]

    loc_0x8034cc58: // orphan
         at = , unsigned  , t2 < 7
         if                       // unlikely
         t2 <<= 2

    loc_0x8034cc64: // orphan
         at = 0x8601 << 16
         at += t2
         t2 = [at - 0x26f0]
         goto t2
         

    loc_0x8034ccf0: // orphan
         at = 0 | 0xaf50
         call 0x87f0c88c          // 0x87f0c88c(0x0, 0x0, 0x0, 0x0)
         a0 = s4 + at
         ra = [sp + 0x3c]
         ldc1 f20, 0x20, sp
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         ret
         sp += 0x90

    loc_0x8034d108: // orphan
         
         a1 = byte [a0 + 0x75c1]  // arg1
         a2 = 0 + 0x1998          // arg3
         sp -= 0x48
         v1 = 0
         if                       // likely
         t6 = a1 & 3              // arg2

    loc_0x8034d124: // orphan
         if                       // likely
         

    loc_0x8034d12c: // orphan
         t6 -= 4

    loc_0x8034d130: // orphan
         unsigned , hi
         a3 = sp + 0x2c           // arg4
         t7 = lo
         v0 = a0 + t7             // arg1
         t8 = [v0 + 0x1824]
         beql t8, 0, 0x8034d15c   // unlikely
         t9 = a1 + 1              // arg2

    loc_0x8034d14c: // orphan
         [sp + 0x2c] = v0
         a1 = byte [a0 + 0x75c1]  // arg1
         v1 = 0 + 1
         t9 = a1 + 1              // arg2

    loc_0x8034d15c: // orphan
         if                       // likely
         t5 = t9 & 3

    loc_0x8034d164: // orphan
         if                       // likely
         

    loc_0x8034d16c: // orphan
         t5 -= 4

    loc_0x8034d170: // orphan
         unsigned , hi
         t8 = v1 << 2
         t9 = a3 + t8             // arg4
         t6 = lo
         v0 = a0 + t6             // arg1
         t7 = [v0 + 0x1824]
         beql t7, 0, 0x8034d1a0   // unlikely
         t5 = a1 + 2              // arg2

    loc_0x8034d190: // orphan
         [t9 + 0] = v0
         a1 = byte [a0 + 0x75c1]  // arg1
         v1 += 1
         t5 = a1 + 2              // arg2

    loc_0x8034d1a0: // orphan
         a3 = sp + 0x2c           // arg4
         if                       // likely
         t6 = t5 & 3

    loc_0x8034d1ac: // orphan
         if                       // likely
         

    loc_0x8034d1b4: // orphan
         t6 -= 4

    loc_0x8034d1b8: // orphan
         unsigned , hi
         t9 = v1 << 2
         t5 = a3 + t9             // arg4
         t7 = lo
         v0 = a0 + t7             // arg1
         t8 = [v0 + 0x1824]
         beql t8, 0, 0x8034d1e8   // unlikely
         t6 = a1 + 3              // arg2

    loc_0x8034d1d8: // orphan
         [t5 + 0] = v0
         a1 = byte [a0 + 0x75c1]  // arg1
         v1 += 1
         t6 = a1 + 3              // arg2

    loc_0x8034d1e8: // orphan
         if                       // likely
         t7 = t6 & 3

    loc_0x8034d1f0: // orphan
         if                       // likely
         

    loc_0x8034d1f8: // orphan
         t7 -= 4

    loc_0x8034d1fc: // orphan
         unsigned , hi
         t5 = v1 << 2
         t6 = a3 + t5             // arg4
         t8 = lo
         v0 = a0 + t8             // arg1
         t9 = [v0 + 0x1824]
         beql t9, 0, 0x8034d228   // unlikely
         a3 = v1 - 1              // arg4

    loc_0x8034d21c: // orphan
         [t6 + 0] = v0
         v1 += 1
         a3 = v1 - 1              // arg4

    loc_0x8034d228: // orphan
         if                       // likely
         a2 = 0

    loc_0x8034d230: // orphan
         at = , a2 < a3

    loc_0x8034d234: // orphan
         if                       // likely
         a1 = a3

    loc_0x8034d23c: // orphan
         v0 = a3 - a2             // arg4
         t0 = v0 & 3
         t0 = ~t0
         if                       // likely
         t3 = t0 + a3             // arg4

    loc_0x8034d250: // orphan
         t7 = a1 << 2             // arg2
         t8 = sp + 0x2c
         v0 = t7 + t8

    loc_0x8034d25c: // orphan
         t0 = [v0 - 4]
         t1 = [v0 + 0]
         a1 -= 1                  // arg2
         t9 = [t0 + 0x1814]
         t5 = [t1 + 0x1814]
         at = , t9 < t5
         if                       // likely
         

    loc_0x8034d27c: // orphan
         [v0 + 0] = t0
         [v0 - 4] = t1

    loc_0x8034d284: // orphan
         if                       // unlikely
         v0 -= 4

    loc_0x8034d28c: // orphan
         if                       // likely
         t7 = sp + 0x2c

    loc_0x8034d290: // orphan
         t7 = sp + 0x2c

    loc_0x8034d294: // orphan
         t6 = a1 << 2             // arg2
         t8 = a2 << 2             // arg3
         t4 = t8 + t7
         v0 = t6 + t7
         t0 = [v0 - 4]

    loc_0x8034d2a8: // orphan
         t1 = [v0 + 0]            // t0
         a1 = [t0 + 0x1814]
         t9 = [t1 + 0x1814]
         at = , a1 < t9
         beql at, 0, 0x8034d2d4   // likely
         t1 = [v0 - 8]

    loc_0x8034d2c0: // orphan
         [v0 + 0] = t0
         [v0 - 4] = t1
         a1 = [t1 + 0x1814]
         t0 = t1
         t1 = [v0 - 8]

    loc_0x8034d2d4: // orphan
         t3 = [t1 + 0x1814]
         at = , t3 < a1
         beql at, 0, 0x8034d2f8   // likely
         a1 = [v0 - 0xc]

    loc_0x8034d2e4: // orphan
         [v0 - 4] = t1
         [v0 - 8] = t0
         t3 = [t0 + 0x1814]
         t1 = t0
         a1 = [v0 - 0xc]

    loc_0x8034d2f8: // orphan
         t0 = [a1 + 0x1814]       // arg2
         at = , t0 < t3
         beql at, 0, 0x8034d31c   // likely
         t1 = [v0 - 0x10]

    loc_0x8034d308: // orphan
         [v0 - 8] = a1
         [v0 - 0xc] = t1
         t0 = [t1 + 0x1814]
         a1 = t1
         t1 = [v0 - 0x10]

    loc_0x8034d31c: // orphan
         t5 = [t1 + 0x1814]
         at = , t5 < t0
         beql at, 0, 0x8034d338   // likely
         v0 -= 0x10

    loc_0x8034d32c: // orphan
         [v0 - 0xc] = t1
         [v0 - 0x10] = a1
         v0 -= 0x10

    loc_0x8034d338: // orphan
         bnel t4, v0, 0x8034d2a8  // unlikely
         t0 = [v0 - 4]

    loc_0x8034d340: // orphan
         a2 += 1                  // arg3
         bnel a2, a3, 0x8034d234  // likely
         at = , a2 < a3

    loc_0x8034d34c: // orphan
         if                       // likely
         a1 = 0

    loc_0x8034d354: // orphan
         t1 = v1 & 3
         if                       // likely
         t0 = t1

    loc_0x8034d360: // orphan
         a2 = 0 << 2              // arg3
         t8 = v1 << 4
         t9 = 0x8601 << 16
         t9 -= 0x2800
         t7 = t8 + a2             // arg3
         t6 = sp + 0x2c
         t1 = 0x8601 << 16
         t1 -= 0x2d34
         v0 = a2 + t6             // arg3
         a3 = t7 + t9             // arg4

    loc_0x8034d388: // orphan
         t5 = [a0 + 0x7580]       // arg1
         t9 = [a3 - 0x10]         // arg4
         a1 += 1                  // arg2
         t6 = byte [t5 + 0x2181]
         t5 = t9 << 4
         v0 += 4

    loc_0x8034d3a0: // orphan
         t8 = t6 << 6
         t7 = t1 + t8
         t8 = [v0 - 4]
         t6 = t7 + t5             // t1
         a3 += 4                  // arg4
         if                       // likely
         [t8 + 0x1894] = t6

    loc_0x8034d3bc: // orphan
         if                       // likely
         a2 = a1 << 2             // arg3

    loc_0x8034d3c0: // orphan
         a2 = a1 << 2             // arg3

    loc_0x8034d3c4: // orphan
         t9 = sp + 0x2c
         t7 = v1 << 4
         t6 = 0x8601 << 16
         t6 -= 0x2800
         t5 = t7 + a2             // arg3
         t1 = 0x8601 << 16
         t8 = v1 << 2
         t0 = t8 + t9
         t1 -= 0x2d34
         a3 = t5 + t6             // arg4
         v0 = a2 + t9             // arg3

    loc_0x8034d3f0: // orphan
         t7 = [a0 + 0x7580]       // arg1
         t9 = [a3 - 0x10]         // arg4
         v0 += 0x10
         t5 = byte [t7 + 0x2181]
         t7 = t9 << 4
         a3 += 0x10               // arg4
         t6 = t5 << 6
         t8 = t1 + t6
         t6 = [v0 - 0x10]         // t0
         t5 = t8 + t7
         [t6 + 0x1894] = t5
         t9 = [a0 + 0x7580]       // arg1
         t6 = [a3 - 0x1c]         // arg4 // t1
         t8 = byte [t9 + 0x2181]
         t9 = t6 << 4
         t7 = t8 << 6
         t5 = t1 + t7
         t7 = [v0 - 0xc]
         t8 = t5 + t9
         [t7 + 0x1894] = t8
         t6 = [a0 + 0x7580]       // arg1
         t7 = [a3 - 0x18]         // arg4
         t5 = byte [t6 + 0x2181]
         t6 = t7 << 4
         t9 = t5 << 6
         t8 = t1 + t9
         t9 = [v0 - 8]
         t5 = t8 + t6
         [t9 + 0x1894] = t5
         t7 = [a0 + 0x7580]       // arg1
         t9 = [a3 - 0x14]         // arg4
         t8 = byte [t7 + 0x2181]
         t7 = t9 << 4
         t6 = t8 << 6
         t5 = t1 + t6
         t6 = [v0 - 4]
         t8 = t5 + t7
         if                       // likely
         [t6 + 0x1894] = t8

    loc_0x8034d48c: // orphan
         ret
         sp += 0x48

    loc_0x8034d8f0: // orphan
         [sp + 0x28] = a0
         a1 = s0 + 0x48           // arg2
         a0 = [sp + 0x28]
         call 0x87c015e4          // 0x87c015e4(0x0, 0x48, 0x0, 0x0)
         [sp + 0x24] = a1
         a0 = sp + 0x30
         a1 = [sp + 0x24]
         a2 = [s0 + 0xd8]
         call 0x87c002a8          // 0x87c002a8(0x178030, 0x48, -1, 0x0)
         a3 = [s0 + 0xdc]
         a0 = s0 + 0xb0
         a1 = s0
         call 0x87c00198          // 0x87c00198(0xb0, 0x0, -1, -1)
         a2 = v0
         ldc1 f4, 0xc8, s0
         ldc1 f6, 0xd0, s0
         a0 = sp + 0x30
         a1 = [sp + 0x24]
         add.d f8, f4, f6
         mfc1 a3, f8
         mfc1 a2, f9
         call 0x87c002a8          // 0x87c002a8(0x178030, 0x48, 0x0, -1)
         
         a0 = s0 + 0x98
         a1 = s0
         call 0x87c00198          // 0x87c00198(0x98, 0x0, 0x0, -1)
         a2 = v0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x48
         ret
         

    loc_0x8034dc04: // orphan
         a0 = [sp + 0x120]
         a1 = [sp + 0x12c]
         call 0x86007e4c          // 0x86007e4c(0x0, 0x0, 0x0, 0x0)
         a2 = sp + 0x88
         a0 = sp + 0xe8
         call 0x87c002dc          // 0x87c002dc(0x1780e8, 0x0, 0x178088, 0x0)
         a1 = sp + 0x88
         a0 = [sp + 0x124]
         a1 = [sp + 0x12c]
         call 0x86007e4c          // 0x86007e4c(0x0, 0x0, 0x178088, 0x0)
         a2 = v0
         ra = [sp + 0x2c]
         mov.d f0, f20
         ldc1 f20, 0x20, sp
         ret
         sp += 0x120

    loc_0x80365ac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365acc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365adc: // orphan
         if                       // unlikely
         

    loc_0x80365ae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365af0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365afc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b14: // orphan
         if                       // unlikely
         

    loc_0x80365b1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b40: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b54: // orphan
         if                       // unlikely
         

    loc_0x80365b5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365b98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365ba4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365bb0: // orphan
         if                       // unlikely
         

    loc_0x80365bb8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365bc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365bd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365be0: // orphan
         if                       // unlikely
         

    loc_0x80365be8: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365c14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365c20: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365c3c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80365c60: // orphan
         if                       // unlikely
         

    loc_0x80365c68: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365c88: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365c98: // orphan
         if                       // unlikely
         

    loc_0x80365ca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80365cac: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365cbc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365cd4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365ce4: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80365d08: // orphan
         
         
         
         
         
         
         

}

*/
