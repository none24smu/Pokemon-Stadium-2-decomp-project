/*
 * Function: 0x8021f280
 * ROM Offset: 0x00120280
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.8021f280 (int esi, int edx) {
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
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
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
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
}

/*
// Full analysis output
int fcn.8021f280 (int esi, int edx) {
    loc_0x80210238:
        ra = [sp + 0x24]
        t7 = halfword [a0 + 0x18]
        t8 = halfword [a0 + 0x1c]
        t9 = halfword [s0 + 0x1a]
        t0 = halfword [s0 + 0x1e]
        t1 = , unsigned  halfword [s0 + 4]
        a0 = t7 + t8  // arg1
        a1 = t9 + t0  // arg2
        a0 <<= 0x10   // arg1
        a1 <<= 0x10   // arg2
        a2 = [s0 + 0x10]
        a3 = halfword [s0 + 0xa]
        a0 = , signed  a0 >> 0x10 // arg1
        a1 = , signed  a1 >> 0x10 // arg2
        call fcn.822011ac
        [sp + 0x10] = t1
        a0 = s0
        call fcn.82200918
        a1 = , unsigned  halfword [s0 + 4]
        ra = [sp + 0x24]
        s0 = [sp + 0x20]
        sp += 0x28
        ret
        0x80210294
         // (break)
    loc_0x802107e8: // orphan
             bc1f 0x80210800
             add.s f18, f4, f6
             at = 0x3f00 << 16
             mtc1 at, f0
             goto 0x8021080c
             add.s f10, f0, f16

    loc_0x8021080c: // orphan
         mtc1 0, f6
         at = 0xbf00 << 16
         trunc.w.s f4, f10
         c.lt.s f6, f18
         mfc1 t5, f4
         bc1f 0x80210838
         halfword [a0 + 0x20] = t5 // arg1
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80210844
         add.s f8, f0, f18

    loc_0x80210844: // orphan
         t8 = halfword [a0 + 4]
         trunc.w.s f10, f8
         mfc1 t7, f10
         
         halfword [a0 + 0x22] = t7 // arg1
         t9 = [v1 + 0]
         if                       // likely
         t0 = , signed  t9 >> 1

    loc_0x80210864: // orphan
         at = t9 + 1
         t0 = , signed  at >> 1

    loc_0x8021086c: // orphan
         at = , t8 < t0
         if                       // likely
         

    loc_0x80210878: // orphan
         ret
         halfword [a0 + 6] = t1   // arg1

    loc_0x80210898: // orphan
         ret
         

    loc_0x80211130: // orphan
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = v0
         v1 = [s0 + 0]
         at = 0x1fff << 16
         at |= 0xffff
         t9 = v1 + 8
         [s0 + 0] = t9
         t6 = 0x100 << 16
         t6 |= 0x4008
         t7 = s2 & at
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t9 = 0x600 << 16
         t9 |= 0x406
         t8 = v1 + 8
         [s0 + 0] = t8
         t6 = 0 + 0x602
         [v1 + 4] = t6
         [v1 + 0] = t9
         ra = [sp + 0x3c]
         s2 = [sp + 0x38]
         s1 = [sp + 0x34]
         s0 = [sp + 0x30]
         ret
         sp += 0x90

    loc_0x80212e08: // orphan
         call 0x80007aec          // 0x80007aec(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 5
         s1 = 0 + 5

    loc_0x80212e14: // orphan
         call 0x80064d28          // 0x80064d28(0x0, 0x0, 0x0, 0x0)
         
         call fcn.822015b4
         
         call fcn.82201b70
         
         call fcn.822039c8
         
         call fcn.82203e70
         a0 = s0
         if                       // unlikely
         s0 = v0

    loc_0x80212e44: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret
         sp += 0x20

    loc_0x80213158: // orphan
         if                       // likely
         at = a0

    loc_0x80213160: // orphan
         at = a0 + 3              // arg1

    loc_0x80213164: // orphan
         a0 = , signed  at >> 2   // arg1
         a0 += 0x70               // arg1
         a0 <<= 0x10              // arg1
         at = 0x8221 << 16
         halfword [at + 0x5f2] = v0
         goto 0x802131bc
         a0 = , signed  a0 >> 0x10 // arg1

    loc_0x802131bc: // orphan
         t6 = 0x8221 << 16
         t6 = halfword [t6 + 0x608]
         at = 0x8221 << 16
         t8 = 0x8221 << 16
         t7 = v1 - t6
         halfword [at + 0x5fc] = t7
         t8 = halfword [t8 + 0x60a]
         halfword [at + 0x5fa] = a0
         halfword [at + 0x5f8] = v1
         t9 = a0 - t8             // arg1
         halfword [at + 0x5fe] = t9

    loc_0x802131e8: // orphan
         ret
         

    loc_0x8021358c: // orphan
         if                       // unlikely
         

    loc_0x80213594: // orphan
         break 7

    loc_0x80213598: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x802135a4: // orphan
         if                       // unlikely
         

    loc_0x802135ac: // orphan
         break 6

    loc_0x802135b0: // orphan
         if                       // likely
         

    loc_0x802135b8: // orphan
         v1 = v0 + 1

    loc_0x802135bc: // orphan
         ret
         v0 = v1

    loc_0x80213754: // orphan
         t5 = t4 | 0xff
         [v0 + 4] = t5
         call 0x8004ca60          // 0x8004ca60(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x64]
         v1 = [sp + 0x64]
         t9 = 0 + 1
         t4 = 0 + 5
         t6 = , unsigned  byte [v1 + 5]
         a3 = , unsigned  byte [v1 + 4]
         t5 = 0 + 5
         [sp + 0x10] = t6
         t7 = , unsigned  halfword [v1 + 0]
         t6 = halfword [s2 + 0x1c]
         a0 = v0
         [sp + 0x14] = t7
         t8 = , unsigned  halfword [v1 + 2]
         t7 = halfword [s2 + 0x1e]
         [sp + 0x30] = t5
         [sp + 0x2c] = t4
         [sp + 0x28] = 0
         [sp + 0x24] = 0
         [sp + 0x20] = 0
         [sp + 0x1c] = t9
         a1 = 0
         a2 = 0
         [sp + 0x34] = t6
         [sp + 0x18] = t8
         call 0x80045db4          // 0x80045db4(0x0, 0x0, 0x0, 0x0)
         [sp + 0x38] = t7
         at = 0x4080 << 16
         mtc1 at, f12
         lwc1 f2, 8, s0
         t0 = 0 + 1
         at = 0x41f8 << 16
         mul.s f4, f2, f12
         mtc1 at, f14
         cfc1 t8, 31
         ctc1 t0, 31
         
         cvt.w.s f6, f4
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213808: // orphan
         mtc1 at, f6
         t0 = 0 + 1
         sub.s f6, f4, f6
         ctc1 t0, 31
         
         cvt.w.s f6, f6
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // unlikely
         

    loc_0x80213834: // orphan
         mfc1 t0, f6
         at = 0x8000 << 16
         goto 0x8021385c
         t0 |= at

    loc_0x80213844: // orphan
         goto 0x8021385c
         t0 = 0 - 1

    loc_0x8021384c: // orphan
         mfc1 t0, f6
         
         if                       // unlikely
         

    loc_0x8021385c: // orphan
         ctc1 t8, 31
         lwc1 f0, 0xc, s0
         t1 = 0 + 1
         t7 = t0 & 0xfff
         mul.s f8, f0, f12
         t8 = t7 << 0xc
         cfc1 t9, 31
         ctc1 t1, 31
         
         cvt.w.s f10, f8
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213898: // orphan
         mtc1 at, f10
         t1 = 0 + 1
         sub.s f10, f8, f10
         ctc1 t1, 31
         
         cvt.w.s f10, f10
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // unlikely
         

    loc_0x802138c4: // orphan
         mfc1 t1, f10
         at = 0x8000 << 16
         goto 0x802138ec
         t1 |= at

    loc_0x802138d4: // orphan
         goto 0x802138ec
         t1 = 0 - 1

    loc_0x802138dc: // orphan
         mfc1 t1, f10
         
         if                       // unlikely
         

    loc_0x802138ec: // orphan
         ctc1 t9, 31
         t2 = 0 + 1
         add.s f18, f2, f14
         mul.s f4, f18, f12
         cfc1 t4, 31
         ctc1 t2, 31
         
         cvt.w.s f6, f4
         cfc1 t2, 31
         
         t2 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213920: // orphan
         mtc1 at, f6
         t2 = 0 + 1
         sub.s f6, f4, f6
         ctc1 t2, 31
         
         cvt.w.s f6, f6
         cfc1 t2, 31
         
         t2 &= 0x78
         if                       // unlikely
         

    loc_0x8021394c: // orphan
         mfc1 t2, f6
         at = 0x8000 << 16
         goto 0x80213974
         t2 |= at

    loc_0x8021395c: // orphan
         goto 0x80213974
         t2 = 0 - 1

    loc_0x80213964: // orphan
         mfc1 t2, f6
         
         if                       // unlikely
         

    loc_0x80213974: // orphan
         ctc1 t4, 31
         t3 = 0 + 1
         t4 = t1 & 0xfff
         add.s f8, f0, f14
         mul.s f10, f8, f12
         cfc1 t5, 31
         ctc1 t3, 31
         
         cvt.w.s f18, f10
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x802139ac: // orphan
         mtc1 at, f18
         t3 = 0 + 1
         sub.s f18, f10, f18
         ctc1 t3, 31
         
         cvt.w.s f18, f18
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // unlikely
         

    loc_0x802139d8: // orphan
         mfc1 t3, f18
         at = 0x8000 << 16
         goto 0x80213a00
         t3 |= at

    loc_0x802139e8: // orphan
         goto 0x80213a00
         t3 = 0 - 1

    loc_0x802139f0: // orphan
         mfc1 t3, f18
         
         if                       // unlikely
         

    loc_0x80213a00: // orphan
         v0 = [s1 + 0]
         at = 0xf200 << 16
         t9 = t8 | at
         t6 = v0 + 8
         [s1 + 0] = t6
         ctc1 t5, 31
         t6 = t2 & 0xfff
         t7 = t6 << 0xc
         t5 = t9 | t4
         t8 = t3 & 0xfff
         t9 = t7 | t8
         [v0 + 4] = t9
         [v0 + 0] = t5
         call 0x8004ca60          // 0x8004ca60(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x60]
         v1 = [sp + 0x60]
         t7 = 0 + 1
         t8 = 0 + 5
         t4 = , unsigned  byte [v1 + 5]
         a3 = , unsigned  byte [v1 + 4]
         t9 = 0 + 5
         [sp + 0x10] = t4
         t5 = , unsigned  halfword [v1 + 0]
         t4 = halfword [s2 + 0x20]
         a0 = v0
         [sp + 0x14] = t5
         t6 = , unsigned  halfword [v1 + 2]
         t5 = halfword [s2 + 0x22]
         [sp + 0x30] = t9
         [sp + 0x2c] = t8
         [sp + 0x28] = 0
         [sp + 0x24] = 0
         [sp + 0x20] = 0
         [sp + 0x1c] = t7
         a1 = 0 + 0x100
         a2 = 0 + 1
         [sp + 0x34] = t4
         [sp + 0x18] = t6
         call 0x80045db4          // 0x80045db4(0xf, 0x100, 0x1, 0x0)
         [sp + 0x38] = t5
         at = 0x4080 << 16
         mtc1 at, f12
         lwc1 f2, 0x10, s0
         t0 = 0 + 1
         at = 0x41f8 << 16
         mul.s f4, f2, f12
         mtc1 at, f14
         a0 = 0
         a1 = 0
         a2 = 0 + 0x20
         a3 = 0 + 0x20
         cfc1 t6, 31
         ctc1 t0, 31
         
         cvt.w.s f6, f4
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213af0: // orphan
         mtc1 at, f6
         t0 = 0 + 1
         sub.s f6, f4, f6
         ctc1 t0, 31
         
         cvt.w.s f6, f6
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // unlikely
         

    loc_0x80213b1c: // orphan
         mfc1 t0, f6
         at = 0x8000 << 16
         goto 0x80213b44
         t0 |= at

    loc_0x80213b2c: // orphan
         goto 0x80213b44
         t0 = 0 - 1

    loc_0x80213b34: // orphan
         mfc1 t0, f6
         
         if                       // unlikely
         

    loc_0x80213b44: // orphan
         ctc1 t6, 31
         lwc1 f0, 0x14, s0
         t1 = 0 + 1
         t5 = t0 & 0xfff
         mul.s f8, f0, f12
         t6 = t5 << 0xc
         cfc1 t7, 31
         ctc1 t1, 31
         
         cvt.w.s f10, f8
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213b80: // orphan
         mtc1 at, f10
         t1 = 0 + 1
         sub.s f10, f8, f10
         ctc1 t1, 31
         
         cvt.w.s f10, f10
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // unlikely
         

    loc_0x80213bac: // orphan
         mfc1 t1, f10
         at = 0x8000 << 16
         goto 0x80213bd4
         t1 |= at

    loc_0x80213bbc: // orphan
         goto 0x80213bd4
         t1 = 0 - 1

    loc_0x80213bc4: // orphan
         mfc1 t1, f10

    loc_0x80213bc8: // orphan
         
         if                       // unlikely
         

    loc_0x80213bd4: // orphan
         ctc1 t7, 31
         t2 = 0 + 1
         add.s f18, f2, f14
         mul.s f4, f18, f12
         cfc1 t8, 31
         ctc1 t2, 31
         
         cvt.w.s f6, f4
         cfc1 t2, 31
         
         t2 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213c08: // orphan
         mtc1 at, f6
         t2 = 0 + 1

    loc_0x80213c10: // orphan
         sub.s f6, f4, f6
         ctc1 t2, 31
         
         cvt.w.s f6, f6
         cfc1 t2, 31
         
         t2 &= 0x78
         if                       // unlikely
         

    loc_0x80213c34: // orphan
         mfc1 t2, f6
         at = 0x8000 << 16
         goto 0x80213c5c
         t2 |= at

    loc_0x80213c44: // orphan
         goto 0x80213c5c
         t2 = 0 - 1

    loc_0x80213c4c: // orphan
         mfc1 t2, f6
         
         if                       // unlikely
         

    loc_0x80213c5c: // orphan
         ctc1 t8, 31
         t3 = 0 + 1
         t8 = t1 & 0xfff
         add.s f8, f0, f14
         mul.s f10, f8, f12
         cfc1 t9, 31
         ctc1 t3, 31
         
         cvt.w.s f18, f10
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80213c94: // orphan
         mtc1 at, f18
         t3 = 0 + 1
         sub.s f18, f10, f18
         ctc1 t3, 31
         
         cvt.w.s f18, f18
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // unlikely
         

    loc_0x80213cc0: // orphan
         mfc1 t3, f18
         at = 0x8000 << 16
         goto 0x80213ce8
         t3 |= at

    loc_0x80213cd0: // orphan
         goto 0x80213ce8
         t3 = 0 - 1

    loc_0x80213cd8: // orphan
         mfc1 t3, f18
         
         if                       // unlikely
         

    loc_0x80213ce8: // orphan
         v0 = [s1 + 0]
         at = 0xf200 << 16
         t7 = t6 | at
         t4 = v0 + 8
         ctc1 t9, 31
         [s1 + 0] = t4
         t4 = t2 & 0xfff
         t9 = t7 | t8
         t5 = t4 << 0xc
         at = 0x100 << 16
         t6 = t5 | at
         t7 = t3 & 0xfff
         t8 = t6 | t7
         [v0 + 0] = t9
         [v0 + 4] = t8
         t9 = 0 + 0x400
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = 0
         t5 = halfword [s2 + 0x14]
         at = 0x4200 << 16
         mtc1 at, f12
         mtc1 t5, f6
         at = 0x3e80 << 16
         mtc1 at, f14
         cvt.s.w f8, f6
         lwc1 f4, 8, s0
         mtc1 0, f16
         mul.s f10, f8, f14
         add.s f18, f4, f10
         swc1 f18, 8, s0
         lwc1 f2, 8, s0
         c.le.s f12, f2
         
         bc1fl 0x80213d98
         c.lt.s f2, f16
         sub.s f6, f2, f12
         swc1 f6, 8, s0
         lwc1 f2, 8, s0
         c.lt.s f2, f16
         
         bc1fl 0x80213db0
         t6 = halfword [s2 + 0x16]
         add.s f8, f2, f12
         swc1 f8, 8, s0
         t6 = halfword [s2 + 0x16]
         lwc1 f4, 0xc, s0
         mtc1 t6, f10
         
         cvt.s.w f18, f10
         mul.s f6, f18, f14
         add.s f8, f4, f6
         swc1 f8, 0xc, s0
         lwc1 f0, 0xc, s0
         c.le.s f12, f0
         
         bc1fl 0x80213df0
         c.lt.s f0, f16
         sub.s f10, f0, f12
         swc1 f10, 0xc, s0
         lwc1 f0, 0xc, s0
         c.lt.s f0, f16
         
         bc1fl 0x80213e08
         t7 = halfword [s2 + 0x18]
         add.s f18, f0, f12
         swc1 f18, 0xc, s0
         t7 = halfword [s2 + 0x18]
         lwc1 f4, 0x10, s0
         mtc1 t7, f6
         
         cvt.s.w f8, f6
         mul.s f10, f8, f14
         add.s f18, f4, f10
         swc1 f18, 0x10, s0
         lwc1 f2, 0x10, s0
         c.le.s f12, f2
         
         bc1fl 0x80213e48
         c.lt.s f2, f16
         sub.s f6, f2, f12
         swc1 f6, 0x10, s0
         lwc1 f2, 0x10, s0
         c.lt.s f2, f16
         
         bc1fl 0x80213e60
         t8 = halfword [s2 + 0x1a]
         add.s f8, f2, f12
         swc1 f8, 0x10, s0
         t8 = halfword [s2 + 0x1a]
         lwc1 f4, 0x14, s0
         mtc1 t8, f10
         
         cvt.s.w f18, f10
         mul.s f6, f18, f14
         add.s f8, f4, f6
         swc1 f8, 0x14, s0
         lwc1 f0, 0x14, s0
         c.le.s f12, f0
         
         bc1fl 0x80213ea0
         c.lt.s f0, f16
         sub.s f10, f0, f12
         swc1 f10, 0x14, s0
         lwc1 f0, 0x14, s0
         c.lt.s f0, f16
         
         bc1fl 0x80213eb8
         ra = [sp + 0x54]
         add.s f18, f0, f12
         swc1 f18, 0x14, s0
         ra = [sp + 0x54]
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         ret
         sp += 0x70

    loc_0x80214450: // orphan
         ldc1 f24, 0x58, sp
         s0 = [sp + 0x60]
         s1 = [sp + 0x64]
         s2 = [sp + 0x68]
         s3 = [sp + 0x6c]
         s4 = [sp + 0x70]
         s5 = [sp + 0x74]
         s6 = [sp + 0x78]
         s7 = [sp + 0x7c]
         fp = [sp + 0x80]
         ret
         sp += 0x108

    loc_0x80214624: // orphan
         at = , s5 < s2
         if                       // likely
         t1 = [sp + 0x78]

    loc_0x80214630: // orphan
         goto 0x8021463c
         s1 = s5

    loc_0x80214638: // orphan
         s1 = s2

    loc_0x8021463c: // orphan
         v0 = , unsigned  halfword [s6 + 0]
         t7 = , unsigned  byte [s6 + 5]
         a3 = , unsigned  byte [s6 + 4]
         unsigned , hi
         v1 = v0
         t1 = 0 + 2
         t8 = 0 + 1
         t0 = 0 + 2
         [sp + 0x24] = t0
         [sp + 0x1c] = t8
         [sp + 0x28] = t1
         [sp + 0x38] = 0
         [sp + 0x34] = 0
         t9 = lo
         [sp + 0x30] = 0
         if                       // likely
         t2 = , signed  t9 >> 1

    loc_0x80214680: // orphan
         at = t9 + 1
         t2 = , signed  at >> 1

    loc_0x80214688: // orphan
         unsigned , hi
         t4 = t2 + s7
         [sp + 0x2c] = 0
         [sp + 0x20] = 0
         [sp + 0x18] = s2
         a1 = 0
         a2 = 0
         [sp + 0x14] = v0
         [sp + 0x10] = t7
         t5 = lo
         
         
         unsigned , hi
         t3 = lo
         if                       // likely
         t6 = , signed  t3 >> 1

    loc_0x802146c8: // orphan
         at = t3 + 1
         t6 = , signed  at >> 1

    loc_0x802146d0: // orphan
         call 0x80045db4          // 0x80045db4(0x0, 0x0, 0x0, 0x0)
         a0 = t4 + t6
         v0 = , unsigned  halfword [s4 + 0]
         t4 = , unsigned  byte [s4 + 5]
         a3 = , unsigned  byte [s4 + 4]
         unsigned , hi
         t3 = [sp + 0x70]
         t6 = 0 + 1
         t7 = 0 + 2
         t8 = 0 + 2
         [sp + 0x28] = t8
         [sp + 0x24] = t7
         [sp + 0x1c] = t6
         [sp + 0x38] = 0
         [sp + 0x34] = 0
         t9 = lo
         [sp + 0x30] = 0
         [sp + 0x2c] = 0
         unsigned , hi
         [sp + 0x20] = 0
         [sp + 0x18] = s2
         a1 = 0 + 0x100
         a2 = 0 + 1
         [sp + 0x14] = v0
         [sp + 0x10] = t4

    loc_0x80214734: // orphan
         t2 = lo
         if                       // likely
         t5 = , signed  t2 >> 1

    loc_0x80214740: // orphan
         at = t2 + 1
         t5 = , signed  at >> 1

    loc_0x80214748: // orphan
         call 0x80045db4          // 0x80045db4(0x0, 0x0, 0x0, 0x0)
         a0 = t5 + t3
         a2 = halfword [s4 + 0]
         a0 = fp << 0x10
         a1 = s3 << 0x10
         a3 = s1 << 0x10
         t0 = 0 + 0x400
         t1 = 0 + 0x400
         t9 = 0x10 << 16
         [sp + 0x20] = t9
         [sp + 0x1c] = t1
         [sp + 0x18] = t0
         a3 = , signed  a3 >> 0x10

    loc_0x8021477c: // orphan
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = 0
         t2 = [sp + 0x74]
         s0 += 1
         s3 += s2
         if                       // likely
         s5 -= s1

    loc_0x802147a4: // orphan
         ra = [sp + 0x6c]
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
         sp += 0x98

    loc_0x802149f8: // orphan
         halfword [at + 0x640] = 0
         t6 = halfword [a1 + 8]
         at = 0x8221 << 16
         halfword [at + 0x644] = t6
         t7 = halfword [a1 + 0xa]
         halfword [at + 0x646] = t7
         at = 0x8221 << 16
         goto 0x80214a94
         halfword [at + 0x642] = 0

    loc_0x80214a94: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0
         ret
         

    loc_0x80214af4: // orphan
         t0 = halfword [t0 + 0x5fc]
         halfword [a1 + 0x28] = t0 // arg2
         t1 = halfword [t1 + 0x5fe]
         halfword [a1 + 0x2a] = t1 // arg2
         t2 = halfword [t2 + 0x5f0]
         beql t2, at, 0x80214b28  // unlikely
         t5 = , unsigned  halfword [a1 + 2]

    loc_0x80214b10: // orphan
         t3 = , unsigned  halfword [a1 + 2]
         v0 = 0
         t4 = t3 | 2
         ret
         halfword [a1 + 2] = t4   // arg2

    loc_0x80214b28: // orphan
         t6 = t5 & 0xfffd
         halfword [a1 + 2] = t6   // arg2
         ret
         v0 = 0

    loc_0x80214b90: // orphan
         halfword [a1 + 2] = t8   // arg2
         t0 += t9
         t0 = halfword [t0 - 0x272e]
         goto 0x80214bb0
         halfword [a1 + 0x32] = t0 // arg2

    loc_0x80214bb0: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0
         ret
         

    loc_0x80214d3c: // orphan
         at += t7
         t6 = 0 + 0xa
         t9 <<= 2
         t1 = 0x8221 << 16
         halfword [at - 0x1468] = t6
         t8 = 0 + 0x21
         t1 -= 0x2730
         t0 = t9 + 0x30
         byte [s0 + 0x28] = t8
         v0 = t0 + t1
         t2 = , unsigned  byte [v0 + 0]
         t5 = , unsigned  halfword [s0 + 2]
         byte [s0 + 0x2c] = t2
         t3 = , unsigned  byte [v0 + 1]
         t6 = t5 & 0xfffd
         byte [s0 + 0x2d] = t3
         t4 = , unsigned  byte [v0 + 2]
         halfword [s0 + 2] = t6
         goto 0x80214ecc
         byte [s0 + 0x2e] = t4

    loc_0x80214d98: // orphan
         t5 = s1 << 2
         call fcn.8220ad10
         
         if                       // likely
         t2 = s1 << 2

    loc_0x80214dac: // orphan
         t9 = s1 << 2
         t9 -= s1
         t0 = 0x8221 << 16
         t0 -= 0x1468
         t9 <<= 3
         v1 = t9 + t0
         v0 = halfword [v1 + 0]
         at = , v0 < 0xa
         if                       // likely
         t1 = v0 + 1

    loc_0x80214dd4: // orphan
         goto 0x80214e00
         halfword [v1 + 0] = t1

    loc_0x80214ddc: // orphan
         t2 -= s1
         t3 = 0x8221 << 16
         t3 -= 0x1468
         t2 <<= 3
         v1 = t2 + t3
         v0 = halfword [v1 + 0]
         if                       // unlikely
         t4 = v0 - 1

    loc_0x80214dfc: // orphan
         halfword [v1 + 0] = t4

    loc_0x80214e00: // orphan
         t5 = s1 << 2

    loc_0x80214e04: // orphan
         t5 -= s1
         t6 = 0x8221 << 16
         t6 -= 0x1468
         t5 <<= 3
         v1 = t5 + t6
         [sp + 0x30] = v1
         call 0x800504bc          // 0x800504bc(0x0, 0x0, 0x0, 0x0)
         a0 = sp + 0x3c
         t7 = halfword [sp + 0x3c]
         t8 = halfword [s0 + 8]
         t0 = halfword [sp + 0x3e]
         t9 = t7 + t8
         halfword [sp + 0x3c] = t9
         t1 = halfword [s0 + 0xa]
         t2 = t0 + t1
         call 0x8220d6ac          // 0x8220d6ac(0x17803c, 0x0, 0x0, 0x0)
         halfword [sp + 0x3e] = t2
         if                       // unlikely
         v1 = [sp + 0x30]

    loc_0x80214e50: // orphan
         t3 = halfword [v1 + 0]
         a0 = s0
         a1 = s1
         at = , t3 < 0xa

    loc_0x80214e60: // orphan
         if                       // likely
         a2 = halfword [sp + 0x3c]

    loc_0x80214e68: // orphan
         a3 = halfword [sp + 0x3e]
         call fcn.8220510c
         [sp + 0x30] = v1
         v1 = [sp + 0x30]

    loc_0x80214e78: // orphan
         t4 = halfword [v1 + 0]
         t5 = 0x8221 << 16
         blezl t4, 0x80214ed0     // likely
         ra = [sp + 0x24]

    loc_0x80214e88: // orphan
         t5 = [t5 - 0x25f8]
         t6 = [t5 + 0x20]
         t7 = halfword [t6 + 0]
         t8 = , unsigned  , 0 < t7
         call 0x8220d6ac          // 0x8220d6ac(0x0, 0x0, 0x0, 0x0)
         [sp + 0x38] = t8
         if                       // likely
         at = 0 + 1

    loc_0x80214ea8: // orphan
         beql s1, at, 0x80214ed0  // likely
         ra = [sp + 0x24]

    loc_0x80214eac: // orphan
         beql s1, at, 0x80214ed0  // likely
         ra = [sp + 0x24]

    loc_0x80214eb0: // orphan
         t9 = [sp + 0x38]
         a0 = s0
         a1 = s1
         a2 = halfword [sp + 0x3c]
         a3 = halfword [sp + 0x3e]
         call 0x822056c0          // 0x822056c0(0x0, 0x0, 0x4, 0x600)
         [sp + 0x10] = t9

    loc_0x80214ecc: // orphan
         ra = [sp + 0x24]

    loc_0x80214ed0: // orphan
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         sp += 0x58
         ret
         v0 = 0

    loc_0x80214f68: // orphan
         sp -= 0x28
         [sp + 0x14] = ra
         [sp + 0x28] = a0
         v1 = [a1 + 0x20]         // arg2
         [sp + 0x1c] = 0
         [sp + 0x2c] = a1
         call 0x800060e8          // 0x800060e8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x20] = v1
         a3 = [sp + 0x28]
         v1 = [sp + 0x20]
         a1 = [sp + 0x2c]
         if                       // likely
         a2 = [sp + 0x1c]

    loc_0x80214f9c: // orphan
         a0 = 0 + 1
         if                       // unlikely
         t4 = 0x8221 << 16

    loc_0x80214fa8: // orphan
         goto 0x802150b4
         ra = [sp + 0x14]

    loc_0x80214fb0: // orphan
         t9 = [a1 + 0x28]
         t6 = 0x8221 << 16
         t6 += 0x678
         v0 = v1 << 2
         t7 = v0 + t6
         t0 = 0x8221 << 16
         [t7 + 0] = t9
         t3 = [a1 + 0x2c]
         t0 += 0x680

    loc_0x80214fd4: // orphan
         t1 = v0 + t0
         goto 0x802150b0
         [t1 + 0] = t3

    loc_0x80214fe0: // orphan
         t4 = [t4 - 0x13c8]
         t6 = 0 + 1
         t7 = t6 << v1
         if                       // likely
         t5 = v0 & 0xff

    loc_0x80214ff4: // orphan
         t8 = t5 & t7
         t9 = , unsigned  , 0 < t8
         if                       // likely
         a2 = 0 + 1

    loc_0x80215004: // orphan
         t0 = 0x8221 << 16
         t0 = [t0 - 0x25f8]
         t6 = 0x8221 << 16
         t6 += 0x678
         t1 = [t0 + 0x20]
         v0 = v1 << 2
         t5 = v0 + t6
         t2 = halfword [t1 + 2]
         t9 = 0x8221 << 16
         bnel v1, t2, 0x80215054  // likely
         t8 = [t5 + 0]

    loc_0x80215030: // orphan
         v1 = 0 + 0xff
         byte [a1 + 0x28] = v1
         byte [a1 + 0x29] = v1
         byte [a1 + 0x2a] = 0
         byte [a1 + 0x2b] = v1
         t4 = [a1 + 0x28]
         goto 0x8021508c
         [a1 + 0x2c] = t4

    loc_0x80215054: // orphan
         t9 += 0x680
         t0 = v0 + t9
         [a1 + 0x28] = t8
         t2 = [t0 + 0]
         goto 0x8021508c
         [a1 + 0x2c] = t2

    loc_0x8021506c: // orphan
         v0 = 0 + 0x80
         v1 = 0 + 0xff
         byte [a1 + 0x28] = v0
         byte [a1 + 0x29] = v0
         byte [a1 + 0x2a] = v0
         byte [a1 + 0x2b] = v1
         t4 = [a1 + 0x28]
         [a1 + 0x2c] = t4

    loc_0x8021508c: // orphan
         beql a2, 0, 0x802150a8   // likely
         t7 = , unsigned  halfword [a1 + 2]

    loc_0x80215094: // orphan
         t6 = , unsigned  halfword [a1 + 2]
         t5 = t6 | 2
         goto 0x802150b0
         halfword [a1 + 2] = t5

    loc_0x802150a8: // orphan
         t8 = t7 & 0xfffd
         halfword [a1 + 2] = t8

    loc_0x802150b0: // orphan
         ra = [sp + 0x14]

    loc_0x802150b4: // orphan
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x8021f280: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f28c: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8021f2ac: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8021f2d4: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8021f33c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f34c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f35c: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x8021f370: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f388: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f3bc: // orphan
         if                       // unlikely
         

    loc_0x8021f3c4: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f414: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f438: // orphan
         if                       // unlikely
         

    loc_0x8021f440: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f45c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f468: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f474: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f48c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f498: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f4a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f4b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f4bc: // orphan
         if                       // unlikely
         if                       // unlikely

}

*/
