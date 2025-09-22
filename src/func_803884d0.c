/*
 * Function: 0x803884d0
 * ROM Offset: 0x002894d0
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.803884d0 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
// do {
// } while (?);
}
return eax;
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
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
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
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
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
if                       // likely
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
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
}

/*
// Full analysis output
int fcn.803884d0 (int esi, int edx) {
    loc_0x80368770:
        a0 = 7 << 16
         // do {
    loc_0x80368774:
        v1 = [s1 + 0]
        t8 = 0 + 1
        t9 = t8 << s0
        t6 = [v1 + 0xf4]
        t3 = v1 + v0
        t1 = v1 + v0
        t7 = , unsigned  byte [t6 + 0x2182]
        t2 = t1 + a0  // arg1
        t4 = t3 + a0  // arg1
        t0 = t7 & t9
        beql t0, 0, 0x803687b0 // unlikely
        [t4 + 0x3bbc] = a3
         // } while (?);
        }
        return eax;
    loc_0x803687a4:
        goto 0x803687b0
        [t2 + 0x3bbc] = a1
         // do {
    loc_0x803687b0:
        t5 = [s1 + 0]
        t6 = t5 + v0
        t8 = t6 + a0  // arg1
        [t8 + 0x3bc0] = 0
        t7 = [s1 + 0]
        t9 = t7 + v0
        t0 = t9 + a0  // arg1
        [t0 + 0x3bc4] = 0
        t2 = [s1 + 0]
        t1 = halfword [a2 + 0x3c]
        t3 = t2 + v0
        t4 = t3 + a0  // arg1
        halfword [t4 + 0x3bcc] = t1
        t5 = [s1 + 0]
        t6 = t5 + v0
        t8 = t6 + a0  // arg1
        byte [t8 + 0x3bcf] = 0
        t7 = [s1 + 0]
        t9 = t7 + v0
         // } while (?);
        }
        return eax;
    loc_0x803687fc: // orphan
             t0 = t9 + a0             // arg1
             halfword [t0 + 0x3bd0] = 0
             t2 = [s1 + 0]
             t3 = t2 + v0
             t1 = t3 + a0             // arg1
             byte [t1 + 0x3bd2] = s0
             s0 += 1
             at = , s0 < 4
             if                       // likely
             v0 += 0x18

    loc_0x80368824: // orphan
         call 0x862026c8          // 0x862026c8(0x0, 0x0, 0x0, 0x0)
         
         t5 = [s1 + 0]
         a0 = 7 << 16
         t4 = 0 + 3
         t6 = t5 + a0
         byte [t6 + 0x3bd2] = t4
         t8 = [s1 + 0]
         t7 = t8 + a0
         byte [t7 + 0x3c1a] = 0
         t9 = [s1 + 0]
         t0 = , unsigned  byte [t9 + 0x60]
         beql t0, 0, 0x803688e4   // unlikely
         ra = [sp + 0x2c]

    loc_0x8036885c: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         
         at = 0 + 0x29
         divu 0, v0, at
         s5 = hi
         s0 = 0
         if                       // likely
         s4 = 7 << 16

    loc_0x8036887c: // orphan
         s4 |= 0x3bbc
         s3 = 0 + 0x18

    loc_0x80368884: // orphan
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         
         call 0x8003570c          // 0x8003570c(0x0, 0x0, 0x0, 0x0)
         s2 = v0 & 3
         unsigned , hi
         t1 = v0 & 3
         v1 = [s1 + 0]
         s0 += 1
         at = , s0 < s5
         t2 = lo
         t3 = v1 + t2
         a0 = t3 + s4
         unsigned , hi
         a2 = , unsigned  byte [a0 + 0x16]
         t5 = lo
         t4 = v1 + t5
         a1 = t4 + s4
         t6 = , unsigned  byte [a1 + 0x16]
         byte [a0 + 0x16] = t6

    loc_0x803688d8: // orphan
         if                       // unlikely
         byte [a1 + 0x16] = a2

    loc_0x803688e0: // orphan
         ra = [sp + 0x2c]

    loc_0x803688e4: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x80368ac4: // orphan
         cvt.s.w f18, f10
         t0 = [s0 + 0]
         at = 0x8621 << 16
         mtc1 0, f10
         div.s f16, f8, f18
         swc1 f16, 4, t0
         t1 = [s0 + 0]
         lwc1 f6, -0x1f70, at
         at = 0x3f80 << 16
         mtc1 at, f4
         swc1 f6, 0xc, t1
         t2 = [s0 + 0]
         swc1 f4, 0x14, t2
         t3 = [s0 + 0]
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         swc1 f10, 0x10, t3
         mtc1 v0, f18
         at = 0x4425 << 16
         mtc1 at, f8
         cvt.s.w f16, f18
         t4 = [s0 + 0]
         at = 0x8621 << 16
         mtc1 0, f10
         t7 = 0 + 1
         t9 = 0 + 0x80
         div.s f6, f8, f16
         swc1 f6, 0x18, t4
         t5 = [s0 + 0]
         lwc1 f4, -0x1f6c, at
         swc1 f4, 0x20, t5
         t6 = [s0 + 0]
         swc1 f10, 0x1c, t6
         t8 = [s0 + 0]
         [t8 + 0x48] = t7
         t0 = [s0 + 0]
         [t0 + 0x50] = t9
         t1 = [s0 + 0]
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [t1 + 0x4c] = 0
         at = 0 + 0x3c
         if                       // likely
         at = 0x8621 << 16

    loc_0x80368b6c: // orphan
         lwc1 f18, -0x1f68, at
         t2 = [s0 + 0]
         goto 0x80368b8c
         swc1 f18, 0x30, t2

    loc_0x80368b7c: // orphan
         at = 0x8621 << 16
         lwc1 f8, -0x1f64, at
         t3 = [s0 + 0]
         swc1 f8, 0x30, t3

    loc_0x80368b8c: // orphan
         at = 0x3f80 << 16
         mtc1 at, f16
         t4 = [s0 + 0]
         mtc1 0, f6
         t6 = 0 + 3
         swc1 f16, 0x38, t4
         t5 = [s0 + 0]
         t8 = 0 + 0xa
         t0 = 0 + 1
         swc1 f6, 0x34, t5
         t7 = [s0 + 0]
         [t7 + 0x3c] = t6
         t9 = [s0 + 0]
         [t9 + 0x44] = t8
         t1 = [s0 + 0]
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [t1 + 0x40] = t0
         mtc1 v0, f10
         at = 0x8621 << 16
         lwc1 f0, -0x1f60, at
         cvt.s.w f18, f10
         at = 0x4120 << 16
         mtc1 at, f2
         at = 0x8621 << 16
         lwc1 f4, -0x1f5c, at
         t2 = [s0 + 0]
         at = 0x447a << 16
         div.s f8, f4, f18
         mtc1 at, f16
         mtc1 0, f6
         t5 = 0 + 2
         t8 = 0 + 3
         at = 0x8621 << 16
         mtc1 0, f18
         swc1 f8, 0x24, t2
         t3 = [s0 + 0]
         t2 = 0 + 1
         swc1 f16, 0x2c, t3
         t4 = [s0 + 0]
         swc1 f6, 0x28, t4
         t6 = [s0 + 0]
         [t6 + 0x54] = t5
         t7 = [s0 + 0]
         [t7 + 0x58] = 0
         t9 = [s0 + 0]
         [t9 + 0x5c] = t8
         t0 = [s0 + 0]
         byte [t0 + 0x60] = 0
         t1 = [s0 + 0]
         byte [t1 + 0x61] = 0
         t3 = [s0 + 0]
         byte [t3 + 0x62] = t2
         t4 = [s0 + 0]
         lwc1 f10, -0x1f58, at
         at = 0x3fc0 << 16
         mtc1 at, f4
         swc1 f10, 0x64, t4
         t5 = [s0 + 0]
         at = 0x4040 << 16
         mtc1 at, f8
         swc1 f0, 0x68, t5
         t6 = [s0 + 0]
         at = 0x3f80 << 16
         mtc1 at, f16
         swc1 f2, 0x6c, t6
         t7 = [s0 + 0]
         swc1 f4, 0xcc, t7
         t8 = [s0 + 0]
         swc1 f18, 0xd0, t8
         t9 = [s0 + 0]
         swc1 f8, 0xd4, t9
         t0 = [s0 + 0]
         swc1 f16, 0xd8, t0
         t1 = [s0 + 0]
         swc1 f0, 0xdc, t1
         t2 = [s0 + 0]
         swc1 f2, 0xe0, t2
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x80368cd0: // orphan
         
         sp -= 0x58
         [sp + 0x38] = s1
         s1 = 0x8621 << 16
         s1 -= 0x1e68
         a0 = [s1 + 0]
         [sp + 0x3c] = ra
         [sp + 0x34] = s0
         call 0x87f0c650          // 0x87f0c650(-1, 0x0, 0x0, 0x0)
         a0 += 0x120
         s0 = [s1 + 0]
         at = 0 + 4
         a0 = [s0 + 0xf4]
         t6 = , unsigned  byte [a0 + 0x2180]
         if                       // likely
         

    loc_0x80368d10: // orphan
         a0 = s0 + 0x120
         call 0x87f0c694          // 0x87f0c694(0x120, 0x0, 0x0, 0x0)
         a1 = 0 + 0x14
         t7 = [s1 + 0]
         a0 = [t7 + 0xf4]

    loc_0x80368d24: // orphan
         call 0x87f01870          // 0x87f01870(0x0, 0x0, 0x0, 0x0)
         
         t8 = [s1 + 0]
         call 0x87f01f34          // 0x87f01f34(0x0, 0x0, 0x0, 0x0)
         a0 = [t8 + 0xf4]
         call 0x87f00030          // 0x87f00030(-1, 0x0, 0x0, 0x0)
         
         call 0x87f0455c          // 0x87f0455c(-1, 0x0, 0x0, 0x0)
         
         call 0x86202c14          // 0x86202c14(-1, 0x0, 0x0, 0x0)
         
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x0, 0x0, 0x0)
         a0 = 0 + 0x9b
         call 0x8004ddf4          // 0x8004ddf4(0x9b, 0x0, 0x0, 0x0)
         a0 = 0 + 0x99
         at = 0x4260 << 16
         mtc1 at, f0
         at = 0x8621 << 16
         lwc1 f4, -0x1f54, at
         a0 = [s1 + 0]
         t9 = 0 - 0x23e1
         t0 = 0 + 0x2000
         mfc1 a1, f0
         mfc1 a3, f0
         [sp + 0x18] = t0
         [sp + 0x14] = t9
         a2 = 0x423c << 16
         swc1 f4, 0x10, sp
         call 0x87f0c094          // 0x87f0c094(-1, 0x0, 0x423c0000, 0x0)
         a0 += 0x70
         call 0x80002b24          // 0x80002b24(0x10000006f, 0x0, 0x423c0000, 0x0)
         
         a0 = v0
         call 0x800030d0          // 0x800030d0(0x0, 0x0, 0x423c0000, 0x0)
         a1 = 0
         a1 = 0x8621 << 16
         [sp + 0x50] = v0
         a1 -= 0x7fc8
         call 0x80040e80          // 0x80040e80(0x0, 0x86208038, 0x423c0000, 0x0)
         a0 = v0
         t1 = [s1 + 0]
         a1 = 0 + 0x99
         a2 = 0
         [t1 + 0xf0] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x99, 0x0, 0x0)
         a0 = [sp + 0x50]
         t2 = [s1 + 0]
         a1 = 0 + 0x99
         a2 = 0 + 1
         [t2 + 0x12c] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x99, 0x1, 0x0)
         a0 = [sp + 0x50]
         t3 = [s1 + 0]
         a1 = 0 + 0x99
         a2 = 0 + 2
         [t3 + 0x130] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x99, 0x2, 0x0)
         a0 = [sp + 0x50]

    loc_0x80368e0c: // orphan
         t4 = [s1 + 0]
         a1 = 0 + 0x99
         a2 = 0 + 3
         [t4 + 0x134] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x99, 0x3, 0x0)
         a0 = [sp + 0x50]
         t5 = [s1 + 0]
         a1 = 0x8621 << 16
         a1 -= 0x6c48
         [t5 + 0x138] = v0
         call 0x80040e80          // 0x80040e80(0x0, 0x862093b8, 0x3, 0x0)
         a0 = [sp + 0x50]
         t6 = [s1 + 0]
         a1 = 0 + 0x9b
         a2 = 0
         [t6 + 0x13c] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x9b, 0x0, 0x0)
         a0 = [sp + 0x50]
         t7 = [s1 + 0]
         a1 = 0 + 0x9b
         a2 = 0 + 1
         [t7 + 0x140] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x9b, 0x1, 0x0)
         a0 = [sp + 0x50]
         t8 = [s1 + 0]
         a1 = 0 + 0x9b
         a2 = 0 + 2
         [t8 + 0x144] = v0
         call 0x8004df38          // 0x8004df38(0x0, 0x9b, 0x2, 0x0)
         a0 = [sp + 0x50]
         t9 = [s1 + 0]
         s0 = 0x8621 << 16
         s0 -= 0x20a0
         a3 = 0
         [t9 + 0x148] = v0
         a1 = [s0 + 8]

    loc_0x80368e9c: // orphan
         a0 = [sp + 0x50]
         a2 = 0 + 8
         at = a1
         a1 <<= 2
         a1 -= at
         a1 <<= 4
         call 0x8000318c          // 0x8000318c(0x0, 0x0, 0x8, 0x0)
         [sp + 0x44] = a3
         a3 = [sp + 0x44]
         t0 = [s1 + 0]
         at = 7 << 16
         s0 += 0xc
         t1 = t0 + a3
         at += t1
         [at + 0x2254] = v0
         a3 += 4
         at = , a3 < 0x10
         bnel at, 0, 0x80368e9c   // likely
         a1 = [s0 + 8]

    loc_0x80368ee8: // orphan
         call 0x80003120          // 0x80003120(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x50]
         call 0x8003efe0          // 0x8003efe0(0x0, 0x0, 0x0, 0x0)
         
         a1 = 0x8621 << 16
         a1 -= 0x1e80
         call 0x80037e9c          // 0x80037e9c(0x0, 0x8620e180, 0x0, 0x0)
         a0 = 0
         a1 = 0x8621 << 16
         a1 -= 0x1e98
         call 0x80037e9c          // 0x80037e9c(0x0, 0x8620e168, 0x0, 0x0)
         a0 = 0
         a1 = 0x8621 << 16
         a1 -= 0x1eb0
         call 0x80037e9c          // 0x80037e9c(0x0, 0x8620e150, 0x0, 0x0)
         a0 = 0
         call 0x87f024cc          // 0x87f024cc(0x0, 0x8620e150, 0x0, 0x0)
         
         a0 = [s1 + 0]
         at = 7 << 16
         at |= 0x3b88
         a1 = 0 + 0x80
         call 0x87f02cb0          // 0x87f02cb0(-1, 0x80, 0x0, 0x0)
         a0 += at
         s0 = [s1 + 0]
         a0 = 0x8621 << 16
         a0 -= 0x1e80
         a3 = 0 + 0x80
         a1 = s0 + 0x174
         call 0x87f0252c          // 0x87f0252c(0x8620e180, 0x100000173, 0x0, 0x80)
         a2 = s0 + 0x188
         s0 = [s1 + 0]
         at = 0 | 0xed88
         a0 = 0x8621 << 16
         a1 = s0 + at
         at = 0 | 0xed9c
         a0 -= 0x1e98
         a3 = 0 + 0x400
         call 0x87f0252c          // 0x87f0252c(0x8620e168, 0x10000ed87, 0x100000187, 0x400)
         a2 = s0 + at
         a0 = 0
         v0 = 0
         v1 = 0 | 0xc788

    loc_0x80368f94: // orphan
         s0 = [s1 + 0]
         t2 = s0 + v0
         v0 += 0x4c
         at = , v0 < 0x2600
         t3 = t2 + v1
         t4 = s0 + a0
         a0 += 0x18c
         if                       // likely
         [t4 + 0x1a8] = t3

    loc_0x80368fb8: // orphan
         s0 = [s1 + 0]
         at = 7 << 16
         at |= 0x1d9c
         a1 = s0 + at
         at = 7 << 16
         at |= 0x1db0
         a0 = 0x8621 << 16
         a0 -= 0x1eb0
         a3 = 0 + 3
         call 0x87f0252c          // 0x87f0252c(0x8620e150, 0x100071d9b, 0x0, 0x3)
         a2 = s0 + at
         call 0x86206508          // 0x86206508(0x8620e150, 0x100071d9b, 0x100071daf, 0x3)
         
         s0 = [s1 + 0]
         at = 7 << 16
         at |= 0x28a8
         t5 = [s0 + 0xf4]
         a0 = s0 + at
         call 0x87f029b8          // 0x87f029b8(0x1000728a7, 0x100071d9b, 0x100071daf, 0x3)
         a1 = , unsigned  byte [t5 + 0x2182]
         s0 = [s1 + 0]
         a2 = 0
         a0 = s0 + 0xf8
         call 0x87f0d48c          // 0x87f0d48c(0x1000000f7, 0xff, 0x0, 0x3)
         a1 = [s0 + 0xf4]
         call 0x862075bc          // 0x862075bc(0x1000000f7, -1, 0x0, 0x3)
         
         call 0x862006c8          // 0x862006c8(0x1000000f7, -1, 0x0, 0x3)

    loc_0x80369028: // orphan
         
         call 0x862002a4          // 0x862002a4(0x0, 0x0, 0x0, 0x0)
         
         call 0x8620050c          // 0x8620050c(0x0, 0x0, 0x0, 0x0)
         
         v1 = 0
         a1 = 0 + 4
         a0 = 7 << 16

    loc_0x80369048: // orphan
         s0 = [s1 + 0]
         t8 = 0 + 1
         t9 = t8 << v1
         t6 = [s0 + 0xf4]
         t2 = s0 + v1
         t3 = t2 + a0
         t7 = , unsigned  byte [t6 + 0x2182]
         v0 = 0 + 2
         t0 = t7 & t9
         if                       // unlikely
         

    loc_0x80369074: // orphan
         goto 0x8036907c
         v0 = 0 + 6

    loc_0x8036907c: // orphan
         t1 = v0 + v1
         v1 += 1
         if                       // likely
         byte [t3 + 0x3cb8] = t1

    loc_0x8036908c: // orphan
         call 0x862079c0          // 0x862079c0(0x0, 0x0, 0x0, 0x0)
         
         call 0x86202ac4          // 0x86202ac4(0x0, 0x0, 0x0, 0x0)
         
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t4 = 0 + 0xc
         t5 = 0 + 0xa
         t6 = 0 + 1
         t8 = 0 + 3
         t7 = s0 + 4
         t9 = s0 + 8
         [sp + 0x2c] = t9
         [sp + 0x28] = t7
         [sp + 0x20] = t8
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x10] = t4
         a3 -= 0x2060
         a0 = 0
         a1 = 0
         a2 = 0
         [sp + 0x14] = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x0, 0x8620dfa0)
         [sp + 0x24] = s0
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t0 = 0 + 0xc
         t2 = 0 + 1
         t1 = 0 + 0xa
         t3 = 0 + 1
         t4 = 0 + 5
         t5 = s0 + 0x30
         t6 = s0 + 0x34
         t8 = s0 + 0x38
         [sp + 0x2c] = t8
         [sp + 0x28] = t6
         [sp + 0x24] = t5
         [sp + 0x20] = t4
         [sp + 0x1c] = t3
         [sp + 0x18] = t1
         [sp + 0x14] = t2
         [sp + 0x10] = t0
         a3 -= 0x2058
         a0 = 0
         a1 = 0

    loc_0x80369144: // orphan
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x0, 0x0)
         a2 = 0 + 1
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t7 = 0 + 0xc
         t9 = 0 + 2
         t0 = 0 + 0xa
         t2 = 0 + 1
         t1 = 0 + 3
         t3 = s0 + 0xc
         t4 = s0 + 0x10
         t5 = s0 + 0x14
         [sp + 0x2c] = t5
         [sp + 0x28] = t4
         [sp + 0x24] = t3
         [sp + 0x20] = t1
         [sp + 0x1c] = t2
         [sp + 0x18] = t0
         [sp + 0x14] = t9
         [sp + 0x10] = t7
         a3 -= 0x2050
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x1, 0x8620dfb0)
         a2 = 0 + 2
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t6 = 0 + 0xc
         t8 = 0 + 3
         t7 = 0 + 6
         t9 = 0 + 1
         t0 = 0 + 3
         t2 = s0 + 0x3c
         t1 = s0 + 0x40
         t3 = s0 + 0x44
         [sp + 0x2c] = t3
         [sp + 0x28] = t1
         [sp + 0x24] = t2
         [sp + 0x20] = t0
         [sp + 0x1c] = t9
         [sp + 0x18] = t7
         [sp + 0x14] = t8
         [sp + 0x10] = t6
         a3 -= 0x2048
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x2, 0x8620dfb8)
         a2 = 0 + 3
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t4 = 0 + 0xc
         t5 = 0 + 4
         t6 = 0 + 0xa
         t8 = 0 + 4
         t7 = 0 + 5
         t9 = s0 + 0x18
         t0 = s0 + 0x1c
         t2 = s0 + 0x20
         [sp + 0x2c] = t2
         [sp + 0x28] = t0
         [sp + 0x24] = t9
         [sp + 0x20] = t7
         [sp + 0x1c] = t8
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         a3 -= 0x2040
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x3, 0x8620dfc0)
         a2 = 0 + 4
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t1 = 0 + 0xc
         t3 = 0 + 5
         t4 = 0 + 0xa
         t5 = 0 + 3
         t6 = 0 + 3
         t8 = s0 + 0x24
         t7 = s0 + 0x28
         t9 = s0 + 0x2c
         [sp + 0x2c] = t9
         [sp + 0x28] = t7
         [sp + 0x24] = t8
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t1
         a3 -= 0x2038
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x4, 0x8620dfc8)
         a2 = 0 + 5
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t0 = 0 + 0xc
         t2 = 0 + 6
         t1 = 0 + 2
         t3 = 0 + 3
         t4 = s0 + 0x48
         t5 = s0 + 0x4c
         t6 = s0 + 0x50
         [sp + 0x2c] = t6
         [sp + 0x28] = t5
         [sp + 0x24] = t4
         [sp + 0x20] = t3
         [sp + 0x1c] = t1
         [sp + 0x18] = t2
         [sp + 0x10] = t0
         a3 -= 0x2030
         a0 = 0 + 1
         a1 = 0
         a2 = 0
         call 0x87f04314          // 0x87f04314(0x1, 0x0, 0x0, 0x8620dfd0)
         [sp + 0x14] = 0
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t8 = 0 + 0xc
         t7 = 0 + 1
         t9 = 0 + 0xa
         t0 = 0 + 2
         t2 = 0 + 3
         t1 = s0 + 0x64
         t3 = s0 + 0x68
         t4 = s0 + 0x6c
         [sp + 0x2c] = t4
         [sp + 0x28] = t3
         [sp + 0x24] = t1
         [sp + 0x20] = t2
         [sp + 0x1c] = t0
         [sp + 0x18] = t9
         [sp + 0x14] = t7
         [sp + 0x10] = t8
         a3 -= 0x2028
         a0 = 0 + 1
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x1, 0x0, 0x0, 0x8620dfd8)
         a2 = 0 + 1
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t5 = 0 + 0x1c
         t6 = 0 + 0xa
         t8 = 0 + 2
         t7 = 0 + 3
         t9 = s0 + 0xcc
         t0 = s0 + 0xd0
         t2 = s0 + 0xd4
         [sp + 0x2c] = t2
         [sp + 0x28] = t0
         [sp + 0x24] = t9
         [sp + 0x20] = t7
         [sp + 0x1c] = t8
         [sp + 0x18] = t6
         [sp + 0x10] = t5
         a3 -= 0x201c
         a0 = 0 + 1
         a1 = 0 + 0x10
         a2 = 0
         call 0x87f04314          // 0x87f04314(0x1, 0x10, 0x0, 0x8620dfe4)
         [sp + 0x14] = 0
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t1 = 0 + 0x1c
         t3 = 0 + 1
         t4 = 0 + 0xa
         t5 = 0 + 3
         t6 = 0 + 3
         t8 = s0 + 0xd8
         t7 = s0 + 0xdc
         t9 = s0 + 0xe0
         [sp + 0x2c] = t9
         [sp + 0x28] = t7
         [sp + 0x24] = t8
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t1
         a3 -= 0x2014
         a0 = 0 + 1
         a1 = 0 + 0x10
         call 0x87f04314          // 0x87f04314(0x1, 0x10, 0x0, 0x8620dfec)
         a2 = 0 + 1
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t0 = 0 + 0xc
         t2 = 0 + 6
         t1 = 0 + 2
         t3 = s0 + 0x54
         t4 = s0 + 0x58
         t5 = s0 + 0x5c
         [sp + 0x2c] = t5
         [sp + 0x28] = t4
         [sp + 0x24] = t3
         [sp + 0x1c] = t1
         [sp + 0x18] = t2
         [sp + 0x10] = t0
         a3 -= 0x200c
         a0 = 0 + 2
         a1 = 0
         a2 = 0
         [sp + 0x14] = 0
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x0, 0x8620dff4)
         [sp + 0x20] = 0
         t2 = [s1 + 0]
         s0 = 0x8621 << 16
         t3 = 0x8621 << 16
         s0 -= 0x7fd0
         t3 -= 0x7fcc
         a3 = 0x8621 << 16
         t6 = 0 + 0xc
         t8 = 0 + 1
         t7 = 0 + 0xa
         t9 = 0 + 5
         t0 = 0 + 3
         t1 = t2 + 0x7c
         [sp + 0x24] = t1
         [sp + 0x20] = t0
         [sp + 0x1c] = t9
         [sp + 0x18] = t7
         [sp + 0x14] = t8
         [sp + 0x10] = t6
         a3 -= 0x2000
         [sp + 0x2c] = t3
         [sp + 0x28] = s0
         a0 = 0 + 2
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x0, 0x8620e000)
         a2 = 0 + 1
         t9 = [s1 + 0]
         t2 = 0x8621 << 16
         t2 -= 0x7fcc
         a3 = 0x8621 << 16
         t4 = 0 + 0xc
         t5 = 0 + 2
         t6 = 0 + 0xa
         t8 = 0 + 5
         t7 = 0 + 3
         t0 = t9 + 0x80
         [sp + 0x24] = t0
         [sp + 0x20] = t7
         [sp + 0x1c] = t8
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         a3 -= 0x1ff4
         [sp + 0x2c] = t2
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 2
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x2, 0x8620e00c)
         [sp + 0x28] = s0
         t8 = [s1 + 0]
         t9 = 0x8621 << 16
         t9 -= 0x7fcc
         a3 = 0x8621 << 16
         t1 = 0 + 0xc
         t3 = 0 + 3
         t4 = 0 + 0xa
         t5 = 0 + 5
         t6 = 0 + 3
         t7 = t8 + 0x84
         [sp + 0x24] = t7
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t1
         a3 -= 0x1fe8
         [sp + 0x2c] = t9
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 3
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x3, 0x8620e018)
         [sp + 0x28] = s0
         t5 = [s1 + 0]
         t8 = 0x8621 << 16
         t8 -= 0x7fcc
         a3 = 0x8621 << 16
         t0 = 0 + 0xc
         t2 = 0 + 4
         t1 = 0 + 0xa
         t3 = 0 + 5
         t4 = 0 + 3
         t6 = t5 + 0x88
         [sp + 0x24] = t6
         [sp + 0x20] = t4
         [sp + 0x1c] = t3
         [sp + 0x18] = t1
         [sp + 0x14] = t2
         [sp + 0x10] = t0
         a3 -= 0x1fdc
         [sp + 0x2c] = t8
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 4
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x4, 0x8620e024)
         [sp + 0x28] = s0
         t1 = [s1 + 0]
         s0 = 0x87f1 << 16
         t4 = 0x87f1 << 16
         s0 -= 0x4f8
         t4 -= 0x4f4
         a3 = 0x8621 << 16
         t7 = 0 + 0xe
         t9 = 0 + 5
         t0 = 0 + 4
         t2 = 0 + 5
         t3 = t1 + 0x8c
         [sp + 0x24] = t3
         [sp + 0x1c] = t2
         [sp + 0x18] = t0
         [sp + 0x14] = t9
         [sp + 0x10] = t7
         a3 -= 0x1fd0
         [sp + 0x2c] = t4
         [sp + 0x28] = s0
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 5
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x5, 0x8620e030)
         [sp + 0x20] = 0
         t9 = [s1 + 0]
         t2 = 0x87f1 << 16
         t2 -= 0x4f4
         a3 = 0x8621 << 16
         t5 = 0 + 0xe
         t6 = 0 + 6
         t8 = 0 + 4
         t7 = 0 + 5
         t0 = t9 + 0x8e
         [sp + 0x24] = t0
         [sp + 0x1c] = t7
         [sp + 0x18] = t8
         [sp + 0x14] = t6
         [sp + 0x10] = t5
         a3 -= 0x1fc4
         [sp + 0x2c] = t2
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 6
         [sp + 0x20] = 0
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x6, 0x8620e03c)
         [sp + 0x28] = s0
         s0 = [s1 + 0]
         a3 = 0x8621 << 16
         t1 = 0 + 0xc
         t3 = 0 + 7
         t4 = 0 + 3
         t5 = 0 + 1
         t6 = s0 + 0x60
         t8 = s0 + 0x61
         t7 = s0 + 0x62
         [sp + 0x2c] = t7
         [sp + 0x28] = t8
         [sp + 0x24] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t1
         a3 -= 0x1fb8
         a0 = 0 + 2
         a1 = 0
         a2 = 0 + 7
         call 0x87f04314          // 0x87f04314(0x2, 0x0, 0x7, 0x8620e048)
         [sp + 0x20] = 0
         t9 = [s1 + 0]
         at = 7 << 16
         at += t9
         [at + 0x3cbc] = 0
         t0 = [s1 + 0]
         at = 0 + 4
         t2 = [t0 + 0xf4]
         t1 = , unsigned  byte [t2 + 0x2180]
         bnel t1, at, 0x8036975c  // likely
         ra = [sp + 0x3c]

    loc_0x80369728: // orphan
         call 0x8620736c          // 0x8620736c(0x0, 0x0, 0x0, 0x0)
         
         call 0x86206304          // 0x86206304(0x0, 0x0, 0x0, 0x0)
         
         call 0x86206334          // 0x86206334(0x0, 0x0, 0x0, 0x0)
         
         call 0x80007aec          // 0x80007aec(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x14
         t4 = [s1 + 0]
         t3 = 0 + 3
         call 0x87f00688          // 0x87f00688(0x14, 0x0, 0x0, 0x0)
         [t4 + 0xe8] = t3
         ra = [sp + 0x3c]

    loc_0x8036975c: // orphan
         s0 = [sp + 0x34]
         s1 = [sp + 0x38]
         ret
         sp += 0x58

    loc_0x8036a590: // orphan
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x3c] = v0
         t8 = 0x8621 << 16
         t8 = [t8 - 0x1e68]
         t9 = 7 << 16
         t1 = [sp + 0x3c]
         t9 += t8
         t9 = [t9 + 0x3bac]
         t2 = , signed  t1 >> 1
         t5 = , signed  v0 >> 1
         t3 = t9 + t2
         t4 = t3 - 1
         div 0, t4, t5
         a2 = 0x800d << 16
         a2 += 0x510
         v1 = [a2 + 0]
         t8 = 0xc8ff << 16
         t8 |= 0x73ff
         t6 = v1 + 8
         [a2 + 0] = t6
         t7 = 0xfa00 << 16
         [v1 + 0] = t7
         [v1 + 4] = t8
         a0 = v1
         v1 = [a2 + 0]
         if                       // unlikely
         

    loc_0x8036a600: // orphan
         break 7

    loc_0x8036a604: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x8036a610: // orphan
         if                       // unlikely
         

    loc_0x8036a618: // orphan
         break 6

    loc_0x8036a61c: // orphan
         t0 = lo
         t2 = 0x46 << 16
         t1 = v1 + 8
         [a2 + 0] = t1
         t2 |= 0xff
         t9 = 0xfb00 << 16
         at = , t0 < 0xa
         [v1 + 0] = t9
         [v1 + 4] = t2
         if                       // unlikely
         a1 = v1

    loc_0x8036a648: // orphan
         at = 0x8621 << 16
         lwc1 f0, -0x1f38, at
         at = 0 + 0xa
         div 0, t0, at
         t3 = hi
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t3
         a0 = 0 + 0xf4
         call 0x87f06240          // 0x87f06240(0xf4, 0x0, 0x0, 0x0)
         a1 = 0 + 0xc0
         goto 0x8036a6e0
         ra = [sp + 0x34]

    loc_0x8036a67c: // orphan
         at = 0x8621 << 16
         lwc1 f0, -0x1f34, at
         at = 0 + 0xa
         div 0, t0, at
         t4 = lo
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t4
         a0 = 0 + 0xeb
         a1 = 0 + 0xc0
         call 0x87f06240          // 0x87f06240(0xeb, 0xc0, 0x0, 0x0)
         [sp + 0x5c] = t0
         t0 = [sp + 0x5c]
         at = 0x8621 << 16
         lwc1 f0, -0x1f30, at
         at = 0 + 0xa
         div 0, t0, at
         t5 = hi
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t5
         a0 = 0 + 0xfd
         call 0x87f06240          // 0x87f06240(0xfd, 0xc0, 0x0, 0x0)
         a1 = 0 + 0xc0
         ra = [sp + 0x34]

    loc_0x8036a6e0: // orphan
         ldc1 f20, 0x28, sp
         sp += 0x60
         ret
         

    loc_0x8036abcc: // orphan
         t5 = 7 << 16
         t1 = , signed  v0 >> 1
         t5 += t3
         t5 = [t5 + 0x3bac]
         t6 = t1 << 4
         t6 -= t1
         t6 <<= 1
         at = , t5 < t6
         if                       // likely
         

    loc_0x8036abf4: // orphan
         call 0x80028118          // 0x80028118(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0xb

    loc_0x8036abfc: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x2c] = v0
         t7 = 0x8621 << 16
         t7 = [t7 - 0x1e68]

    loc_0x8036ac14: // orphan
         t8 = 7 << 16
         t9 = [sp + 0x2c]
         t8 += t7
         t8 = [t8 + 0x3bac]
         t2 = , signed  t9 >> 1
         t1 = , signed  v0 >> 1
         t4 = t8 + t2
         t3 = t4 - 1
         div 0, t3, t1
         v1 = lo
         [sp + 0x30] = v1
         if                       // unlikely
         

    loc_0x8036ac48: // orphan
         break 7

    loc_0x8036ac4c: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x8036ac58: // orphan
         if                       // unlikely
         

    loc_0x8036ac60: // orphan
         break 6

    loc_0x8036ac64: // orphan
         call 0x80001ff0          // 0x80001ff0(0x0, 0x0, 0x0, 0x0)
         
         t5 = 0x8621 << 16
         t5 = [t5 - 0x1e68]
         t6 = 7 << 16
         t7 = , signed  v0 >> 1
         t6 += t5
         t6 = [t6 + 0x3bac]
         v1 = [sp + 0x30]
         div 0, t6, t7
         if                       // unlikely
         

    loc_0x8036ac94: // orphan
         break 7

    loc_0x8036ac98: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x8036aca4: // orphan
         if                       // unlikely
         

    loc_0x8036acac: // orphan
         break 6

    loc_0x8036acb0: // orphan
         t9 = hi
         at = , v1 < 4
         bnel t9, 0, 0x8036acec   // unlikely
         ra = [sp + 0x24]

    loc_0x8036acc0: // orphan
         beql at, 0, 0x8036acec   // likely
         ra = [sp + 0x24]

    loc_0x8036acc8: // orphan
         if                       // unlikely
         

    loc_0x8036acd0: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 | 0xcf06
         goto 0x8036acec
         ra = [sp + 0x24]

    loc_0x8036ace0: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 | 0xcf00
         ra = [sp + 0x24]

    loc_0x8036acec: // orphan
         sp += 0x38
         ret
         

    loc_0x8036b6b0: // orphan
         [sp + 0x60] = a3
         [sp + 0x38] = 0
         sub.s f8, f4, f6
         a2 = sp + 0x4c           // arg3
         [sp + 0x50] = v0
         call 0x87d005e8          // 0x87d005e8(0x0, 0x0, 0x17804c, 0x0)
         swc1 f8, 0x4c, sp
         a0 = 0x8621 << 16
         a0 -= 0x1e68
         t6 = [a0 + 0]
         at = 0x3f40 << 16
         mtc1 at, f16
         lwc1 f10, 0x64, t6
         at = 0x42c8 << 16
         mtc1 at, f4
         mul.s f18, f10, f16
         lwc1 f8, 0x34, s0
         at = 0x42d9 << 16
         mtc1 at, f16
         v0 = [sp + 0x50]
         v1 = [sp + 0x38]
         a3 = [sp + 0x60]
         mul.s f6, f18, f4
         lwc1 f4, 0x44, sp
         mul.s f10, f6, f8
         add.s f12, f10, f16
         c.lt.s f0, f12
         
         bc1fl 0x8036b8a8
         ra = [sp + 0x1c]
         sub.s f2, f12, f0
         lwc1 f18, 0x18, s0
         lwc1 f16, 0x1c, s0
         neg.s f6, f4
         mul.s f8, f6, f2
         add.s f10, f18, f8
         swc1 f10, 0x18, s0
         lwc1 f4, 0x48, sp
         lwc1 f10, 0x20, s0
         neg.s f6, f4
         mul.s f18, f6, f2
         add.s f8, f16, f18
         swc1 f8, 0x1c, s0
         lwc1 f4, 0x4c, sp
         neg.s f6, f4
         mul.s f16, f6, f2
         add.s f18, f10, f16
         swc1 f18, 0x20, s0
         a2 = [a0 + 0]
         t7 = [s1 + 0x1c]
         lwc1 f4, 0x44, sp
         t8 = [a2 + 0x3c]
         t9 = t8 << 2
         t9 -= t8
         t0 = t9 - 1
         at = , t7 < t0
         beql at, 0, 0x8036b824   // likely
         lwc1 f8, 0x10, a3

    loc_0x8036b798: // orphan
         t1 = [s1 + 0xc]
         t3 = [sp + 0x58]
         v1 = 7 << 16
         t2 = t1 << 7

    loc_0x8036b7a8: // orphan
         if                       // unlikely
         t4 = t3 << 2

    loc_0x8036b7b0: // orphan
         t4 -= t3
         t4 <<= 3
         t5 = a2 + t4
         v1 += t5
         v1 = , unsigned  byte [v1 + 0x3bd2]
         t6 = [v0 + 4]
         t0 = 0x8621 << 16
         v1 += 1
         t9 = v1 << 2
         t9 -= v1
         t9 <<= 2
         t8 = t6 << 6
         t7 = t8 + t9
         t0 -= 0x70d8
         a1 = t7 + t0
         [sp + 0x2c] = a1
         [sp + 0x60] = a3
         call 0x8620573c          // 0x8620573c(0x0, 0x97a0dae8, 0x0, 0x0)
         a0 = s0 + 0x24
         a1 = [sp + 0x2c]
         call 0x862057a8          // 0x862057a8(0x24, 0x97a0dae8, 0x0, 0x0)
         a0 = [sp + 0x60]
         a0 = 0 | 0xbf01
         a1 = , unsigned  byte [sp + 0x5b]
         call 0x8002781c          // 0x8002781c(0xbf01, 0x0, 0x0, 0x0)
         a2 = s0 + 0x38
         goto 0x8036b894
         t1 = [s1 + 0xc]

    loc_0x8036b820: // orphan
         lwc1 f8, 0x10, a3

    loc_0x8036b824: // orphan
         lwc1 f10, 0x14, a3
         lwc1 f16, 0x48, sp
         mul.s f6, f8, f4
         
         mul.s f18, f10, f16
         lwc1 f16, 0x4c, sp
         lwc1 f10, 0x18, a3
         add.s f8, f6, f18
         mul.s f6, f10, f16
         lwc1 f18, 0x24, s0
         neg.s f10, f4
         add.s f0, f8, f6
         lwc1 f6, 0x28, s0
         mul.s f16, f10, f0
         add.s f8, f18, f16
         swc1 f8, 0x24, s0
         lwc1 f4, 0x48, sp
         lwc1 f8, 0x2c, s0
         neg.s f10, f4
         mul.s f18, f10, f0
         add.s f16, f6, f18
         swc1 f16, 0x28, s0
         lwc1 f4, 0x4c, sp
         neg.s f10, f4
         mul.s f6, f10, f0
         add.s f18, f8, f6
         swc1 f18, 0x2c, s0
         t1 = [s1 + 0xc]

    loc_0x8036b894: // orphan
         at = 0x100 << 16
         v1 = 0 + 1
         t2 = t1 | at
         [s1 + 0xc] = t2
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         sp += 0x58
         ret
         v0 = v1

    loc_0x8036ba28: // orphan
         v0 = [a1 + 0x3c]         // arg2
         t4 = [a3 + 0x1c]         // arg4
         t5 = v1 | a2             // arg3
         t2 = v0 << 2
         t2 -= v0
         t1 = v0 << 2
         t2 <<= 1
         t1 -= v0
         t3 = t1 + t2
         at = , t3 < t4
         if                       // likely
         a0 = a3 + 0x24           // arg4

    loc_0x8036ba58: // orphan
         [a3 + 0x1c] = 0          // arg4
         [a3 + 0xc] = t5          // arg4
         [sp + 0x20] = t0
         [sp + 0x24] = a3
         [sp + 0x1c] = a0
         call 0x8003f210          // 0x8003f210(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 2
         a0 = [sp + 0x1c]
         call 0x8003eb84          // 0x8003eb84(0x0, 0x2, 0x0, 0x0)
         a1 = 0 + 5               // "F"
         t0 = [sp + 0x20]
         a3 = [sp + 0x24]
         a1 = [sp + 0x28]
         a2 = [t0 + 4]
         t6 = [t0 + 8]
         a0 = a3
         beql t6, a2, 0x8036bab0  // likely
         a0 = 0 | 0xbf00

    loc_0x8036baa0: // orphan
         call 0x862055f0          // 0x862055f0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x20] = t0
         t0 = [sp + 0x20]
         a0 = 0 | 0xbf00

    loc_0x8036bab0: // orphan
         a1 = , unsigned  byte [sp + 0x2b]
         call 0x8002781c          // 0x8002781c(0x0, 0x60, 0x0, 0x0)
         a2 = t0 + 0x18

    loc_0x8036babc: // orphan
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x8036c6a4: // orphan
         add.s f16, f10, f8
         swc1 f4                  // arg4
         t0 = [sp + 0x38]
         lwc1 f10, 0x4c, t0
         sub.s f8, f10, f14
         swc1 f8, 4, a3           // arg4
         t1 = [sp + 0x38]
         lwc1 f6, 0x50, t1
         sub.s f4, f6, f16
         swc1 f4, 8, a3           // arg4
         call 0x87d005e8          // 0x87d005e8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x3c] = a3
         t2 = 0x8621 << 16
         t2 = [t2 - 0x1e68]
         at = 0x3f40 << 16
         mtc1 at, f8
         lwc1 f10, 0x64, t2
         at = 0x42c8 << 16
         mtc1 at, f4
         mul.s f6, f10, f8
         t3 = [sp + 0x18]
         at = 0x42d9 << 16
         a3 = [sp + 0x3c]
         lwc1 f8, 0x34, t3
         a0 = a3
         mul.s f10, f6, f4
         mtc1 at, f4
         mul.s f6, f10, f8
         add.s f10, f6, f4
         c.lt.s f0, f10
         
         bc1fl 0x8036c73c
         mtc1 0, f0
         call 0x8620573c          // 0x8620573c(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x34]
         goto 0x8036c74c
         v1 = 0 + 1

    loc_0x8036c74c: // orphan
         ra = [sp + 0x14]
         sp += 0x30
         v0 = v1
         ret
         

    loc_0x8036cd58: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x8036cd60: // orphan
         at = 0 + 3

    loc_0x8036cd64: // orphan
         beql v0, at, 0x8036ced8  // likely
         t1 = , unsigned  halfword [a0 + 8]

    loc_0x8036cd6c: // orphan
         ret
         v0 = 0

    loc_0x8036cd7c: // orphan
         v0 = , unsigned  halfword [a0 + 6]
         t7 = v0 & 0x200
         if                       // likely
         t8 = v0 & 0x100

    loc_0x8036cd8c: // orphan
         goto 0x8036cdc4
         v1 = 0 + 0x200

    loc_0x8036cd94: // orphan
         if                       // likely
         t9 = v0 & 0x800

    loc_0x8036cd9c: // orphan
         goto 0x8036cdc4
         v1 = 0 + 0x100

    loc_0x8036cda4: // orphan
         if                       // likely
         t0 = v0 & 0x400

    loc_0x8036cdac: // orphan
         goto 0x8036cdc4
         v1 = 0 + 0x800

    loc_0x8036cdb4: // orphan
         if                       // unlikely
         v1 = 0 - 0x8000

    loc_0x8036cdbc: // orphan
         goto 0x8036cdc4
         v1 = 0 + 0x400

    loc_0x8036cdc4: // orphan
         t1 = , unsigned  halfword [a0 + 8]
         t2 = t1 & 0x8000
         if                       // unlikely
         

    loc_0x8036cdd4: // orphan
         v1 |= 0x4000
         v1 <<= 0x10
         ret
         v0 = , signed  v1 >> 0x10

    loc_0x8036ced8: // orphan
         t2 = t1 & 0x8000
         if                       // unlikely
         

    loc_0x8036cee4: // orphan
         v1 = 0 + 0x4000

    loc_0x8036cee8: // orphan
         ret
         v0 = v1

    loc_0x8036d294: // orphan
         a1 = s6
         call 0x87f025b8          // 0x87f025b8(0x0, 0x0, 0x0, 0x0)
         a0 = t6 + s5
         if                       // likely
         s0 = v0

    loc_0x8036d2a8: // orphan
         s1 = v0 + 0x24
         a0 = s1
         call 0x8003f1dc          // 0x8003f1dc(0x24, 0x0, 0x0, 0x0)
         s3 = s2 << 3
         t7 = [s4 + 0]
         a0 = s1
         a1 = 0
         t8 = t7 + s3
         a3 = [t8 + 0x14c]
         call 0x8003f114          // 0x8003f114(0x24, 0x0, 0x0, -1)
         a2 = 0 - 1
         a0 = s1
         call 0x8003f210          // 0x8003f210(0x24, 0x0, -1, -1)
         a1 = 0
         call 0x8003570c          // 0x8003570c(0x24, 0x0, -1, -1)
         
         t9 = [s0 + 0x68]
         a0 = s1
         t0 = , unsigned  halfword [t9 + 0xa]
         t1 = t0 + 1
         divu 0, v0, t1
         a1 = hi
         a1 <<= 0x10
         if                       // likely
         

    loc_0x8036d30c: // orphan
         break 7

    loc_0x8036d310: // orphan
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // 0x8003eb84(0x0, 0x0, 0x0, 0x0)
         
         a0 = s0 + 0x48
         call 0x87f06430          // 0x87f06430(0x48, 0x0, 0x0, 0x0)
         a1 = s2
         lwc1 f4, 0x4c, s0
         swc1 f20, 0x5c, s0
         swc1 f20, 0x58, s0
         sub.s f6, f4, f24
         swc1 f20, 0x54, s0
         [s0 + 0x20] = s2
         swc1 f6, 0x4c, s0

    loc_0x8036d344: // orphan
         t2 = [s4 + 0]
         a1 = 0
         call 0x87f025b8          // 0x87f025b8(0x0, 0x0, 0x0, 0x0)
         a0 = t2 + s5
         if                       // likely
         s0 = v0

    loc_0x8036d35c: // orphan
         s1 = v0 + 0x24
         call 0x8003f1dc          // 0x8003f1dc(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         t3 = [s4 + 0]
         a0 = s1
         a1 = 0
         a2 = 0 - 1
         call 0x8003f114          // 0x8003f114(0x24, 0x0, -1, 0x0)
         a3 = [t3 + 0x16c]
         a0 = s0 + 0x48
         call 0x87f06430          // 0x87f06430(0x48, 0x0, -1, -1)
         a1 = s2
         lwc1 f8, 0x48, s0
         lwc1 f16, 0x4c, s0
         swc1 f22, 0x5c, s0
         add.s f10, f8, f26
         swc1 f22, 0x58, s0
         swc1 f22, 0x54, s0
         sub.s f18, f16, f28
         swc1 f10, 0x48, s0
         swc1 f18, 0x4c, s0

    loc_0x8036d3b0: // orphan
         s2 += 1
         bnel s2, s7, 0x8036d294  // likely
         t6 = [s4 + 0]

    loc_0x8036d3bc: // orphan
         ra = [sp + 0x5c]         // t0
         ldc1 f20, 0x10, sp
         ldc1 f22, 0x18, sp
         ldc1 f24, 0x20, sp
         ldc1 f26, 0x28, sp
         ldc1 f28, 0x30, sp
         s0 = [sp + 0x3c]
         s1 = [sp + 0x40]
         s2 = [sp + 0x44]
         s3 = [sp + 0x48]
         s4 = [sp + 0x4c]
         s5 = [sp + 0x50]
         s6 = [sp + 0x54]
         s7 = [sp + 0x58]
         ret                      // t0
         sp += 0x60

    loc_0x803884d0: // orphan
         if                       // unlikely
         

    loc_0x803884d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803884e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803884f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803884fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388508: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388520: // orphan
         if                       // unlikely
         

    loc_0x80388528: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388534: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388554: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388560: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8038857c: // orphan
         if                       // unlikely
         

    loc_0x80388584: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388590: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803885b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803885c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803885cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803885d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803885e4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803885f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388600: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8038860c: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388624: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388630: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8038863c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388648: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388654: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388660: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8038866c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80388678: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803886d4: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388700: // orphan
         if                       // unlikely
         

    loc_0x80388708: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388724: // orphan
         if                       // unlikely
         

    loc_0x8038872c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8038873c: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388768: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388784: // orphan
         if                       // unlikely
         

    loc_0x8038878c: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803887b8: // orphan
         
         
         
         

    loc_0x803a66a4: // orphan
         lwc1 f4, 0xd0, sp
         t9 = [sp + 0x48]
         at = 0x4270 << 16
         c.lt.s f8, f4
         v0 = [t9 + 0]
         bc1fl 0x803a66d0
         at = 0xc270 << 16
         mtc1 at, f6
         
         swc1 f6, 0xd0, sp
         at = 0xc270 << 16
         mtc1 at, f8
         lwc1 f10, 0xd0, sp
         at = 0xc270 << 16
         c.lt.s f10, f8
         
         bc1f 0x803a66f8
         
         mtc1 at, f4
         
         swc1 f4, 0xd0, sp
         if                       // unlikely
         lwc1 f6, 0xd0, sp

    loc_0x803a6700: // orphan
         mtc1 0, f10
         at = 0x4170 << 16
         mtc1 at, f8
         c.lt.s f6, f10
         lwc1 f0, 0xd0, sp
         bc1f 0x803a6724
         
         goto 0x803a6724
         neg.s f0, f6

    loc_0x803a6724: // orphan
         mul.s f4, f0, f8
         at = 0x4270 << 16
         mtc1 at, f10
         at = 0xc270 << 16
         mtc1 at, f8
         div.s f6, f4, f10
         add.s f4, f6, f8
         swc1 f4, 0xcc, sp

    loc_0x803a6744: // orphan
         at = 0xc270 << 16
         mtc1 at, f6
         lwc1 f10, 0xcc, sp
         at = 0xc270 << 16
         c.lt.s f10, f6
         mtc1 0, f6
         bc1fl 0x803a6774
         lwc1 f4, 0xcc, sp
         mtc1 at, f8
         
         swc1 f8, 0xcc, sp
         lwc1 f4, 0xcc, sp
         at = 0x3fe8 << 16
         mtc1 at, f7
         cvt.d.s f10, f4
         mul.d f8, f10, f6
         lwc1 f10, 0xd0, sp
         cvt.d.s f6, f10
         cvt.s.d f4, f8
         mtc1 0, f8
         mtc1 at, f9
         swc1 f4, 0xcc, sp
         mul.d f4, f6, f8
         cvt.s.d f10, f4
         swc1 f10, 0xd0, sp
         beql a0, 0, 0x803a6814   // likely
         lwc1 f6, 0x5c, s0

    loc_0x803a67b0: // orphan
         lwc1 f6, 0x84, s0
         lwc1 f8, 0x10, s0
         t6 = 0 - 1
         at = 0x8671 << 16
         c.lt.s f6, f8
         
         bc1f 0x803a67fc
         
         [s0 + 0x94] = t6
         lwc1 f4, -0x3bcc, at
         mtc1 0, f10
         a0 = s1

    loc_0x803a67e0: // orphan
         swc1 f4, 0x5c, s0
         call 0x8003ec34          // "TR" // 0x8003ec34(0x0, 0x0, 0x0, 0x0)
         swc1 f10, 0x58, s0
         bnel v0, s2, 0x803a6814  // unlikely
         lwc1 f6, 0x5c, s0

    loc_0x803a67f4: // orphan
         goto 0x803a6810
         [s0 + 0x38] = 0

    loc_0x803a6810: // orphan
         lwc1 f6, 0x5c, s0

    loc_0x803a6814: // orphan
         mtc1 0, f8
         at = 0x40a0 << 16
         mtc1 at, f12
         c.lt.s f6, f8
         
         bc1fl 0x803a68e0
         at = 0x42c8 << 16
         call 0x8003ec34          // 0x8003ec34(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         if                       // unlikely
         at = 0x8671 << 16

    loc_0x803a6840: // orphan
         [s0 + 0x2c] = 0
         [s0 + 0x30] = s2

    loc_0x803a6848: // orphan
         ldc1 f12, -0x3bc8, at
         at = 0x8671 << 16
         lwc1 f0, -0x4264, at
         lwc1 f2, 0x5c, s0
         add.s f4, f2, f0
         cvt.d.s f10, f4
         c.le.d f10, f12
         
         bc1fl 0x803a6880
         cvt.d.s f8, f2
         mtc1 0, f6
         goto 0x803a688c
         swc1 f6, 0x5c, s0

    loc_0x803a688c: // orphan
         lwc1 f6, 0x5c, s0
         at = 0xc20c << 16
         mtc1 at, f2
         add.s f8, f6, f0
         lwc1 f10, 0xcc, sp
         at = 0x40a0 << 16
         mul.s f4, f8, f2
         
         mul.s f6, f10, f0
         c.le.s f6, f4
         
         bc1f 0x803a68d4
         
         mtc1 0, f8
         at = 0x40a0 << 16
         mtc1 at, f12
         goto 0x803a68dc
         swc1 f8, 0x5c, s0

    loc_0x803a68dc: // orphan
         at = 0x42c8 << 16
         mtc1 at, f4
         lwc1 f10, 0xcc, sp
         a0 = [s0 + 0x38]
         lwc1 f6, 0xd0, sp
         c.lt.s f10, f4
         
         bc1tl 0x803a6930
         at = 0xc0a0 << 16
         c.lt.s f12, f6
         at = 0xc0a0 << 16
         bc1tl 0x803a6930
         at = 0xc0a0 << 16
         mtc1 at, f0
         
         c.lt.s f6, f0
         
         bc1tl 0x803a6930
         at = 0xc0a0 << 16
         if                       // likely
         at = 0xc0a0 << 16

    loc_0x803a6930: // orphan
         mtc1 at, f0
         at = 0x8671 << 16
         lwc1 f10, -0x4264, at
         lwc1 f8, 0x5c, s0
         v1 = [s0 + 0x2c]
         v0 = [s0 + 0x74]
         if                       // likely
         add.s f16, f8, f10

    loc_0x803a694c: // orphan
         mtc1 at, f0
         at = 0x8671 << 16
         lwc1 f10, -0x4264, at
         lwc1 f8, 0x5c, s0
         v1 = [s0 + 0x2c]
         v0 = [s0 + 0x74]
         if                       // likely
         add.s f16, f8, f10

    loc_0x803a6950: // orphan
         halfword [s1 + 0x20] = 0
         t7 = 0x8671 << 16
         t7 = [t7 - 0x4c78]
         lwc1 f4, 0xcc, sp
         at = 0xc270 << 16
         bnel t7, 0, 0x803a69c8   // likely
         mtc1 at, f4

    loc_0x803a696c: // orphan
         c.lt.s f12, f4
         t8 = 0x8671 << 16
         at = 0xc234 << 16
         bc1fl 0x803a69bc
         mtc1 at, f10
         t8 = [t8 - 0x4c24]
         bnel s2, t8, 0x803a69bc  // likely
         mtc1 at, f10

    loc_0x803a698c: // orphan
         at = 0x3ff8 << 16
         mtc1 at, f9
         mtc1 0, f8
         cvt.d.s f6, f4
         at = 0x8671 << 16
         div.d f10, f6, f8
         ldc1 f4, -0x3bc0, at
         add.d f6, f10, f4
         cvt.s.d f8, f6
         goto 0x803a69d0
         swc1 f8, 0xcc, sp

    loc_0x803a69bc: // orphan
         goto 0x803a69d0
         swc1 f10, 0xcc, sp

    loc_0x803a69c8: // orphan
         
         swc1 f4, 0xcc, sp

    loc_0x803a69d0: // orphan
         at = , v0 < 3
         if                       // unlikely
         t2 = v0 << 4

    loc_0x803a69dc: // orphan
         t2 -= v0
         mtc1 t2, f8
         lwc1 f6, 0xcc, sp
         cvt.s.w f10, f8
         sub.s f4, f6, f10
         swc1 f4, 0xcc, sp

    loc_0x803a69f4: // orphan
         lwc1 f8, 0xcc, sp
         at = 0 + 6
         c.lt.s f8, f0
         
         bc1fl 0x803a6a18
         mtc1 0, f6
         goto 0x803a6a20
         [sp + 0xd4] = s2

    loc_0x803a6a20: // orphan
         lwc1 f2, 0xd0, sp
         c.lt.s f12, f2
         
         bc1t 0x803a6a44
         
         c.lt.s f2, f0
         
         bc1fl 0x803a6a50
         mtc1 0, f10
         goto 0x803a6a58
         [sp + 0xd8] = s2

    loc_0x803a6a58: // orphan
         if                       // unlikely
         

    loc_0x803a6a60: // orphan
         t3 = [s0 + 0x4c]
         bnel t3, 0, 0x803a6a78   // likely
         [sp + 0xd8] = 0

    loc_0x803a6a6c: // orphan
         goto 0x803a6a78
         [sp + 0xd4] = 0

    loc_0x803a6a78: // orphan
         at = 0x8671 << 16
         lwc1 f8, -0x4268, at
         lwc1 f4, 0x58, s0
         t4 = [sp + 0xd8]
         lwc1 f10, 0xd0, sp
         add.s f6, f4, f8
         mtc1 t4, f8
         t5 = [sp + 0xd4]
         a0 = [sp + 0xec]
         mul.s f4, f6, f10
         cvt.s.w f6, f8
         mtc1 t5, f8
         mul.s f10, f4, f6
         cvt.s.w f4, f8
         mfc1 a1, f10
         lwc1 f10, 0xcc, sp
         mul.s f6, f16, f4
         
         mul.s f8, f6, f10
         mfc1 a2, f8

    loc_0x803a6ac8: // orphan
         call 0x867037b8          // 0x867037b8(0x0, 0x0, 0x0, 0x0)
         
         if                       // likely
         lwc1 f4, 0xcc, sp

    loc_0x803a6ad8: // orphan
         at = 0xc0a0 << 16
         mtc1 at, f6
         t4 = 0 + 0xa
         a1 = 0 + 7
         c.lt.s f4, f6
         
         bc1fl 0x803a6da4
         t3 = [s0 + 0x38]
         v1 = [s0 + 0x2c]
         at = 0 + 6
         beql v1, at, 0x803a6da4  // unlikely
         t3 = [s0 + 0x38]

    loc_0x803a6b08: // orphan
         if                       // likely
         at = 0x4170 << 16

    loc_0x803a6b10: // orphan
         lwc1 f16, 0x10, s0
         mtc1 at, f10
         at = 0x42c4 << 16
         c.lt.s f10, f16
         
         bc1fl 0x803a6da4
         t3 = [s0 + 0x38]
         mtc1 at, f8
         at = 0x42b4 << 16
         c.lt.s f16, f8
         
         bc1fl 0x803a6da4
         t3 = [s0 + 0x38]
         mtc1 at, f4
         t9 = 0x8671 << 16
         c.lt.s f4, f16
         
         bc1fl 0x803a6ba4
         v0 = [s0 + 0x34]
         t9 = [t9 - 0x4c9c]
         lwc1 f12, 0x2c, s1
         at = 0x4000 << 16
         mtc1 t9, f6
         
         cvt.s.w f10, f6
         c.lt.s f10, f12
         
         bc1fl 0x803a6ba4
         v0 = [s0 + 0x34]
         mtc1 at, f8
         at = 0x8671 << 16
         lwc1 f4, -0x4c2c, at
         mul.s f6, f8, f4
         sub.s f10, f12, f6
         goto 0x803a6da0
         swc1 f10, 0x2c, s1

    loc_0x803a6c6c: // orphan
         swc1 f10, 0x2c, s1
         ldc1 f6, -0x3bb0, at
         sub.d f10, f4, f6
         cvt.s.d f8, f10
         goto 0x803a6da0
         swc1 f8, 0x84, s0

    loc_0x803a6da0: // orphan
         t3 = [s0 + 0x38]

    loc_0x803a6da4: // orphan
         bnel s2, t3, 0x803a6e04  // unlikely
         t9 = [s0 + 0x2c]

    loc_0x803a6dac: // orphan
         [s0 + 0x2c] = t4
         call 0x8003f210          // 0x8003f210(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xf4]
         a0 = [sp + 0xf4]
         call 0x8003eb84          // 0x8003eb84(0x0, 0x0, 0x0, 0x0)
         a1 = 0

    loc_0x803a6dc4: // orphan
         lwc1 f8, 0x5c, s0
         at = 0x3ff0 << 16
         mtc1 at, f7
         mtc1 0, f6
         cvt.d.s f4, f8
         at = 0x4780 << 16
         add.d f10, f4, f6
         mtc1 at, f8
         a0 = [sp + 0xf4]
         cvt.s.d f0, f10
         mul.s f4, f8, f0
         trunc.w.s f6, f4
         mfc1 a1, f6
         call 0x8003eb74          // 0x8003eb74(0x0, 0x0, 0x0, 0x0)
         
         t9 = [s0 + 0x2c]

    loc_0x803a6e04: // orphan
         v0 = 0
         a3 = 0 + 0x3c
         bnel s2, t9, 0x803a6e30  // unlikely
         t7 = [s0 + 0x7c]

    loc_0x803a6e14: // orphan
         t6 = [s0 + 0x38]
         at = 0x8671 << 16
         bnel t6, 0, 0x803a6e30   // unlikely
         t7 = [s0 + 0x7c]

    loc_0x803a6e24: // orphan
         lwc1 f10, -0x3b88, at
         swc1 f10, 0x80, s0
         t7 = [s0 + 0x7c]

    loc_0x803a6e30: // orphan
         t6 = 0x8671 << 16
         at = 0x8671 << 16
         if                       // unlikely
         t6 += 0x1760

    loc_0x803a6e40: // orphan
         lwc1 f8, -0x3b84, at
         swc1 f8, 0x80, s0

    loc_0x803a6e48: // orphan
         at = 0x3f80 << 16
         mtc1 at, f4
         lwc1 f14, 0x80, s0
         t7 = 0x8671 << 16
         c.lt.s f14, f4
         
         bc1fl 0x803a6ee8
         t4 = [sp + 0xd4]
         t8 = [s0 + 0x38]
         bnel t8, 0, 0x803a6e98   // unlikely
         t3 = [s0 + 0x7c]

    loc_0x803a6e74: // orphan
         t2 = [s0 + 0x2c]
         at = 0x3f80 << 16
         bnel t2, 0, 0x803a6e98   // unlikely
         t3 = [s0 + 0x7c]

    loc_0x803a6e84: // orphan
         mtc1 at, f6
         
         swc1 f6, 0x80, s0

    loc_0x803a6e90: // orphan
         lwc1 f14, 0x80, s0
         t3 = [s0 + 0x7c]

    loc_0x803a6e98: // orphan
         at = 0x8671 << 16
         bnel t3, 0, 0x803a6ec0   // unlikely
         at = 0x3f80 << 16

    loc_0x803a6ea4: // orphan
         ldc1 f8, -0x3b80, at
         cvt.d.s f10, f14
         add.d f4, f10, f8
         cvt.s.d f6, f4
         swc1 f6, 0x80, s0
         lwc1 f14, 0x80, s0
         at = 0x3f80 << 16

    loc_0x803a6ec0: // orphan
         mtc1 at, f10
         at = 0x3f80 << 16
         c.lt.s f10, f14
         
         bc1fl 0x803a6ee8
         t4 = [sp + 0xd4]
         mtc1 at, f8
         
         swc1 f8, 0x80, s0
         t4 = [sp + 0xd4]
         t5 = [sp + 0xec]
         if                       // unlikely
         t9 = t5 << 2

    loc_0x803a6ef4: // orphan
         t9 += t5
         t9 <<= 2
         t9 += t5
         t9 <<= 3
         a1 = [s0 + 0x24]
         t7 = [t7 - 0x4ca4]
         t9 += t5
         t9 <<= 2
         t9 -= t5
         t9 <<= 5
         at = , t7 < a1
         a2 = t9 + t6
         lwc1 f12, 0x2c, s1
         if                       // likely
         lwc1 f14, 0x80, s0

    loc_0x803a6f30: // orphan
         at = 0x8671 << 16
         lwc1 f4, -0x4ca0, at
         lwc1 f18, 0x28, s0
         at = 0x8671 << 16
         c.lt.s f4, f18
         
         bc1f 0x803a6f8c
         
         lwc1 f6, -0x4264, at
         lwc1 f10, 0x5c, s0
         lwc1 f4, 0xcc, sp
         at = 0x8671 << 16
         add.s f8, f6, f10
         lwc1 f16, 0x10, s0
         mul.s f6, f4, f8
         
         mul.s f0, f6, f14
         sub.s f10, f12, f0
         swc1 f10, 0x2c, s1
         lwc1 f4, -0x4c7c, at
         lwc1 f12, 0x2c, s1
         goto 0x803a6fd8
         swc1 f4, 0x38, sp

    loc_0x803a6f8c: // orphan
         at = 0x8671 << 16
         lwc1 f8, -0x4264, at
         lwc1 f6, 0x5c, s0
         lwc1 f4, 0xcc, sp
         at = 0x8671 << 16
         add.s f10, f8, f6
         lwc1 f8, -0x4c7c, at
         lwc1 f6, 0x28, s0
         lwc1 f16, 0x10, s0
         mul.s f2, f4, f10
         swc1 f8, 0x38, sp
         a1 = [s0 + 0x24]
         mul.s f4, f2, f8
         
         mul.s f10, f4, f14
         sub.s f8, f6, f10
         mul.s f0, f2, f14
         swc1 f8, 0x28, s0
         lwc1 f18, 0x28, s0

    loc_0x803a6fd8: // orphan
         a0 = a2
         v0 += 4
         if                       // unlikely
         lwc1 f14, 0x2c, a0

    loc_0x803a6fe8: // orphan
         add.s f10, f14, f0
         lwc1 f8, 0x194, a0
         lwc1 f6, 0x2fc, a0
         lwc1 f4, 0x464, a0
         add.s f8, f8, f0
         a0 += 0x5a0
         lwc1 f14, 0x2c, a0
         add.s f6, f6, f0
         v0 += 4
         swc1 f10, -0x574, a0
         add.s f4, f4, f0
         swc1 f8, -0x40c, a0
         swc1 f6, -0x2a4, a0
         if                       // likely
         swc1 f4, -0x13c, a0

    loc_0x803a7024: // orphan
         lwc1 f8, 0x194, a0
         lwc1 f6, 0x2fc, a0
         lwc1 f4, 0x464, a0
         add.s f10, f14, f0
         a0 += 0x5a0
         add.s f8, f8, f0
         swc1 f10, -0x574, a0
         add.s f6, f6, f0
         swc1 f8, -0x40c, a0
         add.s f4, f4, f0
         swc1 f6, -0x2a4, a0
         swc1 f4, -0x13c, a0
         at = 0xc38c << 16
         mtc1 at, f4
         lwc1 f10, 0x38, sp

    loc_0x803a7060: // orphan
         at = 0x4200 << 16
         sub.s f6, f4, f12
         mtc1 at, f12
         mtc1 0, f14
         a2 = 0
         mul.s f0, f6, f10
         v0 = 0 + 0x3a
         mov.s f2, f18
         v1 = a1
         c.lt.s f0, f14
         at = 0x4284 << 16
         mtc1 at, f8
         bc1fl 0x803a70b4
         c.lt.s f2, f14
         add.s f0, f0, f12
         v0 -= 1
         c.lt.s f0, f14
         
         bc1tl 0x803a709c

    loc_0x803a70ac: // orphan
         add.s f0, f0, f12
         c.lt.s f2, f14
         t6 = v0 << 5
         bc1fl 0x803a70dc
         c.le.s f16, f8
         add.s f2, f2, f12
         v1 -= 1
         c.lt.s f2, f14
         
         bc1tl 0x803a70c4
         add.s f2, f2, f12
         c.le.s f16, f8
         t8 = v1 << 5
         t5 = v1 << 5
         t2 = t8 - 1
         bc1f 0x803a7144
         t9 = t5 - 1
         mtc1 t2, f4
         at = 0x4204 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         at = 0x4000 << 16
         t3 = v0 << 5
         t4 = t3 - 1
         add.s f10, f6, f2
         mtc1 at, f6
         at = 0x42c8 << 16
         sub.s f4, f10, f8
         div.s f10, f16, f6
         mtc1 t4, f6
         add.s f8, f10, f4
         cvt.s.w f10, f6
         add.s f4, f10, f0
         mtc1 at, f10
         div.s f6, f8, f4
         mul.s f8, f6, f10
         goto 0x803a7174
         swc1 f8, 0x10, s0

    loc_0x803a7174: // orphan
         a0 = [sp + 0xec]
         call 0x867036b4          // 0x867036b4(0x0, 0x0, 0x0, 0x0)
         [sp + 0xe4] = a2
         t8 = 0x8671 << 16
         t8 = [t8 - 0x4ca4]
         t2 = [s0 + 0x24]
         a2 = [sp + 0xe4]
         at = , t8 < t2
         if                       // likely
         at = 0x8671 << 16

    loc_0x803a719c: // orphan
         lwc1 f8, -0x4ca0, at
         lwc1 f6, 0x28, s0
         t3 = 0x8671 << 16
         c.le.s f8, f6
         
         bc1f 0x803a71e0
         

    loc_0x803a71b8: // orphan
         t3 = [t3 - 0x4c9c]
         lwc1 f4, 0x2c, s1
         mtc1 t3, f10
         
         cvt.s.w f6, f10
         c.le.s f6, f4
         
         bc1f 0x803a71e0
         
         a2 = s2

    loc_0x803a71e0: // orphan
         bnel a2, s2, 0x803a73e4  // unlikely
         t9 = [sp + 0xd8]

    loc_0x803a71e8: // orphan
         t4 = [s0 + 0x44]
         at = 0 - 1

    loc_0x803a71f0: // orphan
         t5 = 0x8671 << 16
         bnel t4, at, 0x803a73e4  // unlikely
         t9 = [sp + 0xd8]

    loc_0x803a71fc: // orphan
         halfword [s1 + 0x20] = 0
         t5 = [t5 - 0x4474]
         t9 = 0x8671 << 16
         if                       // likely
         

    loc_0x803a7210: // orphan
         t9 = [t9 - 0x44a8]
         at = 0x8671 << 16
         [at - 0x3778] = t9
         at = 0x8671 << 16
         call 0x86703f9c          // 0x86703f9c(0x0, 0x0, 0x0, 0x0)
         [at - 0x3774] = s2
         call 0x87f0ca58          // 0x87f0ca58(0x0, 0x0, 0x0, 0x0)
         
         t6 = 0x8671 << 16
         t6 = [t6 - 0x3774]
         t7 = 0x8671 << 16
         at = 0x8671 << 16
         [s0 + 0xa8] = t6
         t7 = [t7 - 0x44a8]
         a0 = 0 + 0x5f08
         [at - 0x378c] = t7
         call 0x800279c4          // 0x800279c4(0x5f08, 0x0, 0x0, 0x0)
         [s0 + 0x44] = s2
         a0 = 0 + 0x1c07
         call 0x80027774          // 0x80027774(0x1c07, 0x0, 0x0, 0x0)
         a1 = 0 + 0x44
         a0 = 0x8671 << 16
         a0 = [a0 - 0x4474]
         goto 0x803a72fc
         a0 += 1

    loc_0x803a7274: // orphan
         call 0x800279c4          // 0x800279c4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x5f08
         v0 = 0x8671 << 16
         t8 = 0x8671 << 16
         t8 = [t8 - 0x378c]
         v0 = [v0 - 0x44a8]
         t2 = 0x8671 << 16
         t3 = 0x8671 << 16
         if                       // unlikely
         t4 = 0x8671 << 16

    loc_0x803a729c: // orphan
         [s0 + 0x44] = s2
         t2 = [t2 - 0x3774]
         a0 = 0x8671 << 16
         [s0 + 0xa8] = t2
         a0 = [a0 - 0x4474]
         goto 0x803a72fc
         a0 += 1

    loc_0x803a72b8: // orphan
         t3 = [t3 - 0x3778]
         a0 = 0x8671 << 16
         if                       // likely
         

    loc_0x803a72c8: // orphan
         a0 = 0x8671 << 16
         a0 = [a0 - 0x4474]
         goto 0x803a72f0
         a0 += 1

    loc_0x803a72d8: // orphan
         a0 = [a0 - 0x4474]
         at = 0x8671 << 16
         a0 += 1
         [at - 0x3774] = a0
         at = 0x8671 << 16
         [at - 0x3778] = v0

    loc_0x803a72f0: // orphan
         t4 = [t4 - 0x3774]
         [s0 + 0x44] = 0
         [s0 + 0xa8] = t4

    loc_0x803a72fc: // orphan
         t5 = [s0 + 0x34]
         t6 = 0 + 0x78
         t8 = [sp + 0x4c]
         t9 = t5 << 2

    loc_0x803a730c: // orphan
         t9 -= t5
         t7 = t6 - t9
         mtc1 t7, f8
         at = 0x8671 << 16
         t2 = 0x8671 << 16
         cvt.s.w f10, f8
         t2 += 0xc08
         v1 = t8 + t2
         swc1 f10, 0x10, s0
         [at - 0x4474] = a0
         at = 0x8671 << 16
         lwc1 f0, -0x4c34, at
         lwc1 f4
         at = 0x41f0 << 16
         mtc1 at, f8
         add.s f6, f4, f0
         lwc1 f2, 0x24, s1
         a0 = s1
         add.s f10, f6, f8
         c.lt.s f2, f10
         
         bc1t 0x803a7388
         
         lwc1 f4, 4, v1
         at = 0x41f0 << 16
         mtc1 at, f8
         sub.s f6, f4, f0
         sub.s f10, f6, f8
         c.lt.s f10, f2
         
         bc1f 0x803a73ac
         at = 0x8671 << 16
         lwc1 f6, -0x4c3c, at
         lwc1 f4, 0x58, sp
         at = 0x4120 << 16
         mul.s f8, f4, f6
         mtc1 at, f4
         sub.s f10, f8, f2
         div.s f6, f10, f4
         swc1 f6, 0x70, s0
         call 0x8003f210          // 0x8003f210(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 8
         t3 = 0 + 0xc
         t4 = 0 - 1
         [s0 + 0x2c] = t3
         [s0 + 0x94] = t4
         t5 = 0x8671 << 16
         t5 = [t5 - 0x4474]
         at = 0 + 4
         t6 = [sp + 0xec]
         if                       // likely
         at = 0x8671 << 16

    loc_0x803a73dc: // orphan
         [at - 0x446c] = t6

    loc_0x803a73e0: // orphan
         t9 = [sp + 0xd8]

    loc_0x803a73e4: // orphan
         at = 0x8671 << 16
         bnel t9, s2, 0x803a74a4  // unlikely
         t3 = [s0 + 0x38]

    loc_0x803a73f0: // orphan
         lwc1 f8, -0x4268, at
         lwc1 f10, 0x58, s0
         lwc1 f16, 0xd0, sp
         t2 = [s0 + 0x98]
         add.s f4, f8, f10
         lwc1 f8, 0x80, s0
         t7 = [sp + 0x4c]
         t8 = 0x8671 << 16
         mul.s f6, f16, f4
         lwc1 f4, 0x24, s1
         t8 += 0xc08
         at = 0 + 0xce
         v0 = 0
         v1 = t7 + t8
         mul.s f10, f6, f8
         add.s f6, f4, f10
         if                       // likely
         swc1 f6, 0x24, s1

    loc_0x803a7438: // orphan
         v0 = 0 - 5

    loc_0x803a743c: // orphan
         mtc1 v0, f8
         at = 0x8671 << 16
         lwc1 f0, -0x4c34, at
         lwc1 f4
         cvt.s.w f12, f8
         lwc1 f2, 0x24, s1
         add.s f10, f4, f0
         add.s f14, f10, f12
         c.lt.s f2, f14
         
         bc1fl 0x803a7478
         lwc1 f6, 4, v1
         swc1 f14, 0x24, s1
         lwc1 f2, 0x24, s1
         lwc1 f6, 4, v1
         at = 0x4080 << 16
         mtc1 at, f4
         sub.s f8, f6, f0
         sub.s f10, f8, f4
         sub.s f14, f10, f12
         c.lt.s f14, f2
         
         bc1fl 0x803a74a4
         t3 = [s0 + 0x38]
         swc1 f14, 0x24, s1

    loc_0x803a74a0: // orphan
         t3 = [s0 + 0x38]

    loc_0x803a74a4: // orphan
         lwc1 f16, 0xd0, sp
         t4 = 0x8671 << 16
         if                       // unlikely
         at = 0x4000 << 16

    loc_0x803a74b4: // orphan
         [s0 + 0x30] = s2

    loc_0x803a74b8: // orphan
         t4 = [t4 - 0x4c78]
         lwc1 f6, 0xcc, sp
         bnel s2, t4, 0x803a7594  // likely
         t9 = [s0 + 0x2c]

    loc_0x803a74c8: // orphan
         mtc1 at, f8
         mtc1 0, f4
         at = 0x4170 << 16
         mul.s f0, f6, f8
         mtc1 0, f10
         c.lt.s f0, f4
         mtc1 at, f4
         bc1fl 0x803a74f8
         mov.s f12, f0
         goto 0x803a74f8
         neg.s f12, f0

    loc_0x803a74f8: // orphan
         c.lt.s f16, f10
         
         bc1fl 0x803a7514
         mov.s f2, f16
         goto 0x803a7514
         neg.s f2, f16

    loc_0x803a7514: // orphan
         c.lt.s f2, f12
         
         bc1fl 0x803a7558
         mtc1 0, f8
         mtc1 0, f6
         
         c.lt.s f0, f6
         
         bc1fl 0x803a754c
         mov.s f2, f0
         neg.s f2, f0
         goto 0x803a757c
         mov.s f0, f2

    loc_0x803a757c: // orphan
         div.s f10, f0, f4
         trunc.w.s f6, f10
         mfc1 t6, f6
         goto 0x803a7674
         [s0 + 0xc] = t6

    loc_0x803a7594: // orphan
         at = 0 + 0xa
         lwc1 f8, 0xcc, sp
         bnel t9, at, 0x803a75b0  // likely
         mtc1 0, f4

    loc_0x803a75a4: // orphan
         goto 0x803a7674
         [s0 + 0xc] = s2

    loc_0x803a75b0: // orphan
         mtc1 0, f10
         at = 0x4110 << 16
         c.lt.s f8, f4
         lwc1 f12, 0xcc, sp
         t7 = 0 + 1
         lwc1 f6, 0xcc, sp
         bc1f 0x803a75d8
         
         goto 0x803a75d8
         neg.s f12, f8

    loc_0x803a75d8: // orphan
         c.lt.s f16, f10
         
         bc1fl 0x803a75f4
         mov.s f2, f16
         goto 0x803a75f4
         neg.s f2, f16

    loc_0x803a75f4: // orphan
         c.lt.s f2, f12
         
         bc1fl 0x803a7630
         mtc1 0, f8
         mtc1 0, f4
         lwc1 f2, 0xcc, sp
         c.lt.s f6, f4
         
         bc1f 0x803a7624
         
         goto 0x803a7658
         neg.s f0, f6

    loc_0x803a7658: // orphan
         mtc1 at, f6
         
         div.s f8, f0, f6
         trunc.w.s f10, f8
         mfc1 t2, f10
         
         [s0 + 0xc] = t2

    loc_0x803a7674: // orphan
         t3 = [sp + 0xc8]
         t4 = 0 + 5               // "F"
         at = 0xc0a0 << 16
         bnel t3, s2, 0x803a7690  // unlikely
         t5 = [s0 + 0xc]

    loc_0x803a7688: // orphan
         [s0 + 0xc] = t4
         t5 = [s0 + 0xc]

    loc_0x803a7690: // orphan
         bgtzl t5, 0x803a76a0     // unlikely
         t6 = [s0 + 0x38]

    loc_0x803a7698: // orphan
         [s0 + 0xc] = s2
         t6 = [s0 + 0x38]

    loc_0x803a76a0: // orphan
         lwc1 f4, 0xcc, sp
         if                       // unlikely
         

    loc_0x803a76ac: // orphan
         mtc1 at, f6
         at = 0x40a0 << 16
         c.lt.s f4, f6
         
         bc1tl 0x803a76fc
         t9 = [s0 + 0x98]
         mtc1 at, f8
         at = 0xc0a0 << 16
         c.lt.s f8, f16
         
         bc1tl 0x803a76fc
         t9 = [s0 + 0x98]
         mtc1 at, f10
         a0 = s2 << 0x18
         a0 = , signed  a0 >> 0x18
         c.lt.s f16, f10
         
         bc1f 0x803a7820
         
         t9 = [s0 + 0x98]
         at = 0 + 0x6d
         lwc1 f6, 0xcc, sp
         bnel t9, at, 0x803a773c  // likely
         at = 0x4000 << 16

    loc_0x803a770c: // orphan
         trunc.w.s f4, f16
         trunc.w.s f8, f6
         mfc1 a0, f4
         mfc1 a1, f8
         a0 <<= 0x18
         a0 = , signed  a0 >> 0x18
         a1 <<= 0x18
         call 0x86703d98          // 0x86703d98(0x0, 0x0, 0x0, 0x0)
         a1 = , signed  a1 >> 0x18
         goto 0x803a782c
         halfword [s1 + 0x20] = v0

    loc_0x803a773c: // orphan
         mtc1 at, f10
         lwc1 f8, 0xcc, sp
         div.s f4, f16, f10
         trunc.w.s f10, f8
         mfc1 a1, f10
         
         a1 <<= 0x18
         a1 = , signed  a1 >> 0x18
         trunc.w.s f6, f4
         mfc1 a0, f6
         
         a0 <<= 0x18
         a0 = , signed  a0 >> 0x18
         call 0x86703d98          // "\u01e4" // 0x86703d98(0x0, 0x0, 0x0, 0x0)
         [sp + 0x6c] = a0
         lwc1 f4, 0xd0, sp
         mtc1 0, f6
         at = 0x40a0 << 16
         halfword [s1 + 0x20] = v0
         c.lt.s f4, f6
         mtc1 at, f6
         mtc1 0, f10
         a0 = [sp + 0x6c]
         bc1f 0x803a77a8
         lwc1 f8, 0xcc, sp
         goto 0x803a77ac
         neg.s f2, f4

    loc_0x803a77ac: // orphan
         c.lt.s f8, f10
         lwc1 f0, 0xcc, sp
         lwc1 f10, 0xd0, sp
         bc1f 0x803a77c8
         
         goto 0x803a77c8
         neg.s f0, f8

    loc_0x803a77c8: // orphan
         add.s f4, f0, f6
         c.lt.s f4, f2
         
         bc1f 0x803a782c
         
         mtc1 0, f8
         lwc1 f0, 0xd0, sp
         c.lt.s f10, f8
         
         bc1f 0x803a77fc
         
         goto 0x803a77fc
         neg.s f0, f10

    loc_0x803a77fc: // orphan
         neg.s f6, f0
         trunc.w.s f4, f6
         mfc1 a1, f4
         
         a1 <<= 0x18
         call 0x86703d98          // 0x86703d98(0x0, 0x0, 0x0, 0x0)
         a1 = , signed  a1 >> 0x18
         goto 0x803a782c
         halfword [s1 + 0x20] = v0

    loc_0x803a782c: // orphan
         call 0x8670408c          // 0x8670408c(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xec]
         v1 = [s0 + 0x2c]
         at = 0 + 5               // "F"
         if                       // likely
         t5 = [sp + 0x68]

    loc_0x803a7844: // orphan
         mtc1 0, f8
         mtc1 0, f10
         at = 0 + 0xb
         swc1 f8, 0x38, t5
         t6 = [sp + 0x68]
         swc1 f10, 0x30, t6
         t9 = [sp + 0xf4]
         t7 = [t9 + 0x48]
         t8 = , signed  t7 >> 0x10
         bnel t8, at, 0x803a78d0  // likely
         t6 = [s0 + 0x30]

    loc_0x803a7870: // orphan
         t2 = [s0 + 8]
         bnel t2, 0, 0x803a7888   // likely
         t3 = [sp + 0x4c]

    loc_0x803a787c: // orphan
         call 0x86703e9c          // 0x86703e9c(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xec]
         t3 = [sp + 0x4c]

    loc_0x803a7888: // orphan
         t4 = 0x8671 << 16
         t4 -= 0x37a0
         v0 = t3 + t4
         v1 = [v0 + 0]
         a1 = 0 + 9
         a0 = s1

    loc_0x803a78a0: // orphan
         at = , v1 < 0x1e
         if                       // unlikely
         t5 = v1 + 1

    loc_0x803a78ac: // orphan
         [v0 + 0] = t5
         call 0x8003eb84          // 0x8003eb84(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         goto 0x803a78cc
         v1 = [s0 + 0x2c]

    loc_0x803a78c0: // orphan
         call 0x8003eb84          // 0x8003eb84(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0xc
         v1 = [s0 + 0x2c]

    loc_0x803a78cc: // orphan
         t6 = [s0 + 0x30]

    loc_0x803a78d0: // orphan
         at = , unsigned  , v1 < 0xb
         bnel s2, t6, 0x803a7a94  // unlikely
         at = 0 + 3

    loc_0x803a78dc: // orphan
         if                       // likely
         t9 = v1 << 2

    loc_0x803a78e4: // orphan
         at = 0x8671 << 16
         at += t9
         t9 = [at - 0x3b78]
         goto t9
         

    loc_0x803a7a4c: // orphan
         a0 = s1
         call 0x8003eb84          // 0x8003eb84(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         [s0 + 0x30] = 0
         goto 0x803a7a90
         v1 = [s0 + 0x2c]

    loc_0x803a7a90: // orphan
         at = 0 + 3

    loc_0x803a7a94: // orphan
         a2 = 0
         if                       // likely
         a1 = 0

    loc_0x803a7aa0: // orphan
         at = 0 + 4
         bnel v1, at, 0x803a7b54  // likely
         at = 0 + 2

    loc_0x803a7aac: // orphan
         t3 = [s0 + 0x48]
         t4 = [sp + 0xf4]
         bnel t3, 0, 0x803a7b54   // likely
         at = 0 + 2

    loc_0x803a7ab8: // orphan
         t3 = [s0 + 0x48]
         t4 = [sp + 0xf4]
         bnel t3, 0, 0x803a7b54   // likely
         at = 0 + 2

    loc_0x803a7abc: // orphan
         v0 = [t4 + 0x48]
         at = 0 + 2
         a0 = 0 | 0x9f01
         v0 = , signed  v0 >> 0x10
         if                       // unlikely
         a1 = , unsigned  byte [sp + 0xef]

    loc_0x803a7ad4: // orphan
         at = 0 + 3
         bnel v0, at, 0x803a7b00  // likely
         at = , v0 < 5

    loc_0x803a7ae0: // orphan
         call 0x80027a28          // 0x80027a28(0x0, 0x0, 0x0, 0x0)
         [sp + 0x9c] = a2
         t5 = [sp + 0xf4]
         a2 = [sp + 0x9c]
         v1 = [s0 + 0x2c]
         v0 = [t5 + 0x48]
         v0 = , signed  v0 >> 0x10
         at = , v0 < 5

    loc_0x803a7b00: // orphan
         beql at, 0, 0x803a7b14   // likely
         at = , v0 < 0x18

    loc_0x803a7b08: // orphan
         goto 0x803a7b20
         a2 = 0 - 0x4b

    loc_0x803a7b14: // orphan
         beql at, 0, 0x803a7b24   // likely
         t6 = , unsigned  halfword [s1 + 0x20]

    loc_0x803a7b1c: // orphan
         a2 = 0 - 7

    loc_0x803a7b20: // orphan
         t6 = , unsigned  halfword [s1 + 0x20]

    loc_0x803a7b24: // orphan
         mtc1 a2, f4
         at = 0x8008 << 16
         t9 = , signed  t6 >> 4
         cvt.s.w f8, f4
         t7 = t9 << 2
         at += t7
         lwc1 f6, 0x7e50, at
         mul.s f10, f6, f8
         trunc.w.s f4, f10
         mfc1 a1, f4
         
         at = 0 + 2

    loc_0x803a7b54: // orphan
         if                       // unlikely
         

    loc_0x803a7b5c: // orphan
         t2 = [s0 + 0x48]
         t3 = [sp + 0xf4]

    loc_0x803a7b64: // orphan
         if                       // unlikely
         

    loc_0x803a7b6c: // orphan
         v0 = [t3 + 0x48]
         at = 0 + 2
         a0 = 0 | 0x9f01
         v0 = , signed  v0 >> 0x10
         if                       // likely
         a1 = , unsigned  byte [sp + 0xef]

    loc_0x803a7b84: // orphan
         call 0x80027a28          // 0x80027a28(0x0, 0x0, 0x0, 0x0)
         [sp + 0x9c] = a2
         t4 = [sp + 0xf4]
         a2 = [sp + 0x9c]
         v0 = [t4 + 0x48]
         v0 = , signed  v0 >> 0x10

    loc_0x803a7b9c: // orphan
         at = , v0 < 3
         if                       // unlikely
         t9 = 0 & 0xffff

    loc_0x803a7ba8: // orphan
         t5 = 0 - 0xb4
         mtc1 t5, f6
         a2 = 0 - 0xb4
         goto 0x803a7bf0
         cvt.s.w f0, f6

    loc_0x803a7bbc: // orphan
         at = , v0 < 0xd
         if                       // unlikely
         t6 = 0 - 0x12

    loc_0x803a7bc8: // orphan
         mtc1 t6, f8
         a2 = 0 - 0x12
         goto 0x803a7bf0
         cvt.s.w f0, f8

    loc_0x803a7bd8: // orphan
         mtc1 a2, f10
         at = 0 + 0x28
         if                       // likely
         cvt.s.w f0, f10

    loc_0x803a7be8: // orphan
         [s0 + 0x30] = s2
         [s0 + 0x2c] = 0

    loc_0x803a7bf0: // orphan
         t7 = , signed  t9 >> 4
         t8 = t7 << 2
         at = 0x8008 << 16
         halfword [s1 + 0x20] = 0

    loc_0x803a7c00: // orphan
         at += t8
         lwc1 f4, 0x7e50, at
         mtc1 0, f8
         mul.s f6, f4, f0
         
         mul.s f10, f6, f8
         trunc.w.s f4, f10
         mfc1 a1, f4
         

    loc_0x803a7c24: // orphan
         if                       // unlikely
         v0 = 0

    loc_0x803a7c2c: // orphan
         if                       // likely
         

    loc_0x803a7c34: // orphan
         mtc1 a2, f10
         at = 0x8671 << 16
         lwc1 f8, -0x4264, at
         lwc1 f6, 0x5c, s0
         cvt.s.w f4, f10
         t3 = [sp + 0xec]
         lwc1 f14, 0x80, s0
         t6 = [sp + 0x4c]
         t4 = t3 << 2
         add.s f16, f6, f8
         t4 += t3
         t4 <<= 2
         t4 += t3
         mul.s f6, f4, f16
         t4 <<= 3
         t4 += t3
         t4 <<= 2
         t5 = 0x8671 << 16
         t9 = 0x8671 << 16
         t4 -= t3
         t4 <<= 5
         t9 += 0xc08
         t5 += 0x1760

    loc_0x803a7c90: // orphan
         mul.s f0, f6, f14
         a0 = t4 + t5
         lwc1 f2, 0x24, s1
         a3 = 0 + 0x3c
         v1 = t6 + t9
         v0 += 4
         if                       // unlikely
         lwc1 f18, 0x2c, a0

    loc_0x803a7cb0: // orphan
         add.s f12, f18, f0
         lwc1 f10, 0x194, a0
         lwc1 f8, 0x2fc, a0
         lwc1 f6, 0x464, a0
         add.s f10, f10, f0
         lwc1 f18, 0x5cc, a0
         v0 += 4
         add.s f8, f8, f0
         swc1 f12, 0x2c, a0
         swc1 f10, 0x194, a0
         add.s f6, f6, f0
         swc1 f8, 0x2fc, a0
         a0 += 0x5a0
         if                       // likely
         swc1 f6, -0x13c, a0

    loc_0x803a7cec: // orphan
         lwc1 f10, 0x194, a0
         lwc1 f8, 0x2fc, a0
         lwc1 f6, 0x464, a0
         add.s f12, f18, f0
         a0 += 0x5a0
         add.s f10, f10, f0
         swc1 f12, -0x574, a0
         add.s f8, f8, f0

    loc_0x803a7d0c: // orphan
         swc1 f10, -0x40c, a0
         add.s f6, f6, f0
         swc1 f8, -0x2a4, a0
         swc1 f6, -0x13c, a0
         t7 = ~a2
         mtc1 t7, f8
         at = 0x8671 << 16
         lwc1 f6, -0x4c7c, at
         cvt.s.w f10, f8
         at = 0x8671 << 16
         mul.s f4, f10, f16
         
         mul.s f8, f4, f6
         lwc1 f4, 0x28, s0
         mul.s f10, f8, f14
         add.s f6, f4, f10
         lwc1 f4, 0x58, s0
         swc1 f6, 0x28, s0
         lwc1 f8, -0x4268, at
         mtc1 a1, f6
         at = 0x8671 << 16
         add.s f10, f8, f4
         cvt.s.w f8, f6
         mul.s f4, f8, f10
         lwc1 f8
         sub.s f6, f2, f4
         swc1 f6, 0x24, s1
         lwc1 f0, -0x4c34, at
         lwc1 f2, 0x24, s1
         add.s f12, f8, f0
         c.lt.s f2, f12
         
         bc1f 0x803a7d9c
         
         swc1 f12, 0x24, s1
         lwc1 f2, 0x24, s1
         lwc1 f10, 4, v1
         at = 0x4120 << 16
         mtc1 at, f6
         sub.s f4, f10, f0
         sub.s f12, f4, f6
         c.lt.s f12, f2
         
         bc1f 0x803a7dc4
         
         swc1 f12, 0x24, s1

    loc_0x803a7dc4: // orphan
         call 0x8003ec34          // "TR" // 0x8003ec34(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xf4]
         bnel v0, s2, 0x803a7fb8  // unlikely
         t8 = [s0 + 0x24]

    loc_0x803a7dd4: // orphan
         t8 = [s0 + 0x2c]
         at = , unsigned  , t8 < 0xd
         if                       // unlikely
         t8 <<= 2

    loc_0x803a7de4: // orphan
         at = 0x8671 << 16
         at += t8
         t8 = [at - 0x3b4c]
         goto t8
         

    loc_0x803a7f94: // orphan
         a0 = s1
         call 0x8003f210          // 0x8003f210(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         t7 = [s0 + 8]
         [s0 + 0x30] = 0
         bnel t7, 0, 0x803a7fb8   // likely
         t8 = [s0 + 0x24]

    loc_0x803a7fb0: // orphan
         [s0 + 8] = s2
         t8 = [s0 + 0x24]

    loc_0x803a7fb8: // orphan
         lwc1 f6, 0x28, s0
         v0 = [s0 + 0x18]
         t2 = t8 << 5
         mtc1 t2, f10
         at = 0x8671 << 16
         cvt.s.w f4, f10
         add.s f8, f4, f6
         mtc1 v0, f4
         
         cvt.d.w f6, f4
         cvt.d.s f10, f8
         ldc1 f8, -0x3b18, at
         at = , v0 < 0x14
         mul.d f4, f6, f8
         c.le.d f4, f10
         
         bc1fl 0x803a8014
         t3 = [s0 + 8]
         beql at, 0, 0x803a8014   // likely
         t3 = [s0 + 8]

    loc_0x803a8008: // orphan
         call 0x86702e50          // 0x86702e50(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xec]
         t3 = [s0 + 8]

    loc_0x803a8014: // orphan
         beql t3, 0, 0x803a8028   // likely
         ra = [sp + 0x34]

    loc_0x803a801c: // orphan
         call 0x86703df4          // 0x86703df4(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0xec]
         ra = [sp + 0x34]

    loc_0x803a8028: // orphan
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         ret
         sp += 0xf0

    loc_0x803a80b8: // orphan
         v0 = , unsigned  halfword [v0 - 0x4180]
         mul.s f0, f14, f8
         t2 = 0x8008 << 16
         v0 = , signed  v0 >> 4
         v0 <<= 2
         t7 = t1 + v0
         lwc1 f10
         t2 += 0x7e50
         t8 = t2 + v1
         mul.s f16, f10, f0
         lwc1 f6
         at = 0x3f80 << 16
         mtc1 at, f18
         t9 = t2 + v0
         mul.s f8, f6, f14
         lwc1 f10
         add.s f4, f16, f18
         t0 = 0x8671 << 16
         mul.s f16, f10, f0
         t0 -= 0x44b8
         mfc1 a1, f4
         t3 = 0x8671 << 16
         t3 = halfword [t3 - 0x4178]
         lwc1 f4, 0x24, t0
         lwc1 f18, 0x20, t0
         lwc1 f6, 0x28, t0
         mfc1 a3, f16
         mfc1 a2, f8
         a0 = [sp + 0x2c]
         [sp + 0x1c] = t3
         swc1 f4, 0x14, sp
         swc1 f18, 0x10, sp
         call 0x80038e14          // 0x80038e14(0x97a0dae8, 0x0, 0x0, 0x0)
         swc1 f6, 0x18, sp
         ra = [sp + 0x24]
         sp += 0x28
         v0 = 0
         ret
         

}

*/
