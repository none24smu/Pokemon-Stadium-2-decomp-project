/*
 * Function: 0x80210874
 * Category: math
 */

// Decompiled C code
int fcn.8021edac (int esi, int edx) {
}

/*
// Full radare2 output
int fcn.8021edac (int esi, int edx) {
    loc_0x801eca20:
        if            // unlikely
        0x801eca24
        // chop
    loc_0x801eca28: // orphan
             if                       // unlikely
             if                       // unlikely

    loc_0x801eca34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801eca40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801eca4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ecbd8: // orphan
         if                       // fcn.801f6c00+0x108 // unlikely
         

    loc_0x801ecbdc: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ecbfc: // orphan
         if                       // unlikely
         

    loc_0x801ecc04: // orphan
         if                       // fcn.801f8228+0x10 // unlikely
         if                       // fcn.801f823c+0x10 // unlikely

    loc_0x801ecc10: // orphan
         if                       // fcn.801f823c+0x48 // unlikely
         if                       // fcn.801f823c+0x9c // unlikely

    loc_0x801ecd54: // orphan
         

    loc_0x801ecd58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ecd64: // orphan
         if                       // unlikely
         

    loc_0x801ecd6c: // orphan
         
         if                       // unlikely
         

    loc_0x801ed010: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x801ed05c: // orphan
         
         

    loc_0x801ed064: // orphan
         if                       // fcn.80203c7c+0x19c // unlikely
         if                       // fcn.80203c7c+0x1b0 // unlikely

    loc_0x801ed070: // orphan
         
         if                       // fcn.8021e454-0x1a58c // unlikely
         if                       // fcn.8021e454-0x1a578 // unlikely

    loc_0x801ed0a8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.8021e454-0x19ec8 // unlikely
         if                       // fcn.8021e454-0x19e94 // unlikely

    loc_0x801f54ac: // orphan
         
         if                       // likely
         

    loc_0x801f54b8: // orphan
         
         
         sdc1 f16
         tgeiu t8, 0x240
         swc1 f0
         
         scd 0

    loc_0x801f54f4: // orphan
         // CODE XREF from fcn.8021edac @ 0x801f54b0
         
         bbit132 t5, 0x1c, 0x801f68e8
         sd t7

    loc_0x801f5518: // orphan
         bbit132 t1, 0, 0x801f5580
         sd t3

    loc_0x801f58fc: // orphan
         fp = t8 + 0x2630

    loc_0x801f59f4: // orphan
         daddi t4, s3, 0x6f6f
         daddiu 0, s3, 0x6f69
         ldl a0, 0x717e, k1       // s2

    loc_0x801f7498: // orphan
         teq s0, 0, 0x1f8

    loc_0x801f75c0: // orphan
         call 0x80002bf8          // 0x80002bf8(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.801f5158 @ +0x440
         a0 |= 0x4354             // t9
         a0 = 0x5050 << 16
         call 0x80002b44          // 0x80002b44(0x50500000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4354
         call 0x80057908          // 0x80057908(0x50504354, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [sp + 0x1b]
         call 0x8005a0b4          // 0x8005a0b4(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x18]
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x801fc868: // orphan
         t7 = 0 + 0xff            // s4
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         [sp + 0x10] = t5
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         a2 = , signed  a2 >> 0x10 // arg3
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         call 0x800445e8          // "\u01e8" // 0x800445e8(-1, 0x442f71dcfe116408, 0x0, -1)
         a1 = , signed  a1 >> 0x10
         lwc1 f8, 0x64, sp
         a0 = 0 + 0x6a
         a1 = 0 + 0xb9
         a2 = 0 + 9
         a3 = 0 - 1               // s2
         call fcn.81603598        // fcn.81603598(0x6a)
         swc1 f8, 0x10, sp
         call 0x800498c4          // 0x800498c4(0x6a, 0xb9, 0x9, -1)
         
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0xb9, 0x9, -1)
         a1 = 0 + 1               // lo
         call 0x8004989c          // 0x8004989c(0x8, 0x1, 0x9, -1)
         a0 = 0 + 0x1c
         at = 0x437f << 16
         mtc1 at, f10
         lwc1 f16, 0x64, sp
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         mul.s f18, f10, f16
         a2 = 0 + 0xff            // s4
         trunc.w.s f4, f18
         mfc1 a3, f4
         call 0x8004972c          // "*!" // 0x8004972c(0xff, 0xff, 0xff, -1)
         
         at = , s1 < 4
         if                       // unlikely
         a0 = 0 + 0xf

    loc_0x801fc930: // orphan
         a2 = v0                  // s4
         a0 += 0x14               // arg1
         cvt.s.w f4, f18
         swc1 f0, 0x40, sp
         sub.s f6, f4, f0
         trunc.w.s f8, f6
         mfc1 a1, f8
         call 0x800495bc          // 0x800495bc(0x100000013, 0x442f71dcfe116408, 0xff, -1)
         
         t3 = [sp + 0x70]
         a0 = 0 + 0xf
         call 0x8004c874          // 0x8004c874(0xf, 0x442f71dcfe116408, 0xff, -1)
         a1 = halfword [t3 + 0x3e]
         t6 = halfword [s3 + 2]
         lwc1 f18, 0x40, sp
         t4 = halfword [s3 + 0]
         t7 = t6 + 0xe
         mtc1 t7, f10
         t5 = halfword [s3 + 4]
         a2 = 0 + 2
         cvt.s.w f16, f10
         a0 = t4 + t5
         a0 -= 0x18
         a3 = v0                  // s4
         sub.s f4, f16, f18
         // CODE XREF from fcn.801f5158 @ +0x7b0
         trunc.w.s f6, f4
         mfc1 a1, f6
         call 0x800495f8          // 0x800495f8(0xffffffffffffffe8, 0xffff, 0x2, 0xff)
         
         a0 = 0 + 0xf
         call 0x8004c874          // 0x8004c874(0xf, 0xffff, 0x2, 0xff)
         a1 = 0 + 0x4a
         a0 = halfword [s3 + 0]
         a1 = s2 + 0xc
         a2 = v0                  // s4
         call 0x800495bc          // 0x800495bc(0x0, 0xb, 0xff, 0xff)
         a0 += 0x35
         a0 = 0 + 0x10
         call 0x800496a4          // 0x800496a4(0x10, 0xb, 0xff, 0xff)
         a1 = 0 + 1               // lo
         s0 = 0
         s1 = 0
         s2 = 0 + 4

    loc_0x801fc9dc: // orphan
         a0 = 0 + 0xf
         call 0x8004c874          // 0x8004c874(0xf, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 0x46
         t9 = halfword [s3 + 2]
         a0 = s4
         a2 = v0                  // s4
         a1 = t9 + s1
         call 0x800495bc          // 0x800495bc(0xff, 0x442f71dcfe117dbd, 0xff, -1)
         a1 += 0x35
         s0 += 1
         if                       // likely
         s1 += 0x20

    loc_0x801fca0c: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x8131 << 16
         lwc1 f8, 0x24c4, at
         lwc1 f10, 0x64, sp
         v0 = [sp + 0x68]
         c.lt.s f8, f10
         
         bc1f 0x801fca5c
         
         if                       // unlikely
         at = , v0 < 4            // lo

    loc_0x8020092c: // orphan
         [sp + 0x1c] = ra
         [sp + 0x18] = s0
         a3 = a0 + at             // arg4
         a1 = , unsigned  byte [a3 + 0x37f4] // s4
         s0 = a0                  // t9
         a2 = 0 + 0x18
         v0 = a1 << 0x10
         v1 = a1 << 0x10
         v0 = , signed  v0 >> 0x10 // s4
         v1 = , signed  v1 >> 0x10 // s4
         v0 += 0xf
         if                       // likely
         v0 &= 0xf

    loc_0x80200960: // orphan
         if                       // unlikely
         

    loc_0x80200968: // orphan
         v0 -= 0x10

    loc_0x8020096c: // orphan
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // s4
         if                       // unlikely
         

    loc_0x8020097c: // orphan
         unsigned , hi
         t6 = lo
         t7 = s0 + t6
         t8 = , unsigned  byte [t7 + 8] // s4
         beql t8, 0, 0x80200958   // unlikely
         v0 += 0xf

    loc_0x80200994: // orphan
         if                       // unlikely
         at = 1 << 16

    loc_0x80200a4c: // orphan
         at = 1 << 16
         at += s0
         t8 = 0 + 1               // lo
         [at + 0x37e0] = t8
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x38
         ret                      // ra
         

    loc_0x80200a80: // orphan
         v0 = halfword [v0 + 0x37b4]
         at = 1 << 16
         at += a0
         if                       // unlikely
         t6 = v0 - 1

    loc_0x80200a94: // orphan
         halfword [at + 0x37b4] = t6
         at = 1 << 16
         at += a0
         t7 = 0 - 1               // s2
         halfword [at + 0x37d4] = t7
         at = 1 << 16
         // CODE XREF from fcn.81776624 @ +0x3c24
         // CODE XREF from fcn.81b931b8 @ +0xa50
         at += a0
         // CODE XREF from fcn.801f6c00 @ 0x8021e7ac
         t8 = 0 - 7
         halfword [at + 0x37d6] = t8
         at = 1 << 16
         // CODE XREF from fcn.801f5158 @ +0x19f0
         at += a0
         t9 = 0 + 9

    loc_0x80200ac4: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x8021e7b0
         byte [at + 0x37f5] = t9
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo

    loc_0x80200ad0: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802066b4: // orphan
         a1 = [sp + 0x18]         // s0
         if                       // unlikely
         v1 = v0                  // s4

    loc_0x802066c4: // orphan
         if                       // likely
         t6 = 0 + 1               // lo

    loc_0x802066cc: // orphan
         byte [a1 + 0x34] = t6    // arg2

    loc_0x802066d0: // orphan
         // CODE XREF from fcn.8021edac @ 0x802066c4
         if                       // unlikely
         t7 = 0 + 3

    loc_0x802066d8: // orphan
         at = 0x3f80 << 16
         mtc1 at, f4
         byte [a1 + 0x36] = 0     // arg2
         byte [a1 + 0x39] = v1    // arg2
         byte [a1 + 0x34] = t7    // arg2
         a0 = [a1 + 4]            // arg2 // t9
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f4, 0x2c, a1
         goto 0x80206708
         ra = [sp + 0x14]

    loc_0x80206704: // orphan
         // CODE XREFS from fcn.8021edac @ 0x802066b8, 0x802066d0
         ra = [sp + 0x14]

    loc_0x80206708: // orphan
         // CODE XREF from fcn.8021edac @ 0x802066f8
         sp += 0x18
         ret                      // ra
         

    loc_0x80206740: // orphan
         v0 = 0 + 0x32
         // CODE XREFS from fcn.802064b0 @ +0x278, +0x284, +0x28c
         [sp + 0x18] = v0
         call fcn.816092fc        // fcn.816092fc(-1)
         [sp + 0x20] = a0
         v0 = [sp + 0x18]
         a0 = [sp + 0x20]         // t9
         mtc1 0, f2
         mtc1 v0, f6
         lwc1 f4, 0x2c, a0
         t8 = 0 - 1               // s2
         cvt.s.w f8, f6
         mul.s f10, f0, f8
         sub.s f16, f4, f10
         swc1 f16, 0x2c, a0

    loc_0x80206778: // orphan
         lwc1 f18, 0x2c, a0       // arg1
         c.le.s f18, f2
         
         bc1fl 0x8020679c
         ra = [sp + 0x14]
         byte [a0 + 0x34] = 0     // arg1
         swc1 f2, 0x2c, a0        // arg1
         byte [a0 + 0x38] = t8    // arg1
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x802067bc: // orphan
         at = 0x4140 << 16
         mtc1 at, f2
         lwc1 f4, 0x30, a0        // arg1
         t6 = 0 + 6
         add.s f6, f4, f0
         swc1 f6, 0x30, a0        // arg1
         lwc1 f8, 0x30, a0        // arg1
         c.le.s f2, f8
         
         bc1fl 0x802067f4
         ra = [sp + 0x14]
         swc1 f2, 0x30, a0        // arg1
         byte [a0 + 0x34] = t6    // arg1
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80206878: // orphan
           // CALL XREF from fcn.81e080f4 @ +0x510
         [sp + 0x28] = s0
         [sp + 0x6c] = a1
         [sp + 0x60] = 0
         t6 = , unsigned  byte [a0 + 0x34] // arg1
         s0 = a0                  // t9
         at = , unsigned  , t6 < 8 // lo
         if                       // unlikely
         t6 <<= 2

    loc_0x8020687c: // orphan
         at = 0x8131 << 16

    loc_0x80206914: // orphan
         t8 = 0 + 1               // lo

    loc_0x80206918: // orphan
         [sp + 0x60] = t8

    loc_0x8020691c: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x801f6df8
         [s0 + 0] = 0

    loc_0x80206920: // orphan
         // CODE XREF from fcn.8020685c @ 0x80206910
         call fcn.8130cef0
         a1 = sp + 0x58
         t9 = halfword [sp + 0x5a]
         t0 = halfword [sp + 0x5c]
         t1 = halfword [sp + 0x5e]
         a0 = [sp + 0x6c]
         a1 = s0
         a2 = [sp + 0x60]         // t9
         a3 = halfword [sp + 0x58]
         [sp + 0x10] = t9
         [sp + 0x14] = t0
         call 0x81600a34          // 0x81600a34(0xfe116408, 0x104, -1, 0x0)
         [sp + 0x18] = t1
         a0 = s0
         a1 = sp + 0x40
         call fcn.8130d45c        // fcn.8130d45c(0x104, 0x178040)
         a2 = sp + 0x58
         a2 = byte [s0 + 0x38]    // s4
         t2 = halfword [sp + 0x42]
         t3 = halfword [sp + 0x44]
         t4 = halfword [sp + 0x46]
         a2 = , a2 < 0
         a2 ^= 1                  // lo
         a0 = [sp + 0x6c]
         a1 = s0 + 4
         a3 = halfword [sp + 0x40]
         [sp + 0x10] = t2
         [sp + 0x14] = t3
         call 0x81600a34          // 0x81600a34(0xfe116408, 0x108, 0x1, 0x0)
         [sp + 0x18] = t4
         a0 = s0
         call fcn.8130d098
         a1 = sp + 0x48
         t5 = halfword [sp + 0x4a]
         t6 = halfword [sp + 0x4c]
         t7 = halfword [sp + 0x4e]
         a0 = [sp + 0x6c]
         a1 = s0 + 3
         a2 = 0 + 1               // lo
         a3 = halfword [sp + 0x48]
         [sp + 0x10] = t5
         [sp + 0x14] = t6
         call 0x81600a34          // 0x81600a34(0xfe116408, 0x107, 0x1, 0x0)
         [sp + 0x18] = t7

    loc_0x802069d0: // orphan
         a0 = s0
         call 0x8130d1fc          // 0x8130d1fc(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x50
         a2 = , unsigned  byte [s0 + 0x34] // s4
         t8 = halfword [sp + 0x52]
         t9 = halfword [sp + 0x54]
         t0 = halfword [sp + 0x56]
         a2 ^= 1                  // t3
         a2 = , unsigned  , a2 < 1
         a0 = [sp + 0x6c]
         a1 = s0 + 1
         a3 = halfword [sp + 0x50]
         [sp + 0x10] = t8
         [sp + 0x14] = t9
         call 0x81600a34          // 0x81600a34(0xfe116408, 0x105, 0x0, 0x0)
         [sp + 0x18] = t0
         t1 = , unsigned  byte [s0 + 0x34] // s4
         a0 = s0
         at = , t1 < 5
         bnel at, 0, 0x80206a5c   // unlikely
         v1 = [s0 + 0x70]         // t9

    loc_0x80206a24: // orphan
         call fcn.8130d340
         a1 = sp + 0x38
         t2 = halfword [sp + 0x3a]
         t3 = halfword [sp + 0x3c]
         t4 = halfword [sp + 0x3e]
         a0 = [sp + 0x6c]
         a1 = s0 + 2
         a2 = 0 + 1               // lo
         a3 = halfword [sp + 0x38]
         [sp + 0x10] = t2
         [sp + 0x14] = t3
         call 0x81600a34          // 0x81600a34(0xfe116408, 0x106, 0x1, 0x0)
         [sp + 0x18] = t4
         v1 = [s0 + 0x70]         // t9

    loc_0x80206a5c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206a1c
         if                       // unlikely
         t5 = v1 - 1

    loc_0x80206a64: // orphan
         [s0 + 0x70] = t5
         if                       // likely
         v1 = t5                  // t9

    loc_0x80206a70: // orphan
         a0 = [s0 + 0x68]         // t9
         call 0x80042f94          // 0x80042f94(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s0 + 0x6c]         // t9
         v1 = [s0 + 0x70]         // t9

    loc_0x80206a80: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80206a5c, 0x80206a68
         bnel v1, 0, 0x80206af8   // likely
         ra = [sp + 0x2c]

    loc_0x80206a88: // orphan
         t6 = , unsigned  byte [s0 + 0x34] // s4
         t7 = t6 - 1              // t3
         at = , unsigned  , t7 < 7
         if                       // likely
         t7 <<= 2

    loc_0x80206a9c: // orphan
         at = 0x8131 << 16
         at += t7
         t7 = [at + 0x2840]
         goto t7
         

    loc_0x80206af4: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206a94
         ra = [sp + 0x2c]

    loc_0x80206af8: // orphan
         // CODE XREFS from fcn.8021edac @ 0x18, 0x80206a80
         // CODE XREF from fcn.80206880 @ +0x234
         s0 = [sp + 0x28]
         sp += 0x68
         ret                      // ra
         

    loc_0x80206b58: // orphan
         at = 0x8131 << 16
         at += t6
         t6 = [at + 0x285c]
         goto t6
         

    loc_0x80206c54: // orphan
         call fcn.8130f630
         swc1 f2, 0x18, sp
         if                       // unlikely
         lwc1 f2, 0x18, sp

    loc_0x80206c64: // orphan
         t8 = [sp + 0x28]         // s0
         t0 = [sp + 0x20]         // t9
         at = 0x4110 << 16
         t9 = t8 + 0x18
         [sp + 0x1c] = t9
         mtc1 at, f14
         lwc1 f0, 0x30, t0
         at = 0x40e0 << 16
         t9 = 0x8161 << 16
         c.le.s f14, f0

    loc_0x80206c8c: // orphan
         
         bc1fl 0x80206cfc
         mfc1 a3, f2
         sub.s f4, f0, f14
         t9 = [t9 - 0x42e4]
         mtc1 at, f6
         call t9                  // t9(-1, 0x442f71dcfe116408, 0x8, -1)
         div.s f12, f4, f6
         goto 0x80206cf8
         // CODE XREF from fcn.801f6c00 @ 0x801f6e1c
         mov.s f2, f0

    loc_0x80206cb4: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206c5c
         t1 = [sp + 0x20]         // t9
         t9 = 0x8161 << 16
         t9 = [t9 - 0x42f8]
         at = 0x4180 << 16
         mtc1 at, f10
         lwc1 f8, 0x30, t1
         call t9                  // 0x5e00530c(-1, 0x442f71dcfe116408, 0x8, -1)
         div.s f12, f8, f10
         t2 = [sp + 0x20]         // t9
         t4 = [sp + 0x28]         // s0
         at = 0 + 4
         t3 = , unsigned  byte [t2 + 0x38] // s4
         mov.s f2, f0
         t5 = t4 + 0x10
         bnel t3, at, 0x80206cfc  // likely
         mfc1 a3, f2

    loc_0x80206cf4: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x801f6e20
         [sp + 0x1c] = t5

    loc_0x80206cf8: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206cac
         mfc1 a3, f2

    loc_0x80206cfc: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206cec
         a0 = [sp + 0x24]
         a1 = [sp + 0x1c]         // t9
         a2 = [sp + 0x28]         // s0
         call 0x8160945c          // 0x8160945c(0x0, -1, 0x104, -1)
         swc1 f2, 0x18, sp
         ra = [sp + 0x14]
         lwc1 f2, 0x18, sp
         sp += 0x20
         ret
         mov.s f0, f2

    loc_0x80206d90: // orphan
         bnel v0, at, 0x80206e14  // likely
         a0 = 0

    loc_0x80206d98: // orphan
         // CODE XREF from fcn.80206880 @ +0x508
         t6 = [a0 + 0x48]         // arg1 // t9
         t7 = t6 + 1
         at = , unsigned  , t7 < 8 // lo
         if                       // unlikely
         t7 <<= 2

    loc_0x80206dac: // orphan
         at = 0x8131 << 16
         at += t7
         t7 = [at + 0x2968]
         goto t7
         

    loc_0x80206e10: // orphan
         // XREFS: CODE 0x80206da4  CODE 0x80206dc8  CODE 0x80206dd8  
         // XREFS: CODE 0x80206de8  CODE 0x80206df8  CODE 0x80206e08  
         a0 = 0

    loc_0x80206e14: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206d90
         call fcn.81609530        // "T"
         [sp + 0x18] = a1
         a1 = [sp + 0x18]
         a0 = [sp + 0x24]
         a2 = v0                  // s4
         call 0x8160945c          // 0x8160945c(0x0, 0xfe116408, 0xff, -1)
         a3 = [sp + 0x1c]         // t9
         ra = [sp + 0x14]
         lwc1 f0, 0x1c, sp
         sp += 0x20
         ret
         

    loc_0x80206e58: // orphan
         mtc1 0, f6
         s0 = a0                  // t9
         swc1 f4, 0x24, sp
         a1 = sp + 0x40           // arg2
         call fcn.8130f794
         swc1 f6, 0x30, a0
         a0 = s0                  // t9
         call fcn.8130f7b8        // fcn.8130f7b8(-1, 0x178040)

    loc_0x80206e78: // orphan
         a1 = sp + 0x30           // arg2
         at = 0x4180 << 16
         mtc1 at, f8
         a0 = s0
         a1 = sp + 0x40           // arg2
         call fcn.8130f794
         swc1 f8, 0x30, s0
         a0 = s0
         call fcn.8130f7b8        // fcn.8130f7b8(0x104, 0x178040)
         a1 = sp + 0x28
         t6 = [sp + 0x4c]
         a1 = sp + 0x38
         a0 = sp + 0x38
         if                       // likely
         

    loc_0x80206eb4: // orphan
         call 0x81609a90          // 0x81609a90(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x40
         a0 = sp + 0x30
         call 0x81609a90          // 0x81609a90(0x178030, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x28
         goto 0x80206ee8
         lwc1 f10, 0x24, sp

    loc_0x80206ed0: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206eac
         call 0x81609a90          // 0x81609a90(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x40
         a0 = sp + 0x28
         call 0x81609a90          // "\u01ea" // 0x81609a90(0x178028, 0x178040, 0x8, -1)
         a1 = sp + 0x30
         lwc1 f10, 0x24, sp

    loc_0x80206ee8: // orphan
         // CODE XREF from fcn.8021edac @ 0x80206ec8
         swc1 f10, 0x30, s0
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]
         sp += 0x48
         ret                      // t9
         

    loc_0x80207194: // orphan
         ra = [sp + 0x24]
         [s2 + 0x48] = 0
         s0 = 0
         v0 = s2

    loc_0x802071a4: // orphan
         t7 = , unsigned  byte [v0 + 0x8c] // s4
         bnel t7, 0, 0x802071bc   // likely
         s0 += 1

    loc_0x802071b0: // orphan
         goto 0x802071f8
         [s2 + 0x48] = s0

    loc_0x802071bc: // orphan
         at = , s0 < 4
         if                       // unlikely
         v0 += 1

    loc_0x802071c8: // orphan
         s0 = 0

    loc_0x802071cc: // orphan
         s1 = 0 + 7
         a0 = s2

    loc_0x802071d4: // orphan
         call fcn.8130f970        // "P@"
         a1 = s0
         beql v0, 0, 0x802071f0   // unlikely
         s0 += 1

    loc_0x802071e4: // orphan
         goto 0x802071f8
         [s2 + 0x48] = s0

    loc_0x802071f0: // orphan
         bnel s0, s1, 0x802071d4  // likely
         a0 = s2

    loc_0x802071f8: // orphan
         // CODE XREFS from fcn.8021edac @ 0x802071b0, 0x802071e4
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]         // t9
         ret
         sp += 0x28

    loc_0x80207334: // orphan
         a0 = s0
         call fcn.8130fbc0
         [s0 + 0x48] = t6
         t7 = [sp + 0x34]
         beql t7, 0, 0x80207358   // likely
         v0 = , unsigned  byte [s0 + 0x38] // s4

    loc_0x8020734c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa5
         v0 = , unsigned  byte [s0 + 0x38] // s4

    loc_0x80207358: // orphan
         at = 0 + 1               // lo
         a0 = s0
         beql v0, 0, 0x8020738c   // unlikely
         mtc1 0, f4

    loc_0x80207368: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x80207370: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x80207378: // orphan
         beql v0, at, 0x80207398  // unlikely
         t8 = 0 + 1               // lo

    loc_0x80207380: // orphan
         goto 0x8020739c
         

    loc_0x8020738c: // orphan
         
         swc1 f4, 0x30, s0

    loc_0x80207394: // orphan
         t8 = 0 + 1               // lo

    loc_0x80207398: // orphan
         byte [s0 + 0x38] = t8

    loc_0x8020739c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80207380
         call fcn.8130f8b4
         a1 = 0 + 1               // lo
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // t9
         

    loc_0x802074b0: // orphan
         call fcn.816092fc        // fcn.816092fc(-1)
         [sp + 0x18] = a0
         mfc1 a1, f0
         call fcn.8130fec0
         a0 = [sp + 0x18]         // t9
         v0 = [sp + 0x18]         // t9
         at = 0x4180 << 16
         mtc1 at, f6
         lwc1 f4, 0x30, v0
         t6 = 0 + 3
         c.le.s f6, f4
         
         bc1fl 0x802074f0
         ra = [sp + 0x14]
         byte [v0 + 0x38] = t6
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0 + 1               // lo
         ret
         

    loc_0x80207518: // orphan
         
         lwc1 f2, 0x298c, at
         sub.s f12, f12, f2
         c.lt.s f0, f12
         
         bc1tl 0x80207524

    loc_0x80207798: // orphan
         mtc1 at, f5
         mtc1 0, f4
         mtc1 at, f9
         mtc1 0, f8
         c.lt.d f4, f0
         at = 0x8131 << 16
         add.d f10, f8, f16
         mtc1 0, f8
         bc1f 0x802077c8
         div.d f2, f2, f10
         ldc1 f6, 0x29a8, at
         sub.d f2, f6, f2
         at = 0xbff0 << 16
         mtc1 at, f9
         at = 0x8131 << 16
         c.lt.d f0, f8
         
         bc1fl 0x802077f0
         c.lt.d f18, f14
         ldc1 f10, 0x29b0, at
         sub.d f2, f10, f2
         c.lt.d f18, f14
         
         bc1fl 0x80207808
         c.lt.d f18, f12
         ret                      // ra
         mov.d f0, f2

    loc_0x8020861c: // orphan
         s0 = [sp + 0x18]         // t9
         sp += 0x20

    loc_0x80208624: // orphan
         ret                      // ra
         

    loc_0x8020897c: // orphan
         t9 = 0x8161 << 16
         t9 = [t9 - 0x42e4]
         mov.s f12, f20
         call t9                  // 0x935e00(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a2 = [sp + 0x20]         // t9
         at = 0x4000 << 16
         mtc1 at, f16
         t8 = halfword [a2 + 0x16]
         t1 = halfword [a2 + 0x12]
         t0 = halfword [a2 + 0x14]
         mtc1 t8, f4
         mtc1 t1, f8
         mtc1 t0, f6
         cvt.s.w f12, f4
         a0 = [sp + 0x24]
         cvt.s.w f10, f8
         mul.s f2, f12, f0
         cvt.s.w f14, f6
         sub.s f18, f12, f2
         div.s f4, f18, f16
         add.s f6, f10, f4
         trunc.w.s f8, f6
         mfc1 t3, f8
         
         halfword [a0 + 2] = t3   // arg1
         t5 = halfword [a2 + 0x14]
         t4 = halfword [a2 + 0x10]
         mtc1 t5, f4
         mtc1 t4, f18
         cvt.s.w f6, f4
         cvt.s.w f10, f18
         sub.s f8, f6, f14
         div.s f18, f8, f16
         trunc.w.s f8, f2
         mfc1 t8, f8
         
         halfword [a0 + 6] = t8   // arg1
         add.s f4, f10, f18
         trunc.w.s f10, f14

    loc_0x80208a1c: // orphan
         trunc.w.s f6, f4
         mfc1 t1, f10
         mfc1 t7, f6
         halfword [a0 + 4] = t1   // arg1
         call fcn.816072fc        // fcn.816072fc(-1)
         halfword [a0 + 0] = t7
         ra = [sp + 0x1c]         // t9

    loc_0x80208a38: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x801f6f44
         mov.s f0, f20

    loc_0x80209798: // orphan
         s0 = byte [t1 + 0x1978]  // s4
         s0 = byte [t1 + 0x1978]  // s4
         s0 = byte [t1 + 0x1978]  // s4
         s0 = byte [t1 + 0x1978]  // s4
         s0 = byte [t1 + 0x19b4]  // s4
         s0 = byte [t1 + 0x19b4]  // s4
         s0 = byte [t1 + 0x1998]  // s4
         s0 = byte [t1 + 0x1ff4]  // s4
         s0 = byte [t1 + 0x2004]  // s4
         s0 = byte [t1 + 0x2014]  // s4
         s0 = byte [t1 + 0x2024]  // s4
         s0 = byte [t1 + 0x2034]  // s4
         s0 = byte [t1 + 0x2044]  // s4
         s0 = byte [t1 + 0x2054]  // s4
         s0 = byte [t1 + 0x2064]  // s4
         s0 = byte [t1 + 0x2074]  // s4
         s0 = byte [t1 + 0x2084]  // s4
         s0 = byte [t1 + 0x2104]  // s4
         s0 = byte [t1 + 0x2114]  // s4
         s0 = byte [t1 + 0x2124]  // s4
         s0 = byte [t1 + 0x2134]  // s4
         s0 = byte [t1 + 0x2144]  // s4
         // CODE XREF from fcn.801f6c00 @ +0x3cc
         s0 = byte [t1 + 0x2154]  // s4
         s0 = byte [t1 + 0x2164]  // s4
         s0 = byte [t1 + 0x2174]  // s4
         s0 = byte [t1 + 0x2184]  // s4

    loc_0x80209904: // orphan
                                  // arg2 // t0

    loc_0x80209958: // orphan
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c8c]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c8c]  // s4
         s0 = byte [t1 + 0x2c8c]  // s4
         s0 = byte [t1 + 0x2c94]  // s4
         s0 = byte [t1 + 0x2c94]  // s4

    loc_0x80209984: // orphan
         ll t4, -0x8000, ra
         s0 = byte [t1 + 0x369c]  // s4
         s0 = byte [t1 + 0x37dc]  // s4
         s0 = byte [t1 + 0x36d0]  // s4
         s0 = byte [t1 + 0x36fc]  // s4
         s0 = byte [t1 + 0x36fc]  // s4
         s0 = byte [t1 + 0x3708]  // s4
         s0 = byte [t1 + 0x37b8]  // s4
         s0 = byte [t1 + 0x3720]  // s4
         s0 = byte [t1 + 0x3f44]  // s4
         s0 = byte [t1 + 0x3f54]  // s4
         s0 = byte [t1 + 0x3f84]  // s4
         s0 = byte [t1 + 0x3f94]  // s4
         s0 = byte [t1 + 0x3fb4]  // s4
         s0 = byte [t1 + 0x3fd8]  // s4
         s0 = byte [t1 + 0x3fe8]  // s4
         s0 = byte [t1 + 0x4028]  // s4
         s0 = byte [t1 + 0x4038]  // s4
         s0 = byte [t1 + 0x3ff8]  // s4
         s0 = byte [t1 + 0x4018]  // s4
         s0 = byte [t1 + 0x3f34]  // s4
         s0 = byte [t1 + 0x3f74]  // s4
         s0 = byte [t1 + 0x3f64]  // s4
         s0 = byte [t1 + 0x3fa4]  // s4
         s0 = byte [t1 + 0x4048]  // s4
         s0 = byte [t1 + 0x4058]  // s4
         s0 = byte [t1 + 0x3fc8]  // s4
         s0 = byte [t1 + 0x4008]  // s4
         
         
         
         rotr 0, v0, 0
                                  // lo
         s0 = byte [t1 + 0x4cb0]  // s4
         s0 = byte [t1 + 0x4cc8]  // s4
         s0 = byte [t1 + 0x4cc8]  // s4
         s0 = byte [t1 + 0x4cc8]  // s4
         s0 = byte [t1 + 0x4cbc]  // s4
         s0 = byte [t1 + 0x4cb0]  // s4
         s0 = byte [t1 + 0x4d34]  // s4
         s0 = byte [t1 + 0x4d20]  // s4
         // CODE XREF from fcn.801f6c00 @ 0x801f6fd4
         s0 = byte [t1 + 0x4db0]  // s4
         s0 = byte [t1 + 0x4d34]  // s4
         s0 = byte [t1 + 0x4d34]  // s4
         s0 = byte [t1 + 0x4d34]  // s4
         s0 = byte [t1 + 0x510c]  // s4

    loc_0x80209a3c: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x801f6fd8
         s0 = byte [t1 + 0x511c]  // s4
         s0 = byte [t1 + 0x512c]  // s4
         s0 = byte [t1 + 0x513c]  // s4
         s0 = byte [t1 + 0x514c]  // s4
         s0 = byte [t1 + 0x515c]  // s4

    loc_0x80209a60: // orphan
         
         s0 = byte [t1 + 0x56f8]  // s4
         s0 = byte [t1 + 0x56f8]  // s4
         s0 = byte [t1 + 0x56f8]  // s4
         s0 = byte [t1 + 0x5708]  // s4
         s0 = byte [t1 + 0x5708]  // s4

    loc_0x80209b0c: // orphan
         s0 = byte [t1 + 0x7278]  // s4
         s0 = byte [t1 + 0x7280]  // s4
         s0 = byte [t1 + 0x7280]  // s4
         s0 = byte [t1 + 0x7280]  // s4
         s0 = byte [t1 + 0x7280]  // s4
         s0 = byte [t1 + 0x7278]  // s4

    loc_0x80209bd8: // orphan
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55fc]  // s4
         s0 = byte [t1 - 0x55fc]  // s4
         s0 = byte [t1 - 0x55fc]  // s4
         s0 = byte [t1 - 0x55fc]  // s4

    loc_0x80209bf0: // orphan
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         // CODE XREF from fcn.81e14b3c @ +0x154
         s0 = byte [t1 - 0x55f0]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55fc]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55f4]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55c0]  // s4
         s0 = byte [t1 - 0x55c0]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55c0]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55c0]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55b4]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x55b8]  // s4
         s0 = byte [t1 - 0x4ca0]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4

    loc_0x80209c64: // orphan
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c84]  // s4
         s0 = byte [t1 - 0x4c90]  // s4
         s0 = byte [t1 - 0x4ca0]  // s4
         s0 = byte [t1 - 0x3c7c]  // s4
         s0 = byte [t1 - 0x3c6c]  // s4
         s0 = byte [t1 - 0x3c5c]  // s4
         s0 = byte [t1 - 0x3c4c]  // s4
         s0 = byte [t1 - 0x3c3c]  // s4
         s0 = byte [t1 - 0x3c1c]  // s4
         s0 = byte [t1 - 0x3bfc]  // s4
         s0 = byte [t1 - 0x3bdc]  // s4
         s0 = byte [t1 - 0x3bec]  // s4
         s0 = byte [t1 - 0x3bbc]  // s4
         s0 = byte [t1 - 0x3bcc]  // s4
         s0 = byte [t1 - 0x3c2c]  // s4
         s0 = byte [t1 - 0x3c0c]  // s4
         s0 = byte [t1 - 0x3bac]  // s4

    loc_0x80209cf0: // orphan
         lsa 0, 0, a2
                                  // v1
         s3 = t3 + 0x2573
         
         a0 = t3 + 0              // arg1
         s3 = t3 + 0x2530
         a0 = k1 & 0              // arg1
         s3 = t3 + 0x2573
         
         a0 = t3 + 0              // arg1
         a0 = t3 + 0              // arg1
         a0 = t3 + 0              // arg1
         a0 = t3 + 0              // arg1
         a0 = t3 + 0              // arg1
         a0 = t3 + 0              // arg1
         
         s3 = t3 + 0x2573
         
         s3 = t3 + 0x2573
         
         s3 = t3 + 0x2573
         
         s3 = t3 + 0x2573
         
         tltu 0, 0, 2
         dsrl32 0, 0, 3

    loc_0x80209db8: // orphan
         s0 = byte [t1 - 0xce0]   // s4
         s0 = byte [t1 - 0xcd0]   // s4

    loc_0x80209dc0: // orphan
         s0 = byte [t1 - 0xcc0]   // s4
         s0 = byte [t1 - 0xcb0]   // s4
         s0 = byte [t1 - 0xc90]   // s4
         s0 = byte [t1 - 0xca0]   // s4
         s0 = byte [t1 - 0xae0]   // s4
         s0 = byte [t1 - 0xa9c]   // s4
         s0 = byte [t1 - 0xa9c]   // s4
         s0 = byte [t1 - 0xae0]   // s4
         s0 = byte [t1 - 0xae0]   // s4
         s0 = byte [t1 - 0xae0]   // s4
         s0 = byte [t1 - 0xae0]   // s4
         s0 = byte [t1 - 0x9e8]   // s4
         s0 = byte [t1 - 0xa00]   // s4
         s0 = byte [t1 - 0x9f0]   // s4
         s0 = byte [t1 - 0x9f0]   // s4
         s0 = byte [t1 - 0xa24]   // s4
         s0 = byte [t1 - 0xa0c]   // s4
         s0 = byte [t1 - 0xa0c]   // s4
         s0 = byte [t1 - 0xa0c]   // s4
         

    loc_0x80209ef8: // orphan
         s0 = byte [t1 - 0x7a0]   // s4
         s0 = byte [t1 - 0x7d0]   // s4

    loc_0x80209f00: // orphan
         s0 = byte [t1 - 0x7d0]   // s4
         s0 = byte [t1 - 0x7d0]   // s4
         s0 = byte [t1 - 0x7d0]   // s4
         s0 = byte [t1 - 0x7c0]   // s4
         s0 = byte [t1 - 0x7b0]   // s4
         s0 = byte [t1 - 0x7d0]   // s4

    loc_0x8020a09c: // orphan
         
         // CODE XREF from fcn.82e386f0 @ +0x4d0
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a0b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a0bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a0c8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8020a104: // orphan
         

    loc_0x8020a108: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a114: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a124: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a130: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a144: // orphan
         if                       // unlikely
         

    loc_0x8020a14c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a158: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a164: // orphan
         if                       // fcn.801f7004+0x17174 // unlikely
         if                       // unlikely

    loc_0x8020a170: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a17c: // orphan
         if                       // unlikely
         // CALL XREF from fcn.82dc57bc @ +0xf8
         if                       // unlikely

    loc_0x8020a188: // orphan
         if                       // fcn.8020a180+0x44ac // unlikely
         if                       // unlikely

    loc_0x8020a194: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a1e4: // orphan
         if                       // fcn.8020f2a0+0xc8 // unlikely

    loc_0x8020a1f0: // orphan
         if                       // unlikely

    loc_0x8020a1fc: // orphan
         if                       // unlikely

    loc_0x8020a208: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a214: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a21c: // orphan
         if                       // unlikely

    loc_0x8020a220: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a228: // orphan
         if                       // unlikely

    loc_0x8020a22c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a230: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a234: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a238: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a23c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a240: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a244: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a248: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a24c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a250: // orphan
         

    loc_0x8020a254: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a260: // orphan
         if                       // unlikely
         if                       // fcn.802101e4+0x4 // unlikely

    loc_0x8020a26c: // orphan
         if                       // fcn.80210250+0x20 // unlikely
         if                       // unlikely

    loc_0x8020a278: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a284: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a28c: // orphan
         if                       // unlikely

    loc_0x8020a290: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a298: // orphan
         if                       // unlikely

    loc_0x8020a29c: // orphan
         if                       // unlikely
         if                       // fcn.8021070c+0x8 // unlikely

    loc_0x8020a2a4: // orphan
         if                       // fcn.801f7004+0x19774 // unlikely

    loc_0x8020a2a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a2b0: // orphan
         if                       // unlikely

    loc_0x8020a2b4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801f6c00 @ 0x801f6ff4
         if                       // unlikely

    loc_0x8020a2bc: // orphan
         if                       // unlikely

    loc_0x8020a2c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a2c8: // orphan
         if                       // unlikely

    loc_0x8020a2cc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801f6c00 @ +0x3fc
         if                       // unlikely

    loc_0x8020a2d4: // orphan
         if                       // fcn.80210c18+0x10 // unlikely

    loc_0x8020a2d8: // orphan
         if                       // unlikely
         

    loc_0x8020a2e0: // orphan
         

    loc_0x8020a2e4: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x801f7000
         

    loc_0x8020a2e8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801f6c00 @ 0x801f6ff8
         if                       // unlikely

    loc_0x8020a2f4: // orphan
         if                       // fcn.801f7004+0x1a324 // unlikely
         if                       // fcn.801f6c00+0x1a77c // unlikely

    loc_0x8020a310: // orphan
         if                       // fcn.801f7004+0x1a570 // unlikely
         if                       // unlikely

    loc_0x8020a31c: // orphan
         if                       // fcn.801f7004+0x1a6fc // unlikely
         if                       // unlikely

    loc_0x8020a328: // orphan
         if                       // fcn.8020a180+0x76fc // unlikely
         if                       // unlikely

    loc_0x8020a334: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a340: // orphan
         if                       // fcn.801f7004+0x1aaf0 // unlikely
         if                       // unlikely

    loc_0x8020a34c: // orphan
         if                       // fcn.801f7004+0x1ac4c // unlikely
         if                       // unlikely

    loc_0x8020a358: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a364: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a370: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a37c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a388: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a3f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a400: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a40c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a44c: // orphan
         if                       // fcn.8020a1a0+0x9290 // unlikely
         if                       // fcn.8020a1a0+0x92a4 // unlikely

    loc_0x8020a458: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a464: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a490: // orphan
         if                       // unlikely
         

    loc_0x8020a498: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a4c0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a4d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a4e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a4ec: // orphan
         
         
         
         if                       // fcn.80214250-0xe4 // unlikely
         if                       // fcn.80214250-0xd0 // unlikely

    loc_0x8020a504: // orphan
         
         if                       // fcn.80214250+0x1c // unlikely
         if                       // fcn.80214250+0x30 // unlikely

    loc_0x8020a514: // orphan
         
         if                       // fcn.80214250+0xbc // unlikely
         if                       // fcn.80214250+0xe0 // unlikely

    loc_0x8020a524: // orphan
         if                       // fcn.80214250+0xa8 // unlikely
         

    loc_0x8020a52c: // orphan
         if                       // fcn.802141e8+0x48 // unlikely
         if                       // fcn.80214250+0x174 // unlikely

    loc_0x8020a538: // orphan
         
         
         
         
         if                       // fcn.80214250+0x21c // unlikely
         if                       // unlikely

    loc_0x8020a554: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a560: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a56c: // orphan
         if                       // unlikely
         

    loc_0x8020a618: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a638: // orphan
         
         

    loc_0x8020a640: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a64c: // orphan
         
         
         
         if                       // fcn.8020a180+0xb20c // unlikely
         if                       // unlikely

    loc_0x8020a664: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a678: // orphan
         if                       // fcn.8020a180+0xb57c // unlikely
         if                       // fcn.8020a1a0+0xb6c0 // unlikely

    loc_0x8020a684: // orphan
         if                       // fcn.80215a7c+0xdc // unlikely
         if                       // fcn.80215a7c+0x100 // unlikely

    loc_0x8020a690: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a6a8: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020a6b8: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020a6c8: // orphan
         if                       // unlikely
         

    loc_0x8020a6d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a6dc: // orphan
         
         if                       // unlikely
         

    loc_0x8020a6e8: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x8020a6fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a70c: // orphan
         if                       // unlikely
         

    loc_0x8020a82c: // orphan
         if                       // fcn.80219c88+0x18 // unlikely
         if                       // fcn.80219cac+0x28 // unlikely

    loc_0x8020a838: // orphan
         if                       // fcn.80219cac+0x150 // unlikely
         

    loc_0x8020a840: // orphan
         if                       // fcn.80219cac+0x1c8 // unlikely
         if                       // fcn.80219cac+0x1ec // unlikely

    loc_0x8020a84c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a858: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a86c: // orphan
         if                       // fcn.8021a474+0x9c // unlikely
         if                       // unlikely

    loc_0x8020a878: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a884: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a890: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a898: // orphan
         if                       // unlikely

    loc_0x8020a89c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a8a4: // orphan
         if                       // unlikely

    loc_0x8020a8a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a8b0: // orphan
         if                       // unlikely

    loc_0x8020a8b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a8bc: // orphan
         

    loc_0x8020a8c0: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x8020a8d4: // orphan
         if                       // unlikely
         

    loc_0x8020a8dc: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020a8ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020a8f8: // orphan
         if                       // unlikely
         

    loc_0x8020a900: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020a910: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020a920: // orphan
         
         
         if                       // fcn.8021bc30+0x1c // unlikely
         if                       // unlikely

    loc_0x8020a934: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8020aa00: // orphan
         if                       // unlikely
         

    loc_0x8020aa08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aa10: // orphan
         

    loc_0x8020aa14: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x8020aa64: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aa78: // orphan
         
         
         if                       // fcn.8021fdc8+0x14c // unlikely
         if                       // unlikely

    loc_0x8020aa8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aa98: // orphan
         if                       // unlikely
         

    loc_0x8020aaa0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aabc: // orphan
         

    loc_0x8020aac0: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8020aadc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aaec: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aafc: // orphan
         
         
         
         
         
         

    loc_0x8020aba4: // orphan
         
         // CODE XREF from fcn.801f7004 @ 0x801f7024
         if                       // fcn.8022309c // unlikely
         

    loc_0x8020abb0: // orphan
         if                       // fcn.8022309c+0x88 // unlikely
         if                       // fcn.8022309c+0x11c // unlikely

    loc_0x8020abbc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7028
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020abd4: // orphan
         if                       // fcn.8023e660-0x1a9a8 // unlikely
         if                       // unlikely

    loc_0x8020abe0: // orphan
         
         if                       // fcn.802240b0+0x138 // unlikely
         if                       // unlikely

    loc_0x8020abf0: // orphan
         
         if                       // loc.8022472c+0xc // unlikely
         if                       // unlikely

    loc_0x8020ac00: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020ae50: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x8020ae64: // orphan
         if                       // unlikely
         

    loc_0x8020ae6c: // orphan
         

    loc_0x8020ae70: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f704c
         if                       // unlikely
         

    loc_0x8020ae78: // orphan
         if                       // fcn.801ec368+0xc14 // unlikely
         if                       // unlikely

    loc_0x8020ae84: // orphan
         // CODE XREF from fcn.801f7004 @ +0x4c
         if                       // unlikely
         

    loc_0x8020ae8c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.801f7004 @ 0x801f7054
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b10c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b120: // orphan
         if                       // unlikely
         

    loc_0x8020b128: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b144: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b48c: // orphan
         
         
         if                       // fcn.80200838+0xe0 // unlikely
         if                       // unlikely

    loc_0x8020b4a0: // orphan
         
         
         if                       // fcn.801ec368+0x146b4 // unlikely
         if                       // unlikely

    loc_0x8020b4b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b4c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b888: // orphan
         
         
         
         if                       // fcn.80205870+0x28 // unlikely
         if                       // fcn.80205870+0x3c // unlikely

    loc_0x8020b8a0: // orphan
         
         
         
         
         if                       // fcn.80205870+0x184 // unlikely
         if                       // fcn.80205870+0x198 // unlikely

    loc_0x8020b8bc: // orphan
         
         
         
         
         
         
         
         if                       // fcn.80205ba8+0x84 // unlikely
         if                       // fcn.80205c38+0x8 // unlikely

    loc_0x8020b904: // orphan
         
         
         if                       // fcn.801ec368+0x1a298 // unlikely
         if                       // unlikely

    loc_0x8020b918: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b990: // orphan
         if                       // fcn.80208234+0x310 // unlikely
         if                       // fcn.80208234+0x334 // unlikely

    loc_0x8020ba70: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020ba8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020ba98: // orphan
         if                       // fcn.801f7004+0x13e28 // unlikely
         if                       // unlikely

    loc_0x8020baa4: // orphan
         if                       // fcn.801f7004+0x140e4 // unlikely
         if                       // unlikely

    loc_0x8020bab0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020bac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020bacc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020bad8: // orphan
         if                       // fcn.801f6c00+0x14d7c // unlikely
         if                       // unlikely

    loc_0x8020bae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020be4c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8020be58: // orphan
         if                       // likely

    loc_0x8020bfc8: // orphan
         tge s0, at, 0x8e
         teq s0, at, 0x8e

    loc_0x8020c388: // orphan
         

    loc_0x8020c3ec: // orphan
         t8 = , unsigned  halfword [a2 + 2]
         t1 = v1 + 8
         [s0 + 0] = t1
         t3 = 0x8009 << 16
         t3 += 0x4e38
         [v1 + 4] = t3

    loc_0x8020c404: // orphan
         [v1 + 0] = t2
         a0 = t7 - t6
         v1 = [s0 + 0]
         if                       // likely
         at = a0

    loc_0x8020c418: // orphan
         at = a0 + 1

    loc_0x8020c41c: // orphan
         a0 = , signed  at >> 1

    loc_0x8020c52c: // orphan
         if                       // unlikely
         v0 = fcn.83f00000 << 16

    loc_0x8020c534: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x8020c540: // orphan
         if                       // unlikely
         

    loc_0x8020c548: // orphan
         goto 0x8020c5f8
         ra = [sp + 0x14]

    loc_0x8020c574: // orphan
         v0 += 0x3f0
         t7 = [v0 + 0]            // t9
         t0 = 0 + 2
         t8 = t7 + 1
         at = , unsigned  , t8 < 2 // lo
         if                       // likely
         [v0 + 0] = t8

    loc_0x8020c590: // orphan
         call 0x8007d5c0          // 0x8007d5c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t0
         at = fcn.83f00000 << 16
         [at + 0x400] = v0
         call 0x80064f54          // 0x80064f54(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x404] = v1
         goto 0x8020c5f8
         ra = [sp + 0x14]

    loc_0x8020c5b0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f706c
         call 0x83f0012c          // 0x83f0012c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8020c5b4: // orphan
         
         if                       // unlikely
         t1 = 0 + 3

    loc_0x8020c5c0: // orphan
         [sp + 0x1c] = t1
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80007b34          // 0x80007b34(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         goto 0x8020c5f8
         ra = [sp + 0x14]

    loc_0x8020c5dc: // orphan
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 1               // lo
         if                       // likely
         t2 = 0 + 4

    loc_0x8020c5f4: // orphan
         ra = [sp + 0x14]

    loc_0x8020c5f8: // orphan
         // CODE XREFS from fcn.8021edac @ 0x8020c548, 0x8020c5a8, 0x8020c5d4
         v0 = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         // CODE XREF from fcn.801f7004 @ +0x6c
         

    loc_0x8020c7e0: // orphan
         // CODE XREF from fcn.801f7004 @ +0x78
         if                       // unlikely
         if                       // unlikely

    loc_0x8020ca50: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8020ccb0: // orphan
         if                       // likely
         s5 = , signed  s4 >> 5

    loc_0x8020ccb8: // orphan
         at = s4 + 0x1f
         s5 = , signed  at >> 5   // a2

    loc_0x8020ccc0: // orphan
         at = s5                  // t9
         s5 <<= 2
         s5 += at
         s5 <<= 2

    loc_0x8020ccd0: // orphan
         t8 = halfword [s3 + 6]

    loc_0x8020ccd4: // orphan
         if                       // likely
         t9 = , signed  a0 >> 5   // arg1

    loc_0x8020ccdc: // orphan
         at = a0 + 0x1f           // arg1
         t9 = , signed  at >> 5

    loc_0x8020cce4: // orphan
         t6 = t8 << 2
         t7 = s3 + t6
         v0 = s5 + t9
         t9 = [t7 + 8]
         t6 = s3 + v0
         t7 = byte [t6 + 0x16]    // s4
         t8 = v0 << 9
         s1 = t9 + t8
         t9 = t7 << 8
         t9 -= t7
         div 0, t9, fp
         if                       // likely
         

    loc_0x8020cd18: // orphan
         break 7

    loc_0x8020cd1c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020cd28: // orphan
         if                       // likely
         

    loc_0x8020cd30: // orphan
         break 6

    loc_0x8020cd34: // orphan
         s0 = lo
         at = , s0 < 0xff         // lo
         blezl s0, 0x8020ced8     // unlikely
         a0 += 0x20               // arg1

    loc_0x8020cd40: // orphan
         a0 += 0x20               // arg1

    loc_0x8020cd44: // orphan
         if                       // unlikely
         t7 = 0xfb00 << 16

    loc_0x8020cd4c: // orphan
         v0 = [v1 + 0]            // s4
         t9 = s0 & 0xff
         at = 0 - 0x100
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = s6
         v0 = [v1 + 0]
         t8 = t9 | at
         s2 = s4 + 0x20
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = t8
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t7 = 0xfd10 << 16
         t8 = 0xf510 << 16
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = s1
         [v0 + 0] = t7
         t0 = [v1 + 0]
         t6 = 0x708 << 16
         t6 |= 0x200
         t9 = t0 + 8
         [v1 + 0] = t9
         [t0 + 4] = t6
         [t0 + 0] = t8
         t1 = [v1 + 0]
         t9 = 0xe600 << 16
         t6 = 0xf300 << 16
         t7 = t1 + 8
         [v1 + 0] = t7
         [t1 + 4] = 0
         [t1 + 0] = t9
         t2 = [v1 + 0]
         t7 = 0x70f << 16
         t7 |= 0xf200
         t8 = t2 + 8
         [v1 + 0] = t8
         [t2 + 4] = t7
         [t2 + 0] = t6
         t3 = [v1 + 0]
         t6 = 0xf510 << 16
         t7 = 8 << 16
         t9 = t3 + 8
         [v1 + 0] = t9
         [t3 + 4] = 0
         // CODE XREF from fcn.801f7004 @ +0x84
         [t3 + 0] = s6
         t4 = [v1 + 0]
         t7 |= 0x200
         t6 |= 0x800
         t8 = t4 + 8
         [v1 + 0] = t8
         [t4 + 4] = t7
         [t4 + 0] = t6
         t5 = [v1 + 0]
         // CODE XREF from fcn.801f7004 @ 0x801f708c
         t6 = 3 << 16
         t6 |= 0xc03c
         t9 = t5 + 8
         [v1 + 0] = t9
         t8 = 0xf200 << 16
         [t5 + 0] = t8
         [t5 + 4] = t6
         a1 = [v1 + 0]
         t9 = a0 + 0x20           // arg1
         t8 = t9 << 2
         t7 = a1 + 8              // arg2
         [v1 + 0] = t7
         t6 = t8 & 0xfff
         s2 <<= 2
         t7 = t6 << 0xc
         at = 0xe400 << 16
         s2 &= 0xfff
         t9 = t7 | at
         t8 = t9 | s2
         t6 = a0 << 2             // arg1
         ra = s4 << 2
         t7 = t6 & 0xfff
         ra &= 0xfff
         t9 = t7 << 0xc
         [a1 + 0] = t8            // arg2
         t8 = t9 | ra
         [a1 + 4] = t8            // arg2
         a2 = [v1 + 0]
         t7 = 0xe100 << 16
         t8 = 0xf100 << 16
         t6 = a2 + 8              // arg3
         [v1 + 0] = t6
         [a2 + 4] = 0             // arg3
         [a2 + 0] = t7            // arg3
         a3 = [v1 + 0]
         t6 = 0x200 << 16
         t6 |= 0x200
         t9 = a3 + 8              // arg4
         [v1 + 0] = t9
         [a3 + 4] = t6            // arg4
         [a3 + 0] = t8            // arg4

    loc_0x8020ced4: // orphan
         a0 += 0x20               // arg1

    loc_0x8020ced8: // orphan
         at = , a0 < s7
         bnel at, 0, 0x8020ccd4   // unlikely
         t8 = halfword [s3 + 6]

    loc_0x8020cee0: // orphan
         at = , a0 < s7
         bnel at, 0, 0x8020ccd4   // unlikely
         t8 = halfword [s3 + 6]

    loc_0x8020cee4: // orphan
         t7 = [sp + 0x40]
         s4 += 0x20
         at = , s4 < t7
         bnel at, 0, 0x8020ccb0   // unlikely
         a0 = 0

    loc_0x8020cef8: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // s0
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x50

    loc_0x8020d06c: // orphan
         a2 = halfword [a2 + 0x1ea4]
         at = fcn.82000000 << 16
         a2 += 1
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0xffff0000, -1)
         halfword [at + 0x1ea4] = a2
         t7 = v0 << 1
         at = 0 + 5
         div 0, t7, at

    loc_0x8020d094: // orphan
         a2 = fcn.82000000 << 16
         a2 = halfword [a2 + 0x1ea4]
         t8 = lo
         t9 = 0 + 2
         at = , a2 < t8           // lo
         if                       // unlikely
         t2 = 0 + 0xff            // s4

    loc_0x8020d0b0: // orphan
         at = fcn.82000000 << 16
         halfword [at + 0x1ea0] = t9
         halfword [at + 0x1ea6] = t2
         t3 = fcn.82000000 << 16
         t3 = , unsigned  halfword [t3 + 0x1ea2]
         a1 = fcn.82000000 << 16
         a2 = [a1 + 0x1cdc]
         t4 = t3 | 2
         halfword [at + 0x1ea2] = t4
         goto 0x8020d460
         halfword [at + 0x1ea4] = a2

    loc_0x8020d460: // orphan
         // XREFS: CODE 0x8020d0a8  CODE 0x8020d0d4  CODE 0x8020d158  
         // XREFS: CODE 0x8020d184  CODE 0x8020d1f0  CODE 0x8020d200  
         // XREFS: CODE 0x8020d2a8  CODE 0x8020d358  CODE 0x8020d3b4  
         // XREFS: CODE 0x8020d3c0  CODE 0x8020d44c  
         ra = [sp + 0x14]

    loc_0x8020d464: // orphan
         // CODE XREFS from fcn.801f7004 @ 0xc40, 0x8020d338
         sp += 0x28
         ret                      // ra
         

    loc_0x8020dab0: // orphan
         a3 = [sp + 0xac]
         goto 0x8020dad4
         a0 = 0 + 8               // a2

    loc_0x8020dad4: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020dab4
         a1 = 0
         call 0x80049148          // 0x80049148(-1, 0x0, 0x8, -1)
         a2 = sp + 0x2c
         t4 = sp + 0x24
         t5 = sp + 0x20
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         a0 = 0 + 0x8c
         a1 = 0 + 0x8c
         a2 = v0 + 0x28
         call 0x8004ad00          // 0x8004ad00(0x8c, 0x8c, 0x127, -1)
         a3 = 0 + 0x3c
         call 0x800498c4          // 0x800498c4(0x8c, 0x8c, 0x127, 0x3c)
         
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x8c, 0x127, 0x3c)
         a1 = 0
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x3c)
         a3 = 0 + 0xff            // s4
         t6 = [sp + 0xac]
         a2 = sp + 0x2c
         a0 = 0 + 0xa0
         if                       // likely
         a1 = 0 + 0xa0

    loc_0x8020db40: // orphan
         a0 = 0 + 0xa0
         call 0x800495bc          // 0x800495bc(0xa0, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xa0
         goto 0x8020db5c
         

    loc_0x8020db54: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020db38
         call 0x800495bc          // 0x800495bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = sp + 0x2c

    loc_0x8020db5c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020db4c
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x1c]
         sp += 0xb0
         ret
         

    loc_0x8020dc18: // orphan
         if                       // unlikely
         a0 = 0x800d << 16

    loc_0x8020dc20: // orphan
         t6 = 0 + 1               // lo
         [sp + 0x14] = t6
         a0 += 0x510
         a1 = halfword [v1 + 0]
         a2 = halfword [v1 + 2]
         call 0x80007444          // 0x80007444(0x10000050f, 0x0, 0x15f, -1)
         [sp + 0x10] = v0
         t8 = fcn.82000000 << 16
         t8 = halfword [t8 + 0x1ebe]
         v1 = fcn.82000000 << 16
         v1 += 0x1eb8
         t7 = 0 + 1               // lo
         a0 = 0x800d << 16
         a3 = fcn.82000000 << 16
         [sp + 0x20] = t7
         a3 = halfword [a3 + 0x1ebc]
         a0 += 0x510
         a1 = halfword [v1 + 0]
         a2 = halfword [v1 + 2]
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x9f4a, 0x9c58, 0x5d43)
         [sp + 0x10] = t8

    loc_0x8020dc74: // orphan
         // CODE XREFS from fcn.8021edac @ 0x3e8, 0x8020dc18
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0 + 0x10
         call 0x800496a4          // 0x800496a4(0x10, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = fcn.82000000 << 16
         a1 = halfword [a1 + 0x1ec0]
         a0 = [sp + 0x24]
         call 0x800495bc          // 0x800495bc(0x0, 0x9904, 0x8, -1)
         a2 = [sp + 0x2c]
         t9 = [sp + 0x24]
         t0 = [sp + 0x28]         // s0

    loc_0x8020dca4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70c0
         a1 = fcn.82000000 << 16
         a1 = halfword [a1 + 0x1ec0]
         t1 = t9 + t0
         a0 = t1 + 0x78           // arg1
         [sp + 0x24] = a0
         // CODE XREF from fcn.801f7004 @ +0xc0
         call 0x800495bc          // 0x800495bc(0x442f71ddfe11647f, 0x9904, 0x8, -1)
         a2 = [sp + 0x2c]
         call 0x800499ec          // 0x800499ec(0x442f71ddfe11647f, 0x9904, 0x0, -1)
         
         v1 = fcn.82000000 << 16
         v1 = [v1 + 0x1d00]
         t3 = [sp + 0x28]         // s0
         at = fcn.82000000 << 16
         v1 -= 2
         [at + 0x1d00] = v1
         t4 = ~t3
         at = , t4 < v1           // lo
         if                       // likely
         v1 += t3

    loc_0x8020dcf0: // orphan
         v1 += 0x78
         at = fcn.82000000 << 16
         [at + 0x1d00] = v1

    loc_0x8020dcfc: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020dce8
         t5 = [sp + 0x20]         // lo
         a0 = 0x800d << 16
         a0 += 0x510
         if                       // unlikely
         a1 = 0

    loc_0x8020dd10: // orphan
         t6 = 0 + 0x1e0
         [sp + 0x10] = t6
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x442f71dcfe116408, 0x0, -1)
         a3 = 0 + 0x280

    loc_0x8020dd24: // orphan
         // CODE XREFS from fcn.8021edac @ 0x3ac, 0x8020dd08
         ra = [sp + 0x1c]
         sp += 0x30
         ret
         

    loc_0x8020de94: // orphan
         a0 = 0 + 1               // lo
         a0 = 0x8008 << 16
         a0 = [a0 + 0x7200]       // t9
         v0 = , unsigned  halfword [a0 + 8]
         // CODE XREF from fcn.8020d818 @ +0x670
         t6 = 0 + 1               // lo
         a0 = 0 + 2
         t5 = v0 & 0x8000
         beql t5, 0, 0x8020ded0   // unlikely
         t8 = v0 & 0x4000

    loc_0x8020deb8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.801f7004 @ 0x801f70c8
         [sp + 0x1c] = t6
         t7 = 0x8008 << 16
         t7 = [t7 + 0x7200]       // t9
         v0 = , unsigned  halfword [t7 + 8]
         t8 = v0 & 0x4000

    loc_0x8020ded0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70cc
         // CODE XREF from fcn.8021edac @ 0x8020deb0
         if                       // unlikely
         t9 = 0 - 1               // s2

    loc_0x8020ded8: // orphan
         [sp + 0x1c] = t9
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3

    loc_0x8020dee4: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020ded0
         ra = [sp + 0x14]         // lo
         v0 = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // lo
         

    loc_0x8020e090: // orphan
         v1 = 0 + 1               // lo
         // CODE XREF from fcn.8020d818 @ +0x870
         ret                      // ra
         v0 = v1                  // lo

    loc_0x8020e26c: // orphan
         [sp + 0x18] = s0
         s1 = 0
         call 0x800086a4          // 0x800086a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         call 0x80007aec          // 0x80007aec(0x2, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         s0 = fcn.82000000 << 16
         s0 += 0x1d50
         s2 = 0 + 6

    loc_0x8020e290: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e2c8
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.82000100
         
         call fcn.82000794
         
         call fcn.820014c4
         
         v0 = [s0 + 0]
         if                       // likely
         t6 = v0 - 1              // s2

    loc_0x8020e2bc: // orphan
         [s0 + 0] = t6

    loc_0x8020e2c0: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e2b4
         call fcn.8200182c        // fcn.8200182c(-1, 0x442f71dcfe116408, 0x8)
         a0 = s1
         if                       // likely
         s1 = v0                  // s4

    loc_0x8020e2d0: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]         // lo
         ret
         sp += 0x28

    loc_0x8020e348: // orphan
         v0 = v1
         sp -= 0x28
         [sp + 0x28] = a0
         [sp + 0x1c] = ra
         a0 = 0x5449 << 16
         [sp + 0x2c] = a1
         call 0x80002b44          // 0x80002b44(0x54490000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x544c
         call 0x80055948          // 0x80055948(0x5449544c, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         a0 = fcn.82000000 << 16
         call 0x8005487c          // 0x8005487c(0x82000000, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.801f7004 @ +0xf0
         a0 += 0x1ed0
         a0 = 1 << 16
         call 0x80006cd0          // 0x80006cd0(0x10000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         // CODE XREF from fcn.801f7004 @ 0x801f70f8
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x1, 0x0, 0x2, 0x0)
         a0 = 0 + 0x107
         call 0x8004c4b0          // 0x8004c4b0(0x107, 0x0, 0x2, 0x0)
         a0 = 0 + 0x16
         call 0x8004c4b0          // 0x8004c4b0(0x16, 0x0, 0x2, 0x0)
         a0 = 0 + 0x41
         call 0x8004c4b0          // 0x8004c4b0(0x41, 0x0, 0x2, 0x0)
         a0 = 0 + 0x42
         call 0x8004c8c0          // 0x8004c8c0(0x42, 0x0, 0x2, 0x0)
         a0 = 0 + 0x13d
         a0 = 0 + 0x18
         call 0x80047588          // 0x80047588(0x18, 0x0, 0x2, 0x0)
         a1 = 0
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00

    loc_0x8020e400: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70fc
         a1 += 0x6e30             // arg2
         a0 >>= 0x18              // arg1 // s4
         call 0x80004638          // 0x80004638(0xff, 0x442f71dcfe11d238, 0x8, -1)
         a3 = 0
         call fcn.82000de8        // fcn.82000de0+0x8 // fcn.82000de8(0xff)
         
         call 0x80008514          // 0x80008514(0xff, 0x442f71dcfe11d238, 0x8, 0x0)
         // CODE XREF from fcn.82584c48 @ +0x155c
         a0 = [sp + 0x24]
         call fcn.820019ec        // fcn.820019ec(0xfe11647f)
         // CODE XREF from fcn.801f7004 @ +0xfc
         
         call 0x80008574          // 0x80008574(0xfe11647f, 0x442f71dcfe11d238, 0x8, 0x0)
         
         call 0x80047610          // 0x80047610(0xfe11647f, 0x442f71dcfe11d238, 0x8, 0x0)
         
         call 0x80006d3c          // 0x80006d3c(0xfe11647f, 0x442f71dcfe11d238, 0x8, 0x0)
         
         a0 = 0 + 0x14
         call 0x80051d64          // 0x80051d64(0x14, 0x442f71dcfe11d238, 0x8, 0x0)
         a1 = 0
         call 0x80055028          // 0x80055028(0x14, 0x0, 0x8, 0x0)
         
         a0 = 0x5449 << 16
         call 0x80002bf8          // 0x80002bf8(0x54490000, 0x0, 0x8, 0x0)
         a0 |= 0x544c
         call fcn.82001a78
         
         ra = [sp + 0x1c]         // t9
         sp += 0x28
         ret                      // t9
         

    loc_0x8020e4b4: // orphan
         
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         lsa 0, 0, 0
         
         
         
         dsllv 0, 0, 0
         
         
         movf 0, 0, fcc0
         
         v1 = 0 << 0x18
         s2 = 0 << 0x18
         v1 = 0 << 0x18
         s2 = 0 << 0x18

    loc_0x8020e690: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e6b4: // orphan
         if                       // fcn.80210220+0x8 // unlikely
         // CODE XREF from fcn.801f7004 @ 0x801f7114
         if                       // unlikely

    loc_0x8020e6c0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x2e0
         if                       // unlikely

    loc_0x8020e6cc: // orphan
         if                       // unlikely
         

    loc_0x8020e6d4: // orphan
         if                       // unlikely
         // CODE XREFS from fcn.8020e300 @ +0x2d4, +0x2e4
         if                       // unlikely

    loc_0x8020e6e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e6ec: // orphan
         // CODE XREF from fcn.8020e300 @ +0x2d8
         
         // CODE XREF from fcn.801f7004 @ 0x801f711c
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e6fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x2dc
         

    loc_0x8020e704: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e710: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801f7004 @ 0x801f7120
         if                       // unlikely

    loc_0x8020e91c: // orphan
         if                       // fcn.8020a180+0x7ff0 // unlikely
         if                       // unlikely

    loc_0x8020e928: // orphan
         if                       // unlikely
         

    loc_0x8020e930: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e93c: // orphan
         // CODE XREF from fcn.8020e300 @ +0x328
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e948: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e954: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e960: // orphan
         

    loc_0x8020e964: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e630
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e980: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e98c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020f3bc: // orphan
         
         // CODE XREF from fcn.801f7134 @ 0x801f716c
         [sp + 4] = a1
         a1 &= 0xffff
         at = 0 + 1               // lo
         v0 = 0
         if                       // unlikely
         v1 = 0

    loc_0x8020f3d8: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x8020f3e4: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x8020f3ec: // orphan
         if                       // fcn.8020a1a0+0x5280 // unlikely
         

    loc_0x8020f3f4: // orphan
         goto 0x8020f428          // fcn.8020a1a0+0x5288
         

    loc_0x8020f3fc: // orphan
         v0 = 0x8221 << 16
         goto 0x8020f428          // fcn.8020a1a0+0x5288
         v0 -= 0x2864

    loc_0x8020f408: // orphan
         v0 = 0x8221 << 16
         goto 0x8020f428          // fcn.8020a1a0+0x5288
         v0 -= 0x2860

    loc_0x8020f414: // orphan
         v0 = 0x8221 << 16
         goto 0x8020f428          // fcn.8020a1a0+0x5288
         v0 -= 0x285c

    loc_0x8020f568: // orphan
         mul.s f18, f10, f0
         cvt.s.w f4, f16
         add.s f6, f18, f4
         trunc.w.s f8, f6
         mfc1 t5, f8
         
         halfword [s0 + 0xa] = t5
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]

    loc_0x8020f604: // orphan
         t4 = halfword [a1 + 0x24]
         v1 += 0x30
         v0 = a1 + 0x24
         // CODE XREF from fcn.801f7134 @ 0x801f717c
         beql t4, 0, 0x8020f63c   // unlikely
         t8 = halfword [a1 + 0x30]

    loc_0x8020f618: // orphan
         t5 = halfword [v0 + 2]
         t6 = t5 + 1
         halfword [v0 + 2] = t6
         t7 = halfword [v0 + 2]
         at = , t7 < 0xa
         bnel at, 0, 0x8020f63c   // unlikely
         t8 = halfword [a1 + 0x30]

    loc_0x8020f634: // orphan
         halfword [v0 + 0] = 0
         t8 = halfword [a1 + 0x30]

    loc_0x8020f63c: // orphan
         v0 = a1 + 0x30
         beql t8, 0, 0x8020f66c   // unlikely
         t2 = halfword [a1 + 0x3c]

    loc_0x8020f648: // orphan
         t9 = halfword [v0 + 2]
         t0 = t9 + 1
         halfword [v0 + 2] = t0
         t1 = halfword [v0 + 2]
         at = , t1 < 0xa
         bnel at, 0, 0x8020f66c   // unlikely
         t2 = halfword [a1 + 0x3c]

    loc_0x8020f664: // orphan
         halfword [v0 + 0] = 0
         t2 = halfword [a1 + 0x3c]

    loc_0x8020f66c: // orphan
         v0 = a1 + 0x3c
         beql t2, 0, 0x8020f69c   // unlikely
         t6 = halfword [a1 + 0x48]

    loc_0x8020f678: // orphan
         t3 = halfword [v0 + 2]
         t4 = t3 + 1
         halfword [v0 + 2] = t4

    loc_0x8020f684: // orphan
         t5 = halfword [v0 + 2]
         at = , t5 < 0xa
         bnel at, 0, 0x8020f69c   // unlikely
         t6 = halfword [a1 + 0x48]

    loc_0x8020f694: // orphan
         halfword [v0 + 0] = 0
         t6 = halfword [a1 + 0x48]

    loc_0x8020f69c: // orphan
         v0 = a1 + 0x48
         if                       // unlikely
         

    loc_0x8020f6a8: // orphan
         t7 = halfword [v0 + 2]
         t8 = t7 + 1
         halfword [v0 + 2] = t8
         t9 = halfword [v0 + 2]
         at = , t9 < 0xa
         if                       // unlikely
         

    loc_0x8020f6c4: // orphan
         halfword [v0 + 0] = 0

    loc_0x8020f6c8: // orphan
         if                       // likely
         a1 += 0x30

    loc_0x8020f6d0: // orphan
         ret                      // ra
         

    loc_0x8020f7c0: // orphan
         t9 = halfword [s0 + 0x24]
         t0 = s0 + 0x24
         beql t9, 0, 0x8020f9ac   // likely
         s2 += 0xc

    loc_0x8020f7d0: // orphan
         t2 = halfword [t0 + 2]
         t5 = , unsigned  halfword [s4 + 0]
         lwc1 f0, 4, t0
         unsigned , hi
         mtc1 t5, f4
         add.s f2, f0, f0
         cvt.s.w f6, f4
         t3 = lo
         
         
         div 0, t3, s5
         t4 = lo
         a1 = s3 - t4
         if                       // likely
         

    loc_0x8020f80c: // orphan
         break 7

    loc_0x8020f810: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020f81c: // orphan
         if                       // likely
         

    loc_0x8020f824: // orphan
         break 6

    loc_0x8020f828: // orphan
         bgezl t5, 0x8020f844     // likely
         t6 = , unsigned  halfword [s4 + 2]

    loc_0x8020f830: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8
         t6 = , unsigned  halfword [s4 + 2]

    loc_0x8020f844: // orphan
         mul.s f12, f6, f2
         mtc1 t6, f10
         if                       // unlikely
         cvt.s.w f16, f10

    loc_0x8020f854: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x8020f864: // orphan
         c.lt.s f20, f12
         mul.s f14, f16, f2
         bc1fl 0x8020f880
         mov.s f0, f26
         goto 0x8020f880
         mov.s f0, f22

    loc_0x8020f880: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020f874
         add.s f4, f0, f12
         c.lt.s f20, f14
         trunc.w.s f8, f4
         mfc1 t1, f8
         bc1fl 0x8020f8a4
         mov.s f0, f26
         goto 0x8020f8a4
         mov.s f0, f22

    loc_0x8020f8a4: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020f898
         v1 = [s1 + 0]            // t9
         t8 = v1 + 8
         [s1 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = s6
         v0 = v1                  // t9
         v1 = [s1 + 0]
         t9 = v1 + 8
         [s1 + 0] = t9
         [v1 + 0] = s7
         t3 = , unsigned  byte [sp + 0xc4]
         t6 = , unsigned  byte [sp + 0xc5]
         t2 = , unsigned  byte [sp + 0xc6]
         t4 = t3 << 0x18
         t7 = t6 << 0x10
         t8 = t4 | t7
         t3 = t2 << 8
         t5 = t8 | t3

    loc_0x8020f8ec: // orphan
         t6 = a1 & 0xff           // a2
         t4 = t5 | t6             // t9
         [v1 + 4] = t4
         lwc1 f6, 4, t0
         a0 = v1
         c.lt.s f28, f6
         
         bc1fl 0x8020f9ac
         s2 += 0xc
         div.s f16, f12, f24
         t7 = halfword [t0 + 8]
         t2 = halfword [t0 + 0xa]
         a2 = t1 << 0x10
         mtc1 t7, f10
         mtc1 t2, f6
         a2 = , signed  a2 >> 0x10
         cvt.s.w f18, f10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         cvt.s.w f10, f6
         sub.s f4, f18, f16
         div.s f18, f14, f24
         trunc.w.s f8, f4
         mfc1 a0, f8
         
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // v1
         add.s f8, f0, f14
         sub.s f16, f10, f18
         div.s f10, f30, f2
         trunc.w.s f4, f16
         trunc.w.s f6, f8
         mfc1 a1, f4
         mfc1 a3, f6
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         trunc.w.s f18, f10
         mfc1 v0, f18
         
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // s4
         [sp + 0x18] = v0
         call 0x80044270          // "&R" // 0x80044270(0x220, 0xffff6408, 0xffff000b, -1)
         [sp + 0x1c] = v0
         s2 += 0xc

    loc_0x8020f9ac: // orphan
         if                       // likely
         s0 += 0xc

    loc_0x8020f9b4: // orphan
         ra = [sp + 0x84]
         ldc1 f20, 0x30, sp
         ldc1 f22, 0x38, sp
         ldc1 f24, 0x40, sp
         ldc1 f26, 0x48, sp
         ldc1 f28, 0x50, sp
         ldc1 f30, 0x58, sp
         s0 = [sp + 0x60]         // t9
         s1 = [sp + 0x64]
         s2 = [sp + 0x68]
         s3 = [sp + 0x6c]
         s4 = [sp + 0x70]
         s5 = [sp + 0x74]
         s6 = [sp + 0x78]
         s7 = [sp + 0x7c]
         fp = [sp + 0x80]
         ret
         sp += 0xd0

    loc_0x8020fa14: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x8020fad8: // orphan
         
         v1 = 0 + 1               // lo
         ret                      // ra
         v0 = v1                  // lo

    loc_0x8020fc10: // orphan
         // CODE XREF from fcn.801f7134 @ +0x88
         beql t6, 0, 0x8020fc20   // unlikely
         v0 = [sp + 0x48]

    loc_0x8020fc18: // orphan
         halfword [s1 + 0] = 0
         v0 = [sp + 0x48]

    loc_0x8020fc20: // orphan
         v1 = halfword [s1 + 0]
         t7 = , unsigned  halfword [v0 + 0]
         if                       // likely
         t8 = , signed  t7 >> 1

    loc_0x8020fc30: // orphan
         at = t7 + 1              // lo

    loc_0x8020fc34: // orphan
         t8 = , signed  at >> 1

    loc_0x8020fc38: // orphan
         t9 = t8 + s0
         halfword [s1 + 0x1c] = t9
         t0 = , unsigned  halfword [v0 + 2]
         if                       // likely
         t1 = , signed  t0 >> 1

    loc_0x8020fc4c: // orphan
         at = t0 + 1
         t1 = , signed  at >> 1

    loc_0x8020fc54: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71c0
         t2 = t1 + s2
         halfword [s1 + 0x1e] = t2
         t3 = , unsigned  halfword [v0 + 0]
         halfword [s1 + 0x22] = s2
         if                       // likely
         t4 = , signed  t3 >> 1

    loc_0x8020fc68: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71c0
         t2 = t1 + s2
         halfword [s1 + 0x1e] = t2
         t3 = , unsigned  halfword [v0 + 0]
         halfword [s1 + 0x22] = s2
         if                       // likely
         t4 = , signed  t3 >> 1

    loc_0x8020fc6c: // orphan
         at = t3 + 1              // s4
         t4 = , signed  at >> 1

    loc_0x8020fc74: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71f0
         t5 = t4 + s0
         if                       // unlikely
         halfword [s1 + 0x20] = t5

    loc_0x8020fc80: // orphan
         at = 0 + 1               // lo
         beql v1, at, 0x8020fca4  // unlikely
         t6 = , unsigned  halfword [s1 + 2]

    loc_0x8020fc8c: // orphan
         s4 = 0 + 2
         if                       // unlikely
         a2 = 0x8221 << 16

    loc_0x8020fc98: // orphan
         goto 0x8020ff4c
         ra = [sp + 0x2c]

    loc_0x8020fc9c: // orphan
         goto 0x8020ff4c
         ra = [sp + 0x2c]

    loc_0x8020fca4: // orphan
         a0 = 0x8221 << 16
         a0 = [a0 - 0x2818]
         t7 = t6 + 1
         t8 = t7 & 0xffff
         div 0, t8, a0
         // CODE XREF from fcn.801f7134 @ 0x801f71f4
         v0 = hi
         t9 = v0 << 0x10
         at = 0x3f00 << 16
         divu 0, t9, a0
         mtc1 at, f14
         at = 0x3f80 << 16

    loc_0x8020fcd0: // orphan
         mtc1 at, f18
         t0 = lo
         // CODE XREF from fcn.801f7134 @ 0x801f71c4
         t1 = t0 - 0x4000
         t2 = t1 & 0xffff
         t3 = , signed  t2 >> 4
         t5 = 0x8008 << 16
         t5 += 0x7e50
         // CODE XREF from fcn.801f7134 @ +0x94
         t4 = t3 << 2
         halfword [s1 + 2] = t7
         v1 = t4 + t5
         mtc1 0, f16
         if                       // likely
         // CODE XREF from fcn.801f7134 @ 0x801f71cc
         

    loc_0x8020fd04: // orphan
         break 7

    loc_0x8020fd08: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020fd14: // orphan
         if                       // likely
         

    loc_0x8020fd1c: // orphan
         break 6

    loc_0x8020fd20: // orphan
         at = 0x3fc0 << 16

    loc_0x8020fd24: // orphan
         mtc1 at, f4
         at = 0x42fe << 16
         swc1 f4, 0x10, s1
         lwc1 f6
         mtc1 at, f4
         if                       // likely
         

    loc_0x8020fd40: // orphan
         break 7

    loc_0x8020fd44: // orphan
         add.s f8, f6, f18

    loc_0x8020fd48: // orphan
         at = 0xbf00 << 16
         mul.s f10, f8, f14
         
         mul.s f2, f10, f4
         c.lt.s f16, f2
         
         bc1f 0x8020fd70
         
         goto 0x8020fd78
         mov.s f0, f14

    loc_0x8020fd78: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020fd68
         add.s f6, f0, f2
         at = 0x4300 << 16
         trunc.w.s f8, f6
         mfc1 t7, f8
         mtc1 at, f8
         at = 0xbf00 << 16
         t8 = t7 + 0x80
         // CODE XREF from fcn.801f7134 @ 0x801f71d0
         halfword [s1 + 0xa] = t8
         lwc1 f10
         add.s f4, f10, f18
         mul.s f6, f4, f14
         
         // CODE XREF from fcn.801f7134 @ +0xa0
         mul.s f12, f6, f8
         c.lt.s f16, f12
         
         bc1f 0x8020fdc4
         
         goto 0x8020fdcc
         mov.s f0, f14

    loc_0x8020fdcc: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71d8
         // CODE XREF from fcn.8021edac @ 0x8020fdbc
         add.s f10, f0, f12
         trunc.w.s f4, f10
         mfc1 t0, f4
         

    loc_0x8020fddc: // orphan
         [sp + 0x34] = t0
         goto 0x8020ff48
         halfword [s1 + 6] = t0

    loc_0x8020fde8: // orphan
         a2 = [a2 - 0x2814]       // t9
         v0 = , unsigned  halfword [s1 + 2]
         s0 = 0
         s3 = 0 + 0xc
         at = , v0 < a2           // lo
         if                       // unlikely
         a1 = v0

    loc_0x8020fe04: // orphan
         t1 = v0 + 1
         v0 = t1 & 0xffff
         a1 = v0

    loc_0x8020fe10: // orphan
         halfword [s1 + 2] = t1

    loc_0x8020fe14: // orphan
         at = 0x4000 << 16
         mtc1 at, f6
         lwc1 f0, 0x14, s1
         mtc1 v0, f10
         a3 = 0 + 0xff            // s4
         sub.s f8, f6, f0
         if                       // likely
         // CODE XREF from fcn.801f7134 @ 0x801f71dc
         cvt.s.w f4, f10

    loc_0x8020fe34: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f4, f4, f6

    loc_0x8020fe44: // orphan
         v1 = halfword [s1 + 0xc]
         a0 = halfword [s1 + 8]
         mtc1 a2, f6
         t2 = a3 - v1
         // CODE XREF from fcn.801f7134 @ +0xac
         unsigned , hi
         t6 = a3 - a0
         mul.s f10, f8, f4
         cvt.s.w f8, f6
         t3 = lo
         
         
         div 0, t3, a2
         t4 = lo
         div.s f4, f10, f8
         t5 = v1 + t4
         unsigned , hi
         halfword [s1 + 0xa] = t5
         t7 = lo
         

    loc_0x8020fe90: // orphan
         
         div 0, t7, a2
         add.s f6, f0, f4
         t8 = lo
         t9 = a0 + t8
         t0 = t9
         swc1 f6, 0x10, s1
         if                       // likely
         

    loc_0x8020feb4: // orphan
         break 7

    loc_0x8020feb8: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71e4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020fec4: // orphan
         if                       // likely
         

    loc_0x8020fecc: // orphan
         break 6

    loc_0x8020fed0: // orphan
         [sp + 0x34] = t9
         if                       // likely
         

    loc_0x8020fedc: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f71e8
         break 7

    loc_0x8020fee0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020feec: // orphan
         if                       // likely
         

    loc_0x8020fef4: // orphan
         break 6

    loc_0x8020fef8: // orphan
         at = , s2 < -0x1f
         if                       // unlikely
         halfword [s1 + 6] = t9

    loc_0x8020ff04: // orphan
         s2 = 0 - 1

    loc_0x8020ff08: // orphan
         call fcn.82200694        // "PR" // fcn.82200694(-1, 0x442f71dcfe116408, 0x8)
         a0 = s1
         beql v0, s2, 0x8020ff38  // unlikely
         s0 += 1

    loc_0x8020ff18: // orphan
         unsigned , hi            // t3 // t3
         a1 = halfword [s1 + 0x1c]
         a2 = halfword [s1 + 0x1e]
         t1 = lo
         a0 = s1 + t1
         call fcn.822006cc        // fcn.822006cc(0x442f71dcfe117cbe, 0x103, 0xa, -1, -1)
         a0 += 0x24
         s0 += 1

    loc_0x8020ff38: // orphan
         if                       // likely
         

    loc_0x8020ff40: // orphan
         // CODE XREF from fcn.801f7134 @ +0xb8
         call fcn.822007d8
         a0 = s1

    loc_0x8020ff48: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020fde0
         ra = [sp + 0x2c]

    loc_0x8020ff4c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020fc98
         v0 = [sp + 0x34]         // t9
         s0 = [sp + 0x18]         // s4
         s1 = [sp + 0x1c]         // s4
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // s0
         ret                      // ra
         sp += 0x38

    loc_0x8020ff70: // orphan
         [sp + 0x44] = ra
         [sp + 0x78] = a0
         [sp + 0x7c] = a1
         // CODE XREF from fcn.801f5158 @ +0x888
         [sp + 0x40] = s0
         [sp + 0x80] = a2
         [sp + 0x84] = a3
         a1 = 0 + 1               // arg2 // lo
         call 0x8004c990          // 0x8004c990(-1, 0x1, 0x8, -1)
         a0 = 0 + 0x95
         at = 0x4480 << 16
         lwc1 f18, 0x80, sp
         mtc1 at, f4
         mtc1 0, f16
         s0 = v0                  // s4
         div.s f2, f4, f18
         at = 0xbf00 << 16
         c.lt.s f16, f2
         
         bc1fl 0x8020ffd4
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x8020ffdc
         add.s f6, f0, f2

    loc_0x8020ffdc: // orphan
         // CODE XREF from fcn.801f7134 @ +0xc4
         // CODE XREF from fcn.8021edac @ 0x8020ffc8
         a0 = sp + 0x60
         a1 = , unsigned  halfword [sp + 0x8a]
         trunc.w.s f8, f6
         mfc1 v0, f8
         
         [sp + 0x68] = v0
         call fcn.82200600
         [sp + 0x64] = v0
         mtc1 0, f16
         // XREFS: UNKNOWN 0x805b66f8  UNKNOWN 0x805bc448  UNKNOWN 0x82e7d384  
         // XREFS: UNKNOWN 0x82e8efb0  UNKNOWN 0x839eeb34  UNKNOWN 0x83c3ee44  
         // XREFS: UNKNOWN 0x840787e4  
         if                       // fcn.802101e4+0x28 // unlikely
         lwc1 f18, 0x80, sp

    loc_0x80210008: // orphan
         t7 = , unsigned  halfword [s0 + 0]
         at = 0x4f80 << 16
         // CODE XREF from fcn.801f7134 @ 0x801f71fc
         mtc1 t7, f10
         if                       // likely
         cvt.s.w f0, f10

    loc_0x8021001c: // orphan
         mtc1 at, f4
         
         add.s f0, f0, f4

    loc_0x80210028: // orphan
         add.s f6, f0, f0
         at = 0xbf00 << 16
         mul.s f12, f6, f18
         c.lt.s f16, f12
         
         bc1fl 0x80210058
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80210060
         add.s f8, f0, f12

    loc_0x80210060: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021004c
         t9 = , unsigned  halfword [s0 + 2]
         at = 0x4f80 << 16
         trunc.w.s f10, f8
         mtc1 t9, f4
         mfc1 t0, f10
         if                       // likely
         cvt.s.w f2, f4

    loc_0x8021007c: // orphan
         mtc1 at, f6
         
         add.s f2, f2, f6

    loc_0x80210088: // orphan
         add.s f8, f2, f2
         at = 0xbf00 << 16
         mul.s f14, f8, f18
         c.lt.s f16, f14
         
         bc1fl 0x802100b8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802100c0
         add.s f10, f0, f14

    loc_0x802100c0: // orphan
         // CODE XREF from fcn.8021edac @ 0x802100ac
         a2 = 0x800d << 16
         a2 += 0x510
         v0 = [a2 + 0]            // t9

    loc_0x802100cc: // orphan
         trunc.w.s f4, f10
         t5 = 0x8009 << 16
         t3 = v0 + 8
         [a2 + 0] = t3
         mfc1 t2, f4
         t5 += 0x4e38
         t4 = 0xde00 << 16
         [sp + 0x6c] = t2
         [v0 + 4] = t5
         [v0 + 0] = t4
         v0 = [a2 + 0]
         t7 = 0xfb00 << 16
         a0 = s0
         t6 = v0 + 8
         [a2 + 0] = t6
         [v0 + 0] = t7
         t3 = , unsigned  byte [sp + 0x61] // s4
         t9 = , unsigned  byte [sp + 0x60] // s4
         t7 = , unsigned  byte [sp + 0x62] // s4
         t2 = [sp + 0x84]         // t9
         t4 = t3 << 0x10
         t1 = t9 << 0x18
         t5 = t1 | t4
         t8 = t7 << 8
         t9 = t5 | t8
         t3 = t2 & 0xff           // s4
         t1 = t9 | t3
         [v0 + 4] = t1
         call 0x8004ca60          // 0x8004ca60(0x104, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x70] = t0
         t4 = , unsigned  halfword [s0 + 2]
         a1 = , unsigned  byte [s0 + 4]
         a2 = , unsigned  byte [s0 + 5]
         a3 = , unsigned  halfword [s0 + 0]
         t6 = 0 + 1               // lo
         t7 = 0 + 1               // lo
         t5 = 0 + 1               // lo
         t8 = 0 + 5
         t2 = 0 + 5
         [sp + 0x28] = t2
         [sp + 0x24] = t8
         [sp + 0x20] = t5
         [sp + 0x1c] = t7

    loc_0x80210178: // orphan
         [sp + 0x14] = t6
         [sp + 0x30] = 0
         [sp + 0x2c] = 0
         [sp + 0x18] = 0
         a0 = v0                  // s4
         // CODE XREF from fcn.8021edac @ 0x8020e6a8
         call 0x800459ac          // 0x800459ac(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t4
         t0 = [sp + 0x70]
         v0 = [sp + 0x6c]         // s4
         t9 = [sp + 0x78]

    loc_0x802101a0: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6ac
         if                       // likely
         t3 = , signed  t0 >> 1

    loc_0x802101a4: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6ac
         if                       // likely
         t3 = , signed  t0 >> 1

    loc_0x802101a8: // orphan
         at = t0 + 1
         t3 = , signed  at >> 1

    loc_0x802101b0: // orphan
         t1 = [sp + 0x7c]
         t6 = [sp + 0x68]         // s4
         t7 = [sp + 0x64]         // s4
         a0 = t9 - t3
         a0 <<= 0x10
         a2 = t0 << 0x10

    loc_0x8021023c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6b8
         t7 = halfword [a0 + 0x18]
         t8 = halfword [a0 + 0x1c]

    loc_0x80210298: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6c4
         v0 = 0x8221 << 16
         v0 -= 0x1b38
         t6 = 0 + 0x280
         // CODE XREF from fcn.8021edac @ 0x8020e6c0
         t7 = 0 + 0x1e0
         halfword [v0 + 0] = 0
         halfword [v0 + 2] = 0
         halfword [v0 + 4] = t6
         ret                      // ra
         halfword [v0 + 6] = t7

    loc_0x802102c4: // orphan
         halfword [v0 + 0] = a0
         halfword [v0 + 2] = a1
         halfword [v0 + 4] = a2
         ret                      // ra
         halfword [v0 + 6] = a3

    loc_0x80210330: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6cc
         v1 = 0 + 2
         if                       // unlikely
         // CODE XREF from fcn.801f7134 @ 0x801f7214
         

    loc_0x8021033c: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x80210344: // orphan
         ret                      // ra
         v0 = v1

    loc_0x8021037c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6d8
         [sp + 0x20] = s3
         [sp + 0x30] = s7
         [sp + 0x2c] = s6
         [sp + 0x28] = s5
         [sp + 0x24] = s4
         // CODE XREF from fcn.8020e300 @ +0x3dc
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         [sp + 0x14] = s0
         call 0x800060e8          // 0x800060e8(-1, 0x442f71dcfe116408, 0x8, -1)
         s3 = 0
         // CODE XREF from fcn.8021edac @ 0x8020e6e0
         s0 = 0x8221 << 16
         s2 = 0x8221 << 16
         s4 = v0 & 0xff
         s2 -= 0x1ce8
         s0 -= 0x1cf0

    loc_0x802103b8: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6e4
         s1 = 0
         s7 = 0 + 4
         s6 = sp + 0x52
         s5 = sp + 0x50

    loc_0x802103c8: // orphan
         a0 = s1
         call 0x8005d9e0          // 0x8005d9e0(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a1 = s5                  // t9
         call 0x8005d8cc          // 0x8005d8cc(0x442f71dcfe117dbd, -1, 0x8, -1)
         a0 = s1
         byte [s0 + 0] = v0
         call 0x8005d92c          // 0x8005d92c(0x442f71dcfe117dbd, -1, 0x8, -1)
         a0 = s1
         byte [s0 + 1] = v0
         // CODE XREF from fcn.8020e300 @ +0x3e8
         call 0x8005d948          // 0x8005d948(0x442f71dcfe117dbd, -1, 0x8, -1)
         a0 = s1
         byte [s0 + 2] = v0
         call 0x8005ddd4          // 0x8005ddd4(0x442f71dcfe117dbd, -1, 0x8, -1)
         a0 = s1
         t6 = 0 + 1               // lo
         t7 = t6 << s1
         t8 = s4 & t7
         t9 = , unsigned  , 0 < t8
         byte [s0 + 3] = v0
         byte [s0 + 4] = t9
         t0 = , unsigned  halfword [sp + 0x50]
         a0 = s2
         a1 = s6
         call 0x8000b580          // 0x8000b580(-1, 0x442f71dcfe111002, 0x8, -1)
         halfword [s0 + 6] = t0
         call fcn.82201518
         a0 = s0
         // CODE XREF from fcn.8021edac @ 0x8020e6f0
         byte [s0 + 5] = v0
         call fcn.8220158c        // fcn.8220158c(0x104)
         a0 = s0

    loc_0x80210440: // orphan
         if                       // unlikely
         s1 += 1

    loc_0x80210448: // orphan
         s3 += 1

    loc_0x8021044c: // orphan
         s0 += 0x14
         if                       // likely
         s2 += 0x14

    loc_0x80210458: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6f4
         ra = [sp + 0x34]         // t9
         v0 = s3                  // t9
         s3 = [sp + 0x20]         // t9
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         // CODE XREF from fcn.8020e300 @ +0x3f8
         s2 = [sp + 0x1c]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // t9
         s6 = [sp + 0x2c]
         s7 = [sp + 0x30]         // t9

    loc_0x80210480: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e6fc
         ret                      // ra
         sp += 0x68

    loc_0x802104dc: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e708
         halfword [v0 + 0] = 0
         v0 = 0x8221 << 16
         v0 -= 0x1c4c
         halfword [v0 + 0] = v1
         halfword [v0 + 2] = t6
         // CODE XREF from fcn.8020e300 @ +0x40c
         halfword [v0 + 4] = 0
         halfword [v0 + 6] = 0
         swc1 f0, 8, v0
         if                       // unlikely
         swc1 f0, 0xc, v0

    loc_0x80210554: // orphan
         t8 = 0 | 0xc000
         halfword [v0 + 2] = t8
         halfword [v0 + 4] = 0
         halfword [v0 + 6] = 0
         swc1 f0, 8, v0
         // CODE XREF from fcn.8021edac @ 0x8020e714
         ret                      // ra
         swc1 f0, 0xc, v0

    loc_0x802105b8: // orphan
         v0 <<= 0x10
         v1 <<= 0x10
         // CODE XREF from fcn.801f7004 @ 0x8020e72c
         v0 = , signed  v0 >> 0x10 // s4
         v1 = , signed  v1 >> 0x10
         t5 = t4 + v0
         add.s f18, f8, f16
         halfword [a0 + 0x20] = t5 // arg1

    loc_0x802105d4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e730
         trunc.w.s f4, f18

    loc_0x802105d8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e724
         mfc1 t3, f4
         
         halfword [a0 + 0x1e] = t3 // arg1
         t6 = halfword [a0 + 0x1e] // t3
         t7 = t6 + v1
         // CODE XREF from fcn.8020e300 @ +0x428
         ret                      // ra
         halfword [a0 + 0x22] = t7 // arg1

    loc_0x802106f0: // orphan
         swc1 f10, 8, a0          // arg1
         t2 = [v1 + 0]
         lwc1 f8, -0x2880, at
         mtc1 t2, f16
         
         cvt.s.w f6, f16
         mul.s f10, f6, f8

    loc_0x802107e8: // orphan
         bc1f 0x80210800

    loc_0x802107ec: // orphan
         add.s f18, f4, f6

    loc_0x802107f0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e74c
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x8021080c
         add.s f10, f0, f16

    loc_0x8021080c: // orphan
         // CODE XREF from fcn.8021edac @ 0x802107f8
         mtc1 0, f6

    loc_0x80210810: // orphan
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
         // CODE XREF from fcn.8021edac @ 0x80210830
         t8 = halfword [a0 + 4]
         trunc.w.s f10, f8
         mfc1 t7, f10
         
         halfword [a0 + 0x22] = t7 // arg1
         t9 = [v1 + 0]

    loc_0x8021085c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e758
         if                       // likely
         t0 = , signed  t9 >> 1

    loc_0x80210864: // orphan
         at = t9 + 1
         t0 = , signed  at >> 1

    loc_0x8021086c: // orphan
         at = , t8 < t0           // lo
         // CODE XREF from fcn.8020e300 @ +0x45c
         if                       // likely
         

    loc_0x80210878: // orphan
         ret                      // ra
         halfword [a0 + 6] = t1   // arg1

    loc_0x80210898: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e764
         ret                      // ra
         

    loc_0x802108d8: // orphan
         mul.s f8, f4, f6
         t7 = halfword [a0 + 0x10]
         t8 = halfword [a0 + 0x16]
         v0 = t6 - t7
         v1 = t8 - a1
         cvt.s.w f16, f10
         // CODE XREF from fcn.801f7004 @ 0x8020e76c
         t6 = halfword [a0 + 0x1c]
         v0 <<= 0x10
         v1 <<= 0x10
         v0 = , signed  v0 >> 0x10
         v1 = , signed  v1 >> 0x10
         add.s f18, f8, f16
         t7 = t6 + v0
         halfword [a0 + 0x20] = t7
         trunc.w.s f4, f18

    loc_0x80210914: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e770
         mfc1 t5, f4
         
         halfword [a0 + 0x1e] = t5 // arg1
         t8 = halfword [a0 + 0x1e]
         t9 = t8 + v1
         ret                      // ra
         halfword [a0 + 0x22] = t9 // arg1

    loc_0x80210964: // orphan
         if                       // unlikely
         

    loc_0x8021096c: // orphan
         if                       // unlikely
         

    loc_0x80210974: // orphan
         if                       // unlikely
         

    loc_0x8021097c: // orphan
         goto 0x802109b0
         s0 += 0x3c

    loc_0x80210984: // orphan
         call fcn.822017b0
         a0 = s0
         goto 0x802109b0
         s0 += 0x3c

    loc_0x80210994: // orphan
         call fcn.82201960
         a0 = s0
         goto 0x802109b0
         s0 += 0x3c

    loc_0x802109a4: // orphan
         call 0x82201ae0          // 0x82201ae0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 0x3c

    loc_0x802109b0: // orphan
         // CODE XREFS from fcn.8021edac @ 0x8021097c, 0x8021098c, 0x8021099c
         bnel s0, s3, 0x80210964  // likely
         v0 = halfword [s0 + 0]

    loc_0x802109b8: // orphan
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]         // t9
         ret                      // s4
         sp += 0x28

    loc_0x80210a74: // orphan
         halfword [a0 + 0xa] = t0
         t4 = halfword [a0 + 0xa]
         swl t2, 0xc, a0
         halfword [a0 + 0x14] = t5
         halfword [a0 + 0x16] = t6
         halfword [a0 + 0x18] = t7
         halfword [a0 + 0x1a] = t8
         swr t2, 0xf, a0
         halfword [a0 + 0x10] = t3
         halfword [a0 + 0x12] = t4
         t9 = halfword [a1 + 0x28]
         halfword [a0 + 0x1c] = t9
         t0 = halfword [a1 + 0x2a]

    loc_0x80210aa8: // orphan
         t1 = halfword [a0 + 0x1c]
         halfword [a0 + 0x24] = 0
         halfword [a0 + 0x1e] = t0
         t2 = halfword [a0 + 0x1e]
         halfword [a0 + 0x26] = 0
         halfword [a0 + 0x20] = t1
         ret                      // ra
         halfword [a0 + 0x22] = t2

    loc_0x80210b20: // orphan
         a1 = t9 - t1             // arg2

    loc_0x80210b24: // orphan
         t2 = a2 + 1              // arg3
         halfword [a0 + 2] = t2   // arg1
         a2 = halfword [a0 + 2]

    loc_0x80210b30: // orphan
         at = , a2 < 8            // arg3
         if                       // fcn.80210c30 // fcn.80210c30 // likely
         t1 = 0 + 3

    loc_0x80210b3c: // orphan
         t0 = halfword [a0 + 0xc]
         // CODE XREF from fcn.8020e300 @ +0x48c
         t3 = halfword [a0 + 0x14]
         v1 = halfword [a0 + 0x10] // t3
         t8 = halfword [a0 + 0x18]
         t4 = t3 - t0
         unsigned , hi
         // CODE XREF from fcn.801f7004 @ 0x8020e790
         a3 = a2
         t9 = t8 - v1
         t5 = lo
         if                       // likely
         t6 = , signed  t5 >> 3

    loc_0x80210b64: // orphan
         t6 = , signed  t5 >> 3   // t9

    loc_0x80210b68: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e794
         at = t5 + 7
         t6 = , signed  at >> 3

    loc_0x80210b70: // orphan
         unsigned , hi            // lo // lo // t9 // s2
         t7 = t0 + t6
         halfword [a0 + 4] = t7   // arg1
         t1 = lo
         if                       // likely
         t2 = , signed  t1 >> 3

    loc_0x80210b88: // orphan
         // CODE XREF from fcn.8020e300 @ +0x4a4
         at = t1 + 7
         t2 = , signed  at >> 3

    loc_0x80210b90: // orphan
         t3 = v1 + t2
         halfword [a0 + 8] = t3   // arg1
         t4 = halfword [a0 + 8]
         t5 = t4 - v0             // v1
         halfword [a0 + 0x1c] = t5 // arg1
         t6 = halfword [a0 + 0x1c] // v1
         bgezl t6, 0x80210bb8     // likely
         v1 = halfword [a0 + 0xe]

    loc_0x80210bb0: // orphan
         halfword [a0 + 0x1c] = 0 // arg1
         v1 = halfword [a0 + 0xe]

    loc_0x80210bb8: // orphan
         t7 = halfword [a0 + 0x16]
         // CODE XREF from fcn.8020e300 @ +0x498
         v0 = halfword [a0 + 0x12]
         t3 = halfword [a0 + 0x1a]
         t8 = t7 - v1
         unsigned , hi            // t9 // s2
         t4 = t3 - v0
         t9 = lo
         if                       // unlikely
         t1 = , signed  t9 >> 3

    loc_0x80210c8c: // orphan
         if                       // unlikely
         t4 = v1 << 2

    loc_0x80210c94: // orphan
         goto 0x80210d6c
         ra = [sp + 0x14]         // s0

    loc_0x80210d08: // orphan
         t5 = 0x8221 << 16
         t5 -= 0x1c98
         v0 = t4 + t5
         t6 = 0x8221 << 16
         t6 = halfword [t6 - 0x2878]
         t7 = halfword [v0 + 2]
         at = , t6 < t7           // lo
         beql at, 0, 0x80210d60   // unlikely
         t6 = , unsigned  halfword [a2 + 2]

    loc_0x80211130: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         v1 = [s0 + 0]            // s4
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
         s1 = [sp + 0x34]         // t9
         s0 = [sp + 0x30]         // t9
         ret
         sp += 0x90

    loc_0x802112c0: // orphan
         ra = [sp + 0x1c]         // t9
         t9 = , unsigned  halfword [s0 + 2]

    loc_0x802112c8: // orphan
         t0 = t9 & 0xfffd
         goto 0x802112e0          // fcn.8020a180+0x7160
         halfword [s0 + 2] = t0

    loc_0x80211598: // orphan
         goto 0x802115c4
         swr t4, 0x23, v1

    loc_0x802115c4: // orphan
         // CODE XREF from fcn.8021edac @ 0x80211598
         halfword [v1 + 0x38] = 0
         goto 0x80211830
         halfword [v1 + 0x3a] = 0

    loc_0x80211764: // orphan
         if                       // unlikely
         t6 = 0xde00 << 16

    loc_0x8021176c: // orphan
         t3 = , unsigned  halfword [s0 + 2]
         t7 = 0x8221 << 16
         t7 -= 0x27f8
         t4 = t3 & 0xfffd
         halfword [s0 + 2] = t4
         v0 = [a1 + 0]            // t9
         t9 = a2 & 0xff
         at = 0xfa00 << 16
         t5 = v0 + 8
         [a1 + 0] = t5

    loc_0x80211794: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e850
         [v0 + 4] = t7
         [v0 + 0] = t6
         v0 = [a1 + 0]
         t1 = t9 | at
         t2 = 0 + 0xff            // s4

    loc_0x802117a8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e854
         t8 = v0 + 8
         [a1 + 0] = t8
         [v0 + 4] = t2
         [v0 + 0] = t1
         t3 = [sp + 0x28]         // t9
         t4 = 0x8221 << 16
         t4 -= 0x1808
         at = , unsigned  , t3 < t4
         if                       // unlikely
         t0 = 0

    loc_0x802117d0: // orphan
         t0 = 0 + 1               // lo

    loc_0x802117d4: // orphan
         a0 = halfword [s0 + 8]
         a1 = halfword [s0 + 0xa]
         // CODE XREF from fcn.8020a180 @ 0x8020e858
         [sp + 0x14] = 0
         [sp + 0x10] = t0
         a2 = [sp + 0x44]         // ra
         call 0x8004d150          // 0x8004d150(0xffff, 0xffff, 0x81140210, -1)
         a3 = 0

    loc_0x802117f0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e85c
         goto 0x80211834
         ra = [sp + 0x24]         // s4

    loc_0x80211830: // orphan
         // CODE XREF from fcn.8021edac @ 0x802115c8
         ra = [sp + 0x24]         // s4

    loc_0x80211834: // orphan
         // CODE XREF from fcn.801f6c00 @ 0x80211528
         // CODE XREF from fcn.8021edac @ 0x802117f0
         s0 = [sp + 0x20]         // t9
         sp += 0x68
         ret                      // ra
         v0 = 0

    loc_0x802118b0: // orphan
         v1 = [sp + 0x30]         // t9
         t0 = halfword [v0 + 0x30]
         t1 = halfword [a1 + 8]
         t4 = halfword [v0 + 0x32]
         t9 = v1 << 2
         // CODE XREF from fcn.8020a180 @ 0x8020e870
         t2 = t0 + t1
         t3 = t2 + 9
         halfword [v0 + 0x30] = t3
         t5 = halfword [a1 + 0xa]
         t0 = 0x8221 << 16

    loc_0x802118d8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e874
         t0 += t9
         t6 = t4 + t5
         t7 = t6 + 0xe
         halfword [v0 + 0x32] = t7
         t8 = 0x8221 << 16
         t8 = halfword [t8 - 0x2878]
         t0 = halfword [t0 - 0x1c96]
         at = , t8 < t0           // lo
         beql at, 0, 0x80211914   // unlikely
         t3 = , unsigned  halfword [a1 + 2]

    loc_0x80211900: // orphan
         t1 = , unsigned  halfword [a1 + 2]
         t2 = t1 | 2
         goto 0x8021192c          // fcn.8020a180+0x77ac
         halfword [a1 + 2] = t2

    loc_0x80211914: // orphan
         t4 = t3 & 0xfffd
         goto 0x8021192c          // fcn.8020a180+0x77ac
         halfword [a1 + 2] = t4

    loc_0x802119dc: // orphan
         call fcn.82201c70
         a0 = t6 + t7
         goto 0x80211bbc
         ra = [sp + 0x14]

    loc_0x80211b38: // orphan
         break 6

    loc_0x80211bbc: // orphan
         // CODE XREF from fcn.8021edac @ 0x802119e4
         sp += 0x40
         v0 = 0
         ret                      // ra
         

    loc_0x80211c84: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80211c90: // orphan
         if                       // likely
         

    loc_0x80211c98: // orphan
         break 6

    loc_0x80211c9c: // orphan
         t5 = t4 - t0
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, a0            // arg1
         t7 = lo
         t8 = t7 + t0
         byte [a1 + 0x29] = t8    // arg2
         // CODE XREF from fcn.801f7004 @ 0x8020e8cc
         t9 = , unsigned  byte [a3 + 2] // arg4 // s4
         t1 = , unsigned  byte [a2 + 2] // arg3 // lo
         if                       // likely
         

    loc_0x80211cd0: // orphan
         break 7

    loc_0x80211cd4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8d0
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80211ce0: // orphan
         if                       // likely
         

    loc_0x80211ce8: // orphan
         // CODE XREF from fcn.8020e300 @ +0x5d4
         break 6

    loc_0x80211cec: // orphan
         t3 = t9 - t1
         unsigned , hi            // t9 // s2
         t4 = lo
         
         
         div 0, t4, a0            // arg1
         t5 = lo
         // CODE XREF from fcn.801f7134 @ +0x190
         t6 = t5 + t1
         byte [a1 + 0x2a] = t6    // arg2
         lwl t8, 0x28, a1         // arg2
         lwr t8, 0x2b, a1         // arg2 // t9
         if                       // likely
         // CODE XREF from fcn.801f7134 @ 0x801f72c8
         

    loc_0x80211d20: // orphan
         break 7

    loc_0x80211d24: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80211d30: // orphan
         if                       // likely
         

    loc_0x80211d38: // orphan
         break 6

    loc_0x80211d3c: // orphan
         swl t8, 0x2c, a1         // arg2
         goto 0x80211d4c
         swr t8, 0x2f, a1         // arg2

    loc_0x80211d4c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80211d40
         t9 = 0x8221 << 16
         t9 = , unsigned  halfword [t9 - 0x1b40]
         t3 = t9 & t2
         beql t3, 0, 0x80211d78   // unlikely
         t6 = , unsigned  halfword [a1 + 2]

    loc_0x80211d60: // orphan
         t4 = , unsigned  halfword [a1 + 2]
         v0 = 0
         t5 = t4 | 2              // t3
         ret                      // ra
         halfword [a1 + 2] = t5   // arg2

    loc_0x80211d78: // orphan
         t7 = t6 & 0xfffd
         halfword [a1 + 2] = t7   // arg2
         ret                      // ra
         v0 = 0

    loc_0x80211da0: // orphan
         at = 0 + 1               // lo
         if                       // likely
         t6 = t0 << 2

    loc_0x80211dac: // orphan
         t6 += t0

    loc_0x80211db0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8dc
         t7 = 0x8221 << 16
         t7 -= 0x1cf0
         t6 <<= 2
         v1 = t6 + t7
         // CODE XREF from fcn.801f7134 @ 0x801f72cc
         v0 = , unsigned  byte [v1 + 5] // s4
         at = 0 + 3
         if                       // unlikely
         

    loc_0x80211dd0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801f7134 @ +0x19c
         at = 0 + 4

    loc_0x80211dd8: // orphan
         if                       // unlikely
         a0 = 0 + 0x17            // arg1

    loc_0x80211de0: // orphan
         at = 0 + 5
         // CODE XREF from fcn.8020e300 @ +0x5e0
         beql v0, at, 0x80211e00  // unlikely
         a1 = 0 + 0x40            // arg2

    loc_0x80211dec: // orphan
         goto 0x80211e10
         

    loc_0x80211df4: // orphan
         goto 0x80211e10
         // CODE XREF from fcn.801f7134 @ 0x801f72d4
         a2 = v1 + 8              // arg3

    loc_0x80211dfc: // orphan
         a1 = 0 + 0x40            // arg2

    loc_0x80211e00: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         a3 = [sp + 0x1c]         // t9
         a2 = v0                  // s4

    loc_0x80211e10: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80211dec, 0x80211df4
         if                       // unlikely
         a0 = 0 + 0x15            // arg1

    loc_0x80211e18: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8e4
         a1 = a2
         // CODE XREF from fcn.801f7134 @ 0x801f72d8
         call 0x8004c54c          // 0x8004c54c(-1, 0x8, 0x8, -1)
         [sp + 0x1c] = a3
         t8 = 0x8221 << 16
         t8 = , unsigned  halfword [t8 - 0x1b40]
         a3 = [sp + 0x1c]         // t9
         t9 = t8 & 8              // a2
         beql t9, 0, 0x80211e50   // unlikely
         t3 = , unsigned  halfword [a3 + 2]

    loc_0x80211e3c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8e8
         t1 = , unsigned  halfword [a3 + 2]
         t2 = t1 | 2
         goto 0x80211e68
         halfword [a3 + 2] = t2

    loc_0x80211e50: // orphan
         // CODE XREF from fcn.801f7134 @ +0x1a8
         // CODE XREF from fcn.8020e300 @ +0x5ec
         t4 = t3 & 0xfffd
         goto 0x80211e68
         halfword [a3 + 2] = t4

    loc_0x80211e5c: // orphan
         t5 = , unsigned  halfword [a3 + 2]
         t6 = t5 & 0xfffd
         halfword [a3 + 2] = t6   // arg4

    loc_0x80211e68: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80211e44, 0x80211e54
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0
         ret
         

    loc_0x80211ebc: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 -= 0x14a0

    loc_0x80211ec8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8f4
         if                       // unlikely
         at = 0 + 4

    loc_0x80211ed0: // orphan
         if                       // unlikely
         a0 = 0 + 0x17            // arg1

    loc_0x80211ed8: // orphan
         at = 0 + 5
         beql v0, at, 0x80211f14  // unlikely
         a1 = 0 + 0x41            // arg2

    loc_0x80211ee4: // orphan
         goto 0x80211f24
         

    loc_0x80211eec: // orphan
         a1 = 0x8221 << 16
         a2 = , unsigned  halfword [v1 + 6]
         [sp + 0x1c] = a3
         call 0x8007be30          // 0x8007be30(-1, 0x82210000, 0xffff, -1)
         a1 -= 0x1f40
         a2 = 0x8221 << 16
         a3 = [sp + 0x1c]         // t9
         goto 0x80211f24
         a2 -= 0x14a0

    loc_0x80211f10: // orphan
         a1 = 0 + 0x41            // arg2

    loc_0x80211f14: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         a3 = [sp + 0x1c]         // t9
         a2 = v0                  // s4

    loc_0x80211f24: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80211ee4, 0x80211f08
         if                       // unlikely
         a0 = 0 + 0x16

    loc_0x80211f2c: // orphan
         a1 = a2
         call 0x8004c54c          // 0x8004c54c(-1, 0x8, 0x8, -1)
         [sp + 0x1c] = a3
         t8 = 0x8221 << 16
         t8 = , unsigned  halfword [t8 - 0x1b40]
         a3 = [sp + 0x1c]         // t9
         t9 = t8 & 8              // a2
         beql t9, 0, 0x80211f64   // unlikely
         t3 = , unsigned  halfword [a3 + 2]

    loc_0x80211f50: // orphan
         t1 = , unsigned  halfword [a3 + 2]
         t2 = t1 | 2              // t3
         goto 0x80211f7c
         halfword [a3 + 2] = t2

    loc_0x80211f64: // orphan
         t4 = t3 & 0xfffd
         goto 0x80211f7c
         halfword [a3 + 2] = t4

    loc_0x80211f70: // orphan
         t5 = , unsigned  halfword [a3 + 2]
         t6 = t5 & 0xfffd
         halfword [a3 + 2] = t6

    loc_0x80211f7c: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80211f58, 0x80211f68
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0
         ret
         

    loc_0x80211fd8: // orphan
         v1 = 0
         a2 = 0 + 1               // lo
         beql a0, a2, 0x80212044  // unlikely
         t6 = v0 << 2

    loc_0x80211fe8: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80212044: // orphan
         t6 += v0
         t6 <<= 2
         a0 = 0x8221 << 16
         a0 += t6
         a0 = , unsigned  byte [a0 - 0x1cef]
         if                       // unlikely
         at = 0 + 2

    loc_0x80212060: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x80212068: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x80212070: // orphan
         if                       // likely
         

    loc_0x80212078: // orphan
         v1 = 0 + 1               // lo

    loc_0x8021207c: // orphan
         if                       // unlikely
         t7 = v0 << 4

    loc_0x80212084: // orphan
         t7 -= v0
         t8 = 0x8221 << 16
         t8 -= 0x1c88
         t7 <<= 2
         v1 = t7 + t8
         t9 = 0x8221 << 16
         t9 = halfword [t9 - 0x2878]
         t0 = halfword [v1 + 0x36]
         t3 = v0 << 2
         t4 = 0x8221 << 16
         at = , t9 < t0
         beql at, 0, 0x80212108   // likely
         t5 = , unsigned  halfword [a1 + 2]

    loc_0x802120b8: // orphan
         t1 = , unsigned  halfword [a1 + 2]
         t4 -= 0x1490
         // CODE XREF from fcn.801f7004 @ 0x8020e8fc
         a0 = t3 + t4
         t2 = t1 | 2
         halfword [a1 + 2] = t2
         t6 = halfword [v1 + 0x34]
         t5 = halfword [a0 + 0]
         t8 = halfword [v1 + 0x1c]
         v0 = 0
         t7 = t5 + t6
         t9 = t7 + t8
         // CODE XREF from fcn.801f7004 @ 0x8020e900
         halfword [a1 + 8] = t9
         t1 = halfword [v1 + 0x36]
         t0 = halfword [a0 + 2]
         t3 = halfword [v1 + 0x1e]
         t2 = t0 + t1
         t4 = t2 + t3
         // CODE XREF from fcn.8020e300 @ +0x608
         ret                      // ra
         halfword [a1 + 0xa] = t4

    loc_0x80212108: // orphan
         // CODE XREF from fcn.8020e300 @ +0x604
         v0 = 0
         t6 = t5 & 0xfffd
         ret                      // ra
         halfword [a1 + 2] = t6

    loc_0x80212118: // orphan
         t7 = , unsigned  halfword [a1 + 2]
         t8 = t7 & 0xfffd
         // CODE XREF from fcn.8020e300 @ +0x60c
         halfword [a1 + 2] = t8
         ret                      // ra
         v0 = 0

    loc_0x80212184: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e920
         at = 0x8221 << 16
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         call fcn.822015b4
         // CODE XREF from fcn.8020a180 @ 0x8020e924
         [at - 0x1ca0] = a0
         call 0x82200cb4          // 0x82200cb4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x48] = v0
         s2 = 0x8221 << 16
         s1 = 0x8221 << 16
         s0 = 0x8221 << 16
         s0 -= 0x1ca0
         s1 -= 0x1cf0
         s2 -= 0x1b20

    loc_0x802121bc: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e928
         a0 = s2
         call fcn.82200d28        // "&1"
         a1 = , unsigned  byte [s1 + 1]
         s1 += 0x14
         at = , unsigned  , s1 < s0
         if                       // unlikely
         // CODE XREF from fcn.8021edac @ 0x8020e930
         s2 += 0x18c

    loc_0x802121d8: // orphan
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802121e8: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e934
         a1 = 0
         t6 = 0x8221 << 16
         t6 = [t6 - 0x1ca0]       // t9
         s0 = v0                  // s4
         a0 = v0                  // s4
         // CODE XREF from fcn.801f7004 @ 0x8020e938
         call 0x8004eb58          // 0x8004eb58(0xff, 0x0, 0x8, -1)
         a1 = [t6 + 0xc]
         s1 = 0x8221 << 16
         s1 -= 0x1c9c
         [s1 + 0] = v0

    loc_0x80212210: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e93c
         call 0x80003120          // 0x80003120(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         t8 = 0x8221 << 16
         t8 = [t8 - 0x1ca0]       // t9
         t7 = 0 - 1               // s2
         a0 = 0x8221 << 16
         a0 -= 0x1b98
         a1 = 0 + 0x28
         call 0x80075630          // 0x80075630(0x8220e468, 0x28, 0x8, -1)
         [t8 + 0] = t7
         a0 = 0x8221 << 16
         a0 -= 0x1b70
         call 0x80075630          // 0x80075630(0x8220e490, 0x28, 0x8, -1)
         a1 = 0 + 0x28
         call fcn.822016c8        // fcn.822016c8(0x8220e490, 0x28)
         a0 = [sp + 0x48]         // s4
         v0 = 0x8221 << 16
         v0 -= 0x1b40
         t1 = 0 | 1               // lo
         halfword [v0 + 0] = 0
         t3 = t1 | 2

    loc_0x80212264: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e940
         halfword [v0 + 0] = t1
         halfword [v0 + 0] = t3
         t4 = t3 | 8
         a1 = 0x4e36 << 16
         halfword [v0 + 0] = t4
         a1 |= 0x344c
         call 0x8005049c          // 0x8005049c(-1, 0x4e36344c, 0x8, -1)
         a0 = [s1 + 0]
         s0 = 0x8220 << 16
         // CODE XREF from fcn.801f7004 @ 0x8020e944
         s0 += 0x1eb4
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82201eb4, 0x8, -1)
         a2 = 0
         a1 = 0x4e36 << 16
         a1 |= 0x3452
         call 0x8005049c          // 0x8005049c(0xff, 0x4e363452, 0x0, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82201eb4, 0x0, -1)
         a2 = 0 + 1               // lo
         a1 = 0x4142 << 16
         a1 |= 0x544e
         call 0x8005049c          // 0x8005049c(0xff, 0x4142544e, 0x1, -1)
         a0 = [s1 + 0]
         a1 = 0x8220 << 16
         s0 = v0                  // s4
         a1 += 0x2b80
         a0 = v0                  // s4

    loc_0x802122dc: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f72f8
         // CODE XREF from fcn.8021edac @ 0x8020e948
         call 0x8004e308          // 0x8004e308(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         a1 = 0x8221 << 16
         a1 -= 0x14b0
         call 0x8005053c          // 0x8005053c(-1, 0x8220eb50, 0x0, -1)
         a0 = s0
         a1 = 0x8221 << 16
         a1 -= 0x2800
         call 0x80050578          // 0x80050578(0x104, 0x8220d800, 0x0, -1)

    loc_0x80212300: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f72fc
         // CODE XREF from fcn.8021edac @ 0x8020e94c
         a0 = s0

    loc_0x80212304: // orphan
         t5 = 0x8220 << 16
         t6 = 0x8220 << 16
         t7 = 0x8220 << 16
         t7 += 0x2534
         // CODE XREF from fcn.801f7004 @ 0x8020e950
         t6 += 0x23d8
         t5 += 0x2a84
         s2 = 0x8220 << 16
         s2 += 0x2718             // "//"
         [sp + 0x38] = t5
         [sp + 0x30] = t6
         [sp + 0x2c] = t7
         s0 = 0
         // CODE XREF from fcn.801f7134 @ +0x1cc
         at = 0x504c << 16

    loc_0x80212338: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e954
         at |= 0x4731
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(-1, 0x4835, 0x8, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4

    loc_0x8021234c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e958
         a1 = [sp + 0x38]
         call 0x8004e308          // 0x8004e308(-1, 0x82202a84, 0x8, -1)
         a2 = s0
         at = 0x4742 << 16
         at |= 0x5531

    loc_0x80212360: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e95c
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(-1, 0x105, 0x8, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = s2
         call 0x8004e308          // 0x8004e308(0xff, -1, 0x8, -1)
         // CODE XREF from fcn.801f7134 @ 0x801f7304
         a2 = s0
         at = 0x4742 << 16
         at |= 0x4431
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(0xff, 0x47424535, 0x104, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = s2
         call 0x8004e308          // 0x8004e308(0xff, -1, 0x104, -1)
         a2 = s0 + 0x80

    loc_0x802123a0: // orphan
         at = 0x434e << 16
         at |= 0x5431
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(-1, 0x434e5535, 0x8, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = [sp + 0x30]
         // CODE XREF from fcn.801f7134 @ 0x801f7308
         call 0x8004e308          // 0x8004e308(0xff, 0x822023d8, 0x8, -1)
         a2 = s0
         at = 0x5344 << 16
         at |= 0x5731
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(0xff, 0x53445835, 0x104, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = [sp + 0x2c]
         call 0x8004e308          // 0x8004e308(0xff, 0x82202534, 0x104, -1)
         a2 = s0
         s0 += 1
         at = , s0 < 4
         bnel at, 0, 0x80212338   // unlikely
         at = 0x504c << 16

    loc_0x802123f8: // orphan
         a1 = 0x5749 << 16
         a1 |= 0x4e31
         // CODE XREF from fcn.801f7134 @ +0x1d8
         call 0x8005049c          // 0x8005049c(-1, 0x57494e31, 0x8, -1)
         a0 = [s1 + 0]
         a1 = 0x8220 << 16
         a1 += 0x2be4
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82202be4, 0x8, -1)
         a2 = 0 + 1               // lo
         a1 = 0x4d53 << 16
         a1 |= 0x4730
         call 0x8005049c          // 0x8005049c(0xff, 0x4d534730, 0x1, -1)
         a0 = [s1 + 0]
         s0 = 0x8220 << 16
         s0 += 0x2e0c
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82202e0c, 0x1, -1)
         a2 = 0
         a1 = 0x4d53 << 16
         a1 |= 0x4731
         call 0x8005049c          // 0x8005049c(0xff, 0x4d534731, 0x0, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82202e0c, 0x0, -1)
         a2 = 0 + 1               // lo
         t8 = 0x8220 << 16
         t9 = 0x8220 << 16

    loc_0x8021246c: // orphan
         t0 = 0x8220 << 16
         t1 = 0x8220 << 16
         t1 += 0x3210
         t0 += 0x31d0
         t9 += 0x30bc
         t8 += 0x2fc8
         s2 = 0x4e41 << 16
         // CODE XREF from fcn.8021edac @ 0x8020e974
         s2 |= 0x4d30
         [sp + 0x38] = t8
         [sp + 0x34] = t9
         [sp + 0x30] = t0
         [sp + 0x2c] = t1

    loc_0x8021249c: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e978
         s0 = 0
         a0 = [s1 + 0]

    loc_0x802124a4: // orphan
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + s2
         a0 = v0                  // s4
         a1 = [sp + 0x38]
         // CODE XREF from fcn.801f7134 @ 0x801f7310
         call 0x8004e308          // 0x8004e308(0xff, 0x2fc7, 0x8, -1)
         a2 = s0
         at = 0x4944 << 16
         at |= 0x3030
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(0xff, 0x49443134, 0x104, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         // CODE XREF from fcn.8021edac @ 0x8020e980
         a1 = [sp + 0x34]
         call 0x8004e308          // 0x8004e308(0xff, 0x30bb, 0x104, -1)
         a2 = s0
         at = 0x4552 << 16
         at |= 0x5230
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(0xff, 0x45525334, 0x104, -1)
         a0 = [s1 + 0]
         a0 = v0                  // s4
         a1 = [sp + 0x30]
         call 0x8004e308          // 0x8004e308(0xff, 0x822031d0, 0x104, -1)
         a2 = s0
         at = 0x5741 << 16
         at |= 0x5030
         a1 = s0 + at
         call 0x8005049c          // 0x8005049c(0xff, 0x57415134, 0x104, -1)
         a0 = [s1 + 0]

    loc_0x80212518: // orphan
         // CODE XREF from fcn.8021edac @ 0x8020e984
         a0 = v0                  // s4
         a1 = [sp + 0x2c]
         call 0x8004e308          // 0x8004e308(0xff, 0x82203210, 0x8, -1)
         a2 = s0
         s0 += 1
         at = 0 + 4
         // CODE XREF from fcn.8021edac @ 0x8020e98c
         bnel s0, at, 0x802124a4  // likely
         a0 = [s1 + 0]

    loc_0x80212538: // orphan
         call fcn.822014d8        // "/="
         
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021edac @ 0x8020e990
         a0 = 0 + 0x142
         s0 = 0x8221 << 16
         s0 -= 0x14f0
         a0 = s0
         call 0x800476a0          // 0x800476a0(0x8220eb10, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 4
         a0 = s0
         call 0x800476fc          // 0x800476fc(0x8220eb10, 0x4, 0x8, -1)
         a1 = 0 + 4
         a0 = 0 + 0x142
         call 0x8004c990          // 0x8004c990(0x142, 0x4, 0x8, -1)
         a1 = 0 + 1               // lo
         a2 = 0x8220 << 16
         a2 += 0x336c
         a0 = 0
         a1 = v0                  // s4
         call 0x80047738          // 0x80047738(0x0, 0xff, 0x8220336c, -1)
         a3 = 0
         // CODE XREF from fcn.8020e300 @ +0x698
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // s4
         sp += 0x58

    loc_0x802125ec: // orphan
         v0 = , unsigned  byte [s5 + 5]
         s1 = [s3 + 0]            // t9
         s4 = 0
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x6a8
         s2 = 0

    loc_0x80212600: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 + 0x17

    loc_0x8021260c: // orphan
         at = 0 + 4
         if                       // unlikely
         a0 = 0 + 0x17

    loc_0x80212618: // orphan
         at = 0 + 5
         if                       // unlikely
         a0 = 0 + 0x17

    loc_0x80212624: // orphan
         goto 0x80212658
         

    loc_0x8021262c: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x19
         goto 0x80212658
         s2 = v0                  // s4

    loc_0x8021263c: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x1a
         // CODE XREF from fcn.8020e300 @ +0x6b0
         goto 0x80212658
         s2 = v0                  // s4

    loc_0x8021264c: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x1b
         s2 = v0                  // s4

    loc_0x80212658: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80212624, 0x80212634, 0x80212644
         if                       // unlikely
         

    loc_0x80212660: // orphan
         call 0x80049b48          // 0x80049b48(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = , unsigned  halfword [s1 + 0x24]
         call 0x800496a4          // 0x800496a4(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         call 0x8004989c          // "&0" // 0x8004989c(0xffff, 0x1, 0x8, -1)
         a0 = byte [s1 + 0x26]    // s4
         s0 = s1 + 0x28
         a0 = , unsigned  byte [s0 + 0] // s4
         a1 = , unsigned  byte [s0 + 1] // s4
         // CODE XREF from fcn.8020e300 @ +0x6b4
         a2 = , unsigned  byte [s0 + 2] // s4
         call 0x8004972c          // "&\"" // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = , unsigned  byte [s0 + 3] // s4
         v0 = s1 + 0x2c
         t8 = [v0 + 0]            // t9
         t9 = [s0 + 0]
         // CODE XREF from fcn.8020e300 @ +0x6bc
         if                       // likely
         

    loc_0x802126a8: // orphan
         s4 = 0 + 1               // lo
         call 0x80049b48          // 0x80049b48(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x34] = v0
         // CODE XREF from fcn.8020e300 @ +0x6c0
         v0 = [sp + 0x34]         // s4
         a0 = , unsigned  byte [v0 + 0]
         a1 = , unsigned  byte [v0 + 1] // t3
         a2 = , unsigned  byte [v0 + 2]
         call 0x800497e4          // 0x800497e4(0x0, 0xfe, 0x0, -1)
         a3 = , unsigned  byte [v0 + 3]

    loc_0x802126cc: // orphan
         if                       // unlikely
         

    loc_0x802126d4: // orphan
         call 0x80050518          // 0x80050518(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [s1 + 0x27] // s4
         if                       // unlikely
         a2 = 0 + 1               // lo

    loc_0x802126e4: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a2 = 0 + 2

    loc_0x802126f0: // orphan
         at = 0 + 2
         if                       // likely
         a2 = s2

    loc_0x802126fc: // orphan
         // CODE XREF from fcn.8020e300 @ +0x6c8
         a0 = halfword [s1 + 8]
         call 0x800495bc          // 0x800495bc(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s1 + 0xa]
         goto 0x80212738
         

    loc_0x80212728: // orphan
         a0 = halfword [s1 + 8]
         a1 = halfword [s1 + 0xa]
         call 0x800495f8          // 0x800495f8(0xffff, 0xffff, 0x8, -1)
         a3 = s2

    loc_0x80212738: // orphan
         // CODE XREF from fcn.8021edac @ 0x80212708
         // CODE XREF from fcn.8021181c @ +0xf04
         if                       // unlikely
         

    loc_0x80212740: // orphan
         // CODE XREF from fcn.8020e300 @ +0x6cc
         call 0x80049b9c          // 0x80049b9c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80212748: // orphan
         t0 = 0x8221 << 16
         t0 -= 0x1b20
         s3 += 4
         if                       // likely
         // CODE XREF from fcn.8020e300 @ +0x6d4
         s5 += 0x14

    loc_0x8021275c: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x14]
         // CODE XREF from fcn.8020e300 @ +0x6d8
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // t9
         ret
         sp += 0x68

    loc_0x802127d0: // orphan
         [sp + 0x10] = t7
         v0 = [sp + 0x20]         // t9
         a0 = 0x800d << 16
         a0 += 0x510
         t8 = , unsigned  halfword [v0 + 6]
         a3 = halfword [v0 + 4]
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x0, 0x0, 0xeea9)
         [sp + 0x10] = t8
         a0 = 0x8221 << 16
         call 0x800503a4          // 0x800503a4(0x82210000, 0x0, 0x0, 0xeea9)
         a0 = [a0 - 0x1c9c]       // s4
         t9 = 0x8221 << 16
         t9 = [t9 - 0x1ca0]
         // CODE XREF from fcn.801f7134 @ 0x801f7328
         call 0x800503a4          // 0x800503a4(0xff, 0x0, 0x0, 0xeea9)
         a0 = [t9 + 0x1c]
         call fcn.822037e4
         
         call 0x80008648          // 0x80008648(0x6408, 0x0, 0x0, 0xeea9)
         
         v1 = 0x8221 << 16
         v1 -= 0x2890
         t0 = [v1 + 0]
         ra = [sp + 0x1c]
         sp += 0x28
         t1 = t0 + 1
         ret
         [v1 + 0] = t1

    loc_0x8021289c: // orphan
         if                       // likely
         at = , v1 < v0

    loc_0x802128a4: // orphan
         // CODE XREF from fcn.8020e300 @ +0x6f0
         s1 = 0x8221 << 16
         s1 -= 0x1b98

    loc_0x802128ac: // orphan
         call fcn.82201834        // fcn.82201834(-1)
         a0 = s0
         s0 += 0x3c
         if                       // likely
         

    loc_0x802128c0: // orphan
         goto 0x802128e8
         ra = [sp + 0x1c]

    loc_0x802128c8: // orphan
         beql at, 0, 0x802128e8   // unlikely
         ra = [sp + 0x1c]

    loc_0x802128d0: // orphan
         call fcn.82201c14
         
         // CODE XREF from fcn.8020e300 @ +0x6f4
         if                       // unlikely
         t7 = 0 + 1               // lo

    loc_0x802128e0: // orphan
         [sp + 0x20] = t7

    loc_0x802128e4: // orphan
         ra = [sp + 0x1c]

    loc_0x802128e8: // orphan
         // CODE XREF from fcn.8021edac @ 0x802128c0
         v0 = [sp + 0x20]
         // CODE XREF from fcn.8020e300 @ +0x6f8
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         ret                      // ra
         sp += 0x28

    loc_0x80212968: // orphan
         [at - 0x1b44] = 0
         call fcn.82201d08
         a0 -= 0x1b98
         a0 = 0x8221 << 16
         call fcn.82201d08
         a0 -= 0x1b70
         ra = [sp + 0x14]
         t6 = 0 + 1               // lo
         at = 0x8221 << 16
         [at - 0x287c] = t6
         ret
         sp += 0x18

    loc_0x80212a34: // orphan
         
         t8 = v1 << 0x10
         t9 = , signed  t8 >> 0x10 // v1
         at = , t9 < a3
         a2 = v1 << 0x10
         if                       // likely
         a2 = , signed  a2 >> 0x10 // v1

    loc_0x80212a50: // orphan
         a2 = a3 << 0x10
         a2 = , signed  a2 >> 0x10 // t9

    loc_0x80212a58: // orphan
         v1 = 0x8221 << 16
         v1 -= 0x1c90

    loc_0x80212a60: // orphan
         v0 += 4
         at = , unsigned  , v0 < v1 // lo
         if                       // likely
         halfword [v0 - 2] = a2

    loc_0x80212a70: // orphan
         if                       // likely
         a1 = t0

    loc_0x80212a78: // orphan
         a1 = 0

    loc_0x80212a7c: // orphan
         mtc1 a1, f4
         at = 0xbf00 << 16
         cvt.s.w f0, f4
         mul.s f6, f0, f14
         add.s f2, f6, f16
         mul.s f12, f0, f2
         // CODE XREF from fcn.8020e300 @ +0x710
         c.lt.s f18, f12
         
         bc1fl 0x80212ab8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80212ac0
         add.s f8, f0, f12

    loc_0x80212b60: // orphan
         // CODE XREF from fcn.8021181c @ +0x1330
         trunc.w.s f10, f8
         mfc1 v1, f10
         
         t8 = v1 << 0x10
         t9 = , signed  t8 >> 0x10 // v1
         at = , t9 < a3
         v0 = v1 << 0x10
         if                       // likely
         v0 = , signed  v0 >> 0x10 // v1

    loc_0x80212b84: // orphan
         v0 = a3 << 0x10
         v0 = , signed  v0 >> 0x10 // t9

    loc_0x80212b8c: // orphan
         at = 0x8221 << 16
         halfword [at - 0x1c4e] = v0
         at = 0x8221 << 16
         halfword [at - 0x1c12] = v0
         at = 0x8221 << 16
         halfword [at - 0x1bd6] = v0
         at = 0x8221 << 16
         if                       // likely
         halfword [at - 0x1b9a] = v0

    loc_0x80212bb0: // orphan
         bnel a0, a3, 0x80212bf0  // likely
         ra = [sp + 0x14]

    loc_0x80212bec: // orphan
         ra = [sp + 0x14]
         sp += 0x20
         v0 = t2                  // s4
         ret
         

    loc_0x80212c1c: // orphan
         a0 = 0 + 0xf
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80212ce8: // orphan
         
         if                       // fcn.80212c34+0x1a4 // unlikely
         v0 = 0x8221 << 16

    loc_0x80212f14: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020a180 @ 0x8020ea54
         at = 0 + 2

    loc_0x80212f1c: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x80212f24: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x80212f2c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x75c
         

    loc_0x80212f34: // orphan
         ret                      // ra
         

    loc_0x80212f3c: // orphan
         v0 = 0x8221 << 16
         v0 = halfword [v0 + 0x5f2]

    loc_0x80212f44: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020ea60
         t6 = 0 + 2
         t7 = 0 + 0x3b

    loc_0x80212f4c: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020ea58
         v0 += 1
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         at = , v0 < 4
         if                       // likely
         t8 = 0 + 0x150

    loc_0x80212f64: // orphan
         a1 = 0x8221 << 16
         a1 = halfword [a1 + 0x600]
         t6 = 0 + 0x3b
         a2 = 0x8221 << 16
         t7 = t6 - a1
         unsigned , hi            // t9 // s2
         a2 = halfword [a2 + 0x602]
         t2 = 0 + 0x150
         a3 = 0x8221 << 16
         t3 = t2 - a2
         a3 = halfword [a3 + 0x604]
         t7 = 0 + 0x1f4
         t0 = 0x8221 << 16
         t0 = halfword [t0 + 0x606]
         t2 = 0 + 0x70
         t8 = lo
         if                       // unlikely
         t9 = , signed  t8 >> 2

    loc_0x80212fac: // orphan
         at = t8 + 3
         t9 = , signed  at >> 2

    loc_0x80212fb4: // orphan
         unsigned , hi
         t8 = t7 - a3             // lo
         t1 = a1 + t9
         t3 = t2 - t0
         at = 0x8221 << 16
         halfword [at + 0x5f4] = t1
         t4 = lo
         if                       // likely
         t5 = , signed  t4 >> 2

    loc_0x80212fd8: // orphan
         at = t4 + 3
         t5 = , signed  at >> 2

    loc_0x80212fe0: // orphan
         unsigned , hi            // t3 // t3
         at = 0x8221 << 16
         t6 = a2 + t5
         halfword [at + 0x5f6] = t6
         t9 = lo
         if                       // unlikely
         t1 = , signed  t9 >> 2

    loc_0x80212ffc: // orphan
         at = t9 + 3
         t1 = , signed  at >> 2

    loc_0x80213004: // orphan
         unsigned , hi
         v1 = a3 + t1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         t4 = lo
         if                       // likely
         t5 = , signed  t4 >> 2

    loc_0x80213020: // orphan
         at = t4 + 3
         t5 = , signed  at >> 2

    loc_0x80213028: // orphan
         a0 = t0 + t5
         a0 <<= 0x10
         at = 0x8221 << 16
         // CODE XREF from fcn.801f7134 @ 0x801f7360
         halfword [at + 0x5f2] = v0
         goto 0x8021305c
         a0 = , signed  a0 >> 0x10

    loc_0x80213040: // orphan
         at = 0x8221 << 16
         halfword [at + 0x5f0] = t6
         halfword [at + 0x5f4] = t7
         halfword [at + 0x5f6] = t8
         v1 = 0 + 0x1f4
         halfword [at + 0x5f2] = 0
         a0 = 0 + 0x70

    loc_0x8021305c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80213038
         t9 = 0x8221 << 16
         t9 = halfword [t9 + 0x608]
         at = 0x8221 << 16
         t2 = 0x8221 << 16
         t1 = v1 - t9
         halfword [at + 0x5fc] = t1
         t2 = halfword [t2 + 0x60a]
         // CODE XREF from fcn.801f7134 @ +0x230
         halfword [at + 0x5fa] = a0
         halfword [at + 0x5f8] = v1
         t3 = a0 - t2
         ret                      // ra
         halfword [at + 0x5fe] = t3

    loc_0x8021308c: // orphan
         v0 = 0x8221 << 16
         v0 = halfword [v0 + 0x5f2]
         a1 = 0x8221 << 16
         a2 = 0x8221 << 16
         v0 += 1                  // lo
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // lo
         at = , v0 < 4            // lo
         if                       // unlikely
         a3 = 0x8221 << 16

    loc_0x802130b4: // orphan
         a1 = 0x8221 << 16
         a1 = halfword [a1 + 0x600]
         // CODE XREF from fcn.801f7134 @ 0x801f7368
         a2 = 0x8221 << 16
         a2 = halfword [a2 + 0x602]
         t4 = a1 - 0x3b
         unsigned , hi
         t8 = a2 - 0x150
         a3 = 0x8221 << 16
         a3 = halfword [a3 + 0x604]
         t0 = 0x8221 << 16
         t0 = halfword [t0 + 0x606]
         t3 = a3 - 0x1f4
         t4 = t0 - 0x70
         t5 = lo
         if                       // likely
         t6 = , signed  t5 >> 2

    loc_0x802130f4: // orphan
         at = t5 + 3
         t6 = , signed  at >> 2

    loc_0x802130fc: // orphan
         unsigned , hi            // t3 // t3
         // CODE XREF from fcn.801f7134 @ 0x801f736c
         at = 0x8221 << 16
         t7 = t6 + 0x3b
         halfword [at + 0x5f4] = t7
         t9 = lo
         if                       // unlikely
         t1 = , signed  t9 >> 2

    loc_0x80213118: // orphan
         at = t9 + 3
         t1 = , signed  at >> 2

    loc_0x80213120: // orphan
         unsigned , hi
         at = 0x8221 << 16
         t2 = t1 + 0x150
         halfword [at + 0x5f6] = t2
         v1 = lo
         if                       // likely
         at = v1

    loc_0x8021313c: // orphan
         at = v1 + 3

    loc_0x80213140: // orphan
         v1 = , signed  at >> 2
         unsigned , hi            // t3 // t3
         v1 += 0x1f4
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         a0 = lo
         if                       // unlikely
         at = a0

    loc_0x80213160: // orphan
         at = a0 + 3

    loc_0x80213164: // orphan
         a0 = , signed  at >> 2
         a0 += 0x70
         a0 <<= 0x10
         at = 0x8221 << 16
         halfword [at + 0x5f2] = v0
         goto 0x802131bc
         a0 = , signed  a0 >> 0x10

    loc_0x80213180: // orphan
         t0 = 0x8221 << 16
         t0 = halfword [t0 + 0x606]
         a3 = halfword [a3 + 0x604]
         a1 = halfword [a1 + 0x600]
         a2 = halfword [a2 + 0x602]
         at = 0x8221 << 16
         t5 = 0 + 1               // lo
         a0 = t0 << 0x10
         v1 = a3 << 0x10
         halfword [at + 0x5f0] = t5
         // CODE XREF from fcn.801f7134 @ 0x801f7374
         v1 = , signed  v1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10
         halfword [at + 0x5f2] = 0
         halfword [at + 0x5f4] = a1
         halfword [at + 0x5f6] = a2

    loc_0x802131bc: // orphan
         // CODE XREF from fcn.8021edac @ 0x80213178
         t6 = 0x8221 << 16
         t6 = halfword [t6 + 0x608]
         at = 0x8221 << 16
         t8 = 0x8221 << 16
         t7 = v1 - t6
         halfword [at + 0x5fc] = t7
         t8 = halfword [t8 + 0x60a]
         halfword [at + 0x5fa] = a0
         // CODE XREF from fcn.8020a1a0 @ 0x8020ea78
         halfword [at + 0x5f8] = v1
         t9 = a0 - t8
         halfword [at + 0x5fe] = t9

    loc_0x802131e8: // orphan
         ret                      // ra
         

    loc_0x80213570: // orphan
         v0 &= at                 // lo
         ret                      // ra
         

    loc_0x80213954: // orphan
         goto 0x80213974
         t2 |= at                 // s4

    loc_0x80213974: // orphan
         // CODE XREF from fcn.8021edac @ 0x80213954
         // CODE XREF from fcn.80212c34 @ +0xd28
         ctc1 t4, 31
         t3 = 0 + 1               // lo

    loc_0x8021397c: // orphan
         // CODE XREF from fcn.8020e300 @ +0x808
         t4 = t1 & 0xfff
         add.s f8, f0, f14
         mul.s f10, f8, f12
         cfc1 t5, 31
         ctc1 t3, 31
         // CODE XREF from fcn.8020e300 @ +0x80c
         
         cvt.w.s f18, f10
         cfc1 t3, 31
         
         t3 &= 0x78
         // CODE XREF from fcn.8020e300 @ +0x810
         if                       // unlikely
         at = 0x4f00 << 16

    loc_0x802139ac: // orphan
         mtc1 at, f18
         t3 = 0 + 1               // lo
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
         t3 = 0 - 1               // s2

    loc_0x802139f0: // orphan
         mfc1 t3, f18
         
         if                       // unlikely
         

    loc_0x80213a00: // orphan
         // CODE XREFS from fcn.8021edac @ 0x802139e0, 0x802139e8
         v0 = [s1 + 0]
         at = 0xf200 << 16
         t9 = t8 | at
         t6 = v0 + 8
         [s1 + 0] = t6
         ctc1 t5, 31
         t6 = t2 & 0xfff          // s4
         t7 = t6 << 0xc
         t5 = t9 | t4
         t8 = t3 & 0xfff
         t9 = t7 | t8
         [v0 + 4] = t9
         [v0 + 0] = t5
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x60]         // t9
         v1 = [sp + 0x60]         // t9
         t7 = 0 + 1               // lo
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
         // CODE XREF from fcn.8020e300 @ +0x838
         t5 = halfword [s2 + 0x22]
         [sp + 0x30] = t9
         // CODE XREF from fcn.8020e300 @ +0x820
         [sp + 0x2c] = t8
         [sp + 0x28] = 0
         [sp + 0x24] = 0

    loc_0x80213a80: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020eb3c
         [sp + 0x20] = 0
         [sp + 0x1c] = t7
         // CODE XREF from fcn.8020e300 @ +0x824
         a1 = 0 + 0x100
         a2 = 0 + 1               // lo
         [sp + 0x34] = t4
         [sp + 0x18] = t6
         call 0x80045db4          // 0x80045db4(-1, 0x100, 0x1, -1)
         [sp + 0x38] = t5
         at = 0x4080 << 16
         mtc1 at, f12
         lwc1 f2, 0x10, s0
         t0 = 0 + 1               // lo
         at = 0x41f8 << 16
         mul.s f4, f2, f12
         mtc1 at, f14
         a0 = 0
         a1 = 0
         // CODE XREF from fcn.8020a180 @ 0x8020eb30
         a2 = 0 + 0x20            // k0
         a3 = 0 + 0x20            // k0
         cfc1 t6, 31
         ctc1 t0, 31
         
         cvt.w.s f6, f4
         cfc1 t0, 31
         
         t0 &= 0x78

    loc_0x80213ae8: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020eb34
         if                       // unlikely
         at = 0x4f00 << 16

    loc_0x80213af0: // orphan
         mtc1 at, f6
         t0 = 0 + 1               // lo
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
         t0 = 0 - 1               // s2

    loc_0x80213b34: // orphan
         mfc1 t0, f6
         
         if                       // unlikely
         

    loc_0x80213b44: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80213b24, 0x80213b2c
         ctc1 t6, 31
         lwc1 f0, 0x14, s0
         t1 = 0 + 1               // lo
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
         t1 = 0 + 1               // lo
         sub.s f10, f8, f10
         ctc1 t1, 31
         
         cvt.w.s f10, f10
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // unlikely
         

    loc_0x80213bac: // orphan
         mfc1 t1, f10
         // CODE XREF from fcn.8020a180 @ 0x8020eb4c
         at = 0x8000 << 16
         goto 0x80213bd4
         t1 |= at

    loc_0x80213bbc: // orphan
         goto 0x80213bd4
         t1 = 0 - 1               // s2

    loc_0x80213bc4: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020eb50
         mfc1 t1, f10

    loc_0x80213bc8: // orphan
         
         if                       // unlikely
         

    loc_0x80213bd4: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80213bb4, 0x80213bbc
         ctc1 t7, 31
         t2 = 0 + 1               // lo
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
         t2 = 0 + 1               // lo

    loc_0x80213c10: // orphan
         sub.s f6, f4, f6
         ctc1 t2, 31
         
         cvt.w.s f6, f6
         cfc1 t2, 31
         
         t2 &= 0x78
         // CODE XREF from fcn.8020a180 @ 0x8020eb58
         if                       // likely
         

    loc_0x80213c34: // orphan
         mfc1 t2, f6
         at = 0x8000 << 16
         goto 0x80213c5c
         // CODE XREF from fcn.8020a180 @ 0x8020eb5c
         t2 |= at

    loc_0x80213c44: // orphan
         goto 0x80213c5c
         t2 = 0 - 1               // s2

    loc_0x80213c4c: // orphan
         mfc1 t2, f6
         
         if                       // unlikely
         

    loc_0x80213c5c: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80213c3c, 0x80213c44
         ctc1 t8, 31
         t3 = 0 + 1               // lo
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
         t3 = 0 + 1               // lo
         sub.s f18, f10, f18
         ctc1 t3, 31
         
         cvt.w.s f18, f18
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // unlikely
         

    loc_0x80213cd8: // orphan
         mfc1 t3, f18
         

    loc_0x80213ce0: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020eb6c
         if                       // unlikely
         

    loc_0x80213d0c: // orphan
         at = 0x100 << 16
         t6 = t5 | at             // t9
         t7 = t3 & 0xfff
         t8 = t6 | t7             // t9
         [v0 + 0] = t9
         [v0 + 4] = t8
         t9 = 0 + 0x400
         // CODE XREF from fcn.8020a180 @ 0x8020eb74
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
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

    loc_0x80213d8c: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020eb78
         swc1 f6, 8, s0
         lwc1 f2, 8, s0
         c.lt.s f2, f16
         
         bc1fl 0x80213db0
         // CODE XREF from fcn.8020e300 @ +0x87c
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

    loc_0x80213e00: // orphan
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

    loc_0x80213e58: // orphan
         swc1 f8, 0x10, s0

    loc_0x80213e5c: // orphan
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
         s0 = [sp + 0x48]         // s4
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         ret
         sp += 0x70

    loc_0x80214480: // orphan
         sp -= 0x98
         t6 = a1 << 2
         t6 -= a1
         t6 <<= 2
         t6 += a1
         t7 = 0x8221 << 16
         [sp + 0x54] = s3
         [sp + 0x4c] = s1
         [sp + 0x48] = s0
         t7 -= 0x2730
         t6 <<= 2
         s0 = a1                  // t0
         s3 = a0                  // t9
         [sp + 0x6c] = ra
         s1 = t6 + t7
         [sp + 0x68] = fp
         [sp + 0x64] = s7
         [sp + 0x60] = s6
         [sp + 0x5c] = s5
         [sp + 0x58] = s4
         [sp + 0x50] = s2
         [sp + 0xa0] = a2
         [sp + 0xa4] = a3
         a1 = , unsigned  halfword [s1 + 0xa]
         call 0x8004c990          // 0x8004c990(-1, 0xffff, 0x8, -1)
         a0 = 0 + 8               // a2
         s4 = v0

    loc_0x802144ec: // orphan
         a0 = , unsigned  halfword [v0 + 0]
         call fcn.82204780
         a1 = 0 + 0x1000
         t8 = s0 << 2
         t8 -= s0
         t8 <<= 3
         t9 = 0x8221 << 16
         t9 += t8
         t9 = halfword [t9 - 0x1468]
         v1 = , unsigned  halfword [s4 + 2]
         at = 0 + 0xa
         s2 = v0                  // s4
         unsigned , hi
         a1 = v0                  // s4
         s5 = lo
         
         
         div 0, s5, at
         s5 = lo
         t0 = v1 - s5
         [sp + 0x78] = t0
         call fcn.822047bc        // fcn.822047bc(0xffff, 0xff)
         a0 = s5
         [sp + 0x74] = v0
         call 0x8004ca60          // 0x8004ca60(0xffffffff872e78d1, 0xff, 0x8, -1)
         a0 = s4
         t1 = [sp + 0xa8]
         [sp + 0x70] = v0
         s6 = 0
         if                       // likely
         

    loc_0x80214568: // orphan
         a1 = halfword [s1 + 6]
         at = 0 - 1               // s2
         if                       // unlikely
         

    loc_0x80214578: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 9
         s6 = v0                  // s4

    loc_0x80214584: // orphan
         if                       // likely
         

    loc_0x8021458c: // orphan
         a0 = , unsigned  halfword [s3 + 0x24]
         call 0x8004c990          // 0x8004c990(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [s3 + 0x26]
         s6 = v0                  // s4

    loc_0x8021459c: // orphan
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s6
         a3 = 0x800d << 16
         a3 += 0x510
         v1 = [a3 + 0]            // t9
         t4 = 0x8009 << 16
         t4 += 0x4ec0
         t2 = v1 + 8
         [a3 + 0] = t2
         t3 = 0xde00 << 16
         [v1 + 0] = t3
         [v1 + 4] = t4
         v1 = [a3 + 0]
         t6 = 0xfb00 << 16
         a0 = s3 + 0x2c
         t5 = v1 + 8
         [a3 + 0] = t5
         [v1 + 0] = t6
         t1 = , unsigned  byte [a0 + 1] // s4
         t8 = , unsigned  byte [a0 + 0] // s4
         t5 = , unsigned  byte [a0 + 2] // s4
         t2 = t1 << 0x10
         t9 = t8 << 0x18
         t3 = t9 | t2
         t6 = t5 << 8
         t7 = t3 | t6
         t8 = t7 | 0xff           // t9
         [v1 + 4] = t8
         t0 = [sp + 0x74]         // s4
         s7 = v0                  // s4
         fp = halfword [sp + 0xa2]
         if                       // fcn.8021f404-0xac60 // unlikely
         s0 = 0

    loc_0x802151e4: // orphan
         v1 = [sp + 0x20]
         a1 = [sp + 0x2c]
         if                       // unlikely
         a2 = [sp + 0x1c]

    loc_0x802151f4: // orphan
         a0 = 0 + 1               // lo
         if                       // likely
         t6 = 0x8221 << 16

    loc_0x80215200: // orphan
         t6 = [t6 - 0x13c8]       // t9
         t7 = 0x8221 << 16
         if                       // unlikely
         

    loc_0x80215210: // orphan
         t7 = [t7 - 0x25f8]       // t9
         t1 = 0 + 1               // lo
         t2 = t1 << v1
         t8 = [t7 + 0x20]
         t0 = v0 & 0xff           // s4
         t3 = t0 & t2             // s4
         t9 = halfword [t8 + 2]
         t4 = , unsigned  , 0 < t3 // lo
         if                       // likely
         

    loc_0x80215238: // orphan
         if                       // unlikely
         a2 = 0 + 1               // lo

    loc_0x80215240: // orphan
         v0 = [a1 + 0x34]
         t5 = , unsigned  halfword [v0 + 4]
         t6 = t5 | 1
         goto 0x80215264
         halfword [v0 + 4] = t6

    loc_0x80215254: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215238
         v0 = [a1 + 0x34]
         t7 = , unsigned  halfword [v0 + 4]
         t8 = t7 & 0xfffe
         halfword [v0 + 4] = t8

    loc_0x80215264: // orphan
         // CODE XREFS from fcn.8021edac @ 0x80215208, 0x80215230, 0x8021524c
         beql a2, 0, 0x80215280   // unlikely
         t0 = , unsigned  halfword [a1 + 2]

    loc_0x8021526c: // orphan
         t9 = , unsigned  halfword [a1 + 2]
         t1 = t9 | 2
         goto 0x80215288
         halfword [a1 + 2] = t1

    loc_0x80215280: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215264
         t2 = t0 & 0xfffd
         halfword [a1 + 2] = t2

    loc_0x80215288: // orphan
         // CODE XREFS from fcn.8021edac @ 0x802151ec, 0x802151f8, 0x80215274
         ra = [sp + 0x14]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x802152b8: // orphan
         t8 = 0x8221 << 16
         goto 0x80215574
         ra = [sp + 0x2c]

    loc_0x802153a0: // orphan
         mtc1 at, f18
         goto 0x802153bc
         mov.s f0, f16

    loc_0x802153bc: // orphan
         // CODE XREF from fcn.8021edac @ 0x802153a4
         add.s f10, f0, f2
         t8 = , unsigned  halfword [v0 + 2]
         at = 0x4f80 << 16
         trunc.w.s f4, f10
         mtc1 t8, f8
         mfc1 t1, f4
         if                       // likely
         cvt.s.w f6, f8

    loc_0x802153dc: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x802153e8: // orphan
         // CODE XREF from fcn.8021edac @ 0x802153d4
         mul.s f4, f6, f12
         at = 0x4f80 << 16
         c.lt.s f14, f4
         
         bc1fl 0x8021540c
         mov.s f0, f18
         goto 0x8021540c
         mov.s f0, f16

    loc_0x8021540c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215400
         v0 = , unsigned  halfword [a0 + 2]
         a2 = 0x800d << 16
         a2 += 0x510
         mtc1 v0, f8
         if                       // likely
         cvt.s.w f10, f8

    loc_0x80215424: // orphan
         mtc1 at, f6
         
         add.s f10, f10, f6

    loc_0x80215430: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021541c
         mul.s f4, f10, f12
         t2 = , unsigned  halfword [a0 + 0]
         a1 = [a2 + 0]            // s4
         t9 = 0x8009 << 16
         t3 = t2 - t1
         t7 = a1 + 8
         [a2 + 0] = t7
         add.s f8, f0, f4
         t9 += 0x4e38
         t8 = 0xde00 << 16
         trunc.w.s f6, f8
         mfc1 t0, f6
         if                       // unlikely
         t4 = , signed  t3 >> 1

    loc_0x80215468: // orphan
         at = t3 + 1              // s4
         t4 = , signed  at >> 1

    loc_0x80215470: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215460
         t5 = v0 - t0

    loc_0x80215474: // orphan
         [sp + 0x34] = t4
         if                       // likely
         t6 = , signed  t5 >> 1   // t9

    loc_0x80215480: // orphan
         at = t5 + 1
         t6 = , signed  at >> 1

    loc_0x80215488: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215478
         [sp + 0x30] = t6
         [a1 + 4] = t9
         [a1 + 0] = t8
         swc1 f12, 0x40, sp
         [sp + 0x3c] = t1
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x38] = t0
         at = 0x3f00 << 16
         mtc1 at, f16
         at = 0xbf00 << 16
         mtc1 at, f18
         at = 0x4480 << 16
         lwc1 f12, 0x40, sp
         mtc1 at, f10
         mtc1 0, f14
         t0 = [sp + 0x38]
         div.s f2, f10, f12
         t1 = [sp + 0x3c]
         a3 = t0 << 0x10
         a3 = , signed  a3 >> 0x10
         a2 = t1 << 0x10
         a2 = , signed  a2 >> 0x10
         v0 = [sp + 0x5c]
         t3 = [sp + 0x34]         // t9
         t5 = [sp + 0x30]
         c.lt.s f14, f2
         
         bc1fl 0x80215508
         mov.s f12, f18
         goto 0x80215508
         mov.s f12, f16

    loc_0x80215508: // orphan
         // CODE XREF from fcn.8021edac @ 0x802154fc
         c.lt.s f14, f2
         add.s f4, f12, f2
         bc1fl 0x80215524
         mov.s f0, f18
         goto 0x80215524
         mov.s f0, f16

    loc_0x80215524: // orphan
         // CODE XREF from fcn.8021edac @ 0x80215518
         add.s f6, f0, f2
         t2 = halfword [v0 + 8]
         t4 = halfword [v0 + 0xa]
         trunc.w.s f8, f4
         a0 = t2 + t3
         a1 = t4 + t5
         trunc.w.s f10, f6
         mfc1 t7, f8
         a1 <<= 0x10
         // CODE XREF from fcn.8020a180 @ 0x8020ecf4
         a0 <<= 0x10
         mfc1 t9, f10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x20] = 0

    loc_0x8021555c: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020ecf8
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         [sp + 0x18] = t7
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t9
         // CODE XREFS from fcn.8020a180 @ 0x107c, 0x8021533c
         ra = [sp + 0x2c]

    loc_0x80215574: // orphan
         // CODE XREF from fcn.8021edac @ 0x802152bc
         // CODE XREF from fcn.8020a180 @ 0x80215300
         sp += 0x58
         v0 = 0
         ret                      // ra
         

    loc_0x802160f4: // orphan
         t6 -= v1
         t6 <<= 2
         t6 += v1
         t6 <<= 2
         s0 = t6 + t7
         [s0 + 0x16c] = v0
         call fcn.82206b64
         a0 = , unsigned  halfword [v0 + 0]
         t8 = [s0 + 0x16c]        // s4
         halfword [s0 + 0x172] = v0
         a1 = halfword [s0 + 0x172] // s4
         call fcn.822047bc        // fcn.822047bc(0xffff, 0xff)
         a0 = , unsigned  halfword [t8 + 2]
         goto 0x802161bc
         halfword [s0 + 0x170] = v0

    loc_0x802161bc: // orphan
         // CODE XREF from fcn.8021edac @ 0x80216128
         ra = [sp + 0x34]         // t9
         // CODE XREF from fcn.80215c00 @ +0x4c4
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]
         sp += 0x58
         ret                      // t9
         v0 = 0

    loc_0x80216314: // orphan
         at = 0x43a0 << 16
         mtc1 at, f6
         t6 = t5 + v0
         mtc1 t6, f16
         
         cvt.s.w f4, f16
         sub.s f8, f4, f6
         goto 0x8021637c
         swc1 f8, 0x24, s0

    loc_0x8021637c: // orphan
         // CODE XREF from fcn.8021edac @ 0x80216330
         // CODE XREF from fcn.80215c00 @ +0x768
         ra = [sp + 0x1c]         // t9
         // CODE XREFS from fcn.80215c00 @ +0x5f8, +0x65c, +0x684
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // t9
         v0 = 0

    loc_0x802165f0: // orphan
         // CODE XREF from fcn.8021edac @ 0x80216624
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a0 = s0
         a1 = s2
         call 0x80037e3c          // 0x80037e3c(0x104, -1, 0x8, -1)
         a2 = s1
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // "&1" // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s0 + 0x168]        // t9
         s1 += 1
         at = , s1 < 5

    loc_0x80216624: // orphan
         if                       // likely
         s0 += 0x174

    loc_0x8021662c: // orphan
         s0 = 0x8221 << 16
         s2 = 0x8220 << 16
         s2 += 0x71e8
         s0 -= 0x628
         s1 = 0

    loc_0x80216640: // orphan
         // CODE XREF from fcn.8021edac @ 0x80216674
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a0 = s0
         a1 = s2
         call 0x80037e3c          // 0x80037e3c(0x104, -1, 0x8, -1)
         a2 = s1
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // "&1" // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s0 + 0x168]        // t9
         s1 += 1
         at = , s1 < 4
         if                       // unlikely
         s0 += 0x174

    loc_0x8021667c: // orphan
         s0 = 0x8221 << 16
         s2 = 0x8220 << 16
         s2 += 0x7414
         s0 -= 0x58
         s1 = 0
         s3 = 0 + 4

    loc_0x80216694: // orphan
         // CODE XREF from fcn.8021edac @ 0x802166c4
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a0 = s0
         a1 = s2
         call 0x80037e3c          // 0x80037e3c(0x104, -1, 0x8, -1)
         a2 = s1
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // "&1" // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s0 + 0x168]        // t9
         s1 += 1
         if                       // likely
         s0 += 0x174

    loc_0x802166cc: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x80216884: // orphan
         // CODE XREF from fcn.8021edac @ 0x802168ac
         a0 = 0x8221 << 16
         a0 = [a0 - 0x25ec]

    loc_0x8021688c: // orphan
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1 + s2
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // "&1" // 0x8004e308(0xff, 0x104, 0x8, -1)
         a2 = s1
         s1 += 1
         at = , s1 < 3
         if                       // unlikely
         

    loc_0x802168b4: // orphan
         a0 = 0x8221 << 16
         a1 = 0x6572 << 16
         a1 |= 0x616e
         call 0x8005049c          // 0x8005049c(0x82210000, 0x6572616e, 0x8, -1)
         a0 = [a0 - 0x25ec]
         a1 = 0x8220 << 16
         a1 += 0x5a14
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205a14, 0x8, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x635f << 16
         a1 |= 0x725f
         call 0x8005049c          // 0x8005049c(0x82210000, 0x635f725f, 0x0, -1)
         a0 = [a0 - 0x25ec]
         a1 = 0x8220 << 16
         a1 += 0x5a48             // "0"
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205a48, 0x0, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x7374 << 16
         a1 |= 0x5f6d
         call 0x8005049c          // 0x8005049c(0x82210000, 0x73745f6d, 0x0, -1)
         a0 = [a0 - 0x25ec]
         a1 = 0x8220 << 16
         a1 += 0x5a8c
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205a8c, 0x0, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x6675 << 16
         a1 |= 0x7369
         call 0x8005049c          // 0x8005049c(0x82210000, 0x66757369, 0x0, -1)
         a0 = [a0 - 0x25ec]
         s0 = 0x8220 << 16
         s0 += 0x5e04
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205e04, 0x0, -1)
         a2 = 0 + 3
         a0 = 0x8221 << 16
         a1 = 0x6f70 << 16
         a1 |= 0x746e
         call 0x8005049c          // 0x8005049c(0x82210000, 0x6f70746e, 0x3, -1)
         a0 = [a0 - 0x25ec]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82205e04, 0x3, -1)
         a2 = 0 + 4
         a0 = 0x8221 << 16
         a1 = 0x636f << 16
         a1 |= 0x6d69

    loc_0x80216988: // orphan
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x25ec]       // t9
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x104, 0x8, -1)
         a2 = 0 + 5
         a0 = 0x8221 << 16
         a1 = 0x6675 << 16
         a1 |= 0x5f6d
         call 0x8005049c          // 0x8005049c(0x82210000, 0x66755f6d, 0x5, -1)
         a0 = [a0 - 0x25ec]
         s0 = 0x8220 << 16
         s0 += 0x5b00
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205b00, 0x5, -1)
         a2 = 0 + 3
         a0 = 0x8221 << 16
         a1 = 0x6f70 << 16
         a1 |= 0x5f6d
         call 0x8005049c          // 0x8005049c(0x82210000, 0x6f705f6d, 0x3, -1)
         a0 = [a0 - 0x25ec]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82205b00, 0x3, -1)
         a2 = 0 + 4
         a0 = 0x8221 << 16
         a1 = 0x636f << 16
         a1 |= 0x5f6d
         call 0x8005049c          // 0x8005049c(0x82210000, 0x636f5f6d, 0x4, -1)
         a0 = [a0 - 0x25ec]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82205b00, 0x4, -1)
         a2 = 0 + 5
         a0 = 0x8221 << 16
         a1 = 0x6361 << 16
         a1 |= 0x7274
         call 0x8005049c          // 0x8005049c(0x82210000, 0x63617274, 0x5, -1)
         a0 = [a0 - 0x25ec]
         a1 = 0x8220 << 16
         a1 += 0x67c4
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x822067c4, 0x5, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x6d6f << 16
         a1 |= 0x5f6c
         call 0x8005049c          // 0x8005049c(0x82210000, 0x6d6f5f6c, 0x0, -1)
         a0 = [a0 - 0x25ec]
         a1 = 0x8220 << 16
         a1 += 0x6804
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82206804, 0x0, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x8220 << 16
         a1 += 0x5c14
         a0 = [a0 - 0x25e8]
         call 0x8004e308          // 0x8004e308(0xcedcd0cb, 0x82205c14, 0x0, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x4d57 << 16
         a1 |= 0x494e
         call 0x8005049c          // 0x8005049c(0x82210000, 0x4d57494e, 0x0, -1)
         a0 = [a0 - 0x25e8]
         a1 = 0x8220 << 16
         a1 += 0x5ce8
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205ce8, 0x0, -1)
         a2 = 0
         a0 = 0x8221 << 16
         a1 = 0x4d53 << 16
         a1 |= 0x4731
         call 0x8005049c          // 0x8005049c(0x82210000, 0x4d534731, 0x0, -1)
         a0 = [a0 - 0x25e8]
         a1 = 0x8220 << 16
         a1 += 0x5d78
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82205d78, 0x0, -1)
         a2 = 0
         s0 = 0x8220 << 16
         s2 = 0x736c << 16
         s2 |= 0x6630
         s0 += 0x6124
         s1 = 0
         s3 = 0 + 2
         a0 = [s4 + 0]            // t9

    loc_0x80216ae8: // orphan
         // CODE XREF from fcn.8021edac @ 0x80216b04
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1 + s2
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // "&1" // 0x8004e308(0xff, 0x104, 0x8, -1)
         a2 = s1
         s1 += 1
         bnel s1, s3, 0x80216ae8  // likely
         a0 = [s4 + 0]            // t9

    loc_0x80216b0c: // orphan
         a1 = 0x3170 << 16
         a1 |= 0x3170
         call 0x8005049c          // 0x8005049c(-1, 0x31703170, 0x8, -1)
         a0 = [s4 + 0]            // t9
         s0 = 0x8220 << 16
         s0 += 0x61a8
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x822061a8, 0x8, -1)
         a2 = 0
         a1 = 0x3270 << 16
         a1 |= 0x3270
         call 0x8005049c          // 0x8005049c(0xff, 0x32703270, 0x0, -1)
         a0 = [s4 + 0]            // t9
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x822061a8, 0x0, -1)
         a2 = 0 + 1               // lo
         a1 = 0x796f << 16
         a1 |= 0x7761
         call 0x8005049c          // 0x8005049c(0xff, 0x796f7761, 0x1, -1)
         a0 = [s4 + 0]            // t9
         s0 = 0x8220 << 16
         s0 += 0x6304
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82206304, 0x1, -1)
         a2 = 0
         a1 = 0x6675 << 16
         a1 |= 0x7475
         call 0x8005049c          // 0x8005049c(0xff, 0x66757475, 0x0, -1)
         a0 = [s4 + 0]            // t9
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82206304, 0x0, -1)
         a2 = 0 + 1               // lo
         a1 = 0x7475 << 16
         a1 |= 0x796f
         call 0x8005049c          // 0x8005049c(0xff, 0x7475796f, 0x1, -1)
         a0 = [s4 + 0]            // t9
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82206304, 0x1, -1)
         a2 = 0 + 2
         a1 = 0x3170 << 16
         a1 |= 0x5f6d
         call 0x8005049c          // 0x8005049c(0xff, 0x31705f6d, 0x2, -1)
         a0 = [s4 + 0]            // t9
         s1 = 0x8220 << 16
         s1 += 0x6400
         s0 = v0                  // s4
         a1 = s1
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82206400, 0x2, -1)
         a2 = 0
         a1 = 0x8221 << 16
         a1 += 0x5a0
         call 0x8005053c          // 0x8005053c(0xff, 0x822105a0, 0x0, -1)
         a0 = s0                  // s4
         s2 = 0x8221 << 16
         s2 -= 0x2474
         a1 = s2
         call 0x80050578          // 0x80050578(0xff, 0x8220db8c, 0x0, -1)
         a0 = s0                  // s4
         a1 = 0x3270 << 16
         a1 |= 0x306d

    loc_0x80216c14: // orphan
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s4 + 0]            // t9
         s0 = v0                  // s4
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x442f71dcfe117dbd, 0x8, -1)
         a2 = 0 + 1               // lo
         a1 = 0x8221 << 16
         a1 += 0x5ac
         call 0x8005053c          // 0x8005053c(0xff, 0x822105ac, 0x1, -1)
         a0 = s0                  // s4
         a0 = s0                  // s4
         call 0x80050578          // 0x80050578(0xff, 0x822105ac, 0x1, -1)
         a1 = s2
         a1 = 0x3270 << 16
         a1 |= 0x316d
         call 0x8005049c          // 0x8005049c(0xff, 0x3270316d, 0x1, -1)
         a0 = [s4 + 0]            // t9
         s0 = v0                  // s4
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x442f71dcfe117dbd, 0x1, -1)
         a2 = 0 + 1               // lo
         a1 = 0x8221 << 16
         a1 += 0x5b8
         call 0x8005053c          // 0x8005053c(0xff, 0x822105b8, 0x1, -1)
         a0 = s0                  // s4
         a0 = s0                  // s4
         call 0x80050578          // 0x80050578(0xff, 0x822105b8, 0x1, -1)
         a1 = s2
         a1 = 0x6d61 << 16
         a1 |= 0x5f30
         call 0x8005049c          // 0x8005049c(0xff, 0x6d615f30, 0x1, -1)
         a0 = [s4 + 0]            // t9
         s1 = 0x8220 << 16
         s1 += 0x64dc
         s0 = v0                  // s4
         a1 = s1
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x822064dc, 0x1, -1)
         a2 = 0
         a1 = 0x8221 << 16
         a1 += 0x5c4
         call 0x8005053c          // 0x8005053c(0xff, 0x822105c4, 0x0, -1)
         a0 = s0                  // s4
         a0 = s0                  // s4
         call 0x80050578          // 0x80050578(0xff, 0x822105c4, 0x0, -1)
         a1 = s2
         a1 = 0x6d61 << 16
         a1 |= 0x5f31
         call 0x8005049c          // 0x8005049c(0xff, 0x6d615f31, 0x0, -1)
         a0 = [s4 + 0]            // t9
         s0 = v0                  // s4
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x822064dc, 0x0, -1)
         a2 = 0 + 1               // lo
         a1 = 0x8221 << 16
         a1 += 0x5d0
         call 0x8005053c          // 0x8005053c(0xff, 0x822105d0, 0x1, -1)
         a0 = s0                  // s4
         a0 = s0                  // s4
         call 0x80050578          // 0x80050578(0xff, 0x822105d0, 0x1, -1)
         a1 = s2
         a1 = 0x6d61 << 16
         a1 |= 0x5f32
         call 0x8005049c          // 0x8005049c(0xff, 0x6d615f32, 0x1, -1)
         a0 = [s4 + 0]            // t9
         s0 = v0                  // s4
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x822064dc, 0x1, -1)
         a2 = 0 + 2
         a1 = 0x8221 << 16
         a1 += 0x5dc
         call 0x8005053c          // 0x8005053c(0xff, 0x822105dc, 0x2, -1)
         a0 = s0                  // s4
         a0 = s0                  // s4
         call 0x80050578          // 0x80050578(0xff, 0x822105dc, 0x2, -1)
         a1 = s2
         s2 = 0x8221 << 16
         s6 = 0x8221 << 16
         s4 = 0x5750 << 16
         s3 = 0x8221 << 16
         s3 -= 0x13c0
         s4 |= 0x3030
         s6 -= 0x1ee0
         s2 -= 0x13c0
         fp = 0 + 0x64
         s7 = 0xffff << 16
         s5 = sp + 0x5c
         halfword [s2 + 0xc] = 0
         s1 = 0
         if                       // unlikely
         a0 = s5

    loc_0x80216d90: // orphan
         goto 0x80216da0
         s0 = s4

    loc_0x80216d98: // orphan
         s0 = 0x4348 << 16
         s0 |= 0x3030
         // CODE XREF from fcn.8021edac @ 0x80216d90
         a1 = s6
         call 0x8007be30          // 0x8007be30(-1, 0x442f71dcfe111002, 0x8, -1)
         a2 = s1
         t7 = byte [sp + 0x5c]
         t6 = byte [sp + 0x5d]
         t9 = s0 & s7
         t8 = t7 << 8
         v1 = t6 | t8
         t0 = v1 & 0xffff
         a0 = 0x8221 << 16
         a1 = t9 | t0
         call 0x8005049c          // 0x8005049c(0x82210000, 0x43483030, 0x442f71dcfe117dbd, -1)
         a0 = [a0 - 0x25ec]
         if                       // unlikely
         s1 += 1

    loc_0x80216eb8: // orphan
         s1 = sp + 0x80
         a1 = s1
         call fcn.8220ad70
         a0 = 0
         t0 = halfword [s0 + 8]
         t1 = halfword [sp + 0x80]
         t4 = halfword [sp + 0x82] // a2
         a0 = 0
         t2 = t0 - t1
         halfword [sp + 0x80] = t2

    loc_0x802170d8: // orphan
         a1 |= 0x5f63
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe117f6b, 0x8, -1)
         a0 = [a0 - 0x25ec]       // t9
         if                       // unlikely
         t6 = halfword [sp + 0x80]

    loc_0x8021a098: // orphan
         t3 = halfword [a0 + 2]
         lwc1 f8
         t4 = halfword [v1 + 0]
         mtc1 t3, f4
         lwc1 f0, 0x10, v0
         mtc1 t4, f16
         cvt.s.w f12, f4
         lwc1 f6, 0x14, v0
         a1 += 4
         v0 += 0x60
         cvt.s.w f18, f16
         mul.s f10, f8, f12
         
         mul.s f4, f0, f12
         lwc1 f0, -0x38, v0
         add.s f2, f6, f10
         add.s f8, f18, f4
         swc1 f8, -0x60, v0
         t6 = halfword [a0 + 2]
         t5 = halfword [v1 + 2]
         mtc1 t6, f16
         mtc1 t5, f6
         cvt.s.w f18, f16
         lwc1 f16, -0x34, v0
         cvt.s.w f10, f6
         mul.s f4, f2, f18
         add.s f8, f10, f4
         swc1 f8, -0x5c, v0
         t7 = halfword [a0 + 2]
         lwc1 f18
         t8 = halfword [v1 + 0]
         mtc1 t7, f6
         mtc1 t8, f4
         cvt.s.w f12, f6
         cvt.s.w f8, f4
         mul.s f10, f18, f12
         
         mul.s f6, f0, f12
         lwc1 f0, -0x20, v0
         add.s f2, f16, f10
         add.s f18, f8, f6
         swc1 f18, -0x48, v0
         t0 = halfword [a0 + 2]
         t9 = halfword [v1 + 2]
         mtc1 t0, f4
         mtc1 t9, f16
         cvt.s.w f8, f4
         lwc1 f4, -0x1c, v0
         cvt.s.w f10, f16
         mul.s f6, f2, f8
         add.s f18, f10, f6

    loc_0x8021a164: // orphan
         swc1 f18, -0x44, v0
         t1 = halfword [a0 + 2]
         lwc1 f8
         t2 = halfword [v1 + 0]
         mtc1 t1, f16
         mtc1 t2, f6
         cvt.s.w f12, f16
         cvt.s.w f18, f6
         mul.s f10, f8, f12
         
         mul.s f16, f0, f12
         lwc1 f0, -8, v0
         add.s f2, f4, f10
         add.s f8, f18, f16
         swc1 f8, -0x30, v0
         t4 = halfword [a0 + 2]
         t3 = halfword [v1 + 2]
         mtc1 t4, f6
         mtc1 t3, f4
         cvt.s.w f18, f6
         lwc1 f6, -4, v0
         cvt.s.w f10, f4
         mul.s f16, f2, f18
         add.s f8, f10, f16
         swc1 f8, -0x2c, v0
         t5 = halfword [a0 + 2]
         lwc1 f18
         t6 = halfword [v1 + 0]
         mtc1 t5, f4
         mtc1 t6, f16
         cvt.s.w f12, f4
         cvt.s.w f8, f16
         mul.s f10, f18, f12
         
         mul.s f4, f0, f12
         add.s f2, f6, f10
         add.s f18, f8, f4
         swc1 f18, -0x18, v0
         t8 = halfword [a0 + 2]
         t7 = halfword [v1 + 2]
         mtc1 t8, f16
         mtc1 t7, f6
         cvt.s.w f8, f16
         cvt.s.w f10, f6
         mul.s f4, f2, f8
         add.s f18, f10, f4
         if                       // likely
         swc1 f18, -0x14, v0

    loc_0x8021a224: // orphan
         ret                      // ra
         

    loc_0x8021a368: // orphan
         at = 0xbf00 << 16
         mtc1 at, f30
         at = 0x4000 << 16
         mtc1 at, f28
         at = 0x4480 << 16
         mtc1 at, f26
         at = 0x8221 << 16
         lwc1 f24, -0x1e40, at
         at = 0x3f00 << 16
         mtc1 at, f22
         mtc1 0, f20
         s1 = 0
         s3 = 0 + 0x10

    loc_0x8021a544: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         ra = [sp + 0x14]
         at = 0x8221 << 16
         [at + 0x9d4] = v0
         ret
         sp += 0x18

    loc_0x8021a610: // orphan
         sp -= 0x20
         [sp + 0x14] = ra
         t6 = halfword [a0 + 2]
         a2 = a0                  // t9
         a3 = 0 + 0x9b
         t7 = t6 + 1              // lo
         halfword [a0 + 2] = t7
         v0 = halfword [a0 + 2]   // lo
         at = , v0 < 0x15         // lo
         beql at, 0, 0x8021a6b0   // unlikely
         halfword [a2 + 0] = 0

    loc_0x8021a63c: // orphan
         unsigned , hi            // t9 // s2
         at = 0 + 0x14
         t8 = v0 << 2
         t8 -= v0
         t9 = 0x8221 << 16
         t9 -= 0x1e30
         t8 <<= 2
         v1 = t8 + t9
         t0 = lo
         
         
         div 0, t0, at
         t1 = lo
         t2 = a3 - t1             // t3
         halfword [a0 + 4] = t2
         a1 = halfword [v1 + 0]
         [sp + 0x20] = a2
         [sp + 0x1c] = v1
         call 0x8004c990          // 0x8004c990(-1, 0xec2, 0x8, -1)
         a0 = 0 + 0x9f
         a2 = [sp + 0x20]
         v1 = [sp + 0x1c]
         [a2 + 8] = v0
         lwc1 f4, 4, v1
         swc1 f4, 0x10, a2
         lwc1 f6, 8, v1
         goto 0x8021a6b0
         swc1 f6, 0x14, a2

    loc_0x8021a6b0: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021a6a4
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x8021a6dc: // orphan
         a1 = 0 + 0xc4
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8021a7b8: // orphan
         s4 = 0xe700 << 16
         s5 = 0xfb00 << 16
         s6 = 0 - 0x100
         [v0 + 0] = t7
         [v0 + 4] = t8
         t9 = halfword [s1 + 4]

    loc_0x8021a7d0: // orphan
         s0 = s1 + 4
         beql t9, 0, 0x8021a9b4   // unlikely
         s1 += 0x18

    loc_0x8021a7dc: // orphan
         a0 = [s0 + 8]            // t9
         beql a0, 0, 0x8021a9b4   // unlikely
         s1 += 0x18

    loc_0x8021a7e8: // orphan
         t1 = halfword [s0 + 4]   // s4
         blezl t1, 0x8021a9b4     // unlikely
         s1 += 0x18

    loc_0x8021a7f4: // orphan
         lwc1 f0, 0x10, s0
         c.lt.s f30, f0
         
         bc1fl 0x8021a9b4
         s1 += 0x18
         lwc1 f2, 0x14, s0
         c.lt.s f30, f2
         
         bc1fl 0x8021a9b4
         s1 += 0x18
         t2 = , unsigned  halfword [a0 + 0]
         add.s f26, f0, f0
         at = 0x4f80 << 16
         mtc1 t2, f4
         add.s f28, f2, f2
         if                       // likely
         cvt.s.w f6, f4

    loc_0x8021a840: // orphan
         add.s f6, f6, f8
         t3 = , unsigned  halfword [a0 + 2] // lo
         mul.s f22, f6, f26
         at = 0x4f80 << 16
         mtc1 t3, f10
         if                       // likely
         cvt.s.w f16, f10

    loc_0x8021a85c: // orphan
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x8021a868: // orphan
         c.lt.s f30, f22
         mul.s f24, f16, f28
         at = 0xbf00 << 16
         bc1fl 0x8021a890
         mtc1 at, f20
         at = 0x3f00 << 16
         mtc1 at, f20

    loc_0x8021a884: // orphan
         goto 0x8021a898
         add.s f4, f20, f22

    loc_0x8021a898: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021a884
         at = 0xbf00 << 16
         c.lt.s f30, f24
         trunc.w.s f8, f4
         mfc1 s2, f8
         bc1fl 0x8021a8c4
         mtc1 at, f20
         at = 0x3f00 << 16
         mtc1 at, f20
         goto 0x8021a8c8
         

    loc_0x8021a8c8: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021a8b8
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = [s3 + 0]            // lo
         at = 0x4000 << 16
         mtc1 at, f0
         t5 = v0 + 8
         [s3 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = s4
         v0 = [s3 + 0]
         div.s f18, f22, f0
         at = 0x4480 << 16
         t6 = v0 + 8
         [s3 + 0] = t6
         [v0 + 0] = s5
         t7 = halfword [s0 + 4]   // s4
         mtc1 at, f2

    loc_0x8021a90c: // orphan
         a2 = s2 << 0x10
         t8 = t7 & 0xff
         t9 = t8 | s6
         [v0 + 4] = t9
         t1 = halfword [s0 + 0xc]
         t3 = halfword [s0 + 0xe]
         [sp + 0x20] = 0
         mtc1 t1, f6
         mtc1 t3, f8
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a2 = , signed  a2 >> 0x10 // t9
         cvt.s.w f10, f6
         cvt.s.w f6, f8
         sub.s f16, f10, f18
         div.s f10, f24, f0
         trunc.w.s f4, f16

    loc_0x8021a950: // orphan
         mfc1 a0, f4
         
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         add.s f4, f20, f24
         sub.s f18, f6, f10
         div.s f6, f2, f26
         trunc.w.s f16, f18
         trunc.w.s f8, f4
         mfc1 a1, f16
         mfc1 a3, f8
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         div.s f18, f2, f28
         trunc.w.s f10, f6
         mfc1 t7, f10
         
         [sp + 0x18] = t7
         trunc.w.s f16, f18
         mfc1 t9, f16
         call 0x80044270          // "&1" // 0x80044270(-1, 0xffff6408, 0x8, -1)
         [sp + 0x1c] = t9
         s1 += 0x18

    loc_0x8021a9b4: // orphan
         bnel s1, s7, 0x8021a7d0  // likely
         t9 = halfword [s1 + 4]

    loc_0x8021a9bc: // orphan
         ra = [sp + 0x7c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         ldc1 f24, 0x38, sp
         ldc1 f26, 0x40, sp
         ldc1 f28, 0x48, sp
         ldc1 f30, 0x50, sp

    loc_0x8021a9d8: // orphan
         s0 = [sp + 0x5c]
         s1 = [sp + 0x60]         // t9
         s2 = [sp + 0x64]         // s4
         s3 = [sp + 0x68]         // s4
         s4 = [sp + 0x6c]
         s5 = [sp + 0x70]         // s4
         s6 = [sp + 0x74]         // s4
         s7 = [sp + 0x78]
         ret                      // ra
         sp += 0x80

    loc_0x8021aa1c: // orphan
         v0 += 1
         ret                      // ra
         

    loc_0x8021abe0: // orphan
         t1 = lo
         
         
         div 0, t1, v1
         t2 = lo
         t3 = a2 - t2
         if                       // likely
         

    loc_0x8021ac00: // orphan
         break 7

    loc_0x8021ac04: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8021ac10: // orphan
         if                       // likely
         

    loc_0x8021ac18: // orphan
         break 6

    loc_0x8021ac1c: // orphan
         halfword [a0 + 0xc] = t3
         ret                      // ra
         

    loc_0x8021acb8: // orphan
         
         break 6

    loc_0x8021aff8: // orphan
         v0 = halfword [s0 + 0xc]
         bgezl v0, 0x8021b010     // likely
         t0 = [v1 + 0]

    loc_0x8021b004: // orphan
         halfword [s0 + 0xc] = 0
         v0 = halfword [s0 + 0xc]
         t0 = [v1 + 0]

    loc_0x8021b010: // orphan
         t3 = v0 + 1
         t1 = , unsigned  halfword [t0 + 8]
         t2 = t1 & 0x400
         if                       // unlikely
         

    loc_0x8021b024: // orphan
         halfword [s0 + 0xc] = t3
         v0 = halfword [s0 + 0xc] // t3
         t4 = 0 + 1               // lo
         at = , v0 < 2
         if                       // unlikely
         

    loc_0x8021b03c: // orphan
         halfword [s0 + 0xc] = t4
         v0 = halfword [s0 + 0xc]

    loc_0x8021b044: // orphan
         beql a1, v0, 0x8021b060  // unlikely
         t5 = [v1 + 0]

    loc_0x8021b04c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         v1 = 0x8008 << 16
         v1 += 0x7200
         t5 = [v1 + 0]            // t9

    loc_0x8021b060: // orphan
         v0 = , unsigned  halfword [t5 + 8]
         t6 = v0 & 0x8000
         if                       // likely
         t0 = v0 & 0x4000

    loc_0x8021b070: // orphan
         t7 = halfword [s0 + 0xc]
         t8 = 0 + 4
         a0 = 0 + 0x15
         if                       // likely
         t9 = 0 + 1               // lo

    loc_0x8021b084: // orphan
         halfword [s0 + 2] = t8
         halfword [s0 + 8] = 0
         call 0x8005311c          // 0x8005311c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x800226c0          // 0x800226c0(-1, 0x0, 0x8, -1)
         a0 = 0 + 0x43
         goto 0x8021b0bc
         t2 = [sp + 0x24]

    loc_0x8021b0a4: // orphan
         goto 0x8021b0b8
         [sp + 0x24] = t9

    loc_0x8021b0ac: // orphan
         if                       // unlikely
         t1 = 0 + 1               // lo

    loc_0x8021b0b4: // orphan
         [sp + 0x24] = t1

    loc_0x8021b0b8: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021b0a4
         t2 = [sp + 0x24]
         // CODE XREF from fcn.8021edac @ 0x8021b09c
         t3 = 0 + 2
         a0 = s0 + 0x2a
         beql t2, 0, 0x8021b0f0   // unlikely
         ra = [sp + 0x1c]         // t9

    loc_0x8021b2e4: // orphan
         t4 = 0xf0a << 16
         t2 = v0 + 8
         [v1 + 0] = t2
         t4 |= 0x4000
         t3 |= 0x1c
         [v0 + 0] = t3
         [v0 + 4] = t4
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x54, sp
         a0 = sp + 0x64
         a1 = sp + 0x60
         call fcn.8220c42c
         a2 = s0                  // "\n@"
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]
         lwc1 f2, 0x54, sp
         t6 = 0xe700 << 16
         t5 = v0 + 8
         [v1 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t8 = 0xfb00 << 16
         at = 0x4480 << 16
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         t2 = , unsigned  byte [sp + 0x64]
         t5 = , unsigned  byte [sp + 0x65]
         t9 = , unsigned  byte [sp + 0x66]
         mtc1 at, f4
         t3 = t2 << 0x18
         t6 = t5 << 0x10
         div.s f0, f4, f2
         t7 = t3 | t6
         t2 = t9 << 8
         t4 = t7 | t2
         t5 = t4 | 0xff           // s4
         [v0 + 4] = t5
         v0 = [v1 + 0]
         t6 = 0xfa00 << 16

    loc_0x8021b38c: // orphan
         mtc1 0, f8
         t3 = v0 + 8
         [v1 + 0] = t3
         [v0 + 0] = t6
         t9 = , unsigned  byte [sp + 0x60] // s4
         t4 = , unsigned  byte [sp + 0x61] // s4
         t8 = , unsigned  byte [sp + 0x62] // s4
         t7 = t9 << 0x18
         t5 = t4 << 0x10
         t3 = t7 | t5
         t9 = t8 << 8
         t2 = t3 | t9
         t4 = t2 | 0xff           // t9
         [v0 + 4] = t4
         t5 = halfword [s0 + 0x12]
         t7 = halfword [s0 + 0xa]
         t8 = halfword [s0 + 0x14]
         t6 = halfword [s0 + 0xc]
         c.lt.s f8, f0
         t0 = t7 + t5
         t1 = t6 + t8
         t0 <<= 0x10
         t1 <<= 0x10
         t0 = , signed  t0 >> 0x10
         bc1f 0x8021b404
         t1 = , signed  t1 >> 0x10
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x8021b414
         add.s f16, f2, f0

    loc_0x8021b414: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021b3fc
         a2 = halfword [s0 + 6]
         a3 = halfword [s0 + 8]
         a0 = t0 + 5
         trunc.w.s f6, f16
         a1 = t1 + 5
         a2 -= 0xa
         a3 -= 0xa
         mfc1 t9, f6
         a3 <<= 0x10
         a2 <<= 0x10
         a1 <<= 0x10
         a0 <<= 0x10
         t2 = 0 + 0x400
         [sp + 0x1c] = t2
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         a2 = , signed  a2 >> 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(0xffff640d, 0xffff0010, 0xfffffff6, 0xfffffff6)
         [sp + 0x18] = t9
         ra = [sp + 0x34]         // t9
         s0 = [sp + 0x30]
         sp += 0x80
         ret                      // t9
         

    loc_0x8021b65c: // orphan
         a0 <<= 0x10
         a2 = t5 - v1
         a2 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         v0 = , signed  v0 >> 0x10
         a1 = s2 << 0x10
         a3 = s5 << 0x10
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         a3 = , signed  a3 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10 // t9
         [sp + 0x10] = v0
         [sp + 0x58] = v0
         [sp + 0x60] = a0
         a2 = , signed  a2 >> 0x10
         [sp + 0x5c] = v1
         [sp + 0x20] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, -1, 0xfffffddf, -1)
         [sp + 0x14] = 0
         t3 = halfword [s0 + 6]
         v0 = [sp + 0x58]
         a1 = s2 << 0x10
         t8 = s1 + t3
         a0 = t8 - s3
         a0 <<= 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t9 = 0 + 0x400
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t9
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10 // t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xffff7dbe, -1, 0xff, -1)
         [sp + 0x10] = v0
         t7 = halfword [s0 + 8]
         v0 = [sp + 0x5c]         // v1
         a1 = s2 + s6
         v1 = s6 << 1
         v0 <<= 5
         v0 <<= 0x10
         a1 <<= 0x10
         a3 = t7 - v1
         a3 <<= 0x10
         a1 = , signed  a1 >> 0x10
         v0 = , signed  v0 >> 0x10
         a0 = s1 << 0x10
         a2 = s4 << 0x10
         t5 = 0 + 0x400
         [sp + 0x18] = t5
         a2 = , signed  a2 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10
         [sp + 0x10] = v0
         [sp + 0x50] = v0
         [sp + 0x58] = a1
         a3 = , signed  a3 >> 0x10
         [sp + 0x54] = v1
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0xffff7dbd, 0xffff1001, 0xff, 0xffffdffc)
         [sp + 0x14] = 0
         t6 = halfword [s0 + 8]
         v0 = [sp + 0x50]
         a0 = s1 << 0x10
         t3 = s2 + t6
         a1 = t3 - s6
         a1 <<= 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t8 = 0 + 0x400
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xffff7dbd, 0xffffeffd, 0xff, -1)
         [sp + 0x10] = v0
         t4 = halfword [s0 + 8]
         t5 = halfword [s0 + 6]
         t6 = [sp + 0x5c]         // v1
         v0 = s3 << 2
         v0 -= s3
         v0 <<= 5
         t7 = s2 + t4
         a1 = t7 - s6
         v0 <<= 0x10
         a2 = t5 - t6
         a2 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a1 <<= 0x10
         a3 = s5 << 0x10
         t3 = 0 + 0x400
         [sp + 0x1c] = t3
         a3 = , signed  a3 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = v0
         [sp + 0x50] = v0
         a2 = , signed  a2 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xffff7dbd, 0xffffeffd, 0xfffffde0, -1)
         a0 = halfword [sp + 0x62]
         t8 = halfword [s0 + 6]
         t4 = halfword [s0 + 8]
         t5 = [sp + 0x50]
         t9 = s1 + t8
         t7 = s2 + t4
         a1 = t7 - s6
         a0 = t9 - s3
         a0 <<= 0x10
         a1 <<= 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t6 = 0 + 0x400
         t3 = 0 + 0x400
         [sp + 0x1c] = t3
         [sp + 0x18] = t6
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xffff7dbe, 0xffffeffd, 0xff, -1)
         [sp + 0x10] = t5
         t8 = halfword [s0 + 6]
         t4 = halfword [s0 + 8]
         t7 = [sp + 0x54]
         t9 = s1 + t8
         t5 = [sp + 0x50]
         a0 = t9 - s3
         a3 = t4 - t7
         a3 <<= 0x10
         a0 <<= 0x10
         a2 = s4 << 0x10
         t6 = 0 + 0x400
         [sp + 0x18] = t6
         a2 = , signed  a2 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x14] = 0
         a1 = halfword [sp + 0x5a]
         call 0x80044270          // 0x80044270(0xffff7dbe, 0x1001, 0xff, 0xffffdffc)
         [sp + 0x10] = t5
         ra = [sp + 0x4c]
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]         // t9
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]         // s0
         s5 = [sp + 0x44]         // ra
         s6 = [sp + 0x48]         // s4
         ret
         sp += 0x98

    loc_0x8021b93c: // orphan
         at = s0 + 3
         s0 = , signed  at >> 2
         s2 = s0 << 0x10
         s3 = s1 << 0x10
         a1 = halfword [sp + 0x7e]
         s3 = , signed  s3 >> 0x10
         s2 = , signed  s2 >> 0x10
         a2 = s2 << 0x10
         a3 = s3 << 0x10
         t6 = 0 + 0x400
         t7 = 0 + 0x400
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         [sp + 0x68] = a0
         call 0x80044270          // 0x80044270(-1, 0x6408, 0x41, 0xffff7dbd)
         [sp + 0x64] = a1
         t8 = [sp + 0x78]
         t9 = [sp + 0x80]
         v1 = s0 << 1
         v0 = s0
         a0 = t8 + s0
         a2 = t9 - v1
         a2 <<= 0x10
         a0 <<= 0x10
         v0 <<= 0x15
         v0 = , signed  v0 >> 0x10
         a0 = , signed  a0 >> 0x10
         a2 = , signed  a2 >> 0x10
         a3 = s3 << 0x10
         t0 = 0 + 0x400
         [sp + 0x1c] = t0
         a3 = , signed  a3 >> 0x10
         [sp + 0x50] = a2
         [sp + 0x58] = a0
         [sp + 0x10] = v0
         [sp + 0x4c] = v0
         [sp + 0x54] = v1
         a1 = halfword [sp + 0x66]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0xffff876f, 0x6408, 0xffffff86, 0xffff7dbd)
         [sp + 0x20] = 0
         t1 = [sp + 0x78]
         t2 = [sp + 0x80]
         v0 = [sp + 0x4c]
         a2 = s2 << 0x10
         t3 = t1 + t2
         a0 = t3 - s0
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         a3 = s3 << 0x10
         t4 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         a3 = , signed  a3 >> 0x10
         [sp + 0x48] = a0
         a2 = , signed  a2 >> 0x10
         a1 = halfword [sp + 0x66]
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff86f5, 0x6408, 0x41, 0xffff7dbd)
         [sp + 0x10] = v0
         t6 = [sp + 0x7c]
         t7 = [sp + 0x84]         // t9
         v0 = [sp + 0x54]
         t8 = s1 << 1
         a1 = t6 + s1
         a3 = t7 - t8
         v0 <<= 5
         v0 <<= 0x10
         a3 <<= 0x10
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 = , signed  a3 >> 0x10
         v0 = , signed  v0 >> 0x10
         a2 = s2 << 0x10
         t9 = 0 + 0x400
         [sp + 0x18] = t9
         a2 = , signed  a2 >> 0x10
         [sp + 0x10] = v0
         [sp + 0x44] = v0
         [sp + 0x4c] = a3
         [sp + 0x64] = a1
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0xffff, 0xffffe1c5, 0x41, 0xffff0485)
         [sp + 0x20] = 0
         t0 = [sp + 0x7c]
         t1 = [sp + 0x84]         // t9
         v0 = [sp + 0x44]
         a2 = s2 << 0x10
         t2 = t0 + t1
         a1 = t2 - s1
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 = s3 << 0x10
         t3 = 0 + 0x400
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         a3 = , signed  a3 >> 0x10
         [sp + 0x54] = a1
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff, 0xffffe64a, 0x41, 0xffff7dbd)
         [sp + 0x10] = v0
         s1 = s0 << 2
         s1 -= s0
         s1 <<= 5
         s1 <<= 0x10
         s1 = , signed  s1 >> 0x10
         a3 = s3 << 0x10
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         a3 = , signed  a3 >> 0x10
         [sp + 0x10] = s1
         a0 = halfword [sp + 0x5a]
         a1 = halfword [sp + 0x56]
         a2 = halfword [sp + 0x52]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0x876f, 0xe64a, 0xff86, 0xffff7dbd)
         [sp + 0x20] = 0
         a2 = s2 << 0x10
         a3 = s3 << 0x10
         t6 = 0 + 0x400
         t7 = 0 + 0x400
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x4a]
         a1 = halfword [sp + 0x56]
         [sp + 0x10] = s1
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x86f5, 0xe64a, 0x41, 0xffff7dbd)
         [sp + 0x20] = 0
         a2 = s2 << 0x10
         t8 = 0 + 0x400
         [sp + 0x18] = t8
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x4a]
         a1 = halfword [sp + 0x66]
         a3 = halfword [sp + 0x4e]
         [sp + 0x10] = s1
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x86f5, 0xe1c5, 0x41, 0x485)
         [sp + 0x20] = 0
         ra = [sp + 0x3c]
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]
         s2 = [sp + 0x34]         // t9
         s3 = [sp + 0x38]
         ret
         sp += 0x78

    loc_0x8021edac: // orphan
           // CALL XREF from fcn.809a4004 @ +0x1000
         if                       // unlikely
         if                       // unlikely

    loc_0x8021edb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021edc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021edd0: // orphan
         if                       // fcn.80206808+0x2c // unlikely
         if                       // unlikely

    loc_0x8021eddc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ede8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021edf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee3c: // orphan
         
         if                       // fcn.80207090+0x14 // unlikely
         if                       // fcn.80207090+0x28 // unlikely

    loc_0x8021ee4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee58: // orphan
         
         if                       // fcn.801ec368+0x1afa8 // unlikely
         if                       // unlikely

    loc_0x8021ee68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ee74: // orphan
         if                       // unlikely
         

    loc_0x8021ee7c: // orphan
         
         if                       // fcn.801f6c00+0x10b84 // unlikely
         if                       // unlikely

    loc_0x8021ee8c: // orphan
         if                       // fcn.80207840 // unlikely
         

    loc_0x8021ee94: // orphan
         
         if                       // fcn.80207840+0x5c // unlikely
         if                       // fcn.80207840+0x90 // unlikely

    loc_0x8021eea4: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021eec0: // orphan
         
         
         
         if                       // fcn.8020888c+0x34 // unlikely
         if                       // fcn.8020888c+0x48 // unlikely

    loc_0x8021eed8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021cbcc @ +0x66c
         

    loc_0x8021eee0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021eef0: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x670
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef0c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef34: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x674
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef64: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef74: // orphan
         if                       // unlikely
         

    loc_0x8021ef7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ef94: // orphan
         if                       // unlikely
         

    loc_0x8021ef9c: // orphan
         
         
         if                       // fcn.801f6c00+0x13488 // unlikely
         if                       // unlikely

    loc_0x8021efb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021efbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021efc4: // orphan
         if                       // unlikely

    loc_0x8021efc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021efd0: // orphan
         if                       // unlikely

    loc_0x8021efd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021efdc: // orphan
         if                       // unlikely

    loc_0x8021efe0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021efe8: // orphan
         if                       // fcn.801f6c00+0x136fc // unlikely

    loc_0x8021efec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021eff4: // orphan
         

    loc_0x8021eff8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f010: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f01c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f028: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f034: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f040: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f04c: // orphan
         if                       // unlikely
         

    loc_0x8021f054: // orphan
         
         if                       // fcn.801f6c00+0x13d9c // unlikely
         if                       // unlikely

    loc_0x8021f064: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f074: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f080: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f08c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f098: // orphan
         if                       // unlikely
         

    loc_0x8021f0a0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f0b0: // orphan
         if                       // unlikely
         if                       // fcn.8020c420+0x58 // unlikely

    loc_0x8021f0bc: // orphan
         if                       // unlikely
         // CALL XREF from fcn.8259ed6c @ +0x1bdc
         // CALL XREF from fcn.825a2ca8 @ +0x5d0
         if                       // unlikely

    loc_0x8021f0c8: // orphan
         if                       // fcn.801f7004+0x157c8 // unlikely
         if                       // unlikely

    loc_0x8021f0d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f250: // orphan
         

    loc_0x8021f254: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f264: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f270: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f27c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f288: // orphan
         if                       // fcn.80210250+0x2c // unlikely
         

    loc_0x8021f290: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8021f2ac: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8021fc94: // orphan
         t2 += 0x510
         mtc1 v0, f6
         cvt.s.w f16, f8
         if                       // likely
         cvt.s.w f10, f6

    loc_0x8021fca8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f10, f10, f18

    loc_0x8021fcb8: // orphan
         t7 = , unsigned  halfword [s0 + 0xc]
         div.s f0, f16, f10
         at = 0x4480 << 16
         t8 = t7 & 2
         beql t8, 0, 0x8021fd3c   // unlikely
         mtc1 at, f16

    loc_0x8021fcd0: // orphan
         at = 0xc480 << 16
         mtc1 at, f4
         mtc1 0, f8
         t3 = v0 - 1
         div.s f2, f4, f0
         t3 <<= 5
         at = 0xbf00 << 16
         c.lt.s f8, f2
         
         bc1fl 0x8021fd20
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         
         add.s f6, f0, f2
         trunc.w.s f18, f6
         mfc1 t0, f18
         goto 0x8021fd88
         v0 = [t2 + 0]

    loc_0x8021fd3c: // orphan
         mtc1 0, f10
         t3 = 0
         div.s f2, f16, f0
         at = 0xbf00 << 16
         c.lt.s f10, f2
         
         bc1fl 0x8021fd70
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x8021fd78
         add.s f4, f0, f2

    loc_0x8021fd78: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021fd64
         trunc.w.s f8, f4
         mfc1 t0, f8
         
         v0 = [t2 + 0]

    loc_0x8021fd88: // orphan
         // CODE XREF from fcn.8021edac @ 0x8021fd14
         t7 = 0xe700 << 16
         t9 = 0xfb00 << 16
         t5 = v0 + 8
         [t2 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [t2 + 0]
         v1 = s0 + 0x21
         t8 = v0 + 8

    loc_0x80220088: // orphan
         t0 = 0 + 2
         halfword [s0 + 0x18] = t0
         a0 = 0 + 0x11c           // arg1
         a1 = 0 + 1               // arg2 // lo
         call 0x8004c990          // 0x8004c990(0x11c, 0x1, 0x8, -1)
         [sp + 0x34] = a3
         a3 = [sp + 0x34]         // t9
         goto 0x802200d0
         v1 = v0                  // s4

    loc_0x802200d0: // orphan
         // CODE XREF from fcn.8021edac @ 0x802200a4
         t2 = [sp + 0x38]
         a0 = a3                  // s2
         a1 = 0
         if                       // unlikely
         a2 = t2

    loc_0x802200e4: // orphan
         call 0x80049148          // 0x80049148(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v1
         halfword [s0 + 0x12] = v0
         t3 = halfword [s0 + 0x12] // s4
         v1 = [sp + 0x20]
         t4 = t3 + 0x4b           // "|"
         if                       // unlikely
         // UNKNOWN XREF from fcn.82d05bd8 @ +0x48
         halfword [s0 + 0x14] = t4

    loc_0x80220104: // orphan
         t5 = halfword [s0 + 0x14] // "|"
         t6 = , unsigned  halfword [v1 + 0]
         t7 = t5 + t6             // "|"
         t8 = t7 + 2
         goto 0x80220120
         halfword [s0 + 0x14] = t8

    loc_0x8022011c: // orphan
         halfword [s0 + 0x14] = 0

    loc_0x80220120: // orphan
         // CODE XREF from fcn.8021edac @ 0x80220114
         t9 = , unsigned  halfword [s0 + 0xc]
         t1 = [sp + 0x28]
         t0 = t9 | 1
         t2 = t1 & 1
         if                       // likely
         halfword [s0 + 0xc] = t0

    loc_0x80220138: // orphan
         t4 = t0 | 2
         halfword [s0 + 0xc] = t4

    loc_0x80220140: // orphan
         ra = [sp + 0x1c]
         v0 = [sp + 0x24]
         s0 = [sp + 0x18]
         ret
         sp += 0x28

    loc_0x80220624: // orphan
         v1 = 0 + 0x13
         at = 0x3f80 << 16
         t3 = fcn.82300000 << 16
         mtc1 at, f0
         t3 = [t3 + 0x5b84]
         t8 = a3 << 3             // arg4
         t0 = a0 + t8             // arg1
         t1 = t0 + 8              // t9
         t4 = t0 + 0x10
         a2 = 0
         t2 = a1 & 1              // arg2

    loc_0x80220650: // orphan
         if                       // likely
         t6 = t5 - v1

    loc_0x80220658: // orphan
         at = , v1 < a2
         bnel at, 0, 0x80220698   // unlikely
         t0 = halfword [t1 + 0]   // t3

    loc_0x80220664: // orphan
         t9 = halfword [t1 + 0]   // t3
         bgezl t9, 0x80220698     // likely
         t0 = halfword [t1 + 0]   // t3

    loc_0x80220670: // orphan
         goto 0x80220694
         halfword [t1 + 0] = 0

    loc_0x80220678: // orphan
         at = , a2 < t6
         bnel at, 0, 0x80220698   // unlikely
         t0 = halfword [t1 + 0]

    loc_0x80220684: // orphan
         t7 = halfword [t1 + 0]
         bgezl t7, 0x80220698     // likely
         t0 = halfword [t1 + 0]

    loc_0x80220690: // orphan
         halfword [t1 + 0] = 0

    loc_0x80220694: // orphan
         // CODE XREF from fcn.8021edac @ 0x80220670
         t0 = halfword [t1 + 0]

    loc_0x80220698: // orphan
         if                       // unlikely
         at = , t0 < t3

    loc_0x802206a0: // orphan
         if                       // unlikely
         t8 = t0 + 1

    loc_0x802206a8: // orphan
         halfword [t1 + 0] = t8
         t9 = halfword [t1 + 0]
         mtc1 t3, f8
         mtc1 t9, f4
         cvt.s.w f10, f8
         cvt.s.w f6, f4
         div.s f16, f6, f10
         goto 0x802206d0
         swc1 f16, 4, t1

    loc_0x802206cc: // orphan
         swc1 f0, 4, t1

    loc_0x802206d0: // orphan
         // CODE XREF from fcn.8021edac @ 0x802206c4
         t6 = halfword [a0 + 4]   // t3
         if                       // unlikely
         

    loc_0x802206dc: // orphan
         lwc1 f18, 4, t1
         sub.s f4, f0, f18
         swc1 f4, 4, t1

    loc_0x802206e8: // orphan
         if                       // likely
         t1 += 0x10

    loc_0x802206f0: // orphan
         at = , a2 < v1           // lo
         beql at, 0, 0x80220738   // unlikely
         t0 = halfword [t4 + 0]

    loc_0x802206fc: // orphan
         t7 = halfword [t4 + 0]
         bgezl t7, 0x80220738     // likely
         t0 = halfword [t4 + 0]

    loc_0x80220708: // orphan
         goto 0x80220734
         halfword [t4 + 0] = 0

    loc_0x80220710: // orphan
         t8 = t5 - v1
         t9 = t8 - 1
         at = , a2 < t9           // lo
         bnel at, 0, 0x80220738   // likely
         t0 = halfword [t4 + 0]

    loc_0x80220724: // orphan
         t6 = halfword [t4 + 0]
         bgezl t6, 0x80220738     // likely
         t0 = halfword [t4 + 0]

    loc_0x80220730: // orphan
         halfword [t4 + 0] = 0

    loc_0x80220734: // orphan
         // CODE XREF from fcn.8021edac @ 0x80220708
         t0 = halfword [t4 + 0]

    loc_0x80220738: // orphan
         a2 += 2                  // arg3
         if                       // unlikely
         at = , t0 < t3

    loc_0x80220744: // orphan
         if                       // unlikely
         t7 = t0 + 1

    loc_0x8022074c: // orphan
         halfword [t4 + 0] = t7
         t8 = halfword [t4 + 0]
         mtc1 t3, f10
         mtc1 t8, f8
         cvt.s.w f16, f10
         cvt.s.w f6, f8
         div.s f18, f6, f16
         goto 0x80220774
         swc1 f18, 4, t4

    loc_0x80220770: // orphan
         swc1 f0, 4, t4
         // CODE XREF from fcn.8021edac @ 0x80220768
         t9 = halfword [a0 + 4]   // t3
         if                       // unlikely
         

    loc_0x8022078c: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x6dc
         if                       // likely
         t4 += 0x10

    loc_0x80220794: // orphan
         a1 += 1                  // arg2
         at = , a1 < 0xf          // arg2
         if                       // unlikely
         a3 += 0x14               // arg4

    loc_0x802208ec: // orphan
         v1 += 0x510
         s7 |= 0x200              // t9
         s2 = 0
         fp = 0xe600 << 16
         s6 = 0xf510 << 16
         s5 = 0xfd10 << 16
         s4 = 0xe700 << 16
         t3 = 0

    loc_0x8022090c: // orphan
         if                       // unlikely
         s3 = , signed  s2 >> 5   // t9

    loc_0x80220914: // orphan
         at = s2 + 0x1f
         s3 = , signed  at >> 5

    loc_0x8022091c: // orphan
         at = s3                  // t9
         s3 <<= 2
         s3 += at
         s3 <<= 2
         t9 = [sp + 0x60]

    loc_0x80220930: // orphan
         t4 = 0
         // CODE XREF from fcn.8021cbcc @ +0x6e4
         if                       // likely
         t8 = , signed  t3 >> 5

    loc_0x8022093c: // orphan
         at = t3 + 0x1f
         t8 = , signed  at >> 5   // a2

    loc_0x80220944: // orphan
         a1 = s3 + t8             // arg2
         t6 = a1 << 3             // arg2
         t7 = t9 + t6
         lwc1 f4, 0xc, t7
         t8 = fcn.82300000 << 16
         c.eq.s f14, f4
         
         bc1f 0x80220974
         
         t8 = [t8 + 0x5e98]
         t9 = a1 << 9             // arg2
         t4 = t8 + t9
         beql t4, 0, 0x80220ac0   // unlikely
         t8 = [sp + 0x50]

    loc_0x8022097c: // orphan
         v0 = [v1 + 0]
         at = 0xe400 << 16
         ra = s2 << 2
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = t4
         [v0 + 0] = s5
         v0 = [v1 + 0]
         t6 = 0xf300 << 16
         ra &= 0xfff
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = s7
         [v0 + 0] = s6
         v0 = [v1 + 0]
         t7 = 0x70f << 16
         t7 |= 0xf200
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = fp
         v0 = [v1 + 0]
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = t7
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t6 = 0xf510 << 16
         t7 = 8 << 16
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = s4
         v0 = [v1 + 0]
         t7 |= 0x200
         t6 |= 0x800
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = t7
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t6 = 3 << 16
         t6 |= 0xc03c
         // UNKNOWN XREF from fcn.82949c30 @ +0x258
         t8 = v0 + 8
         [v1 + 0] = t8
         t9 = 0xf200 << 16
         [v0 + 0] = t9
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t8 = t3 + 0x20
         t9 = t8 << 2
         t7 = v0 + 8
         [v1 + 0] = t7
         t6 = t9 & 0xfff
         t7 = t6 << 0xc
         t9 = s2 + 0x20
         t6 = t9 << 2
         t8 = t7 | at
         t7 = t6 & 0xfff
         t9 = t8 | t7
         t6 = t3 << 2
         t8 = t6 & 0xfff
         t7 = t8 << 0xc
         [v0 + 0] = t9
         t9 = t7 | ra
         [v0 + 4] = t9
         v0 = [v1 + 0]
         t8 = 0xe100 << 16
         t9 = 0xf100 << 16
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = t8
         v0 = [v1 + 0]
         t6 = 0x200 << 16
         t6 |= 0x200
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = t6
         [v0 + 0] = t9
         t8 = [sp + 0x50]

    loc_0x80220ac0: // orphan
         t3 += 0x20
         at = , t3 < t8           // lo
         bnel at, 0, 0x80220930   // likely
         t9 = [sp + 0x60]

    loc_0x80220ad0: // orphan
         t7 = [sp + 0x4c]
         s2 += 0x20
         at = , s2 < t7           // lo
         bnel at, 0, 0x8022090c   // likely
         t3 = 0

    loc_0x80220ae4: // orphan
         v0 = [v1 + 0]
         at = 0xbf00 << 16
         mtc1 at, f20
         at = 0x3f00 << 16
         mtc1 at, f18
         t9 = v0 + 8
         [v1 + 0] = t9
         t8 = 0x8009 << 16
         at = 0x437f << 16
         t8 += 0x4e38
         t6 = 0xde00 << 16
         mtc1 at, f16
         mtc1 0, f12
         s2 = 0
         [v0 + 0] = t6
         [v0 + 4] = t8
         t3 = 0

    loc_0x80220b28: // orphan
         if                       // unlikely
         s3 = , signed  s2 >> 5   // t9

    loc_0x80220b30: // orphan
         at = s2 + 0x1f
         s3 = , signed  at >> 5

    loc_0x80220b38: // orphan
         at = s3                  // t9
         s3 <<= 2
         s3 += at
         s3 <<= 2
         t9 = [sp + 0x60]

    loc_0x80220b4c: // orphan
         if                       // likely
         t7 = , signed  t3 >> 5

    loc_0x80221408: // orphan
         halfword [v0 + 0x74] = t6
         ret                      // ra
         halfword [v0 + 0x76] = 0

    loc_0x802219b8: // orphan
         ret                      // ra
         v0 = 0 + 3

    loc_0x80221de8: // orphan
         t4 = fcn.82300000 << 16
         t4 += 0x6940
         t3 = a2 + t4             // arg3
         [a1 + 0x28] = t2         // arg2
         t6 = [t3 + 0]
         goto 0x80221e24
         [a1 + 0x2c] = t6         // arg2

    loc_0x80221e24: // orphan
         // CODE XREF from fcn.8021edac @ 0x80221dfc
         a0 = , unsigned  byte [t0 + 0x63] // s4
         byte [a1 + 0x2f] = a0    // arg2
         byte [a1 + 0x2b] = a0    // arg2
         ra = [sp + 0x14]
         sp += 0x40
         v0 = 0
         ret
         

    loc_0x80221f18: // orphan
         t0 = halfword [a1 + 0xa]
         goto 0x80221ff8
         halfword [v0 + 2] = t0

    loc_0x80221ff8: // orphan
         // CODE XREF from fcn.8021edac @ 0x80221f1c
         ra = [sp + 0x14]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x80223850: // orphan
         t2 = , unsigned  halfword [t1 + 8]
         t3 = t2 & 0x200
         beql t3, 0, 0x80223888   // unlikely
         t4 = [v1 + 0]

    loc_0x80223860: // orphan
         v0 = halfword [v0 + 0x5e6e]
         at = fcn.82300000 << 16
         v0 -= 1
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         if                       // likely
         halfword [at + 0x5e6e] = v0

    loc_0x8022387c: // orphan
         at = fcn.82300000 << 16
         halfword [at + 0x5e6e] = 0

    loc_0x80223884: // orphan
         t4 = [v1 + 0]

    loc_0x80223888: // orphan
         v0 = fcn.82300000 << 16
         t5 = , unsigned  halfword [t4 + 8]
         t6 = t5 & 0x100
         if                       // unlikely
         // CODE XREF from fcn.8021cbcc @ +0x7e8
         

    loc_0x8022389c: // orphan
         v0 = halfword [v0 + 0x5e6e]
         a0 = [sp + 0x20]         // v1
         at = fcn.82300000 << 16
         v0 += 1
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         halfword [at + 0x5e6e] = v0
         at = , v0 < a0
         if                       // unlikely
         v0 = a0 - 1              // arg1

    loc_0x802238c4: // orphan
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // s4
         at = fcn.82300000 << 16
         halfword [at + 0x5e6e] = v0

    loc_0x802238d4: // orphan
         v0 = fcn.82300000 << 16
         v0 = halfword [v0 + 0x5e6e] // s4
         t7 = [sp + 0x1c]
         beql t7, v0, 0x802238fc  // unlikely
         t8 = [v1 + 0]

    loc_0x802238e8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         v1 = 0x8008 << 16
         v1 += 0x7200
         t8 = [v1 + 0]            // t9

    loc_0x802238fc: // orphan
         t0 = 0 + 1               // lo
         at = fcn.82300000 << 16
         v0 = , unsigned  halfword [t8 + 8]
         a0 = 0 + 0x8d            // arg1
         t9 = v0 & 0x8000
         if                       // likely
         t1 = v0 & 0x4000

    loc_0x80223ccc: // orphan
         if                       // likely
         at = fcn.82300000 << 16

    loc_0x80223cd4: // orphan
         at = fcn.82300000 << 16
         [at + 0x5e98] = 0
         t8 = fcn.82300000 << 16
         t8 = , unsigned  halfword [t8 + 0x5e72]
         at = fcn.82300000 << 16
         t7 = 0 + 5
         t9 = t8 | 4
         halfword [at + 0x5e72] = t9
         at = fcn.82300000 << 16
         [sp + 0x24] = t7
         goto 0x80223ed0
         halfword [at + 0x5e68] = 0

    loc_0x80223d04: // orphan
         [sp + 0x24] = t0
         call 0x80035424          // 0x80035424(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at + 0x5e68] = 0
         goto 0x80223ed4          // fcn.8023e660-0x1a78c
         ra = [sp + 0x14]

    loc_0x80223ed0: // orphan
         // CODE XREF from fcn.8021edac @ 0x80223cfc
         ra = [sp + 0x14]

    loc_0x802241fc: // orphan
         call 0x800085ec          // 0x800085ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80047610          // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x4350 << 16
         call 0x80002bf8          // 0x80002bf8(0x43500000, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021cbcc @ +0x81c
         a0 |= 0x534c             // arg1

    loc_0x8022474c: // orphan
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         s2 = a1                  // t0
         if                       // unlikely
         s1 = [a1 + 0x14]         // arg2 // t9

}

*/
