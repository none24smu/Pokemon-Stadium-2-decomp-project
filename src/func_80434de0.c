/*
 * Function: 0x80434de0
 * ROM Offset: 0x00335de0
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80434de0 (int esi, int edx) {
if            // likely
if            // unlikely
if            // unlikely
// do {
if            // likely
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
}
return eax;
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
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
if                       // likely
if                       // likely
if                       // unlikely
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
int fcn.80434de0 (int esi, int edx) {
    loc_0x8042c1ec:
        t6 = [sp + 0x38]
        t8 = [sp + 0x34]
        t2 = [sp + 0x30]
        t7 = t5 + t6
        t9 = t7 + t8
        t3 = t9 + t2
        if            // likely
        [sp + 0x40] = t3
            
    loc_0x8042c264:
        t9 = [sp + 0x40]
        at = , unsigned  , t9 < 5
        if            // unlikely
        t9 <<= 2
            
    loc_0x8042c328:
        t5 = [s0 + 0x24]
        t3 = 0 - 0xf0
        at = 0xc370 << 16
        halfword [t5 + 0xa] = t3
        mtc1 at, f4
        mtc1 0, f6
        [s0 + 0x30] = 0
        [s0 + 0x34] = 0
        swc1 f4, 0x28, s0
        swc1 f6, 0x2c, s0
        t4 = [sp + 0x84]
        at = 0 + 1
        t8 = [sp + 0x3c]
        t6 = , unsigned  byte [t4 + 0x2180]
        bnel t6, at, 0x8042c3d4 // likely
        t7 = [s0 + 0x1c]
            
    loc_0x8042c3d4:
        t8 = [s0 + 0x24]
        if            // unlikely
        0x8042c3dc
            
    loc_0x8042c3fc:
        call 0x80021ed8 // 0x80021ed8(0x0, 0x0, 0x0, 0x0)
        a0 = 0 + 0x38
        a0 = 0 + 0x1e09
        call 0x80027774 // 0x80027774(0x1e09, 0x0, 0x0, 0x0)
        a1 = 0 + 0x28
        t9 = [sp + 0x84]
         // do {
    loc_0x8042c414:
        at = 0 + 1
        t6 = [sp + 0x40]
        t4 = , unsigned  byte [t9 + 0x2180]
        if            // likely
        at = 0 + 1
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x8042c224: // orphan
             v1 = 0
             v0 = sp + 0x68

    loc_0x8042c22c: // orphan
         t6 = [v0 + 0]
         if                       // unlikely
         t7 = t1 + v1

    loc_0x8042c238: // orphan
         t8 = [t7 + 0]
         [v0 + 0] = 0
         goto 0x8042c254
         [a1 + 0] = t8            // arg2

    loc_0x8042c248: // orphan
         v0 += 4
         if                       // likely
         v1 += 4

    loc_0x8042c254: // orphan
         a1 += 4                  // arg2
         at = , unsigned  , a1 < t0
         bnel at, 0, 0x8042c224   // likely
         [a1 + 0] = 0             // arg2

    loc_0x8042c428: // orphan
         beql t6, at, 0x8042c448  // likely
         ra = [sp + 0x1c]

    loc_0x8042c430: // orphan
         t2 = [s0 + 0x38]
         a0 = s0 + 0x3c
         t3 = t2 | 4
         call 0x87f09870          // 0x87f09870(0x3c, 0x0, 0x0, 0x0)
         [s0 + 0x38] = t3

    loc_0x8042c444: // orphan
         ra = [sp + 0x1c]

    loc_0x8042c448: // orphan
         s0 = [sp + 0x18]
         sp += 0x80
         ret
         

    loc_0x8042cf44: // orphan
         if                       // likely
         [sp + 0x24] = v0

    loc_0x8042cf4c: // orphan
         v1 = [v0 + 0x38]
         t7 = [sp + 0x30]
         a0 = , unsigned  halfword [sp + 0x36]
         a1 = , unsigned  halfword [sp + 0x3a]
         a2 = 0
         a3 = 0 + 2               // arg4
         [sp + 0x20] = v1
         call 0x87f08e7c          // 0x87f08e7c(0x0, 0x0, 0x0, 0x2)
         [sp + 0x10] = t7
         v1 = [sp + 0x20]
         a0 = 0
         a1 = 0 + 2
         [v1 + 0] = v0
         [sp + 0x10] = 0
         a3 = [sp + 0x38]
         call 0x800071a4          // 0x800071a4(0x0, 0x2, 0x0, 0x0)
         a2 = [sp + 0x34]
         v1 = [sp + 0x20]
         [v1 + 4] = v0
         t8 = [sp + 0x3c]
         [v1 + 8] = t8
         t9 = [sp + 0x40]
         [v1 + 0xc] = t9

    loc_0x8042cfa8: // orphan
         ra = [sp + 0x1c]
         v0 = [sp + 0x24]
         sp += 0x28
         ret
         

    loc_0x8042e084: // orphan
         v1 = , signed  v1 >> 4
         a3 -= 0x71b0             // arg4
         a2 += 0x7e50             // arg3
         v1 <<= 2
         v0 <<= 2
         t6 = a2 + v0             // arg3
         a1 = a3 + v1             // arg4
         lwc1 f6                  // arg2
         lwc1 f4
         lwc1 f0, 0x18, a0        // arg1
         lwc1 f16, 0xc, a0        // arg1
         mul.s f8, f4, f6
         t7 = a2 + v1             // arg3
         t8 = a3 + v0             // arg4
         mul.s f10, f8, f0
         add.s f18, f10, f16
         lwc1 f10, 0x10, a0       // arg1
         swc1 f18                 // arg1
         lwc1 f4
         neg.s f6, f4
         mul.s f8, f6, f0
         add.s f16, f8, f10
         lwc1 f10, 0x14, a0       // arg1
         swc1 f16, 4, a0          // arg1
         lwc1 f4                  // arg2
         lwc1 f18
         mul.s f6, f18, f4
         
         mul.s f8, f6, f0
         add.s f16, f8, f10
         ret
         swc1 f16, 8, a0          // arg1

    loc_0x8042e460: // orphan
         [sp + 0x14] = ra
         t6 = [a0 + 0x20]         // arg1
         t7 = t6 & 1
         beql t7, 0, 0x8042e6b0   // unlikely
         ra = [sp + 0x14]

    loc_0x8042e474: // orphan
         t8 = [a0 + 0x24]         // arg1
         t9 = [a0 + 0x28]         // arg1
         at = 0x4334 << 16
         mtc1 t8, f4
         mtc1 t9, f8
         cvt.s.w f6, f4
         mtc1 at, f4
         at = 0x87f1 << 16
         cvt.s.w f10, f8
         div.s f2, f6, f10
         lwc1 f6, 0x1718, at
         mtc1 0, f10
         at = 0x3f00 << 16
         mul.s f8, f4, f2
         
         mul.s f0, f8, f6
         c.le.s f10, f0
         
         bc1f 0x8042e4e4
         
         at = 0x3f00 << 16
         mtc1 at, f18
         
         add.s f4, f0, f18
         trunc.w.s f8, f4
         mfc1 v0, f8
         goto 0x8042e500
         t2 = v0 & 0xffff

    loc_0x8042e500: // orphan
         t3 = , signed  t2 >> 4
         t4 = t3 << 2
         at = 0x8009 << 16
         at += t4
         lwc1 f4, -0x71b0, at
         at = 0x3f80 << 16
         mtc1 at, f8
         mtc1 at, f10
         lwc1 f16, 0x54, a0       // arg1
         add.s f6, f4, f8
         lwc1 f4, 0x2c, a0        // arg1
         at = 0x87f1 << 16
         mul.s f2, f6, f18
         lwc1 f6, 0x44, a0        // arg1
         sub.s f0, f10, f2
         mul.s f8, f4, f2
         
         mul.s f10, f6, f0
         lwc1 f6, 0x30, a0        // arg1
         mov.s f12, f0
         add.s f4, f8, f10
         mul.s f8, f6, f2
         lwc1 f10, 0x48, a0       // arg1
         swc1 f4, 0xc, a0         // arg1
         mul.s f4, f10, f0
         lwc1 f10, 0x34, a0       // arg1
         add.s f6, f8, f4
         mul.s f8, f10, f2
         lwc1 f4, 0x4c, a0        // arg1
         swc1 f6, 0x10, a0        // arg1
         mul.s f6, f4, f0
         lwc1 f4, 0x38, a0        // arg1
         add.s f10, f8, f6
         mul.s f8, f4, f2
         lwc1 f6, 0x50, a0        // arg1
         swc1 f10, 0x14, a0       // arg1
         mul.s f10, f6, f0
         lwc1 f6, 0x3c, a0        // arg1
         mul.s f14, f6, f2
         add.s f4, f8, f10
         mul.s f8, f16, f0
         swc1 f4, 0x18, a0        // arg1
         lwc1 f4, 0x171c, at
         add.s f10, f14, f8
         mtc1 0, f8
         mul.s f6, f10, f4
         c.le.s f8, f6
         
         bc1f 0x8042e5f0
         
         mul.s f10, f16, f0
         at = 0x87f1 << 16
         lwc1 f6, 0x1720, at
         add.s f4, f14, f10
         mul.s f8, f4, f6
         add.s f10, f8, f18
         trunc.w.s f4, f10
         mfc1 t6, f4
         goto 0x8042e618
         halfword [a0 + 0x1c] = t6 // arg1

    loc_0x8042e618: // orphan
         lwc1 f10, 0x40, a0       // arg1
         lwc1 f6, 0x58, a0        // arg1
         at = 0x87f1 << 16
         mul.s f4, f10, f2
         
         mul.s f8, f6, f12
         lwc1 f6, 0x1728, at
         add.s f10, f4, f8
         mtc1 0, f4
         mul.s f0, f10, f6
         c.le.s f4, f0
         
         bc1f 0x8042e664
         
         add.s f8, f0, f18
         trunc.w.s f10, f8
         mfc1 t0, f10
         goto 0x8042e678
         halfword [a0 + 0x1e] = t0 // arg1

    loc_0x8042e678: // orphan
         call 0x87f0c000          // 0x87f0c000(0x0, 0x0, 0x0, 0x0)
         [sp + 0x18] = a0
         a0 = [sp + 0x18]
         t3 = [a0 + 0x24]
         t5 = [a0 + 0x28]
         t4 = t3 + 1
         at = , t5 < t4
         if                       // unlikely
         [a0 + 0x24] = t4

    loc_0x8042e69c: // orphan
         t7 = [a0 + 0x20]
         at = 0 - 2
         t8 = t7 & at
         [a0 + 0x20] = t8

    loc_0x8042e6ac: // orphan
         ra = [sp + 0x14]

    loc_0x8042e6b0: // orphan
         sp += 0x18
         ret
         

    loc_0x8042e71c: // orphan
         t6 = [sp + 0x1c]
         a0 = [sp + 0x18]
         unsigned , hi
         t0 = , unsigned  byte [a0 + 8] // arg1
         t2 = t0 | 0x80
         t3 = t2 & 0xbf
         byte [a0 + 8] = t2       // arg1
         byte [a0 + 8] = t3       // arg1
         t7 = lo
         if                       // likely
         t8 = , signed  t7 >> 1

    loc_0x8042e748: // orphan
         at = t7 + 1
         t8 = , signed  at >> 1

    loc_0x8042e750: // orphan
         [a0 + 4] = t8            // arg1
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8042eea4: // orphan
         trunc.w.s f4, f10
         mfc1 v0, f4
         
         div 0, a3, at            // arg4
         a0 = hi
         a2 = v0 + 0xa4           // arg3
         call 0x87f0ca68          // "\u05f2" // 0x87f0ca68(0x0, 0x0, 0xa4, 0x0)
         sdc1 f18, 0x58, sp
         ldc1 f18, 0x58, sp
         mtc1 0, f7
         mtc1 0, f6
         at = 0x3f00 << 16
         mtc1 at, f16
         c.le.d f6, f18
         a0 = 0x87f1 << 16
         bc1f 0x8042ef08
         at = 0x3fe0 << 16
         mtc1 at, f9
         mtc1 0, f8
         
         add.d f10, f18, f8
         trunc.w.d f4, f10
         mfc1 t0, f4
         goto 0x8042ef28
         

    loc_0x8042ef28: // orphan
         a0 = [a0 + 0x5b90]
         at = 0 + 0x64
         lwc1 f0, 8, a0
         c.le.s f20, f0
         
         bc1fl 0x8042ef5c
         sub.s f8, f0, f16
         add.s f4, f0, f16
         trunc.w.s f6, f4
         mfc1 v1, f6
         goto 0x8042ef6c
         lwc1 f2, 0xc, a0

    loc_0x8042ef6c: // orphan
         c.le.s f20, f2
         
         bc1fl 0x8042ef94
         sub.s f8, f2, f16
         add.s f4, f2, f16
         trunc.w.s f6, f4
         mfc1 v0, f6
         goto 0x8042efa0
         

    loc_0x8042efa0: // orphan
         div 0, t0, at
         a0 = hi
         a1 = v1 + 0xb2
         call 0x87f0ca68          // 0x87f0ca68(0x0, 0xb2, 0x0, 0x0)
         a2 = v0 + 0xa4
         a0 = 0x87f1 << 16
         a0 = [a0 + 0x5b90]
         at = 0x3f00 << 16
         mtc1 at, f16
         lwc1 f0, 8, a0
         a1 = 0 + 0xa
         c.le.s f20, f0
         
         bc1fl 0x8042eff4
         sub.s f8, f0, f16
         add.s f4, f0, f16
         trunc.w.s f6, f4
         mfc1 t0, f6
         goto 0x8042f004
         lwc1 f2, 0xc, a0

    loc_0x8042f004: // orphan
         a0 = 0 + 0x1b9
         c.le.s f20, f2
         
         bc1fl 0x8042f030
         sub.s f8, f2, f16
         add.s f4, f2, f16
         trunc.w.s f6, f4
         mfc1 v1, f6
         goto 0x8042f040
         [sp + 0x40] = v1

    loc_0x8042f040: // orphan
         call 0x8004c990          // 0x8004c990(0x0, 0x0, 0x0, 0x0)
         [sp + 0x3c] = t0
         v1 = [sp + 0x40]
         t0 = [sp + 0x3c]
         a2 = v0
         a3 = 0
         [sp + 0x10] = 0
         a1 = v1 + 0xa4
         call 0x8004d19c          // 0x8004d19c(0x0, 0xa4, 0x0, 0x0)
         a0 = t0 + 0x8e
         a0 = 0x87f1 << 16
         a0 = [a0 + 0x5b90]
         at = 0x3f00 << 16
         mtc1 at, f16
         lwc1 f0, 8, a0
         a1 = 0 + 0xb
         c.le.s f20, f0
         
         bc1fl 0x8042f0a8
         sub.s f8, f0, f16
         add.s f4, f0, f16
         trunc.w.s f6, f4
         mfc1 t0, f6
         goto 0x8042f0b8
         lwc1 f2, 0xc, a0

    loc_0x8042f0b8: // orphan
         a0 = 0 + 0x1b9
         c.le.s f20, f2
         
         bc1fl 0x8042f0e4
         sub.s f8, f2, f16
         add.s f4, f2, f16
         trunc.w.s f6, f4
         mfc1 v1, f6
         goto 0x8042f0f4
         [sp + 0x40] = v1

    loc_0x8042f0f4: // orphan
         call 0x8004c990          // 0x8004c990(0x0, 0x0, 0x0, 0x0)
         [sp + 0x3c] = t0
         v1 = [sp + 0x40]
         t0 = [sp + 0x3c]
         a2 = v0
         a3 = 0
         [sp + 0x10] = 0
         a1 = v1 + 0xa4
         call 0x8004d19c          // 0x8004d19c(0x0, 0xa4, 0x0, 0x0)
         a0 = t0 + 0xab
         a0 = 0x87f1 << 16
         a0 = [a0 + 0x5b90]
         at = 0x3f00 << 16
         mtc1 at, f16
         lwc1 f0, 8, a0
         a1 = 0 + 0xc
         c.le.s f20, f0
         
         bc1fl 0x8042f15c
         sub.s f8, f0, f16
         add.s f4, f0, f16
         trunc.w.s f6, f4
         mfc1 t0, f6
         goto 0x8042f16c
         lwc1 f2, 0xc, a0

    loc_0x8042f16c: // orphan
         a0 = 0 + 0x1b9
         c.le.s f20, f2
         
         bc1fl 0x8042f198
         sub.s f8, f2, f16
         add.s f4, f2, f16
         trunc.w.s f6, f4
         mfc1 v1, f6
         goto 0x8042f1a8
         [sp + 0x40] = v1

    loc_0x8042f1a8: // orphan
         call 0x8004c990          // 0x8004c990(0x0, 0x0, 0x0, 0x0)
         [sp + 0x3c] = t0
         v1 = [sp + 0x40]
         t0 = [sp + 0x3c]
         a2 = v0
         a3 = 0
         [sp + 0x10] = 0
         a1 = v1 + 0x93
         call 0x8004d19c          // 0x8004d19c(0x0, 0x93, 0x0, 0x0)
         a0 = t0 + 0x60
         a1 = 0x800d << 16
         a1 += 0x510
         v1 = [a1 + 0]
         t2 = 0x8009 << 16
         t2 += 0x4f50
         t8 = v1 + 8
         [a1 + 0] = t8
         t9 = 0xde00 << 16
         [v1 + 0] = t9
         [v1 + 4] = t2
         ra = [sp + 0x24]
         ldc1 f20, 0x18, sp
         sp += 0x60
         ret
         

    loc_0x8042f2b4: // orphan
         
         break 6

    loc_0x8042f4b4: // orphan
         ret
         sp += 8

    loc_0x8042f640: // orphan
         t6 = [a1 + 4]            // arg2
         t7 = t6 + 1
         [a1 + 4] = t7            // arg2
         call 0x87f0d44c          // 0x87f0d44c(0x0, 0x0, 0x0, 0x0)
         a0 = a1
         a1 = [sp + 0x18]
         call 0x87f0277c          // 0x87f0277c(0x0, 0x0, 0x0, 0x0)
         a0 = a1 + 0xc
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8042f73c: // orphan
         t4 |= 0xff7f
         t3 |= 0x9bff
         [v1 + 0] = t3
         [v1 + 4] = t4
         v1 = [t1 + 0]
         at = 0x40c0 << 16
         mtc1 at, f4
         t5 = v1 + 8
         [t1 + 0] = t5
         t6 = 0xfb00 << 16
         mul.s f0, f4, f18
         [v1 + 0] = t6
         t3 = , unsigned  byte [t0 + 1]
         t8 = , unsigned  byte [t0 + 0]
         mtc1 0, f2
         t7 = , unsigned  byte [t0 + 2]
         t4 = t3 << 0x10
         t9 = t8 << 0x18
         t5 = t9 | t4
         c.le.s f2, f0
         t9 = , unsigned  byte [t0 + 3]
         t8 = t7 << 8
         t2 = t5 | t8
         t4 = t2 | t9
         bc1f 0x8042f7c4
         [v1 + 4] = t4
         at = 0x3f00 << 16
         mtc1 at, f12
         
         add.s f6, f0, f12
         trunc.w.s f8, f6
         mfc1 v1, f8
         goto 0x8042f7e4
         at = 0x4080 << 16

    loc_0x8042f7e4: // orphan
         mtc1 at, f6
         lwc1 f8, 0x84, sp
         at = 0x4f80 << 16
         mul.s f0, f6, f8
         c.le.s f2, f0
         
         bc1fl 0x8042f81c
         sub.s f6, f0, f12
         add.s f10, f0, f12
         trunc.w.s f4, f10
         mfc1 v0, f4
         goto 0x8042f82c
         t3 = , unsigned  halfword [a2 + 0]

    loc_0x8042f82c: // orphan
         mtc1 t3, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x8042f838: // orphan
         mtc1 at, f6
         
         add.s f4, f4, f6

    loc_0x8042f844: // orphan
         mul.s f8, f4, f18
         at = 0xbf00 << 16
         c.lt.s f2, f8
         swc1 f8, 0x38, sp
         bc1fl 0x8042f868
         mtc1 at, f10
         goto 0x8042f870
         swc1 f12, 0x44, sp

    loc_0x8042f870: // orphan
         t2 = , unsigned  halfword [a2 + 2]
         lwc1 f10, 0x84, sp
         at = 0x4f80 << 16
         mtc1 t2, f6
         if                       // likely
         cvt.s.w f4, f6

    loc_0x8042f888: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x8042f894: // orphan
         mul.s f6, f4, f10
         lwc1 f10, 0x84, sp
         at = 0xbf00 << 16
         c.lt.s f2, f6
         swc1 f6, 0x34, sp
         bc1fl 0x8042f8bc
         mtc1 at, f14
         goto 0x8042f8c0
         mov.s f14, f12

    loc_0x8042f8c0: // orphan
         at = 0x4480 << 16
         mtc1 at, f8
         at = 0xbf00 << 16
         div.s f16, f8, f18
         c.lt.s f2, f16
         
         bc1fl 0x8042f8ec
         mtc1 at, f18
         goto 0x8042f8f0
         mov.s f18, f12

    loc_0x8042f8f0: // orphan
         at = 0x4480 << 16
         mtc1 at, f4
         at = 0xbf00 << 16
         div.s f0, f4, f10
         c.lt.s f2, f0
         
         bc1fl 0x8042f91c
         mtc1 at, f2
         goto 0x8042f920
         mov.s f2, f12

    loc_0x8042f920: // orphan
         lwc1 f12, 0x44, sp
         lwc1 f10, 0x38, sp
         lwc1 f8, 0x34, sp
         t9 = [sp + 0x78]
         add.s f10, f12, f10
         t4 = [sp + 0x7c]
         a0 = t9 - v1             // arg1
         add.s f8, f14, f8
         a1 = t4 - v0             // arg2
         a0 <<= 0x10              // arg1
         trunc.w.s f10, f10
         a1 <<= 0x10              // arg2
         a0 = , signed  a0 >> 0x10 // arg1
         trunc.w.s f8, f8
         mfc1 a2, f10
         a1 = , signed  a1 >> 0x10 // arg2
         add.s f10, f18, f16
         mfc1 a3, f8
         a2 <<= 0x10              // arg3
         add.s f8, f2, f0
         a3 <<= 0x10              // arg4
         a2 = , signed  a2 >> 0x10 // arg3
         trunc.w.s f10, f10
         a3 = , signed  a3 >> 0x10 // arg4
         [sp + 0x10] = 0
         trunc.w.s f8, f8
         mfc1 t8, f10
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         mfc1 t2, f8
         [sp + 0x18] = t8
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = t2
         t1 = 0x800d << 16
         t1 += 0x510
         v1 = [t1 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t9 = v1 + 8
         [t1 + 0] = t9
         t4 = 0xde00 << 16
         [v1 + 0] = t4
         [v1 + 4] = t6
         ra = [sp + 0x2c]
         sp += 0x70
         ret
         

    loc_0x8042fa24: // orphan
         [a1 + 0x34] = t9         // arg2
         t0 = [t8 + 0x38]

    loc_0x8042fa2c: // orphan
         [a1 + 0x38] = t0         // arg2
         t1 = [v0 + 4]
         lwl t3, 0x1e, t1
         lwr t3, 0x21, t1
         swl t3, 0x1e, a1         // arg2
         swr t3, 0x21, a1         // arg2
         t3 = , unsigned  halfword [t1 + 0x22]
         halfword [a1 + 0x22] = t3 // arg2
         a0 = [v0 + 8]
         call 0x87f0d1a0          // 0x87f0d1a0(0x80, 0x0, 0x0, 0x0)
         [sp + 0x1c] = a1
         a1 = [sp + 0x1c]
         t5 = [v0 + 0]
         [a1 + 0x3c] = t5
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0 + 1
         ret
         

    loc_0x804303f0: // orphan
         sp += 0x38
         
         
         
         [a0 + 0] = 0             // arg1
         ret
         [a0 + 4] = a1            // arg1

    loc_0x80430698: // orphan
         ret
         

    loc_0x80430a28: // orphan
         ra = [sp + 0x14]
         t8 = , unsigned  byte [a2 + 0x22] // arg3
         t9 = t8 | 2
         byte [a2 + 0x22] = t9    // arg3
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80430a88: // orphan
         call 0x87f0e84c          // 0x87f0e84c(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x20]
         if                       // unlikely
         a0 = [sp + 0x20]

    loc_0x80430a98: // orphan
         call 0x87f0e978          // 0x87f0e978(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x28]

    loc_0x80430aa0: // orphan
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80430b34: // orphan
         t8 = [sp + 0x9c]
         t7 = [sp + 0x74]
         t9 = 0 + 1
         t2 = 0x87f1 << 16
         t1 = 0x87f1 << 16
         t5 = t9 << t8
         t1 += 0x1408
         t2 += 0x13e4
         t3 = s5
         s4 = t7 & t5

    loc_0x80430b5c: // orphan
         v1 = t2
         a0 = sp + 0x80           // arg1

    loc_0x80430b64: // orphan
         beql s4, 0, 0x80430b9c   // likely
         v0 = byte [v1 + 0]

    loc_0x80430b6c: // orphan
         v0 = byte [v1 + 0]
         if                       // likely
         

    loc_0x80430b78: // orphan
         unsigned , hi
         t6 = lo
         t9 = s5 + t6
         t8 = t9 + 0x30
         goto 0x80430bc0
         [a0 + 0] = t8            // arg1

    loc_0x80430b90: // orphan
         goto 0x80430bc0
         [a0 + 0] = 0             // arg1

    loc_0x80430b9c: // orphan
         beql s2, v0, 0x80430bc0  // likely
         [a0 + 0] = 0             // arg1

    loc_0x80430ba4: // orphan
         unsigned , hi
         t7 = lo
         t5 = s6 + t7
         t6 = t5 + 0x1b00
         goto 0x80430bc0
         [a0 + 0] = t6            // arg1

    loc_0x80430bc0: // orphan
         a0 += 4                  // arg1
         at = , unsigned  , a0 < s7
         if                       // unlikely
         v1 += 1

    loc_0x80430bd0: // orphan
         if                       // likely
         v1 = 0 + 1

    loc_0x80430bd8: // orphan
         v0 = , unsigned  halfword [t4 + 6]
         t9 = v0 & 0xb
         if                       // likely
         t8 = v0 & 8

    loc_0x80430be8: // orphan
         if                       // likely
         t7 = v0 & 2

    loc_0x80430bf0: // orphan
         a3 = 0 + 2               // arg4
         t5 = a3 << 2             // arg4
         t6 = sp + 0x80
         goto 0x80430d94
         v0 = t5 + t6

    loc_0x80430c04: // orphan
         if                       // likely
         a3 = 0 + 1               // arg4

    loc_0x80430c0c: // orphan
         t5 = 0 << 2
         t6 = sp + 0x80
         a3 = 0
         goto 0x80430d94
         v0 = t5 + t6

    loc_0x80430c20: // orphan
         t5 = a3 << 2             // arg4
         t6 = sp + 0x80
         goto 0x80430d94
         v0 = t5 + t6

    loc_0x80430c30: // orphan
         a0 = sp + 0x80           // arg1
         v0 = [a0 + 0]            // arg1

    loc_0x80430c38: // orphan
         a0 += 4                  // arg1
         at = , unsigned  , a0 < t0
         if                       // likely
         

    loc_0x80430c48: // orphan
         t9 = byte [v0 + 0]
         if                       // likely
         

    loc_0x80430c54: // orphan
         goto 0x80430c64
         v1 = 0

    loc_0x80430c5c: // orphan
         bnel at, 0, 0x80430c38   // unlikely
         v0 = [a0 + 0]            // arg1

    loc_0x80430c64: // orphan
         if                       // likely
         a2 = 0

    loc_0x80430c6c: // orphan
         [sp + 0x54] = t1
         [sp + 0x6c] = t2
         [sp + 0x50] = t3
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         [sp + 0x94] = t4
         mtc1 v0, f4
         t0 = sp + 0x8c
         t1 = [sp + 0x54]
         t2 = [sp + 0x6c]
         t3 = [sp + 0x50]
         t4 = [sp + 0x94]
         if                       // likely
         cvt.s.w f6, f4

    loc_0x80430ca0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80430cb0: // orphan
         div.s f10, f6, f20
         a3 = 0 + 1
         t8 = a3 << 2
         t7 = sp + 0x80
         c.lt.s f10, f22

    loc_0x80430cc4: // orphan
         
         bc1f 0x80430ce4
         
         t8 = 0 << 2
         t7 = sp + 0x80
         v0 = t8 + t7
         goto 0x80430d94
         a3 = 0

    loc_0x80430cec: // orphan
         a0 = sp + 0x80           // arg1

    loc_0x80430cf0: // orphan
         v0 = [a0 + 0]            // arg1
         beql v0, 0, 0x80430d1c   // unlikely
         a2 += 1                  // arg3

    loc_0x80430cfc: // orphan
         v1 = byte [v0 + 0]
         beql v1, 0, 0x80430d1c   // likely
         a2 += 1                  // arg3

    loc_0x80430d08: // orphan
         s1 = v1 << 0x18
         a3 = a2
         s1 = , signed  s1 >> 0x18
         s0 = byte [v0 + 1]
         a2 += 1                  // arg3

    loc_0x80430d1c: // orphan
         at = , a2 < 3            // arg3
         if                       // likely
         a0 += 4                  // arg1

    loc_0x80430d28: // orphan
         a2 = 0
         a0 = sp + 0x80           // arg1

    loc_0x80430d30: // orphan
         v0 = [a0 + 0]            // arg1
         beql v0, 0, 0x80430d80   // unlikely
         a2 += 1                  // arg3

    loc_0x80430d3c: // orphan
         v1 = byte [v0 + 0]
         beql v1, 0, 0x80430d80   // likely
         a2 += 1                  // arg3

    loc_0x80430d48: // orphan
         a1 = byte [v0 + 1]
         at = , a1 < s0
         bnel at, 0, 0x80430d6c   // unlikely
         s1 = v1 << 0x18

    loc_0x80430d58: // orphan
         if                       // unlikely
         at = , v1 < s1

    loc_0x80430d60: // orphan
         beql at, 0, 0x80430d80   // likely
         a2 += 1                  // arg3

    loc_0x80430d68: // orphan
         s1 = v1 << 0x18

    loc_0x80430d6c: // orphan
         s0 = a1 << 0x18          // arg2
         a3 = a2
         s1 = , signed  s1 >> 0x18
         s0 = , signed  s0 >> 0x18

    loc_0x80430d7c: // orphan
         a2 += 1                  // arg3

    loc_0x80430d80: // orphan
         if                       // likely
         a0 += 4                  // arg1

    loc_0x80430d88: // orphan
         t5 = a3 << 2             // arg4
         t6 = sp + 0x80
         v0 = t5 + t6

    loc_0x80430d94: // orphan
         v1 = [v0 + 0]
         t2 += 3
         t9 = sp + 0x80
         bnel v1, 0, 0x80430db4   // likely
         t8 = t1 + a3             // arg4

    loc_0x80430da8: // orphan
         a3 = 0
         v1 = [t9 + 0]
         t8 = t1 + a3             // arg4

    loc_0x80430db4: // orphan
         t7 = , unsigned  byte [t8 + 0]
         t9 = 0x87f1 << 16
         t9 += 0x142c
         if                       // unlikely
         t1 += 3

    loc_0x80430dc8: // orphan
         t5 = byte [v1 + 0]
         t6 = sp + 0x80
         bnel t5, 0, 0x80430de4   // unlikely
         t3 += 4

    loc_0x80430dd8: // orphan
         a3 = 0
         v1 = [t6 + 0]

    loc_0x80430de0: // orphan
         t3 += 4

    loc_0x80430de4: // orphan
         if                       // likely
         [t3 - 4] = v1

    loc_0x80430dec: // orphan
         t8 = [sp + 0x9c]
         at = 0 + 4
         s5 += 0x6c0
         t7 = t8 + 1
         [sp + 0x9c] = t7
         if                       // likely
         t4 += 0x28

    loc_0x80430e08: // orphan
         ra = [sp + 0x4c]
         byte [sp + 0x7b] = s1
         byte [sp + 0x7a] = s0
         [sp + 0x8c] = a3
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         s5 = [sp + 0x3c]         // t0
         s6 = [sp + 0x40]
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret
         sp += 0xa0

    loc_0x804311fc: // orphan
         ra = [sp + 0x14]
         [sp + 0x1c] = a1
         call 0x8005a364          // 0x8005a364(0x0, 0x0, 0x0, 0x0)
         [sp + 0x18] = a2
         a1 = [sp + 0x1c]
         if                       // unlikely
         a2 = [sp + 0x18]

    loc_0x80431218: // orphan
         call 0x87f0eefc          // 0x87f0eefc(0x0, 0x0, 0x0, 0x0)
         a0 = a2

    loc_0x80431220: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80431654: // orphan
         if                       // unlikely

    loc_0x804317a0: // orphan
         
         
         s0 = halfword [ra - 0x980]
         if                       // unlikely
         a2 = s0 + 0              // arg3

    loc_0x804317b0: // orphan
         
         
         s0 = halfword [ra - 0x980]
         if                       // unlikely
         a2 = s0 + 0              // arg3

    loc_0x804317b4: // orphan
         
         goto 0x80000000
         s0 = halfword [ra + 0x2878]

    loc_0x80431c7c: // orphan
         
         sc 0, 0x1e01, s0
         movf 0, 0, fcc0
         sd s0
         s0 = halfword [ra - 0x398]
         sdc1 f16
         if                       // unlikely
         swc1 f0

    loc_0x80431c98: // orphan
         swc1 f0

    loc_0x80431c9c: // orphan
         
         scd 0
         synci -0xfc0, k1
         swc1 f0
         
         sdc1 f16, 0x4000, t0
         
         scd 0
         dsll32 t8, ra, 0
         ld 0
         
         
         
         ld 0
         
         dsra32 ra, 0, 0x1f

    loc_0x80431fc8: // orphan
         sd ra, 1, ra
         sd ra, 1, ra
         
         
         sd ra, 1, ra
         sd ra, 1, ra
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         dsra32 ra, 0, 0x1f

    loc_0x804320c0: // orphan
         dsra32 ra, 0, 0x1f
         

    loc_0x8043213c: // orphan
         movt 0, 0, fcc0
         sd ra, 1, ra
         movf 0, 0, fcc0
         dsra32 ra, at, 0x1f
         
         sd ra, 1, ra
         movt 0, 0, fcc0
         sd ra, 1, ra
         sd ra, 1, ra
         movt 0, 0, fcc0
         sd ra, 1, ra
         sd ra, 1, ra
         
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         sd ra, 1, ra
         movt 0, 0, fcc0
         
         sd ra, 1, ra
         movt 0, 0, fcc0
         
         sd ra, 1, ra
         movt 0, 0, fcc0
         sd ra, 1, ra
         sd ra, 1, ra
         movt 0, 0, fcc0
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         dsra32 ra, 0, 0x1f
         
         sd ra, 1, ra
         sd ra, 1, ra
         
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         
         
         
         sd ra, 1, ra
         
         dsra32 ra, 0, 0x1f
         
         
         
         sd ra, 1, ra
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         dsra32 ra, 0, 0x1f
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         sd ra, 1, ra
         
         sd ra, 1, ra
         dsra32 ra, at, 0x1f
         
         
         sd ra, 1, ra
         dsra32 ra, 0, 0x1f
         movt 0, 0, fcc0
         sd ra, 1, ra
         
         
         sd ra, 1, ra
         
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         
         sd ra, 1, ra
         dsra32 ra, 0, 0x1f
         
         sd ra, 1, ra
         dsra32 ra, at, 0x1f
         
         
         dsra32 ra, at, 0x1f

    loc_0x80434de0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434df0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e08: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e40: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x80434e58: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80434e78: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434ea0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434eb0: // orphan
         if                       // unlikely
         

    loc_0x80434eb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434ec4: // orphan
         if                       // unlikely
         

    loc_0x80434ecc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434edc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434eec: // orphan
         
         if                       // unlikely
         

    loc_0x80434ef8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f10: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f34: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f50: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f6c: // orphan
         if                       // unlikely
         

    loc_0x80434f74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434f80: // orphan
         
         

}

*/
