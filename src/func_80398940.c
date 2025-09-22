/*
 * Function: 0x80398940
 * ROM Offset: 0x00299940
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80398940 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
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
if                       // unlikely
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
int fcn.80398940 (int esi, int edx) {
    loc_0x80381480:
        beql s2, v0, 0x80381528 // likely
        s0 = [s0 + 4]
         // do {
    loc_0x80381484:
        s0 = [s0 + 4]
         // } while (?);
        }
        return eax;
    loc_0x80381488: // orphan
             lwc1 f4, 0x48, s1
             a0 = s5
             a1 = s3
             swc1 f4, 0x80, sp
             lwc1 f6, 0x50, s1
             a2 = s6
             a3 = s7
             swc1 f6, 0x84, sp
             lwc1 f8, 0x48, s0
             swc1 f8, 0x78, sp
             lwc1 f10, 0x50, s0
             [sp + 0x14] = fp
             [sp + 0x10] = s4
             call 0x87d00670          // "P@" // 0x87d00670(0x0, 0x0, 0x0, 0x0)
             swc1 f10, 0x7c, sp
             beql v0, 0, 0x80381528   // likely
             s0 = [s0 + 4]

    loc_0x803814cc: // orphan
         lwc1 f2, 0x74, sp
         c.lt.s f20, f2
         
         bc1fl 0x803814ec
         sub.s f0, f2, f20
         goto 0x803814f0
         sub.s f0, f2, f20

    loc_0x803814f0: // orphan
         c.lt.s f0, f26
         lwc1 f0, 0x70, sp
         bc1fl 0x80381528
         s0 = [s0 + 4]
         c.lt.s f24, f0
         
         bc1fl 0x80381528
         s0 = [s0 + 4]
         c.lt.s f22, f0
         
         bc1fl 0x80381528
         s0 = [s0 + 4]
         mov.s f22, f0
         s0 = [s0 + 4]

    loc_0x80381528: // orphan
         bnel s0, 0, 0x80381480   // unlikely
         v0 = [s0 + 0x20]

    loc_0x80381530: // orphan
         ra = [sp + 0x64]
         mov.s f0, f22
         ldc1 f22, 0x28, sp
         ldc1 f20, 0x20, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         s0 = [sp + 0x40]
         s1 = [sp + 0x44]
         s2 = [sp + 0x48]
         s3 = [sp + 0x4c]
         s4 = [sp + 0x50]
         s5 = [sp + 0x54]
         s6 = [sp + 0x58]
         s7 = [sp + 0x5c]
         fp = [sp + 0x60]
         ret
         sp += 0x90

    loc_0x803817ac: // orphan
         
         mtc1 v0, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f10

    loc_0x803817c0: // orphan
         mtc1 at, f4
         
         add.s f8, f8, f4

    loc_0x803817cc: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         t0 = [sp + 0x24]
         at = 0x8641 << 16
         div.s f16, f8, f6
         t1 = [t0 + 4]
         t3 = 0 | 0x8000
         t2 = t1 << 2
         at += t2
         lwc1 f18, -0x69b8, at
         c.lt.s f16, f18
         
         bc1fl 0x8038180c
         ra = [sp + 0x14]         // fp
         [sp + 0x1c] = t3
         ra = [sp + 0x14]         // fp
         v0 = , unsigned  halfword [sp + 0x1e]
         sp += 0x20
         ret                      // fp
         

    loc_0x8038183c: // orphan
         at = 0x8641 << 16
         at += t6
         t6 = [at - 0x6530]
         goto t6
         

    loc_0x803819c8: // orphan
         c.lt.s f8, f0
         sub.s f14, f6, f18
         bc1fl 0x803819e4
         sub.s f12, f0, f4
         goto 0x803819e8
         sub.s f12, f0, f8

    loc_0x803819e8: // orphan
         swc1 f12, 0x58, sp
         goto 0x80381a9c
         swc1 f14, 0x5c, sp

    loc_0x80381a04: // orphan
         swc1 f12, 0x6c, sp
         swc1 f12, 0x60, sp
         swc1 f2, 0x68, sp
         swc1 f2, 0x64, sp
         lwc1 f10, 0x48, a0       // arg1
         lwc1 f18, -0x6504, at
         at = 0xc2b9 << 16
         swc1 f10, 0x70, sp
         lwc1 f6, 0x54, a1        // arg2
         mtc1 at, f4
         at = 0 + 1
         add.s f8, f6, f18
         sub.s f10, f4, f8
         swc1 f10, 0x74, sp
         t7 = [a1 + 0xc]          // arg2
         lwc1 f10, 0x74, sp
         if                       // likely
         at = 0x4234 << 16

    loc_0x80381a4c: // orphan
         mtc1 at, f18

    loc_0x80381a50: // orphan
         lwc1 f6, 0x48, a0        // arg1
         goto 0x80381a6c
         sub.s f14, f6, f18

    loc_0x80381a5c: // orphan
         at = 0xc332 << 16
         mtc1 at, f8
         lwc1 f4, 0x48, a0        // arg1
         sub.s f14, f4, f8

    loc_0x80381a6c: // orphan
         lwc1 f0, 0x50, a0        // arg1
         lwc1 f6, 0x74, sp
         c.lt.s f10, f0
         
         bc1fl 0x80381a90
         sub.s f12, f0, f6
         goto 0x80381a94
         sub.s f12, f0, f10

    loc_0x80381a94: // orphan
         swc1 f12, 0x58, sp
         swc1 f14, 0x5c, sp

    loc_0x80381a9c: // orphan
         lwc1 f12, 0x58, sp
         lwc1 f14, 0x5c, sp
         t8 = sp + 0x68
         t9 = sp + 0x60
         mfc1 a2, f12
         [sp + 0x14] = t9
         [sp + 0x10] = t8
         a3 = sp + 0x70           // arg4
         [sp + 0x80] = a0
         [sp + 0x7c] = a1
         halfword [sp + 0x7a] = t0
         call 0x864037c0          // 0x864037c0(0x0, 0x0, 0x0, 0x178070)
         swc1 f14, 0x18, sp
         a1 = 0x8641 << 16
         a1 = [a1 + 0x6c00]
         t1 = 0 + 3
         a0 = [sp + 0x80]
         t2 = [a1 + 0x70]
         t0 = , unsigned  halfword [sp + 0x7a]
         lwc1 f12, 0x58, sp
         a3 = byte [t2 + 0x2181]
         v1 = v0
         t3 = [sp + 0x7c]
         if                       // likely
         t5 = [sp + 0x7c]

    loc_0x80381b00: // orphan
         t4 = [t3 + 0xc]
         at = 0 + 9
         bnel t4, at, 0x80381b18  // likely
         v0 = [t5 + 4]

    loc_0x80381b10: // orphan
         v1 = 0 + 1

    loc_0x80381b14: // orphan
         v0 = [t5 + 4]

    loc_0x80381b18: // orphan
         at = , unsigned  , v0 < 8
         if                       // unlikely
         t6 = v0 << 2

    loc_0x80381b24: // orphan
         at = 0x8641 << 16
         at += t6
         t6 = [at - 0x6500]
         goto t6
         

    loc_0x80381c24: // orphan
         goto 0x80381d18
         t0 = 0 + 0x100

    loc_0x80381c2c: // orphan
         add.s f4, f18, f2
         at = 0 + 4
         c.lt.s f4, f0
         
         bc1f 0x80381c4c
         
         goto 0x80381d18
         t0 = 0 + 0x200

    loc_0x80381d18: // orphan
         t9 = [a0 + 0xc]
         t2 = t9 << 6
         bgezl t2, 0x80381f7c     // likely
         t2 = [sp + 0x7c]

    loc_0x80381d28: // orphan
         if                       // likely
         at = 0 + 1

    loc_0x80381d30: // orphan
         if                       // likely
         at = 0 + 2

    loc_0x80381d38: // orphan
         if                       // likely
         

    loc_0x80381d40: // orphan
         if                       // unlikely
         t8 = 0 + 1

    loc_0x80381d48: // orphan
         goto 0x80381f64
         t9 = [sp + 0x50]

    loc_0x80381d50: // orphan
         goto 0x80381f60
         [sp + 0x50] = 0

    loc_0x80381d58: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x48] = v0
         mtc1 v0, f4
         at = 0x4270 << 16
         mtc1 at, f10
         cvt.s.w f8, f4
         at = 0x4120 << 16
         mtc1 at, f18
         t0 = , unsigned  halfword [sp + 0x7a]
         div.s f6, f8, f10
         mtc1 0, f8
         mul.s f4, f6, f18
         c.le.s f8, f4
         
         bc1f 0x80381de8
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         mtc1 v0, f10
         at = 0x4270 << 16
         mtc1 at, f18
         cvt.s.w f6, f10
         at = 0x4120 << 16
         mtc1 at, f8
         at = 0x3f00 << 16
         t0 = , unsigned  halfword [sp + 0x7a]
         div.s f4, f6, f18
         mtc1 at, f6
         mul.s f10, f4, f8
         add.s f18, f10, f6
         trunc.w.s f4, f18
         mfc1 v1, f4
         goto 0x80381e30
         t5 = [sp + 0x48]

    loc_0x80381de8: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         mtc1 v0, f8
         at = 0x4270 << 16
         mtc1 at, f6
         cvt.s.w f10, f8
         at = 0x4120 << 16
         mtc1 at, f4
         at = 0x3f00 << 16
         t0 = , unsigned  halfword [sp + 0x7a]
         div.s f18, f10, f6
         mtc1 at, f10
         mul.s f8, f18, f4
         sub.s f6, f8, f10
         trunc.w.s f18, f6
         mfc1 v1, f18
         
         t5 = [sp + 0x48]

    loc_0x80381e30: // orphan
         t6 = v1 + 1
         divu 0, t5, t6
         t7 = hi
         t8 = , unsigned  , t7 < 1
         if                       // likely
         

    loc_0x80381e48: // orphan
         break 7

    loc_0x80381e4c: // orphan
         [sp + 0x50] = t8

    loc_0x80381e50: // orphan
         goto 0x80381f64
         t9 = [sp + 0x50]

    loc_0x80381e58: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x48] = v0
         mtc1 v0, f4
         at = 0x4270 << 16
         mtc1 at, f10
         cvt.s.w f8, f4
         at = 0x4120 << 16
         mtc1 at, f18
         t0 = , unsigned  halfword [sp + 0x7a]

    loc_0x80381e84: // orphan
         div.s f6, f8, f10
         mtc1 0, f8
         mul.s f4, f6, f18
         c.le.s f8, f4
         
         bc1f 0x80381ee8
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         mtc1 v0, f10
         at = 0x4270 << 16
         mtc1 at, f18
         cvt.s.w f6, f10
         at = 0x4120 << 16
         mtc1 at, f8
         at = 0x3f00 << 16
         t0 = , unsigned  halfword [sp + 0x7a]
         div.s f4, f6, f18
         mtc1 at, f6
         mul.s f10, f4, f8
         add.s f18, f10, f6
         trunc.w.s f4, f18
         mfc1 v1, f4
         goto 0x80381f30
         t3 = [sp + 0x48]

    loc_0x80381f30: // orphan
         t4 = , signed  v1 >> 2
         t5 = t4 + 1
         divu 0, t3, t5
         t6 = hi
         t7 = , unsigned  , t6 < 1
         if                       // likely
         

    loc_0x80381f4c: // orphan
         break 7

    loc_0x80381f50: // orphan
         [sp + 0x50] = t7
         goto 0x80381f64
         t9 = [sp + 0x50]

    loc_0x80381f5c: // orphan
         [sp + 0x50] = t8

    loc_0x80381f60: // orphan
         t9 = [sp + 0x50]

    loc_0x80381f64: // orphan
         beql t9, 0, 0x80381fd4   // likely
         ra = [sp + 0x24]

    loc_0x80381f6c: // orphan
         t0 |= 0x8000
         goto 0x80381fd0
         t0 &= 0xffff

    loc_0x80381f7c: // orphan
         a3 = sp + 0x68
         t3 = sp + 0x60
         v0 = [t2 + 0x40]
         v1 = , v0 < 6
         v1 ^= 1
         t4 = v0 + 1
         if                       // unlikely
         [t2 + 0x40] = t4

    loc_0x80381f9c: // orphan
         mfc1 a2, f12
         a1 = [sp + 0x7c]
         [sp + 0x10] = t3
         [sp + 0x80] = a0
         call 0x86403b3c          // 0x86403b3c(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x7a] = t0
         mfc1 a2, f0
         a0 = [sp + 0x80]
         call 0x86403cdc          // 0x86403cdc(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x7c]
         t0 = , unsigned  halfword [sp + 0x7a]
         t0 |= v0
         t0 &= 0xffff

    loc_0x80381fd0: // orphan
         ra = [sp + 0x24]

    loc_0x80381fd4: // orphan
         sp += 0x80
         v0 = t0
         ret
         

    loc_0x80381ff0: // orphan
         [sp + 0x14] = ra
         t7 = [t6 + 0x70]
         at = 0 + 1
         v0 = byte [t7 + 0x2181]
         if                       // unlikely
         

    loc_0x80382008: // orphan
         if                       // likely
         

    loc_0x80382010: // orphan
         mtc1 0, f12
         goto 0x803820d4
         ra = [sp + 0x14]

    loc_0x8038201c: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         
         mtc1 v0, f4
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f4

    loc_0x80382034: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80382040: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         at = 0x3f80 << 16
         mtc1 at, f18

    loc_0x80382050: // orphan
         div.s f0, f6, f10
         at = 0x8641 << 16
         lwc1 f8, -0x64e0, at
         at = 0x40c0 << 16
         mtc1 at, f10
         add.s f16, f0, f0
         sub.s f4, f16, f18
         mul.s f6, f4, f8
         
         mul.s f12, f6, f10
         goto 0x803820d0
         

    loc_0x80382080: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         
         mtc1 v0, f16
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f18, f16

    loc_0x80382098: // orphan
         mtc1 at, f4
         
         add.s f18, f18, f4

    loc_0x803820a4: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         at = 0x3f80 << 16
         mtc1 at, f10
         div.s f0, f18, f8
         at = 0x8641 << 16
         lwc1 f4, -0x64dc, at
         add.s f6, f0, f0
         sub.s f16, f6, f10
         mul.s f2, f16, f4
         add.s f12, f2, f2

    loc_0x803820d0: // orphan
         ra = [sp + 0x14]

    loc_0x803820d4: // orphan
         sp += 0x18
         mov.s f0, f12
         ret
         

    loc_0x8038215c: // orphan
         c.le.s f8, f0
         
         bc1f 0x80382188
         
         t8 = [a0 + 0xc]          // arg1
         at = 0x20 << 16
         v1 = 0 + 1
         t9 = t8 | at
         [a0 + 0xc] = t9          // arg1
         goto 0x803822a4
         [v0 + 4] = v1

    loc_0x803821bc: // orphan
         at = 0x80 << 16
         v1 = 0 + 2
         t2 = t1 | at
         [a0 + 0xc] = t2          // arg1
         goto 0x803822a4
         [v0 + 4] = v1

    loc_0x803822a4: // orphan
         beql a1, v1, 0x803822c0  // likely
         ra = [sp + 0x14]

    loc_0x803822ac: // orphan
         call 0x86404724          // 0x86404724(0x0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = v0
         v0 = [sp + 0x1c]
         swc1 f0, 0x54, v0
         ra = [sp + 0x14]

    loc_0x803822c0: // orphan
         sp += 0x20
         ret
         

    loc_0x80398940: // orphan
         if                       // unlikely
         

    loc_0x80398948: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398970: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398980: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8039898c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398998: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803989a4: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803989c0: // orphan
         if                       // unlikely
         

    loc_0x803989c8: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803989fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398a08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80398a14: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398a44: // orphan
         if                       // unlikely
         

    loc_0x80398a4c: // orphan
         if                       // unlikely
         

    loc_0x80398a54: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398a70: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80398a80: // orphan
         teq s0, 0, 0x2fb

}

*/
