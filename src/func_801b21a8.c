/*
 * Function: 0x801b21a8
 * Category: math
 */

// Decompiled C code
int fcn.801c9dc4 (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.801c9dc4 (int esi, int edx) {
    loc_0x801a9ddc:
        t1 = fcn.83500000 << 16
        t1 += 0x3ba8
        t8 = [t1 + 0x18]
        t9 = [s6 + 0x78]
        a1 = [sp + 0x140]
        [sp + 0x128] = 0
        at = , t8 < t9 // lo
        if            // unlikely
        a0 = fcn.83500000 << 16
            
    loc_0x801a9e08:
        t5 = [s6 + 0x90] // t9
        t7 = a1 << 2
        t9 = [s6 + 0x60]
        t7 += a1
        t7 <<= 3
        t6 = t5 + 1
        [s6 + 0x90] = t6
        t8 = t7 + 0x28
        v1 = fcn.83500000 << 16
        v1 = [v1 + 0x3d2c]
        [sp + 0x80] = t8
        if            // likely
        a0 = [a0 + 0x3d28] // t9
            
    loc_0x801a9ecc:
        v0 = [s6 + 0x18] // t9
        t9 = 0 + 1    // lo
        at = , v1 < v0 // lo
        beql at, 0, 0x801a9f3c // unlikely
        at = , v1 < v0 // lo
            
    loc_0x801a9f3c:
        if            // likely
        at = 0 + 1    // lo
            
    loc_0x801a9f60:
        // CODE XREF from fcn.801c9dc4 @ 0x801a9ec4
        v0 = [s6 + 0] // t9
        a3 = 0 + 1    // lo
        at = , v0 < a0
        beql at, 0, 0x801a9fcc // likely
        at = , v0 < a0
            
    loc_0x801a9fcc:
        bnel at, 0, 0x801a9ffc // likely
        t9 = [sp + 0x12c]
            
    loc_0x801a9ffc:
        a0 = fcn.83500000 << 16
        a0 += 0x3f58
        if            // likely
        at = fcn.83500000 << 16
            
    loc_0x801aa034:
        [at + 0x40e4] = 0
        [sp + 0x140] = a1
        v1 = [s0 + 0] // t9
         // do {
    loc_0x801aa040:
        // CODE XREF from fcn.801c9dc4 @ 0x801aa02c
        t6 = 0xe700 << 16
        t8 = 0xfa00 << 16
        t5 = v1 + 8
        [s0 + 0] = t5
        [v1 + 4] = 0
        [v1 + 0] = t6
        v1 = [s0 + 0]
        t9 = 0 - 0x74
        t6 = 0xe200 << 16
        t7 = v1 + 8
        [s0 + 0] = t7
        [v1 + 4] = t9
        [v1 + 0] = t8
        v1 = [s0 + 0]
        t7 = 0x50 << 16
        t7 |= 0x4240
        t5 = v1 + 8
        [s0 + 0] = t5
        t6 |= 0x1c
        [v1 + 0] = t6
        [v1 + 4] = t7
        v1 = [s0 + 0]
        t5 = 0xff64 << 16
        t9 = 0xfcff << 16
        t8 = v1 + 8
        [s0 + 0] = t8
        t9 |= 0xb3ff
        t5 |= 0xfe7f
        [v1 + 4] = t5
        [v1 + 0] = t9
        t6 = [s6 + 0x18] // t9
        s2 = 0 + 2
        s5 = 0 + 1    // lo
        mtc1 t6, f6
        t9 = [sp + 0x80]
        s1 = 0
        cvt.s.w f0, f6
        c.lt.s f24, f0
        0x801aa0d8
        bc1fl 0x801aa0f0
        mov.s f14, f22
        goto 0x801aa0f0
        mov.s f14, f20
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x801a9e4c: // orphan
             t5 = [s6 + 0x30]
             a3 = 0 + 1               // lo
             bnel a3, t5, 0x801a9ea4  // likely
             at = , v0 < v1           // lo

    loc_0x801a9e5c: // orphan
         mtc1 t6, f4
         
         cvt.s.w f0, f4
         c.lt.s f24, f0
         
         bc1fl 0x801a9e84
         mov.s f14, f22
         goto 0x801a9e84
         mov.s f14, f20

    loc_0x801a9e84: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801a9e78
         add.s f6, f0, f14
         trunc.w.s f8, f6
         mfc1 t8, f8
         
         t9 = v0 + t8
         [s6 + 0x18] = t9
         v0 = t9
         at = , v0 < v1

    loc_0x801a9ea4: // orphan
         if                       // likely
         a3 = 0 + 1               // lo

    loc_0x801a9eac: // orphan
         [s6 + 0x18] = v1
         if                       // likely
         [s6 + 0x30] = 0

    loc_0x801a9eb8: // orphan
         t5 = [sp + 0x12c]
         t6 = t5 + 1              // lo
         [sp + 0x12c] = t6

    loc_0x801a9ec4: // orphan
         goto 0x801a9f60
         [sp + 0x128] = a3

    loc_0x801a9ef0: // orphan
         t8 = [s6 + 0x90]
         mtc1 t8, f10
         
         cvt.s.w f0, f10
         c.lt.s f24, f0
         
         bc1fl 0x801a9f1c
         mov.s f14, f22
         goto 0x801a9f1c
         mov.s f14, f20

    loc_0x801a9f1c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801a9f10
         add.s f4, f0, f14
         trunc.w.s f6, f4
         mfc1 t5, f6
         
         t6 = v0 - t5
         [s6 + 0x18] = t6
         v0 = t6
         at = , v1 < v0

    loc_0x801a9f50: // orphan
         t7 = [sp + 0x12c]        // lo
         t8 = t7 + 1
         [sp + 0x12c] = t8

    loc_0x801a9f5c: // orphan
         [sp + 0x128] = t9

    loc_0x801a9f80: // orphan
         t6 = [s6 + 0x90]
         mtc1 t6, f8
         
         cvt.s.w f0, f8
         c.lt.s f24, f0
         
         bc1fl 0x801a9fac
         mov.s f14, f22
         goto 0x801a9fac
         mov.s f14, f20

    loc_0x801a9fac: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801a9fa0
         add.s f10, f0, f14
         trunc.w.s f4, f10
         mfc1 t8, f4
         
         t9 = v0 + t8
         [s6 + 0] = t9
         v0 = t9
         at = , v0 < a0

    loc_0x801a9fe0: // orphan
         t5 = [sp + 0x12c]
         t6 = t5 + 1
         [sp + 0x12c] = t6

    loc_0x801a9fec: // orphan
         t7 = [sp + 0x128]        // t9
         t8 = t7 + 1
         [sp + 0x128] = t8
         t9 = [sp + 0x12c]

    loc_0x801aa0f0: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa0e4
         t8 = [s6 + 0]            // t3
         add.s f8, f14, f0
         mtc1 t8, f4
         t8 = fcn.83500000 << 16
         trunc.w.s f10, f8
         cvt.s.w f2, f4
         mfc1 s4, f10
         c.lt.s f24, f2
         
         bc1fl 0x801aa128
         mov.s f14, f22
         goto 0x801aa128
         mov.s f14, f20

    loc_0x801aa128: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa11c
         add.s f6, f14, f2
         a0 = fcn.83500000 << 16
         v1 = fcn.83500000 << 16
         a0 = [a0 + 0x3d28]
         trunc.w.s f8, f6
         v1 = [v1 + 0x3d2c]
         t7 = [s6 + 0x48]         // t9
         mfc1 s7, f8
         t6 = v1 - s4
         s3 = t6 + v1
         t5 = a0 - s7
         if                       // likely
         fp = t5 + a0

    loc_0x801aa15c: // orphan
         s2 = 0 + 1               // lo
         goto 0x801aa168
         s5 = 0 + 2

    loc_0x801aa168: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa160
         t8 = [t8 + 0x3bc4]       // t9
         at = , t8 < t9
         if                       // likely
         a0 = 0 + 0x136

    loc_0x801aa174: // orphan
         a0 = 0 + 0x136

    loc_0x801aa178: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x8004ca60          // 0x8004ca60(-1, 0x0, 0x8, -1)
         a0 = v0                  // s4
         v1 = [s0 + 0]
         t4 = 0xe700 << 16
         t7 = 0xfd10 << 16
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = 0
         [v1 + 0] = t4
         a0 = v1
         v1 = [s0 + 0]
         t8 = v0 + s1
         t5 = 0xf510 << 16
         t6 = v1 + 8
         [s0 + 0] = t6
         [v1 + 4] = t8
         [v1 + 0] = t7
         a1 = v1
         v1 = [s0 + 0]
         t6 = 0x700 << 16
         t8 = 0xe600 << 16
         t9 = v1 + 8
         [s0 + 0] = t9
         [v1 + 4] = t6
         [v1 + 0] = t5
         a2 = v1
         v1 = [s0 + 0]
         t6 = 0x777 << 16
         t6 |= 0xf000
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t8
         a3 = v1
         v1 = [s0 + 0]
         t5 = 0xf300 << 16
         at = 0 + 2
         t9 = v1 + 8
         [s0 + 0] = t9
         [v1 + 4] = t6
         [v1 + 0] = t5
         t0 = v1
         v1 = [s0 + 0]
         t9 = 0xf510 << 16
         t9 |= 0x6000
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t4
         t1 = v1
         v1 = [s0 + 0]
         t7 = 0x2f << 16
         t7 |= 0xc024
         t8 = v1 + 8
         [s0 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t9
         t2 = v1
         v1 = [s0 + 0]
         t6 = 0xf200 << 16
         t8 = 0 + 0xc0
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = t7
         [v1 + 0] = t6
         if                       // likely
         t3 = v1

    loc_0x801aa28c: // orphan
         at = , s1 < 0x5a00
         beql at, 0, 0x801aa380   // likely
         at = 0 + 2

    loc_0x801aa298: // orphan
         div 0, t8, s2
         mtc1 s7, f10
         t9 = lo
         mtc1 t9, f4
         cvt.s.w f18, f10
         mtc1 s4, f6
         if                       // likely
         

    loc_0x801aa2b8: // orphan
         break 7

    loc_0x801aa2bc: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x801aa2c8: // orphan
         if                       // likely
         

    loc_0x801aa2d0: // orphan
         break 6

    loc_0x801aa2d4: // orphan
         c.lt.s f24, f18
         cvt.s.w f12, f4
         bc1f 0x801aa2ec
         cvt.s.w f2, f6
         goto 0x801aa2f0
         mov.s f16, f20

    loc_0x801aa2f0: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa2e4
         c.lt.s f24, f2
         a3 = 0 + 0xa
         add.s f8, f16, f18
         bc1fl 0x801aa310
         mov.s f0, f22
         goto 0x801aa310
         mov.s f0, f20

    loc_0x801aa310: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa304
         c.lt.s f24, f12
         t8 = 0 + 0x400
         trunc.w.s f10, f8
         t9 = 0 + 0x400
         bc1f 0x801aa330
         add.s f4, f0, f2
         goto 0x801aa334
         mov.s f14, f20

    loc_0x801aa334: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa328
         add.s f8, f14, f12
         mfc1 a0, f10
         [sp + 0x10] = 0
         trunc.w.s f6, f4
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         trunc.w.s f10, f8
         mfc1 a1, f6
         [sp + 0x14] = 0
         [sp + 0x18] = t8
         mfc1 a2, f10
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x1c] = t9

    loc_0x801aa374: // orphan
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         at = 0 + 2

    loc_0x801aa380: // orphan
         if                       // likely
         t5 = s2 << 2

    loc_0x801aa388: // orphan
         at = , s1 < 0x5a00
         if                       // unlikely
         t8 = 0 + 0xc0

    loc_0x801aa390: // orphan
         t8 = 0 + 0xc0

    loc_0x801aa394: // orphan
         div 0, t8, s2
         t5 -= s2
         t5 <<= 5
         t6 = t5 + fp
         t7 = t6 - 0x60
         mtc1 t7, f4
         v0 = s2 << 2
         v0 -= s2
         cvt.s.w f18, f4
         v0 <<= 8
         v0 -= 0x300
         t9 = lo
         mtc1 t9, f6
         v0 <<= 2
         c.lt.s f24, f18
         v0 <<= 0x10
         if                       // likely
         

    loc_0x801aa3dc: // orphan
         break 7

    loc_0x801aa3e0: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x801aa3ec: // orphan
         if                       // likely
         

    loc_0x801aa3f4: // orphan
         break 6

    loc_0x801aa3f8: // orphan
         v0 = , signed  v0 >> 0x10
         bc1f 0x801aa40c
         cvt.s.w f12, f6
         goto 0x801aa410
         mov.s f16, f20

    loc_0x801aa410: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa404
         mtc1 s3, f8
         add.s f10, f16, f18
         a3 = 0 + 0xa
         cvt.s.w f2, f8
         c.lt.s f24, f2
         
         bc1fl 0x801aa43c
         mov.s f0, f22
         goto 0x801aa43c
         mov.s f0, f20

    loc_0x801aa43c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa430
         c.lt.s f24, f12
         t8 = 0 + 0x400
         trunc.w.s f4, f10
         t9 = 0 + 0x400
         bc1f 0x801aa45c
         add.s f6, f0, f2
         goto 0x801aa460
         mov.s f14, f20

    loc_0x801aa460: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801aa454
         add.s f10, f14, f12
         mfc1 a0, f4
         [sp + 0x10] = v0
         trunc.w.s f8, f6
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         trunc.w.s f4, f10
         mfc1 a1, f8
         [sp + 0x14] = 0
         [sp + 0x18] = t8
         mfc1 a2, f4
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x1c] = t9
         call 0x80044270          // 0x80044270(-1, 0xffff6408, 0x8, -1)
         [sp + 0x20] = 0

    loc_0x801aa4a8: // orphan
         s1 += 0xf00
         at = 0 | 0xa500
         s4 += 0xa
         if                       // likely
         s3 += 0xa

    loc_0x801aa4bc: // orphan
         t5 = [sp + 0x128]
         at = 0 + 2
         bnel t5, at, 0x801aa4f4  // likely
         v0 = [sp + 0x140]

    loc_0x801aa4cc: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x125
         t6 = [sp + 0x80]
         v0 = [sp + 0x140]
         at = fcn.83500000 << 16
         [at + 0x3bc4] = t6
         at = fcn.83500000 << 16
         v0 += 1
         [at + 0x3d1c] = v0
         v0 = [sp + 0x140]

    loc_0x801aa4f4: // orphan
         a2 = 0 + 2
         v0 += 1

    loc_0x801aa4fc: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801a9e00
         s6 += 4
         if                       // likely
         [sp + 0x140] = v0

    loc_0x801aa508: // orphan
         t1 = fcn.83500000 << 16
         t1 += 0x3ba8
         at = 0x3f00 << 16
         t7 = fcn.83500000 << 16
         t7 = [t7 + 0x40e4]       // t9
         mtc1 at, f20
         at = 0xbf00 << 16
         mtc1 at, f22
         mtc1 0, f24
         if                       // unlikely
         v0 = [t1 + 0x14]         // t9

    loc_0x801aa534: // orphan
         t8 = t7 + 1              // lo
         at = fcn.83500000 << 16
         [at + 0x40e4] = t8

    loc_0x801aa540: // orphan
         a2 = 0 + 1               // lo
         if                       // fcn.801aa5d0+0x438 // likely
         t9 = fcn.83500000 << 16

    loc_0x801aa54c: // orphan
         [t1 + 0x20] = a2
         t9 = [t9 + 0x40e4]
         at = fcn.83500000 << 16
         [at + 0x3d1c] = 0
         at = , t9 < 3
         if                       // fcn.801aa5d0+0xd0 // unlikely
         v0 = fcn.83500000 << 16

    loc_0x801aa568: // orphan
         v0 = [v0 + 0x3d10]       // t9
         v1 = 0 - 1               // s2
         bnel v0, a2, 0x801aa598  // likely
         lwc1 f8, 0x3c, t1

    loc_0x801aa578: // orphan
         lwc1 f6, 0x3c, t1
         at = fcn.83500000 << 16
         ldc1 f10, 0x3e00, at
         cvt.d.s f8, f6
         add.d f4, f8, f10
         cvt.s.d f6, f4
         swc1 f6, 0x3c, t1
         lwc1 f8, 0x3c, t1

    loc_0x801aa598: // orphan
         at = fcn.83500000 << 16
         ldc1 f10, 0x3e08, at
         cvt.d.s f0, f8
         at = fcn.83500000 << 16
         c.le.d f10, f0
         
         bc1f 0x801aa5c4
         
         if                       // likely
         

    loc_0x801aa5c0: // orphan
         v0 = 0 - 1               // s2

    loc_0x801aa5c4: // orphan
         if                       // fcn.801aa5d0+0x14 // likely
         

    loc_0x801aa5cc: // orphan
         ldc1 f4, 0x3e10, at

    loc_0x801ab0a4: // orphan
         
         bc1fl 0x801ab16c
         trunc.w.s f6, f12
         t9 = [t9 + 0x3ac4]
         bnel t9, 0, 0x801ab0fc   // likely
         c.lt.s f0, f18

    loc_0x801ab0bc: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x66
         at = 0x431b << 16
         mtc1 at, f18
         at = fcn.83500000 << 16
         t0 = 0 + 1               // lo
         [at + 0x3ac4] = t0
         at = 0x41d8 << 16
         mtc1 at, f6
         at = fcn.83500000 << 16
         lwc1 f8, 0x3be8, at
         v1 = fcn.83500000 << 16
         v1 += 0x3ad4
         mul.s f0, f6, f8
         sub.s f14, f18, f0
         c.lt.s f0, f18

    loc_0x801ab0fc: // orphan
         at = 0xbf00 << 16
         t6 = 0 + 2
         t7 = 0 + 0x1e
         bc1fl 0x801ab124
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x801ab12c
         add.s f10, f2, f14

    loc_0x801ab12c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ab118
         v0 = fcn.83500000 << 16
         at = fcn.83500000 << 16
         v0 += 0x3ba8
         trunc.w.s f4, f10
         mfc1 t2, f4
         
         [v1 + 0xc] = t2
         [at + 0x3af0] = 0
         t3 = [v0 + 0x10]
         t4 = t3 - 2
         if                       // likely
         [v0 + 0x10] = t4

    loc_0x801ab15c: // orphan
         [v0 + 0xc] = t6
         goto 0x801ab194
         [v0 + 0x10] = t7

    loc_0x801ab194: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ab160
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x801ab6a4: // orphan
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80007b34          // 0x80007b34(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xf
         goto 0x801ab71c
         

    loc_0x801ab71c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ab6b4
         a0 = fcn.83500000 << 16
         call 0x87f0dc4c          // 0x87f0dc4c(0x83500000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x3f58
         ra = [sp + 0x1c]         // t9
         v0 = [s0 + 0]
         s0 = [sp + 0x18]         // t9
         ret                      // t9
         sp += 0x20

    loc_0x801abe4c: // orphan
         if                       // fcn.801abd78+0x16e8 // unlikely
         // CODE XREF from fcn.801a7b64 @ +0x1b8
         if                       // unlikely

    loc_0x801abe58: // orphan
         if                       // unlikely
         

    loc_0x801abe60: // orphan
         
         if                       // fcn.801ad5a4+0xc4 // unlikely
         if                       // fcn.801ad5a4+0xd8 // unlikely

    loc_0x801abe70: // orphan
         if                       // fcn.801abd78+0x1aec // unlikely
         if                       // unlikely

    loc_0x801abe7c: // orphan
         
         
         
         
         if                       // fcn.801abd78+0x1f18 // unlikely
         if                       // unlikely

    loc_0x801abe98: // orphan
         if                       // unlikely
         

    loc_0x801abea0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abeac: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801abed4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801abee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abef4: // orphan
         
         if                       // fcn.801b01b0+0x39c // unlikely
         if                       // fcn.801b0630+0x10 // unlikely

    loc_0x801abf04: // orphan
         
         
         
         
         
         
         
         if                       // fcn.801b08b0+0x334 // unlikely
         if                       // unlikely

    loc_0x801abf2c: // orphan
         if                       // fcn.801b0c0c+0x254 // unlikely
         if                       // fcn.801b0c0c+0x288 // unlikely

    loc_0x801abf38: // orphan
         if                       // unlikely
         

    loc_0x801abf40: // orphan
         
         
         
         if                       // fcn.801c9fec-0x17fdc // unlikely
         if                       // fcn.801c9fec-0x17fc8 // unlikely

    loc_0x801abf58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abf64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abf70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abf7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abf88: // orphan
         if                       // fcn.801b2334+0x58 // unlikely
         if                       // unlikely

    loc_0x801abf94: // orphan
         if                       // fcn.801b2334+0x84 // unlikely
         if                       // unlikely

    loc_0x801abfa0: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801abfc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abfd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abfdc: // orphan
         if                       // unlikely
         

    loc_0x801abfe4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801abff0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac000: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac00c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac018: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac024: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac044: // orphan
         if                       // fcn.801b3ac4+0x134 // unlikely
         if                       // fcn.801b3ac4+0x148 // unlikely

    loc_0x801ac050: // orphan
         if                       // fcn.801b3ac4+0x1c0 // unlikely
         if                       // fcn.801b3ac4+0x1d4 // unlikely

    loc_0x801ac05c: // orphan
         if                       // fcn.801b3ac4+0x1fc // unlikely
         if                       // unlikely

    loc_0x801ac068: // orphan
         if                       // fcn.801b3ac4+0x318 // unlikely
         if                       // unlikely

    loc_0x801ac074: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac080: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac08c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac098: // orphan
         if                       // unlikely
         if                       // fcn.801e418c-0x2fa6c // unlikely

    loc_0x801ac0a4: // orphan
         if                       // unlikely
         if                       // fcn.801e418c-0x2fa10 // unlikely

    loc_0x801ac0b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac0bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac0c8: // orphan
         

    loc_0x801ac0cc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac0e4: // orphan
         // CODE XREF from fcn.801a7b64 @ +0x1bc
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac0f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac0fc: // orphan
         if                       // fcn.801b5b70+0x80 // unlikely
         if                       // unlikely

    loc_0x801ac108: // orphan
         if                       // fcn.801b5b70+0xbc // unlikely
         if                       // unlikely

    loc_0x801ac114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac120: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ac804: // orphan
         t1 -= t0
         t1 <<= 2
         t1 += t0
         t1 <<= 3
         [sp + 0x24] = a1
         [sp + 0x28] = a2

    loc_0x801ac81c: // orphan
         v0 = v1 + t1
         halfword [v1 + 0x14] = 0
         a0 = v0 + 0x20           // arg1
         [sp + 0x18] = v0
         a2 = 0 - 1               // arg3 // s2
         a1 = 0

    loc_0x801ac834: // orphan
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = [v1 + 0x1c]
         v0 = [sp + 0x18]
         mtc1 0, f0
         ra = [sp + 0x14]
         lwc1 f4, 0x24, sp
         lwc1 f6, 0x28, sp
         // CODE XREF from fcn.801965a4 @ +0x7a0
         t2 = [sp + 0x30]
         sp += 0x20
         swc1 f0, 0x58, v0
         swc1 f0, 0x54, v0
         swc1 f0, 0x50, v0
         swc1 f4, 0x44, v0
         swc1 f6, 0x48, v0
         ret
         [v0 + 0x34] = t2

    loc_0x801acb68: // orphan
         [sp + 0x14] = ra
         if                       // likely
         [sp + 0x3c] = a1

    loc_0x801acb74: // orphan
         t3 = 0x8009 << 16
         t3 = [t3 + 0x491c]       // t9
         a0 = 0 + 0x1b1
         a1 = 0
         call 0x8004c990          // 0x8004c990(0x1b1, 0x0, 0x8, -1)
         [sp + 0x30] = t3
         a2 = 0x800d << 16
         a2 += 0x510
         a1 = [a2 + 0]            // t9
         t3 = [sp + 0x30]         // t9
         t7 = 0xe700 << 16
         t6 = a1 + 8
         [a2 + 0] = t6
         [a1 + 0] = t7
         [a1 + 4] = 0
         a1 = [a2 + 0]
         t9 = 0xfa00 << 16
         ra = 0 + 0x1c
         t8 = a1 + 8
         [a2 + 0] = t8
         [a1 + 0] = t9
         t6 = [t3 + 0x14]         // t9
         t5 = 0x8190 << 16
         t5 += 0x784
         unsigned , hi
         // CODE XREF from fcn.8019eefc @ +0x108c
         a0 = v0                  // s4
         t7 = lo
         v1 = t5 + t7
         t8 = [v1 + 0xc]
         t7 = [v1 + 0]
         t9 = t8 & 0xff
         t8 = t7 << 0x18
         t7 = [v1 + 4]
         t6 = t9 | t8
         t9 = t7 & 0xff           // lo
         t8 = t9 << 0x10
         t9 = [v1 + 8]
         t7 = t6 | t8

    loc_0x801acc0c: // orphan
         t6 = t9 & 0xff           // s4
         t8 = t6 << 8
         t9 = t7 | t8
         [a1 + 4] = t9            // arg2
         a1 = [a2 + 0]            // arg3 // s4
         t7 = 0xfb00 << 16
         t6 = a1 + 8              // arg2
         [a2 + 0] = t6            // arg3
         [a1 + 0] = t7            // arg2
         t8 = [t3 + 0x14]
         unsigned , hi
         t9 = lo
         v1 = t5 + t9
         t6 = [v1 + 0xc]          // t9
         t9 = [v1 + 0x10]
         t7 = t6 & 0xff           // s4
         t6 = t9 << 0x18
         t9 = [v1 + 0x14]
         t8 = t7 | t6
         t7 = t9 & 0xff           // s4
         t6 = t7 << 0x10
         t7 = [v1 + 0x18]         // t9
         t9 = t8 | t6
         t8 = t7 & 0xff           // s4
         t6 = t8 << 8
         t7 = t9 | t6
         [a1 + 4] = t7            // arg2
         a1 = [a2 + 0]            // arg3
         t6 = 0x5ffe << 16
         t9 = 0xfc30 << 16
         t8 = a1 + 8              // arg2
         [a2 + 0] = t8            // arg3
         t9 |= 0xb3ff
         t6 |= 0xfe38
         [a1 + 4] = t6            // arg2
         [a1 + 0] = t9            // arg2
         a1 = [a2 + 0]            // arg3
         t8 = 0xdb06 << 16
         t8 |= 0x3c
         t7 = a1 + 8              // arg2
         [a2 + 0] = t7            // arg3
         [a1 + 0] = t8            // arg2
         call 0x8004ca60          // 0x8004ca60(-1, 0x10f, 0x8, -1)
         [sp + 0x18] = a1
         t4 = [sp + 0x18]
         a2 = 0x800d << 16
         a2 += 0x510
         [t4 + 4] = v0
         a1 = [a2 + 0]
         t6 = 0xde00 << 16
         t7 = 0x8190 << 16
         t9 = a1 + 8
         [a2 + 0] = t9
         [a1 + 0] = t6
         t7 = [t7 + 0x838]
         call 0x8003cd84          // 0x8003cd84(-1, 0xf, 0x800d0510, -1)
         [a1 + 4] = t7

    loc_0x801accf0: // orphan
         ra = [sp + 0x14]
         sp += 0x38
         ret                      // ra
         

    loc_0x801acd58: // orphan
         s2 = [sp + 0x20]
         halfword [at + 0x834] = 0
         ret                      // ra
         sp += 0x28

    loc_0x801ad484: // orphan
         [t3 + 0] = t9
         t5 = 0x8009 << 16
         t5 += 0x4e38
         t4 = 0xde00 << 16
         [v0 + 0] = t4
         [v0 + 4] = t5
         a1 = [sp + 0xec]
         a2 = t0 + 0x16
         a3 = t1 + 0x16
         a0 = t2 - 0xb
         call fcn.81a005fc
         a1 -= 0xb
         t3 = 0x800d << 16

    loc_0x801ad4b8: // orphan
         t3 += 0x510
         v0 = [t3 + 0]            // t9
         t8 = 0x8009 << 16
         t8 += 0x4f50
         t6 = v0 + 8

    loc_0x801ad4cc: // orphan
         [t3 + 0] = t6
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t8

    loc_0x801ad4dc: // orphan
         // CODE XREF from fcn.801abd78 @ 0x801ad3ec
         t9 = [sp + 0xf8]
         a0 = 0 + 1               // lo
         a1 = [t9 + 0xc]
         call 0x8004c594          // 0x8004c594(0x1, 0xffffffde, 0x8, -1)
         a1 += 1
         a0 = 0 + 0x27
         call 0x8004c874          // 0x8004c874(0x27, 0xffffffdf, 0x8, -1)
         a1 = 0 + 9
         [sp + 0x40] = v0
         a0 = sp + 0x50

    loc_0x801ad504: // orphan
         a1 = 0 + 0x80            // arg2
         a2 = 0 + 0x27            // arg3
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x80, 0x27, -1)
         a3 = 0 + 0xa
         [sp + 0x44] = v0
         a0 = 0 + 0x27
         call 0x8004c874          // 0x8004c874(0x27, 0x80, 0x27, 0xa)
         a1 = 0 + 0xb
         [sp + 0x48] = v0
         a0 = 0 + 0x27
         call 0x8004c874          // 0x8004c874(0x27, 0xb, 0x27, 0xa)
         a1 = 0 + 0xc
         call 0x800498c4          // 0x800498c4(0x27, 0xc, 0x27, 0xa)
         [sp + 0x4c] = v0
         call 0x80008990          // 0x80008990(0x27, 0xc, 0x27, 0xa)
         
         if                       // unlikely
         a0 = 0 + 1               // lo

    loc_0x801ad548: // orphan
         a1 = 0 + 0x80            // arg2
         a2 = 0 + 0x27            // arg3
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x80, 0x27, -1)
         a3 = 0 + 0xa
         [sp + 0x44] = v0
         a0 = 0 + 0x27
         call 0x8004c874          // 0x8004c874(0x27, 0x80, 0x27, 0xa)
         a1 = 0 + 0xb
         [sp + 0x48] = v0
         a0 = 0 + 0x27
         call 0x8004c874          // 0x8004c874(0x27, 0xb, 0x27, 0xa)
         a1 = 0 + 0xc
         call 0x800498c4          // 0x800498c4(0x27, 0xc, 0x27, 0xa)
         [sp + 0x4c] = v0
         call 0x80008990          // 0x80008990(0x27, 0xc, 0x27, 0xa)
         
         if                       // unlikely
         a0 = 0 + 1               // lo

    loc_0x801ad54c: // orphan
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x8004989c          // 0x8004989c(0x8, 0x0, 0x8, -1)
         a0 = 0 + 0x1a
         v1 = [sp + 0xec]
         a0 = 0 + 0x140
         v0 = v1 + 8              // a2
         t4 = v1 + 0x34
         [sp + 0xd8] = v0
         [sp + 0xd4] = v0
         [sp + 0xd0] = v0
         goto 0x801ad5b4          // fcn.801ad5a4+0x10
         [sp + 0xdc] = t4

    loc_0x801ad584: // orphan
         call 0x800496a4          // fcn.801ad58c // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x801ad878: // orphan
         [sp + 0x4c] = a3
         [sp + 0x64] = a1
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x0, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         t1 = [sp + 0x7c]
         t2 = [sp + 0x84]
         v0 = [sp + 0x44]         // s4
         a2 = s1 << 0x10
         t3 = t1 + t2
         a1 = t3 - s3
         a1 <<= 0x10

    loc_0x801ad8b0: // orphan
         a1 = , signed  a1 >> 0x10
         a3 = s2 << 0x10
         t4 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x54] = a1
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x0, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = v0
         v0 = s0 << 2
         s3 = [sp + 0x54]
         v0 -= s0
         v0 <<= 5
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a3 = s2 << 0x10
         t6 = 0 + 0x400
         a1 = s3 << 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x1c] = t6
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x10] = v0
         [sp + 0x68] = v0
         a0 = halfword [sp + 0x5a]
         a2 = halfword [sp + 0x52]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0x0, 0xfffffe11, 0x0, -1)
         [sp + 0x20] = 0
         s0 = [sp + 0x68]
         a1 = s3 << 0x10
         a2 = s1 << 0x10
         a3 = s2 << 0x10
         t7 = 0 + 0x400
         t8 = 0 + 0x400
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         a0 = halfword [sp + 0x4a] // s4
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0xfffffe11, 0xffff7dbd, -1)
         [sp + 0x10] = s0
         a2 = s1 << 0x10
         t9 = 0 + 0x400
         [sp + 0x18] = t9
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x4a] // s4
         a1 = halfword [sp + 0x66]
         a3 = halfword [sp + 0x4e]
         [sp + 0x10] = s0
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0xff, 0x6408, 0xffff7dbd, 0xffff)
         [sp + 0x20] = 0
         ra = [sp + 0x3c]
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]         // t9
         s2 = [sp + 0x34]
         s3 = [sp + 0x38]
         ret
         sp += 0x78

    loc_0x801adca4: // orphan
         at = 0xbf00 << 16
         mtc1 at, f14
         goto 0x801adcc4
         swc1 f12, 0x1c, sp

    loc_0x801adcc4: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adcac
         lwc1 f6, 0x1c, sp
         add.s f8, f6, f0
         trunc.w.s f10, f8
         mfc1 t5, f10
         
         t7 = t5 << 0x10
         t6 = , signed  t7 >> 0x10 // t9
         bgezl t6, 0x801add8c     // likely
         c.lt.s f2, f0

    loc_0x801adce8: // orphan
         c.lt.s f2, f0
         v0 = 0
         bc1fl 0x801add04
         swc1 f14, 0x14, sp
         goto 0x801add04
         swc1 f12, 0x14, sp

    loc_0x801add04: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adcf8
         lwc1 f4, 0x14, sp
         add.s f6, f4, f0
         trunc.w.s f8, f6
         mfc1 t8, f8
         
         t2 = t8 << 0x10
         t3 = , signed  t2 >> 0x10 // t9
         unsigned , hi
         t4 = lo
         t5 = , signed  t4 >> 7   // t9
         if                       // unlikely
         

    loc_0x801add34: // orphan
         c.lt.s f2, f0
         
         bc1fl 0x801add50
         swc1 f14, 0x10, sp
         goto 0x801add50
         swc1 f12, 0x10, sp

    loc_0x801add50: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801add44
         lwc1 f10, 0x10, sp
         add.s f4, f10, f0
         trunc.w.s f6, f4
         mfc1 t6, f6
         
         t9 = t6 << 0x10
         t8 = , signed  t9 >> 0x10
         unsigned , hi
         v0 = lo
         v0 = , signed  v0 >> 7

    loc_0x801add78: // orphan
         goto 0x801ade54
         c.lt.s f18, f16

    loc_0x801add80: // orphan
         goto 0x801ade54
         c.lt.s f18, f16

    loc_0x801add8c: // orphan
         v0 = 0
         bc1fl 0x801adda4
         swc1 f14, 8, sp
         goto 0x801adda4
         swc1 f12, 8, sp

    loc_0x801adda4: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801add98
         lwc1 f8, 8, sp
         add.s f10, f8, f0
         trunc.w.s f4, f10
         mfc1 t3, f4
         
         t4 = t3 << 0x10
         t5 = , signed  t4 >> 0x10 // t3
         unsigned , hi

    loc_0x801addc4: // orphan
         t7 = lo
         // CODE XREF from fcn.80197624 @ +0x39c
         t6 = , signed  t7 >> 7
         if                       // likely
         

    loc_0x801addd4: // orphan
         c.lt.s f2, f0
         
         bc1fl 0x801addf0
         swc1 f14, 4, sp
         goto 0x801addf0
         swc1 f12, 4, sp

    loc_0x801addf0: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adde4
         lwc1 f6, 4, sp
         add.s f8, f6, f0
         trunc.w.s f10, f8
         mfc1 t8, f10
         
         t2 = t8 << 0x10
         t3 = , signed  t2 >> 0x10 // t9
         unsigned , hi
         v0 = lo
         v0 = , signed  v0 >> 7   // t9
         goto 0x801ade24
         v1 = v0                  // t9

    loc_0x801ade20: // orphan
         v1 = v0                  // s4

    loc_0x801ade24: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ade18
         goto 0x801ade50
         v0 = v1

    loc_0x801ade2c: // orphan
         mtc1 at, f6
         lwc1 f4, 0x70, sp
         at = 0xbf00 << 16
         mtc1 at, f14
         at = 0x3f00 << 16
         mtc1 at, f12
         mtc1 0, f2
         mul.s f0, f4, f6
         v0 = 0

    loc_0x801ade50: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ade24
         c.lt.s f18, f16

    loc_0x801ade54: // orphan
         // CODE XREFS from fcn.801c9dc4 @ 0x801add78, 0x801add80
         lwc1 f10, 0x74, sp
         at = 0x4480 << 16
         lwc1 f8, 0x74, sp
         bc1fl 0x801adff0
         mtc1 at, f4
         at = 0x4480 << 16
         mtc1 at, f10
         
         mul.s f16, f8, f10
         c.lt.s f2, f16
         
         bc1fl 0x801ade94
         mov.s f18, f14
         goto 0x801ade94
         mov.s f18, f12

    loc_0x801ade94: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ade88
         add.s f4, f18, f16
         trunc.w.s f6, f4
         mfc1 t5, f6
         
         t7 = t5 << 0x10
         t6 = , signed  t7 >> 0x10 // t9
         bgezl t6, 0x801adf54     // likely
         c.lt.s f2, f16

    loc_0x801adeb4: // orphan
         c.lt.s f2, f16
         v1 = 0
         bc1fl 0x801aded0
         swc1 f14, 0x38, sp
         goto 0x801aded0
         swc1 f12, 0x38, sp

    loc_0x801aded0: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adec4
         lwc1 f8, 0x38, sp
         add.s f10, f8, f16
         trunc.w.s f4, f10
         mfc1 t8, f4
         
         t2 = t8 << 0x10
         t3 = , signed  t2 >> 0x10 // t9
         unsigned , hi            // lo // lo // t9 // s2
         t4 = lo

    loc_0x801adef4: // orphan
         t5 = , signed  t4 >> 7   // t9
         if                       // unlikely
         

    loc_0x801adf00: // orphan
         c.lt.s f2, f16
         
         bc1fl 0x801adf1c
         mov.s f18, f14
         goto 0x801adf1c
         mov.s f18, f12

    loc_0x801adf1c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adf10
         add.s f6, f18, f16
         trunc.w.s f8, f6
         mfc1 t6, f8
         
         t9 = t6 << 0x10
         t8 = , signed  t9 >> 0x10
         unsigned , hi            // t9 // s2
         v1 = lo
         a0 = , signed  v1 >> 7   // arg1
         goto 0x801ae000
         t4 = halfword [sp + 0x6e]

    loc_0x801adf48: // orphan
         goto 0x801adffc
         a0 = v1

    loc_0x801adf54: // orphan
         v1 = 0
         bc1fl 0x801adf6c
         mov.s f18, f14
         goto 0x801adf6c
         mov.s f18, f12

    loc_0x801adf6c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adf60
         add.s f10, f18, f16
         trunc.w.s f4, f10
         mfc1 t3, f4
         
         t4 = t3 << 0x10

    loc_0x801adf80: // orphan
         t5 = , signed  t4 >> 0x10 // t9
         unsigned , hi            // lo // lo // t9 // s2
         t7 = lo
         t6 = , signed  t7 >> 7
         if                       // likely
         

    loc_0x801adf98: // orphan
         c.lt.s f2, f16
         
         bc1fl 0x801adfb4
         mov.s f18, f14
         goto 0x801adfb4
         mov.s f18, f12

    loc_0x801adfb4: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adfa8
         add.s f6, f18, f16
         trunc.w.s f8, f6
         mfc1 t8, f8
         
         t2 = t8 << 0x10
         t3 = , signed  t2 >> 0x10 // t9
         unsigned , hi            // lo // lo // t9 // s2
         v1 = lo
         v1 = , signed  v1 >> 7
         goto 0x801adfe4
         a1 = v1

    loc_0x801adfe0: // orphan
         a1 = v1

    loc_0x801adfe4: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adfd8
         goto 0x801adffc
         a0 = a1                  // t0

    loc_0x801adffc: // orphan
         // CODE XREFS from fcn.801c9dc4 @ 0x801adf48, 0x801adfe4
         t4 = halfword [sp + 0x6e]

    loc_0x801ae000: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801adf40
         t9 = halfword [sp + 0x6a]
         c.lt.s f2, f0
         t5 = t4 << 5
         t8 = t9 << 5
         t3 = t8 - v0
         t7 = t5 - a0             // arg1
         t6 = t7 & 0xffff
         t4 = t3 << 0x10
         t5 = t6 | t4
         [t0 + 4] = t5
         // CODE XREF from fcn.80197624 @ +0x94
         a1 = [t1 + 0]            // t9
         t9 = 0xf100 << 16
         t7 = a1 + 8              // arg2

    loc_0x801ae034: // orphan
         [t1 + 0] = t7
         bc1f 0x801ae048
         [a1 + 0] = t9            // arg2
         goto 0x801ae04c
         swc1 f12, 0x38, sp

    loc_0x801ae04c: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ae040
         c.lt.s f2, f16
         lwc1 f10, 0x38, sp
         bc1f 0x801ae064
         add.s f4, f0, f10
         goto 0x801ae068
         mov.s f18, f12

    loc_0x801ae068: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801ae05c
         add.s f6, f18, f16
         trunc.w.s f8, f6
         trunc.w.s f6, f4
         mfc1 t6, f8
         mfc1 t2, f6
         t4 = t6 & 0xffff
         t3 = t2 << 0x10
         t6 = t4 | t3
         [a1 + 4] = t6            // arg2
         ret                      // ra
         sp += 0x58

    loc_0x801ae258: // orphan
         // CODE XREFS from fcn.801abd78 @ 0x801ae238, 0x801ae240
         ctc1 t7, 31
         t0 &= 0xff               // a2
         [sp + 0x1c] = t0
         [sp + 0x2c] = t0
         [sp + 0x34] = a0
         call 0x8004468c          // 0x8004468c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a2
         a1 = [sp + 0x44]         // s4
         t0 = [sp + 0x2c]         // a2
         t8 = 0 + 0xff            // s4
         a1 += 1
         a1 <<= 0x10
         t9 = 0 + 0xff            // s4
         t2 = 0 + 0xff            // s4
         a0 = [sp + 0x34]         // t9
         a2 = [sp + 0x30]
         [sp + 0x18] = t2
         [sp + 0x14] = t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = t8
         a3 = 0 + 1               // lo

    loc_0x801ae2ac: // orphan
         call 0x8004468c          // 0x8004468c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t0
         ra = [sp + 0x24]

    loc_0x801ae2b8: // orphan
         // CODE XREF from fcn.801abd78 @ 0x801ae190
         sp += 0x40
         ret                      // ra
         

    loc_0x801ae728: // orphan
         ldc1 f22, 0x30, sp
         ldc1 f24, 0x38, sp
         ldc1 f26, 0x40, sp
         s0 = [sp + 0x48]         // s4
         s1 = [sp + 0x4c]         // t9
         s2 = [sp + 0x50]
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         ret                      // ra
         sp += 0x60

    loc_0x801af0e0: // orphan
         c.lt.d f18, f14
         
         bc1fl 0x801af0fc
         c.lt.d f18, f12

    loc_0x801af444: // orphan
         halfword [a0 + 4] = t6   // arg1
         t8 = halfword [a2 + 2]
         t7 = halfword [a1 + 6]
         t0 = halfword [a2 + 6]
         t9 = t7 - t8
         t1 = t9 - t0
         call 0x818019e8          // 0x818019e8(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [a0 + 6] = t1
         ra = [sp + 0x14]         // s4
         sp += 0x18
         ret                      // s4
         

    loc_0x801afca0: // orphan
         [a0 + 0] = t2            // arg1
         t4 |= 0x4000             // t9
         t3 |= 0x1c
         [v1 + 0] = t3
         ret                      // ra
         [v1 + 4] = t4

    loc_0x801b0bf8: // orphan
         cvt.s.w f12, f8
         mtc1 t6, f8
         mfc1 a2, f4
         mtc1 at, f4
         cvt.s.w f6, f6

    loc_0x801b16cc: // orphan
         
         lwc1 f2, 0x5f6c, at
         sub.s f12, f12, f2
         c.le.s f0, f12
         
         bc1tl 0x801b16d8
         sub.s f12, f12, f2
         at = 0x8180 << 16
         lwc1 f0, 0x5f70, at
         at = 0x8180 << 16
         lwc1 f2, 0x5f74, at
         c.le.s f12, f0
         
         bc1f 0x801b171c
         
         add.s f12, f12, f2
         c.le.s f12, f0
         
         bc1tl 0x801b170c
         // CODE XREF from fcn.80197624 @ +0x450
         add.s f12, f12, f2
         ret                      // ra
         mov.s f0, f12

    loc_0x801b21a0: // orphan
         ra = [sp + 0x1c]
         call 0x81802d98          // 0x81802d98(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]         // s4
         sp += 0x20
         ret
         

    loc_0x801b222c: // orphan
         sp += 0x20
         ret                      // ra
         

    loc_0x801b2288: // orphan
         [sp + 0x24] = ra
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         a2 = [a0 + 0]            // arg1 // s4
         s1 = a1                  // t0
         s2 = a0                  // t9
         beql a2, 0, 0x801b2320   // unlikely
         ra = [sp + 0x24]

    loc_0x801b22ac: // orphan
         v0 = [a2 + 0]            // arg3

    loc_0x801b22b0: // orphan
         s0 = 0
         a0 = a2
         beql v0, 0, 0x801b22cc   // unlikely
         t6 = , unsigned  byte [s1 + 0x20] // s4

    loc_0x801b22c0: // orphan
         call v0                  // s4 // s4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         t6 = , unsigned  byte [s1 + 0x20] // s4

    loc_0x801b22cc: // orphan
         blezl t6, 0x801b2310     // likely
         a2 = [s2 + 4]            // t9

    loc_0x801b22d4: // orphan
         a0 = [s2 + 0]            // t9

    loc_0x801b22d8: // orphan
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff
         t7 = [v0 + 0x20]         // t9
         a1 = s1
         beql t7, 0, 0x801b22fc   // unlikely
         t8 = , unsigned  byte [s1 + 0x20] // s4

    loc_0x801b22f0: // orphan
         call 0x81803c9c          // 0x81803c9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 0x20]         // t9
         t8 = , unsigned  byte [s1 + 0x20] // s4

    loc_0x801b22fc: // orphan
         s0 += 1
         at = , s0 < t8           // lo

    loc_0x801b2304: // orphan
         bnel at, 0, 0x801b22d8   // likely
         a0 = [s2 + 0]            // t9

    loc_0x801b230c: // orphan
         a2 = [s2 + 4]            // t9

    loc_0x801b2310: // orphan
         s2 += 4
         bnel a2, 0, 0x801b22b0   // likely
         v0 = [a2 + 0]            // arg3

    loc_0x801b231c: // orphan
         ra = [sp + 0x24]

    loc_0x801b2320: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x801b23c0: // orphan
         a1 = s0
         call 0x818048a4          // 0x818048a4(-1, 0x104, 0x8, -1)
         swc1 f4, 0x24, s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x801b244c: // orphan
         if                       // unlikely
         swc1 f16, 0x24, a0       // arg1

    loc_0x801b2454: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x801b2460: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x801b2468: // orphan
         if                       // likely
         

    loc_0x801b2470: // orphan
         v0 = [a0 + 0x34]         // arg1 // t9
         goto 0x801b2484
         v1 = , unsigned  , v0 < 1

    loc_0x801b247c: // orphan
         v0 = [a0 + 0x30]         // arg1 // t9
         v1 = , unsigned  , v0 < 1

    loc_0x801b2484: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801b2474
         if                       // likely
         at = 0x3f80 << 16

    loc_0x801b248c: // orphan
         lwc1 f18, 0x24, a0       // arg1
         mtc1 at, f6
         v0 = 0
         c.le.s f6, f18
         
         bc1f 0x801b24b8

    loc_0x801b24a4: // orphan
         at = 0x3f80 << 16
         mtc1 at, f8
         v0 = 0 + 1               // lo
         goto 0x801b24b8
         swc1 f8, 0x24, a0        // arg1

    loc_0x801b24b8: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801b24b0
         ra = [sp + 0x14]         // s4
         sp += 0x20
         ret                      // s4
         

    loc_0x801b2630: // orphan
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s4 + 0x1f]
         mtc1 0, f6
         s0 = v0                  // s4
         a1 = s4
         swc1 f6, 0x2c, s4
         t9 = [v0 + 0xc]
         a0 = [s1 + 0]            // t9
         a2 = s7                  // t9
         call t9                  // 0x5ffefe38(-1, 0xff, -1, -1)
         
         at = 0x3f80 << 16
         mtc1 at, f8
         a1 = s4
         a2 = fp
         swc1 f8, 0x2c, s4
         t9 = [s0 + 0xc]
         a0 = [s1 + 0]            // t9
         call t9                  // "\u01ea" // 0x5ffefe38(-1, 0xff, 0x178000, -1)
         
         lwc1 f10, 0x8c, sp
         a0 = sp + 0x98
         a1 = fp
         call 0x81801bc0          // 0x81801bc0(0x178098, 0x178000, 0x178000, -1)
         swc1 f10, 0x2c, s4
         s5 = v0                  // s4
         a0 = sp + 0x98
         call 0x81801bc0          // 0x81801bc0(0x178098, 0x178000, 0x178000, -1)
         a1 = s7                  // t9
         t7 = halfword [sp + 0x78]
         t8 = halfword [sp + 0x7a]
         t0 = halfword [sp + 0x80]
         t1 = halfword [sp + 0x82]
         unsigned , hi
         t2 = [sp + 0x94]
         s6 = v0                  // s4
         a0 = s7                  // t9
         s2 = lo
         
         
         unsigned , hi
         s3 = lo
         bnel t2, 0, 0x801b270c   // unlikely
         t3 = [sp + 0x90]

    loc_0x801b26e0: // orphan
         call 0x81801e70          // ",D" // 0x81801e70(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = fp
         a0 = , unsigned  , v0 < 1
         beql a0, 0, 0x801b2708   // likely
         [sp + 0x94] = a0

    loc_0x801b26f4: // orphan
         a0 = , 0 < s2
         bnel a0, 0, 0x801b2708   // unlikely
         [sp + 0x94] = a0

    loc_0x801b2700: // orphan
         a0 = , 0 < s3            // lo
         [sp + 0x94] = a0

    loc_0x801b2708: // orphan
         t3 = [sp + 0x90]

    loc_0x801b270c: // orphan
         if                       // likely
         

    loc_0x801b2714: // orphan
         a0 = [s1 + 0]            // t9
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s4 + 0x1d]
         s0 = v0                  // s4
         a0 = [s1 + 0]            // t9
         call 0x818054d0          // 0x818054d0(-1, 0xff, 0x8, -1)
         a1 = , unsigned  byte [s4 + 0x1c]
         a0 = s0                  // s4
         call 0x81804b74          // 0x81804b74(0xff, 0xff, 0x8, -1)
         a1 = v0                  // s4
         [sp + 0x90] = v0

    loc_0x801b2740: // orphan
         if                       // unlikely
         

    loc_0x801b2748: // orphan
         if                       // likely
         a0 = s7                  // t9

    loc_0x801b2750: // orphan
         call 0x81801c30          // 0x81801c30(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x98
         if                       // unlikely
         v1 = halfword [sp + 0x7c]

    loc_0x801b2760: // orphan
         t4 = halfword [sp + 0x80]
         v0 = halfword [sp + 0x98]
         t8 = halfword [sp + 0x9c]
         t5 = v1 + t4
         at = , t5 < v0
         if                       // likely
         t0 = v0 + t8

    loc_0x801b277c: // orphan
         t9 = , unsigned  byte [sp + 0x84]
         t7 = t9 | 0x80
         goto 0x801b27b0
         byte [sp + 0x84] = t7

    loc_0x801b278c: // orphan
         at = , t0 < v1
         if                       // likely
         t5 = , unsigned  byte [sp + 0x84]

    loc_0x801b2798: // orphan
         t2 = , unsigned  byte [sp + 0x84]
         t3 = t2 | 0x40
         goto 0x801b27b0
         // CODE XREF from fcn.80197624 @ +0xc8
         byte [sp + 0x84] = t3

    loc_0x801b27a8: // orphan
         t6 = t5 | 0x20           // t9
         byte [sp + 0x84] = t6

    loc_0x801b27b0: // orphan
         // CODE XREFS from fcn.801c9dc4 @ 0x801b2784, 0x801b27a0
         if                       // unlikely
         

    loc_0x801b27b8: // orphan
         if                       // unlikely
         a0 = fp

    loc_0x801b27c0: // orphan
         call 0x81801c30          // 0x81801c30(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x98
         if                       // unlikely
         v1 = halfword [sp + 0x74]

    loc_0x801b27d0: // orphan
         t9 = halfword [sp + 0x78]
         v0 = halfword [sp + 0x98]
         t2 = halfword [sp + 0x9c]
         t7 = v1 + t9
         at = , t7 < v0
         if                       // likely
         t3 = v0 + t2

    loc_0x801b27ec: // orphan
         t0 = , unsigned  byte [sp + 0x84] // s4
         t1 = t0 | 0x10           // s4
         goto 0x801b2820
         byte [sp + 0x84] = t1

    loc_0x801b27fc: // orphan
         at = , t3 < v1           // lo
         if                       // unlikely
         t7 = , unsigned  byte [sp + 0x84] // s4

    loc_0x801b2808: // orphan
         t5 = , unsigned  byte [sp + 0x84] // s4
         t6 = t5 | 8              // s4

    loc_0x801b2810: // orphan
         goto 0x801b2820
         byte [sp + 0x84] = t6

    loc_0x801b2818: // orphan
         t8 = t7 | 4
         byte [sp + 0x84] = t8

    loc_0x801b2820: // orphan
         // CODE XREFS from fcn.801c9dc4 @ 0x801b27f4, 0x801b2810
         beql s5, 0, 0x801b2898   // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2828: // orphan
         beql s6, 0, 0x801b2898   // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2830: // orphan
         bgtzl s3, 0x801b2844     // likely
         mtc1 s3, f16

    loc_0x801b2838: // orphan
         blezl s2, 0x801b2898     // likely
         a0 = [s1 + 4]            // t9

    loc_0x801b2840: // orphan
         mtc1 s3, f16

    loc_0x801b2844: // orphan
         mtc1 s2, f18
         t1 = , unsigned  byte [sp + 0x84]
         cvt.s.w f0, f16
         t2 = t1 | 2
         cvt.s.w f2, f18
         mul.s f4, f0, f20
         c.lt.s f4, f2
         
         bc1f 0x801b2874
         
         goto 0x801b2894
         byte [sp + 0x84] = t2

    loc_0x801b2894: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801b286c
         a0 = [s1 + 4]            // t9

    loc_0x801b2898: // orphan
         s1 += 4
         if                       // likely
         

    loc_0x801b28a4: // orphan
         t6 = [sp + 0x84]
         t9 = t6 >> 0x1f
         beql t9, 0, 0x801b28c0   // likely
         t7 = [sp + 0x84]

    loc_0x801b28b4: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa5
         t7 = [sp + 0x84]

    loc_0x801b28c0: // orphan
         t0 = t7 << 1
         bgezl t0, 0x801b28d8     // likely
         t1 = [sp + 0x84]

    loc_0x801b28cc: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa6
         t1 = [sp + 0x84]

    loc_0x801b28d8: // orphan
         t3 = t1 << 2
         bgezl t3, 0x801b28f0     // likely
         t4 = [sp + 0x84]

    loc_0x801b28e4: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa9
         t4 = [sp + 0x84]

    loc_0x801b28f0: // orphan
         t6 = t4 << 3
         bgezl t6, 0x801b2908     // likely
         t9 = [sp + 0x84]

    loc_0x801b28f8: // orphan
         t6 = t4 << 3
         bgezl t6, 0x801b2908     // likely
         t9 = [sp + 0x84]

    loc_0x801b28fc: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa7
         t9 = [sp + 0x84]

    loc_0x801b2908: // orphan
         t8 = t9 << 4
         bgezl t8, 0x801b2920     // likely
         t0 = [sp + 0x84]

    loc_0x801b2914: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa8
         t0 = [sp + 0x84]

    loc_0x801b2920: // orphan
         t2 = t0 << 5
         bgezl t2, 0x801b2938     // unlikely
         t3 = [sp + 0x84]

    loc_0x801b292c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xaa
         t3 = [sp + 0x84]

    loc_0x801b2938: // orphan
         t5 = t3 << 6
         bgezl t5, 0x801b2950     // likely
         t6 = , unsigned  byte [sp + 0x84]

    loc_0x801b2944: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xac
         t6 = , unsigned  byte [sp + 0x84]

    loc_0x801b2950: // orphan
         t9 = t6 & 1              // lo
         beql t9, 0, 0x801b2968   // unlikely
         lwc1 f8, 0x8c, sp

    loc_0x801b295c: // orphan
         call 0x800226c0          // "\u01e8" // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xab
         lwc1 f8, 0x8c, sp

    loc_0x801b2968: // orphan
         swc1 f8, 0x2c, s4
         t7 = [sp + 0x90]         // s4
         [s4 + 0x34] = t7
         t8 = [sp + 0x94]         // lo
         [s4 + 0x30] = t8
         ra = [sp + 0x44]         // s4
         fp = [sp + 0x40]         // s4
         s7 = [sp + 0x3c]
         s6 = [sp + 0x38]
         s5 = [sp + 0x34]         // t9
         s4 = [sp + 0x30]         // a2
         s3 = [sp + 0x2c]         // a2
         s2 = [sp + 0x28]         // a2
         s1 = [sp + 0x24]         // ra
         s0 = [sp + 0x20]         // t9
         ldc1 f20, 0x18, sp
         ret                      // s4
         sp += 0xa0

    loc_0x801b2f20: // orphan
         beql t7, 0, 0x801b2f4c   // likely
         a0 = [sp + 0x24]         // ra

    loc_0x801b2f28: // orphan
         t8 = [v0 + 0x18]         // t9
         at = 0 - 2               // hi
         a1 = [sp + 0x24]         // ra
         beql t8, at, 0x801b2f4c  // unlikely
         a0 = [sp + 0x24]         // ra

    loc_0x801b2f3c: // orphan
         call 0x81804088          // 0x81804088(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 0x20]         // t9
         v1 = 0 + 1               // lo
         a0 = [sp + 0x24]         // ra

    loc_0x801b2f4c: // orphan
         call 0x81804a20          // 0x81804a20(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = v1
         if                       // likely
         v1 = [sp + 0x18]

    loc_0x801b2f5c: // orphan
         v1 = 0 + 1               // lo

    loc_0x801b2f60: // orphan
         ra = [sp + 0x14]         // s4
         sp += 0x20
         v0 = v1
         ret                      // s4
         

    loc_0x801b322c: // orphan
         call 0x81801e3c          // 0x81801e3c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 += 0x48
         if                       // unlikely
         

    loc_0x801b323c: // orphan
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x437f << 16
         mtc1 at, f4
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         mul.s f6, f4, f20
         a2 = 0 + 0xff            // s4
         trunc.w.s f8, f6
         mfc1 a3, f8
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         
         t1 = halfword [s0 + 0]
         if                       // unlikely
         

    loc_0x801b3278: // orphan
         mfc1 a2, f20

    loc_0x801b327c: // orphan
         a0 = s0
         a1 = s2
         call 0x81803558          // 0x81803558(0x104, -1, 0x8, -1)
         a3 = 0
         t2 = halfword [s0 + 0x20]
         s0 += 0x20
         bgezl t2, 0x801b327c     // likely
         mfc1 a2, f20

    loc_0x801b329c: // orphan
         call 0x800499ec          // "R " // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x801b32a4: // orphan
         beql s1, 0, 0x801b32e0   // unlikely
         ra = [sp + 0x34]         // t9

    loc_0x801b32ac: // orphan
         t3 = halfword [s1 + 0]
         bltzl t3, 0x801b32e0     // unlikely
         ra = [sp + 0x34]         // t9

    loc_0x801b32b8: // orphan
         mfc1 a2, f20

    loc_0x801b32bc: // orphan
         a0 = s1
         a1 = s2
         call 0x81803964          // 0x81803964(0x442f71dcfe117dbd, -1, 0x8, -1)
         a3 = 0
         t4 = halfword [s1 + 0x20]
         s1 += 0x20
         bgezl t4, 0x801b32bc     // likely
         mfc1 a2, f20

    loc_0x801b32dc: // orphan
         ra = [sp + 0x34]         // t9

    loc_0x801b32e0: // orphan
         ldc1 f20, 0x20, sp
         s0 = [sp + 0x28]         // a2
         s1 = [sp + 0x2c]         // a2
         s2 = [sp + 0x30]         // a2
         ret                      // ra
         sp += 0x40

    loc_0x801b34fc: // orphan
         
         
         
                                  // t9
         

    loc_0x801b35b8: // orphan
                                  // t9
         

    loc_0x801b3624: // orphan
         
         

    loc_0x801b3680: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         ra = t7 ^ 0xda40

    loc_0x801b3910: // orphan
         daddiu k0, v0, 0x46ff
         

    loc_0x801b3ce4: // orphan
         
         if                       // fcn.801ac1ec+0x11578 // unlikely
         if                       // fcn.801ac1ec+0x1159c // unlikely

    loc_0x801b3df0: // orphan
         if                       // unlikely

    loc_0x801b3f1c: // orphan
         if                       // unlikely
         

    loc_0x801b3f24: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f34: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f54: // orphan
         if                       // unlikely
         

    loc_0x801b3f5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3f98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3fa4: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801b3fd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b4684: // orphan
         cvt.s.w f6, f4
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8
         t2 = , unsigned  byte [s1 + 0x42] // s4
         at = 0x4270 << 16
         mtc1 at, f10
         mtc1 t2, f18
         div.s f16, f6, f10
         if                       // likely
         cvt.s.w f4, f18

    loc_0x801b46b4: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x801b46c4: // orphan
         add.s f6, f4, f16

    loc_0x801b46c8: // orphan
         at = 0x4140 << 16
         mtc1 at, f10
         at = fcn.83200000 << 16
         lwc1 f8, 0xda4, at
         div.s f18, f6, f10
         t3 = 0 + 1               // lo
         [sp + 0x10] = t3
         mul.s f4, f18, f8
         mfc1 a3, f4
         call fcn.83200078
         
         call 0x81801fa0          // 0x81801fa0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x48
         t4 = , unsigned  byte [s1 + 0x43] // s4
         a1 = halfword [s0 + 0]
         a2 = halfword [s0 + 2]
         mtc1 t4, f16
         at = 0x4270 << 16
         mtc1 at, f0
         a0 = v0                  // s4
         a1 += 0x48
         a2 += 0x34

    loc_0x801b4b78: // orphan
         call 0x800082e0          // 0x800082e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(-1, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = 0 + 0x10f
         call 0x8004c4b0          // 0x8004c4b0(0x10f, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = 0 + 0x3d
         call 0x8004c4b0          // 0x8004c4b0(0x3d, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = 0 + 0x3c
         call 0x8004c8c0          // 0x8004c8c0(0x3c, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = 0 + 0x151
         a0 = 0 + 0x1c
         call 0x80047588          // 0x80047588(0x1c, 0x442f71dcfe116408, 0x8, 0x0)
         a1 = 0
         a0 = fcn.83200000 << 16
         a1 = fcn.83200000 << 16
         a1 = [a1 + 0xdf8]
         call fcn.83200744
         a0 += 0xdb0
         a1 = fcn.83200000 << 16
         a1 += 0xd88
         call 0x8004c54c          // 0x8004c54c(0x83200db0, 0x83200d88, 0x8, 0x0)
         a0 = 0 + 0x15
         a1 = fcn.83200000 << 16
         a1 += 0xd90
         call 0x8004c54c          // 0x8004c54c(0x15, 0x83200d90, 0x8, 0x0)
         a0 = 0 + 0x46
         call 0x80008514          // 0x80008514(0x46, 0x83200d90, 0x8, 0x0)
         a0 = [sp + 0x24]         // s4
         call 0x800086a4          // 0x800086a4(0xff, 0x83200d90, 0x8, 0x0)
         a0 = 0 + 2
         call 0x80007aec          // 0x80007aec(0x2, 0x83200d90, 0x8, 0x0)
         a0 = 0 + 1               // lo
         call 0x81801794          // 0x81801794(0x1, 0x83200d90, 0x8, 0x0)
         
         ra = [sp + 0x1c]
         sp += 0x28
         ret
         

    loc_0x801b4c64: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x5052             // t9
         a0 = [sp + 0x18]         // v1
         call fcn.8320097c
         a1 = [sp + 0x1c]
         a0 = [sp + 0x18]         // v1
         call 0x8320092c          // 0x8320092c(0x220, 0xfe117dbd, 0x8, -1)
         a1 = [sp + 0x1c]
         a0 = [sp + 0x18]         // v1
         call 0x83200a84          // 0x83200a84(0x220, 0xfe117dbd, 0x8, -1)
         a1 = [sp + 0x1c]
         a0 = 0x5744 << 16
         call 0x80002bf8          // 0x80002bf8(0x57440000, 0xfe117dbd, 0x8, -1)
         a0 |= 0x5052
         ra = [sp + 0x14]         // s4
         sp += 0x18
         v0 = 0
         ret                      // s4
         

    loc_0x801b5a60: // orphan
         [t4 + 0x10] = t9
         t2 = [t0 + 4]
         goto fcn.801b5b70        // fcn.801b5b70(-1, 0x442f71dcfe116408)
         [t4 + 0x14] = t2

    loc_0x801b5b0c: // orphan
         a1 = 0 + 1               // arg2 // lo
         [t1 + 0x10] = t4
         t0 = [t2 + 4]            // t9
         goto fcn.801b5b70        // fcn.801b5b70(-1, 0x1)
         [t1 + 0x14] = t0

    loc_0x801b5b3c: // orphan
         t9 = [t8 + 0x88]
         t8 += 0xc                // t1
         t6 += 0xc
         [t6 + 4] = t9
         t3 = [t8 + 0x80]         // t9
         [t6 + 8] = t3
         t9 = [t8 + 0x84]

    loc_0x801b5b58: // orphan
         if                       // likely
         [t6 + 0xc] = t9

    loc_0x801b5b60: // orphan
         t9 = [t8 + 0x88]
         [t6 + 0x10] = t9
         t3 = [t8 + 0x8c]         // t9
         [t6 + 0x14] = t3

    loc_0x801b5c50: // orphan
         t7 = 0 + 0x1e0

    loc_0x801b5c54: // orphan
         [sp + 0x10] = t7
         a1 = 0
         a2 = 0
         call fcn.81600f0c
         a3 = 0 + 0x280
         a0 = [sp + 0x20]         // t9
         a1 = [sp + 0x24]         // s4
         call 0x818057d0          // 0x818057d0(-1, 0xff, 0x0, 0x280)
         a2 = [sp + 0x28]
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x801b5d0c: // orphan
         call fcn.81600f0c
         a3 = 0 + 0x280
         call 0x81700908          // 0x81700908(-1, 0x442f71dcfe116408, 0x8, 0x280)
         
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x801c5f90: // orphan
         
         

    loc_0x801c6310: // orphan
                                  // s1
         
                                  // s2
         
                                  // t9
         
         sd ra
         
         
         
         
         
         

    loc_0x801c6764: // orphan
         sd ra
         
                                  // s4
         
                                  // t9
         
                                  // s2
         
                                  // t9
         
         sd ra
         
         
         
         
         
         

    loc_0x801c6c10: // orphan
         
         
         
         
         
         
         

    loc_0x801c6c38: // orphan
         
         
         
         movf 0, s0, fcc0

    loc_0x801c6f84: // orphan
         
         
         
         
         
         
         
         
         
         tne a3, a1

    loc_0x801c6fe0: // orphan
         

    loc_0x801c705c: // orphan
         
         
         
         
         
         
         
         
         
         tne a3, a1

    loc_0x801c7474: // orphan
         // CODE XREF from fcn.801a7dac @ +0x9c
         
         

    loc_0x801c7560: // orphan
         
         
         
         

    loc_0x801c9dc4: // orphan
           // CALL XREF from fcn.8220f1d4 @ +0x170
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // fcn.801e7dfc // unlikely

    loc_0x801c9df0: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x801c9e10: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.801e95a8+0x20 // unlikely
         if                       // fcn.801e95a8+0x34 // unlikely

    loc_0x801c9e50: // orphan
         
         
         if                       // fcn.801e95a8+0x194 // unlikely
         if                       // unlikely

    loc_0x801c9e64: // orphan
         if                       // fcn.801e95a8+0x230 // unlikely
         if                       // unlikely

    loc_0x801c9e70: // orphan
         if                       // unlikely
         

    loc_0x801c9e78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9e84: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9ea0: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x801c9eb8: // orphan
         
         
         if                       // fcn.801aa5d0+0x2c4 // unlikely
         

    loc_0x801c9ec8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9ed8: // orphan
         
         
         if                       // unlikely
         

    loc_0x801c9ee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9ef4: // orphan
         if                       // fcn.801abd78+0xb0 // unlikely
         if                       // unlikely

    loc_0x801c9f00: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9f10: // orphan
         if                       // fcn.801ac198+0x2c // unlikely
         if                       // fcn.801ac1ec+0x14c // unlikely

    loc_0x801c9f1c: // orphan
         
         
         if                       // unlikely
         

    loc_0x801c9f2c: // orphan
         
         if                       // unlikely
         

    loc_0x801c9f38: // orphan
         
         
         if                       // fcn.801abd78+0xdcc // unlikely
         if                       // unlikely

    loc_0x801c9f4c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9f5c: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801c9f8c: // orphan
         if                       // fcn.801ad5a4+0x3c // unlikely
         if                       // fcn.801ad5a4+0x50 // unlikely

    loc_0x801c9f98: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x801c9fbc: // orphan
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x801e880c: // orphan
         a2 = , unsigned  halfword [v0 + 8]
         [sp + 0x30] = a1
         call fcn.816092fc        // fcn.816092fc(-1)
         halfword [sp + 0x2e] = a2
         a1 = [sp + 0x30]
         a2 = , unsigned  halfword [sp + 0x2e]
         t6 = byte [a1 + 0x11]    // s4
         mtc1 t6, f4
         
         cvt.s.w f6, f4
         sub.s f8, f6, f0
         trunc.w.s f10, f8
         mfc1 t8, f10
         
         byte [a1 + 0x11] = t8
         t9 = byte [a1 + 0x11]    // s4
         bgtzl t9, 0x801e886c     // likely
         v1 = byte [a1 + 0xe]     // s4

    loc_0x801e8854: // orphan
         call fcn.814028f0
         [sp + 0x30] = a1
         a1 = [sp + 0x30]
         a2 = 0 | 0x8000
         byte [a1 + 0x11] = v0
         v1 = byte [a1 + 0xe]     // s4

    loc_0x801e886c: // orphan
         at = 0x4180 << 16
         mtc1 at, f16
         at = 0 + 1               // lo
         if                       // unlikely
         swc1 f16, 4, a1

    loc_0x801e8880: // orphan
         if                       // likely
         t4 = a2 & 0x4000

    loc_0x801e8888: // orphan
         t0 = a2 & 0x800
         if                       // likely
         v0 = a2

    loc_0x801e8894: // orphan
         t1 = byte [a1 + 0x10]    // s4
         a0 = 0 + 1               // lo
         blezl t1, 0x801e8904     // unlikely
         t5 = v0 & 0x8000

    loc_0x801e88a4: // orphan
         [sp + 0x18] = a2
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a1
         a1 = [sp + 0x30]
         v0 = [sp + 0x18]         // a2
         byte [a1 + 0x10] = 0
         goto 0x801e8900
         v1 = byte [a1 + 0xe]     // s4

    loc_0x801e88c4: // orphan
         t2 = v0 & 0x400
         beql t2, 0, 0x801e8904   // likely
         t5 = v0 & 0x8000

    loc_0x801e88d0: // orphan
         t3 = byte [a1 + 0x10]    // s4
         a0 = 0 + 1               // lo
         bgtzl t3, 0x801e8904     // likely
         t5 = v0 & 0x8000

    loc_0x801e88e0: // orphan
         [sp + 0x18] = v0
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a1
         a1 = [sp + 0x30]
         v0 = [sp + 0x18]         // s4
         t4 = 0 + 1               // lo
         byte [a1 + 0x10] = t4
         v1 = byte [a1 + 0xe]     // s4

    loc_0x801e8900: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801e88bc
         t5 = v0 & 0x8000

    loc_0x801e8904: // orphan
         if                       // unlikely
         t9 = v0 & 0x4000

    loc_0x801e890c: // orphan
         at = , unsigned  , v1 < 5
         if                       // likely
         t6 = v1 << 2

    loc_0x801e8918: // orphan
         at = fcn.81400000 << 16
         at += t6
         t6 = [at + 0x7ab4]
         goto t6
         

    loc_0x801e8964: // orphan
         t8 = 0 + 3
         byte [a1 + 0xc] = t8
         goto 0x801e8a30
         v1 = byte [a1 + 0xe]     // s4

    loc_0x801e8974: // orphan
         if                       // unlikely
         t0 = 0 - 2               // hi

    loc_0x801e897c: // orphan
         at = , unsigned  , v1 < 5
         if                       // likely
         byte [a1 + 0x10] = t0

    loc_0x801e8988: // orphan
         t1 = v1 << 2
         at = fcn.81400000 << 16
         at += t1
         t1 = [at + 0x7ac8]
         goto t1
         

    loc_0x801e89e0: // orphan
         at = 0x4180 << 16
         mtc1 at, f18
         t3 = 0 + 3
         byte [a1 + 0xc] = t3
         v1 = byte [a1 + 0xe]     // s4
         goto 0x801e8a30
         swc1 f18, 4, a1

    loc_0x801e89fc: // orphan
         if                       // unlikely
         a0 = 0 + 0xa2

    loc_0x801e8a04: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a1
         a1 = [sp + 0x30]
         at = 0x4180 << 16
         mtc1 at, f4
         t5 = 0 - 2               // hi
         t6 = 0 + 3
         byte [a1 + 0x10] = t5
         byte [a1 + 0xc] = t6
         v1 = byte [a1 + 0xe]     // s4
         swc1 f4, 4, a1

    loc_0x801e8a30: // orphan
         // CODE XREFS from fcn.801c9dc4 @ 0x801e896c, 0x801e89f4
         ra = [sp + 0x14]         // s4
         v0 = v1 ^ 2
         v0 = , unsigned  , 0 < v0 // lo
         ret                      // s4
         sp += 0x30

    loc_0x801e9750: // orphan
         call 0x81404d00          // 0x81404d00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         [sp + 0x28] = v0
         call fcn.814028f0
         [sp + 0x24] = v0
         a2 = [sp + 0x24]         // s4
         byte [s0 + 0x11] = v0
         t9 = [sp + 0x28]         // s4
         t0 = s0 + t9
         byte [t0 + 0xa] = a2
         a1 = , unsigned  byte [s0 + 7]
         call fcn.81403918
         a0 = [s0 + 0x3c]         // t9
         call 0x800226c0          // 0x800226c0(-1, 0x5f, 0xff, -1)
         a0 = 0 + 2               // arg1

    loc_0x801e981c: // orphan
         call fcn.814049cc
         [sp + 0x24] = t6
         t7 = [sp + 0x28]         // s4
         t8 = byte [s0 + 0x12]    // s4
         v1 = v0                  // s4
         a0 = s0 + 0x24

    loc_0x801e9834: // orphan
         at = , t7 < t8           // lo
         if                       // unlikely
         a2 = 0

    loc_0x801e9840: // orphan
         t9 = 0 + 2
         byte [s0 + 6] = t9
         call fcn.814046c4        // fcn.814046c4(-1)
         a0 = s0 + 0x24
         goto 0x801e9904
         v0 = 0

    loc_0x801e9858: // orphan
         t0 = [s0 + 0x14]         // t9
         a1 = 0
         if                       // unlikely
         

    loc_0x801e9868: // orphan
         goto 0x801e9870
         a1 = 0 + 1               // lo

    loc_0x801e9870: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801e9868
         call fcn.8140463c
         [sp + 0x20] = v1
         v1 = [sp + 0x20]
         t1 = 0 - 1               // s2
         byte [s0 + 0x10] = t1
         if                       // unlikely
         at = 0 + 2

    loc_0x801e988c: // orphan
         t2 = , unsigned  halfword [v1 + 6]
         t4 = 0 + 1               // lo
         t3 = t2 & 0x10
         beql t3, 0, 0x801e98ac   // unlikely
         [s0 + 0x18] = 0

    loc_0x801e98a0: // orphan
         goto 0x801e98ac
         [s0 + 0x18] = t4

    loc_0x801e98a8: // orphan
         [s0 + 0x18] = 0

    loc_0x801e98ac: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801e98a0
         if                       // unlikely
         

    loc_0x801e98b4: // orphan
         bnel v0, at, 0x801e98d4  // likely
         at = 0 + 1               // lo

    loc_0x801e98bc: // orphan
         call fcn.81403938        // "$\r"
         a0 = [s0 + 0x3c]         // t9
         t5 = 0 + 2
         goto 0x801e98e0
         byte [s0 + 6] = t5

    loc_0x801e98d4: // orphan
         if                       // likely
         t6 = 0 + 5

    loc_0x801e98dc: // orphan
         byte [s0 + 6] = t6

    loc_0x801e98e0: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801e98c8
         a1 = [s0 + 0x14]         // t9
         t7 = [sp + 0x24]
         a1 = , unsigned  , a1 < 1
         bnel a1, 0, 0x801e9904   // unlikely
         v0 = a1

    loc_0x801e98f4: // orphan
         t8 = [s0 + 0x18]
         a1 = t7 ^ t8
         a1 = , unsigned  , 0 < a1

    loc_0x801e9900: // orphan
         v0 = a1                  // t0

    loc_0x801e9904: // orphan
         // CODE XREF from fcn.801c9dc4 @ 0x801e9850
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]         // s4
         sp += 0x30
         ret
         

    loc_0x801e9e0c: // orphan
         a0 = s0
         beql t5, 0, 0x801e9e28   // unlikely
         t6 = , unsigned  byte [s0 + 6]

    loc_0x801e9e18: // orphan
         call fcn.814054cc        // fcn.814054cc(-1)
         a1 = [sp + 0x5c]
         v0 = byte [s0 + 9]       // t3
         t6 = , unsigned  byte [s0 + 6]

    loc_0x801e9e28: // orphan
         at = , v0 < 2
         beql t6, 0, 0x801e9eac   // unlikely
         at = , v0 < 2

    loc_0x801e9e34: // orphan
         if                       // likely
         a0 = s0

    loc_0x801e9e3c: // orphan
         a1 = [sp + 0x5c]
         call fcn.814053e4
         a2 = [sp + 0x54]

    loc_0x801e9e48: // orphan
         a0 = s0
         a1 = sp + 0x38           // arg2
         call 0x8140487c          // 0x8140487c(0x104, 0x178038, 0x8, -1)
         a2 = 0
         t7 = halfword [sp + 0x3a]
         t8 = halfword [sp + 0x3c]
         t9 = halfword [sp + 0x3e]
         a0 = [sp + 0x5c]
         a1 = s0
         a2 = [sp + 0x54]
         a3 = halfword [sp + 0x38]
         [sp + 0x10] = t7
         [sp + 0x14] = t8
         call 0x81600a34          // 0x81600a34(0x0, 0x104, 0xfffffe11, 0x0)
         [sp + 0x18] = t9
         v0 = byte [s0 + 9]       // t3
         a0 = s0
         a1 = [sp + 0x5c]
         at = , v0 < 2
         beql at, 0, 0x801e9eac   // likely
         at = , v0 < 2

    loc_0x801e9e9c: // orphan
         call fcn.814053e4
         a2 = [sp + 0x54]
         v0 = byte [s0 + 9]       // t3
         at = , v0 < 2

    loc_0x801e9eac: // orphan
         if                       // likely
         a0 = s0

    loc_0x801e9eb4: // orphan
         t0 = [s0 + 0x14]         // t9
         bnel t0, 0, 0x801e9ecc   // likely
         ra = [sp + 0x2c]

    loc_0x801e9ec0: // orphan
         call fcn.814054cc        // fcn.814054cc(-1)
         a1 = [sp + 0x5c]
         ra = [sp + 0x2c]

    loc_0x801e9ecc: // orphan
         s0 = [sp + 0x28]         // s4
         sp += 0x58
         ret                      // ra
         

}

*/
