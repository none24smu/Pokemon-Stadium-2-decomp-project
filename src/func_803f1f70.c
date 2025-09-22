/*
 * Function: 0x803f1f70
 * ROM Offset: 0x002f2f70
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.803f1f70 (int esi, int edx) {
if            // unlikely
// } else {
}
return eax;
if                       // likely
if                       // likely
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
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
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
if                       // unlikely
if                       // likely
if                       // likely
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
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
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
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
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
int fcn.803f1f70 (int esi, int edx) {
    loc_0x803e4318:
        lwc1 f16, 0x34, sp
        byte [v1 + 0x41] = t7
        mul.s f10, f8, f2
        [v1 + 0x1c] = 0
        swc1 f0, 0x54, v1
        swc1 f0, 0x58, v1
        swc1 f0, 0x5c, v1
        add.s f18, f10, f16
        swc1 f18, 0x18, v1
        call 0x8003f1dc // 0x8003f1dc(0x0, 0x0, 0x0, 0x0)
        [sp + 0x18] = a0
        t8 = [sp + 0x38]
        a0 = [sp + 0x18]
        at = , unsigned  , t8 < 9
        if            // unlikely
        t8 <<= 2
            
    loc_0x803e43b8:
        ra = [sp + 0x14]
        sp += 0x28
        ret
        0x803e43c4
         // } else {
    loc_0x803e4358:
        at = 0x86a1 << 16
        at += t8
        t8 = [at - 0xa3c]
        goto t8
        0x803e4368
        }
        return eax;
    loc_0x803e43e4: // orphan
             sp -= 0x18
             t3 = 0 + 5
             [sp + 0x14] = ra
             [sp + 0x18] = a0
             [sp + 0x1c] = a1
             a2 = [v1 + 0x10c]
             if                       // likely
             a3 = t0

    loc_0x803e4404: // orphan
         goto 0x803e44cc
         v0 = 0

    loc_0x803e440c: // orphan
         t8 = [sp + 0x1c]
         t5 = [sp + 0x18]
         t4 = 0x86a1 << 16
         t9 = t8 << 2
         t9 -= t8
         t9 <<= 3
         t4 -= 0x2aa0
         t6 = t5 << 2
         v0 = t2 + t6
         a1 = t9 + t4             // arg2
         t1 = [a1 + 4]            // arg2
         t7 = [v0 + 0xe8]
         t9 = t0 + 1
         a0 = a2 + a3             // arg4
         t8 = t1 + t7
         at = , t8 < 6
         bnel at, 0, 0x803e4460   // unlikely
         at = , a0 < 5            // arg1

    loc_0x803e4454: // orphan
         goto 0x803e44cc
         v0 = 0

    loc_0x803e4460: // orphan
         if                       // likely
         [v1 + 0x108] = t9

    loc_0x803e4468: // orphan
         goto 0x803e4474
         a2 = a0

    loc_0x803e4470: // orphan
         a2 = a0 - 5              // arg3

    loc_0x803e4474: // orphan
         t5 = [sp + 0x18]
         t4 = [sp + 0x1c]
         t8 = a2 << 2             // arg3
         t6 = t5 << 3
         t6 -= t5
         t6 <<= 2
         t7 = t2 + t6
         t9 = t7 + t8
         [t9 + 0x110] = t4
         lwc1 f4, 0xd8, v0
         lwc1 f6, 8, a1           // arg2
         t6 = [v0 + 0xe8]
         t5 = [sp + 0x1c]
         add.s f8, f4, f6
         t7 = t6 + t1
         [v0 + 0xe8] = t7
         [v0 + 0xf8] = t5
         if                       // likely
         swc1 f8, 0xd8, v0

    loc_0x803e44c0: // orphan
         call 0x86a0ba80          // 0x86a0ba80(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x18]

    loc_0x803e44c8: // orphan
         v0 = 0 + 1

    loc_0x803e44cc: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803e4680: // orphan
         [sp + 0x4c] = s3
         [sp + 0x48] = s2
         [sp + 0x44] = s1
         [sp + 0x40] = s0
         sdc1 f26, 0x38, sp
         sdc1 f24, 0x30, sp
         sdc1 f22, 0x28, sp
         sdc1 f20, 0x20, sp
         [sp + 0x68] = 0
         lwc1 f4, 0x48, a1        // arg2
         lwc1 f6, 0x10, a1        // arg2
         at = 0x4014 << 16
         mtc1 at, f19
         add.s f8, f4, f6
         mtc1 0, f18
         swc1 f8, 0x48, a1        // arg2
         a1 = [v0 + 0]
         lwc1 f10, 0x50, a1       // arg2
         cvt.d.s f16, f10
         sub.d f4, f16, f18
         cvt.s.d f6, f4
         swc1 f6, 0x50, a1        // arg2
         a1 = [v0 + 0]
         lwc1 f26, 0x48, a1       // arg2
         lwc1 f24, 0x50, a1       // arg2
         mov.s f12, f26
         call 0x86a05344          // 0x86a05344(0x0, -1, 0x0, 0x0)
         mov.s f14, f24
         at = 0x4120 << 16
         mtc1 at, f22
         at = 0x86a1 << 16
         fp = 0x86a1 << 16
         v1 = 0x86a4 << 16
         [sp + 0x6c] = v0
         v1 += 0x43f0
         fp -= 0x100c
         ldc1 f20, -0xa18, at
         s2 = 0
         s7 = 0
         s5 = 0 - 1

    loc_0x803e4720: // orphan
         t6 = [fp + 0]
         t7 = [sp + 0x6c]
         s4 = v1 + s7
         t8 = t6 & t7
         beql t8, 0, 0x803e487c   // likely
         s2 += 1

    loc_0x803e4738: // orphan
         t9 = [s4 + 0x198]
         bnel t9, 0, 0x803e487c   // likely
         s2 += 1

    loc_0x803e4744: // orphan
         v0 = [s4 + 0x24]
         at = 0 + 9
         if                       // unlikely
         at = 0 + 8

    loc_0x803e4754: // orphan
         if                       // likely
         t0 = s2 << 3

    loc_0x803e475c: // orphan
         s0 = v1 + t0
         lwc1 f8, 8, s0
         lwc1 f10, 4, s0
         t1 = s2 << 1
         sub.s f2, f8, f24
         s3 = v1 + t1
         s6 = s3 + 0xe48
         sub.s f12, f10, f26
         mul.s f16, f2, f2
         s1 = 0
         at = 0x86a1 << 16
         mul.s f18, f12, f12
         a1 = 0x87f1 << 16
         add.s f0, f16, f18
         sqrt.s f14, f0
         cvt.d.s f4, f14
         c.lt.d f4, f20
         
         bc1f 0x803e47b0
         
         lwc1 f14, -0xa10, at
         a1 = [a1 + 0x19dc]
         at = 0x3f00 << 16
         mtc1 at, f16
         lwc1 f0, 0x10, a1
         t2 = 0 + 0xa
         a0 = s2
         mul.s f6, f12, f0
         div.s f8, f6, f14
         mul.s f18, f0, f16
         div.s f10, f8, f22
         add.s f4, f10, f18
         swc1 f4, 0x44, s0
         lwc1 f6, 0x10, a1
         mul.s f8, f2, f6
         div.s f16, f8, f14
         div.s f10, f16, f22
         swc1 f10, 0x48, s0
         halfword [s3 + 0xe7c] = 0
         call 0x86a0405c          // 0x86a0405c(0x0, -1, 0x0, 0x0)
         [s4 + 0x24] = t2
         if                       // likely
         v1 = v0

    loc_0x803e4808: // orphan
         lwc1 f12, 4, s0
         lwc1 f14, 8, s0
         a2 = [s0 + 0x44]
         a3 = [s0 + 0x48]
         call 0x86a03ddc          // 0x86a03ddc(0x0, 0x0, -1, -1)
         [sp + 0x10] = v1
         a0 = s2
         call 0x86a0405c          // 0x86a0405c(0x0, 0x0, -1, -1)
         s1 += 1
         if                       // unlikely
         v1 = v0

    loc_0x803e4834: // orphan
         if                       // likely
         a0 = 0 | 0x8f02

    loc_0x803e483c: // orphan
         a0 = 0 | 0x8f03
         a1 = s2 & 0xff
         call 0x8002781c          // 0x8002781c(0x8f03, 0x0, 0x0, 0x0)
         a2 = s6
         goto 0x803e4864
         t3 = 0 + 0x25

    loc_0x803e4854: // orphan
         a1 = s2 & 0xff
         call 0x8002781c          // 0x8002781c(0x0, 0x0, 0x0, 0x0)
         a2 = s6
         t3 = 0 + 0x25

    loc_0x803e4864: // orphan
         t4 = 0 + 0xa
         v1 = 0x86a4 << 16
         [s4 + 0x188] = t3
         v1 += 0x43f0
         [s4 + 0x198] = t4

    loc_0x803e4878: // orphan
         s2 += 1

    loc_0x803e487c: // orphan
         at = , s2 < 4
         s7 += 4
         if                       // likely
         fp += 4

    loc_0x803e488c: // orphan
         s4 = 0x86a4 << 16
         mtc1 0, f20
         s4 += 0x43f0
         s2 = 0
         s6 = 0 + 4
         s1 = 0 + 1

    loc_0x803e48a4: // orphan
         v0 = [s4 + 0x24]
         at = 0 + 0xa
         if                       // likely
         at = 0 + 8

    loc_0x803e48b4: // orphan
         if                       // likely
         at = 0 + 9

    loc_0x803e48bc: // orphan
         beql v0, at, 0x803e4998  // likely
         s2 += 1

    loc_0x803e48c4: // orphan
         mfc1 a1, f26
         mfc1 a2, f24
         call 0x86a0588c          // "P@" // 0x86a0588c(0x0, 0x0, 0x0, 0x0)
         a0 = s2
         beql v0, 0, 0x803e4998   // likely
         s2 += 1

    loc_0x803e48dc: // orphan
         t5 = [s4 + 0x188]
         a0 = 0 | 0x8f01
         a1 = s2 & 0xff
         if                       // unlikely
         t6 = s2 << 1

    loc_0x803e48f0: // orphan
         t7 = 0x86a4 << 16
         t7 += 0x43f0
         s3 = t6 + t7
         t8 = s2 << 3
         s0 = t8 + t7
         call 0x8002781c          // 0x8002781c(0x0, 0x0, 0x0, 0x0)
         a2 = s3 + 0xe48
         a1 = 0x87f1 << 16
         a1 = [a1 + 0x19dc]
         lwc1 f18, 0x10, a1
         trunc.w.s f4, f18
         mfc1 t0, f4
         
         if                       // likely
         [s4 + 0x188] = t0

    loc_0x803e492c: // orphan
         t1 = ~t0
         [s4 + 0x188] = t1

    loc_0x803e4934: // orphan
         lwc1 f6, 8, s0
         swc1 f20, 0x44, s0
         swc1 f20, 0x48, s0
         c.lt.s f24, f6
         
         bc1fl 0x803e4978
         lwc1 f16, 0x10, a1
         lwc1 f8, 0x10, a1
         c.lt.s f20, f8
         
         bc1f 0x803e496c
         
         goto 0x803e4994
         halfword [s3 + 0xe7c] = s5

    loc_0x803e496c: // orphan
         goto 0x803e4994
         halfword [s3 + 0xe7c] = s1

    loc_0x803e4994: // orphan
         s2 += 1

    loc_0x803e4998: // orphan
         v1 = 0x86a4 << 16
         s4 += 4
         if                       // unlikely
         v1 += 0x43f0

    loc_0x803e49a8: // orphan
         a1 = 0x87f1 << 16
         a1 = [a1 + 0x19dc]
         at = 0xc387 << 16
         mtc1 at, f10
         lwc1 f0, 0x48, a1
         at = 0x4387 << 16
         t2 = 0 + 1
         c.lt.s f0, f10
         t7 = 0x86a4 << 16
         bc1tl 0x803e49f0
         [sp + 0x68] = t2
         mtc1 at, f18
         
         c.lt.s f18, f0
         
         bc1fl 0x803e49f4
         t3 = [sp + 0x68]
         [sp + 0x68] = t2
         t3 = [sp + 0x68]
         if                       // unlikely
         

    loc_0x803e49fc: // orphan
         t4 = [v1 + 0xe60]
         at = 0x86a4 << 16
         a0 = 0x87f1 << 16
         t5 = t4 - 1
         [v1 + 0xe60] = t5
         t6 = [a1 + 0x20]
         a0 = [a0 + 0x19d8]
         t8 = t6 << 2
         at += t8
         call 0x87f026e8          // 0x87f026e8(-1, 0x0, 0x0, 0x0)
         [at + 0x5ad0] = 0
         a1 = 0x87f1 << 16
         goto 0x803e4ac4
         a1 = [a1 + 0x19dc]

    loc_0x803e4a34: // orphan
         t7 = [t7 + 0x52b0]
         v0 = 0 + 0x14
         at = 0x86a4 << 16
         unsigned , hi
         t0 = 0x86a4 << 16
         t2 = 0x86a4 << 16
         t4 = 0x86a4 << 16
         t6 = 0x86a4 << 16
         t9 = lo
         at += t9
         swc1 f0, 0x5274, at
         t0 = [t0 + 0x52b0]
         lwc1 f4, 0x50, a1
         at = 0x86a4 << 16
         unsigned , hi
         t1 = lo
         at += t1
         swc1 f4, 0x5278, at
         t2 = [t2 + 0x52b0]
         lwc1 f6, 0x10, a1
         at = 0x86a4 << 16
         unsigned , hi
         t3 = lo
         at += t3
         swc1 f6, 0x527c, at
         t4 = [t4 + 0x52b0]
         lwc1 f8, 0x18, a1
         at = 0x86a4 << 16
         unsigned , hi
         t5 = lo
         at += t5
         swc1 f8, 0x5280, at
         t6 = [t6 + 0x52b0]
         at = 0x86a4 << 16
         t8 = t6 + 1
         [at + 0x52b0] = t8

    loc_0x803e4ac4: // orphan
         lwc1 f16, 0x50, a1
         at = 0x4014 << 16
         mtc1 at, f19
         mtc1 0, f18
         cvt.d.s f10, f16
         add.d f4, f10, f18
         cvt.s.d f6, f4
         swc1 f6, 0x50, a1
         ra = [sp + 0x64]
         fp = [sp + 0x60]
         s7 = [sp + 0x5c]
         s6 = [sp + 0x58]
         s5 = [sp + 0x54]
         s4 = [sp + 0x50]
         s3 = [sp + 0x4c]
         s2 = [sp + 0x48]
         s1 = [sp + 0x44]
         s0 = [sp + 0x40]
         ldc1 f26, 0x38, sp
         ldc1 f24, 0x30, sp
         ldc1 f22, 0x28, sp
         ldc1 f20, 0x20, sp
         ret
         sp += 0x78

    loc_0x803e4b28: // orphan
         [sp + 0x14] = ra
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x24] = v0
         v1 = 0 + 0x61
         div 0, v0, v1
         t6 = hi
         a0 = [sp + 0x24]
         if                       // likely
         

    loc_0x803e4b54: // orphan
         break 7

    loc_0x803e4b58: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e4b64: // orphan
         if                       // unlikely
         

    loc_0x803e4b6c: // orphan
         break 6

    loc_0x803e4b70: // orphan
         div 0, a0, v1
         t7 = hi
         t8 = t6 + t7
         if                       // unlikely
         

    loc_0x803e4b84: // orphan
         break 7

    loc_0x803e4b88: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e4b94: // orphan
         if                       // unlikely
         

    loc_0x803e4b9c: // orphan
         break 6

    loc_0x803e4ba0: // orphan
         if                       // likely
         t9 = t8 & 1

    loc_0x803e4ba8: // orphan
         if                       // likely
         

    loc_0x803e4bb0: // orphan
         t9 -= 2

    loc_0x803e4bb4: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x2c] = t9
         at = 0 + 0x61
         div 0, v0, at
         t0 = hi
         at = , t0 < 0x3d
         if                       // unlikely
         v0 = 0x86a4 << 16

    loc_0x803e4bd4: // orphan
         v0 += 0x43f0
         a0 = [v0 + 0x1b0]
         at = 0 + 1
         beql a0, 0, 0x803e4c0c   // unlikely
         t1 = [v0 + 0xe60]

    loc_0x803e4be8: // orphan
         if                       // likely
         at = 0 + 2

    loc_0x803e4bf0: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x803e4bf8: // orphan
         beql a0, at, 0x803e4c60  // likely
         t5 = [v0 + 0xe60]

    loc_0x803e4c00: // orphan
         goto 0x803e4c6c
         

    loc_0x803e4c0c: // orphan
         at = , t1 < 2
         if                       // unlikely
         

    loc_0x803e4c18: // orphan
         goto 0x803e5078
         ra = [sp + 0x14]

    loc_0x803e4c20: // orphan
         t2 = [v0 + 0x1b4]
         beql t2, 0, 0x803e4c48   // unlikely
         t4 = [v0 + 0xe60]

    loc_0x803e4c2c: // orphan
         t3 = [v0 + 0xe60]
         at = , t3 < 3
         if                       // unlikely
         

    loc_0x803e4c3c: // orphan
         goto 0x803e5078
         ra = [sp + 0x14]

    loc_0x803e4c48: // orphan
         at = , t4 < 2
         if                       // likely
         

    loc_0x803e4c54: // orphan
         goto 0x803e5078
         ra = [sp + 0x14]

    loc_0x803e4c5c: // orphan
         t5 = [v0 + 0xe60]

    loc_0x803e4c60: // orphan
         at = , t5 < 3
         beql at, 0, 0x803e5078   // unlikely
         ra = [sp + 0x14]

    loc_0x803e4c6c: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         if                       // likely
         v1 = v0 & 3

    loc_0x803e4c7c: // orphan
         if                       // likely
         

    loc_0x803e4c84: // orphan
         v1 -= 4

    loc_0x803e4c88: // orphan
         t6 = v1 << 2
         t7 = 0x86a4 << 16
         t7 += t6
         t7 = [t7 + 0x5ad0]
         a0 = v1
         bnel t7, 0, 0x803e5078   // likely
         ra = [sp + 0x14]

    loc_0x803e4ca4: // orphan
         call 0x86a04c04          // 0x86a04c04(0x0, 0x0, 0x0, 0x0)
         [sp + 0x30] = v1
         if                       // likely
         a2 = [sp + 0x30]

    loc_0x803e4cb4: // orphan
         at = 0 + 1
         if                       // unlikely
         t8 = 0 + 1

    loc_0x803e4cc0: // orphan
         at = 0 + 2
         beql v0, at, 0x803e5078  // unlikely
         ra = [sp + 0x14]

    loc_0x803e4ccc: // orphan
         goto 0x803e4ce0
         

    loc_0x803e4cd4: // orphan
         goto 0x803e4ce0
         [sp + 0x2c] = 0

    loc_0x803e4cdc: // orphan
         [sp + 0x2c] = t8

    loc_0x803e4ce0: // orphan
         a0 = 0x86a4 << 16
         a1 = 0x86a0 << 16
         a1 += 0x41d8
         a0 += 0xfa0
         call 0x87f025b8          // 0x87f025b8(0x86a40fa0, 0x86a041d8, 0x0, 0x0)
         [sp + 0x30] = a2
         a2 = [sp + 0x30]
         if                       // likely
         v1 = v0

    loc_0x803e4d04: // orphan
         a0 = a2 << 2
         at = 0x86a4 << 16
         at += a0
         t9 = 0 + 1
         [at + 0x5ad0] = t9
         at = 0x86a1 << 16
         at += a0
         lwc1 f4, -0xd64, at
         mtc1 0, f6
         [v0 + 0x20] = a2
         swc1 f4, 0x50, v0
         swc1 f6, 0x4c, v0
         t0 = [sp + 0x2c]
         at = 0xc387 << 16
         beql t0, 0, 0x803e4e38   // likely
         mtc1 at, f18

    loc_0x803e4d44: // orphan
         at = 0x4387 << 16
         mtc1 at, f8
         
         swc1 f8, 0x48, v0
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v0
         at = 0 + 0x61
         div 0, v0, at
         t1 = hi
         at = , t1 < 0xb
         if                       // likely
         v1 = [sp + 0x28]

    loc_0x803e4d74: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v1
         at = 0 + 3
         div 0, v0, at
         t2 = hi
         t3 = 0 - 5
         t4 = t3 - t2
         mtc1 t4, f10
         v1 = [sp + 0x28]
         t5 = 0x86a1 << 16
         cvt.s.w f16, f10
         at = 0x40c0 << 16
         swc1 f16, 0x10, v1
         t5 = [t5 - 0x720]
         if                       // likely
         

    loc_0x803e4db4: // orphan
         lwc1 f18, 0x10, v1
         mtc1 at, f4
         at = 0x40a0 << 16
         mtc1 at, f8
         mul.s f6, f18, f4
         div.s f10, f6, f8
         goto 0x803e4f14
         swc1 f10, 0x10, v1

    loc_0x803e4dd4: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v1
         at = 0 + 3
         div 0, v0, at
         t6 = hi
         t7 = 0 - 8
         t8 = t7 - t6
         mtc1 t8, f16
         v1 = [sp + 0x28]
         t9 = 0x86a1 << 16
         cvt.s.w f18, f16
         at = 0x40c0 << 16
         swc1 f18, 0x10, v1
         t9 = [t9 - 0x720]
         if                       // likely
         

    loc_0x803e4e14: // orphan
         lwc1 f4, 0x10, v1
         mtc1 at, f6
         at = 0x40a0 << 16
         mtc1 at, f10
         mul.s f8, f4, f6
         div.s f16, f8, f10
         goto 0x803e4f14
         swc1 f16, 0x10, v1

    loc_0x803e4e38: // orphan
         
         swc1 f18, 0x48, v1
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v1
         at = 0 + 0x61
         div 0, v0, at
         t0 = hi
         at = , t0 < 0xb
         if                       // likely
         v1 = [sp + 0x28]

    loc_0x803e4e60: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v1
         at = 0 + 3
         div 0, v0, at
         t1 = hi
         t3 = t1 + 5
         mtc1 t3, f4
         v1 = [sp + 0x28]
         t2 = 0x86a1 << 16
         cvt.s.w f6, f4
         at = 0x40c0 << 16
         swc1 f6, 0x10, v1
         t2 = [t2 - 0x720]
         if                       // likely
         

    loc_0x803e4e9c: // orphan
         lwc1 f8, 0x10, v1
         mtc1 at, f10
         at = 0x40a0 << 16
         mtc1 at, f18
         mul.s f16, f8, f10
         div.s f4, f16, f18
         goto 0x803e4f14
         swc1 f4, 0x10, v1

    loc_0x803e4ebc: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = v1
         at = 0 + 3
         div 0, v0, at
         t4 = hi
         t5 = t4 + 8
         mtc1 t5, f6
         v1 = [sp + 0x28]
         t7 = 0x86a1 << 16
         cvt.s.w f8, f6
         at = 0x40c0 << 16
         swc1 f8, 0x10, v1
         t7 = [t7 - 0x720]
         if                       // likely
         

    loc_0x803e4ef8: // orphan
         lwc1 f10, 0x10, v1
         mtc1 at, f16
         at = 0x40a0 << 16
         mtc1 at, f4
         mul.s f18, f10, f16
         div.s f6, f18, f4
         swc1 f6, 0x10, v1

    loc_0x803e4f14: // orphan
         v0 = 0x86a4 << 16
         v0 += 0x43f0
         a0 = [v0 + 0x1b0]
         at = 0x86a1 << 16
         beql a0, 0, 0x803e4f54   // unlikely
         lwc1 f8, 0x10, v1

    loc_0x803e4f2c: // orphan
         at = 0 + 1
         if                       // unlikely
         at = 0 + 2

    loc_0x803e4f38: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x803e4f40: // orphan
         if                       // likely
         

    loc_0x803e4f48: // orphan
         goto 0x803e4f9c
         

    loc_0x803e4f54: // orphan
         lwc1 f10, -0xa0c, at
         mul.s f16, f8, f10
         goto 0x803e4f9c
         swc1 f16, 0x10, v1

    loc_0x803e4f64: // orphan
         at = 0x86a1 << 16
         lwc1 f4, -0xa08, at
         lwc1 f18, 0x10, v1
         mul.s f6, f18, f4
         goto 0x803e4f9c
         swc1 f6, 0x10, v1

    loc_0x803e4f7c: // orphan
         lwc1 f8, 0x10, v1
         goto 0x803e4f9c
         swc1 f8, 0x10, v1

    loc_0x803e4f88: // orphan
         at = 0x86a1 << 16
         lwc1 f16, -0xa04, at
         lwc1 f10, 0x10, v1
         mul.s f18, f10, f16
         swc1 f18, 0x10, v1

    loc_0x803e4f9c: // orphan
         at = 0x86a1 << 16
         lwc1 f0, -0xa00, at
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1
         t6 = [v0 + 0xe60]
         t8 = t6 + 1
         [v0 + 0xe60] = t8
         a2 = [v1 + 0x10]
         lwc1 f14, 0x50, v1
         lwc1 f12, 0x48, v1
         call 0x86a0b6f8          // 0x86a0b6f8(0x0, 0x0, -1, 0x0)
         [sp + 0x28] = v1
         v1 = [sp + 0x28]
         at = 0x4014 << 16
         mtc1 at, f9
         lwc1 f4, 0x50, v1
         mtc1 0, f8
         a0 = v1 + 0x24
         cvt.d.s f6, f4
         add.d f10, f6, f8
         cvt.s.d f16, f10
         swc1 f16, 0x50, v1
         call 0x8003f1dc          // 0x8003f1dc(0x24, 0x0, -1, 0x0)
         [sp + 0x1c] = a0
         t9 = [sp + 0x2c]
         v1 = [sp + 0x28]
         a0 = [sp + 0x1c]
         if                       // likely
         a1 = 0

    loc_0x803e5014: // orphan
         a3 = 0x86a1 << 16
         a3 = [a3 - 0x300]
         a0 = [sp + 0x1c]
         a1 = 0
         a2 = 0 - 1
         call 0x8003f114          // 0x8003f114(0x24, 0x0, -1, -1)
         [sp + 0x28] = v1
         a0 = [sp + 0x1c]
         call 0x8003f210          // 0x8003f210(0x24, 0x0, -1, -1)
         a1 = 0
         goto 0x803e5068
         v1 = [sp + 0x28]

    loc_0x803e5044: // orphan
         a3 = 0x86a1 << 16
         a3 = [a3 - 0x2fc]
         a2 = 0 - 1
         call 0x8003f114          // 0x8003f114(0x0, 0x0, -1, -1)
         [sp + 0x28] = v1
         a0 = [sp + 0x1c]
         call 0x8003f210          // 0x8003f210(0x24, 0x0, -1, -1)
         a1 = 0
         v1 = [sp + 0x28]

    loc_0x803e5068: // orphan
         t0 = , unsigned  byte [v1 + 0x26]
         t1 = t0 | 8
         byte [v1 + 0x26] = t1

    loc_0x803e5074: // orphan
         ra = [sp + 0x14]

    loc_0x803e5078: // orphan
         sp += 0x38
         ret
         

    loc_0x803e5154: // orphan
         v0 += 0x14
         goto 0x803e53d4
         

    loc_0x803e53d4: // orphan
         if                       // likely
         at = 0 + 1

    loc_0x803e53dc: // orphan
         if                       // likely
         lwc1 f10, 0x30, sp

    loc_0x803e53e4: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x803e53f0: // orphan
         if                       // unlikely
         at = 0x4396 << 16

    loc_0x803e53f4: // orphan
         at = 0x4396 << 16

    loc_0x803e53f8: // orphan
         mtc1 at, f6
         lwc1 f4, 0x30, sp
         lwc1 f8, 0x2c, sp
         c.eq.s f4, f6
         
         bc1fl 0x803e54b8
         mtc1 0, f0
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = v0
         v1 = 0 + 0x61
         div 0, v0, v1
         t8 = hi
         t9 = [sp + 0x1c]
         if                       // likely
         

    loc_0x803e543c: // orphan
         break 7

    loc_0x803e5440: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e544c: // orphan
         if                       // unlikely
         

    loc_0x803e5454: // orphan
         break 6

    loc_0x803e5458: // orphan
         div 0, t9, v1
         t0 = hi
         t1 = t8 + t0
         if                       // unlikely
         

    loc_0x803e546c: // orphan
         break 7

    loc_0x803e5470: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e547c: // orphan
         if                       // unlikely
         

    loc_0x803e5484: // orphan
         break 6

    loc_0x803e5488: // orphan
         if                       // likely
         t2 = t1 & 1

    loc_0x803e5490: // orphan
         if                       // likely
         

    loc_0x803e5498: // orphan
         t2 -= 2

    loc_0x803e549c: // orphan
         if                       // likely
         

    loc_0x803e54a4: // orphan
         goto 0x803e57a4
         v0 = 0 + 1

    loc_0x803e54ac: // orphan
         goto 0x803e57a4
         v0 = 0

    loc_0x803e54dc: // orphan
         at = 0x4396 << 16
         mtc1 at, f4
         at = 0x4396 << 16
         lwc1 f8, 0x30, sp
         c.eq.s f10, f4
         
         bc1fl 0x803e55b8
         at = 0x4396 << 16
         mtc1 at, f6
         
         c.eq.s f16, f6
         
         bc1fl 0x803e55b8
         at = 0x4396 << 16
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x1c] = v0
         v1 = 0 + 0x61
         div 0, v0, v1
         t3 = hi
         t4 = [sp + 0x1c]
         if                       // likely
         

    loc_0x803e553c: // orphan
         break 7

    loc_0x803e5540: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e554c: // orphan
         if                       // unlikely
         

    loc_0x803e5554: // orphan
         break 6

    loc_0x803e5558: // orphan
         div 0, t4, v1
         t5 = hi
         t7 = t3 + t5
         if                       // unlikely
         

    loc_0x803e556c: // orphan
         break 7

    loc_0x803e5570: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e557c: // orphan
         if                       // unlikely
         

    loc_0x803e5584: // orphan
         break 6

    loc_0x803e5588: // orphan
         if                       // likely
         t6 = t7 & 1

    loc_0x803e5590: // orphan
         if                       // likely
         

    loc_0x803e5598: // orphan
         t6 -= 2

    loc_0x803e559c: // orphan
         if                       // likely
         

    loc_0x803e55a4: // orphan
         goto 0x803e57a4
         v0 = 0 + 1

    loc_0x803e55ac: // orphan
         goto 0x803e57a4
         v0 = 0

    loc_0x803e57a4: // orphan
         ra = [sp + 0x14]
         sp += 0x38
         ret
         

    loc_0x803e5c3c: // orphan
         bc1fl 0x803e5c64
         at = 0 + 3
         add.s f6, f16, f0
         c.lt.s f14, f6
         
         bc1fl 0x803e5c64
         at = 0 + 3
         ret
         v0 = 0 + 1

    loc_0x803e5ef8: // orphan
         mul.d f6, f10, f18
         cvt.d.s f18, f4
         add.d f10, f6, f8
         cvt.d.s f8, f2
         sub.d f6, f18, f10
         c.lt.d f6, f8
         
         bc1f 0x803e5f24
         
         ret
         v0 = 0 + 1

    loc_0x803e6124: // orphan
         mov.s f20, f14
         sdc1 f26, 0x20, sp
         sdc1 f24, 0x18, sp
         sdc1 f22, 0x10, sp
         if                       // likely
         v0 = 0

    loc_0x803e613c: // orphan
         at = 0x86a4 << 16
         lwc1 f14, 0x5acc, at
         at = 0x86a1 << 16
         ldc1 f26, -0x998, at
         at = 0x86a1 << 16
         lwc1 f22, -0x990, at
         at = 0x86a1 << 16
         a0 = 0x86a4 << 16
         a3 = 0x86a1 << 16
         mtc1 0, f24
         a3 -= 0x2aa0             // arg4
         a0 += 0x43f0             // arg1
         lwc1 f18, -0x98c, at
         t0 = 0 + 0x18
         a1 = [a0 + 0xed4]        // arg1
         lwc1 f0, 0xec4, a0       // arg1
         v0 += 1
         unsigned , hi
         at = , v0 < v1
         lwc1 f2, 0xec8, a0       // arg1
         t6 = lo
         a2 = a3 + t6             // arg4
         lwc1 f4, 0x10, a2        // arg3
         mul.s f6, f4, f18
         
         mul.s f8, f6, f22
         add.s f16, f8, f14
         add.s f10, f16, f0
         c.lt.s f12, f10
         
         bc1f 0x803e6228
         
         sub.s f4, f0, f16
         c.lt.s f4, f12
         
         bc1f 0x803e6228
         
         add.s f6, f24, f14
         add.s f8, f6, f2
         c.lt.s f20, f8
         
         bc1f 0x803e6228
         
         lwc1 f10, 0x14, a2       // arg3
         mul.s f4, f10, f18
         cvt.d.s f10, f14
         cvt.d.s f0, f4
         add.d f6, f0, f0
         mul.d f8, f6, f26
         cvt.d.s f6, f2
         add.d f4, f8, f10
         cvt.d.s f10, f20
         sub.d f8, f6, f4
         c.lt.d f8, f10
         
         bc1f 0x803e6228
         
         goto 0x803e6234
         v0 = 0 + 1

    loc_0x803e6230: // orphan
         v0 = 0

    loc_0x803e6234: // orphan
         ldc1 f20, 8, sp
         ldc1 f22, 0x10, sp
         ldc1 f24, 0x18, sp
         ldc1 f26, 0x20, sp
         ret
         sp += 0x28

    loc_0x803e6298: // orphan
         a0 = [s0 + 0x188]
         t7 = s1 << 1
         v0 = s3 + t7
         if                       // unlikely
         

    loc_0x803e62ac: // orphan
         a1 = halfword [v0 + 0xe7c]
         beql a1, 0, 0x803e6338   // likely
         t5 = [s0 + 0x24]

    loc_0x803e62b8: // orphan
         unsigned , hi
         t9 = halfword [v0 + 0xe6c]
         t8 = lo
         t0 = t8 + t9
         
         unsigned , hi
         t1 = lo
         if                       // likely
         t2 = , signed  t1 >> 6

    loc_0x803e62dc: // orphan
         at = t1 + 0x3f
         t2 = , signed  at >> 6

    loc_0x803e62e4: // orphan
         unsigned , hi
         t3 = lo
         t4 = t0 + t3
         
         div 0, t4, s2
         v1 = hi
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         halfword [v0 + 0xe6c] = v1
         halfword [v0 + 0xe64] = v1
         halfword [v0 + 0xe74] = v1
         if                       // unlikely
         

    loc_0x803e6318: // orphan
         break 7

    loc_0x803e631c: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e6328: // orphan
         if                       // unlikely
         

    loc_0x803e6330: // orphan
         break 6

    loc_0x803e6334: // orphan
         t5 = [s0 + 0x24]

    loc_0x803e6338: // orphan
         at = 0 + 9
         bnel t5, at, 0x803e6350  // likely
         t6 = [s0 + 0x188]

    loc_0x803e6344: // orphan
         call 0x86a0b5cc          // 0x86a0b5cc(0x0, 0x0, 0x0, 0x0)
         a0 = s1
         t6 = [s0 + 0x188]

    loc_0x803e6350: // orphan
         a0 = t6 - 1
         [s0 + 0x188] = a0

    loc_0x803e6358: // orphan
         if                       // unlikely
         t9 = s1 << 3

    loc_0x803e6360: // orphan
         v0 = [s0 + 0x198]
         if                       // unlikely
         t8 = v0 - 1

    loc_0x803e636c: // orphan
         [s0 + 0x198] = t8
         a0 = [s0 + 0x188]

    loc_0x803e6374: // orphan
         bnel a0, 0, 0x803e64d4   // unlikely
         s1 += 1

    loc_0x803e637c: // orphan
         [s0 + 0x24] = 0
         t1 = [s3 + 0]
         v1 = s3 + t9
         swc1 f20, 0x68, sp
         if                       // unlikely
         swc1 f20, 0x64, sp

    loc_0x803e6390: // orphan
         swc1 f20, 0x64, sp

    loc_0x803e6394: // orphan
         a0 = s1
         a1 = sp + 0x68           // arg2
         a2 = sp + 0x64           // arg3
         call 0x86a0bd34          // 0x86a0bd34(0x0, 0x178068, 0x178064, 0x0)
         [sp + 0x34] = v1
         v1 = [sp + 0x34]

    loc_0x803e63ac: // orphan
         lwc1 f0, 0x68, sp
         lwc1 f2, 0x64, sp
         a0 = s1
         mfc1 a1, f0
         mfc1 a2, f2
         swc1 f0, 0x44, v1
         call 0x86a0638c          // "\u01e4" // 0x86a0638c(0x0, 0x0, 0x0, 0x0)
         swc1 f2, 0x48, v1
         lwc1 f4, 0x68, sp
         lwc1 f2, 0x64, sp
         c.eq.s f4, f20
         
         bc1fl 0x803e641c
         lwc1 f6, 0x68, sp
         c.eq.s f2, f20
         t2 = s1 << 1
         v0 = s3 + t2
         bc1fl 0x803e641c
         lwc1 f6, 0x68, sp
         [s0 + 0x24] = 0
         t3 = halfword [v0 + 0xe64]
         t0 = halfword [v0 + 0xe74]
         t4 = 0 + 3
         beql t0, t3, 0x803e64d4  // likely
         s1 += 1

    loc_0x803e6410: // orphan
         goto 0x803e64d0
         [s0 + 0x24] = t4

    loc_0x803e64bc: // orphan
         bc1fl 0x803e64d0
         [s0 + 0x24] = t9
         goto 0x803e64d0
         [s0 + 0x24] = t8

    loc_0x803e64d0: // orphan
         s1 += 1

    loc_0x803e64d4: // orphan
         at = , s1 < 4
         if                       // likely
         s0 += 4

    loc_0x803e64e0: // orphan
         t1 = 0x86a4 << 16
         v1 = t1 + 0x43f0
         s0 = v1
         s1 = 0
         a0 = 0 + 0xa

    loc_0x803e64f4: // orphan
         t2 = [s0 + 0x188]
         if                       // likely
         t0 = s1 << 1

    loc_0x803e6500: // orphan
         t3 = s3 + t0
         halfword [t3 + 0xe7c] = 0

    loc_0x803e6508: // orphan
         v0 = [s0 + 0x24]
         at = , unsigned  , v0 < 0xb
         if                       // unlikely
         t4 = v0 << 2

    loc_0x803e6518: // orphan
         at = 0x86a1 << 16
         at += t4
         t4 = [at - 0x988]
         goto t4
         

    loc_0x803e653c: // orphan
         if                       // unlikely
         s1 += 1

    loc_0x803e6544: // orphan
         t7 = [s0 + 0x188]
         at = , t7 < 0x15
         beql at, 0, 0x803e6560   // likely
         [s0 + 0x64] = 0

    loc_0x803e6554: // orphan
         swc1 f20, 0x44, v1
         swc1 f20, 0x48, v1

    loc_0x803e655c: // orphan
         [s0 + 0x64] = 0

    loc_0x803e6560: // orphan
         at = , s1 < 4
         s0 += 4
         v1 += 8
         swc1 f20, 0x6c, v1
         swc1 f20, 0x70, v1
         swc1 f20, 0x8c, v1
         if                       // likely
         swc1 f20, 0x90, v1

    loc_0x803e6580: // orphan
         t8 = [sp + 0x5c]
         t1 = 0x86a1 << 16
         t1 -= 0x29c8
         t9 = t8 << 4
         s2 = t9 + t1
         [sp + 0x3c] = s2
         s1 = 0
         s0 = 0

    loc_0x803e65a0: // orphan
         a0 = [s2 + 0]
         t0 = a0 << 2
         t3 = s3 + t0
         t4 = [t3 + 0x24]
         at = , unsigned  , t4 < 0xb
         if                       // likely
         t4 <<= 2

    loc_0x803e65bc: // orphan
         at = 0x86a1 << 16
         at += t4
         t4 = [at - 0x95c]
         goto t4
         

    loc_0x803e65ec: // orphan
         s0 += 4
         at = , s0 < 0x10
         if                       // likely
         s2 += 4

    loc_0x803e65fc: // orphan
         s1 = 0
         s0 = 0
         s2 = [sp + 0x3c]

    loc_0x803e6608: // orphan
         a0 = [s2 + 0]
         t8 = a0 << 2
         t9 = s3 + t8
         t1 = [t9 + 0x24]
         at = , unsigned  , t1 < 0xb
         if                       // likely
         t1 <<= 2

    loc_0x803e6624: // orphan
         at = 0x86a1 << 16
         at += t1
         t1 = [at - 0x930]
         goto t1
         

    loc_0x803e6654: // orphan
         s0 += 4
         at = , s0 < 0x10
         if                       // likely
         s2 += 4

    loc_0x803e6664: // orphan
         s1 = 0
         s0 = 0
         s2 = [sp + 0x3c]

    loc_0x803e6670: // orphan
         a0 = [s2 + 0]
         t5 = a0 << 2
         t6 = s3 + t5
         t4 = a0 << 3
         t7 = [t6 + 0x24]
         v0 = s3 + t4
         lwc1 f10, 0x44, v0
         lwc1 f2, 0x48, v0
         at = , unsigned  , t7 < 0xb
         swc1 f10, 0x68, sp
         if                       // likely
         swc1 f2, 0x64, sp

    loc_0x803e66a0: // orphan
         t7 <<= 2
         at = 0x86a1 << 16
         at += t7
         t7 = [at - 0x904]
         goto t7
         

    loc_0x803e66e0: // orphan
         s0 += 4
         at = , s0 < 0x10
         if                       // likely
         s2 += 4

    loc_0x803e66f0: // orphan
         at = 0x4334 << 16
         mtc1 at, f2
         at = 0x4280 << 16
         t8 = 0x86a4 << 16
         v1 = t8 + 0x43f0
         a0 = 0x86a4 << 16
         mtc1 at, f0
         a0 += 0x4410
         v0 = v1
         lwc1 f18, 4, v1
         v1 += 8
         at = , unsigned  , v1 < a0
         mul.s f20, f18, f0
         beql at, 0, 0x803e677c   // unlikely
         div.s f18, f20, f2

    loc_0x803e672c: // orphan
         div.s f18, f20, f2

    loc_0x803e6730: // orphan
         v1 += 8
         at = , unsigned  , v1 < a0
         v0 += 2
         trunc.w.s f18, f18
         mfc1 t1, f18
         
         byte [v0 + 0xe46] = t1
         lwc1 f18, -8, v1
         mul.s f18, f18, f0
         div.s f18, f18, f2
         trunc.w.s f18, f18
         mfc1 t0, f18
         
         byte [v0 + 0xe47] = t0
         lwc1 f18, -4, v1
         mul.s f20, f18, f0
         bnel at, 0, 0x803e6730   // unlikely
         div.s f18, f20, f2

    loc_0x803e6778: // orphan
         div.s f18, f20, f2

    loc_0x803e677c: // orphan
         v0 += 2
         trunc.w.s f18, f18
         mfc1 t1, f18
         
         byte [v0 + 0xe46] = t1
         lwc1 f18
         mul.s f18, f18, f0
         div.s f18, f18, f2
         trunc.w.s f18, f18
         mfc1 t0, f18
         
         byte [v0 + 0xe47] = t0
         v0 = 0x86a4 << 16
         v0 += 0x43f0
         s1 = 0

    loc_0x803e67b8: // orphan
         t3 = halfword [v0 + 0xe7c]
         a0 = s1
         bnel t3, 0, 0x803e67d8   // unlikely
         s1 += 1

    loc_0x803e67c8: // orphan
         call 0x86a06474          // 0x86a06474(0x0, 0x0, 0x0, 0x0)
         [sp + 0x38] = v0
         v0 = [sp + 0x38]
         s1 += 1

    loc_0x803e67d8: // orphan
         at = 0 + 4
         if                       // likely
         v0 += 2

    loc_0x803e67e4: // orphan
         call 0x86a06c3c          // 0x86a06c3c(0x0, 0x0, 0x0, 0x0)
         
         ra = [sp + 0x2c]
         ldc1 f20, 0x10, sp
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret
         sp += 0x70

    loc_0x803e6814: // orphan
         sp -= 0x18
         [sp + 0x20] = a2
         c.eq.s f12, f0
         [sp + 0x14] = ra
         [sp + 0x18] = a0
         lwc1 f4, 0x20, sp
         bc1f 0x803e6844
         lwc1 f14, 0x20, sp
         c.eq.s f4, f0
         
         bc1tl 0x803e6874
         ra = [sp + 0x14]
         call 0x8000b3b0          // 0x8000b3b0(0x0, 0x0, 0x0, 0x0)
         neg.s f14, f14
         t6 = v0 + 0x3fff
         at = 0 | 0xffff
         div 0, t6, at
         t8 = [sp + 0x18]
         t7 = hi
         at = 0x86a4 << 16
         t9 = t8 << 1
         at += t9
         halfword [at + 0x5264] = t7
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret
         

    loc_0x803e6b40: // orphan
         t9 = halfword [sp + 0x2c]
         a1 = [sp + 0x1c]
         at = , t9 < v0
         if                       // likely
         

    loc_0x803e6b54: // orphan
         goto 0x803e6b64
         v0 = [sp + 0x20]

    loc_0x803e6b5c: // orphan
         goto 0x803e6b64
         v0 = a1

    loc_0x803e6b64: // orphan
         ra = [sp + 0x14]
         sp += 0x30
         ret
         

    loc_0x803e6cac: // orphan
         
         bc1fl 0x803e6cfc
         mfc1 a1, f20
         mtc1 at, f8
         at = 0x42fa << 16
         c.lt.s f8, f22
         
         bc1fl 0x803e6cfc
         mfc1 a1, f20
         mtc1 at, f10
         v1 = [sp + 0x34]
         v0 = 0 + 1
         c.lt.s f22, f10
         
         bc1fl 0x803e6cfc
         mfc1 a1, f20
         swc1 f20, 4, v1
         goto 0x803e6e88
         swc1 f22, 8, v1

    loc_0x803e6e88: // orphan
         ra = [sp + 0x24]
         ldc1 f20, 0x10, sp
         ldc1 f22, 0x18, sp
         ret
         sp += 0x48

    loc_0x803e6eb8: // orphan
         sdc1 f26, 0x20, sp
         sdc1 f24, 0x18, sp
         sdc1 f22, 0x10, sp
         sdc1 f20, 8, sp
         t0 += 0x43f0
         lwc1 f28, -0x8b0, at
         v0 = 0
         t1 = 0 + 1
         a3 = 0 + 4               // arg4

    loc_0x803e6edc: // orphan
         if                       // likely
         at = 0x4000 << 16

    loc_0x803e6ee4: // orphan
         mtc1 at, f2
         t6 = v0 << 3
         v1 = t0 + t6
         sqrt.s f2, f2
         lwc1 f12, 4, v1
         t7 = a0 << 3             // arg1
         a1 = t0 + t7             // arg2
         lwc1 f14, 4, a1          // arg2
         lwc1 f18, 8, a1          // arg2
         lwc1 f16, 8, v1
         sub.s f22, f12, f14
         mul.s f4, f2, f28
         sub.s f24, f16, f18
         sub.s f6, f12, f4
         c.lt.s f6, f14
         
         bc1fl 0x803e7034
         v0 += 1
         mul.s f8, f2, f28
         add.s f10, f8, f12
         c.lt.s f14, f10
         
         bc1fl 0x803e7034
         v0 += 1
         mul.s f4, f2, f28
         sub.s f6, f16, f4
         c.lt.s f6, f18
         
         bc1fl 0x803e7034
         v0 += 1
         mul.s f8, f2, f28
         add.s f10, f8, f16
         c.lt.s f18, f10
         
         bc1fl 0x803e7034
         v0 += 1
         mul.s f4, f22, f22
         t8 = a0 << 2             // arg1
         a2 = t0 + t8             // arg3
         mul.s f6, f24, f24
         at = 0x86a1 << 16
         add.s f0, f4, f6
         sqrt.s f0, f0
         cvt.d.s f8, f0
         mov.s f26, f0
         c.lt.d f8, f30
         
         bc1f 0x803e6fb8
         
         at = 0x4130 << 16
         mtc1 at, f2
         goto 0x803e6fc0
         

    loc_0x803e6fc0: // orphan
         mul.s f12, f22, f2
         lwc1 f14, 0x48, v1
         lwc1 f16, 0x44, v1
         mul.s f18, f24, f2
         [a2 + 0x64] = t1         // arg3
         lwc1 f8, 0x74, a1        // arg2
         mul.s f4, f14, f14
         at = 0x86a1 << 16
         mul.s f6, f16, f16
         add.s f2, f4, f6
         lwc1 f6, 0x78, a1        // arg2
         sqrt.s f0, f2
         mul.s f10, f12, f0
         sub.s f4, f8, f10
         mul.s f8, f18, f0
         swc1 f4, 0x74, a1        // arg2
         sub.s f10, f6, f8
         lwc1 f6, 0x94, a1        // arg2
         swc1 f10, 0x78, a1       // arg2
         lwc1 f4, -0x8a8, at
         sub.s f20, f4, f26
         lwc1 f4, 0x98, a1        // arg2
         mul.s f8, f12, f20
         sub.s f10, f6, f8
         mul.s f6, f18, f20
         swc1 f10, 0x94, a1       // arg2
         sub.s f8, f4, f6
         swc1 f8, 0x98, a1        // arg2

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
         beql s2, t9, 0x803e7158  // likely
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

    loc_0x803f1f70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1f7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1f88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1f94: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fa4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fe0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1fec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1ff8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f2004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f2010: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f201c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f2028: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f2034: // orphan
         if                       // unlikely
         if                       // unlikely

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
