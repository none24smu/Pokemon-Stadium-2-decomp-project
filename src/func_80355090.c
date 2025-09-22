/*
 * Function: 0x80355090
 * ROM Offset: 0x00256090
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80355090 (int esi, int edx) {
if            // unlikely
if            // likely
if            // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
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
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
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
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
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
int fcn.80355090 (int esi, int edx) {
    loc_0x8034682c:
        t8 = t7 - s0
        t9 = t8 + 9
        div 0, t9, s2
        t6 = hi
        t7 = t6 << 2
        t7 -= t6
        t7 <<= 3
        t1 = s1 + t7
        lwc1 f4, 0x10, t1
        if            // unlikely
        0x80346854
            
    loc_0x8034685c:
        at = 0 - 1
        if            // likely
        at = 0x8000 << 16
            
    loc_0x80346874:
        c.le.s f4, f14
        0x80346878
        bc1tl 0x80346d54
        s0 += 1
        div.s f6, f16, f2
        a0 = [t3 + 0]
        t6 = 0xee00 << 16
        t8 = 0 + 1
        t9 = a0 + 8   // arg1
        [t3 + 0] = t9
        [a0 + 0] = t6 // arg1
        lwc1 f10, 8, t1
        at = 0x4f00 << 16
        t9 = 0xfa00 << 16
        a1 = 0
        trunc.w.s f8, f6
        cfc1 t7, 31
        ctc1 t8, 31
        mfc1 a3, f8
        cvt.w.s f4, f10
        t5 = a3 << 0x10 // arg4
        t5 = , signed  t5 >> 0x10
        cfc1 t8, 31
        0x803468d0
        t8 &= 0x78
        beql t8, 0, 0x80346928 // likely
        mfc1 t8, f4
            
    loc_0x80346928:
        0x80346928
        if            // unlikely
        0x80346930
            
    loc_0x8034691c:
        goto 0x80346934
        t8 = 0 - 1
    loc_0x80346858: // orphan
             break 7

    loc_0x80346868: // orphan
         if                       // unlikely
         

    loc_0x80346870: // orphan
         break 6

    loc_0x803468e0: // orphan
         mtc1 at, f4
         t8 = 0 + 1
         sub.s f4, f10, f4
         ctc1 t8, 31
         
         cvt.w.s f4, f4
         cfc1 t8, 31
         
         t8 &= 0x78
         if                       // unlikely
         

    loc_0x8034690c: // orphan
         mfc1 t8, f4
         at = 0x8000 << 16
         goto 0x80346934
         t8 |= at

    loc_0x80346934: // orphan
         ctc1 t7, 31
         t6 = t8 & 0x7fff
         t7 = t6 << 0x10
         [a0 + 4] = t7            // arg1
         v1 = [t3 + 0]
         t9 |= 0xffff
         mtc1 s0, f6
         t8 = v1 + 8
         [t3 + 0] = t8
         [v1 + 0] = t9
         t6 = [t1 + 0xc]
         t8 = 0x8601 << 16
         t8 -= 0x2e60
         t7 = t6 << 3
         v0 = t7 + t8
         t8 = , unsigned  byte [v0 + 8]
         t6 = , unsigned  byte [v0 + 0xb]
         cvt.s.w f8, f6
         t9 = t8 << 0x18
         t7 = t6 | t9
         t6 = , unsigned  byte [v0 + 9]
         at = 0x4120 << 16
         mtc1 at, f10
         t9 = t6 << 0x10
         t8 = t7 | t9
         div.s f4, f8, f10
         t7 = , unsigned  byte [v0 + 0xa]
         at = 0x4f80 << 16
         t9 = t7 << 8
         t6 = t8 | t9
         [v1 + 4] = t6
         a2 = [t3 + 0]
         t8 = 0xfb00 << 16
         t7 = a2 + 8              // arg3
         [t3 + 0] = t7
         [a2 + 0] = t8            // arg3
         t9 = [t1 + 0xc]
         t7 = 0x8601 << 16
         t7 -= 0x2e60
         t6 = t9 << 3
         v0 = t6 + t7
         t8 = , unsigned  byte [v0 + 0xf]
         mtc1 t8, f8
         sub.s f6, f18, f4
         if                       // likely
         cvt.s.w f10, f8

    loc_0x803469ec: // orphan
         mtc1 at, f4
         
         add.s f10, f10, f4

    loc_0x803469f8: // orphan
         mul.s f8, f10, f6
         lwc1 f4, 0x14, t1
         t6 = 0 + 1
         at = 0x4f00 << 16
         mul.s f10, f8, f4
         cfc1 t9, 31
         ctc1 t6, 31
         
         cvt.w.s f6, f10
         cfc1 t6, 31
         
         t6 &= 0x78
         beql t6, 0, 0x80346a78   // likely
         mfc1 t6, f6

    loc_0x80346a30: // orphan
         mtc1 at, f6
         t6 = 0 + 1
         sub.s f6, f10, f6
         ctc1 t6, 31
         
         cvt.w.s f6, f6
         cfc1 t6, 31
         
         t6 &= 0x78
         if                       // unlikely
         

    loc_0x80346a5c: // orphan
         mfc1 t6, f6
         at = 0x8000 << 16
         goto 0x80346a84
         t6 |= at

    loc_0x80346a6c: // orphan
         goto 0x80346a84
         t6 = 0 - 1

    loc_0x80346a78: // orphan
         
         if                       // unlikely
         

    loc_0x80346a84: // orphan
         ctc1 t9, 31
         t9 = , unsigned  byte [v0 + 0xc]
         t7 = t6 & 0xff
         ra = a3 << 0x10          // arg4
         t6 = t9 << 0x18
         t8 = t7 | t6
         t7 = , unsigned  byte [v0 + 0xd]
         ra = , signed  ra >> 0x10
         t0 = ra & 0xffff
         t6 = t7 << 0x10
         t9 = t8 | t6
         t8 = , unsigned  byte [v0 + 0xe]
         v0 = 0
         at = 0xe400 << 16
         t6 = t8 << 8
         t7 = t9 | t6
         [a2 + 4] = t7            // arg3
         t4 = [t3 + 0]
         t6 = t0 << 0x10
         t7 = t6 | t0
         t8 = t4 + 8
         [t3 + 0] = t8
         lwc1 f8
         [sp + 0x2c] = t7
         a2 = 0
         add.s f4, f8, f2
         mul.s f10, f4, f12
         trunc.w.s f6, f10
         mfc1 t2, f6
         
         t2 <<= 0x10
         t2 = , signed  t2 >> 0x10
         if                       // likely
         

    loc_0x80346b0c: // orphan
         goto 0x80346b14
         a1 = t2

    loc_0x80346b14: // orphan
         lwc1 f8, 4, t1
         t7 = a1 & 0xfff          // arg2
         t8 = t7 << 0xc
         add.s f4, f8, f2
         a1 = 0
         mul.s f10, f4, f12
         trunc.w.s f6, f10
         mfc1 v1, f6
         
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // likely
         

    loc_0x80346b48: // orphan
         goto 0x80346b50
         v0 = v1

    loc_0x80346b50: // orphan
         t9 = v0 & 0xfff
         t6 = t9 | at
         t9 = t6 | t8
         [t4 + 0] = t9
         lwc1 f8
         v0 = 0
         sub.s f4, f8, f2
         mul.s f10, f4, f12
         trunc.w.s f6, f10
         mfc1 a0, f6
         
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         if                       // likely
         

    loc_0x80346b8c: // orphan
         goto 0x80346b94
         a1 = a0

    loc_0x80346b94: // orphan
         lwc1 f8, 4, t1
         t9 = a1 & 0xfff          // arg2
         t7 = t9 << 0xc
         sub.s f4, f8, f2
         mul.s f10, f4, f12
         trunc.w.s f6, f10
         mfc1 v1, f6
         
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // likely
         

    loc_0x80346bc4: // orphan
         goto 0x80346bcc
         v0 = v1

    loc_0x80346bcc: // orphan
         t8 = v0 & 0xfff
         t6 = t8 | t7
         [t4 + 4] = t6
         a3 = [t3 + 0]
         t8 = 0xe100 << 16
         t9 = a3 + 8              // arg4
         [t3 + 0] = t9
         [a3 + 0] = t8            // arg4
         lwc1 f8
         sub.s f4, f8, f2
         mul.s f10, f4, f12
         trunc.w.s f6, f10
         mfc1 a0, f6
         
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         if                       // likely
         

    loc_0x80346c14: // orphan
         if                       // likely
         

    loc_0x80346c1c: // orphan
         unsigned , hi
         v1 = 0
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x80346c34: // orphan
         goto 0x80346c70
         a2 = v0

    loc_0x80346c3c: // orphan
         goto 0x80346c70
         a2 = v1

    loc_0x80346c44: // orphan
         unsigned , hi
         v1 = 0
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x80346c5c: // orphan
         goto 0x80346c64
         v1 = v0

    loc_0x80346c64: // orphan
         v0 = v1
         goto 0x80346c70
         a2 = v0

    loc_0x80346c70: // orphan
         lwc1 f8, 4, t1
         v0 = 0
         sub.s f4, f8, f2
         mul.s f0, f4, f12
         c.lt.s f0, f14
         
         bc1f 0x80346d18
         
         bgezl ra, 0x80346cdc     // likely
         trunc.w.s f6, f0

    loc_0x80346c98: // orphan
         trunc.w.s f10, f0
         v1 = 0
         a1 = v1
         mfc1 t9, f10
         
         t8 = t9 << 0x10
         t7 = , signed  t8 >> 0x10
         unsigned , hi
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x80346cc8: // orphan
         goto 0x80346d18
         a1 = v0

    loc_0x80346cd0: // orphan
         goto 0x80346d18
         v0 = v1

    loc_0x80346cdc: // orphan
         v1 = 0
         mfc1 t9, f6
         

    loc_0x80346ce8: // orphan
         t8 = t9 << 0x10
         t7 = , signed  t8 >> 0x10
         unsigned , hi
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x80346d04: // orphan
         goto 0x80346d0c
         v1 = v0

    loc_0x80346d0c: // orphan
         a1 = v1
         goto 0x80346d18
         v0 = a1

    loc_0x80346d18: // orphan
         t6 = ~v0
         t9 = t6 & 0xffff
         t7 = ~a2
         t6 = t7 << 0x10
         t8 = t9 | t6

    loc_0x80346d2c: // orphan
         [a3 + 4] = t8            // arg4
         v1 = [t3 + 0]

    loc_0x80346d34: // orphan
         t9 = 0xf100 << 16
         t7 = v1 + 8
         [t3 + 0] = t7
         [v1 + 0] = t9
         t6 = [sp + 0x2c]
         a0 = v1
         [v1 + 4] = t6
         s0 += 1
         at = , s0 < 0xa
         bnel at, 0, 0x8034682c   // likely
         t7 = [s1 + 0xf0]

    loc_0x80346d60: // orphan
         v1 = [t3 + 0]
         t7 = 0xfb00 << 16
         t9 = 0 - 0x80
         t8 = v1 + 8
         [t3 + 0] = t8
         [v1 + 4] = t9
         [v1 + 0] = t7
         v0 = v1
         v1 = [t3 + 0]
         t8 = 0xfa00 << 16
         at = 0x40c0 << 16
         t6 = v1 + 8
         [t3 + 0] = t6
         t8 |= 0xffff
         t7 = 0 - 1
         mtc1 at, f2
         s0 = 0
         ra = 0 - 0x100
         [v1 + 4] = t7
         [v1 + 0] = t8
         a0 = v1
         t9 = [s1 + 0xf0]

    loc_0x80346db8: // orphan
         t6 = t9 - s0
         t8 = t6 + 9
         div 0, t8, s2
         t7 = hi
         t9 = t7 << 2
         t9 -= t7
         t9 <<= 3
         t0 = s1 + t9
         lwc1 f8, 0x10, t0
         if                       // unlikely
         

    loc_0x80346de4: // orphan
         break 7

    loc_0x80346de8: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x80346df4: // orphan
         if                       // unlikely
         

    loc_0x80346dfc: // orphan
         break 6

    loc_0x80346e00: // orphan
         c.le.s f8, f14
         
         bc1tl 0x80347238
         s0 += 1
         div.s f4, f16, f2
         v0 = [t3 + 0]
         t7 = 0xee00 << 16
         t6 = 0 + 1
         t8 = v0 + 8
         [t3 + 0] = t8
         [v0 + 0] = t7
         lwc1 f6, 8, t0
         at = 0x4f00 << 16
         trunc.w.s f10, f4
         cfc1 t9, 31
         ctc1 t6, 31
         mfc1 a1, f10
         cvt.w.s f8, f6
         t2 = a1 << 0x10          // arg2
         t2 = , signed  t2 >> 0x10
         cfc1 t6, 31
         
         t6 &= 0x78
         beql t6, 0, 0x80346eac   // likely
         mfc1 t6, f8

    loc_0x80346e64: // orphan
         mtc1 at, f8
         t6 = 0 + 1
         sub.s f8, f6, f8
         ctc1 t6, 31
         
         cvt.w.s f8, f8
         cfc1 t6, 31
         
         t6 &= 0x78
         if                       // unlikely
         

    loc_0x80346e90: // orphan
         mfc1 t6, f8
         at = 0x8000 << 16
         goto 0x80346eb8
         t6 |= at

    loc_0x80346ea0: // orphan
         goto 0x80346eb8
         t6 = 0 - 1

    loc_0x80346eac: // orphan
         
         if                       // unlikely
         

    loc_0x80346eb8: // orphan
         ctc1 t9, 31
         mtc1 s0, f4
         at = 0x4120 << 16
         mtc1 at, f6
         cvt.s.w f10, f4
         t7 = t6 & 0x7fff
         t9 = t7 << 0x10
         at = 0x4300 << 16
         [v0 + 4] = t9
         a0 = [t3 + 0]
         div.s f8, f10, f6
         mtc1 at, f10
         t6 = a0 + 8              // arg1
         [t3 + 0] = t6
         t8 = 0xfb00 << 16
         [a0 + 0] = t8            // arg1
         t9 = 0 + 1
         at = 0x4f00 << 16
         v0 = 0
         sub.s f4, f18, f8
         lwc1 f8, 0x14, t0
         mul.s f6, f4, f10

    loc_0x80346f10: // orphan
         
         mul.s f4, f6, f8
         cfc1 t7, 31
         ctc1 t9, 31
         
         cvt.w.s f10, f4
         cfc1 t9, 31
         
         t9 &= 0x78
         if                       // likely
         

    loc_0x80346f3c: // orphan
         mtc1 at, f10
         t9 = 0 + 1
         sub.s f10, f4, f10
         ctc1 t9, 31
         
         cvt.w.s f10, f10
         cfc1 t9, 31
         
         t9 &= 0x78
         if                       // unlikely
         

    loc_0x80346f68: // orphan
         mfc1 t9, f10
         at = 0x8000 << 16
         goto 0x80346f90
         t9 |= at

    loc_0x80346f78: // orphan
         goto 0x80346f90
         t9 = 0 - 1

    loc_0x80346f80: // orphan
         mfc1 t9, f10
         
         if                       // unlikely
         

    loc_0x80346f90: // orphan
         t6 = t9 & 0xff
         t8 = t6 | ra
         [a0 + 4] = t8            // arg1
         t1 = [t3 + 0]
         ctc1 t7, 31
         t4 = a1 << 0x10          // arg2
         t7 = t1 + 8
         [t3 + 0] = t7
         lwc1 f6
         t4 = , signed  t4 >> 0x10
         a2 = t4 & 0xffff         // arg3
         add.s f8, f6, f2
         t6 = a2 << 0x10          // arg3
         t5 = t6 | a2             // arg3

    loc_0x80346fc8: // orphan
         a2 = 0
         mul.s f4, f8, f12
         a1 = 0
         at = 0xe400 << 16
         trunc.w.s f10, f4
         mfc1 a3, f10
         
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         if                       // likely
         

    loc_0x80346ff4: // orphan
         goto 0x80346ffc
         a1 = a3

    loc_0x80346ffc: // orphan
         lwc1 f6, 4, t0
         t6 = a1 & 0xfff          // arg2
         t8 = t6 << 0xc
         add.s f8, f6, f2
         a1 = 0
         mul.s f4, f8, f12
         trunc.w.s f10, f4
         mfc1 v1, f10
         
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // likely
         

    loc_0x80347030: // orphan
         goto 0x80347038
         v0 = v1

    loc_0x80347038: // orphan
         t7 = v0 & 0xfff
         t9 = t7 | at
         t7 = t9 | t8
         [t1 + 0] = t7
         lwc1 f6
         v0 = 0
         sub.s f8, f6, f2
         mul.s f4, f8, f12
         trunc.w.s f10, f4
         mfc1 a0, f10
         
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         if                       // likely
         

    loc_0x80347074: // orphan
         goto 0x8034707c
         a1 = a0

    loc_0x8034707c: // orphan
         lwc1 f6, 4, t0
         t7 = a1 & 0xfff          // arg2
         t6 = t7 << 0xc
         sub.s f8, f6, f2
         mul.s f4, f8, f12
         trunc.w.s f10, f4
         mfc1 v1, f10
         
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // likely
         

    loc_0x803470ac: // orphan
         goto 0x803470b4
         v0 = v1

    loc_0x803470b4: // orphan
         t8 = v0 & 0xfff
         t9 = t8 | t6
         [t1 + 4] = t9
         a3 = [t3 + 0]
         t8 = 0xe100 << 16
         t7 = a3 + 8              // arg4
         [t3 + 0] = t7

    loc_0x803470d0: // orphan
         [a3 + 0] = t8            // arg4
         lwc1 f6
         sub.s f8, f6, f2
         mul.s f4, f8, f12
         trunc.w.s f10, f4
         mfc1 a0, f10
         
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         if                       // likely
         

    loc_0x803470fc: // orphan
         if                       // likely
         

    loc_0x80347104: // orphan
         unsigned , hi
         v1 = 0
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x8034711c: // orphan
         goto 0x80347158
         a2 = v0

    loc_0x80347124: // orphan
         goto 0x80347158
         a2 = v1

    loc_0x8034712c: // orphan
         unsigned , hi
         v1 = 0
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x80347144: // orphan
         goto 0x8034714c
         v1 = v0

    loc_0x8034714c: // orphan
         v0 = v1
         goto 0x80347158
         a2 = v0

    loc_0x80347158: // orphan
         lwc1 f6, 4, t0
         v0 = 0
         sub.s f8, f6, f2
         mul.s f0, f8, f12
         c.lt.s f0, f14
         
         bc1f 0x80347200
         
         bgezl t4, 0x803471c4     // likely
         trunc.w.s f10, f0

    loc_0x80347180: // orphan
         trunc.w.s f4, f0
         v1 = 0
         a1 = v1
         mfc1 t7, f4
         
         t8 = t7 << 0x10
         t6 = , signed  t8 >> 0x10
         unsigned , hi
         v0 = lo

    loc_0x803471a4: // orphan
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x803471b0: // orphan
         goto 0x80347200
         a1 = v0

    loc_0x803471b8: // orphan
         goto 0x80347200
         v0 = v1

    loc_0x803471c4: // orphan
         v1 = 0
         mfc1 t7, f10
         
         t8 = t7 << 0x10
         t6 = , signed  t8 >> 0x10
         unsigned , hi
         v0 = lo
         v0 = , signed  v0 >> 7
         if                       // likely
         

    loc_0x803471ec: // orphan
         goto 0x803471f4
         v1 = v0

    loc_0x803471f4: // orphan
         a1 = v1
         goto 0x80347200
         v0 = a1

    loc_0x80347200: // orphan
         t9 = ~v0
         t7 = t9 & 0xffff
         t6 = ~a2
         t9 = t6 << 0x10
         t8 = t7 | t9
         [a3 + 4] = t8            // arg4
         v1 = [t3 + 0]
         t7 = 0xf100 << 16
         t6 = v1 + 8
         [t3 + 0] = t6
         [v1 + 4] = t5
         [v1 + 0] = t7
         a0 = v1
         s0 += 1
         bnel s0, s2, 0x80346db8  // likely
         t9 = [s1 + 0xf0]

    loc_0x80347240: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         sp += 0xd0

    loc_0x8034729c: // orphan
         swc1 f10, 0x28, a1       // arg2
         lwc1 f16, 0x28, a1       // arg2
         sub.s f4, f16, f18
         swc1 f4, 0x28, a1        // arg2
         ldc1 f6, 0x1a8, v0
         cvt.s.d f8, f6
         swc1 f8, 0x2c, a1        // arg2
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80347370: // orphan
         a0 = [sp + 0x20]
         a1 = v0
         call 0x87c03b60          // 0x87c03b60(0x0, 0x0, 0x0, 0x0)
         a2 = a3 + 0x1890
         a3 = [sp + 0x30]
         at = 0x8601 << 16
         lwc1 f0, -0x29c4, at
         t8 = byte [a3 + 0x1890]
         at = 0xc2fe << 16
         mtc1 at, f2
         mtc1 t8, f4
         t0 = 0 - 0x7f
         at = 0x42fe << 16
         cvt.s.w f6, f4
         t4 = 0 - 0x7f
         mul.s f8, f6, f0
         swc1 f8, 0x24, sp
         t9 = byte [a3 + 0x1891]
         c.le.s f8, f2
         lwc1 f4, 0x24, sp
         mtc1 t9, f10
         
         cvt.s.w f16, f10
         mul.s f18, f16, f0
         bc1f 0x803473e0
         swc1 f18, 0x28, sp
         goto 0x80347414
         byte [a3 + 0x1890] = t0

    loc_0x80347414: // orphan
         lwc1 f0, 0x28, sp
         at = 0x42fe << 16
         c.le.s f0, f2
         
         bc1fl 0x80347438
         mtc1 at, f18
         goto 0x80347468
         byte [a3 + 0x1891] = t4

    loc_0x80347464: // orphan
         byte [a3 + 0x1891] = t7  // arg4

    loc_0x80347468: // orphan
         ra = [sp + 0x14]
         sp += 0x30
         ret
         

    loc_0x8034751c: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x87c01a90          // 0x87c01a90(0x0, 0x0, 0x0, 0x0)
         a0 += 0x16c
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret
         

    loc_0x80347608: // orphan
         a1 = [sp + 0x20]
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x803476c0: // orphan
         call 0x87c00120          // 0x87c00120(0x0, 0x0, 0x0, 0x0)
         sdc1 f10, 0x18, sp
         call 0x8000b548          // 0x8000b548(0x0, 0x0, 0x0, 0x0)
         
         at = 0x3f00 << 16
         mtc1 at, f16
         t7 = 0
         c.lt.s f0, f16
         
         bc1fl 0x803476f4
         [s0 + 0x2d0] = t7
         t7 = 0 + 1
         [s0 + 0x2d0] = t7
         ra = [sp + 0x2c]
         s0 = [sp + 0x28]
         sp += 0x38
         ret
         

    loc_0x803477b0: // orphan
         swc1 f4
         ldc1 f6, 0x40, sp
         t4 = [sp + 0x60]
         neg.d f8, f6
         cvt.s.d f10, f8
         swc1 f10
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x58
         ret
         

    loc_0x80347884: // orphan
         c.lt.d f2, f12
         ldc1 f6, 0xc8, v0
         ldc1 f0, 0x2c0, v0
         ldc1 f18, 0x2b8, v0
         div.d f8, f12, f6
         sub.d f4, f18, f0
         mul.d f10, f4, f8
         add.d f18, f10, f0
         goto 0x8034791c
         cvt.s.d f14, f18

    loc_0x8034791c: // orphan
         mul.s f0, f16, f14
         ldc1 f10, 0xc8, a0       // arg1
         t1 = , unsigned  byte [a0 + 0x14d1] // arg1
         t3 = 0 + 0xff
         byte [a0 + 0x14ed] = t3  // arg1
         t2 = t1 | 1
         cvt.s.d f6, f10
         byte [a0 + 0x14d1] = t2  // arg1
         swc1 f0, 0x1500, a0      // arg1
         swc1 f0, 0x1504, a0      // arg1
         mfc1 a2, f6
         swc1 f0, 0x1508, a0      // arg1
         call 0x860041e8          // 0x860041e8(0x0, 0x0, 0x0, 0x0)
         a1 = a0 + 0x1530
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x8034797c: // orphan
         [sp + 0x20] = a0
         call 0x80073f70          // 0x80073f70(0x0, 0x0, 0x0, 0x0)
         cvt.s.d f12, f4
         t8 = [sp + 0x1c]
         at = 0x8601 << 16
         ldc1 f8, -0x2128, at
         ldc1 f6, 8, t8
         cvt.d.s f16, f0
         a0 = [sp + 0x20]
         add.d f10, f6, f8
         ldc1 f4, 0x17d8, a0
         mul.d f18, f16, f10
         cvt.s.d f12, f4
         call 0x8007e9c0          // 0x8007e9c0(0x0, 0x0, 0x0, 0x0)
         sdc1 f18
         t9 = [sp + 0x1c]
         at = 0x8601 << 16
         ldc1 f8, -0x2128, at
         ldc1 f6, 8, t9
         cvt.d.s f10, f0
         a0 = [sp + 0x20]
         add.d f16, f6, f8
         mul.d f18, f10, f16
         sdc1 f18, 0x10, a0
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80347a50: // orphan
         cvt.s.d f12, f6
         sdc1 f18, 0x18, s0
         ldc1 f4, 0xb8, v0
         call 0x8007e9c0          // 0x8007e9c0(0x0, 0x0, 0x0, 0x0)
         sdc1 f4, 0x20, s0
         at = 0x8601 << 16
         ldc1 f8, -0x2120, at
         cvt.d.s f10, f0
         neg.d f16, f8
         mul.d f18, f10, f16
         sdc1 f18, 0x28, s0
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x30
         ret
         

    loc_0x80347b44: // orphan
         at = 0x3f80 << 16
         mtc1 at, f10
         at = 0xbff0 << 16
         mtc1 at, f17
         mtc1 0, f16
         sdc1 f20, 0x17f0, s0
         a0 = s0 + 0x189c         // arg1
         sdc1 f8, 0x17e8, s0
         swc1 f10, 0x1808, s0
         call 0x86000bb0          // 0x86000bb0(0x189c, 0x0, 0x0, 0x0)
         sdc1 f16, 0x17f8, s0
         call 0x86001fcc          // 0x86001fcc(0x189c, 0x0, 0x0, 0x0)
         a0 = s0
         sdc1 f20, 0x10, sp
         t0 = [s0 + 0x1870]
         at = 0x8601 << 16
         ldc1 f4, -0x29a0, at
         ldc1 f18, 0x6670, t0
         mfc1 a2, f21
         mfc1 a3, f20
         mul.d f6, f18, f4
         a0 = s0 + 0x1878
         call 0x87c00120          // 0x87c00120(0x1878, 0x0, 0x0, 0x0)
         sdc1 f6, 0x18, sp
         v1 = 0 - 1
         a0 = 0
         v0 = s0
         a1 = 0 + 8

    loc_0x80347bb4: // orphan
         a0 += 4
         byte [v0 + 0x1991] = v1
         byte [v0 + 0x1992] = v1
         byte [v0 + 0x1993] = v1
         v0 += 4
         if                       // likely
         byte [v0 + 0x198c] = v1

    loc_0x80347bd0: // orphan
         ra = [sp + 0x34]
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x80347bfc: // orphan
         call 0x86002070          // 0x86002070(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = t6
         a0 = [sp + 0x20]
         call 0x86003efc          // 0x86003efc(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         call 0x8000b548          // 0x8000b548(0x0, 0x0, 0x0, 0x0)
         
         at = 0x8601 << 16
         lwc1 f4, -0x2998, at
         at = 0x8601 << 16
         lwc1 f8, -0x2994, at
         mul.s f6, f0, f4
         a0 = [sp + 0x20]
         a0 += 0x17a0
         add.s f10, f6, f8
         mfc1 a1, f10
         call 0x87c01f6c          // 0x87c01f6c(0x17a0, 0x0, 0x0, 0x0)
         
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x80347ce8: // orphan
         a1 += 0x120              // arg2
         t5 = [sp + 0x50]
         a0 = [sp + 0x40]
         a1 = [sp + 0x44]
         a2 = [sp + 0x48]
         a3 = [sp + 0x4c]
         call 0x86002070          // 0x86002070(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = t5
         ra = [sp + 0x1c]
         sp += 0x40
         ret
         

    loc_0x80347da0: // orphan
         a3 = [sp + 0x18]
         a1 = 0 + 1               // arg2
         a2 = 0
         call 0x87c01db8          // 0x87c01db8(0x0, 0x1, 0x0, 0x0)
         a0 = a3 + 0x17a0
         goto 0x80347ddc
         v0 = 0 + 1

    loc_0x80347ddc: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80347edc: // orphan
         call 0x8003f018          // 0x8003f018(0x0, 0x0, 0x0, 0x0)
         [sp + 0x2c] = a0
         a0 = s0 + 0x288
         call 0x8003f018          // 0x8003f018(0x288, 0x0, 0x0, 0x0)
         [sp + 0x28] = a0
         a0 = s0 + 0x14d0
         call 0x8003f018          // 0x8003f018(0x14d0, 0x0, 0x0, 0x0)
         [sp + 0x24] = a0
         a0 = s0 + 0x1638
         call 0x8003f018          // 0x8003f018(0x1638, 0x0, 0x0, 0x0)
         [sp + 0x20] = a0
         t6 = [s0 + 0x1810]
         a0 = [sp + 0x2c]
         a1 = 0
         t7 = t6 << 2
         t8 = s1 + t7
         a3 = [t8 + 0]
         call 0x8003f114          // 0x8003f114(0x0, 0x0, 0x0, -1)
         a2 = 0 - 1
         a0 = [sp + 0x54]
         call 0x80071adc          // 0x80071adc(0x0, 0x0, -1, -1)
         a1 = 0 + 0x4f
         a0 = [sp + 0x28]
         a1 = 0
         a2 = 0 - 1
         call 0x8003f114          // 0x8003f114(0x288, 0x0, -1, -1)
         a3 = v0
         v0 = [s0 + 0x1810]
         s1 = 0
         at = 0 + 1
         if                       // unlikely
         a0 = [sp + 0x54]

    loc_0x80347f5c: // orphan
         if                       // likely
         at = 0 + 2

    loc_0x80347f64: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x80347f6c: // orphan
         beql v0, at, 0x80347f98  // likely
         s1 = 0 + 0xc4

    loc_0x80347f74: // orphan
         goto 0x80347f98
         

    loc_0x80347f7c: // orphan
         goto 0x80347f98
         s1 = 0 + 0xc5

    loc_0x80347f84: // orphan
         goto 0x80347f98
         s1 = 0 + 0xc6

    loc_0x80347f8c: // orphan
         goto 0x80347f98
         s1 = 0 + 0xc3

    loc_0x80347f98: // orphan
         call 0x80071adc          // 0x80071adc(0x0, 0x0, 0x0, 0x0)
         a1 = s1
         a0 = [sp + 0x24]
         a1 = 0
         a2 = 0 - 1
         call 0x8003f114          // 0x8003f114(0x14d0, 0x0, -1, 0x0)
         a3 = v0
         v0 = [s0 + 0x1810]
         at = 0 + 1
         a0 = [sp + 0x54]
         if                       // unlikely
         

    loc_0x80347fc8: // orphan
         if                       // likely
         at = 0 + 2

    loc_0x80347fd0: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x80347fd8: // orphan
         beql v0, at, 0x80348004  // likely
         s1 = 0 + 0xc1

    loc_0x80347fe0: // orphan
         goto 0x80348004
         

    loc_0x80347fe8: // orphan
         goto 0x80348004
         s1 = 0 + 0xbf

    loc_0x80347ff0: // orphan
         goto 0x80348004
         s1 = 0 + 0xc0

    loc_0x80347ff8: // orphan
         goto 0x80348004
         s1 = 0 + 0xc2

    loc_0x80348004: // orphan
         call 0x80071adc          // 0x80071adc(0x0, 0x0, 0x0, 0x0)
         a1 = s1
         a0 = [sp + 0x20]
         a1 = 0
         a2 = 0 - 1
         call 0x8003f114          // "\u01e2" // 0x8003f114(0x1638, 0x0, -1, 0x0)
         a3 = v0
         lwc1 f2, 0x4c, sp
         at = 0x40a0 << 16
         mtc1 at, f16
         t9 = , unsigned  byte [s0 + 0x14d2]
         t1 = , unsigned  byte [s0 + 0x163a]
         mul.s f0, f2, f16
         t3 = , unsigned  byte [s0 + 0x122]
         t5 = , unsigned  byte [s0 + 0x28a]
         s1 = 0 + 0xff
         t0 = t9 | 0x10
         t2 = t1 | 0x10
         t4 = t3 | 0x10
         t6 = t5 | 0x10
         byte [s0 + 0x14d2] = t0
         byte [s0 + 0x163a] = t2
         byte [s0 + 0x122] = t4
         byte [s0 + 0x28a] = t6
         swc1 f0, 0x1500, s0
         swc1 f0, 0x1504, s0
         swc1 f0, 0x1508, s0
         byte [s0 + 0x14ed] = s1
         a1 = 0x8600 << 16
         swc1 f2, 0x150, s0
         swc1 f2, 0x154, s0
         swc1 f2, 0x158, s0
         swc1 f2, 0x2b8, s0
         swc1 f2, 0x2bc, s0
         swc1 f2, 0x2c0, s0
         a0 = [sp + 0x2c]
         a1 += 0x2780
         call 0x80037e3c          // 0x80037e3c(0x0, 0x86002780, -1, 0x0)
         a2 = s0
         a1 = 0x8600 << 16
         a1 += 0x297c
         a0 = [sp + 0x28]
         call 0x80037e3c          // 0x80037e3c(0x288, 0x8600297c, 0x0, 0x0)
         a2 = s0
         t9 = [s0 + 0x1810]
         a2 = 0 + 0x18
         t7 = [s0 + 0x1870]

    loc_0x803480c0: // orphan
         unsigned , hi
         t1 = [sp + 0x2c]
         t8 = [t7 + 0x74c8]
         mtc1 0, f2
         at = 0x4120 << 16
         mtc1 at, f0
         at = 0x8601 << 16
         t0 = lo
         a1 = t8 + t0
         [a1 + 0] = t1
         t4 = [s0 + 0x1810]
         t2 = [s0 + 0x1870]
         unsigned , hi
         t3 = [t2 + 0x74c8]
         t5 = lo
         v1 = t3 + t5
         swc1 f2, 4, v1
         ldc1 f18, -0x21b8, at
         swc1 f2, 0xc, v1
         t3 = 0 + 0xc8
         cvt.s.d f4, f18
         swc1 f4, 8, v1
         t9 = [s0 + 0x1810]
         t6 = [s0 + 0x1870]
         t8 = t9 << 2
         t8 -= t9
         t8 <<= 3
         t8 += t9
         t7 = [t6 + 0x74c4]
         t8 <<= 2
         t8 -= t9
         t8 <<= 2
         a0 = t7 + t8
         swc1 f0, 0x54, a0
         swc1 f0, 0x58, a0
         swc1 f0, 0x5c, a0
         t2 = [s0 + 0x1810]
         t0 = [s0 + 0x1870]

    loc_0x80348158: // orphan
         a0 = s0 + 0x17a0
         unsigned , hi
         t1 = [t0 + 0x74c8]
         a2 = 0x8601 << 16
         a2 -= 0x2ac0
         t4 = lo
         v0 = t1 + t4
         byte [v0 + 0x12] = s1
         byte [v0 + 0x13] = s1
         byte [v0 + 0x14] = s1
         byte [v0 + 0x15] = t3
         call 0x87c01888          // 0x87c01888(0x17a0, 0x0, 0x8600d540, 0x0)
         a1 = [sp + 0x2c]
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret
         sp += 0x50

    loc_0x80348294: // orphan
         cvt.s.d f10, f0
         goto 0x80348358
         swc1 f10, 0x1808, s0

    loc_0x803482a4: // orphan
         at = 0 + 3
         v0 = 0 + 0xff
         bnel t9, at, 0x80348320  // likely
         at = 0x3ff0 << 16

    loc_0x803482b4: // orphan
         ldc1 f16, 0x17d0, s0
         c.lt.d f0, f16
         
         bc1fl 0x80348320
         at = 0x3ff0 << 16
         t0 = [s0 + 0x1898]
         v1 = 0 + 0x7f
         t1 = 0 + 0x96
         if                       // unlikely
         at = 0x3ff0 << 16

    loc_0x803482dc: // orphan
         v0 = 0 + 0xff
         mtc1 at, f15
         byte [s0 + 0x1c0] = v0
         byte [s0 + 0x1c1] = v1
         byte [s0 + 0x1c2] = v1
         byte [s0 + 0x1c3] = t1
         at = 0x8601 << 16
         ldc1 f4, -0x2980, at
         lwc1 f18, 0x1808, s0
         mtc1 0, f14
         sdc1 f4, 0x10, sp
         call 0x87c00090          // 0x87c00090(0x0, 0x0, 0x0, 0x0)
         cvt.d.s f12, f18
         cvt.s.d f6, f0
         goto 0x80348358
         swc1 f6, 0x1808, s0

    loc_0x8034831c: // orphan
         at = 0x3ff0 << 16

    loc_0x80348320: // orphan
         mtc1 at, f15
         byte [s0 + 0x1c0] = v0
         byte [s0 + 0x1c1] = v0
         byte [s0 + 0x1c2] = v0
         byte [s0 + 0x1c3] = 0
         at = 0x8601 << 16
         ldc1 f10, -0x2978, at

    loc_0x8034833c: // orphan
         lwc1 f8, 0x1808, s0
         mtc1 0, f14
         sdc1 f10, 0x10, sp
         call 0x87c00090          // 0x87c00090(0x0, 0x0, 0x0, 0x0)
         cvt.d.s f12, f8
         cvt.s.d f16, f0
         swc1 f16, 0x1808, s0

    loc_0x80348358: // orphan
         at = 0x3f80 << 16
         mtc1 at, f18
         lwc1 f2, 0x1808, s0
         v0 = 0 + 1
         div.s f0, f18, f2
         sqrt.s f0, f0
         mul.s f12, f20, f0
         
         mul.s f4, f2, f20
         swc1 f12, 0x150, s0
         swc1 f12, 0x158, s0
         swc1 f4, 0x154, s0
         ra = [sp + 0x2c]
         ldc1 f20, 0x20, sp
         s0 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x80348478: // orphan
         sp -= 0x28
         [sp + 0x24] = ra
         [sp + 0x20] = s0
         v0 = [a0 + 0x1870]       // arg1

    loc_0x80348488: // orphan
         ldc1 f4, 0x17d0, a0      // arg1
         mtc1 0, f1
         ldc1 f6, 0x6890, v0
         mtc1 0, f0
         t6 = 0 + 0x64
         sub.d f8, f4, f6
         v1 = 0x8601 << 16
         s0 = a0
         byte [a0 + 0x13d] = t6   // arg1
         c.le.d f8, f0
         sdc1 f8, 0x17d0, a0
         v1 -= 0x21d0
         bc1fl 0x803484f4
         ldc1 f16, 0x6890, v0
         v1 = 0x8601 << 16
         v1 -= 0x21d0
         sdc1 f0, 0x17d0, a0
         a3 = [v1 + 0x164]
         call 0x86004494          // 0x86004494(0x0, 0x0, 0x0, -1)
         a2 = [v1 + 0x160]
         if                       // likely
         a0 = s0

    loc_0x803484e0: // orphan
         call 0x86003efc          // 0x86003efc(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 3
         goto 0x80348514
         ldc1 f6, 0x1858, s0

    loc_0x80348510: // orphan
         ldc1 f6, 0x1858, s0

    loc_0x80348514: // orphan
         ldc1 f8, 0x1860, s0
         call 0x87c00020          // 0x87c00020(0x0, 0x0, 0x0, 0x0)
         add.d f12, f6, f8

    loc_0x80348520: // orphan
         sdc1 f0, 0x1858, s0
         call 0x860032dc          // 0x860032dc(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x28
         ret
         

    loc_0x803489e0: // orphan
         t6 = 0x8600 << 16
         t7 = [a0 + 0x1870]       // arg1
         t6 += 0xae0
         v0 = 0x8601 << 16
         [a0 + 0x1824] = t6       // arg1
         v0 -= 0x21d0
         ldc1 f6, 0x1f8, v0
         ldc1 f4, 0x6890, t7
         ldc1 f12, 0x1860, a0     // arg1
         s0 = a0
         mul.d f8, f4, f6
         ldc1 f14, 0x88, v0
         call 0x87c00090          // 0x87c00090(0x0, 0x0, 0x0, 0x0)
         sdc1 f8, 0x10, sp
         sdc1 f0, 0x1860, s0
         a0 = sp + 0x28
         a1 = s0
         call 0x87c00160          // 0x87c00160(0x178028, 0x0, 0x0, 0x0)
         a2 = s0 + 0x1878
         mtc1 0, f11
         mtc1 0, f10
         a0 = sp + 0x28
         call 0x87c0068c          // 0x87c0068c(0x178028, 0x0, 0x1878, 0x0)

    loc_0x80348a3c: // orphan
         sdc1 f10, 0x30, sp
         at = 0x3fe0 << 16
         mtc1 at, f19
         ldc1 f16, 0x17c8, s0
         mtc1 0, f18
         a0 = s0
         mul.d f4, f16, f18
         c.lt.d f0, f4
         
         bc1fl 0x80348a74
         ldc1 f6, 0x1858, s0
         call 0x86003efc          // 0x86003efc(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 5
         ldc1 f6, 0x1858, s0
         ldc1 f8, 0x1860, s0
         call 0x87c00020          // 0x87c00020(0x0, 0x5, 0x0, 0x0)
         add.d f12, f6, f8
         sdc1 f0, 0x1858, s0
         call 0x860032dc          // 0x860032dc(0x0, 0x5, 0x0, 0x0)
         a0 = s0
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x48
         ret
         

    loc_0x80348abc: // orphan
         a3 = [at - 0x2964]
         call 0x87c002a8          // 0x87c002a8(0x0, 0x0, 0x0, -1)
         a1 = a0
         t6 = [s0 + 0x1870]
         at = 0x8601 << 16
         ldc1 f6, -0x1fd8, at
         ldc1 f4, 0x6890, t6
         at = 0x4024 << 16
         mtc1 at, f11
         mul.d f8, f4, f6
         mtc1 0, f10
         ldc1 f12, 0x1860, s0
         mtc1 0, f15
         mtc1 0, f14
         mul.d f16, f8, f10
         call 0x87c00090          // 0x87c00090(0x0, 0x0, 0x0, -1)
         sdc1 f16, 0x10, sp
         ldc1 f18, 0x1858, s0
         sdc1 f0, 0x1860, s0
         call 0x87c00020          // 0x87c00020(0x0, 0x0, 0x0, -1)
         add.d f12, f18, f0
         sdc1 f0, 0x1858, s0
         call 0x860032dc          // 0x860032dc(0x0, 0x0, 0x0, -1)
         a0 = s0
         a1 = 0x8601 << 16
         a1 -= 0x29f4
         a0 = s0 + 0x17a0
         call 0x87c01e30          // 0x87c01e30(0x17a0, 0x8600d60c, 0x0, -1)
         a2 = 0
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x28
         ret
         

    loc_0x80348c08: // orphan
         ldc1 f6, -0x1fe8, at
         ldc1 f4, 0xc8, a1        // arg2
         ra = [sp + 0x14]
         add.d f8, f4, f6
         c.lt.d f8, f0
         
         bc1fl 0x80348c34
         v0 = [a1 + 0x1828]       // arg2
         goto 0x80348cf4
         v0 = 0

    loc_0x80348cd8: // orphan
         v0 = 0 + 1
         c.lt.d f6, f8
         
         bc1f 0x80348cf4
         
         goto 0x80348cf4
         v0 = 0

    loc_0x80348cf4: // orphan
         ret
         sp += 0x18

    loc_0x80348dd8: // orphan
         t7 = 0 + 0x4401
         halfword [sp + 0x22] = t7
         mfc1 a3, f0
         a0 = , unsigned  halfword [sp + 0x22]
         a1 = , unsigned  byte [s0 + 0x1813]
         call 0x800278c0          // 0x800278c0(0x4401, 0xff, 0x0, 0x0)
         a2 = s0 + 0x1890
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x28
         ret
         

    loc_0x80348ee0: // orphan
         goto 0x80348f50
         

    loc_0x80348f50: // orphan
         at = 0x8601 << 16
         ldc1 f16, -0x2160, at
         a0 = [s0 + 0x1870]
         a1 = s0
         a2 = sp + 0x60           // arg3
         sdc1 f16, 0xe8, s0
         call 0x8600a04c          // 0x8600a04c(-1, 0x0, 0x178060, 0x0)
         a0 += 0x66b8
         if                       // unlikely
         a1 = s0

    loc_0x80348f78: // orphan
         a0 = [s0 + 0x1870]
         a2 = sp + 0x60
         call 0x8600a04c          // 0x8600a04c(-1, 0x0, 0x178060, 0x0)
         a0 += 0x6668
         if                       // unlikely
         a0 = sp + 0x60

    loc_0x80348f90: // orphan
         mfc1 a2, f21
         mfc1 a3, f20
         sdc1 f20, 0x10, sp
         call 0x87c00908          // 0x87c00908(0x0, 0x0, 0x0, 0x0)
         sdc1 f20, 0x18, sp

    loc_0x80348fa4: // orphan
         call 0x860031c8          // 0x860031c8(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         if                       // likely
         at = 0x8601 << 16

    loc_0x80348fb4: // orphan
         ldc1 f2, -0x2930, at
         lwc1 f18, 0x1804, s0
         at = 0x8601 << 16
         ldc1 f0, -0x2008, at
         cvt.d.s f4, f18
         sdc1 f20, 0x10, sp
         mul.d f6, f4, f0
         lwc1 f10, 0x1800, s0
         a0 = sp + 0x48
         cvt.d.s f16, f10
         mul.d f8, f6, f2
         
         mul.d f18, f16, f0
         mfc1 a3, f8
         mfc1 a2, f9
         mul.d f4, f18, f2
         call 0x87c00120          // 0x87c00120(0x178048, 0x0, 0x0, 0x0)
         sdc1 f4, 0x18, sp
         a0 = sp + 0x60
         call 0x87c00c80          // 0x87c00c80(0x178060, 0x0, 0x0, 0x0)
         a1 = sp + 0x48

    loc_0x80349008: // orphan
         at = 0x8601 << 16
         ldc1 f6, -0x2000, at
         a0 = s0 + 0x1838
         a1 = a0
         [sp + 0x3c] = a0
         a2 = sp + 0x60
         call 0x87c01140          // 0x87c01140(0x1838, 0x1838, 0x178060, 0x0)
         sdc1 f6, 0x10, sp
         a0 = [sp + 0x3c]
         call 0x87c00ae4          // 0x87c00ae4(0x1838, 0x1838, 0x178060, 0x0)
         a1 = a0
         ldc1 f0, 0x17e0, s0
         a0 = s0
         a2 = 0x8601 << 16
         c.lt.d f20, f0
         a3 = 0x8601 << 16
         bc1fl 0x803490d0
         sdc1 f20, 0x17e0, s0
         t8 = [s0 + 0x1870]
         v0 = 0x8601 << 16
         v0 -= 0x21d0
         ldc1 f8, 0x6890, t8
         sdc1 f20, 0x17d0, s0
         a0 = s0
         sub.d f10, f0, f8
         sdc1 f10, 0x17e0, s0
         ldc1 f16, 0xc8, v0
         sdc1 f16, 0x17e8, s0
         ldc1 f4, 0xd8, v0
         ldc1 f18, 0x10, v0
         mul.d f6, f18, f4
         mfc1 a3, f6
         mfc1 a2, f7
         call 0x86007a80          // 0x86007a80(0x0, 0x1838, 0x86010000, 0x86010000)
         
         ldc1 f8, 0x17e0, s0
         at = 0x8601 << 16
         a0 = s0 + 0x17a0
         c.le.d f8, f20
         a1 = 0
         bc1f 0x80349158
         
         sdc1 f20, 0x17e0, s0
         ldc1 f10, -0x2108, at
         a2 = 0
         call 0x87c01db8          // 0x87c01db8(0x17a0, 0x0, 0x0, 0x86010000)
         sdc1 f10, 0x17e8, s0
         goto 0x80349158
         

    loc_0x80349158: // orphan
         call 0x87c01a90          // 0x87c01a90(0x0, 0x0, 0x0, 0x0)
         a0 = s0 + 0x17a0
         ra = [sp + 0x34]
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]
         ret
         sp += 0x88

    loc_0x803491a4: // orphan
         a1 = [sp + 0x50]
         a0 = sp + 0x20           // arg1
         call 0x87c00308          // 0x87c00308(0x178020, 0x0, 0x0, 0x0)
         sdc1 f4, 0x10, sp
         a0 = sp + 0x38
         a1 = [sp + 0x54]
         call 0x87c00160          // 0x87c00160(0x178038, 0x0, 0x0, 0x0)
         a2 = [sp + 0x50]
         a0 = sp + 0x38
         a1 = a0
         a2 = [sp + 0x58]
         call 0x87c00718          // 0x87c00718(0x178038, 0x178038, 0x0, 0x0)
         a3 = [sp + 0x5c]
         a0 = [sp + 0x54]
         a1 = sp + 0x20
         call 0x86007e4c          // 0x86007e4c(0x0, 0x178020, 0x0, 0x0)
         a2 = sp + 0x38
         ra = [sp + 0x1c]
         sp += 0x50
         ret
         

    loc_0x80349520: // orphan
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x803495a0: // orphan
         at = 0x8601 << 16
         ldc1 f6, -0x1fe8, at
         ldc1 f4, 8, s2
         c.lt.d f10, f16
         s0 = 0
         add.d f8, f4, f6
         s1 = 0
         s4 = 0 + 4
         bc1f 0x8034963c
         sdc1 f8, 8, s2
         s3 = 0 + 3

    loc_0x803495cc: // orphan
         t9 = [s2 + 0x1870]
         v0 = t9 + s1
         t0 = [v0 + 0x1828]
         bnel s3, t0, 0x80349620  // likely
         s0 += 1

    loc_0x803495e0: // orphan
         t1 = [s2 + 0x1818]
         bnel s0, t1, 0x80349620  // likely
         s0 += 1

    loc_0x803495ec: // orphan
         t3 = [v0 + 0x1814]
         t2 = [s2 + 0x1810]
         a0 = 0 + 0xf04           // arg1
         t4 = v0 + t3
         byte [t4 + 0x1990] = t2
         t5 = [s2 + 0x1870]
         a1 = s0 & 0xff           // arg2
         v0 = t5 + s1
         t6 = [v0 + 0x1814]
         t7 = t6 + 1
         call 0x80027a28          // 0x80027a28(0xf04, 0x0, 0x0, 0x0)
         [v0 + 0x1814] = t7
         s0 += 1

    loc_0x80349620: // orphan
         if                       // unlikely
         s1 += 0x1998

    loc_0x80349628: // orphan
         at = 0xbff0 << 16
         mtc1 at, f19
         mtc1 0, f18
         
         sdc1 f18, 0x17f8, s2
         v0 = 0x8601 << 16
         v0 = [v0 - 0x1fc8]
         beql v0, 0, 0x8034966c   // unlikely
         ra = [sp + 0x2c]

    loc_0x8034964c: // orphan
         t8 = [s2 + 0x1820]
         a0 = s2
         at = , t8 < v0
         bnel at, 0, 0x8034966c   // unlikely
         ra = [sp + 0x2c]

    loc_0x80349660: // orphan
         call 0x86003efc          // 0x86003efc(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 8
         ra = [sp + 0x2c]

    loc_0x8034966c: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x803496e4: // orphan
         a0 = s0 + 0x30           // arg1
         sdc1 f2, 0x18, sp
         call 0x87c00120          // 0x87c00120(0x30, 0x0, 0x0, 0x0)
         sdc1 f4, 0x10, sp
         at = 0x8601 << 16
         ldc1 f6, -0x2198, at
         t7 = 0 + 0x64
         byte [s0 + 0x13d] = t7
         sdc1 f6, 0x17d0, s0
         ra = [sp + 0x2c]
         s0 = [sp + 0x28]
         sp += 0x30
         ret
         

    loc_0x80355090: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8035509c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803550a8: // orphan
         if                       // unlikely
         

    loc_0x803550b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803550bc: // orphan
         if                       // unlikely
         

    loc_0x803550c4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803550d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803550e4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803550f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355100: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355110: // orphan
         if                       // unlikely
         

    loc_0x80355118: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355124: // orphan
         if                       // unlikely
         

    loc_0x8035512c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355144: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355154: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355160: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355170: // orphan
         if                       // unlikely
         

    loc_0x80355178: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355184: // orphan
         if                       // unlikely
         

    loc_0x8035518c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355198: // orphan
         if                       // unlikely
         

    loc_0x803551a0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803551bc: // orphan
         if                       // unlikely
         

    loc_0x803551c4: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803551e0: // orphan
         if                       // unlikely
         

    loc_0x803551e8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803551f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355204: // orphan
         if                       // unlikely
         

    loc_0x8035520c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035521c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355244: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80355250: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355260: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035527c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035528c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035529c: // orphan
         if                       // unlikely
         

    loc_0x803552a4: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803552c8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355304: // orphan
         
         
         if                       // unlikely
         

    loc_0x80355314: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355338: // orphan
         
         
         

}

*/
