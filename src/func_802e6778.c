/*
 * Function: 0x802e6778
 * Category: math
 */

// Decompiled C code
int fcn.82bea63c (int esi, int edx) {
// do {
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.82bea63c (int esi, int edx) {
    loc_0x8029b004:
        t2 = [s4 + 0] // t9
        s1 = s0 << 2
        a0 = 0 + 8    // a2
        t4 = t2 + s1
        a2 = [t4 + 0x58] // t9
        call 0x80049290 // 0x80049290(0x8, 0x442f71dcfe116408, -1, -1)
        a1 = 0 + 1    // lo
        v1 = [s4 + 0] // t9
        a1 = 0 + 1    // lo
        a0 = , unsigned  halfword [v1 + 0x60]
        t3 = v1 + s1
        at = , v0 < a0 // lo
        beql at, 0, 0x8029b048 // unlikely
        a0 = 0 + 8    // a2
            
    loc_0x8029b048:
        call 0x80049290 // 0x80049290(-1, 0x442f71dcfe116408, 0x8, -1)
        a2 = [t3 + 0x58] // t9
        t5 = [s4 + 0] // t9
        halfword [t5 + 0x60] = v0
         // do {
    loc_0x8029b058:
        // CODE XREFS from fcn.82bea63c @ 0x8029b03c, 0x802baee4
        s2 += 1
        s2 &= 0xff
        at = , s2 < 2 // lo
        if            // likely
        s0 = s2
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x8029b06c: // orphan
             ra = [sp + 0x6c]

    loc_0x8029b070: // orphan
         // CODE XREF from fcn.8029ad94 @ 0x8029ae28
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         s5 = [sp + 0x5c]
         s6 = [sp + 0x60]

    loc_0x8029b08c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802baee8
         s7 = [sp + 0x64]
         fp = [sp + 0x68]
         ret                      // ra
         sp += 0x98

    loc_0x802aca80: // orphan
         // CODE XREF from fcn.82bea63c @ 0x82bea644
         bltzl 0, 0x802b5c84      // fcn.802af804+0x6480 // unlikely
         bltzl t0, 0x802b5cb8     // fcn.802af804+0x64b4 // unlikely

    loc_0x802aca8c: // orphan
         bltzl 0, 0x802b5d30      // fcn.802af804+0x652c // unlikely
         v0 = halfword [0 + 0x25a4]

    loc_0x802aca94: // orphan
         bltzl 0, 0x802b6158      // unlikely
         bltzl t0, 0x802b618c     // unlikely

    loc_0x802acaa0: // orphan
         bltzl t0, 0x802b61a4     // unlikely
         bltzl s0, 0x802b61f8     // unlikely

    loc_0x802acaac: // orphan
         bltzl s0, 0x802b61f0     // unlikely
         bltzl t0, 0x802b61d4     // unlikely

    loc_0x802acab8: // orphan
         v0 = halfword [0 + 0x2624]

    loc_0x802acabc: // orphan
         v0 = halfword [t0 + 0x2640]
         v0 = halfword [s0 + 0x2644]
         v0 = halfword [t0 + 0x2650]
         v0 = halfword [s0 + 0x2658]
         v0 = halfword [0 + 0x2698]
         v0 = halfword [t0 + 0x26a4]
         v0 = halfword [s0 + 0x26a8]
         v0 = halfword [t0 + 0x26bc]
         v0 = halfword [s0 + 0x26c4]
         v0 = halfword [0 + 0x26c0]
         v0 = halfword [t0 + 0x26cc]
         v0 = halfword [s0 + 0x26d4]
         bltzl t0, 0x802b6630     // fcn.802af804+0x6e2c // unlikely
         // CODE XREF from fcn.802ac294 @ +0x68
         bltzl s0, 0x802b6664     // fcn.802af804+0x6e60 // unlikely

    loc_0x802acaf8: // orphan
         v0 = halfword [t0 + 0x26f0]
         v0 = halfword [s0 + 0x26f4]
         bltzl t0, 0x802b6724     // fcn.802af804+0x6f20 // unlikely
         // CODE XREF from fcn.802ac294 @ 0x802ac300
         bltzl s0, 0x802b6738     // unlikely

    loc_0x802acb0c: // orphan
         bltzl s0, 0x802b67c0     // fcn.802ac294+0xa52c // unlikely
         bltzl t0, 0x802b67d4     // unlikely

    loc_0x802acb18: // orphan
         v0 = halfword [0 + 0x2758]

    loc_0x802acb1c: // orphan
         bltzl t0, 0x802b68a0     // fcn.802a91c8+0xd6d8 // unlikely
         bltzl s0, 0x802b68b4     // unlikely

    loc_0x802acb28: // orphan
         // CODE XREF from fcn.802cb4bc @ +0x278
         v0 = halfword [t0 + 0x277c]
         v0 = halfword [s0 + 0x2784]
         v0 = halfword [0 + 0x27b0]
         bltzl 0, 0x802b6a18      // unlikely
         bltzl t0, 0x802b6a5c     // unlikely

    loc_0x802acb40: // orphan
         bltzl t0, 0x802b6a44     // unlikely
         bltzl s0, 0x802b6a58     // unlikely

    loc_0x802acb4c: // orphan
         bltzl t0, 0x802b6b00     // fcn.802b6ae4+0x1c // unlikely
         bltzl s0, 0x802b6b14     // unlikely

    loc_0x802acb58: // orphan
         bltzl 0, 0x802b6bfc      // unlikely
         bltzl 0, 0x802b6c20      // unlikely

    loc_0x802acb64: // orphan
         v0 = halfword [s0 + 0x283c]
         v0 = halfword [0 + 0x2844]
         bltzl t0, 0x802b6ca0     // fcn.802b6c60+0x40 // unlikely
         bltzl s0, 0x802b6cb4     // fcn.802b6c60+0x54 // unlikely

    loc_0x802acb78: // orphan
         v0 = halfword [t0 + 0x2868]
         v0 = halfword [s0 + 0x2870]
         v0 = halfword [0 + 0x288c]
         bltzl 0, 0x802b6dd8      // fcn.802af804+0x75d4 // unlikely
         bltzl t0, 0x802b6dfc     // fcn.802af804+0x75f8 // unlikely

    loc_0x802acb90: // orphan
         bltzl 0, 0x802b6e74      // fcn.802b6c60+0x214 // unlikely
         bltzl 0, 0x802b6e98      // fcn.802b6c60+0x238 // unlikely

    loc_0x802acb9c: // orphan
         v0 = halfword [s0 + 0x28cc]
         v0 = halfword [0 + 0x28d4]
         bltzl t0, 0x802b6f18     // unlikely
         bltzl s0, 0x802b6f2c     // unlikely

    loc_0x802acbb0: // orphan
         v0 = halfword [t0 + 0x28f8]
         v0 = halfword [s0 + 0x2900]
         v0 = halfword [0 + 0x293c]
         bltzl t0, 0x802b70d0     // fcn.802af804+0x78cc // unlikely
         // CODE XREF from fcn.802cb4bc @ +0x280
         bltzl s0, 0x802b70e4     // fcn.802af804+0x78e0 // unlikely

    loc_0x802acbc8: // orphan
         bltzl t0, 0x802b71ac     // fcn.802af804+0x79a8 // unlikely
         bltzl s0, 0x802b71c0     // fcn.802af804+0x79bc // unlikely

    loc_0x802acbd4: // orphan
         bltzl t0, 0x802b72b8     // fcn.802a91c8+0xe0f0 // unlikely
         bltzl s0, 0x802b72cc     // unlikely

    loc_0x802acbe0: // orphan
         v0 = halfword [0 + 0x2a00]
         // CODE XREF from fcn.802cb4bc @ +0x284
         bltzl 0, 0x802b7428      // unlikely
         v0 = halfword [0 + 0x2a20]

    loc_0x802acbec: // orphan
         bltzl t0, 0x802b74d0     // unlikely
         bltzl s0, 0x802b74e4     // unlikely

    loc_0x802acbf8: // orphan
         bltzl s0, 0x802b753c     // unlikely
         v0 = halfword [0 + 0x2a5c]

    loc_0x802acc00: // orphan
         v0 = halfword [t0 + 0x2a6c]
         v0 = halfword [s0 + 0x2a7c]
         bltzl t0, 0x802b759c     // unlikely
         bltzl s0, 0x802b75b0     // fcn.802af804+0x7dac // unlikely

    loc_0x802acc14: // orphan
         bltzl s0, 0x802b7828     // unlikely
         bltzl t0, 0x802b788c     // fcn.802af804+0x8088 // unlikely

    loc_0x802acc20: // orphan
         bltzl t0, 0x802b78f4     // unlikely
         bltzl s0, 0x802b7908     // unlikely

    loc_0x802acc2c: // orphan
         bltzl s0, 0x802b7990     // unlikely
         v0 = halfword [0 + 0x2b84]

    loc_0x802acc34: // orphan
         bltzl t0, 0x802b7bd8     // unlikely
         bltzl s0, 0x802b7c2c     // unlikely

    loc_0x802acc40: // orphan
         bltzl s0, 0x802b7e44     // unlikely
         v0 = halfword [0 + 0x2ca4]

    loc_0x802acc48: // orphan
         v0 = halfword [t0 + 0x2cbc]
         // CODE XREF from fcn.802cb4bc @ +0x28c
         v0 = halfword [s0 + 0x2cc0]
         v0 = halfword [t0 + 0x2cd0]
         v0 = halfword [s0 + 0x2ce8]
         v0 = halfword [0 + 0x2d00]
         v0 = halfword [0 + 0x2d08]
         // CODE XREF from fcn.802cb4bc @ +0x290
         v0 = halfword [0 + 0x2d14]
         v0 = halfword [0 + 0x2d20]
         v0 = halfword [t0 + 0x2d28]
         v0 = halfword [s0 + 0x2d2c]
         v0 = halfword [0 + 0x2d44]
         v0 = halfword [0 + 0x2d4c]
         v0 = halfword [0 + 0x2d58]
         bltzl t0, 0x802b8200     // unlikely
         bltzl s0, 0x802b8214     // unlikely

    loc_0x802acc88: // orphan
         v0 = halfword [0 + 0x2d8c]
         v0 = halfword [0 + 0x2da4]
         v0 = halfword [0 + 0x2dcc]
         // CODE XREF from fcn.802cb4bc @ +0x294
         v0 = halfword [0 + 0x2df4]
         v0 = halfword [0 + 0x2e1c]
         v0 = halfword [0 + 0x2e44]
         v0 = halfword [0 + 0x2e58]
         bltzl 0, 0x802b8628      // unlikely
         v0 = halfword [0 + 0x2e78]

    loc_0x802accac: // orphan
         v0 = halfword [0 + 0x2ea0]
         v0 = halfword [t0 + 0x2ea8]
         v0 = halfword [s0 + 0x2eac]
         v0 = halfword [t0 + 0x2eb4]
         v0 = halfword [s0 + 0x2eb8]
         v0 = halfword [0 + 0x2ed8]
         v0 = halfword [t0 + 0x2ee0]
         v0 = halfword [s0 + 0x2ee4]
         v0 = halfword [0 + 0x2eec]
         v0 = halfword [0 + 0x2f14]
         v0 = halfword [0 + 0x2f7c]
         v0 = halfword [t0 + 0x2f90]
         v0 = halfword [s0 + 0x2fa0]
         v0 = halfword [t0 + 0x2f4c]
         v0 = halfword [s0 + 0x2f50]
         bltzl t0, 0x802b89fc     // fcn.802b889c+0x160 // unlikely
         bltzl s0, 0x802b8a50     // fcn.802b889c+0x1b4 // unlikely

    loc_0x802accf4: // orphan
         v0 = halfword [0 + 0x3088]
         v0 = halfword [0 + 0x30d8]
         v0 = halfword [t0 + 0x30e0]
         v0 = halfword [s0 + 0x30e4]
         v0 = halfword [t0 + 0x30ec]
         v0 = halfword [s0 + 0x30f0]
         v0 = halfword [0 + 0x312c]
         bltzl t0, 0x802b91e4     // unlikely
         bltzl s0, 0x802b9238     // unlikely

    loc_0x802acd1c: // orphan
         bltzl s0, 0x802b9280     // unlikely
         bltzl t0, 0x802b9214     // unlikely

    loc_0x802acd28: // orphan
         bltzl t0, 0x802b922c     // unlikely
         bltzl s0, 0x802b9270     // unlikely

    loc_0x802acd34: // orphan
         bltzl s0, 0x802b9268     // unlikely
         v0 = halfword [0 + 0x31ac]

    loc_0x802acd3c: // orphan
         bltzl t0, 0x802b94f0     // fcn.802a91c8+0x10328 // unlikely
         bltzl s0, 0x802b9504     // unlikely

    loc_0x802acd48: // orphan
         v0 = halfword [s0 + 0x31cc]
         bltzl t0, 0x802b9540     // unlikely
         bltzl s0, 0x802b9554     // unlikely

    loc_0x802acd58: // orphan
         v0 = halfword [0 + 0x3284]
         v0 = halfword [0 + 0x3294]
         v0 = halfword [t0 + 0x3328]
         v0 = halfword [s0 + 0x3330]
         v0 = halfword [0 + 0x332c]
         v0 = halfword [t0 + 0x3338]
         v0 = halfword [s0 + 0x333c]
         v0 = halfword [t0 + 0x3350]
         v0 = halfword [s0 + 0x3358]
         v0 = halfword [0 + 0x3354]
         v0 = halfword [t0 + 0x3360]
         v0 = halfword [s0 + 0x3368]
         bltzl t0, 0x802b9b1c     // unlikely
         bltzl s0, 0x802b9b50     // unlikely

    loc_0x802acd94: // orphan
         bltzl t0, 0x802b9ba8     // unlikely
         bltzl s0, 0x802b9bbc     // unlikely

    loc_0x802acda0: // orphan
         v0 = halfword [t0 + 0x33ac]
         v0 = halfword [s0 + 0x33b0]
         bltzl t0, 0x802b9c9c     // unlikely
         bltzl s0, 0x802b9cb0     // unlikely

    loc_0x802acdb4: // orphan
         v0 = halfword [0 + 0x3400]
         bltzl t0, 0x802b9e1c     // fcn.802b9cc8+0x154 // unlikely
         bltzl s0, 0x802b9e30     // fcn.802b9cc8+0x168 // unlikely

    loc_0x802acdc4: // orphan
         bltzl s0, 0x802b9eb8     // unlikely
         v0 = halfword [t0 + 0x3434]

    loc_0x802acdcc: // orphan
         v0 = halfword [s0 + 0x3448]
         v0 = halfword [0 + 0x3444]
         bltzl 0, 0x802b9f08      // unlikely
         bltzl t0, 0x802b9f2c     // unlikely

    loc_0x802acde0: // orphan
         v0 = halfword [0 + 0x3470]
         bltzl t0, 0x802b9fc8     // unlikely
         bltzl s0, 0x802b9fdc     // unlikely

    loc_0x802acdf0: // orphan
         bltzl t0, 0x802ba064     // unlikely
         bltzl s0, 0x802ba078     // unlikely

    loc_0x802acdfc: // orphan
         bltzl s0, 0x802ba100     // unlikely
         bltzl t0, 0x802ba1a4     // unlikely

    loc_0x802ace08: // orphan
         bltzl t0, 0x802ba35c     // fcn.802cbbb0-0x11854 // unlikely
         bltzl s0, 0x802ba390     // unlikely

    loc_0x802ace14: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac310
         bltzl s0, 0x802ba3a8     // unlikely
         bltzl t0, 0x802ba43c     // unlikely

    loc_0x802ace20: // orphan
         bltzl t0, 0x802ba554     // unlikely
         bltzl s0, 0x802ba568     // unlikely

    loc_0x802ace2c: // orphan
         v0 = halfword [s0 + 0x35ec]
         v0 = halfword [0 + 0x3600]
         bltzl 0, 0x802ba658      // unlikely
         v0 = halfword [0 + 0x3640]

    loc_0x802ace3c: // orphan
         bltzl 0, 0x802ba760      // unlikely
         bltzl 0, 0x802ba784      // unlikely

    loc_0x802ace48: // orphan
         bltzl 0, 0x802ba7dc      // unlikely
         v0 = halfword [t0 + 0x366c]

    loc_0x802ace50: // orphan
         v0 = halfword [s0 + 0x3670]
         v0 = halfword [0 + 0x3678]
         bltzl 0, 0x802ba85c      // unlikely
         v0 = halfword [0 + 0x3690]

    loc_0x802ace60: // orphan
         bltzl 0, 0x802ba8c4      // unlikely
         bltzl t0, 0x802ba8e8     // unlikely

    loc_0x802ace6c: // orphan
         bltzl 0, 0x802ba9a0      // unlikely
         bltzl 0, 0x802ba9c4      // unlikely

    loc_0x802ace78: // orphan
         v0 = halfword [s0 + 0x36e0]
         v0 = halfword [0 + 0x36e8]
         bltzl 0, 0x802baa44      // unlikely
         v0 = halfword [0 + 0x3700]

    loc_0x802ace88: // orphan
         v0 = halfword [0 + 0x3708]
         bltzl 0, 0x802baad0      // unlikely
         v0 = halfword [0 + 0x3720]

    loc_0x802ace94: // orphan
         bltzl 0, 0x802bab38      // fcn.802af518+0xb620 // unlikely
         bltzl t0, 0x802bab7c     // unlikely

    loc_0x802acea0: // orphan
         v0 = halfword [t0 + 0x3740]
         v0 = halfword [s0 + 0x3744]
         v0 = halfword [0 + 0x374c]
         bltzl t0, 0x802bab80     // unlikely
         bltzl s0, 0x802bac24     // unlikely

    loc_0x802aceb8: // orphan
         v0 = halfword [s0 + 0x3764]
         v0 = halfword [0 + 0x376c]
         v0 = halfword [t0 + 0x3784]
         v0 = halfword [s0 + 0x37b8]
         v0 = halfword [0 + 0x37cc]
         bltzl 0, 0x802bae20      // unlikely
         v0 = halfword [t0 + 0x3810]

    loc_0x802aced4: // orphan
         v0 = halfword [s0 + 0x3814]
         // CODE XREF from fcn.802cb4bc @ +0x298
         bltzl 0, 0x802baf7c      // fcn.802baf28+0x54 // unlikely
         v0 = halfword [0 + 0x3838]

    loc_0x802b618c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802aca98
         
         call 0x88304f5c          // 0x88304f5c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x88305020          // 0x88305020(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802b61a0: // orphan
         call 0x80008574          // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802b61a4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acaa0
         
         a0 = 0x7061 << 16
         call 0x80002bf8          // 0x80002bf8(0x70610000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x7274
         call 0x80047610          // 0x80047610(0x70617274, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.802ac294 @ 0x802acaa8
         call 0x8004c398          // 0x8004c398(0x70617274, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(0x70617274, 0x442f71dcfe116408, 0x8, -1)
         
         t8 = 0x8800 << 16
         t8 = [t8 + 0x6860]       // t9

    loc_0x802b61d4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acab0
         at = 0 + 7
         a0 = 0x8860 << 16
         if                       // likely
         

    loc_0x802b61e4: // orphan
         call 0x800033dc          // 0x800033dc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802b61e8: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802acab4
         a0 = [a0 + 0x1898]       // t9
         call 0x8002602c          // 0x8002602c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.82bea63c @ 0x802acaac
         
         a0 = 0x8860 << 16

    loc_0x802b61f8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acaa4
         call 0x800033dc          // 0x800033dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x1890]       // t9

    loc_0x802b6200: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802aca9c
         t9 = 0x8831 << 16
         t9 = , unsigned  halfword [t9 - 0x7208]
         a0 = 0x424f << 16
         a0 |= 0x4f4b
         call 0x80002bf8          // 0x80002bf8(0x424f4f4b, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = t9
         ra = [sp + 0x1c]
         t0 = 0x8800 << 16
         t0 = [t0 + 0x6860]       // t9
         at = aav.0x80130000 << 16
         v0 = [sp + 0x20]
         sp += 0x28
         ret
         [at - 0x73a0] = t0

    loc_0x802b6738: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb04
         sp += 0x50
         t6 = 0x8831 << 16
         t6 = , unsigned  byte [t6 - 0x71c4] // s4

    loc_0x802b6744: // orphan
         v0 = 0x8831 << 16
         v0 -= 0x71b0
         beql t6, 0, 0x802b6760   // unlikely
         t7 = , unsigned  byte [v0 + 4] // s4

    loc_0x802b6754: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802b6760: // orphan
         beql t7, 0, 0x802b6774   // likely
         t8 = , unsigned  byte [v0 + 0x1c] // s4

    loc_0x802b6768: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802b6774: // orphan
         v0 += 0x18
         beql t8, 0, 0x802b678c   // unlikely
         t9 = , unsigned  byte [v0 + 0x1c] // s4

    loc_0x802b6780: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802b678c: // orphan
         v0 += 0x18
         v0 = 0
         if                       // unlikely
         

    loc_0x802b679c: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802b67a4: // orphan
         ret                      // ra
         

    loc_0x802b67d4: // orphan
         t7 = [v0 + 0]            // t9
         beql v1, t7, 0x802b67e4  // unlikely
         // CODE XREF from fcn.802ac294 @ 0x802acb10
         t8 = [v0 + 0x18]         // t9

    loc_0x802b67d8: // orphan
         ret                      // ra
         v0 = 0

    loc_0x802b68b4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb20
         a1 = s1 << 0x10          // arg2
         t1 = 0 + 0xf0
         a0 = s0 + t0             // arg1
         a0 -= 8                  // arg1
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         t2 = 0 + 0xf0
         t3 = 0 + 0x400
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         [sp + 0x14] = t2
         [sp + 0x44] = a0
         // CODE XREF from fcn.81b5c8e4 @ +0x2cc
         [sp + 0x10] = t1
         a1 = , signed  a1 >> 0x10 // arg2
         a2 = 0 + 8               // arg3
         a3 = 0 + 8               // arg4 // a2
         call 0x80044270          // 0x80044270(0xffff6504, 0xffff7dbd, 0x8, 0x8)
         [sp + 0x20] = 0
         t5 = [sp + 0x48]
         a0 = s0 << 0x10
         t6 = 0 - 0x10
         a1 = s1 + t5
         a1 -= 8
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         t7 = 0 - 0x10

    loc_0x802b6920: // orphan
         t8 = 0 + 0x400
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x40] = a1
         [sp + 0x10] = t6
         a0 = , signed  a0 >> 0x10 // t9
         a2 = 0 + 8
         a3 = 0 + 8               // a2
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0x8)
         [sp + 0x20] = 0
         t0 = 0 + 0xf0
         t1 = 0 - 0x10
         t2 = 0 + 0x400
         t3 = 0 + 0x400
         [sp + 0x1c] = t3
         [sp + 0x18] = t2
         [sp + 0x14] = t1
         [sp + 0x10] = t0
         a0 = halfword [sp + 0x46]
         a1 = halfword [sp + 0x42]
         a2 = 0 + 8
         a3 = 0 + 8               // a2
         call 0x80044270          // 0x80044270(0x6504, 0x6408, 0x8, 0x8)
         [sp + 0x20] = 0
         a3 = [sp + 0x48]
         a1 = s1 + 8
         a1 <<= 0x10
         a3 -= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s0 << 0x10
         t4 = 0 - 0x10
         t5 = 0 - 0x10
         t6 = 0 + 0x400
         // CODE XREF from fcn.802cb7dc @ +0x324
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         a0 = , signed  a0 >> 0x10 // s0
         [sp + 0x3c] = a1
         [sp + 0x38] = a3
         a2 = 0 + 8
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x104, 0xffff7dc5, 0x8, 0xfffffff0)
         // CODE XREF from fcn.802cb7dc @ 0x802cbb04
         [sp + 0x20] = 0
         t7 = 0 + 0xf0
         t8 = 0 - 0x10
         t9 = 0 + 0x400
         a1 = [sp + 0x3c]
         a3 = [sp + 0x38]
         [sp + 0x18] = t9
         [sp + 0x14] = t8
         [sp + 0x10] = t7
         a0 = halfword [sp + 0x46]
         a2 = 0 + 8
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x6504, 0xffff7dc5, 0x8, 0xfffffff0)
         [sp + 0x20] = 0
         a2 = [sp + 0x4c]
         a0 = s0 + 8
         // CODE XREF from fcn.82bea63c @ 0x802acb34
         a0 <<= 0x10
         a2 -= 0x10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10

    loc_0x802b6a28: // orphan
         a0 = , signed  a0 >> 0x10 // t9
         a1 = s1 << 0x10
         t0 = 0 + 0xd0
         t1 = 0 + 0xf0
         t2 = 0 + 0x400

    loc_0x802b6a3c: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cbb08
         [sp + 0x1c] = t2
         [sp + 0x14] = t1
         // CODE XREF from fcn.82bea63c @ 0x802acb40
         [sp + 0x10] = t0
         a1 = , signed  a1 >> 0x10
         [sp + 0x48] = a0
         // CODE XREF from fcn.802cb7dc @ +0x330
         [sp + 0x44] = a2
         a3 = 0 + 8               // a2

    loc_0x802b6a58: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb44
         [sp + 0x18] = 0

    loc_0x802b6a5c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb38
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         t3 = 0 + 0xd0
         t4 = 0 - 0x10
         t5 = 0 + 0x400
         // CODE XREF from fcn.802ac294 @ +0x8a8
         a0 = [sp + 0x48]         // t9
         a2 = [sp + 0x44]
         [sp + 0x1c] = t5

    loc_0x802b6a7c: // orphan
         [sp + 0x14] = t4
         [sp + 0x10] = t3
         a1 = halfword [sp + 0x42]
         a3 = 0 + 8               // a2
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, 0x6408, 0x8, 0x8)
         [sp + 0x20] = 0
         ra = [sp + 0x34]
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]
         ret
         sp += 0x50

    loc_0x802b6b14: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb50
         t6 = a0 << 2             // arg1
         t6 -= a0                 // arg1
         t7 = 0x8831 << 16
         t7 -= 0x71c8
         t6 <<= 3
         v0 = t6 + t7
         t8 = 0 + 2
         t9 = 0 + 1               // lo
         [v0 + 0] = t8
         ret                      // ra
         byte [v0 + 4] = t9

    loc_0x802b6c20: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acb5c
         if                       // likely
         at = 0 + 4

    loc_0x802b6c28: // orphan
         if                       // unlikely
         at = 0 + 5

    loc_0x802b6c30: // orphan
         if                       // unlikely
         s0 = 0x8860 << 16

    loc_0x802b6c38: // orphan
         goto 0x802b6ce0
         

    loc_0x802b6c40: // orphan
         call 0x88306430          // 0x88306430(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8860 << 16
         s2 = 0x8860 << 16
         v0 = , unsigned  byte [v0 + 0x1896] // s4
         goto 0x802b6e2c          // fcn.802b6c60+0x1cc
         s2 += 0x189c

    loc_0x802b6c5c: // orphan
         s0 = [s0 + 0x1898]       // t9

    loc_0x802b6ce0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b6c38
         call 0x88306e18          // 0x88306e18(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s4
         v0 = 0x8860 << 16
         v0 = , unsigned  byte [v0 + 0x1896] // s4

    loc_0x802b6cf0: // orphan
         s2 = 0x8860 << 16
         goto 0x802b6e2c          // fcn.802b6c60+0x1cc
         s2 += 0x189c

    loc_0x802b6f2c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acba8
         a2 += 0x1890             // arg3
         t8 = [sp + 0x68]
         t9 = [a2 + 0]            // arg3
         [t9 + 0x244] = t8
         t0 = [sp + 0x68]
         s0 = 0x8860 << 16
         s0 += 0x189c
         // CODE XREF from fcn.802cb7dc @ +0x348
         if                       // unlikely
         s4 = 0x8860 << 16

    loc_0x802b6f50: // orphan
         t1 = 0x8800 << 16
         s4 += 0x1896
         t1 += 0x6880
         // CODE XREF from fcn.802cb7dc @ +0x34c
         t2 = 0 + 0xfb
         [s0 + 0] = t1
         byte [s4 + 0] = t2
         goto 0x802b71a4          // fcn.802af804+0x79a0
         v0 = t2 & 0xff

    loc_0x802b6f70: // orphan
         t3 = [a2 + 0]            // arg3 // t9
         at = 0 + 4
         t4 = [t3 + 0]            // t9
         if                       // likely
         

    loc_0x802b6f84: // orphan
         call 0x88306430          // 0x88306430(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t5 = 0x8860 << 16

    loc_0x802b6f90: // orphan
         t5 = [t5 + 0x1890]       // t9
         s4 = 0x8860 << 16
         s4 += 0x1896
         t6 = , unsigned  byte [t5 + 0x38e] // s4
         goto 0x802b70c8          // fcn.802af804+0x78c4
         byte [s4 + 0] = t6

    loc_0x802b6fa8: // orphan
         s4 = 0x8860 << 16
         s4 += 0x1896
         byte [s4 + 0] = 0
         a0 = 0
         call 0x88307ad0          // 0x88307ad0(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         byte [sp + 0x58] = v0
         a0 = 0 + 1               // lo
         call 0x88307ad0          // 0x88307ad0(0x1, 0x0, 0x8, -1)
         a1 = 0
         s2 = 0x8860 << 16
         s2 = [s2 + 0x1890]       // t9
         s3 = 0x8860 << 16
         byte [sp + 0x59] = v0
         // CODE XREF from fcn.802cb7dc @ +0x350
         s3 = [s3 + 0x1898]       // t9
         s1 = 0 + 1               // lo
         s2 += 0x18

    loc_0x802b72cc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acbd8
         add.s f8, f0, f6
         // CODE XREF from fcn.802a91c8 @ 0x802b72bc
         a1 = 0x8860 << 16
         t7 = 0 + 0x1e
         t8 = 0 + 0xf
         trunc.w.s f4, f8
         [sp + 0x14] = t8
         [sp + 0x10] = t7
         a1 = , unsigned  byte [a1 + 0x1896] // arg2
         mfc1 t0, f4
         a0 = [s1 + 0]            // t9
         a2 = 0 + 7               // arg3
         a3 = 0 + 0x40            // arg4
         [sp + 0x1c] = t1
         [sp + 0x20] = t2
         [sp + 0x24] = t3
         [sp + 0x28] = t4
         call 0x88001c6c          // 0x88001c6c(-1, 0x0, 0x7, 0x40)
         [sp + 0x18] = t0
         call 0x800033b4          // 0x800033b4(-1, 0x0, 0x7, 0x40)
         a0 = 0 + 0x3ec
         v1 = 0x8860 << 16
         at = 0x8860 << 16
         [at + 0x1898] = v0
         v1 += 0x1894
         byte [v1 + 1] = 0
         t5 = byte [v1 + 1]
         t6 = 0x8860 << 16
         s0 = 0x8860 << 16
         byte [v1 + 0] = t5
         t6 = [t6 + 0x1890]       // t9
         s3 = 0x8800 << 16
         s3 += 0x6868
         [t6 + 0x244] = 0
         s0 = [s0 + 0x1890]       // t9
         s1 = 0 + 1               // lo
         s2 = 0 + 0xc9
         s0 += 0x18

    loc_0x802b7360: // orphan
         bnel s1, s2, 0x802b7384  // likely
         halfword [s0 + 0] = s1

    loc_0x802b7368: // orphan
         call 0x80060110          // 0x80060110(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = byte [s3 + 0]       // s4
         call 0x80064700          // 0x80064700(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 & 0xff           // s4
         goto 0x802b7384
         halfword [s0 + 0] = v0

    loc_0x802b7384: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b7378
         s1 += 1
         at = , unsigned  , s1 < 0xfc
         if                       // unlikely
         s0 += 2

    loc_0x802b7394: // orphan
         s0 = 0x8860 << 16
         s0 = [s0 + 0x1890]       // t9
         t7 = 0 + 0xfe            // t3
         s1 = 0 + 1               // lo
         v0 = 0 + 0x19
         halfword [s0 + 0x20e] = s2
         halfword [s0 + 0x210] = t7
         s0 += 0x212

    loc_0x802b73b4: // orphan
         t9 = s1 + 0xff
         t0 = s1 + 0x100
         t1 = s1 + 0x101
         t8 = s1 + 0xfe
         s1 += 4
         halfword [s0 + 6] = t1
         halfword [s0 + 4] = t0
         halfword [s0 + 2] = t9
         s0 += 8
         if                       // likely
         halfword [s0 - 8] = t8

    loc_0x802b73e0: // orphan
         t2 = 0x8860 << 16
         t2 = [t2 + 0x1890]       // t9
         call 0x883064c8          // 0x883064c8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t2 + 0]            // t9
         ra = [sp + 0x44]         // a2
         s0 = [sp + 0x34]
         s1 = [sp + 0x38]
         s2 = [sp + 0x3c]
         s3 = [sp + 0x40]
         ret                      // a2
         sp += 0x48

    loc_0x802b7428: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acbe4
         v1 = v0                  // s4
         goto 0x802b7434
         v1 = 0 + 0xc9

    loc_0x802b7434: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b742c
         call 0x800637c0          // 0x800637c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v1 & 0xff           // k0
         t6 = [sp + 0x24]         // t3
         a1 = v0 & 0xff           // s4
         v1 = , unsigned  halfword [t6 + 0]
         at = , v1 < 0xfe
         if                       // unlikely
         v0 = v1

    loc_0x802b7454: // orphan
         goto 0x802b745c
         v0 = 0 + 0xc9

    loc_0x802b745c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b7454
         a0 = v0 & 0xff           // s4
         call 0x800637c0          // 0x800637c0(0xff, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x1b] = a1
         ra = [sp + 0x14]
         a1 = , unsigned  byte [sp + 0x1b] // a2
         sp += 0x20
         ret
         v0 = a1 - v0

    loc_0x802b74e4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acbf0
         a0 = v1 & 0xff           // arg1 // k0
         t6 = [sp + 0x24]         // t3
         a1 = v0 & 0xff           // arg2 // s4
         v1 = , unsigned  halfword [t6 + 0]
         at = , v1 < 0xfe
         if                       // unlikely
         v0 = v1

    loc_0x802b7500: // orphan
         goto 0x802b7508
         v0 = 0 + 0xc9

    loc_0x802b7508: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b7500
         a0 = v0 & 0xff           // arg1 // s4
         call 0x80073450          // 0x80073450(0xff, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x1b] = a1
         // CODE XREF from fcn.802cb7dc @ +0x364
         ra = [sp + 0x14]
         a1 = , unsigned  byte [sp + 0x1b] // a2
         sp += 0x20
         ret
         v0 = a1 - v0

    loc_0x802b753c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acbf8
         t7 = 0x8830 << 16
         at = 0 + 2
         if                       // unlikely
         t8 = 0x8830 << 16

    loc_0x802b754c: // orphan
         goto 0x802b7578
         

    loc_0x802b7570: // orphan
         t8 += 0x6dac
         [sp + 0x1c] = t8

    loc_0x802b7578: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b754c
         a0 = 0x8860 << 16
         a1 = 0x8860 << 16
         a1 = , unsigned  byte [a1 + 0x1896] // arg2
         a0 = [a0 + 0x1898]       // arg1 // s4
         call 0x88004b60          // 0x88004b60(0xff, 0x0, 0x8, -1)
         a2 = [sp + 0x1c]
         ra = [sp + 0x14]
         sp += 0x20
         ret
         // CODE XREF from fcn.82bea63c @ 0x802acc08
         

    loc_0x802b7908: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acc24
         swc1 f0, 0x18, sp
         mtc1 v0, f18

    loc_0x802b7910: // orphan
         // CODE XREF from fcn.802cbbb0 @ 0x802cbb7c
         at = 0x4443 << 16
         mtc1 at, f4
         cvt.s.w f16, f18
         lwc1 f0, 0x18, sp
         a2 = 0x8831 << 16
         a2 -= 0x714c             // arg3
         t7 = halfword [a2 + 0]
         v1 = 0x8831 << 16
         div.s f10, f4, f16
         a0 = 0x8831 << 16
         t2 = 0x8831 << 16
         a0 -= 0x71e8             // arg1
         add.s f6, f10, f0
         trunc.w.s f8, f6
         mfc1 t8, f8
         
         t9 = t7 + t8
         // CODE XREF from fcn.802cb7dc @ +0x3a4
         halfword [a2 + 0] = t9   // arg3
         t0 = halfword [a2 + 0]
         v1 = halfword [v1 - 0x714a]
         at = , t0 < v1           // lo
         bnel at, 0, 0x802b7998   // fcn.802af804+0x8194 // likely
         ra = [sp + 0x14]

    loc_0x802b796c: // orphan
         halfword [a2 + 0] = v1   // arg3
         t2 = byte [t2 - 0x714e]  // s4
         at = 0x8831 << 16
         a1 = 0
         // CODE XREF from fcn.802ac294 @ +0x994
         byte [at - 0x714f] = t2
         at = 0x8831 << 16
         call 0x880002f4          // 0x880002f4(-1, 0x0, 0x8, -1)
         [at - 0x7160] = 0
         at = 0x8831 << 16

    loc_0x802b7990: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acc2c
         byte [at - 0x71fc] = 0

    loc_0x802b7c2c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acc38
         v0 = [v0 - 0x7158]       // t9
         a0 = s0 << 0x10
         t6 = 0 - 0x10
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         t7 = 0 - 0x10
         t8 = 0 + 0x400
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x40] = v1
         [sp + 0x24] = v1
         [sp + 0x20] = 0
         [sp + 0x10] = t6
         a0 = , signed  a0 >> 0x10 // s0
         a1 = halfword [sp + 0x52]
         call 0x80044424          // 0x80044424(0x104, 0x0, 0xffff, 0xffff)
         t0 = v1
         v0 = 0x8831 << 16
         v0 = [v0 - 0x7158]       // t9
         t0 = , unsigned  halfword [sp + 0x56]
         t7 = [sp + 0x40]         // v1
         v1 = , unsigned  halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         t1 = s0 + t0
         s0 = t1 - v1
         s0 <<= 0x10

    loc_0x802b7e44: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acc40
         t4 = [sp + 0x3c]
         a2 = halfword [s0 + 0]
         t5 = 0 - 0x10
         t0 = t3 + t4
         a1 = t0 - v1
         a1 <<= 0x10
         t6 = 0 - 0x10
         t7 = 0 + 0x400
         t8 = 0 + 0x400
         t9 = 0 + 1               // lo
         a3 = v1 << 0x10
         a3 = , signed  a3 >> 0x10 // v1
         [sp + 0x24] = t9
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         a1 = , signed  a1 >> 0x10
         [sp + 0x38] = t0
         [sp + 0x10] = t5
         [sp + 0x20] = 0
         call 0x80044424          // 0x80044424(-1, 0xffff7ca3, 0x7ebb, 0x220)
         a0 = halfword [sp + 0x4a]
         v0 = , unsigned  halfword [s0 + 0]
         v1 = , unsigned  halfword [s0 + 2]
         t0 = [sp + 0x38]
         t1 = halfword [sp + 0x4a]
         t2 = v0 << 5
         a1 = t0 - v1
         a0 = t1 + v0
         a0 <<= 0x10
         a1 <<= 0x10
         t3 = t2 - 0x10
         t4 = 0 - 0x10
         t5 = 0 - 0x400
         t6 = 0 + 0x400
         t7 = 0 + 1               // lo
         a2 = v0 << 0x10
         a3 = v1 << 0x10
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x24] = t7
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x14] = t4
         [sp + 0x10] = t3
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         call 0x80044424          // 0x80044424(0xffff7eba, 0xffff0007, 0x7ebb, 0x7ebc)
         [sp + 0x20] = 0
         ra = [sp + 0x34]
         s0 = [sp + 0x30]
         sp += 0x40
         ret
         

    loc_0x802b8214: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acc80
         v0 = t6 + a1
         v0 <<= 0x18
         v0 = , signed  v0 >> 0x18
         at = , v0 < 0x11
         if                       // unlikely
         

    loc_0x802b822c: // orphan
         v0 -= 0x11

    loc_0x802b8230: // orphan
         v0 <<= 0x18
         v0 = , signed  v0 >> 0x18 // t9
         at = , v0 < 0x11
         beql at, 0, 0x802b8230   // likely
         v0 -= 0x11

    loc_0x802b8244: // orphan
         bgezl v0, 0x802b8264     // likely
         t7 += v0                 // s4

    loc_0x802b824c: // orphan
         v0 += 0x11

    loc_0x802b8250: // orphan
         v0 <<= 0x18
         v0 = , signed  v0 >> 0x18 // t9
         bltzl v0, 0x802b8250     // unlikely
         v0 += 0x11

    loc_0x802b8260: // orphan
         t7 += v0                 // s4

    loc_0x802b8264: // orphan
         t7 = byte [t7 - 0x7840]  // s4
         goto 0x802b82d0
         byte [sp + 7] = t7

    loc_0x802b82d0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802b8268
         v0 = byte [sp + 7]       // s4
         ret                      // ra
         sp += 8

    loc_0x802b8628: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acca4
         s6 = [sp + 0x34]
         s7 = [sp + 0x38]
         ret                      // ra
         sp += 0x68

    loc_0x802b9214: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd20
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9220: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b922c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd28
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9238: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd14
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9244: // orphan
         // CODE XREF from fcn.802ac294 @ +0xa9c
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9250: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b925c: // orphan
         if                       // unlikely
         

    loc_0x802b9264: // orphan
         

    loc_0x802b9268: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd34
         
         

    loc_0x802b9270: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd2c
         
         
         // CODE XREF from fcn.802ac294 @ +0xa90
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acd1c
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b92a0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b92bc: // orphan
         if                       // fcn.802baf28+0x68 // unlikely
         if                       // unlikely

    loc_0x802b92c8: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b92ec: // orphan
         if                       // fcn.802af518+0xbd68 // unlikely
         if                       // unlikely

    loc_0x802b92f8: // orphan
         if                       // fcn.802bb2f4+0x28 // unlikely
         if                       // fcn.802bb2f4+0x3c // unlikely

    loc_0x802b9304: // orphan
         
         
         
         
         
         if                       // fcn.802afdb0+0xb96c // unlikely
         if                       // fcn.802afdb0+0xb9c0 // unlikely

    loc_0x802b9324: // orphan
         
         if                       // fcn.802afdb0+0xbaac // unlikely
         if                       // fcn.802afdb0+0xbac0 // unlikely

    loc_0x802b9334: // orphan
         if                       // fcn.802afdb0+0xbaa8 // unlikely
         if                       // fcn.802afdb0+0xbc1c // unlikely

    loc_0x802b9340: // orphan
         
         if                       // fcn.802afdb0+0xbc58 // unlikely
         if                       // fcn.802afdb0+0xbc6c // unlikely

    loc_0x802b9350: // orphan
         if                       // fcn.802afdb0+0xbdc4 // unlikely
         if                       // fcn.802afdb0+0xbe08 // unlikely

    loc_0x802b935c: // orphan
         if                       // fcn.802afdb0+0xbe40 // unlikely
         if                       // fcn.802afdb0+0xbe94 // unlikely

    loc_0x802b9368: // orphan
         if                       // fcn.802afdb0+0xbeec // unlikely
         if                       // fcn.802afdb0+0xbf00 // unlikely

    loc_0x802b9374: // orphan
         if                       // fcn.802afdb0+0xbfa8 // unlikely
         if                       // fcn.802afdb0+0xbfbc // unlikely

    loc_0x802b9380: // orphan
         if                       // fcn.802bbf0c+0x8 // unlikely
         if                       // unlikely

    loc_0x802b938c: // orphan
         if                       // fcn.802afdb0+0xc1c0 // unlikely
         if                       // fcn.802afdb0+0xc1d4 // unlikely

    loc_0x802b9398: // orphan
         if                       // fcn.802afdb0+0xc20c // unlikely
         if                       // fcn.802afdb0+0xc220 // unlikely

    loc_0x802b93a4: // orphan
         if                       // fcn.802afdb0+0xc248 // unlikely
         if                       // unlikely

    loc_0x802b93b0: // orphan
         if                       // fcn.802afdb0+0xc284 // unlikely
         if                       // fcn.802afdb0+0xc298 // unlikely

    loc_0x802b93bc: // orphan
         if                       // fcn.802afdb0+0xc2d0 // unlikely
         if                       // fcn.802afdb0+0xc2e4 // unlikely

    loc_0x802b93c8: // orphan
         if                       // fcn.802afdb0+0xc30c // unlikely
         

    loc_0x802b93d0: // orphan
         
         
         if                       // fcn.802afdb0+0xc3bc // unlikely
         if                       // fcn.802afdb0+0xc3d0 // unlikely

    loc_0x802b93e4: // orphan
         if                       // fcn.802afdb0+0xc448 // unlikely
         if                       // fcn.802afdb0+0xc47c // unlikely

    loc_0x802b93f0: // orphan
         if                       // fcn.802afdb0+0xc404 // unlikely
         if                       // unlikely

    loc_0x802b93fc: // orphan
         if                       // unlikely
         if                       // fcn.802afdb0+0xc4a4 // unlikely

    loc_0x802b9504: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd40
         

    loc_0x802b9508: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b951c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b952c: // orphan
         
         
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acd4c
         
         if                       // fcn.802afdb0+0xd848 // unlikely
         if                       // unlikely

    loc_0x802b9550: // orphan
         

    loc_0x802b9554: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd50
         if                       // unlikely
         if                       // fcn.802afdb0+0xd92c // unlikely

    loc_0x802b9560: // orphan
         
         
         if                       // fcn.802a91c8+0x14844 // unlikely
         if                       // unlikely

    loc_0x802b9574: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9588: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9594: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b95a0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b95b4: // orphan
         
         
         
         if                       // fcn.802bdfb8+0xc // unlikely
         if                       // fcn.802bdfb8+0x30 // unlikely

    loc_0x802b95cc: // orphan
         
         
         if                       // fcn.802a91c8+0x14e70 // unlikely
         if                       // unlikely

    loc_0x802b95e0: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x802b95f4: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x802b9608: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b961c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9628: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b963c: // orphan
         
         
         
         
         
         
         if                       // fcn.802a91c8+0x15430 // unlikely
         if                       // unlikely

    loc_0x802b9660: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9670: // orphan
         if                       // unlikely
         

    loc_0x802b9678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9684: // orphan
         if                       // unlikely
         

    loc_0x802b968c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b96a8: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b96bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b96c8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9b50: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd8c
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acd94
         
         
         
         
         

    loc_0x802b9bbc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd98
         
         
         
         
         
         
         
         
         if                       // fcn.802aa09c+0x1a104 // unlikely
         if                       // unlikely

    loc_0x802b9be8: // orphan
         if                       // unlikely
         

    loc_0x802b9bf0: // orphan
         if                       // fcn.802aa09c+0x1a1b8 // unlikely
         if                       // fcn.802aa09c+0x1a1cc // unlikely

    loc_0x802b9bfc: // orphan
         if                       // fcn.802af284+0x1503c // unlikely
         

    loc_0x802b9c04: // orphan
         
         if                       // fcn.802af284+0x15088 // unlikely
         if                       // fcn.802af284+0x1509c // unlikely

    loc_0x802b9c14: // orphan
         if                       // fcn.802c445c+0xec // unlikely
         if                       // unlikely

    loc_0x802b9c20: // orphan
         
         
         
         
         
         
         

    loc_0x802b9c3c: // orphan
         
         
         
         
         if                       // fcn.802c46c0+0x200 // unlikely
         

    loc_0x802b9c54: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acda8
         
         
         
         
         

    loc_0x802b9cb0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acdac
         
         
         
         
         
         

    loc_0x802b9eb8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acdc4
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9ed4: // orphan
         if                       // fcn.802c6c38-0x10 // unlikely
         if                       // unlikely

    loc_0x802b9ee0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9ef0: // orphan
         
         if                       // unlikely
         

    loc_0x802b9efc: // orphan
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acdd4
         
         
         
         
         
         
         
         
         

    loc_0x802b9f2c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acdd8
         
         if                       // fcn.802af284+0x17f00 // unlikely
         if                       // fcn.802af284+0x17f14 // unlikely

    loc_0x802b9f3c: // orphan
         
         // CODE XREF from fcn.802ac294 @ +0xb48
         
         if                       // fcn.802af284+0x18004 // unlikely
         if                       // fcn.802af284+0x18018 // unlikely

    loc_0x802b9f50: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9f7c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9f90: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9fb0: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802acde4
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9fd4: // orphan
         
         

    loc_0x802b9fdc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acde8
         
         
         
         if                       // fcn.802a91c8+0x1e894 // unlikely
         if                       // unlikely

    loc_0x802b9ff4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba000: // orphan
         if                       // unlikely
         if                       // fcn.802af284+0x18954 // unlikely

    loc_0x802ba00c: // orphan
         if                       // fcn.802af284+0x1894c // unlikely
         

    loc_0x802ba014: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba044: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802acdf0
         if                       // unlikely

    loc_0x802ba06c: // orphan
         if                       // unlikely
         if                       // fcn.802c8170+0x14 // unlikely

    loc_0x802ba078: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acdf4
         
         

    loc_0x802ba080: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba090: // orphan
         if                       // fcn.802ad1c8+0x1b28c // unlikely
         

    loc_0x802ba1a4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace00
         
         if                       // unlikely
         

    loc_0x802ba1b0: // orphan
         
         if                       // fcn.802c9648+0x90 // unlikely
         // CODE XREF from fcn.802ac294 @ +0xb70
         if                       // fcn.802c9648+0xa4 // unlikely

    loc_0x802ba1c0: // orphan
         if                       // fcn.802c97fc+0x28 // unlikely
         if                       // unlikely

    loc_0x802ba1cc: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba1e8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba1f8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba210: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba24c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba258: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802cb014+0x348 // unlikely
         if                       // unlikely

    loc_0x802ba2c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba2d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba2dc: // orphan
         if                       // fcn.802cb480+0x10 // unlikely
         if                       // unlikely

    loc_0x802ba2e8: // orphan
         if                       // unlikely
         

    loc_0x802ba2f0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba300: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba390: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace0c
         
         
         
         
         // CODE XREF from fcn.8261d510 @ +0xad4
         
         
         // CODE XREF from fcn.82bea63c @ 0x802ace14
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba3b4: // orphan
         
         if                       // fcn.802cc4dc+0x20 // unlikely
         if                       // unlikely

    loc_0x802ba3c4: // orphan
         
         
         
         
         if                       // fcn.802ac294+0x20504 // unlikely
         if                       // unlikely

    loc_0x802ba3e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba3ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba3f8: // orphan
         
         
         if                       // fcn.802cc8cc+0xf8 // unlikely
         if                       // fcn.802cc8cc+0x13c // unlikely

    loc_0x802ba40c: // orphan
         
         if                       // fcn.802cc8cc+0x238 // unlikely
         if                       // fcn.802cc8cc+0x28c // unlikely

    loc_0x802ba41c: // orphan
         
         
         
         
         
         
         
         

    loc_0x802ba43c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace18
         if                       // fcn.802ac294+0x213bc // unlikely
         if                       // unlikely

    loc_0x802ba448: // orphan
         
         
         // CODE XREF from fcn.802ac294 @ +0xb88
         
         if                       // fcn.802cd9dc+0xac // unlikely
         if                       // unlikely

    loc_0x802ba460: // orphan
         // CODE XREF from fcn.802cbbb0 @ 0x802cbbdc
         
         
         
         
         if                       // fcn.802ac294+0x21940 // unlikely
         // CODE XREF from fcn.802cbbb0 @ 0x802cbbe0
         if                       // unlikely

    loc_0x802ba47c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba498: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba4a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba4b4: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba50c: // orphan
         

    loc_0x802ba510: // orphan
         
         if                       // unlikely
         

    loc_0x802ba51c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba52c: // orphan
         
         
         
         
         
         
         

    loc_0x802ba548: // orphan
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802ace20
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba564: // orphan
         

    loc_0x802ba568: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace24
         if                       // unlikely
         // CALL XREF from fcn.82b78044 @ +0x6dc
         if                       // unlikely

    loc_0x802ba574: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba580: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba590: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba5a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba5ac: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba5bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba5c8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba5d8: // orphan
         
         
         
         
         
         
         
         

    loc_0x802ba5f8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba608: // orphan
         
         
         
         
         
         
         

    loc_0x802ba624: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba648: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba658: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace34
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba668: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba678: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba698: // orphan
         if                       // unlikely
         

    loc_0x802ba6a0: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba6c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba6d0: // orphan
         if                       // unlikely
         

    loc_0x802ba6d8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba6e8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba6f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba704: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba720: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba724: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba72c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba738: // orphan
         if                       // unlikely
         

    loc_0x802ba740: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba750: // orphan
         if                       // unlikely
         

    loc_0x802ba758: // orphan
         
         
         // CODE XREF from fcn.82bea63c @ 0x802ace3c
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba778: // orphan
         if                       // fcn.802cd9dc+0x28e0 // unlikely
         if                       // unlikely

    loc_0x802ba784: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace40
         
         
         if                       // fcn.802cd9dc+0x2934 // unlikely
         if                       // unlikely

    loc_0x802ba798: // orphan
         if                       // fcn.802cd9dc+0x2980 // unlikely
         if                       // unlikely

    loc_0x802ba79c: // orphan
         if                       // fcn.802cd9dc+0x2980 // unlikely
         if                       // unlikely

    loc_0x802ba7a4: // orphan
         

    loc_0x802ba7a8: // orphan
         if                       // fcn.802d03d0-0x14 // unlikely
         if                       // fcn.802d03d0 // unlikely

    loc_0x802ba7b4: // orphan
         if                       // fcn.802cd9dc+0x2a1c // unlikely
         // CODE XREF from fcn.802ac294 @ +0xbb0
         if                       // unlikely

    loc_0x802ba7c0: // orphan
         if                       // fcn.802cd9dc+0x2a78 // unlikely
         if                       // fcn.802d03d0+0x98 // unlikely

    loc_0x802ba7cc: // orphan
         if                       // fcn.802cd9dc+0x2ab4 // unlikely
         if                       // unlikely

    loc_0x802ba7d8: // orphan
         if                       // fcn.802cd9dc+0x2af0 // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace48
         if                       // unlikely

    loc_0x802ba7dc: // orphan
         if                       // fcn.802cd9dc+0x2af0 // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace48
         if                       // unlikely

    loc_0x802ba7e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba7e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba7f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba7f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba7fc: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // fcn.802d0c40 // unlikely

    loc_0x802ba824: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba830: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba83c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace58
         

    loc_0x802ba85c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace58
         

    loc_0x802ba860: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba86c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba8b0: // orphan
         
         
         
         
         
         // CODE XREF from fcn.82bea63c @ 0x802ace60
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba8d0: // orphan
         if                       // fcn.802d1774+0x40 // unlikely
         if                       // unlikely

    loc_0x802ba8d8: // orphan
         if                       // unlikely

    loc_0x802ba8dc: // orphan
         if                       // fcn.802d1824+0x3c // unlikely
         if                       // fcn.802d1824+0x30 // unlikely

    loc_0x802ba8e4: // orphan
         if                       // fcn.802d1824+0x14 // unlikely

    loc_0x802ba8e8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace64
         if                       // fcn.802d1824+0x28 // unlikely
         if                       // unlikely

    loc_0x802ba8f0: // orphan
         if                       // unlikely

    loc_0x802ba8f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba8fc: // orphan
         // CODE XREF from fcn.802ac294 @ +0xbd4
         if                       // unlikely

    loc_0x802ba900: // orphan
         if                       // unlikely
         if                       // fcn.802d1824+0x244 // unlikely

    loc_0x802ba908: // orphan
         if                       // fcn.802d1824+0x278 // unlikely
         if                       // unlikely

    loc_0x802ba914: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba920: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba92c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba938: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba950: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba95c: // orphan
         if                       // unlikely
         if                       // fcn.802d2074 // unlikely

    loc_0x802ba968: // orphan
         if                       // fcn.802d2074+0xb8 // unlikely
         if                       // unlikely

    loc_0x802ba974: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba984: // orphan
         if                       // unlikely
         

    loc_0x802ba98c: // orphan
         if                       // unlikely
         if                       // fcn.802d21fc+0x178 // unlikely

    loc_0x802ba998: // orphan
         if                       // fcn.802d21fc+0x860 // unlikely
         if                       // fcn.802d21fc+0x874 // unlikely

    loc_0x802ba9a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba9b0: // orphan
         if                       // unlikely
         

    loc_0x802ba9b8: // orphan
         
         
         

    loc_0x802ba9c4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace70
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802ba9e0: // orphan
         if                       // fcn.802d39fc+0x18 // unlikely
         if                       // unlikely

    loc_0x802ba9ec: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802baa1c: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802baa38: // orphan
         
         
         

    loc_0x802baa44: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace80
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802d42fc+0x47c // unlikely
         if                       // unlikely

    loc_0x802baab0: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace8c
         if                       // unlikely

    loc_0x802baad0: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802ace8c
         if                       // unlikely

    loc_0x802baad8: // orphan
         

    loc_0x802baadc: // orphan
         
         
         

    loc_0x802baae8: // orphan
         
         
         
         
         if                       // fcn.802d4c44+0x88 // unlikely
         

    loc_0x802bab7c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ace98
         
         // CODE XREF from fcn.82bea63c @ 0x802aceac
         

    loc_0x802bab84: // orphan
         if                       // unlikely
         

    loc_0x802bab8c: // orphan
         
         // CODE XREF from fcn.802ac294 @ +0xc08
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802babf8: // orphan
         

    loc_0x802babfc: // orphan
         
         
         if                       // fcn.802ca910+0xbc08 // unlikely
         if                       // fcn.802ca910+0xbc1c // unlikely

    loc_0x802bac24: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802aceb0
         
         
         
         if                       // fcn.802ca910+0xbd74 // unlikely
         if                       // unlikely

    loc_0x802bac3c: // orphan
         if                       // fcn.802ca910+0xbd90 // unlikely
         if                       // fcn.802ca910+0xbed4 // unlikely

    loc_0x802badcc: // orphan
         if                       // fcn.802d81fc+0x44 // unlikely
         

    loc_0x802badd4: // orphan
         if                       // fcn.802d81fc+0x17c // unlikely
         if                       // fcn.802d81fc+0x190 // unlikely

    loc_0x802bade0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802badec: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x802bae20: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acecc
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae3c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae4c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae68: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae84: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae98: // orphan
         if                       // unlikely
         

    loc_0x802baea0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802baeb8: // orphan
         
         
         if                       // unlikely
         

    loc_0x802baec8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802baee0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802baeec: // orphan
         

    loc_0x802baef0: // orphan
         
         
         
         
         
         
         
         
         
         

    loc_0x802baf18: // orphan
         
         
         
         

    loc_0x802bb238: // orphan
         sp += 0x20
         ret                      // ra
         

    loc_0x802bb294: // orphan
         s3 = 0
         s5 = 0 + 5

    loc_0x802bbf38: // orphan
         at = 0x4f00 << 16
         a0 = 0 + 2
         mul.s f10, f6, f8
         div.s f18, f10, f16
         cfc1 t6, 31
         ctc1 s1, 31
         

    loc_0x802bc00c: // orphan
         sp -= 0x38
         [sp + 0x1c] = s1
         s1 = 0x8840 << 16
         s1 += 0x17e0
         v0 = [s1 + 0]            // t9
         [sp + 0x34] = ra

    loc_0x802bc268: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc24c, 0x802bc274
         goto 0x802bc27c
         a1 = 0 - 1               // arg2 // s2

    loc_0x802bd1f8: // orphan
         ra = [sp + 0x14]
         call 0x88500460          // 0x88500460(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 8               // a2
         at = 0x8851 << 16

    loc_0x802bd208: // orphan
         goto 0x802bd298          // fcn.802afdb0+0xd4e8
         byte [at - 0x2938] = 0

    loc_0x802bd62c: // orphan
         a0 = 0x504d << 16
         [sp + 0x2c] = a1
         call 0x80002b44          // 0x80002b44(0x504d0000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4558
         a0 = 1 << 16
         a0 |= 0x4000
         call 0x80006cd0          // 0x80006cd0(0x14000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x1, 0x0, 0x2, 0x0)
         a0 = 0 + 0xb
         a0 = 0 + 0x1c
         call 0x80047588          // 0x80047588(0x1c, 0x0, 0x2, 0x0)
         a1 = 0
         at = 0x8800 << 16

    loc_0x802bda60: // orphan
         t2 = [sp + 0x30]
         lwc1 f16, 0x28, sp
         // CODE XREF from fcn.802cbc34 @ +0x80
         t7 = [sp + 0x24]         // s4
         mul.s f8, f4, f10
         mtc1 t2, f10
         at = 0x4120 << 16
         a0 = 0x8851 << 16
         a0 = [a0 - 0x2930]       // t9
         div.s f18, f8, f20
         a0 += 0x74
         cvt.s.w f8, f10
         mtc1 at, f10
         add.s f6, f18, f16
         mul.s f18, f2, f8
         mtc1 t7, f8
         trunc.w.s f4, f6
         div.s f16, f18, f20
         mfc1 t1, f4
         cvt.s.w f18, f8
         add.s f6, f0, f16
         mul.s f16, f10, f18
         trunc.w.s f4, f6
         div.s f6, f16, f20
         mfc1 t4, f4
         lwc1 f4, 0x20, sp

    loc_0x802bdac4: // orphan
         t5 = t4 + t1
         add.s f8, f6, f4

    loc_0x802bddc4: // orphan
         t7 = 0x8852 << 16
         t7 = byte [t7 - 0x733f]  // s4
         if                       // likely
         s0 = 0x8851 << 16

    loc_0x802bddd4: // orphan
         s4 = 0x8851 << 16
         s4 -= 0x1c98
         s0 -= 0x2928
         s1 = sp + 0x470
         s2 = sp + 0x50
         s5 = sp + 0x470
         s3 = 0 + 0x58

    loc_0x802bddf0: // orphan
         t8 = , unsigned  byte [s0 + 0xc8c] // s4
         a0 = s4
         a1 = s2
         t9 = t8 & 0xff           // s4
         unsigned , hi            // t3 // t3
         byte [s1 + 0] = t8
         a2 = lo
         call 0x8007dfb0          // 0x8007dfb0(0xff, -1, 0xffffffffffffff01, -1)
         
         at = 0 | 0xa960
         s0 += at

    loc_0x802bde1c: // orphan
         s4 += at

    loc_0x802bde20: // orphan
         s2 += 0x210
         at = , unsigned  , s2 < s5 // lo
         if                       // likely
         s1 += 1

    loc_0x802bde30: // orphan
         s0 = 0x8851 << 16
         s0 -= 0x2928
         s3 = 0
         s4 = 0 + 0x58
         s2 = 0 + 1               // lo
         t0 = byte [s0 + 0xc89]   // s4

    loc_0x802bde48: // orphan
         a0 = s2 - s3
         a0 &= 0xff
         if                       // likely
         t1 = s3 << 5

    loc_0x802bde58: // orphan
         t1 += s3
         t1 <<= 4
         t2 = sp + 0x50
         call 0x88500cf0          // 0x88500cf0(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = t1 + t2
         t3 = byte [s0 + 0xc88]   // s4
         t8 = v0                  // s4
         t9 = v0 + 0x54
         unsigned , hi
         t4 = lo
         t5 = s1 + t4
         

    loc_0x802bde88: // orphan
         t7 = [t8 + 0]            // t9
         t8 += 0xc                // t1
         t5 += 0xc                // t1
         [t5 - 0xc] = t7
         t6 = [t8 - 8]            // t9
         [t5 - 8] = t6
         t7 = [t8 - 4]            // t9
         if                       // likely
         [t5 - 4] = t7

    loc_0x802bdeac: // orphan
         t7 = [t8 + 0]            // t9
         [t5 + 0] = t7

    loc_0x802bdeb4: // orphan
         at = 0 | 0xa960
         s0 += at
         s3 += 1
         at = , unsigned  , s3 < 2 // lo
         bnel at, 0, 0x802bde48   // likely
         t0 = byte [s0 + 0xc89]   // s4

    loc_0x802bdecc: // orphan
         s3 = 0
         a3 = 0 + 2
         a2 = sp + 0x470

    loc_0x802bded8: // orphan
         if                       // likely
         t0 = a2 + s3

    loc_0x802bdee0: // orphan
         a1 = , unsigned  byte [t0 + 0] // s4
         t1 = s3 << 5
         t1 += s3
         t1 <<= 4
         t2 = sp + 0x50
         s2 = t1 + t2
         if                       // likely
         v1 = 0

    loc_0x802bdf00: // orphan
         s6 = 0 + 1               // lo

    loc_0x802bdf04: // orphan
         v0 = s2
         if                       // unlikely
         a0 = a1                  // t0

    loc_0x802bdf10: // orphan
         t3 = , unsigned  byte [v0 + 0x1e] // s4
         t4 = t3 & 1              // lo
         bnel t4, 0, 0x802bdf30   // likely
         v1 += 1

    loc_0x802bdf20: // orphan
         t9 = , unsigned  halfword [v0 + 0x26]
         if                       // likely
         

    loc_0x802bdf2c: // orphan
         v1 += 1

    loc_0x802bdf30: // orphan
         at = , unsigned  , v1 < a0 // lo
         if                       // likely
         v0 += 0x58

    loc_0x802bdf3c: // orphan
         bnel v1, a0, 0x802bdf4c  // likely
         s3 += 1

    loc_0x802bdf44: // orphan
         s6 = 0 + 1               // lo

    loc_0x802bdf48: // orphan
         s3 += 1

    loc_0x802bdf4c: // orphan
         if                       // likely
         

    loc_0x802bdf50: // orphan
         

    loc_0x802bdf54: // orphan
         ra = [sp + 0x34]
         v0 = s6
         s6 = [sp + 0x30]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]
         ret
         sp += 0x480

    loc_0x802be05c: // orphan
         a0 = t9 & 0xff           // s4
         call 0x88000020          // 0x88000020(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a3
         v1 = 0x8851 << 16
         v1 = [v1 - 0x2930]       // t9
         a2 = 0x8851 << 16
         a2 -= 0x2930
         a3 = [sp + 0x28]         // t9
         a0 = , unsigned  , v0 < 1
         a1 = halfword [v1 + 0x56]

    loc_0x802be084: // orphan
         // CODE XREF from fcn.802bc7b4 @ 0x802bc820
         if                       // likely
         [sp + 0x20] = a0

    loc_0x802be08c: // orphan
         a1 = 0x8008 << 16
         a1 += 0x7200
         a0 = [a1 + 0]            // t9

    loc_0x802be098: // orphan
         // CODE XREF from fcn.802bc7b4 @ 0x802bc824
         v0 = , unsigned  halfword [a0 + 8]
         t0 = v0 & 0x4000
         if                       // unlikely
         t1 = v0 & 0x8000

    loc_0x802be0a8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         call 0x88500e80          // 0x88500e80(0x3, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x8851 << 16
         goto 0x802be3bc
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be0c4: // orphan
         beql t1, 0, 0x802be2a4   // unlikely
         t0 = halfword [v1 + 0xc]

    loc_0x802be0cc: // orphan
         t3 = halfword [v1 + 0xe]
         t2 = halfword [v1 + 0xc]
         t4 = t3 << 2
         t4 -= t3
         // CODE XREF from fcn.802bc7b4 @ +0x74
         t4 <<= 1

    loc_0x802be0e0: // orphan
         t5 = t2 + t4
         byte [a3 + 0xc88] = t5   // arg4

    loc_0x802be0e8: // orphan
         v1 = [a2 + 0]            // arg3
         t9 = byte [a3 + 0xc88]   // arg4 // t3
         t6 = byte [v1 + 0x30]    // s4
         t7 = v1 + t6
         t8 = byte [t7 + 0x31]    // s4
         byte [a3 + 0xc89] = t8   // arg4
         t0 = byte [a3 + 0xc89]   // arg4 // s4
         t1 = t0 << 2
         t1 += t0
         t1 <<= 2
         t1 += t0
         t1 <<= 3
         t1 -= t0
         t1 <<= 2
         t1 += t0

    loc_0x802be124: // orphan
         // CODE XREF from fcn.802bc7b4 @ 0x802bc830
         t1 <<= 2
         t3 = a3 + t1             // arg4
         t2 = , unsigned  byte [t3 + 0xc8c] // s4
         at = , t9 < t2
         bnel at, 0, 0x802be150   // unlikely
         t5 = [a2 + 0]            // arg3

    loc_0x802be13c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         goto 0x802be294
         

    loc_0x802be150: // orphan
         t4 = 0 - 1               // s2

    loc_0x802be154: // orphan
         halfword [sp + 0x1e] = t4
         a0 = , unsigned  byte [t5 + 0xa] // s4
         call 0x88500cf0          // 0x88500cf0(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a3
         a3 = [sp + 0x28]         // t9
         a0 = v0                  // s4
         a2 = , unsigned  byte [sp + 0x27] // s4
         call 0x8850130c          // 0x8850130c(0xff, 0x442f71dcfe116408, 0xff, -1)
         a1 = byte [a3 + 0xc89]   // s4
         if                       // unlikely
         a3 = [sp + 0x28]         // t9

    loc_0x802be180: // orphan
         goto 0x802be280
         a0 = 0 + 0x1d

    loc_0x802be188: // orphan
         t6 = 0x8851 << 16
         t6 = [t6 - 0x2930]       // t9
         at = 0 + 1               // lo
         t8 = [sp + 0x20]         // t9
         t7 = , unsigned  byte [t6 + 0xa] // s4
         if                       // likely
         

    loc_0x802be1a4: // orphan
         if                       // unlikely
         t0 = 0x8851 << 16

    loc_0x802be1ac: // orphan
         t0 = byte [t0 - 0x1c9f]  // s4
         a0 = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x802be1bc: // orphan
         call 0x88500cf0          // 0x88500cf0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a3
         call 0x80063754          // 0x80063754(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [v0 + 1] // s4
         if                       // unlikely
         a3 = [sp + 0x28]         // t9

    loc_0x802be1d4: // orphan
         t1 = 0 + 0x1b
         halfword [sp + 0x1e] = t1
         goto 0x802be280
         a0 = 0 + 0x1b

    loc_0x802be1e4: // orphan
         t3 = 0x8851 << 16
         t3 = [t3 - 0x2930]       // t9
         at = 0 + 1               // lo
         t9 = , unsigned  byte [t3 + 0xa] // s4
         bnel t9, at, 0x802be220  // likely
         a0 = 0 + 0x90

    loc_0x802be1fc: // orphan
         call 0x88501380          // 0x88501380(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a3
         if                       // unlikely
         a3 = [sp + 0x28]         // t9

    loc_0x802be20c: // orphan
         t2 = 0 + 0x1c
         halfword [sp + 0x1e] = t2
         goto 0x802be280
         // CODE XREF from fcn.802cbc34 @ +0xa0
         a0 = 0 + 0x1c

    loc_0x802be21c: // orphan
         a0 = 0 + 0x90

    loc_0x802be220: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a3
         a3 = [sp + 0x28]         // t9
         t4 = byte [a3 + 0xc89]   // s4
         t7 = byte [a3 + 0xc88]   // s4
         t5 = t4 << 2
         t5 += t4
         // CODE XREF from fcn.802cbc34 @ +0xa4
         t5 <<= 2
         t5 += t4
         t5 <<= 3
         t5 -= t4
         t8 = t7 << 2
         t5 <<= 2
         t8 -= t7

    loc_0x802be258: // orphan
         t8 <<= 2
         t5 += t4
         // CODE XREF from fcn.802cbc34 @ +0xa8
         t5 <<= 2
         t8 -= t7
         t8 <<= 3
         t6 = a3 + t5
         a0 = t6 + t8
         call 0x885011ec          // 0x885011ec(0x27ffffffd7, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0xc90
         a0 = halfword [sp + 0x1e]

    loc_0x802be280: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802be180, 0x802be1dc, 0x802be214
         at = 0 - 1               // s2
         if                       // unlikely
         

    loc_0x802be28c: // orphan
         call 0x88501274          // 0x88501274(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802be294: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802be144
         v1 = 0x8851 << 16
         goto 0x802be3bc
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be2a4: // orphan
         halfword [sp + 0x18] = t0
         t1 = halfword [v1 + 0xe]
         halfword [sp + 0x1a] = t1
         v0 = , unsigned  halfword [a0 + 0xc]
         t3 = v0 & 0x800
         if                       // unlikely
         t7 = v0 & 0x400

    loc_0x802be2c0: // orphan
         t9 = halfword [v1 + 0xe]
         t5 = 0 + 4
         t2 = t9 - 1
         halfword [v1 + 0xe] = t2
         v1 = [a2 + 0]            // arg3
         t4 = halfword [v1 + 0xe]
         bgezl t4, 0x802be320     // likely
         t1 = [a1 + 0]            // arg2 // t9

    loc_0x802be2e0: // orphan
         halfword [v1 + 0xe] = t5
         goto 0x802be31c
         v1 = [a2 + 0]            // arg3

    loc_0x802be2ec: // orphan
         beql t7, 0, 0x802be320   // likely
         t1 = [a1 + 0]            // arg2 // t9

    loc_0x802be2f4: // orphan
         t6 = halfword [v1 + 0xe]
         t8 = t6 + 1
         halfword [v1 + 0xe] = t8
         // CODE XREF from fcn.8296eaa4 @ +0x1774
         v1 = [a2 + 0]            // arg3

    loc_0x802be304: // orphan
         t0 = halfword [v1 + 0xe]

    loc_0x802be308: // orphan
         // CODE XREF from fcn.802cbc34 @ +0xb0
         at = , t0 < 5
         bnel at, 0, 0x802be320   // unlikely
         t1 = [a1 + 0]            // arg2 // t9

    loc_0x802be314: // orphan
         halfword [v1 + 0xe] = 0
         v1 = [a2 + 0]            // arg3

    loc_0x802be31c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802be2e4
         // CODE XREF from fcn.802cbc34 @ +0xb4
         t1 = [a1 + 0]            // arg2 // t9

    loc_0x802be320: // orphan
         v0 = , unsigned  halfword [t1 + 0xc]
         t3 = v0 & 0x200
         if                       // unlikely
         t7 = v0 & 0x100

    loc_0x802be330: // orphan
         t9 = halfword [v1 + 0xc]
         t5 = 0 + 5
         t2 = t9 - 1
         halfword [v1 + 0xc] = t2
         v1 = [a2 + 0]            // arg3
         t4 = halfword [v1 + 0xc]
         bgezl t4, 0x802be390     // likely
         t1 = halfword [sp + 0x18]

    loc_0x802be350: // orphan
         halfword [v1 + 0xc] = t5
         goto 0x802be38c
         v1 = [a2 + 0]            // arg3

    loc_0x802be35c: // orphan
         beql t7, 0, 0x802be390   // likely
         t1 = halfword [sp + 0x18]

    loc_0x802be364: // orphan
         t6 = halfword [v1 + 0xc]
         t8 = t6 + 1
         halfword [v1 + 0xc] = t8
         // CODE XREF from fcn.802cbc34 @ +0xb8
         v1 = [a2 + 0]            // arg3
         t0 = halfword [v1 + 0xc]
         at = , t0 < 6
         bnel at, 0, 0x802be390   // unlikely
         // CODE XREF from fcn.802a91c8 @ 0x802bc84c
         t1 = halfword [sp + 0x18]

    loc_0x802be384: // orphan
         // CODE XREF from fcn.802cbc34 @ +0xbc
         halfword [v1 + 0xc] = 0

    loc_0x802be388: // orphan
         v1 = [a2 + 0]            // arg3

    loc_0x802be38c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802be354
         t1 = halfword [sp + 0x18]

    loc_0x802be390: // orphan
         t3 = halfword [v1 + 0xc]
         t9 = halfword [sp + 0x1a]
         if                       // likely
         

    loc_0x802be3a0: // orphan
         t2 = halfword [v1 + 0xe]

    loc_0x802be3a4: // orphan
         beql t9, t2, 0x802be3c0  // unlikely
         t4 = halfword [v1 + 0x56]

    loc_0x802be3ac: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         v1 = 0x8851 << 16
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be3bc: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802be0bc, 0x802be298
         t4 = halfword [v1 + 0x56]

    loc_0x802be3c0: // orphan
         a1 = 0x8008 << 16
         a1 += 0x7200
         bnel t4, 0, 0x802be3e8   // likely
         t8 = , unsigned  byte [v1 + 0x2f] // s4

    loc_0x802be3d0: // orphan
         t5 = [a1 + 0]            // t9
         t7 = , unsigned  halfword [t5 + 8]
         t6 = t7 & 0xc000
         bnel t6, 0, 0x802be4ec   // fcn.802bdfb8+0x534 // likely
         ra = [sp + 0x14]         // lo

    loc_0x802be3e4: // orphan
         t8 = , unsigned  byte [v1 + 0x2f] // s4

    loc_0x802be3e8: // orphan
         beql t8, 0, 0x802be400   // unlikely
         t1 = [a1 + 0]            // t9

    loc_0x802be3f0: // orphan
         t0 = [v1 + 0x84]         // t9
         if                       // likely
         

    loc_0x802be3fc: // orphan
         t1 = [a1 + 0]            // t9

    loc_0x802be400: // orphan
         t3 = , unsigned  halfword [t1 + 8]

    loc_0x802be404: // orphan
         t9 = t3 & 0x30
         beql t9, 0, 0x802be4ec   // fcn.802bdfb8+0x534 // unlikely
         ra = [sp + 0x14]         // lo

    loc_0x802be410: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         // CODE XREF from fcn.802cbc34 @ +0xc0
         goto 0x802be4ec          // fcn.802bdfb8+0x534
         ra = [sp + 0x14]         // lo

    loc_0x802be420: // orphan
         call 0x88002640          // 0x88002640(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v1 + 0x40
         t2 = halfword [sp + 0x2c]
         v1 = 0x8851 << 16
         t6 = halfword [sp + 0x2c]
         if                       // likely
         

    loc_0x802be43c: // orphan
         v1 = [v1 - 0x2930]       // t9
         t4 = halfword [v1 + 0x56]
         if                       // unlikely
         

    loc_0x802be44c: // orphan
         a0 = halfword [v1 + 0x44]

    loc_0x802be450: // orphan
         at = 0 + 0x10
         if                       // unlikely
         at = 0 + 0x20            // k0

    loc_0x802be45c: // orphan
         bnel a0, at, 0x802be4d0  // likely
         t0 = byte [sp + 0x2f]    // a2

    loc_0x802be464: // orphan
         t5 = byte [v1 + 0x30]    // s4

    loc_0x802be468: // orphan
         t7 = v1 + t5
         call 0x88500d60          // 0x88500d60(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802be470: // orphan
         a0 = byte [t7 + 0x31]    // s4
         v1 = 0x8851 << 16
         goto 0x802be4cc
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be480: // orphan
         call 0x88500e4c          // 0x88500e4c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0 << 0x18
         call 0x88500d60          // 0x88500d60(0xff000000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x18 // t9
         v1 = 0x8851 << 16
         goto 0x802be4cc
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be4a0: // orphan
         v1 = 0x8851 << 16
         if                       // unlikely
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be4ac: // orphan
         t8 = halfword [v1 + 0x56]
         a0 = v1 + 0x74

    loc_0x802be4b4: // orphan
         bnel t8, 0, 0x802be4d0   // likely
         t0 = byte [sp + 0x2f]    // a2

    loc_0x802be4bc: // orphan
         call 0x880002f4          // 0x880002f4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         v1 = 0x8851 << 16
         v1 = [v1 - 0x2930]       // t9

    loc_0x802be4cc: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802be478, 0x802be498
         t0 = byte [sp + 0x2f]    // a2

    loc_0x802be4d0: // orphan
         t1 = byte [v1 + 0x30]    // s4
         beql t0, t1, 0x802be4ec  // fcn.802bdfb8+0x534 // unlikely
         ra = [sp + 0x14]         // lo

    loc_0x802be4dc: // orphan
         t3 = , unsigned  byte [v1 + 0x10] // s4
         t9 = t3 ^ 1
         byte [v1 + 0x10] = t9

    loc_0x802be60c: // orphan
         [sp + 0x164] = t7
         byte [sp + 0x155] = v1
         t8 = , unsigned  byte [s1 + 8] // s4
         v1 = 0x800d << 16
         // CODE XREF from fcn.802cbc34 @ +0xe4
         v1 += 0x510
         if                       // unlikely
         t3 = 0xde00 << 16

    loc_0x802be628: // orphan
         s0 = [v1 + 0]            // t9
         t4 = 0x8009 << 16
         t4 += 0x4e38

    loc_0x802be634: // orphan
         t2 = s0 + 8
         [v1 + 0] = t2
         a0 = 0 + 0xe6
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xf0
         [s0 + 4] = t4
         call 0x88002c2c          // 0x88002c2c(0xe6, 0xff, 0xf0, -1)
         [s0 + 0] = t3
         s1 = 0x8801 << 16
         s1 -= 0x133c
         call 0x8004d1fc          // 0x8004d1fc(0xe6, 0xff, 0xf0, -1)
         a0 = [s1 + 0]            // t9
         call 0x8004ca10          // 0x8004ca10(-1, 0xff, 0xf0, -1)
         a0 = [s1 + 0]            // t9
         s0 = v0                  // s4

    loc_0x802be670: // orphan
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s1 + 0]            // t9
         mtc1 v0, f6
         at = 0x4480 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x8851 << 16
         lwc1 f12, -0x2ba0, at
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f10, f8, f2
         mtc1 s0, f8
         div.s f6, f10, f12
         cvt.s.w f10, f8
         c.lt.s f4, f6
         mul.s f4, f2, f10
         bc1f 0x802be6c8
         div.s f6, f4, f12
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802be6d4
         add.s f8, f0, f6

    loc_0x802be6d4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802be6c0
         a0 = 0 + 0x38
         a1 = 0 + 0x4e

    loc_0x802be6dc: // orphan
         a2 = 0 + 0x20f
         trunc.w.s f10, f8
         a3 = 0 + 0x22
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         mfc1 t9, f10
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x20f, 0x22)
         [sp + 0x18] = t9

    loc_0x802be704: // orphan
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]       // t9

    loc_0x802be70c: // orphan
         t6 = 0x8009 << 16
         t6 += 0x4e38
         [sp + 0x80] = t6
         t7 = , unsigned  byte [s1 + 9] // s4
         v1 = 0x800d << 16
         v1 += 0x510
         if                       // unlikely
         t2 = 0xde00 << 16

    loc_0x802be72c: // orphan
         s0 = [v1 + 0]
         t3 = 0x8009 << 16
         t3 += 0x4e00
         t8 = s0 + 8
         [v1 + 0] = t8
         t6 = 0x8851 << 16
         [s0 + 4] = t3
         [s0 + 0] = t2
         t6 = [t6 - 0x2930]       // t9
         t4 = [sp + 0x138]
         a0 = 0x8851 << 16
         a1 = , unsigned  byte [t6 + 0xa] // s4
         t5 = byte [t4 + 0]       // s4
         t7 = 0x20 << 16

    loc_0x802be764: // orphan
         at = a1                  // t0
         a1 <<= 4
         a1 += at
         a1 <<= 4
         t9 = t5 << 2
         a1 += at
         t9 += t5
         t9 <<= 2
         a1 += 0x3e
         a1 <<= 0x10
         a0 += t9
         a0 = , unsigned  byte [a0 - 0x2987] // s4
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = t7
         a2 = 0 + 0x2a
         call 0x88000808          // 0x88000808(0xff, 0xffffacc6, 0x2a, -1)
         a3 = 0
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]            // t9
         t3 = 0x8009 << 16
         t3 += 0x4f50
         t8 = s0 + 8
         [a0 + 0] = t8
         t2 = 0xde00 << 16
         [s0 + 0] = t2
         [s0 + 4] = t3

    loc_0x802be7d0: // orphan
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4de0
         t4 = s0 + 8
         [a0 + 0] = t4
         t5 = 0xde00 << 16
         t7 = 0x8009 << 16
         t7 += 0x4f50
         t6 = 0 + 0x14f
         [s0 + 0] = t5

    loc_0x802be800: // orphan
         [s0 + 4] = t9
         [sp + 0x7c] = t7
         [sp + 0x10] = t6
         a1 = 0 + 0x38
         a2 = 0 + 0x70
         call 0x80006f70          // 0x80006f70(-1, 0x38, 0x70, -1)
         a3 = 0 + 0x20f
         t8 = [sp + 0x164]
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0
         if                       // likely
         t2 = sp + 0x14c

    loc_0x802be830: // orphan
         [sp + 0x78] = t2
         s2 = 0xf700 << 16

    loc_0x802be838: // orphan
         a0 = 0x800d << 16
         a0 += 0x510
         t3 = [sp + 0x78]         // s4
         s0 = [a0 + 0]
         t5 = 0xe700 << 16
         s3 = [t3 + 0]            // t9
         t4 = s0 + 8
         [a0 + 0] = t4
         [s0 + 4] = 0
         [s0 + 0] = t5
         s0 = [a0 + 0]
         t6 = 0x9a9 << 16
         t6 |= 0x9a9
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = t6

    loc_0x802be878: // orphan
         [s0 + 0] = s2
         s6 = 0
         fp = 0
         [sp + 0x170] = 0
         s4 = 0 + 0x73
         s3 += 4

    loc_0x802be890: // orphan
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]       // t9
         t7 = halfword [sp + 0x15e]
         s7 = 0
         t2 = halfword [t8 + 0x56]
         s5 = t7 - t2
         s5 += 0x3b
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802be8b4: // orphan
         if                       // likely
         t3 = [sp + 0x16c]

    loc_0x802be8bc: // orphan
         t4 = sp + 0x154
         s0 = t3 + t4
         v0 = byte [s0 + 0]

    loc_0x802be8c8: // orphan
         if                       // likely
         

    loc_0x802be8d0: // orphan
         call 0x8005caa4          // 0x8005caa4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x20            // k0
         if                       // unlikely
         

    loc_0x802be8e0: // orphan
         v0 = byte [s0 + 0]       // s4

    loc_0x802be8e4: // orphan
         s1 = 0x8851 << 16
         if                       // unlikely
         s1 = [s1 - 0x2930]       // t9

    loc_0x802be8f0: // orphan
         t5 = , unsigned  byte [s1 + 0x2c] // s4
         if                       // likely
         a0 = 0x800d << 16

    loc_0x802be8f8: // orphan
         t5 = , unsigned  byte [s1 + 0x2c] // s4
         if                       // likely
         a0 = 0x800d << 16

    loc_0x802be8fc: // orphan
         a0 += 0x510
         s0 = [a0 + 0]            // t9
         t6 = 0xe700 << 16
         t7 = 0x39cf << 16
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = 0
         [s0 + 0] = t6
         s0 = [a0 + 0]
         t7 |= 0x39cf
         fp = 0 + 1               // lo
         t8 = s0 + 8
         [a0 + 0] = t8
         [s0 + 4] = t7
         goto 0x802bea0c
         [s0 + 0] = s2

    loc_0x802be93c: // orphan
         t2 = [s1 + 0x80]         // t9
         if                       // unlikely
         v1 = 0x800d << 16

    loc_0x802be948: // orphan
         v1 += 0x510
         s0 = [v1 + 0]            // t9
         t4 = 0xe700 << 16
         t3 = s0 + 8
         [v1 + 0] = t3
         [s0 + 4] = 0
         [s0 + 0] = t4
         t5 = [sp + 0x78]         // s4
         v1 = 0x800d << 16
         v1 += 0x510
         t9 = [t5 + 0]
         t6 = , unsigned  byte [t9 + 0]
         at = , s6 < t6
         if                       // fcn.802a91c8+0x157dc // unlikely
         

    loc_0x802bea0c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802be934
         // CODE XREF from fcn.802a91c8 @ 0x802be9e0
         a0 = s5 << 0x10
         a1 = s4 << 0x10
         t9 = 0x30 << 16
         [sp + 0x10] = t9
         a1 = , signed  a1 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10 // t9
         a2 = 0 + 0x56
         call 0x88001144          // 0x88001144(-1, 0xff, 0x56, -1)
         // CODE XREF from fcn.802cbc34 @ +0xf4
         a3 = 0 + 0x41
         s5 += 0x57
         s5 <<= 0x10
         s7 += 1
         at = 0 + 6
         // CODE XREF from fcn.802cbc34 @ +0xf8
         s6 += 1
         s5 = , signed  s5 >> 0x10
         s6 &= 0xff
         if                       // likely
         s3 += 0x58

    loc_0x802bea54: // orphan
         t6 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         at = 0 + 5
         t8 = t6 + 1              // lo
         [sp + 0x170] = t8
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bea74: // orphan
         t7 = [sp + 0x16c]
         t3 = [sp + 0x78]         // s4
         t5 = halfword [sp + 0x15e]
         t6 = [sp + 0x164]
         t2 = t7 + 1              // lo
         t4 = t3 + 4
         t9 = t5 + 0x20f
         halfword [sp + 0x15e] = t9
         [sp + 0x78] = t4
         if                       // likely
         [sp + 0x16c] = t2

    loc_0x802beaa0: // orphan
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802beaa8: // orphan
         s3 = 0x800d << 16
         s3 += 0x510
         s0 = [s3 + 0]
         t7 = 0xe700 << 16

    loc_0x802beab8: // orphan
         s6 = 0x7d3f << 16
         t8 = s0 + 8
         [s3 + 0] = t8
         [s0 + 4] = 0
         [s0 + 0] = t7
         s0 = [s3 + 0]

    loc_0x802bead0: // orphan
         s6 |= 0x7d3f
         s2 = 0xf700 << 16
         t3 = s0 + 8
         [s3 + 0] = t3
         [s0 + 4] = s6
         [s0 + 0] = s2
         t4 = [sp + 0x164]
         if                       // likely
         s1 = 0 + 0x91

    loc_0x802beaf4: // orphan
         s0 = 0 + 4

    loc_0x802beaf8: // orphan
         t5 = 0x8851 << 16
         t5 = [t5 - 0x2930]       // t9
         t6 = halfword [sp + 0x15e]
         s7 = 0
         t9 = halfword [t5 + 0x56]
         t2 = s1 - t9
         s5 = t2 + t6
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10

    loc_0x802beb1c: // orphan
         a0 = s5 << 0x10
         t8 = 0x30 << 16

    loc_0x802beb24: // orphan
         [sp + 0x10] = t8

    loc_0x802beb28: // orphan
         a0 = , signed  a0 >> 0x10 // t9
         a1 = 0 + 0x73
         a2 = 0 + 1               // lo
         call 0x88001144          // 0x88001144(-1, 0x73, 0x1, -1)
         a3 = 0 + 0x149
         s5 += 0x57
         s5 <<= 0x10
         s7 += 1
         at = 0 + 5
         if                       // likely
         s5 = , signed  s5 >> 0x10

    loc_0x802beb54: // orphan
         t3 = 0x8851 << 16
         t3 = [t3 - 0x2930]       // t9
         t7 = halfword [sp + 0x15e]
         s4 = 0 + 0xb4
         t4 = halfword [t3 + 0x56]
         [sp + 0x170] = 0
         s5 = t7 - t4
         s5 += 0x3b

    loc_0x802beb74: // orphan
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10 // t9

    loc_0x802beb7c: // orphan
         a0 = s5 << 0x10
         a1 = s4 << 0x10
         // CODE XREF from fcn.802cbc34 @ +0xfc
         t5 = 0x30 << 16
         [sp + 0x10] = t5
         a1 = , signed  a1 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10 // t9
         a2 = 0 + 0x209
         call 0x88001144          // 0x88001144(-1, 0xff, 0x209, -1)
         a3 = 0 + 1               // lo
         t9 = [sp + 0x170]
         s4 += 0x42
         s4 <<= 0x10
         t2 = t9 + 1              // lo
         [sp + 0x170] = t2
         if                       // likely
         s4 = , signed  s4 >> 0x10

    loc_0x802bebbc: // orphan
         t6 = [sp + 0x16c]
         t3 = halfword [sp + 0x15e]
         t4 = [sp + 0x164]
         t8 = t6 + 1              // lo
         t7 = t3 + 0x20f
         halfword [sp + 0x15e] = t7
         if                       // likely
         // CODE XREF from fcn.802cbc34 @ +0x100
         [sp + 0x16c] = t8

    loc_0x802bebdc: // orphan
         s3 = 0x800d << 16
         s3 += 0x510
         [sp + 0x16c] = 0
         halfword [sp + 0x15e] = 0

    loc_0x802bebec: // orphan
         t5 = 0 + 0x1e0
         [sp + 0x10] = t5
         a0 = s3                  // t9
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x0, 0x0, -1)
         a3 = 0 + 0x280
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t2 = 0xe700 << 16
         a1 = 0x8851 << 16

    loc_0x802bec1c: // orphan
         t9 = s0 + 8
         [a0 + 0] = t9
         [s0 + 4] = 0
         [s0 + 0] = t2
         s0 = [a0 + 0]
         a1 -= 0x2930
         s7 = 0
         t6 = s0 + 8
         [a0 + 0] = t6
         [s0 + 4] = s6
         [s0 + 0] = s2
         s1 = [a1 + 0]            // t9
         t3 = , unsigned  byte [s1 + 0x2d] // s4
         s5 = halfword [s1 + 0x94]
         if                       // unlikely
         s3 = 0xf600 << 16

    loc_0x802bec5c: // orphan
         s0 = [a0 + 0]

    loc_0x802bec60: // orphan
         v1 = s5 & 0x3ff
         v1 <<= 0xe
         t7 = s0 + 8
         [a0 + 0] = t7
         t8 = v1 | s3             // t9
         t4 = t8 | 0x1a0          // t9
         t5 = v1 | 0x154
         [s0 + 4] = t5
         [s0 + 0] = t4
         t9 = [a1 + 0]
         s5 += 0x18
         s7 += 1
         t2 = , unsigned  byte [t9 + 0x2d] // s4
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10
         at = , unsigned  , s7 < t2 // lo
         bnel at, 0, 0x802bec60   // likely
         s0 = [a0 + 0]

    loc_0x802beca8: // orphan
         s7 = 0

    loc_0x802becac: // orphan
         s0 = [a0 + 0]
         t3 = 0xe700 << 16
         t8 = 0x9a9 << 16
         t6 = s0 + 8
         [a0 + 0] = t6
         [s0 + 4] = 0
         [s0 + 0] = t3
         s0 = [a0 + 0]
         t8 |= 0x9a9
         s3 = 0xf600 << 16
         t7 = s0 + 8
         [a0 + 0] = t7
         [s0 + 4] = t8
         [s0 + 0] = s2
         s0 = [a0 + 0]
         s1 = [a1 + 0]            // t9
         t4 = s0 + 8
         [a0 + 0] = t4
         t9 = halfword [s1 + 0x9a]
         t5 = halfword [s1 + 0x98]
         t2 = t5 + t9
         t6 = t2 - 1
         t3 = t6 & 0x3ff
         t7 = t3 << 0xe
         t8 = t7 | s3

    loc_0x802bed10: // orphan
         t4 = t8 | 0x1a0          // t9
         [s0 + 0] = t4
         t5 = [a1 + 0]            // t9
         t4 = 0x8009 << 16
         t4 += 0x4d90
         t9 = halfword [t5 + 0x98]
         t8 = 0xde00 << 16
         t2 = t9 & 0x3ff
         t6 = t2 << 0xe
         t3 = t6 | 0x154
         [s0 + 4] = t3
         s0 = [a0 + 0]
         t7 = s0 + 8
         [a0 + 0] = t7

    loc_0x802bed48: // orphan
         [s0 + 4] = t4
         [s0 + 0] = t8
         s1 = [a1 + 0]            // t9
         t5 = halfword [s1 + 0x56]
         bnel t5, 0, 0x802beef8   // likely
         a0 = sp + 0x144

    loc_0x802bed60: // orphan
         t9 = byte [s1 + 0x30]    // s4
         a0 = , unsigned  byte [sp + 0x13f]
         if                       // likely
         t6 = a0 << 2

    loc_0x802bed70: // orphan
         s6 = 0 + 0xff            // s4
         unsigned , hi            // t3 // t3
         at = 0x437f << 16
         mtc1 at, f8
         mtc1 0, f18
         t6 -= a0
         t6 <<= 3
         t6 += a0
         at = 0xbf00 << 16
         a1 = 0
         t6 <<= 2
         v0 = lo
         t2 = v0 - 0
         mtc1 t2, f4
         
         cvt.s.w f6, f4
         mtc1 v0, f4
         div.s f10, f6, f8

    loc_0x802bedb8: // orphan
         cvt.s.w f6, f4
         c.lt.s f18, f10
         
         bc1fl 0x802bede0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bede8
         at = 0x437f << 16

    loc_0x802beef4: // orphan
         a0 = sp + 0x144

    loc_0x802beef8: // orphan
         a1 = 0
         a2 = 0 + 0x8c
         call 0x8003573c          // 0x8003573c(-1, 0x0, 0x8c, -1)
         a3 = 0 + 0x64
         // CODE XREF from fcn.802cbc34 @ +0x110
         mtc1 0, f18
         s6 = 0 + 0xff            // s4

    loc_0x802bef10: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802beeec
         t0 = 0x800d << 16
         t0 += 0x510
         s0 = [t0 + 0]
         t9 = 0xfa00 << 16
         t1 = 0x8851 << 16
         t5 = s0 + 8
         [t0 + 0] = t5
         // CODE XREF from fcn.802cbc34 @ +0x114
         [s0 + 0] = t9
         t6 = , unsigned  byte [sp + 0x144]
         t8 = , unsigned  byte [sp + 0x145]
         t2 = , unsigned  byte [sp + 0x146]
         t3 = t6 << 0x18

    loc_0x802bef40: // orphan
         // CODE XREF from fcn.802cbc34 @ +0x118
         t4 = t8 << 0x10
         t5 = t3 | t4
         t6 = t2 << 8
         t7 = t5 | t6
         t8 = t7 | 0xff
         [s0 + 4] = t8
         s0 = [t0 + 0]            // t9
         t1 -= 0x2930
         t4 = [t1 + 0]            // t9
         t3 = s0 + 8
         [t0 + 0] = t3
         t9 = halfword [t4 + 0x92]
         t3 = 0x17 << 16
         t3 |= 0xc154
         t2 = t9 + 0x5f
         t5 = t2 & 0x3ff
         t6 = t5 << 0xe           // fp
         t7 = t6 | s3             // t9
         t8 = t7 | 0x1a4          // t9
         [s0 + 0] = t8
         [s0 + 4] = t3
         s1 = [t1 + 0]            // t9

    loc_0x802bef98: // orphan
         t4 = , unsigned  byte [s1 + 0x2d] // s4
         s5 = halfword [s1 + 0x96]
         if                       // unlikely
         s4 = 0 + 0xa74

    loc_0x802befa8: // orphan
         t9 = , unsigned  byte [s1 + 0x2e] // s4

    loc_0x802befac: // orphan
         a0 = sp + 0x144
         a1 = 0 + 0x46
         at = , unsigned  , s7 < t9
         if                       // fcn.802a91c8+0x15e14 // likely
         a2 = 0 + 0x46

    loc_0x802bf240: // orphan
         s0 = [t0 + 0]
         t5 = 0xde00 << 16
         t2 = s0 + 8
         [t0 + 0] = t2
         [s0 + 0] = t5
         t9 = [sp + 0x80]
         [s0 + 4] = t9
         t6 = [t1 + 0]            // t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t6 + 0x28]         // t9
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]       // t9
         t8 = 0 - 0x10
         t3 = 0 - 0x10
         v1 = [s1 + 0x28]         // t9

    loc_0x802bf27c: // orphan
         a0 = halfword [s1 + 0xa0]
         t7 = 0 + 0x400
         a2 = halfword [v1 + 0]
         a3 = halfword [v1 + 2]
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x20] = 0
         [sp + 0x18] = t7
         [sp + 0x14] = t3
         [sp + 0x10] = t8
         call 0x80044270          // 0x80044270(0xffff, 0x442f71dcfe116408, 0x0, 0x114)
         a1 = 0 + 0x57
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         call 0x88002ba0          // 0x88002ba0(0xff, 0xff, 0x0, 0x114)
         a2 = 0 + 0xff            // s4
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1338]       // t9
         a1 = 0 + 0x180
         call 0x8004d27c          // 0x8004d27c(-1, 0x180, 0xff, 0x114)
         a2 = 0 + 2
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]       // t9
         t2 = , unsigned  byte [s1 + 8] // s4
         beql t2, 0, 0x802bf368   // fcn.802a91c8+0x161a0 // unlikely
         a0 = 0 + 0xef

    loc_0x802c41b4: // orphan
         t6 = [t6 + 0x3018]       // t9
         [sp + 0x54] = ra
         [sp + 0x50] = fp
         [sp + 0x4c] = s7
         [sp + 0x48] = s6
         [sp + 0x44] = s5
         [sp + 0x40] = s4
         [sp + 0x3c] = s3
         [sp + 0x38] = s2
         [sp + 0x34] = s1
         if                       // fcn.802c46c0+0x2c8 // unlikely
         [sp + 0x30] = s0

    loc_0x802c41e4: // orphan
         v0 = 0x8851 << 16
         a0 = 0x8852 << 16
         v1 = 0x8851 << 16
         v1 -= 0x2988
         a0 += 0x2998
         v0 -= 0x2928

    loc_0x802c41fc: // orphan
         s6 = sp + 0xac

    loc_0x802c455c: // orphan
         goto 0x802c4564
         v0 = 0 + 0xfd

    loc_0x802c6bf0: // orphan
         goto 0x802c6cf0
         halfword [v1 + 0x18] = t1

    loc_0x802c6c4c: // orphan
         goto fcn.802c6cf4        // fcn.802c6cf4(-1)
         ra = [sp + 0x1c]

    loc_0x802c6cec: // orphan
         call 0x885084ec          // 0x885084ec(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 5               // arg2

    loc_0x802c6cf0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c6bf0
         ra = [sp + 0x1c]

    loc_0x802c6d78: // orphan
           // CALL XREF from fcn.819af8b8 @ +0x400
         mtc1 at, f0
         goto 0x802c6d88          // fcn.82bea63c-0x29238b4
         add.s f10, f0, f8

    loc_0x802c6d88: // orphan
         // CODE XREF from fcn.802c6d70 @ 0x802c6d74
         at = 0x4300 << 16
         mtc1 at, f18
         cvt.s.w f8, f6
         at = 0xbf00 << 16
         trunc.w.s f4, f10
         div.s f12, f8, f14
         mfc1 t0, f4
         
         halfword [v1 + 0x14] = t0
         c.lt.s f12, f18
         sub.s f10, f18, f12
         bc1fl 0x802c6dd0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c6dd8          // fcn.802af284+0x17b54
         add.s f4, f0, f10

    loc_0x802c7508: // orphan
         t7 <<= 2
         t7 -= at                 // s2
         t7 <<= 1                 // hi
         mtc1 t7, f4
         at = 0xbf00 << 16
         cvt.s.w f6, f4
         div.s f2, f6, f14
         mtc1 0, f6
         c.lt.s f2, f16
         sub.s f8, f16, f2
         bc1fl 0x802c754c

    loc_0x802c7534: // orphan
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c7554
         add.s f10, f0, f8

    loc_0x802c7554: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7540
         at = 0x41c0 << 16
         mtc1 at, f18
         cvt.s.w f8, f6
         at = 0xbf00 << 16

    loc_0x802c763c: // orphan
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c7658          // fcn.802af284+0x183d4
         add.s f10, f0, f8

    loc_0x802c77bc: // orphan
         t2 = t1 - 1
         halfword [s4 + 0x18] = t2
         v0 = halfword [s4 + 0x18]
         at = 0x4300 << 16

    loc_0x802c77cc: // orphan
         mtc1 at, f16
         t3 = v0 << 2
         t3 -= v0
         t3 <<= 5
         mtc1 t3, f4
         at = 0xbf00 << 16
         cvt.s.w f6, f4
         div.s f2, f6, f14
         c.lt.s f2, f16
         sub.s f8, f16, f2
         bc1fl 0x802c7810
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c7818
         at = 0x4280 << 16

    loc_0x802c7818: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7804
         mtc1 at, f18
         at = ~v0
         t6 = at << 6
         mtc1 t6, f6
         add.s f10, f0, f8
         at = 0xbf00 << 16
         cvt.s.w f8, f6
         trunc.w.s f4, f10
         div.s f12, f8, f14

    loc_0x802c7990: // orphan
         
         call 0x8850aaa8          // 0x8850aaa8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x802c79cc
         

    loc_0x802c79cc: // orphan
         // CODE XREF from fcn.802ad1c8 @ 0x802c791c
         // CODE XREF from fcn.82bea63c @ 0x802c799c
         call 0x88508e34          // 0x88508e34(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8850998c          // 0x8850998c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]         // t3
         sp += 0x18

    loc_0x802c7a80: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x802c7a8c: // orphan
         mul.s f12, f6, f14
         at = 0xbf00 << 16
         c.lt.s f16, f12
         
         bc1fl 0x802c7ab0
         mtc1 at, f0
         goto 0x802c7ab4
         mov.s f0, f18

    loc_0x802c7ab4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7aa4
         t4 = halfword [sp + 0x6a]
         t6 = halfword [sp + 0x6e]
         add.s f4, f0, f12
         mtc1 t4, f10
         at = 0xbf00 << 16
         cvt.s.w f6, f10
         mtc1 t6, f10
         trunc.w.s f8, f4
         mul.s f2, f6, f14
         mfc1 t3, f8
         cvt.s.w f6, f10
         halfword [sp + 0x54] = t3
         c.lt.s f16, f2
         mul.s f12, f6, f14
         bc1fl 0x802c7b00
         mtc1 at, f0
         goto 0x802c7b04
         mov.s f0, f18

    loc_0x802c7afc: // orphan
         mtc1 at, f0
         

    loc_0x802c7b04: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7af4
         add.s f4, f0, f2
         at = 0xbf00 << 16
         c.lt.s f16, f12
         trunc.w.s f8, f4
         mfc1 t1, f8
         
         t1 <<= 0x10
         bc1f 0x802c7b30
         t1 = , signed  t1 >> 0x10
         goto 0x802c7b38
         mov.s f0, f18

    loc_0x802c7b38: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7b28
         t9 = halfword [sp + 0x72]
         add.s f4, f0, f12
         at = 0xbf00 << 16
         mtc1 t9, f10
         trunc.w.s f8, f4
         cvt.s.w f6, f10
         mfc1 t8, f8
         
         halfword [sp + 0x48] = t8
         mul.s f2, f6, f14
         c.lt.s f16, f2
         
         bc1fl 0x802c7b7c
         mtc1 at, f0
         goto 0x802c7b80
         mov.s f0, f18

    loc_0x802c7b80: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c7b70
         at = 0x4480 << 16
         mtc1 at, f10
         add.s f4, f0, f2
         at = 0xbf00 << 16
         div.s f12, f10, f14
         trunc.w.s f8, f4
         mfc1 t0, f8
         
         t0 <<= 0x10
         t0 = , signed  t0 >> 0x10
         c.lt.s f16, f12
         
         bc1fl 0x802c7bc4
         mtc1 at, f0
         goto 0x802c7bc8          // fcn.802af284+0x18944
         mov.s f0, f18

    loc_0x802c8080: // orphan
         t4 = 0 + 1               // lo
         if                       // likely
         t5 = 0 + 2

    loc_0x802c808c: // orphan
         mtc1 v1, f6
         s3 = v1 & 0xffff
         if                       // likely
         cvt.s.w f10, f6

    loc_0x802c809c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f16
         
         add.s f10, f10, f16

    loc_0x802c80ac: // orphan
         mul.s f18, f10, f24
         mtc1 s3, f8
         at = 0x4f80 << 16
         c.lt.s f30, f18
         
         bc1fl 0x802c80d4
         mov.s f20, f28
         goto 0x802c80d4
         mov.s f20, f26

    loc_0x802c80d4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802c80c8
         s6 = s3                  // t9
         if                       // likely
         cvt.s.w f4, f8

    loc_0x802c80f4: // orphan
         v0 = [sp + 0xf8]
         add.s f16, f20, f22
         t6 = 0 + 2
         a1 = , unsigned  byte [v0 + 4] // s4
         a2 = , unsigned  byte [v0 + 5] // s4

    loc_0x802c8108: // orphan
         trunc.w.s f10, f16
         a3 = , unsigned  halfword [v0 + 0]
         [sp + 0x30] = 0
         [sp + 0x2c] = 0
         mfc1 s1, f10
         [sp + 0x28] = 0
         [sp + 0x24] = 0
         s1 <<= 0x10
         s1 = , signed  s1 >> 0x10
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = 0
         [sp + 0x14] = t4
         [sp + 0x10] = s3
         call 0x800459ac          // 0x800459ac(-1, 0x442f71dcfe116408, 0x8, 0xffff)
         a0 = [sp + 0xf0]
         if                       // fcn.802c8170+0x30 // unlikely
         a0 = [sp + 0xf4]

    loc_0x802c8150: // orphan
         t8 = , unsigned  byte [s7 + 5]
         a3 = , unsigned  byte [s7 + 4]
         t1 = 0 + 1               // lo
         [sp + 0x10] = t8
         t9 = , unsigned  halfword [s7 + 0]
         t2 = 0 + 2
         t3 = 0 + 2
         [sp + 0x28] = t3

    loc_0x802c835c: // orphan
         [sp + 0x18] = t6
         a0 = v0                  // s4
         a1 = 0
         a2 = halfword [sp + 0x32]
         a3 = halfword [sp + 0x36]
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x8850b2dc          // 0x8850b2dc(0xff, 0x0, 0x0, 0x7dbd)
         swc1 f4, 0x10, sp
         ra = [sp + 0x2c]
         sp += 0x30
         ret
         

    loc_0x802c950c: // orphan
         t9 = v0 + 8
         [s0 + 0] = t9
         [v0 + 0] = t5
         a3 = , unsigned  halfword [s1 + 0x14]
         a3 &= 0xff               // arg4 // s4
         t7 = a3 << 0x18          // arg4
         t6 = a3 << 0x10          // arg4
         t8 = t7 | t6
         t9 = a3 << 8             // arg4
         // CODE XREF from fcn.82c7e6c8 @ +0xae4
         t5 = t8 | t9

    loc_0x802c9534: // orphan
         t7 = t5 | 0xff           // t9
         [v0 + 4] = t7
         [sp + 0x34] = t4
         a2 = [s1 + 0x10]         // t9
         a1 = halfword [s1 + 6]
         call 0x8850b914          // 0x8850b914(-1, 0xffff, -1, -1)
         a0 = halfword [s1 + 4]
         t6 = 0x8851 << 16
         t6 = [t6 - 0x2990]       // t9
         at = 0 + 2
         t9 = 0xe700 << 16
         beql t6, at, 0x802c98bc  // fcn.802c97fc+0xc0 // unlikely
         t8 = 0 + 0x1e0

    loc_0x802c9568: // orphan
         v0 = [s0 + 0]
         t7 = 0xe200 << 16
         t6 = 0x50 << 16
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = t9
         v0 = [s0 + 0]
         t6 |= 0x4240
         t7 |= 0x1c
         t5 = v0 + 8
         [s0 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = t7
         t8 = , unsigned  halfword [s1 + 0xe]
         v0 = 0x8851 << 16
         a0 = 0 + 0x146
         t9 = t8 & 8              // a2
         if                       // fcn.802c9648 // unlikely
         t8 = 0xfb00 << 16

    loc_0x802c95b8: // orphan
         v0 = [v0 - 0x298c]       // t9
         v1 = , unsigned  halfword [s1 + 0x16]
         at = 0 + 0x3f
         t5 = v0 & 0x3f
         unsigned , hi
         t7 = v0 & 0x40
         a1 = 0 + 1               // lo
         a2 = lo
         
         
         divu 0, a2, at
         a2 = lo
         a2 &= 0xff
         if                       // unlikely
         at = 0 - 0x100

    loc_0x802c95f4: // orphan
         a2 = v1 - a2
         a2 &= 0xff

    loc_0x802c95fc: // orphan
         v0 = [s0 + 0]
         t9 = a2 & 0xff
         t5 = t9 | at
         t6 = v0 + 8
         [s0 + 0] = t6
         [v0 + 4] = t5
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 0] = t8
         t7 = halfword [s1 + 8]
         t6 = halfword [s1 + 0xa]
         t8 = halfword [s1 + 0xc]
         a0 = v0
         a1 = halfword [s1 + 4]
         a2 = halfword [s1 + 6]
         a3 = [s1 + 0x10]         // t9
         [sp + 0x10] = t7
         [sp + 0x14] = t6
         call 0x8850afdc          // fcn.802c9648 // 0x8850afdc(0xffffff17, 0xffff, 0xffff, -1)
         [sp + 0x18] = t8

    loc_0x802c9848: // orphan
         if                       // unlikely
         a3 = 0 + 0x23            // arg4

    loc_0x802c9954: // orphan
         t0 = halfword [v0 + 0x18]
         if                       // likely
         

    loc_0x802c9960: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802c99e4: // orphan
         bc1f 0x802c9a80
         
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802c9a80: // orphan
         ret                      // ra
         v0 = v1

    loc_0x802c9e48: // orphan
         lwl s0, 0x6cc, v0        // t9
         lwl s0, 0x70c, v0        // t9
         lwl s0, 0x72c, v0        // t9

    loc_0x802c9eb4: // orphan
         lwl s0, 0x492c, v0       // t9
         lwl s0, 0x492c, v0       // t9
         lwl s0, 0x4954, v0       // t9
         lwl s0, 0x495c, v0       // t9

    loc_0x802c9ec4: // orphan
         lwl s0, 0x4968, v0       // t9
         lwl s0, 0x4974, v0       // t9
         lwl s0, 0x4980, v0       // t9
         lwl s0, 0x498c, v0       // t9
         lwl s0, 0x505c, v0       // t9
         lwl s0, 0x5070, v0       // t9
         lwl s0, 0x50f0, v0       // t9
         lwl s0, 0x5190, v0       // t9
         lwl s0, 0x51e4, v0       // t9
         lwl s0, 0x5248, v0       // t9
         lwl s0, 0x5254, v0       // t9

    loc_0x802cb370: // orphan
         if                       // fcn.802cb014+0x1b610 // unlikely
         if                       // unlikely

    loc_0x802cb37c: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb3a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb3b4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb3c4: // orphan
         if                       // unlikely
         

    loc_0x802cb3cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb3dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb3e8: // orphan
         
         
         if                       // fcn.802d9024+0xe740 // unlikely
         if                       // fcn.802d9024+0xe754 // unlikely

    loc_0x802cb3fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb40c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb418: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb428: // orphan
         
         // CODE XREF from fcn.8258e3cc @ +0x20c
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb438: // orphan
         if                       // unlikely
         

    loc_0x802cb440: // orphan
         
         if                       // fcn.802e8030+0x48 // unlikely
         if                       // fcn.802d9024+0xf0b8 // unlikely

    loc_0x802cb450: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb4a4: // orphan
         if                       // fcn.802e8414+0x254 // unlikely
         if                       // fcn.802e8414+0x268 // unlikely

    loc_0x802cb4b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb4dc: // orphan
         
         
         
         
         
         
         
         if                       // fcn.802e9030+0x8c // unlikely
         if                       // unlikely

    loc_0x802cb504: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cb59c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802ea5d0+0x15c // unlikely
         if                       // fcn.802ea5d0+0x170 // unlikely

    loc_0x802cc2d0: // orphan
         [at + 0x18b4] = v0
         mtc1 v0, f4
         at = 0x4080 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f16
         t7 = 0 + 1               // lo
         at = 0x4f00 << 16
         mul.s f10, f6, f8
         div.s f18, f10, f16
         cfc1 t6, 31
         ctc1 t7, 31
         
         cvt.w.s f4, f18
         cfc1 t7, 31
         
         t7 &= 0x78
         beql t7, 0, 0x802cc368   // likely
         mfc1 t7, f4

    loc_0x802cc320: // orphan
         mtc1 at, f4
         t7 = 0 + 1               // lo
         sub.s f4, f18, f4
         ctc1 t7, 31
         
         cvt.w.s f4, f4
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // unlikely
         

    loc_0x802cc34c: // orphan
         mfc1 t7, f4
         at = 0x8000 << 16
         goto 0x802cc374
         t7 |= at

    loc_0x802cc35c: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cc344, 0x802cc36c
         goto 0x802cc374
         t7 = 0 - 1               // s2

    loc_0x802cc368: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc318
         
         if                       // unlikely
         

    loc_0x802cc374: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cc354, 0x802cc35c
         ctc1 t6, 31
         at = 0x8860 << 16
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.82b9a014 @ +0x954
         byte [at + 0x18b8] = t7
         mtc1 v0, f6
         at = 0x3f00 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x4000 << 16
         mtc1 at, f18
         t0 = 0 + 1               // lo
         at = 0x4f00 << 16
         mul.s f16, f8, f10
         div.s f4, f16, f18
         cfc1 t9, 31
         ctc1 t0, 31
         
         cvt.w.s f6, f4
         cfc1 t0, 31
         
         t0 &= 0x78
         beql t0, 0, 0x802cc418   // likely
         mfc1 t0, f6

    loc_0x802cc3d0: // orphan
         mtc1 at, f6
         t0 = 0 + 1               // lo
         sub.s f6, f4, f6
         ctc1 t0, 31
         
         cvt.w.s f6, f6
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // unlikely
         

    loc_0x802cc3fc: // orphan
         mfc1 t0, f6
         at = 0x8000 << 16
         goto 0x802cc424
         t0 |= at

    loc_0x802cc40c: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cc3f4, 0x802cc41c
         goto 0x802cc424
         t0 = 0 - 1               // s2

    loc_0x802cc418: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc3c8
         
         if                       // unlikely
         

    loc_0x802cc424: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cc404, 0x802cc40c
         ra = [sp + 0x14]
         ctc1 t9, 31
         at = 0x8860 << 16
         byte [at + 0x18b9] = t0
         // CODE XREF from fcn.82a0ec90 @ +0x88c
         ret
         sp += 0x18

    loc_0x802cc590: // orphan
         
         bc1fl 0x802cc5b8
         mtc1 at, f18
         at = 0x3f00 << 16
         mtc1 at, f16
         at = 0xbf00 << 16
         mtc1 at, f18
         goto 0x802cc5c4
         mov.s f2, f16

    loc_0x802cc5c4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc5ac
         add.s f4, f2, f0
         lwc1 f12, 4, v0
         v1 = 0x8860 << 16
         v1 += 0x1914
         trunc.w.s f6, f4
         c.lt.s f14, f12
         mfc1 t7, f6
         bc1f 0x802cc5f0
         byte [v1 + 0] = t7
         goto 0x802cc5f4
         mov.s f2, f16

    loc_0x802cc5f4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc5e8
         add.s f8, f2, f12
         lwc1 f0, 8, v0
         trunc.w.s f10, f8
         c.lt.s f14, f0
         mfc1 t9, f10
         bc1f 0x802cc618
         byte [v1 + 1] = t9
         goto 0x802cc61c
         mov.s f2, f16

    loc_0x802cc61c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc610
         add.s f4, f2, f0
         v0 = 0x8860 << 16
         v0 += 0x18e0
         lwc1 f12
         trunc.w.s f6, f4
         c.lt.s f14, f12
         mfc1 t1, f6
         bc1f 0x802cc648
         byte [v1 + 2] = t1
         goto 0x802cc64c
         mov.s f2, f16

    loc_0x802cc64c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc640
         add.s f8, f2, f12
         lwc1 f0, 4, v0
         v1 = 0x8860 << 16
         v1 += 0x1918
         trunc.w.s f10, f8
         c.lt.s f14, f0
         mfc1 t3, f10
         bc1f 0x802cc678
         byte [v1 + 0] = t3
         goto 0x802cc67c
         mov.s f2, f16

    loc_0x802cc67c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc670
         add.s f4, f2, f0
         lwc1 f12, 8, v0
         trunc.w.s f6, f4
         c.lt.s f14, f12
         mfc1 t5, f6
         bc1f 0x802cc6a0
         byte [v1 + 1] = t5
         goto 0x802cc6a4
         mov.s f2, f16

    loc_0x802cc6a4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cc698
         add.s f8, f2, f12
         trunc.w.s f10, f8
         mfc1 t7, f10
         ret                      // ra
         byte [v1 + 2] = t7

    loc_0x802cc7cc: // orphan
         cvt.s.w f0, f8

    loc_0x802cc7d0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f0, f0, f10

    loc_0x802cc7e0: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802cc7c8
         lwc1 f18
         lwc1 f10, 4, v1
         lwc1 f16
         mul.s f4, f0, f18
         lwc1 f8, 4, v0
         mul.s f18, f0, f10
         add.s f6, f16, f4
         lwc1 f4, 8, v0
         add.s f16, f8, f18
         swc1 f6
         lwc1 f6, 8, v1
         lwc1 f18
         swc1 f16, 4, v0
         mul.s f10, f0, f6
         lwc1 f16
         mul.s f6, f0, f16
         add.s f8, f4, f10
         lwc1 f10, 4, a0
         add.s f4, f18, f6
         swc1 f8, 8, v0
         lwc1 f8, 4, a2
         lwc1 f6, 8, a0
         swc1 f4
         mul.s f16, f0, f8
         lwc1 f4, 8, a2
         mul.s f8, f0, f4
         add.s f18, f10, f16
         add.s f10, f6, f8
         swc1 f18, 4, a0
         swc1 f10, 8, a0
         ret                      // ra
         

    loc_0x802cc878: // orphan
         if                       // unlikely
         byte [at + 0x18c0] = t6

    loc_0x802cc880: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 4

    loc_0x802cc88c: // orphan
         if                       // unlikely
         at = 0 + 7

    loc_0x802cc894: // orphan
         if                       // fcn.802cc8cc+0xc // likely
         // CODE XREFS from fcn.82bea63c @ 0x802cc878, 0x802cc884, 0x802cc88c
         v0 = 0x8860 << 16

    loc_0x802cc898: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cc878, 0x802cc884, 0x802cc88c
         v0 = 0x8860 << 16

    loc_0x802cc89c: // orphan
         v0 += 0x18a3
         byte [v0 + 0] = 0
         t7 = byte [v0 + 0]
         v1 = 0x8860 << 16
         v1 += 0x18a2
         byte [v1 + 0] = t7

    loc_0x802cc8b4: // orphan
         t8 = byte [v1 + 0]
         a0 = 0x8860 << 16
         a0 += 0x18a1
         byte [a0 + 0] = t8
         t9 = byte [a0 + 0]
         at = 0x8860 << 16

    loc_0x802cda9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cdaa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cdab4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cdac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cdacc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cdbe8: // orphan
         if                       // fcn.802ac294+0x26098 // unlikely
         if                       // fcn.802d21fc+0x144 // unlikely

    loc_0x802cdbf4: // orphan
         if                       // fcn.802d21fc+0x20c // unlikely
         if                       // fcn.802d21fc+0x240 // unlikely

    loc_0x802cdc00: // orphan
         if                       // fcn.802d21fc+0x2c8 // unlikely
         if                       // fcn.802d21fc+0x2fc // unlikely

    loc_0x802cdc0c: // orphan
         if                       // fcn.802d21fc+0x2f4 // unlikely
         if                       // unlikely

    loc_0x802cde84: // orphan
         t7 = , unsigned  byte [a0 + 8] // arg1 // s4

    loc_0x802cde88: // orphan
         t8 = , unsigned  byte [a0 + 9] // arg1 // s4
         t6 = halfword [a0 + 4]
         t3 = , unsigned  byte [a0 + 0xa] // arg1 // s4
         t9 = t7 + t8             // s4
         v1 = halfword [a0 + 0]
         t2 = , unsigned  byte [a0 + 0xb] // arg1 // s4
         halfword [a0 + 2] = t6   // arg1
         goto 0x802ce054
         t1 = t9 + t3

    loc_0x802ce054: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cdea4
         // CODE XREF from fcn.802ac294 @ 0x802cdfb0
         t8 = v1 + 1
         halfword [a0 + 0] = t8   // arg1
         t9 = halfword [a0 + 0]
         t6 = t1 + t2
         if                       // likely
         

    loc_0x802ce06c: // orphan
         halfword [a0 + 0] = 0    // arg1

    loc_0x802ce070: // orphan
         ret                      // ra
         v0 = halfword [a0 + 2]

    loc_0x802ce270: // orphan
         byte [t2 + 0x14] = t9
         v1 = [s0 + 0]
         t7 = 0 + 9
         t3 = halfword [v1 + 0xc]
         t4 = t3 + 0x65
         halfword [v1 + 0x10] = t4
         v1 = [s0 + 0]
         t5 = halfword [v1 + 0xe]
         t6 = t5 + 0x3c
         halfword [v1 + 0x12] = t6
         t8 = [s0 + 0]
         byte [t8 + 0x14] = t7
         at = 0 + 3
         bnel a0, at, 0x802ce2f0  // likely
         t4 = [s0 + 0]

    loc_0x802ce2c4: // orphan
         t7 = 0 + 5
         [t4 + 0x7c] = t3
         t6 = [s0 + 0]
         t9 = 0 + 0x92
         [t6 + 0x80] = t5
         t8 = [s0 + 0]
         [t8 + 0x84] = t7
         t2 = [s0 + 0]
         goto 0x802ce328
         [t2 + 0x88] = t9

    loc_0x802ce328: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802ce2e4
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t5 = v0 - 1              // t3
         at = , unsigned  , t5 < 5
         if                       // likely
         t5 <<= 2

    loc_0x802ceb68: // orphan
         ra = [sp + 0x14]
         call v0                  // s4 // s4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x802cef70
         ra = [sp + 0x14]

    loc_0x802cec58: // orphan
         ra = [sp + 0x14]
         call 0x88700b58          // 0x88700b58(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x802cef70
         ra = [sp + 0x14]

    loc_0x802ceeb0: // orphan
         bgezl t7, 0x802cef48     // likely
         t6 = halfword [sp + 0x1c]

    loc_0x802ceeb8: // orphan
         t8 = halfword [v0 + 0x58]
         at = , t8 < 0xd
         beql at, 0, 0x802ceee0   // likely
         t0 = , unsigned  byte [v0 + 0x5e] // s4

    loc_0x802ceec8: // orphan
         t9 = , unsigned  byte [v0 + 0x5e] // s4
         halfword [v0 + 0x5a] = t9
         v0 = 0x8870 << 16
         goto 0x802cef44
         v0 = [v0 + 0x1e00]       // t9

    loc_0x802ceee0: // orphan
         t2 = t0 - 1
         halfword [v0 + 0x5a] = t2
         v0 = 0x8870 << 16
         goto 0x802cef44
         v0 = [v0 + 0x1e00]       // t9

    loc_0x802cef10: // orphan
         v1 = halfword [v0 + 0x5a]
         at = , v1 < a0           // lo
         bnel at, 0, 0x802cef48   // likely
         t6 = halfword [sp + 0x1c]

    loc_0x802cef20: // orphan
         t4 = halfword [v0 + 0x58]

    loc_0x802cef24: // orphan
         at = , t4 < 0xd
         if                       // likely
         at = , a0 < v1

    loc_0x802cef30: // orphan
         beql at, 0, 0x802cef48   // unlikely
         t6 = halfword [sp + 0x1c]

    loc_0x802cef38: // orphan
         halfword [v0 + 0x5a] = 0
         v0 = 0x8870 << 16
         v0 = [v0 + 0x1e00]       // t9

    loc_0x802cef44: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802ceed4, 0x802ceeec
         t6 = halfword [sp + 0x1c]

    loc_0x802cef48: // orphan
         t7 = halfword [v0 + 0x58]
         t8 = halfword [sp + 0x1e]
         if                       // likely
         

    loc_0x802cef58: // orphan
         t9 = halfword [v0 + 0x5a]
         beql t8, t9, 0x802cef70  // unlikely
         ra = [sp + 0x14]

    loc_0x802cef64: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 0x78]         // t9
         ra = [sp + 0x14]

    loc_0x802cef70: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802ceb74, 0x802cec64
         // CODE XREFS from fcn.802ac294 @ 0x802ced44, 0x802ced9c
         sp += 0x20
         ret                      // ra
         

    loc_0x802cef7c: // orphan
         [sp + 0] = a0

    loc_0x802cef80: // orphan
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         at = 0 + 0xd
         div 0, a0, at            // arg1
         t6 = 0x8870 << 16
         t6 = [t6 + 0x1e00]       // t9
         t8 = a0 << 2             // arg1
         t8 -= a0                 // arg1
         t7 = halfword [t6 + 0xc]
         t8 <<= 2
         t0 = lo
         t1 = t0 << 2
         t8 -= a0                 // arg1
         t8 <<= 1
         t1 -= t0
         t1 <<= 2
         t9 = t7 + t8
         v0 = t9 + t1
         v0 += 0x17
         v0 <<= 0x10
         ret                      // ra
         v0 = , signed  v0 >> 0x10

    loc_0x802ceffc: // orphan
         t6 = halfword [v1 + 0x5c]
         t7 = halfword [v1 + 0xe]
         t9 <<= 2
         t9 -= a0                 // arg1
         t9 <<= 1
         t1 = lo
         t8 = t6 + t7
         t0 = t8 + t9
         t2 = t1 << 2
         v0 = t0 + t2
         v0 <<= 0x10
         ret                      // ra
         v0 = , signed  v0 >> 0x10

    loc_0x802cf07c: // orphan
         [s7 + 0] = t6
         s6 = 0x8870 << 16
         t8 += 0x4de0
         t7 = 0xde00 << 16
         s6 += 0x1e00
         [v1 + 0] = t7
         [v1 + 4] = t8
         s2 = [s6 + 0]            // t9
         at = 0xf600 << 16
         t0 = 1 << 16
         s3 = halfword [s2 + 0xc]
         s1 = halfword [s2 + 0xe]
         t0 |= 1
         s3 += 0xb
         s3 <<= 0x10
         s3 = , signed  s3 >> 0x10
         a2 = s3 + 0x167          // arg3
         a2 &= 0x3ff              // arg3
         s1 += 0x21
         s1 <<= 0x10
         a2 <<= 0xe               // arg3
         a3 = s3 & 0x3ff          // arg4
         s1 = , signed  s1 >> 0x10

    loc_0x802cf0d8: // orphan
         a3 <<= 0xe               // arg4
         a2 |= at                 // arg3
         s4 = 0
         s0 = 0
         t2 = 0xe700 << 16
         t1 = 0 - 1               // s2
         a1 = 0xf700 << 16

    loc_0x802cf0f4: // orphan
         v1 = [s7 + 0]
         a0 = s1 & 0x3ff          // arg1
         a0 <<= 2                 // arg1
         t9 = v1 + 8
         [s7 + 0] = t9
         [v1 + 4] = 0
         if                       // likely
         [v1 + 0] = t2

    loc_0x802cf114: // orphan
         v1 = [s7 + 0]
         t3 = v1 + 8
         [s7 + 0] = t3
         [v1 + 4] = t0
         goto 0x802cf140
         [v1 + 0] = a1

    loc_0x802cf12c: // orphan
         v1 = [s7 + 0]
         t4 = v1 + 8
         [s7 + 0] = t4
         [v1 + 4] = t1
         [v1 + 0] = a1

    loc_0x802cf140: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cf124
         v1 = [s7 + 0]
         s4 += 1
         s4 &= 0xff
         s1 += 1
         t5 = v1 + 8
         s1 <<= 0x10

    loc_0x802cf158: // orphan
         at = , s4 < 2
         [s7 + 0] = t5
         t6 = a2 | a0             // arg3 // t9
         t7 = a3 | a0             // arg4 // s2
         s1 = , signed  s1 >> 0x10
         s0 = s4
         [v1 + 4] = t7
         if                       // unlikely
         [v1 + 0] = t6

    loc_0x802cf17c: // orphan
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         t8 = [s6 + 0]            // t9
         at = 0 + 2
         v0 = [t8 + 0]            // t9
         if                       // unlikely
         at = 0 + 3

    loc_0x802cf1a4: // orphan
         if                       // unlikely
         a1 = 0 + 2

    loc_0x802cf1ac: // orphan
         goto 0x802cf1bc
         a1 = 0

    loc_0x802cf1b4: // orphan
         goto 0x802cf1bc
         a1 = 0 + 1               // lo

    loc_0x802cf1bc: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cf1ac, 0x802cf1b4
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x24
         s2 = [s6 + 0]            // t9
         a2 = 0
         a3 = v0                  // s4
         a0 = halfword [s2 + 0xc]
         a1 = halfword [s2 + 0xe]
         a0 += 0xb
         call 0x80049064          // 0x80049064(0x1000a, 0xffff, 0x0, 0xff)
         a1 += 0xb
         a0 = 0 + 0x24
         call 0x8004c874          // 0x8004c874(0x24, 0x1000a, 0x0, 0xff)
         a1 = 0 + 3
         s2 = [s6 + 0]            // t9
         a2 = 0 + 1               // lo
         a3 = v0                  // s4
         a0 = halfword [s2 + 0xc]
         t9 = halfword [s2 + 0x64]
         t3 = halfword [s2 + 0xe]
         a0 += 0x4b
         call 0x80049064          // 0x80049064(0x1004a, 0x3, 0x1, 0xff)
         a1 = t9 + t3
         a0 = 0 + 0x24
         call 0x8004c874          // 0x8004c874(0x24, 0x1fffe, 0x1, 0xff)
         a1 = 0 + 4
         s2 = [s6 + 0]            // t9
         a2 = 0 + 1               // lo
         a3 = v0                  // s4
         a0 = halfword [s2 + 0xc]
         t4 = halfword [s2 + 0x64]

    loc_0x802cf234: // orphan
         t5 = halfword [s2 + 0xe]
         a0 += 0xb9
         call 0x80049064          // 0x80049064(0x1000000b8, 0x442f71dcfe116408, 0x8, -1)
         a1 = t4 + t5
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0x24
         call 0x8004c874          // 0x8004c874(0x24, 0xff, 0x0, 0xff)
         a1 = 0 + 5
         s2 = [s6 + 0]            // t9
         a2 = 0 + 2
         a3 = v0                  // s4
         a0 = halfword [s2 + 0xc]
         t6 = halfword [s2 + 0x64]
         t7 = halfword [s2 + 0xe]
         a0 += 0x166
         call 0x80049064          // 0x80049064(0x10165, 0x5, 0x2, 0xff)
         a1 = t6 + t7
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0xff)
         a3 = 0 + 0xff            // s4
         t8 = [s6 + 0]            // t9
         s5 = 0
         t9 = , unsigned  byte [t8 + 0x5e] // s4
         if                       // unlikely
         v0 = 0

    loc_0x802cf2b0: // orphan
         s2 = v0 << 0x10

    loc_0x802cf2b4: // orphan
         s3 = v0 << 4
         s3 -= v0
         s2 = , signed  s2 >> 0x10 // t9
         s4 = 0
         s0 = 0

    loc_0x802cf2c8: // orphan
         a0 = s0 << 0x10
         call 0x8870118c          // 0x8870118c(0x1040000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // s0
         s1 = v0 << 0x10
         a0 = s2 << 0x10
         a0 = , signed  a0 >> 0x10 // t9
         call 0x887011e8          // 0x887011e8(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = , signed  s1 >> 0x10 // s4
         t3 = [s6 + 0]            // t9
         t5 = s3 << 1
         t7 = s0 << 1
         t4 = [t3 + 0x60]
         a0 = s1                  // s4
         a1 = v0                  // s4
         t6 = t4 + t5
         t8 = t6 + t7
         call 0x88700020          // 0x88700020(0xff, 0xff, 0x8, -1)
         a2 = , unsigned  halfword [t8 + 0]
         s4 += 1
         s4 &= 0xff
         at = , s4 < 0xf          // lo
         if                       // likely
         s0 = s4

    loc_0x802cf324: // orphan
         t9 = [s6 + 0]
         s5 += 1
         s5 &= 0xff
         t3 = , unsigned  byte [t9 + 0x5e] // s4
         v0 = s5
         at = , s5 < t3           // lo
         bnel at, 0, 0x802cf2b4   // likely
         s2 = v0 << 0x10

    loc_0x802cf344: // orphan
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         s2 = [s6 + 0]            // t9
         s4 = 0
         t4 = , unsigned  byte [s2 + 0x14] // s4
         s1 = halfword [s2 + 0x12]
         s5 = s2 + 0x18
         if                       // unlikely
         s3 = halfword [s2 + 0x10]

    loc_0x802cf36c: // orphan
         v0 = [s2 + 0]            // t9
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x802cf37c: // orphan
         bnel v0, at, 0x802cf3ac  // likely
         a2 = , unsigned  halfword [s5 + 0]

    loc_0x802cf384: // orphan
         if                       // unlikely
         s0 = s4

    loc_0x802cf38c: // orphan
         t5 = s0 & 0xf
         bnel t5, 0, 0x802cf3ac   // likely
         a2 = , unsigned  halfword [s5 + 0]

    loc_0x802cf398: // orphan
         s1 += 0x1a
         s1 <<= 0x10
         s3 = halfword [s2 + 0x10]
         s1 = , signed  s1 >> 0x10

    loc_0x802cf3a8: // orphan
         a2 = , unsigned  halfword [s5 + 0]

    loc_0x802cf3ac: // orphan
         a1 = s1
         a0 = s3                  // t9

    loc_0x802cf3b4: // orphan
         if                       // likely
         

    loc_0x802cf3bc: // orphan
         a0 = s3                  // t9
         call 0x88700020          // 0x88700020(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 0xb7
         goto 0x802cf3dc
         s2 = [s6 + 0]            // t9

    loc_0x802cf3d0: // orphan
         call 0x88700020          // 0x88700020(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         s2 = [s6 + 0]            // t9

    loc_0x802cf3dc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cf3c8
         s4 += 1
         s4 &= 0xff
         t6 = , unsigned  byte [s2 + 0x14]
         s3 += 0x14
         s3 <<= 0x10
         at = , s4 < t6
         s3 = , signed  s3 >> 0x10
         if                       // unlikely
         s5 += 2

    loc_0x802cf400: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = [s7 + 0]            // t9
         t9 = 0x8009 << 16
         t9 += 0x4e38
         t7 = v1 + 8
         [s7 + 0] = t7
         t8 = 0xde00 << 16
         [v1 + 0] = t8
         [v1 + 4] = t9
         v1 = [s7 + 0]
         s5 = 0xffff << 16
         s5 |= 0xff
         t3 = v1 + 8
         s4 = 0xfb00 << 16
         [s7 + 0] = t3
         a0 = 0 + 0x2f
         a1 = 0
         [v1 + 4] = s5
         call 0x8004c990          // 0x8004c990(0x2f, 0x0, 0x8, -1)
         [v1 + 0] = s4
         s2 = [s6 + 0]            // t9

    loc_0x802cf458: // orphan
         a2 = v0                  // s4
         a3 = 0
         t4 = halfword [s2 + 0x66]
         t5 = halfword [s2 + 0xc]
         t6 = halfword [s2 + 0x64]
         t7 = halfword [s2 + 0xe]
         [sp + 0x10] = 0
         a0 = t4 + t5
         call 0x8004d19c          // 0x8004d19c(0x18008, 0x442f71dcfe116408, 0xff, 0x0)
         a1 = t6 + t7
         v1 = [s7 + 0]

    loc_0x802cf484: // orphan
         t9 = 0xe700 << 16
         t8 = v1 + 8
         [s7 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t9
         s0 = [s7 + 0]
         t3 = s0 + 8
         [s7 + 0] = t3
         [s0 + 0] = s4
         a0 = [s6 + 0]            // t9
         call 0x88700080          // "0L" // 0x88700080(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x6a
         t4 = v0 & 0xff           // s4
         at = 0xffff << 16
         t5 = t4 | at
         [s0 + 4] = t5
         call 0x8004d1fc          // 0x8004d1fc(0x100000069, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x54]
         s2 = [s6 + 0]            // t9
         v1 = [sp + 0x54]
         t3 = 0 + 0x400
         t8 = halfword [s2 + 0x64]
         t9 = halfword [s2 + 0xe]
         t6 = halfword [s2 + 0x68]
         t7 = halfword [s2 + 0xc]
         a2 = halfword [v1 + 0]
         a3 = halfword [v1 + 2]
         a1 = t8 + t9
         a1 += 0xb
         a0 = t6 + t7
         a0 <<= 0x10
         a1 <<= 0x10
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x18] = t3
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xfffffffe, 0xffff0009, 0xffff, 0xffff)
         [sp + 0x10] = 0
         s2 = [s6 + 0]            // t9
         a0 = , unsigned  byte [s2 + 0x14] // s4
         v1 = halfword [s2 + 0x16]
         if                       // unlikely
         

    loc_0x802cf53c: // orphan
         v0 = [s2 + 0]            // t9
         at = 0 + 2
         t6 = v1 << 2
         if                       // unlikely
         t6 += v1

    loc_0x802cf550: // orphan
         at = 0 + 3
         beql v0, at, 0x802cf5d0  // unlikely
         t4 = halfword [s2 + 0x10]

    loc_0x802cf55c: // orphan
         t5 = halfword [s2 + 0x10]
         if                       // likely
         t6 = v1 & 0xf

    loc_0x802cf568: // orphan
         if                       // unlikely
         

    loc_0x802cf570: // orphan
         t6 -= 0x10

    loc_0x802cf574: // orphan
         t8 = halfword [s2 + 0x12]
         t7 = t6 << 2
         t7 += t6
         t7 <<= 2
         s3 = t5 + t7
         s3 += 1
         s3 <<= 0x10
         s3 = , signed  s3 >> 0x10
         if                       // likely
         t9 = , signed  v1 >> 4

    loc_0x802cf59c: // orphan
         at = v1 + 0xf
         t9 = , signed  at >> 4

    loc_0x802cf5a4: // orphan
         t3 = t9 << 2
         t3 -= t9
         t3 <<= 2
         t3 += t9
         t3 <<= 1
         s1 = t8 + t3
         s1 += 0x12
         s1 <<= 0x10

    loc_0x802cf5c4: // orphan
         goto 0x802cf5f4
         s1 = , signed  s1 >> 0x10

    loc_0x802cf5cc: // orphan
         t4 = halfword [s2 + 0x10]

    loc_0x802cf5d0: // orphan
         s1 = halfword [s2 + 0x12]
         t6 <<= 2
         s3 = t4 + t6
         s3 += 1
         s1 += 0x12
         s3 <<= 0x10
         s1 <<= 0x10
         s3 = , signed  s3 >> 0x10
         s1 = , signed  s1 >> 0x10

    loc_0x802cf5f4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cf5c4
         v0 = [sp + 0x54]
         a0 = s3 << 0x10
         a1 = s1 << 0x10

    loc_0x802cf600: // orphan
         a2 = halfword [v0 + 0]
         a3 = halfword [v0 + 2]
         t5 = 0 + 0x400
         t7 = 0 + 0x400
         [sp + 0x1c] = t7
         [sp + 0x18] = t5
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a1 = , signed  a1 >> 0x10
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0xffff, 0xffff)
         a0 = , signed  a0 >> 0x10 // t9
         s2 = [s6 + 0]            // t9
         a0 = , unsigned  byte [s2 + 0x14] // s4
         v1 = halfword [s2 + 0x16]

    loc_0x802cf63c: // orphan
         beql a0, v1, 0x802cf654  // unlikely
         v0 = [s2 + 0]            // t9

    loc_0x802cf644: // orphan
         t9 = , unsigned  byte [s2 + 0x76] // s4
         beql t9, 0, 0x802cf7bc   // unlikely
         t4 = , unsigned  byte [s2 + 0x5e] // s4

    loc_0x802cf650: // orphan
         v0 = [s2 + 0]            // t9

    loc_0x802cf654: // orphan
         at = 0 + 2
         a1 = , unsigned  byte [s2 + 0x76] // s4
         if                       // unlikely
         t5 = a0 << 2

    loc_0x802cf664: // orphan
         at = 0 + 3
         beql v0, at, 0x802cf6c0  // unlikely
         t6 = halfword [s2 + 0x10]

    loc_0x802cf670: // orphan
         t8 = halfword [s2 + 0x12]
         s3 = halfword [s2 + 0x10]
         s3 += 0x140
         s3 <<= 0x10
         s3 = , signed  s3 >> 0x10
         if                       // likely
         t3 = , signed  a0 >> 4   // t9

    loc_0x802cf68c: // orphan
         at = a0 + 0xf
         t3 = , signed  at >> 4

    loc_0x802cf694: // orphan
         t4 = t3 << 2
         t4 -= t3
         t4 <<= 2
         t4 += t3
         t4 <<= 1
         s1 = t8 + t4
         s1 -= 0x17
         s1 <<= 0x10
         goto 0x802cf6e4
         s1 = , signed  s1 >> 0x10

    loc_0x802cf6bc: // orphan
         t6 = halfword [s2 + 0x10]

    loc_0x802cf6c0: // orphan
         s1 = halfword [s2 + 0x12]
         t5 += a0
         t5 <<= 2
         s3 = t6 + t5
         s1 += 3

    loc_0x802cf6d4: // orphan
         s3 <<= 0x10
         s1 <<= 0x10
         s3 = , signed  s3 >> 0x10 // t9
         s1 = , signed  s1 >> 0x10

    loc_0x802cf6e4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cf6b4
         if                       // unlikely
         t7 = a1 - 1

    loc_0x802cf6ec: // orphan
         byte [s2 + 0x76] = t7
         v1 = [s7 + 0]
         t3 = 0xe700 << 16
         t9 = v1 + 8
         [s7 + 0] = t9
         [v1 + 4] = 0
         [v1 + 0] = t3
         v1 = [s7 + 0]
         t8 = v1 + 8
         [s7 + 0] = t8
         [v1 + 4] = s5
         [v1 + 0] = s4

    loc_0x802cf71c: // orphan
         v1 = [s7 + 0]
         t6 = [sp + 0x54]
         at = 0xe500 << 16
         t4 = v1 + 8
         [s7 + 0] = t4
         t5 = , unsigned  halfword [t6 + 2]
         t7 = s3 + t5
         t5 = , unsigned  halfword [t6 + 0]
         t9 = t7 << 2
         t3 = t9 & 0xfff
         t7 = s1 + t5
         t9 = t7 << 2
         t8 = t3 << 0xc
         t3 = t9 & 0xfff

    loc_0x802cf754: // orphan
         t4 = t8 | at             // t9
         t6 = s3 << 2
         t5 = t6 & 0xfff
         t8 = t4 | t3             // t9
         t9 = s1 << 2
         t4 = t9 & 0xfff
         t7 = t5 << 0xc
         t3 = t7 | t4
         [v1 + 4] = t3
         [v1 + 0] = t8
         v1 = [s7 + 0]
         t6 = 0xe100 << 16
         t7 = 0x400 << 16
         t8 = v1 + 8
         [s7 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t6
         v1 = [s7 + 0]
         t7 |= 0x400
         t9 = 0xf100 << 16
         t5 = v1 + 8
         [s7 + 0] = t5
         [v1 + 4] = t7
         [v1 + 0] = t9
         s2 = [s6 + 0]            // t9
         t4 = , unsigned  byte [s2 + 0x5e] // s4

    loc_0x802cf7bc: // orphan
         t3 = halfword [s2 + 0x5a]
         if                       // likely
         

    loc_0x802cf7c8: // orphan
         t8 = halfword [s2 + 0x58]
         a1 = 0 + 3
         a0 = 0 + 0x24
         at = , t8 < 5
         if                       // likely
         

    loc_0x802cf7e0: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802cf7e4: // orphan
         a0 = 0 + 0x24
         a0 = 0 + 4
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x4, 0x1, 0x8, -1)
         a2 = v0                  // s4
         s2 = [s6 + 0]            // t9
         v1 = v0 << 0x10
         v1 = , signed  v1 >> 0x10 // s4
         t6 = halfword [s2 + 0xc]
         t9 = halfword [s2 + 0x64]
         t7 = halfword [s2 + 0xe]
         t5 = , signed  v1 >> 1
         a0 = t6 - t5
         a1 = t9 + t7
         a1 -= 8
         a0 += 0x43
         a2 = v1 + 0x10
         call 0x8004b314          // 0x8004b314(0xffc3, 0x1fff6, 0x10f, -1)
         a3 = 0 + 0x20            // k0
         goto 0x802cf8c4
         ra = [sp + 0x4c]         // t9

    loc_0x802cf838: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 4
         a0 = 0 + 4
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x4, 0x1, 0x8, -1)
         a2 = v0                  // s4
         s2 = [s6 + 0]            // t9
         v1 = v0 << 0x10
         v1 = , signed  v1 >> 0x10 // s4
         t4 = halfword [s2 + 0xc]
         t8 = halfword [s2 + 0x64]
         t6 = halfword [s2 + 0xe]
         t3 = , signed  v1 >> 1
         a0 = t4 - t3
         a1 = t8 + t6
         a1 -= 8
         a0 += 0xb1
         a2 = v1 + 0x10
         call 0x8004b314          // 0x8004b314(0x10031, 0x1fff6, 0x10f, -1)
         a3 = 0 + 0x20            // k0
         goto 0x802cf8c4
         ra = [sp + 0x4c]         // t9

    loc_0x802cf890: // orphan
         call 0x8870118c          // 0x8870118c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = halfword [s2 + 0x58]
         t5 = [s6 + 0]            // t9
         s1 = v0 << 0x10
         s1 = , signed  s1 >> 0x10 // s4
         call 0x887011e8          // 0x887011e8(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a0 = halfword [t5 + 0x5a]
         a0 = s1 - 8
         a1 = v0 - 8
         a2 = 0 + 0x20            // k0
         call 0x8004b314          // 0x8004b314(0xf7, 0xf7, 0x20, -1)
         a3 = 0 + 0x20            // k0
         ra = [sp + 0x4c]         // t9

    loc_0x802cf8c4: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802cf830, 0x802cf888
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]
         s2 = [sp + 0x34]         // t9
         s3 = [sp + 0x38]         // t9
         s4 = [sp + 0x3c]         // t9
         s5 = [sp + 0x40]         // s4
         s6 = [sp + 0x44]         // t9
         s7 = [sp + 0x48]
         ret                      // ra
         sp += 0x68

    loc_0x802cfa50: // orphan
         

    loc_0x802cfabc: // orphan
         rotrv 0, a1, v0

    loc_0x802cfcc4: // orphan
         if                       // fcn.802d34ac+0x10c // unlikely
         if                       // unlikely

    loc_0x802cfcd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cfcdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cfce8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cfcf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802cfdb0: // orphan
         a0 = 0 + 0x14c
         a0 = 0 + 0x14c
         call 0x8004c990          // 0x8004c990(0x14c, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 1               // lo
         call 0x8004c990          // 0x8004c990(0x14c, 0x1, 0x8, -1)
         [t6 + 0x360] = v0
         t7 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 2
         call 0x8004c990          // 0x8004c990(0x14c, 0x2, 0x8, -1)
         [t7 + 0x364] = v0

    loc_0x802cfde8: // orphan
         t8 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 3
         call 0x8004c990          // 0x8004c990(0x14c, 0x3, 0x8, -1)
         [t8 + 0x368] = v0
         t9 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 4
         call 0x8004c990          // 0x8004c990(0x14c, 0x4, 0x8, -1)
         [t9 + 0x36c] = v0
         t0 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 5
         call 0x8004c990          // 0x8004c990(0x14c, 0x5, 0x8, -1)
         [t0 + 0x370] = v0
         t1 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 6
         call 0x8004c990          // 0x8004c990(0x14c, 0x6, 0x8, -1)
         [t1 + 0x374] = v0
         t2 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 7
         call 0x8004c990          // 0x8004c990(0x14c, 0x7, 0x8, -1)
         [t2 + 0x378] = v0
         t3 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 8               // a2
         call 0x8004c990          // 0x8004c990(0x14c, 0x8, 0x8, -1)
         [t3 + 0x37c] = v0
         t4 = [s0 + 0]
         a0 = 0 + 0x14c

    loc_0x802cfe68: // orphan
         a1 = 0 + 9
         call 0x8004c990          // 0x8004c990(-1, 0x9, 0x8, -1)
         [t4 + 0x380] = v0
         t5 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0xa

    loc_0x802cfe80: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         [t5 + 0x384] = v0
         t6 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0xb
         call 0x8004c990          // 0x8004c990(0x14c, 0xb, 0x8, -1)
         [t6 + 0x388] = v0
         t7 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0xc
         call 0x8004c990          // 0x8004c990(0x14c, 0xc, 0x8, -1)
         [t7 + 0x38c] = v0
         t8 = [s0 + 0]

    loc_0x802cfeb4: // orphan
         a0 = 0 + 0x14c
         a1 = 0 + 0xd
         call 0x8004c990          // 0x8004c990(0x14c, 0xd, 0x8, -1)
         [t8 + 0x390] = v0
         t9 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0xe
         call 0x8004c990          // 0x8004c990(0x14c, 0xe, 0x8, -1)
         [t9 + 0x394] = v0
         t0 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0xf
         call 0x8004c990          // 0x8004c990(0x14c, 0xf, 0x8, -1)
         [t0 + 0x398] = v0
         t1 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0x10
         call 0x8004c990          // 0x8004c990(0x14c, 0x10, 0x8, -1)
         [t1 + 0x39c] = v0
         t2 = [s0 + 0]
         a0 = 0 + 0x14c
         a1 = 0 + 0x11

    loc_0x802cff0c: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802cff10: // orphan
         [t2 + 0x3a0] = v0
         t3 = [s0 + 0]
         a0 = 0 + 0x3a
         call 0x88004ff0          // 0x88004ff0(0x3a, 0x442f71dcfe116408, 0x8, -1)
         [t3 + 0x3a4] = v0
         call 0x8004c4b0          // 0x8004c4b0(0x3a, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x26
         call 0x8004c4b0          // 0x8004c4b0(0x26, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe
         call 0x8004c4b0          // 0x8004c4b0(0xe, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802cff38: // orphan
         a0 = 0 + 7
         a0 = aav.0x80130000 << 16
         a0 = [a0 - 0x739c]
         a1 = 0 + 0x8a
         call 0x80042c68          // 0x80042c68(0x97a40034, 0x8a, 0x8, -1)
         a2 = 0 + 0x6e
         t4 = [s0 + 0]
         a1 = 0x8800 << 16
         a1 += 0x5714
         [t4 + 8] = v0
         t5 = [s0 + 0]
         v1 = [t5 + 8]            // s4
         t6 = , unsigned  halfword [v1 + 0]
         t7 = t6 & 0xfffd
         halfword [v1 + 0] = t7
         t8 = [s0 + 0]
         call 0x80042d74          // 0x80042d74(0x97a40034, 0x88005714, 0x6e, -1)
         a0 = [t8 + 8]            // s4
         call 0x80001ff0          // 0x80001ff0(0xff, 0x88005714, 0x6e, -1)
         
         call 0x80001ff0          // 0x80001ff0(0xff, 0x88005714, 0x6e, -1)
         [sp + 0x20] = v0
         mtc1 v0, f6
         at = 0x4180 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f12
         t9 = [sp + 0x20]         // s4

    loc_0x802cffac: // orphan
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f10, f8, f2
         mtc1 t9, f18
         
         cvt.s.w f6, f18
         div.s f16, f10, f12
         mul.s f8, f2, f6
         div.s f10, f8, f12
         c.lt.s f4, f16
         
         bc1fl 0x802cfff4
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802cfffc
         add.s f4, f0, f10

    loc_0x802cfffc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cffe8
         t2 = [s0 + 0]
         // UNKNOWN XREF from fcn.805b6da4 @ +0x554
         // UNKNOWN XREF from fcn.805bc5a0 @ +0xaa8
         // UNKNOWN XREF from fcn.820fa444 @ +0x5870
         // UNKNOWN XREF from fcn.835254a8 @ +0x164c
         // UNKNOWN XREF from fcn.83900094 @ +0x90
         trunc.w.s f16, f4
         mfc1 t1, f16
         
         byte [t2 + 0x51] = t1
         v0 = [s0 + 0]
         v1 = , unsigned  byte [v0 + 0x51]
         t3 = v1 & 1              // lo
         if                       // unlikely
         t4 = v1 + 1

    loc_0x802d0024: // orphan
         byte [v0 + 0x51] = t4

    loc_0x802d0028: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x28
         ret
         

    loc_0x802d01f4: // orphan
         
         t7 = [t7 + 0x68b0]       // t9
         t8 = t7 + v0
         t9 = , unsigned  byte [t8 + 2] // s4
         bnel t9, 0, 0x802d0220   // likely
         byte [v1 + 0x26] = a1

    loc_0x802d020c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v1 + 0x35c]        // t9
         goto 0x802d0240
         v1 = [s0 + 0]

    loc_0x802d0220: // orphan
         t0 = [s0 + 0]
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t0 + 0x354]        // t9
         v1 = [s0 + 0]
         t1 = , unsigned  byte [v1 + 0x51]
         t2 = , signed  t1 >> 1
         byte [v1 + 0x50] = t2
         v1 = [s0 + 0]

    loc_0x802d0240: // orphan
         // CODE XREF from fcn.802cd9dc @ 0x802d01c8
         // CODE XREF from fcn.82bea63c @ 0x802d0214
         t3 = , unsigned  byte [v1 + 0x50] // s4
         t4 = t3 + 1
         byte [v1 + 0x50] = t4
         v1 = [s0 + 0]
         t5 = , unsigned  byte [v1 + 0x50]
         t6 = , unsigned  byte [v1 + 0x51]
         at = , t5 < t6           // lo
         bnel at, 0, 0x802d0464   // fcn.802d03d0+0x94 // likely
         ra = [sp + 0x1c]

    loc_0x802d0264: // orphan
         goto 0x802d0460
         byte [v1 + 0x50] = 0

    loc_0x802d02d0: // orphan
         t4 = [s0 + 0]
         t3 = 0 + 1               // lo
         t5 = 0 - 1               // s2
         [t4 + 0x14] = t3
         t6 = [s0 + 0]
         byte [t6 + 0x27] = t5
         v1 = [s0 + 0]
         t7 = byte [v1 + 0x27]    // s4
         goto 0x802d0460
         byte [v1 + 0x26] = t7

    loc_0x802d0334: // orphan
         t4 = [s0 + 0]
         goto 0x802d0460
         byte [t4 + 0x26] = t3

    loc_0x802d0380: // orphan
         byte [t0 + 0x11] = t9
         v1 = [s0 + 0]

    loc_0x802d040c: // orphan
         t1 = halfword [v1 + 0x24]

    loc_0x802d0460: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802d0264, 0x802d02f0, 0x802d0338
         ra = [sp + 0x1c]

    loc_0x802d04a4: // orphan
         at = 0 + 2

    loc_0x802d04a8: // orphan
         t6 = [t6 + 0x68b0]       // t9
         t7 = byte [v1 + 0x26]    // a2
         t8 = t6 + t7
         t9 = , unsigned  byte [t8 + 2] // s4
         goto 0x802d04f0
         byte [sp + 0x43] = t9

    loc_0x802d04e0: // orphan
         t2 = halfword [v1 + 0x24]
         t3 = t1 + t2
         t4 = , unsigned  byte [t3 + 2] // s4
         byte [sp + 0x43] = t4

    loc_0x802d04f0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d04b8
         t5 = , unsigned  byte [sp + 0x43] // s4

    loc_0x802d04f4: // orphan
         if                       // unlikely
         at = , t5 < 0xfc

    loc_0x802d04fc: // orphan
         if                       // unlikely
         a0 = t5                  // t9

    loc_0x802d0504: // orphan
         call 0x80062d5c          // 0x80062d5c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = t5
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x3e] = v0
         call 0x8004989c          // 0x8004989c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x14

    loc_0x802d051c: // orphan
         a0 = 0x8800 << 16
         call 0x880006bc          // 0x880006bc(0x88000000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x5fa0
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802d0530: // orphan
         a1 = 0
         a0 = 0x8800 << 16
         t6 = 0 + 1               // lo
         [sp + 0x10] = t6
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x1bb
         a2 = 0 + 0x103

    loc_0x802d054c: // orphan
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = [sp + 0x44]         // t9
         v1 = , unsigned  byte [sp + 0x3e] // s4

    loc_0x802d0558: // orphan
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x802d0560: // orphan
         if                       // likely
         a0 = 0 + 0x26

    loc_0x802d0568: // orphan
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x16
         [sp + 0x34] = v0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x16, 0x8, -1)
         a1 = 0 + 0x18
         t7 = [sp + 0x34]         // s4
         a3 = 0x8880 << 16
         a3 += 0x3f00
         a0 = 0 + 0x12f
         a1 = 0 + 0x117
         a2 = 0
         [sp + 0x14] = v0
         call 0x800495f8          // 0x800495f8(0x12f, 0x117, 0x0, 0x88803f00)
         [sp + 0x10] = t7
         goto 0x802d05e4
         a0 = 0 + 0x26

    loc_0x802d05b0: // orphan
         a1 = 0 + 0x16
         call 0x8004c874          // 0x8004c874(-1, 0x16, 0x8, -1)
         [sp + 0x24] = v1
         v1 = [sp + 0x24]

    loc_0x802d05c0: // orphan
         a3 = 0x8880 << 16
         a3 += 0x3f08
         a0 = 0 + 0x12f
         a1 = 0 + 0x117
         a2 = 0
         [sp + 0x10] = v0
         call 0x800495f8          // 0x800495f8(0x12f, 0x117, 0x0, 0x88803f08)
         [sp + 0x14] = v1
         a0 = 0 + 0x26

    loc_0x802d05e4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d05a8
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x17
         [sp + 0x38] = v0
         call 0x80062dd4          // 0x80062dd4(-1, 0x17, 0x8, -1)
         a0 = , unsigned  byte [sp + 0x43] // s4
         byte [sp + 0x2f] = v0
         call 0x80062dd4          // 0x80062dd4(0xff, 0x17, 0x8, -1)
         a0 = , unsigned  byte [sp + 0x43] // s4
         v1 = 0 + 0x64
         unsigned , hi
         at = 0x437f << 16
         mtc1 at, f2

    loc_0x802d0614: // orphan
         mtc1 0, f4
         t8 = lo
         mtc1 t8, f6
         
         cvt.s.w f8, f6
         div.s f10, f8, f2
         c.lt.s f4, f10
         
         bc1f 0x802d0648
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d0658
         t0 = , unsigned  byte [sp + 0x2f] // s4

    loc_0x802d0658: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d0640
         t9 = [sp + 0x38]         // s4
         a3 = 0x8880 << 16
         unsigned , hi
         a3 += 0x3f10
         a0 = 0 + 0x1ad
         a1 = 0 + 0x117
         a2 = 0
         [sp + 0x10] = t9
         t1 = lo
         mtc1 t1, f16
         
         cvt.s.w f18, f16
         div.s f6, f18, f2
         add.s f8, f0, f6
         trunc.w.s f4, f8
         mfc1 t3, f4
         call 0x800495f8          // 0x800495f8(0x1ad, 0x117, 0x0, 0x88803f10)
         [sp + 0x14] = t3
         a1 = [sp + 0x28]         // t9
         a0 = 0 + 7
         call 0x8004c874          // 0x8004c874(0x7, -1, 0x0, 0x88803f10)
         a1 -= 1
         a0 = 0x8800 << 16
         t4 = 0 + 1               // lo
         [sp + 0x10] = t4
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x12f
         a2 = 0 + 0x12f
         call 0x80048e30          // 0x80048e30(-1, 0x12f, 0x12f, 0x88803f10)
         a3 = v0                  // s4
         call 0x80062d98          // 0x80062d98(-1, 0x12f, 0x12f, 0xff)
         a0 = , unsigned  byte [sp + 0x43] // s4
         a1 = v0 << 0x18
         byte [sp + 0x3f] = v0
         a1 = , signed  a1 >> 0x18 // t9
         call 0x88000510          // 0x88000510(0xff, -1, 0x12f, 0xff)
         a0 = sp + 0x40
         call 0x880006e0          // 0x880006e0(0x178040, -1, 0x12f, 0xff)
         a0 = v0                  // s4
         t5 = 0x8800 << 16
         t5 = [t5 + 0x687c]       // t9
         a0 = 0
         a2 = [sp + 0x44]         // t9
         call 0x80049290          // 0x80049290(0x0, -1, -1, 0xff)
         a1 = byte [t5 + 0x78]    // s4
         [sp + 0x34] = v0
         call 0x80063270          // 0x80063270(0x0, 0xff, -1, 0xff)
         a0 = , unsigned  byte [sp + 0x3f] // s4
         a0 = 0x8800 << 16
         a0 = [a0 + 0x687c]       // t9
         t6 = [sp + 0x34]         // s4
         t8 = 0 + 1               // lo
         t7 = byte [a0 + 0x78]    // s4
         [sp + 0x10] = t8
         a2 = 0 + 0x103
         a1 = t6 + t7
         a1 += 0x1bb
         call 0x80048e30          // 0x80048e30(-1, 0x3b9, 0x103, 0xff)
         a3 = v0                  // s4
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x3b9, 0x103, 0xff)
         a1 = 0
         call 0x80062ce0          // 0x80062ce0(0x8, 0x0, 0x103, 0xff)
         a0 = , unsigned  byte [sp + 0x43] // s4
         a0 = 0x8800 << 16
         t9 = 0 + 1               // lo
         [sp + 0x10] = t9
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x12f
         a2 = 0 + 0xff            // s4
         call 0x80048e30          // 0x80048e30(-1, 0x12f, 0xff, 0xff)
         a3 = v0                  // s4
         call 0x800499ec          // 0x800499ec(-1, 0x12f, 0xff, 0xff)
         

    loc_0x802d0780: // orphan
         ra = [sp + 0x1c]

    loc_0x802d0784: // orphan
         sp += 0x48
         ret                      // ra
         

    loc_0x802d0e44: // orphan
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 += 0x335
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, 0x334)
         a1 = 0 + 1               // lo
         t7 = 0x8800 << 16
         t7 = [t7 + 0x68b0]       // t9
         call 0x8004b7a4          // 0x8004b7a4(0x8, 0x1, 0x8, 0x334)
         a0 = , unsigned  byte [t7 + 0]
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x1d1
         a2 = 0 + 0x5e
         call 0x80048e30          // 0x80048e30(-1, 0x1d1, 0x5e, 0x334)
         a3 = v0                  // s4
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x802d0eb0: // orphan
         if                       // unlikely
         t6 = v0 - 1              // t3

    loc_0x802d0eb8: // orphan
         byte [v1 + 0x10] = t6

    loc_0x802d0ebc: // orphan
         v1 = [a2 + 0]            // arg3
         t7 = , unsigned  byte [v1 + 0x10] // s4
         bnel t7, 0, loc.802d12a8 // likely
         ra = [sp + 0x14]         // t3

    loc_0x802d0ecc: // orphan
         t8 = [v1 + 0x1c]         // t9
         t0 = 0 + 3
         at = 0 + 4
         [t8 + 0x34] = 0
         v1 = [a2 + 0]            // arg3
         v0 = [v1 + 0]            // t9
         if                       // unlikely
         

    loc_0x802d0eec: // orphan
         bnel v0, at, loc.802d12a8 // likely
         ra = [sp + 0x14]         // t3

    loc_0x802d0ef4: // orphan
         goto 0x802d12a4
         [v1 + 0x14] = 0

    loc_0x802d0efc: // orphan
         a0 = , unsigned  byte [v1 + 0x11]
         if                       // likely
         

    loc_0x802d0f08: // orphan
         a1 = [v1 + 0]            // t9
         t0 = 0 + 3
         at = 0 + 4
         if                       // unlikely
         v0 = a1                  // t9

    loc_0x802d0f88: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = a3
         a2 = 0x8880 << 16
         a2 += 0x4050
         v0 = [sp + 0x28]         // t9

    loc_0x802d0f9c: // orphan
         goto 0x802d0fbc
         a3 = [sp + 0x2c]         // t9

    loc_0x802d0fbc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d0f9c
         if                       // unlikely
         

    loc_0x802d0fc4: // orphan
         t8 = [a2 + 0]            // arg3

    loc_0x802d0fc8: // orphan
         a0 = [t8 + 0x358]        // t9
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = a3
         a2 = 0x8880 << 16
         a2 += 0x4050
         a3 = [sp + 0x2c]         // t9

    loc_0x802d0fe0: // orphan
         beql a3, 0, loc.802d12a8 // unlikely
         ra = [sp + 0x14]         // t3

    loc_0x802d0fe8: // orphan
         t9 = [a2 + 0]            // arg3
         a1 = 0
         t1 = [t9 + 0x1c]
         call 0x88004990          // 0x88004990(-1, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t1 + 0]
         a2 = 0x8880 << 16
         a2 += 0x4050
         t3 = [a2 + 0]            // t9
         t2 = 0 + 1               // lo
         t4 = [t3 + 0x1c]         // t9
         [t4 + 0x34] = t2
         t5 = [a2 + 0]            // t9
         t9 = [t5 + 0x54]
         call t9                  // t9(0x0, 0x0, 0x88804050, -1)
         
         goto loc.802d12a8
         ra = [sp + 0x14]         // t3

    loc_0x802d10a8: // orphan
         call 0x8800335c          // 0x8800335c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a2 = 0x8880 << 16
         if                       // likely
         a2 += 0x4050

    loc_0x802d11fc: // orphan
         v1 = [a2 + 0]
         t2 = byte [v1 + 0x27]    // s4
         byte [v1 + 0x26] = t2
         v0 = [v0 + 0x68b0]       // t9
         t9 = , unsigned  byte [v0 + 2]
         v0 += 2
         bnel t9, 0, 0x802d1230   // likely
         t5 = [a2 + 0]

    loc_0x802d121c: // orphan
         t4 = [a2 + 0]
         v1 = 0 + 1               // lo
         goto 0x802d1238
         byte [t4 + 0x3b0] = v1

    loc_0x802d1230: // orphan
         v1 = 0 + 1               // lo
         byte [t5 + 0x3b0] = 0

    loc_0x802d1238: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1224
         t6 = , unsigned  byte [v0 + 1]
         v0 += 1
         bnel t6, 0, 0x802d1258   // likely
         t1 = [a2 + 0]

    loc_0x802d1248: // orphan
         t7 = [a2 + 0]
         goto 0x802d125c
         byte [t7 + 0x3b1] = v1

    loc_0x802d1258: // orphan
         byte [t1 + 0x3b1] = 0

    loc_0x802d125c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d124c
         t8 = , unsigned  byte [v0 + 1]
         v0 += 1
         bnel t8, 0, 0x802d127c   // likely
         t2 = [a2 + 0]

    loc_0x802d1268: // orphan
         t2 = [a2 + 0]

    loc_0x802d126c: // orphan
         t3 = [a2 + 0]
         goto 0x802d1280
         byte [t3 + 0x3b2] = v1

    loc_0x802d127c: // orphan
         byte [t2 + 0x3b2] = 0

    loc_0x802d1280: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1270
         t9 = , unsigned  byte [v0 + 1]
         v0 += 1
         bnel t9, 0, 0x802d12a0   // likely
         t5 = [a2 + 0]

    loc_0x802d1290: // orphan
         t4 = [a2 + 0]
         goto 0x802d12a4
         byte [t4 + 0x3b3] = v1

    loc_0x802d12a0: // orphan
         byte [t5 + 0x3b3] = 0

    loc_0x802d12a4: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802d0ef4, 0x802d1294
         ra = [sp + 0x14]         // t3

    loc_0x802d147c: // orphan
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s2 + 0]            // t9
         mtc1 v0, f6
         at = 0x4480 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x8880 << 16
         lwc1 f12, 0x4018, at
         mtc1 s0, f16
         mtc1 0, f18
         at = 0xbf00 << 16
         mul.s f10, f8, f2
         cvt.s.w f6, f16
         div.s f4, f10, f12
         mul.s f8, f2, f6
         div.s f10, f8, f12
         c.lt.s f18, f4
         
         bc1fl 0x802d14e0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d14e8
         add.s f18, f0, f10

    loc_0x802d14e8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d14d4
         a0 = 0 + 0x42
         a1 = 0 + 0x197
         a2 = 0 + 0x1fb
         trunc.w.s f4, f18
         a3 = 0 + 0x20            // k0
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         mfc1 t4, f4
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x42, 0x197, 0x1fb, 0x20)
         [sp + 0x18] = t4
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9
         t5 = [t1 + 0x18]         // t9
         beql t5, 0, 0x802d15e8   // unlikely
         a0 = 0 + 0xff            // s4

    loc_0x802d152c: // orphan
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s2 + 0]            // t9
         s0 = v0                  // s4
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s2 + 0]            // t9
         mtc1 v0, f6
         at = 0x4480 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x8880 << 16
         lwc1 f4, 0x401c, at
         mtc1 0, f16
         at = 0xbf00 << 16
         mul.s f18, f8, f10
         mtc1 s0, f10
         div.s f6, f18, f4
         cvt.s.w f18, f10
         c.lt.s f16, f6
         
         bc1fl 0x802d1594
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d159c
         at = 0x4480 << 16

    loc_0x802d159c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1588
         mtc1 at, f8
         at = 0x8880 << 16
         lwc1 f16, 0x4020, at
         mul.s f4, f8, f18
         a0 = 0 + 0x42
         a1 = 0 + 0x5a
         a2 = 0 + 0x1fb
         a3 = 0 + 0x1a
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         div.s f6, f4, f16
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         add.s f10, f0, f6
         trunc.w.s f8, f10
         mfc1 t7, f8
         call 0x80044270          // 0x80044270(0x42, 0x5a, 0x1fb, 0x1a)
         [sp + 0x18] = t7
         a0 = 0 + 0xff            // s4

    loc_0x802d15e8: // orphan
         a1 = 0 + 0xff            // s4
         call 0x88002ba0          // 0x88002ba0(-1, 0xff, 0x8, -1)
         a2 = 0 + 0xff            // s4
         s2 = 0x8800 << 16
         s2 += 0x68b0
         t8 = [s2 + 0]            // t9
         t9 = , unsigned  byte [t8 + 0x1e] // s4
         t4 = t9 & 1              // lo
         if                       // likely
         a0 = 0 + 0xef

    loc_0x802d1610: // orphan
         call 0x8004d334          // 0x8004d334(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x8004d40c          // 0x8004d40c(-1, 0x0, 0x8, -1)
         a0 = 0 + 1               // lo
         byte [sp + 0xef] = 0
         t5 = [s2 + 0]            // t9
         t6 = byte [sp + 0xef]
         a0 = 0 + 2
         t7 = t5 + t6             // t9
         t8 = , unsigned  byte [t7 + 2]
         if                       // unlikely
         

    loc_0x802d1640: // orphan
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0xef
         if                       // likely
         a2 = byte [sp + 0xef]

    loc_0x802d1650: // orphan
         a0 = a2 << 0x18
         call 0x88800d34          // 0x88800d34(0x8000000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x18 // a2

    loc_0x802d165c: // orphan
         a2 = byte [sp + 0xef]
         a2 += 1                  // lo
         a2 <<= 0x18
         a2 = , signed  a2 >> 0x18 // lo
         at = , a2 < 4            // lo
         if                       // likely
         byte [sp + 0xef] = a2

    loc_0x802d1678: // orphan
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1338]       // t9
         a1 = 0 + 0x100
         call 0x8004d27c          // 0x8004d27c(-1, 0x100, 0x8, -1)
         a2 = 0 + 2
         t9 = 0 + 3
         [sp + 0x10] = t9
         a0 = 0 + 0x4a
         a1 = 0 + 0xf4
         a2 = 0 + 0xfe            // t3
         call 0x88002ec0          // 0x88002ec0(0x4a, 0xf4, 0xfe, -1)
         a3 = 0 + 0x7e
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9
         t4 = [t1 + 0x14]         // t9
         if                       // unlikely
         t5 = 0 + 3

    loc_0x802d16bc: // orphan
         [sp + 0x10] = t5
         a0 = 0 + 0x150
         a1 = 0 + 0xf4
         a2 = 0 + 0xe5
         call 0x88002ec0          // 0x88002ec0(0x150, 0xf4, 0xe5, -1)
         a3 = 0 + 0x7e
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9

    loc_0x802d16dc: // orphan
         t6 = , unsigned  byte [t1 + 0x10] // s4
         if                       // unlikely
         t7 = 0 + 3

    loc_0x802d16e8: // orphan
         [sp + 0x10] = t7
         a0 = 0 + 0x4a
         a1 = 0 + 0x78
         a2 = 0 + 0x90
         call 0x88002ec0          // 0x88002ec0(0x4a, 0x78, 0x90, -1)
         a3 = 0 + 0x74
         t8 = 0 + 3
         [sp + 0x10] = t8
         a0 = 0 + 0xe2
         a1 = 0 + 0x78
         a2 = 0 + 0xc6
         call 0x88002ec0          // 0x88002ec0(0xe2, 0x78, 0xc6, 0x74)
         a3 = 0 + 0x74
         t9 = 0 + 3
         [sp + 0x10] = t9
         a0 = 0 + 0x1b0
         a1 = 0 + 0x78
         a2 = 0 + 0x85
         call 0x88002ec0          // 0x88002ec0(0x1b0, 0x78, 0x85, 0x74)
         a3 = 0 + 0x74
         v1 = [s1 + 0]            // t9
         t5 = 0xe700 << 16
         t7 = 0xfb00 << 16
         t4 = v1 + 8
         [s1 + 0] = t4
         [v1 + 4] = 0
         [v1 + 0] = t5
         v1 = [s1 + 0]
         t1 = 0x8880 << 16

    loc_0x802d175c: // orphan
         a0 = 0x8801 << 16
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 0] = t7
         t1 = [t1 + 0x4050]       // t9
         a1 = 0 + 0x80

    loc_0x802d17d8: // orphan
         s0 = [t1 + 0]            // t9
         at = 0 + 3
         if                       // unlikely
         at = 0 + 4

    loc_0x802d17e8: // orphan
         bnel s0, at, 0x802d1878  // fcn.802d1824+0x54 // likely
         v1 = [s2 + 0]            // t9

    loc_0x802d17f0: // orphan
         v1 = [s1 + 0]
         t5 = 0xe700 << 16
         t6 = 0xfb00 << 16
         t9 = v1 + 8
         [s1 + 0] = t9
         [v1 + 4] = 0
         [v1 + 0] = t5
         v1 = [s1 + 0]
         t1 = 0x8880 << 16
         a0 = 0x8801 << 16
         t8 = v1 + 8
         [s1 + 0] = t8
         [v1 + 0] = t6

    loc_0x802d1930: // orphan
         mtc1 at, f12
         mtc1 0, f18
         a1 = v0 & 0xff           // s4
         if                       // likely
         cvt.s.w f16, f4

    loc_0x802d1944: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f16, f16, f6

    loc_0x802d1954: // orphan
         mul.s f10, f16, f2
         mtc1 a1, f4
         at = 0xbf00 << 16
         div.s f8, f10, f12
         c.lt.s f18, f8
         
         bc1fl 0x802d1988
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d1990
         a0 = sp + 0xb4

    loc_0x802d19b8: // orphan
         trunc.w.s f4, f8
         mfc1 a2, f4
         call 0x8003573c          // 0x8003573c(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 &= 0xff
         v1 = [s1 + 0]
         t5 = 0xfb00 << 16
         t7 = v1 + 8
         [s1 + 0] = t7
         [v1 + 0] = t5

    loc_0x802d19dc: // orphan
         t7 = , unsigned  byte [sp + 0xb5]
         t8 = , unsigned  byte [sp + 0xb4]
         t6 = , unsigned  byte [sp + 0xb6]
         t5 = t7 << 0x10
         t9 = t8 << 0x18
         t4 = t9 | t5
         t7 = t6 << 8
         t9 = t4 | t7
         t5 = t9 | 0xff           // s4
         goto 0x802d1a30
         [v1 + 4] = t5

    loc_0x802d1a30: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1a00
         a2 = 0x8801 << 16
         a2 = [a2 - 0x1308]       // t9
         a0 = 0 + 0x190
         a1 = 0 + 0xd3
         a3 = 0

    loc_0x802d1a44: // orphan
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         v1 = [s1 + 0]

    loc_0x802d1ad0: // orphan
         t9 = , unsigned  byte [t1 + 0x10] // s4
         if                       // fcn.82bea63c-0x2918b4c // unlikely
         a0 = 0 + 0xeb

    loc_0x802d1b0c: // orphan
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a3 = 0x8880 << 16
         a3 = [a3 + 0x4050]       // t9
         a0 = 0x8800 << 16
         t6 = 0 + 1               // lo
         [sp + 0x10] = t6
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x159
         a2 = 0 + 0xfd
         call 0x80048e30          // 0x80048e30(-1, 0x159, 0xfd, -1)
         a3 += 0x1dd
         a3 = 0x8880 << 16
         a3 = [a3 + 0x4050]       // t9
         a0 = 0x8800 << 16
         t4 = 0 + 1               // lo
         [sp + 0x10] = t4
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x159
         a2 = 0 + 0x111

    loc_0x802d1b5c: // orphan
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 += 0x21d
         t7 = [s2 + 0]            // t9
         a0 = 0x8800 << 16
         a1 = 0 + 0x159
         t9 = , unsigned  byte [t7 + 0x1e] // s4
         a2 = 0 + 0x12b
         a3 = 0x8880 << 16
         t5 = t9 & 1              // lo
         if                       // likely
         t8 = 0 + 1               // lo

    loc_0x802d1b88: // orphan
         a3 = [a3 + 0x4050]       // t9
         a0 = [a0 + 0x687c]       // t9
         [sp + 0x10] = t8

    loc_0x802d1b94: // orphan
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 += 0x25d
         t6 = [s2 + 0]            // t9
         at = 0 + 0xfc
         a0 = 0x8800 << 16
         t4 = , unsigned  byte [t6 + 0]
         a1 = 0 + 0x159
         a2 = 0 + 0x13f
         if                       // unlikely
         a3 = 0x8880 << 16

    loc_0x802d1bbc: // orphan
         a3 = [a3 + 0x4050]       // t9
         t7 = 0 + 1               // lo
         [sp + 0x10] = t7
         a0 = [a0 + 0x687c]       // t9
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 += 0x29d

    loc_0x802d1bd4: // orphan
         a3 = 0x8880 << 16
         a3 = [a3 + 0x4050]       // t9
         a0 = 0x8800 << 16
         t9 = 0 + 1               // lo
         [sp + 0x10] = t9
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x159
         a2 = 0 + 0x159
         call 0x80048e30          // 0x80048e30(-1, 0x159, 0x159, -1)
         a3 += 0x2dd

    loc_0x802d1bfc: // orphan
         t1 = 0x8880 << 16

    loc_0x802d1c00: // orphan
         // CODE XREF from fcn.82501234 @ 0x82501240
         t1 = [t1 + 0x4050]       // t9
         t5 = , unsigned  byte [t1 + 0x10] // s4
         bnel t5, 0, 0x802d1c20   // likely
         t6 = , unsigned  byte [t1 + 0x2a] // s4

    loc_0x802d1c10: // orphan
         t8 = [t1 + 0x18]         // t9
         if                       // unlikely
         

    loc_0x802d1c1c: // orphan
         t6 = , unsigned  byte [t1 + 0x2a]

    loc_0x802d1c20: // orphan
         t4 = 0x8801 << 16
         a0 = 0 + 0x10            // arg1
         if                       // unlikely
         

    loc_0x802d1c30: // orphan
         t4 = halfword [t4 - 0x10a8]
         beql t4, 0, 0x802d1c6c   // unlikely
         t9 = [s2 + 0]

    loc_0x802d1c3c: // orphan
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a3 = [s2 + 0]            // t9
         a0 = 0x8800 << 16
         t7 = 0 + 1               // lo
         [sp + 0x10] = t7
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x4d
         a2 = 0 + 0x5a
         call 0x80048e30          // 0x80048e30(-1, 0x4d, 0x5a, -1)
         a3 += 0x34
         t9 = [s2 + 0]

    loc_0x802d1c6c: // orphan
         a0 = 0 + 8               // a2
         t5 = , unsigned  byte [t9 + 0x1e] // s4
         t8 = t5 & 1              // lo
         if                       // likely
         

    loc_0x802d1c80: // orphan
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9
         a0 = 0x8800 << 16
         t6 = 0 + 1               // lo
         a1 = halfword [t1 + 0x346]
         [sp + 0x10] = t6
         a0 = [a0 + 0x687c]       // t9
         a2 = 0 + 0x5e
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0x5e, -1)
         a3 = t1 + 0x31d
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9

    loc_0x802d1cb8: // orphan
         a0 = 0x8800 << 16
         t4 = 0 + 1               // lo
         a1 = halfword [t1 + 0x348]
         [sp + 0x10] = t4
         a0 = [a0 + 0x687c]       // t9
         a2 = 0 + 0x5e
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0x5e, -1)
         a3 = t1 + 0x325
         t7 = 0x8880 << 16
         t7 = [t7 + 0x4050]       // t9
         t8 = 0x8801 << 16
         t9 = , unsigned  byte [t7 + 0x2a] // s4
         t5 = t9 & 1              // lo
         if                       // unlikely
         

    loc_0x802d1cf4: // orphan
         t8 = halfword [t8 - 0x10a8]
         if                       // unlikely
         

    loc_0x802d1d00: // orphan
         call 0x888010b0          // 0x888010b0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802d1d08: // orphan
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9
         t6 = , unsigned  byte [t1 + 0x10] // s4
         beql t6, 0, 0x802d2148   // fcn.802d2074+0xd4 // unlikely
         a0 = 0 + 8               // a2

    loc_0x802d1d1c: // orphan
         t4 = [s2 + 0]            // t9
         a0 = 0 + 8               // a2
         t7 = , unsigned  byte [t4 + 0x1e] // s4
         t9 = t7 & 1              // lo

    loc_0x802d1d2c: // orphan
         bnel t9, 0, 0x802d2134   // fcn.802d2074+0xc0 // likely
         a0 = 0 + 0x13f

    loc_0x802d1d34: // orphan
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0x8800 << 16
         call 0x880006bc          // 0x880006bc(0x88000000, 0x1, 0x8, -1)
         a0 += 0x5fa0
         t5 = [s2 + 0]            // t9
         at = 0 + 0xfc
         a0 = , unsigned  byte [t5 + 0]
         if                       // likely
         

    loc_0x802d1d5c: // orphan
         a0 = 0 + 0xc
         call 0x8004c874          // 0x8004c874(0xc, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 9
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9

    loc_0x802d1d78: // orphan
         a1 = 0 + 0x137
         a2 = 0 + 0x7f
         call 0x80048e30          // 0x80048e30(-1, 0x137, 0x7f, -1)
         a3 = v0                  // s4
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x137, 0x7f, 0xff)
         a1 = 0 + 7
         v1 = [sp + 0xdc]
         a3 = 0x8880 << 16
         a3 += 0x3f18
         a0 = 0 + 0x119
         a1 = 0 + 0xb5
         a2 = 0
         [sp + 0x14] = v0
         [sp + 0x10] = v1
         call 0x800495f8          // 0x800495f8(0x119, 0xb5, 0x0, 0x88803f18)
         [sp + 0x18] = v1
         goto 0x802d1ee0
         a0 = 0 + 4

    loc_0x802d1dc4: // orphan
         call 0x8006397c          // 0x8006397c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = 0x8880 << 16
         t6 = [t6 + 0x4050]       // t9
         byte [t6 + 0x28] = v0
         t4 = [s2 + 0]            // t9
         call 0x800639c0          // 0x800639c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t4 + 0]

    loc_0x802d1de4: // orphan
         t7 = 0x8880 << 16
         t7 = [t7 + 0x4050]       // t9
         t9 = 0x8880 << 16
         a0 = sp + 0xe0
         byte [t7 + 0x29] = v0
         t9 = [t9 + 0x4050]
         call 0x88000510          // 0x88000510(0x1780e0, 0x442f71dcfe116408, 0x8, -1)
         a1 = byte [t9 + 0x28]    // s4
         call 0x880006e0          // 0x880006e0(0x1780e0, 0xff, 0x8, -1)
         a0 = v0                  // s4
         t5 = 0x8880 << 16
         t5 = [t5 + 0x4050]       // t9
         call 0x80063270          // 0x80063270(0xff, 0xff, 0x8, -1)
         a0 = , unsigned  byte [t5 + 0x28] // s4
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x137
         a2 = 0 + 0x7f
         call 0x80048e30          // 0x80048e30(-1, 0x137, 0x7f, -1)
         a3 = v0                  // s4
         t1 = 0x8880 << 16
         t1 = [t1 + 0x4050]       // t9

    loc_0x802d1e44: // orphan
         a1 = byte [t1 + 0x29]
         t6 = byte [t1 + 0x28]
         if                       // likely
         

    loc_0x802d1e54: // orphan
         call 0x88000510          // 0x88000510(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0xe0
         call 0x880006e0          // 0x880006e0(0x1780e0, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         t4 = 0x8880 << 16
         t4 = [t4 + 0x4050]       // t9
         call 0x80063270          // 0x80063270(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t4 + 0x29] // s4
         a0 = 0x8800 << 16
         t7 = 0 + 1               // lo
         [sp + 0x10] = t7
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x137
         a2 = 0 + 0x97
         call 0x80048e30          // 0x80048e30(-1, 0x137, 0x97, -1)
         a3 = v0                  // s4

    loc_0x802d1e94: // orphan
         a0 = 0x8800 << 16
         call 0x880006e0          // 0x880006e0(0x88000000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x5fa0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 7
         v1 = [s2 + 0]            // t9
         a3 = 0x8880 << 16
         a3 += 0x3f20
         t9 = , unsigned  halfword [v1 + 0x26]
         [sp + 0x14] = v0
         a0 = 0 + 0x119
         [sp + 0x10] = t9
         t5 = , unsigned  halfword [v1 + 0x28]
         a1 = 0 + 0xb5
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x119, 0xb5, 0x0, 0x88803f20)
         [sp + 0x18] = t5
         a0 = 0 + 4

    loc_0x802d1ee0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1dbc
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x1, 0x8, -1)
         a1 = 0 + 4
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0xeb
         a2 = 0 + 0x83
         call 0x80048e30          // 0x80048e30(-1, 0xeb, 0x83, -1)
         a3 = v0                  // s4
         t6 = [s2 + 0]            // t9
         at = 0 + 0xfc
         t1 = 0x8880 << 16
         t4 = , unsigned  byte [t6 + 0]
         beql t4, at, 0x802d1f70  // unlikely
         a0 = 0 + 0x26

    loc_0x802d1f2c: // orphan
         t1 = [t1 + 0x4050]       // t9
         a0 = 0 + 0x26
         t7 = byte [t1 + 0x28]    // s4
         t9 = byte [t1 + 0x29]    // s4
         beql t7, t9, 0x802d1f70  // likely
         a0 = 0 + 0x26

    loc_0x802d1f44: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 5
         a0 = 0x8800 << 16

    loc_0x802d1f50: // orphan
         t5 = 0 + 1               // lo
         [sp + 0x10] = t5
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0xeb
         a2 = 0 + 0x9b
         call 0x80048e30          // 0x80048e30(-1, 0xeb, 0x9b, -1)
         a3 = v0                  // s4
         a0 = 0 + 0x26

    loc_0x802d1f70: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 6
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0xeb

    loc_0x802d1f8c: // orphan
         a2 = 0 + 0xb9
         call 0x80048e30          // 0x80048e30(-1, 0x442f71dcfe116408, 0xb9, -1)
         a3 = v0                  // s4
         v1 = [s2 + 0]            // t9
         at = 0 + 0xfc
         a0 = 0 + 0xe
         t6 = , unsigned  byte [v1 + 0]
         bnel t6, at, 0x802d1fc4  // likely
         a0 = , unsigned  halfword [v1 + 0x26]

    loc_0x802d1fb0: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         goto 0x802d1fd0
         s0 = v0                  // s4

    loc_0x802d1fc4: // orphan
         call 0x800646c8          // 0x800646c8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [v1 + 0x24] // s4
         s0 = v0                  // s4

    loc_0x802d1fc8: // orphan
         call 0x800646c8          // 0x800646c8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [v1 + 0x24] // s4
         s0 = v0                  // s4

    loc_0x802d1fd0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d1fb8
         t4 = [s2 + 0]            // t9
         call 0x8006461c          // 0x8006461c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t4 + 0x20] // s4
         at = 0 + 1               // lo
         if                       // likely
         a0 = 0 + 0x26

    loc_0x802d1fe8: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x14
         s0 = v0                  // s4

    loc_0x802d1ff4: // orphan
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 8               // a2
         a3 = 0x8880 << 16
         a3 += 0x3f28
         a0 = 0 + 0xeb
         a1 = 0 + 0xd3
         a2 = 0
         [sp + 0x10] = v0
         call 0x800495f8          // 0x800495f8(0xeb, 0xd3, 0x0, 0x88803f28)
         [sp + 0x14] = s0
         a2 = 0
         s0 = 0 + 0x82

    loc_0x802d2140: // orphan
         a3 = t1 + 0x15d
         a0 = 0 + 8               // a2

    loc_0x802d21e0: // orphan
         a0 = 0x8800 << 16
         t6 = 0 + 1               // lo
         [sp + 0x10] = t6
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x148
         a2 = 0 + 0x19d
         call 0x80048e30          // 0x80048e30(-1, 0x148, 0x19d, -1)

    loc_0x802d2218: // orphan
         t4 = 0 + 1               // lo
         [sp + 0x10] = t4
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0xbc
         a2 = 0 + 0x19d
         call 0x80048e30          // 0x80048e30(-1, 0xbc, 0x19d, -1)
         a3 = v0                  // s4
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0xbc, 0x19d, 0xff)
         a1 = 0 + 0x21
         a0 = 0x8800 << 16
         t7 = 0 + 1               // lo
         [sp + 0x10] = t7
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x148
         a2 = 0 + 0x19d
         call 0x80048e30          // 0x80048e30(-1, 0x148, 0x19d, 0xff)
         a3 = v0                  // s4
         goto 0x802d2340          // fcn.802d21fc+0x144
         

    loc_0x802d2c2c: // orphan
         [sp + 0x1c] = t8
         t9 = , unsigned  byte [t0 + 0x34c] // s4
         t1 = 0x8880 << 16
         t2 = 0x8880 << 16
         t2 += 0x1554
         t1 += 0x1138
         [sp + 0x24] = t1
         [sp + 0x28] = t2
         a0 = 0
         a1 = 0 + 3
         a2 = 0 + 0x3d
         a3 = 0 + 0x4f
         [sp + 0x38] = t6
         [sp + 0x2c] = t3
         [sp + 0x30] = t4
         [sp + 0x34] = t5
         call 0x88004804          // 0x88004804(0x0, 0x3, 0x3d, 0x4f)
         [sp + 0x20] = t9

    loc_0x802d2c74: // orphan
         t7 = v0 << 2
         t7 += v0
         t7 <<= 2
         t1 = [s0 + 0]
         t7 -= v0
         t8 = 0x8801 << 16
         t8 -= 0x12b0
         t7 <<= 2
         a1 = [sp + 0xcc]
         t9 = t7 + t8
         [t1 + 0x1c] = t9
         t3 = [s0 + 0]
         t2 = 0 + 0x208
         t5 = 0 + 0x170
         t4 = [t3 + 0x1c]
         at = 0x8800 << 16
         v1 = 0
         halfword [t4 + 0x10] = t2
         t6 = [s0 + 0]
         t2 = 0 + 3
         a2 = a1
         t7 = [t6 + 0x1c]
         t6 = 0 + 1               // lo
         halfword [t7 + 0x12] = t5
         t9 = [s0 + 0]
         t8 = [sp + 0xd8]
         [t9 + 0x54] = t8
         [at + 0x68b0] = a1
         t3 = [s0 + 0]
         t1 = [sp + 0xc8]
         [t3 + 0] = t1
         t4 = [s0 + 0]
         byte [t4 + 0x10] = t2
         t5 = [s0 + 0]
         [t5 + 0x14] = t6
         t7 = [s0 + 0]
         [t7 + 0x18] = 0
         t8 = [s0 + 0]
         byte [t8 + 0x2a] = 0

    loc_0x802d2d10: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d44
         t9 = , unsigned  byte [a2 + 2]
         at = , t9 < 0xa6         // lo
         bnel at, 0, 0x802d2d40   // likely
         v1 += 1

    loc_0x802d2d20: // orphan
         t0 = [s0 + 0]
         t3 = v1 + 1
         t2 = 0 + 1               // lo
         t1 = , unsigned  byte [t0 + 0x2a]
         t4 = t2 << t3
         t6 = t1 | t4             // t9
         byte [t0 + 0x2a] = t6
         v1 += 1

    loc_0x802d2d40: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d18
         at = , unsigned  , v1 < 4
         if                       // unlikely
         a2 += 1

    loc_0x802d2d4c: // orphan
         a0 = , unsigned  byte [a1 + 0]
         if                       // likely
         at = , a0 < 0x98         // lo

    loc_0x802d2d58: // orphan
         beql at, 0, 0x802d2d74   // unlikely
         t0 = [s0 + 0]

    loc_0x802d2d60: // orphan
         t5 = , unsigned  byte [a1 + 0x1e] // s4
         t7 = t5 & 1              // lo
         beql t7, 0, 0x802d2d84   // unlikely
         t0 = [s0 + 0]

    loc_0x802d2d70: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d50
         t0 = [s0 + 0]

    loc_0x802d2d74: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d58
         t8 = , unsigned  byte [t0 + 0x2a] // s4
         t9 = t8 | 1              // s4
         byte [t0 + 0x2a] = t9
         t0 = [s0 + 0]

    loc_0x802d2d84: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d68
         t2 = , unsigned  byte [t0 + 0x2a] // s4
         if                       // unlikely
         t3 = 0 + 1               // lo

    loc_0x802d2d90: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [t0 + 0x18] = t3
         mtc1 v0, f6
         at = 0x4100 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f18
         mtc1 0, f4
         mul.s f16, f8, f10
         div.s f6, f16, f18
         c.lt.s f4, f6
         
         bc1f 0x802d2dd8
         at = 0x3f00 << 16
         mtc1 at, f8
         goto 0x802d2de8
         swc1 f8, 0x60, sp

    loc_0x802d2de8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2dd0
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x64] = v0
         mtc1 v0, f18
         at = 0x40a0 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x4270 << 16
         mtc1 at, f10
         mtc1 0, f16
         mul.s f8, f4, f6
         div.s f18, f8, f10
         c.lt.s f16, f18
         
         bc1f 0x802d2e38
         at = 0x3f00 << 16
         mtc1 at, f4
         goto 0x802d2e48
         swc1 f4, 0x68, sp

    loc_0x802d2e48: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2e30
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x6c] = v0
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x70] = v0
         mtc1 v0, f10
         at = 0x41f0 << 16
         mtc1 at, f18
         cvt.s.w f16, f10
         at = 0x4270 << 16
         mtc1 at, f6
         mtc1 0, f8
         mul.s f4, f16, f18
         div.s f10, f4, f6
         c.lt.s f8, f10
         
         bc1f 0x802d2ea0
         at = 0x3f00 << 16
         mtc1 at, f16
         goto 0x802d2eb0
         swc1 f16, 0x74, sp

    loc_0x802d2eb0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2e98
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x78] = v0
         mtc1 v0, f6
         at = 0x40a0 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f18
         mtc1 0, f4
         mul.s f16, f8, f10
         div.s f6, f16, f18
         c.lt.s f4, f6
         
         bc1f 0x802d2f00
         at = 0x3f00 << 16
         mtc1 at, f8
         goto 0x802d2f10
         swc1 f8, 0x7c, sp

    loc_0x802d3184: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d2d88
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x88] = v0
         mtc1 v0, f10
         at = 0x4120 << 16
         mtc1 at, f16
         cvt.s.w f18, f10
         at = 0x4270 << 16
         mtc1 at, f4
         mtc1 0, f8
         mul.s f6, f18, f16
         div.s f10, f6, f4
         c.lt.s f8, f10
         
         bc1f 0x802d31d4
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x802d31e0
         

    loc_0x802d31e0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d31cc
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x8c, sp
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x90] = v0
         mtc1 v0, f16
         at = 0x4120 << 16
         mtc1 at, f12
         cvt.s.w f6, f16
         at = 0x4270 << 16
         mtc1 at, f8
         mtc1 0, f18
         lwc1 f2, 0x8c, sp
         mul.s f4, f6, f12
         div.s f10, f4, f8
         c.lt.s f18, f10
         
         bc1f 0x802d3234
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d3244
         t6 = [sp + 0x88]         // s4

    loc_0x802d3244: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d322c
         at = 0x4270 << 16
         mtc1 at, f8
         mtc1 t6, f16
         t3 = [sp + 0x90]         // s4
         a0 = [s0 + 0]
         cvt.s.w f6, f16
         a1 = 0
         a2 = 0 + 0xff            // s4
         a3 = 0 + 0x64
         [sp + 0x10] = 0
         [sp + 0x18] = 0
         mul.s f4, f12, f6
         mtc1 t3, f6
         a0 += 0x38
         div.s f18, f4, f8
         cvt.s.w f4, f6
         mul.s f8, f12, f4
         add.s f10, f2, f18
         mtc1 at, f18
         trunc.w.s f16, f10
         div.s f10, f8, f18
         mfc1 t2, f16
         
         [sp + 0x14] = t2
         add.s f16, f0, f10
         trunc.w.s f6, f16
         mfc1 t1, f6
         call 0x88000288          // 0x88000288(0xffffff57, 0x0, 0xff, 0x64)
         [sp + 0x1c] = t1
         call 0x80001ff0          // 0x80001ff0(0xffffff57, 0x0, 0xff, 0x64)
         
         call 0x80001ff0          // 0x80001ff0(0xffffff57, 0x0, 0xff, 0x64)
         [sp + 0x88] = v0
         mtc1 v0, f8
         at = 0x4120 << 16
         mtc1 at, f10
         cvt.s.w f18, f8
         at = 0x4270 << 16
         mtc1 at, f6
         mtc1 0, f4
         mul.s f16, f18, f10
         div.s f8, f16, f6
         c.lt.s f4, f8
         
         bc1f 0x802d3308
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x802d3314
         

    loc_0x802d3314: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3300
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x8c, sp
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x90] = v0
         mtc1 v0, f10
         at = 0x4120 << 16
         mtc1 at, f6
         cvt.s.w f16, f10
         at = 0x4270 << 16
         mtc1 at, f8
         mtc1 0, f18
         at = 0xbf00 << 16
         lwc1 f2, 0x8c, sp
         mul.s f4, f16, f6
         div.s f10, f4, f8
         c.lt.s f18, f10
         
         bc1fl 0x802d3374
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802d337c
         t4 = [sp + 0x88]         // s4

    loc_0x802d35dc: // orphan
         if                       // likely
         // CODE XREF from fcn.82bea63c @ 0x802d3620
         a0 = 0 + 0x26

    loc_0x802d35e0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3620
         a0 = 0 + 0x26

    loc_0x802d35e4: // orphan
         a1 = v1 + 0x19
         [sp + 0xc4] = v1
         call 0x8004c874          // 0x8004c874(-1, 0x239, 0x8, -1)
         [sp + 0x5c] = a3
         a0 = 0 + 8               // a2
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x8, 0x1, 0x8, -1)
         a2 = v0                  // s4
         v1 = [sp + 0xc4]
         a3 = [sp + 0x5c]         // t9
         t4 = [s0 + 0]
         at = 0 + 2
         v1 += 1
         t5 = t4 + a3
         halfword [t5 + 0x3c2] = v0
         if                       // likely
         a3 += 2

    loc_0x802d3628: // orphan
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0xbc]
         a2 = 0x8880 << 16
         a2 += 0x3f40
         a0 = 0 + 8               // a2
         a1 = 0 + 1               // lo
         call 0x80049148          // 0x80049148(0x8, 0x1, 0x88803f40, -1)
         a3 = v0                  // s4
         t0 = [s0 + 0]
         a0 = 0 + 0x26
         t7 = halfword [t0 + 0x3bc]
         t8 = v0 + t7
         halfword [t0 + 0x3be] = t8
         call 0x8004c874          // 0x8004c874(0x26, 0x1, 0x88803f40, 0xff)
         a1 = [sp + 0xbc]
         [sp + 0x88] = v0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x0, 0x88803f40, 0xff)
         a1 = 0 + 0x19
         a2 = 0x8880 << 16
         a2 += 0x3f48
         a0 = 0 + 8               // a2
         a1 = 0 + 1               // lo
         a3 = [sp + 0x88]         // s4
         call 0x80049148          // 0x80049148(0x8, 0x1, 0x88803f48, 0xff)
         [sp + 0x10] = v0
         t0 = [s0 + 0]
         t6 = halfword [t0 + 0x3bc]
         t2 = v0 + t6
         halfword [t0 + 0x3c0] = t2

    loc_0x802d36a4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d35dc
         at = 0x8880 << 16
         goto 0x802d3794
         [at + 0x4058] = 0

    loc_0x802d36d8: // orphan
         [t0 + 0x3ac] = t5
         a2 = [sp + 0xcc]
         // CODE XREF from fcn.82bea63c @ 0x802d3750
         a0 = , unsigned  byte [a2 + 2] // s4
         t7 = v1 << 2
         t8 = sp + 0xac
         if                       // unlikely
         at = 0 + 0xfc

    loc_0x802d36f4: // orphan
         if                       // likely
         a3 = t7 + t8             // t9

    loc_0x802d36fc: // orphan
         a0 = 0 + 0x26
         a1 = 0 + 0x2a
         [sp + 0xc4] = v1
         [sp + 0x5c] = a2
         call 0x8004c874          // 0x8004c874(0x26, 0x2a, 0x8, -1)
         [sp + 0x50] = a3
         a3 = [sp + 0x50]         // t9
         v1 = [sp + 0xc4]
         a2 = [sp + 0x5c]
         goto 0x802d3748
         [a3 + 0] = v0

    loc_0x802d3728: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d36f4
         [sp + 0xc4] = v1
         [sp + 0x5c] = a2
         call 0x80062ce0          // 0x80062ce0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x50] = a3
         a3 = [sp + 0x50]         // t9
         v1 = [sp + 0xc4]
         a2 = [sp + 0x5c]
         [a3 + 0] = v0
         // CODE XREF from fcn.82bea63c @ 0x802d3720
         v1 += 1
         at = 0 + 4
         if                       // likely
         a2 += 1

    loc_0x802d3758: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d36ec
         a0 = sp + 0xac
         a1 = v1 & 0xffff
         a2 = 0 + 8
         call 0x88002958          // 0x88002958(0x1780ac, 0x220, 0x8, -1)
         a3 = 0 + 1               // lo
         t2 = [s0 + 0]
         t6 = v0 + 0x18
         halfword [t2 + 0x3b4] = t6
         t9 = [s0 + 0]
         t3 = [sp + 0xdc]
         [t9 + 0x58] = t3
         t1 = , unsigned  byte [sp + 0xe7]
         t5 = [s0 + 0]
         t4 = t1 + 1              // lo
         byte [t5 + 0x5c] = t4

    loc_0x802d3794: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d36a8
         t7 = [sp + 0xcc]
         v0 = , unsigned  byte [t7 + 0x21]
         if                       // unlikely
         t2 = v0 & 0x3f

    loc_0x802d37a4: // orphan
         t8 = , unsigned  byte [t7 + 0x22]
         bnel t8, 0, 0x802d37c0   // unlikely
         t3 = [sp + 0xcc]

    loc_0x802d37bc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d379c
         t3 = [sp + 0xcc]
         // CODE XREF from fcn.82bea63c @ 0x802d37a8
         byte [sp + 0xab] = t2
         a1 = , signed  v0 >> 6
         t9 = , unsigned  byte [t3 + 0x22]
         a1 += 0x2e
         a0 = 0 + 0x26
         t1 = t9 & 0x7f
         call 0x8004c874          // 0x8004c874(0x26, 0x31, 0x8, -1)
         byte [sp + 0xaa] = t1
         a0 = 0 + 0x51
         call 0x8004c54c          // 0x8004c54c(0x51, 0x31, 0x8, -1)
         a1 = v0                  // s4
         v1 = , unsigned  byte [sp + 0xaa]
         at = , v1 < 0x60         // lo

    loc_0x802d37f4: // orphan
         beql at, 0, 0x802d3808   // unlikely
         [sp + 0x88] = 0

    loc_0x802d38ac: // orphan
         [sp + 0x88] = v0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x13
         a0 = [s0 + 0]
         a1 = 0x8880 << 16
         a1 += 0x3f54
         a2 = [sp + 0x88]         // s4
         a3 = v0                  // s4
         call 0x8007be30          // 0x8007be30(0xffffff1f, 0x88803f54, 0xff, 0xff)
         a0 += 0x1dd
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x88803f54, 0xff, 0xff)
         a1 = 0 + 0xf
         [sp + 0x88] = v0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0xf, 0xff, 0xff)
         a1 = 0 + 0x13
         a0 = [s0 + 0]
         a1 = 0x8880 << 16
         a1 += 0x3f5c
         a2 = [sp + 0x88]         // s4
         a3 = v0                  // s4
         call 0x8007be30          // 0x8007be30(0xffffff1f, 0x88803f5c, 0xff, 0xff)
         a0 += 0x21d
         goto 0x802d3aa8
         t3 = [sp + 0xcc]

    loc_0x802d3a28: // orphan
         a1 &= 0xffff
         t7 = [sp + 0xcc]
         a0 = 0 + 6
         t8 = [t7 + 8]
         call 0x8004c594          // 0x8004c594(0x6, 0x6408, 0x8, -1)
         a1 = v0 - t8
         t6 = [sp + 0xcc]
         a0 = 0 + 7
         a1 = , unsigned  byte [t6 + 0x1d]
         call 0x8004c594          // 0x8004c594(0x7, 0x9, 0x8, -1)
         a1 += 1
         a0 = [s0 + 0]

    loc_0x802d3a58: // orphan
         // CODE XREF from fcn.802d39fc @ 0x802d3a1c
         a1 = 0 + 0x40
         a2 = 0 + 0x26
         a3 = 0 + 0x11
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x40, 0x26, 0x11)
         a0 += 0x29d
         a0 = 0 + 0x26
         // CODE XREF from fcn.802d34ac @ +0x540
         call 0x8004c874          // 0x8004c874(0x26, 0x40, 0x26, 0x11)
         a1 = 0 + 0x12
         t2 = [sp + 0xcc]
         [sp + 0x88] = v0

    loc_0x802d3a80: // orphan
         call 0x800635e0          // 0x800635e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t2 + 1]
         a0 = [s0 + 0]
         a1 = 0x8880 << 16
         a1 += 0x3f7c
         a2 = [sp + 0x88]         // s4
         a3 = v0                  // s4
         call 0x8007be30          // 0x8007be30(0xffffff1f, 0x88803f7c, 0xff, 0xff)
         a0 += 0x2dd
         t3 = [sp + 0xcc]

    loc_0x802d3aa8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3910
         a0 = 0 + 0x10
         a1 = 0 + 1               // lo
         t9 = , unsigned  byte [t3 + 0x1e] // s4
         t1 = t9 & 1              // lo
         if                       // likely
         

    loc_0x802d3ac0: // orphan
         call 0x80049290          // 0x80049290(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = t3 + 0x34
         t5 = [s0 + 0]
         t4 = v0 + 0x57
         at = 0 + 0xfc
         halfword [t5 + 0x346] = t4
         t7 = [sp + 0xcc]
         a1 = 0 + 0x2b
         t6 = [sp + 0xcc]
         a0 = , unsigned  byte [t7 + 0] // s4
         if                       // likely
         

    loc_0x802d3af0: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x26
         [sp + 0x9c] = v0
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         a0 = [s0 + 0]
         a1 = 0x8880 << 16
         a1 += 0x3f84
         a2 = v0                  // s4
         a3 = [sp + 0x9c]         // s4
         call 0x8007be30          // 0x8007be30(0xffffff1f, 0x88803f84, 0xff, 0xff)
         a0 += 0x325
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x88803f84, 0xff, 0xff)
         a1 = 0 + 3
         a0 = [s0 + 0]
         a1 = 0x8880 << 16
         a1 += 0x3f8c
         a2 = v0                  // s4
         a3 = [sp + 0x9c]         // s4
         call 0x8007be30          // 0x8007be30(0xffffff1f, 0x88803f8c, 0xff, 0xff)
         a0 += 0x335
         t8 = [s0 + 0]
         goto 0x802d3be8
         byte [t8 + 0x31d] = 0

    loc_0x802d3b58: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3ae8
         call 0x80064474          // 0x80064474(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [t6 + 0x16]
         if                       // likely
         v1 = v0 & 0xff           // s4

    loc_0x802d3b68: // orphan
         t2 = [s0 + 0]
         goto 0x802d3b90
         byte [t2 + 0x31d] = 0

    loc_0x802d3b74: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3b60
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = v1 - 1
         a0 = [s0 + 0]
         a1 = v0                  // s4
         call 0x8000b580          // 0x8000b580(0xffffff1f, 0xff, 0x8, -1)
         a0 += 0x31d

    loc_0x802d3b90: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3b6c
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         a0 = [s0 + 0]
         t9 = [sp + 0xcc]
         a1 = 0x8880 << 16
         a1 += 0x3f94
         a2 = v0                  // s4
         a0 += 0x325
         call 0x8007be30          // 0x8007be30(0x100000244, 0x88803f94, 0xff, -1)
         a3 = , unsigned  byte [t9 + 0x1d]
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x88803f94, 0xff, 0x9)
         a1 = 0 + 3
         a0 = [s0 + 0]
         t1 = [sp + 0xcc]
         a1 = 0x8880 << 16
         a1 += 0x3f9c
         a2 = v0                  // s4
         a0 += 0x335
         call 0x8007be30          // 0x8007be30(0x100000254, 0x88803f9c, 0xff, 0x9)
         a3 = , unsigned  byte [t1 + 0] // s4

    loc_0x802d3be8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3b50
         a0 = 0 + 0x26
         call 0x8004c874          // 0x8004c874(0x26, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0 + 8               // a2
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x8, 0x1, 0x8, -1)
         a2 = v0                  // s4
         t0 = [s0 + 0]
         t3 = halfword [t0 + 0x346]
         t4 = v0 + t3
         t5 = t4 + 0xa
         halfword [t0 + 0x348] = t5

    loc_0x802d3c18: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3ab8
         a1 = 0x8800 << 16
         a1 += 0xe4c
         a2 = a1
         a3 = a1
         call 0x88005b60          // 0x88005b60(-1, 0x88000e4c, 0x88000e4c, 0x88000e4c)
         a0 = 0
         ra = [sp + 0x4c]         // t9
         s0 = [sp + 0x48]
         sp += 0xc8
         ret                      // t9
         

    loc_0x802d3ed8: // orphan
         // CODE XREF from fcn.802d39fc @ +0x3c8
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802d3ee8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802d3f38: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802d3f48: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802d4174: // orphan
         if                       // fcn.802d9024+0x314 // unlikely
         if                       // fcn.802d9024+0x338 // unlikely

    loc_0x802d4180: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802d4198: // orphan
         if                       // fcn.802caae0+0xecdc // unlikely
         if                       // fcn.802caae0+0xecf0 // unlikely

    loc_0x802d478c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802cb014+0x17354 // unlikely
         if                       // unlikely

    loc_0x802d47d0: // orphan
         
         
         
         
         
         if                       // fcn.802cb014+0x17874 // unlikely
         if                       // fcn.802cb014+0x17888 // unlikely

    loc_0x802d4ae4: // orphan
         at = 0x8000 << 16
         goto 0x802d4b08
         t7 |= at

    loc_0x802d4b18: // orphan
         mtc1 v0, f6
         at = 0x4000 << 16
         mtc1 at, f10
         cvt.s.w f0, f6
         t0 = 0 + 1               // lo
         add.s f8, f0, f0
         div.s f16, f8, f10
         cfc1 t9, 31
         ctc1 t0, 31
         
         cvt.w.s f18, f16
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x802d4b58: // orphan
         mtc1 at, f18
         t0 = 0 + 1               // lo
         sub.s f18, f16, f18
         ctc1 t0, 31
         
         cvt.w.s f18, f18
         cfc1 t0, 31
         
         t0 &= 0x78
         if                       // unlikely
         

    loc_0x802d4b84: // orphan
         mfc1 t0, f18
         at = 0x8000 << 16
         goto 0x802d4bac
         t0 |= at

    loc_0x802d4b94: // orphan
         goto 0x802d4bac
         t0 = 0 - 1               // s2

    loc_0x802d4b9c: // orphan
         mfc1 t0, f18
         
         if                       // unlikely
         

    loc_0x802d4bac: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802d4b8c, 0x802d4b94
         t1 = [s0 + 0]
         // CODE XREF from fcn.802d39fc @ +0x460
         ctc1 t9, 31
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [t1 + 0x152] = t0
         mtc1 v0, f4
         at = 0x4120 << 16
         // CODE XREF from fcn.802d39fc @ +0x464
         mtc1 at, f8
         cvt.s.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f16
         t3 = 0 + 1               // lo
         mul.s f10, f6, f8
         div.s f18, f10, f16
         cfc1 t2, 31
         ctc1 t3, 31
         
         cvt.w.s f4, f18
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // fcn.802d4c44+0x4 // likely
         at = 0x4f00 << 16

    loc_0x802d5778: // orphan
         
         a0 = 0x8890 << 16
         a0 = [a0 + 0x4190]       // t9
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x889035fc          // 0x889035fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x48
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x802d5b94: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3ee0
         t0 = halfword [v1 + 0x13e]
         t2 = halfword [v1 + 0x150]
         t1 = t0 << 2
         t1 -= t0
         t1 <<= 2
         t1 -= t0
         t1 <<= 8
         div 0, t1, t2
         t3 = lo
         t5 = t4 - t3
         halfword [v1 + 0x146] = t5
         v1 = [s0 + 0]
         if                       // likely
         

    loc_0x802d5bcc: // orphan
         break 7

    loc_0x802d5bd0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802d5bdc: // orphan
         if                       // likely
         

    loc_0x802d5be8: // orphan
         t6 = halfword [v1 + 0x144]
         t7 = halfword [v1 + 0x15a]
         t8 = t6 + t7
         halfword [v1 + 0x144] = t8
         v1 = [s0 + 0]
         a0 = halfword [v1 + 0x150]
         t9 = halfword [v1 + 0x152]
         v0 = halfword [v1 + 0x13e]
         t0 = a0 - t9
         if                       // likely
         t1 = 0 + 2

    loc_0x802d5f54: // orphan
         t9 = byte [v1 + 0x140]   // s4
         t0 = t8 - t9
         halfword [v1 + 0x13e] = t0
         v1 = [s0 + 0]
         t9 = 0 + 0x500
         t4 = halfword [v1 + 0x156]
         t1 = halfword [v1 + 0x13e]
         t2 = t1 << 4
         t2 -= t1
         t2 <<= 4
         div 0, t2, t4
         t3 = lo
         halfword [v1 + 0x142] = t3
         v1 = [s0 + 0]
         if                       // likely
         

    loc_0x802d5fe4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3f30
         if                       // unlikely
         

    loc_0x802d5fec: // orphan
         break 7

    loc_0x802d5ff0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802d60d4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d3f40
         beql v0, 0, 0x802d6130   // unlikely
         v1 = [s0 + 0]

    loc_0x802d66a8: // orphan
         a1 <<= 0x10
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x1c] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         add.s f10, f2, f6
         trunc.w.s f8, f10
         mfc1 t7, f8
         call 0x80044270          // 0x80044270(-1, 0xffff6408, 0x8, -1)
         [sp + 0x18] = t7
         v1 = [s0 + 0]
         t9 = 0xe700 << 16
         t6 = 0xe200 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t7 = 0xf0a << 16
         t7 |= 0x7008
         t5 = v1 + 8
         [s0 + 0] = t5
         t6 |= 0x1c
         [v1 + 0] = t6
         [v1 + 4] = t7
         t8 = [sp + 0x1a4]
         a2 = 0 + 0x178
         beql t8, 0, 0x802d67f4   // fcn.802ca910+0xbee4 // likely
         t4 = [s1 + 0]

    loc_0x802d8558: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bade4
         [v0 + 0] = t6
         a0 = 0x8890 << 16
         a0 = [a0 + 0x41b0]       // t9
         t7 = [a0 + 0x240]        // t9
         bnel t7, 0, 0x802d8580   // likely
         t9 = [a0 + 0x244]

    loc_0x802d8570: // orphan
         byte [at + 0x41b8] = t8
         at = 0x8890 << 16
         [at + 0x41b4] = 0
         t9 = [a0 + 0x244]

    loc_0x802d8580: // orphan
         call 0x800033dc          // 0x800033dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t9
         t9 = [sp + 0x1c]
         call t9                  // t9(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x20
         // CODE XREF from fcn.802caa18 @ 0x802caa58
         ret
         

    loc_0x802d9774: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d4190
         s3 = 0 + 0xa5
         t7 = , unsigned  byte [v0 + 0x10]

    loc_0x802d977c: // orphan
         beql t7, 0, 0x802d98e4   // fcn.802caae0+0xee04 // likely
         t7 = [sp + 0x40]         // s4

    loc_0x802d9b88: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae34
         s0 = , unsigned  halfword [sp + 0x80]
         a0 = [sp + 0x90]         // s4
         a1 = s0 << 2
         a1 -= s0
         call 0x80002eb8          // 0x80002eb8(0xff, 0x1801b, 0x8, -1)
         a1 <<= 5
         t7 = [sp + 0x9c]         // s4
         a0 = 0
         v1 = v0                  // s4
         if                       // unlikely
         [t7 + 0] = v0

    loc_0x802d9bb4: // orphan
         v0 = s0 & 3
         if                       // likely
         a1 = v0

    loc_0x802d9bc0: // orphan
         v0 = 0 - 1               // s2

    loc_0x802d9bc4: // orphan
         a0 += 1
         [v1 + 0] = 0
         byte [v1 + 4] = v0
         if                       // likely
         // CODE XREF from fcn.82bea63c @ 0x802bae40
         v1 += 0x60

    loc_0x802d9bd8: // orphan
         if                       // unlikely
         v0 = 0 - 1               // s2

    loc_0x802d9bdc: // orphan
         v0 = 0 - 1               // s2

    loc_0x802d9be0: // orphan
         a0 += 4
         [v1 + 0x60] = 0
         byte [v1 + 0x64] = v0
         [v1 + 0xc0] = 0
         byte [v1 + 0xc4] = v0
         [v1 + 0x120] = 0
         byte [v1 + 0x124] = v0
         v1 += 0x180
         [v1 - 0x180] = 0
         if                       // likely
         byte [v1 - 0x17c] = v0

    loc_0x802d9c0c: // orphan
         t8 = [sp + 0x94]
         t9 = [sp + 0x98]
         t0 = [sp + 0x9c]         // s4
         a3 = , unsigned  byte [sp + 0xa3]
         a0 = [t8 + 0]            // t9
         a1 = [t9 + 0]
         call 0x88a00020          // 0x88a00020(-1, -1, 0x8, 0x0)
         a2 = [t0 + 0]            // s4
         ra = [sp + 0x3c]         // t9
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]         // s4
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t3
         s6 = [sp + 0x30]         // t9
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // t9
         sp += 0x90

    loc_0x802d9ca4: // orphan
         v0 = , unsigned  byte [s4 + 0x10]
         s3 = [s4 + 0xc]
         fp = 0
         beql v0, 0, 0x802d9da0   // likely
         t4 = [sp + 0x44]         // t9

    loc_0x802d9cb8: // orphan
         t6 = [s3 + 0]            // s4
         a2 = fp
         a3 = 0 + 1               // lo
         t7 = [t6 + 0xc]
         beql t7, 0, 0x802d9d90   // unlikely
         fp += 1

    loc_0x802d9cd0: // orphan
         a0 = [s4 + 0]
         call 0x8006218c          // 0x8006218c(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s4 + 4]            // t9
         if                       // unlikely
         s2 = v0                  // s4

    loc_0x802d9ce4: // orphan
         v0 = [s3 + 0]            // s4
         s1 = 0
         t8 = , unsigned  byte [v0 + 0x15] // s4
         s0 = [v0 + 0x10]
         if                       // unlikely
         

    loc_0x802d9cfc: // orphan
         a0 = [s0 + 0]

    loc_0x802d9d00: // orphan
         a1 = 0 + 1               // lo
         a2 = s2
         call 0x8006249c          // 0x8006249c(-1, 0x1, -1, -1)
         a0 += 8
         v1 = [s4 + 0]
         beql s5, v1, 0x802d9d28  // unlikely
         v0 = [s0 + 0]

    loc_0x802d9d1c: // orphan
         bnel s6, v1, 0x802d9d60  // likely
         t1 = [s3 + 0]            // s4

    loc_0x802d9d24: // orphan
         v0 = [s0 + 0]

    loc_0x802d9d28: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae44
         a1 = , unsigned  byte [v0 + 8]
         if                       // unlikely
         at = , a1 < 0xfc         // lo

    loc_0x802d9d34: // orphan
         beql at, 0, 0x802d9d60   // unlikely
         // CODE XREF from fcn.802d39fc @ +0x7f8
         t1 = [s3 + 0]            // s4

    loc_0x802d9d3c: // orphan
         t9 = , unsigned  byte [v0 + 0x26] // s4
         a3 = 0 + 3
         t0 = t9 & 1              // lo
         bnel t0, 0, 0x802d9d60   // likely
         // CODE XREF from fcn.802d39fc @ +0x7fc
         t1 = [s3 + 0]            // s4

    loc_0x802d9d50: // orphan
         a0 = byte [s7 + 0]
         call 0x8005e8a0          // 0x8005e8a0(0x0, 0x442f71dcfe116408, 0x8, -1)
         a2 = , unsigned  halfword [v0 + 0x1e]

    loc_0x802d9d5c: // orphan
         t1 = [s3 + 0]            // s4

    loc_0x802d9d60: // orphan
         s1 += 1
         s0 += 4
         t2 = , unsigned  byte [t1 + 0x15] // s4
         at = , unsigned  , s1 < t2
         bnel at, 0, 0x802d9d00   // unlikely
         a0 = [s0 + 0]            // t9

    loc_0x802d9d78: // orphan
         call 0x8006229c          // 0x8006229c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2

    loc_0x802d9d80: // orphan
         t3 = [s3 + 0]            // s4
         [t3 + 0xc] = 0
         v0 = , unsigned  byte [s4 + 0x10]
         fp += 1

    loc_0x802d9d90: // orphan
         at = , unsigned  , fp < v0
         if                       // unlikely
         s3 += 4

    loc_0x802d9d9c: // orphan
         t4 = [sp + 0x44]         // t9

    loc_0x802d9da0: // orphan
         at = 0 + 3
         s4 += 0x14
         t5 = t4 + 1
         if                       // likely
         [sp + 0x44] = t5

    loc_0x802d9db4: // orphan
         // CODE XREF from fcn.802caae0 @ 0x802cab50
         ra = [sp + 0x3c]         // t9
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]         // s4
         s3 = [sp + 0x24]

    loc_0x802d9dc8: // orphan
         // CODE XREF from fcn.802caae0 @ 0x802cab54
         s4 = [sp + 0x28]
         // CODE XREF from fcn.802ba56c @ +0x8dc
         s5 = [sp + 0x2c]         // t3
         s6 = [sp + 0x30]         // t9
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x48

    loc_0x802da138: // orphan
         t7 = , unsigned  byte [a0 + 0]
         beql t7, 0, 0x802da16c   // likely
         v0 += 1

    loc_0x802da144: // orphan
         t8 = , unsigned  byte [a3 + 3] // s4
         t0 = a1 + v0
         v1 += 2
         t9 = t8 + 1

    loc_0x802da154: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae60
         byte [a3 + 3] = t9
         t1 = , unsigned  byte [t0 + 0]
         byte [v1 - 2] = t1
         t2 = , unsigned  byte [a0 + 0]
         byte [v1 - 1] = t2
         v0 += 1

    loc_0x802da16c: // orphan
         at = , unsigned  , v0 < 0x39
         if                       // unlikely
         a0 += 1

    loc_0x802da178: // orphan
         a1 = , unsigned  byte [a3 + 7] // s4
         t3 = , unsigned  byte [a3 + 3] // s4
         v0 = 0
         a0 = s0 + 0x64
         t4 = t3 + a1
         byte [a3 + 8] = t4
         t5 = , unsigned  byte [s0 + 0x63] // s4
         t6 = t4 & 0xff           // t3
         t7 = t6 << 1
         v1 = a3 + t7
         t8 = t5 & 0xff           // s4
         v1 += 9
         if                       // unlikely
         byte [a3 + 4] = t5

    loc_0x802da1b0: // orphan
         a1 = 0 + 1               // lo
         t9 = , unsigned  byte [a0 + 0]

    loc_0x802da1b8: // orphan
         byte [v1 + 1] = a1
         v0 += 1
         byte [v1 + 0] = t9
         t0 = , unsigned  byte [a3 + 4] // s4
         a0 += 1
         v1 += 2
         at = , unsigned  , v0 < t0
         bnel at, 0, 0x802da1b8   // unlikely
         t9 = , unsigned  byte [a0 + 0]

    loc_0x802da1dc: // orphan
         t2 = , unsigned  byte [a3 + 1] // s4
         t5 = , unsigned  byte [a3 + 2] // s4
         t8 = , unsigned  byte [a3 + 3] // s4
         t4 = 0 + t2              // s4
         t1 = , unsigned  byte [a3 + 4] // s4
         // CODE XREF from fcn.802d39fc @ +0x830
         byte [a3 + 0] = 0
         t7 = t4 + t5
         byte [a3 + 0] = t4
         t0 = t7 + t8
         byte [a3 + 0] = t7
         // CODE XREF from fcn.802d39fc @ +0x834
         byte [a3 + 0] = t0
         t2 = t0 + t1
         byte [a3 + 0] = t2
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // t9
         

    loc_0x802da430: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae7c
         s2 += 0x1c60
         [s2 + 0] = v0
         a0 = s0
         call 0x80002eb8          // 0x80002eb8(0x104, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802caae0 @ +0xac
         a1 = 0 + 0x114
         s3 = 0x88a0 << 16
         // CODE XREF from fcn.802caae0 @ 0x802cab84
         s3 += 0x1c64
         [s3 + 0] = v0
         a0 = s0
         v1 = s1
         a1 = s1 << 1
         call 0x80002eb8          // 0x80002eb8(0x104, 0x885ee3b9fc22fb7a, 0x8, -1)
         [sp + 0x38] = s1
         t6 = [s2 + 0]            // s4
         a0 = s0
         [t6 + 0x9c] = v0
         a1 = [sp + 0x38]
         a1 <<= 1
         call 0x80002eb8          // 0x80002eb8(0x104, 0x1fc22fb7a, 0x8, -1)
         a1 += 2
         t7 = [s3 + 0]            // s4
         a0 = s0
         [t7 + 0xf0] = v0
         v1 = , unsigned  halfword [sp + 0x3c]
         s1 = v1 << 1
         a1 = s1
         call 0x80002eb8          // 0x80002eb8(0x104, 0x1fffe, 0x8, -1)
         [sp + 0x34] = v1
         t8 = [s2 + 0]            // s4
         a0 = s0
         [t8 + 0xa4] = v0
         a1 = [sp + 0x34]
         a1 <<= 1
         a1 += 2
         call 0x80002eb8          // 0x80002eb8(0x104, 0x20000, 0x8, -1)
         [sp + 0x2c] = a1
         t9 = [s3 + 0]            // s4
         a0 = s0
         a1 = s1
         call 0x80002eb8          // 0x80002eb8(0x104, 0x1fffe, 0x8, -1)
         [t9 + 0xf8] = v0
         t0 = [s2 + 0]            // s4
         a0 = s0
         [t0 + 0xac] = v0
         call 0x80002eb8          // 0x80002eb8(0x104, 0x1fffe, 0x8, -1)
         a1 = [sp + 0x2c]
         t1 = [s3 + 0]            // s4
         s1 = 0x8800 << 16
         s1 += 0x6868
         [t1 + 0x100] = v0
         a1 = byte [s1 + 0]       // s4
         a0 = 0 + 0x23
         a2 = 0
         call 0x8006218c          // 0x8006218c(0x23, 0xff, 0x0, -1)
         a3 = 0
         s0 = v0                  // s4
         a0 = [s2 + 0]            // s4
         a1 = 0 + 1               // lo
         call 0x80062390          // 0x80062390(0xff, 0x1, 0x0, 0x0)
         a2 = v0                  // s4
         // CODE XREF from fcn.82bea63c @ 0x802bae8c
         call 0x8006229c          // 0x8006229c(0xff, 0x1, 0xff, 0x0)
         a0 = s0                  // s4
         a0 = [s2 + 0]            // s4
         call 0x88a00978          // 0x88a00978(0xff, 0x1, 0xff, 0x0)
         a1 = [s3 + 0]            // s4

    loc_0x802da534: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae90
         a0 = 0 + 0x22
         a1 = byte [s1 + 0]
         a2 = 0
         call 0x8006218c          // 0x8006218c(0x22, 0x0, 0x0, -1)
         a3 = 0
         t2 = [s2 + 0]            // t9
         s0 = v0                  // s4
         a1 = [sp + 0x38]
         a2 = v0                  // s4
         call 0x80062390          // 0x80062390(0x22, 0xfe117dbd, 0xff, 0x0)
         a0 = [t2 + 0x9c]         // t9
         t3 = [s2 + 0]            // t9
         a0 = s0                  // s4
         call 0x8006229c          // 0x8006229c(0xff, 0xfe117dbd, 0xff, 0x0)
         byte [t3 + 0x98] = v0
         v1 = [s2 + 0]            // t9
         t4 = [s3 + 0]            // s4
         a2 = , unsigned  byte [v1 + 0x98] // s4
         a0 = [v1 + 0x9c]         // t9
         a1 = [t4 + 0xf0]         // s4
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xff, 0xff, 0x0)
         a2 <<= 1
         t5 = [s2 + 0]            // t9
         t7 = [s3 + 0]            // s4
         a0 = 0 + 0x12
         t6 = , unsigned  byte [t5 + 0x98] // s4
         a1 = 0
         a2 = 0
         a3 = 0
         // CODE XREF from fcn.802ba56c @ +0x928
         call 0x8006218c          // 0x8006218c(0x12, 0x0, 0x0, 0x0)
         byte [t7 + 0xef] = t6
         t8 = [s2 + 0]            // t9
         s0 = v0                  // s4
         a1 = [sp + 0x34]

    loc_0x802da5bc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802bae98
         a2 = v0                  // s4
         call 0x80062390          // 0x80062390(-1, 0x442f71dcfe116408, 0xff, -1)
         a0 = [t8 + 0xa4]         // t9
         t9 = [s2 + 0]
         a0 = s0
         call 0x8006229c          // 0x8006229c(0x104, 0x442f71dcfe116408, 0xff, -1)
         byte [t9 + 0xa0] = v0
         v1 = [s2 + 0]            // t9
         t0 = [s3 + 0]            // s4
         a2 = , unsigned  byte [v1 + 0xa0] // s4
         a0 = [v1 + 0xa4]         // t9
         a1 = [t0 + 0xf8]         // s4
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xff, 0xff, -1)
         a2 <<= 1
         t1 = [s2 + 0]            // t9
         t3 = [s3 + 0]            // s4
         a0 = 0 + 0x12
         t2 = , unsigned  byte [t1 + 0xa0] // s4
         a1 = 0
         a2 = 0 + 1               // lo
         a3 = 0
         call 0x8006218c          // 0x8006218c(0x12, 0x0, 0x1, 0x0)
         byte [t3 + 0xf4] = t2
         t4 = [s2 + 0]            // t9
         s0 = v0                  // s4
         a1 = [sp + 0x34]
         a2 = v0                  // s4
         call 0x80062390          // 0x80062390(0x12, 0xffff, 0xff, 0x0)
         // CODE XREF from fcn.802d39fc @ +0x85c
         a0 = [t4 + 0xac]         // t9
         t5 = [s2 + 0]            // t9
         a0 = s0                  // s4
         call 0x8006229c          // 0x8006229c(0xff, 0xffff, 0xff, 0x0)
         byte [t5 + 0xa8] = v0
         v1 = [s2 + 0]            // t9
         t6 = [s3 + 0]            // s4
         a2 = , unsigned  byte [v1 + 0xa8] // s4
         a0 = [v1 + 0xac]         // t9
         a1 = [t6 + 0x100]        // s4
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xff, 0xff, 0x0)
         a2 <<= 1
         t7 = [s2 + 0]            // t9
         t9 = [s3 + 0]            // s4
         s2 = 0 + 4
         t8 = , unsigned  byte [t7 + 0xa8] // s4
         s0 = 0
         s1 = 0
         byte [t9 + 0xfc] = t8

    loc_0x802da678: // orphan
         t0 = [s3 + 0]            // s4
         a0 = s0
         t1 = t0 + s1
         call 0x88a015a0          // 0x88a015a0(0x104, 0x442f71dcfe116408, 0x8, -1)
         [t1 + s0] = 0
         s0 += 1
         if                       // likely
         s1 += 4

    loc_0x802da698: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]         // s4
         ret
         sp += 0x48

    loc_0x802da784: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802baeb0
         if                       // likely
         a0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da78c: // orphan
         call 0x8006378c          // 0x8006378c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802d39fc @ +0x870
         halfword [sp + 0x22] = a3
         call 0x88a00fd4          // 0x88a00fd4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 & 0xff           // s4
         if                       // unlikely
         a3 = , unsigned  halfword [sp + 0x22]

    loc_0x802da7a4: // orphan
         // CODE XREF from fcn.802d39fc @ +0x874
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7b0: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7bc: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7c8: // orphan
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]       // s4
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da7dc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da79c
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]       // s4
         t6 = 0 + 0x14
         halfword [sp + 0x20] = t6
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da7f8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da7a8
         a0 = [a0 + 0x1c64]       // t9
         t7 = 0 + 0xc
         halfword [sp + 0x20] = t7
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1] // s4

    loc_0x802da810: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da7b4
         a0 = [a0 + 0x1c64]       // t9
         t8 = 0 + 1               // lo
         a1 = a0 + v0
         v1 = , unsigned  byte [a1 + 1] // s4
         byte [sp + 0x1f] = t8
         goto 0x802da840
         halfword [sp + 0x20] = v1

    loc_0x802da82c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da7c0
         a0 = [a0 + 0x1c64]       // t9
         t9 = 0 + 0x19
         halfword [sp + 0x20] = t9
         a1 = a0 + v0
         v1 = , unsigned  byte [a1 + 1] // s4

    loc_0x802da840: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802da7d4, 0x802da7f0, 0x802da808, 0x802da824
         t2 = , unsigned  halfword [sp + 0x20]
         at = , v1 < t2
         if                       // unlikely
         // CODE XREF from fcn.802d39fc @ +0x87c
         

    loc_0x802da850: // orphan
         t3 = , unsigned  byte [a1 + 5] // s4
         a3 = 0
         t4 = t3 << 1
         v1 = a0 + t4
         // CODE XREF from fcn.802d39fc @ +0x880
         v1 += 9
         [sp + 0x24] = v1

    loc_0x802da868: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da848
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da870: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x1758, 0x802da784
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da878: // orphan
         // CODE XREF from fcn.802ba56c @ +0x948
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 + 0x22

    loc_0x802da884: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 0x12

    loc_0x802da890: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 + 0x12

    loc_0x802da89c: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da8a4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da870
         a0 = [a0 + 0x1c64]       // t9
         t5 = 0 + 0x14
         halfword [sp + 0x20] = t5
         t6 = , unsigned  byte [a0 + 0]
         v1 = a0 + 9
         at = , t6 < 0x14         // lo
         if                       // likely
         

    loc_0x802da8c4: // orphan
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da8cc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da8bc
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da8d4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da87c
         call 0x8005caa4          // 0x8005caa4(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]       // s4
         halfword [sp + 0x20] = v0
         t8 = v0 & 0xffff         // s4
         t7 = , unsigned  byte [a0 + 0xef] // s4
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t7 < t8
         if                       // unlikely
         

    loc_0x802da900: // orphan
         v1 = [a0 + 0xf0]         // t9
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da90c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da8f8
         goto 0x802da990
         v1 = [sp + 0x24]         // t9

    loc_0x802da914: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da888
         call 0x80053230          // 0x80053230(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]       // s4
         halfword [sp + 0x20] = v0
         t2 = v0 & 0xffff         // s4
         t9 = , unsigned  byte [a0 + 0xf4] // s4
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t9 < t2
         if                       // unlikely
         

    loc_0x802da940: // orphan
         v1 = [a0 + 0xf8]         // t9

    loc_0x802da944: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802baec0
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da94c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da938
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da954: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da894
         call 0x80053230          // 0x80053230(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]       // s4
         halfword [sp + 0x20] = v0
         t4 = v0 & 0xffff         // s4
         t3 = , unsigned  byte [a0 + 0xfc] // s4
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t3 < t4
         bnel at, 0, 0x802da990   // unlikely
         v1 = [sp + 0x24]

    loc_0x802da980: // orphan
         v1 = [a0 + 0x100]        // t9
         a3 = 0
         [sp + 0x24] = v1
         v1 = [sp + 0x24]         // t9

    loc_0x802da990: // orphan
         // XREFS: CODE 0x802da868  CODE 0x802da89c  CODE 0x802da8cc  
         // XREFS: CODE 0x802da90c  CODE 0x802da94c  CODE 0x802da978  
         if                       // likely
         ra = [sp + 0x14]

    loc_0x802da998: // orphan
         t0 = , unsigned  halfword [sp + 0x20] // s4
         a1 = 0
         a0 = 0
         if                       // unlikely
         t1 = t0 & 3

    loc_0x802da9ac: // orphan
         if                       // unlikely
         a2 = t1

    loc_0x802da9b4: // orphan
         v0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da9b8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da9dc
         t5 = , unsigned  byte [v1 + 0] // s4
         a0 += 1
         if                       // unlikely
         

    loc_0x802da9c8: // orphan
         t6 = , unsigned  byte [v1 + 1] // a2
         a1 = 0 + 1               // lo
         a3 -= t6
         a3 += 0x63
         a3 &= 0xffff

    loc_0x802da9dc: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da9c0
         if                       // likely
         v1 += 2

    loc_0x802da9e4: // orphan
         if                       // unlikely
         

    loc_0x802da9ec: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da9ac
         v0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da9f0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa80
         t7 = , unsigned  byte [v1 + 0] // s4
         a0 += 4
         bnel v0, t7, 0x802daa18  // unlikely
         t9 = , unsigned  byte [v1 + 2]

    loc_0x802daa00: // orphan
         t8 = , unsigned  byte [v1 + 1] // a2
         a1 = 0 + 1               // lo
         a3 -= t8
         a3 += 0x63
         a3 &= 0xffff
         t9 = , unsigned  byte [v1 + 2]

    loc_0x802daa18: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802da9f8
         v1 += 2
         bnel v0, t9, 0x802daa3c  // likely
         t3 = , unsigned  byte [v1 + 2] // s4

    loc_0x802daa24: // orphan
         t2 = , unsigned  byte [v1 + 1] // a2
         a1 = 0 + 1               // lo
         a3 -= t2
         a3 += 0x63
         a3 &= 0xffff
         t3 = , unsigned  byte [v1 + 2]

    loc_0x802daa3c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa1c
         v1 += 2
         bnel v0, t3, 0x802daa60  // likely
         t5 = , unsigned  byte [v1 + 2] // s4

    loc_0x802daa48: // orphan
         t4 = , unsigned  byte [v1 + 1] // a2
         a1 = 0 + 1               // lo
         a3 -= t4
         a3 += 0x63
         a3 &= 0xffff
         t5 = , unsigned  byte [v1 + 2]

    loc_0x802daa60: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa40
         v1 += 2
         if                       // likely
         

    loc_0x802daa6c: // orphan
         t6 = , unsigned  byte [v1 + 1] // a2
         // CODE XREF from fcn.802d39fc @ +0x890
         a1 = 0 + 1               // lo
         a3 -= t6
         a3 += 0x63
         a3 &= 0xffff

    loc_0x802daa80: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa64
         if                       // likely
         v1 += 2

    loc_0x802daa88: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802da9a4, 0x802da9e4
         if                       // likely
         v1 = , unsigned  byte [sp + 0x2f]

    loc_0x802daa90: // orphan
         t7 = , unsigned  byte [sp + 0x1f] // lo
         beql t7, 0, 0x802daac0   // unlikely
         v0 = a3 & 0xff           // s4

    loc_0x802daa9c: // orphan
         goto 0x802daabc
         a3 = , unsigned  byte [sp + 0x2f]

    loc_0x802daaa4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa88
         at = , v1 < a3
         if                       // likely
         v0 = a3                  // s2

    loc_0x802daab0: // orphan
         goto 0x802daabc
         a3 = v1 & 0xffff

    loc_0x802daab8: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daaa8
         a3 = v0 & 0xffff         // s4

    loc_0x802daabc: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x802da990, 0x802daa9c, 0x802daab0
         v0 = a3 & 0xff           // s4

    loc_0x802daac0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802daa94
         ret                      // ra
         // CODE XREF from fcn.802d39fc @ +0x894
         sp += 0x28

    loc_0x802dab48: // orphan
         // CODE XREFS from fcn.82bea63c @ 0x1af8, 0x802dab98
         t5 = [t0 + 0]
         v0 = t5 + a2
         t6 = , unsigned  byte [v0 + 5]
         t7 = t6 + a1
         byte [v0 + 5] = t7
         t8 = [t0 + 0]
         v0 = t8 + a2
         t9 = , unsigned  byte [v0 + 6]
         t1 = t9 + a1
         byte [v0 + 6] = t1
         t2 = [t0 + 0]
         v0 = t2 + a2
         // CODE XREF from fcn.82bea63c @ 0x802baed4
         t3 = , unsigned  byte [v0 + 7]
         t4 = t3 + a1
         byte [v0 + 7] = t4
         t5 = [t0 + 0]
         v0 = t5 + a2

    loc_0x802dab8c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802baed8
         t6 = , unsigned  byte [v0 + 8]
         a2 += 4
         t7 = t6 + a1
         if                       // likely
         byte [v0 + 8] = t7

    loc_0x802daba0: // orphan
         // CODE XREFS from fcn.802d9024 @ +0x1aec, +0x1b1c
         ret                      // ra
         

    loc_0x802e241c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802d47c8
         

    loc_0x802e2420: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         t0 = 0x88c0 << 16
         t0 += 0x1a60
         v1 = [t0 + 0]            // t9
         a3 = 0 + 0x3b
         t2 = , unsigned  halfword [v1 + 0x2e]
         halfword [v1 + 0x20] = t2

    loc_0x802e6668: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb374
         [v0 + 0] = t6
         t7 = , unsigned  byte [sp + 0x3f] // s4
         t9 = , unsigned  byte [sp + 0x3e] // s4
         t8 = t7 << 0x18

    loc_0x802e6678: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e3f64
         t7 = t9 << 0x10
         t6 = t8 | t7
         t8 = , unsigned  byte [sp + 0x3d] // s4
         t7 = t8 << 8
         t9 = t6 | t7
         t6 = , unsigned  byte [sp + 0x3c] // s4
         t7 = t9 | t6
         [v0 + 4] = t7
         a0 = [a2 + 0x18]         // s4
         [sp + 0x18] = a2
         call 0x8004d1fc          // 0x8004d1fc(0xff, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x4a] = t2
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]
         a2 = [sp + 0x18]
         t2 = halfword [sp + 0x4a] // s4
         t8 = v0 + 8
         t9 = halfword [sp + 0x46]
         [v1 + 0] = t8
         t7 = halfword [a2 + 0xc]
         t6 = t2 + t9             // s4
         at = 0xe400 << 16
         t8 = t6 + t7             // s4
         t9 = t8 << 2
         t6 = t9 & 0xfff
         t7 = t6 << 0xc
         t0 = halfword [sp + 0x48]
         t9 = halfword [sp + 0x44]
         t8 = t7 | at
         t7 = halfword [a2 + 0xe] // s4
         t6 = t0 + t9
         t9 = t6 + t7
         t6 = t9 << 2
         t7 = t6 & 0xfff
         t9 = t8 | t7
         [v0 + 0] = t9
         t6 = halfword [a2 + 8]
         t8 = t2 + t6             // s4
         t7 = t8 << 2
         t8 = halfword [a2 + 0xa]
         t9 = t7 & 0xfff
         t6 = t9 << 0xc
         t7 = t0 + t8
         t9 = t7 << 2
         t8 = t9 & 0xfff
         t7 = t6 | t8
         [v0 + 4] = t7
         v0 = [v1 + 0]
         t6 = 0xe100 << 16
         t7 = 0xf100 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t9 = 0 + 0x400
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = t7
         ra = [sp + 0x14]
         sp += 0x58
         ret
         

    loc_0x802e72c0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb3ac
         t9 = t7 & 0xfff

    loc_0x802e72c4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb3a0
         t7 = , unsigned  halfword [sp + 0x8c]
         t8 = t9 << 0xc
         t6 = t8 | at
         t9 = s3 + t7
         t8 = t9 << 2
         t7 = t8 & 0xfff
         t9 = t6 | t7
         t8 = s2 << 2
         // CODE XREF from fcn.802cb014 @ +0x39c
         t6 = t8 & 0xfff
         [v0 + 0] = t9
         // CODE XREF from fcn.82bea63c @ 0x802cb3a8
         t9 = s3 << 2
         t8 = t9 & 0xfff
         t7 = t6 << 0xc
         t6 = t7 | t8
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t7 = 0xe100 << 16
         t6 = 0xf100 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t9 = 0x400 << 16
         t9 |= 0x400
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = t6

    loc_0x802e7338: // orphan
         // CODE XREF from fcn.802e6ffc @ 0x802e7044
         ra = [sp + 0x2c]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]         // t9
         s3 = [sp + 0x28]
         ret
         sp += 0xb0

    loc_0x802e7380: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb3bc
         v0 = 0x8ac1 << 16
         v0 -= 0x6644
         t6 = halfword [v0 + 0]
         t7 = halfword [v1 + 8]
         a0 = [sp + 0x28]
         at = 0 + 1               // lo
         t8 = t6 + t7
         halfword [s0 + 0xe] = t8
         t9 = halfword [v0 + 2]
         // CODE XREF from fcn.802cb014 @ +0x3ac
         t0 = halfword [v1 + 0xa]
         t1 = t9 + t0

    loc_0x802e73b8: // orphan
         beql a0, at, 0x802e7444  // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802cb3c4
         t0 = halfword [s0 + 4]

    loc_0x802e7574: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb3e0
         a1 = 0 + 0x30
         a0 = a2
         call 0x80075630          // 0x80075630(0x8, 0x30, 0x8, -1)
         [sp + 0x20] = a2
         a0 = [sp + 0x18]         // a2
         call 0x8ac06d8c          // 0x8ac06d8c(0x8, 0x30, 0x8, -1)
         a1 = [sp + 0x1c]
         a2 = [sp + 0x20]
         a1 = 0x8ac0 << 16
         a1 += 0x2564
         [a2 + 0] = v0
         t6 = halfword [sp + 0x26]
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x8ac02564, 0x8, -1)
         halfword [a2 + 0x12] = t6
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802e7838: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb404
         s0 = [a1 + 0x20]         // t9
         at = 0 + 1               // lo
         beql a0, at, 0x802e78a4  // unlikely
         t6 = , unsigned  halfword [a2 + 2] // s4

    loc_0x802e7848: // orphan
         goto 0x802e7a60
         ra = [sp + 0x4c]         // t9

    loc_0x802e78a4: // orphan
         a0 = 0x8ac1 << 16
         a0 -= 0x6644
         t7 = t6 & 2
         beql t7, 0, 0x802e7a60   // likely
         ra = [sp + 0x4c]         // t9

    loc_0x802e79e4: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb410
         t7 = t6 & 0xfff
         [v1 + 0] = t4
         t8 = t7 << 0xc
         t4 = t3 << 2
         t5 = t4 & 0xfff
         // CODE XREF from fcn.802cb014 @ +0x400
         t9 = t8 | at
         t6 = t9 | t5
         [v0 + 0] = t6
         t7 = halfword [sp + 0x56]
         t9 = halfword [sp + 0x54] // t3
         t8 = t7 << 2
         t3 = t8 & 0xfff
         t5 = t9 << 2
         t6 = t5 & 0xfff
         t4 = t3 << 0xc
         t7 = t4 | t6
         [v0 + 4] = t7
         v0 = [v1 + 0]            // t9
         t3 = 0xe100 << 16
         t4 = 0 + 0x400
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = t3
         v0 = [v1 + 0]
         t5 = 0xf100 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = t4
         [v0 + 0] = t5
         ra = [sp + 0x4c]         // t9
         // CODE XREF from fcn.82bea63c @ 0x802e7848
         s0 = [sp + 0x48]
         sp += 0x60
         ret                      // t9
         v0 = 0

    loc_0x802e7f34: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb430
         a0 = [s0 + 0x14]
         [s0 + 0x1c] = v0
         call 0x8004ca10          // 0x8004ca10(0xaa909a9, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0x10]
         [s0 + 0x20] = v0
         call 0x8004ca10          // 0x8004ca10(0xffffff00, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802e7f4c: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb438
         a0 = [s0 + 0x14]
         [s0 + 0x24] = v0
         call 0x8004ca24          // 0x8004ca24(0xaa909a9, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802e8a68: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb4b4
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         at = , a0 < 2            // arg1
         if                       // likely
         v1 = 0

    loc_0x802e9110: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb4fc
         [v0 + 0] = t8
         v0 = [v1 + 0]
         t8 = a2 + 2
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = a1
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t7 = t8 << 2
         t6 = t7 & 0xfff
         t9 = v0 + 8
         [v1 + 0] = t9
         t9 = t6 << 0xc
         t8 = t9 | at
         t7 = t8 | t0
         [v0 + 0] = t7
         t9 = [sp + 4]            // s4
         t6 = [sp + 0xc]
         t8 = t6 | t9             // s4
         [v0 + 4] = t8
         v0 = [v1 + 0]
         t6 = 0xe100 << 16
         t8 = 0xf100 << 16
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [v1 + 0]
         sp += 0x48
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = a1
         ret                      // ra
         // CODE XREF from fcn.802cb4bc @ +0x44
         [v0 + 0] = t8

    loc_0x82bea63c: // orphan
           // CALL XREF from fcn.80a5cb28 @ +0x22c
         
         t6 = , unsigned  , at < -0x4a00 // lo
         goto 0x802aca80
         sdl s0, 0xa0a, t8

}

*/
