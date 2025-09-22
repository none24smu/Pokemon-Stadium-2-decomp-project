/*
 * Function: 0x8029bd88
 * Category: math
 */

// Decompiled C code
int fcn.802cb7dc (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.802cb7dc (int esi, int edx) {
    loc_0x8029bce8:
        [sp + 0x18] = t1
        [sp + 0x14] = t0
        [sp + 0x10] = t9
        [sp + 0x34] = t2
        // CODE XREF from fcn.802ac294 @ 0x802ab654
        a1 = 0
        a3 = 0 + 3    // arg4
        [sp + 0x1c] = 0
        [sp + 0x20] = 0
        [sp + 0x24] = 0
        [sp + 0x28] = 0
        // CODE XREF from fcn.802aacec @ +0x970
        [sp + 0x2c] = 0
        // CODE XREF from fcn.802aacec @ +0x964
        [sp + 0x30] = 0
        a0 = v0 + 0x20 // arg1
        call 0x88002aa8 // 0x88002aa8(0x11f, 0x0, 0x8, 0x3)
        a2 = v0 + 0x194
        call 0x80001ff0 // 0x80001ff0(0x11f, 0x0, 0x293, 0x3)
        0x8029bd28
        call 0x80001ff0 // 0x80001ff0(0x11f, 0x0, 0x293, 0x3)
        [sp + 0x5c] = v0
         // do {
    loc_0x8029bd34:
        // CODE XREF from fcn.802ac294 @ 0x802ab660
        mtc1 v0, f6
        at = 0x4198 << 16
        mtc1 at, f10
        cvt.s.w f8, f6
        at = 0x4270 << 16
        // CODE XREF from fcn.802ac294 @ 0x802ab664
        mtc1 at, f18
         // } while (?);
        }
        return eax;
    loc_0x8029bd4c: // orphan
             // CODE XREF from fcn.802ac294 @ 0x802ab658
             mtc1 0, f4
             mul.s f16, f8, f10
             div.s f6, f16, f18
             c.lt.s f4, f6
             
             bc1f 0x8029bd74
             at = 0x3f00 << 16
             mtc1 at, f8
             goto 0x8029bd84
             swc1 f8, 0x60, sp

    loc_0x8029bd84: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x8029bd6c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x64] = v0
         mtc1 v0, f18
         at = 0x40e0 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x4270 << 16
         mtc1 at, f10
         mtc1 0, f16
         mul.s f8, f4, f6
         div.s f18, f8, f10

    loc_0x8029eb84: // orphan
         a1 = 0 + 0x18
         goto 0x8029eb90          // fcn.80bb29c4-0x913e34
         a1 = 0 + 0x19

    loc_0x802a3cec: // orphan
         // CODE XREF from fcn.802af284 @ 0x802a3c9c
         if                       // likely
         s1 += 1

    loc_0x802ae66c: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb7e8
         v0 = halfword [t0 - 0x4ad8]
         v0 = halfword [s0 - 0x4ad4]
         v0 = halfword [t0 - 0x4ab4]
         v0 = halfword [s0 - 0x4a98]
         v0 = halfword [0 - 0x4a74]
         bltzl t0, 0x8029bcd4     // unlikely
         bltzl s0, 0x8029bce8     // unlikely

    loc_0x802ae68c: // orphan
         bltzl t0, 0x8029bd20     // unlikely
         bltzl s0, 0x8029bd34     // unlikely

    loc_0x802ae698: // orphan
         v0 = halfword [0 - 0x4a0c]
         v0 = halfword [t0 - 0x49fc]
         v0 = halfword [s0 - 0x49f8]
         v0 = halfword [t0 - 0x49e4]
         v0 = halfword [s0 - 0x49dc]
         v0 = halfword [0 - 0x49e0]
         v0 = halfword [t0 - 0x49d4]
         v0 = halfword [s0 - 0x49d0]
         bltzl t0, 0x8029bfac     // fcn.8029bdc0+0x1ec // unlikely
         bltzl s0, 0x8029bfc0     // fcn.8029bdc0+0x200 // unlikely

    loc_0x802ae6c4: // orphan
         v0 = halfword [s0 - 0x499c]
         v0 = halfword [0 - 0x49a0]
         bltzl t0, 0x8029c070     // fcn.8029bdc0+0x2b0 // unlikely
         bltzl s0, 0x8029c084     // fcn.8029bdc0+0x2c4 // unlikely

    loc_0x802ae6d8: // orphan
         v0 = halfword [s0 - 0x4970]

    loc_0x802ae9ac: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb7f8
         bltzl s0, 0x8029eb70     // fcn.80bb29c4-0x913e54 // unlikely
         bltzl 0, 0x8029eb84      // unlikely

    loc_0x802aed8c: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb818
         bltzl t0, 0x802a39f0     // fcn.802af284-0xb894 // unlikely

    loc_0x802aed98: // orphan
         bltzl s0, 0x802a3c4c     // fcn.802af284-0xb638 // unlikely

    loc_0x802aeda4: // orphan
         bltzl s0, 0x802a3cc4     // fcn.802af284-0xb5c0 // unlikely
         bltzl t0, 0x802a3cd8     // fcn.802af284-0xb5ac // unlikely

    loc_0x802aedb0: // orphan
         bltzl t0, 0x802a3f40     // unlikely
         bltzl s0, 0x802a3f54     // unlikely

    loc_0x802aef9c: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb828
         bltzl t0, 0x802a6520     // fcn.802a91c8-0x2ca8 // unlikely

    loc_0x802af2b4: // orphan
         // CODE XREF from fcn.802ad1c8 @ 0x802cb840
         bltzl s0, 0x802aa798     // fcn.802af284-0x4aec // unlikely

    loc_0x802af2c0: // orphan
         v0 = halfword [0 - 0x1270]

    loc_0x802af380: // orphan
         // CODE XREF from fcn.802ad1c8 @ 0x802cb84c
         v0 = halfword [s0 - 0xa84]
         v0 = halfword [0 - 0xa70]
         v0 = halfword [0 - 0xa4c]

    loc_0x802af6c4: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac45c
         bgezl s0, 0x802b1434     // likely
         // CODE XREF from fcn.802cb7dc @ 0x802cb860
         v1 = halfword [0 + 0x758]

    loc_0x802af9cc: // orphan
         v1 = halfword [t0 + 0x11d8]
         v1 = halfword [s0 + 0x11e0]
         bgezl t0, 0x802b41bc     // likely
         // CODE XREF from fcn.802cb7dc @ 0x802cb878
         bgezl s0, 0x802b41d0     // likely

    loc_0x802b0720: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb89c
         
         tge 0, 0, 0x224
         tge 0, 0, 0x2a2

    loc_0x802b34cc: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb958
         t9 = [v1 + 0x244]

    loc_0x802b3960: // orphan
         t7 = , unsigned  byte [t7 - 0x71f5] // s4
         if                       // unlikely
         // CODE XREF from fcn.802cb7dc @ 0x802cb9ac
         s5 = 0x8831 << 16

    loc_0x802b3a60: // orphan
         // CODE XREFS from fcn.802af804 @ 0x802b3944, 0x802b3950, 0x802b395c, 0x802b3984, 0x802b3a2c
         t9 = 0x8831 << 16
         t9 = , unsigned  byte [t9 - 0x71f5] // s4
         if                       // likely
         // CODE XREF from fcn.802cb7dc @ 0x802cb9cc
         t6 = 0x8831 << 16

    loc_0x802b3b8c: // orphan
         a1 = 0 + 0x98
         a2 = 0 + 2
         call 0x80049064          // 0x80049064(-1, 0x98, 0x2, -1)
         a3 = v0                  // s4
         // CODE XREF from fcn.802cb7dc @ 0x802cb9e4
         a0 = 0 + 0xcc
         a1 = 0 + 0xac
         a2 = 0 + 2
         call 0x80049064          // 0x80049064(0xcc, 0xac, 0x2, 0xff)
         a3 = s1
         // CODE XREF from fcn.802cb7dc @ 0x802cb9e8
         s1 = s0 - 1

    loc_0x802b4050: // orphan
         [at + 0x510] = t6
         t8 = 0x8009 << 16
         t8 += 0x4f50
         [s0 + 0] = t7
         [sp + 0x78] = t8
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 4] = t8
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         t9 = , unsigned  byte [s1 + 0] // s4
         s4 = 0 + 0x55
         if                       // unlikely
         // CODE XREF from fcn.802cb7dc @ 0x802cba0c
         

    loc_0x802b4368: // orphan
         if                       // unlikely
         // CODE XREF from fcn.802cb7dc @ 0x802cba24
         

    loc_0x802b44f4: // orphan
         // CODE XREFS from fcn.802b431c @ 0x802b436c, 0x802b43f0
         call 0x88307294          // 0x88307294(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8830088c          // 0x8830088c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x800d << 16
         v1 += 0x510
         s0 = [v1 + 0]            // t9
         t6 = 0xde00 << 16
         t8 = 0x8009 << 16
         t7 = s0 + 8
         [v1 + 0] = t7
         t8 += 0x4f50
         [s0 + 0] = t6
         [sp + 0x78] = t8
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 4] = t8
         t9 = 0x8831 << 16
         t9 = , unsigned  byte [t9 - 0x71f4] // s4
         if                       // unlikely
         // CODE XREF from fcn.802cb7dc @ 0x802cba30
         a0 = 0 + 8               // a2

    loc_0x802b5cfc: // orphan
         a1 = 0x8831 << 16
         a1 = , unsigned  halfword [a1 - 0x7208]
         call 0x80042fbc          // 0x80042fbc(-1, 0xffff, 0x8, -1)
         a0 = [a0 - 0x7210]       // t9
         t8 = 0x8831 << 16
         t8 = [t8 - 0x7210]       // t9
         t9 = [t8 + 0x1c]
         goto 0x802b5d24
         // CODE XREF from fcn.802cb7dc @ 0x802cbaa8
         [t9 + 0x4c] = 0

    loc_0x802b6514: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x4a
         at = 0x8831 << 16
         byte [at - 0x71f3] = s1
         t0 = [s6 + 0]            // t9
         a0 = 0x8860 << 16
         bnel t0, 0, 0x802b66fc   // likely
         // CODE XREF from fcn.802cb7dc @ 0x802cbaf0
         s3 += 1

    loc_0x802cb7dc: // orphan
           // CALL XREF from fcn.82ae78e4 @ +0x6ec
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb7f0: // orphan
         
         if                       // fcn.80bb29c4-0x90402c // unlikely
         if                       // unlikely

    loc_0x802cb800: // orphan
         if                       // fcn.80bb29c4-0x903f90 // unlikely
         if                       // fcn.80bb29c4-0x903efc // unlikely

    loc_0x802cb80c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb820: // orphan
         
         if                       // fcn.802a91c8+0x5d60 // unlikely
         if                       // unlikely

    loc_0x802cb830: // orphan
         if                       // fcn.802a91c8+0x5fac // unlikely
         if                       // fcn.802a91c8+0x6030 // unlikely

    loc_0x802cb83c: // orphan
         if                       // fcn.802a91c8+0x60a8 // unlikely

    loc_0x802cb848: // orphan
         if                       // fcn.802af284+0xb8 // unlikely

    loc_0x802cb854: // orphan
         if                       // fcn.802a91c8+0x6240 // unlikely

    loc_0x802cb860: // orphan
         if                       // unlikely
         

    loc_0x802cb868: // orphan
         
         if                       // fcn.802af804+0x11c // unlikely
         if                       // fcn.802af804+0x170 // unlikely

    loc_0x802cb878: // orphan
         if                       // unlikely
         

    loc_0x802cb880: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb890: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb8a4: // orphan
         
         if                       // fcn.802a91c8+0x76a4 // unlikely
         if                       // fcn.802b0870+0x10 // unlikely

    loc_0x802cb8b4: // orphan
         if                       // unlikely
         if                       // fcn.802a91c8+0x7ca4 // unlikely

    loc_0x802cb8c0: // orphan
         if                       // fcn.802a91c8+0x7e4c // unlikely
         

    loc_0x802cb8c8: // orphan
         
         if                       // fcn.802af518+0x1de8 // unlikely
         if                       // fcn.802af518+0x1dfc // unlikely

    loc_0x802cb8d8: // orphan
         
         if                       // fcn.802af518+0x25e8 // unlikely
         if                       // fcn.802af518+0x268c // unlikely

    loc_0x802cb8e8: // orphan
         if                       // fcn.802af518+0x2734 // unlikely
         if                       // fcn.802af518+0x2838 // unlikely

    loc_0x802cb8f4: // orphan
         if                       // fcn.802af518+0x28a0 // unlikely
         if                       // fcn.802af518+0x2a74 // unlikely

    loc_0x802cb900: // orphan
         if                       // fcn.802af518+0x2b7c // unlikely
         if                       // fcn.802af518+0x2bc0 // unlikely

    loc_0x802cb90c: // orphan
         
         
         
         if                       // fcn.802af804+0x2c08 // unlikely
         if                       // fcn.802af804+0x2c3c // unlikely

    loc_0x802cb924: // orphan
         if                       // fcn.802af804+0x2e14 // unlikely
         

    loc_0x802cb92c: // orphan
         
         
         
         
         if                       // fcn.802b30a0+0xd0 // unlikely
         if                       // fcn.802b30a0+0xe4 // unlikely

    loc_0x802cb948: // orphan
         if                       // fcn.802b30a0+0x27c // unlikely
         if                       // fcn.802b30a0+0x290 // unlikely

    loc_0x802cb954: // orphan
         if                       // fcn.802b30a0+0x378 // unlikely
         if                       // unlikely

    loc_0x802cb960: // orphan
         if                       // fcn.802b30a0+0x484 // unlikely
         

    loc_0x802cb968: // orphan
         
         if                       // fcn.802b30a0+0x500 // unlikely
         if                       // fcn.802b3248+0x37c // unlikely

    loc_0x802cb978: // orphan
         
         
         
         if                       // fcn.802b30a0+0x6c8 // unlikely
         if                       // fcn.802af804+0x3fc8 // unlikely

    loc_0x802cb990: // orphan
         if                       // fcn.802af804+0x4000 // unlikely
         if                       // fcn.802af804+0x4024 // unlikely

    loc_0x802cb99c: // orphan
         if                       // fcn.802af804+0x403c // unlikely
         if                       // fcn.802af804+0x4050 // unlikely

    loc_0x802cb9a8: // orphan
         if                       // fcn.802af804+0x4148 // unlikely
         if                       // unlikely

    loc_0x802cb9b4: // orphan
         if                       // fcn.802af804+0x4204 // unlikely
         if                       // fcn.802af804+0x4218 // unlikely

    loc_0x802cb9c0: // orphan
         if                       // fcn.802af804+0x4230 // unlikely
         if                       // fcn.802af804+0x4264 // unlikely

    loc_0x802cb9cc: // orphan
         if                       // unlikely
         

    loc_0x802cb9d4: // orphan
         if                       // fcn.802af804+0x4344 // unlikely
         if                       // fcn.802af804+0x4358 // unlikely

    loc_0x802cb9e0: // orphan
         
         if                       // fcn.802af804+0x4374 // unlikely
         if                       // unlikely

    loc_0x802cb9f0: // orphan
         if                       // fcn.802af804+0x4480 // unlikely
         if                       // fcn.802af804+0x45f4 // unlikely

    loc_0x802cb9fc: // orphan
         if                       // fcn.802af804+0x462c // unlikely
         if                       // fcn.802af804+0x4660 // unlikely

    loc_0x802cba08: // orphan
         if                       // fcn.802af804+0x46a8 // unlikely
         if                       // unlikely

    loc_0x802cba14: // orphan
         if                       // fcn.802af804+0x49f4 // unlikely
         if                       // fcn.802af804+0x4a18 // unlikely

    loc_0x802cba20: // orphan
         if                       // fcn.802b431c+0x18 // unlikely
         if                       // unlikely

    loc_0x802cba2c: // orphan
         
         if                       // unlikely
         

    loc_0x802cba38: // orphan
         if                       // fcn.802b431c+0x250 // unlikely
         if                       // fcn.802b431c+0x284 // unlikely

    loc_0x802cba44: // orphan
         if                       // fcn.802b431c+0x30c // unlikely
         if                       // fcn.802b431c+0x690 // unlikely

    loc_0x802cba50: // orphan
         if                       // fcn.802b431c+0x708 // unlikely
         if                       // fcn.802b431c+0xb8c // unlikely

    loc_0x802cba5c: // orphan
         if                       // fcn.802b431c+0xbf4 // unlikely
         if                       // fcn.802b431c+0xc18 // unlikely

    loc_0x802cba68: // orphan
         if                       // fcn.802b431c+0xe20 // unlikely
         if                       // fcn.802b431c+0xe84 // unlikely

    loc_0x802cba74: // orphan
         if                       // fcn.802b431c+0xf0c // unlikely
         if                       // fcn.802b431c+0xf50 // unlikely

    loc_0x802cba80: // orphan
         if                       // fcn.802b5274+0x70 // unlikely
         if                       // fcn.802b431c+0x122c // unlikely

    loc_0x802cba8c: // orphan
         if                       // fcn.802a91c8+0xc3f8 // unlikely
         if                       // fcn.802af804+0x5e30 // unlikely

    loc_0x802cba98: // orphan
         if                       // fcn.802a91c8+0xc514 // unlikely
         if                       // fcn.802a91c8+0xc528 // unlikely

    loc_0x802cbaa4: // orphan
         if                       // fcn.802af804+0x6314 // unlikely
         if                       // unlikely

    loc_0x802cbab0: // orphan
         if                       // fcn.802af804+0x65a0 // unlikely
         if                       // fcn.802af804+0x65b4 // unlikely

    loc_0x802cbabc: // orphan
         if                       // fcn.802af804+0x661c // unlikely
         if                       // fcn.802af804+0x6670 // unlikely

    loc_0x802cbac8: // orphan
         if                       // fcn.802af804+0x66c8 // unlikely
         if                       // fcn.802af804+0x66ec // unlikely

    loc_0x802cbad4: // orphan
         if                       // fcn.802af804+0x6784 // unlikely
         if                       // fcn.802af804+0x67b8 // unlikely

    loc_0x802cbae0: // orphan
         if                       // fcn.802af804+0x6860 // unlikely
         if                       // fcn.802af804+0x68a4 // unlikely

    loc_0x802cbaec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cbaf8: // orphan
         if                       // fcn.802af804+0x6d98 // unlikely
         if                       // fcn.802af804+0x6dac // unlikely

    loc_0x802cbb04: // orphan
         if                       // fcn.82bea63c-0x2933c64 // unlikely
         if                       // fcn.82bea63c-0x2933c00 // unlikely

    loc_0x802cbb10: // orphan
         if                       // fcn.802af804+0x75b0 // unlikely
         if                       // fcn.802af804+0x75e4 // unlikely

}

*/
