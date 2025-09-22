/*
 * Function: 0x80422d80
 * Category: math
 */

// Decompiled C code
int fcn.84085904 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.84085904 (int esi, int edx) {
    loc_0x8041c364:
        s1 += 0xa
        // chop
         // do {
    loc_0x8041c368:
        a2 -= 0x4644
        call 0x800495bc // "&1" // 0x800495bc(-1, 0x442f71dcfe116408, 0xffffffffffffb9c4, -1)
        a3 = , unsigned  byte [s0 + 0x20] // s4
        s1 += 0xa
         // } while (?);
        }
        return eax;
    loc_0x80420820: // orphan
             // XREFS: CODE 0x82f1bd40  CODE 0x8309ef14  CODE 0x83220dac  
             // XREFS: CODE 0x832b8750  CODE 0x83442988  CODE 0x83452810  
             // XREFS: CODE 0x839c0968  CODE 0x83b75110  CODE 0x83d00308  
             // XREFS: CODE 0x83d46af8  CODE 0x8400e81c  CODE 0x84035190  
             // XREFS: CODE 0x84085930  
             if                       // likely

    loc_0x8042082c: // orphan
         // CODE XREF from fcn.83cb0518 @ +0x10ac
         if                       // likely

    loc_0x80420838: // orphan
         if                       // likely
         at = halfword [0 + 0x34c]

    loc_0x80420840: // orphan
         at = halfword [t0 + 0x354]
         at = halfword [s0 + 0x358]
         at = halfword [t0 + 0x360]
         at = halfword [s0 + 0x364]
         at = halfword [0 + 0x380]
         at = halfword [0 + 0x38c]
         if                       // likely
         if                       // likely

    loc_0x80420864: // orphan
         at = halfword [t0 + 0x4c4]
         at = halfword [s0 + 0x4c8]
         at = halfword [t0 + 0x4d0]
         at = halfword [s0 + 0x4d4]
         if                       // likely
         if                       // likely

    loc_0x80420880: // orphan
         if                       // likely
         if                       // likely

    loc_0x8042088c: // orphan
         at = halfword [0 + 0x630]
         at = halfword [0 + 0x638]
         at = halfword [0 + 0x640]
         at = halfword [0 + 0x648]
         at = halfword [0 + 0x650]
         at = halfword [0 + 0x658]
         if                       // likely
         if                       // likely

    loc_0x804208b0: // orphan
         if                       // likely
         at = halfword [0 + 0x6e8]

    loc_0x804208b8: // orphan
         at = halfword [0 + 0x6fc]
         at = halfword [0 + 0x714]
         if                       // likely
         if                       // likely

    loc_0x804208cc: // orphan
         at = halfword [0 + 0x7c0]
         at = halfword [0 + 0x7cc]
         if                       // fcn.8042280c+0x1c // likely
         if                       // fcn.8042280c+0x40 // likely

    loc_0x804208e0: // orphan
         at = halfword [0 + 0x7ec]
         at = halfword [0 + 0x7f8]
         at = halfword [0 + 0x80c]
         if                       // likely
         if                       // likely

    loc_0x804208f8: // orphan
         if                       // fcn.80434844-0x11ce8 // likely
         if                       // fcn.80434844-0x11cd4 // likely

    loc_0x80420904: // orphan
         at = halfword [0 + 0x8c8]
         at = halfword [0 + 0x8e0]
         at = halfword [0 + 0x8f8]
         if                       // fcn.80434844-0x11b30 // likely
         if                       // likely

    loc_0x8042091c: // orphan
         at = halfword [0 + 0x930]
         at = halfword [0 + 0x948]
         at = halfword [0 + 0x960]
         if                       // likely
         if                       // likely

    loc_0x80420934: // orphan
         if                       // likely
         at = halfword [0 + 0x9a8]

    loc_0x8042093c: // orphan
         if                       // fcn.80423014+0xc // likely
         if                       // fcn.80423014+0x20 // likely

    loc_0x80420948: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420954: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420960: // orphan
         at = halfword [0 + 0xa58]
         at = halfword [0 + 0xa70]
         if                       // likely
         if                       // likely

    loc_0x80420974: // orphan
         at = halfword [0 + 0xaa8]
         at = halfword [0 + 0xac0]
         if                       // likely
         if                       // likely

    loc_0x80420988: // orphan
         at = halfword [0 + 0xafc]
         at = halfword [0 + 0xb14]
         if                       // fcn.80434844-0x111d0 // likely
         if                       // likely

    loc_0x8042099c: // orphan
         if                       // likely
         at = halfword [0 + 0xb7c]

    loc_0x804209a4: // orphan
         at = halfword [0 + 0xb8c]
         at = halfword [0 + 0xb98]
         at = halfword [0 + 0xba8]
         at = halfword [0 + 0xbb4]
         at = halfword [0 + 0xbc0]
         if                       // likely
         if                       // likely

    loc_0x804209c4: // orphan
         if                       // likely
         at = halfword [0 + 0xc20]

    loc_0x804209cc: // orphan
         at = halfword [0 + 0xc30]
         at = halfword [0 + 0xc3c]
         at = halfword [0 + 0xc4c]
         at = halfword [0 + 0xc58]
         at = halfword [0 + 0xc64]
         if                       // likely
         if                       // likely

    loc_0x804209ec: // orphan
         if                       // fcn.8041ec08+0x50c8 // likely
         at = halfword [0 + 0xcc4]

    loc_0x804209f4: // orphan
         at = halfword [0 + 0xcd4]
         at = halfword [0 + 0xce0]
         at = halfword [0 + 0xcf0]
         at = halfword [0 + 0xcfc]
         at = halfword [0 + 0xd08]
         if                       // likely
         if                       // likely

    loc_0x80420a14: // orphan
         if                       // likely
         at = halfword [0 + 0xd4c]

    loc_0x80420a1c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420a28: // orphan
         if                       // likely
         at = halfword [0 + 0xd6c]

    loc_0x80420a30: // orphan
         if                       // fcn.80424018+0xc // likely
         if                       // fcn.8042408c+0x1c // likely

    loc_0x80420a3c: // orphan
         at = halfword [0 + 0xdac]
         at = halfword [0 + 0xdbc]
         at = halfword [0 + 0xdc8]
         at = halfword [0 + 0xdd8]
         at = halfword [0 + 0xde4]
         at = halfword [0 + 0xdf0]
         if                       // fcn.80424210+0x98 // likely
         if                       // fcn.80424210+0xcc // likely

    loc_0x80420a60: // orphan
         if                       // fcn.80424470-0xc // likely
         if                       // likely

    loc_0x80420a6c: // orphan
         if                       // likely
         if                       // fcn.8041ec08+0x5a0c // likely

    loc_0x80420a78: // orphan
         if                       // fcn.8041ec08+0x5a44 // likely
         if                       // fcn.8041ec08+0x5a78 // likely

    loc_0x80420a84: // orphan
         if                       // fcn.8041ec08+0x5ab0 // likely
         if                       // fcn.8041ec08+0x5ad4 // likely

    loc_0x80420a90: // orphan
         if                       // fcn.8041ec08+0x5b8c // likely
         if                       // fcn.8042480c+0xc // likely

    loc_0x80420a9c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420aa8: // orphan
         if                       // likely
         at = halfword [0 + 0xfb0]

    loc_0x80420ab0: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420abc: // orphan
         if                       // likely
         at = halfword [0 + 0x100c]

    loc_0x80420ac4: // orphan
         if                       // fcn.80424b30+0x58 // likely
         if                       // fcn.80424b30+0x6c // likely

    loc_0x80420ad0: // orphan
         if                       // fcn.80424c30+0x34 // likely
         at = halfword [0 + 0x1068]

    loc_0x80420ad8: // orphan
         if                       // fcn.80424c30+0xdc // likely
         // CODE XREF from fcn.8041e80c @ +0x14c
         if                       // likely

    loc_0x80420ae4: // orphan
         if                       // fcn.8041ec08+0x61e0 // likely
         at = halfword [0 + 0x10c4]

    loc_0x80420aec: // orphan
         if                       // fcn.8041ec08+0x6288 // likely
         if                       // fcn.8041ec08+0x629c // likely

    loc_0x80420af8: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b04: // orphan
         if                       // fcn.8041ec08+0x6610 // likely
         if                       // likely

    loc_0x80420b10: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b1c: // orphan
         at = halfword [0 + 0x1258]
         at = halfword [0 + 0x1264]
         if                       // fcn.80425410+0xc8 // likely
         if                       // fcn.8041ec08+0x68e4 // likely

    loc_0x80420b30: // orphan
         // CODE XREF from fcn.8041e80c @ +0x150
         if                       // fcn.8041ec08+0x691c // likely
         if                       // likely

    loc_0x80420b3c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b48: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b54: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b60: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b6c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b78: // orphan
         if                       // likely
         if                       // likely

    loc_0x80420b84: // orphan
         at = halfword [0 + 0x1310]
         at = halfword [0 + 0x1324]
         at = halfword [0 + 0x1330]
         if                       // likely
         if                       // likely

    loc_0x80420b9c: // orphan
         at = halfword [0 + 0x1354]
         if                       // fcn.80434844-0xef30 // likely
         if                       // likely

    loc_0x80420bac: // orphan
         at = halfword [0 + 0x137c]
         at = halfword [0 + 0x1390]
         at = halfword [0 + 0x139c]
         at = halfword [0 + 0x13b0]
         if                       // likely
         if                       // likely

    loc_0x804212e8: // orphan
         if                       // likely
         at = halfword [t0 + 0x4b50]

    loc_0x804212f0: // orphan
         at = halfword [s0 + 0x4b54]
         if                       // fcn.80434080+0x88 // likely
         if                       // fcn.80434080+0xac // likely

    loc_0x80421300: // orphan
         at = halfword [s0 + 0x4bb4]
         at = halfword [0 + 0x4c10]
         at = halfword [0 + 0x4c20]
         at = halfword [0 + 0x4c48]
         at = halfword [0 + 0x4c60]
         at = halfword [0 + 0x4c70]
         at = halfword [0 + 0x4c7c]
         at = halfword [0 + 0x4c94]
         at = halfword [0 + 0x4ca4]

    loc_0x80421324: // orphan
         at = halfword [0 + 0x4cb4]
         at = halfword [0 + 0x4cd4]
         at = halfword [0 + 0x4ce0]
         at = halfword [t0 + 0x4d24]
         at = halfword [s0 + 0x4d28]
         if                       // likely
         at = halfword [t0 + 0x4d40]

    loc_0x80421340: // orphan
         at = halfword [s0 + 0x4d44]
         if                       // fcn.80434844+0x3a4 // likely
         if                       // fcn.80434844+0x3c8 // likely

    loc_0x80421350: // orphan
         at = halfword [0 + 0x4fac]
         at = halfword [0 + 0x4fb4]
         at = halfword [0 + 0x4fbc]
         if                       // likely
         if                       // likely

    loc_0x80421368: // orphan
         if                       // likely
         at = halfword [0 + 0x4fd8]

    loc_0x80421370: // orphan
         if                       // fcn.80435438+0xc // likely
         if                       // fcn.80435438+0x60 // likely

    loc_0x8042137c: // orphan
         at = halfword [0 + 0x505c]
         at = halfword [0 + 0x5068]
         if                       // likely
         if                       // likely

    loc_0x80421390: // orphan
         at = halfword [0 + 0x5088]
         if                       // likely
         if                       // likely

    loc_0x804213a0: // orphan
         if                       // likely
         if                       // likely

    loc_0x804213ac: // orphan
         at = halfword [0 + 0x50d8]
         at = halfword [0 + 0x50e0]
         at = halfword [0 + 0x50e8]
         if                       // likely
         if                       // likely

    loc_0x804213c4: // orphan
         at = halfword [0 + 0x5110]
         at = halfword [0 + 0x5118]
         at = halfword [0 + 0x5124]
         at = halfword [0 + 0x5138]
         at = halfword [0 + 0x514c]
         at = halfword [0 + 0x5160]
         if                       // likely
         if                       // likely

    loc_0x804213e8: // orphan
         // CODE XREF from fcn.8041e80c @ +0x188
         if                       // likely
         if                       // likely

    loc_0x804213f4: // orphan
         at = halfword [0 + 0x5198]
         at = halfword [0 + 0x51a8]
         at = halfword [0 + 0x51bc]
         at = halfword [0 + 0x51d0]
         at = halfword [0 + 0x51e4]
         at = halfword [0 + 0x51f0]
         at = halfword [0 + 0x51fc]
         at = halfword [0 + 0x5208]
         if                       // fcn.8045664c-0x209f4 // likely
         if                       // likely

    loc_0x80421420: // orphan
         // CODE XREF from fcn.833bcbac @ +0x4f0
         // CODE XREF from fcn.837d7830 @ +0x2c
         // CODE XREF from fcn.83c116c0 @ +0xd84
         if                       // likely
         at = halfword [0 + 0x5230]

    loc_0x80421428: // orphan
         if                       // likely
         if                       // fcn.80435c38+0xe8 // likely

    loc_0x80421434: // orphan
         if                       // fcn.80435c38+0x140 // likely
         if                       // likely

    loc_0x80421440: // orphan
         // CODE XREF from fcn.82315bb0 @ +0x1cc
         at = halfword [0 + 0x52a8]
         if                       // likely
         if                       // fcn.80433834+0x2958 // likely

    loc_0x80421450: // orphan
         at = halfword [0 + 0x5368]
         at = halfword [0 + 0x5380]
         if                       // fcn.838a7534-0x34712b8 // likely
         if                       // likely

    loc_0x80421464: // orphan
         if                       // likely
         at = halfword [0 + 0x53b4]

    loc_0x8042146c: // orphan
         at = halfword [0 + 0x53c8]
         at = halfword [0 + 0x53e0]
         at = halfword [0 + 0x53ec]
         if                       // fcn.8045664c-0x20200 // likely
         if                       // fcn.8045664c-0x201ec // likely

    loc_0x80421484: // orphan
         if                       // fcn.8045664c-0x200d4 // likely
         at = halfword [0 + 0x5440]

    loc_0x8042148c: // orphan
         if                       // fcn.8045664c-0x2005c // likely
         if                       // fcn.8045664c-0x1ffb8 // likely

    loc_0x80421498: // orphan
         // CODE XREF from fcn.8041e80c @ +0x198
         if                       // fcn.804369c4+0x48 // likely
         if                       // fcn.804369c4+0x5c // likely

    loc_0x804214a4: // orphan
         if                       // fcn.8045664c-0x1fb34 // likely
         if                       // fcn.8045664c-0x1fb10 // likely

    loc_0x804214b0: // orphan
         at = halfword [0 + 0x562c]
         at = halfword [0 + 0x5680]
         if                       // fcn.80454ed8-0x1df9c // likely
         if                       // fcn.80454ed8-0x1df88 // likely

    loc_0x804214c4: // orphan
         if                       // fcn.80454ed8-0x1df20 // likely
         if                       // fcn.80454ed8-0x1df0c // likely

    loc_0x804214d0: // orphan
         if                       // fcn.80454ed8-0x1dec4 // likely
         if                       // fcn.80437038 // fcn.80437038 // likely

    loc_0x804214dc: // orphan
         if                       // fcn.80437038+0x78 // likely
         if                       // fcn.80437038+0x12c // likely

    loc_0x804214e8: // orphan
         at = halfword [s0 + 0x56f0]
         at = halfword [t0 + 0x56e8]
         // CODE XREF from fcn.8041e80c @ +0x1a0
         at = halfword [s0 + 0x56ec]
         at = halfword [0 + 0x5738]
         if                       // likely
         if                       // likely

    loc_0x80421504: // orphan
         at = halfword [s0 + 0x574c]
         at = halfword [t0 + 0x5744]
         at = halfword [s0 + 0x5748]
         at = halfword [0 + 0x5798]
         // CODE XREF from fcn.8041e80c @ +0x1a4
         if                       // fcn.80434844+0x2b94 // likely
         if                       // fcn.8043743c+0x70 // likely

    loc_0x80421520: // orphan
         at = halfword [s0 + 0x57ac]
         at = halfword [t0 + 0x57a4]
         // CODE XREF from fcn.8041e80c @ +0x1a8
         at = halfword [s0 + 0x57a8]
         at = halfword [0 + 0x57f8]
         if                       // fcn.80454ed8-0x1d964 // likely
         if                       // fcn.80454ed8-0x1d890 // likely

    loc_0x8042153c: // orphan
         at = halfword [s0 + 0x580c]
         at = halfword [t0 + 0x5804]
         at = halfword [s0 + 0x5808]
         at = halfword [0 + 0x5858]
         at = halfword [t0 + 0x593c]
         at = halfword [s0 + 0x5940]
         at = halfword [t0 + 0x5934]
         at = halfword [s0 + 0x5938]
         at = halfword [0 + 0x59ac]
         at = halfword [0 + 0x59b4]
         at = halfword [t0 + 0x59c0]
         at = halfword [s0 + 0x59c4]
         at = halfword [0 + 0x59e8]
         at = halfword [0 + 0x5a10]
         at = halfword [0 + 0x5a1c]
         if                       // likely
         // CODE XREF from fcn.8041e80c @ +0x1ac
         if                       // fcn.80454ed8-0x1d0a8 // likely

    loc_0x80421584: // orphan
         at = halfword [0 + 0x5a40]
         at = halfword [0 + 0x5a4c]
         at = halfword [0 + 0x5a58]
         at = halfword [0 + 0x5af8]
         at = halfword [0 + 0x5b00]
         at = halfword [0 + 0x5b08]
         at = halfword [0 + 0x5bb4]
         // CODE XREF from fcn.8041e80c @ +0x1b0
         if                       // likely
         at = halfword [0 + 0x5bc4]

    loc_0x804215a8: // orphan
         at = halfword [0 + 0x5bcc]
         at = halfword [0 + 0x5bd4]
         at = halfword [0 + 0x5bdc]
         at = halfword [0 + 0x5c80]
         if                       // fcn.80438850-0x74 // likely
         at = halfword [0 + 0x5c90]

    loc_0x804215c0: // orphan
         at = halfword [0 + 0x5ca4]
         at = halfword [0 + 0x5cac]
         at = halfword [0 + 0x5cbc]
         at = halfword [0 + 0x5cc4]
         if                       // fcn.80434844+0x4160 // likely
         // CODE XREF from fcn.8041e80c @ +0x1b4
         if                       // likely

    loc_0x804216f0: // orphan
         if                       // fcn.8043c480+0x84 // likely
         if                       // likely

    loc_0x804216fc: // orphan
         at = halfword [t0 + 0x6bb0]
         at = halfword [s0 + 0x6bb4]
         at = halfword [0 + 0x6cc8]
         if                       // fcn.8043ca04+0x48 // likely
         // CODE XREF from fcn.8041e80c @ +0x1cc
         if                       // fcn.8043ca04+0x5c // likely

    loc_0x80421714: // orphan
         if                       // likely
         at = halfword [0 + 0x6cf4]

    loc_0x8042171c: // orphan
         if                       // likely
         if                       // likely

    loc_0x804220d8: // orphan
         [v1 + 4] = t0
         t1 = [s0 + 0]            // t9
         [t1 + 8] = 0
         t2 = [s0 + 0]            // t9
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         [t2 + 0xc] = 0
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 0x87f1 << 16
         [sp + 0x24] = v0
         a1 -= 0xa48
         call 0x80040e80          // 0x80040e80(0xff, 0x87f0f5b8, 0x8, -1)
         a0 = v0                  // s4
         t3 = [s0 + 0]            // t9
         [t3 + 0x1c0] = v0
         call 0x80003120          // 0x80003120(0xff, 0x87f0f5b8, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         call 0x8004c8c0          // 0x8004c8c0(0xff, 0x87f0f5b8, 0x8, -1)
         a0 = 0 + 0x168
         a0 = 0 + 0x168
         call 0x8004c990          // 0x8004c990(0x168, 0x87f0f5b8, 0x8, -1)
         a1 = 0
         a0 = v0                  // s4
         call 0x87f08e3c          // 0x87f08e3c(0xff, 0x0, 0x8, -1)
         a1 = 0xf00 << 16
         t4 = [s0 + 0]            // t9
         a0 = 0 + 0x168
         a1 = 0 + 3
         call 0x8004c990          // 0x8004c990(0x168, 0x3, 0x8, -1)
         [t4 + 0x18] = v0
         a0 = v0                  // s4
         call 0x87f08e3c          // 0x87f08e3c(0xff, 0x3, 0x8, -1)
         a1 = 0xf00 << 16
         t5 = [s0 + 0]            // t9
         a1 = 0x87f1 << 16
         a1 += 0x1750
         a0 = 0
         call 0x80037e9c          // 0x80037e9c(0x0, 0x87f11750, 0x8, -1)
         [t5 + 0x1c] = v0
         v1 = [s0 + 0]            // t9
         a0 = 0x87f1 << 16
         a0 += 0x1750
         a3 = 0 + 1               // lo
         a1 = v1 + 0x20
         call 0x87f0252c          // 0x87f0252c(0x87f11750, 0x10000001f, 0x8, 0x1)
         a2 = v1 + 0x34
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x28
         ret
         

    loc_0x804223ec: // orphan
         add.s f0, f2, f2
         swc1 f0, 0x58, v1
         t8 = [a0 + 0]            // t9
         // CODE XREF from fcn.8041e80c @ +0x2a8
         bc1f 0x80422414
         swc1 f0, 0x54, t8
         add.s f4, f12, f16

    loc_0x80422404: // orphan
         trunc.w.s f6, f4
         mfc1 v0, f6
         goto 0x80422428          // fcn.83c13370-0x37f0f48
         t1 = v0 & 0xffff         // s4

    loc_0x80422708: // orphan
         mov.s f14, f12
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80422984: // orphan
         a2 += 0x1434
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80422d28: // orphan
         if                       // likely
         cvt.s.w f18, f16

    loc_0x80422d30: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f18, f18, f10

    loc_0x80422d40: // orphan
         mul.s f4, f18, f0
         t7 = 0 + 1               // lo
         add.s f8, f6, f4
         cfc1 t6, 31
         ctc1 t7, 31
         
         cvt.w.s f16, f8
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // likely
         at = 0x4f00 << 16

    loc_0x80422d70: // orphan
         mtc1 at, f16
         t7 = 0 + 1               // lo
         sub.s f16, f8, f16
         ctc1 t7, 31
         
         cvt.w.s f16, f16
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // unlikely
         

    loc_0x80422d9c: // orphan
         mfc1 t7, f16
         at = 0x8000 << 16
         goto 0x80422dc4
         t7 |= at

    loc_0x80422dac: // orphan
         goto 0x80422dc4
         t7 = 0 - 1               // s2

    loc_0x80422db4: // orphan
         mfc1 t7, f16
         
         if                       // unlikely
         

    loc_0x80422dc4: // orphan
         // CODE XREFS from fcn.84085904 @ 0x80422da4, 0x80422dac
         t8 = t7 & 0xff
         t4 = t8 << 8
         ctc1 t6, 31
         t5 = t9 | t4
         t6 = t5 | 0xff           // t9
         [v0 + 4] = t6
         // CODE XREF from fcn.8041e80c @ +0x32c
         a0 = [t0 + 0]            // t9
         t8 = 0xfb00 << 16
         at = 0x4f80 << 16
         t7 = a0 + 8
         [t0 + 0] = t7
         [a0 + 0] = t8
         t9 = , unsigned  byte [a3 + 0] // s4
         mtc1 t9, f10
         if                       // likely
         // CODE XREF from fcn.8041e80c @ +0x330
         cvt.s.w f18, f10

    loc_0x80422e04: // orphan
         mtc1 at, f6
         
         add.s f18, f18, f6

    loc_0x80422e10: // orphan
         t4 = , unsigned  byte [t1 + 0]
         mul.s f4, f18, f2
         at = 0x4f80 << 16
         mtc1 t4, f8
         if                       // likely
         // CODE XREF from fcn.8041e80c @ +0x334
         cvt.s.w f16, f8

    loc_0x80422e28: // orphan
         mtc1 at, f10
         
         add.s f16, f16, f10

    loc_0x80422e34: // orphan
         mul.s f6, f16, f0
         t6 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f18, f4, f6
         cfc1 t5, 31
         ctc1 t6, 31
         
         cvt.w.s f8, f18
         cfc1 t6, 31
         
         t6 &= 0x78
         beql t6, 0, 0x80422eb0   // likely
         mfc1 t6, f8

    loc_0x80422e68: // orphan
         mtc1 at, f8
         // CODE XREF from fcn.8041e80c @ +0x33c
         t6 = 0 + 1               // lo
         sub.s f8, f18, f8
         ctc1 t6, 31
         
         cvt.w.s f8, f8
         // CODE XREF from fcn.8041e80c @ +0x340
         cfc1 t6, 31
         
         t6 &= 0x78
         if                       // unlikely
         

    loc_0x80422e94: // orphan
         mfc1 t6, f8
         at = 0x8000 << 16
         goto 0x80422ebc
         t6 |= at

    loc_0x80422ea4: // orphan
         // CODE XREF from fcn.8041e80c @ +0x344
         goto 0x80422ebc
         t6 = 0 - 1               // s2

    loc_0x80422eb0: // orphan
         
         if                       // likely
         

    loc_0x80422ebc: // orphan
         // CODE XREFS from fcn.84085904 @ 0x80422e9c, 0x80422ea4
         t9 = , unsigned  byte [a3 + 1] // s4
         ctc1 t5, 31
         t8 = t6 << 0x18
         // CODE XREF from fcn.8041e80c @ +0x348
         mtc1 t9, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f16, f10

    loc_0x80422ed8: // orphan
         mtc1 at, f4
         // CODE XREF from fcn.8041e80c @ +0x34c
         
         add.s f16, f16, f4

    loc_0x80422ee4: // orphan
         t4 = , unsigned  byte [t1 + 1]
         mul.s f6, f16, f2
         at = 0x4f80 << 16
         mtc1 t4, f18
         if                       // likely
         cvt.s.w f8, f18

    loc_0x80422efc: // orphan
         mtc1 at, f10
         
         add.s f8, f8, f10

    loc_0x80422f08: // orphan
         mul.s f4, f8, f0
         t6 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f16, f6, f4
         cfc1 t5, 31
         ctc1 t6, 31
         
         cvt.w.s f18, f16
         cfc1 t6, 31
         
         t6 &= 0x78
         beql t6, 0, 0x80422f84   // likely
         mfc1 t6, f18

    loc_0x80422f3c: // orphan
         mtc1 at, f18
         // CODE XREF from fcn.8041e80c @ +0x350
         t6 = 0 + 1               // lo
         sub.s f18, f16, f18
         ctc1 t6, 31
         
         cvt.w.s f18, f18
         cfc1 t6, 31
         
         t6 &= 0x78
         if                       // unlikely
         

    loc_0x80422f68: // orphan
         mfc1 t6, f18
         at = 0x8000 << 16
         goto 0x80422f90
         t6 |= at

    loc_0x80422f78: // orphan
         goto 0x80422f90
         t6 = 0 - 1               // s2

    loc_0x80422f84: // orphan
         // CODE XREF from fcn.8041e80c @ +0x354
         
         if                       // likely
         

    loc_0x80422f90: // orphan
         // CODE XREFS from fcn.84085904 @ 0x80422f70, 0x80422f78
         ctc1 t5, 31
         t5 = , unsigned  byte [a3 + 2] // s4
         t7 = t6 & 0xff
         t9 = t7 << 0x10
         mtc1 t5, f10
         t4 = t8 | t9

    loc_0x80422fa8: // orphan
         // CODE XREF from fcn.8041e80c @ +0x358
         if                       // likely
         cvt.s.w f8, f10

    loc_0x80422fb0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f8, f8, f6

    loc_0x80422fc0: // orphan
         t6 = , unsigned  byte [t1 + 2]
         mul.s f4, f8, f2
         at = 0x4f80 << 16
         mtc1 t6, f16
         if                       // likely
         cvt.s.w f18, f16

    loc_0x80422fd8: // orphan
         mtc1 at, f10
         
         add.s f18, f18, f10

    loc_0x80422fe4: // orphan
         mul.s f6, f18, f0
         t8 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f8, f4, f6
         cfc1 t7, 31
         ctc1 t8, 31
         
         cvt.w.s f16, f8
         cfc1 t8, 31
         
         t8 &= 0x78
         beql t8, 0, 0x80423060   // likely
         // CALL XREF from fcn.830d5474 @ +0x8f8
         // CALL XREF from fcn.8322ca10 @ +0x288
         mfc1 t8, f16

    loc_0x80423060: // orphan
         
         // CODE XREF from fcn.8041e80c @ +0x364
         if                       // fcn.80423014+0x40 // unlikely
         

    loc_0x804230b0: // orphan
         t9 = t8 << 0x10
         t6 = t5 << 0x18
         t5 = , unsigned  byte [sp + 0x57]
         t4 = t6 | t9
         t8 = t7 << 8
         t6 = t4 | t8
         t7 = t6 | t5
         [v1 + 4] = t7
         v1 = [t0 + 0]
         t8 = 0xfb00 << 16
         t4 = v1 + 8
         [t0 + 0] = t4
         [v1 + 0] = t8
         t4 = , unsigned  byte [sp + 0x59]
         t6 = , unsigned  byte [sp + 0x58]
         t7 = , unsigned  byte [sp + 0x5a]
         t8 = t4 << 0x10
         t5 = t6 << 0x18
         // CODE XREF from fcn.8041e80c @ +0x368
         t6 = , unsigned  byte [sp + 0x5b]
         t9 = t5 | t8
         t4 = t7 << 8
         t5 = t9 | t4
         t7 = t5 | t6
         [v1 + 4] = t7

    loc_0x8042320c: // orphan
         goto 0x804232f8
         t0 = 0xaa5a << 16

    loc_0x804232f8: // orphan
         // CODE XREF from fcn.84085904 @ 0x8042320c
         a1 = 0 - 0x1401
         a2 = t0 | 0xff
         [sp + 0x28] = a1
         [sp + 0x24] = a2
         [sp + 8] = a2
         [sp + 4] = a1
         call 0x87f00944          // 0x87f00944(-1, 0xffffffffffffebff, 0x442f71dcfe1164ff, -1)
         a0 = [sp + 0x34]
         ra = [sp + 0x14]
         sp += 0x30
         v0 = 0 + 1               // lo
         ret
         

    loc_0x80423360: // orphan
         v0 = [a1 + 0x20]         // t9
         if                       // unlikely
         a0 = 0 + 2

    loc_0x8042336c: // orphan
         beql v0, a0, 0x804234b8  // unlikely
         v0 = [a1 + 0x20]         // t9

    loc_0x80423374: // orphan
         ret                      // ra
         

    loc_0x80423434: // orphan
         v0 = [a1 + 0x20]         // t9
         // CODE XREF from fcn.8041e80c @ +0x398
         at = 0 + 1               // lo
         beql v0, 0, 0x80423458   // unlikely
         t3 = [v1 + 0x30]         // t9

    loc_0x80423444: // orphan
         beql v0, at, 0x80423488  // unlikely
         t8 = [v1 + 0x30]         // t9

    loc_0x8042344c: // orphan
         ret                      // ra
         

    loc_0x80423458: // orphan
         a0 = 0 + 2
         bnel a0, t3, 0x80423478  // likely
         t6 = , unsigned  halfword [a1 + 2]

    loc_0x80423464: // orphan
         t4 = , unsigned  halfword [a1 + 2]
         t5 = t4 | 2
         ret                      // ra
         halfword [a1 + 2] = t5

    loc_0x80423478: // orphan
         t7 = t6 & 0xfffd
         ret                      // ra
         halfword [a1 + 2] = t7

    loc_0x80423488: // orphan
         at = 0 + 4
         bnel t8, at, 0x804234a8  // likely
         t1 = , unsigned  halfword [a1 + 2]

    loc_0x80423494: // orphan
         t9 = , unsigned  halfword [a1 + 2]
         t0 = t9 | 2
         // CODE XREF from fcn.8041e80c @ +0x39c
         ret                      // ra
         halfword [a1 + 2] = t0

    loc_0x804234a8: // orphan
         t2 = t1 & 0xfffd
         ret                      // ra
         // CODE XREF from fcn.8041e80c @ +0x3a0
         halfword [a1 + 2] = t2

    loc_0x804234b8: // orphan
         at = 0 + 1               // lo
         beql v0, 0, 0x804234d8   // unlikely
         t3 = [v1 + 0x30]         // t9

    loc_0x804234c4: // orphan
         beql v0, at, 0x80423504  // unlikely
         t8 = [v1 + 0x30]         // t9

    loc_0x804234cc: // orphan
         ret                      // ra
         

    loc_0x804234d8: // orphan
         bnel a0, t3, 0x804234f4  // likely
         t6 = , unsigned  halfword [a1 + 2]

    loc_0x804234e0: // orphan
         t4 = , unsigned  halfword [a1 + 2]

    loc_0x804234e4: // orphan
         t5 = t4 | 2              // t9
         ret                      // ra
         halfword [a1 + 2] = t5

    loc_0x804234f4: // orphan
         t7 = t6 & 0xfffd
         ret                      // ra
         halfword [a1 + 2] = t7

    loc_0x80423504: // orphan
         at = 0 + 4
         bnel t8, at, 0x80423524  // likely
         t1 = , unsigned  halfword [a1 + 2]

    loc_0x80423510: // orphan
         t9 = , unsigned  halfword [a1 + 2]
         t0 = t9 | 2
         ret                      // ra
         halfword [a1 + 2] = t0

    loc_0x80423524: // orphan
         t2 = t1 & 0xfffd
         halfword [a1 + 2] = t2
         ret                      // ra
         

    loc_0x80423688: // orphan
         a1 = 0x504b << 16
         a2 = [sp + 0x20]
         t2 = t1 + s0
         a0 = [t2 + 0x20]         // t9
         a1 |= 0x4d34
         call 0x87f0ab08          // 0x87f0ab08(-1, 0x504b4d34, 0x0, -1)
         // CODE XREF from fcn.8041e80c @ +0x3c0
         a3 = 0 + 1               // lo
         t3 = [s1 + 0]            // t9
         a1 = 0x504b << 16
         a2 = [sp + 0x20]
         t4 = t3 + s0
         a0 = [t4 + 0x20]         // t9
         a1 |= 0x4d32
         call 0x87f0ab08          // 0x87f0ab08(-1, 0x504b4d32, 0x0, 0x1)
         a3 = 0 + 2
         t5 = [s1 + 0]            // t9
         a1 = 0x504b << 16
         a2 = 0x87f1 << 16
         t6 = t5 + s0
         a0 = [t6 + 0x20]         // t9
         a2 += 0x121c
         call 0x87f0aa80          // 0x87f0aa80(-1, 0x504b0000, 0x87f1121c, 0x2)
         a1 |= 0x4d31
         // CODE XREF from fcn.8041e80c @ +0x3c4
         t7 = [s1 + 0]            // t9
         a1 = 0x504b << 16
         a2 = 0x87f1 << 16
         t8 = t7 + s0
         a0 = [t8 + 0x20]         // t9
         a2 += 0x1234
         call 0x87f0aa80          // 0x87f0aa80(-1, 0x504b0000, 0x87f11234, 0x2)
         a1 |= 0x4d32
         t9 = [s1 + 0]
         a1 = 0x504b << 16
         a2 = 0x87f1 << 16
         t0 = t9 + s0
         a0 = [t0 + 0x20]         // t9
         a2 += 0x1298
         call 0x87f0aa80          // 0x87f0aa80(-1, 0x504b0000, 0x87f11298, 0x2)
         a1 |= 0x4d34
         goto 0x804238d0
         // CODE XREF from fcn.8041e80c @ +0x3c8
         ra = [sp + 0x1c]

    loc_0x80423750: // orphan
         t3 = [s1 + 0]            // t9
         a1 = 0x504e << 16
         a2 = [sp + 0x20]
         t4 = t3 + s0
         a0 = [t4 + 0x20]         // t9
         a1 |= 0x4332
         call 0x87f0ab08          // 0x87f0ab08(-1, 0x504e4332, 0x0, -1)
         // CODE XREF from fcn.8041e80c @ +0x3cc
         a3 = 0 + 1               // lo
         t5 = [s1 + 0]            // t9
         a2 = 0x87f0 << 16
         a2 += 0x12bc
         t6 = t5 + s0
         a0 = [t6 + 0x20]         // t9
         a1 = 0x504b << 16
         a1 |= 0x4d31
         [sp + 0x20] = a2
         call 0x87f0ab08          // 0x87f0ab08(-1, 0x504b4d31, 0x87f012bc, 0x1)
         a3 = 0
         t7 = [s1 + 0]            // t9
         a1 = 0x504b << 16
         a2 = [sp + 0x20]
         t8 = t7 + s0
         a0 = [t8 + 0x20]         // t9
         a1 |= 0x4d32
         // CODE XREF from fcn.8041e80c @ +0x3d0
         call 0x87f0ab08          // 0x87f0ab08(-1, 0x504b4d32, 0x87f012bc, 0x0)
         a3 = 0 + 1               // lo
         t9 = [s1 + 0]
         a1 = 0x504b << 16
         a2 = 0x87f1 << 16
         t0 = t9 + s0
         a0 = [t0 + 0x20]         // t9
         a2 += 0x121c
         call 0x87f0aa80          // 0x87f0aa80(-1, 0x504b0000, 0x87f1121c, 0x1)
         // CODE XREF from fcn.8041e80c @ +0x3d4
         a1 |= 0x4d31
         t1 = [s1 + 0]            // t9
         a1 = 0x504b << 16
         a2 = 0x87f1 << 16
         t2 = t1 + s0
         a0 = [t2 + 0x20]         // t9
         a2 += 0x1234
         call 0x87f0aa80          // 0x87f0aa80(-1, 0x504b0000, 0x87f11234, 0x1)
         a1 |= 0x4d32
         // CODE XREF from fcn.8041e80c @ +0x3d8
         goto 0x804238d0
         ra = [sp + 0x1c]

    loc_0x804238d0: // orphan
         // CODE XREF from fcn.80434844 @ 0x804235f4
         // CODE XREFS from fcn.84085904 @ 0x80423724, 0x804237f8
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x58

    loc_0x80423980: // orphan
         call 0x87f014c4          // 0x87f014c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xc2
         a0 = 0 + 2
         call 0x87f014c4          // 0x87f014c4(0x2, 0xc2, 0x8, -1)
         a1 = 0 + 0x79
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80423a18: // orphan
         v1 -= 0x9f0
         t6 = [v1 + 0]            // t9
         at = 0x800d << 16
         v0 = 0x800d << 16
         t7 = , unsigned  halfword [t6 + 0x34]
         v0 -= 0x1f78
         v0 += 0x50
         halfword [at - 0x1f90] = t7
         t8 = [v1 + 0]            // t9
         t9 = , unsigned  halfword [t8 + 0x36]
         halfword [v0 - 0x40] = t9
         t0 = [v1 + 0]            // t9
         t1 = , unsigned  halfword [t0 + 0x38]
         halfword [v0 - 0x18] = t1
         t2 = [v1 + 0]            // t9
         t3 = , unsigned  halfword [t2 + 0x3a]
         ret                      // ra
         halfword [v0 + 0x10] = t3

    loc_0x80423c38: // orphan
         [v0 + 0x30] = t3
         v0 = [a2 + 0]
         a1 = a0                  // t9
         t4 = 0 + 2
         v1 = [v0 + 0x30]         // t9
         at = , v1 < 2
         beql at, 0, 0x80423c68   // likely
         at = , v1 < 5

    loc_0x80423c58: // orphan
         [v0 + 0x30] = t0
         v0 = [a2 + 0]
         v1 = [v0 + 0x30]         // t9
         at = , v1 < 5

    loc_0x80423c68: // orphan
         bnel at, 0, 0x80423c78   // fcn.8041ec08+0x5070 // likely
         t5 = a1 & 0xc00

    loc_0x80423c70: // orphan
         [v0 + 0x30] = t4

    loc_0x80423f18: // orphan
         t6 = , unsigned  halfword [a1 + 2]
         t7 = t6 & 0xfffd

    loc_0x80423f20: // orphan
         goto 0x80423f9c          // fcn.8041ec08+0x5394
         halfword [a1 + 2] = t7

    loc_0x80423fbc: // orphan
         [sp + 0x1c] = ra
         [s0 + 0] = t6

    loc_0x80423fc4: // orphan
         t7 = 0 + 1               // lo
         [t6 + 0xc] = t7
         v0 = [s0 + 0]
         at = 0x1000 << 16
         a1 = a0                  // t9
         t9 = [v0 + 0x10]
         t0 = t9 | at
         [v0 + 0x10] = t0
         t1 = [s0 + 0]
         byte [t1 + 0x28] = 0
         a0 = [s0 + 0]
         call 0x87f0e390          // 0x87f0e390(0xffff8aa1, -1, 0x8, -1)
         a0 += 0x14
         call 0x8004dc6c          // 0x8004dc6c(0xffff8ab5, -1, 0x8, -1)
         a0 = 0 + 0x75
         t2 = [s0 + 0]
         if                       // fcn.8041ec08+0x5558 // unlikely
         // CALL XREF from fcn.8304a2f0 @ +0xc48
         [t2 + 0] = v0

    loc_0x804244a8: // orphan
         mtc1 at, f0
         mtc1 0, f2
         halfword [a0 + 0x20] = v0
         halfword [a0 + 0x1e] = v0
         v0 = halfword [a0 + 0x22]
         v1 = 0 - 0x100
         t6 = 0 + 0xff            // s4
         t7 = 1 << 16
         swc1 f0, 0x2c, a0
         // CODE XREF from fcn.8041ec08 @ +0xb0
         swc1 f0, 0x28, a0
         swc1 f0, 0x24, a0
         halfword [a0 + 0x18] = 0
         halfword [a0 + 0x1a] = 0
         byte [a0 + 0x1d] = t6

    loc_0x80424894: // orphan
         lwc1 f8, 0xc, v1
         swc1 f8, 0x2c, a1
         a0 = [v1 + 0]            // t9
         if                       // unlikely
         

    loc_0x804248a8: // orphan
         lwc1 f10, 0x24, a1
         lwc1 f16, 0x24, a0
         lwc1 f4, 0x28, a1
         add.s f18, f10, f16
         lwc1 f10, 0x2c, a1
         swc1 f18, 0x24, a1
         t6 = [v1 + 0]            // t9
         lwc1 f6, 0x28, t6
         add.s f8, f4, f6
         swc1 f8, 0x28, a1
         t7 = [v1 + 0]            // t9
         lwc1 f16, 0x2c, t7
         add.s f18, f10, f16
         swc1 f18, 0x2c, a1

    loc_0x804248e0: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x8042495c: // orphan
         a0 = 0 + 0x1b2
         call 0x8004c990          // 0x8004c990(0x1b2, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t1
         call 0x8004ca60          // 0x8004ca60(0x1b2, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         a0 = 0x800d << 16
         a0 += 0x510
         v1 = [a0 + 0]            // t9
         t1 = [sp + 0x1c]
         t7 = 0xe700 << 16
         t6 = v1 + 8
         [a0 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = t7
         v1 = [a0 + 0]
         t8 = 0xdb06 << 16
         t8 |= 0x3c
         t9 = v1 + 8
         [a0 + 0] = t9
         [v1 + 4] = v0
         [v1 + 0] = t8
         v1 = [a0 + 0]
         t3 = 0xfb00 << 16
         t2 = v1 + 8
         [a0 + 0] = t2
         [v1 + 0] = t3
         t9 = , unsigned  byte [t1 + 0x13] // s4
         t5 = , unsigned  byte [t1 + 0x12] // s4
         t4 = , unsigned  byte [t1 + 0x14] // s4
         t8 = t9 << 0x10
         t6 = t5 << 0x18
         t2 = t6 | t8
         t6 = , unsigned  byte [t1 + 0x15] // s4
         t5 = t4 << 8
         t7 = t2 | t5
         t8 = t7 | t6             // t9
         [v1 + 4] = t8
         v1 = [a0 + 0]
         t2 = 0x87f1 << 16
         t2 -= 0x940
         t3 = v1 + 8
         [a0 + 0] = t3
         t4 = 0xde00 << 16
         [v1 + 0] = t4
         call 0x8003cd84          // 0x8003cd84(0x800d0510, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t2
         ra = [sp + 0x14]

    loc_0x80424a18: // orphan
         sp += 0x28
         v0 = 0 + 1               // lo
         ret                      // ra
         

    loc_0x80424ae0: // orphan
         call 0x80003120          // 0x80003120(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         call 0x8004c8c0          // 0x8004c8c0(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1b2
         a0 = s1
         a1 = s3                  // t9
         a2 = [s3 + 0x14]         // t9
         call 0x87f0252c          // 0x87f0252c(0x442f71dcfe117dbd, -1, -1, -1)
         a3 = 0 + 4
         s5 = 0x87f0 << 16
         s5 += 0x2800
         s2 = 0
         s6 = 0 + 4
         a0 = s3                  // t9

    loc_0x80424d20: // orphan
         sp -= 0x18
         a2 = a1                  // t0
         a1 = a0                  // t9
         [sp + 0x18] = a0
         [sp + 0x14] = ra
         a0 = aav.0x80120000 << 16
         call 0x87f02ce0          // 0x87f02ce0(0x80120000, -1, 0x442f71dcfe116408, -1)
         a0 += 0x6420
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         // CODE XREF from fcn.8041ec08 @ 0x8041ed38
         

    loc_0x804250fc: // orphan
         lwc1 f8, 0x58, sp
         lwc1 f18, 0x48, sp
         if                       // unlikely
         

    loc_0x8042510c: // orphan
         beql v1, at, 0x80425184  // unlikely
         lwc1 f16, 0x48, s0

    loc_0x80425114: // orphan
         goto 0x80425230          // fcn.8041ec08+0x6628
         

    loc_0x8042511c: // orphan
         mul.s f4, f18, f2
         lwc1 f16, 0x48, s0
         mul.s f6, f8, f12
         add.s f10, f4, f6
         add.s f18, f16, f10

    loc_0x80425130: // orphan
         swc1 f18, 0x48, s0
         lwc1 f8, 0x4c, sp
         lwc1 f6, 0x5c, sp
         lwc1 f18, 0x4c, s0
         mul.s f4, f8, f2
         
         mul.s f16, f6, f12
         add.s f10, f4, f16
         add.s f8, f18, f10
         swc1 f8, 0x4c, s0
         lwc1 f6, 0x50, sp
         lwc1 f16, 0x60, sp
         lwc1 f8, 0x50, s0
         mul.s f4, f6, f2
         
         mul.s f18, f16, f12
         add.s f10, f4, f18
         add.s f6, f8, f10
         goto 0x80425230          // fcn.8041ec08+0x6628
         // CODE XREF from fcn.8041ec08 @ 0x8041ed68
         swc1 f6, 0x50, s0

    loc_0x80425184: // orphan
         lwc1 f18, 0x50, s0
         add.s f4, f16, f2
         sub.s f8, f18, f12
         swc1 f4, 0x48, s0
         goto 0x80425230          // fcn.8041ec08+0x6628
         swc1 f8, 0x50, s0

    loc_0x804253a8: // orphan
         t9 = [sp + 0x34]
         mul.s f18, f16, f0
         mtc1 0, f2
         byte [a1 + 0xc] = t9
         t0 = [sp + 0x48]
         t2 = 0xffff << 16
         t1 = 0 - 1               // s2
         t2 |= 0xff
         a0 = s0
         swc1 f0
         [a1 + 0x10] = t1
         // CODE XREF from fcn.8041ec08 @ +0x168
         [a1 + 0x14] = t2
         swc1 f18, 0x30, a1
         [a1 + 0x2c] = 0
         swc1 f10, 0x18, a1
         swc1 f2, 0x20, a1

    loc_0x80425538: // orphan
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x804255a4: // orphan
         [sp + 0x20] = v0
         a1 <<= 2
         a0 = v0                  // s4
         call 0x8000318c          // 0x8000318c(0xff, 0x10bdc773f8459020, 0x8, -1)
         a2 = 0 + 4
         [s0 + 0x14] = v0
         a0 = [sp + 0x20]         // s4
         a1 = s1 << 5
         call 0x8000318c          // 0x8000318c(0xff, 0x85ee3b9fc22fb7a0, 0x4, -1)
         a2 = 0 + 4
         [s0 + 0x18] = v0
         a1 = 0x87f1 << 16
         a1 -= 0x718
         call 0x80040e80          // 0x80040e80(0xff, 0x87f0f8e8, 0x4, -1)
         a0 = [sp + 0x20]         // s4
         [s0 + 0x1c] = v0
         a1 = 0x87f1 << 16
         a1 -= 0x638
         call 0x80040e80          // 0x80040e80(0xff, 0x87f0f9c8, 0x4, -1)

    loc_0x804255f0: // orphan
         a0 = [sp + 0x20]         // s4
         [s0 + 0x20] = v0
         call 0x80003120          // 0x80003120(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x20]         // s4
         call 0x8004c8c0          // 0x8004c8c0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe0
         call 0x8004c8c0          // 0x8004c8c0(0xe0, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe1
         a0 = [sp + 0x28]
         a1 = s0
         a2 = [s0 + 0x14]         // s4
         call 0x87f0252c          // 0x87f0252c(0xffffebff, 0x104, 0xff, -1)
         a3 = s1
         if                       // unlikely
         a0 = 0

    loc_0x8042562c: // orphan
         a2 = s1 & 3              // lo
         if                       // unlikely
         a1 = a2                  // lo

    loc_0x80425638: // orphan
         v1 = 0 << 2
         v1 -= 0
         v1 <<= 3
         v1 <<= 2
         v1 -= 0
         v1 <<= 2
         v0 = 0 << 5

    loc_0x80425654: // orphan
         t6 = [s0 + 0x18]         // s4
         a0 += 1

    loc_0x8042565c: // orphan
         t7 = t6 + v0
         [t7 + 0] = s0
         t0 = [s0 + 0x14]         // s4
         t8 = [s0 + 0x18]         // s4
         t1 = t0 + v1
         t9 = t8 + v0
         [t1 + 0x20] = t9
         v0 += 0x20
         if                       // likely
         v1 += 0x18c

    loc_0x80425684: // orphan
         if                       // unlikely
         v1 = a0 << 2

    loc_0x80425688: // orphan
         v1 = a0 << 2

    loc_0x8042568c: // orphan
         a1 = s1 << 2
         a1 -= s1
         v1 -= a0
         v1 <<= 3
         a1 <<= 3
         a1 += s1
         v1 += a0

    loc_0x804256a8: // orphan
         v1 <<= 2
         a1 <<= 2
         a1 -= s1
         v1 -= a0
         v1 <<= 2
         a1 <<= 2
         v0 = a0 << 5

    loc_0x804256c4: // orphan
         t2 = [s0 + 0x18]         // s4
         t3 = t2 + v0
         [t3 + 0] = s0
         t6 = [s0 + 0x14]         // s4
         t4 = [s0 + 0x18]         // s4
         t7 = t6 + v1
         t5 = t4 + v0
         [t7 + 0x20] = t5
         t8 = [s0 + 0x18]         // s4
         t0 = t8 + v0
         [t0 + 0x20] = s0
         t9 = [s0 + 0x18]         // s4
         t3 = [s0 + 0x14]         // s4
         t1 = t9 + v0
         t2 = t1 + 0x20
         t4 = t3 + v1
         [t4 + 0x1ac] = t2
         t6 = [s0 + 0x18]         // s4
         t5 = t6 + v0
         [t5 + 0x40] = s0

    loc_0x80425714: // orphan
         t7 = [s0 + 0x18]         // s4
         t9 = [s0 + 0x14]         // s4
         t8 = t7 + v0
         t0 = t8 + 0x40
         t1 = t9 + v1
         [t1 + 0x338] = t0
         t3 = [s0 + 0x18]         // s4
         t2 = t3 + v0
         [t2 + 0x60] = s0
         t7 = [s0 + 0x14]         // s4
         t4 = [s0 + 0x18]         // s4
         t8 = t7 + v1
         t6 = t4 + v0
         t5 = t6 + 0x60
         v1 += 0x630
         [t8 + 0x4c4] = t5
         if                       // likely
         v0 += 0x80

    loc_0x8042575c: // orphan
         ra = [sp + 0x1c]

    loc_0x80425760: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x28

    loc_0x80425888: // orphan
         lwc1 f16, 0x24, v1
         lwc1 f4, 0x4c, s0
         add.s f18, f10, f16
         lwc1 f10, 0x50, s0
         swc1 f18, 0x48, s0
         t5 = [v0 + 0x10]         // t9
         lwc1 f6, 0x28, t5
         add.s f8, f4, f6
         swc1 f8, 0x4c, s0
         t6 = [v0 + 0x10]         // t9
         lwc1 f16, 0x2c, t6
         add.s f18, f10, f16
         swc1 f18, 0x50, s0
         a1 = [a1 + 0x4908]       // t9
         [sp + 0x10] = t7
         [sp + 0x2c] = v0
         call 0x87f05fb0          // 0x87f05fb0(-1, -1, 0x8, -1)
         a1 += 0x64
         v1 = 0x8009 << 16
         v1 = , unsigned  halfword [v1 + 0x4904]
         v0 = [sp + 0x2c]         // s4
         // CODE XREF from fcn.8042581c @ 0x8042582c
         halfword [v0 + 0x18] = v1
         ra = [sp + 0x24]
         s0 = [sp + 0x20]         // s4
         sp += 0x38
         ret
         

    loc_0x80425928: // orphan
         a1 += 0x3730
         [sp + 0x20] = a0
         call 0x80037e3c          // 0x80037e3c(-1, 0x442f71dcfe119b38, 0x8, -1)
         a2 = v0                  // s4
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe119b38, 0xff, -1)
         a0 = [sp + 0x20]         // t9
         v1 = [sp + 0x34]
         a0 = [sp + 0x20]         // t9
         a1 = 0
         if                       // likely
         t6 = [sp + 0x30]

    loc_0x8043400c: // orphan
         if                       // fcn.80445870+0x1c0 // unlikely
         if                       // fcn.80434034+0x11ab0 // unlikely

    loc_0x80434018: // orphan
         if                       // fcn.80445870+0x26c // unlikely

    loc_0x80434024: // orphan
         if                       // fcn.80445870+0x208 // unlikely

    loc_0x8043481c: // orphan
         
         
         
         
         
         if                       // unlikely
         // CALL XREF from fcn.830b0844 @ +0x460
         

    loc_0x80435294: // orphan
         lwc1 f14, 0x34, sp
         lwc1 f16, 0x2c, sp
         lwc1 f18, 0x28, sp
         sub.s f10, f8, f0
         mul.s f4, f10, f12
         add.s f6, f4, f0
         swc1 f6
         lwc1 f8, 0x40, sp
         mul.s f10, f8, f14
         sub.s f4, f18, f10
         swc1 f4, 0x24, s0
         lwc1 f6, 0x40, sp
         mul.s f8, f6, f14
         mtc1 at, f6
         add.s f10, f8, f18
         swc1 f10, 0x18, s0
         lwc1 f4, 0x44, sp
         mul.s f2, f4, f4

    loc_0x804352dc: // orphan
         sub.s f8, f6, f2
         mul.s f10, f8, f12
         add.s f4, f10, f2
         swc1 f4, 0x14, s0
         lwc1 f6, 0x44, sp
         lwc1 f10, 0x24, sp
         mul.s f8, f6, f14
         add.s f4, f8, f10
         swc1 f4, 0x20, s0
         lwc1 f8, 0x44, sp
         lwc1 f6, 0x24, sp
         mul.s f10, f8, f14
         sub.s f4, f6, f10
         mtc1 at, f6
         swc1 f4, 8, s0
         lwc1 f8, 0x48, sp
         mul.s f0, f8, f8
         sub.s f10, f6, f0
         mul.s f4, f10, f12
         add.s f8, f4, f0
         swc1 f8, 0x28, s0
         lwc1 f6, 0x48, sp
         mul.s f10, f6, f14
         sub.s f4, f16, f10
         swc1 f4, 0x10, s0
         lwc1 f8, 0x48, sp
         mul.s f6, f8, f14
         add.s f10, f6, f16
         swc1 f10, 4, s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x38
         ret
         

    loc_0x8043556c: // orphan
         call 0x800359a0          // 0x800359a0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f8, 0x44, sp
         call 0x80035a10          // 0x80035a10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x34
         a0 = sp + 0x50
         call 0x80035c44          // "\u01ea" // 0x80035c44(0x178050, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         lwc1 f10, 0x3c, sp
         a0 = sp + 0x90
         a1 = [sp + 0x4c]
         a2 = [sp + 0x34]
         a3 = [sp + 0x38]
         call 0x87d00020          // 0x87d00020(0x178090, 0x0, 0x0, 0x0)
         swc1 f10, 0x10, sp
         a0 = s0
         a1 = sp + 0x50
         call 0x80036a38          // 0x80036a38(0x104, 0x178050, 0x0, 0x0)
         a2 = sp + 0x90
         a0 = s0
         a1 = s0 + 4
         call 0x87d005e8          // 0x87d005e8(0x104, 0x108, 0x178090, 0x0)
         a2 = s0 + 8
         a0 = s0 + 0x10
         a1 = s0 + 0x14
         call 0x87d005e8          // 0x87d005e8(0x114, 0x118, 0x10c, 0x0)
         a2 = s0 + 0x18
         a0 = s0 + 0x20
         a1 = s0 + 0x24
         call 0x87d005e8          // 0x87d005e8(0x124, 0x128, 0x11c, 0x0)
         a2 = s0 + 0x28
         ra = [sp + 0x24]
         s0 = [sp + 0x20]         // t9

    loc_0x804355ec: // orphan
         sp += 0xd0
         ret                      // ra
         

    loc_0x80435638: // orphan
         add.s f8, f4, f6
         lwc1 f4, 0x7e0, at
         at = 0x3f80 << 16
         add.s f2, f8, f10
         mul.s f18, f2, f2
         c.lt.s f18, f4
         
         bc1fl 0x80435670
         mtc1 at, f16
         call 0x80035c90          // 0x80035c90(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80435740          // fcn.8045664c-0x20f0c
         v0 = 0 + 1               // lo

    loc_0x80435790: // orphan
         swc1 f10
         lwc1 f16
         div.s f18, f16, f0
         swc1 f18
         ret                      // ra
         mov.s f0, f14

    loc_0x804359a4: // orphan
         
         
         
         break

    loc_0x80435a00: // orphan
         

    loc_0x80435c6c: // orphan
         unsigned , hi
         t6 += v1
         t6 = [t6 + 0x7620]       // t9
         t5 = fcn.82e00000 << 16
         t5 += v1
         v0 = 0
         t9 = lo
         
         
         div 0, t9, a2            // arg3
         t8 = lo
         t4 = t8 + t6             // t9
         halfword [a1 + 8] = t4   // arg2
         t5 = [t5 + 0x7ad0]
         if                       // likely
         

    loc_0x80435cac: // orphan
         break 7

    loc_0x80435cb0: // orphan
         at = 0 - 1               // s2

    loc_0x80435cb4: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x80435cbc: // orphan
         if                       // likely
         

    loc_0x80435cc4: // orphan
         break 6

    loc_0x80435cc8: // orphan
         unsigned , hi            // lo // lo
         t8 = fcn.82e00000 << 16
         t8 += v1
         t8 = [t8 + 0x77b0]
         t7 = lo
         
         
         div 0, t7, a2            // arg3
         t9 = lo
         t6 = t9 + t8
         if                       // likely
         

    loc_0x80435cf8: // orphan
         break 7

    loc_0x80435cfc: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80435d08: // orphan
         if                       // likely
         

    loc_0x80435d10: // orphan
         break 6

    loc_0x80435d14: // orphan
         halfword [a1 + 0xa] = t6 // arg2
         ret                      // ra
         

    loc_0x80435d8c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436290: // orphan
         goto fcn.8043683c        // fcn.8043683c(-1)
         t4 = , unsigned  halfword [a1 + 2]

    loc_0x804362f4: // orphan
         t0 = , unsigned  byte [a1 + 0x28] // s4
         v0 = 0 + 5
         v1 = 0 + 6

    loc_0x80436328: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80437310: // orphan
         break 7

    loc_0x80438494: // orphan
         sp -= 0x40
         [sp + 0x2c] = ra
         [sp + 0x20] = s6
         [sp + 0x28] = fp

    loc_0x80438a28: // orphan
         a1 = 0
         goto 0x80438a40
         a3 = v0                  // s4

    loc_0x80438a40: // orphan
         // CODE XREF from fcn.84085904 @ 0x80438a2c
         // CODE XREF from fcn.80400480 @ 0x80438a34
         if                       // likely
         t8 = ~a3                 // lo

    loc_0x80438a48: // orphan
         v0 = t0 << 0xa
         v0 = , signed  v0 >> 7
         if                       // likely
         a1 = 0

    loc_0x80438a58: // orphan
         goto 0x80438a6c
         a2 = v0                  // s4

    loc_0x80438a60: // orphan
         goto 0x80438a6c
         a2 = a1                  // t0

    loc_0x80438a68: // orphan
         a2 = 0

    loc_0x80438a6c: // orphan
         // CODE XREFS from fcn.84085904 @ 0x80438a58, 0x80438a60
         t5 = ~a2
         t7 = t5 & 0xffff
         t3 = t8 << 0x10
         t9 = t7 | t3
         [t2 + 4] = t9
         v0 = [v1 + 0]
         t5 = 0xf100 << 16
         t6 |= 0x400
         t4 = v0 + 8
         [v1 + 0] = t4
         [v0 + 4] = t6
         ret                      // ra
         [v0 + 0] = t5

    loc_0x8043c468: // orphan
         goto 0x8043c46c
         v0 = t1

    loc_0x8043ca98: // orphan
         
         
         at = 0 + 2
         if                       // likely
         t6 = 0x8292 << 16

    loc_0x8043caac: // orphan
         t6 = halfword [t6 - 0x7758]
         t8 = 0x8292 << 16
         t7 = t6 + 0x2000
         halfword [a1 + 0x1c] = t7
         t8 = halfword [t8 - 0x7756]
         t9 = t8 - 0x2000
         halfword [a1 + 0x1e] = t9

    loc_0x8043cac8: // orphan
         ret                      // ra
         v0 = 0

    loc_0x8043cb84: // orphan
         a1 += t8
         a0 = [s0 + 0]
         a1 = , unsigned  halfword [a1 + 0x1c60]
         call 0x80041fa0          // 0x80041fa0(0xfffff8a1, 0xffff, 0x8, -1)
         [sp + 8] = a2
         call 0x800428f8          // 0x800428f8(0xfffff8a1, 0xffff, 0x8, -1)
         a0 = [s0 + 0]
         t2 = [s0 + 0]
         t0 = 0x8292 << 16
         t0 = halfword [t0 - 0x77a8]
         t3 = [t2 + 0x38]         // t9
         a2 = 0x8291 << 16
         t1 = t0 << 2
         t1 += t0
         t4 = [t3 + 8]

    loc_0x80445acc: // orphan
         goto 0x80445ae0          // fcn.80434034+0x11aac
         t5 = 0 - 1               // s2

    loc_0x84085904: // orphan
           // CALL XREF from fcn.840845c4 @ +0x314
         scd 0, 0x610, v1
         daddi a2, s0, 0x4065     // arg3
         if                       // unlikely
         t2 = , unsigned  byte [v1 + 0x6b0] // s4

    loc_0x84085914: // orphan
         ldr a2, -0x1f91, 0
         if                       // unlikely
         s4 = v1 + 0x750

    loc_0x84085920: // orphan
         jalx 0x881dc1e0          // 0x881dc1e0(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // 0x1e(-1, 0x442f71dcfe116408, 0x8, -1)
         sdl gp, 0x7d0, v1
         ext a3, s0, 2
         goto 0x80420820
         v1 = a0 + 0x830

    loc_0x840a1d38: // orphan
         sc t5, -0x323, t6
         pref 0xc, -0x2833, t5

}

*/
