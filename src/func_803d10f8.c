/*
 * Function: 0x803d10f8
 * ROM Offset: 0x002d20f8
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.803d1100 (int esi, int edx) {
if            // likely
if            // unlikely
// do {
if            // unlikely
// } while (?);
// } while (?);
// } while (?);
}
return eax;
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
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
}

/*
// Full analysis output
int fcn.803d1100 (int esi, int edx) {
    loc_0x803d1100:
        unsigned , hi
        t1 = lo
        t9 = t0 + t1
        at = , t9 < 0x400
        if            // likely
        0x803d1114
            
    loc_0x803d1128:
        t7 = 0x8692 << 16
        t7 = [t7 - 0x5d18]
        t5 = 0x8691 << 16
        t4 = t7 << 2
        t5 += t4
        t5 = [t5 - 0x14d8]
        at = , t1 < t5
        if            // unlikely
        at = 6 << 16
            
    loc_0x803d116c:
        s0 += 1
         // do {
    loc_0x803d1170:
        if            // unlikely
        v0 += 0x14
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x803d10a4: // orphan
             t7 = [v0 + 0xc]
             lwc1 f16
             unsigned , hi
             t4 = lo
             v1 = s7 + t4
             lwc1 f18, 4, v1
             lwc1 f8, 8, v1
             add.s f4, f18, f16
             mul.s f10, f8, f20
             lwc1 f18, 4, v0
             trunc.w.s f6, f4
             add.s f16, f10, f18
             mfc1 a2, f6
             
             a0 = s3 - a2             // arg3
             unsigned , hi
             trunc.w.s f4, f16
             mfc1 a3, f4
             
             a1 = t2 - a3             // arg4
             t0 = lo
             
             

    loc_0x803d0628: // orphan
         // CODE XREFS from fcn.803d1100 @ 0x803d1064, 0x803d1120, 0x803d1164
         t4 = [sp + 0x7c]
         at = , t4 < 0xc9
         bnel at, 0, 0x803d0648   // likely
         t6 = fp << 2

    loc_0x803d0648: // orphan
         t6 -= fp
         t5 = s4 << 2
         t9 = fp << 3
         t9 += fp
         t5 += s4
         t6 <<= 2
         t8 = 0x8692 << 16
         t3 = 0x8691 << 16
         t3 -= 0x1aa8
         t8 -= 0x5bb8
         t7 = s7 + t6
         t5 <<= 2
         t9 <<= 2
         s2 = t9 + t3
         s1 = t5 + t8
         [sp + 0x5c] = t7
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         s0 = 0
         at = 0 + 0xc5
         div 0, v0, at
         v1 = hi
         [s1 + 0x10] = v1
         t4 = 0x8692 << 16
         t4 = [t4 - 0x5830]
         s5 = v1
         if                       // unlikely
         t5 = 0x8692 << 16

    loc_0x803d09e0: // orphan
         t3 = 0x8692 << 16
         t3 = [t3 - 0x5d18]
         at = , unsigned  , t3 < 5
         if                       // likely
         t3 <<= 2

    loc_0x803d0f10: // orphan
         call 0x8007afa0          // 0x8007afa0(0x0, 0x0, 0x0, 0x0)
         
         t6 = [s2 + 0x18]
         t4 = [s2 + 0x14]
         mtc1 s3, f6
         div 0, v0, t6
         t7 = hi
         t5 = t7 + t4
         mtc1 t5, f4
         cvt.s.w f10, f6
         v1 = [sp + 0x5c]
         if                       // likely
         

    loc_0x803d0f48: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d0f60: // orphan
         cvt.s.w f0, f4
         lwc1 f8, 4, v1
         at = 0 + 3
         add.s f18, f10, f8
         lwc1 f8, 8, v1
         swc1 f0, 4, s1
         trunc.w.s f4, f0
         trunc.w.s f16, f18
         mfc1 t3, f4
         mul.s f18, f8, f20
         mtc1 t3, f6
         mfc1 s3, f16
         cvt.s.w f10, f6
         add.s f16, f10, f18
         trunc.w.s f4, f16
         mfc1 t2, f4
         if                       // unlikely
         at = 0 + 4

    loc_0x803d0fb0: // orphan
         if                       // likely
         v0 = 0x8692 << 16

    loc_0x803d1178: // orphan
         // CODE XREF from fcn.803d1100 @ 0x803d1090
         t3 = 0x8692 << 16
         t3 = [t3 - 0x5898]
         s4 += 1
         at = , s4 < t3
         if                       // likely
         

    loc_0x803cfbbc: // orphan
         a0 = 0x8692 << 16
         a0 = [a0 - 0x5830]       // arg1
         a1 = 0x8692 << 16
         a1 = [a1 - 0x5d18]       // arg2
         if                       // unlikely
         at = , unsigned  , a1 < 5 // arg2

    loc_0x803cfcb4: // orphan
         at = , unsigned  , a1 < 5 // arg2
         if                       // unlikely
         t9 = a1 << 2             // arg2

    loc_0x803cfe28: // orphan
         if                       // likely
         at = , unsigned  , a1 < 5 // arg2

    loc_0x803d04d8: // orphan
         at = , unsigned  , a1 < 5 // arg2
         if                       // unlikely
         t3 = a1 << 2             // arg2

    loc_0x803d04e4: // orphan
         at = 0x8691 << 16
         at += t3
         t3 = [at - 0xd20]
         goto t3
         

    loc_0x803cfe30: // orphan
         if                       // likely
         t4 = a1 << 2             // arg2

    loc_0x803cfe38: // orphan
         at = 0x8691 << 16
         at += t4
         t4 = [at - 0xd98]
         goto t4
         

    loc_0x803cfcc0: // orphan
         at = 0x8691 << 16
         at += t9
         t9 = [at - 0xdac]
         goto t9
         

    loc_0x803cfbd4: // orphan
         if                       // likely
         t6 = a1 << 2             // arg2

    loc_0x803cfbdc: // orphan
         at = 0x8691 << 16
         at += t6
         t6 = [at - 0xdc0]
         goto t6
         

    loc_0x803d1190: // orphan
         s4 = 0

    loc_0x803d1290: // orphan
         at = , unsigned  , a1 < 5
         if                       // unlikely
         t6 = a1 << 2

    loc_0x803d1428: // orphan
         call 0x86904d48          // 0x86904d48(0x0, 0x0, 0x0, 0x0)
         
         if                       // unlikely
         

    loc_0x803d1440: // orphan
         s0 = 0x8692 << 16
         s0 -= 0x5bb8

    loc_0x803d1468: // orphan
         v0 = [s0 + 0x334]
         at = , v0 < 0xf
         if                       // likely
         t6 = 0 + 0xa

    loc_0x803d1480: // orphan
         at = , v0 < 0x19
         if                       // unlikely
         t7 = 0 + 5

    loc_0x803d1494: // orphan
         t4 = 0 + 3
         [s0 + 0x344] = t4

    loc_0x803d1448: // orphan
         call 0x8690c20c          // "(A" // 0x8690c20c(0x0, 0x0, 0x0, 0x0)
         a0 = s4
         at = , v0 < 5
         if                       // unlikely
         [s0 + 0x334] = v0

    loc_0x803d14ac: // orphan
         call 0x8690b700          // 0x8690b700(0x0, 0x0, 0x0, 0x0)
         
         call 0x8690b848          // 0x8690b848(0x0, 0x0, 0x0, 0x0)
         
         ra = [sp + 0x54]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
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
         sp += 0xa0

    loc_0x803d148c: // orphan
         goto 0x803d149c
         [s0 + 0x344] = t7

    loc_0x803d149c: // orphan
         // CODE XREFS from fcn.803d1100 @ 0x803d1460, 0x803d1478, 0x803d148c
         s4 += 1
         at = 0 + 4
         if                       // likely
         s0 += 4

    loc_0x803d1478: // orphan
         goto 0x803d149c
         [s0 + 0x344] = t6

    loc_0x803d145c: // orphan
         t3 = 0 + 0x14
         goto 0x803d149c
         [s0 + 0x344] = t3

    loc_0x803d1438: // orphan
         goto 0x803cfba4
         [sp + 0x7c] = 0

    loc_0x803cfba4: // orphan
         // CODE XREFS from fcn.803d1100 @ 0x803d063c, 0x803d1438
         call 0x8690241c          // 0x8690241c(0x0, 0x0, 0x0, 0x0)
         
         t5 = 0x8692 << 16
         t5 = [t5 - 0x5898]
         if                       // unlikely
         

    loc_0x803d1194: // orphan
         t6 = 0x8692 << 16
         t6 = [t6 - 0x5830]
         a1 = 0x8692 << 16
         a1 = [a1 - 0x5d18]
         if                       // unlikely
         at = , unsigned  , a1 < 5

    loc_0x803d129c: // orphan
         at = 0x8691 << 16
         at += t6
         t6 = [at - 0xc90]
         goto t6
         

    loc_0x803d11ac: // orphan
         if                       // likely
         t7 = a1 << 2

    loc_0x803d11b4: // orphan
         at = 0x8691 << 16
         at += t7
         t7 = [at - 0xca4]
         goto t7
         

    loc_0x803d0fb8: // orphan
         v0 -= 0x5bb8
         t7 = [v0 + 0xc]

    loc_0x803d102c: // orphan
         a0 = s3 - a2
         unsigned , hi
         a1 = t2 - a3
         t7 = lo
         
         
         unsigned , hi
         t4 = lo
         t5 = t7 + t4
         at = , t5 < 0x2000
         beql at, 0, 0x803d1070   // unlikely
         t3 = s4 << 2

    loc_0x803d1070: // orphan
         t3 += s4
         t6 = 0x8692 << 16
         t6 -= 0x5bb8
         t3 <<= 2
         v1 = t3 + t6

    loc_0x803d0fc0: // orphan
         lwc1 f8
         a1 = [v0 + 0x10]
         unsigned , hi
         a0 = s5 - a1
         t4 = lo
         v1 = s7 + t4
         lwc1 f16, 8, v1
         lwc1 f6, 4, v1
         unsigned , hi
         mul.s f4, f16, f20
         add.s f10, f6, f8
         lwc1 f6, 4, v0
         trunc.w.s f18, f10
         add.s f8, f4, f6
         t9 = lo
         mfc1 a2, f18
         at = , t9 < 0x240
         trunc.w.s f10, f8
         mfc1 a3, f10
         if                       // likely
         t3 = s4 << 2

    loc_0x803d1090: // orphan
         goto 0x803d1178
         

    loc_0x803d105c: // orphan
         t8 = [sp + 0x7c]
         t9 = t8 + 1
         goto 0x803d0628
         [sp + 0x7c] = t9

    loc_0x803d1014: // orphan
         t3 += s4
         t6 = 0x8692 << 16
         t6 -= 0x5bb8
         t3 <<= 2
         goto 0x803d1084
         v1 = t3 + t6

    loc_0x803d1084: // orphan
         // CODE XREF from fcn.803d1100 @ 0x803d1024
         v0 += 0x14
         bnel v0, v1, 0x803d0fc0  // likely
         t7 = [v0 + 0xc]

    loc_0x803d0fa8: // orphan
         if                       // likely
         

    loc_0x803d1098: // orphan
         if                       // likely
         v0 = 0x8692 << 16

    loc_0x803d10a0: // orphan
         v0 -= 0x5bb8

    loc_0x803d0f54: // orphan
         if                       // unlikely
         

    loc_0x803d0f5c: // orphan
         break 6

    loc_0x803d0f44: // orphan
         break 7

    loc_0x803d09f4: // orphan
         at = 0x8691 << 16
         at += t3
         t3 = [at - 0xcf8]
         goto t3
         

    loc_0x803d06b4: // orphan
         t5 = [t5 - 0x5d18]
         at = , unsigned  , t5 < 5
         if                       // likely
         t5 <<= 2

    loc_0x803d06c4: // orphan
         at = 0x8691 << 16
         at += t5
         t5 = [at - 0xd0c]
         goto t5
         

    loc_0x803d0638: // orphan
         [sp + 0x7c] = 0
         goto 0x803cfba4
         s4 = 0

    loc_0x803d115c: // orphan
         t8 = [sp + 0x7c]
         t9 = t8 + 1
         goto 0x803d0628
         [sp + 0x7c] = t9

}

*/
