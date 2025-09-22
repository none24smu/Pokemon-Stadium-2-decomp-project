/*
 * Function: 0x803f2040
 * ROM Offset: 0x002f3040
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.803f2040 (int esi, int edx) {
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
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.803f2040 (int esi, int edx) {
    loc_0x803e6eb8:
        sdc1 f26, 0x20, sp
        sdc1 f24, 0x18, sp
        sdc1 f22, 0x10, sp
        sdc1 f20, 8, sp
        t0 += 0x43f0
        lwc1 f28, -0x8b0, at
        v0 = 0
        t1 = 0 + 1
        a3 = 0 + 4    // arg4
         // do {
    loc_0x803e6edc:
        if            // likely
        at = 0x4000 << 16
         // } while (?);
        }
        return eax;
    loc_0x803e6ee4:
        mtc1 at, f2
        t6 = v0 << 3
        v1 = t0 + t6
        sqrt.s f2, f2
        lwc1 f12, 4, v1
        t7 = a0 << 3  // arg1
        a1 = t0 + t7  // arg2
        lwc1 f14, 4, a1 // arg2
        lwc1 f18, 8, a1 // arg2
        lwc1 f16, 8, v1
        sub.s f22, f12, f14
        mul.s f4, f2, f28
        sub.s f24, f16, f18
        sub.s f6, f12, f4
        c.lt.s f6, f14
        0x803e6f20
        bc1fl 0x803e7034
        v0 += 1
        mul.s f8, f2, f28
        add.s f10, f8, f12
        c.lt.s f14, f10
        0x803e6f38
        bc1fl 0x803e7034
        v0 += 1
        mul.s f4, f2, f28
        sub.s f6, f16, f4
        c.lt.s f6, f18
        0x803e6f50
        bc1fl 0x803e7034
        v0 += 1
        mul.s f8, f2, f28
        add.s f10, f8, f16
        c.lt.s f18, f10
        0x803e6f68
        bc1fl 0x803e7034
        v0 += 1
        mul.s f4, f22, f22
        t8 = a0 << 2  // arg1
        a2 = t0 + t8  // arg3
        mul.s f6, f24, f24
        at = 0x86a1 << 16
        add.s f0, f4, f6
        sqrt.s f0, f0
        cvt.d.s f8, f0
        mov.s f26, f0
        c.lt.d f8, f30
        0x803e6f9c
        bc1f 0x803e6fb8
        0x803e6fa4
        at = 0x4130 << 16
        mtc1 at, f2
        goto 0x803e6fc0
        0x803e6fb4
         // do {
    loc_0x803e6fc0:
        mul.s f12, f22, f2
        lwc1 f14, 0x48, v1
        lwc1 f16, 0x44, v1
        mul.s f18, f24, f2
        [a2 + 0x64] = t1 // arg3
        lwc1 f8, 0x74, a1 // arg2
        mul.s f4, f14, f14
        at = 0x86a1 << 16
        mul.s f6, f16, f16
        add.s f2, f4, f6
        lwc1 f6, 0x78, a1 // arg2
        sqrt.s f0, f2
        mul.s f10, f12, f0
        sub.s f4, f8, f10
        mul.s f8, f18, f0
        swc1 f4, 0x74, a1 // arg2
        sub.s f10, f6, f8
        lwc1 f6, 0x94, a1 // arg2
        swc1 f10, 0x78, a1 // arg2
        lwc1 f4, -0x8a8, at
        sub.s f20, f4, f26
        lwc1 f4, 0x98, a1 // arg2
        mul.s f8, f12, f20
        sub.s f10, f6, f8
        mul.s f6, f18, f20
        swc1 f10, 0x94, a1 // arg2
        sub.s f8, f4, f6
        swc1 f8, 0x98, a1 // arg2
         // } while (?);
        }
        return eax;
    loc_0x803e7030: // orphan
             v0 += 1
             if                       // likely
             

    loc_0x803e703c: // orphan
         ldc1 f20, 8, sp
         ldc1 f22, 0x10, sp
         ldc1 f24, 0x18, sp
         ldc1 f26, 0x20, sp
         ldc1 f28, 0x28, sp
         ldc1 f30, 0x30, sp
         ret
         sp += 0x38

    loc_0x803e70fc: // orphan
         lwc1 f4, 4, s1
         lwc1 f8, 8, s1
         trunc.w.s f6, f4
         trunc.w.s f10, f8
         mfc1 v0, f6
         mfc1 v1, f10

    loc_0x803e7114: // orphan
         mtc1 v0, f16
         mtc1 v1, f18
         cvt.s.w f12, f16
         call 0x86a0585c          // 0x86a0585c(0x0, 0x0, 0x0, 0x0)
         cvt.s.w f14, f18
         if                       // likely
         t8 = s0 << 2

    loc_0x803e7130: // orphan
         v0 = s3 + t8
         t9 = [v0 + 0x24]
         beql s2, t9, 0x803e7158  // unlikely
         s0 += 1

    loc_0x803e7140: // orphan
         t0 = [v0 + 0xe8]
         beql t0, 0, 0x803e7158   // unlikely
         s0 += 1

    loc_0x803e714c: // orphan
         [v0 + 0x24] = s2
         [v0 + 0x188] = s4

    loc_0x803e7154: // orphan
         s0 += 1

    loc_0x803e7158: // orphan
         if                       // unlikely
         s1 += 8

    loc_0x803e7160: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x803f2040: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f204c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f2058: // orphan
         if                       // unlikely

}

*/
