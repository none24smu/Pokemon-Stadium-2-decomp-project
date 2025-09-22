/*
 * Function: 0x80403f98
 * Category: math
 */

// Decompiled C code
int fcn.80400480 (int esi, int edx) {
}

/*
// Full radare2 output
int fcn.80400480 (int esi, int edx) {
    loc_0x803ce14c:
        // CODE XREF from fcn.80400480 @ 0x803df5e8
        [s6 + 0x84] = 0
        goto 0x803ce15c
        [s6 + 0x84] = t6
        // chop
    loc_0x803d1ddc: // orphan
             s1 = [sp + 0x1c]
             s2 = [sp + 0x20]
             s3 = [sp + 0x24]
             s4 = [sp + 0x28]
             ret                      // ra
             sp += 0x30

    loc_0x803d239c: // orphan
         a0 = [s0 + 0]            // t9
         a1 = 0
         call 0x80043a0c          // 0x80043a0c(-1, 0x0, 0x8, -1)
         a2 = 0 + 0x64
         a2 = 0x8691 << 16
         a2 = [a2 - 0x61c]        // t9
         a0 = [s0 + 0]            // t9
         a1 = 0
         call 0x8004418c          // 0x8004418c(-1, 0x0, -1, -1)
         a3 = 0 + 0x64
         goto loc.803d3d8c
         t1 = [sp + 0x24]

    loc_0x803d23d0: // orphan
         // CODE XREF from fcn.803df490 @ +0x33c
         s0 -= 0x620
         a0 = [s0 + 0]            // t9
         a1 = 0
         call 0x80043a0c          // 0x80043a0c(-1, 0x0, 0x8, -1)
         a2 = 0 + 0x52
         a2 = 0x8691 << 16

    loc_0x803d23e8: // orphan
         a2 = [a2 - 0x61c]        // arg3 // t9
         a0 = [s0 + 0]            // t9
         a1 = 0
         // CODE XREF from fcn.803df490 @ +0x340
         call 0x8004418c          // 0x8004418c(-1, 0x0, -1, -1)
         a3 = 0 + 0x52
         goto loc.803d3d8c
         t1 = [sp + 0x24]

    loc_0x803d35b8: // orphan
         t1 = [sp + 0x24]

    loc_0x803d35bc: // orphan
         s0 -= 0x620
         a0 = [s0 + 0]            // t9
         a1 = 0
         call 0x80043a0c          // 0x80043a0c(-1, 0x0, 0x8, -1)
         a2 = 0 + 0x64
         a2 = 0x8691 << 16
         // CODE XREF from fcn.803df490 @ +0x400
         a2 = [a2 - 0x61c]        // t9
         a0 = [s0 + 0]            // t9
         a1 = 0
         call 0x8004418c          // 0x8004418c(-1, 0x0, -1, -1)
         a3 = 0 + 0x64

    loc_0x803d35e8: // orphan
         // CODE XREF from fcn.803df490 @ +0x404
         a0 = [s0 + 0]            // t9
         a1 = 0 + 1               // lo
         call 0x80043a0c          // 0x80043a0c(-1, 0x1, 0x8, -1)
         a2 = 0 + 0x65
         a2 = 0x8691 << 16
         a2 = [a2 - 0x61c]        // t9
         a0 = [s0 + 0]            // t9
         a1 = 0 + 1               // lo
         call 0x8004418c          // 0x8004418c(-1, 0x1, -1, -1)
         a3 = 0 + 0x65
         goto loc.803d3d8c
         t1 = [sp + 0x24]

    loc_0x803d47f4: // orphan
         call 0x87f0a688          // 0x87f0a688(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 0x11
         a0 = 0x8692 << 16
         goto 0x803d5800          // fcn.803d438c+0x1474
         a0 = [a0 - 0x5d18]       // t9

    loc_0x803d4e00: // orphan
         t9 = [at - 0x9c4]
         goto t9
         

    loc_0x803d5374: // orphan
         goto 0x803d5804          // fcn.803d438c+0x1478
         at = , unsigned  , a0 < 5 // arg1

    loc_0x803d53a8: // orphan
         call 0x87f0a688          // 0x87f0a688(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 8
         a0 = 0x8692 << 16
         goto 0x803d5800          // fcn.803d438c+0x1474
         a0 = [a0 - 0x5d18]       // t9

    loc_0x803d53c0: // orphan
         a1 = 0x4e4d << 16
         a1 |= 0x3243             // arg2
         a0 = [s0 + 0]            // t9
         call 0x87f0a688          // 0x87f0a688(-1, 0x4e4d3243, 0x8, -1)
         a2 = 0 + 9
         // CODE XREF from fcn.803df490 @ +0x520
         a1 = 0x4e4d << 16
         a1 |= 0x3343
         a0 = [s0 + 0]            // t9
         call 0x87f0a688          // 0x87f0a688(-1, 0x4e4d3343, 0x9, -1)
         a2 = 0 + 8
         a0 = 0x8692 << 16
         goto 0x803d5800          // fcn.803d438c+0x1474
         a0 = [a0 - 0x5d18]       // t9

    loc_0x803d5734: // orphan
         a2 = 0 + 1               // arg3 // lo
         a1 = 0x4e4d << 16
         a1 |= 0x3343             // arg2
         a0 = [s0 + 0]            // t9
         call 0x87f0a688          // 0x87f0a688(-1, 0x4e4d3343, 0x1, -1)
         a2 = 0 + 0xa
         a0 = 0x8692 << 16
         goto 0x803d5800          // fcn.803d438c+0x1474
         a0 = [a0 - 0x5d18]       // t9

    loc_0x803d5790: // orphan
         a1 |= 0x3143             // arg2
         call 0x87f0a688          // 0x87f0a688(-1, 0x442f71dcfe11754b, 0x8, -1)
         a2 = 0 + 5
         a0 = 0x8692 << 16
         goto 0x803d5800          // fcn.803d438c+0x1474
         a0 = [a0 - 0x5d18]       // t9

    loc_0x803d5888: // orphan
         t7 += 0x4e78
         [v1 + 4] = t7
         [v1 + 0] = s0
         v1 = [t0 + 0]            // t9
         t3 = 0xe6f0 << 16
         t3 |= 0xffff
         t8 = v1 + 8
         [t0 + 0] = t8
         t9 = 0xfa00 << 16
         [v1 + 0] = t9
         // CODE XREF from fcn.803df490 @ +0x55c
         [v1 + 4] = t3
         v1 = [t0 + 0]
         t6 = 0 + 0x50ff
         t5 = 0xfb00 << 16
         t4 = v1 + 8
         [t0 + 0] = t4
         [v1 + 4] = t6
         [v1 + 0] = t5
         v1 = [t0 + 0]
         t9 = 0x55fe << 16
         t8 = 0xfc30 << 16
         t7 = v1 + 8
         [t0 + 0] = t7
         t8 |= 0xfe61
         t9 |= 0xf379
         a0 = 0 + 0x1a0           // arg1
         a1 = 0 + 0x12            // arg2
         [v1 + 4] = t9
         call 0x8004c990          // 0x8004c990(0x1a0, 0x12, 0x8, -1)
         [v1 + 0] = t8
         t3 = [sp + 0x9c]

    loc_0x803d5904: // orphan
         // CODE XREF from fcn.803df490 @ +0x560
         at = 0x4028 << 16
         mtc1 at, f9

    loc_0x803d590c: // orphan
         mtc1 t3, f4
         mtc1 0, f8
         at = 0x4038 << 16
         cvt.d.w f6, f4
         mtc1 at, f17
         mtc1 0, f16
         at = 0x8691 << 16
         ldc1 f18, -0x928, at
         sub.d f10, f6, f8
         at = 0x3ff0 << 16
         mtc1 at, f5
         mtc1 0, f4
         div.d f0, f10, f16
         at = 0x8691 << 16
         ldc1 f10, -0x920, at
         a1 = 0 + 0x4c            // arg2
         a2 = v0                  // s4
         a3 = 0
         [sp + 0x10] = 0
         sub.d f6, f4, f0
         mul.d f8, f18, f6
         
         mul.d f16, f0, f10
         add.d f4, f16, f8
         trunc.w.d f18, f4
         mfc1 a0, f18
         call 0x8004d19c          // 0x8004d19c(-1, 0x4c, 0xff, 0x0)
         
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]            // t9
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t5 = v1 + 8
         [t0 + 0] = t5
         [v1 + 4] = t6
         goto 0x803d5bb4          // fcn.803d438c+0x1828
         [v1 + 0] = s0

    loc_0x803d601c: // orphan
         if                       // fcn.803d5fdc+0x94 // unlikely
         t8 <<= 2

    loc_0x803d6024: // orphan
         at = 0x8691 << 16
         at += t8
         t8 = [at - 0x908]        // t9
         goto t8                  // t9
         

    loc_0x803d6618: // orphan
         if                       // unlikely
         

    loc_0x803d6620: // orphan
         t1 = [t1 - 0x5cec]       // t9
         at = 0x8692 << 16

    loc_0x803d6628: // orphan
         t2 = t1 + 2

    loc_0x803d662c: // orphan
         [at - 0x5cec] = t2

    loc_0x803d6630: // orphan
         // CODE XREF from fcn.803ae9d8 @ 0x803d65c0
         // CODE XREF from fcn.803df490 @ +0x5fc
         t8 = 0x8692 << 16
         t8 = [t8 - 0x52a8]       // t9
         t6 = 0 + 5
         [t8 + 0] = t6

    loc_0x803d6bd8: // orphan
         if                       // unlikely
         t6 <<= 2

    loc_0x803d8704: // orphan
         // CODE XREF from fcn.803d8380 @ +0x308
         t2 = [v1 + 0x10]         // t9
         beql t1, t2, 0x803d898c  // fcn.803c5568+0x13424 // unlikely
         s2 += 1

    loc_0x803d8710: // orphan
         t4 = [v1 + 0]            // s0
         at = , t4 < 4
         bnel at, 0, 0x803d898c   // fcn.803c5568+0x13424 // unlikely
         s2 += 1

    loc_0x803d8720: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t5 = [s0 + 0x344]        // t9
         div 0, v0, t5
         t6 = hi
         if                       // likely
         

    loc_0x803d873c: // orphan
         break 7

    loc_0x803d8740: // orphan
         // CODE XREF from fcn.80400480 @ 0x803d8734
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d874c: // orphan
         if                       // likely
         

    loc_0x803d8754: // orphan
         break 6

    loc_0x803d8758: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803d8744, 0x803d874c
         bnel t6, 0, 0x803d898c   // fcn.803c5568+0x13424 // likely
         s2 += 1

    loc_0x803d8760: // orphan
         t7 = , unsigned  halfword [s1 + 8]
         t8 = t7 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t8

    loc_0x803d8f84: // orphan
         a2 = sp + 0x24           // arg3
         call 0x87f0a6c8          // 0x87f0a6c8(-1, 0x442f71dcfe116408, 0x178024, -1)
         a3 = sp + 0x20
         ra = [sp + 0x14]

    loc_0x803d97cc: // orphan
         v0 = [a2 + 0x70]         // arg3 // t9
         v1 = 0x8009 << 16
         v1 = [v1 + 0x491c]       // t9
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = [v1 + 0x14]         // t9

    loc_0x803d97e4: // orphan
         if                       // unlikely
         t7 = a0 << 2             // arg1

    loc_0x803d97ec: // orphan
         at = 0 + 2
         if                       // fcn.803d9cec+0x734 // unlikely
         

    loc_0x803d97f8: // orphan
         goto 0x803da2d8          // fcn.803d9cec+0x5ec
         

    loc_0x803d9800: // orphan
         at = , unsigned  , a0 < 0xc // arg1
         if                       // fcn.803d9cec+0x5ec // likely
         t6 = a0 << 2             // arg1

    loc_0x803d980c: // orphan
         at = 0x8691 << 16
         at += t6
         t6 = [at - 0x764]        // t9
         goto t6                  // t9
         

    loc_0x803d9b58: // orphan
         v0 = [a2 + 0x30]         // arg3 // t9
         at = 0 + 0x64
         a0 = 0 + 0x19f           // arg1
         div 0, v0, at
         v0 = lo
         t7 = v0 << 2
         if                       // fcn.803d9cec+0x734 // unlikely
         a1 = 0x8691 << 16

    loc_0x803d9b78: // orphan
         a1 += t7                 // arg2 // t0
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a1 - 0x106c]       // t9
         a2 = 0x8692 << 16
         [sp + 0x44] = v0

    loc_0x803d9b8c: // orphan
         goto 0x803da2d8          // fcn.803d9cec+0x5ec
         a2 -= 0x5d60

    loc_0x803d9ba4: // orphan
         t8 = lo
         a0 = 0 + 0x19f           // arg1
         bnel t8, 0, 0x803d9c14   // likely
         // CODE XREF from fcn.83dd5484 @ +0x28
         v1 = 0 + 0xa

    loc_0x803d9bb4: // orphan
         div 0, v0, v1
         t9 = lo
         if                       // likely
         

    loc_0x803d9bc4: // orphan
         break 7

    loc_0x803d9bc8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d9bd4: // orphan
         if                       // likely
         

    loc_0x803d9bdc: // orphan
         break 6

    loc_0x803d9be0: // orphan
         div 0, t9, v1
         t0 = hi
         if                       // likely
         

    loc_0x803d9bf0: // orphan
         break 7

    loc_0x803d9bf4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d9c00: // orphan
         if                       // likely
         

    loc_0x803d9c0c: // orphan
         if                       // fcn.803d9cec+0x734 // unlikely
         v1 = 0 + 0xa

    loc_0x803d9c14: // orphan
         div 0, v0, v1
         t1 = lo
         a1 = 0x8691 << 16
         if                       // likely
         

    loc_0x803d9c28: // orphan
         break 7

    loc_0x803d9c2c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d9c38: // orphan
         if                       // likely
         

    loc_0x803d9c40: // orphan
         break 6

    loc_0x803d9c44: // orphan
         div 0, t1, v1
         t2 = hi
         t3 = t2 << 2

    loc_0x803d9e90: // orphan
         at = , unsigned  , a0 < 0xc // arg1
         if                       // fcn.803d9cec+0x5ec // likely
         at = 0x8691 << 16

    loc_0x803da014: // orphan
         v0 = hi
         t6 = v0 << 2
         if                       // likely
         

    loc_0x803da024: // orphan
         break 7

    loc_0x803da028: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803da034: // orphan
         if                       // likely
         

    loc_0x803da040: // orphan
         a1 += t6                 // arg2
         if                       // fcn.803d9cec+0x734 // unlikely
         

    loc_0x803da778: // orphan
         v1 = [a2 + 0]            // arg3
         t2 |= 0xf0ff
         t9 = 0xfa00 << 16
         t8 = v1 + 8              // a2
         [a2 + 0] = t8            // arg3
         [v1 + 4] = t2
         [v1 + 0] = t9
         v1 = [a2 + 0]            // arg3
         t5 = 0x4600 << 16
         t5 |= 0x28ff
         t3 = v1 + 8
         [a2 + 0] = t3            // arg3
         t4 = 0xfb00 << 16
         [v1 + 0] = t4
         [v1 + 4] = t5
         v1 = [a2 + 0]            // arg3
         t8 = 0x5ffe << 16
         t7 = 0xfc30 << 16
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         t7 |= 0xffff
         t8 |= 0xf238
         a0 = 0 + 0x1a0           // arg1
         a1 = 0 + 0x13            // arg2
         [v1 + 4] = t8
         call 0x8004c990          // 0x8004c990(0x1a0, 0x13, 0x8, -1)
         [v1 + 0] = t7
         a2 = 0x800d << 16
         a2 += 0x510
         v1 = [a2 + 0]
         t2 = 0xdb06 << 16
         t2 |= 0x3c
         t9 = v1 + 8
         [a2 + 0] = t9

    loc_0x803da800: // orphan
         [v1 + 0] = t2
         a0 = v0                  // s4
         call 0x8004ca60          // 0x8004ca60(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = v1
         a1 = [sp + 0x18]         // v1
         a2 = 0x800d << 16
         a2 += 0x510
         [a1 + 4] = v0
         v1 = [a2 + 0]
         t4 = 0xde00 << 16
         t5 = 0x8691 << 16
         t3 = v1 + 8
         [a2 + 0] = t3
         [v1 + 0] = t4
         t5 = [t5 + 0x1440]       // t9
         call 0x8003cd84          // 0x8003cd84(0xff, 0x220, 0x800d0510, -1)
         [v1 + 4] = t5
         ra = [sp + 0x14]
         sp += 0x30
         ret
         

    loc_0x803da8ac: // orphan
         bc1t fcc5, 0x803c68b0

    loc_0x803da948: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x803da950: // orphan
         

    loc_0x803da954: // orphan
         
         
         
         if                       // unlikely
         t1 = s0 + 0

    loc_0x803da964: // orphan
         t1 = s0 + 0

    loc_0x803da968: // orphan
         
         goto 0x80000000
         s0 = halfword [s4 - 0x2070]

    loc_0x803da9e4: // orphan
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         
         movf 0, 0, fcc0
         movf 0, 0, fcc0
         
         
         
         
         
         
         lsa 0, 0, 0
         lsa 0, 0, 0
         lsa 0, 0, 0
         lsa 0, 0, 0
         
         
         
         
         
         
         movf 0, 0, fcc0
         movf 0, 0, fcc0
         
         
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         
         movf 0, 0, fcc0
         movf 0, 0, fcc0
         
         
         
         
         
         
         lsa 0, 0, 0
         lsa 0, 0, 0
         lsa 0, 0, 0
         lsa 0, 0, 0
         
         
         
         
         
         
         movf 0, 0, fcc0

    loc_0x803daae0: // orphan
         movf 0, 0, fcc0
         
         
         
         movf 0, 0, fcc0
         
         
         
         movf 0, 0, fcc0
         
         
         
         movf 0, 0, fcc0
         
         
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0
         
         
         
         
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0
         
         
         
         lsa 0, 0, 0
         
         movf 0, 0, fcc0

    loc_0x803dbee4: // orphan
         s0 = halfword [s4 - 0x5bbc]
         s0 = halfword [s4 - 0x5bbc]
         s0 = halfword [s4 - 0x5bbc]
         s0 = halfword [s4 - 0x5b8c]
         

    loc_0x803dc470: // orphan
         

    loc_0x803dc474: // orphan
         if                       // fcn.803df490+0x128 // unlikely
         if                       // unlikely

    loc_0x803dc480: // orphan
         if                       // unlikely
         

    loc_0x803dc488: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc498: // orphan
         if                       // unlikely
         

    loc_0x803dc52c: // orphan
         if                       // unlikely
         

    loc_0x803dc534: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc540: // orphan
         if                       // unlikely
         

    loc_0x803dc5f8: // orphan
         if                       // unlikely
         

    loc_0x803dc600: // orphan
         if                       // fcn.803e049c+0x48 // unlikely
         

    loc_0x803dd414: // orphan
         if                       // fcn.803dd03c+0xe0dc // unlikely
         if                       // fcn.803dd03c+0xe140 // unlikely

    loc_0x803dd420: // orphan
         if                       // fcn.803dd03c+0xe1c8 // unlikely
         if                       // fcn.803dd03c+0xe1fc // unlikely

    loc_0x803dd42c: // orphan
         if                       // fcn.803dd03c+0xe294 // unlikely
         if                       // unlikely

    loc_0x803dd438: // orphan
         if                       // unlikely
         if                       // fcn.803dd03c+0xe3c4 // unlikely

    loc_0x803dd6f0: // orphan
         if                       // fcn.803f0074+0x150 // unlikely
         if                       // unlikely

    loc_0x803dd6fc: // orphan
         if                       // fcn.803c6038+0x2a1f8 // unlikely
         if                       // unlikely

    loc_0x803dd708: // orphan
         if                       // fcn.803c6038+0x2a284 // unlikely
         if                       // unlikely

    loc_0x803ddcf0: // orphan
         if                       // fcn.803f04b0+0x6194 // unlikely
         

    loc_0x803ddcf8: // orphan
         if                       // fcn.803f04b0+0x602c // unlikely
         if                       // fcn.803f04b0+0x6210 // unlikely

    loc_0x803ddd5c: // orphan
         

    loc_0x803ddd60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de188: // orphan
         if                       // unlikely
         

    loc_0x803de190: // orphan
         if                       // fcn.803f97bc+0x58 // unlikely
         if                       // unlikely

    loc_0x803de19c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803deb44: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x803deb68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803deb74: // orphan
         if                       // unlikely
         

    loc_0x803def60: // orphan
         if                       // fcn.803c6bb4+0x10 // unlikely
         

    loc_0x803df178: // orphan
         if                       // fcn.803c8c88+0x4 // unlikely
         if                       // fcn.803c8cb8+0x8 // unlikely

    loc_0x803df184: // orphan
         if                       // fcn.80388000+0x40cf8 // unlikely
         if                       // fcn.80388000+0x40d0c // unlikely

    loc_0x803df1e4: // orphan
         if                       // fcn.803c5154+0x3e24 // unlikely
         if                       // fcn.803c5154+0x3e38 // unlikely

    loc_0x803df5cc: // orphan
         

    loc_0x803df5d0: // orphan
         
         if                       // fcn.803dc3a4-0xe39c // unlikely
         if                       // fcn.803dc3a4-0xe388 // unlikely

    loc_0x803df5e0: // orphan
         
         if                       // fcn.803dc3a4-0xe26c // unlikely
         if                       // unlikely

    loc_0x803df5f0: // orphan
         

    loc_0x803df5f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803df694: // orphan
         if                       // fcn.803ae9d8+0x222a0 // unlikely
         if                       // unlikely

    loc_0x803df9c8: // orphan
         if                       // fcn.803ae9d8+0x26bb4 // unlikely
         

    loc_0x803e44c8: // orphan
         v0 = 0 + 1               // lo

    loc_0x803e44ec: // orphan
         t6 <<= 2
         v1 = a3 + t6             // arg4
         a1 = [v1 + 0x108]        // t9
         v0 = [v1 + 0x10c]        // t9
         t0 = a0 << 2             // arg1

    loc_0x803e4688: // orphan
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
         a1 = [v0 + 0]            // t9

    loc_0x803e4838: // orphan
         if                       // unlikely
         a0 = 0 | 0x8f02          // arg1

    loc_0x803e4b94: // orphan
         if                       // likely
         

    loc_0x803e4b9c: // orphan
         break 6

    loc_0x803e4ba0: // orphan
         if                       // likely
         t9 = t8 & 1              // lo

    loc_0x803e4ba8: // orphan
         if                       // unlikely
         

    loc_0x803e4bb0: // orphan
         t9 -= 2

    loc_0x803e4bb4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = t9
         at = 0 + 0x61
         div 0, v0, at
         t0 = hi
         at = , t0 < 0x3d         // lo
         if                       // fcn.803c507c+0x1fff8 // unlikely
         v0 = 0x86a4 << 16

    loc_0x803e4bd4: // orphan
         v0 += 0x43f0
         a0 = [v0 + 0x1b0]        // t9
         at = 0 + 1               // lo
         beql a0, 0, 0x803e4c0c   // unlikely
         t1 = [v0 + 0xe60]        // t9

    loc_0x803e4be8: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803e4bf0: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803e4bf8: // orphan
         beql a0, at, 0x803e4c60  // unlikely
         t5 = [v0 + 0xe60]        // t9

    loc_0x803e4c00: // orphan
         goto 0x803e4c6c
         

    loc_0x803e4c0c: // orphan
         at = , t1 < 2
         if                       // unlikely
         

    loc_0x803e4c18: // orphan
         goto 0x803e5078          // fcn.803c507c+0x1fffc
         ra = [sp + 0x14]

    loc_0x803e4c20: // orphan
         t2 = [v0 + 0x1b4]        // t9
         beql t2, 0, 0x803e4c48   // unlikely
         t4 = [v0 + 0xe60]        // t9

    loc_0x803e4c2c: // orphan
         t3 = [v0 + 0xe60]        // t9
         at = , t3 < 3
         if                       // unlikely
         

    loc_0x803e4c3c: // orphan
         goto 0x803e5078          // fcn.803c507c+0x1fffc
         ra = [sp + 0x14]

    loc_0x803e4c48: // orphan
         at = , t4 < 2
         if                       // unlikely
         

    loc_0x803e4c54: // orphan
         goto 0x803e5078          // fcn.803c507c+0x1fffc
         ra = [sp + 0x14]

    loc_0x803e4c5c: // orphan
         t5 = [v0 + 0xe60]        // t9

    loc_0x803e4c60: // orphan
         at = , t5 < 3
         beql at, 0, 0x803e5078   // fcn.803c507c+0x1fffc // likely
         ra = [sp + 0x14]

    loc_0x803e4c6c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803e4c00
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e4c70: // orphan
         
         if                       // likely
         v1 = v0 & 3

    loc_0x803e4c7c: // orphan
         if                       // unlikely
         

    loc_0x803e4c84: // orphan
         v1 -= 4

    loc_0x803e4c88: // orphan
         t6 = v1 << 2
         t7 = 0x86a4 << 16
         t7 += t6
         t7 = [t7 + 0x5ad0]       // t9

    loc_0x803e4c98: // orphan
         a0 = v1
         bnel t7, 0, 0x803e5078   // fcn.803c507c+0x1fffc // unlikely
         ra = [sp + 0x14]

    loc_0x803e4ca4: // orphan
         call 0x86a04c04          // 0x86a04c04(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = v1
         if                       // fcn.803c507c+0x1fc58 // unlikely
         a2 = [sp + 0x30]         // v1

    loc_0x803e4cb4: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t8 = 0 + 1               // lo

    loc_0x803e4cbc: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t8 = 0 + 1               // lo

    loc_0x803e4cc0: // orphan
         at = 0 + 2
         beql v0, at, 0x803e5078  // fcn.803c507c+0x1fffc // unlikely
         ra = [sp + 0x14]

    loc_0x803e4ccc: // orphan
         goto 0x803e4ce0          // fcn.803c507c+0x1fc64
         

    loc_0x803e4cdc: // orphan
         [sp + 0x2c] = t8

    loc_0x803eb334: // orphan
         v0 += t4
         v0 = [v0 + 0x650c]       // t9
         t5 = , unsigned  halfword [v0 + 0]
         mtc1 t5, f4
         if                       // likely
         cvt.s.w f10, f4

    loc_0x803ef944: // orphan
         
         
         
         
         
         
         

    loc_0x803ef980: // orphan
         
         
         

    loc_0x803ef9d4: // orphan
         
         

    loc_0x803efa2c: // orphan
         
         
         
         ll a2, 0x38e3, at        // t9
         t8 = [s1 - 0x1c72]       // t9

    loc_0x803efa58: // orphan
         
         

    loc_0x803efa60: // orphan
         
         

    loc_0x803efb10: // orphan
         
         
         
         
         

    loc_0x803efb24: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x803efd14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efd20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efd2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efd38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efd44: // orphan
         
         
         
         
         
         
         
         if                       // fcn.803f03f0+0x44 // unlikely
         if                       // fcn.803f03f0+0x88 // unlikely

    loc_0x803efd6c: // orphan
         if                       // fcn.803f03f0+0x80 // unlikely
         if                       // unlikely

    loc_0x803efd78: // orphan
         if                       // unlikely
         if                       // fcn.803f04b0+0x50 // unlikely

    loc_0x803efd84: // orphan
         if                       // fcn.803f04b0+0xc8 // unlikely
         if                       // fcn.803f04b0+0xdc // unlikely

    loc_0x803efd90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efd9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efda8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803efdb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efdc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efdd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efddc: // orphan
         // CODE XREF from fcn.803efbc0 @ +0x148
         if                       // unlikely
         if                       // unlikely

    loc_0x803efde8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efdf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efdfc: // orphan
         if                       // unlikely

    loc_0x803efe00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe08: // orphan
         if                       // unlikely

    loc_0x803efe0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe14: // orphan
         

    loc_0x803efe18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe24: // orphan
         if                       // unlikely
         

    loc_0x803efe2c: // orphan
         
         
         
         // CODE XREF from fcn.80400480 @ 0x803efd14
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe44: // orphan
         if                       // unlikely
         

    loc_0x803efe4c: // orphan
         
         

    loc_0x803efe54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe5c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd18
         

    loc_0x803efe60: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe70: // orphan
         
         // CODE XREF from fcn.80400480 @ 0x803efd20
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe88: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd24
         if                       // unlikely

    loc_0x803efe8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efe94: // orphan
         if                       // unlikely

    loc_0x803efe98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efea0: // orphan
         if                       // unlikely

    loc_0x803efea4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efeac: // orphan
         if                       // unlikely

    loc_0x803efeb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efeb8: // orphan
         if                       // unlikely

    loc_0x803efebc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efd2c
         if                       // unlikely

    loc_0x803efec4: // orphan
         if                       // unlikely

    loc_0x803efec8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efed0: // orphan
         if                       // unlikely

    loc_0x803efed4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd30
         if                       // unlikely
         if                       // unlikely

    loc_0x803efedc: // orphan
         if                       // unlikely
         

    loc_0x803efee0: // orphan
         

    loc_0x803efee4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803efef4: // orphan
         if                       // fcn.803f1470+0xa8 // unlikely
         // CODE XREF from fcn.803efbc0 @ +0x174
         if                       // fcn.803f1470+0xcc // unlikely

    loc_0x803eff00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff0c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd38
         if                       // unlikely
         

    loc_0x803eff14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff20: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff58: // orphan
         if                       // unlikely
         

    loc_0x803eff60: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd3c
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff68: // orphan
         if                       // unlikely

    loc_0x803eff6c: // orphan
         if                       // unlikely
         

    loc_0x803eff74: // orphan
         // CODE XREF from fcn.803efbc0 @ +0x180
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803eff98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effa4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effe0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803effec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803efff8: // orphan
         if                       // fcn.803c6038+0x2bc94 // unlikely
         if                       // unlikely

    loc_0x803f0004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0010: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f001c: // orphan
         
         

    loc_0x803f0024: // orphan
         if                       // unlikely
         if                       // fcn.803c6038+0x2be04 // unlikely

    loc_0x803f01e8: // orphan
         if                       // fcn.803dd83c+0x156a0 // unlikely
         if                       // fcn.803dd83c+0x156b4 // unlikely

    loc_0x803f01f4: // orphan
         if                       // fcn.803dd83c+0x156fc // unlikely
         if                       // fcn.803dd83c+0x15710 // unlikely

    loc_0x803f0254: // orphan
         if                       // fcn.803dd83c+0x15bbc // unlikely
         if                       // fcn.803dd83c+0x15bd0 // unlikely

    loc_0x803f034c: // orphan
         if                       // fcn.803dc1fc+0x18004 // unlikely
         if                       // unlikely

    loc_0x803f0358: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0364: // orphan
         

    loc_0x803f0368: // orphan
         
         if                       // fcn.803f43c0-0x60 // unlikely
         // CALL XREF from fcn.83f1a568 @ +0xbe0
         if                       // fcn.803f43c0-0x4c // unlikely

    loc_0x803f0378: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f03a0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f04d4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efd70
         if                       // unlikely

    loc_0x803f04e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f04ec: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efd78
         

    loc_0x803f05a8: // orphan
         if                       // fcn.803f04b0+0x585c // unlikely
         if                       // unlikely

    loc_0x803f05b4: // orphan
         if                       // fcn.803f5dbc-0x44 // unlikely
         if                       // fcn.803f5dbc-0x30 // unlikely

    loc_0x803f05c0: // orphan
         if                       // fcn.803f5dbc+0x18 // unlikely
         if                       // fcn.803f5dbc+0x4c // unlikely

    loc_0x803f05cc: // orphan
         if                       // fcn.803f5dbc+0xb4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efd9c
         if                       // fcn.803f5dbc+0xd8 // unlikely

    loc_0x803f05d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efd94
         if                       // fcn.803f5dbc+0x100 // unlikely
         if                       // fcn.803f5f7c-0x6c // unlikely

    loc_0x803f05e4: // orphan
         if                       // fcn.803f5f7c-0x54 // unlikely
         if                       // fcn.803f5dbc+0x80 // unlikely

    loc_0x803f05f0: // orphan
         

    loc_0x803f05f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0604: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0610: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f061c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0628: // orphan
         if                       // unlikely
         

    loc_0x803f0630: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f063c: // orphan
         if                       // unlikely
         

    loc_0x803f0644: // orphan
         
         
         
         
         if                       // fcn.803f04b0+0x6048 // unlikely
         if                       // fcn.803f04b0+0x605c // unlikely

    loc_0x803f0660: // orphan
         if                       // fcn.803f04b0+0x60e4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efda0
         

    loc_0x803f0664: // orphan
         if                       // fcn.803f04b0+0x60e4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efda0
         

    loc_0x803f0668: // orphan
         
         
         
         if                       // fcn.803f04b0+0x62a8 // unlikely
         if                       // fcn.803f04b0+0x62cc // unlikely

    loc_0x803f0680: // orphan
         
         
         // CODE XREF from fcn.803efbc0 @ +0x1e4
         if                       // fcn.803f04b0+0x632c // unlikely
         if                       // fcn.803f04b0+0x6340 // unlikely

    loc_0x803f0694: // orphan
         if                       // unlikely
         

    loc_0x803f069c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdac
         if                       // unlikely

    loc_0x803f06a8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f06b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f06c4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdb0
         if                       // unlikely
         if                       // unlikely

    loc_0x803f06d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f06dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdb8
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f06ec: // orphan
         if                       // unlikely
         

    loc_0x803f06f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0700: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdbc
         if                       // unlikely
         if                       // unlikely

    loc_0x803f070c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0718: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdc4
         
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdc8
         if                       // unlikely

    loc_0x803f073c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdc4
         
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdc8
         if                       // unlikely

    loc_0x803f0744: // orphan
         if                       // unlikely
         

    loc_0x803f0748: // orphan
         if                       // unlikely
         

    loc_0x803f074c: // orphan
         
         
         // CODE XREF from fcn.80400480 @ 0x803efdd0
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0764: // orphan
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdd4
         if                       // unlikely

    loc_0x803f0778: // orphan
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdd4
         if                       // unlikely

    loc_0x803f0780: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f078c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efddc
         if                       // unlikely

    loc_0x803f0798: // orphan
         if                       // fcn.803dc1fc+0x1b5a0 // unlikely
         if                       // unlikely

    loc_0x803f07a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f07b0: // orphan
         if                       // fcn.803f7830+0x4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efde0
         if                       // fcn.803f7830+0x18 // unlikely

    loc_0x803f07b4: // orphan
         if                       // fcn.803f7830+0x4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efde0
         if                       // fcn.803f7830+0x18 // unlikely

    loc_0x803f07bc: // orphan
         if                       // fcn.803f7830+0x60 // unlikely
         

    loc_0x803f07c0: // orphan
         if                       // fcn.803f7830+0x60 // unlikely
         

    loc_0x803f07c4: // orphan
         
         if                       // fcn.803dc1fc+0x1b7c0 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efde8
         if                       // unlikely

    loc_0x803f07d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f07e0: // orphan
         if                       // fcn.803dc1fc+0x1b978 // unlikely
         if                       // unlikely

    loc_0x803f07ec: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdec
         

    loc_0x803f07f0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdec
         

    loc_0x803f07f4: // orphan
         
         
         
         if                       // fcn.803f7c80+0x104 // unlikely
         if                       // unlikely

    loc_0x803f080c: // orphan
         if                       // fcn.803f7c80+0x100 // unlikely
         

    loc_0x803f0814: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0820: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efdfc
         if                       // unlikely
         

    loc_0x803f0828: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdf8
         if                       // unlikely

    loc_0x803f082c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efdf8
         if                       // unlikely

    loc_0x803f0834: // orphan
         if                       // unlikely
         

    loc_0x803f0838: // orphan
         if                       // unlikely
         

    loc_0x803f083c: // orphan
         
         

    loc_0x803f0844: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe00
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.803f7ffc+0x100 // unlikely
         if                       // unlikely

    loc_0x803f0884: // orphan
         if                       // unlikely
         

    loc_0x803f088c: // orphan
         
         
         

    loc_0x803f0898: // orphan
         

    loc_0x803f0918: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe04
         if                       // fcn.803f88a8+0xc4 // unlikely
         if                       // fcn.803f88a8+0xd8 // unlikely

    loc_0x803f0924: // orphan
         
         
         

    loc_0x803f0930: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe0c
         if                       // fcn.803dc1fc+0x1c958 // unlikely
         if                       // unlikely

    loc_0x803f093c: // orphan
         if                       // unlikely
         

    loc_0x803f0944: // orphan
         
         
         
         if                       // fcn.803f8d44+0xb0 // unlikely
         if                       // fcn.803f8d44+0xc4 // unlikely

    loc_0x803f095c: // orphan
         if                       // fcn.803f8e44+0x7c // unlikely
         

    loc_0x803f0964: // orphan
         
         
         
         if                       // fcn.803f8efc+0x198 // unlikely
         if                       // fcn.803f8efc+0x1ac // unlikely

    loc_0x803f097c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe08
         if                       // fcn.803f8efc+0x264 // unlikely
         

    loc_0x803f0984: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f099c: // orphan
         if                       // unlikely
         

    loc_0x803f09a4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f09bc: // orphan
         if                       // unlikely
         

    loc_0x803f09c4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f09d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe10
         if                       // fcn.803f97bc+0x8c // unlikely

    loc_0x803f09d8: // orphan
         if                       // fcn.803f97bc+0xa0 // unlikely
         

    loc_0x803f09e0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f09f4: // orphan
         if                       // unlikely
         

    loc_0x803f09fc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a10: // orphan
         if                       // unlikely
         

    loc_0x803f0a18: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a2c: // orphan
         if                       // unlikely
         

    loc_0x803f0a34: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a48: // orphan
         if                       // unlikely
         if                       // fcn.803f8efc+0x1154 // unlikely

    loc_0x803f0a54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a78: // orphan
         if                       // fcn.803dc1fc+0x1e120 // unlikely
         if                       // unlikely

    loc_0x803f0a84: // orphan
         if                       // unlikely
         

    loc_0x803f0a8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0a98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0aa4: // orphan
         if                       // fcn.803faaf8-0x4d0 // unlikely
         if                       // unlikely

    loc_0x803f0ab0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0abc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ad4: // orphan
         
         if                       // fcn.803dc1fc+0x1eaf0 // unlikely
         if                       // unlikely

    loc_0x803f0ae4: // orphan
         
         
         if                       // fcn.803dc1fc+0x1ec74 // unlikely
         if                       // unlikely

    loc_0x803f0af8: // orphan
         if                       // unlikely
         

    loc_0x803f0b00: // orphan
         
         
         
         if                       // fcn.803dc1fc+0x1f034 // unlikely
         if                       // unlikely

    loc_0x803f0b18: // orphan
         if                       // fcn.803dc1fc+0x1f120 // unlikely
         if                       // unlikely

    loc_0x803f0b24: // orphan
         if                       // fcn.803fb3cc+0x3c // unlikely
         if                       // fcn.803fb3cc+0x50 // unlikely

    loc_0x803f0b30: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0b60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0b6c: // orphan
         
         
         
         
         
         
         if                       // fcn.803fbcfc+0x27c // unlikely
         if                       // fcn.803fbcfc+0x290 // unlikely

    loc_0x803f0b90: // orphan
         if                       // fcn.803fc004 // unlikely
         

    loc_0x803f0b98: // orphan
         
         
         
         
         

    loc_0x803f0bac: // orphan
         if                       // unlikely
         if                       // fcn.803fc07c+0x1d8 // unlikely

    loc_0x803f0bb8: // orphan
         if                       // fcn.803fc2b0+0x8c // unlikely
         

    loc_0x803f0bf8: // orphan
         
         
         
         
         
         

    loc_0x803f0c10: // orphan
         
         
         
         
         
         if                       // fcn.803fc3c4+0x884 // unlikely
         if                       // fcn.803fc3c4+0x8d8 // unlikely

    loc_0x803f0c30: // orphan
         if                       // fcn.803fc3c4+0x8f0 // unlikely
         if                       // fcn.803fc3c4+0x904 // unlikely

    loc_0x803f0c3c: // orphan
         
         if                       // fcn.803fc3c4+0x990 // unlikely
         if                       // fcn.803fc3c4+0x9c4 // unlikely

    loc_0x803f0c4c: // orphan
         if                       // fcn.803fc3c4+0x9bc // unlikely
         

    loc_0x803f0c54: // orphan
         
         
         
         
         if                       // fcn.803fc3c4+0xc74 // unlikely
         if                       // unlikely

    loc_0x803f0c70: // orphan
         
         
         
         
         if                       // fcn.803dc1fc+0x21368 // unlikely
         if                       // unlikely

    loc_0x803f0c8c: // orphan
         if                       // unlikely
         

    loc_0x803f0c94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0cac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0cb8: // orphan
         if                       // unlikely
         

    loc_0x803f0cc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ccc: // orphan
         if                       // fcn.803fddfc+0x74 // unlikely
         if                       // unlikely

    loc_0x803f0cd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ce4: // orphan
         if                       // unlikely
         

    loc_0x803f0cec: // orphan
         if                       // fcn.803fe034+0x18c // unlikely
         if                       // fcn.803fe034+0x1c0 // unlikely

    loc_0x803f0cf8: // orphan
         if                       // fcn.803fe034+0x158 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe18
         if                       // fcn.803fe034+0x1dc // unlikely

    loc_0x803f0d04: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0d14: // orphan
         if                       // unlikely
         

    loc_0x803f0d1c: // orphan
         
         
         // CODE XREF from fcn.803efbc0 @ +0x260
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0d30: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0d40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0d48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe24
         

    loc_0x803f0d4c: // orphan
         if                       // fcn.803fe67c+0x54 // unlikely
         if                       // fcn.803fe67c+0x68 // unlikely

    loc_0x803f0d58: // orphan
         if                       // fcn.803fe67c+0xd0 // unlikely
         if                       // fcn.803fe67c+0xe4 // unlikely

    loc_0x803f0d60: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe1c
         

    loc_0x803f0d64: // orphan
         if                       // fcn.803fe67c+0x14c // unlikely
         if                       // fcn.803fe67c+0x160 // unlikely

    loc_0x803f0d68: // orphan
         if                       // fcn.803fe67c+0x160 // unlikely
         

    loc_0x803f0d70: // orphan
         if                       // fcn.803fe67c+0x1c8 // unlikely
         if                       // fcn.803fe67c+0x1dc // unlikely

    loc_0x803f0d7c: // orphan
         if                       // fcn.803fe67c+0x244 // unlikely
         if                       // fcn.803fe67c+0x258 // unlikely

    loc_0x803f0d88: // orphan
         
         
         if                       // fcn.803fe67c+0x3c8 // unlikely
         if                       // unlikely

    loc_0x803f0d9c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0db0: // orphan
         if                       // unlikely
         // CALL XREF from fcn.8113a528 @ +0x448
         

    loc_0x803f0db8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0dd0: // orphan
         if                       // unlikely
         

    loc_0x803f0dd8: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0dec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0df8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e04: // orphan
         if                       // unlikely
         if                       // fcn.80401828-0x1c3c // unlikely

    loc_0x803f0e10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e34: // orphan
         if                       // fcn.803c6038+0x39de0 // unlikely
         if                       // unlikely

    loc_0x803f0e40: // orphan
         if                       // unlikely
         

    loc_0x803f0e48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e54: // orphan
         if                       // unlikely
         

    loc_0x803f0e5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e74: // orphan
         
         
         // CODE XREF from fcn.80400480 @ 0x803efe38
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0e88: // orphan
         
         
         
         // CODE XREF from fcn.803efbc0 @ +0x280
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ea0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe3c
         if                       // unlikely
         

    loc_0x803f0ea8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0eb4: // orphan
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe44
         if                       // unlikely

    loc_0x803f0ec8: // orphan
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe44
         if                       // unlikely

    loc_0x803f0ed0: // orphan
         if                       // unlikely
         

    loc_0x803f0ed4: // orphan
         if                       // unlikely
         

    loc_0x803f0ed8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ee4: // orphan
         if                       // fcn.80400424+0x754 // unlikely
         if                       // fcn.80400424+0x768 // unlikely

    loc_0x803f0ef0: // orphan
         if                       // fcn.80400bf4+0x30 // unlikely
         if                       // unlikely

    loc_0x803f0efc: // orphan
         if                       // fcn.80400d70+0x20 // unlikely
         if                       // fcn.80401004 // unlikely

    loc_0x803f0f08: // orphan
         if                       // fcn.80401828-0x77c // unlikely
         if                       // fcn.804011c4+0x4c // unlikely

    loc_0x803f0f14: // orphan
         if                       // fcn.80400424+0xef4 // unlikely
         if                       // unlikely

    loc_0x803f0f20: // orphan
         if                       // fcn.80400424+0xf70 // unlikely
         if                       // fcn.80400424+0xf34 // unlikely

    loc_0x803f0f2c: // orphan
         if                       // fcn.80401418+0x18 // unlikely
         if                       // fcn.80401418+0x2c // unlikely

    loc_0x803f0f38: // orphan
         if                       // fcn.80401418+0x14 // unlikely
         if                       // fcn.80400424+0xfdc // unlikely

    loc_0x803f0f44: // orphan
         
         
         if                       // fcn.804018c0+0x30 // unlikely
         if                       // unlikely

    loc_0x803f0f58: // orphan
         if                       // unlikely
         if                       // fcn.804018c0+0xe0 // unlikely

    loc_0x803f0f64: // orphan
         if                       // fcn.804018c0+0xc8 // unlikely
         if                       // unlikely

    loc_0x803f0f70: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0f84: // orphan
         

    loc_0x803f0f88: // orphan
         
         if                       // fcn.80401e44+0xec // unlikely
         if                       // fcn.80401e44+0x110 // unlikely

    loc_0x803f0fac: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe58
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0fc0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0fd0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0fec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f0ff8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1010: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f101c: // orphan
         if                       // fcn.804003c8+0x2518 // unlikely
         if                       // unlikely

    loc_0x803f1028: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe64
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1034: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1048: // orphan
         if                       // fcn.80403078+0x4 // unlikely

    loc_0x803f104c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe68
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1054: // orphan
         if                       // fcn.80401828+0x19b0 // unlikely

    loc_0x803f1058: // orphan
         if                       // fcn.80401828+0x19e4 // unlikely
         if                       // fcn.80401828+0x19c8 // unlikely

    loc_0x803f1060: // orphan
         // CODE XREF from fcn.803efbc0 @ +0x2ac
         if                       // fcn.80401828+0x19dc // unlikely
         

    loc_0x803f1064: // orphan
         

    loc_0x803f1068: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1074: // orphan
         if                       // fcn.80401828+0x1ad0 // unlikely
         

    loc_0x803f107c: // orphan
         
         if                       // fcn.804034b4+0x30 // unlikely
         if                       // unlikely

    loc_0x803f108c: // orphan
         if                       // fcn.804036fc-0x8c // unlikely
         if                       // fcn.804036fc-0x48 // unlikely

    loc_0x803f1098: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f10a8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe74
         if                       // unlikely
         if                       // unlikely

    loc_0x803f10b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f10bc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe78
         if                       // fcn.80401828+0x23e8 // unlikely

    loc_0x803f10c0: // orphan
         if                       // unlikely
         if                       // fcn.80403c5c+0xc // unlikely

    loc_0x803f10c8: // orphan
         if                       // fcn.80403cd0+0x1c // unlikely

    loc_0x803f10cc: // orphan
         if                       // unlikely
         if                       // fcn.80401828+0x251c // unlikely

    loc_0x803f10d4: // orphan
         if                       // fcn.80401828+0x2530 // unlikely

    loc_0x803f10d8: // orphan
         if                       // unlikely
         

    loc_0x803f10e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f10ec: // orphan
         
         if                       // unlikely
         if                       // fcn.80404018 // unlikely

    loc_0x803f10fc: // orphan
         
         if                       // fcn.80404240+0x14 // unlikely
         if                       // unlikely

    loc_0x803f110c: // orphan
         if                       // fcn.80421810-0x1d550 // unlikely
         if                       // fcn.80421810-0x1d50c // unlikely

    loc_0x803f1118: // orphan
         if                       // fcn.80421810-0x1d534 // unlikely
         if                       // fcn.80421810-0x1d520 // unlikely

    loc_0x803f1124: // orphan
         if                       // fcn.803f1120+0x13218 // unlikely
         if                       // unlikely

    loc_0x803f1130: // orphan
         if                       // fcn.803f1120+0x13434 // unlikely
         if                       // unlikely

    loc_0x803f113c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1148: // orphan
         if                       // fcn.803f1120+0x1343c // unlikely
         if                       // unlikely

    loc_0x803f1154: // orphan
         if                       // unlikely
         if                       // fcn.803f115c+0x13600 // unlikely

    loc_0x803f1194: // orphan
         if                       // unlikely
         if                       // fcn.80400820+0x412c // unlikely

    loc_0x803f11a0: // orphan
         if                       // fcn.80400820+0x4324 // unlikely
         if                       // fcn.80400820+0x4338 // unlikely

    loc_0x803f11ac: // orphan
         if                       // fcn.803f1120+0x13be0 // unlikely
         if                       // unlikely

    loc_0x803f11b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f11c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f11d0: // orphan
         

    loc_0x803f11d4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f11ec: // orphan
         if                       // unlikely
         if                       // fcn.80406068-0x84 // unlikely

    loc_0x803f11f8: // orphan
         if                       // fcn.80406030+0xbc // unlikely
         if                       // fcn.80406030+0xd0 // unlikely

    loc_0x803f1204: // orphan
         if                       // fcn.80406030+0xf8 // unlikely
         if                       // fcn.80406030+0x10c // unlikely

    loc_0x803f1210: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe80
         if                       // unlikely

    loc_0x803f121c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1220: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1228: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe84
         if                       // unlikely
         if                       // unlikely

    loc_0x803f122c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe84
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1234: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1238: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1240: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1244: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f124c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1250: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1258: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f125c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1260: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe8c
         if                       // unlikely

    loc_0x803f1264: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1268: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f126c: // orphan
         if                       // unlikely

    loc_0x803f1270: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe90
         if                       // unlikely

    loc_0x803f1274: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe90
         if                       // unlikely

    loc_0x803f1278: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe90
         if                       // unlikely
         if                       // unlikely

    loc_0x803f127c: // orphan
         if                       // fcn.80406870 // unlikely
         if                       // fcn.80406878+0x3c // unlikely

    loc_0x803f1280: // orphan
         if                       // fcn.80406870 // unlikely
         if                       // fcn.80406878+0x3c // unlikely

    loc_0x803f1284: // orphan
         if                       // fcn.80406878+0x3c // unlikely
         if                       // fcn.80406878+0x50 // unlikely

    loc_0x803f1288: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe94
         if                       // unlikely
         if                       // unlikely

    loc_0x803f128c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe94
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1290: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1294: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1298: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f129c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe98
         if                       // unlikely

    loc_0x803f12a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12ac: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe9c
         if                       // unlikely

    loc_0x803f12b0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efe9c
         if                       // unlikely

    loc_0x803f12b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efe9c
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12c0: // orphan
         if                       // unlikely
         if                       // fcn.80407090+0x14 // unlikely

    loc_0x803f12c4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efea0
         if                       // fcn.80407090+0x28 // unlikely
         if                       // fcn.80407090+0x3c // unlikely

    loc_0x803f12c8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efea0
         if                       // fcn.80407090+0x28 // unlikely
         if                       // fcn.80407090+0x3c // unlikely

    loc_0x803f12cc: // orphan
         if                       // fcn.80407090+0x3c // unlikely
         if                       // fcn.80407090+0x50 // unlikely

    loc_0x803f12d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12d8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efea4
         if                       // unlikely

    loc_0x803f12dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f12e4: // orphan
         if                       // unlikely
         if                       // fcn.80400424+0x7144 // unlikely

    loc_0x803f12e8: // orphan
         if                       // fcn.80400424+0x7158 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efea8
         if                       // fcn.80400424+0x716c // unlikely

    loc_0x803f12ec: // orphan
         if                       // fcn.80400424+0x7158 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efea8
         if                       // fcn.80400424+0x716c // unlikely

    loc_0x803f12f0: // orphan
         

    loc_0x803f12f4: // orphan
         if                       // fcn.80400424+0x7284 // unlikely
         if                       // unlikely

    loc_0x803f1300: // orphan
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efeac
         if                       // fcn.804078bc+0x58 // unlikely

    loc_0x803f1318: // orphan
         if                       // fcn.804078bc+0x180 // unlikely
         if                       // unlikely

    loc_0x803f1324: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efeb0
         if                       // fcn.804078bc+0x13c // unlikely
         if                       // fcn.804078bc+0x150 // unlikely

    loc_0x803f1330: // orphan
         if                       // fcn.804078bc+0x1c8 // unlikely
         if                       // unlikely

    loc_0x803f1338: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efeb4
         if                       // unlikely

    loc_0x803f133c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1344: // orphan
         if                       // unlikely

    loc_0x803f1348: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efeb8
         

    loc_0x803f1350: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f135c: // orphan
         if                       // fcn.80408088+0x18 // unlikely
         if                       // unlikely

    loc_0x803f1368: // orphan
         if                       // fcn.804080b0+0x8c // unlikely
         if                       // unlikely

    loc_0x803f1370: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efebc
         if                       // unlikely

    loc_0x803f1374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f137c: // orphan
         if                       // unlikely

    loc_0x803f1380: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efec0
         if                       // fcn.8040823c+0x1c // unlikely

    loc_0x803f1384: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efec0
         if                       // fcn.8040823c+0x1c // unlikely

    loc_0x803f1388: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efec0
         if                       // fcn.8040823c+0x1c // unlikely
         if                       // fcn.80408200+0x1c // unlikely

    loc_0x803f138c: // orphan
         if                       // fcn.8040823c+0x4 // unlikely
         if                       // unlikely

    loc_0x803f1390: // orphan
         if                       // fcn.8040823c+0x4 // unlikely
         if                       // unlikely

    loc_0x803f1394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1398: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efec4
         if                       // unlikely
         if                       // unlikely

    loc_0x803f139c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efec4
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13ac: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efec8
         if                       // unlikely

    loc_0x803f13b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13c8: // orphan
         

    loc_0x803f13cc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efecc
         if                       // unlikely

    loc_0x803f13d0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efecc
         if                       // unlikely

    loc_0x803f13d8: // orphan
         // CODE XREF from fcn.83e8a3e0 @ +0x6fc
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13dc: // orphan
         // CODE XREF from fcn.83e8a3e0 @ +0x6fc
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efed0
         if                       // fcn.804090b8+0x40 // unlikely
         if                       // unlikely

    loc_0x803f13e8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efed0
         if                       // fcn.804090b8+0x40 // unlikely
         if                       // unlikely

    loc_0x803f13f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f13f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803efed4
         if                       // fcn.80400d70+0x8a9c // unlikely

    loc_0x803f13fc: // orphan
         if                       // fcn.80400d70+0x8ab0 // unlikely
         if                       // unlikely

    loc_0x803f1400: // orphan
         if                       // fcn.80400d70+0x8ab0 // unlikely
         if                       // unlikely

    loc_0x803f1404: // orphan
         if                       // unlikely

    loc_0x803f1408: // orphan
         if                       // unlikely

    loc_0x803f140c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efed8
         if                       // fcn.80409a7c+0x24 // unlikely
         if                       // fcn.80409a7c+0x48 // unlikely

    loc_0x803f1410: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efed8
         if                       // fcn.80409a7c+0x24 // unlikely
         if                       // fcn.80409a7c+0x48 // unlikely

    loc_0x803f1414: // orphan
         if                       // unlikely

    loc_0x803f1418: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f141c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1420: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efedc
         if                       // unlikely

    loc_0x803f1424: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1428: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1430: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1434: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f143c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1440: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1448: // orphan
         

    loc_0x803f144c: // orphan
         if                       // fcn.80400e3c+0x9594 // unlikely
         if                       // fcn.80400e3c+0x95c8 // unlikely

    loc_0x803f1458: // orphan
         if                       // fcn.8040a52c+0x80 // unlikely
         if                       // unlikely

    loc_0x803f1464: // orphan
         if                       // fcn.80400e3c+0x982c // unlikely
         if                       // fcn.80400e3c+0x9920 // unlikely

    loc_0x803f14f0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efeec
         if                       // unlikely

    loc_0x803f14fc: // orphan
         if                       // unlikely

    loc_0x803f1508: // orphan
         if                       // unlikely

    loc_0x803f1514: // orphan
         if                       // unlikely

    loc_0x803f1520: // orphan
         if                       // fcn.80401018+0xb1ec // unlikely

    loc_0x803f152c: // orphan
         if                       // unlikely

    loc_0x803f1538: // orphan
         if                       // fcn.803f1470+0x1b26c // unlikely

    loc_0x803f1544: // orphan
         if                       // unlikely

    loc_0x803f1550: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f155c: // orphan
         if                       // fcn.8040c9fc+0x34 // unlikely
         // CODE XREF from fcn.803efbc0 @ +0x33c
         if                       // fcn.8040c9fc+0x48 // unlikely

    loc_0x803f1568: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1574: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff00
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1580: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803eff04
         if                       // unlikely

    loc_0x803f1588: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803eff04
         if                       // unlikely

    loc_0x803f1590: // orphan
         if                       // unlikely
         

    loc_0x803f1594: // orphan
         if                       // unlikely
         

    loc_0x803f1598: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f15a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff0c
         

    loc_0x803f15a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f15b0: // orphan
         if                       // fcn.8040cd04+0x10 // unlikely
         if                       // fcn.8040cd04+0x34 // unlikely

    loc_0x803f15bc: // orphan
         if                       // fcn.8040cd04+0x4c // unlikely
         if                       // fcn.8040cd04+0x70 // unlikely

    loc_0x803f15c8: // orphan
         if                       // fcn.8040cd04+0x88 // unlikely
         if                       // fcn.8040cd04+0xac // unlikely

    loc_0x803f15d4: // orphan
         if                       // fcn.8040cd04+0x134 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803eff14
         if                       // fcn.8040ce44+0x8 // unlikely

    loc_0x803f15e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f15ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff18
         if                       // unlikely
         

    loc_0x803f15f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1600: // orphan
         if                       // unlikely
         

    loc_0x803f1608: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1614: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f16f0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff2c
         
         if                       // fcn.804011c4+0xd044 // unlikely
         if                       // fcn.804011c4+0xd158 // unlikely

    loc_0x803f1700: // orphan
         if                       // fcn.804011c4+0xd190 // unlikely
         if                       // unlikely

    loc_0x803f170c: // orphan
         
         
         
         
         if                       // fcn.80420050-0x11ad0 // unlikely
         if                       // unlikely

    loc_0x803f1728: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff34
         if                       // fcn.80400424+0xe238 // unlikely
         if                       // fcn.80400424+0xe24c // unlikely

    loc_0x803f1734: // orphan
         if                       // fcn.80400424+0xe634 // unlikely
         if                       // fcn.80400424+0xe658 // unlikely

    loc_0x803f173c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff38
         if                       // unlikely

    loc_0x803f1740: // orphan
         if                       // unlikely
         

    loc_0x803f1748: // orphan
         if                       // fcn.80400424+0xe768 // unlikely
         if                       // unlikely

    loc_0x803f1754: // orphan
         if                       // unlikely
         

    loc_0x803f175c: // orphan
         if                       // fcn.80400424+0xeadc // unlikely
         if                       // unlikely

    loc_0x803f1768: // orphan
         if                       // fcn.80400424+0xebc8 // unlikely
         if                       // unlikely

    loc_0x803f1774: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1784: // orphan
         if                       // unlikely
         

    loc_0x803f178c: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803eff40
         if                       // fcn.8040f818 // unlikely

    loc_0x803f179c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f17a8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff44
         if                       // unlikely

    loc_0x803f17ac: // orphan
         if                       // unlikely
         

    loc_0x803f17b4: // orphan
         
         if                       // fcn.8040fff0+0x2c // unlikely
         if                       // unlikely

    loc_0x803f17c4: // orphan
         
         if                       // fcn.80400424+0x10048 // unlikely
         if                       // fcn.80400424+0x1005c // unlikely

    loc_0x803f17d4: // orphan
         if                       // unlikely
         

    loc_0x803f17dc: // orphan
         if                       // fcn.804107d4+0x3c // unlikely
         if                       // unlikely

    loc_0x803f17e8: // orphan
         
         
         // CODE XREF from fcn.80400480 @ 0x803eff4c
         
         if                       // fcn.8042028c-0xf974 // unlikely
         if                       // fcn.8042028c-0xf960 // unlikely

    loc_0x803f1800: // orphan
         if                       // fcn.8042028c-0xf8f8 // unlikely
         if                       // fcn.8042028c-0xf994 // unlikely

    loc_0x803f1814: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff50
         if                       // fcn.8042028c-0xf8b4 // unlikely
         if                       // unlikely

    loc_0x803f1820: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f182c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff58
         if                       // fcn.80410a4c+0x24 // unlikely
         if                       // fcn.80410a4c+0x38 // unlikely

    loc_0x803f1838: // orphan
         if                       // fcn.80410a4c+0xc0 // unlikely
         if                       // fcn.80410a4c+0xe4 // unlikely

    loc_0x803f1844: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1850: // orphan
         if                       // fcn.80410c00+0x14 // unlikely
         if                       // fcn.80400424+0x10874 // unlikely

    loc_0x803f185c: // orphan
         if                       // fcn.80400424+0x108ac // unlikely
         if                       // fcn.80400424+0x108c0 // unlikely

    loc_0x803f1868: // orphan
         if                       // fcn.80400424+0x10958 // unlikely
         if                       // fcn.80400424+0x1097c // unlikely

    loc_0x803f1874: // orphan
         if                       // fcn.803dc3a4-0xa66c // unlikely
         if                       // fcn.803dc3a4-0xa648 // unlikely

    loc_0x803f1880: // orphan
         if                       // fcn.803dc3a4-0xa590 // unlikely
         if                       // fcn.803dc3a4-0xa5dc // unlikely

    loc_0x803f1888: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff64
         if                       // unlikely
         

    loc_0x803f188c: // orphan
         

    loc_0x803f1890: // orphan
         
         if                       // fcn.803dc3a4-0xa02c // unlikely
         if                       // unlikely

    loc_0x803f18a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff6c
         if                       // unlikely
         if                       // unlikely

    loc_0x803f18ac: // orphan
         if                       // unlikely
         

    loc_0x803f18b4: // orphan
         if                       // fcn.80388000+0x4a748 // unlikely
         if                       // fcn.80388000+0x4a75c // unlikely

    loc_0x803f18c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f18cc: // orphan
         
         
         if                       // fcn.803dc3a4-0x887c // unlikely
         // CODE XREF from fcn.80400480 @ 0x803eff74
         if                       // fcn.803dc3a4-0x8858 // unlikely

    loc_0x803f18e0: // orphan
         if                       // fcn.803dc3a4-0x8820 // unlikely
         if                       // fcn.803dc3a4-0x880c // unlikely

    loc_0x803f18ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff78
         if                       // fcn.803dee6c-0xb2ec // unlikely
         

    loc_0x803f18fc: // orphan
         if                       // fcn.803dc3a4-0x8444 // unlikely
         if                       // fcn.803dc3a4-0x8430 // unlikely

    loc_0x803f1908: // orphan
         if                       // fcn.803ae9d8+0x25654 // unlikely
         if                       // fcn.803d3f7c+0x14 // unlikely

    loc_0x803f1914: // orphan
         if                       // fcn.803d403c+0x3c // unlikely
         if                       // fcn.803d43bc // unlikely

    loc_0x803f1920: // orphan
         if                       // unlikely
         if                       // fcn.803d3f7c+0x3c // unlikely

    loc_0x803f192c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1938: // orphan
         if                       // fcn.803dee6c-0xa0a0 // unlikely
         if                       // unlikely

    loc_0x803f1944: // orphan
         

    loc_0x803f1948: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff84
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1964: // orphan
         if                       // unlikely
         

    loc_0x803f196c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1978: // orphan
         if                       // unlikely
         if                       // fcn.803d438c+0x1484 // unlikely

    loc_0x803f1984: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1990: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff8c
         if                       // unlikely
         if                       // unlikely

    loc_0x803f199c: // orphan
         if                       // unlikely
         if                       // fcn.80388000+0x4df54 // unlikely

    loc_0x803f19a4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff90
         if                       // unlikely

    loc_0x803f19a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f19b0: // orphan
         if                       // unlikely

    loc_0x803f19b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f19bc: // orphan
         

    loc_0x803f19c0: // orphan
         
         if                       // fcn.803c5568+0x11600 // unlikely
         if                       // fcn.803c5568+0x11624 // unlikely

    loc_0x803f19d0: // orphan
         if                       // fcn.803c5568+0x1165c // unlikely
         if                       // unlikely

    loc_0x803f19dc: // orphan
         if                       // fcn.803c5568+0x11658 // unlikely
         

    loc_0x803f1a00: // orphan
         // CODE XREF from fcn.80400480 @ 0x803eff9c
         if                       // fcn.803c5568+0x11e5c // unlikely
         if                       // fcn.803c5568+0x11e80 // unlikely

    loc_0x803f1a0c: // orphan
         
         
         
         
         
         
         
         if                       // fcn.803c5568+0x13064 // unlikely
         if                       // fcn.803c5568+0x13088 // unlikely

    loc_0x803f1a34: // orphan
         if                       // fcn.803c5568+0x130d0 // unlikely
         

    loc_0x803f1a3c: // orphan
         if                       // fcn.803c5568+0x13188 // unlikely
         if                       // unlikely

    loc_0x803f1a48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effa4
         if                       // fcn.803c5568+0x13514 // unlikely
         if                       // fcn.803c5568+0x13538 // unlikely

    loc_0x803f1a54: // orphan
         if                       // fcn.803c5568+0x13570 // unlikely
         if                       // fcn.803c5568+0x13584 // unlikely

    loc_0x803f1a5c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effa8
         if                       // fcn.803c5568+0x13558 // unlikely

    loc_0x803f1a60: // orphan
         if                       // fcn.803c5568+0x1356c // unlikely
         

    loc_0x803f1a68: // orphan
         if                       // fcn.803d8e2c+0x20 // unlikely
         if                       // fcn.803c5568+0x138f8 // unlikely

    loc_0x803f1a74: // orphan
         if                       // fcn.80388000+0x50e88 // unlikely
         

    loc_0x803f1a7c: // orphan
         if                       // fcn.803d8f3c+0x34 // unlikely
         if                       // unlikely

    loc_0x803f1a88: // orphan
         if                       // fcn.803c5568+0x139a4 // unlikely
         if                       // unlikely

    loc_0x803f1ab4: // orphan
         if                       // unlikely

    loc_0x803f1ab8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effb4
         if                       // unlikely
         

    loc_0x803f1ac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1acc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1ad8: // orphan
         if                       // unlikely
         

    loc_0x803f1ae0: // orphan
         if                       // fcn.80388000+0x51f04 // unlikely
         if                       // fcn.80388000+0x51f18 // unlikely

    loc_0x803f1aec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1af8: // orphan
         if                       // fcn.803d9cec+0x680 // unlikely
         if                       // fcn.803d9cec+0x6a4 // unlikely

    loc_0x803f1b04: // orphan
         if                       // fcn.803d9cec+0x6cc // unlikely
         

    loc_0x803f1b08: // orphan
         if                       // fcn.803d9cec+0x6cc // unlikely
         

    loc_0x803f1b0c: // orphan
         if                       // fcn.803d9cec+0x704 // unlikely
         if                       // fcn.803d9cec+0x718 // unlikely

    loc_0x803f1b14: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effc0
         if                       // fcn.803d9cec+0x6ec // unlikely
         if                       // fcn.803d9cec+0x700 // unlikely

    loc_0x803f1b18: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effc0
         if                       // fcn.803d9cec+0x6ec // unlikely
         if                       // fcn.803d9cec+0x700 // unlikely

    loc_0x803f1b20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1b2c: // orphan
         if                       // unlikely
         

    loc_0x803f1b34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1b40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1b4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1b58: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803effc8
         if                       // unlikely

    loc_0x803f1b64: // orphan
         
         
         

    loc_0x803f1b70: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effcc
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1bcc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effd8
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1bd8: // orphan
         if                       // fcn.803dc3c0+0x1c // unlikely
         if                       // unlikely

    loc_0x803f1be4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1bf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1bfc: // orphan
         
         if                       // fcn.803dcc5c+0x68 // unlikely
         if                       // fcn.803dcc5c+0x7c // unlikely

    loc_0x803f1c0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c28: // orphan
         // CODE XREF from fcn.80400480 @ 0x803effe4
         
         if                       // fcn.803dd03c+0x3a4 // unlikely
         if                       // unlikely

    loc_0x803f1c38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c44: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c84: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efff0
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1c9c: // orphan
         if                       // fcn.803dc1fc+0x2934 // unlikely
         if                       // unlikely

    loc_0x803f1ca8: // orphan
         if                       // fcn.803dee6c+0xb0 // unlikely
         if                       // unlikely

    loc_0x803f1cb4: // orphan
         if                       // fcn.803c6038+0x18f20 // unlikely
         if                       // unlikely

    loc_0x803f1ce0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803efffc
         if                       // fcn.803c6038+0x190cc // unlikely
         if                       // unlikely

    loc_0x803f1cec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1cf8: // orphan
         if                       // fcn.803c6038+0x19174 // unlikely
         if                       // unlikely

    loc_0x803f1d3c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0008
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803f1d5c: // orphan
         if                       // unlikely
         

    loc_0x803f1da8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0014
         if                       // unlikely
         

    loc_0x803f23ac: // orphan
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x2c, sp
         at = 0x86b1 << 16
         lwc1 f2, -0x2e98, at
         lwc1 f4, 0x2c, sp
         at = 0x86b1 << 16
         lwc1 f12, -0x2e90, at
         mul.s f6, f4, f2
         at = 0x43c8 << 16
         mtc1 at, f8
         mul.s f18, f0, f2
         mtc1 0, f14
         a0 = [sp + 0x3c]

    loc_0x803f23e0: // orphan
         a1 = 0 + 0
         [sp + 0x1c] = 0
         add.s f10, f6, f8
         swc1 f12, 0x14, sp
         mfc1 a3, f18

    loc_0x803f2460: // orphan
         // CODE XREF from fcn.803f00ac @ +0x20
         [sp + 0x10] = t6
         a2 = sp + 0x28           // arg3
         a3 = sp + 0x26           // arg4
         a0 = v0 + 0xb4           // arg1
         call 0x80037120          // 0x80037120(0x1b3, 0x442f71dcfe116408, 0x178028, 0x178026)

    loc_0x803f2474: // orphan
         // CODE XREF from fcn.803f0074 @ 0x803f00d0
         a1 = v0 + 0xa8
         t7 = halfword [sp + 0x26]
         v0 = [sp + 0x34]
         t8 = t7 + 0x2000
         halfword [v0 + 0x1c] = t8
         t9 = halfword [sp + 0x24]
         t0 = t9 - 0x2000
         halfword [v0 + 0x1e] = t0

    loc_0x803f2494: // orphan
         ra = [sp + 0x1c]
         sp += 0x30
         v0 = 0
         ret
         

    loc_0x803f2d50: // orphan
         goto 0x803f2d74
         [at - 0x2ea0] = 0

    loc_0x803f2d74: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f2d50
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803f4230: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f035c
         t9 = 0 + 0xb
         t7 = [v0 + 0xc]          // t9
         t8 = , unsigned  byte [t7 + 0x2180] // s4
         if                       // likely
         

    loc_0x803f4244: // orphan
         // CODE XREF from fcn.803c6038 @ 0x803f0360
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         // CODE XREF from fcn.80400480 @ 0x803f0358
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4254: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0350
         goto 0x803f447c          // fcn.803f43c0+0xbc
         [v0 + 0] = t9

    loc_0x803f456c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0398
         [t6 + 0xc] = t7

    loc_0x803f4570: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f038c
         t9 = [v1 + 0]            // s4
         at = 0 + 4
         t0 = [t9 + 0xc]
         t1 = , unsigned  byte [t0 + 0x2180] // s4
         bnel t1, at, 0x803f4594  // likely
         a0 = 2 << 16

    loc_0x803f4588: // orphan
         call 0x80027ee0          // 0x80027ee0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xfff
         // CODE XREF from fcn.803f0370 @ +0x2c
         a0 = 2 << 16

    loc_0x803f4594: // orphan
         call 0x80006cd0          // "$\n" // 0x80006cd0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0394
         a1 = 0
         t2 = 0 + 2
         t3 = 0 + 1               // lo
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = 0
         a1 = 0
         a2 = 0 + 2

    loc_0x803f45b8: // orphan
         call 0x800082e0          // 0x800082e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 1               // lo
         [sp + 0x2c] = v0
         call 0x8004c09c          // 0x8004c09c(-1, 0x442f71dcfe116408, 0x8, 0x1)
         a0 = 0 + 0x12f
         call 0x8004d690          // 0x8004d690(0x12f, 0x442f71dcfe116408, 0x8, 0x1)
         a0 = 0 + 0x2c
         t4 = 0x86b2 << 16
         // CODE XREF from fcn.80400480 @ 0x803f03a4
         t4 = [t4 - 0x7e40]       // t9
         at = 0x86b1 << 16
         [at - 0x1f5c] = v0
         a1 = 0x86b1 << 16
         a1 -= 0x1f58

    loc_0x803f45ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f03a8
         a0 = 0 + 0x69
         call 0x87f06eac          // 0x87f06eac(0x69, 0x442f71dcfe116408, 0x8, -1)
         a2 = [t4 + 0xc]          // t9
         t5 = 0x86b2 << 16
         t5 = [t5 - 0x7e40]       // t9
         a0 = 0x86b1 << 16
         a0 -= 0x1f20
         call 0x87f09ebc          // 0x87f09ebc(0x86b0e0e0, 0x442f71dcfe116408, -1, -1)
         a1 = [t5 + 0xc]          // t9
         t6 = 0x86b2 << 16
         t6 = [t6 - 0x7e40]       // t9
         a0 = 0x86b1 << 16
         a0 -= 0x1eb8
         a2 = 0

    loc_0x803f4624: // orphan
         call 0x87f0d48c          // 0x87f0d48c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [t6 + 0xc]
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x0, 0x8, -1)
         a0 = 0 + 0x97
         // CODE XREF from fcn.803f03b0 @ 0x803f03b0
         call 0x8004ddf4          // 0x8004ddf4(0x97, 0x0, 0x8, -1)
         a0 = 0 + 0xd8
         call 0x8004ddf4          // 0x8004ddf4(0xd8, 0x0, 0x8, -1)
         a0 = 0 + 0xd3
         call 0x8004ddf4          // 0x8004ddf4(0xd3, 0x0, 0x8, -1)
         a0 = 0 + 0xd1
         // CODE XREF from fcn.803f03b8 @ 0x803f03b8
         call 0x8004ddf4          // 0x8004ddf4(0xd1, 0x0, 0x8, -1)
         a0 = 0 + 0xd5
         call 0x8004ddf4          // 0x8004ddf4(0xd5, 0x0, 0x8, -1)
         a0 = 0 + 0xcb
         call 0x8004ddf4          // 0x8004ddf4(0xcb, 0x0, 0x8, -1)
         // CODE XREF from fcn.803f03b0 @ 0x803f03bc
         a0 = 0 + 0xcc            // arg1
         call 0x8004ddf4          // 0x8004ddf4(0xcc, 0x0, 0x8, -1)

    loc_0x803f5578: // orphan
         t6 = 0x8009 << 16
         t7 = 0x86b1 << 16
         t7 = , unsigned  halfword [t7 + 0x78e0]
         // CODE XREF from fcn.803f04b0 @ 0x803f04f0
         t6 = , unsigned  halfword [t6 + 0x4904]
         sp -= 0x18
         [sp + 0x14] = ra
         [sp + 0x18] = a0
         if                       // fcn.803f04b0+0x53dc // likely
         [sp + 0x1c] = a1

    loc_0x803f559c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x12c

    loc_0x803f5620: // orphan
         a0 = 0x86b1 << 16
         a0 += 0x7910             // arg1
         call 0x8003f210          // 0x8003f210(0x86b17910, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         t0 = 0x86b1 << 16
         t0 = [t0 + 0x7a78]       // t9
         a0 = 0x86b1 << 16

    loc_0x803f563c: // orphan
         at = , t0 < 5
         if                       // likely
         

    loc_0x803f5648: // orphan
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x7910
         if                       // likely
         

    loc_0x803f5658: // orphan
         call 0x800225c4          // 0x800225c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2

    loc_0x803f5660: // orphan
         a0 = 0x86b1 << 16
         call 0x8003ec54          // 0x8003ec54(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.803f04b0 @ 0x803f0504
         a0 += 0x7910
         at = 0 + 5
         bnel v0, at, 0x803f5890  // fcn.803f04b0+0x53e0 // likely
         ra = [sp + 0x14]         // lo

    loc_0x803f5678: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803f56f4: // orphan
         a0 = 0 + 0x36            // arg1
         goto 0x803f5708
         

    loc_0x803f5708: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f56f8
         a0 = 0x86b1 << 16
         call 0x8003ec54          // 0x8003ec54(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x7910
         at = 0 + 5
         // CODE XREF from fcn.803f04b0 @ 0x803f0514
         if                       // fcn.803f04b0+0x5288 // likely
         t1 = 0x86b1 << 16

    loc_0x803f5720: // orphan
         t1 = [t1 + 0x7a78]       // t9
         at = , t1 < 5
         if                       // fcn.803f04b0+0x5288 // likely
         // CODE XREF from fcn.803f04b0 @ 0x803f0518
         

    loc_0x803f57ac: // orphan
         t3 = 0 + 6
         at = 0x86b1 << 16
         goto 0x803f588c          // fcn.803f04b0+0x53dc
         [at + 0x7abc] = t3

    loc_0x803f5864: // orphan
         [at + 0x7abc] = t4
         // CODE XREF from fcn.803f04b0 @ 0x803f0524
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x7910
         at = 0 + 4

    loc_0x803f5874: // orphan
         if                       // fcn.803f04b0+0x53dc // likely
         v1 = 0 + 0xa

    loc_0x803f5d20: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f05ac
         s2 = s7 + t7             // t9
         s1 = 0
         s4 = 0
         s6 = 0 + 4
         v1 = [sp + 0x88]

    loc_0x803f6028: // orphan
         t3 = [s3 + 0]
         t6 = s1 << 1
         a2 = s7 + t6
         t5 = t3 & v1
         if                       // likely
         t4 = 0 + 1               // lo

    loc_0x803f6040: // orphan
         [sp + 0x90] = t4
         if                       // unlikely
         a2 += 0x49c

    loc_0x803f604c: // orphan
         at = 0 + 1               // lo
         if                       // likely
         t9 = 0 + 1               // lo

    loc_0x803f6058: // orphan
         t7 = [s0 + 0x17c]        // t9
         t3 = [s0 + 0x1b4]        // t9
         t1 = s1 << 2
         t1 += s1
         t1 <<= 2
         t2 = s7 + t1
         t8 = t7 + 0x1f4

    loc_0x803f6074: // orphan
         t5 = t3 << 2
         [s0 + 0x17c] = t8
         t4 = t2 + t5
         [t4 + 0x1c4] = t9
         goto 0x803f60bc
         [s0 + 0x1a4] = s5

    loc_0x803f608c: // orphan
         t6 = [s0 + 0x17c]        // t9
         t3 = [s0 + 0x1b4]        // t9
         t8 = s1 << 2
         t8 += s1
         // CODE XREF from fcn.80400480 @ 0x803f05f8
         t8 <<= 2
         t1 = s7 + t8
         t7 = t6 + 0x3e8
         t2 = t3 << 2
         [s0 + 0x17c] = t7

    loc_0x803f60b0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f05fc
         t5 = t1 + t2
         [t5 + 0x1c4] = 0
         [s0 + 0x1a4] = s5

    loc_0x803f60bc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f6084
         t9 = 0 + 0xd
         [s0 + 0xc8] = t9
         a0 = 0 | 0xaf05          // arg1
         call 0x8002781c          // 0x8002781c(0xaf05, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1 & 0xff
         v0 = 0x87f1 << 16
         v0 = [v0 + 0x19dc]       // t9
         a0 = [sp + 0x80]
         a1 = fp
         lwc1 f6, 0x48, v0
         a2 = [s3 + 0]
         a3 = [sp + 0x8c]
         swc1 f6, 0x10, sp

    loc_0x803f60f0: // orphan
         lwc1 f8, 0x4c, v0
         swc1 f8, 0x14, sp
         lwc1 f10, 0x50, v0
         // CODE XREF from fcn.82d5bcb0 @ +0x2b0
         call 0x86b04970          // 0x86b04970(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10, 0x18, sp
         // CODE XREF from fcn.803f0600 @ 0x803f0600
         t4 = 0 + 1               // lo
         [s7 + 0x354] = t4
         goto 0x803f6130
         v1 = [sp + 0x88]

    loc_0x803f6114: // orphan
         v0 = [s0 + 0x34]         // t9
         t6 = 0 + 0xe
         beql s2, v0, 0x803f6130  // unlikely
         [s0 + 0xc8] = t6

    loc_0x803f6124: // orphan
         bnel s4, v0, 0x803f6134  // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0604
         s1 += 1

    loc_0x803f612c: // orphan
         [s0 + 0xc8] = t6

    loc_0x803f6130: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f610c
         s1 += 1

    loc_0x803f6134: // orphan
         s3 += 4
         if                       // likely
         s0 += 4

    loc_0x803f6140: // orphan
         goto 0x803f643c          // fcn.803f04b0+0x5f8c
         t1 = [sp + 0x90]         // t9

    loc_0x803f615c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0608
         s3 -= 0x27c8
         t3 = t8 << 2
         s2 = s7 + t3
         s1 = 0
         s4 = 0
         s6 = 0 + 4

    loc_0x803f6174: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0610
         v1 = [sp + 0x88]

    loc_0x803f6178: // orphan
         a2 = [s3 + 0]
         t1 = a2 & v1             // arg3
         beql t1, 0, 0x803f630c   // likely
         s1 += 1

    loc_0x803f6188: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0614
         if                       // unlikely
         s0 = s7 + s4

    loc_0x803f6190: // orphan
         // CODE XREF from fcn.803f0600 @ 0x803f060c
         at = 0 + 1               // lo
         if                       // unlikely
         t7 = s1 << 2

    loc_0x803f619c: // orphan
         goto 0x803f62d8
         t4 = [s0 + 0x4a4]        // t9

    loc_0x803f61a4: // orphan
         t9 = [s0 + 0x1b4]
         t2 = s1 << 2
         t2 += s1
         t2 <<= 2
         t5 = s7 + t2
         t4 = t9 << 2
         t6 = t5 + t4
         [t6 + 0x1c4] = s5
         t7 = [s0 + 0x17c]
         t3 = [s0 + 0x214]        // t9
         [s0 + 0x1a4] = s5
         t8 = t7 + 0x64
         t1 = t3 + 1

    loc_0x803f61d8: // orphan
         [s0 + 0x17c] = t8
         [s0 + 0x214] = t1
         t2 = [s2 + 0x348]        // t9
         t5 = 0x87f1 << 16
         v1 = t2 - 1
         if                       // likely
         [s2 + 0x348] = v1

    loc_0x803f61f4: // orphan
         [s2 + 0x348] = 0
         v1 = 0

    loc_0x803f61fc: // orphan
         t5 = [t5 + 0x19dc]       // t9
         t4 = v1 << 4
         t6 = ~t4
         v0 = t5 + t6
         lwc1 f16, 0x160, v0
         v0 += 0x90
         a0 = [sp + 0x80]
         swc1 f16, 0x10, sp
         lwc1 f18, 0xd4, v0
         a1 = fp
         a3 = [sp + 0x8c]
         swc1 f18, 0x14, sp
         lwc1 f4, 0xd8, v0
         call 0x86b04970          // 0x86b04970(0x0, 0x178000, 0x8, 0x0)
         swc1 f4, 0x18, sp
         goto 0x803f62d4
         v1 = [sp + 0x88]

    loc_0x803f6240: // orphan
         t3 = [s0 + 0x1b4]        // t9
         t7 += s1
         t7 <<= 2
         t8 = s7 + t7
         t1 = t3 << 2
         t2 = t8 + t1
         [t2 + 0x1c4] = s5
         t9 = [s0 + 0x17c]
         t5 = [s0 + 0x214]
         [s0 + 0x1a4] = s5
         t4 = t9 + 0x64
         t6 = t5 + 1              // "F"
         [s0 + 0x17c] = t4
         [s0 + 0x214] = t6
         t7 = [s2 + 0x348]
         t8 = 0x87f1 << 16
         v1 = t7 - 1              // s2
         if                       // unlikely
         [s2 + 0x348] = v1

    loc_0x803f628c: // orphan
         [s2 + 0x348] = 0
         v1 = 0

    loc_0x803f6294: // orphan
         t8 = [t8 + 0x19dc]       // t9
         t1 = v1 << 4
         t2 = ~t1
         v0 = t8 + t2
         lwc1 f6, 0x160, v0
         v0 += 0x90
         a0 = [sp + 0x80]
         // CODE XREF from fcn.80400480 @ 0x803f061c
         swc1 f6, 0x10, sp
         lwc1 f8, 0xd4, v0
         a1 = fp
         a3 = [sp + 0x8c]
         swc1 f8, 0x14, sp
         lwc1 f10, 0xd8, v0
         // CODE XREF from fcn.803f0600 @ +0x24
         call 0x86b04970          // 0x86b04970(0x0, 0x178000, 0x8, 0x0)
         swc1 f10, 0x18, sp
         v1 = [sp + 0x88]

    loc_0x803f62d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f6238
         t4 = [s0 + 0x4a4]        // t9

    loc_0x803f62d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f619c
         t9 = 0 + 0xd

    loc_0x803f62dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0628
         [s0 + 0xc8] = t9
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0620
         a0 = 0 | 0xaf05          // arg1

    loc_0x803f62e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0620
         a0 = 0 | 0xaf05          // arg1

    loc_0x803f62e8: // orphan
         t5 = s1 << 1
         a2 = s7 + t5
         a2 += 0x49c
         call 0x8002781c          // 0x8002781c(-1, 0x442f71dcfe116408, 0x885ee3bafc230015, -1)
         a1 = s1 & 0xff
         t6 = 0 + 1               // lo
         [s0 + 0x4a4] = t6
         v1 = [sp + 0x88]

    loc_0x803f6308: // orphan
         s1 += 1

    loc_0x803f630c: // orphan
         s4 += 4
         if                       // likely
         s3 += 4

    loc_0x803f6318: // orphan
         t7 = [s2 + 0x348]
         t3 = 0 + 1               // lo
         t1 = 0 + 1               // lo
         bgtzl t7, 0x803f643c     // fcn.803f04b0+0x5f8c // unlikely
         t1 = [sp + 0x90]         // t9

    loc_0x803f632c: // orphan
         [s2 + 0x348] = 0
         [s7 + 0x354] = t3
         goto 0x803f6438          // fcn.803f04b0+0x5f88
         [sp + 0x90] = t1

    loc_0x803f635c: // orphan
         t2 = [s3 + 0]
         v0 = t2 & v1
         // CODE XREF from fcn.80400480 @ 0x803f0630
         beql v0, 0, 0x803f63bc   // likely
         s3 += 4

    loc_0x803f636c: // orphan
         if                       // unlikely
         s0 = s7 + s4

    loc_0x803f6374: // orphan
         t9 = 0x86b1 << 16
         t9 -= 0x2e04
         // CODE XREF from fcn.803f0600 @ +0x38
         [s0 + 0x34] = s2
         s1 = s4 + t9
         call 0x86b05738          // 0x86b05738(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f2

    loc_0x803f6390: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f063c
         swc1 f0, 0x58, s0
         at = 0x86b1 << 16

    loc_0x803f6398: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0634
         c.lt.s f0, f2
         sub.s f16, f0, f2
         bc1f 0x803f63b8
         swc1 f16, 0xfc, s0
         lwc1 f18, 0xfc, s0
         lwc1 f4, -0x2278, at
         add.s f6, f18, f4
         swc1 f6, 0xfc, s0

    loc_0x803f63b8: // orphan
         s3 += 4

    loc_0x803f63bc: // orphan
         at = , unsigned  , s3 < s5
         s4 += 4
         if                       // unlikely
         v1 = [sp + 0x88]

    loc_0x803f63cc: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xaf06
         t4 = [s7 + 0x344]        // t9
         bnel t4, 0, 0x803f643c   // fcn.803f04b0+0x5f8c // likely
         t1 = [sp + 0x90]

    loc_0x803f63e0: // orphan
         call 0x86b052bc          // "$\r" // 0x86b052bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         t5 = 0 + 1               // lo
         s3 = 0x86b1 << 16
         [s7 + 0x344] = t5
         s3 -= 0x27c8
         s1 = 0
         s6 = 0 + 4
         v1 = [sp + 0x88]

    loc_0x803f6404: // orphan
         t6 = [s3 + 0]
         a0 = 0 | 0xaf0b
         a1 = s1 & 0xff
         t7 = t6 & v1
         if                       // likely
         t3 = s1 << 1

    loc_0x803f641c: // orphan
         a2 = s7 + t3
         call 0x8002781c          // 0x8002781c(-1, 0x442f71dcfe116408, 0x1000000fd, -1)
         a2 += 0x49c
         v1 = [sp + 0x88]

    loc_0x803f642c: // orphan
         s1 += 1
         if                       // likely
         s3 += 4

    loc_0x803f6878: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0694
         call 0x87f025b8          // 0x87f025b8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x38] = a2
         a0 = [sp + 0x30]         // v1
         a1 = [sp + 0x34]
         a2 = [sp + 0x38]
         if                       // unlikely
         v1 = v0                  // s4

    loc_0x803f6894: // orphan
         t6 = a1 << 5
         t7 = a2 << 2             // k0
         t7 -= a2
         t6 -= a1
         t6 <<= 2
         t7 <<= 3
         t7 += a2
         t6 += a1
         t9 = a0 << 2
         t2 = [sp + 0x3c]
         t9 += a0
         t6 <<= 3

    loc_0x803f68c4: // orphan
         t7 <<= 2
         t8 = t6 + t7
         t9 <<= 1
         t1 = t8 + t9
         t3 = t1 + t2
         if                       // unlikely
         [v0 + 0x20] = t3

    loc_0x803f68e0: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x803f68ec: // orphan
         if                       // unlikely
         

    loc_0x803f68f4: // orphan
         goto 0x803f6958
         

    loc_0x803f68fc: // orphan
         mtc1 0, f0
         
         swc1 f0, 0x48, v0
         swc1 f0, 0x4c, v0
         goto 0x803f6958
         swc1 f0, 0x50, v0

    loc_0x803f6914: // orphan
         at = 0x86b1 << 16
         lwc1 f4, -0x2274, at
         at = 0xc120 << 16
         mtc1 0, f0
         mtc1 at, f6
         swc1 f4, 0x48, v0
         swc1 f0, 0x50, v0
         goto 0x803f6958
         swc1 f6, 0x4c, v0

    loc_0x803f6938: // orphan
         at = 0x86b1 << 16
         lwc1 f8, -0x2270, at
         at = 0xc120 << 16
         mtc1 0, f0
         mtc1 at, f10
         swc1 f8, 0x48, v0
         swc1 f0, 0x50, v0
         swc1 f10, 0x4c, v0

    loc_0x803f6958: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f68f4, 0x803f690c, 0x803f6930
         at = 0x86b1 << 16
         lwc1 f0, -0x226c, at
         [v1 + 0x1c] = 0
         s0 = v1 + 0x24
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1

    loc_0x803f6974: // orphan
         [sp + 0x38] = a2
         [sp + 0x24] = v1
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f069c
         a0 = s0
         a1 = [sp + 0x34]
         at = 0x86b1 << 16
         lwc1 f0, -0x2268, at
         v1 = [sp + 0x24]
         if                       // likely
         a2 = [sp + 0x38]

    loc_0x803f699c: // orphan
         t0 = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x803f69a8: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f69b0: // orphan
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f69b8: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f69c0: // orphan
         at = 0 + 1               // lo

    loc_0x803f69c4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06a0
         if                       // unlikely
         a0 = s0

    loc_0x803f69cc: // orphan
         goto 0x803f6a08
         t4 = [sp + 0x3c]

    loc_0x803f69d4: // orphan
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e6c]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         goto 0x803f6a08
         t4 = [sp + 0x3c]

    loc_0x803f69f0: // orphan
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e68]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         t4 = [sp + 0x3c]

    loc_0x803f6a08: // orphan
         // CODE XREF from fcn.803f0600 @ +0xa4
         // CODE XREFS from fcn.80400480 @ 0x803f69cc, 0x803f69e8
         at = 0 + 1               // lo
         a0 = s0

    loc_0x803f6a10: // orphan
         if                       // unlikely
         

    loc_0x803f6a18: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f6a20: // orphan
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6a28: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x0, 0x8, -1)
         a1 = 0
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6a44: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x1, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6a60: // orphan
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         if                       // unlikely
         swc1 f0, 0x54, v1

    loc_0x803f6a70: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f6a78: // orphan
         goto 0x803f6ad4
         v0 = [sp + 0x3c]

    loc_0x803f6a80: // orphan
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e70]       // t9
         a0 = s0
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x104, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x0, -1, -1)
         a1 = 0
         goto 0x803f6ad0
         t0 = 0 + 1               // lo

    loc_0x803f6aac: // orphan
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e70]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x0, -1, -1)
         a1 = 0
         t0 = 0 + 1               // lo

    loc_0x803f6ad0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f6aa4
         v0 = [sp + 0x3c]

    loc_0x803f6ad4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f6a78
         a0 = s0
         if                       // unlikely
         

    loc_0x803f6ae0: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f6ae8: // orphan
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6af0: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x0, 0x8, -1)
         a1 = 0
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6b0c: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f06ac
         a1 = 0 + 1               // lo
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x1, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6b28: // orphan
         at = 0x3f00 << 16

    loc_0x803f6b2c: // orphan
         mtc1 at, f0
         mtc1 0, f16
         a3 = 0x86b1 << 16
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1
         swc1 f16, 0x50, v1
         a3 = [a3 - 0x1e78]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)

    loc_0x803f6b54: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06b0
         a2 = 0 - 1               // s2
         v0 = [sp + 0x3c]
         at = 0 + 1               // lo
         a0 = s0
         if                       // likely
         

    loc_0x803f6b6c: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x803f6b74: // orphan
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6b7c: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x1, 0x8, -1)
         a1 = 0
         goto 0x803f6bb0
         ra = [sp + 0x1c]

    loc_0x803f6b98: // orphan
         // CODE XREF from fcn.803f0600 @ +0xb4
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x2, 0x8, -1)
         a1 = 0 + 1               // lo

    loc_0x803f6bac: // orphan
         ra = [sp + 0x1c]

    loc_0x803f6bb0: // orphan
         // XREFS: CODE 0x803f69b0  CODE 0x803f6a20  CODE 0x803f6a3c  
         // XREFS: CODE 0x803f6a58  CODE 0x803f6ae8  CODE 0x803f6b04  
         // XREFS: CODE 0x803f6b20  CODE 0x803f6b74  CODE 0x803f6b90  
         s0 = [sp + 0x18]         // v1
         sp += 0x30
         ret                      // ra
         

    loc_0x803f6c00: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06bc
         a1 = [v0 + 0]            // t9
         lwc1 f4, 0x50, a1        // arg2
         lwc1 f6, 0x18, a1        // arg2
         add.s f8, f4, f6
         swc1 f8, 0x50, a1        // arg2

    loc_0x803f6c14: // orphan
         a1 = [v0 + 0]            // t9
         t6 = [a1 + 0x20]         // arg2 // t9
         lwc1 f10, 0x14, a1       // arg2
         divu 0, t6, a0           // arg1
         t7 = lo
         // CODE XREF from fcn.80400480 @ 0x803f06c4
         mtc1 t7, f16
         if                       // likely
         

    loc_0x803f6c34: // orphan
         break 7

    loc_0x803f6c38: // orphan
         cvt.s.w f18, f16

    loc_0x803f6c3c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06c8
         bgezl t7, 0x803f6c58     // likely
         sub.s f6, f10, f18

    loc_0x803f6c44: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         
         add.s f18, f18, f4
         sub.s f6, f10, f18

    loc_0x803f6c58: // orphan
         swc1 f6, 0x14, a1        // arg2
         a1 = [v0 + 0]            // t9
         t9 = [a1 + 0x20]         // arg2
         t8 = , unsigned  byte [a1 + 0x41] // arg2 // s4
         divu 0, t9, a0           // arg1
         t0 = hi
         t1 = t8 - t0
         byte [a1 + 0x41] = t1    // arg2
         a1 = [v0 + 0]            // t9
         if                       // likely
         

    loc_0x803f6c84: // orphan
         break 7

    loc_0x803f6c88: // orphan
         t2 = [a1 + 0x1c]         // arg2 // t9
         a0 = 0x87f1 << 16

    loc_0x803f6c90: // orphan
         at = , t2 < 0x19
         if                       // unlikely
         

    loc_0x803f6c9c: // orphan
         v1 = 0 + 1               // lo

    loc_0x803f6ca0: // orphan
         beql v1, 0, 0x803f6cb4   // unlikely
         ra = [sp + 0x14]         // lo

    loc_0x803f6ca8: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         // CODE XREF from fcn.803f0600 @ +0xcc
         ra = [sp + 0x14]         // lo

    loc_0x803f6cb4: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803f6d48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06d4
         at = 0 + 4

    loc_0x803f6d4c: // orphan
         if                       // unlikely
         at = 0 + 8               // a2

    loc_0x803f6d54: // orphan
         if                       // unlikely
         t7 = 0 + 0x51

    loc_0x803f6d5c: // orphan
         at = 0x41c0 << 16
         mtc1 at, f8
         t8 = 0 + 0xd
         [v0 + 0x1c] = t8
         [v0 + 0x20] = t7
         goto 0x803f6e10
         swc1 f8, 0x14, v0

    loc_0x803f6d78: // orphan
         [sp + 0x24] = v1
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x38] = a2
         at = 0 + 3
         div 0, v0, at
         a0 = hi
         v1 = [sp + 0x24]
         a1 = 0 + 1               // lo
         a2 = [sp + 0x38]
         a3 = [sp + 0x30]         // v1
         t0 = [sp + 0x3c]
         lwc1 f2, 0x40, sp
         if                       // unlikely
         lwc1 f12, 0x48, sp

    loc_0x803f6db0: // orphan
         if                       // unlikely
         at = 0x4150 << 16

    loc_0x803f6db8: // orphan
         at = 0 + 2
         beql a0, at, 0x803f6dfc  // unlikely
         at = 0x4148 << 16

    loc_0x803f6dc4: // orphan
         goto 0x803f6e10
         [v1 + 0x1c] = 0

    loc_0x803f6dcc: // orphan
         at = 0x4140 << 16
         mtc1 at, f10
         t9 = 0 + 0x23
         [v1 + 0x20] = t9
         goto 0x803f6e0c
         swc1 f10, 0x14, v1

    loc_0x803f6de4: // orphan
         mtc1 at, f16
         t2 = 0 + 0x23
         [v1 + 0x20] = t2
         goto 0x803f6e0c
         swc1 f16, 0x14, v1

    loc_0x803f6dfc: // orphan
         mtc1 at, f18
         t3 = 0 + 0x23
         // CODE XREF from fcn.80400480 @ 0x803f06e0
         [v1 + 0x20] = t3
         swc1 f18, 0x14, v1

    loc_0x803f6e0c: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f6ddc, 0x803f6df0
         [v1 + 0x1c] = 0

    loc_0x803f6e10: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f6d70, 0x803f6dc4
         t4 = a2 - 1
         at = , unsigned  , t4 < 0xf // lo

    loc_0x803f6e18: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06e4
         if                       // unlikely
         t4 <<= 2

    loc_0x803f6e20: // orphan
         at = 0x86b1 << 16
         at += t4
         t4 = [at - 0x2264]       // t9
         goto t4                  // t9
         

    loc_0x803f6e60: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06ec
         lwc1 f4, 0x14, v0
         div.s f6, f4, f0
         swc1 f6, 0x10, v1
         lwc1 f8, 0x18, v0
         div.s f10, f8, f0
         goto 0x803f7360
         swc1 f10, 0x18, v1

    loc_0x803f6eb8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0704
         v0 = 0x86b1 << 16
         goto 0x803f7360
         

    loc_0x803f6f14: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f0700, 0x803f0710
         sub.s f4, f18, f12
         div.s f6, f4, f0

    loc_0x803f6f1c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f06f8
         goto 0x803f7360
         swc1 f6, 0x18, v1

    loc_0x803f7254: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0740
         v0 += 0x7a78
         lwc1 f6, 0x14, v0
         lwc1 f8, 0x1c, v0

    loc_0x803f7260: // orphan
         lwc1 f10, 0x2c, v0
         at = 0x41c8 << 16

    loc_0x803f7268: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0744
         add.s f4, f6, f8
         mtc1 at, f0

    loc_0x803f7270: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f073c
         at = 0xc040 << 16
         mtc1 at, f2
         add.s f16, f10, f4
         mul.s f18, f16, f2
         div.s f6, f18, f0
         swc1 f6, 0x10, v1
         lwc1 f10, 0x20, v0
         lwc1 f8, 0x18, v0
         lwc1 f16, 0x30, v0
         add.s f4, f8, f10
         add.s f18, f16, f4
         mul.s f6, f18, f2
         div.s f8, f6, f0
         goto 0x803f7360
         swc1 f8, 0x18, v1

    loc_0x803f7360: // orphan
         // XREFS: CODE 0x803f6e74  CODE 0x803f6ea4  CODE 0x803f6ebc  
         // XREFS: CODE 0x803f6f1c  CODE 0x803f6f64  CODE 0x803f6f94  
         // XREFS: CODE 0x803f6fac  CODE 0x803f6fb4  CODE 0x803f6fdc  
         // XREFS: CODE 0x803f700c  CODE 0x803f705c  CODE 0x803f70ac  
         // XREFS: CODE 0x803f70fc  CODE 0x803f714c  CODE 0x803f719c  
         // XREFS: CODE 0x803f71ec  CODE 0x803f7248  CODE 0x803f72a4  
         // XREFS: CODE 0x803f7300  
         at = 0x86b1 << 16
         lwc1 f0, -0x2228, at
         a0 = v1 + 0x24           // arg1
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1
         [sp + 0x18] = a0
         call 0x8003f1dc          // 0x8003f1dc(0x244, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v1
         a3 = [sp + 0x30]         // v1
         v1 = [sp + 0x24]
         a1 = 0 + 1               // lo
         if                       // unlikely
         t1 = [sp + 0x34]

    loc_0x803f7398: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0758
         at = 0x86b1 << 16

    loc_0x803f73a0: // orphan
         at = 0 + 2
         if                       // unlikely
         a1 = 0

    loc_0x803f73ac: // orphan
         goto 0x803f74d8
         ra = [sp + 0x14]         // lo

    loc_0x803f73b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7390
         if                       // unlikely
         a0 = [sp + 0x18]

    loc_0x803f73bc: // orphan
         if                       // unlikely
         a0 = [sp + 0x18]

    loc_0x803f73c4: // orphan
         goto 0x803f7400
         a0 = [sp + 0x18]

    loc_0x803f73cc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f73b4
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e6c]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         goto 0x803f7400
         a0 = [sp + 0x18]

    loc_0x803f73e8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f73bc
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e68]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = [sp + 0x18]

    loc_0x803f7400: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f73c4, 0x803f73e0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = [sp + 0x18]
         call 0x8003eb74          // 0x8003eb74(0x244, 0x1, 0x8, -1)

    loc_0x803f7410: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f075c
         a1 = 0
         goto 0x803f74d8
         ra = [sp + 0x14]         // lo

    loc_0x803f741c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7398
         lwc1 f0, -0x2224, at
         a2 = 0 - 1               // s2
         a3 = 0x86b1 << 16
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         if                       // unlikely
         swc1 f0, 0x54, v1

    loc_0x803f7438: // orphan
         if                       // unlikely
         a0 = [sp + 0x18]

    loc_0x803f7440: // orphan
         goto 0x803f7478
         a0 = [sp + 0x18]

    loc_0x803f7448: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7430
         a0 = [sp + 0x18]
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x244, 0x0, 0x8, -1)
         a3 = [a3 - 0x1e74]       // t9
         goto 0x803f7478
         a0 = [sp + 0x18]

    loc_0x803f7460: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7438
         a3 = 0x86b1 << 16

    loc_0x803f7464: // orphan
         a3 = [a3 - 0x1e74]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = [sp + 0x18]

    loc_0x803f7478: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f7440, 0x803f7458
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = [sp + 0x18]
         call 0x8003eb74          // 0x8003eb74(0x244, 0x1, 0x8, -1)
         a1 = 0
         goto 0x803f74d8
         ra = [sp + 0x14]         // lo

    loc_0x803f7494: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f73a4
         at = 0x3f00 << 16
         mtc1 at, f0
         a3 = 0x86b1 << 16
         a2 = 0 - 1               // s2
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1
         a3 = [a3 - 0x1e78]       // t9
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, -1, -1)
         a0 = [sp + 0x18]
         a0 = [sp + 0x18]
         call 0x8003f210          // 0x8003f210(0x244, 0x442f71dcfe116408, -1, -1)
         a1 = 0 + 2
         a0 = [sp + 0x18]
         call 0x8003eb74          // 0x8003eb74(0x244, 0x2, -1, -1)
         a1 = 0
         ra = [sp + 0x14]         // lo

    loc_0x803f74d8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f73ac, 0x803f7414, 0x803f748c
         sp += 0x30
         ret                      // ra
         

    loc_0x803f762c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0778
         a0 += 0x2ad0             // arg1
         beql v0, 0, 0x803f7768   // unlikely
         ra = [sp + 0x1c]

    loc_0x803f7638: // orphan
         mtc1 0, f2

    loc_0x803f763c: // orphan
         [v0 + 0x1c] = 0
         at = 0x86b1 << 16
         swc1 f2, 0x48, v0
         swc1 f2, 0x4c, v0
         swc1 f2, 0x50, v0
         t6 = [sp + 0x28]
         s0 = v0 + 0x24
         a0 = s0
         [v0 + 0x20] = t6
         lwc1 f4, -0x2e88, at
         at = 0x86b1 << 16
         ldc1 f8, -0x2220, at
         cvt.d.s f6, f4
         mul.d f10, f6, f8
         cvt.s.d f0, f10
         swc1 f0, 0x5c, v0
         swc1 f0, 0x58, v0
         swc1 f0, 0x54, v0
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v0
         t7 = [sp + 0x28]
         v1 = [sp + 0x24]         // s4
         a0 = s0
         if                       // likely
         a1 = 0

    loc_0x803f76a0: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x803f76ac: // orphan
         goto 0x803f7768
         ra = [sp + 0x1c]

    loc_0x803f76b4: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f0780, 0x803f7698
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1e64]       // t9
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = s0

    loc_0x803f76c8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0784
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         goto 0x803f7768
         ra = [sp + 0x1c]

    loc_0x803f76d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f76a4
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.803f0600 @ +0x188
         [sp + 0x24] = v1
         at = 0x4234 << 16
         mtc1 at, f16
         at = 0x86b1 << 16
         lwc1 f18, -0x2e84, at
         at = 0 | 0xffff
         div 0, v0, at
         t0 = hi
         mul.s f0, f16, f18
         t0 &= 0xffff
         t0 = , signed  t0 >> 4
         t0 <<= 2
         at = 0x8009 << 16
         // CODE XREF from fcn.80400480 @ 0x803f078c
         at += t0
         lwc1 f4, -0x71b0, at
         v1 = [sp + 0x24]
         at = 0x8008 << 16

    loc_0x803f7720: // orphan
         mul.s f6, f4, f0
         at += t0
         mtc1 0, f16
         a3 = 0x86b1 << 16
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         swc1 f6, 0x48, v1
         lwc1 f8, 0x7e50, at
         swc1 f16, 0x50, v1
         mul.s f10, f8, f0
         swc1 f10, 0x4c, v1
         call 0x8003f114          // 0x8003f114(0x104, 0x0, -1, 0x86b10000)

    loc_0x803f7754: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0790
         a3 = [a3 - 0x1e60]       // t9
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         ra = [sp + 0x1c]

    loc_0x803f7768: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f7630, 0x803f76ac, 0x803f76d0
         s0 = [sp + 0x18]
         sp += 0x28
         ret                      // ra
         

    loc_0x803f77c0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f079c
         a0 = [a0 + 0x19d8]       // arg1 // t9
         ra = [sp + 0x14]         // lo

    loc_0x803f77c8: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f77b4
         sp += 0x18
         ret                      // ra
         

    loc_0x803f77ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07a8
         [sp + 0x30] = a2
         [sp + 0x34] = a3
         a1 += 0x5428             // arg2
         call 0x87f025b8          // 0x87f025b8(-1, 0x442f71dcfe11b830, 0x8, -1)
         a0 += 0x3a68
         if                       // fcn.803f7830+0x58 // unlikely
         at = 0x86b1 << 16

    loc_0x803f7808: // orphan
         [v0 + 0x1c] = 0
         lwc1 f4, -0x2e88, at
         at = 0x86b1 << 16
         ldc1 f8, -0x2218, at

    loc_0x803f7818: // orphan
         cvt.d.s f6, f4
         a0 = v0 + 0x24           // arg1
         mul.d f10, f6, f8
         cvt.s.d f0, f10
         swc1 f0, 0x5c, v0
         swc1 f0, 0x58, v0

    loc_0x803f79d0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07cc
         s2 = 0 + 0x11
         s1 = 0 + 0x10
         v0 = [s0 + 0x34]         // t9

    loc_0x803f79dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7a48
         if                       // unlikely
         

    loc_0x803f79e4: // orphan
         if                       // unlikely
         

    loc_0x803f79ec: // orphan
         if                       // unlikely
         

    loc_0x803f79f4: // orphan
         bnel v0, 0, 0x803f7a48   // likely
         s0 += 4

    loc_0x803f79fc: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f79dc, 0x803f79e4, 0x803f79ec
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         mul.s f20, f0, f24

    loc_0x803f7a08: // orphan
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         mul.s f4, f0, f24
         sub.s f2, f26, f20
         // CODE XREF from fcn.80400480 @ 0x803f07d4
         mul.s f6, f2, f2
         sub.s f12, f28, f4
         mul.s f8, f12, f12
         add.s f10, f6, f8
         cvt.d.s f16, f10
         c.lt.d f16, f22
         
         bc1fl 0x803f7a48
         s0 += 4

    loc_0x803f7a3c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07d8
         goto 0x803f7a54
         v0 = 0 + 1               // lo

    loc_0x803f7a48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f79f4
         bnel s0, s4, 0x803f79dc  // likely
         v0 = [s0 + 0x34]         // t9

    loc_0x803f7a50: // orphan
         v0 = 0

    loc_0x803f7a54: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f7a3c
         ra = [sp + 0x54]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         ldc1 f28, 0x38, sp
         s0 = [sp + 0x40]
         s1 = [sp + 0x44]

    loc_0x803f7a74: // orphan
         s2 = [sp + 0x48]
         s3 = [sp + 0x4c]
         s4 = [sp + 0x50]
         ret                      // ra
         sp += 0x58

    loc_0x803f7b98: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07e4
         t8 -= 4

    loc_0x803f7b9c: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803f7b88, 0x803f7b90
         [sp + 0x16c] = t8
         at = 0x4280 << 16

    loc_0x803f7ba4: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f7b78
         mtc1 at, f30
         at = 0x3f00 << 16
         mtc1 at, f28

    loc_0x803f7bb0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07ec
         at = 0x3ff0 << 16
         mtc1 at, f27
         at = 0x86b1 << 16
         lwc1 f24, -0x21f8, at
         at = 0x4348 << 16
         mtc1 at, f22
         t9 = 0x86b1 << 16
         s0 = t9 + 0x7a78
         at = 0x4302 << 16
         fp = 0x8008 << 16
         s5 = 0x86b1 << 16
         mtc1 at, f20
         mtc1 0, f26
         s5 += 0x7a78
         fp += 0x7e50
         s2 = s0
         s3 = s0
         s4 = 0

    loc_0x803f7bf8: // orphan
         s6 = 0
         s7 = 0 | 0xffff

    loc_0x803f7d98: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0804
         [s0 + 0x384] = t3

    loc_0x803f7e04: // orphan
         lwc1 f20, -0x2188, at
         // CODE XREF from fcn.803f7c80 @ +0x158
         at = 0x86b1 << 16
         // CODE XREF from fcn.803f0600 @ +0x21c
         lwc1 f20, -0x2184, at
         // CODE XREF from fcn.803f7c80 @ +0x164
         lwc1 f6
         lwc1 f8, 0xf8, s5
         lwc1 f14, 0x58, s0
         call 0x86b08120          // 0x86b08120(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0820
         add.s f12, f6, f8

    loc_0x803f7e1c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0818
         lwc1 f4, 0xfc, s0
         mtc1 0, f6
         t9 = 0 + 2
         add.s f0, f10, f4
         [s0 + 0x34] = t9
         c.lt.s f0, f6
         swc1 f0, 0x58, s0
         bc1f 0x803f7e4c
         
         lwc1 f8, 0x58, s0
         add.s f10, f8, f24
         swc1 f10, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0

    loc_0x803f7e54: // orphan
         lwc1 f4, 0x48, s0
         mul.s f22, f0, f4
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803f7e64: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0830
         lwc1 f12, 0x58, s0
         lwc1 f6, 0x48, s0
         neg.s f12, f22
         mul.s f20, f0, f6
         swc1 f20, 0x18, s2

    loc_0x803f7e78: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0834
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0828
         neg.s f14, f20
         at = 0x4302 << 16
         mtc1 at, f10
         halfword [s3 + 0xe8] = v0
         lwc1 f8, 0x48, s0

    loc_0x803f7e90: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f082c
         at = 0x4248 << 16
         mtc1 at, f4
         at = 0x86b1 << 16
         swc1 f10, 0x11c, s0
         swc1 f8, 0x10c, s0
         lwc1 f6, -0x2e0c, at
         lwc1 f12
         [s0 + 0x13c] = 0
         div.s f8, f4, f6
         lwc1 f4, 0xfc, s0
         at = 0x86b1 << 16
         add.s f0, f12, f4
         swc1 f0, 0x14c, s0
         trunc.w.s f10, f8
         cvt.d.s f8, f0
         mfc1 t2, f10
         
         [s0 + 0x12c] = t2
         ldc1 f6, -0x2180, at
         c.lt.d f6, f8
         
         bc1fl 0x803f7efc
         t3 = [s0 + 0x12c]        // s4
         lwc1 f10, 0x14c, s0
         sub.s f4, f10, f24
         swc1 f4, 0x14c, s0
         t3 = [s0 + 0x12c]        // s4
         at = 0x86b1 << 16
         ldc1 f6, -0x2178, at
         mtc1 t3, f8
         
         cvt.d.w f10, f8

    loc_0x803f7f10: // orphan
         lwc1 f8, 0xf8, s5
         mul.d f4, f6, f10
         cvt.d.s f6, f8
         cvt.d.s f8, f12
         sub.d f10, f6, f4
         add.d f6, f8, f10
         mtc1 0, f10
         cvt.s.d f4, f6
         swc1 f4, 0x15c, s0
         lwc1 f0, 0x15c, s0
         c.lt.s f24, f0
         
         bc1fl 0x803f7f58
         c.lt.s f0, f10
         sub.s f8, f0, f24
         swc1 f8, 0x15c, s0
         lwc1 f0, 0x15c, s0
         c.lt.s f0, f10
         
         bc1fl 0x803f7f70
         lwc1 f4, 0x48, s0
         add.s f6, f0, f24
         swc1 f6, 0x15c, s0
         lwc1 f4, 0x48, s0
         swc1 f4, 0x16c, s0
         lwc1 f8, 0x14, s2
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f10, f8, f30
         a0 = s4
         a1 = 0
         div.s f6, f10, f20
         trunc.w.s f4, f6
         mfc1 t5, f4
         
         byte [s3 + 0x49c] = t5
         lwc1 f8, 0x18, s2
         mul.s f10, f8, f30
         div.s f6, f10, f20

    loc_0x803f7fac: // orphan
         trunc.w.s f4, f6
         mfc1 t6, f4
         call 0x86b07d94          // 0x86b07d94(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s3 + 0x49d] = t6
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         goto 0x803fa040          // fcn.803f8efc+0x1144
         v0 = [s0 + 0x34]

    loc_0x803f8110: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f087c
         lwc1 f12, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         lwc1 f8, 0x48, s0
         mul.s f22, f0, f8

    loc_0x803f8124: // orphan
         // CODE XREF from fcn.803f0600 @ +0x280
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f10, 0x48, s0
         neg.s f12, f22

    loc_0x803f8138: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0884
         mul.s f20, f0, f10
         swc1 f12, 0x88, sp
         neg.s f14, f20
         swc1 f20, 0x18, s2
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f14, 0x84, sp
         t9 = v0 - 0x3fff
         div 0, t9, s7
         t1 = hi
         halfword [s3 + 0xf0] = t1
         t2 = [s0 + 0xb8]         // t9
         lwc1 f12, 0x88, sp
         lwc1 f14, 0x84, sp
         if                       // likely
         

    loc_0x803f8174: // orphan
         break 7

    loc_0x803f8178: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f816c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f8184: // orphan
         if                       // likely
         

    loc_0x803f818c: // orphan
         break 6

    loc_0x803f8190: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f817c, 0x803f8184
         at = 0 + 0xe
         bnel t2, at, 0x803f81dc  // likely
         at = 0x4302 << 16

    loc_0x803f819c: // orphan
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t3 = v0 - 0x3fff
         div 0, t3, s7
         t4 = hi

    loc_0x803f81b0: // orphan
         halfword [s3 + 0xe8] = t4
         if                       // likely
         

    loc_0x803f81bc: // orphan
         break 7

    loc_0x803f81c0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f81b4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f81cc: // orphan
         if                       // likely
         

    loc_0x803f81d4: // orphan
         break 6

    loc_0x803f81d8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803f81c4, 0x803f81cc
         at = 0x4302 << 16

    loc_0x803f81dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f8194
         mtc1 at, f6
         lwc1 f2, 0x48, s0
         at = 0x86b1 << 16
         c.eq.s f6, f2
         
         bc1tl 0x803f82a8
         lwc1 f8, 0x14, s2
         lwc1 f4, -0x2e08, at
         at = 0x86b1 << 16
         lwc1 f8, -0x2e0c, at
         at = 0x4302 << 16
         mul.s f10, f4, f8
         mtc1 at, f4
         add.s f6, f2, f10
         c.le.s f4, f6
         

    loc_0x803f821c: // orphan
         bc1f 0x803f8240
         
         lwc1 f8, 0x98, s2
         lwc1 f10, 0x9c, s2
         sub.s f12, f22, f8
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         sub.s f14, f20, f10
         goto 0x803f82a4          // fcn.803f089c+0x7a08
         halfword [s3 + 0xf0] = v0

    loc_0x803f8b68: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0934
         lwc1 f8, 0x14c, s0
         sub.s f4, f8, f24
         swc1 f4, 0x14c, s0
         t2 = [s0 + 0x12c]        // s4
         at = 0x86b1 << 16
         ldc1 f6, -0x2110, at
         mtc1 t2, f10
         at = 0x4348 << 16
         mtc1 at, f22
         cvt.d.w f8, f10
         lwc1 f10, 0xf8, s5
         at = 0x4302 << 16
         mtc1 at, f20
         mul.d f4, f6, f8
         cvt.d.s f6, f10
         cvt.d.s f10, f12
         sub.d f8, f6, f4
         add.d f6, f10, f8
         mtc1 0, f8
         cvt.s.d f4, f6
         swc1 f4, 0x15c, s0
         lwc1 f0, 0x15c, s0
         c.lt.s f24, f0
         
         bc1fl 0x803f8be0

    loc_0x803f8bcc: // orphan
         c.lt.s f0, f8
         sub.s f10, f0, f24
         swc1 f10, 0x15c, s0
         lwc1 f0, 0x15c, s0
         c.lt.s f0, f8
         
         bc1fl 0x803f8bf8
         lwc1 f4, 0x48, s0
         add.s f6, f0, f24
         swc1 f6, 0x15c, s0
         lwc1 f4, 0x48, s0
         v0 = [s0 + 0x34]
         goto 0x803fa040          // fcn.803f8efc+0x1144
         swc1 f4, 0x16c, s0

    loc_0x803f8c20: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f093c
         mtc1 at, f4
         t3 = a0 + 1              // arg1
         [s0 + 0x13c] = t3
         at = 0x86b1 << 16
         cvt.s.w f2, f10
         mul.s f10, f6, f4
         lwc1 f6, -0x2108, at
         mtc1 0, f4
         at = 0x8009 << 16
         div.s f8, f10, f2
         mul.s f0, f8, f6
         c.le.s f4, f0
         
         bc1fl 0x803f8c74

    loc_0x803f8c58: // orphan
         sub.s f6, f0, f28
         add.s f10, f0, f28
         trunc.w.s f8, f10
         mfc1 v1, f8
         goto 0x803f8c84
         mtc1 0, f10

    loc_0x803f8c84: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f8c68
         t9 = v1 & 0xffff
         t1 = , signed  t9 >> 4
         c.le.s f10, f0
         t2 = t1 << 2
         t3 = fp + t2
         bc1fl 0x803f8cb8
         sub.s f4, f0, f28
         add.s f8, f0, f28
         trunc.w.s f6, f8
         mfc1 v0, f6
         goto 0x803f8cc8
         lwc1 f8

    loc_0x803f8cc8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f8cac
         t4 = v0 & 0xffff         // s4
         t5 = , signed  t4 >> 4
         t7 = t5 << 2
         cvt.d.s f6, f8
         at += t7
         lwc1 f10, -0x71b0, at
         add.d f4, f6, f26
         at = 0x3fe0 << 16
         mtc1 at, f11
         cvt.d.s f8, f10
         mtc1 0, f10
         sub.d f6, f4, f8
         mtc1 0, f8
         at = 0x8009 << 16
         mul.d f4, f6, f10
         c.le.s f8, f0
         
         bc1f 0x803f8d28
         cvt.s.d f18, f4
         add.s f6, f0, f28
         trunc.w.s f10, f6
         mfc1 v1, f10
         goto 0x803f8d3c
         mtc1 0, f6

    loc_0x803f8d3c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f8d20
         t2 = v1 & 0xffff
         t3 = , signed  t2 >> 4

    loc_0x803f9348: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0994
         // CODE XREF from fcn.803f9320 @ 0x803f9328
         lwc1 f12, 0x58, s0
         mtc1 0, f4

    loc_0x803f9350: // orphan
         
         c.lt.s f12, f4
         
         bc1f 0x803f9370
         
         add.s f10, f12, f24
         swc1 f10, 0x58, s0
         lwc1 f12, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         lwc1 f6, 0x48, s0
         mul.s f22, f0, f6
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f8, 0x48, s0
         neg.s f12, f22
         mul.s f20, f0, f8
         swc1 f20, 0x18, s2
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         neg.s f14, f20
         t4 = v0 - 0x3fff
         div 0, t4, s7
         t5 = hi
         halfword [s3 + 0xf0] = t5
         lwc1 f4, 0x14, s2
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f10, f4, f30
         if                       // likely
         

    loc_0x803f93cc: // orphan
         break 7

    loc_0x803f93d0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f93dc: // orphan
         if                       // likely
         

    loc_0x803f93e4: // orphan
         break 6

    loc_0x803f93e8: // orphan
         div.s f6, f10, f20
         // CODE XREF from fcn.803f089c @ +0xfc
         a0 = s4
         a1 = 0 + 2
         trunc.w.s f8, f6
         mfc1 t6, f8
         

    loc_0x803f9400: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f099c
         byte [s3 + 0x49c] = t6
         lwc1 f4, 0x18, s2
         mul.s f10, f4, f30
         div.s f6, f10, f20
         trunc.w.s f8, f6
         mfc1 t9, f8
         call 0x86b07d94          // 0x86b07d94(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s3 + 0x49d] = t9
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         goto 0x803fa040          // fcn.803f8efc+0x1144
         v0 = [s0 + 0x34]

    loc_0x803f95e8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09b4
         mul.s f20, f0, f4
         swc1 f20, 0x18, s2
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         neg.s f14, f20
         halfword [s3 + 0xf0] = v0
         lwc1 f10, 0x14, s2
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f6, f10, f30
         a0 = s4
         a1 = 0 + 2
         div.s f8, f6, f20
         trunc.w.s f4, f8

    loc_0x803f961c: // orphan
         mfc1 t3, f4
         
         byte [s3 + 0x49c] = t3
         lwc1 f10, 0x18, s2
         mul.s f6, f10, f30
         div.s f8, f6, f20
         trunc.w.s f4, f8
         mfc1 t5, f4
         call 0x86b07d94          // 0x86b07d94(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s3 + 0x49d] = t5
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         goto 0x803fa040          // fcn.803f8efc+0x1144
         v0 = [s0 + 0x34]

    loc_0x803f96a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09bc
         v0 = [s0 + 0x34]
         t2 = 0x86b1 << 16
         t2 -= 0x2e04
         s1 = s6 + t2
         lwc1 f10
         lwc1 f6, 0xfc, s0
         mtc1 0, f8
         t1 = 0 + 0x16
         add.s f0, f10, f6
         [s0 + 0x34] = t1
         c.lt.s f0, f8

    loc_0x803f96cc: // orphan
         swc1 f0, 0x58, s0
         bc1f 0x803f96e4
         
         lwc1 f4, 0x58, s0
         add.s f10, f4, f24
         swc1 f10, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f6, 0x48, s0
         mul.s f22, f0, f6
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f8, 0x48, s0
         neg.s f12, f22
         mul.s f20, f0, f8
         swc1 f20, 0x18, s2
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         neg.s f14, f20
         t3 = v0 - 0x3fff
         div 0, t3, s7
         at = 0x42af << 16
         mtc1 at, f0
         t4 = hi
         halfword [s3 + 0xe8] = t4
         lwc1 f2, 0x48, s0
         if                       // likely
         

    loc_0x803f973c: // orphan
         break 7

    loc_0x803f9740: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f974c: // orphan
         if                       // likely
         

    loc_0x803f9754: // orphan
         break 6

    loc_0x803f9758: // orphan
         c.lt.s f0, f2
         at = 0x42af << 16
         swc1 f0, 0x11c, s0
         swc1 f2, 0x10c, s0
         bc1fl 0x803f979c
         mtc1 at, f10
         at = 0x42af << 16
         mtc1 at, f4
         at = 0x86b1 << 16
         lwc1 f6, -0x2e0c, at
         sub.s f10, f2, f4
         div.s f8, f10, f6
         trunc.w.s f4, f8
         mfc1 t7, f4
         // CODE XREF from fcn.80400480 @ 0x803f09cc
         goto fcn.803f97bc
         [s0 + 0x12c] = t7

    loc_0x803f97a4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09d0
         sub.s f6, f10, f2
         div.s f4, f6, f8
         trunc.w.s f10, f4
         mfc1 t8, f10
         
         [s0 + 0x12c] = t8

    loc_0x803f994c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09e8
         
         mtc1 0, f4
         t2 = v1 & 0xffff
         t3 = , signed  t2 >> 4
         c.le.s f4, f0

    loc_0x803f9960: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09ec
         t4 = t3 << 2
         t5 = fp + t4
         bc1fl 0x803f9988
         sub.s f6, f0, f28
         add.s f10, f0, f28
         trunc.w.s f8, f10
         mfc1 v0, f8
         goto 0x803f9998
         lwc1 f10

    loc_0x803f9998: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f997c
         t7 = v0 & 0xffff         // s4
         t6 = , signed  t7 >> 4
         t8 = t6 << 2
         cvt.d.s f8, f10
         at += t8
         lwc1 f4, -0x71b0, at
         add.d f6, f8, f26
         at = 0x3fe0 << 16
         mtc1 at, f5
         cvt.d.s f10, f4
         mtc1 0, f4
         sub.d f8, f6, f10

    loc_0x803f99c8: // orphan
         mtc1 0, f10
         at = 0x8009 << 16
         mul.d f6, f8, f4
         c.le.s f10, f0
         
         bc1f 0x803f99f8
         cvt.s.d f18, f6
         add.s f8, f0, f28
         trunc.w.s f4, f8
         mfc1 v1, f4
         goto 0x803f9a0c
         mtc1 0, f8

    loc_0x803f9a0c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f99f0
         t4 = v1 & 0xffff
         t5 = , signed  t4 >> 4
         c.le.s f8, f0

    loc_0x803f9a18: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f09f4
         t7 = t5 << 2
         t6 = fp + t7
         bc1fl 0x803f9a40
         sub.s f10, f0, f28
         add.s f4, f0, f28
         trunc.w.s f6, f4
         mfc1 v0, f6
         goto 0x803f9a50
         lwc1 f4

    loc_0x803f9a50: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9a34
         t8 = v0 & 0xffff         // s4
         t9 = , signed  t8 >> 4
         t1 = t9 << 2
         cvt.d.s f6, f4
         at += t1
         lwc1 f8, -0x71b0, at
         add.d f10, f6, f26
         at = 0x3fe0 << 16
         mtc1 at, f9
         cvt.d.s f4, f8
         mtc1 0, f8
         sub.d f6, f10, f4
         s1 = a0 + 1              // arg1
         at = 0x42b4 << 16
         mul.d f10, f6, f8
         cvt.s.d f12, f10
         cvt.d.s f10, f18
         cvt.d.s f4, f12
         swc1 f12, 0xd8, sp
         sub.d f6, f26, f4
         sub.d f4, f26, f10
         cvt.s.d f8, f6
         cvt.s.d f6, f4
         swc1 f8, 0xd4, sp
         mtc1 s1, f8
         mtc1 at, f4
         swc1 f6, 0xd0, sp
         cvt.s.w f10, f8
         at = 0x86b1 << 16
         mul.s f6, f10, f4
         lwc1 f10, -0x20cc, at
         mtc1 0, f4
         at = 0x8009 << 16
         div.s f8, f6, f2
         mul.s f0, f8, f10
         c.le.s f4, f0
         
         bc1fl 0x803f9b04
         sub.s f10, f0, f28
         add.s f6, f0, f28
         trunc.w.s f8, f6
         mfc1 v1, f8
         goto 0x803f9b14
         mtc1 0, f6

    loc_0x803f9b14: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9af8
         t7 = v1 & 0xffff
         t6 = , signed  t7 >> 4

    loc_0x803f9b1c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a08
         c.le.s f6, f0
         t8 = t6 << 2
         t9 = fp + t8
         bc1fl 0x803f9b48
         sub.s f4, f0, f28
         add.s f8, f0, f28
         trunc.w.s f10, f8
         mfc1 v0, f10
         goto 0x803f9b58
         lwc1 f8

    loc_0x803f9b58: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9b3c
         t1 = v0 & 0xffff         // s4
         t2 = , signed  t1 >> 4
         t3 = t2 << 2
         cvt.d.s f10, f8
         at += t3
         lwc1 f6, -0x71b0, at
         add.d f4, f10, f26
         at = 0x3fe0 << 16
         mtc1 at, f7
         cvt.d.s f8, f6
         mtc1 0, f6
         sub.d f10, f4, f8
         mtc1 0, f8
         at = 0x8009 << 16
         mul.d f4, f10, f6
         c.le.s f8, f0
         
         bc1f 0x803f9bb8
         cvt.s.d f16, f4
         add.s f10, f0, f28
         trunc.w.s f6, f10
         mfc1 v1, f6
         goto 0x803f9bcc
         mtc1 0, f10

    loc_0x803f9bcc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9bb0
         t8 = v1 & 0xffff
         t9 = , signed  t8 >> 4

    loc_0x803f9bd4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a10
         c.le.s f10, f0
         t1 = t9 << 2
         t2 = fp + t1
         bc1fl 0x803f9c00
         sub.s f8, f0, f28
         add.s f6, f0, f28
         trunc.w.s f4, f6
         mfc1 v0, f4
         goto 0x803f9c10
         lwc1 f6

    loc_0x803f9c10: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9bf4
         t3 = v0 & 0xffff         // s4
         t4 = , signed  t3 >> 4
         t5 = t4 << 2
         cvt.d.s f4, f6
         at += t5
         lwc1 f10, -0x71b0, at
         add.d f8, f4, f26
         at = 0x3fe0 << 16
         mtc1 at, f11
         cvt.d.s f6, f10
         mtc1 0, f10
         sub.d f4, f8, f6
         lwc1 f0, 0x15c, s0
         lwc1 f2, 0x14c, s0
         cvt.d.s f6, f16
         mul.d f8, f4, f10
         sub.d f4, f26, f6
         lwc1 f10, 0x10c, s0
         at = 0x86b1 << 16
         c.lt.s f0, f2
         cvt.s.d f14, f4
         cvt.s.d f12, f8
         cvt.d.s f8, f12
         sub.d f6, f26, f8
         cvt.s.d f4, f6
         lwc1 f6, 0x11c, s0
         mul.s f8, f10, f4
         
         mul.s f10, f6, f12
         bc1f 0x803f9ca0
         add.s f22, f8, f10
         mul.s f4, f2, f14
         
         mul.s f6, f0, f16
         goto 0x803f9cc8
         add.s f20, f4, f6

    loc_0x803f9cc8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9c98
         mtc1 0, f6
         
         c.lt.s f20, f6
         

    loc_0x803f9cd8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a24
         bc1f 0x803f9ce4
         
         add.s f20, f20, f24
         ldc1 f8, -0x20c8, at
         cvt.d.s f10, f20
         c.lt.d f8, f10
         
         bc1fl 0x803f9d04
         mov.s f12, f20
         sub.s f20, f20, f24
         mov.s f12, f20
         [sp + 0xe0] = a1
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f18, 0xdc, sp
         mul.s f4, f0, f22
         mov.s f12, f20
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f4, 0xb8, sp
         mul.s f6, f0, f22
         lwc1 f8, 0x48, s0
         lwc1 f10, 0x10c, s0
         lwc1 f4, 0xd4, sp
         swc1 f8, 0x16c, s0
         lwc1 f8, 0x11c, s0
         a1 = [sp + 0xe0]
         swc1 f6, 0xb4, sp
         mul.s f6, f10, f4
         lwc1 f10, 0xd8, sp
         lwc1 f18, 0xdc, sp
         at = 0x42af << 16
         mul.s f4, f8, f10
         add.s f8, f6, f4
         if                       // likely
         swc1 f8, 0x48, s0

    loc_0x803f9d60: // orphan
         mtc1 at, f10
         at = 0x86b1 << 16
         at += s6
         swc1 f10, 0x48, s0
         lwc1 f4, -0x2e04, at
         lwc1 f6, 0x15c, s0
         t7 = 0 + 0x17
         // CODE XREF from fcn.803f089c @ +0x18c
         [s0 + 0x34] = t7
         sub.s f8, f6, f4
         swc1 f8, 0xfc, s0

    loc_0x803f9d88: // orphan
         lwc1 f0, 0x15c, s0
         lwc1 f2, 0x14c, s0

    loc_0x803f9d90: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a2c
         lwc1 f10, 0xd0, sp
         at = 0x86b1 << 16
         c.lt.s f0, f2
         
         bc1fl 0x803f9dc4
         add.s f10, f2, f24
         mul.s f6, f2, f10
         
         mul.s f4, f0, f18
         add.s f8, f6, f4
         goto 0x803f9df4
         swc1 f8, 0x58, s0

    loc_0x803f9df4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9db8
         lwc1 f12, 0x58, s0
         mtc1 0, f4
         
         c.lt.s f12, f4
         
         bc1f 0x803f9e1c
         
         add.s f8, f12, f24
         swc1 f8, 0x58, s0
         lwc1 f12, 0x58, s0
         ldc1 f10, -0x20c0, at
         cvt.d.s f6, f12
         c.lt.d f10, f6
         
         bc1f 0x803f9e40
         
         sub.s f4, f12, f24
         swc1 f4, 0x58, s0
         lwc1 f12, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         lwc1 f8, 0x48, s0

    loc_0x803f9e4c: // orphan
         mul.s f22, f0, f8
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f10, 0x48, s0
         at = 0x42af << 16
         mtc1 at, f6
         mul.s f20, f0, f10
         swc1 f20, 0x18, s2
         lwc1 f4, 0x48, s0
         lwc1 f10, 0xb4, sp
         lwc1 f8, 0xb8, sp
         c.eq.s f6, f4
         // CODE XREF from fcn.80400480 @ 0x803f0a3c
         
         bc1tl 0x803f9ea4
         neg.s f12, f22
         sub.s f12, f8, f22
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803f9e94: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a40
         sub.s f14, f10, f20
         goto 0x803f9ee0
         halfword [s3 + 0xf0] = v0

    loc_0x803f9ee0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f9e98
         lwc1 f6, 0x14, s2
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f4, f6, f30
         a0 = s4
         a1 = 0
         div.s f8, f4, f20

    loc_0x803f9efc: // orphan
         trunc.w.s f10, f8
         mfc1 t1, f10
         
         byte [s3 + 0x49c] = t1
         lwc1 f6, 0x18, s2
         mul.s f4, f6, f30
         div.s f8, f4, f20
         trunc.w.s f10, f8
         mfc1 t3, f10
         call 0x86b07d94          // 0x86b07d94(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s3 + 0x49d] = t3
         // CODE XREF from fcn.803f089c @ +0x1a8
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         goto 0x803fa040          // fcn.803f8efc+0x1144
         // CODE XREF from fcn.80400480 @ 0x803f0a48
         v0 = [s0 + 0x34]

    loc_0x803fa12c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a58
         t1 <<= 2
         at = 0x86b1 << 16
         at += t1
         t1 = [at - 0x20b8]       // t9
         goto t1                  // t9
         

    loc_0x803fa1c8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a64
         t5 = [sp + 0x24]         // v1
         goto 0x803fa2ec
         halfword [t5 + 0xe8] = v0

    loc_0x803fa254: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a70
         v1 = halfword [sp + 0x2a]
         if                       // unlikely
         a3 = [sp + 0x34]         // t9

    loc_0x803fa260: // orphan
         v1 = 0 + 0x333

    loc_0x803fa264: // orphan
         a0 = s1 << 0x10          // arg1
         // CODE XREF from fcn.803f089c @ +0x1d8
         a1 = s0 << 0x10          // arg2
         a1 = , signed  a1 >> 0x10 // arg2 // s0
         a0 = , signed  a0 >> 0x10 // arg1
         halfword [sp + 0x2a] = v1
         call 0x86b08088          // 0x86b08088(0xffff7dbd, 0x104, 0x8, -1)
         [sp + 0x34] = a3
         at = , v0 < 0x333        // lo
         v1 = halfword [sp + 0x2a]
         if                       // unlikely
         a3 = [sp + 0x34]         // t9

    loc_0x803fa290: // orphan
         v1 = 0 + 0x199

    loc_0x803fa294: // orphan
         a0 = s1 << 0x10
         a1 = s0 << 0x10
         a1 = , signed  a1 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10
         if                       // likely
         a2 = , signed  v1 >> 2

    loc_0x803fa2ac: // orphan
         at = v1 + 3
         a2 = , signed  at >> 2

    loc_0x803fa2b4: // orphan
         a2 <<= 0x10
         call 0x86b07fb0          // 0x86b07fb0(-1, 0x442f71dcfe116408, 0x80000, -1)
         a2 = , signed  a2 >> 0x10
         t6 = [sp + 0x24]         // v1
         goto 0x803fa2ec
         halfword [t6 + 0xe8] = v0

    loc_0x803fa2ec: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803fa184
         // CODE XREFS from fcn.80400480 @ 0x803fa1cc, 0x803fa2c4
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]         // lo
         s1 = [sp + 0x18]
         ret
         sp += 0x30

    loc_0x803fa340: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a7c
         a2 = , signed  a2 >> 0x10 // arg3
         a1 = a2 << 0x10          // arg3
         a1 = , signed  a1 >> 0x10 // arg2
         [sp + 0x1c] = a2
         call 0x86b08088          // 0x86b08088(-1, 0x0, 0x0, -1)
         a0 = halfword [sp + 0x2a] // v1
         t7 = halfword [sp + 0x2e] // s4
         t8 = halfword [sp + 0x32] // a2
         halfword [sp + 0x24] = v0
         a0 = halfword [sp + 0x2a] // v1
         a1 = t7 - t8
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x86b08088          // 0x86b08088(0x220, 0xf7, 0x0, -1)
         [sp + 0x18] = a1
         v1 = [sp + 0x34]         // t9
         at = 0 + 1               // lo
         a1 = [sp + 0x18]
         if                       // likely
         a2 = [sp + 0x1c]

    loc_0x803fa390: // orphan
         goto 0x803fa3c8
         v0 = a1                  // t0

    loc_0x803fa398: // orphan
         at = 0 + 2
         if                       // likely
         t9 = halfword [sp + 0x24] // s4

    loc_0x803fa3a4: // orphan
         goto 0x803fa3c8
         v0 = a2

    loc_0x803fa3ac: // orphan
         at = , t9 < v0

    loc_0x803fa3b0: // orphan
         if                       // unlikely
         

    loc_0x803fa3b8: // orphan
         goto 0x803fa3c8
         v0 = a2

    loc_0x803fa3c0: // orphan
         goto 0x803fa3c8
         v0 = a1                  // t0

    loc_0x803fa3c8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803fa390, 0x803fa3a4, 0x803fa3b8, 0x803fa3c0
         ra = [sp + 0x14]         // lo
         sp += 0x28
         ret                      // lo
         // CODE XREF from fcn.803f089c @ +0x1e4
         

    loc_0x803fa3f8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a84
         v1 = a1 - a0             // arg2
         goto 0x803fa404
         v1 = a0 - a1             // arg2

    loc_0x803fa404: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fa3fc
         at = 0 | 0x8000
         at = , v1 < at           // lo
         if                       // likely
         t6 = 0 | 0xffff

    loc_0x803fa414: // orphan
         v1 = t6 - v1

    loc_0x803fa418: // orphan
         v0 = v1 << 0x10
         ret                      // ra
         v0 = , signed  v0 >> 0x10 // v1

    loc_0x803fa494: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a90
         lwc1 f16, -0x2044, at
         c.lt.s f16, f12
         
         bc1fl 0x803fa4b0
         c.lt.s f14, f0
         // CODE XREF from fcn.803f089c @ +0x1f8
         sub.s f12, f12, f16
         c.lt.s f14, f0
         
         bc1fl 0x803fa4c4
         c.lt.s f16, f14
         // CODE XREF from fcn.80400480 @ 0x803f0a98
         add.s f14, f14, f16
         c.lt.s f16, f14
         

    loc_0x803fa4c8: // orphan
         bc1fl 0x803fa4d8
         c.lt.s f12, f14
         sub.s f14, f14, f16
         c.lt.s f12, f14
         sub.s f0, f12, f14
         bc1f 0x803fa4e8
         mov.s f2, f0
         add.s f2, f0, f16
         c.lt.s f16, f2
         
         bc1f 0x803fa4fc
         
         sub.s f2, f2, f16
         ret                      // ra
         mov.s f0, f2

    loc_0x803fa520: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0a9c
         a0 -= 0x11a0             // arg1
         a0 = 0x86b1 << 16
         call 0x87f0277c          // 0x87f0277c(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2ad0
         a0 = 0x86b1 << 16
         // CODE XREF from fcn.803f089c @ +0x204
         call 0x87f0277c          // fcn.803fa53c // 0x87f0277c(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x3a68

    loc_0x803fa64c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0aa8
         [s1 + 0x394] = t9

    loc_0x803fa650: // orphan
         v0 = [s0 + 0]            // t9
         lwc1 f4, 0x468, t1
         lwc1 f16, 0x46c, t1
         t5 = v0 + 8
         [s0 + 0] = t5
         t6 = 0xde00 << 16
         [v0 + 0] = t6
         [v0 + 4] = t2
         v0 = [s0 + 0]
         t8 = 0xfa00 << 16
         at = 0x4210 << 16
         t7 = v0 + 8
         [s0 + 0] = t7
         [v0 + 0] = t8
         t9 = [v1 + 8]
         t6 = [v1 + 0]            // s4
         mtc1 at, f6
         t3 = t9 & 0xff           // s4
         t9 = [v1 + 4]            // s4
         t4 = t3 << 8
         t7 = t6 << 0x18
         t3 = t9 & 0xff           // s4
         t5 = t3 << 0x10

    loc_0x803fa6ac: // orphan
         t8 = t4 | t7             // t9
         t6 = t8 | t5             // t9
         t4 = t6 | 0xff           // t9
         [v0 + 4] = t4
         v0 = [s0 + 0]
         // CODE XREF from fcn.803f089c @ +0x210
         t9 = 0xfb00 << 16
         sub.s f8, f4, f6
         t7 = v0 + 8
         [s0 + 0] = t7
         [v0 + 0] = t9
         t3 = [v1 + 0x14]         // t9
         t4 = [v1 + 0xc]          // t9
         trunc.w.s f10, f8
         t8 = t3 & 0xff           // s4
         // CODE XREF from fcn.80400480 @ 0x803f0ab0
         t3 = [v1 + 0x10]         // t9
         t5 = t8 << 8
         t7 = t4 << 0x18
         t8 = t3 & 0xff           // s4
         t6 = t8 << 0x10
         t9 = t5 | t7
         t4 = t9 | t6
         t5 = t4 | 0xff
         [v0 + 4] = t5
         v0 = [s0 + 0]
         trunc.w.s f18, f16
         t8 = 0x5566 << 16
         t7 = v0 + 8
         [s0 + 0] = t7
         t3 = 0xfc30 << 16
         t3 |= 0xb261
         t8 |= 0xff7f

    loc_0x803fa728: // orphan
         mfc1 s4, f10
         mfc1 s3, f18
         a0 = 0x86b2 << 16
         [v0 + 4] = t8
         [v0 + 0] = t3
         call 0x8004d1fc          // 0x8004d1fc(0x86b20000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x7e84]       // t9
         v0 = 0x86b2 << 16
         v0 = [v0 - 0x7e84]       // t9
         a0 = s4 << 0x10
         a0 = , signed  a0 >> 0x10 // s4
         t9 = , unsigned  halfword [v0 + 0]
         a1 = s3 << 0x10
         at = 0x4f80 << 16
         mtc1 t9, f4
         if                       // likely
         cvt.s.w f14, f4

    loc_0x803fa76c: // orphan
         mtc1 at, f6
         
         add.s f14, f14, f6

    loc_0x803fa778: // orphan
         c.lt.s f20, f14
         at = 0x4f80 << 16
         bc1fl 0x803fa794
         mov.s f2, f24
         goto 0x803fa794
         mov.s f2, f22

    loc_0x803fa794: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fa788
         t6 = , unsigned  halfword [v0 + 2] // t3
         add.s f16, f2, f14
         t7 = 0 + 0x400
         mtc1 t6, f8
         t3 = 0 + 0x400
         if                       // likely
         cvt.s.w f12, f8

    loc_0x803fa7b0: // orphan
         mtc1 at, f10
         
         add.s f12, f12, f10

    loc_0x803fa7bc: // orphan
         c.lt.s f20, f12
         trunc.w.s f18, f16
         bc1fl 0x803fa7d8
         mov.s f0, f24
         goto 0x803fa7d8
         mov.s f0, f22

    loc_0x803fa7d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fa7cc
         add.s f4, f0, f12
         mfc1 a2, f18
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         trunc.w.s f6, f4
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x14] = 0
         mfc1 a3, f6
         [sp + 0x18] = t7
         [sp + 0x1c] = t3
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x8, -1)
         [sp + 0x20] = 0
         v0 = [s0 + 0]
         t9 = 0xfb00 << 16
         t6 = 0 - 1               // s2
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = t6
         [v0 + 0] = t9
         v0 = [s0 + 0]
         t5 = 0xfc61 << 16
         t5 |= 0xfec3
         t4 = v0 + 8
         [s0 + 0] = t4

    loc_0x803fa844: // orphan
         t7 = 0 - 0xc07
         [v0 + 4] = t7
         [v0 + 0] = t5
         t3 = [s1 + 0x3a4]        // t9
         at = 0 + 0x64
         div 0, t3, at
         t8 = lo
         t9 = t8 << 2
         t6 = s5 + t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t6 + 0]            // s4
         t4 = [s1 + 0x3a4]        // t9
         at = 0 + 0x64
         a0 = s4 + 8
         div 0, t4, at
         t5 = lo
         t7 = t5 << 2

    loc_0x803fa888: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ab4
         t3 = s5 + t7             // t9
         v0 = [t3 + 0]
         s2 = s3 + 3
         s2 <<= 0x10
         t8 = , unsigned  halfword [v0 + 0]
         // CODE XREF from fcn.803f089c @ +0x21c
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         mtc1 t8, f8
         s2 = , signed  s2 >> 0x10
         if                       // likely
         cvt.s.w f14, f8

    loc_0x803fa8b4: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f14, f14, f10

    loc_0x803fa8c4: // orphan
         c.lt.s f20, f14
         a1 = s2 << 0x10
         at = 0x4f80 << 16
         bc1fl 0x803fa8e4
         mov.s f2, f24
         goto 0x803fa8e4
         mov.s f2, f22

    loc_0x803fa8e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fa8d8
         t9 = , unsigned  halfword [v0 + 2]
         add.s f4, f2, f14
         t5 = 0 + 0x400
         mtc1 t9, f16
         t7 = 0 + 0x400
         if                       // likely
         cvt.s.w f12, f16

    loc_0x803fa900: // orphan
         mtc1 at, f18
         
         add.s f12, f12, f18

    loc_0x803fa90c: // orphan
         c.lt.s f20, f12

    loc_0x803fa910: // orphan
         trunc.w.s f6, f4
         bc1fl 0x803fa928
         mov.s f0, f24
         goto 0x803fa928
         mov.s f0, f22

    loc_0x803fa928: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fa91c
         add.s f8, f0, f12
         mfc1 a2, f6
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         trunc.w.s f10, f8
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x14] = 0
         mfc1 a3, f10
         [sp + 0x18] = t5
         [sp + 0x1c] = t7
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x8, -1)
         [sp + 0x20] = 0
         t3 = [s1 + 0x3a4]        // t9
         div 0, t3, s6
         t8 = lo
         if                       // likely
         

    loc_0x803fa978: // orphan
         break 7

    loc_0x803fa97c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fa988: // orphan
         if                       // likely
         

    loc_0x803fa990: // orphan
         break 6

    loc_0x803fa994: // orphan
         div 0, t8, s6
         t9 = hi
         t6 = t9 << 2
         t4 = s5 + t6
         if                       // likely
         

    loc_0x803fa9ac: // orphan
         break 7

    loc_0x803fa9b0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fa9bc: // orphan
         if                       // likely
         

    loc_0x803fa9c4: // orphan
         break 6

    loc_0x803fa9c8: // orphan
         a0 = [t4 + 0]
         call 0x8004d1fc          // 0x8004d1fc(0xde000000, 0x442f71dcfe116408, 0x8, -1)
         
         t5 = [s1 + 0x3a4]        // t9
         a0 = s4 + 0x14
         a0 <<= 0x10
         div 0, t5, s6
         t7 = lo

    loc_0x803fa9e8: // orphan
         a0 = , signed  a0 >> 0x10 // t9
         if                       // likely
         

    loc_0x803fa9f4: // orphan
         break 7

    loc_0x803fa9f8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803faa40: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0acc
         
         break 6

    loc_0x803fad00: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0adc
         s0 = 0x86b1 << 16
         s1 = 0x86b1 << 16
         s1 += 0x78e0
         s0 += 0x7340

    loc_0x803fad10: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 0x168
         at = , unsigned  , s0 < s1 // lo
         if                       // likely
         

    loc_0x803fad28: // orphan
         s0 = 0x86b1 << 16
         s1 = 0x86b1 << 16
         s5 = 0x86b2 << 16
         s5 -= 0x7e10
         s1 += 0x6d90
         s0 += 0x6da0
         s4 = 0
         s2 = 0
         s7 = 0 + 4
         s6 = 0 + 0xb4
         s3 = 0 + 0xff            // s4

    loc_0x803fad54: // orphan
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2

    loc_0x803fad60: // orphan
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = [s1 + 0]            // t9
         call 0x86b0b608          // 0x86b0b608(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s4
         t6 = [s5 + 0x18]         // t9
         s4 += 1
         s0 += 0x168
         v0 = s2 + t6
         s2 += 0x18
         s1 += 4
         byte [v0 + 0x12] = s3
         byte [v0 + 0x13] = s3
         byte [v0 + 0x14] = s3
         if                       // likely
         byte [v0 + 0x15] = s6

    loc_0x803fad9c: // orphan
         s0 = 0x86b1 << 16
         s0 += 0x7910
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a3 = 0x86b1 << 16
         a3 = [a3 + 0x7908]       // t9
         a0 = s0
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x86b17910, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x86b17910, 0x0, -1, -1)

    loc_0x803fadcc: // orphan
         a1 = 0 + 1               // lo
         a0 = s0
         call 0x8003eb84          // 0x8003eb84(0x104, 0x1, 0x8, -1)
         a1 = 0 + 0x1e
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x1e, 0x8, -1)
         a1 = 0
         call 0x86b0b9a0          // 0x86b0b9a0(0x104, 0x0, 0x8, -1)
         
         call 0x80007aec          // 0x80007aec(0x104, 0x0, 0x8, -1)
         a0 = 0 + 0x14
         t8 = 0x86b2 << 16
         t8 = [t8 - 0x7e40]       // t9
         t7 = 0 + 3
         call 0x87f00688          // 0x87f00688(0x14, 0x0, 0x8, -1)
         [t8 + 0] = t7
         goto 0x803fae9c
         ra = [sp + 0x34]         // t9

    loc_0x803fae94: // orphan
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0af0
         halfword [s0 - 0x148] = s3

    loc_0x803fae98: // orphan
         ra = [sp + 0x34]         // t9

    loc_0x803fae9c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fae0c
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // v1

    loc_0x803fb04c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0af8
         lwc1 f4, 0xf8, v1
         at = 0x86b1 << 16
         ldc1 f8, -0x2040, at
         cvt.d.s f6, f4
         mtc1 0, f18
         sub.d f10, f6, f8
         sp -= 0x18
         [sp + 0x14] = ra
         at = 0x86b1 << 16
         cvt.s.d f16, f10
         swc1 f16, 0xf8, v1
         lwc1 f0, 0xf8, v1
         c.lt.s f0, f18
         
         bc1f 0x803fb098
         
         lwc1 f4, -0x2038, at
         add.s f6, f0, f4
         swc1 f6, 0xf8, v1
         call 0x86b057b0          // 0x86b057b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86b081b4          // 0x86b081b4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x86b1 << 16
         v1 += 0x7a78
         a1 = [v1 + 0x44]
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x803fb0c0: // orphan
         v0 = [v1 + 0x34]         // t9

    loc_0x803fb0c4: // orphan
         a0 = 0 + 2
         beql a0, v0, 0x803fb0dc  // unlikely
         v0 = [v1 + 0x38]         // t9

    loc_0x803fb0d0: // orphan
         if                       // likely
         

    loc_0x803fb0d8: // orphan
         v0 = [v1 + 0x38]         // t9

    loc_0x803fb0dc: // orphan
         beql a0, v0, 0x803fb0f0  // unlikely
         v0 = [v1 + 0x3c]         // t9

    loc_0x803fb0e4: // orphan
         if                       // likely
         

    loc_0x803fb0ec: // orphan
         v0 = [v1 + 0x3c]         // t9

    loc_0x803fb0f0: // orphan
         beql a0, v0, 0x803fb104  // unlikely
         v0 = [v1 + 0x40]         // t9

    loc_0x803fb0f8: // orphan
         if                       // likely
         

    loc_0x803fb100: // orphan
         v0 = [v1 + 0x40]         // t9

    loc_0x803fb104: // orphan
         beql a0, v0, 0x803fb118  // unlikely
         [v1 + 0x44] = a0

    loc_0x803fb10c: // orphan
         if                       // likely
         

    loc_0x803fb114: // orphan
         [v1 + 0x44] = a0

    loc_0x803fb118: // orphan
         a1 = a0                  // t9

    loc_0x803fb11c: // orphan
         if                       // likely
         a0 = 0x86b1 << 16

    loc_0x803fb124: // orphan
         call 0x87f02684          // 0x87f02684(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x1660
         a0 = 0x86b1 << 16
         call 0x87f02684          // 0x87f02684(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x11a0
         t7 = 0x86b2 << 16
         t7 = [t7 - 0x7e40]       // t9

    loc_0x803fb140: // orphan
         t6 = 0 + 6
         [t7 + 0] = t6

    loc_0x803fb148: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803fb244: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0b10
         v1 += 0x7a78
         t4 = 0 + 1               // lo
         goto 0x803fb258
         [v1 + 0x354] = t4

    loc_0x803fb258: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803fb1e8, 0x803fb210
         // CODE XREF from fcn.80400480 @ 0x803fb24c
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803fb330: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0b1c
         
         t0 = 0x86b1 << 16
         v0 = 0x86b1 << 16
         t0 += 0x7a78
         a1 = 0

    loc_0x803fb344: // orphan
         v0 += 0x7a78
         a0 = [v0 + 0x18c]        // t9

    loc_0x803fb92c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0b58
         t6 = v0 + 8
         [a1 + 0] = t6            // arg2
         a2 += 0x7a78             // arg3
         [v0 + 4] = 0
         [v0 + 0] = t7
         t8 = [a2 + 0]            // arg3 // t9
         at = , unsigned  , t8 < 5
         if                       // likely
         t8 <<= 2

    loc_0x803fb950: // orphan
         at = 0x86b1 << 16
         at += t8
         t8 = [at - 0x1fe0]       // t9
         goto t8                  // t9
         

    loc_0x803fba88: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0b64
         t0 |= 0xa5ff
         t9 = 0xfb00 << 16
         t8 = v1 + 8
         [a1 + 0] = t8            // arg2
         [v1 + 4] = t0
         goto 0x803fbae8
         [v1 + 0] = t9

    loc_0x803fbae8: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803fb9ac, 0x803fb9fc
         // CODE XREF from fcn.80400480 @ 0x803fba9c
         v1 = [a1 + 0]            // arg2
         t0 = 0xfc30 << 16
         t1 = 0x5ffe << 16
         t9 = v1 + 8

    loc_0x803fd05c: // orphan
         // CODE XREF from fcn.803fc3c4 @ 0x803fcfe0
         add.s f4, f2, f0
         t9 = [v0 + 0]
         t5 = [s2 + 0]            // t9
         t6 = [v0 + 4]
         trunc.w.s f18, f4
         t4 = [s2 + 4]
         mfc1 a2, f6
         a0 = t9 + t5
         mfc1 a3, f18
         a1 = t6 + t4
         a1 <<= 0x10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         // CODE XREF from fcn.80400480 @ 0x803f0c64
         [sp + 0x14] = 0
         [sp + 0x18] = t1
         [sp + 0x1c] = t3
         call 0x80044270          // 0x80044270(-1, 0xffff00f0, 0x8, -1)
         [sp + 0x20] = 0
         t2 = [s3 + 0x224]        // t9
         t5 = 0xfa00 << 16
         t6 = 0xffb4 << 16
         beql t2, 0, 0x803fd304   // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0c68
         t1 = [sp + 0x84]

    loc_0x803fd5a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0c8c
         div 0, v0, at
         t2 = hi

    loc_0x803fd5a8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0c84
         t3 = t2 + 0x3c
         goto 0x803fd610
         [s0 + 0x288] = t3

    loc_0x803fd610: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803fd58c
         // CODE XREF from fcn.80400480 @ 0x803fd5ac
         // CODE XREF from fcn.803dc1fc @ 0x803fd5ec
         a0 = 0x86b1 << 16
         a0 += 0x7a78             // arg1
         v0 = [a0 + 0x34]         // arg1 // t9

    loc_0x803fd61c: // orphan
         at = 0 + 0x10
         if                       // unlikely
         at = 0 + 0x11

    loc_0x803fd628: // orphan
         if                       // unlikely
         at = 0 + 0x12

    loc_0x803fd630: // orphan
         if                       // unlikely
         

    loc_0x803fd638: // orphan
         if                       // likely
         

    loc_0x803fd640: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a0
         at = 0 + 0x33
         div 0, v0, at
         t9 = hi
         t0 = t9 + 0x46
         [s0 + 0x288] = t0
         a0 = [sp + 0x28]         // t9

    loc_0x803fd660: // orphan
         t1 = 0x86b1 << 16
         t1 += 0x7a88
         a0 += 4
         at = , unsigned  , a0 < t1 // lo
         bnel at, 0, 0x803fd61c   // likely
         v0 = [a0 + 0x34]         // t9

    loc_0x803fd678: // orphan
         t2 = [s0 + 0x288]
         at = , t2 < 0x3c
         if                       // unlikely
         

    loc_0x803fd688: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = [s0 + 0x68]         // t9
         a0 = 0x86b1 << 16
         at = 0 + 0x64
         if                       // unlikely
         a0 += 0x7a78

    loc_0x803fd6a4: // orphan
         if                       // unlikely
         

    loc_0x803fd6ac: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803fd6b4: // orphan
         beql v1, at, 0x803fd710  // unlikely
         at = 0 + 0x64

    loc_0x803fd6bc: // orphan
         goto 0x803fd75c
         t5 = [s0 + 0x70]         // t9

    loc_0x803fd6c4: // orphan
         div 0, v0, at
         v1 = hi
         t3 = 0 + 3
         if                       // unlikely
         at = , v1 < 5            // lo

    loc_0x803fd6d8: // orphan
         goto 0x803fd758
         [s0 + 0x70] = t3

    loc_0x803fd6e0: // orphan
         beql at, 0, 0x803fd6f4   // unlikely
         at = , v1 < 0x1e

    loc_0x803fd6e8: // orphan
         goto 0x803fd758
         [s0 + 0x70] = s2

    loc_0x803fd6f4: // orphan
         if                       // unlikely
         

    loc_0x803fd6fc: // orphan
         goto 0x803fd758
         [s0 + 0x70] = s1

    loc_0x803fd704: // orphan
         goto 0x803fd758
         [s0 + 0x70] = 0

    loc_0x803fd70c: // orphan
         at = 0 + 0x64

    loc_0x803fd710: // orphan
         div 0, v0, at
         v1 = hi
         at = , v1 < 5            // lo
         if                       // unlikely
         t4 = 0 + 3

    loc_0x803fd724: // orphan
         goto 0x803fd758
         [s0 + 0x70] = t4

    loc_0x803fd72c: // orphan
         at = , v1 < 0xf
         beql at, 0, 0x803fd744   // likely
         at = , v1 < 0x28

    loc_0x803fd738: // orphan
         goto 0x803fd758
         [s0 + 0x70] = s2

    loc_0x803fd744: // orphan
         beql at, 0, 0x803fd758   // unlikely
         [s0 + 0x70] = 0

    loc_0x803fd74c: // orphan
         goto 0x803fd758
         [s0 + 0x70] = s1

    loc_0x803fd758: // orphan
         // XREFS: CODE 0x803fd6d8  CODE 0x803fd6e8  CODE 0x803fd6fc  
         // XREFS: CODE 0x803fd704  CODE 0x803fd724  CODE 0x803fd738  
         // XREFS: CODE 0x803fd74c  
         t5 = [s0 + 0x70]

    loc_0x803fd75c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fd6bc
         a1 = 0
         if                       // unlikely
         

    loc_0x803fd768: // orphan
         [sp + 0x28] = a0

    loc_0x803fd76c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x3c] = a1
         t6 = [s0 + 0x288]
         t8 = [s0 + 0x70]
         a1 = [sp + 0x3c]
         t7 = t6 - 0xa
         div 0, t7, t8
         // CODE XREF from fcn.80400480 @ 0x803f0c94
         v1 = lo
         t9 = v1 - 0xe
         a0 = [sp + 0x28]         // t9
         div 0, v0, t9
         t0 = hi

    loc_0x803fd79c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0c98
         a0 += 4
         if                       // likely
         

    loc_0x803fd7a8: // orphan
         break 7

    loc_0x803fd7ac: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fd7b8: // orphan
         if                       // likely
         

    loc_0x803fd7c0: // orphan
         break 6

    loc_0x803fd7c4: // orphan
         unsigned , hi
         a1 += 1
         if                       // likely
         

    loc_0x803fd7d4: // orphan
         break 7

    loc_0x803fd7d8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fd7e4: // orphan
         if                       // likely
         

    loc_0x803fd7ec: // orphan
         break 6

    loc_0x803fd7f0: // orphan
         t1 = lo
         t2 = t0 + t1
         t3 = t2 + 0xa
         [a0 + 0x80] = t3
         t4 = [s0 + 0x70]
         at = , a1 < t4
         bnel at, 0, 0x803fd76c   // unlikely
         [sp + 0x28] = a0

    loc_0x803fd810: // orphan
         a0 = 0x86b1 << 16
         s0 = 0x86b1 << 16
         s0 += 0x7da4
         a0 += 0x7d04

    loc_0x803fd820: // orphan
         call 0x86b0bf2c          // 0x86b0bf2c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a0
         a0 = [sp + 0x28]         // t9
         a0 += 0x28
         // CODE XREF from fcn.803f089c @ +0x400
         if                       // likely
         

    loc_0x803fd838: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t3
         // CODE XREF from fcn.80400480 @ 0x803f0ca0
         s2 = [sp + 0x20]
         ret
         sp += 0x40

    loc_0x803fd8d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ca4
         [at + 0x7cf4] = t1

    loc_0x803fd8dc: // orphan
         t2 = [t2 + 0x7c00]       // t9
         at = 0x86b1 << 16
         if                       // likely
         

    loc_0x803fd8ec: // orphan
         [at + 0x7cf8] = t3

    loc_0x803fd8f0: // orphan
         v0 = 0x86b1 << 16
         v0 += 0x7a78
         t4 = [v0 + 0x280]        // t9
         t5 = [v0 + 0x274]        // t9
         t7 = [v0 + 0x278]        // t9
         t9 = [v0 + 0x27c]
         unsigned , hi            // lo // lo
         // CODE XREF from fcn.803f089c @ +0x40c
         t6 = lo
         
         
         unsigned , hi            // t9 // s2
         t8 = lo                  // s2
         // CODE XREF from fcn.80400480 @ 0x803f0cac
         
         
         unsigned , hi            // lo // lo // t9 // s2
         t0 = lo
         if                       // unlikely
         

    loc_0x803fd938: // orphan
         [v0 + 0x274] = 0
         [v0 + 0x278] = 0
         [v0 + 0x27c] = 0
         [v0 + 0x280] = 0

    loc_0x803fd948: // orphan
         ret                      // ra
         

    loc_0x803fd954: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0cb0
         
         sp -= 0x20
         [sp + 0x20] = a0
         [sp + 0x14] = ra
         a0 = 0x86b1 << 16

    loc_0x803fd968: // orphan
         a1 = 0x86b1 << 16
         a1 -= 0x4a00             // arg2
         call 0x87f025b8          // 0x87f025b8(-1, 0x86b0b600, 0x8, -1)
         a0 -= 0x1e58
         if                       // unlikely
         a2 = [sp + 0x20]

    loc_0x803fd980: // orphan
         a0 = v0 + 0x24
         a1 = 0x86b0 << 16
         a1 += 0x355c
         [sp + 0x18] = a0
         call 0x80037e3c          // 0x80037e3c(0x123, 0x86b0355c, 0x8, -1)
         [sp + 0x1c] = v0
         a2 = [sp + 0x20]
         t7 = 0x86b1 << 16
         t7 += 0x7a78
         t6 = a2 << 3
         v1 = [sp + 0x1c]         // s4
         v0 = t6 + t7
         lwc1 f4, 0x14, v0
         mtc1 0, f6
         at = 0x4020 << 16
         swc1 f4, 0x48, v1
         swc1 f6, 0x4c, v1
         lwc1 f8, 0x18, v0
         mtc1 at, f0
         t8 = 0 - 0x4001
         halfword [v1 + 0x42] = t8
         [v1 + 0x38] = a2
         [v1 + 0x20] = a2
         swc1 f8, 0x50, v1
         swc1 f0, 0x54, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x5c, v1
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x86b0355c, 0x0, -1)
         a0 = [sp + 0x18]
         a3 = 0x86b1 << 16
         a3 = [a3 - 0x1810]       // t9
         a0 = [sp + 0x18]
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x123, 0x0, 0x0, -1)
         a2 = 0 - 1               // s2

    loc_0x803fda0c: // orphan
         ra = [sp + 0x14]
         sp += 0x20

    loc_0x803fda14: // orphan
         ret                      // ra
         

    loc_0x803fdabc: // orphan
         [a1 + 0] = t3            // arg2
         t4 |= 0xd3ff             // t9
         [v1 + 0] = t4
         // CODE XREF from fcn.803f089c @ +0x418
         [v1 + 4] = t5
         v1 = [a1 + 0]            // arg2 // t3
         t7 = 0xdb06 << 16
         t7 |= 0x3c
         t6 = v1 + 8
         [a1 + 0] = t6            // arg2
         [v1 + 0] = t7
         a0 = v0                  // s4
         call 0x8004ca60          // 0x8004ca60(0xff, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0cb8
         [sp + 0x1c] = v1

    loc_0x803fdd48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0cc4
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a0
         a3 = 0x86b1 << 16
         a0 = [sp + 0x1c]         // t9
         a3 = [a3 - 0x1664]       // t9

    loc_0x803fdd5c: // orphan
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x803fdf04: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0cd0
         t1 = , unsigned  byte [v1 + 0x2182] // s4
         t2 = t1 & 2
         beql t2, 0, 0x803fdf6c   // unlikely
         v0 = a0 << 2             // arg1

    loc_0x803fdf14: // orphan
         ret                      // ra
         // CODE XREF from fcn.803f089c @ +0x438
         

    loc_0x803fdf6c: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803fdebc
         v0 += a0                 // arg1
         t9 = 0x800d << 16
         t9 -= 0x1fa0
         v0 <<= 3
         v1 = v0 + t9
         t1 = , unsigned  halfword [v1 + 8]
         at = 0xffff << 16
         at |= 0x3fff
         t3 = a0 << 2             // arg1
         t3 += a0                 // arg1
         t4 = 0x86b1 << 16
         t2 = t1 & at
         halfword [v1 + 8] = t2
         t4 += 0x7a78
         t3 <<= 3
         a2 = 0x86b1 << 16
         a2 = [a2 + 0x7cfc]       // arg3 // t9
         t0 = t3 + t4
         a0 = 0 + 0x10            // arg1
         a3 = 0

    loc_0x803fdfbc: // orphan
         t5 = [t0 + 0x28c]        // t9
         a3 += 8                  // arg4
         bnel a2, t5, 0x803fdfdc  // likely
         t8 = [t0 + 0x29c]        // t9

    loc_0x803fdfcc: // orphan
         t6 = , unsigned  halfword [v1 + 8]
         t7 = t6 | 0x8000
         halfword [v1 + 8] = t7
         t8 = [t0 + 0x29c]        // t9

    loc_0x803fdfdc: // orphan
         bnel a2, t8, 0x803fdff4  // likely
         t2 = [t0 + 0x290]        // t9

    loc_0x803fdfe4: // orphan
         t9 = , unsigned  halfword [v1 + 8]
         t1 = t9 | 0x4000
         // CODE XREF from fcn.80400480 @ 0x803f0cd8
         halfword [v1 + 8] = t1
         t2 = [t0 + 0x290]        // t9

    loc_0x803fdff4: // orphan
         bnel a2, t2, 0x803fe00c  // likely
         t5 = [t0 + 0x2a0]        // t9

    loc_0x803fdffc: // orphan
         t3 = , unsigned  halfword [v1 + 8]
         t4 = t3 | 0x8000
         // CODE XREF from fcn.803f089c @ +0x444
         halfword [v1 + 8] = t4
         t5 = [t0 + 0x2a0]        // t9

    loc_0x803fe00c: // orphan
         if                       // likely
         

    loc_0x803fe014: // orphan
         t6 = , unsigned  halfword [v1 + 8]

    loc_0x803fe018: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ce4
         t7 = t6 | 0x4000
         halfword [v1 + 8] = t7

    loc_0x803fe020: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0cdc
         if                       // likely
         t0 += 8

    loc_0x803fe028: // orphan
         a1 = 0x86b1 << 16
         a1 += 0x7a78             // arg2
         a0 = a1 + v0             // arg2

    loc_0x803fe2b8: // orphan
         a2 = [s4 + 0x68]         // t9

    loc_0x803fe2bc: // orphan
         at = 0 + 1               // lo
         t6 = sp + 0x5c
         if                       // unlikely
         t8 = 0x86b1 << 16

    loc_0x803fe2cc: // orphan
         if                       // unlikely
         t8 = sp + 0x5c

    loc_0x803fe2d4: // orphan
         at = 0 + 2
         if                       // unlikely
         t1 = sp + 0x5c

    loc_0x803fe2e0: // orphan
         at = 0 + 3
         if                       // unlikely
         t3 = sp + 0x5c

    loc_0x803fe2ec: // orphan
         goto 0x803fe63c
         s5 += 4

    loc_0x803fe2f4: // orphan
         t8 = [t8 - 0x1f60]       // t9
         t7 = sp + 0x4c
         s2 = s0 + t7
         if                       // unlikely
         s1 = s0 + t6

    loc_0x803fe308: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         // CODE XREF from fcn.803f089c @ +0x464
         t9 = hi
         t1 = t9 + 0x17
         if                       // likely
         

    loc_0x803fe324: // orphan
         break 7

    loc_0x803fe328: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe334: // orphan
         if                       // likely
         

    loc_0x803fe33c: // orphan
         break 6

    loc_0x803fe340: // orphan
         [s1 + 0] = t1
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t2 = hi
         t3 = t2 + 0x17
         if                       // likely
         

    loc_0x803fe360: // orphan
         break 7

    loc_0x803fe364: // orphan
         at = 0 - 1               // s2

    loc_0x803fe368: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe370: // orphan
         if                       // likely
         

    loc_0x803fe378: // orphan
         break 6

    loc_0x803fe37c: // orphan
         [s2 + 0] = t3
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe388: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t4 = hi
         t5 = t4 + 0x12
         if                       // likely
         

    loc_0x803fe3a4: // orphan
         break 7

    loc_0x803fe3a8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe3b4: // orphan
         if                       // likely
         

    loc_0x803fe3bc: // orphan
         break 6

    loc_0x803fe3c0: // orphan
         [s1 + 0] = t5
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t6 = hi
         t7 = t6 + 0x12
         [s2 + 0] = t7
         if                       // likely
         

    loc_0x803fe3e4: // orphan
         break 7

    loc_0x803fe3e8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe3f4: // orphan
         if                       // likely
         

    loc_0x803fe3fc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d08
         break 6

    loc_0x803fe400: // orphan
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe408: // orphan
         t1 = 0x86b1 << 16
         t1 = [t1 - 0x1f60]       // t9
         t9 = sp + 0x4c

    loc_0x803fe414: // orphan
         s2 = s0 + t9
         if                       // unlikely
         s1 = s0 + t8

    loc_0x803fe420: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d0c
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t2 = hi
         t3 = t2 + 0x11
         if                       // likely
         

    loc_0x803fe43c: // orphan
         break 7

    loc_0x803fe440: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe44c: // orphan
         if                       // likely
         

    loc_0x803fe454: // orphan
         // CODE XREF from fcn.803f089c @ +0x474
         break 6

    loc_0x803fe458: // orphan
         [s1 + 0] = t3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3

    loc_0x803fe468: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d14
         t4 = hi
         t5 = t4 + 0x11
         if                       // likely
         

    loc_0x803fe478: // orphan
         break 7

    loc_0x803fe47c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe488: // orphan
         if                       // likely
         

    loc_0x803fe490: // orphan
         break 6

    loc_0x803fe494: // orphan
         [s2 + 0] = t5
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe4a0: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t6 = hi
         t7 = t6 + 0xd
         if                       // likely
         

    loc_0x803fe4bc: // orphan
         break 7

    loc_0x803fe4c0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe4cc: // orphan
         if                       // likely
         

    loc_0x803fe4d4: // orphan
         break 6

    loc_0x803fe4d8: // orphan
         [s1 + 0] = t7
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s3
         t8 = hi
         t9 = t8 + 0xd
         [s2 + 0] = t9
         if                       // likely
         

    loc_0x803fe4fc: // orphan
         break 7

    loc_0x803fe500: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fe50c: // orphan
         if                       // likely
         

    loc_0x803fe514: // orphan
         break 6

    loc_0x803fe518: // orphan
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe520: // orphan
         t3 = 0x86b1 << 16
         t3 = [t3 - 0x1f60]       // t9
         t2 = sp + 0x4c
         s2 = s0 + t2
         if                       // unlikely
         s1 = s0 + t1

    loc_0x803fe538: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d24
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 9
         div 0, v0, at
         t4 = hi

    loc_0x803fe54c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d28
         t5 = t4 + 0xe
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [s1 + 0] = t5
         at = 0 + 9
         div 0, v0, at
         t6 = hi
         t7 = t6 + 0xe            // "F"
         [s2 + 0] = t7
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe574: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 9
         div 0, v0, at
         t8 = hi
         t9 = t8 + 0xb
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [s1 + 0] = t9
         at = 0 + 9
         div 0, v0, at
         t1 = hi
         t2 = t1 + 0xb
         [s2 + 0] = t2
         goto 0x803fe638
         v0 = 0 - 1               // s2

    loc_0x803fe5b0: // orphan
         t5 = 0x86b1 << 16
         t5 = [t5 - 0x1f60]       // t9
         t4 = sp + 0x4c
         s2 = s0 + t4
         if                       // unlikely
         s1 = s0 + t3

    loc_0x803fe5c8: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 7
         div 0, v0, at
         // CODE XREF from fcn.80400480 @ 0x803f0d34
         t6 = hi
         t7 = t6 + 0xd
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [s1 + 0] = t7
         at = 0 + 7

    loc_0x803fe5ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d38
         div 0, v0, at
         t8 = hi
         t9 = t8 + 0xd
         goto 0x803fe634
         [s2 + 0] = t9

    loc_0x803fe600: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 7
         div 0, v0, at
         t1 = hi
         t2 = t1 + 0xa            // a2
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [s1 + 0] = t2
         at = 0 + 7
         div 0, v0, at
         t3 = hi
         t4 = t3 + 0xa            // a2
         [s2 + 0] = t4

    loc_0x803fe634: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fe5f8
         v0 = 0 - 1               // s2

    loc_0x803fe638: // orphan
         // XREFS: CODE 0x803fe380  CODE 0x803fe400  CODE 0x803fe498  
         // XREFS: CODE 0x803fe518  CODE 0x803fe56c  CODE 0x803fe5a8  
         s5 += 4

    loc_0x803fe63c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fe2ec
         t5 = sp + 0x7c
         at = , unsigned  , s5 < t5
         s0 += 4
         [s5 - 4] = v0
         if                       // unlikely
         [s5 + 0xc] = v0

    loc_0x803fe654: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d40
         t6 = 0 - 1               // s2
         t7 = 0 - 1               // s2
         [sp + 0x8c] = t6
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x90] = t7

    loc_0x803fe668: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d44
         a3 = [s4 + 0x70]         // t9
         if                       // fcn.803fe67c+0x3a4 // unlikely
         

    loc_0x803fe674: // orphan
         if                       // fcn.803fe67c+0x3a4 // likely
         a1 = 0

    loc_0x803fea88: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0d94
         [sp + 0x88] = t1

    loc_0x803fef10: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff470
         if                       // unlikely
         t6 = 0x86b2 << 16

    loc_0x803fef18: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t0 = 0x86b2 << 16

    loc_0x803fef24: // orphan
         at = 0 + 2
         if                       // unlikely
         t4 = 0x86b2 << 16

    loc_0x803fef30: // orphan
         at = 0 + 3
         if                       // unlikely
         t8 = 0x86b2 << 16

    loc_0x803fef3c: // orphan
         goto 0x803fefec
         v0 = 0

    loc_0x803fef44: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fef10
         t6 = [t6 - 0x7e40]       // t9
         v0 = [t6 + 0xc]          // s4
         t7 = , unsigned  byte [v0 + 0x2180] // s4
         beql v1, t7, 0x803fefec  // unlikely
         v0 = 0

    loc_0x803fef58: // orphan
         t8 = , unsigned  byte [v0 + 0x2182] // s4
         t9 = t8 & 1              // lo
         beql t9, 0, 0x803fefec   // unlikely
         v0 = 0

    loc_0x803fef68: // orphan
         goto 0x803ff470
         s5 += 1

    loc_0x803fef70: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fef1c
         t0 = [t0 - 0x7e40]       // t9
         v0 = [t0 + 0xc]          // s4
         t1 = , unsigned  byte [v0 + 0x2180] // s4
         beql v1, t1, 0x803fefec  // unlikely
         v0 = 0

    loc_0x803fef84: // orphan
         t2 = , unsigned  byte [v0 + 0x2182] // s4
         t3 = t2 & 2
         beql t3, 0, 0x803fefec   // unlikely
         v0 = 0

    loc_0x803fef94: // orphan
         goto 0x803ff470
         s5 += 1

    loc_0x803fef9c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fef28
         t4 = [t4 - 0x7e40]       // t9
         v0 = [t4 + 0xc]          // s4
         t5 = , unsigned  byte [v0 + 0x2180] // s4
         beql v1, t5, 0x803fefec  // unlikely
         v0 = 0

    loc_0x803fefb0: // orphan
         t6 = , unsigned  byte [v0 + 0x2182] // s4
         t7 = t6 & 4
         beql t7, 0, 0x803fefec   // unlikely
         v0 = 0

    loc_0x803fefc0: // orphan
         goto 0x803ff470
         s5 += 1

    loc_0x803fefc8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fef34
         t8 = [t8 - 0x7e40]       // t9
         v0 = [t8 + 0xc]          // s4
         t9 = , unsigned  byte [v0 + 0x2180] // s4
         beql v1, t9, 0x803fefec  // unlikely
         v0 = 0

    loc_0x803fefdc: // orphan
         t0 = , unsigned  byte [v0 + 0x2182] // s4
         t1 = t0 & 8              // a2
         if                       // likely
         v0 = 0

    loc_0x803fefec: // orphan
         // XREFS: CODE 0x803fef3c  CODE 0x803fef50  CODE 0x803fef60  
         // XREFS: CODE 0x803fef7c  CODE 0x803fef8c  CODE 0x803fefa8  
         // XREFS: CODE 0x803fefb8  CODE 0x803fefd4  CODE 0x803ff464  
         if                       // unlikely
         t2 = v0 << 2

    loc_0x803feff4: // orphan
         t3 = s4 + t2
         t4 = [t3 + 0x384]        // t9
         [sp + 0x60] = v0
         s2 = 0
         bnel s1, t4, 0x803ff45c  // likely
         v0 = [sp + 0x60]         // s4

    loc_0x803ff00c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x60] = v0
         at = 0 + 0x64
         div 0, v0, at
         v1 = [s4 + 0x70]         // t9
         s3 = hi
         blezl v1, 0x803ff45c     // unlikely
         v0 = [sp + 0x60]         // s4

    loc_0x803ff02c: // orphan
         v0 = [s4 + 0x68]         // t9

    loc_0x803ff030: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff450
         at = 0 + 1               // lo
         t5 = s2 + 1
         if                       // unlikely
         

    loc_0x803ff040: // orphan
         if                       // unlikely
         t2 = s2 + 1

    loc_0x803ff048: // orphan
         at = 0 + 2
         if                       // unlikely
         t9 = s2 + 1

    loc_0x803ff054: // orphan
         at = 0 + 3
         if                       // unlikely
         t6 = s2 + 1

    loc_0x803ff060: // orphan
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff068: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff038
         if                       // likely
         at = , s3 < 0x14

    loc_0x803ff070: // orphan
         at = , s3 < 0x50
         if                       // likely
         t6 = s2 << 2

    loc_0x803ff07c: // orphan
         t7 = s4 + t6
         v0 = [t7 + 0x84]         // t9
         t8 = [sp + 0x50]
         at = , s1 < v0
         if                       // unlikely
         t9 = v0 + t8

    loc_0x803ff094: // orphan
         at = , t9 < s1           // lo
         if                       // likely
         t0 = s5 << 2

    loc_0x803ff0a0: // orphan
         t0 += s5
         t0 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t0
         at = 0 + 0xd
         div 0, v0, at
         t1 = hi
         t2 = t1 + s1
         t3 = t2 + 0x1a
         [s0 + 0x2ac] = t3
         goto 0x803ff448
         v1 = [s4 + 0x70]         // t9

    loc_0x803ff0d0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff068
         if                       // unlikely
         t4 = s2 << 2

    loc_0x803ff0d8: // orphan
         t5 = s4 + t4
         v0 = [t5 + 0x84]         // t9
         t6 = [sp + 0x50]
         at = , s1 < v0
         if                       // unlikely
         t7 = v0 + t6             // t9

    loc_0x803ff0f0: // orphan
         at = , t7 < s1           // lo
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0da4
         t8 = s5 << 2

    loc_0x803ff0fc: // orphan
         t8 += s5
         t8 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t8

    loc_0x803ff10c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0da8
         at = 0 + 0xd
         div 0, v0, at
         t9 = hi
         t0 = t9 + s1
         t1 = t0 + 0x1a
         [s0 + 0x2ac] = t1
         goto 0x803ff448
         v1 = [s4 + 0x70]         // t9

    loc_0x803ff12c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff040
         if                       // likely
         at = , s3 < 0xf

    loc_0x803ff134: // orphan
         at = , s3 < 0x3c
         if                       // likely
         t3 = s2 << 2

    loc_0x803ff140: // orphan
         t4 = s4 + t3
         v0 = [t4 + 0x84]
         t5 = [sp + 0x4c]
         at = , s1 < v0
         if                       // unlikely
         t6 = v0 + t5

    loc_0x803ff158: // orphan
         at = , t6 < s1           // lo
         if                       // likely
         t7 = s5 << 2

    loc_0x803ff164: // orphan
         t7 += s5                 // t9
         t7 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t7
         div 0, v0, fp
         t8 = hi
         t9 = t8 + s1
         t0 = t9 + 0x15
         [s0 + 0x2ac] = t0
         if                       // likely
         

    loc_0x803ff190: // orphan
         break 7

    loc_0x803ff194: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff188
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff1a0: // orphan
         if                       // likely
         

    loc_0x803ff1a8: // orphan
         break 6

    loc_0x803ff1ac: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff198, 0x803ff1a0
         v1 = [s4 + 0x70]         // t9
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff1b8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff12c
         if                       // unlikely
         t1 = s2 << 2

    loc_0x803ff1c0: // orphan
         t2 = s4 + t1
         v0 = [t2 + 0x84]         // t9
         t3 = [sp + 0x4c]
         at = , s1 < v0
         if                       // unlikely
         t4 = v0 + t3             // t9

    loc_0x803ff1d8: // orphan
         at = , t4 < s1           // lo
         if                       // likely
         t5 = s5 << 2

    loc_0x803ff1e4: // orphan
         t5 += s5
         t5 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t5
         div 0, v0, fp
         t6 = hi
         t7 = t6 + s1
         t8 = t7 + 0x15
         [s0 + 0x2ac] = t8
         if                       // likely
         

    loc_0x803ff210: // orphan
         break 7

    loc_0x803ff214: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff208
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff220: // orphan
         if                       // likely
         

    loc_0x803ff228: // orphan
         break 6

    loc_0x803ff22c: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff218, 0x803ff220
         v1 = [s4 + 0x70]         // t9
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff238: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff04c
         if                       // likely
         at = , s3 < 0xa

    loc_0x803ff240: // orphan
         at = , s3 < 0x28
         if                       // likely
         t0 = s2 << 2

    loc_0x803ff24c: // orphan
         t1 = s4 + t0
         v0 = [t1 + 0x84]         // t9
         t2 = [sp + 0x48]
         at = , s1 < v0
         if                       // unlikely
         t3 = v0 + t2             // t9

    loc_0x803ff264: // orphan
         at = , t3 < s1           // lo
         if                       // likely
         t4 = s5 << 2

    loc_0x803ff270: // orphan
         t4 += s5
         t4 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t4
         div 0, v0, s7
         t5 = hi
         t6 = t5 + s1
         t7 = t6 + 0xe
         [s0 + 0x2ac] = t7
         if                       // likely
         

    loc_0x803ff29c: // orphan
         break 7

    loc_0x803ff2a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff294
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff2ac: // orphan
         if                       // likely
         

    loc_0x803ff2b4: // orphan
         break 6

    loc_0x803ff2b8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff2a4, 0x803ff2ac
         v1 = [s4 + 0x70]         // t9
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff2c4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff238
         if                       // unlikely
         t8 = s2 << 2

    loc_0x803ff2cc: // orphan
         t9 = s4 + t8
         // CODE XREF from fcn.803f089c @ +0x510
         v0 = [t9 + 0x84]
         t0 = [sp + 0x48]
         at = , s1 < v0
         if                       // unlikely
         t1 = v0 + t0             // t9

    loc_0x803ff2e4: // orphan
         at = , t1 < s1           // lo
         if                       // likely
         t2 = s5 << 2

    loc_0x803ff2f0: // orphan
         t2 += s5
         t2 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t2
         div 0, v0, s7
         t3 = hi
         t4 = t3 + s1
         t5 = t4 + 0xe
         [s0 + 0x2ac] = t5
         if                       // likely
         

    loc_0x803ff31c: // orphan
         break 7

    loc_0x803ff320: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff314
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff32c: // orphan
         if                       // likely
         

    loc_0x803ff334: // orphan
         break 6

    loc_0x803ff338: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff324, 0x803ff32c
         v1 = [s4 + 0x70]         // t9
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff344: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff058
         if                       // likely
         at = , s3 < 5

    loc_0x803ff34c: // orphan
         at = , s3 < 0x14
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0db0
         t7 = s2 << 2

    loc_0x803ff354: // orphan
         at = , s3 < 0x14
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0db0
         t7 = s2 << 2

    loc_0x803ff358: // orphan
         t8 = s4 + t7
         v0 = [t8 + 0x84]         // t9
         t9 = [sp + 0x44]
         at = , s1 < v0
         if                       // unlikely
         t0 = v0 + t9

    loc_0x803ff370: // orphan
         at = , t0 < s1           // lo
         if                       // likely
         t1 = s5 << 2

    loc_0x803ff37c: // orphan
         t1 += s5
         t1 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t1
         div 0, v0, s6
         t2 = hi
         t3 = t2 + s1
         t4 = t3 + 0xb
         [s0 + 0x2ac] = t4
         if                       // likely
         

    loc_0x803ff3a8: // orphan
         break 7

    loc_0x803ff3ac: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff3a0
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff3b8: // orphan
         if                       // likely
         

    loc_0x803ff3c0: // orphan
         break 6

    loc_0x803ff3c4: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff3b0, 0x803ff3b8
         v1 = [s4 + 0x70]         // t9
         goto 0x803ff44c
         s2 += 1

    loc_0x803ff3d0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff344
         if                       // unlikely
         t5 = s2 << 2

    loc_0x803ff3d8: // orphan
         t6 = s4 + t5
         v0 = [t6 + 0x84]         // t9
         t7 = [sp + 0x44]
         at = , s1 < v0
         if                       // unlikely
         t8 = v0 + t7

    loc_0x803ff3f0: // orphan
         at = , t8 < s1           // lo
         if                       // likely
         t9 = s5 << 2

    loc_0x803ff3fc: // orphan
         t9 += s5
         t9 <<= 3
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = s4 + t9
         div 0, v0, s6
         t0 = hi
         t1 = t0 + s1
         t2 = t1 + 0xb
         [s0 + 0x2ac] = t2
         v1 = [s4 + 0x70]         // t9
         if                       // likely
         

    loc_0x803ff42c: // orphan
         break 7

    loc_0x803ff430: // orphan
         // CODE XREF from fcn.80400480 @ 0x803ff424
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803ff43c: // orphan
         if                       // likely
         

    loc_0x803ff444: // orphan
         break 6

    loc_0x803ff448: // orphan
         // XREFS(28)
         s2 += 1

    loc_0x803ff44c: // orphan
         // XREFS: CODE 0x803ff060  CODE 0x803ff1b0  CODE 0x803ff230  
         // XREFS: CODE 0x803ff2bc  CODE 0x803ff33c  CODE 0x803ff3c8  
         at = , s2 < v1           // lo
         bnel at, 0, 0x803ff030   // likely
         v0 = [s4 + 0x68]         // t9

    loc_0x803ff458: // orphan
         v0 = [sp + 0x60]         // s4

    loc_0x803ff45c: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803ff004, 0x803ff024
         v1 = 0 + 4

    loc_0x803ff460: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fefec
         v0 += 1
         if                       // likely
         

    loc_0x803ff46c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803fefe4
         s5 += 1

    loc_0x803ff470: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803fef68, 0x803fef94, 0x803fefc0
         if                       // likely
         

    loc_0x803ff478: // orphan
         // CODE XREF from fcn.803feb3c @ +0x3c4
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]         // s4
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]         // a2
         ret
         sp += 0x68

    loc_0x803ff7bc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0dc8
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.803f0db4 @ +0x18
         
         
         
         
         
         
         
         
         

    loc_0x803ff8d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0dd0
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.80400480 @ 0x803f0de0
         
         
         
         
         
         
         // CODE XREF from fcn.803f0db4 @ +0x34
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.80400480 @ 0x803f0dec
         
         

    loc_0x803ffa98: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0de4
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x803ffb14: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0df0
         
         
         
         
         
         
         // CODE XREF from fcn.80400480 @ 0x803f0df8
         
         
         
         
         

    loc_0x803ffb40: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0dfc
         
         
         // CODE XREF from fcn.803f0db4 @ +0x40
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         movf 0, 0, fcc0
         
         
         goto 0
         goto 0x8c000078

    loc_0x803ffd54: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e20
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803ffd54
         unsigned , hi            // t9 // s2

    loc_0x803ffd58: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e20
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803ffd54
         unsigned , hi            // t9 // s2

    loc_0x803ffd5c: // orphan
         
         goto 0x80000000
         s0 = halfword [s5 + 0x158]

    loc_0x803ffe00: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e2c
         dsra32 0, 0, 3
         dsra32 0, 0, 3

    loc_0x803ffe5c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e38
         dsra 0, 0, 2
         dsll 0, 0, 2
         
         

    loc_0x804001a4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e60
         s0 = halfword [s5 + 0x730c]
         s0 = halfword [s5 + 0x7234]
         s0 = halfword [s5 + 0x730c]
         s0 = halfword [s5 + 0x730c]
         s0 = halfword [s5 + 0x730c]
         s0 = halfword [s5 + 0x730c]
         s0 = halfword [s5 + 0x7354]
         s0 = halfword [s5 + 0x7584]
         s0 = halfword [s5 + 0x7bf0]

    loc_0x80400480: // orphan
           // CALL XREF from fcn.80618644 @ +0x1b4
         if                       // fcn.804018c0+0x74 // unlikely
         

    loc_0x80400488: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400498: // orphan
         

    loc_0x8040049c: // orphan
         // CODE XREF from fcn.804003c8 @ 0x804003c8
         
         
         if                       // fcn.80402404+0x4 // unlikely
         if                       // unlikely

    loc_0x804004b0: // orphan
         // CODE XREF from fcn.804003c8 @ 0x804003cc
         if                       // unlikely
         if                       // unlikely

    loc_0x804004bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804004c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804004d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804004e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804004ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804004f4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e80
         if                       // unlikely
         // CODE XREF from fcn.804003c8 @ 0x804003d4
         if                       // unlikely

    loc_0x804004f8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e80
         if                       // unlikely
         // CODE XREF from fcn.804003c8 @ 0x804003d4
         if                       // unlikely

    loc_0x80400500: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400504: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8040050c: // orphan
         

    loc_0x80400510: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400520: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8040052c: // orphan
         if                       // fcn.804003c8+0x2518 // unlikely
         if                       // unlikely

    loc_0x80400538: // orphan
         if                       // fcn.80421810-0x1ee24 // unlikely
         if                       // unlikely

    loc_0x80400544: // orphan
         if                       // fcn.804003c8+0x2730 // unlikely
         // CODE XREF from fcn.82f64ad4 @ 0x804003e4
         if                       // unlikely

    loc_0x80400550: // orphan
         

    loc_0x80400554: // orphan
         if                       // fcn.82f64ad4-0x2b61f0c // unlikely
         if                       // unlikely

    loc_0x80400560: // orphan
         if                       // fcn.80402c04+0x10 // unlikely
         

    loc_0x80400568: // orphan
         
         
         if                       // fcn.80402ca0+0x44 // unlikely
         if                       // unlikely

    loc_0x8040057c: // orphan
         
         // CODE XREF from fcn.82f64ad4 @ 0x804003ec
         if                       // unlikely
         if                       // unlikely

    loc_0x8040058c: // orphan
         
         if                       // fcn.80401828+0x15dc // unlikely
         // CODE XREF from fcn.82f64ad4 @ 0x804003f0
         if                       // fcn.80401828+0x15f0 // unlikely

    loc_0x8040059c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804005a8: // orphan
         if                       // fcn.80401828+0x1774 // unlikely
         if                       // unlikely

    loc_0x804005b4: // orphan
         
         // CODE XREF from fcn.804003c8 @ +0x2c
         if                       // unlikely
         if                       // fcn.80403000 // unlikely

    loc_0x804005c4: // orphan
         
         

    loc_0x804005cc: // orphan
         // CODE XREF from fcn.82f64ad4 @ 0x804003f8
         if                       // unlikely
         if                       // unlikely

    loc_0x804005d8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x6c8
         if                       // unlikely

    loc_0x804005e4: // orphan
         if                       // unlikely
         

    loc_0x804005ec: // orphan
         if                       // fcn.80401828+0x1998 // unlikely
         if                       // fcn.80401828+0x19bc // unlikely

    loc_0x804006e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ea0
         if                       // fcn.80403848 // unlikely
         

    loc_0x804006ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804006f8: // orphan
         if                       // unlikely

    loc_0x804006fc: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0e98
         if                       // unlikely
         if                       // fcn.80403858+0xac // unlikely

    loc_0x80400704: // orphan
         if                       // fcn.80403858+0xc0 // unlikely
         // CODE XREF from fcn.82f64ad4 @ 0x80400404
         

    loc_0x80400708: // orphan
         // CODE XREF from fcn.82f64ad4 @ 0x80400404
         

    loc_0x8040070c: // orphan
         
         
         
         

    loc_0x8040071c: // orphan
         // CODE XREF from fcn.80400404 @ 0x80400408
         if                       // unlikely
         if                       // unlikely

    loc_0x80400728: // orphan
         
         

    loc_0x80400730: // orphan
         // CODE XREF from fcn.82f64ad4 @ 0x8040040c
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400740: // orphan
         
         
         
         if                       // fcn.80403c5c+0x24 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0eac
         if                       // fcn.80403c5c+0x38 // unlikely

    loc_0x80400750: // orphan
         
         
         
         if                       // fcn.80403c5c+0x24 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0eac
         if                       // fcn.80403c5c+0x38 // unlikely

    loc_0x80400758: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400788: // orphan
         
         
         if                       // fcn.80403ff4 // unlikely
         if                       // unlikely

    loc_0x8040079c: // orphan
         if                       // fcn.80404048+0x8 // unlikely
         if                       // unlikely

    loc_0x804007a8: // orphan
         
         
         
         
         
         

    loc_0x80400a4c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ec8
         if                       // fcn.80406030+0xa0 // unlikely
         if                       // fcn.80406030+0xf4 // unlikely

    loc_0x80400a58: // orphan
         if                       // fcn.80406068+0x114 // unlikely
         if                       // fcn.80406068+0x138 // unlikely

    loc_0x80400a64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400a70: // orphan
         if                       // unlikely
         

    loc_0x80400a78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400a80: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ecc
         

    loc_0x80400a84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400a90: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0ed0
         if                       // unlikely

    loc_0x80400a94: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0ed0
         if                       // unlikely

    loc_0x80400a9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400aa0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400aa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400aac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400ab4: // orphan
         

    loc_0x80400ab8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400ac4: // orphan
         if                       // unlikely
         

    loc_0x80400acc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400ad8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400af0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b00: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b10: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0edc
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b34: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b50: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040042c
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b5c: // orphan
         
         

    loc_0x80400c48: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ef4
         if                       // fcn.804083dc+0xb0 // unlikely
         if                       // fcn.804083dc+0xc4 // unlikely

    loc_0x80400c54: // orphan
         if                       // fcn.804083dc+0x12c // unlikely
         

    loc_0x80400c5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400c68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400c74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400c80: // orphan
         
         if                       // fcn.804087b4+0x24 // unlikely
         if                       // fcn.804087b4+0x38 // unlikely

    loc_0x80400c90: // orphan
         if                       // fcn.804088a4+0x20 // unlikely
         if                       // unlikely

    loc_0x80400c9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400ca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400cb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400cc0: // orphan
         // CODE XREF from fcn.81d27610 @ +0x8f0
         
         
         if                       // fcn.80408bbc // unlikely
         if                       // unlikely

    loc_0x8040132c: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f18
         

    loc_0x80401944: // orphan
         if                       // fcn.804187f8+0xc // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f50
         if                       // unlikely

    loc_0x80401950: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8040195c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401968: // orphan
         // CODE XREF from fcn.803f0e00 @ +0x160
         if                       // unlikely
         if                       // unlikely

    loc_0x80401b7c: // orphan
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f68
         if                       // unlikely

    loc_0x80401d34: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400490
         if                       // fcn.803f1f1c-0xda84 // unlikely
         if                       // unlikely

    loc_0x80401d40: // orphan
         if                       // fcn.80401d3c-0x1d858 // unlikely
         if                       // unlikely

    loc_0x80401d4c: // orphan
         

    loc_0x80401d50: // orphan
         if                       // fcn.803dc730+0x7e84 // unlikely
         if                       // unlikely

    loc_0x80401d5c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0f78
         
         if                       // fcn.803e46c4+0x10 // unlikely
         if                       // fcn.803e46c4+0x24 // unlikely

    loc_0x80401d6c: // orphan
         
         
         
         if                       // fcn.803e47d4+0x8 // unlikely
         

    loc_0x80401d80: // orphan
         if                       // fcn.803e47f8+0x2c // unlikely
         if                       // unlikely

    loc_0x80401d8c: // orphan
         if                       // fcn.803f1f1c-0xdadc // unlikely
         if                       // fcn.803e4994-0xd0 // unlikely

    loc_0x80401d98: // orphan
         if                       // fcn.803e4994-0xd8 // unlikely
         

    loc_0x80401da0: // orphan
         
         
         
         if                       // fcn.803f1f1c-0xd39c // unlikely
         if                       // unlikely

    loc_0x80401db8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401dc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401dd0: // orphan
         if                       // fcn.803c507c+0x1fd38 // unlikely
         if                       // fcn.803c507c+0x1fd4c // unlikely

    loc_0x80401ddc: // orphan
         if                       // fcn.803c507c+0x1fd74 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f7c
         if                       // fcn.803c507c+0x1fd88 // unlikely

    loc_0x80401de0: // orphan
         if                       // fcn.803c507c+0x1fd74 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f7c
         if                       // fcn.803c507c+0x1fd88 // unlikely

    loc_0x80401de8: // orphan
         if                       // fcn.803c507c+0x1fdb0 // unlikely
         if                       // fcn.803c507c+0x1fdc4 // unlikely

    loc_0x80401df4: // orphan
         if                       // fcn.803c507c+0x1fdec // unlikely
         if                       // fcn.803e4e74+0x8 // unlikely

    loc_0x80401e00: // orphan
         if                       // fcn.803e4e74+0x30 // unlikely
         if                       // fcn.803c507c+0x1fe4c // unlikely

    loc_0x80401e0c: // orphan
         if                       // fcn.803c507c+0x1fe74 // unlikely
         if                       // fcn.803c507c+0x1fe88 // unlikely

    loc_0x80401e18: // orphan
         if                       // fcn.803e4e74+0xb8 // unlikely
         if                       // fcn.803e4e74+0xcc // unlikely

    loc_0x80401e24: // orphan
         if                       // fcn.803e4e74+0xf4 // unlikely
         if                       // fcn.803e4e74+0x108 // unlikely

    loc_0x80401e30: // orphan
         if                       // fcn.803e4e74+0x130 // unlikely
         if                       // fcn.803e4fc8 // unlikely

    loc_0x80401e3c: // orphan
         if                       // fcn.803e4fc8+0x28 // unlikely
         if                       // fcn.803e4fc8+0x3c // unlikely

    loc_0x8040244c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0fb8
         if                       // unlikely
         if                       // unlikely

    loc_0x80402458: // orphan
         if                       // fcn.803c6038+0x29984 // unlikely

    loc_0x8040245c: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004a8
         if                       // unlikely
         if                       // unlikely

    loc_0x80402464: // orphan
         if                       // unlikely

    loc_0x80402468: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x7d8
         if                       // unlikely

    loc_0x80402470: // orphan
         if                       // unlikely

    loc_0x80402474: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004b0
         if                       // unlikely
         if                       // unlikely

    loc_0x8040247c: // orphan
         if                       // fcn.803c6038+0x29978 // unlikely

    loc_0x80402480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402488: // orphan
         if                       // unlikely

    loc_0x8040248c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x7dc
         if                       // unlikely

    loc_0x80402494: // orphan
         if                       // fcn.803c6038+0x29cb0 // unlikely

    loc_0x80402498: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004b4
         if                       // unlikely
         if                       // unlikely

    loc_0x804024a0: // orphan
         if                       // unlikely
         

    loc_0x804024a4: // orphan
         

    loc_0x804024a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804024b4: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x7e0
         if                       // unlikely
         if                       // unlikely

    loc_0x804024c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804024cc: // orphan
         
         

    loc_0x804024d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004c0
         
         
         
         
         if                       // fcn.803c6038+0x2a2d0 // unlikely
         if                       // unlikely

    loc_0x804024f0: // orphan
         if                       // fcn.803f03b0+0x14 // unlikely
         if                       // fcn.803f03b0+0x28 // unlikely

    loc_0x804024fc: // orphan
         
         if                       // fcn.803f04b0+0xd4 // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0fe0
         if                       // unlikely

    loc_0x8040250c: // orphan
         

    loc_0x80402510: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004cc
         
         if                       // unlikely
         if                       // fcn.803f089c // unlikely

    loc_0x80402520: // orphan
         
         
         // CODE XREF from fcn.80400480 @ 0x804004d4
         if                       // unlikely
         if                       // unlikely

    loc_0x80402534: // orphan
         if                       // unlikely
         

    loc_0x8040253c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8040254c: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004d8
         
         
         
         
         
         
         // CODE XREF from fcn.80400480 @ 0x804004e0
         
         
         if                       // fcn.803f1120+0x30 // unlikely
         if                       // unlikely

    loc_0x80402578: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402584: // orphan
         

    loc_0x80402588: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004e4
         if                       // unlikely
         if                       // unlikely

    loc_0x80402594: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804025a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804025ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804025b8: // orphan
         if                       // unlikely

    loc_0x804025bc: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004f8
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x804004ec
         if                       // unlikely

    loc_0x804025c4: // orphan
         if                       // unlikely

    loc_0x804025c8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0fc4
         if                       // unlikely
         if                       // unlikely

    loc_0x804025d0: // orphan
         

    loc_0x804025d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004f0
         
         // CODE XREF from fcn.8041f2b0 @ +0x7e4
         
         
         if                       // fcn.803dd83c+0x15088 // unlikely
         if                       // fcn.803dd83c+0x1509c // unlikely

    loc_0x804025ec: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80402604: // orphan
         
         
         
         if                       // fcn.803dd83c+0x15758 // unlikely
         if                       // fcn.803dd83c+0x1576c // unlikely

    loc_0x8040261c: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x7e8
         
         
         
         
         if                       // fcn.803f48c0+0xa0 // unlikely
         if                       // fcn.803f03b0+0x45e4 // unlikely

    loc_0x80402638: // orphan
         
         
         // CODE XREF from fcn.8041f2b0 @ +0x7ec
         
         
         
         
         
         if                       // fcn.803f03f0+0x4ee8 // unlikely
         if                       // fcn.803f03f0+0x4efc // unlikely

    loc_0x8040265c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0fc8
         if                       // fcn.803f04b0+0x5020 // unlikely

    loc_0x80402660: // orphan
         if                       // fcn.803f04b0+0x5034 // unlikely
         if                       // unlikely

    loc_0x80402668: // orphan
         if                       // unlikely

    loc_0x8040266c: // orphan
         if                       // fcn.803f04b0+0x5100 // unlikely
         if                       // unlikely

    loc_0x80402674: // orphan
         if                       // fcn.803f04b0+0x5138 // unlikely

    loc_0x80402678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402680: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x7f0
         

    loc_0x80402684: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x7f0
         

    loc_0x80402688: // orphan
         
         
         
         
         
         

    loc_0x804026a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x804004fc
         
         
         tge s0, 0, 0x346

    loc_0x804026b8: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0fe4
         syscall                  // 255 = unknown ()

    loc_0x804026c8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400504
         

    loc_0x80402878: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f1014
         syscall                  // 255 = unknown ()

    loc_0x804028a8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400524
         teq s0, 0, 0x37d

    loc_0x80402930: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f102c
         sp -= 0x18

    loc_0x80402934: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400520
         // CODE XREF from fcn.8041f2b0 @ +0x810
         [sp + 0x14] = ra
         a0 = 0x86c0 << 16
         call 0x81a00020          // 0x81a00020(0x86c00000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x350
         a0 = 0x86c0 << 16
         call fcn.81a005f0
         a0 += 0x350
         call 0x8005a0b4          // 0x8005a0b4(0x86c00350, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         call 0x8005a0b4          // 0x8005a0b4(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x8005a0b4          // 0x8005a0b4(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         // CODE XREF from fcn.8041f2b0 @ +0x814
         call 0x8005a0b4          // 0x8005a0b4(0x2, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.804003c8 @ 0x80400528
         a0 = 0 + 3
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804029b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400530
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x80402a2c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400548
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 1               // lo
         bnel v0, at, 0x80402a48  // likely
         ra = [sp + 0x1c]         // t9

    loc_0x80402a40: // orphan
         s0 = 0 + 3
         ra = [sp + 0x1c]         // t9

    loc_0x80402a48: // orphan
         // CODE XREF from fcn.80421810 @ 0x804029ec
         v0 = s0
         s0 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x80402ac0: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040053c
         ra = [sp + 0x24]
         s0 = [sp + 0x14]         // ra
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]
         // CODE XREF from fcn.804003c8 @ 0x80400540
         ret
         sp += 0x28

    loc_0x80402bec: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400558
         a0 += 0x350
         call 0x81a00074          // 0x81a00074(0x10000034f, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0x86c0 << 16
         [sp + 0x18] = v0
         a0 += 0x330

    loc_0x80402cf8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400574
         if                       // fcn.80403544+0xa8 // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x848
         

    loc_0x80402d00: // orphan
         

    loc_0x80402d04: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80402d20: // orphan
         if                       // fcn.804036fc+0x18 // unlikely
         

    loc_0x80402d28: // orphan
         
         
         
         
         if                       // fcn.80403860+0xc // unlikely
         if                       // unlikely

    loc_0x80402d44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402d50: // orphan
         if                       // fcn.80403858+0x9c // unlikely
         if                       // fcn.80403858+0xc0 // unlikely

    loc_0x80402d5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80402d68: // orphan
         

    loc_0x80402d6c: // orphan
         
         goto 0x87e01424
         // CODE XREF from fcn.80400480 @ 0x80400580
         

    loc_0x80402d94: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f1040
         t6 = [t6 - 0x45e0]       // t9

    loc_0x80402d98: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400584
         ret                      // ra
         [t6 + 0x2e04] = 0

    loc_0x80402f40: // orphan
         // CODE XREF from fcn.80400480 @ 0x804005ac
         a0 = [a0 - 0x45e0]       // t9
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x87e03d28          // 0x87e03d28(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x8040059c
         a0 += 0x2b0
         t6 = 0x87e2 << 16
         t6 = [t6 - 0x45e0]       // t9
         call 0x87f0f390          // 0x87f0f390(0x1000002af, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t6 + 0]
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x80402f74: // orphan
         // CODE XREF from fcn.80400480 @ 0x804005a0
         v0 = 0x87e2 << 16
         v0 -= 0x45e0
         t7 = [v0 + 0]            // t9
         sp -= 0x18
         [sp + 0x14] = ra
         // CODE XREF from fcn.804004c4 @ +0xe0
         t6 = 0 + 3
         [t7 + 0x24] = t6
         a0 = [v0 + 0]            // t9
         call 0x87e04a14          // 0x87e04a14(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x4b8

    loc_0x804030a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f104c
         t6 = 0 + 0xff            // s4
         t8 = 0 + 2

    loc_0x804030a8: // orphan
         [t7 + 0x1c] = t6
         [a0 + 0] = t8            // arg1
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xf
         call 0x800225c4          // 0x800225c4(0xf, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xf
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804030e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f1050
         beql v0, at, 0x804030f8  // fcn.804030ec+0xc // unlikely
         ra = [sp + 0x14]

    loc_0x80403104: // orphan
         // CODE XREF from fcn.80400480 @ 0x804005d0
         sp -= 0x28
         [sp + 0x1c] = ra
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = s0
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 0x87e2 << 16
         [sp + 0x24] = v0
         a1 -= 0x6990
         call 0x80040e80          // 0x80040e80(0xff, 0x87e19670, 0x8, -1)
         a0 = v0                  // s4
         s0 = 0x87e2 << 16
         s0 -= 0x45e0
         // CODE XREF from fcn.80400480 @ 0x804005d8
         t6 = [s0 + 0]            // t9
         [t6 + 0x20] = v0
         call 0x80003120          // 0x80003120(0xff, 0x87e19670, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         t7 = [s0 + 0]            // t9

    loc_0x80403150: // orphan
         // CODE XREF from fcn.80400480 @ 0x804005dc
         [t7 + 0x3114] = 0
         v1 = [s0 + 0]
         a0 = v1 + 0x3108
         call 0x87f0e390          // 0x87f0e390(0x3137, 0x442f71dcfe116408, 0x8, -1)
         a1 = [v1 + 0]            // t9
         // CODE XREF from fcn.804004c4 @ +0x11c
         call 0x8004c8c0          // 0x8004c8c0(0x3137, -1, 0x8, -1)
         a0 = 0 + 0x1a2
         call 0x8004d690          // 0x8004d690(0x1a2, -1, 0x8, -1)
         a0 = 0 + 0x12
         t8 = [s0 + 0]

    loc_0x80403178: // orphan
         // CODE XREF from fcn.80400480 @ 0x804005e4
         [t8 + 4] = v0
         v1 = [s0 + 0]
         t9 = [v1 + 4]
         [v1 + 8] = t9
         v1 = [s0 + 0]
         t0 = [v1 + 4]            // t9
         [v1 + 0xc] = t0

    loc_0x804032c0: // orphan
         
         call 0x87e00360          // 0x87e00360(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.804004c4 @ +0x154
         goto 0x804032f0          // fcn.80401828+0x1ac8
         // CODE XREF from fcn.80400480 @ 0x803f106c
         ra = [sp + 0x1c]         // t9

    loc_0x80403528: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f1084
         if                       // likely
         // CODE XREF from fcn.8040061c @ +0x4c
         cvt.s.w f6, f4

    loc_0x80403530: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80403540: // orphan
         // CODE XREF from fcn.8040061c @ +0x50
         v0 = [s0 + 0]

    loc_0x804036cc: // orphan
           // CODE XREF from fcn.8040061c @ +0x84
           // CALL XREF from fcn.812f666c @ +0xfb8
         a2 = [s1 + 0x10]         // t9
         if                       // unlikely
         a1 = a2                  // t9

    loc_0x80403890: // orphan
         // CODE XREF from fcn.80400480 @ 0x804006ec
         a0 = v0 + 0x28           // arg1
         call 0x87e00590          // 0x87e00590(0x127, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x804038f4          // fcn.80403858+0x9c
         // CODE XREF from fcn.80400480 @ 0x803f109c
         

    loc_0x804038a4: // orphan
         // CODE XREF from fcn.80400480 @ 0x804006f0
         call 0x87e03448          // 0x87e03448(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x2b0
         call 0x87e00590          // 0x87e00590(0x3af, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x804038f4          // fcn.80403858+0x9c
         

    loc_0x804038bc: // orphan
         call 0x87e053d0          // 0x87e053d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x4b8
         call 0x87e00590          // 0x87e00590(0x5b7, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x804038f4          // fcn.80403858+0x9c
         

    loc_0x804038e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f10a0
         call 0x87e183a0          // 0x87e183a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x2260
         // CODE XREF from fcn.80400480 @ 0x804006f8
         call 0x87e00590          // 0x87e00590(0x235f, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80403920: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400704
         t0 = [t9 + 0x2e04]
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x804006fc
         

    loc_0x80403974: // orphan
         [sp + 0x1c] = v0
         v1 = [sp + 0x1c]         // s4
         at = 0 + 1               // lo
         v0 = 0 + 2
         if                       // unlikely
         

    loc_0x8040398c: // orphan
         if                       // unlikely
         t7 = 0x87e2 << 16

    loc_0x8040399c: // orphan
         call 0x87e0006c          // 0x87e0006c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87e00148          // 0x87e00148(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x804039d4
         ra = [sp + 0x14]

    loc_0x80403a24: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x8bc
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x80400720
         t6 = v1 << 2

    loc_0x80403a60: // orphan
         t1 = [t1 - 0x45e0]       // t9
         t0 = 0 + 1               // lo
         t2 = [t1 + 0]            // t9
         call 0x87e00184          // 0x87e00184(-1, 0x442f71dcfe116408, 0x8, -1)
         [t2 + 0x2184] = t0
         goto 0x80403ab8          // fcn.80401828+0x2290
         ra = [sp + 0x14]

    loc_0x80403b3c: // orphan
         a0 = 0 + 6               // arg1
         // CODE XREF from fcn.8041f2b0 @ +0x8cc
         call 0x87e10f2c          // 0x87e10f2c(0x6, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         // CODE XREF from fcn.80400480 @ 0x80400734
         t1 = 0x87e2 << 16
         t1 = [t1 - 0x45e0]       // t9
         t5 = 0 + 2
         [t1 + 0x24] = t5
         t6 = 0x87e2 << 16

    loc_0x80403b5c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400738
         t6 = [t6 - 0x45e0]       // t9
         [t6 + 0x3114] = 0

    loc_0x80403c54: // orphan
         [sp + 0x14] = ra
         call 0x87e04114          // 0x87e04114(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80403d00: // orphan
         t6 = v1 << 2

    loc_0x80403d04: // orphan
         at = 0x87e2 << 16

    loc_0x80403dfc: // orphan
         a0 = 0 + 5               // arg1
         [v0 + 0x1c] = t6
         t7 = [sp + 0x18]         // s4
         call 0x80007b34          // 0x80007b34(0x5, 0x442f71dcfe116408, 0x8, -1)
         [t7 + 0] = a2
         goto 0x80403e8c
         ra = [sp + 0x14]

    loc_0x80403e8c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80403e10
         sp += 0x18
         ret                      // ra
         

    loc_0x80403f48: // orphan
         t1 = , unsigned  byte [v1 + 0x2182] // s4
         goto 0x80403f94
         // CODE XREF from fcn.80400480 @ 0x8040077c
         

    loc_0x80403f64: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400780
         t1 = , unsigned  byte [v1 + 0x2182] // s4
         at = 0 + 0xf
         if                       // likely
         

    loc_0x80403f74: // orphan
         call 0x87e00184          // 0x87e00184(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80403fa0
         ra = [sp + 0x14]

    loc_0x80403f84: // orphan
         call 0x87e00204          // 0x87e00204(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80403fa0
         ra = [sp + 0x14]

    loc_0x80403f94: // orphan
         // CODE XREF from fcn.80400480 @ 0x80403f4c
         call 0x87e00148          // 0x87e00148(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]

    loc_0x80403fa0: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80403f7c, 0x80403f8c
         sp += 0x18
         ret                      // ra
         

    loc_0x80404008: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400794
         // CODE XREF from fcn.8041f2b0 @ +0x904
         a0 = a2
         goto 0x8040406c          // fcn.80404018+0x54
         

    loc_0x80404064: // orphan
         // CODE XREF from fcn.80400480 @ 0x804007a0
         call 0x87e00bdc          // 0x87e00bdc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = a2

    loc_0x80404268: // orphan
         a0 += 0                  // arg1 // t9
         at = 0xf00 << 16
         a0 &= at                 // arg1
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00             // arg3
         a1 += 0x6e30             // arg2
         a0 >>= 0x18              // arg1
         call 0x80004638          // 0x80004638(0xf, 0x446e30, 0x447d00, -1)
         // CODE XREF from fcn.8041f2b0 @ +0x928
         a3 = 0

    loc_0x804044ac: // orphan
         [sp + 0x1c] = a1
         // CODE XREF from fcn.804007c0 @ 0x804007dc
         a0 = a3                  // s2
         t8 = lo
         // CODE XREF from fcn.8041f2b0 @ +0x944
         
         
         divu 0, t6, t8

    loc_0x8040450c: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x948
         t6 = 0x87e2 << 16
         [sp + 0x1c] = ra
         t6 -= 0x68e0
         [sp + 0x10] = t6
         a1 = 0 + 4

    loc_0x80404520: // orphan
         a2 = 0 + 4
         call 0x87e01720          // 0x87e01720(-1, 0x442f71dcfe116408, 0x4, -1)
         a3 = 0 + 0x1a6
         ra = [sp + 0x1c]
         sp += 0x20

    loc_0x80404534: // orphan
         ret                      // ra
         

    loc_0x80404590: // orphan
         a3 = 0 + 0x1a4
         ra = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         

    loc_0x80404704: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x960
         [sp + 0x10] = t2
         call 0x87e13558          // 0x87e13558(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         t4 = sp + 0x40
         t6 = [t4 + 0]            // s0
         t3 = [s0 + 0]
         t7 = 0x87e2 << 16
         at = 0 + 2
         [t3 + 0x48] = t6

    loc_0x80404728: // orphan
         t5 = [t4 + 4]            // s4
         a1 = 0xc248 << 16
         a2 = 0x41f0 << 16
         [t3 + 0x4c] = t5
         t6 = [t4 + 8]            // t9
         a3 = 0x4120 << 16
         t9 = 0 + 6

    loc_0x80404744: // orphan
         [t3 + 0x50] = t6
         t7 = [t7 - 0x14b0]       // t9
         a0 = [sp + 0x34]         // t9
         t8 = [t7 + 0]            // t9
         beql t8, at, 0x804047a8  // fcn.803f115c+0x1364c // unlikely
         v0 = [s0 + 0]

    loc_0x804048f0: // orphan
         // CODE XREF from fcn.80400480 @ 0x8041fc1c
         [sp + 0x50] = s0
         sdc1 f28, 0x48, sp
         sdc1 f26, 0x40, sp
         sdc1 f24, 0x38, sp
         sdc1 f22, 0x30, sp

    loc_0x80405f08: // orphan
         [v1 + 0] = t5
         [v0 + 0] = t6
         t7 = [s0 + 0]
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8041f2b0 @ +0xa64
         [v0 + 4] = t7
         // CODE XREF from fcn.80400848 @ +0x1e0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]         // s4
         sp += 0x20
         ret                      // ra
         // CODE XREF from fcn.8041f2b0 @ +0xa68
         

    loc_0x804061ec: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a68
         [sp + 0x2c] = ra
         [sp + 0x24] = s2
         [sp + 0x20] = s1
         [sp + 0x1c] = s0
         sdc1 f20, 0x10, sp
         // CODE XREF from fcn.80400848 @ +0x224
         a0 = 0 + 0x1b2           // arg1
         call 0x8004c990          // 0x8004c990(0x1b2, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         mtc1 0, f20
         a0 = v0                  // s4
         a2 = 0x4120 << 16
         mfc1 a1, f20
         call 0x87f08df8          // 0x87f08df8(0xff, 0x1, 0x41200000, -1)
         a3 = 0xf00 << 16
         s0 = s3 + 0x160
         s2 = v0                  // s4
         s3 = 0 + 4
         s1 = 0

    loc_0x80406234: // orphan
         [s0 + 0] = s1
         [s0 + 4] = s2
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80406244: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a70
         a1 = 0 + 1               // lo
         call 0x8004ca60          // "&1" // 0x8004ca60(-1, 0x1, 0x8, -1)
         a0 = v0                  // s4
         s1 += 1
         s0 += 0x14
         [s0 - 0xc] = v0
         // CODE XREF from fcn.80400480 @ 0x80400a78
         swc1 f20, -8, s0
         if                       // likely
         swc1 f20, -4, s0

    loc_0x80406268: // orphan
         ra = [sp + 0x2c]
         ldc1 f20, 0x10, sp

    loc_0x80406270: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a7c
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]         // t9
         s3 = [sp + 0x28]         // t9
         ret                      // ra
         sp += 0x30

    loc_0x804062a8: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = v0                  // s4
         call 0x87f08e3c          // 0x87f08e3c(0xff, 0x0, 0x8, -1)
         a1 = 0xf00 << 16
         s0 = s3 + 0x1c4
         s2 = v0                  // s4
         s3 = 0 + 4
         s1 = 0

    loc_0x804062cc: // orphan
         byte [s0 + 8] = s1
         [s0 + 0] = s2
         call 0x87e03020          // "&1" // 0x87e03020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s1 += 1
         if                       // likely
         s0 += 0xc

    loc_0x804062e4: // orphan
         s0 += 0xc

    loc_0x804062e8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a84
         ra = [sp + 0x24]         // t9
         s0 = [sp + 0x14]         // ra
         // CODE XREF from fcn.8041f2b0 @ +0xa7c
         s1 = [sp + 0x18]         // s4
         s2 = [sp + 0x1c]         // s0

    loc_0x804062f8: // orphan
         s3 = [sp + 0x20]
         ret                      // ra
         sp += 0x28

    loc_0x80406324: // orphan
         a0 = s0
         call 0x87e03470          // 0x87e03470(0x104, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x80400a88
         a0 = s0

    loc_0x8040632c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a88
         a0 = s0
         call 0x87e03518          // 0x87e03518(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         // CODE XREF from fcn.8041f2b0 @ +0xa84
         call 0x87e028d8          // 0x87e028d8(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         ra = [sp + 0x1c]         // s0
         s0 = [sp + 0x18]         // s4
         sp += 0x20
         ret                      // s0
         // CODE XREF from fcn.80400848 @ +0x244
         

    loc_0x804063d8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a94
         t2 = t1 + 1
         [v1 + 0] = t2
         v0 = [s0 + 0]            // t9
         mtc1 at, f6
         t6 = 0 + 6
         t5 = [v0 + 0x48]         // t9
         a1 = 0xc2b4 << 16
         a2 = 0xc000 << 16
         [t3 + 0] = t5

    loc_0x804063fc: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400a98
         t4 = [v0 + 0x4c]
         a3 = 0 + 0               // arg4
         [t3 + 4] = t4
         t5 = [v0 + 0x50]
         [t3 + 8] = t5
         lwc1 f4, 0x50, v0
         add.s f8, f4, f6
         swc1 f8, 0x50, v0
         [sp + 0x10] = t6
         call 0x87e13558          // 0x87e13558(-1, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = [s0 + 0]
         t8 = sp + 0x38
         t0 = [t8 + 0]            // a2
         t7 = [s0 + 0]
         t1 = 0 + 6
         a1 = 0 + 0
         [t7 + 0x48] = t0
         // CODE XREF from fcn.80400480 @ 0x80400a9c
         t9 = [t8 + 4]
         a2 = 0x41f0 << 16
         a3 = 0x4120 << 16
         [t7 + 0x4c] = t9

    loc_0x80406450: // orphan
         t0 = [t8 + 8]            // t9
         [t7 + 0x50] = t0
         [sp + 0x10] = t1
         call 0x87f0b0fc          // 0x87f0b0fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x2c]         // ra

    loc_0x80406464: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400aa0
         goto 0x804064a8
         v0 = [s0 + 0]

    loc_0x80406488: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400aa4
         at = , t4 < 0xc8

    loc_0x8040648c: // orphan
         beql at, 0, 0x8040649c   // unlikely
         [v1 + 0] = 0

    loc_0x80406494: // orphan
         byte [v0 + 0x60] = t5
         [v1 + 0] = 0

    loc_0x8040649c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400aa8
         call 0x87f0b154          // 0x87f0b154(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x2c]         // ra
         v0 = [s0 + 0]

    loc_0x804064a0: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400aa8
         call 0x87f0b154          // 0x87f0b154(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x2c]         // ra
         v0 = [s0 + 0]

    loc_0x804064a8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406464
         v1 = , unsigned  byte [v0 + 0x60] // s4
         byte [v0 + 0x62] = v1

    loc_0x804064b0: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400aac
         t6 = [s0 + 0]
         byte [t6 + 0x61] = v1
         ra = [sp + 0x24]         // t9
         // CODE XREF from fcn.8041f2b0 @ +0xa88
         s0 = [sp + 0x20]
         sp += 0x48
         ret                      // t9
         

    loc_0x804064f4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400ab0
         a0 = [t3 + 0x14]         // t9
         t7 = 0xe700 << 16
         t6 = v0 + 8
         // CODE XREF from fcn.8041f2b0 @ +0xa8c
         a1 = [a0 + 0x20]         // arg1 // s4
         [v1 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t9 = 0xfc50 << 16
         t9 |= 0xffff
         t8 = v0 + 8
         [v1 + 0] = t8
         t4 = 0 - 0xdc8
         [v0 + 4] = t4
         // CODE XREF from fcn.80400480 @ 0x80400ab8
         [v0 + 0] = t9
         v0 = [v1 + 0]
         t6 = 0xfb00 << 16
         t5 = v0 + 8
         [v1 + 0] = t5
         [v0 + 0] = t6
         // CODE XREF from fcn.8041f2b0 @ +0xa90
         t5 = , unsigned  byte [a0 + 0x61] // arg1 // s4
         t8 = , unsigned  byte [a0 + 0x60] // arg1 // s4
         t4 = , unsigned  byte [a0 + 0x62] // arg1 // s4

    loc_0x80406550: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400abc
         t6 = t5 << 0x10
         t9 = t8 << 0x18
         t7 = t9 | t6
         t5 = t4 << 8
         t9 = t7 | t5
         t6 = t9 | 0xff
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t4 = 0xdb06 << 16
         // CODE XREF from fcn.80400848 @ +0x278
         t4 |= 0x3c
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 0] = t4
         t7 = [a1 + 0xc]          // arg2 // t9
         // CODE XREF from fcn.8041f2b0 @ +0xa94
         t6 = 0xde00 << 16
         t5 = [t7 + 8]            // t9
         [v0 + 4] = t5
         v0 = [v1 + 0]

    loc_0x80406598: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400ac4
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 0] = t6
         t8 = [a1 + 8]            // arg2 // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8041f2b0 @ +0xa98
         [v0 + 4] = t8
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804065f4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400ad0
         sdc1 f20, 0x28, sp

    loc_0x804065f8: // orphan
         call 0x87f02684          // 0x87f02684(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x5c] = a0
         fp = 0x87e0 << 16
         mtc1 0, f20
         fp += 0x35e4
         s5 = 0
         a0 = [sp + 0x5c]         // t9

    loc_0x80406614: // orphan
         call 0x87f025b8          // 0x87f025b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = fp
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80406624: // orphan
         s6 = [v0 + 0x20]
         s2 = v0 + 0x24
         v0 = s5 << 2
         v0 -= s5
         t6 = 0x87e2 << 16
         t7 = 0x87e2 << 16
         t7 -= 0x67e8
         t6 -= 0x6800
         v0 <<= 2
         s1 = v0 + t6
         s4 = v0 + t7
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8041f2b0 @ +0xaa0
         a0 = s2
         a0 = s2

    loc_0x8040665c: // orphan
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [s7 + 0x1f8]        // t9
         [s0 + 0x38] = s0
         lwc1 f4
         t8 = 0 - 0x4000
         s2 = s0 + 0x48
         swc1 f4, 0x48, s0
         lwc1 f6, 4, s1
         t1 = 0xc8c8 << 16
         a1 = s2
         swc1 f6, 0x4c, s0
         lwc1 f8, 8, s1
         halfword [s0 + 0x44] = t8
         s1 = s6 + 0x10
         swc1 f8, 0x50, s0
         t9 = [s7 + 4]            // s4
         a0 = s1
         a2 = s0 + 0x54
         if                       // likely
         s3 = s0 + 0x42

    loc_0x804066b4: // orphan
         t0 = 0 - 1               // s2
         // CODE XREF from fcn.8041f2b0 @ +0xaa4
         goto 0x804066c8
         [s0 + 0x60] = t0

    loc_0x804066c0: // orphan
         t1 |= 0xc8ff
         [s0 + 0x60] = t1
         // CODE XREFS from fcn.80400480 @ 0x80400ae4, 0x804066b8
         call 0x87f0afd0          // "\u018a" // 0x87f0afd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = s3                  // t9
         lwc1 f10, 8, s4
         t2 = 0 + 0xa
         t3 = 0 + 0x1000

    loc_0x804066dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400ae8
         [sp + 0x18] = t3

    loc_0x804066e0: // orphan
         [sp + 0x14] = t2
         a0 = s1
         a1 = s2
         a2 = [s4 + 0]
         a3 = [s4 + 4]            // t9

    loc_0x804066f4: // orphan
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10, 0x10, sp
         mfc1 a2, f20
         mfc1 a3, f20
         t4 = 0 + 0xa

    loc_0x80406708: // orphan
         t5 = 0 | 0xc000
         [sp + 0x18] = t5
         [sp + 0x14] = t4
         a0 = s1
         a1 = s3                  // t9
         call 0x87f0b2f4          // 0x87f0b2f4(0x442f71dcfe117dbd, -1, 0x8, -1)
         swc1 f20, 0x10, sp

    loc_0x80406724: // orphan
         s5 += 1
         at = 0 + 2

    loc_0x8040672c: // orphan
         bnel s5, at, 0x80406614  // likely
         a0 = [sp + 0x5c]         // t9

    loc_0x80406734: // orphan
         a0 = 0 + 3
         a1 = 0 + 0x8c
         call 0x87e0168c          // 0x87e0168c(0x3, 0x8c, 0x8, -1)

    loc_0x80406740: // orphan
         a2 = 0 + 9
         ra = [sp + 0x54]
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]         // a2
         s1 = [sp + 0x34]         // t9

    loc_0x80406754: // orphan
         s2 = [sp + 0x38]         // a2

    loc_0x80406758: // orphan
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]         // s0
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]

    loc_0x80406768: // orphan
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]         // s0
         ret                      // ra
         sp += 0x70

    loc_0x8040678c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400af8
         s6 = a0 + 0x14c          // arg1
         [sp + 0x60] = s7
         [sp + 0x58] = s5
         [sp + 0x54] = s4
         [sp + 0x4c] = s2
         [sp + 0x48] = s1
         [sp + 0x44] = s0
         sdc1 f30, 0x38, sp
         sdc1 f28, 0x30, sp
         sdc1 f26, 0x28, sp
         sdc1 f24, 0x20, sp
         sdc1 f22, 0x18, sp
         sdc1 f20, 0x10, sp
         call 0x87f02684          // 0x87f02684(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s6
         at = 0x40a0 << 16
         mtc1 at, f30
         at = 0xc0e0 << 16
         mtc1 at, f28
         at = 0x87e2 << 16
         ldc1 f26, -0x4ab8, at
         at = 0x4032 << 16
         mtc1 at, f25
         at = 0x4044 << 16
         // CODE XREF from fcn.834a92b4 @ +0x714
         mtc1 at, f23
         at = 0x87e2 << 16
         s7 = 0x87e0 << 16
         mtc1 0, f24
         mtc1 0, f22

    loc_0x8040685c: // orphan
         add.d f16, f10, f26
         cvt.s.d f18, f16
         swc1 f18, 0x48, s0
         t6 = [s3 + 0x204]        // t9
         t7 = , unsigned  byte [t6 + 0x2180] // s4

    loc_0x80406a28: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400b14
         sp += 0x60
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x87e03850          // 0x87e03850(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         // CODE XREF from fcn.80400848 @ +0x2d0
         call 0x87e03a08          // 0x87e03a08(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x18]         // t9
         call 0x87e03b70          // 0x87e03b70(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x18]         // t9
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x80406a6c: // orphan
         [a0 + 0] = 0
         call 0x87e134c0          // 0x87e134c0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80406a74: // orphan
         
         call 0x87e13490          // 0x87e13490(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80406a80: // orphan
         call 0x87e13480          // 0x87e13480(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         ra = [sp + 0x14]         // t9
         // CODE XREF from fcn.8041f2b0 @ +0xac8
         sp += 0x18
         ret                      // t9
         

    loc_0x80406b04: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400b20
         [sp + 0x34] = s0
         sdc1 f22, 0x28, sp
         sdc1 f20, 0x20, sp
         s0 = [a0 + 0x14]         // arg1
         // CODE XREF from fcn.8041f2b0 @ +0xad0
         s1 = 0x87e2 << 16
         s1 -= 0x67d0
         if                       // unlikely
         at = 0x4334 << 16

    loc_0x80406b24: // orphan
         mtc1 at, f22
         mtc1 0, f20
         s2 = 0 + 0xa
         v0 = [s0 + 0x20]         // t9

    loc_0x80406b34: // orphan
         lwc1 f4, 8, s1
         // CODE XREF from fcn.80400848 @ +0x2dc
         a2 = [s1 + 0]
         a3 = [s1 + 4]            // t9
         t6 = 0 + 0x2000
         s3 = v0 + 0x10
         a0 = s3
         [sp + 0x18] = t6
         [sp + 0x14] = s2
         a1 = s0 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(0x10f, 0x14c, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x80400b28
         swc1 f4, 0x10, sp
         mfc1 a2, f22
         mfc1 a3, f20
         a0 = s3
         a1 = s0 + 0x42
         swc1 f20, 0x10, sp
         [sp + 0x14] = s2
         call 0x87f0b2f4          // 0x87f0b2f4(0x10f, 0x146, 0x8, -1)
         [sp + 0x18] = 0
         s0 = [s0 + 4]
         s1 += 0xc
         s2 += 5
         bnel s0, 0, 0x80406b34   // likely
         // CODE XREF from fcn.80400480 @ 0x80400b2c
         v0 = [s0 + 0x20]         // t9

    loc_0x80406b90: // orphan
         lwc1 f4, 8, s1
         // CODE XREF from fcn.80400848 @ +0x2dc
         a2 = [s1 + 0]
         a3 = [s1 + 4]            // t9
         t6 = 0 + 0x2000
         s3 = v0 + 0x10
         a0 = s3
         [sp + 0x18] = t6
         [sp + 0x14] = s2
         a1 = s0 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(0x10f, 0x14c, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x80400b28
         swc1 f4, 0x10, sp
         mfc1 a2, f22
         mfc1 a3, f20
         a0 = s3
         a1 = s0 + 0x42
         swc1 f20, 0x10, sp
         [sp + 0x14] = s2
         call 0x87f0b2f4          // 0x87f0b2f4(0x10f, 0x146, 0x8, -1)
         [sp + 0x18] = 0
         s0 = [s0 + 4]
         s1 += 0xc
         s2 += 5
         bnel s0, 0, 0x80406b34   // likely
         // CODE XREF from fcn.80400480 @ 0x80400b2c
         v0 = [s0 + 0x20]         // t9

    loc_0x80406b94: // orphan
         ra = [sp + 0x44]         // s0
         // CODE XREF from fcn.8041f2b0 @ +0xad4
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         s0 = [sp + 0x34]
         // CODE XREF from fcn.80400848 @ +0x2e8
         s1 = [sp + 0x38]         // a2
         s2 = [sp + 0x3c]
         s3 = [sp + 0x40]         // s0
         ret                      // s0
         sp += 0x48

    loc_0x80406c2c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406d24
         v0 = [s0 + 0x20]         // t9
         lwc1 f8, 0x50, s0
         add.s f6, f4, f26
         a2 = [s0 + 0x48]
         t6 = 0 + 0xf
         // CODE XREF from fcn.8041f2b0 @ +0xadc
         t7 = 0 + 0x2000
         mfc1 a3, f6
         s1 = v0 + 0x10
         a0 = s1
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         a1 = s0 + 0x48
         call 0x87f0b1a4          // 0x87f0b1a4(0x10000000f, 0x14c, 0xffffff, -1)
         swc1 f8, 0x10, sp
         call 0x8003570c          // 0x8003570c(0x10000000f, 0x14c, 0xffffff, -1)
         
         // CODE XREF from fcn.80400480 @ 0x80400b38
         call 0x8003570c          // 0x8003570c(0x10000000f, 0x14c, 0xffffff, -1)
         s2 = v0                  // t9
         call 0x8003570c          // 0x8003570c(0x10000000f, 0x14c, 0xffffff, -1)
         s3 = v0                  // t9
         mtc1 s2, f10

    loc_0x80406c80: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400b3c
         a0 = s1
         a1 = s0 + 0x42           // arg2
         if                       // unlikely
         cvt.s.w f16, f10

    loc_0x80406c90: // orphan
         at = 0x4f80 << 16
         // CODE XREF from fcn.8041f2b0 @ +0xae0
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x80406ca0: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406c88
         div.s f4, f16, f20
         mtc1 s3, f10
         at = 0x4f80 << 16

    loc_0x80406cac: // orphan
         cvt.s.w f18, f10
         mul.s f6, f4, f22

    loc_0x80406cb4: // orphan
         sub.s f8, f6, f24
         mfc1 a2, f8
         bgezl s3, 0x80406cd4     // likely
         div.s f4, f18, f20

    loc_0x80406cc4: // orphan
         mtc1 at, f16
         
         add.s f18, f18, f16
         div.s f4, f18, f20

    loc_0x80406cd4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406cbc
         mtc1 v0, f10

    loc_0x80406cd8: // orphan
         at = 0x4f80 << 16
         cvt.s.w f16, f10
         mul.s f6, f4, f22
         sub.s f8, f6, f24
         mfc1 a3, f8
         bgezl v0, 0x80406d04     // likely
         div.s f4, f16, f20

    loc_0x80406cf0: // orphan
         div.s f4, f16, f20

    loc_0x80406cf4: // orphan
         mtc1 at, f18
         
         add.s f16, f16, f18
         div.s f4, f16, f20

    loc_0x80406d04: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406cec
         t8 = 0 + 0xf
         [sp + 0x14] = t8
         [sp + 0x18] = 0
         mul.s f6, f4, f28
         sub.s f8, f6, f30

    loc_0x80406d18: // orphan
         call 0x87f0b2f4          // 0x87f0b2f4(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f8, 0x10, sp
         s0 = [s0 + 4]
         bnel s0, 0, 0x80406c2c   // likely
         lwc1 f4, 0x4c, s0

    loc_0x80406d2c: // orphan
         ra = [sp + 0x64]
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         ldc1 f28, 0x40, sp
         ldc1 f30, 0x48, sp
         // CODE XREF from fcn.8041f2b0 @ +0xae4
         s0 = [sp + 0x54]         // s4
         s1 = [sp + 0x58]         // t9
         s2 = [sp + 0x5c]         // ra
         s3 = [sp + 0x60]         // t9
         ret
         sp += 0x68

    loc_0x80406d8c: // orphan
         v0 ^= 1                  // t3
         ra = [sp + 0x14]
         // CODE XREF from fcn.80406878 @ +0x500
         sp += 0x18
         ret
         

    loc_0x80406de0: // orphan
         t8 = [v1 + 0x94]         // t9
         bnel t8, 0, 0x80406e78   // likely
         ra = [sp + 0x24]         // t9

    loc_0x80406dec: // orphan
         t9 = [v1 + 0x78]
         t2 = t9 << 1
         bltzl t2, 0x80406e78     // unlikely
         ra = [sp + 0x24]         // t9

    loc_0x80406dfc: // orphan
         [sp + 0x28] = v1
         call 0x87e03ff0          // 0x87e03ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = t0
         v1 = [sp + 0x28]
         if                       // unlikely
         t0 = [sp + 0x2c]

    loc_0x80406e14: // orphan
         mtc1 0, f0
         t3 = 0 + 0xf
         t4 = 0 | 0xc000
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         a0 = v1 + 0x10
         a1 = t0 + 0x42
         call 0x87f0b2f4          // 0x87f0b2f4(0x230, 0x442f71dcfe11644a, 0x8, -1)
         swc1 f0, 0x10, sp
         goto 0x80406e78
         ra = [sp + 0x24]         // t9

    loc_0x80406e48: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80400b44, 0x80406e0c
         mtc1 0, f0
         t5 = 0 + 0xf
         t6 = 0 | 0x8000
         mfc1 a3, f0
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         // CODE XREF from fcn.8041f2b0 @ +0xaec
         a0 = v1 + 0x10
         a1 = t0 + 0x42
         a2 = 0x4334 << 16
         call 0x87f0b2f4          // 0x87f0b2f4(0x230, 0x442f71dcfe11644a, 0x43340000, -1)
         swc1 f0, 0x10, sp
         ra = [sp + 0x24]         // t9

    loc_0x80406e78: // orphan
         // CODE XREFS from fcn.80400480 @ 0x554, 0x80406de4, 0x80406df4, 0x80406e40
         sp += 0x30
         ret                      // ra
         

    loc_0x80406e9c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400b48
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         [sp + 0x2c] = t6
         call 0x87e016c8          // 0x87e016c8(-1, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x1488] = a0
         a0 = v0                  // s4
         call 0x87f0e610          // 0x87f0e610(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 - 1               // s2
         halfword [sp + 0x28] = v0

    loc_0x80406ec0: // orphan
         v1 = [s2 + 0]            // t9
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x80406ed0: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x80406ed4: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x80406ed8: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x80406ee0: // orphan
         if                       // unlikely
         

    loc_0x80406ee8: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0xaf4
         goto 0x8040711c
         

    loc_0x80406ef0: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406ec8
         call 0x87e03d48          // 0x87e03d48(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         t7 = 0 + 1               // lo

    loc_0x80406efc: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406ec8
         call 0x87e03d48          // 0x87e03d48(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         t7 = 0 + 1               // lo

    loc_0x80406f00: // orphan
         [s2 + 0] = t7
         call 0x87e04048          // 0x87e04048(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         .qword 0x1000008300000000

    loc_0x80406f10: // orphan
         [s2 + 0] = t7
         call 0x87e04048          // 0x87e04048(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         .qword 0x1000008300000000

    loc_0x80406f14: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406ed0
         v1 = [s2 + 4]
         s1 = 0x800d << 16
         s1 -= 0x1fa0
         // CODE XREF from fcn.80400848 @ +0x304
         if                       // unlikely
         s0 = 0

    loc_0x80406f28: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t6 = v0 & 0x8000

    loc_0x80406f34: // orphan
         goto 0x80406fe8
         

    loc_0x80406f3c: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80406f20, 0x80406f9c
         t8 = , unsigned  halfword [s1 + 8]
         t9 = t8 & 0x8000
         beql t9, 0, 0x80406f98   // unlikely
         s0 += 1

    loc_0x80406f4c: // orphan
         v0 = [s2 + 0x204]        // t9
         t0 = 0 + 1               // lo
         a1 = t0 << s0            // arg2
         v1 = , unsigned  byte [v0 + 0x2182] // s4
         a1 &= 0xff               // arg2 // a2
         a0 = 0 | 0xcf02          // arg1
         t1 = v1 & a1             // arg2 // a2
         if                       // unlikely
         t4 = v1 | a1             // arg2 // s4

    loc_0x80406f70: // orphan
         not t2, a1
         t3 = v1 & t2             // k0
         byte [v0 + 0x2182] = t3
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xcf02
         goto 0x80406f98
         s0 += 1

    loc_0x80406f8c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406f68
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [v0 + 0x2182] = t4
         s0 += 1

    loc_0x80406f98: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80406f44, 0x80406f84
         at = 0 + 4
         if                       // likely
         s1 += 0x28

    loc_0x80406fa4: // orphan
         call 0x87e04048          // 0x87e04048(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         goto 0x80406fe8
         

    loc_0x80406fb4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406f2c
         if                       // unlikely
         

    loc_0x80406fbc: // orphan
         call 0x87e03d80          // 0x87e03d80(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         t7 = 0 + 2
         call 0x87e134e8          // 0x87e134e8(-1, 0x442f71dcfe116408, 0x8, -1)
         [s2 + 0] = t7
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xcf02
         a0 = 0 + 3
         a1 = 0 + 0x8c
         call 0x87e0168c          // 0x87e0168c(0x3, 0x8c, 0x8, -1)
         a2 = 0 + 0xe

    loc_0x80406fe8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80406f34, 0x80406fac, 0x80406fb4
         call 0x87e1369c          // 0x87e1369c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         s0 = , unsigned  halfword [sp + 0x28] // s4

    loc_0x80406ff8: // orphan
         t8 = s0 & 0x8000
         if                       // unlikely
         t9 = s0 & 0x4000

    loc_0x804070a0: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xcf01
         // CODE XREFS from fcn.80400480 @ 0x80406ff0, 0x80406ffc
         t3 = , unsigned  halfword [sp + 0x28] // s4

    loc_0x804070f0: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406ed8
         call 0x87e03d48          // 0x87e03d48(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         

    loc_0x80407100: // orphan
         goto 0x8040711c
         // CODE XREF from fcn.8041f2b0 @ +0xb10
         [sp + 0x2c] = 0

    loc_0x80407108: // orphan
         // CODE XREF from fcn.80400480 @ 0x80406ee0
         call 0x87e03d48          // 0x87e03d48(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80407284: // orphan
         t1 = 1 << 16
         mfc1 a3, f0
         [sp + 0x18] = t1
         [sp + 0x14] = t0
         // CODE XREF from fcn.80400480 @ 0x80400b50
         [sp + 0x4c] = v1

    loc_0x80407298: // orphan
         call 0x87f0b2f4          // 0x87f0b2f4(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x10, sp
         v1 = [sp + 0x4c]
         v0 = [s0 + 0]
         // CODE XREFS from fcn.8040710c @ +0x144, +0x168
         a0 = v1 + 0xc

    loc_0x804072ac: // orphan
         // CODE XREF from fcn.8040710c @ +0x154
         [sp + 0x34] = a0
         a1 = v0 + 0x48
         a2 = v0 + 0x54
         a3 = v0 + 0x42
         call 0x87f0b4ac          // 0x87f0b4ac(-1, 0x147, 0x153, 0x141)

    loc_0x804072c0: // orphan
         [sp + 0x4c] = v1
         t2 = 0x87e2 << 16
         v1 = [sp + 0x4c]
         t2 = [t2 - 0x1480]       // t9
         t4 = [v1 + 0]
         t3 = [t2 + 4]            // s4
         // CODE XREF from fcn.8041f2b0 @ +0xb24
         bnel t3, t4, 0x804073b4  // likely
         v0 = [s0 + 0]

    loc_0x804072e0: // orphan
         v0 = [s0 + 0]
         t6 = 0 + 0xff            // s4

    loc_0x804072e8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400b54
         v1 = , unsigned  byte [v0 + 0x60] // s4
         at = , v1 < 0xe6
         if                       // likely
         t5 = v1 + 0x19

    loc_0x804072f8: // orphan
         goto 0x80407304
         byte [v0 + 0x60] = t5

    loc_0x80407300: // orphan
         // CODE XREF from fcn.80400480 @ 0x804072f0
         byte [v0 + 0x60] = t6

    loc_0x80407304: // orphan
         // CODE XREF from fcn.80400480 @ 0x804072f8
         v0 = [s0 + 0]
         t7 = sp + 0x40
         at = 0x41f0 << 16
         t9 = [v0 + 0x48]
         mtc1 at, f6
         t0 = 0 + 6

    loc_0x804073b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x804072d8
         t1 = 0 + 0xc8
         t8 = , unsigned  byte [v0 + 0x60]
         t9 = t8 - 0x19
         byte [v0 + 0x60] = t9
         v0 = [s0 + 0]
         t0 = , unsigned  byte [v0 + 0x60] // s4
         at = , t0 < 0xc8
         if                       // likely
         

    loc_0x804073d8: // orphan
         byte [v0 + 0x60] = t1

    loc_0x804073dc: // orphan
         // CODE XREF from fcn.80400480 @ 0x804073d0
         call 0x87f0b154          // 0x87f0b154(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x34]         // t9
         v0 = [s0 + 0]

    loc_0x804076bc: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400b78
         a3 = [v0 + 4]            // t9
         a1 = s2
         [sp + 0x14] = s6
         // CODE XREF from fcn.8041f2b0 @ +0xb54
         call 0x87f0b1a4          // 0x87f0b1a4(-1, -1, 0x8, -1)
         swc1 f10, 0x10, sp
         mfc1 a2, f20
         mfc1 a3, f20
         a0 = s1
         a1 = s4
         swc1 f20, 0x10, sp
         [sp + 0x14] = s6
         call 0x87f0b2f4          // "&s" // 0x87f0b2f4(0x442f71dcfe117dbd, 0xff, 0x8, -1)
         [sp + 0x18] = 0

    loc_0x80407aa8: // orphan
         [sp + 0x5c] = s2
         [sp + 0x58] = s1
         [sp + 0x54] = s0
         sdc1 f30, 0x48, sp
         sdc1 f28, 0x40, sp
         sdc1 f26, 0x38, sp
         sdc1 f24, 0x30, sp
         sdc1 f22, 0x28, sp
         sdc1 f20, 0x20, sp
         s0 = [a0 + 0x14]         // arg1

    loc_0x80407ad0: // orphan
         at = 0x4334 << 16
         beql s0, 0, 0x80407c14   // unlikely
         ra = [sp + 0x64]

    loc_0x80407adc: // orphan
         mtc1 at, f30
         at = 0x43b4 << 16
         mtc1 at, f28
         at = 0xc3b4 << 16
         mtc1 at, f26
         at = 0x4234 << 16
         mtc1 at, f24
         // CODE XREF from fcn.80400848 @ +0x37c
         at = 0x42b4 << 16
         mtc1 at, f22
         at = 0x4f80 << 16
         mtc1 at, f20
         
         // CODE XREF from fcn.80400848 @ +0x380
         lwc1 f4, 0x4c, s0
         // CODE XREF from fcn.804078bc @ +0x34c
         v0 = [s0 + 0x20]         // t9
         lwc1 f8, 0x50, s0
         add.s f6, f4, f26
         a2 = [s0 + 0x48]
         t6 = 0 + 0xf
         t7 = 0 + 0x2000
         mfc1 a3, f6
         s1 = v0 + 0xc            // t1
         a0 = s1                  // t1
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         a1 = s0 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(0x10000000b, 0x14c, 0xffffff, -1)
         swc1 f8, 0x10, sp
         call 0x8003570c          // 0x8003570c(0x10000000b, 0x14c, 0xffffff, -1)
         
         call 0x8003570c          // 0x8003570c(0x10000000b, 0x14c, 0xffffff, -1)
         s2 = v0                  // t9
         call 0x8003570c          // 0x8003570c(0x10000000b, 0x14c, 0xffffff, -1)
         s3 = v0                  // t9
         mtc1 s2, f10
         a0 = s1                  // t1
         a1 = s0 + 0x42
         if                       // likely
         cvt.s.w f16, f10

    loc_0x80407b74: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x80407b84: // orphan
         // CODE XREF from fcn.80400480 @ 0x80407b6c
         div.s f4, f16, f20
         mtc1 s3, f10
         at = 0x4f80 << 16
         cvt.s.w f18, f10
         mul.s f6, f4, f22
         sub.s f8, f6, f24
         mfc1 a2, f8
         bgezl s3, 0x80407bb8     // likely
         div.s f4, f18, f20

    loc_0x80407ba8: // orphan
         mtc1 at, f16
         
         add.s f18, f18, f16
         div.s f4, f18, f20

    loc_0x80407bb8: // orphan
         // CODE XREF from fcn.80400480 @ 0x80407ba0
         mtc1 v0, f10
         at = 0x4f80 << 16
         cvt.s.w f16, f10
         mul.s f6, f4, f22
         sub.s f8, f6, f24
         mfc1 a3, f8
         bgezl v0, 0x80407be8     // likely
         div.s f4, f16, f20

    loc_0x80407c14: // orphan
         // CODE XREF from fcn.80400480 @ 0x80407ad4
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         // CODE XREF from fcn.80400848 @ +0x394
         ldc1 f26, 0x38, sp
         ldc1 f28, 0x40, sp
         ldc1 f30, 0x48, sp
         s0 = [sp + 0x54]
         s1 = [sp + 0x58]
         s2 = [sp + 0x5c]         // t9
         s3 = [sp + 0x60]         // t9
         ret                      // ra
         sp += 0x68

    loc_0x80407cc0: // orphan
         // CODE XREF from fcn.804078bc @ +0x3cc
         call 0x87e043f0          // 0x87e043f0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         if                       // unlikely
         a0 = 0 + 1               // lo

    loc_0x80407cd0: // orphan
         goto 0x80407cd8
         a0 = 0

    loc_0x80407cd4: // orphan
         a0 = 0

    loc_0x80407e1c: // orphan
         [sp + 0x3c] = 0

    loc_0x80407f98: // orphan
         a0 += 0x274              // arg1
         call 0x87e05128          // 0x87e05128(0x100000273, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87e05148          // 0x87e05148(0x100000273, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         call 0x87e049a4          // 0x87e049a4(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         ra = [sp + 0x1c]
         // CODE XREF from fcn.80400bf4 @ 0x80400c14
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x80408150: // orphan
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80408178: // orphan
         at = , unsigned  , a0 < 2
         v0 = [t6 + 0x158]        // t9
         v1 = [v0 + 0x98]         // t9
         if                       // unlikely
         v1 = , unsigned  , v1 < 1

    loc_0x8040818c: // orphan
         // CODE XREF from fcn.80400bf4 @ 0x80400c28
         if                       // likely
         

    loc_0x80408194: // orphan
         t8 = [v0 + 0x84]         // t9
         t7 = [v0 + 0x80]         // t9
         divu 0, t8, a0           // arg1
         t9 = lo
         at = , unsigned  , t7 < t9
         if                       // likely
         

    loc_0x804081b0: // orphan
         break 7

    loc_0x804081b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x804081a8
         if                       // likely
         

    loc_0x804081bc: // orphan
         v1 = 0 + 1               // lo

    loc_0x804081c0: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80408184, 0x8040818c, 0x804081b4
         ret                      // ra
         v0 = v1

    loc_0x804081f4: // orphan
         
         t7 = [v1 + 4]            // t9

    loc_0x80408544: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400c60
         t2 = a0 + t9             // arg1
         lwc1 f18
         mul.s f10, f18, f16
         
         mul.s f4, f10, f14
         add.s f6, f4, f2
         trunc.w.s f8, f6
         mfc1 t4, f8
         goto 0x804085d4          // fcn.804083d4+0x200
         halfword [v0 + 0x46] = t4

    loc_0x804086bc: // orphan
         t6 = [t1 + 0]            // s4
         sp -= 0x18
         [sp + 0x14] = ra
         t0 = [t6 + 0x20]
         a1 = 0x87e2 << 16

    loc_0x804086d0: // orphan
         a1 -= 0x1470
         a0 = 0
         a3 = 0 + 0xc             // "F"
         a2 = 0 + 0xff            // s4
         v1 = t0 + 0x90

    loc_0x804086e4: // orphan
         // CODE XREF from fcn.80400480 @ 0x80408734
         t7 = [a1 + 0]
         t8 = [t7 + 8]
         bnel a0, t8, 0x80408718  // likely
         v0 = , unsigned  byte [v1 + 4] // s4

    loc_0x804086f4: // orphan
         v0 = , unsigned  byte [v1 + 4] // s4

    loc_0x804086f8: // orphan
         at = , v0 < 0xe7

    loc_0x804086fc: // orphan
         if                       // likely
         t9 = v0 + 0x19

    loc_0x80408704: // orphan
         goto 0x80408730
         byte [v1 + 4] = a2

    loc_0x8040870c: // orphan
         // CODE XREF from fcn.80400480 @ 0x804086fc
         goto 0x80408730
         byte [v1 + 4] = t9

    loc_0x80408718: // orphan
         // CODE XREF from fcn.80400480 @ 0x804086ec
         at = , v0 < 0x19
         if                       // likely
         t2 = v0 - 0x19

    loc_0x80408724: // orphan
         goto 0x80408730
         byte [v1 + 4] = 0

    loc_0x8040872c: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040871c
         byte [v1 + 4] = t2

    loc_0x80408730: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80408704, 0x8040870c, 0x80408724
         a0 += 1

    loc_0x80408734: // orphan
         if                       // likely
         v1 += 8

    loc_0x8040873c: // orphan
         v0 = [t1 + 0]            // s4

    loc_0x80408740: // orphan
         a0 = t0 + 8
         a1 = v0 + 0x48
         a2 = v0 + 0x54
         call 0x87f0b4ac          // 0x87f0b4ac(0x442f71dcfe116410, 0x147, 0x153, -1)
         a3 = v0 + 0x42
         ra = [sp + 0x14]

    loc_0x80408758: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x80408770: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0xbfc
         if                       // fcn.804087b4+0x5c // likely
         [sp + 0x1c] = a1

    loc_0x80408778: // orphan
         t1 = 0x8009 << 16
         t1 = [t1 + 0x491c]       // t9
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]

    loc_0x8040878c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400c78
         t2 = [t1 + 0x14]         // s4
         t7 = 0xe700 << 16

    loc_0x80408908: // orphan
         // CODE XREF from fcn.80400480 @ 0x80400c94
         t2 = 0 + 0xc8
         t9 = , unsigned  byte [v0 + 0x60]
         t0 = t9 - 0x19
         byte [v0 + 0x60] = t0
         v0 = [s0 + 0]
         t1 = , unsigned  byte [v0 + 0x60] // s4
         at = , t1 < 0xc8
         if                       // likely
         

    loc_0x8040892c: // orphan
         byte [v0 + 0x60] = t2

    loc_0x80408930: // orphan
         // CODE XREF from fcn.80400480 @ 0x80408924
         call 0x87f0b154          // 0x87f0b154(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80408938: // orphan
         // CODE XREF from fcn.804088a4 @ 0x804088fc
         v0 = [s0 + 0]
         v1 = , unsigned  byte [v0 + 0x60] // s4
         // CODE XREF from fcn.8041f2b0 @ +0xc0c
         byte [v0 + 0x62] = v1
         t3 = [s0 + 0]
         byte [t3 + 0x61] = v1
         // CODE XREF from fcn.80400bf4 @ +0xa4
         ra = [sp + 0x24]         // t9
         s0 = [sp + 0x20]
         sp += 0x48
         ret                      // t9
         

    loc_0x80408bc8: // orphan
         a1 += 0x24               // arg2
         goto 0x80408c4c          // fcn.80408c28+0x24
         // CODE XREF from fcn.80400480 @ 0x80400ccc
         v1 = [s0 + 0]

    loc_0x80408c04: // orphan
         a1 = [s0 + 0]
         // CODE XREF from fcn.82575f6c @ +0x12f4
         t8 = t6 << 2
         v1 = s1 + t8
         a2 = [v1 + 4]            // t9
         a0 = [t0 + 0x90]         // t9
         // CODE XREF from fcn.80400bf4 @ +0xe0
         [sp + 0x28] = v1
         call 0x8003f2c4          // 0x8003f2c4(-1, 0xfffffffc, -1, -1)
         a1 += 0x24
         a0 = [s0 + 0]

    loc_0x80408ec4: // orphan
         t6 = [s4 + 0x158]        // t9
         a0 = s7                  // t9
         a1 = fp
         call 0x87f025b8          // 0x87f025b8(-1, 0x178000, 0x8, -1)
         s2 = t6 + s5
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80408ee0: // orphan
         s1 = v0 + 0x24
         [s4 + 0x54] = v0
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1

    loc_0x80408ef0: // orphan
         a0 = s1
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x442f71dcfe117dbd, 0x0, -1, -1)
         a3 = [s4 + 0x168]        // t9
         [s0 + 0x38] = s2
         if                       // unlikely
         [s2 + 4] = s0

    loc_0x80408f10: // orphan
         at = 0 + 1               // lo
         beql s3, at, 0x80408f98  // unlikely
         [s2 + 8] = s6

    loc_0x80408f1c: // orphan
         goto 0x80408f9c
         a0 = s2 + 0x14

    loc_0x80408f24: // orphan
         [s2 + 8] = 0
         swc1 f20, 0x54, s0
         swc1 f20, 0x58, s0
         swc1 f20, 0x5c, s0
         v0 = [s4 + 0x178]        // t9
         s6 = s0
         a1 = 0 + 1               // lo
         if                       // unlikely
         at = , v0 < 4

    loc_0x80408f48: // orphan
         if                       // unlikely
         

    loc_0x80408f50: // orphan
         t7 = [s4 + 0x170]        // t9
         t9 = 0 + 1               // lo
         t0 = t9 << v0
         t8 = , unsigned  byte [t7 + 0x2182] // s4
         v1 = 0 + 2
         t1 = t8 & t0             // a2
         if                       // unlikely
         

    loc_0x80408f70: // orphan
         v1 = 0 + 6
         goto 0x80408f84
         a1 = v1 + v0

    loc_0x80408f7c: // orphan
         goto 0x80408f84
         a1 = v1 + v0

    loc_0x80408f84: // orphan
         // CODE XREFS from fcn.80400480 @ 0x80408f74, 0x80408f7c
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1b2
         goto 0x80408f98
         [s2 + 0xc] = v0

    loc_0x80408f98: // orphan
         // CODE XREF from fcn.80400480 @ 0x80408f8c
         a0 = s2 + 0x14

    loc_0x80408f9c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80408f1c
         a1 = s0 + 0x48
         a2 = s0 + 0x54
         call 0x87f0afd0          // 0x87f0afd0(-1, 0x14c, 0x158, -1)
         a3 = s0 + 0x42
         v0 = [s2 + 4]            // s0
         t2 = , unsigned  byte [v0 + 0x25] // s4
         t3 = t2 & 0xfffe
         byte [v0 + 0x25] = t3

    loc_0x80408fbc: // orphan
         s3 += 1
         at = 0 + 2
         if                       // likely
         s5 += 0x9c

    loc_0x80408fcc: // orphan
         ra = [sp + 0x44]         // s0
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]         // t9
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]         // a2
         s5 = [sp + 0x34]         // t9
         s6 = [sp + 0x38]         // a2
         s7 = [sp + 0x3c]
         fp = [sp + 0x40]         // s0
         ret                      // s0
         sp += 0x48

    loc_0x80409064: // orphan
         // CODE XREF from fcn.80400bf4 @ +0x12c
         mtc1 0, f22
         s4 += 0x5944
         s5 = 0
         s6 = 0x1000 << 16
         a0 = s7                  // t9

    loc_0x8040956c: // orphan
         [sp + 4] = a1
         ret                      // ra
         v0 = [v0 - 0x64b4]       // t9

    loc_0x80409580: // orphan
         [sp + 0x34] = s6
         [sp + 0x30] = s5
         [sp + 0x2c] = s4
         [sp + 0x28] = s3
         [sp + 0x24] = s2
         [sp + 0x1c] = s0
         [sp + 0x3c] = ra
         [sp + 0x20] = s1
         s0 = 0x800d << 16
         s3 = 0x8009 << 16
         s5 = 0xe200 << 16
         s6 = 0xf0a << 16
         // CODE XREF from fcn.80400d70 @ 0x80400d8c
         s1 = [a0 + 0x150]        // arg1 // t9
         s6 |= 0x7008
         s5 |= 0x1c

    loc_0x80409678: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         [sp + 0x18] = a0
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x18b
         call 0x8004c8c0          // 0x8004c8c0(0x18b, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x177
         call 0x8004c8c0          // 0x8004c8c0(0x177, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x176
         call 0x8004c8c0          // 0x8004c8c0(0x176, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x17f
         call 0x8004c8c0          // 0x8004c8c0(0x17f, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x184
         call 0x8004c8c0          // 0x8004c8c0(0x184, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x193
         call 0x8004c8c0          // 0x8004c8c0(0x193, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x18c
         call 0x8004c8c0          // 0x8004c8c0(0x18c, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x190
         call 0x8004c8c0          // 0x8004c8c0(0x190, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x195
         call 0x8004c8c0          // 0x8004c8c0(0x195, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x198
         // CODE XREF from fcn.8041f2b0 @ +0xc80
         call 0x8004c8c0          // 0x8004c8c0(0x198, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x19b
         call 0x8004c8c0          // 0x8004c8c0(0x19b, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1a1
         call 0x8004c8c0          // 0x8004c8c0(0x1a1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x172
         call 0x8004c8c0          // 0x8004c8c0(0x172, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1bf
         call 0x8004c8c0          // 0x8004c8c0(0x1bf, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x169
         call 0x8004c8c0          // 0x8004c8c0(0x169, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1b2
         ra = [sp + 0x14]

    loc_0x8040999c: // orphan
         t6 = 0xf00 << 16
         [sp + 0x10] = t6
         a0 = 0 + 0x40

    loc_0x80409c48: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0xcc4
         [sp + 0x38] = s0
         sdc1 f22, 0x30, sp

    loc_0x80409cd0: // orphan
         t7 = [s0 + 0xc]          // s4

    loc_0x8040a0c4: // orphan
         // CODE XREF from fcn.80400480 @ 0x8041ffb0
         call 0x87e0168c          // 0x87e0168c(-1, 0x442f71dcfe116408, 0x8, -1)
         [t7 + 4] = t6
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040a0ec: // orphan
         s0 = a0                  // t9
         at = 0 + 1               // lo
         beql v1, 0, 0x8040a110   // unlikely
         t6 = [s0 + 0x17c]        // t9

    loc_0x8040a0fc: // orphan
         beql v1, at, 0x8040a1f0  // unlikely
         v0 = [s0 + 0x17c]

    loc_0x8040a104: // orphan
         goto 0x8040a210
         v0 = [a0 + 0x17c]        // t9

    loc_0x8040a110: // orphan
         at = , unsigned  , t6 < 0x15

    loc_0x8040a1f0: // orphan
         at = , unsigned  , v0 < 0x1f
         bnel at, 0, 0x8040a214   // unlikely
         t3 = v0 + 1

    loc_0x8040a1fc: // orphan
         call 0x87e07330          // 0x87e07330(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         call 0x800279c4          // 0x800279c4(0x104, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x8041ffc4
         a0 = 0 | 0xcf05
         v0 = [s0 + 0x17c]

    loc_0x8040a29c: // orphan
         // CODE XREF from fcn.80400480 @ 0x8041ffc8
         s1 = sp + 0x4c
         [a0 + 0] = 0
         t1 = , unsigned  byte [a1 + 0]
         mtc1 0, f0
         s5 = 0 + 4
         v0 = v1 - t1
         mtc1 v0, f4
         t2 = ~v0
         s4 = 0 + 0x64
         // CODE XREF from fcn.8041f2b0 @ +0xd1c
         cvt.s.w f6, f4
         c.lt.s f0, f6
         
         bc1fl 0x8040a2e0
         [sp + 0x48] = t2
         goto 0x8040a2e0
         [sp + 0x48] = v0

    loc_0x8040a2e0: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040a2d4
         t3 = [a0 + 0xc]          // s4
         t4 = , unsigned  byte [a1 + 1]
         v0 = t3 - t4             // s4
         mtc1 v0, f8
         t5 = ~v0
         // CODE XREF from fcn.80400480 @ 0x8041ffd0
         cvt.s.w f10, f8
         c.lt.s f0, f10
         
         bc1fl 0x8040a314
         [sp + 0x4c] = t5
         goto 0x8040a314
         [sp + 0x4c] = v0

    loc_0x8040a314: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040a308
         t6 = [a0 + 0xc]          // s4
         t7 = , unsigned  byte [a1 + 2] // lo
         v0 = t6 - t7             // t3
         mtc1 v0, f16
         t8 = ~v0
         cvt.s.w f18, f16
         c.lt.s f0, f18

    loc_0x8040a4b4: // orphan
         // CODE XREF from fcn.80400480 @ 0x8041ffe0
         a0 = s0
         v1 = v0 & 0xffff         // s4
         t6 = [s0 + 0x18c]        // t9
         a1 = v1                  // s4
         t1 = v1 & 0x8000
         t7 = t6 >> 0x1f          // lo
         if                       // unlikely
         

    loc_0x8040a520: // orphan
         if                       // fcn.8040a52c+0x18 // unlikely
         [sp + 0x24] = t1

    loc_0x8040a528: // orphan
         a0 = 0 | 0xcf05

    loc_0x8040a5e0: // orphan
         t9 = , unsigned  byte [t8 + 1]
         [s0 + 8] = t9
         if                       // unlikely
         t3 = a1 & 0x100

    loc_0x8040a5f0: // orphan
         t0 = [sp + 0x34]
         t1 = , unsigned  byte [t0 + 2] // s4
         [s0 + 8] = t1

    loc_0x8040a5fc: // orphan
         // CODE XREF from fcn.80400480 @ 0x8041fff8
         if                       // unlikely
         t6 = a1 & 0xf00

    loc_0x8040a604: // orphan
         t4 = [sp + 0x34]
         t5 = , unsigned  byte [t4 + 3] // s4
         [s0 + 8] = t5

    loc_0x8040a610: // orphan
         beql t6, 0, 0x8040a63c   // fcn.80400e3c+0x9800 // unlikely
         ra = [sp + 0x1c]         // s0

    loc_0x8040a618: // orphan
         a0 = [s0 + 0x54]         // t9
         a1 = sp + 0x2c
         call 0x87e015f4          // 0x87e015f4(-1, 0x17802c, 0x8, -1)
         a0 += 0x48
         a0 = 0 | 0xcf04
         a1 = , unsigned  byte [s0 + 0x17b] // s4
         call 0x8002781c          // 0x8002781c(0xcf04, 0xff, 0x8, -1)
         a2 = sp + 0x2c

    loc_0x8040ba78: // orphan
         at = 0 + 1               // lo
         a0 = s0
         if                       // fcn.803f1470+0x1a64c // unlikely
         

    loc_0x8040ba88: // orphan
         bnel v1, at, 0x8040bad0  // fcn.803f1470+0x1a660 // likely
         ra = [sp + 0x1c]         // s0

    loc_0x8040ba90: // orphan
         call 0x87e08b14          // 0x87e08b14(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a0 = s0
         call 0x87e08844          // 0x87e08844(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         call 0x87e015c0          // 0x87e015c0(0x104, 0x1, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80021ed8          // 0x80021ed8(0x1, 0x1, 0x8, -1)
         a0 = 0 + 0x4d
         goto 0x8040bad0          // fcn.803f1470+0x1a660
         ra = [sp + 0x1c]         // s0

    loc_0x8040bbe4: // orphan
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // t9
         s6 = [sp + 0x2c]         // s4
         s7 = [sp + 0x30]         // t9
         ret                      // ra
         sp += 0x38

    loc_0x8040bdd0: // orphan
         a0 = 0
         t6 = [s1 + 0x7b8]        // t9
         at = , unsigned  , t6 < 0x10
         bnel at, 0, 0x8040c220   // fcn.803f1470+0x1adb0 // unlikely
         ra = [sp + 0x1c]         // s0

    loc_0x8040bde4: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x3f80 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         mtc1 0, f16
         mul.s f10, f6, f8
         c.le.s f16, f10
         
         bc1f 0x8040be4c
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f18
         at = 0x3f80 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x3f00 << 16
         mtc1 at, f10
         mul.s f8, f4, f6
         add.s f16, f8, f10

    loc_0x8040be3c: // orphan
         trunc.w.s f18, f16
         mfc1 a2, f18

    loc_0x8040c298: // orphan
         a0 = [sp + 0x20]
         at = 0 - 1               // s2
         a1 = v0                  // s4
         t7 = [a0 + 0x1998]       // t9
         if                       // unlikely
         [sp + 0x18] = t7

    loc_0x8040c2b0: // orphan
         call 0x87e085cc          // 0x87e085cc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x8040c3b8
         ra = [sp + 0x14]

    loc_0x8040c2c0: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x3f00 << 16
         mtc1 at, f8
         // CODE XREF from fcn.8337c954 @ +0x1630
         cvt.s.w f6, f4
         mtc1 0, f16
         mul.s f10, f6, f8
         c.le.s f16, f10
         
         bc1f 0x8040c324
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f18
         at = 0x3f00 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         mtc1 at, f10
         mul.s f8, f4, f6
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 a2, f18
         goto 0x8040c358
         a0 = [sp + 0x20]

    loc_0x8040c4b4: // orphan
         sub.s f18, f10, f16
         trunc.w.s f4, f18
         mfc1 t2, f4
         
         [sp + 0x34] = t2

    loc_0x8040c95c: // orphan
         call 0x87e07ed8          // 0x87e07ed8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x20]         // s4
         at = 0 - 1               // s2
         if                       // likely
         a1 = v0                  // s4

    loc_0x8040c998: // orphan
         [sp + 0x14] = ra
         a0 += 0x644
         call 0x87e14f98          // 0x87e14f98(0x100000643, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = a0
         a0 = [sp + 0x30]         // t9
         call 0x87e0c664          // 0x87e0c664(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x60
         a0 = [sp + 0x30]         // t9
         [sp + 0x2c] = v0
         // CODE XREF from fcn.80420050 @ 0x80420118
         a0 += 0x8c
         call 0x87e0e88c          // 0x87e0e88c(0x10000008b, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a0
         t6 = [sp + 0x2c]         // s4
         t2 = [sp + 0x30]         // t9
         bnel t6, 0, 0x8040cc80   // fcn.8040cc7c+0x4 // likely
         [t2 + 0x7b8] = 0

    loc_0x8040c9d8: // orphan
         if                       // fcn.8040cc7c // fcn.8040cc7c // likely
         t7 = [sp + 0x30]         // t9

    loc_0x8040c9e0: // orphan
         t8 = [t7 + 0x7b8]        // t9
         at = 0 + 1               // lo
         if                       // fcn.8040c9fc+0x8 // likely
         

    loc_0x8040c9f0: // orphan
         call 0x80021ed8          // 0x80021ed8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x39
         a0 = 0 | 0xca0f

    loc_0x8040cb30: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x87e2 << 16
         lwc1 f10, -0x49f4, at
         cvt.s.w f8, f6
         at = 0x3f00 << 16
         mtc1 at, f18
         mul.s f16, f8, f10
         sub.s f4, f16, f18
         trunc.w.s f6, f4
         mfc1 v1, f6
         
         v0 = [sp + 0x30]         // t9

    loc_0x8040cbdc: // orphan
         t1 <<= 2

    loc_0x8040cc50: // orphan
         
         call 0x87e10ea8          // 0x87e10ea8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x29

    loc_0x8040cc5c: // orphan
         call 0x87e10f2c          // 0x87e10f2c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0

    loc_0x8040cf90: // orphan
         t2 = [t1 + 0x6b8]        // t9
         t3 = t2 >> 0x1f          // lo

    loc_0x8040cf98: // orphan
         beql t3, 0, 0x8040cfb4   // unlikely
         t4 = [s0 + 0x7b8]        // t9

    loc_0x8040cfa0: // orphan
         call 0x87e10ea8          // 0x87e10ea8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x30
         call 0x87e10f2c          // 0x87e10f2c(0x30, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         t4 = [s0 + 0x7b8]        // t9

    loc_0x8040cfb4: // orphan
         t5 = 0 + 0x1e
         at = , unsigned  , t4 < 0x1f
         bnel at, 0, 0x8040d034   // unlikely
         ra = [sp + 0x1c]

    loc_0x8040cfc4: // orphan
         [s0 + 0x7b8] = t5
         call 0x87e15698          // 0x87e15698(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x24]
         at = 0 + 5
         if                       // likely
         t6 = [sp + 0x2c]         // s4

    loc_0x8040cfdc: // orphan
         if                       // likely
         at = , t6 < 4            // lo

    loc_0x8040cfe4: // orphan
         if                       // unlikely
         a1 = t6

    loc_0x8040cff8: // orphan
         t7 = [sp + 0x28]         // t9
         t9 = 0 + 7
         a0 = 0
         beql t7, 0, 0x8040d034   // unlikely
         ra = [sp + 0x1c]

    loc_0x8040d030: // orphan
         ra = [sp + 0x1c]

    loc_0x8040d044: // orphan
         sp -= 0x18
         [sp + 0x14] = ra

    loc_0x8040d04c: // orphan
         [sp + 0x18] = a0
         call 0x87e14f98          // 0x87e14f98(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x644
         a0 = [sp + 0x18]         // t9
         call 0x87e0c664          // 0x87e0c664(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x60
         a0 = [sp + 0x18]         // t9
         call 0x87e0e88c          // 0x87e0e88c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x8c
         t6 = [sp + 0x18]         // t9
         at = 0 + 5
         t7 = [t6 + 0x14]
         if                       // likely
         

    loc_0x8040d084: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x4000 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         mtc1 0, f16
         mul.s f10, f6, f8
         c.le.s f16, f10
         
         bc1f 0x8040d0ec
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f18
         at = 0x4000 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x3f00 << 16
         mtc1 at, f10
         mul.s f8, f4, f6
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 a1, f18
         goto 0x8040d124
         t0 = [sp + 0x18]         // t9

    loc_0x8040d110: // orphan
         sub.s f18, f10, f16
         trunc.w.s f4, f18
         mfc1 a1, f4
         
         t0 = [sp + 0x18]         // t9

    loc_0x8040d124: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040d0e4
         t1 = [t0 + 0x7b8]        // t9
         if                       // likely
         

    loc_0x8040d138: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x3f00 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         mtc1 0, f18
         mul.s f16, f8, f10
         c.le.s f18, f16
         
         bc1f 0x8040d19c
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4

    loc_0x8040e4e8: // orphan
         t1 = 0xfffc << 16
         t1 |= 0xf238
         t8 = v0 + 8
         [v1 + 0] = t8
         t9 |= 0xffff
         t2 = 0x8009 << 16

    loc_0x8040e5a4: // orphan
         sp -= 0x20
         [sp + 0x14] = ra
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = a0
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 0x87e2 << 16
         [sp + 0x1c] = v0
         a1 -= 0x5d40
         call 0x80040e80          // 0x80040e80(0xff, 0x87e1a2c0, 0x8, -1)
         a0 = v0                  // s4
         t6 = [sp + 0x20]         // t9
         [t6 + 8] = v0
         call 0x80003120          // 0x80003120(0xff, 0x87e1a2c0, 0x8, -1)
         a0 = [sp + 0x1c]         // s4
         ra = [sp + 0x14]
         sp += 0x20               // fp
         ret                      // ra
         

    loc_0x8040eaa4: // orphan
         t4 = [sp + 0x50]         // s0
         v1 = 0 + 1               // lo
         if                       // likely
         t6 = [sp + 0x54]         // s0

    loc_0x8040eab4: // orphan
         v1 += 1

    loc_0x8040eab8: // orphan
         if                       // likely
         t8 = [sp + 0x48]         // v1

    loc_0x8040eac0: // orphan
         v1 += 1

    loc_0x8040eac4: // orphan
         if                       // likely
         

    loc_0x8040eacc: // orphan
         v1 += 1

    loc_0x8040ead0: // orphan
         if                       // unlikely
         at = , v1 < 3

    loc_0x8040ead8: // orphan
         if                       // likely
         t5 = 0x87e2 << 16

    loc_0x8040eae0: // orphan
         t5 -= 0x5cbc
         t7 = 0 + 0xf
         [s0 + 0x24] = t5
         goto 0x8040eb7c          // fcn.80400424+0xe758
         [s0 + 0x28] = t7

    loc_0x8040eaf4: // orphan
         t9 = [s0 + 4]
         mtc1 t8, f18
         at = 0x87e2 << 16
         t3 = [t9 + 0x2188]
         cvt.s.w f4, f18
         lwc1 f10, -0x495c, at
         mtc1 t3, f8
         t4 = 0x87e2 << 16
         t4 -= 0x5d0c
         cvt.s.w f6, f8
         t6 = 0 + 0xb
         at = 0x87e2 << 16
         div.s f0, f4, f6
         c.le.s f0, f10
         
         bc1f 0x8040eb44
         
         [s0 + 0x24] = t4
         goto 0x8040eb7c          // fcn.80400424+0xe758
         [s0 + 0x28] = t6

    loc_0x8040eba0: // orphan
         call 0x87f02684          // 0x87f02684(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0xc                // t1
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8040ed68: // orphan
         sp += 0x58
         sp -= 0x80
         [sp + 0x7c] = ra
         [sp + 0x78] = fp
         [sp + 0x74] = s7
         [sp + 0x70] = s6
         [sp + 0x6c] = s5
         [sp + 0x68] = s4
         [sp + 0x64] = s3
         [sp + 0x60] = s2
         [sp + 0x5c] = s1
         [sp + 0x58] = s0
         sdc1 f30, 0x50, sp
         sdc1 f28, 0x48, sp
         sdc1 f26, 0x40, sp
         sdc1 f24, 0x38, sp
         sdc1 f22, 0x30, sp
         sdc1 f20, 0x28, sp
         s1 = [a0 + 0x18]         // arg1 // t9
         s4 = a1                  // t0
         s5 = a2
         if                       // fcn.80400424+0xeb94 // unlikely
         s3 = 0

    loc_0x8040edc4: // orphan
         at = 0x41a0 << 16
         mtc1 at, f30
         at = 0xc200 << 16
         mtc1 at, f26
         at = 0x87e2 << 16
         mtc1 0, f28
         mtc1 0, f22
         lwc1 f24, -0x4954, at
         fp = 0 + 5
         s7 = 0 + 3
         s6 = 0 + 1               // lo
         t6 = [s1 + 0x38]         // t9

    loc_0x8040ef14: // orphan
         at = 0xc2b4 << 16
         mtc1 at, f20
         goto 0x8040ef24
         

    loc_0x8040f000: // orphan
         sp -= 0x58
         [sp + 0x54] = ra
         [sp + 0x50] = s3
         [sp + 0x4c] = s2
         [sp + 0x48] = s1
         [sp + 0x44] = s0
         sdc1 f26, 0x38, sp
         sdc1 f24, 0x30, sp
         sdc1 f22, 0x28, sp
         sdc1 f20, 0x20, sp
         s0 = [a0 + 0x18]         // arg1 // t9
         s3 = a1                  // t0
         s2 = 0
         if                       // fcn.80400424+0xecb0 // unlikely
         at = 0xc2b4 << 16

    loc_0x8040f03c: // orphan
         mtc1 at, f26
         at = 0x4348 << 16
         mtc1 at, f24
         at = 0x4320 << 16
         mtc1 at, f22
         mtc1 0, f20
         
         t6 = [s0 + 0x38]         // t9

    loc_0x8040f450: // orphan
         [sp + 0x1c] = s0
         s3 = 0x800d << 16
         s1 = [a0 + 0xc]          // arg1 // s4
         s3 += 0x510
         t6 = 0 + 0x1c
         t7 = 0 | 0xfffe
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = s3
         a1 = 0
         a2 = 0
         call 0x80007444          // 0x80007444(0x800d0510, 0x0, 0x0, -1)
         a3 = 0 + 0x7c
         s0 = [s3 + 0]
         t2 = 0x8009 << 16
         t2 += 0x4e38
         t8 = s0 + 8
         [s3 + 0] = t8
         t9 = 0xde00 << 16
         [s0 + 0] = t9
         [s0 + 4] = t2
         s0 = [s3 + 0]
         t4 = 0xe300 << 16
         t4 |= 0x1201
         t3 = s0 + 8
         [s3 + 0] = t3
         [s0 + 4] = 0
         [s0 + 0] = t4
         s0 = [s3 + 0]
         s2 = 0xe200 << 16
         t6 = 0xf0a << 16
         t5 = s0 + 8
         [s3 + 0] = t5
         s2 |= 0x1c
         t6 |= 0x7008
         [s0 + 4] = t6
         [s0 + 0] = s2
         s0 = [s3 + 0]
         t9 = 0xfffc << 16
         // CODE XREF from fcn.80420050 @ +0x1d8
         t8 = 0xfcff << 16
         t7 = s0 + 8
         [s3 + 0] = t7
         t8 |= 0xffff
         t9 |= 0xf279

    loc_0x8040f5a8: // orphan
         // CODE XREF from fcn.80420050 @ +0x1e0
         goto 0x8040f5bc
         [sp + 0x30] = t8

    loc_0x8040fc68: // orphan
         v0 = a0 + t6             // arg1
         v1 = v0 + 0x28
         t7 = [v1 + 0x88]         // t9
         a1 = v0 + 0xb4           // arg2
         t0 = 0 - 1               // s2
         t8 = [t7 + 0]
         a2 = 0 + 1               // arg3 // lo
         a3 = 0 + 1               // arg4 // lo
         blezl t8, 0x8040fca4     // likely
         byte [a1 + 0] = 0        // arg2

    loc_0x8040fc90: // orphan
         a3 = 0 + 1               // arg4 // lo
         a1 = v0 + 0xb4           // arg2
         goto 0x8040fca4
         byte [a1 + 0] = a3       // arg2

    loc_0x8040fca4: // orphan
         // CODE XREFS from fcn.80400480 @ 0x8040fc88, 0x8040fc98
         t9 = [a0 + 4]            // arg1 // s4
         v0 = a1 + 8              // arg2
         t1 = [t9 + 0x2188]
         blezl t1, 0x8040fcc8     // unlikely
         [a1 + 4] = t0            // arg2

    loc_0x8040fcb8: // orphan
         t2 = , unsigned  byte [a1 + 0] // arg2
         t3 = t2 | 8              // a2
         byte [a1 + 0] = t3       // arg2
         [a1 + 4] = t0            // arg2

    loc_0x8040fcc8: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040fcb0
         a1 = 0 + 9               // arg2

    loc_0x8040fccc: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040fe00
         t4 = [v1 + 0x88]         // t9
         t5 = [t4 + 0]
         at = , a2 < t5
         beql at, 0, 0x8040fcec   // likely
         byte [v0 + 0] = 0

    loc_0x8040fce0: // orphan
         goto 0x8040fcec
         byte [v0 + 0] = a3

    loc_0x8040fcec: // orphan
         // CODE XREFS from fcn.80400480 @ 0x8040fcd8, 0x8040fce0
         t6 = [a0 + 4]            // arg1 // s4
         t7 = [t6 + 0x2188]       // t9
         at = , a2 < t7           // lo
         beql at, 0, 0x8040fd10   // unlikely
         [v0 + 4] = t0

    loc_0x8040fd00: // orphan
         t8 = , unsigned  byte [v0 + 0] // s4
         t9 = t8 | 8              // s4
         byte [v0 + 0] = t9
         [v0 + 4] = t0

    loc_0x8040fd10: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040fcf8
         t1 = [v1 + 0x88]         // t9
         v0 += 8
         t2 = [t1 + 0]
         t3 = t2 - 1              // s2
         at = , a2 < t3
         beql at, 0, 0x8040fd38   // likely
         byte [v0 + 0] = 0

    loc_0x8040fd2c: // orphan
         goto 0x8040fd38
         byte [v0 + 0] = a3

    loc_0x8040fd38: // orphan
         // CODE XREFS from fcn.80400480 @ 0x8040fd24, 0x8040fd2c
         t4 = [a0 + 4]            // arg1 // s4
         t5 = [t4 + 0x2188]       // t9
         t6 = t5 - 1
         at = , a2 < t6           // lo
         beql at, 0, 0x8040fd60   // unlikely
         [v0 + 4] = t0

    loc_0x8040fd50: // orphan
         t7 = , unsigned  byte [v0 + 0] // s4
         t8 = t7 | 8              // s4
         byte [v0 + 0] = t8
         [v0 + 4] = t0

    loc_0x8040fd60: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040fd48
         t9 = [v1 + 0x88]
         v0 += 8
         t1 = [t9 + 0]
         t2 = t1 - 2              // hi
         at = , a2 < t2
         beql at, 0, 0x8040fd88   // likely
         byte [v0 + 0] = 0

    loc_0x8040fdc0: // orphan
         at = , a2 < t1           // lo
         beql at, 0, 0x8040fdd8   // unlikely
         byte [v0 + 0] = 0

    loc_0x8040fdcc: // orphan
         goto 0x8040fdd8
         byte [v0 + 0] = a3

    loc_0x8040fdd8: // orphan
         // CODE XREFS from fcn.80400480 @ 0x8040fdc4, 0x8040fdcc
         t2 = [a0 + 4]            // arg1 // s4
         t3 = [t2 + 0x2188]       // t9
         t4 = t3 - 3
         at = , a2 < t4           // lo
         if                       // unlikely
         a2 += 4                  // arg3

    loc_0x8040fdf0: // orphan
         t5 = , unsigned  byte [v0 + 0] // s4
         t6 = t5 | 8              // s4
         byte [v0 + 0] = t6

    loc_0x8040fdfc: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040fde8
         [v0 + 4] = t0
         if                       // likely
         v0 += 8

    loc_0x8040fe08: // orphan
         ret                      // ra
         

    loc_0x80410030: // orphan
         mtc1 at, f26
         at = 0xc3b4 << 16
         mtc1 at, f24
         mtc1 0, f22
         s5 = 0 + 5
         t6 = [s0 + 0x38]         // t9

    loc_0x804105c0: // orphan
         // CODE XREF from fcn.80400480 @ 0x804105f4
         t9 = [v0 + 0x88]
         t1 = [t9 + 0]
         bnel a1, t1, 0x804105f4  // likely
         v1 += 1

    loc_0x804105d8: // orphan
         t4 = t3 | 0x80
         byte [v0 + 0xe9] = t4
         t5 = byte [a3 + 0x408]   // arg4 // s4
         bnel a0, t5, 0x804105f4  // likely
         v1 += 1

    loc_0x804105ec: // orphan
         byte [a3 + 0x408] = v1   // arg4
         v1 += 1

    loc_0x804105f4: // orphan
         // CODE XREFS from fcn.80400480 @ 0x804105c8, 0x804105e4
         if                       // likely
         v0 += 0xec

    loc_0x804105fc: // orphan
         v0 = 0 + 1               // lo
         if                       // likely
         v1 = 0 + 1               // lo

    loc_0x80410854: // orphan
         [sp + 0x1c] = ra
         [sp + 0x18] = s0
         t6 = 0 + 1               // lo
         t7 = 0 + 4
         t8 = 0 - 1               // s2
         s0 = a0                  // t9
         [a0 + 0] = t6            // arg1
         [a0 + 4] = a1            // arg1
         [a0 + 0x3f4] = t7        // arg1
         [a0 + 0x3fc] = 0         // arg1
         call 0x87f0bd10          // 0x87f0bd10(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [a0 + 0x408] = t8
         call 0x87e0cb88          // 0x87e0cb88(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87e0cbc8          // 0x87e0cbc8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0                  // t9
         call 0x87e0cc18          // 0x87e0cc18(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0                  // t9
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         

    loc_0x80410a1c: // orphan
         [sp + 0x1c] = ra
         t6 = [v0 + 0x20]
         a1 = v0 + 0x48           // arg2
         a2 = v0 + 0x54           // arg3
         [sp + 0x28] = t6
         a0 = [v0 + 0x38]
         a3 = v0 + 0x42           // arg4

    loc_0x80410a38: // orphan
         a0 += 4                  // arg1
         call 0x87f0b4ac          // 0x87f0b4ac(0x100000003, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a0
         a0 = [sp + 0x24]
         t7 = [a0 + 0x84]         // t9

    loc_0x80410bdc: // orphan
         t7 <<= 3
         a3 = t6 + t7             // arg4
         a3 += 0x2190             // arg4
         [sp + 0x4c] = a3
         goto 0x80410c28
         t1 = v1

    loc_0x80410c28: // orphan
         // CODE XREF from fcn.80400480 @ 0x80410bec
         t2 = 0 + 0x18c

    loc_0x8041e9c8: // orphan
         if                       // unlikely

    loc_0x8041e9d4: // orphan
         if                       // unlikely

    loc_0x8041fc00: // orphan
         if                       // unlikely

    loc_0x8041fc0c: // orphan
         if                       // fcn.8041c418-0x17d78 // unlikely

    loc_0x8041fc18: // orphan
         // CODE XREF from fcn.8041e80c @ +0x98
         if                       // fcn.80404818+0x14 // unlikely
         // XREFS: CODE 0x82f23764  CODE 0x83183658  CODE 0x832a8510  
         // XREFS: CODE 0x83384a70  CODE 0x8339dbf8  CODE 0x834d9bbc  
         // XREFS: CODE 0x835b5a48  CODE 0x835b5a78  CODE 0x83633d84  
         // XREFS: CODE 0x8392286c  CODE 0x83bcc504  CODE 0x83d3e7a0  
         // XREFS: CODE 0x83d46abc  CODE 0x8407ff04  
         if                       // unlikely

    loc_0x8041fc24: // orphan
         

    loc_0x8041ff7c: // orphan
         if                       // unlikely

    loc_0x8041ff88: // orphan
         if                       // unlikely

    loc_0x8041ff94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8041ffa0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8041ffac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8041ffb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8041ffc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8041ffd0: // orphan
         if                       // unlikely
         if                       // fcn.80400e3c+0x954c // unlikely

    loc_0x8041ffdc: // orphan
         if                       // fcn.80400e3c+0x95a4 // unlikely
         if                       // unlikely

    loc_0x8041ffe8: // orphan
         if                       // fcn.80400e3c+0x96d0 // unlikely
         if                       // fcn.8040a52c+0x4 // unlikely

    loc_0x8041fff4: // orphan
         if                       // fcn.8040a52c+0x8c // unlikely
         if                       // unlikely

    loc_0x804207c4: // orphan
         if                       // fcn.80420c0c+0x1c // likely

    loc_0x804207d0: // orphan
         if                       // fcn.84085904-0x3c64d70 // likely

    loc_0x804207dc: // orphan
         if                       // likely

    loc_0x804207e8: // orphan
         if                       // likely

    loc_0x804207f4: // orphan
         if                       // likely

    loc_0x80420800: // orphan
         if                       // likely

    loc_0x8042080c: // orphan
         if                       // likely

    loc_0x80420818: // orphan
         if                       // likely

    loc_0x80420824: // orphan
         if                       // fcn.84085904-0x3c6461c // likely

    loc_0x80420830: // orphan
         if                       // fcn.84085904-0x3c645e0 // likely

    loc_0x80420c3c: // orphan
         if                       // fcn.83076308-0x2c4f768 // likely

    loc_0x80420c48: // orphan
         if                       // fcn.83076308-0x2c4f55c // likely
         if                       // likely

    loc_0x80420c54: // orphan
         at = halfword [0 + 0x18d0]

    loc_0x80420c58: // orphan
         at = halfword [0 + 0x18e4]
         if                       // likely
         if                       // likely

    loc_0x80420c68: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420c74: // orphan
         if                       // fcn.8041ec08+0x87e0 // likely
         if                       // likely

    loc_0x80420c80: // orphan
         if                       // fcn.8041ec08+0x889c // likely
         if                       // likely

    loc_0x80420c8c: // orphan
         if                       // likely

    loc_0x80420c98: // orphan
         if                       // fcn.80434c34-0xd698 // likely
         at = halfword [0 + 0x1a44]

    loc_0x80420ca8: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420cb4: // orphan
         if                       // fcn.8042781c-0x4 // likely
         if                       // fcn.8042781c+0x20 // likely

    loc_0x80420cc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420e80: // orphan
         at = halfword [0 + 0x26bc]
         at = halfword [0 + 0x274c]
         at = halfword [0 + 0x276c]
         if                       // likely
         if                       // likely

    loc_0x80420e98: // orphan
         // CODE XREF from fcn.8041e80c @ +0x158
         at = halfword [0 + 0x2838]
         if                       // likely
         if                       // likely

    loc_0x80420ea8: // orphan
         if                       // fcn.8042b024+0x58 // likely
         if                       // likely

    loc_0x80420eb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420ed4: // orphan
         at = halfword [0 + 0x2938]

    loc_0x80420ef0: // orphan
         if                       // likely

    loc_0x80420ff8: // orphan
         at = halfword [0 + 0x32a0]
         at = halfword [0 + 0x32ac]
         at = halfword [0 + 0x32bc]
         at = halfword [0 + 0x32cc]
         at = halfword [0 + 0x32dc]
         if                       // likely
         // CALL XREF from fcn.831b301c @ +0xe8
         if                       // fcn.8042d830+0x394 // likely

    loc_0x80421018: // orphan
         // CODE XREF from fcn.83084a04 @ +0x1cb0
         if                       // fcn.8042d830+0x3ec // likely
         if                       // likely

    loc_0x80421024: // orphan
         at = halfword [0 + 0x3330]

    loc_0x80421028: // orphan
         at = halfword [0 + 0x3338]
         at = halfword [0 + 0x3344]
         if                       // fcn.8042d830+0x534 // likely
         if                       // likely

    loc_0x8042103c: // orphan
         at = halfword [0 + 0x3368]
         if                       // fcn.8042de2c+0x28 // likely
         if                       // fcn.8042de2c+0x4c // likely

    loc_0x804215dc: // orphan
         if                       // likely
         at = halfword [0 + 0x5d88]

    loc_0x80421660: // orphan
         // CODE XREF from fcn.8041e80c @ +0x1c0
         if                       // likely

    loc_0x80426bd4: // orphan
         
         swc1 f6
         lwc1 f12

    loc_0x80426dc0: // orphan
         ra = [sp + 0x14]

    loc_0x80426dc4: // orphan
         mul.s f8, f14, f2
         v0 = [a0 + 0x10]         // t9
         t1 = byte [v0 + 0]
         trunc.w.s f10, f8
         mfc1 t5, f10
         
         t6 = t1 + t5             // t9
         byte [v0 + 0] = t6
         t7 = [a0 + 0x14]
         v0 = [a0 + 0x10]         // t9
         v1 = byte [t7 + 0]       // s4
         a1 = byte [v0 + 0]       // s4
         at = , a1 < v1
         beql at, 0, 0x80426e0c   // likely
         t9 = [a0 + 0x18]

    loc_0x80426e00: // orphan
         goto fcn.80427264        // fcn.80427264(-1)
         byte [v0 + 0] = v1

    loc_0x80426e0c: // orphan
         // CODE XREF from fcn.80400480 @ 0x80426df8
         v1 = byte [t9 + 0]       // s4
         at = , v1 < a1           // lo
         beql at, 0, 0x80427268   // fcn.80426c1c+0x64c // unlikely
         ra = [sp + 0x14]

    loc_0x80426e1c: // orphan
         goto fcn.80427264        // fcn.80427264(-1)
         byte [v0 + 0] = v1

    loc_0x804270f4: // orphan
         

    loc_0x804270f8: // orphan
         mfc1 t8, f6
         at = 0x8000 << 16
         goto 0x80427120
         t8 |= at                 // t9

    loc_0x80427120: // orphan
         // CODE XREF from fcn.80400480 @ 0x80427100
         // CODE XREF from fcn.804270cc @ 0x80427108
         t2 = t7 + t8             // t9
         [v0 + 0] = t2
         t3 = [a0 + 0x14]         // arg1
         v0 = [a0 + 0x10]         // arg1 // t9
         ctc1 t9, 31
         v1 = [t3 + 0]            // t9
         a1 = [v0 + 0]
         at = , unsigned  , a1 < v1 // lo
         beql at, 0, 0x80427154   // unlikely
         t0 = [a0 + 0x18]         // arg1 // t9

    loc_0x80427148: // orphan
         goto fcn.80427264        // fcn.80427264(-1)
         [v0 + 0] = v1

    loc_0x80427154: // orphan
         // CODE XREF from fcn.80400480 @ 0x80427140
         v1 = [t0 + 0]
         at = , unsigned  , v1 < a1 // lo
         beql at, 0, 0x80427268   // fcn.80426c1c+0x64c // unlikely
         ra = [sp + 0x14]

    loc_0x80427164: // orphan
         goto fcn.80427264        // fcn.80427264(-1)
         [v0 + 0] = v1

    loc_0x804271c0: // orphan
         goto fcn.80427264        // fcn.80427264(-1)
         swc1 f0

    loc_0x804273fc: // orphan
         unsigned , hi
         a0 = s3                  // t9
         a3 = halfword [t1 + 0]
         a1 = lo
         a1 += 0x1d
         
         unsigned , hi
         a2 = lo
         // CODE XREF from fcn.8041ec08 @ +0x210
         a2 += 0x1a
         call 0x87f05ce0          // 0x87f05ce0(-1, 0x1ee8260, 0x1ee9c12, 0x0)
         
         goto 0x80427584          // fcn.80434c34-0xd6b0
         s0 -= 0x1c

    loc_0x804274b8: // orphan
         t0 = [s0 + 0x10]
         unsigned , hi
         a0 = s3                  // t9
         a3 = [t0 + 0]            // t9
         // CODE XREF from fcn.8041ec08 @ +0x21c
         a1 = lo
         a1 += 0x1d
         
         unsigned , hi            // lo // lo // t9 // s2
         a2 = lo
         a2 += 0x1a
         call 0x87f05ce0          // 0x87f05ce0(-1, 0x1ee8260, 0x1b, -1)
         
         goto 0x80427584          // fcn.80434c34-0xd6b0
         s0 -= 0x1c

    loc_0x80427564: // orphan
         a1 += 0x1d
         
         unsigned , hi
         a2 = lo
         a2 += 0x1a
         call 0x87f05d34          // 0x87f05d34(-1, 0x442f71dcfe116425, 0x7579, -1)
         
         s0 -= 0x1c

    loc_0x804277e0: // orphan
         t0 = t1

    loc_0x8042aed4: // orphan
         call 0x87f08d6c          // 0x87f08d6c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t6
         ra = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         

    loc_0x8042afc4: // orphan
         
         mtc1 0, f0
         sp -= 0x20
         [sp + 0x24] = a1
         t6 = [sp + 0x24]
         [sp + 0x1c] = ra
         mfc1 a2, f0
         mfc1 a3, f0
         a1 = 0
         [sp + 0x14] = 0
         call 0x87f08d6c          // 0x87f08d6c(-1, 0x0, 0x8, -1)
         [sp + 0x10] = t6
         ra = [sp + 0x1c]
         sp += 0x20               // fp
         ret                      // ra
         

    loc_0x8042b090: // orphan
         v1 = [t1 + 0]            // s4
         t2 |= 0x400
         t9 = 0xf100 << 16
         t8 = v1 + 8
         [t1 + 0] = t8
         [v1 + 4] = t2
         ret                      // ra
         [v1 + 0] = t9

    loc_0x8042b17c: // orphan
         t5 = v1 + 8
         [t2 + 0] = t5
         [v1 + 4] = t6
         ret                      // ra
         [v1 + 0] = t4

    loc_0x8042dcc0: // orphan
         t2 = [s0 + 0x84]         // t9
         at = 0 - 0x4001
         t0 = t2 & at
         goto 0x8042dd08          // fcn.8042d830+0x4d8
         [s0 + 0x84] = t0

    loc_0x8042dd88: // orphan
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1bf
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80438a34: // orphan
         goto 0x80438a40          // fcn.84085904-0x3c4cec4
         a3 = a1                  // t0

}

*/
