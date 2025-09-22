/*
 * Function: 0x802cbcf8
 * ROM Offset: 0x001cccf8
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.802cbcf8 (int esi, int edx) {
if            // likely
// do {
// } while (?);
// } while (?);
}
return eax;
if                       // likely
if                       // unlikely
if                       // likely
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
int fcn.802cbcf8 (int esi, int edx) {
    loc_0x802be570:
        byte [sp + 0x154] = t4
        t5 = byte [sp + 0x154]
        t6 = t5 << 2
        t6 += t5
        t6 <<= 2
        t6 += t5
        t6 <<= 3
        t6 -= t5
        t6 <<= 2
        t6 += t5
        t6 <<= 2
        t7 = t9 + t6
        t8 = t7 + 0xc8c
        [sp + 0x14c] = t8
        t2 = halfword [s1 + 0x56]
        if            // likely
        0x802be5b0
            
    loc_0x802be5bc:
        call 0x88500e4c // 0x88500e4c(0x0, 0x0, 0x0, 0x0)
        0x802be5c0
        v1 = v0 << 0x18
        v1 = , signed  v1 >> 0x18
        t5 = v1 << 2
        t5 += v1
        t5 <<= 2
        t5 += v1
        t5 <<= 3
        t5 -= v1
        t4 = [sp + 0x138]
        t5 <<= 2
        t5 += v1
        t5 <<= 2
        t9 = t4 + t5
        t6 = t9 + 0xc8c
        t7 = 0 + 2
        s1 = 0x8851 << 16
        [sp + 0x150] = t6
        s1 = [s1 - 0x2930]
        [sp + 0x164] = t7
        byte [sp + 0x155] = v1
         // do {
    loc_0x802be614:
        t8 = , unsigned  byte [s1 + 8]
        v1 = 0x800d << 16
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x802be61c: // orphan
             v1 += 0x510
             if                       // likely
             t3 = 0xde00 << 16

    loc_0x802be628: // orphan
         s0 = [v1 + 0]
         t4 = 0x8009 << 16
         t4 += 0x4e38
         t2 = s0 + 8
         [v1 + 0] = t2
         a0 = 0 + 0xe6
         a1 = 0 + 0xff
         a2 = 0 + 0xf0
         [s0 + 4] = t4
         call 0x88002c2c          // 0x88002c2c(0xe6, 0xff, 0xf0, 0x0)
         [s0 + 0] = t3
         s1 = 0x8801 << 16
         s1 -= 0x133c
         call 0x8004d1fc          // 0x8004d1fc(0xe6, 0xff, 0xf0, 0x0)
         a0 = [s1 + 0]
         call 0x8004ca10          // 0x8004ca10(-1, 0xff, 0xf0, 0x0)
         a0 = [s1 + 0]
         s0 = v0
         call 0x8004ca10          // 0x8004ca10(-1, 0xff, 0xf0, 0x0)
         a0 = [s1 + 0]
         mtc1 v0, f6
         at = 0x4480 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x8851 << 16
         lwc1 f12, -0x2ba0, at
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f10, f8, f2
         mtc1 s0, f8
         div.s f6, f10, f12
         cvt.s.w f10, f8
         c.lt.s f4, f6
         mul.s f4, f2, f10
         bc1f 0x802be6c8
         div.s f6, f4, f12
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802be6d4
         add.s f8, f0, f6

    loc_0x802be6d4: // orphan
         a0 = 0 + 0x38
         a1 = 0 + 0x4e
         a2 = 0 + 0x20f
         trunc.w.s f10, f8
         a3 = 0 + 0x22
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         mfc1 t9, f10
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x38, 0x4e, 0x20f, 0x22)
         [sp + 0x18] = t9
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]

    loc_0x802be70c: // orphan
         t6 = 0x8009 << 16
         t6 += 0x4e38
         [sp + 0x80] = t6
         t7 = , unsigned  byte [s1 + 9]
         v1 = 0x800d << 16
         v1 += 0x510
         if                       // unlikely
         t2 = 0xde00 << 16

    loc_0x802be72c: // orphan
         s0 = [v1 + 0]
         t3 = 0x8009 << 16
         t3 += 0x4e00
         t8 = s0 + 8
         [v1 + 0] = t8
         t6 = 0x8851 << 16
         [s0 + 4] = t3
         [s0 + 0] = t2
         t6 = [t6 - 0x2930]
         t4 = [sp + 0x138]
         a0 = 0x8851 << 16
         a1 = , unsigned  byte [t6 + 0xa]
         t5 = byte [t4 + 0]
         t7 = 0x20 << 16
         at = a1
         a1 <<= 4
         a1 += at
         a1 <<= 4
         t9 = t5 << 2
         a1 += at
         t9 += t5
         t9 <<= 2
         a1 += 0x3e
         a1 <<= 0x10
         a0 += t9
         a0 = , unsigned  byte [a0 - 0x2987]
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = t7
         a2 = 0 + 0x2a
         call 0x88000808          // 0x88000808(0xff, 0xffff102d, 0x2a, 0x0)
         a3 = 0
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t3 = 0x8009 << 16
         t3 += 0x4f50
         t8 = s0 + 8
         [a0 + 0] = t8
         t2 = 0xde00 << 16
         [s0 + 0] = t2
         [s0 + 4] = t3

    loc_0x802be7d0: // orphan
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4de0
         t4 = s0 + 8
         [a0 + 0] = t4
         t5 = 0xde00 << 16
         t7 = 0x8009 << 16
         t7 += 0x4f50
         t6 = 0 + 0x14f
         [s0 + 0] = t5
         [s0 + 4] = t9
         [sp + 0x7c] = t7
         [sp + 0x10] = t6
         a1 = 0 + 0x38
         a2 = 0 + 0x70
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x38, 0x70, 0x0)
         a3 = 0 + 0x20f
         t8 = [sp + 0x164]
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0
         if                       // likely
         t2 = sp + 0x14c

    loc_0x802be830: // orphan
         [sp + 0x78] = t2
         s2 = 0xf700 << 16

    loc_0x802be838: // orphan
         a0 = 0x800d << 16
         a0 += 0x510
         t3 = [sp + 0x78]
         s0 = [a0 + 0]
         t5 = 0xe700 << 16
         s3 = [t3 + 0]
         t4 = s0 + 8
         [a0 + 0] = t4
         [s0 + 4] = 0
         [s0 + 0] = t5
         s0 = [a0 + 0]
         t6 = 0x9a9 << 16
         t6 |= 0x9a9
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = t6
         [s0 + 0] = s2
         s6 = 0
         fp = 0
         [sp + 0x170] = 0
         s4 = 0 + 0x73
         s3 += 4

    loc_0x802be890: // orphan
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]
         t7 = halfword [sp + 0x15e]
         s7 = 0
         t2 = halfword [t8 + 0x56]
         s5 = t7 - t2
         s5 += 0x3b
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802be8b4: // orphan
         if                       // likely
         t3 = [sp + 0x16c]

    loc_0x802be8bc: // orphan
         t4 = sp + 0x154
         s0 = t3 + t4
         v0 = byte [s0 + 0]
         if                       // unlikely
         

    loc_0x802be8d0: // orphan
         call 0x8005caa4          // 0x8005caa4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x20
         if                       // likely
         

    loc_0x802be8e0: // orphan
         v0 = byte [s0 + 0]

    loc_0x802be8e4: // orphan
         s1 = 0x8851 << 16
         if                       // likely
         s1 = [s1 - 0x2930]

    loc_0x802be8f0: // orphan
         t5 = , unsigned  byte [s1 + 0x2c]
         if                       // likely
         a0 = 0x800d << 16

    loc_0x802be8f8: // orphan
         t5 = , unsigned  byte [s1 + 0x2c]
         if                       // likely
         a0 = 0x800d << 16

    loc_0x802be8fc: // orphan
         a0 += 0x510
         s0 = [a0 + 0]
         t6 = 0xe700 << 16
         t7 = 0x39cf << 16
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = 0
         [s0 + 0] = t6
         s0 = [a0 + 0]
         t7 |= 0x39cf
         fp = 0 + 1
         t8 = s0 + 8
         [a0 + 0] = t8
         [s0 + 4] = t7
         goto 0x802bea0c
         [s0 + 0] = s2

    loc_0x802be93c: // orphan
         t2 = [s1 + 0x80]
         if                       // unlikely
         v1 = 0x800d << 16

    loc_0x802be948: // orphan
         v1 += 0x510
         s0 = [v1 + 0]
         t4 = 0xe700 << 16
         t3 = s0 + 8
         [v1 + 0] = t3
         [s0 + 4] = 0
         [s0 + 0] = t4
         t5 = [sp + 0x78]
         v1 = 0x800d << 16
         v1 += 0x510
         t9 = [t5 + 0]
         t6 = , unsigned  byte [t9 + 0]
         at = , s6 < t6
         if                       // likely
         

    loc_0x802be984: // orphan
         s0 = [v1 + 0]
         t7 = 0x9a9 << 16
         t7 |= 0x9a9
         t8 = s0 + 8
         [v1 + 0] = t8
         [s0 + 4] = t7
         goto 0x802bea0c
         [s0 + 0] = s2

    loc_0x802be9a4: // orphan
         call 0x880007b0          // 0x880007b0(0x0, 0x0, 0x0, 0x0)
         a0 = s3
         if                       // likely
         

    loc_0x802be9b4: // orphan
         call 0x80063754          // 0x80063754(0x0, 0x0, 0x0, 0x0)
         a0 = , unsigned  byte [s3 + 1]
         if                       // likely
         v1 = 0x800d << 16

    loc_0x802be9c0: // orphan
         v1 = 0x800d << 16

    loc_0x802be9c4: // orphan
         v1 += 0x510
         s0 = [v1 + 0]
         t3 = 0x5007 << 16
         t3 |= 0x5007
         t2 = s0 + 8
         [v1 + 0] = t2
         [s0 + 4] = t3
         goto 0x802bea0c
         [s0 + 0] = s2

    loc_0x802be9e8: // orphan
         s0 = 0x800d << 16
         s0 = [s0 + 0x510]
         at = 0x800d << 16
         t5 = 0x9a9 << 16
         t4 = s0 + 8
         [at + 0x510] = t4
         t5 |= 0x9a9
         [s0 + 4] = t5
         [s0 + 0] = s2

    loc_0x802bea0c: // orphan
         a0 = s5 << 0x10
         a1 = s4 << 0x10
         t9 = 0x30 << 16
         [sp + 0x10] = t9
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         a2 = 0 + 0x56
         call 0x88001144          // 0x88001144(0x0, 0x0, 0x56, 0x0)

    loc_0x802bea2c: // orphan
         a3 = 0 + 0x41
         s5 += 0x57
         s5 <<= 0x10
         s7 += 1
         at = 0 + 6
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s3 += 0x58

    loc_0x802bea54: // orphan
         t6 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         at = 0 + 5
         t8 = t6 + 1
         [sp + 0x170] = t8
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bea74: // orphan
         t7 = [sp + 0x16c]
         t3 = [sp + 0x78]
         t5 = halfword [sp + 0x15e]
         t6 = [sp + 0x164]
         t2 = t7 + 1
         t4 = t3 + 4
         t9 = t5 + 0x20f
         halfword [sp + 0x15e] = t9
         [sp + 0x78] = t4
         if                       // likely
         [sp + 0x16c] = t2

    loc_0x802beaa0: // orphan
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802beaa8: // orphan
         s3 = 0x800d << 16
         s3 += 0x510
         s0 = [s3 + 0]
         t7 = 0xe700 << 16
         s6 = 0x7d3f << 16
         t8 = s0 + 8
         [s3 + 0] = t8
         [s0 + 4] = 0
         [s0 + 0] = t7
         s0 = [s3 + 0]
         s6 |= 0x7d3f
         s2 = 0xf700 << 16
         t3 = s0 + 8
         [s3 + 0] = t3
         [s0 + 4] = s6
         [s0 + 0] = s2
         t4 = [sp + 0x164]
         if                       // likely
         s1 = 0 + 0x91

    loc_0x802beaf4: // orphan
         s0 = 0 + 4

    loc_0x802beaf8: // orphan
         t5 = 0x8851 << 16
         t5 = [t5 - 0x2930]
         t6 = halfword [sp + 0x15e]
         s7 = 0
         t9 = halfword [t5 + 0x56]
         t2 = s1 - t9
         s5 = t2 + t6
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802beb1c: // orphan
         a0 = s5 << 0x10
         t8 = 0x30 << 16
         [sp + 0x10] = t8
         a0 = , signed  a0 >> 0x10
         a1 = 0 + 0x73
         a2 = 0 + 1
         call 0x88001144          // 0x88001144(0x0, 0x73, 0x1, 0x0)
         a3 = 0 + 0x149
         s5 += 0x57
         s5 <<= 0x10
         s7 += 1
         at = 0 + 5
         if                       // likely
         s5 = , signed  s5 >> 0x10

    loc_0x802beb54: // orphan
         t3 = 0x8851 << 16
         t3 = [t3 - 0x2930]
         t7 = halfword [sp + 0x15e]
         s4 = 0 + 0xb4
         t4 = halfword [t3 + 0x56]
         [sp + 0x170] = 0
         s5 = t7 - t4
         s5 += 0x3b
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802beb7c: // orphan
         a0 = s5 << 0x10
         a1 = s4 << 0x10
         t5 = 0x30 << 16
         [sp + 0x10] = t5
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         a2 = 0 + 0x209
         call 0x88001144          // 0x88001144(0x0, 0x0, 0x209, 0x0)
         a3 = 0 + 1
         t9 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t2 = t9 + 1
         [sp + 0x170] = t2
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bebbc: // orphan
         t6 = [sp + 0x16c]
         t3 = halfword [sp + 0x15e]
         t4 = [sp + 0x164]
         t8 = t6 + 1
         t7 = t3 + 0x20f
         halfword [sp + 0x15e] = t7
         if                       // likely
         [sp + 0x16c] = t8

    loc_0x802bebd8: // orphan
         t6 = [sp + 0x16c]
         t3 = halfword [sp + 0x15e]
         t4 = [sp + 0x164]
         t8 = t6 + 1
         t7 = t3 + 0x20f
         halfword [sp + 0x15e] = t7
         if                       // likely
         [sp + 0x16c] = t8

    loc_0x802bebdc: // orphan
         s3 = 0x800d << 16
         s3 += 0x510
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802bebec: // orphan
         t5 = 0 + 0x1e0
         [sp + 0x10] = t5
         a0 = s3
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x0, 0x0, 0x0, 0x0)
         a3 = 0 + 0x280
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t2 = 0xe700 << 16
         a1 = 0x8851 << 16
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = 0
         [s0 + 0] = t2
         s0 = [a0 + 0]
         a1 -= 0x2930
         s7 = 0
         t6 = s0 + 8
         [a0 + 0] = t6
         [s0 + 4] = s6
         [s0 + 0] = s2
         s1 = [a1 + 0]
         t3 = , unsigned  byte [s1 + 0x2d]
         s5 = halfword [s1 + 0x94]
         if                       // unlikely
         s3 = 0xf600 << 16

    loc_0x802bec5c: // orphan
         s0 = [a0 + 0]

    loc_0x802bec60: // orphan
         v1 = s5 & 0x3ff
         v1 <<= 0xe
         t7 = s0 + 8
         [a0 + 0] = t7
         t8 = v1 | s3
         t4 = t8 | 0x1a0
         t5 = v1 | 0x154
         [s0 + 4] = t5
         [s0 + 0] = t4
         t9 = [a1 + 0]
         s5 += 0x18
         s7 += 1
         t2 = , unsigned  byte [t9 + 0x2d]
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10
         at = , unsigned  , s7 < t2
         bnel at, 0, 0x802bec60   // likely
         s0 = [a0 + 0]

    loc_0x802beca8: // orphan
         s7 = 0

    loc_0x802becac: // orphan
         s0 = [a0 + 0]
         t3 = 0xe700 << 16
         t8 = 0x9a9 << 16
         t6 = s0 + 8
         [a0 + 0] = t6
         [s0 + 4] = 0
         [s0 + 0] = t3
         s0 = [a0 + 0]
         t8 |= 0x9a9
         s3 = 0xf600 << 16
         t7 = s0 + 8
         [a0 + 0] = t7
         [s0 + 4] = t8
         [s0 + 0] = s2
         s0 = [a0 + 0]
         s1 = [a1 + 0]
         t4 = s0 + 8
         [a0 + 0] = t4
         t9 = halfword [s1 + 0x9a]
         t5 = halfword [s1 + 0x98]
         t2 = t5 + t9
         t6 = t2 - 1
         t3 = t6 & 0x3ff
         t7 = t3 << 0xe
         t8 = t7 | s3
         t4 = t8 | 0x1a0
         [s0 + 0] = t4
         t5 = [a1 + 0]
         t4 = 0x8009 << 16
         t4 += 0x4d90
         t9 = halfword [t5 + 0x98]
         t8 = 0xde00 << 16
         t2 = t9 & 0x3ff
         t6 = t2 << 0xe
         t3 = t6 | 0x154
         [s0 + 4] = t3
         s0 = [a0 + 0]
         t7 = s0 + 8
         [a0 + 0] = t7
         [s0 + 4] = t4
         [s0 + 0] = t8
         s1 = [a1 + 0]
         t5 = halfword [s1 + 0x56]
         bnel t5, 0, 0x802beef8   // likely
         a0 = sp + 0x144

    loc_0x802bed60: // orphan
         t9 = byte [s1 + 0x30]
         a0 = , unsigned  byte [sp + 0x13f]
         if                       // unlikely
         t6 = a0 << 2

    loc_0x802bed70: // orphan
         s6 = 0 + 0xff
         unsigned , hi
         at = 0x437f << 16
         mtc1 at, f8
         mtc1 0, f18
         t6 -= a0
         t6 <<= 3
         t6 += a0
         at = 0xbf00 << 16
         a1 = 0
         t6 <<= 2
         v0 = lo
         t2 = v0 - 0
         mtc1 t2, f4
         
         cvt.s.w f6, f4
         mtc1 v0, f4
         div.s f10, f6, f8
         cvt.s.w f6, f4
         c.lt.s f18, f10
         
         bc1fl 0x802bede0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bede8
         at = 0x437f << 16

    loc_0x802bede8: // orphan
         mtc1 at, f8
         v1 = s6 - a0
         t7 = v1 << 3
         div.s f10, f6, f8
         t7 += v1
         t7 <<= 2
         t7 -= v1
         t7 <<= 2
         t8 = v0 + t7
         mtc1 t8, f8
         t9 = v1 << 2
         t9 -= v1
         t9 <<= 3
         t9 += v1
         t9 <<= 2
         t2 = a1 + t9
         add.s f4, f0, f10
         cvt.s.w f10, f8
         trunc.w.s f6, f4
         mtc1 at, f4
         at = 0xbf00 << 16
         div.s f2, f10, f4
         mfc1 t3, f6
         mtc1 t2, f10
         byte [sp + 0x144] = t3
         t3 = a1 - t6
         t7 = t3 + 0x639c
         cvt.s.w f4, f10
         mtc1 t7, f10
         c.lt.s f18, f2
         
         bc1fl 0x802bee80
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bee88
         add.s f6, f0, f2

    loc_0x802bee88: // orphan
         at = 0x437f << 16
         trunc.w.s f8, f6
         mtc1 at, f6
         at = 0xbf00 << 16
         mfc1 t5, f8
         div.s f8, f4, f6
         byte [sp + 0x145] = t5
         cvt.s.w f4, f10
         c.lt.s f18, f8
         
         bc1fl 0x802beecc
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802beed4
         at = 0x437f << 16

    loc_0x802beed4: // orphan
         mtc1 at, f6
         
         div.s f8, f4, f6
         add.s f10, f0, f8

    loc_0x802beee4: // orphan
         trunc.w.s f4, f10
         mfc1 t4, f4
         goto 0x802bef10
         byte [sp + 0x146] = t4

    loc_0x802beef4: // orphan
         a0 = sp + 0x144

    loc_0x802beef8: // orphan
         a1 = 0
         a2 = 0 + 0x8c
         call 0x8003573c          // 0x8003573c(0x0, 0x0, 0x8c, 0x0)
         a3 = 0 + 0x64
         mtc1 0, f18
         s6 = 0 + 0xff

    loc_0x802bef10: // orphan
         t0 = 0x800d << 16
         t0 += 0x510
         s0 = [t0 + 0]
         t9 = 0xfa00 << 16
         t1 = 0x8851 << 16
         t5 = s0 + 8
         [t0 + 0] = t5
         [s0 + 0] = t9
         t6 = , unsigned  byte [sp + 0x144]
         t8 = , unsigned  byte [sp + 0x145]
         t2 = , unsigned  byte [sp + 0x146]
         t3 = t6 << 0x18

    loc_0x802bef40: // orphan
         t4 = t8 << 0x10
         t5 = t3 | t4
         t6 = t2 << 8
         t7 = t5 | t6
         t8 = t7 | 0xff
         [s0 + 4] = t8
         s0 = [t0 + 0]
         t1 -= 0x2930
         t4 = [t1 + 0]
         t3 = s0 + 8
         [t0 + 0] = t3
         t9 = halfword [t4 + 0x92]
         t3 = 0x17 << 16
         t3 |= 0xc154
         t2 = t9 + 0x5f
         t5 = t2 & 0x3ff
         t6 = t5 << 0xe           // fp
         t7 = t6 | s3             // fp
         t8 = t7 | 0x1a4
         [s0 + 0] = t8
         [s0 + 4] = t3
         s1 = [t1 + 0]
         t4 = , unsigned  byte [s1 + 0x2d]
         s5 = halfword [s1 + 0x96]
         if                       // unlikely
         s4 = 0 + 0xa74

    loc_0x802befa8: // orphan
         t9 = , unsigned  byte [s1 + 0x2e]

    loc_0x802befac: // orphan
         a0 = sp + 0x144
         a1 = 0 + 0x46
         at = , unsigned  , s7 < t9
         if                       // likely
         a2 = 0 + 0x46

    loc_0x802befc0: // orphan
         unsigned , hi
         t2 = [sp + 0x138]
         t5 = lo
         t6 = t2 + t5
         t7 = , unsigned  byte [t6 + 0x1700]
         bnel t7, 0, 0x802beff4   // likely
         t8 = halfword [s1 + 0x56]

    loc_0x802befdc: // orphan
         call 0x8003573c          // 0x8003573c(0x0, 0x0, 0x0, 0x0)
         a3 = 0 + 0x46
         mtc1 0, f18
         goto 0x802bf18c
         s2 = s7 + 1

    loc_0x802beff4: // orphan
         a0 = sp + 0x144
         a1 = 0
         if                       // unlikely
         a2 = 0 + 0x46

    loc_0x802bf004: // orphan
         t3 = byte [s1 + 0x30]
         s2 = s7 + 1
         t4 = s1 + t3
         t9 = byte [t4 + 0x31]
         bnel s2, t9, 0x802bf17c  // likely
         a3 = 0 + 0x82

    loc_0x802bf01c: // orphan
         a0 = , unsigned  byte [sp + 0x13f]
         t2 = 0 + 0xff
         at = 0x437f << 16
         unsigned , hi
         v1 = t2 - a0
         t5 = v1 << 3
         t5 += v1
         t5 <<= 2
         t5 -= v1
         t5 <<= 1
         mtc1 at, f10
         t7 = v1 << 6
         t7 += v1
         v0 = lo
         mtc1 v0, f6
         t6 = v0 + t5
         mtc1 t6, f4
         cvt.s.w f8, f6
         t7 <<= 1
         t8 = 0 + t7
         t3 = a0 << 6
         t3 += a0
         cvt.s.w f6, f4
         t3 <<= 1
         t4 = ~t3
         t2 = v0 - 0
         div.s f2, f8, f10
         mtc1 at, f8
         mtc1 t8, f10
         
         cvt.s.w f4, f10
         div.s f12, f6, f8
         mtc1 at, f6
         at = 0 | 0x817e
         t9 = t4 + at
         mtc1 t9, f8
         at = 0x437f << 16
         cvt.s.w f10, f8
         div.s f14, f4, f6
         mtc1 t2, f6
         mtc1 at, f4
         cvt.s.w f8, f6
         div.s f16, f10, f4
         mtc1 at, f10
         at = 0xbf00 << 16
         div.s f4, f8, f10
         c.lt.s f18, f4
         
         bc1fl 0x802bf0f8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf100
         add.s f6, f0, f2

    loc_0x802bf100: // orphan
         at = 0xbf00 << 16
         c.lt.s f18, f12
         trunc.w.s f8, f6
         mfc1 t6, f8
         bc1f 0x802bf128
         byte [sp + 0x144] = t6
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf134
         add.s f10, f0, f12

    loc_0x802bf134: // orphan
         at = 0xbf00 << 16
         c.lt.s f18, f14
         trunc.w.s f4, f10
         mfc1 t8, f4
         bc1f 0x802bf15c
         byte [sp + 0x145] = t8
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf168
         add.s f6, f0, f16

    loc_0x802bf168: // orphan
         trunc.w.s f8, f6
         mfc1 t4, f8
         goto 0x802bf18c
         byte [sp + 0x146] = t4

    loc_0x802bf178: // orphan
         a3 = 0 + 0x82

    loc_0x802bf17c: // orphan
         call 0x8003573c          // 0x8003573c(0x0, 0x0, 0x0, 0x0)
         s2 = s7 + 1
         mtc1 0, f18
         

    loc_0x802bf18c: // orphan
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t2 = 0xfa00 << 16
         s1 = 0x8851 << 16
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 0] = t2
         t6 = , unsigned  byte [sp + 0x144]
         t3 = , unsigned  byte [sp + 0x145]
         t5 = , unsigned  byte [sp + 0x146]
         t7 = t6 << 0x18
         t4 = t3 << 0x10
         t9 = t7 | t4
         t6 = t5 << 8
         t8 = t9 | t6
         t3 = t8 | 0xff
         [s0 + 4] = t3
         s0 = [a0 + 0]
         t4 = s5 + 0x17
         t2 = t4 & 0x3ff
         t7 = s0 + 8
         [a0 + 0] = t7
         t5 = t2 << 0xe
         t8 = s5 & 0x3ff
         t3 = t8 << 0xe
         t9 = t5 | s3
         t6 = t9 | 0x1a4
         t7 = t3 | 0x154
         [s0 + 4] = t7
         [s0 + 0] = t6

    loc_0x802bf208: // orphan
         s1 = [s1 - 0x2930]
         s5 += 0x18
         s5 <<= 0x10
         t4 = , unsigned  byte [s1 + 0x2d]
         s5 = , signed  s5 >> 0x10
         s7 = s2
         at = , unsigned  , s2 < t4
         bnel at, 0, 0x802befac   // likely
         t9 = , unsigned  byte [s1 + 0x2e]

    loc_0x802bf22c: // orphan
         t1 = 0x8851 << 16
         t0 = 0x800d << 16
         t0 += 0x510
         t1 -= 0x2930
         s7 = 0

    loc_0x802bf240: // orphan
         s0 = [t0 + 0]
         t5 = 0xde00 << 16
         t2 = s0 + 8
         [t0 + 0] = t2
         [s0 + 0] = t5
         t9 = [sp + 0x80]
         [s0 + 4] = t9
         t6 = [t1 + 0]
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = [t6 + 0x28]
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         t8 = 0 - 0x10
         t3 = 0 - 0x10
         v1 = [s1 + 0x28]
         a0 = halfword [s1 + 0xa0]
         t7 = 0 + 0x400
         a2 = halfword [v1 + 0]
         a3 = halfword [v1 + 2]
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x20] = 0
         [sp + 0x18] = t7
         [sp + 0x14] = t3
         [sp + 0x10] = t8
         call 0x80044270          // 0x80044270(0xffff, 0x0, 0x17, 0x81a4)
         a1 = 0 + 0x57
         a0 = 0 + 0xff
         a1 = 0 + 0xff
         call 0x88002ba0          // 0x88002ba0(0xff, 0xff, 0x17, 0x81a4)
         a2 = 0 + 0xff
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1338]
         a1 = 0 + 0x180
         call 0x8004d27c          // 0x8004d27c(-1, 0x180, 0xff, 0x81a4)
         a2 = 0 + 2
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         t2 = , unsigned  byte [s1 + 8]
         beql t2, 0, 0x802bf368   // unlikely
         a0 = 0 + 0xef

    loc_0x802bf2e4: // orphan
         a0 = halfword [s1 + 0x8e]
         a2 = , unsigned  halfword [s1 + 0x90]
         t5 = 0 + 3
         [sp + 0x10] = t5
         a1 = 0 + 0x52
         call 0x88002ec0          // 0x88002ec0(0xffff, 0x52, 0xffff, 0x0)
         a3 = 0 + 0x1a
         t9 = 0x8851 << 16
         t9 = [t9 - 0x2930]
         t6 = 0 + 3
         a0 = 0 + 0x5c
         a2 = , unsigned  halfword [t9 + 0x8c]
         [sp + 0x10] = t6
         a1 = 0 + 0x52
         call 0x88002ec0          // 0x88002ec0(0x5c, 0x52, 0xffff, 0x1a)
         a3 = 0 + 0x1a
         a2 = 0x8801 << 16
         a2 = [a2 - 0x1334]
         a0 = 0 + 0x40
         a1 = 0 + 0x53
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x40, 0x53, -1, 0x0)
         [sp + 0x10] = 0
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]
         a2 = 0x8801 << 16
         a2 = [a2 - 0x1330]
         a0 = halfword [t8 + 0x9c]
         [sp + 0x10] = 0
         a1 = 0 + 0x53
         call 0x8004d19c          // 0x8004d19c(0xffff, 0x53, -1, 0x0)
         a3 = 0
         a0 = 0 + 0xef

    loc_0x802bf368: // orphan
         call 0x8004d334          // 0x8004d334(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         call 0x8004d40c          // 0x8004d40c(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t3 = 0x8851 << 16
         t3 = [t3 - 0x2930]
         a1 = 0 + 0x100
         a2 = 0 + 1
         call 0x8004d27c          // 0x8004d27c(0x1, 0x100, 0x1, 0x0)
         a0 = [t3 + 0x20]
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]
         s5 = halfword [s1 + 0x9e]
         t7 = , unsigned  byte [s1 + 0x2e]
         s5 += 4
         s5 <<= 0x10
         if                       // unlikely
         s5 = , signed  s5 >> 0x10

    loc_0x802bf3b0: // orphan
         s4 = 0x8851 << 16
         s3 = 0xa0a0 << 16
         s3 |= 0xa0ff
         s4 -= 0x2bb0
         s1 = [sp + 0x138]
         s6 = 0 - 1

    loc_0x802bf3c8: // orphan
         v1 = 0x800d << 16
         v1 += 0x510
         s0 = [v1 + 0]
         t2 = 0xe700 << 16
         a0 = s5
         t4 = s0 + 8
         [v1 + 0] = t4
         [s0 + 4] = 0
         [s0 + 0] = t2
         t5 = , unsigned  byte [s1 + 0x1700]
         a1 = 0 + 0x58
         a2 = 0 + 1
         if                       // likely
         a3 = s4

    loc_0x802bf400: // orphan
         s0 = [v1 + 0]
         t6 = 0xfb00 << 16
         t9 = s0 + 8
         [v1 + 0] = t9
         [s0 + 4] = s3
         goto 0x802bf434
         [s0 + 0] = t6

    loc_0x802bf41c: // orphan
         s0 = [v1 + 0]
         t3 = 0xfb00 << 16
         t8 = s0 + 8
         [v1 + 0] = t8
         [s0 + 4] = s6
         [s0 + 0] = t3

    loc_0x802bf434: // orphan
         s2 = s7 + 1
         call 0x8004d5b8          // 0x8004d5b8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = s2
         t7 = 0x8851 << 16
         t7 = [t7 - 0x2930]
         s5 += 0x18
         s5 <<= 0x10
         t4 = , unsigned  byte [t7 + 0x2e]
         s5 = , signed  s5 >> 0x10
         s7 = s2
         at = , unsigned  , s2 < t4
         if                       // likely
         s1 += 0xa74

    loc_0x802bf468: // orphan
         a0 = 0x800d << 16
         t2 = 0 + 0x14f
         s6 = 0 - 1
         [sp + 0x10] = t2
         a0 += 0x510
         a1 = 0 + 0x38
         a2 = 0 + 0x70
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x38, 0x70, 0x0)
         a3 = 0 + 0x20f
         t0 = 0x800d << 16
         t0 += 0x510
         s0 = [t0 + 0]
         t9 = 0xe700 << 16
         t3 = 0xe6ff << 16
         t5 = s0 + 8
         [t0 + 0] = t5
         [s0 + 4] = 0
         [s0 + 0] = t9
         s0 = [t0 + 0]
         t3 |= 0xf0ff
         t8 = 0xfb00 << 16
         t6 = s0 + 8
         [t0 + 0] = t6
         [s0 + 4] = t3
         [s0 + 0] = t8
         t7 = [sp + 0x164]
         if                       // likely
         s0 = 0 + 0x38

    loc_0x802bf4d8: // orphan
         t4 = 0x8851 << 16
         t4 = [t4 - 0x2930]
         t9 = halfword [sp + 0x15e]
         t6 = 0 + 3
         t2 = halfword [t4 + 0x56]
         [sp + 0x10] = t6
         a1 = 0 + 0x70
         t5 = s0 - t2
         a0 = t5 + t9
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         a2 = 0 + 0x20f
         call 0x88002ec0          // 0x88002ec0(0xffff0001, 0x70, 0x20f, 0x0)
         a3 = 0 + 0x14f
         t8 = [sp + 0x16c]
         t7 = halfword [sp + 0x15e]
         t2 = [sp + 0x164]
         t3 = t8 + 1
         t4 = t7 + 0x20f
         halfword [sp + 0x15e] = t4
         if                       // likely
         [sp + 0x16c] = t3

    loc_0x802bf530: // orphan
         t0 = 0x800d << 16
         t0 += 0x510
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802bf540: // orphan
         s0 = [t0 + 0]
         t9 = 0xe700 << 16
         t8 = 0xfb00 << 16
         t5 = s0 + 8
         [t0 + 0] = t5
         [s0 + 4] = 0
         [s0 + 0] = t9
         s0 = [t0 + 0]
         t7 = 0x8851 << 16
         a1 = 0 + 0x180
         t6 = s0 + 8
         [t0 + 0] = t6
         [s0 + 4] = s6
         [s0 + 0] = t8
         t7 = [t7 - 0x2930]
         a2 = 0 + 2
         call 0x8004d27c          // 0x8004d27c(0x0, 0x180, 0x2, 0x0)
         a0 = [t7 + 0x24]
         t4 = [sp + 0x164]
         if                       // likely
         t3 = sp + 0x14c

    loc_0x802bf594: // orphan
         t2 = t4 << 2
         t5 = t2 + t3
         fp = 0x8851 << 16
         fp -= 0x2bac
         [sp + 0x74] = t5
         [sp + 0x78] = t3
         s2 = 0 + 0x12

    loc_0x802bf5b0: // orphan
         t9 = [sp + 0x78]
         s6 = 0
         s4 = 0 + 0x91
         s3 = [t9 + 0]
         [sp + 0x170] = 0
         s3 += 4

    loc_0x802bf5c8: // orphan
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]
         t6 = halfword [sp + 0x15e]
         s7 = 0
         t7 = halfword [t8 + 0x56]
         s5 = t6 - t7
         s5 += 0x49
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802bf5ec: // orphan
         t4 = [sp + 0x78]
         a0 = s5 - 9
         a0 <<= 0x10
         t2 = [t4 + 0]
         a0 = , signed  a0 >> 0x10
         a1 = s4 << 0x10
         t3 = , unsigned  byte [t2 + 0]
         t6 = 0x8851 << 16
         if                       // likely
         t5 = 0 + 5

    loc_0x802bf614: // orphan
         goto 0x802bf720
         [sp + 0x170] = t5

    loc_0x802bf61c: // orphan
         t9 = , unsigned  byte [s3 + 0x1e]
         t8 = t9 & 1
         bnel t8, 0, 0x802bf700   // unlikely
         s7 += 1

    loc_0x802bf62c: // orphan
         t6 = [t6 - 0x2930]
         t7 = 0 + 0x400
         t4 = 0 + 0x400
         v0 = [t6 + 0x20]
         t2 = 0 + 1
         a1 = , signed  a1 >> 0x10
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         [sp + 0x24] = t2
         [sp + 0x20] = 0
         [sp + 0x1c] = t4
         [sp + 0x18] = t7
         [sp + 0x14] = 0
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x17, 0x81a4)
         [sp + 0x10] = 0
         t3 = , unsigned  byte [s3 + 0]
         at = 0 + 0xfc
         a0 = s5
         if                       // likely
         a1 = s4

    loc_0x802bf67c: // orphan
         s1 = s5
         s0 = 0

    loc_0x802bf684: // orphan
         t5 = 0x8851 << 16
         t5 = [t5 - 0x2930]
         a0 = s1 + s0
         a0 <<= 0x10
         v0 = [t5 + 0x24]
         a1 = s4 << 0x10
         t9 = 0 + 0x400
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         t8 = 0 + 0x400
         t6 = 0 + 2
         [sp + 0x24] = t6
         [sp + 0x1c] = t8
         [sp + 0x20] = 0
         [sp + 0x18] = t9
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a1 = , signed  a1 >> 0x10
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x17, 0x81a4)
         a0 = , signed  a0 >> 0x10
         s0 += 9
         if                       // likely
         

    loc_0x802bf6e0: // orphan
         goto 0x802bf700
         s7 += 1

    loc_0x802bf6e8: // orphan
         t7 = , unsigned  byte [s3 + 0x1d]
         a2 = 0
         a3 = fp
         call 0x8004d5b8          // 0x8004d5b8(0x0, 0x0, 0x0, 0x178000)
         [sp + 0x10] = t7
         s7 += 1

    loc_0x802bf700: // orphan
         s5 += 0x57
         s5 <<= 0x10
         at = , unsigned  , s7 < 6
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s3 += 0x58

    loc_0x802bf720: // orphan
         t4 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t2 = t4 + 1
         at = , unsigned  , t2 < 5
         [sp + 0x170] = t2
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bf740: // orphan
         t3 = [sp + 0x78]
         t9 = halfword [sp + 0x15e]
         t6 = [sp + 0x74]
         t5 = t3 + 4
         t8 = t9 + 0x20f
         halfword [sp + 0x15e] = t8
         if                       // likely
         [sp + 0x78] = t5

    loc_0x802bf760: // orphan
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802bf768: // orphan
         t7 = [sp + 0x164]
         if                       // likely
         t4 = sp + 0x14c

    loc_0x802bf770: // orphan
         t7 = [sp + 0x164]
         if                       // likely
         t4 = sp + 0x14c

    loc_0x802bf774: // orphan
         v0 = 0x8851 << 16
         v0 -= 0x2930
         [sp + 0x78] = t4

    loc_0x802bf780: // orphan
         s1 = [v0 + 0]
         t3 = [sp + 0x16c]
         s6 = 0
         t2 = , unsigned  byte [s1 + 0x10]
         s4 = 0 + 0x77
         t9 = t2 ^ t3
         t8 = t9 << 2
         t5 = s1 + t8
         s0 = [t5 + 0x14]
         [sp + 0x170] = 0

    loc_0x802bf7a8: // orphan
         t7 = [v0 + 0]
         t6 = halfword [sp + 0x15e]
         s7 = 0
         t4 = halfword [t7 + 0x56]
         s5 = t6 - t4
         s5 += 0x64
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802bf7c8: // orphan
         t2 = [sp + 0x78]
         v0 = 0x8851 << 16
         v0 -= 0x2930
         t3 = [t2 + 0]
         t8 = 0 + 5
         t9 = , unsigned  byte [t3 + 0]
         bnel s6, t9, 0x802bf7f4  // likely
         a0 = s5

    loc_0x802bf7e8: // orphan
         goto 0x802bf834
         [sp + 0x170] = t8

    loc_0x802bf7f4: // orphan
         a1 = s4
         a2 = s0
         a3 = 0
         call 0x8004d998          // 0x8004d998(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = 0
         s5 += 0x57
         s5 <<= 0x10
         s7 += 1
         at = 0 + 6
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s0 += 0xc80

    loc_0x802bf82c: // orphan
         v0 = 0x8851 << 16
         v0 -= 0x2930

    loc_0x802bf834: // orphan
         t5 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t7 = t5 + 1
         at = , unsigned  , t7 < 5
         [sp + 0x170] = t7
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bf854: // orphan
         t6 = [sp + 0x16c]
         t2 = [sp + 0x78]
         t9 = halfword [sp + 0x15e]
         t5 = [sp + 0x164]
         t4 = t6 + 1
         t3 = t2 + 4
         t8 = t9 + 0x20f
         halfword [sp + 0x15e] = t8
         [sp + 0x78] = t3
         if                       // likely
         [sp + 0x16c] = t4

    loc_0x802bf880: // orphan
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802bf888: // orphan
         a2 = 0x800d << 16
         a2 += 0x510
         s0 = [a2 + 0]
         t6 = 0xe700 << 16
         t9 = 0xffaa << 16
         t7 = s0 + 8
         [a2 + 0] = t7
         [s0 + 4] = 0
         [s0 + 0] = t6
         s0 = [a2 + 0]
         v0 = 0x8851 << 16
         t9 |= 0xff
         t2 = s0 + 8
         [a2 + 0] = t2
         t3 = 0xfb00 << 16
         v0 -= 0x2930
         [s0 + 0] = t3
         [s0 + 4] = t9
         t8 = [v0 + 0]
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x800d0510, 0x0)
         a0 = [t8 + 0x1c]
         t4 = [sp + 0x164]
         if                       // likely
         t5 = sp + 0x14c

    loc_0x802bf8e8: // orphan
         t7 = t4 << 2
         v1 = 0x8851 << 16
         v1 -= 0x2930
         s1 = t7 + t5
         [sp + 0x78] = t5
         s0 = 0 + 0x52

    loc_0x802bf900: // orphan
         t6 = [sp + 0x78]
         s6 = 0
         s4 = 0 + 0x7d
         s3 = [t6 + 0]
         [sp + 0x170] = 0
         s3 += 4

    loc_0x802bf918: // orphan
         t2 = [v1 + 0]
         t8 = halfword [sp + 0x15e]
         s7 = 0
         t3 = halfword [t2 + 0x56]
         t9 = s0 - t3
         s5 = t9 + t8
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

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
         bnel t3, 0, 0x802bf9bc   // unlikely
         s5 += 0x57

    loc_0x802bf964: // orphan
         t9 = , unsigned  byte [s3 + 1]
         a0 = s5 << 0x10
         a0 = , signed  a0 >> 0x10
         beql t9, 0, 0x802bf9bc   // likely
         s5 += 0x57

    loc_0x802bf978: // orphan
         t8 = [v1 + 0]
         a1 = s4 << 0x10
         t4 = 0 + 0x400
         v0 = [t8 + 0x1c]
         t7 = 0 + 0x400
         a1 = , signed  a1 >> 0x10
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         [sp + 0x20] = 0
         [sp + 0x1c] = t7
         [sp + 0x18] = t4
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x17, 0x81a4)
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

    loc_0x802bfa20: // orphan
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
         bnel t5, 0, 0x802bfdd0   // unlikely
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
         call 0x880009a8          // 0x880009a8(-1, 0xffff29bd, 0xffffac01, 0x0)
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

    loc_0x802cbcf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd04: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd20: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd54: // orphan
         if                       // unlikely
         

    loc_0x802cbd5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbd74: // orphan
         
         
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
