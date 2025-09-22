/*
 * Function: 0x802cbd70
 * ROM Offset: 0x001ccd70
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.802cbd70 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
if                       // likely
if                       // likely
if                       // likely
if                       // likely
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
int fcn.802cbd70 (int esi, int edx) {
    loc_0x802bf900:
        t6 = [sp + 0x78]
        s6 = 0
        s4 = 0 + 0x7d
        s3 = [t6 + 0]
        [sp + 0x170] = 0
        s3 += 4
         // do {
    loc_0x802bf918:
        t2 = [v1 + 0]
        t8 = halfword [sp + 0x15e]
        s7 = 0
        t3 = halfword [t2 + 0x56]
        t9 = s0 - t3
        s5 = t9 + t8
        s5 <<= 0x10
        s5 = , signed  s5 >> 0x10
         // } while (?);
        }
        return eax;
    loc_0x802bf938: // orphan
             t4 = [sp + 0x78]
             t7 = [t4 + 0]
             t5 = , unsigned  byte [t7 + 0]
             if                       // likely
             t6 = 0 + 5

    loc_0x802bf94c: // orphan
         goto 0x802bf9dc
         [sp + 0x170] = t6

    loc_0x802bf954: // orphan
         t2 = , unsigned  byte [s3 + 0x1e]
         t3 = t2 & 1
         bnel t3, 0, 0x802bf9bc   // likely
         s5 += 0x57

    loc_0x802bf964: // orphan
         t9 = , unsigned  byte [s3 + 1]
         a0 = s5 << 0x10          // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         beql t9, 0, 0x802bf9bc   // unlikely
         s5 += 0x57

    loc_0x802bf978: // orphan
         t8 = [v1 + 0]
         a1 = s4 << 0x10          // arg2
         t4 = 0 + 0x400
         v0 = [t8 + 0x1c]
         t7 = 0 + 0x400
         a1 = , signed  a1 >> 0x10 // arg2
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         [sp + 0x20] = 0
         [sp + 0x1c] = t7
         [sp + 0x18] = t4
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0xffff, 0xffff)
         [sp + 0x10] = 0
         v1 = 0x8851 << 16
         v1 -= 0x2930
         s5 += 0x57

    loc_0x802bf9bc: // orphan
         s5 <<= 0x10
         s7 += 1
         at = 0 + 6
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s3 += 0x58

    loc_0x802bf9dc: // orphan
         t5 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t6 = t5 + 1
         at = , unsigned  , t6 < 5
         [sp + 0x170] = t6
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bf9fc: // orphan
         t2 = [sp + 0x78]
         t9 = halfword [sp + 0x15e]
         t3 = t2 + 4
         t8 = t9 + 0x20f
         halfword [sp + 0x15e] = t8
         if                       // likely
         [sp + 0x78] = t3

    loc_0x802bfa18: // orphan
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0
         v1 = 0x800d << 16
         v1 += 0x510
         s0 = [v1 + 0]
         t7 = 0xde00 << 16
         t4 = s0 + 8
         [v1 + 0] = t4
         [s0 + 0] = t7
         t5 = [sp + 0x7c]

    loc_0x802bfa40: // orphan
         call 0x800498c4          // 0x800498c4(0x0, 0x0, 0x0, 0x0)
         [s0 + 4] = t5
         t6 = 0x8851 << 16
         t6 = [t6 - 0x2930]
         s1 = 0x8851 << 16
         [t6 + 0x60] = 0
         s1 = [s1 - 0x2930]
         t2 = [s1 + 0x64]
         if                       // likely
         

    loc_0x802bfa68: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         
         mtc1 v0, f4
         at = 0x4100 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         at = 0x4270 << 16
         mtc1 0, f10
         mul.s f4, f6, f8
         mtc1 at, f6
         
         div.s f8, f4, f6
         c.lt.s f10, f8
         
         bc1f 0x802bfab4
         at = 0x3f00 << 16
         mtc1 at, f4
         goto 0x802bfac4
         swc1 f4, 0x8c, sp

    loc_0x802bfac4: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         s2 = v0
         mtc1 v0, f8
         at = 0x40a0 << 16
         mtc1 at, f6
         cvt.s.w f4, f8
         at = 0x4270 << 16
         mtc1 0, f10
         mul.s f8, f4, f6
         mtc1 at, f4
         
         div.s f6, f8, f4
         c.lt.s f10, f6
         
         bc1f 0x802bfb18
         at = 0x3f00 << 16

    loc_0x802bfb0c: // orphan
         mtc1 at, f8
         goto 0x802bfb28
         swc1 f8, 0x94, sp

    loc_0x802bfb28: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         s1 = v0
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         s0 = v0
         mtc1 v0, f6
         at = 0x4270 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x41f0 << 16
         mtc1 at, f12
         mtc1 0, f10
         mul.s f4, f8, f12
         div.s f6, f4, f2
         mtc1 s1, f4
         c.lt.s f10, f6
         cvt.s.w f10, f4
         bc1f 0x802bfb84
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bfb94
         at = 0x40a0 << 16

    loc_0x802bfb94: // orphan
         mtc1 at, f8
         at = 0x4100 << 16
         a0 = 0x8851 << 16
         mul.s f6, f8, f10
         lwc1 f8, 0x94, sp
         a0 = [a0 - 0x2930]
         a0 += 0x68
         div.s f4, f6, f2
         add.s f10, f4, f8
         mtc1 s0, f4
         
         cvt.s.w f8, f4
         trunc.w.s f6, f10
         mul.s f10, f12, f8
         mfc1 t8, f6
         div.s f6, f10, f2
         mtc1 at, f10
         add.s f4, f0, f6
         mtc1 s2, f6
         trunc.w.s f8, f4
         cvt.s.w f4, f6
         mfc1 t4, f8
         
         t7 = t4 + t8
         mul.s f8, f10, f4
         lwc1 f10, 0x8c, sp
         div.s f6, f8, f2
         add.s f4, f6, f10
         trunc.w.s f8, f4
         mfc1 t6, f8
         
         a1 = t7 + t6
         a1 <<= 0x10
         call 0x880002f4          // 0x880002f4(0x100000067, 0x0, 0x0, 0x0)
         a1 = , signed  a1 >> 0x10
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]

    loc_0x802bfc28: // orphan
         call 0x88000080          // 0x88000080(0x0, 0x0, 0x0, 0x0)
         a0 = s1 + 0x68
         a1 = v0 << 0x10
         a1 = , signed  a1 >> 0x10
         call 0x88000308          // 0x88000308(0x68, 0x0, 0x0, 0x0)
         a0 = sp + 0x144
         a2 = 0x800d << 16
         a2 += 0x510
         s0 = [a2 + 0]
         t9 = 0xfa00 << 16
         a0 = 0 + 4
         t2 = s0 + 8

    loc_0x802bfc58: // orphan
         [a2 + 0] = t2
         [s0 + 0] = t9
         t4 = , unsigned  byte [sp + 0x144]
         t7 = , unsigned  byte [sp + 0x145]
         t3 = , unsigned  byte [sp + 0x146]
         t8 = t4 << 0x18
         t6 = t7 << 0x10
         t2 = t8 | t6
         t4 = t3 << 8
         t5 = t2 | t4
         t7 = t5 | 0xff
         a1 = 0 + 1
         call 0x800496a4          // 0x800496a4(0x0, 0x1, 0x0, 0x0)
         [s0 + 4] = t7
         t8 = [sp + 0x164]
         t6 = sp + 0x14c
         s2 = 0x8800 << 16
         if                       // likely
         t9 = t8 << 2

    loc_0x802bfca4: // orphan
         [sp + 0x78] = t6
         fp = t9 + t6
         s2 += 0x687c
         s1 = 0 + 0x40

    loc_0x802bfcb4: // orphan
         t3 = [sp + 0x78]
         s6 = 0
         s4 = 0 + 0xa0
         s3 = [t3 + 0]
         [sp + 0x170] = 0
         s3 += 4

    loc_0x802bfccc: // orphan
         t2 = 0x8851 << 16
         t2 = [t2 - 0x2930]
         t7 = halfword [sp + 0x15e]
         s7 = 0
         t4 = halfword [t2 + 0x56]
         t5 = s1 - t4
         s5 = t5 + t7
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802bfcf0: // orphan
         t8 = [sp + 0x78]
         at = , s5 < -0x64
         t9 = [t8 + 0]
         t6 = , unsigned  byte [t9 + 0]
         if                       // unlikely
         t3 = 0 + 5

    loc_0x802bfd08: // orphan
         goto 0x802bfdf0
         [sp + 0x170] = t3

    loc_0x802bfd10: // orphan
         if                       // unlikely
         at = , s5 < 0x280

    loc_0x802bfd18: // orphan
         beql at, 0, 0x802bfdd0   // likely
         s5 += 0x57

    loc_0x802bfd20: // orphan
         call 0x880007b0          // 0x880007b0(0x0, 0x0, 0x0, 0x0)
         a0 = s3
         if                       // unlikely
         a0 = 0x8851 << 16

    loc_0x802bfd30: // orphan
         a0 = [a0 - 0x2930]
         a1 = 0 + 1
         call 0x88000488          // "$\n" // 0x88000488(-1, 0x1, 0x0, 0x0)
         a0 += 0x60

    loc_0x802bfd40: // orphan
         t2 = 0 + 1
         [sp + 0x10] = t2
         a0 = [s2 + 0]
         a1 = s5
         a2 = s4

    loc_0x802bfd54: // orphan
         call 0x80048e30          // 0x80048e30(0x0, 0x0, 0x0, 0x0)
         a3 = s3 + 0x34
         a0 = 0x8851 << 16
         a0 = [a0 - 0x2930]
         a1 = 0
         call 0x88000488          // 0x88000488(-1, 0x0, 0x0, 0x34)
         a0 += 0x60
         t4 = , unsigned  byte [s3 + 0x1e]
         t5 = t4 & 1
         bnel t5, 0, 0x802bfdd0   // likely
         s5 += 0x57

    loc_0x802bfd80: // orphan
         a0 = , unsigned  byte [s3 + 0]
         at = 0 + 0xfc
         beql a0, at, 0x802bfdd0  // unlikely
         s5 += 0x57

    loc_0x802bfd90: // orphan
         call 0x80064474          // 0x80064474(0x0, 0x0, 0x0, 0x0)
         a1 = , unsigned  halfword [s3 + 0x16]
         if                       // likely
         v1 = v0 & 0xff

    loc_0x802bfda0: // orphan
         a0 = 0 + 0x26
         a1 = v1 - 1
         call 0x8004c874          // 0x8004c874(0x26, -1, 0x0, 0x0)
         s0 = s4 - 0x23
         t7 = 0 + 1
         [sp + 0x10] = t7
         a0 = [s2 + 0]
         a1 = s5 + 1
         a2 = s0
         call 0x80048e30          // 0x80048e30(0x0, 0x1, 0xffffffffffffffdd, 0x0)
         a3 = v0

    loc_0x802bfdcc: // orphan
         s5 += 0x57

    loc_0x802bfdd0: // orphan
         s5 <<= 0x10
         s7 += 1
         at = 0 + 6
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s3 += 0x58

    loc_0x802bfdf0: // orphan
         t8 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t9 = t8 + 1
         at = , unsigned  , t9 < 5
         [sp + 0x170] = t9
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bfe10: // orphan
         t6 = [sp + 0x78]
         t2 = halfword [sp + 0x15e]
         t3 = t6 + 4
         t4 = t2 + 0x20f
         halfword [sp + 0x15e] = t4
         if                       // likely
         [sp + 0x78] = t3

    loc_0x802bfe2c: // orphan
         s2 = 0x8800 << 16
         a0 = 0x800d << 16
         t5 = 0 + 0x1e0
         s2 += 0x687c
         [sp + 0x10] = t5
         a0 += 0x510
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x0, 0x0, 0x0)
         a3 = 0 + 0x280
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         t7 = halfword [s1 + 0x56]
         bnel t7, 0, 0x802bfec0   // likely
         t3 = , unsigned  byte [s1 + 9]

    loc_0x802bfe68: // orphan
         t9 = byte [s1 + 0x30]
         t8 = [sp + 0x138]
         a0 = halfword [s1 + 0xa2]
         t6 = s1 + t9
         t2 = byte [t6 + 0x31]
         a1 = 0 + 0x57

    loc_0x802bfe80: // orphan
         a2 = 0 + 1
         t4 = t2 << 2
         t4 += t2
         t4 <<= 2
         t4 += t2
         t4 <<= 3
         t4 -= t2
         t4 <<= 2
         t4 += t2
         t4 <<= 2
         a3 = t8 + t4
         call 0x800495f8          // 0x800495f8(0x0, 0x0, 0x1, 0x0)
         a3 += 0x16e0
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         t3 = , unsigned  byte [s1 + 9]

    loc_0x802bfec0: // orphan
         a0 = 0 + 0xd
         if                       // likely
         

    loc_0x802bfecc: // orphan
         call 0x8004c874          // 0x8004c874(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 9
         t5 = 0x8851 << 16
         t5 = [t5 - 0x2930]
         t7 = [sp + 0x138]
         t2 = 0x8851 << 16
         a0 = , unsigned  byte [t5 + 0xa]
         [sp + 0x10] = v0
         t9 = byte [t7 + 0]
         at = a0
         a0 <<= 4
         t6 = t9 << 2
         t6 += t9
         t6 <<= 2
         t2 += t6
         a0 += at
         t2 = , unsigned  halfword [t2 - 0x2984]
         a0 <<= 4
         a0 += at
         a3 = 0x8851 << 16
         a3 -= 0x2ba8
         a0 += 0xbe
         a1 = 0 + 0x2f
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x110ad, 0x2f, 0x0, 0x8850d458)
         [sp + 0x14] = t2
         a0 = 0 + 8
         call 0x800496a4          // 0x800496a4(0x8, 0x2f, 0x0, 0x8850d458)

    loc_0x802bff3c: // orphan
         a1 = 0 + 1
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]
         t4 = [sp + 0x138]
         t9 = 0x8851 << 16
         a1 = , unsigned  byte [t8 + 0xa]
         t3 = byte [t4 + 0]
         t9 -= 0x2988
         at = a1
         a1 <<= 4
         t5 = t3 << 2
         a1 += at
         t5 += t3
         t5 <<= 2
         a1 <<= 4
         a1 += at
         t7 = t5 + 6
         t6 = 0 + 1
         [sp + 0x10] = t6
         a3 = t7 + t9
         a1 += 0x58
         a0 = [s2 + 0]
         call 0x80048e30          // 0x80048e30(0x0, 0x11047, 0x0, 0x8850d67e)
         a2 = 0 + 0x2b

    loc_0x802bff9c: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         a3 = 0 + 0x56
         t4 = 0 + 0x41
         t2 = halfword [s1 + 0x56]
         bnel t2, 0, 0x802c0028   // likely
         ra = [sp + 0x54]

    loc_0x802bffc0: // orphan
         a1 = halfword [s1 + 0xc]
         a2 = halfword [s1 + 0xe]
         t8 = [s1 + 4]
         at = a1
         a1 <<= 2
         a1 -= at
         a1 <<= 2
         a1 -= at
         a1 <<= 3
         a1 -= at
         at = a2
         a2 <<= 5
         a2 += at
         a2 <<= 1
         a2 += 0x73
         a1 += 0x3b
         a0 = [t8 + 0x2c]
         a1 <<= 0x10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         call 0x880009a8          // 0x880009a8(-1, 0xffffffe4, 0xffff0031, 0x0)
         [sp + 0x10] = t4
         ra = [sp + 0x54]

    loc_0x802c0028: // orphan
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]
         ret
         sp += 0x178

    loc_0x802cbd70: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbda0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbdac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbdb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbdc4: // orphan
         if                       // unlikely
         if                       // unlikely

}

*/
