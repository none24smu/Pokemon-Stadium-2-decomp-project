/*
 * Function: 0x803fb790
 * Category: math
 */

// Decompiled C code
int fcn.803dc1fc (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.803dc1fc (int esi, int edx) {
    loc_0x803bedc8:
        swc1 f4, 0x68, v0
        goto fcn.803c0824
        swc1 f6, 0x74, v0
        // chop
         // do {
    loc_0x803c0824:
        // XREFS(147)
        a0 = 0x8331 << 16
        // CODE XREF from fcn.81d4d8ac @ +0xfa4
        mfc1 a1, f14
        mfc1 a2, f14
         // } while (?);
        }
        return eax;
    loc_0x803befe4: // orphan
             at = 0xc248 << 16
             mtc1 at, f4
             swc1 f8, 0x98, v0
             swc1 f10, 0x5c, v0
             goto fcn.803c0824
             swc1 f4, 0xc0, v0

    loc_0x803bfd8c: // orphan
         swc1 f18, 0xc0, v0
         swc1 f8, 0x5c, v0
         swc1 f10, 0x74, v0
         goto fcn.803c0824
         swc1 f4, 0x68, v0

    loc_0x803bfe38: // orphan
         mtc1 at, f12
         at = 0xc270 << 16
         mtc1 at, f6
         at = 0x4220 << 16
         mtc1 at, f8
         at = 0xc33e << 16
         swc1 f12, 0x6c, v0
         lwc1 f10, 0x6c, v0
         mtc1 at, f4
         swc1 f6, 0x5c, v0
         swc1 f8, 0x98, v0
         swc1 f10, 0x68, v0
         goto fcn.803c0824
         swc1 f4, 0x74, v0

    loc_0x803bfee4: // orphan
         at = 0x43fa << 16
         mtc1 at, f10
         at = 0x4496 << 16
         mtc1 at, f4
         at = 0xc416 << 16
         mtc1 at, f8
         swc1 f4, 0x6c, v0
         lwc1 f6, 0x6c, v0
         swc1 f10, 0xc0, v0
         swc1 f8, 0x74, v0
         goto fcn.803c0824
         swc1 f6, 0x68, v0

    loc_0x803bff90: // orphan
         mtc1 at, f6
         swc1 f4, 0x5c, v0
         goto fcn.803c0824
         swc1 f6, 0x74, v0

    loc_0x803c00e8: // orphan
         at = 0xc248 << 16
         mtc1 at, f8
         at = 0xc3c8 << 16
         swc1 f12, 0x6c, v0
         lwc1 f10, 0x6c, v0

    loc_0x803c0728: // orphan
         goto fcn.803c0824
         swc1 f8, 0x5c, v0

    loc_0x803c1544: // orphan
         v0 = 0x8331 << 16
         v0 -= 0x5d50
         swc1 f8, 0x74, v0
         ret                      // ra
         swc1 f10, 0xc0, v0

    loc_0x803c1690: // orphan
         v0 -= 0x5d50
         at = 0x8331 << 16
         swc1 f0, 0x60, v0
         swc1 f2, 0x64, v0
         lwc1 f16, -0x5ff4, at
         at = 0x8331 << 16
         swc1 f16, 0x68, v0
         lwc1 f18, -0x5ff0, at
         ret                      // ra
         swc1 f18, 0x6c, v0

    loc_0x803c1e98: // orphan
         unsigned , hi
         t3 = lo
         v1 = a3 + t3             // arg4
         t4 = , unsigned  byte [v1 + 0xe6] // s4
         at = , t4 < 0xff
         if                       // unlikely
         

    loc_0x803c1eb4: // orphan
         byte [v1 + 0xe6] = t5

    loc_0x803c1eb8: // orphan
         goto 0x803c1f84          // fcn.803ae9d8+0x135ac
         v1 = , unsigned  halfword [v0 + 8]

    loc_0x803c1f00: // orphan
         

    loc_0x803c211c: // orphan
         goto 0x803c24d0
         byte [a3 + 0x10c] = 0    // arg4

    loc_0x803c2134: // orphan
         goto 0x803c24d0          // fcn.803ae9d8+0x13af8
         byte [a3 + 0x10d] = 0    // arg4

    loc_0x803c21b8: // orphan
         v1 = , unsigned  halfword [v0 + 6]
         t1 = v1 & 1              // lo
         bnel t1, 0, 0x803c21dc   // likely
         t4 = [a3 + 0x2c]         // arg4 // t9

    loc_0x803c21c8: // orphan
         t2 = , unsigned  halfword [v0 + 8]
         t3 = t2 & 0x100
         beql t3, 0, 0x803c2394   // fcn.803c21fc+0x198 // unlikely
         at = 0x3f80 << 16

    loc_0x803c21d8: // orphan
         t4 = [a3 + 0x2c]         // arg4 // t9

    loc_0x803c21dc: // orphan
         at = , unsigned  , t4 < 0xe
         if                       // fcn.803c21fc+0x194 // likely
         t4 <<= 2

    loc_0x803c21e8: // orphan
         at = 0x8331 << 16
         at += t4
         t4 = [at - 0x5f78]       // t9
         goto t4                  // t9
         

    loc_0x803c2254: // orphan
         mtc1 at, f0
         lwc1 f18, 0xb8, a3       // arg4
         add.s f16, f18, f0
         swc1 f16, 0xb8, a3       // arg4
         goto 0x803c2390          // fcn.803c21fc+0x194
         v1 = , unsigned  halfword [v0 + 6]

    loc_0x803c2580: // orphan
         at += t6
         t6 = [at - 0x5ef0]       // t9
         goto t6                  // t9
         

    loc_0x803c2670: // orphan
         call 0x80025b54          // 0x80025b54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 7
         // CODE XREF from fcn.803a002c @ 0x803b93e4
         goto 0x803c26d0          // fcn.803ae9d8+0x13cf8
         ra = [sp + 0x14]

    loc_0x803c2858: // orphan
         t8 = 0x8331 << 16
         t8 = [t8 - 0x5d2c]
         at = 0x8331 << 16
         t9 = t8 + 1
         [at - 0x5d2c] = t9
         s0 = [sp + 8]
         s1 = [sp + 0xc]
         s2 = [sp + 0x10]
         s3 = [sp + 0x14]
         ret                      // ra
         sp += 0x18

    loc_0x803c2868: // orphan
         a0 += 1                  // arg1

    loc_0x803c286c: // orphan
         // CODE XREF from fcn.80388000 @ 0x803b93f8
         t6 = 0x8331 << 16
         t6 = [t6 - 0x71d4]
         t7 = t6 << 2
         t7 += t6
         t8 = t7 + 5
         at = , t8 < a0
         beql at, 0, 0x803c289c   // likely
         ra = [sp + 0x14]

    loc_0x803c288c: // orphan
         call 0x80021ed8          // 0x80021ed8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x57
         a0 = 0
         ra = [sp + 0x14]

    loc_0x803c289c: // orphan
         sp += 0x18
         v0 = a0                  // t9
         ret                      // ra
         

    loc_0x803c2948: // orphan
         t7 = t6 << 2
         t7 += t6
         t7 <<= 2
         at = , v0 < t7
         if                       // likely
         t8 = v0 + 1

    loc_0x803c2960: // orphan
         [s0 + 0xc] = t8

    loc_0x803c2964: // orphan
         // CODE XREF from fcn.803c2824 @ +0xe4
         t9 = 0x8008 << 16
         t9 = [t9 + 0x7200]
         t5 = 0x8331 << 16
         t3 = , unsigned  halfword [t9 + 8]
         t4 = t3 & 0x1000
         if                       // unlikely
         

    loc_0x803c2980: // orphan
         t5 = [t5 - 0x6f54]       // t9
         if                       // likely
         

    loc_0x803c298c: // orphan
         t6 = [s0 + 0x14]         // t9
         t7 = v1 - t6
         [s0 + 0x14] = t7

    loc_0x803c2998: // orphan
         call fcn.833078c4
         
         t8 = [s0 + 0]            // t9
         v0 = 0 + 3
         at = , unsigned  , t8 < 0xe
         if                       // fcn.803c3030+0x70 // likely
         t8 <<= 2

    loc_0x803c29b4: // orphan
         at = 0x8331 << 16
         at += t8
         t8 = [at - 0x5dfc]       // t9
         goto t8                  // t9
         

    loc_0x803c2a94: // orphan
         at = 0x8331 << 16
         halfword [at - 0x6f28] = 0
         at = 0x4348 << 16
         mtc1 at, f4
         at = 0x4496 << 16
         mtc1 at, f6
         at = 0x4120 << 16
         mtc1 at, f10
         at = 0x42c8 << 16
         mtc1 at, f16
         a0 = 0x8331 << 16
         [s0 + 0x3c] = 0
         [s0 + 0x10] = t6
         a0 -= 0x53c8             // arg1
         swc1 f8, 0xd0, s0
         swc1 f4, 0xc8, s0
         swc1 f6, 0xcc, s0
         swc1 f10, 0xd4, s0
         call 0x87f034cc          // 0x87f034cc(0x8330ac38, 0x442f71dcfe116408, 0x8, -1)
         swc1 f16, 0xdc, s0
         a0 = 0x8331 << 16
         a3 = 0x8331 << 16
         a3 = [a3 - 0x5418]
         a0 -= 0x59c8
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x8330a638, 0x0, 0x8, 0xed1fd211)
         a2 = 0 - 1               // s2
         a0 = 0x8331 << 16
         a0 -= 0x59c8
         call 0x8003f210          // 0x8003f210(0x8330a638, 0x0, -1, 0xed1fd211)
         a1 = 0
         a0 = 0x8331 << 16
         a0 -= 0x59c8
         call 0x8003f3bc          // 0x8003f3bc(0x8330a638, 0x0, -1, 0xed1fd211)
         a1 = 0
         a0 = 0x8331 << 16
         a0 -= 0x59c8
         call 0x8003eb84          // 0x8003eb84(0x8330a638, 0x0, -1, 0xed1fd211)
         a1 = 0

    loc_0x803c2b30: // orphan
         a0 = 0x8331 << 16
         a0 -= 0x59c8
         call 0x8003ef48          // 0x8003ef48(0x8330a638, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t3 = 0 + 2
         // CODE XREF from fcn.80388000 @ 0x803b9420
         [s0 + 0xc] = 0
         [s0 + 0] = t3
         at = 0x8331 << 16
         goto 0x803c30a0          // fcn.803c3030+0x70
         [at - 0x53a8] = 0

    loc_0x803c2cf0: // orphan
         a0 = 0 + 0x28            // arg1
         call 0x800088a4          // 0x800088a4(0x28, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xffff
         t9 = 0 + 7
         [s0 + 0] = t9
         call 0x80007b34          // 0x80007b34(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x28
         goto 0x803c30a4          // fcn.803c2e04+0x2a0
         t8 = [s0 + 0x14]

    loc_0x803c30f0: // orphan
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         s0 = 0 + 1               // lo

    loc_0x803c3168: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x803c56ac: // orphan
         if                       // fcn.803dc3a4-0xf474 // unlikely
         

    loc_0x803dc1fc: // orphan
           // CALL XREF from fcn.8254ba24 @ +0xa0
         if                       // fcn.803dd03c+0x394 // unlikely
         if                       // unlikely

    loc_0x803dc208: // orphan
         if                       // fcn.80400480-0x23054 // unlikely
         if                       // unlikely

    loc_0x803dc214: // orphan
         
         if                       // fcn.803dd03c+0x4d0 // unlikely
         if                       // unlikely

    loc_0x803dc224: // orphan
         if                       // fcn.803c6038+0x175c0 // unlikely
         if                       // unlikely

    loc_0x803dc230: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc23c: // orphan
         if                       // unlikely
         

    loc_0x803dc244: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc250: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc26c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc278: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc290: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc29c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc2b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc2c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc2d0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc2e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc2ec: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc300: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc30c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc318: // orphan
         if                       // unlikely
         // CODE XREF from fcn.82518490 @ +0x55c
         if                       // unlikely

    loc_0x803dc324: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc344: // orphan
         if                       // unlikely
         

    loc_0x803dc34c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc358: // orphan
         if                       // unlikely
         // CALL XREF from fcn.83d49db4 @ +0xfcc
         

    loc_0x803dc360: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dc36c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3e4: // orphan
         if                       // fcn.803dd03c+0xddec // unlikely

    loc_0x803dd3f0: // orphan
         if                       // fcn.803dd03c+0xde78 // unlikely

    loc_0x803dd3fc: // orphan
         if                       // fcn.803dd03c+0xdf34 // unlikely

    loc_0x803dd408: // orphan
         if                       // fcn.803dd03c+0xe030 // unlikely

    loc_0x803dd440: // orphan
         if                       // fcn.803dd03c+0xe3c4 // unlikely
         if                       // unlikely

    loc_0x803dd44c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd458: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd464: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd470: // orphan
         if                       // unlikely
         if                       // fcn.803eb75c+0x18 // unlikely

    loc_0x803dd47c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd488: // orphan
         if                       // fcn.803eb87c+0x3c // unlikely
         if                       // unlikely

    loc_0x803dd494: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4ac: // orphan
         if                       // fcn.803dc1fc+0xf970 // unlikely
         if                       // unlikely

    loc_0x803dd520: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd52c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd538: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd544: // orphan
         if                       // fcn.803dc1fc+0x10928 // unlikely
         if                       // unlikely

    loc_0x803dd550: // orphan
         if                       // fcn.803dc1fc+0x10964 // unlikely
         if                       // unlikely

    loc_0x803dd55c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd568: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd574: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd580: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd58c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd598: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd5a4: // orphan
         if                       // fcn.803ed0bc-0x24 // unlikely
         if                       // fcn.803ed0bc-0x40 // unlikely

    loc_0x803dd5b0: // orphan
         
         if                       // fcn.803ed0bc+0xbc // unlikely
         if                       // fcn.803ed0bc+0xd0 // unlikely

    loc_0x803dd5c0: // orphan
         if                       // fcn.803ed0bc+0x118 // unlikely

    loc_0x803dd5cc: // orphan
         

    loc_0x803dd6ac: // orphan
         if                       // fcn.803c6038+0x29ca8 // unlikely

    loc_0x803dd6b8: // orphan
         if                       // unlikely

    loc_0x803dd6c4: // orphan
         if                       // fcn.80400480-0x10618 // unlikely

    loc_0x803dd6d0: // orphan
         if                       // fcn.80400480-0x1054c // unlikely

    loc_0x803dd988: // orphan
         if                       // fcn.803c6038+0x2df24 // unlikely
         

    loc_0x803dd990: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd99c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd9a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd9b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd9c0: // orphan
         if                       // fcn.803f41c4 // unlikely
         if                       // unlikely

    loc_0x803dd9cc: // orphan
         if                       // fcn.80400480-0xc250 // unlikely
         if                       // fcn.80400480-0xc23c // unlikely

    loc_0x803dd9d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd9e0: // orphan
         

    loc_0x803dd9e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd9f0: // orphan
         if                       // fcn.803f43ac+0x8 // unlikely
         if                       // fcn.803f43c0+0x8 // unlikely

    loc_0x803dd9fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dda08: // orphan
         if                       // fcn.803f43c0+0xec // unlikely
         if                       // fcn.803f43c0+0x100 // unlikely

    loc_0x803dda14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dda20: // orphan
         if                       // fcn.80400480-0xbedc // unlikely
         if                       // fcn.80400480-0xbec8 // unlikely

    loc_0x803dda2c: // orphan
         if                       // fcn.80400480-0xbe70 // unlikely
         if                       // fcn.80400480-0xbe5c // unlikely

    loc_0x803dda38: // orphan
         if                       // fcn.803f03b0+0x42ec // unlikely
         if                       // fcn.803f03b0+0x4300 // unlikely

    loc_0x803dda44: // orphan
         if                       // fcn.803f03b0+0x4358 // unlikely
         if                       // fcn.803f03b0+0x436c // unlikely

    loc_0x803dda50: // orphan
         if                       // fcn.803f03b0+0x4424 // unlikely
         if                       // fcn.803f03b0+0x4448 // unlikely

    loc_0x803dda5c: // orphan
         if                       // unlikely
         

    loc_0x803dda64: // orphan
         if                       // fcn.803f4858+0x40 // unlikely
         if                       // fcn.803f4858+0x54 // unlikely

    loc_0x803dda70: // orphan
         if                       // fcn.803f48c0+0x64 // unlikely
         if                       // fcn.803f48c0+0x78 // unlikely

    loc_0x803dda7c: // orphan
         if                       // fcn.803f03b0+0x45e0 // unlikely
         if                       // fcn.803f03b0+0x45f4 // unlikely

    loc_0x803dda88: // orphan
         if                       // fcn.803f03b0+0x466c // unlikely
         if                       // unlikely

    loc_0x803dda94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddaa0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddaac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddab8: // orphan
         if                       // fcn.803f4bec+0x20 // unlikely
         if                       // fcn.803f4bec+0x34 // unlikely

    loc_0x803ddac4: // orphan
         if                       // fcn.803f03f0+0x4888 // unlikely
         if                       // fcn.803f03f0+0x489c // unlikely

    loc_0x803ddad0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddadc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddae8: // orphan
         if                       // fcn.803f03f0+0x4a0c // unlikely
         if                       // fcn.803f03f0+0x4a20 // unlikely

    loc_0x803ddaf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb3c: // orphan
         if                       // fcn.803f03f0+0x4d60 // unlikely
         if                       // fcn.803f03f0+0x4d74 // unlikely

    loc_0x803ddb48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddb60: // orphan
         if                       // fcn.803f03f0+0x4ee4 // unlikely
         if                       // unlikely

    loc_0x803ddb6c: // orphan
         if                       // fcn.803f04b0+0x4e90 // unlikely
         if                       // fcn.803f04b0+0x4ea4 // unlikely

    loc_0x803ddb78: // orphan
         if                       // fcn.803f04b0+0x4f1c // unlikely
         if                       // fcn.803f04b0+0x4f30 // unlikely

    loc_0x803ddb84: // orphan
         if                       // fcn.803f04b0+0x4f88 // unlikely
         if                       // fcn.803f04b0+0x4f9c // unlikely

    loc_0x803ddb90: // orphan
         if                       // fcn.803f04b0+0x5014 // unlikely
         if                       // fcn.803f04b0+0x5028 // unlikely

    loc_0x803ddb9c: // orphan
         if                       // fcn.803f04b0+0x5080 // unlikely
         if                       // fcn.803f04b0+0x5094 // unlikely

    loc_0x803ddba8: // orphan
         if                       // fcn.803f04b0+0x510c // unlikely
         if                       // fcn.803f04b0+0x5120 // unlikely

    loc_0x803ddbb4: // orphan
         if                       // fcn.80400480-0xae58 // unlikely
         if                       // fcn.80400480-0xae44 // unlikely

    loc_0x803ddbc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddbcc: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0xac0c // unlikely

    loc_0x803ddbd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddbe4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddbf0: // orphan
         if                       // unlikely
         if                       // fcn.803f04b0+0x5528 // unlikely

    loc_0x803ddbfc: // orphan
         if                       // fcn.803f04b0+0x5580 // unlikely
         if                       // unlikely

    loc_0x803ddc08: // orphan
         
         if                       // fcn.803f04b0+0x5630 // unlikely
         if                       // unlikely

    loc_0x803ddc18: // orphan
         if                       // unlikely
         if                       // fcn.803f04b0+0x56e0 // unlikely

    loc_0x803ddc24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddc30: // orphan
         if                       // fcn.803f04b0+0x5734 // unlikely
         if                       // unlikely

    loc_0x803ddce8: // orphan
         
         if                       // fcn.803f04b0+0x6180 // unlikely

    loc_0x803dde54: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x8e44 // unlikely

    loc_0x803dde60: // orphan
         if                       // fcn.80400480-0x8dcc // unlikely
         if                       // fcn.80400480-0x8da8 // unlikely

    loc_0x803dde6c: // orphan
         if                       // fcn.80400480-0x8d60 // unlikely
         

    loc_0x803dde74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dde80: // orphan
         if                       // fcn.80400480-0x8c7c // unlikely
         if                       // fcn.80400480-0x8c68 // unlikely

    loc_0x803dde8c: // orphan
         if                       // fcn.803f7830+0x40 // unlikely
         if                       // unlikely

    loc_0x803dde98: // orphan
         if                       // fcn.803f78c0+0x3c // unlikely
         if                       // fcn.803f78c0+0x50 // unlikely

    loc_0x803ddea4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddeb0: // orphan
         if                       // fcn.80400480-0x8a8c // unlikely
         if                       // fcn.80400480-0x8a78 // unlikely

    loc_0x803ddebc: // orphan
         if                       // fcn.80400480-0x8a20 // unlikely
         if                       // fcn.80400480-0x8a0c // unlikely

    loc_0x803ddec8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dded4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddee0: // orphan
         if                       // fcn.80400480-0x889c // unlikely
         if                       // fcn.80400480-0x8888 // unlikely

    loc_0x803ddeec: // orphan
         if                       // fcn.803f8efc-0x12ac // unlikely
         if                       // fcn.803f8efc-0x1298 // unlikely

    loc_0x803ddef8: // orphan
         if                       // fcn.803f7c80+0x5c // unlikely
         if                       // fcn.803f7c80+0x70 // unlikely

    loc_0x803ddf04: // orphan
         if                       // fcn.803f7c80+0xc8 // unlikely
         if                       // fcn.803f7c80+0xdc // unlikely

    loc_0x803ddf10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddf1c: // orphan
         if                       // fcn.80400480-0x8640 // unlikely
         if                       // fcn.80400480-0x862c // unlikely

    loc_0x803ddf28: // orphan
         if                       // fcn.80400480-0x85a4 // unlikely
         if                       // fcn.80400480-0x8570 // unlikely

    loc_0x803ddf34: // orphan
         if                       // fcn.80400480-0x8508 // unlikely
         if                       // fcn.80400480-0x84d4 // unlikely

    loc_0x803ddf40: // orphan
         
         if                       // fcn.803f7ffc+0x1c // unlikely
         if                       // fcn.803f802c // unlikely

    loc_0x803ddf50: // orphan
         if                       // fcn.803f7ffc+0xa8 // unlikely
         if                       // fcn.803f7ffc+0xbc // unlikely

    loc_0x803ddf5c: // orphan
         if                       // fcn.80400480-0x8370 // unlikely
         if                       // fcn.80400480-0x835c // unlikely

    loc_0x803ddf68: // orphan
         if                       // fcn.80400480-0x82e4 // unlikely
         if                       // fcn.80400480-0x82d0 // unlikely

    loc_0x803ddf74: // orphan
         if                       // fcn.80400480-0x8278 // unlikely
         if                       // fcn.80400480-0x8264 // unlikely

    loc_0x803ddf80: // orphan
         if                       // fcn.803f089c+0x79f8 // unlikely
         if                       // fcn.803f089c+0x7a0c // unlikely

    loc_0x803ddf8c: // orphan
         if                       // fcn.803f089c+0x7a64 // unlikely
         if                       // unlikely

    loc_0x803ddf98: // orphan
         if                       // fcn.803f8344+0x48 // unlikely
         if                       // fcn.803f8344+0x5c // unlikely

    loc_0x803ddfa4: // orphan
         if                       // fcn.803f8344+0xb4 // unlikely
         if                       // fcn.803f8344+0xc8 // unlikely

    loc_0x803ddfb0: // orphan
         if                       // fcn.803f8344+0x140 // unlikely
         if                       // fcn.803f8498 // unlikely

    loc_0x803ddfbc: // orphan
         if                       // unlikely
         if                       // fcn.803f089c+0x7c68 // unlikely

    loc_0x803ddfc8: // orphan
         if                       // fcn.803f857c // unlikely
         if                       // fcn.803f857c+0x14 // unlikely

    loc_0x803ddfd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddfe0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddfec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803ddff8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de010: // orphan
         if                       // fcn.803f87b4+0xb0 // unlikely
         if                       // fcn.803f87b4+0xc4 // unlikely

    loc_0x803de01c: // orphan
         if                       // fcn.803f88a8+0x28 // unlikely
         if                       // fcn.803f88a8+0x3c // unlikely

    loc_0x803de028: // orphan
         if                       // fcn.803f88a8+0xb4 // unlikely
         if                       // fcn.803f88a8+0xc8 // unlikely

    loc_0x803de034: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de038: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de040: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de04c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de058: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de064: // orphan
         if                       // fcn.80400480-0x78c8 // unlikely
         if                       // fcn.80400480-0x78b4 // unlikely

    loc_0x803de06c: // orphan
         

    loc_0x803de070: // orphan
         if                       // fcn.80400480-0x783c // unlikely
         if                       // fcn.80400480-0x7828 // unlikely

    loc_0x803de07c: // orphan
         if                       // fcn.80400480-0x77d0 // unlikely
         if                       // unlikely

    loc_0x803de088: // orphan
         if                       // fcn.80400480-0x7744 // unlikely
         if                       // fcn.803f8d44+0xc // unlikely

    loc_0x803de094: // orphan
         if                       // fcn.803f8d44+0x64 // unlikely
         if                       // fcn.803f8d44+0x78 // unlikely

    loc_0x803de0a0: // orphan
         if                       // fcn.803f8e44 // unlikely
         if                       // unlikely

    loc_0x803de0ac: // orphan
         if                       // fcn.803f8e44+0x9c // unlikely
         if                       // fcn.803f8efc+0x28 // unlikely

    loc_0x803de0b8: // orphan
         
         if                       // fcn.803f8efc+0x124 // unlikely
         if                       // fcn.803f8efc+0x138 // unlikely

    loc_0x803de0c8: // orphan
         if                       // fcn.803f8efc+0xa0 // unlikely
         if                       // fcn.803f8efc+0x1b4 // unlikely

    loc_0x803de0d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de1f4: // orphan
         if                       // fcn.80400480-0x6648 // unlikely
         if                       // fcn.80400480-0x6634 // unlikely

    loc_0x803de200: // orphan
         
         if                       // fcn.80400480-0x6598 // unlikely
         if                       // fcn.80400480-0x6584 // unlikely

    loc_0x803de210: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de21c: // orphan
         if                       // fcn.803f8efc+0x1184 // unlikely
         if                       // fcn.803f8efc+0x1198 // unlikely

    loc_0x803de228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de234: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de240: // orphan
         if                       // fcn.803f8efc+0x1148 // unlikely
         if                       // unlikely

    loc_0x803de24c: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x621c // unlikely

    loc_0x803de258: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de268: // orphan
         if                       // fcn.80400480-0x60e4 // unlikely
         if                       // fcn.80400480-0x60d0 // unlikely

    loc_0x803de26c: // orphan
         if                       // fcn.80400480-0x60e4 // unlikely
         if                       // fcn.80400480-0x60d0 // unlikely

    loc_0x803de274: // orphan
         if                       // fcn.80400480-0x6068 // unlikely
         if                       // unlikely

    loc_0x803de280: // orphan
         if                       // fcn.80400480-0x5fcc // unlikely
         if                       // fcn.80400480-0x5fb8 // unlikely

    loc_0x803de28c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de290: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de298: // orphan
         if                       // fcn.80400480-0x5f54 // unlikely
         if                       // fcn.803faaf8-0x4b8 // unlikely

    loc_0x803de2a4: // orphan
         if                       // fcn.80400480-0x5de8 // unlikely
         if                       // fcn.80400480-0x5dd4 // unlikely

    loc_0x803de2b0: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x5d58 // unlikely

    loc_0x803de2bc: // orphan
         if                       // fcn.80400480-0x5d00 // unlikely
         if                       // fcn.80400480-0x5cec // unlikely

    loc_0x803de2c8: // orphan
         
         if                       // fcn.80400480-0x5c50 // unlikely
         if                       // fcn.80400480-0x5c3c // unlikely

    loc_0x803de2d8: // orphan
         if                       // fcn.80400480-0x5bb4 // unlikely
         if                       // fcn.80400480-0x5b70 // unlikely

    loc_0x803de2e4: // orphan
         if                       // fcn.80400480-0x5a98 // unlikely
         

    loc_0x803de2ec: // orphan
         if                       // fcn.803faaf8+0x8 // unlikely
         if                       // fcn.803faaf8+0x1c // unlikely

    loc_0x803de2f8: // orphan
         if                       // unlikely
         if                       // fcn.803faaf8+0x98 // unlikely

    loc_0x803de304: // orphan
         if                       // fcn.803faaf8+0xf0 // unlikely
         if                       // fcn.803faaf8+0x104 // unlikely

    loc_0x803de310: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de31c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de328: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x5720 // unlikely

    loc_0x803de334: // orphan
         if                       // fcn.80400480-0x56c8 // unlikely
         if                       // fcn.80400480-0x56b4 // unlikely

    loc_0x803de340: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de350: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de360: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de36c: // orphan
         if                       // fcn.80400480-0x53d0 // unlikely
         if                       // fcn.80400480-0x53bc // unlikely

    loc_0x803de378: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x5340 // unlikely

    loc_0x803de384: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de390: // orphan
         if                       // fcn.80400480-0x540c // unlikely
         if                       // unlikely

    loc_0x803de398: // orphan
         

    loc_0x803de39c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de3a8: // orphan
         
         if                       // unlikely
         if                       // fcn.80400480-0x513c // unlikely

    loc_0x803de3b8: // orphan
         if                       // fcn.803fb3cc // unlikely
         if                       // fcn.803fb3cc+0x14 // unlikely

    loc_0x803de3bc: // orphan
         if                       // fcn.803fb3cc // unlikely
         if                       // fcn.803fb3cc+0x14 // unlikely

    loc_0x803de3c4: // orphan
         if                       // fcn.803fb3cc+0xfc // unlikely
         if                       // fcn.803fb3cc+0x110 // unlikely

    loc_0x803de3d0: // orphan
         if                       // fcn.803fb3cc+0x78 // unlikely
         if                       // fcn.803fb3cc+0x18c // unlikely

    loc_0x803de3dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de3e8: // orphan
         if                       // fcn.803fb3cc+0xc0 // unlikely
         if                       // unlikely

    loc_0x803de3f4: // orphan
         if                       // fcn.803fb3cc+0x2cc // unlikely
         if                       // fcn.803fb3cc+0x2e0 // unlikely

    loc_0x803de400: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de410: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de41c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de428: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de434: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de440: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de44c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de458: // orphan
         
         if                       // fcn.803fbaf8+0x68 // unlikely
         if                       // fcn.803fbaf8+0x7c // unlikely

    loc_0x803de468: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de4cc: // orphan
         
         
         
         
         
         
         
         if                       // fcn.803fc3c4+0x2a8 // unlikely
         if                       // unlikely

    loc_0x803de4f4: // orphan
         if                       // fcn.803fc3c4+0x2f4 // unlikely
         

    loc_0x803de4fc: // orphan
         
         
         
         
         
         
         if                       // fcn.803fc3c4+0x6a4 // unlikely
         if                       // fcn.803fc3c4+0x6c8 // unlikely

    loc_0x803de520: // orphan
         if                       // fcn.803fc3c4+0x6f0 // unlikely
         

    loc_0x803de528: // orphan
         
         
         
         
         
         
         if                       // fcn.803fc3c4+0xaa0 // unlikely
         if                       // fcn.803fc3c4+0xac4 // unlikely

    loc_0x803de54c: // orphan
         if                       // fcn.803fc3c4+0xaec // unlikely
         

    loc_0x803de554: // orphan
         
         
         
         
         if                       // fcn.803fc3c4+0xde4 // unlikely
         if                       // fcn.803fc3c4+0xdf8 // unlikely

    loc_0x803de570: // orphan
         if                       // fcn.803fc3c4+0xe20 // unlikely
         if                       // unlikely

    loc_0x803de57c: // orphan
         if                       // fcn.803fc3c4+0xebc // unlikely
         if                       // unlikely

    loc_0x803de584: // orphan
         if                       // fcn.803fc3c4+0xf54 // unlikely

    loc_0x803de588: // orphan
         if                       // unlikely
         

    loc_0x803de590: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de59c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de5a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de5b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de5c0: // orphan
         if                       // fcn.80400480-0x2dec // unlikely
         if                       // unlikely

    loc_0x803de5cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de5d8: // orphan
         if                       // fcn.80400480-0x2c94 // unlikely
         if                       // fcn.80400480-0x2c70 // unlikely

    loc_0x803de5e0: // orphan
         

    loc_0x803de5e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de5f0: // orphan
         if                       // fcn.80400480-0x2b3c // unlikely
         if                       // fcn.80400480-0x2b18 // unlikely

    loc_0x803de5fc: // orphan
         if                       // fcn.80400480-0x2a90 // unlikely
         if                       // fcn.80400480-0x2a6c // unlikely

    loc_0x803de608: // orphan
         if                       // unlikely
         

    loc_0x803de610: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de61c: // orphan
         if                       // fcn.83f82f70-0x3b85390 // unlikely
         if                       // fcn.83f82f70-0x3b8536c // unlikely

    loc_0x803de628: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de634: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x2724 // unlikely

    loc_0x803de640: // orphan
         if                       // unlikely
         if                       // fcn.803fddfc+0xc // unlikely

    loc_0x803de64c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de658: // orphan
         if                       // unlikely
         // CALL XREF from fcn.82da2d6c @ +0x8d0
         if                       // unlikely

    loc_0x803de664: // orphan
         if                       // fcn.80400480-0x2498 // unlikely
         if                       // fcn.80400480-0x2474 // unlikely

    loc_0x803de670: // orphan
         if                       // fcn.803fe034+0x60 // unlikely
         if                       // fcn.803fe034+0x84 // unlikely

    loc_0x803de67c: // orphan
         if                       // fcn.803fe034+0x10c // unlikely
         if                       // fcn.803fe034+0x130 // unlikely

    loc_0x803de688: // orphan
         if                       // fcn.803fe034+0x1b8 // unlikely
         if                       // fcn.803fe034+0x1dc // unlikely

    loc_0x803de694: // orphan
         if                       // unlikely
         if                       // fcn.80400480-0x21c4 // unlikely

    loc_0x803de6a0: // orphan
         if                       // fcn.80400480-0x213c // unlikely
         if                       // fcn.80400480-0x2118 // unlikely

    loc_0x803de6ac: // orphan
         if                       // fcn.80400480-0x2090 // unlikely
         if                       // fcn.80400480-0x206c // unlikely

    loc_0x803de6b8: // orphan
         if                       // fcn.80400480-0x1fe4 // unlikely
         if                       // fcn.80400480-0x1fc0 // unlikely

    loc_0x803de6c4: // orphan
         if                       // fcn.803fe67c+0xc // unlikely
         if                       // unlikely

    loc_0x803de6d0: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0xfd70 // unlikely

    loc_0x803de6dc: // orphan
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0xfe60 // unlikely

    loc_0x803de6e4: // orphan
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0xfe60 // unlikely

    loc_0x803de6ec: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0xff9c // unlikely

    loc_0x803de6f8: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10038 // unlikely

    loc_0x803de704: // orphan
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10128 // unlikely

    loc_0x803de714: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10264 // unlikely

    loc_0x803de720: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10300 // unlikely

    loc_0x803de72c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de73c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de740: // orphan
         if                       // unlikely
         

    loc_0x803de748: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x106a8 // unlikely

    loc_0x803de754: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10744 // unlikely

    loc_0x803de758: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10744 // unlikely

    loc_0x803de760: // orphan
         
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10888 // unlikely

    loc_0x803de774: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x109f4 // unlikely

    loc_0x803de780: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10a90 // unlikely

    loc_0x803de78c: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10b2c // unlikely

    loc_0x803de798: // orphan
         
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10c70 // unlikely

    loc_0x803de7ac: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10ddc // unlikely

    loc_0x803de7b4: // orphan
         

    loc_0x803de7b8: // orphan
         if                       // fcn.80388000+0x3782c // unlikely
         if                       // fcn.803ae9d8+0x10e78 // unlikely

    loc_0x803de7c4: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x10f14 // unlikely

    loc_0x803de7cc: // orphan
         

    loc_0x803de7d0: // orphan
         
         
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11058 // unlikely

    loc_0x803de7e4: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x110f4 // unlikely

    loc_0x803de7f0: // orphan
         if                       // fcn.803bfb3c+0x8 // unlikely
         if                       // fcn.803ae9d8+0x11190 // unlikely

    loc_0x803de7fc: // orphan
         if                       // fcn.803bfc00+0x10 // unlikely
         if                       // fcn.803bfc34 // unlikely

    loc_0x803de808: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11308 // unlikely

    loc_0x803de814: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de818: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de820: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de82c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de838: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de844: // orphan
         if                       // unlikely
         if                       // fcn.803c003c // unlikely

    loc_0x803de850: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de85c: // orphan
         if                       // fcn.803c013c+0x4 // unlikely
         if                       // fcn.803a002c+0x20158 // unlikely

    loc_0x803de868: // orphan
         
         if                       // unlikely
         if                       // fcn.803a002c+0x20248 // unlikely

    loc_0x803de878: // orphan
         if                       // unlikely
         if                       // fcn.803a002c+0x202f4 // unlikely

    loc_0x803de884: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x119f4 // unlikely

    loc_0x803de890: // orphan
         if                       // fcn.803c043c+0x18 // unlikely
         if                       // fcn.803ae9d8+0x11aa0 // unlikely

    loc_0x803de89c: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11b4c // unlikely

    loc_0x803de8a8: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11bf8 // unlikely

    loc_0x803de8b4: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11ca4 // unlikely

    loc_0x803de8c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de8cc: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x11dfc // unlikely

    loc_0x803de8d8: // orphan
         if                       // fcn.803c085c // unlikely
         if                       // fcn.803ae9d8+0x11ea8 // unlikely

    loc_0x803de8e4: // orphan
         if                       // fcn.80388000+0x38908 // unlikely
         if                       // fcn.803ae9d8+0x11f54 // unlikely

    loc_0x803de8f0: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x12000 // unlikely

    loc_0x803de8fc: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x120ac // unlikely

    loc_0x803de908: // orphan
         if                       // unlikely
         if                       // fcn.803dc378-0x1b848 // unlikely

    loc_0x803de994: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803de9a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803de9b4: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x12d54 // unlikely

    loc_0x803de9c0: // orphan
         
         if                       // unlikely
         if                       // fcn.803c1814+0x8 // unlikely

    loc_0x803de9d0: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x12f90 // unlikely

    loc_0x803de9dc: // orphan
         if                       // fcn.803ae9d8+0x13008 // unlikely
         if                       // fcn.803ae9d8+0x1302c // unlikely

    loc_0x803de9e8: // orphan
         
         if                       // fcn.803ae9d8+0x130f8 // unlikely
         if                       // fcn.803c1afc-0x8 // unlikely

    loc_0x803de9f8: // orphan
         if                       // fcn.803c1afc+0xa0 // unlikely
         if                       // fcn.803c1afc+0xc4 // unlikely

    loc_0x803dea04: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x13334 // unlikely

    loc_0x803dea10: // orphan
         if                       // fcn.803ae9d8+0x133ac // unlikely
         if                       // fcn.803ae9d8+0x133d0 // unlikely

    loc_0x803dea1c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea2c: // orphan
         if                       // unlikely
         

    loc_0x803dea34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea58: // orphan
         
         
         if                       // unlikely
         if                       // fcn.803c21fc+0x19c // unlikely

    loc_0x803dea6c: // orphan
         if                       // unlikely
         if                       // fcn.803ae9d8+0x13b0c // unlikely

    loc_0x803dea78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea84: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dea94: // orphan
         if                       // fcn.803c2824-0x8c // unlikely
         if                       // fcn.803c2824-0x68 // unlikely

    loc_0x803deaa0: // orphan
         if                       // fcn.803c2824+0x10 // unlikely
         if                       // unlikely

    loc_0x803deaac: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803deabc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803deac8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dead4: // orphan
         
         if                       // fcn.803ae9d8+0x14224 // unlikely
         if                       // fcn.803c2c10 // unlikely

    loc_0x803deae4: // orphan
         if                       // fcn.803ae9d8+0x142a0 // unlikely
         

    loc_0x803deaec: // orphan
         if                       // unlikely
         

    loc_0x803deaf4: // orphan
         
         
         
         
         
         if                       // fcn.803c2e04+0x2d8 // unlikely
         if                       // unlikely

    loc_0x803deb14: // orphan
         if                       // unlikely
         

    loc_0x803deb1c: // orphan
         
         
         
         
         
         
         
         
         
         

    loc_0x803eb940: // orphan
         at = , unsigned  , a0 < a1

    loc_0x803ebb08: // orphan
         at = 0xc387 << 16
         mtc1 at, f10
         add.s f8, f4, f6
         v0 = 0
         at = 0x4387 << 16
         a0 = 0x87f1 << 16
         swc1 f8, 0x48, a1        // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f0, 0x48, a1        // arg2
         c.lt.s f0, f10
         
         bc1tl 0x803ebb58
         v0 = 0 + 1               // lo
         mtc1 at, f16
         
         c.lt.s f16, f0
         
         bc1f 0x803ebb58
         
         v0 = 0 + 1               // lo
         beql v0, 0, 0x803ebb6c   // unlikely
         ra = [sp + 0x14]

    loc_0x803ebb60: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         ra = [sp + 0x14]

    loc_0x803ebb6c: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803ec9f8: // orphan
         t9 = [a1 + 0xe8]         // arg2
         [a1 + 0x16c0] = 0        // arg2
         bnel t9, 0, 0x803eca04   // likely
         v0 = [a1 + 0x34]         // arg2 // t9

    loc_0x803ecaf0: // orphan
         mtc1 at, f4
         lwc1 f10, 0x18, a3       // arg4
         t7 = [sp + 0x2c]
         mul.s f6, f10, f4
         
         // CODE XREF from fcn.82e0ee4c @ +0x33a8
         mul.s f18, f6, f0
         div.s f8, f18, f12
         cvt.d.s f10, f8
         mtc1 at, f8
         mul.d f4, f10, f2
         cvt.s.d f6, f4
         swc1 f6
         lwc1 f18, 0x1c, a3       // arg4
         t6 = [sp + 0x30]
         mul.s f10, f18, f8
         
         mul.s f4, f10, f0
         div.s f6, f4, f12

    loc_0x803ecb4c: // orphan
         cvt.d.s f18, f6
         mul.d f8, f18, f2
         neg.d f10, f8
         cvt.s.d f4, f10
         goto 0x803ecc24
         swc1 f4

    loc_0x803ecb60: // orphan
         at = 0x40e0 << 16
         mtc1 at, f12
         lwc1 f6, 0x18, a3        // arg4
         t9 = [sp + 0x2c]
         sub.s f18, f12, f0
         mul.s f8, f6, f18
         cvt.d.s f10, f8
         mul.d f4, f10, f2
         cvt.s.d f6, f4
         swc1 f6
         lwc1 f8, 0xd8, a1        // arg2
         lwc1 f18, 0x1c, a3       // arg4
         t3 = [sp + 0x30]
         sub.s f10, f12, f8
         mul.s f4, f18, f10
         cvt.d.s f6, f4
         mul.d f8, f6, f2
         neg.d f18, f8
         cvt.s.d f10, f18
         goto 0x803ecc24          // fcn.803dd03c+0xfbe8
         swc1 f10

    loc_0x803ecc74: // orphan
         
         bc1fl 0x803ecd4c
         ra = [sp + 0x1c]         // t9
         lwc1 f2, 4, v0
         lwc1 f4, 0x1684, v0
         v1 = 0x86a1 << 16
         lwc1 f6, 0x1688, v0
         sub.s f0, f4, f2
         lwc1 f8, 8, v0
         v1 -= 0xffc
         c.lt.s f12, f2

    loc_0x803ecca0: // orphan
         swc1 f0, 0xd8, v1
         swc1 f0, 0x90, v1
         sub.s f0, f6, f8
         a1 = 0
         a0 = s0
         swc1 f0, 0xdc, v1
         bc1f 0x803eccf0
         swc1 f0, 0x94, v1
         call 0x86a0c9b4          // 0x86a0c9b4(0x104, 0x0, 0x8, -1)
         a0 = s0
         v1 = 0x86a1 << 16
         v1 -= 0xffc
         t9 = v0 << 3
         t0 = v1 + t9
         t2 = [t0 + 0x90]         // t9
         t8 = sp + 0x30
         [t8 + 0] = t2
         t1 = [t0 + 0x94]         // t9
         goto 0x803ecd1c
         [t8 + 4] = t1

    loc_0x803ecd1c: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803ecce8
         t9 = s0 << 2
         t9 += s0
         t8 = 0x800d << 16
         t8 -= 0x1fa0
         t9 <<= 3
         v0 = t9 + t8
         a0 = v0 + 0x18
         a1 = v0 + 0x1c
         a2 = [sp + 0x30]         // t9
         call 0x86a0ced8          // 0x86a0ced8(0x800d0918, 0x800d091c, -1, -1)
         a3 = [sp + 0x34]         // t9
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]
         sp += 0x38
         ret                      // t9
         

    loc_0x803ecd8c: // orphan
         call 0x86a0c9b4          // 0x86a0c9b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a0
         t9 = 0x86a1 << 16
         t9 -= 0xffc
         t8 = v0 << 3
         t0 = t8 + t9
         t2 = [t0 + 0]            // t9
         t7 = sp + 0x20
         [t7 + 0] = t2
         t1 = [t0 + 4]            // t9
         goto 0x803ecdec
         [t7 + 4] = t1

    loc_0x803ecdb8: // orphan
         call 0x86a0c9b4          // 0x86a0c9b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a0
         t9 = 0x86a1 << 16
         t9 -= 0xffc
         t8 = v0 << 3
         t0 = t8 + t9
         t2 = [t0 + 0]            // t9
         t7 = sp + 0x20
         [t7 + 0] = t2
         t1 = [t0 + 4]            // t9
         goto 0x803ecdec
         [t7 + 4] = t1

    loc_0x803ecdd8: // orphan
         t7 = [t8 + 0]            // t9
         t3 = sp + 0x20
         [t3 + 0] = t7
         t9 = [t8 + 4]
         [t3 + 4] = t9

    loc_0x803ecdec: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803ecdb4
         t0 = [sp + 0x28]         // t9
         t2 = 0x800d << 16
         t2 -= 0x1fa0
         t1 = t0 << 2
         t1 += t0
         t1 <<= 3
         v0 = t1 + t2
         a0 = v0 + 0x18           // arg1
         a1 = v0 + 0x1c           // arg2
         a2 = [sp + 0x20]         // t9
         call 0x86a0ced8          // 0x86a0ced8(0x28800ce050, 0x28800ce054, -1, -1)
         a3 = [sp + 0x24]         // t9
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x803ece84: // orphan
         sdc1 f24, 0x28, sp
         sdc1 f22, 0x20, sp
         bc1f 0x803eceb4
         sdc1 f20, 0x18, sp
         s4 = 0 + 1               // lo
         if                       // likely
         

    loc_0x803ecea0: // orphan
         [sp + 0xdc] = 0

    loc_0x803ecea4: // orphan
         if                       // likely
         a1 = [sp + 0xdc]

    loc_0x803eceac: // orphan
         goto 0x803eced0
         a1 = 0 + 2               // arg2

    loc_0x803eced0: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803eceac
         at = 0x40e0 << 16
         mtc1 at, f24
         at = 0x40a0 << 16
         mtc1 at, f22
         t7 = a1 << 3             // arg2
         t7 += a1                 // arg2
         at = 0x4000 << 16
         t8 = 0x86a1 << 16
         t8 -= 0xffc
         t7 <<= 3
         t9 = a0 << 2             // arg1
         mtc1 at, f20
         fp = t0 + t9
         s3 = t7 + t8
         v1 = sp + 0xe0
         s0 = sp + 0x104
         v0 = sp + 0x94
         s7 = sp + 0xdc
         s6 = sp + 0x90
         s1 = sp + 0x8c

    loc_0x803ecf20: // orphan
         [v1 + 0] = s4

    loc_0x803ecf24: // orphan
         [s0 + 0] = s4
         [sp + 0x7c] = v1
         [sp + 0x68] = v0
         a0 = s1
         a1 = s6
         a2 = [s3 + 0]            // t9
         call 0x86a0ced8          // 0x86a0ced8(0x442f71dcfe117dbd, 0x442f71dcfe111002, -1, -1)
         a3 = [s3 + 4]            // t9
         lwc1 f12, 0xd8, fp
         at = 0x3f90 << 16
         mtc1 at, f1
         c.lt.s f22, f12
         t0 = 0x86a4 << 16
         mtc1 0, f0
         t0 += 0x43f0

    loc_0x803ecf60: // orphan
         v0 = [sp + 0x68]         // s4
         bc1f 0x803ecfa4
         v1 = [sp + 0x7c]
         lwc1 f8, 0x8c, sp
         mul.s f10, f20, f8
         cvt.d.s f16, f10
         mul.d f18, f16, f0
         cvt.s.d f4, f18
         swc1 f4
         lwc1 f6, 0x90, sp
         mul.s f8, f20, f6
         cvt.d.s f10, f8
         mul.d f16, f10, f0
         neg.d f18, f16
         cvt.s.d f4, f18
         goto 0x803ecfdc
         swc1 f4, 4, v0

    loc_0x803ecfdc: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803ecf9c
         v0 += 8
         at = , unsigned  , v0 < s7 // lo
         v1 += 4
         s0 += 4
         if                       // likely
         s3 += 8

    loc_0x803ecff4: // orphan
         t1 = [t0 + 0xec0]        // t9
         t2 = 0x86a4 << 16
         v1 = t2 + 0x43f0
         if                       // unlikely
         // CODE XREF from fcn.8225faf8 @ +0x12ec
         s1 = 0

    loc_0x803ed008: // orphan
         v0 = v1
         lwc1 f4, 0xe84, v1

    loc_0x803ed010: // orphan
         s1 += 1
         v0 += 8
         swc1 f4, 0x16a0, v0
         lwc1 f6, 0xe88, v1
         v1 += 0x14
         swc1 f6, 0x16a4, v0
         t3 = [t0 + 0xec0]        // t9
         at = , s1 < t3
         bnel at, 0, 0x803ed010   // unlikely
         lwc1 f4, 0xe84, v1

    loc_0x803ed038: // orphan
         t4 = [t0 + 0x16a4]       // t9
         a0 = 0
         at = 0x42fa << 16
         if                       // fcn.803ed0bc+0x158 // unlikely
         fp = 0 + 9

    loc_0x803ed04c: // orphan
         mtc1 at, f26
         at = 0xc316 << 16
         mtc1 at, f24
         at = 0x432a << 16
         mtc1 at, f22
         at = 0xc32a << 16
         mtc1 at, f20
         s7 = sp + 0x94
         s6 = sp + 0x128

    loc_0x803efdd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803f3fe8: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4054: // orphan
         
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f40e0: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x803f40e8: // orphan
         if                       // unlikely
         

    loc_0x803f40f0: // orphan
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4108: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4118: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f414c: // orphan
         
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f41d8: // orphan
         
         call 0x87f01a40          // 0x87f01a40(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         at = 0 + 2

    loc_0x803f41ec: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803f41f4: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x803f41fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f034c
         

    loc_0x803f4204: // orphan
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f420c: // orphan
         call 0x86b09380          // 0x86b09380(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x86b1 << 16
         // CODE XREF from fcn.803f00ac @ +0x2a8
         call 0x87f0a3e8          // 0x87f0a3e8(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x1f20
         if                       // fcn.803f43c0+0xbc // unlikely
         v0 = 0x86b2 << 16

    loc_0x803f4228: // orphan
         v0 = [v0 - 0x7e40]       // t9
         s0 = 0 + 1               // lo

    loc_0x803f425c: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f426c: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         .qword 0x1000008100000000

    loc_0x803f42d0: // orphan
         at = 0x86b1 << 16
         call 0x86b09380          // 0x86b09380(-1, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x2e9c] = s0
         call 0x87f02104          // 0x87f02104(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         at = 0 + 2

    loc_0x803f42ec: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803f42f4: // orphan
         if                       // unlikely
         

    loc_0x803f42fc: // orphan
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4304: // orphan
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         t4 = 0x86b2 << 16
         t4 = [t4 - 0x7e40]       // t9
         t3 = 0 + 0xc
         t5 = 0x86b2 << 16
         [t4 + 0] = t3
         t5 = [t5 - 0x7e40]       // t9
         a0 = 0 + 0xa
         call 0x80007b34          // 0x80007b34(0xa, 0x442f71dcfe116408, 0x8, -1)
         [t5 + 4] = 0
         t6 = 0x86b1 << 16
         t7 = 0x86b1 << 16
         t7 += 0x6d90

    loc_0x803f433c: // orphan
         t6 += 0x7364
         s0 = 0x86b1 << 16
         s0 += 0x7340
         [sp + 0x28] = t6
         [sp + 0x24] = t7
         [sp + 0x3c] = 0

    loc_0x803f4410: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4420: // orphan
         call 0x86b01720          // 0x86b01720(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x803f447c          // fcn.803f43c0+0xbc
         

    loc_0x803f4434: // orphan
         
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = 0 + 1               // lo
         if                       // fcn.803f43c0+0xbc // likely
         v0 = 0x86b2 << 16

    loc_0x803f444c: // orphan
         v0 = [v0 - 0x7e40]       // t9
         t4 = 0x86b2 << 16
         t3 = [v0 + 4]
         [v0 + 0] = t3
         t4 = [t4 - 0x7e40]       // t9
         t5 = [t4 + 0]
         if                       // fcn.803f43c0+0xbc // unlikely
         

    loc_0x803f446c: // orphan
         call 0x86b007d0          // 0x86b007d0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa

    loc_0x803f452c: // orphan
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x803f4840: // orphan
         a1 = 0
         v1 = [s1 + 0x34]         // t9
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]

    loc_0x803f4a30: // orphan
         t9 <<= 2
         t9 += a3                 // arg4
         t0 = 0x86b1 << 16
         t0 += 0x6da0
         t9 <<= 3
         s0 = t9 + t0
         a0 = s0
         a1 = 0 + 3               // arg2
         call 0x8003f210          // 0x8003f210(0x2086b16d78, 0x3, 0x8, -1)
         [sp + 0x6c] = a3
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x2086b16d78, 0x3, 0x8, -1)
         a1 = 0
         call 0x8003ec34          // "P@" // 0x8003ec34(0x2086b16d78, 0x0, 0x8, -1)
         a0 = s0
         beql v0, 0, 0x803f4a7c   // unlikely
         v1 = [s1 + 0x34]         // t9

    loc_0x803f4a74: // orphan
         [s1 + 0x34] = 0
         v1 = [s1 + 0x34]

    loc_0x803f4a7c: // orphan
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]         // t9

    loc_0x803f4a9c: // orphan
         t2 = 0x86b1 << 16
         t2 += 0x6da0
         t1 <<= 3
         s0 = t1 + t2
         // CODE XREF from fcn.803f03f0 @ +0x18
         a0 = s0
         a1 = 0 + 4               // arg2
         call 0x8003f210          // 0x8003f210(0x886b16df8, 0x4, 0x8, -1)
         [sp + 0x6c] = a3
         a0 = s0

    loc_0x803f4b28: // orphan
         a1 = 0
         v1 = [s1 + 0x34]
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]         // t9

    loc_0x803f4b94: // orphan
         
         mul.s f8, f14, f14
         add.s f0, f18, f8
         sqrt.s f0, f0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x34, sp
         at = 0x86b1 << 16
         lwc1 f12, -0x22d4, at
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x38, sp
         mtc1 0, f12
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x3c, sp
         at = 0x86b1 << 16
         lwc1 f12, -0x22d0, at
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x40, sp
         mtc1 0, f12
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x44, sp
         at = 0x86b1 << 16
         lwc1 f12, -0x22cc, at

    loc_0x803f4d18: // orphan
         t3 = 0x86b1 << 16
         t3 += 0x6da0
         t2 <<= 3
         s0 = t2 + t3
         a0 = s0
         a1 = 0 + 5               // arg2
         call 0x8003f210          // 0x8003f210(0x86b17598, 0x5, 0x8, -1)
         // CODE XREF from fcn.803f03f0 @ 0x803f0420
         [sp + 0x6c] = a3

    loc_0x803f4d84: // orphan
         a0 = s0
         a1 = 0 + 6               // arg2
         call 0x8003f210          // 0x8003f210(0x104, 0x6, 0x8, -1)
         [sp + 0x6c] = a3
         a1 = 1 << 16
         a1 |= 0x8000

    loc_0x803f4e7c: // orphan
         a1 = 0 + 6               // arg2
         call 0x8003f210          // 0x8003f210(-1, 0x6, 0x8, -1)
         [sp + 0x6c] = a3
         // CODE XREF from fcn.803f03f0 @ +0x54
         a1 = 1 << 16
         a1 |= 0x8000
         call 0x8003eb74          // 0x8003eb74(-1, 0x18000, 0x8, -1)
         a0 = s0
         a0 = s0

    loc_0x803f4f08: // orphan
         a1 = 1 << 16
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x10000, 0x8, -1)
         a1 = 0
         call 0x8003ec54          // "T@" // 0x8003ec54(0x104, 0x0, 0x8, -1)
         a0 = s0
         bnel v0, 0, 0x803f4f44   // likely
         v0 = [s1 + 0x1a4]        // t9

    loc_0x803f4f28: // orphan
         t1 = [s1 + 0x1a4]        // t9
         beql t1, 0, 0x803f4f44   // unlikely
         v0 = [s1 + 0x1a4]        // t9

    loc_0x803f4f34: // orphan
         t2 = [s1 + 0x1b4]        // t9
         t3 = t2 + 1
         [s1 + 0x1b4] = t3
         v0 = [s1 + 0x1a4]        // t9

    loc_0x803f4f44: // orphan
         t1 = 0x86b1 << 16
         t1 += 0x7a78
         if                       // unlikely
         t4 = v0 + 1

    loc_0x803f4f54: // orphan
         [s1 + 0x1a4] = t4

    loc_0x803f4f58: // orphan
         v1 = [s1 + 0x214]        // t9
         if                       // unlikely
         t5 = v1 - 1

    loc_0x803f4f64: // orphan
         t6 = [sp + 0x6c]         // t9
         t8 = [s1 + 0x1b4]
         [s1 + 0x214] = t5
         t7 = t6 << 2

    loc_0x803f4f74: // orphan
         t7 += t6
         t7 <<= 2
         t9 = t8 << 2
         t0 = t7 + t9
         v0 = t0 + t1
         t2 = [v0 + v1]           // t9
         t3 = t2 + 1
         [v0 + v1] = t3

    loc_0x803f4f94: // orphan
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         if                       // unlikely
         t5 = 0x86b2 << 16

    loc_0x803f4fa4: // orphan
         t4 = [s1 + 0x1a4]        // t9
         t8 = 0 + 7
         t7 = 0x86b1 << 16
         if                       // unlikely
         t9 = 0 + 0x15

    loc_0x803f4fb8: // orphan
         [s1 + 0x1a4] = 0

    loc_0x803f4fbc: // orphan
         t5 = [t5 - 0x7e40]       // t9
         at = 0 + 6
         t6 = [t5 + 0]
         if                       // likely
         

    loc_0x803f4fd0: // orphan
         [s1 + 0x34] = t8

    loc_0x803f4fd4: // orphan
         t7 = [t7 + 0x7c18]       // t9
         beql t7, 0, 0x803f4fe8   // unlikely
         v1 = [s1 + 0x34]         // t9

    loc_0x803f4fe0: // orphan
         [s1 + 0x34] = t9

    loc_0x803f4fe4: // orphan
         v1 = [s1 + 0x34]         // t9

    loc_0x803f4fe8: // orphan
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]         // t9

    loc_0x803f5000: // orphan
         t0 <<= 2
         t0 += a3                 // arg4
         t1 = 0x86b1 << 16
         t1 += 0x6da0
         t0 <<= 3
         s0 = t0 + t1
         a0 = s0
         a1 = 0 + 8               // arg2 // a2
         call 0x8003f210          // 0x8003f210(0x85ee3ba048ddee98, 0x8, 0x8, -1)
         [sp + 0x6c] = a3
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x85ee3ba048ddee98, 0x8, 0x8, -1)
         a1 = 0
         call 0x8003ec34          // 0x8003ec34(0x85ee3ba048ddee98, 0x0, 0x8, -1)
         a0 = s0
         if                       // unlikely
         t2 = 0 + 2

    loc_0x803f5044: // orphan
         [s1 + 0x34] = t2

    loc_0x803f5048: // orphan
         v1 = [s1 + 0x34]         // s4
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]         // t9

    loc_0x803f506c: // orphan
         t4 = 0x86b1 << 16
         t4 += 0x6da0
         t3 <<= 3
         s0 = t3 + t4
         a0 = s0
         a1 = 0 + 9               // arg2
         call 0x8003f210          // 0x8003f210(0x86b17590, 0x9, 0x8, -1)
         [sp + 0x6c] = a3
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x86b17590, 0x9, 0x8, -1)
         a1 = 0 + 1               // lo
         call 0x8003ec34          // "P@" // 0x8003ec34(0x86b17590, 0x1, 0x8, -1)
         a0 = s0
         beql v0, 0, 0x803f50d0   // unlikely
         v1 = [s1 + 0x34]         // s4

    loc_0x803f50a8: // orphan
         lwc1 f6, 0x48, s1
         at = 0x86b1 << 16
         ldc1 f4, -0x22c0, at
         cvt.d.s f16, f6
         t5 = 0 + 7
         add.d f10, f16, f4
         [s1 + 0x34] = t5
         cvt.s.d f18, f10
         swc1 f18, 0x48, s1
         v1 = [s1 + 0x34]

    loc_0x803f50d0: // orphan
         goto 0x803f53ac          // fcn.803f04b0+0x4efc
         a3 = [sp + 0x6c]         // t9

    loc_0x803f50f8: // orphan
         t8 <<= 2
         bc1t 0x803f510c
         t8 += a3                 // arg4
         t6 = 0 + 0x9f
         [a1 + 0xa0] = t6         // arg2
         t7 = 0x86b1 << 16
         t7 += 0x6da0
         t8 <<= 3
         s0 = t8 + t7
         a0 = s0
         a1 = 0 + 0xa             // arg2
         call 0x8003f210          // 0x8003f210(0x2086b16d78, 0xa, 0x8, -1)
         [sp + 0x6c] = a3
         // CODE XREF from fcn.803f03f0 @ 0x803f0478
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x2086b16d78, 0xa, 0x8, -1)
         a1 = 0
         call 0x8003ec34          // 0x8003ec34(0x2086b16d78, 0x0, 0x8, -1)
         a0 = s0

    loc_0x803f51f0: // orphan
         t3 <<= 3
         s0 = t3 + t4
         a0 = s0
         a1 = 0 + 0xc             // arg2
         call 0x8003f210          // 0x8003f210(0x1000007ef, 0xc, 0x8, -1)
         // CODE XREF from fcn.803f03f0 @ 0x803f0490
         [sp + 0x6c] = a3
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x1000007ef, 0xc, 0x8, -1)
         a1 = 0
         call 0x8003ec34          // "P@" // 0x8003ec34(0x1000007ef, 0x0, 0x8, -1)
         a0 = s0
         beql v0, 0, 0x803f522c   // fcn.803f03f0+0x4e3c // unlikely
         v1 = [s1 + 0x34]

    loc_0x803f5224: // orphan
         [s1 + 0x34] = 0

    loc_0x803f525c: // orphan
         // CODE XREF from fcn.803f03f0 @ +0xa8
         a0 = s0
         a1 = 0 + 0xd             // arg2
         call 0x8003f210          // 0x8003f210(0x104, 0xd, 0x8, -1)
         [sp + 0x6c] = a3
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0xd, 0x8, -1)
         a1 = 0 + 2
         call 0x8003ec34          // 0x8003ec34(0x104, 0x2, 0x8, -1)
         a0 = s0

    loc_0x803f52e8: // orphan
         // CODE XREF from fcn.803f03f0 @ 0x803f04a8
         t1 = 0x86b1 << 16
         t1 += 0x6da0
         t0 <<= 3
         s0 = t0 + t1
         a0 = s0
         // CODE XREF from fcn.803f03f0 @ +0xbc
         a1 = 0 + 0xe             // arg2
         call 0x8003f210          // 0x8003f210(0x217b8ee8773c8de0, 0xe, 0x8, -1)
         [sp + 0x6c] = a3

    loc_0x803f5778: // orphan
         t2 = 0 + 5
         at = 0x86b1 << 16
         goto 0x803f588c          // fcn.803f04b0+0x53dc
         [at + 0x7abc] = t2

    loc_0x803f58f0: // orphan
         t9 = 0x86b1 << 16
         t9 += 0x7a78
         swc1 f4, 0x24, a1        // arg2
         lwc1 f6, 0xb4, a0        // arg1
         t8 = v0 << 2
         v1 = t8 + t9
         swc1 f6, 0x2c, a1        // arg2
         t0 = [v1 + 0x34]         // t9
         at = 0 + 0x10
         if                       // likely
         at = 0x4334 << 16

    loc_0x803f591c: // orphan
         mtc1 at, f8
         lwc1 f10, 0x48, v1
         c.eq.s f8, f10
         
         bc1tl 0x803f5968
         ra = [sp + 0x14]
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         at = 0 + 3
         div 0, v0, at
         t1 = hi
         a0 = [sp + 0x18]         // t9
         // CODE XREF from fcn.803f04b0 @ 0x803f0538
         if                       // likely
         a3 = 0 + 0xff            // s4

    loc_0x803f5954: // orphan
         lwc1 f12, 0xac, a0
         lwc1 f14, 0xb0, a0

    loc_0x803f595c: // orphan
         call 0x86b05484          // 0x86b05484(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = [a0 + 0xb4]         // t9

    loc_0x803f5964: // orphan
         // CODE XREF from fcn.803f04b0 @ +0x90
         ra = [sp + 0x14]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x803f5a44: // orphan
         if                       // unlikely
         s7 = 0x86b1 << 16

    loc_0x803f5af4: // orphan
         [sp + 0x90] = t0
         a0 = [sp + 0x78]
         a1 = [sp + 0x80]
         call 0x86b04500          // 0x86b04500(0x0, 0x0, 0x8, -1)
         a3 = t0
         goto 0x803f5b50          // fcn.803f04b0+0x56a0
         v1 = [s7 + 0x344]        // t9

    loc_0x803f5c7c: // orphan
         [s0 + 0x34] = t5
         [s0 + 0xc8] = t2
         a0 = 0 | 0xaf05          // arg1
         call 0x8002781c          // 0x8002781c(0xaf05, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1 & 0xff
         v0 = 0x87f1 << 16
         v0 = [v0 + 0x19dc]       // t9
         a0 = [sp + 0x80]
         a1 = fp
         lwc1 f4, 0x48, v0
         // CODE XREF from fcn.803f04b0 @ +0xf0
         a2 = [sp + 0x88]
         a3 = [sp + 0x8c]
         swc1 f4, 0x10, sp
         lwc1 f6, 0x4c, v0
         swc1 f6, 0x14, sp
         lwc1 f8, 0x50, v0
         call 0x86b04970          // 0x86b04970(0x0, 0x178000, 0x0, 0x0)
         swc1 f8, 0x18, sp
         t3 = 0 + 1               // lo
         [s7 + 0x354] = t3
         goto 0x803f5cf0
         v1 = [sp + 0x88]

    loc_0x803f778c: // orphan
         t6 = [a1 + 0x20]         // arg2 // t9
         v0 = 0
         a0 = 0x87f1 << 16
         byte [a1 + 0x41] = t6    // arg2
         // CODE XREF from fcn.80400480 @ 0x803f0798
         a1 = [v1 + 0]            // s4
         t7 = [a1 + 0x1c]         // arg2
         at = , t7 < 0x18
         if                       // unlikely
         

    loc_0x803f77b0: // orphan
         v0 = 0 + 1               // lo

    loc_0x803f77b4: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f77a8
         beql v0, 0, 0x803f77c8   // fcn.80400480-0x8cb8 // unlikely
         ra = [sp + 0x14]

    loc_0x803f77bc: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f079c
         a0 = [a0 + 0x19d8]       // arg1 // t9

    loc_0x803f7884: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f07b8
         [v1 + 0x20] = t6
         a3 = [a3 - 0x1e5c]       // t9
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x18]         // t9
         a0 = [sp + 0x18]         // t9
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x803f797c: // orphan
         [sp + 0x44] = s1
         [sp + 0x40] = s0
         sdc1 f28, 0x38, sp
         sdc1 f26, 0x30, sp
         sdc1 f24, 0x28, sp
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f22, 0x20, sp
         at = 0x4334 << 16
         mtc1 at, f24
         mov.s f12, f20
         mul.s f26, f0, f24
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = 0x86b1 << 16
         at = 0x86b1 << 16
         s4 = 0x86b1 << 16
         // CODE XREF from fcn.80400480 @ 0x803f07c8
         mul.s f28, f0, f24
         s4 += 0x7a88
         ldc1 f22, -0x2210, at
         s0 += 0x7a78
         s3 = 0 + 0x12

    loc_0x803f7b00: // orphan
         sp -= 0x190
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
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f20, 0x28, sp
         t6 = 0x86b1 << 16
         t6 = [t6 - 0x1f60]       // t9
         [sp + 0x178] = 0
         [sp + 0x174] = 0
         if                       // unlikely
         

    loc_0x803f7b60: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 3

    loc_0x803f7b6c: // orphan
         div 0, v0, at
         t7 = hi
         // CODE XREF from fcn.80400480 @ 0x803f07e0
         [sp + 0x16c] = t7
         goto 0x803f7ba4          // fcn.80400480-0x88dc
         at = 0x4280 << 16

    loc_0x803f7b80: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f7b58
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // fcn.80400480-0x88e4 // likely
         // CODE XREF from fcn.803f0600 @ +0x1e8
         t8 = v0 & 3

    loc_0x803f7b90: // orphan
         if                       // fcn.80400480-0x88e4 // unlikely
         

    loc_0x803f7de8: // orphan
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

    loc_0x803f8314: // orphan
         mtc1 t3, f8
         mtc1 v1, f10
         a0 = v1 + 1              // arg1
         cvt.s.w f16, f8
         lwc1 f2, 0x14c, s0
         t2 = v1 + 1
         [s0 + 0x13c] = t2
         at = 0x86b1 << 16
         cvt.s.w f6, f10
         mtc1 a0, f10
         c.lt.s f0, f2
         div.s f12, f6, f16

    loc_0x803f85fc: // orphan
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f8, f10, f30
         a0 = s4
         a1 = 0
         div.s f4, f8, f20
         trunc.w.s f6, f4
         mfc1 t8, f6
         
         byte [s3 + 0x49c] = t8
         lwc1 f10, 0x18, s2
         mul.s f8, f10, f30
         div.s f4, f8, f20
         trunc.w.s f6, f4
         mfc1 t1, f6
         call 0x86b07d94          // fcn.803f8640 // 0x86b07d94(0xff, 0x0, 0x8, -1)
         byte [s3 + 0x49d] = t1

    loc_0x803f8688: // orphan
         at = 0x41e0 << 16
         mtc1 at, f8
         c.lt.s f10, f2
         at = 0x4296 << 16
         mtc1 at, f10
         t3 = 0 + 1               // lo
         bc1f 0x803f86ac
         sub.s f4, f2, f8
         [sp + 0x174] = t3
         swc1 f4, 0x48, s0
         lwc1 f6, 0x48, s0
         at = 0x4296 << 16
         c.lt.s f6, f10
         
         bc1f 0x803f8830
         
         mtc1 at, f8
         t5 = 0 + 0xa
         at = 0x4302 << 16
         swc1 f8, 0x48, s0
         t4 = [s5 + 0x33c]        // t9
         beql t4, 0, 0x803f86f0   // unlikely
         mtc1 at, f4

    loc_0x803f86e4: // orphan
         goto 0x803f8830          // fcn.803f87b4+0x7c
         [s0 + 0x34] = t5

    loc_0x803f86f0: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f86dc
         lwc1 f6, 0x48, s0

    loc_0x803f86f4: // orphan
         at = 0x4160 << 16
         mtc1 at, f8
         sub.s f10, f4, f6
         t7 = 0 + 0xe
         [s0 + 0x34] = t7
         a0 = 0 | 0xaf04          // arg1
         div.s f4, f10, f8
         a1 = s4 & 0xff           // arg2
         a2 = s3 + 0x49c          // arg3
         call 0x8002781c          // 0x8002781c(0xaf04, 0xff, 0x10000049b, -1)
         swc1 f4, 0xd8, s0
         goto 0x803f8830          // fcn.803f87b4+0x7c
         

    loc_0x803f8780: // orphan
         at = 0x41b0 << 16
         mtc1 at, f8
         lwc1 f2, 0x48, s0
         at = 0x4160 << 16
         mtc1 at, f4
         // CODE XREF from fcn.803f089c @ +0x64
         c.lt.s f8, f2
         mtc1 0, f8
         t8 = 0 + 1               // lo
         at = 0x86b1 << 16
         bc1f 0x803f87b0
         sub.s f6, f2, f4
         [sp + 0x174] = t8
         swc1 f6, 0x48, s0

    loc_0x803f87ec: // orphan
         at = 0x42c8 << 16
         mtc1 at, f6
         t9 = 0 + 1               // lo
         bc1f 0x803f8804
         sub.s f8, f2, f10
         [sp + 0x174] = t9
         swc1 f8, 0x48, s0
         lwc1 f4, 0x48, s0
         at = 0x42c8 << 16
         c.lt.s f4, f6
         
         bc1f 0x803f8830
         
         mtc1 at, f10
         t1 = 0 + 7
         // CODE XREF from fcn.803f089c @ +0x68
         [s0 + 0x34] = t1
         swc1 f10, 0x48, s0

    loc_0x803f89dc: // orphan
         t9 = 0 + 8               // a2
         add.s f0, f8, f4
         [s0 + 0x34] = t9
         c.lt.s f0, f6
         swc1 f0, 0x58, s0
         bc1f 0x803f8a04
         
         lwc1 f10, 0x58, s0
         add.s f8, f10, f24
         swc1 f8, 0x58, s0
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f4, 0x48, s0
         mul.s f22, f0, f4
         swc1 f22, 0x14, s2
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x58, s0
         lwc1 f6, 0x48, s0
         lwc1 f10, 0x14, s2
         at = 0x4348 << 16
         mul.s f2, f0, f6
         mtc1 at, f14
         at = 0x86b1 << 16
         mul.s f8, f10, f30
         swc1 f2, 0x18, s2
         swc1 f2, 0x184, sp
         div.s f4, f8, f14
         trunc.w.s f6, f4
         mfc1 t3, f6
         
         byte [s3 + 0x49c] = t3
         lwc1 f10, 0x18, s2
         mul.s f8, f10, f30
         lwc1 f10
         div.s f4, f8, f14

    loc_0x803f8a68: // orphan
         trunc.w.s f6, f4
         mfc1 t5, f6
         
         byte [s3 + 0x49d] = t5
         lwc1 f8, 0xf8, s5
         add.s f4, f10, f8
         ldc1 f10, -0x2128, at
         cvt.d.s f6, f4
         sub.d f8, f6, f10
         call 0x8007e9c0          // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         cvt.s.d f12, f8
         lwc1 f4
         lwc1 f6, 0xf8, s5
         at = 0x86b1 << 16
         mov.s f20, f0
         add.s f10, f4, f6
         ldc1 f4, -0x2120, at
         cvt.d.s f8, f10
         sub.d f6, f8, f4
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         cvt.s.d f12, f6
         at = 0x4302 << 16
         mtc1 at, f16
         lwc1 f2, 0x184, sp
         mul.s f10, f20, f16
         
         mul.s f8, f0, f16

    loc_0x803f8ad4: // orphan
         sub.s f12, f10, f22
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         sub.s f14, f8, f2
         halfword [s3 + 0xf0] = v0
         a0 = s4
         call 0x86b07d94          // 0x86b07d94(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         t7 = halfword [s3 + 0xf0] // s4
         t6 = halfword [s3 + 0xe8]
         at = 0x4302 << 16
         mtc1 at, f14
         if                       // likely
         t8 = 0 + 8               // a2

    loc_0x803f8b08: // orphan
         [s0 + 0x34] = t8

    loc_0x803f8b0c: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803f8b00
         lwc1 f2, 0x48, s0
         at = 0x4070 << 16
         mtc1 at, f6
         sub.s f4, f14, f2
         lwc1 f12
         swc1 f14, 0x11c, s0
         [s0 + 0x13c] = 0
         div.s f10, f4, f6
         lwc1 f4, 0xfc, s0
         at = 0x86b1 << 16
         swc1 f2, 0x10c, s0
         add.s f0, f12, f4
         swc1 f0, 0x14c, s0
         trunc.w.s f8, f10
         cvt.d.s f10, f0
         mfc1 t1, f8
         
         [s0 + 0x12c] = t1
         // CODE XREF from fcn.80400480 @ 0x803f0930
         ldc1 f6, -0x2118, at
         c.lt.d f6, f10
         

    loc_0x803f8b60: // orphan
         bc1fl 0x803f8b78
         t2 = [s0 + 0x12c]

    loc_0x803f8cc4: // orphan
         lwc1 f8

    loc_0x803f8e78: // orphan
         trunc.w.s f4, f10
         mfc1 v0, f4
         
         lwc1 f6

    loc_0x803f9f98: // orphan
         lwc1 f10, 0x48, s0
         neg.s f12, f22
         mul.s f20, f0, f10
         swc1 f20, 0x18, s2
         call 0x86b07d58          // 0x86b07d58(-1, 0x442f71dcfe116408, 0x8, -1)
         neg.s f14, f20
         t4 = v0 - 0x3fff
         div 0, t4, s7
         t5 = hi
         halfword [s3 + 0xf0] = t5
         lwc1 f6, 0x14, s2
         at = 0x4348 << 16
         mtc1 at, f20
         mul.s f4, f6, f30
         if                       // likely
         

    loc_0x803f9fd8: // orphan
         break 7

    loc_0x803f9fdc: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803f9fe8: // orphan
         if                       // likely
         

    loc_0x803f9ff0: // orphan
         break 6

    loc_0x803f9ff4: // orphan
         div.s f8, f4, f20
         a0 = s4
         a1 = 0
         trunc.w.s f10, f8
         mfc1 t6, f10
         
         byte [s3 + 0x49c] = t6
         lwc1 f6, 0x18, s2
         mul.s f4, f6, f30
         div.s f8, f4, f20
         trunc.w.s f10, f8
         mfc1 t9, f10
         call 0x86b07d94          // 0x86b07d94(0xff, 0x0, 0x8, -1)
         byte [s3 + 0x49d] = t9
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         v0 = [s0 + 0x34]         // t9

    loc_0x803fa110: // orphan
         [sp + 0x24] = t7
         at = , unsigned  , t1 < 0x18 // lo
         a3 = a1                  // t0
         s0 = halfword [t7 + 0xe8]
         s1 = halfword [t7 + 0xf0]
         if                       // unlikely
         v1 = 0 + 0x1999

    loc_0x803fa17c: // orphan
         a2 = 0 + 0x3332          // arg3
         t3 = [sp + 0x24]
         goto 0x803fa2ec          // fcn.80400480-0x6194
         halfword [t3 + 0xe8] = v0

    loc_0x803fa1f8: // orphan
         if                       // unlikely
         a3 = [sp + 0x34]         // t9

    loc_0x803fa200: // orphan
         v1 = 0 + 0xccc

    loc_0x803fa204: // orphan
         a0 = s1 << 0x10          // arg1
         a1 = s0 << 0x10          // arg2
         a1 = , signed  a1 >> 0x10 // arg2 // s0
         a0 = , signed  a0 >> 0x10 // arg1
         halfword [sp + 0x2a] = v1
         call 0x86b08088          // 0x86b08088(0xffff7dbd, 0x104, 0x8, -1)
         [sp + 0x34] = a3
         at = , v0 < 0xccc        // lo
         v1 = halfword [sp + 0x2a]
         if                       // unlikely
         a3 = [sp + 0x34]         // t9

    loc_0x803fa230: // orphan
         v1 = 0 + 0x666

    loc_0x803fa234: // orphan
         a0 = s1 << 0x10
         a1 = s0 << 0x10
         a1 = , signed  a1 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10
         halfword [sp + 0x2a] = v1
         call 0x86b08088          // 0x86b08088(0xffff7dbd, 0x104, 0x8, -1)
         [sp + 0x34] = a3
         at = , v0 < 0x666        // lo

    loc_0x803fa2cc: // orphan
         a0 = s1 << 0x10          // arg1
         a1 = s0 << 0x10          // arg2
         a1 = , signed  a1 >> 0x10 // arg2 // s0
         a0 = , signed  a0 >> 0x10 // arg1
         call 0x86b07fb0          // 0x86b07fb0(0xffff7dbd, 0x104, 0x8, -1)
         a2 = 0 + 0xccc
         t7 = [sp + 0x24]
         halfword [t7 + 0xe8] = v0

    loc_0x803fa314: // orphan
         [sp + 0x34] = a3
         a1 = halfword [sp + 0x2e]
         // CODE XREF from fcn.80400480 @ 0x803f0a78
         call 0x86b08088          // 0x86b08088(-1, 0x0, 0x8, -1)
         a0 = halfword [sp + 0x2a] // v1
         v1 = halfword [sp + 0x32]
         t6 = halfword [sp + 0x2e]
         at = , v1 < v0
         if                       // fcn.80400480-0x60b8 // likely
         v0 = halfword [sp + 0x2a] // v1

    loc_0x803fa338: // orphan
         a2 = t6 + v1
         a2 <<= 0x10

    loc_0x803fa42c: // orphan
         bc1fl 0x803fa440
         sub.s f2, f14, f12
         goto 0x803fa440
         sub.s f2, f12, f14

    loc_0x803fa440: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803fa434
         lwc1 f4, -0x2058, at
         at = 0x86b1 << 16
         c.lt.s f4, f2
         
         bc1f 0x803fa468
         
         ldc1 f6, -0x2050, at
         cvt.d.s f8, f2
         sub.d f10, f6, f8
         cvt.s.d f2, f10
         ret                      // ra
         mov.s f0, f2

    loc_0x803fa5c4: // orphan
         s0 += 0x510
         s6 = 0 + 0xa
         s7 = 0

    loc_0x803fac78: // orphan
         at = 0 + 4
         if                       // likely
         s1 += 4

    loc_0x803face4: // orphan
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         // CODE XREF from fcn.80400480 @ 0x803f0ad8
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s0
         s1 = 0 + 1               // lo
         if                       // likely
         s0 = 0x86b1 << 16

    loc_0x803fae14: // orphan
         s4 = 0x86b1 << 16
         s4 += 0x78e0
         s0 += 0x7340
         s3 = 0 - 0x1001
         s2 = 0 + 6

    loc_0x803fae28: // orphan
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 7
         call 0x8003ec54          // "TQ" // 0x8003ec54(0x104, 0x7, 0x8, -1)
         a0 = s0
         bnel v0, s1, 0x803fae90  // likely
         s0 += 0x168

    loc_0x803fae44: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         div 0, v0, s2
         a1 = hi
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s0
         if                       // likely
         

    loc_0x803fae68: // orphan
         break 7

    loc_0x803fae6c: // orphan
         at = 0 - 1               // s2
         // CODE XREF from fcn.80400480 @ 0x803f0aec
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x803fae78: // orphan
         if                       // likely
         

    loc_0x803fae7c: // orphan
         if                       // likely
         

    loc_0x803fae80: // orphan
         break 6

    loc_0x803fae84: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 += 0x168

    loc_0x803fae90: // orphan
         if                       // likely
         // CODE XREF from fcn.80400480 @ 0x803f0af0
         halfword [s0 - 0x148] = s3

    loc_0x803faf2c: // orphan
         [v1 + 0x284] = 0
         [v1 + 0x33c] = 0
         [v1 + 0x340] = 0
         [v1 + 0x32c] = 0
         [v1 + 0x498] = 0
         [v1 + 0x354] = 0
         [v1 + 0x358] = 0
         at = 0x86b1 << 16
         [at + 0x7b40] = t2
         at = 0x86b1 << 16
         [at + 0x7ddc] = 0
         at = 0x86b1 << 16
         [at + 0x7dec] = 0
         at = 0x86b1 << 16
         [at + 0x7dfc] = 0
         at = 0x86b1 << 16
         [at + 0x7f1c] = 0
         at = 0x86b1 << 16
         [at + 0x7c1c] = 0
         at = 0x86b1 << 16
         t3 = 0 + 7
         [at + 0x7b44] = t3
         at = 0x86b1 << 16
         [at + 0x7de0] = 0
         at = 0x86b1 << 16
         [at + 0x7df0] = 0
         at = 0x86b1 << 16
         [at + 0x7e00] = 0
         at = 0x86b1 << 16
         [at + 0x7f20] = 0
         at = 0x86b1 << 16
         [at + 0x7c20] = 0
         at = 0x86b1 << 16
         t4 = 0 + 7
         [at + 0x7b48] = t4
         at = 0x86b1 << 16
         [at + 0x7de4] = 0
         at = 0x86b1 << 16
         [at + 0x7df4] = 0

    loc_0x803fafc8: // orphan
         at = 0x86b1 << 16
         [at + 0x7e04] = 0
         at = 0x86b1 << 16
         [at + 0x7f24] = 0
         at = 0x86b1 << 16
         [at + 0x7c24] = 0
         at = 0x86b1 << 16
         t5 = 0 + 7
         [at + 0x7b4c] = t5
         at = 0x86b1 << 16
         [at + 0x7de8] = 0
         at = 0x86b1 << 16
         [at + 0x7df8] = 0
         at = 0x86b1 << 16
         [at + 0x7e08] = 0
         at = 0x86b1 << 16
         [at + 0x7f28] = 0
         at = 0x86b1 << 16
         [at + 0x7c28] = 0
         call 0x86b0b04c          // 0x86b0b04c(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 0x70] = 0
         t7 = 0x86b2 << 16
         t7 = [t7 - 0x7e40]       // t9
         t6 = 0 + 5
         [t7 + 0] = t6
         ra = [sp + 0x14]         // s0
         sp += 0x18
         ret                      // s0
         // CODE XREF from fcn.803f089c @ +0x258
         

    loc_0x803fb1ac: // orphan
         add.s f6, f0, f4
         swc1 f6, 0xf8, v1
         call 0x86b057b0          // 0x86b057b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x86b1 << 16
         v1 += 0x7a78
         v0 = [v1 + 0]            // t9
         [v1 + 0x284] = 0
         t8 = 0x86b2 << 16
         a0 = , v0 < 4
         t6 = v0 + 1
         if                       // likely
         [v1 + 0] = t6

    loc_0x803fb1e0: // orphan
         t8 = [t8 - 0x7e40]       // t9
         t7 = 0 + 4
         goto 0x803fb258          // fcn.80400480-0x5228
         [t8 + 0] = t7

    loc_0x803fb1f0: // orphan
         t9 = [v1 + 0x354]
         t0 = 0 + 1               // lo
         t2 = 0x86b2 << 16
         beql t9, 0, 0x803fb21c   // likely
         t3 = [v1 + 0x44]         // t9

    loc_0x803fb204: // orphan
         [v1 + 0x44] = t0
         t2 = [t2 - 0x7e40]       // t9
         t1 = 0 + 8               // a2
         goto 0x803fb258          // fcn.80400480-0x5228
         [t2 + 0] = t1

    loc_0x803fb21c: // orphan
         a0 = 0x86b1 << 16
         t5 = 0 + 2
         bnel t3, 0, 0x803fb258   // fcn.80400480-0x5228 // likely
         [v1 + 0x44] = t5

    loc_0x803fb228: // orphan
         a0 = 0x86b1 << 16
         t5 = 0 + 2
         bnel t3, 0, 0x803fb258   // fcn.80400480-0x5228 // likely
         [v1 + 0x44] = t5

    loc_0x803fb22c: // orphan
         call 0x87f02684          // 0x87f02684(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0b0c
         a0 -= 0x1660
         a0 = 0x86b1 << 16
         call 0x87f02684          // 0x87f02684(0x86b10000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x11a0
         v1 = 0x86b1 << 16

    loc_0x803fb294: // orphan
         [at - 0x7dec] = 0
         at = 0x86b2 << 16
         [at - 0x7de8] = 0
         t7 = 0 + 1               // lo
         [t0 + 0x19c] = t7
         v0 = 0x86b2 << 16
         v0 = [v0 - 0x7e40]       // t9
         at = 0 + 4
         t8 = [v0 + 0xc]          // t9
         t9 = , unsigned  byte [t8 + 0x2180] // s4
         bnel t9, at, 0x803fb2d8  // likely
         t1 = [t0 + 0x1a0]        // t9

    loc_0x803fb2c4: // orphan
         call 0x87f0c930          // 0x87f0c930(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x1c
         t0 = 0x86b1 << 16
         t0 += 0x7a78
         t1 = [t0 + 0x1a0]        // t9

    loc_0x803fb2d8: // orphan
         if                       // fcn.803fb3cc+0x164 // likely
         

    loc_0x803fb2e0: // orphan
         lwc1 f4, 0xf8, t0
         at = 0x86b1 << 16
         ldc1 f8, -0x2020, at
         cvt.d.s f6, f4
         mtc1 0, f18
         sub.d f10, f6, f8
         at = 0x86b1 << 16
         cvt.s.d f16, f10
         swc1 f16, 0xf8, t0
         lwc1 f0, 0xf8, t0
         c.lt.s f0, f18
         
         bc1f 0x803fb324
         
         lwc1 f4, -0x2018, at
         // CODE XREF from fcn.80400480 @ 0x803f0b18
         add.s f6, f0, f4
         swc1 f6, 0xf8, t0
         call 0x86b057b0          // 0x86b057b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86b081b4          // 0x86b081b4(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80400480 @ 0x803f0b1c
         

    loc_0x803fb5c4: // orphan
         a3 = [a3 + 0x7aac]       // arg4 // t9
         a0 = 0x86b1 << 16
         a1 = 0x86b1 << 16
         a2 = 0x86b1 << 16
         a2 = [a2 + 0x7ab0]       // arg3 // t9
         a1 = [a1 + 0x7ab4]       // arg2 // t9
         a0 = [a0 + 0x7ab8]       // arg1 // t9
         v1 = 0 + 0x15
         at = 0x86b1 << 16
         v0 = 0
         if                       // likely
         [at + 0x7aac] = a3

    loc_0x803fb5f4: // orphan
         v0 = 0 + 1               // lo

    loc_0x803fb5f8: // orphan
         at = 0x86b1 << 16
         if                       // likely
         [at + 0x7ab0] = a2

    loc_0x803fb604: // orphan
         v0 = 0 + 1               // lo

    loc_0x803fb608: // orphan
         at = 0x86b1 << 16
         if                       // likely
         [at + 0x7ab4] = a1

    loc_0x803fb614: // orphan
         v0 = 0 + 1               // lo

    loc_0x803fb618: // orphan
         at = 0x86b1 << 16
         if                       // likely
         [at + 0x7ab8] = a0

    loc_0x803fb624: // orphan
         v0 = 0 + 1               // lo

    loc_0x803fb628: // orphan
         if                       // fcn.803fb3cc+0x290 // unlikely
         t4 = 0x86b2 << 16

    loc_0x803fb630: // orphan
         [t0 + 0x284] = 0
         t4 = [t4 - 0x7e40]       // t9
         t3 = 0 + 9
         [t4 + 0] = t3

    loc_0x803fb640: // orphan
         goto 0x803fb65c          // fcn.803fb3cc+0x290
         t1 = [t0 + 0x1a0]        // t9

    loc_0x803fb75c: // orphan
         goto 0x803fb780
         swc1 f16, 0xf8, a2       // arg3

    loc_0x803fb780: // orphan
         // CODE XREF from fcn.803dc1fc @ 0x803fb75c
         lwc1 f0, 0xf8, a2        // arg3
         mtc1 0, f16
         at = 0x86b1 << 16
         c.lt.s f0, f16
         
         bc1f 0x803fb7a8
         
         lwc1 f18, -0x1ff0, at
         add.s f4, f0, f18
         swc1 f4, 0xf8, a2        // arg3
         call 0x86b057b0          // 0x86b057b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86b081b4          // 0x86b081b4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]         // s0
         sp += 0x18
         ret                      // s0
         

    loc_0x803fb7f8: // orphan
         mtc1 t6, f4
         at = 0x86b1 << 16
         ldc1 f8, -0x1fe8, at
         cvt.d.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f17
         mtc1 0, f16
         a1 = 0x86b1 << 16
         mul.d f10, f6, f8
         a1 += 0x7a78             // arg2
         add.d f18, f10, f16
         cvt.s.d f0, f18
         swc1 f0, 0x5c, a0        // arg1
         t7 = [a2 + 0]            // arg3 // t9
         swc1 f0, 0x58, t7
         t8 = [a2 + 0]            // arg3 // t9
         swc1 f0, 0x54, t8
         t9 = [a1 + 0x94]         // arg2
         t0 = t9 - 0xc
         [a1 + 0x94] = t0         // arg2
         at = , v0 < 0x1f
         if                       // unlikely
         a0 = 0x87f1 << 16

    loc_0x803fb854: // orphan
         v1 = 0 + 1               // lo

    loc_0x803fb858: // orphan
         beql v1, 0, 0x803fb870   // unlikely
         ra = [sp + 0x14]         // s0

    loc_0x803fb860: // orphan
         a0 = [a0 + 0x19d8]       // arg1 // t9
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a2 + 0]            // t9
         ra = [sp + 0x14]         // s0

    loc_0x803fb870: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803fb8f4: // orphan
         ra = [sp + 0x14]         // s0
         sp += 0x28
         ret                      // s0
         

    loc_0x803fb970: // orphan
         t9 = v1 + 8
         [a1 + 0] = t9            // arg2
         [v1 + 0] = t0
         t1 = [a2 + 0x94]         // arg3 // t9
         at |= 0xff00
         t6 = 0x2850 << 16
         t2 = t1 & 0xff           // s4
         t3 = t2 | at
         [v1 + 4] = t3
         v1 = [a1 + 0]            // arg2
         t6 |= 0x7cff
         t5 = 0xfb00 << 16
         t4 = v1 + 8
         [a1 + 0] = t4            // arg2
         [v1 + 4] = t6
         goto 0x803fbae8          // fcn.80400480-0x4998
         [v1 + 0] = t5

    loc_0x803fb9dc: // orphan
         t1 = t0 | at
         [v1 + 4] = t1
         v1 = [a1 + 0]            // arg2
         t4 |= 0xff               // t9
         t3 = 0xfb00 << 16
         t2 = v1 + 8
         [a1 + 0] = t2            // arg2
         [v1 + 4] = t4
         goto 0x803fbae8          // fcn.80400480-0x4998
         [v1 + 0] = t3

    loc_0x803fba58: // orphan
         t4 = 0xfa00 << 16
         at = 0xe1d7 << 16
         t3 = v1 + 8
         [a1 + 0] = t3            // arg2
         [v1 + 0] = t4
         t5 = [a2 + 0x94]         // arg3 // t9
         at |= 0xff00
         t0 = 0x734b << 16
         t6 = t5 & 0xff           // s4
         t7 = t6 | at
         [v1 + 4] = t7
         v1 = [a1 + 0]            // arg2

    loc_0x803fbac4: // orphan
         t8 = 0 + 0xff            // s4
         t4 = t3 & 0xff
         t5 = t4 | at             // s4
         [v1 + 4] = t5
         v1 = [a1 + 0]            // arg2
         t6 = v1 + 8
         [a1 + 0] = t6            // arg2
         [v1 + 4] = t8
         [v1 + 0] = t7

    loc_0x803fc690: // orphan
         at = 0 + 0x32
         if                       // likely
         

    loc_0x803fd208: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803fd2a4: // orphan
         mov.s f2, f24

    loc_0x803fd33c: // orphan
         t3 = [sp + 0xe4]
         at = 0 + 4
         a0 += 4
         t2 = t3 + 1              // lo
         if                       // likely
         [sp + 0xe4] = t2

    loc_0x803fd408: // orphan
         s2 = 0 + 2
         t8 = [sp + 0x34]         // t9

    loc_0x803fd410: // orphan
         if                       // unlikely
         

    loc_0x803fd418: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         v1 = v0 & 3

    loc_0x803fd428: // orphan
         if                       // unlikely
         

    loc_0x803fd430: // orphan
         v1 -= 4

    loc_0x803fd434: // orphan
         if                       // unlikely
         

    loc_0x803fd43c: // orphan
         if                       // unlikely
         

    loc_0x803fd444: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803fd44c: // orphan
         if                       // unlikely
         

    loc_0x803fd454: // orphan
         goto 0x803fd4b8
         v0 = [s0 + 0xc]

    loc_0x803fd45c: // orphan
         goto 0x803fd4b4
         [s0 + 0xc] = 0

    loc_0x803fd464: // orphan
         goto 0x803fd4b4
         [s0 + 0xc] = s1

    loc_0x803fd46c: // orphan
         goto 0x803fd4b4
         [s0 + 0xc] = s2

    loc_0x803fd474: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 3
         div 0, v0, at
         v1 = hi
         if                       // unlikely
         

    loc_0x803fd490: // orphan
         if                       // unlikely
         

    loc_0x803fd498: // orphan
         beql v1, s2, 0x803fd4b4  // unlikely
         [s0 + 0xc] = s1

    loc_0x803fd4a0: // orphan
         goto 0x803fd4b8
         v0 = [s0 + 0xc]

    loc_0x803fd4a8: // orphan
         goto 0x803fd4b4
         [s0 + 0xc] = 0

    loc_0x803fd4b4: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803fd45c, 0x803fd464, 0x803fd46c, 0x803fd4a8
         v0 = [s0 + 0xc]

    loc_0x803fd4b8: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803fd454, 0x803fd4a0
         t9 = [s0 + 4]
         bnel v0, t9, 0x803fd4d4  // likely
         t1 = [s0 + 8]

    loc_0x803fd4c4: // orphan
         t0 = [s0 + 8]
         beql v0, t0, 0x803fd410  // unlikely
         t8 = [sp + 0x34]         // t9

    loc_0x803fd4d0: // orphan
         t1 = [s0 + 8]

    loc_0x803fd4d4: // orphan
         [s0 + 8] = v0
         if                       // unlikely
         [s0 + 4] = t1

    loc_0x803fd4e0: // orphan
         beql v0, s1, 0x803fd540  // unlikely
         v0 = 0 + 0xa

    loc_0x803fd4e8: // orphan
         beql v0, s2, 0x803fd568  // unlikely
         v1 = [s0 + 0x68]         // t9

    loc_0x803fd4f0: // orphan
         goto 0x803fd568
         v1 = [s0 + 0x68]         // t9

    loc_0x803fd4f8: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 3
         div 0, v0, at
         v1 = hi
         if                       // unlikely
         

    loc_0x803fd514: // orphan
         if                       // unlikely
         

    loc_0x803fd51c: // orphan
         if                       // unlikely
         

    loc_0x803fd524: // orphan
         goto 0x803fd568
         v1 = [s0 + 0x68]         // t9

    loc_0x803fd52c: // orphan
         goto 0x803fd564
         [s0 + 0x10] = 0

    loc_0x803fd534: // orphan
         goto 0x803fd564
         [s0 + 0x10] = s1

    loc_0x803fd540: // orphan
         [s0 + 0x10] = 0
         goto 0x803fd564
         [s0 + 0x348] = v0

    loc_0x803fd560: // orphan
         [s0 + 0x350] = v0

    loc_0x803fd564: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0c80
         // CODE XREFS from fcn.803dc1fc @ 0x803fd52c, 0x803fd534, 0x803fd544
         v1 = [s0 + 0x68]         // t9

    loc_0x803fd568: // orphan
         // CODE XREFS from fcn.803dc1fc @ 0x803fd4f0, 0x803fd524
         s2 = 0 + 2
         if                       // unlikely
         

    loc_0x803fd574: // orphan
         if                       // unlikely
         

    loc_0x803fd57c: // orphan
         // CODE XREF from fcn.803f089c @ +0x3ec
         if                       // unlikely
         at = 0 + 3

    loc_0x803fd584: // orphan
         if                       // unlikely
         

    loc_0x803fd58c: // orphan
         goto 0x803fd610          // fcn.80400480-0x2e70
         

    loc_0x803fd594: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x8d

    loc_0x803fd5b4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x64
         div 0, v0, at
         t4 = hi
         at = , t4 < 0x14         // lo
         if                       // unlikely
         

    loc_0x803fd5d4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x15
         div 0, v0, at
         t5 = hi
         t6 = t5 + 0x1e
         goto 0x803fd610          // fcn.80400480-0x2e70
         [s0 + 0x288] = t6

    loc_0x803fd5f4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x8d
         div 0, v0, at
         t7 = hi
         t8 = t7 + 0x3c

    loc_0x803fd60c: // orphan
         [s0 + 0x288] = t8

    loc_0x803fd6b8: // orphan
         beql v1, at, 0x803fd710  // unlikely
         at = 0 + 0x64

    loc_0x803fd764: // orphan
         

    loc_0x803fd8bc: // orphan
         t1 = 0 + 1               // lo
         [at + 0x7cf0] = t9
         t0 = [t0 + 0x7bfc]       // t9
         at = 0x86b1 << 16
         t3 = 0 + 1               // lo
         if                       // fcn.80400480-0x2ba4 // likely
         

    loc_0x803fda8c: // orphan
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

    loc_0x803fdb58: // orphan
         swc1 f0, 0x58, v0
         t7 = [v1 + 0]            // t9
         swc1 f0, 0x54, t7
         t9 = [v1 + 0]
         goto 0x803fdce0          // fcn.83f82f70-0x3b85290
         byte [t9 + 0x41] = t8

    loc_0x803fdcb0: // orphan
         cvt.d.s f6, f18
         swc1 f12, 0x5c, t7
         add.d f10, f8, f6
         t8 = [v1 + 0]            // t9
         swc1 f12, 0x58, t8
         trunc.w.d f16, f10
         t9 = [v1 + 0]
         swc1 f12, 0x54, t9
         t2 = [v1 + 0]            // t9
         mfc1 t1, f16
         
         byte [t2 + 0x41] = t1

    loc_0x803fdeb4: // orphan
         beql a0, at, 0x803fdf4c  // unlikely
         v1 = [v0 + 0xc]

    loc_0x803fdebc: // orphan
         goto 0x803fdf6c          // fcn.80400480-0x2514
         v0 = a0 << 2             // arg1

    loc_0x803fdf4c: // orphan
         at = 0 + 4
         t6 = , unsigned  byte [v1 + 0x2180] // s4
         beql t6, at, 0x803fdf6c  // fcn.80400480-0x2514 // unlikely
         v0 = a0 << 2             // arg1

    loc_0x803fdf5c: // orphan
         t7 = , unsigned  byte [v1 + 0x2182] // s4

    loc_0x803fdf60: // orphan
         t8 = t7 & 8
         if                       // fcn.803fe034+0x240 // unlikely
         v0 = a0 << 2             // arg1

    loc_0x803fe6ac: // orphan
         beql a2, at, 0x803fe940  // unlikely
         at = 0 + 0x64

}

*/
