int fcn.803c507c (int esi, int edx) {
    loc_0x803a6a48:
        [sp + 0xd8] = s2
        mtc1 0, f10
        0x803a6a50
        swc1 f10, 0xd0, sp
         // do {
    loc_0x803a6a58:
        // CODE XREF from fcn.803a63b0 @ +0x694
        if            // likely
        0x803a6a5c
         // } while (?);
        }
        return eax;
    loc_0x803a6a60:
        t3 = [s0 + 0x4c] // t9
        bnel t3, 0, 0x803a6a78 // likely
        [sp + 0xd8] = 0
            
    loc_0x803a6a78:
        // CODE XREF from fcn.803c507c @ 0x803a6a6c
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
        0x803a6abc
        mul.s f8, f6, f10
        mfc1 a2, f8
         // do {
    loc_0x803a6ac8:
        call 0x867037b8 // 0x867037b8(-1, 0x442f71dcfe116408, 0x8, -1)
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x803a6acc: // orphan
             
             if                       // fcn.803a6b40+0x960 // unlikely
             lwc1 f4, 0xcc, sp

    loc_0x803a6ad8: // orphan
         at = 0xc0a0 << 16
         mtc1 at, f6

    loc_0x803a6ae0: // orphan
         t4 = 0 + 0xa
         a1 = 0 + 7

    loc_0x803a6ae8: // orphan
         c.lt.s f4, f6
         
         bc1fl 0x803a6da4
         t3 = [s0 + 0x38]         // t9
         v1 = [s0 + 0x2c]         // t9
         at = 0 + 6
         beql v1, at, 0x803a6da4  // fcn.803a6b40+0x264 // unlikely
         t3 = [s0 + 0x38]         // t9

    loc_0x803a6b08: // orphan
         if                       // fcn.803a6b40+0x260 // unlikely
         at = 0x4170 << 16

    loc_0x803a6b10: // orphan
         lwc1 f16, 0x10, s0
         mtc1 at, f10
         at = 0x42c4 << 16
         c.lt.s f10, f16
         
         bc1fl 0x803a6da4
         t3 = [s0 + 0x38]         // t9
         mtc1 at, f8
         at = 0x42b4 << 16
         c.lt.s f16, f8
         
         bc1fl 0x803a6da4

    loc_0x803a6c58: // orphan
         lwc1 f6, -0x4c2c, at
         lwc1 f8, 0x84, s0
         at = 0x8671 << 16
         add.s f10, f12, f6
         cvt.d.s f4, f8

    loc_0x803a6c6c: // orphan
         swc1 f10, 0x2c, s1
         ldc1 f6, -0x3bb0, at
         sub.d f10, f4, f6
         cvt.s.d f8, f10
         goto 0x803a6da0          // fcn.803a6b40+0x260
         swc1 f8, 0x84, s0

    loc_0x803a6e20: // orphan
         t6 = [s0 + 0x38]         // t9
         at = 0x8671 << 16
         bnel t6, 0, 0x803a6e30   // likely
         // CODE XREF from fcn.803a0370 @ +0x7c
         t7 = [s0 + 0x7c]         // t9

    loc_0x803a6f2c: // orphan
         lwc1 f14, 0x80, s0

    loc_0x803c507c: // orphan
         if                       // unlikely
         // CALL XREF from fcn.824fba54 @ +0xe8c
         // CALL XREF from fcn.8255d34c @ +0x76c
         if                       // unlikely

    loc_0x803c5080: // orphan
         if                       // fcn.803c6040+0x124 // unlikely

    loc_0x803c5084: // orphan
         if                       // fcn.803ae9d8+0x177a0 // unlikely
         if                       // unlikely

    loc_0x803c5090: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b95f0 @ +0x110
         if                       // unlikely

    loc_0x803c509c: // orphan
         if                       // fcn.803ae9d8+0x17ac8 // unlikely
         if                       // unlikely

    loc_0x803c50a8: // orphan
         // CODE XREF from fcn.803b95f0 @ +0x114
         if                       // fcn.803ae9d8+0x17c24 // unlikely
         if                       // unlikely

    loc_0x803c50b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c50c0: // orphan
         if                       // fcn.803ae9d8+0x17cec // unlikely
         if                       // unlikely

    loc_0x803c50cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c50d8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b95f0 @ +0x118
         if                       // unlikely

    loc_0x803c50e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c50f0: // orphan
         if                       // fcn.803c6a88+0x1c // unlikely
         

    loc_0x803c50f8: // orphan
         
         if                       // unlikely
         if                       // fcn.803c6a88+0xcc // unlikely

    loc_0x803c627c: // orphan
         if                       // fcn.803c6038+0x18f88 // unlikely
         if                       // fcn.803df024+0x10 // unlikely

    loc_0x803c6288: // orphan
         if                       // fcn.803c6038+0x19094 // unlikely
         if                       // fcn.803c6038+0x190c8 // unlikely

    loc_0x803c6294: // orphan
         if                       // fcn.803c6038+0x19070 // unlikely
         if                       // fcn.80400480-0x21304 // unlikely

    loc_0x803c62a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c62ac: // orphan
         if                       // unlikely
         if                       // fcn.803dee6c+0x508 // unlikely

    loc_0x803c62b8: // orphan
         if                       // fcn.803dee6c+0x4f0 // unlikely
         if                       // unlikely

    loc_0x803c62c4: // orphan
         if                       // fcn.803dee6c+0x62c // unlikely
         if                       // fcn.803df490+0x9c // unlikely

    loc_0x803c62d0: // orphan
         if                       // fcn.803df490+0x124 // unlikely
         if                       // fcn.80400480-0x20ea8 // unlikely

    loc_0x803c62dc: // orphan
         if                       // fcn.803df490+0x110 // unlikely
         // CODE XREF from fcn.803a002c @ 0x803b98dc
         if                       // unlikely

    loc_0x803c62e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c62f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6300: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c630c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6318: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6324: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803a002c @ 0x803b98e4
         if                       // unlikely

    loc_0x803c6330: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c633c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6348: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6354: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6360: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c636c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b95f0 @ +0x2fc
         if                       // unlikely

    loc_0x803c6378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6384: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c65b4: // orphan
         if                       // fcn.803e1244+0x460 // unlikely
         if                       // fcn.803c507c+0x1c6ec // unlikely

    loc_0x803c65c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c65cc: // orphan
         if                       // unlikely
         

    loc_0x803c65d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c65e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c65ec: // orphan
         if                       // unlikely
         

    loc_0x803c65f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6600: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c660c: // orphan
         
         // CODE XREF from fcn.803a002c @ 0x803b992c
         if                       // unlikely
         if                       // unlikely

    loc_0x803c661c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6628: // orphan
         

    loc_0x803c662c: // orphan
         if                       // fcn.803b9918+0x28278 // unlikely
         if                       // unlikely

    loc_0x803c6638: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c663c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6644: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6648: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6650: // orphan
         if                       // fcn.803e1cd4+0x10 // unlikely
         if                       // unlikely

    loc_0x803c6654: // orphan
         if                       // fcn.803e1cd4+0x10 // unlikely
         if                       // unlikely

    loc_0x803c665c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803c666c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6684: // orphan
         if                       // fcn.803e2004-0xac // unlikely
         if                       // fcn.803e2004-0x48 // unlikely

    loc_0x803c6690: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c669c: // orphan
         // CODE XREF from fcn.803b9918 @ 0x803b9938
         if                       // unlikely
         

    loc_0x803c66a4: // orphan
         if                       // fcn.803e2004+0x94 // unlikely
         if                       // fcn.803e2004+0xa8 // unlikely

    loc_0x803c66b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c66bc: // orphan
         if                       // fcn.803e2124-0x14 // unlikely
         // CODE XREF from fcn.803b9918 @ 0x803b993c
         if                       // unlikely

    loc_0x803c66c8: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803c66dc: // orphan
         
         
         if                       // fcn.803e23fc+0x2c // unlikely
         if                       // unlikely

    loc_0x803c66e8: // orphan
         
         
         if                       // fcn.803e23fc+0x2c // unlikely
         if                       // unlikely

    loc_0x803c66ec: // orphan
         // CODE XREF from fcn.803b9918 @ 0x803b9948
         if                       // unlikely
         

    loc_0x803c66f0: // orphan
         

    loc_0x803c66f4: // orphan
         
         
         
         if                       // fcn.803c6038+0x1c5dc // unlikely
         if                       // unlikely

    loc_0x803c670c: // orphan
         if                       // unlikely
         

    loc_0x803c6714: // orphan
         
         

    loc_0x803c671c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6728: // orphan
         
         if                       // unlikely
         

    loc_0x803c6734: // orphan
         if                       // fcn.803dc730+0x6228 // unlikely
         if                       // unlikely

    loc_0x803c6740: // orphan
         
         // CODE XREF from fcn.803b9918 @ 0x803b9950
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6750: // orphan
         if                       // unlikely
         

    loc_0x803c6758: // orphan
         // CODE XREF from fcn.803b9918 @ 0x803b9954
         
         if                       // fcn.803e3bcc+0x274 // unlikely
         if                       // fcn.803e3bcc+0x298 // unlikely

    loc_0x803c6768: // orphan
         if                       // fcn.803f002c-0xbed0 // unlikely
         // CODE XREF from fcn.803b9918 @ +0x40
         if                       // unlikely

    loc_0x803c6774: // orphan
         if                       // fcn.803e4500+0x38 // unlikely
         if                       // unlikely

    loc_0x803c6780: // orphan
         if                       // fcn.803e4644-0x20 // unlikely
         if                       // unlikely

    loc_0x803c6784: // orphan
         if                       // fcn.803e4644-0x20 // unlikely
         if                       // unlikely

    loc_0x803c678c: // orphan
         if                       // fcn.803e4994+0x10c // unlikely
         if                       // unlikely

    loc_0x803c6790: // orphan
         if                       // fcn.803e4994+0x10c // unlikely
         if                       // unlikely

    loc_0x803c6798: // orphan
         if                       // fcn.803f1f1c-0xd390 // unlikely
         if                       // unlikely

    loc_0x803c679c: // orphan
         if                       // fcn.803f1f1c-0xd390 // unlikely
         if                       // unlikely

    loc_0x803c67a4: // orphan
         

    loc_0x803c67a8: // orphan
         

    loc_0x803c67ac: // orphan
         
         
         
         
         
         // CODE XREF from fcn.803b9918 @ 0x803b995c
         
         
         
         
         if                       // fcn.803e4fc8+0x2c // unlikely
         if                       // unlikely

    loc_0x803c67dc: // orphan
         
         
         
         if                       // fcn.80400480-0x1b8e4 // unlikely
         if                       // unlikely

    loc_0x803c67f4: // orphan
         if                       // fcn.80401e44-0x1cb9c // unlikely
         if                       // unlikely

    loc_0x803c6800: // orphan
         if                       // fcn.803e53d4 // unlikely
         if                       // unlikely

    loc_0x803c680c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803b9918 @ 0x803b996c
         if                       // unlikely

    loc_0x803c6818: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6824: // orphan
         if                       // fcn.803e53d4+0x84 // unlikely
         // CODE XREF from fcn.803b9918 @ +0x4c
         if                       // unlikely

    loc_0x803c6830: // orphan
         if                       // fcn.803b9918+0x2bbbc // unlikely
         if                       // unlikely

    loc_0x803c683c: // orphan
         if                       // fcn.803b9918+0x2bf28 // unlikely
         if                       // unlikely

    loc_0x803c6848: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6854: // orphan
         

    loc_0x803c6858: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6864: // orphan
         if                       // fcn.80401e44-0x1c29c // unlikely
         if                       // fcn.80401e44-0x1c338 // unlikely

    loc_0x803c6910: // orphan
         if                       // fcn.80401e44-0x1b9b0 // unlikely
         if                       // unlikely

    loc_0x803c691c: // orphan
         // CODE XREF from fcn.803b9918 @ +0x70
         if                       // fcn.803dcc5c+0x9884 // unlikely
         if                       // fcn.803dcc5c+0x9898 // unlikely

    loc_0x803c6928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c6934: // orphan
         if                       // fcn.803dcc5c+0x994c // unlikely
         if                       // unlikely

    loc_0x803c6940: // orphan
         
         
         
         if                       // fcn.803dcc5c+0x9ac4 // unlikely
         if                       // fcn.80402018-0x1b8c4 // unlikely

    loc_0x803c6958: // orphan
         if                       // fcn.80402018-0x1b8ac // unlikely
         if                       // fcn.80402018-0x1b878 // unlikely

    loc_0x803c6964: // orphan
         if                       // fcn.80402018-0x1b880 // unlikely
         

    loc_0x803c696c: // orphan
         if                       // fcn.80402018-0x1b828 // unlikely
         // CODE XREF from fcn.803b9918 @ 0x803b998c
         if                       // fcn.80402018-0x1b814 // unlikely

    loc_0x803c6978: // orphan
         if                       // fcn.80402030-0x1b7f4 // unlikely
         if                       // fcn.80402030-0x1b7e0 // unlikely

    loc_0x803c6984: // orphan
         if                       // fcn.803dcc5c+0x9cac // unlikely
         if                       // fcn.803dcc5c+0x9cd0 // unlikely

    loc_0x803c6990: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803c699c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803c69ac: // orphan
         // CODE XREF from fcn.803b9918 @ 0x803b9998
         if                       // unlikely
         

    loc_0x803c69b4: // orphan
         if                       // unlikely
         if                       // fcn.803a6b40+0xc // unlikely

    loc_0x803c69c0: // orphan
         // CODE XREF from fcn.803b9918 @ 0x803b999c
         if                       // unlikely
         // CODE XREF from fcn.803b9918 @ 0x803b9990
         if                       // unlikely

    loc_0x803c69cc: // orphan
         
         

    loc_0x803c69d4: // orphan
         
         // CODE XREF from fcn.803b9918 @ +0x7c
         if                       // fcn.803a6b40+0x2cc // unlikely
         if                       // unlikely

    loc_0x803c69e4: // orphan
         if                       // fcn.803a6b40+0x308 // unlikely
         if                       // fcn.803a6b40+0x33c // unlikely

    loc_0x803c69f0: // orphan
         
         if                       // fcn.803a6b40+0x3c8 // unlikely
         if                       // unlikely

    loc_0x803c6a00: // orphan
         if                       // fcn.803a6b40+0x404 // unlikely
         if                       // fcn.803a6b40+0x428 // unlikely

    loc_0x803c6a0c: // orphan
         

    loc_0x803c6a10: // orphan
         
         if                       // fcn.803a6b40+0x488 // unlikely
         if                       // fcn.803a6b40+0x4fc // unlikely

    loc_0x803c6a20: // orphan
         if                       // fcn.803a6b40+0x4f4 // unlikely
         if                       // fcn.803a6b40+0x4b8 // unlikely

    loc_0x803c6a2c: // orphan
         if                       // fcn.803a700c+0x4 // unlikely
         if                       // fcn.803a6b40+0x4e4 // unlikely

    loc_0x803c6a38: // orphan
         if                       // fcn.803a6b40+0x55c // unlikely
         // CODE XREF from fcn.803b9918 @ 0x803b99a8
         if                       // fcn.803a6b40+0x540 // unlikely

    loc_0x803c6a44: // orphan
         

    loc_0x803c6a48: // orphan
         if                       // fcn.803a6b40+0x6ec // unlikely
         if                       // fcn.803a6b40+0x700 // unlikely

    loc_0x803c6a54: // orphan
         if                       // fcn.803a6b40+0x778 // unlikely
         if                       // fcn.803a6b40+0x7dc // unlikely

    loc_0x803c6a60: // orphan
         if                       // fcn.803a6b40+0x854 // unlikely
         if                       // fcn.803a6b40+0x868 // unlikely

    loc_0x803c6a6c: // orphan
         if                       // fcn.803a6b40+0x8e0 // unlikely
         

    loc_0x803c6a74: // orphan
         
         
         if                       // fcn.803a6b40+0xa80 // unlikely
         if                       // fcn.803a6b40+0xab4 // unlikely

    loc_0x803e1750: // orphan
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         ret                      // ra
         sp += 0x80

    loc_0x803e1768: // orphan
         a0 += 0x510              // arg1
         call 0x80007820          // 0x80007820(0x10000050f, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0x800d << 16
         t6 = 0 + 0xf0
         [sp + 0x10] = t6
         a0 += 0x510
         a1 = 0
         a2 = 0
         call 0x8000766c          // 0x8000766c(0x800d0510, 0x0, 0x0, -1)
         a3 = 0 + 0x140
         call 0x87f00930          // 0x87f00930(0x800d0510, 0x0, 0x0, 0x140)
         
         if                       // likely
         

    loc_0x803e17a4: // orphan
         call 0x8003c970          // 0x8003c970(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x803e17ac: // orphan
         t7 = 0x86a4 << 16
         t7 = [t7 + 0x6548]       // t9
         call 0x8003c6b8          // 0x8003c6b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t7 + 8]            // t9

    loc_0x803e17bc: // orphan
         call 0x86a095a0          // 0x86a095a0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t8 = 0x86a4 << 16
         t8 = [t8 + 0x6548]       // t9
         t9 = [t8 + 0]
         at = , unsigned  , t9 < 9
         if                       // likely
         t9 <<= 2

    loc_0x803e17dc: // orphan
         at = 0x86a1 << 16
         at += t9
         t9 = [at - 0xc30]
         goto t9
         

    loc_0x803e1800: // orphan
         
         t0 = 0x86a1 << 16

    loc_0x803e1808: // orphan
         t0 = [t0 - 0x2b30]       // t9
         a0 = 0x86a1 << 16
         if                       // unlikely
         

    loc_0x803e1818: // orphan
         call 0x87f07fe8          // 0x87f07fe8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x718

    loc_0x803e1820: // orphan
         t1 = 0x86a4 << 16
         t1 = [t1 + 0x44c4]       // t9
         if                       // unlikely
         

    loc_0x803e1830: // orphan
         call 0x86a07334          // 0x86a07334(-1, 0x442f71dcfe116408, 0x8, -1)
         // CALL XREF from fcn.82ced2f8 @ +0x1cc
         

    loc_0x803e1838: // orphan
         t2 = 0x86a1 << 16
         t2 = [t2 - 0x2b2c]       // t9
         if                       // unlikely
         

    loc_0x803e1848: // orphan
         call 0x87f022f0          // 0x87f022f0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e184c: // orphan
         
         goto 0x803e18bc
         

    loc_0x803e185c: // orphan
         
         goto 0x803e18bc
         

    loc_0x803e18bc: // orphan
         // CODE XREFS from fcn.803c507c @ 0x803e1850, 0x803e1860
         call 0x87f00930          // 0x87f00930(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 1               // lo

    loc_0x803e18c8: // orphan
         if                       // likely
         

    loc_0x803e18d0: // orphan
         call 0x87f01d44          // 0x87f01d44(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x803e18d8: // orphan
         a0 = 0x86a4 << 16
         a0 = [a0 + 0x6548]       // t9
         call 0x87f0c88c          // 0x87f0c88c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x1c
         call 0x80008648          // 0x80008648(0x10000001b, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x803e18f0: // orphan
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x803e191c: // orphan
         t7 = 0 + 8               // a2
         t9 = 0 + 9
         [t8 + 0] = t7
         t0 = [v0 + 0]            // t9
         a0 = 0 | 0xffff          // arg1
         call 0x800088a4          // 0x800088a4(0xffff, 0x442f71dcfe116408, 0x8, -1)
         [t0 + 4] = t9
         call 0x80007b34          // 0x80007b34(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803e1a58: // orphan
         t1 = 0x86a4 << 16
         t1 = [t1 + 0x4414]       // t9
         v0 = 0 + 9
         t2 = 0x86a4 << 16
         if                       // unlikely
         

    loc_0x803e1a70: // orphan
         t2 = [t2 + 0x4418]       // t9
         t3 = 0x86a4 << 16
         if                       // unlikely
         

    loc_0x803e1a80: // orphan
         t3 = [t3 + 0x441c]       // t9
         t4 = 0x86a4 << 16
         if                       // unlikely
         

    loc_0x803e1a90: // orphan
         t4 = [t4 + 0x4420]       // t9
         t9 = 0x86a4 << 16
         if                       // likely
         

    loc_0x803e1aa0: // orphan
         call 0x86a05dcc          // 0x86a05dcc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86a06d88          // 0x86a06d88(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x43f0]       // t9
         at = 0x86a4 << 16
         t7 = 0x86a4 << 16
         v1 = , v0 < -0x3c
         t5 = v0 - 1
         if                       // likely
         [at + 0x43f0] = t5

    loc_0x803e1ad0: // orphan
         t7 = [t7 + 0x6548]       // t9
         t6 = 0 + 5

    loc_0x803e1ad8: // orphan
         goto 0x803e1aec
         [t7 + 0] = t6

    loc_0x803e1ae0: // orphan
         t9 = [t9 + 0x6548]
         t8 = 0 + 5
         [t9 + 0] = t8

    loc_0x803e1aec: // orphan
         // CODE XREF from fcn.803c507c @ 0x803e1ad8
         ra = [sp + 0x14]

    loc_0x803e1af0: // orphan
         // CODE XREF from fcn.803dc730 @ 0x803e1a38
         sp += 0x18
         ret                      // ra
         

    loc_0x803e1b34: // orphan
         at = , unsigned  , t7 < 9 // lo
         if                       // fcn.803e2004+0x7c // unlikely
         t7 <<= 2

    loc_0x803e1b40: // orphan
         at = 0x86a1 << 16
         at += t7
         t7 = [at - 0xc0c]        // t9
         goto t7                  // t9
         

    loc_0x803e1ba4: // orphan
         s0 = 0x86a4 << 16
         s1 = 0x86a4 << 16
         s1 += 0x38b0
         s0 += 0x3310

    loc_0x803e1bb4: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 0x168
         at = , unsigned  , s0 < s1 // lo
         if                       // likely
         

    loc_0x803e1bcc: // orphan
         s0 = 0x86a4 << 16
         s1 = 0x86a4 << 16
         s1 += 0x43f0
         s0 += 0x3e50
         a0 = s0

    loc_0x803e1be0: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e1be4: // orphan
         a1 = 0 + 0xb
         call 0x8003ec54          // 0x8003ec54(-1, 0xb, 0x8, -1)
         a0 = s0
         if                       // unlikely
         a0 = s0

    loc_0x803e1bf8: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 1 << 16
         a1 |= 0x8000
         call 0x8003eb74          // 0x8003eb74(-1, 0x18000, 0x8, -1)
         a0 = s0

    loc_0x803e1c10: // orphan
         s0 += 0x168
         bnel s0, s1, 0x803e1be0  // likely
         a0 = s0

    loc_0x803e1c1c: // orphan
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e1c20: // orphan
         
         if                       // fcn.803e2004+0x7c // likely
         t9 = 0x86a4 << 16

    loc_0x803e1c2c: // orphan
         t9 = [t9 + 0x6548]
         s0 = 0 + 1               // lo

    loc_0x803e1c34: // orphan
         goto 0x803e2080          // fcn.803e2004+0x7c
         [t9 + 0] = s0

    loc_0x803e1c8c: // orphan
         call 0x87f006ac          // 0x87f006ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = 0 + 1               // lo
         if                       // likely
         

    loc_0x803e1ca0: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x2f00

    loc_0x803e1ca8: // orphan
         call 0x87f006ac          // 0x87f006ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 2

    loc_0x803e1d08: // orphan
         call 0x87f01a40          // 0x87f01a40(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         at = 0 + 2

    loc_0x803e1d18: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803e1d20: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x803e1d28: // orphan
         if                       // unlikely
         

    loc_0x803e1d30: // orphan
         goto 0x803e2080          // fcn.803e2004+0x7c
         

    loc_0x803e1d38: // orphan
         call 0x86a014d0          // 0x86a014d0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x803e2080          // fcn.803e2004+0x7c
         

    loc_0x803e1d48: // orphan
         call 0x86a01480          // 0x86a01480(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x803e2080          // fcn.803e2004+0x7c
         

    loc_0x803e1d58: // orphan
         call 0x86a01480          // 0x86a01480(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x803e2080          // fcn.803e2004+0x7c
         

    loc_0x803e1db8: // orphan
         call 0x86a01480          // 0x86a01480(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x803e2080          // fcn.803e2004+0x7c
         

    loc_0x803e1e44: // orphan
         a0 = 0
         t6 = 0x86a4 << 16
         t6 = [t6 + 0x6548]       // t9
         t5 = 0 + 8               // a2
         t7 = 0x86a4 << 16

    loc_0x803e1e58: // orphan
         [t6 + 0] = t5
         t7 = [t7 + 0x6548]       // t9
         a0 = 0 + 0xa             // arg1
         call 0x80007b34          // 0x80007b34(0xa, 0x442f71dcfe116408, 0x8, -1)
         [t7 + 4] = 0
         t8 = 0x86a4 << 16
         t8 += 0x2d50

    loc_0x803e1e74: // orphan
         s0 = 0x86a4 << 16
         s2 = 0x86a4 << 16
         at = 0x86a1 << 16
         lwc1 f20, -0xbe8, at
         s2 += 0x38d4
         s0 += 0x38b0
         [sp + 0x34] = t8
         s1 = 0

    loc_0x803e1e94: // orphan
         a1 = 0x87f1 << 16
         a1 += 0x5b70             // arg2
         call 0x8003f03c          // 0x8003f03c(-1, 0x87f15b70, 0x8, -1)
         a0 = s0
         a0 = s2
         call 0x87f06430          // 0x87f06430(-1, 0x87f15b70, 0x8, -1)
         a1 = s1
         at = 0x4248 << 16
         mtc1 at, f4
         t9 = [sp + 0x34]
         swc1 f20, 0x38, s0
         swc1 f20, 0x34, s0
         swc1 f20, 0x30, s0
         swc1 f4, 0x28, s0
         a0 = s0

    loc_0x803e1ed0: // orphan
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [t9 + 0]            // s0
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x0, -1, 0x104)
         a1 = 0
         call 0x8007afa0          // 0x8007afa0(0x104, 0x0, -1, 0x104)
         
         at = 0 + 0x18
         div 0, v0, at
         a1 = hi
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // 0x8003eb84(0x104, 0xfffffffe, -1, 0x104)
         a0 = s0
         a1 = 1 << 16
         a1 |= 0x8000
         call 0x8003eb74          // 0x8003eb74(0x104, 0x18000, -1, 0x104)
         a0 = s0
         t0 = [sp + 0x34]         // t9
         s1 += 1
         at = , s1 < 4
         t1 = t0 + 4
         [sp + 0x34] = t1
         s0 += 0x168
         if                       // unlikely
         s2 += 0x168

    loc_0x803e1f40: // orphan
         s0 = 0x86a4 << 16

    loc_0x803e1f44: // orphan
         s2 = 0x86a4 << 16

    loc_0x803e1f48: // orphan
         s2 += 0x3e74
         s0 += 0x3e50
         s1 = 0 + 4

    loc_0x803e2010: // orphan
         s2 += 0x168

    loc_0x803e2078: // orphan
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa

    loc_0x803e2154: // orphan
         [sp + 0x34] = a1

    loc_0x803e2158: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4d45             // t9
         t7 = [sp + 0x34]
         v1 = 0x86a4 << 16
         t6 = 0x86a4 << 16
         v1 += 0x6548
         t6 += 0x6550
         [v1 + 0] = t6

    loc_0x803e2178: // orphan
         [t6 + 0xc] = t7
         t9 = [v1 + 0]
         at = 0 + 4
         t0 = [t9 + 0xc]
         t1 = , unsigned  byte [t0 + 0x2180] // s4
         bnel t1, at, 0x803e21a0  // likely
         a0 = 2 << 16

    loc_0x803e2194: // orphan
         call 0x80027ee0          // 0x80027ee0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xfff
         a0 = 2 << 16

    loc_0x803e21a0: // orphan
         call 0x80006cd0          // "$\n" // 0x80006cd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t2 = 0 + 2
         t3 = 0 + 1               // lo
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         a0 = 0
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x0, 0x0, 0x2, -1)
         a3 = 0 + 1               // lo
         [sp + 0x2c] = v0
         call 0x8004c09c          // 0x8004c09c(0x0, 0x0, 0x2, 0x1)
         a0 = 0 + 0x12f
         t4 = 0x86a4 << 16
         t4 = [t4 + 0x6548]
         a1 = 0x86a1 << 16
         a1 -= 0x718

    loc_0x803e21e8: // orphan
         a0 = 0 + 0x6f            // arg1
         call 0x87f06eac          // 0x87f06eac(0x6f, 0x442f71dcfe116408, 0x8, -1)
         a2 = [t4 + 0xc]          // t9
         t5 = 0x86a4 << 16
         t5 = [t5 + 0x6548]

    loc_0x803e21fc: // orphan
         a0 = 0x86a1 << 16
         a0 -= 0x6e0              // arg1
         call 0x87f09ebc          // 0x87f09ebc(0x86a0f920, 0x442f71dcfe116408, 0x8, -1)
         a1 = [t5 + 0xc]          // t9
         t6 = 0x86a4 << 16
         t6 = [t6 + 0x6548]
         a0 = 0x86a1 << 16
         a0 -= 0x678
         a2 = 0
         call 0x87f0d48c          // 0x87f0d48c(0x86a0f988, -1, 0x0, -1)
         a1 = [t6 + 0xc]          // t9
         call 0x8004ddf4          // 0x8004ddf4(0x86a0f988, -1, 0x0, -1)
         a0 = 0 + 0x67

    loc_0x803e2230: // orphan
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x52
         call 0x8004ddf4          // 0x8004ddf4(0x52, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x5c
         call 0x8004ddf4          // 0x8004ddf4(0x5c, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x60
         call 0x8004ddf4          // 0x8004ddf4(0x60, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xaf
         call 0x8004ddf4          // 0x8004ddf4(0xaf, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb0
         call 0x8004ddf4          // 0x8004ddf4(0xb0, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e225c: // orphan
         a0 = 0 + 0xb5
         call 0x8004ddf4          // 0x8004ddf4(0xb5, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa9
         call 0x8004ddf4          // 0x8004ddf4(0xa9, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb4
         call 0x8004ddf4          // 0x8004ddf4(0xb4, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e2274: // orphan
         a0 = 0 + 0xae
         call 0x8004ddf4          // 0x8004ddf4(0xae, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb8
         call 0x8004ddf4          // 0x8004ddf4(0xb8, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb1
         call 0x8004ddf4          // 0x8004ddf4(0xb1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xaa
         call 0x8004ddf4          // 0x8004ddf4(0xaa, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x94
         call 0x8004ddf4          // 0x8004ddf4(0x94, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x93
         t7 = 0x86a1 << 16
         t7 = [t7 - 0x710]        // t9
         t9 = 0x86a1 << 16
         t9 = [t9 - 0x6c0]
         t1 = [sp + 0x24]
         t8 = t7 | 0x2d           // t9
         t0 = t8 | t9
         a1 = 0
         call 0x80047588          // 0x80047588(0x93, 0x0, 0x8, -1)
         a0 = t0 | t1             // t9
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00
         a1 += 0x6e30
         a0 >>= 0x18              // lo
         call 0x80004638          // 0x80004638(0x1, 0x446e30, 0x447d00, -1)
         a3 = 0
         call 0x86a004b4          // 0x86a004b4(0x1, 0x446e30, 0x447d00, 0x0)
         
         call 0x80008514          // 0x80008514(0x1, 0x446e30, 0x447d00, 0x0)
         a0 = [sp + 0x2c]         // s4
         call 0x86a01c5c          // 0x86a01c5c(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80008574          // 0x80008574(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80006158          // 0x80006158(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80047610          // 0x80047610(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x8004c398          // 0x8004c398(0xff, 0x446e30, 0x447d00, 0x0)

    loc_0x803e2328: // orphan
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x4b41 << 16

    loc_0x803e244c: // orphan
         t1 += 0x2d70
         t9 <<= 3

    loc_0x803e2454: // orphan
         a0 = t9 + t1             // arg1
         a1 = 0
         call 0x8003f210          // 0x8003f210(0x20000000a, 0x0, 0x8, -1)

    loc_0x803e2460: // orphan
         [sp + 0x4c] = a3
         t2 = [sp + 0x30]
         t0 = 0x86a4 << 16
         t0 += 0x43f0
         a3 = [sp + 0x4c]         // t9
         goto 0x803e29a0
         v1 = [t2 + 0x24]         // t9

    loc_0x803e2658: // orphan
         v1 = [t8 + 0x24]         // t9
         t9 = a3 << 2             // arg4
         t9 -= a3                 // arg4
         t9 <<= 2
         t9 -= a3                 // arg4
         t9 <<= 2
         t9 += a3                 // arg4
         t1 = 0x86a4 << 16
         t1 += 0x2d70
         t9 <<= 3
         s0 = t9 + t1
         a0 = s0
         a1 = 0 + 4               // arg2
         call 0x8003f210          // 0x8003f210(0x86a42c08, 0x4, 0x8, -1)
         [sp + 0x4c] = a3
         call 0x8003ec54          // 0x8003ec54(0x86a42c08, 0x4, 0x8, -1)
         a0 = s0
         at = 0 + 0xa

    loc_0x803e26a0: // orphan
         beql v0, at, 0x803e26c0  // unlikely
         t2 = [sp + 0x30]

    loc_0x803e26a8: // orphan
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         at = 0 + 0x17
         bnel v0, at, 0x803e26e8  // likely
         t4 = [sp + 0x30]

    loc_0x803e26bc: // orphan
         t2 = [sp + 0x30]

    loc_0x803e26c0: // orphan
         a2 = [sp + 0x24]
         a0 = 0 | 0x8f0c
         t3 = [t2 + 0xe8]         // t9
         a2 += 0xe48
         at = , t3 < 4
         beql at, 0, 0x803e26e8   // likely
         // CALL XREF from fcn.81cf9408 @ 0x81cf9408
         t4 = [sp + 0x30]

    loc_0x803e26e8: // orphan
         t0 = 0x86a4 << 16
         t0 += 0x43f0
         a3 = [sp + 0x4c]         // t9
         goto 0x803e29a0
         v1 = [t4 + 0x24]         // t9

    loc_0x803e27c4: // orphan
         a0 = s0
         a1 = 0 + 6               // arg2
         call 0x8003f210          // 0x8003f210(0x104, 0x6, 0x8, -1)
         [sp + 0x4c] = a3
         call 0x8003ec34          // 0x8003ec34(0x104, 0x6, 0x8, -1)
         a0 = s0
         if                       // unlikely
         a0 = s0

    loc_0x803e27e4: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 9

    loc_0x803e27ec: // orphan
         t3 = [sp + 0x30]
         t0 = 0x86a4 << 16
         t0 += 0x43f0
         a3 = [sp + 0x4c]         // t9
         goto 0x803e29a0
         v1 = [t3 + 0x24]         // t9

    loc_0x803e28a0: // orphan
         [sp + 0x4c] = a3
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         if                       // unlikely
         a0 = s0

    loc_0x803e28b4: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x803e28bc: // orphan
         t9 = [sp + 0x30]
         t0 = 0x86a4 << 16
         t0 += 0x43f0
         a3 = [sp + 0x4c]         // t9
         goto 0x803e29a0
         v1 = [t9 + 0x24]

    loc_0x803e296c: // orphan
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x4c] = a3
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         if                       // unlikely
         a0 = s0

    loc_0x803e2984: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x803e298c: // orphan
         t6 = [sp + 0x30]
         t0 = 0x86a4 << 16
         t0 += 0x43f0
         a3 = [sp + 0x4c]         // t9
         v1 = [t6 + 0x24]         // t9

    loc_0x803e29a0: // orphan
         // XREFS: CODE 0x803e2474  CODE 0x803e25b4  CODE 0x803e2654  
         // XREFS: CODE 0x803e26f4  CODE 0x803e27fc  CODE 0x803e28cc  
         at = 0 + 6
         if                       // unlikely
         t1 = a3 << 2             // arg4

    loc_0x803e29ac: // orphan
         at = 0 + 0xa
         if                       // unlikely
         t7 = a3 << 2             // arg4

    loc_0x803e29b8: // orphan
         t8 = 0x86a4 << 16
         t8 = [t8 + 0x6590]       // t9

    loc_0x803e29f8: // orphan
         t4 = a3 << 2             // arg4
         t4 -= a3                 // arg4
         t2 = 0x86a4 << 16
         t3 = a3 << 3             // arg4
         t2 = [t2 + 0x6590]       // t9
         v1 = t0 + t3
         t4 <<= 2
         lwc1 f18, 4, v1
         t4 -= a3                 // arg4
         t1 -= a3                 // arg4
         t1 <<= 3
         t4 <<= 2
         t4 += a3                 // arg4
         t5 = 0x86a4 << 16
         s0 = t1 + t2
         t5 += 0x2d70
         t4 <<= 3
         swc1 f18, 4, s0
         [sp + 0x30] = v1
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t4 + t5
         t6 = v0 << 2
         at = 0x86a1 << 16
         at += t6
         lwc1 f4, -0x2848, at
         at = 0x86a1 << 16
         ldc1 f8, -0xbb8, at
         cvt.d.s f6, f4
         at = 0x4059 << 16
         mul.d f10, f6, f8
         mtc1 at, f17
         mtc1 0, f16
         at = 0x86a1 << 16
         ldc1 f4, -0xbb0, at
         v1 = [sp + 0x30]
         mul.d f18, f10, f16
         sub.d f6, f18, f4
         cvt.s.d f8, f6
         swc1 f8, 8, s0
         lwc1 f10, 8, v1
         goto 0x803e2eec
         swc1 f10, 0xc, s0

    loc_0x803e2aa0: // orphan
         t1 = a3 << 2             // arg4
         t1 -= a3                 // arg4
         t8 = 0x86a4 << 16
         t9 = a3 << 3             // arg4
         t8 = [t8 + 0x6590]       // t9
         v1 = t0 + t9
         t1 <<= 2
         lwc1 f16, 4, v1
         t1 -= a3                 // arg4
         t7 -= a3                 // arg4 // lo
         t7 <<= 3                 // a2
         t1 <<= 2
         t1 += a3                 // arg4
         t2 = 0x86a4 << 16
         s0 = t7 + t8

    loc_0x803e2adc: // orphan
         t2 += 0x2d70
         t1 <<= 3

    loc_0x803e2ae4: // orphan
         swc1 f16, 4, s0
         [sp + 0x30] = v1
         call 0x8003ec54          // 0x8003ec54(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t1 + t2
         t3 = v0 << 2
         at = 0x86a1 << 16
         at += t3
         lwc1 f18, -0x2770, at
         at = 0x86a1 << 16
         ldc1 f6, -0xba8, at
         cvt.d.s f4, f18
         at = 0x4059 << 16
         mul.d f8, f4, f6
         mtc1 at, f11
         mtc1 0, f10
         at = 0x86a1 << 16
         ldc1 f18, -0xba0, at
         v1 = [sp + 0x30]
         mul.d f16, f8, f10
         sub.d f4, f16, f18
         cvt.s.d f6, f4
         swc1 f6, 8, s0
         lwc1 f8, 8, v1
         goto 0x803e2eec
         swc1 f8, 0xc, s0

    loc_0x803e2c7c: // orphan
         [sp + 0x3c] = t8
         t9 = 0 + 0x17
         goto 0x803e2cec
         [sp + 0x3c] = t9

    loc_0x803e2cec: // orphan
         // CODE XREF from fcn.803c507c @ 0x803e2c84
         t6 = a3 << 2             // arg4
         t6 -= a3                 // arg4
         t6 <<= 2
         t6 -= a3                 // arg4
         t6 <<= 2
         t6 += a3                 // arg4
         t7 = 0x86a4 << 16
         t7 += 0x2d70
         t6 <<= 3
         s0 = t6 + t7
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x86a42c08, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xb
         call 0x8003ec54          // 0x8003ec54(0x86a42c08, 0xb, 0x8, -1)
         a0 = s0
         t8 = [sp + 0x3c]
         a0 = s0
         at = , t8 < v0           // lo
         if                       // unlikely
         a1 = t8 - 1

    loc_0x803e2d3c: // orphan
         a1 <<= 0x10
         call 0x8003eb84          // 0x8003eb84(-1, 0x71dcfe1164080000, 0x8, -1)
         a1 = , signed  a1 >> 0x10
         goto 0x803e2eec
         

    loc_0x803e2eec: // orphan
         // XREFS: CODE 0x803e29f0  CODE 0x803e2a98  CODE 0x803e2b40  
         // XREFS: CODE 0x803e2d48  CODE 0x803e2e28  CODE 0x803e2e98  
         v1 = 0x8009 << 16
         v1 = , unsigned  halfword [v1 + 0x4904]

    loc_0x803e3594: // orphan
         a0 = 0 | 0x8f05          // arg1
         call 0x8002781c          // 0x8002781c(0x8f05, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         goto fcn.803e3684        // fcn.803e3684(0x8f05, 0xff, 0x8, -1, -1, -1, -1, -1, -1, -1)
         ra = [sp + 0x4c]         // t9

    loc_0x803e41e0: // orphan
         lwc1 f4, 0x50, a1        // arg2
         lwc1 f6, 0x18, a1        // arg2
         add.s f8, f4, f6
         swc1 f8, 0x50, a1        // arg2
         a1 = [v0 + 0]            // t9

    loc_0x803e41f4: // orphan
         lwc1 f10, 0x14, a1       // arg2
         cvt.d.s f16, f10
         sub.d f4, f16, f18
         cvt.s.d f6, f4
         swc1 f6, 0x14, a1        // arg2
         a1 = [v0 + 0]            // t9
         t6 = , unsigned  byte [a1 + 0x41] // arg2 // s4
         t7 = t6 - 7
         byte [a1 + 0x41] = t7    // arg2
         a1 = [v0 + 0]            // t9
         ldc1 f16, -0xa48, at
         lwc1 f8, 0x4c, a1        // arg2
         cvt.d.s f10, f8
         c.lt.d f10, f16
         
         bc1f 0x803e423c
         
         v1 = 0 + 1               // lo
         beql v1, 0, 0x803e4250   // unlikely
         ra = [sp + 0x14]         // lo

    loc_0x803e4244: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         ra = [sp + 0x14]         // lo

    loc_0x803e4250: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803e456c: // orphan
         t5 = t3 - t4
         [v1 + 0xe8] = t5
         swc1 f8, 0xd8, v1
         ret                      // ra
         

    loc_0x803e4a08: // orphan
         t5 = t4 - 1
         [v1 + 0xe60] = t5
         t6 = [a1 + 0x20]         // arg2 // t9
         a0 = [a0 + 0x19d8]       // arg1 // t9
         t8 = t6 << 2
         at += t8
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x5ad0] = 0
         a1 = 0x87f1 << 16
         goto 0x803e4ac4
         a1 = [a1 + 0x19dc]       // t9

    loc_0x803e4ab4: // orphan
         t6 = [t6 + 0x52b0]       // t9
         at = 0x86a4 << 16
         t8 = t6 + 1
         [at + 0x52b0] = t8

    loc_0x803e4ac4: // orphan
         // CODE XREF from fcn.803c507c @ 0x803e4a2c
         lwc1 f16, 0x50, a1       // arg2
         at = 0x4014 << 16
         mtc1 at, f19
         mtc1 0, f18
         cvt.d.s f10, f16
         add.d f4, f10, f18
         cvt.s.d f6, f4
         swc1 f6, 0x50, a1        // arg2
         ra = [sp + 0x64]
         fp = [sp + 0x60]
         s7 = [sp + 0x5c]
         s6 = [sp + 0x58]
         s5 = [sp + 0x54]
         s4 = [sp + 0x50]
         s3 = [sp + 0x4c]         // t9
         s2 = [sp + 0x48]

    loc_0x803e4b04: // orphan
         s1 = [sp + 0x44]
         s0 = [sp + 0x40]
         ldc1 f26, 0x38, sp
         ldc1 f24, 0x30, sp
         ldc1 f22, 0x28, sp
         ldc1 f20, 0x20, sp
         ret                      // ra
         sp += 0x78

    loc_0x803e4cd0: // orphan
         goto 0x803e4ce0          // fcn.803c507c+0x1fc64
         

    loc_0x803e4cd4: // orphan
         goto 0x803e4ce0
         [sp + 0x2c] = 0

    loc_0x803e4ce0: // orphan
         // CODE XREF from fcn.80400480 @ 0x803e4ccc
         // CODE XREF from fcn.803c507c @ 0x803e4cd4
         a0 = 0x86a4 << 16
         a1 = 0x86a0 << 16
         a1 += 0x41d8             // arg2
         a0 += 0xfa0              // arg1
         call 0x87f025b8          // 0x87f025b8(0x86a40fa0, 0x86a041d8, 0x8, -1)

    loc_0x803e4cf4: // orphan
         [sp + 0x30] = a2
         a2 = [sp + 0x30]
         if                       // unlikely
         v1 = v0                  // s4

    loc_0x803e4d04: // orphan
         a0 = a2 << 2             // k0
         at = 0x86a4 << 16
         at += a0
         t9 = 0 + 1               // lo
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
         // CODE XREF from fcn.82c86090 @ +0x140
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v0
         at = 0 + 0x61
         div 0, v0, at
         t1 = hi
         at = , t1 < 0xb          // lo
         if                       // likely
         v1 = [sp + 0x28]         // s4

    loc_0x803e4d74: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
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
         t5 = [t5 - 0x720]        // t9
         if                       // fcn.803e4e74+0xa0 // likely
         

    loc_0x803e4db4: // orphan
         lwc1 f18, 0x10, v1
         mtc1 at, f4
         at = 0x40a0 << 16
         mtc1 at, f8
         mul.s f6, f18, f4

    loc_0x803e4dc8: // orphan
         div.s f10, f6, f8

    loc_0x803e4dd4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v1

    loc_0x803e4ddc: // orphan
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

    loc_0x803e4e04: // orphan
         swc1 f18, 0x10, v1
         t9 = [t9 - 0x720]
         if                       // fcn.803e4e74+0xa0 // likely
         

    loc_0x803e4e14: // orphan
         lwc1 f4, 0x10, v1
         mtc1 at, f6
         at = 0x40a0 << 16
         mtc1 at, f10
         mul.s f8, f4, f6
         div.s f16, f8, f10
         goto 0x803e4f14          // fcn.803e4e74+0xa0
         swc1 f16, 0x10, v1

    loc_0x803e4e38: // orphan
         
         swc1 f18, 0x48, v1

    loc_0x803e4e40: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v1
         at = 0 + 0x61
         div 0, v0, at
         t0 = hi
         at = , t0 < 0xb          // lo
         if                       // likely
         v1 = [sp + 0x28]

    loc_0x803e4e60: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v1
         at = 0 + 3
         div 0, v0, at
         t1 = hi

    loc_0x803e4ebc: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v1
         at = 0 + 3

    loc_0x803e4ec8: // orphan
         div 0, v0, at
         t4 = hi
         t5 = t4 + 8
         mtc1 t5, f6
         v1 = [sp + 0x28]
         t7 = 0x86a1 << 16
         cvt.s.w f8, f6
         at = 0x40c0 << 16
         swc1 f8, 0x10, v1
         t7 = [t7 - 0x720]        // t9
         if                       // fcn.803e4e74+0xa0 // likely
         

    loc_0x803e4ef8: // orphan
         lwc1 f10, 0x10, v1
         mtc1 at, f16
         at = 0x40a0 << 16

    loc_0x803e4f04: // orphan
         mtc1 at, f4
         mul.s f18, f10, f16
         div.s f6, f18, f4
         swc1 f6, 0x10, v1

    loc_0x803e5008: // orphan
         a0 = [sp + 0x1c]
         if                       // unlikely
         a1 = 0

    loc_0x803e5014: // orphan
         a3 = 0x86a1 << 16
         a3 = [a3 - 0x300]        // arg4 // t9
         a0 = [sp + 0x1c]
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(0x0, 0x0, -1, -1)

    loc_0x803e502c: // orphan
         [sp + 0x28] = v1
         a0 = [sp + 0x1c]
         call 0x8003f210          // 0x8003f210(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         goto 0x803e5068
         v1 = [sp + 0x28]

    loc_0x803e5044: // orphan
         a3 = 0x86a1 << 16
         a3 = [a3 - 0x2fc]        // arg4 // t9
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, -1, -1)
         [sp + 0x28] = v1
         a0 = [sp + 0x1c]
         call 0x8003f210          // 0x8003f210(0x0, 0x442f71dcfe116408, -1, -1)
         a1 = 0
         v1 = [sp + 0x28]

    loc_0x803e5068: // orphan
         // CODE XREF from fcn.803c507c @ 0x803e503c
         t0 = , unsigned  byte [v1 + 0x26] // s4
         t1 = t0 | 8              // s4
         byte [v1 + 0x26] = t1

    loc_0x803e5074: // orphan
         ra = [sp + 0x14]         // lo

    loc_0x803e5078: // orphan
         // CODE XREFS from fcn.80400480 @ 0x803e4c18, 0x803e4c3c, 0x803e4c54
         sp += 0x38

    loc_0x803e507c: // orphan
         ret                      // ra
         

    loc_0x803e51f0: // orphan
         if                       // fcn.803e53d4 // unlikely
         lwc1 f14, -0x9ec, at

    loc_0x803e51f8: // orphan
         at = 0x86a1 << 16
         lwc1 f2, -0xd4c, at
         v0 = 0x86a4 << 16
         v0 += 0x43f0
         sub.s f12, f2, f14
         lwc1 f0, 0xe88, v0
         v1 += 1
         at = , v1 < a0           // lo
         c.lt.s f12, f0
         
         bc1f 0x803e5248
         
         add.s f8, f2, f14
         c.lt.s f0, f8
         
         bc1f 0x803e5248
         
         lwc1 f16, 0xe84, v0
         goto fcn.803e53d4        // fcn.803e53d4(-1, 0x442f71dcfe116408, 0x8)
         lwc1 f18, 0xe8c, v0

    loc_0x803e52bc: // orphan
         
         lwc1 f6, 0xe84, v0
         lwc1 f8, 0xe8c, v0
         swc1 f6, 0x30, sp
         goto 0x803e52dc
         swc1 f8, 0x2c, sp

    loc_0x803e52dc: // orphan
         // CODE XREF from fcn.803c507c @ 0x803e52cc
         at = 0x86a1 << 16
         if                       // fcn.803e53d4 // unlikely
         lwc1 f14, -0x9e0, at

    loc_0x803e52e8: // orphan
         at = 0x86a1 << 16
         lwc1 f2, -0xd48, at
         t7 = a0 << 2             // arg1
         t7 += a0                 // arg1
         t7 <<= 2
         v0 = t6 + 0x43f0
         v1 = t7 + v0
         sub.s f12, f2, f14
         lwc1 f0, 0xe88, v0

    loc_0x803e530c: // orphan
         c.lt.s f12, f0
         
         bc1fl 0x803e533c
         v0 += 0x14
         add.s f10, f2, f14

    loc_0x803e5320: // orphan
         c.lt.s f0, f10
         
         bc1fl 0x803e533c
         v0 += 0x14
         lwc1 f16, 0xe84, v0
         lwc1 f18, 0xe8c, v0
         v0 += 0x14
         at = , unsigned  , v0 < v1 // lo
         bnel at, 0, 0x803e530c   // likely
         lwc1 f0, 0xe88, v0

    loc_0x803e5348: // orphan
         goto fcn.803e53d4        // fcn.803e53d4(-1, 0x442f71dcfe116408, 0x8)
         

    loc_0x803e5358: // orphan
         v1 = 0
         at = 0x86a1 << 16
         if                       // fcn.803e53d4 // unlikely
         

    loc_0x803e5368: // orphan
         lwc1 f2, -0xd4c, at
         at = 0x86a1 << 16

    loc_0x803e5370: // orphan
         lwc1 f4, -0x9dc, at
         at = 0x86a1 << 16
         v0 = 0x86a4 << 16
         v0 += 0x43f0
         lwc1 f14, -0x9d8, at
         sub.s f12, f2, f4

    loc_0x803e5388: // orphan
         lwc1 f0, 0xe88, v0
         v1 += 1
         at = , v1 < a0           // lo
         c.lt.s f12, f0
         
         bc1f 0x803e53cc

    loc_0x803e53a0: // orphan
         
         add.s f6, f2, f14
         c.lt.s f0, f6
         
         bc1f 0x803e53cc

    loc_0x803e53b4: // orphan
         
         lwc1 f8, 0xe84, v0

    loc_0x803e53bc: // orphan
         lwc1 f10, 0xe8c, v0
         swc1 f8, 0x30, sp

    loc_0x803e53c4: // orphan
         goto fcn.803e53d4        // fcn.803e53d4(-1, 0x442f71dcfe116408, 0x8)
         swc1 f10, 0x2c, sp

    loc_0x803e547c: // orphan
         if                       // likely
         

    loc_0x803e5484: // orphan
         break 6

    loc_0x803e5488: // orphan
         if                       // likely
         t2 = t1 & 1              // lo

    loc_0x803e5490: // orphan
         if                       // unlikely
         

    loc_0x803e5498: // orphan
         t2 -= 2

    loc_0x803e549c: // orphan
         if                       // unlikely
         

    loc_0x803e54a4: // orphan
         goto 0x803e57a4
         v0 = 0 + 1               // lo

    loc_0x803e54ac: // orphan
         goto 0x803e57a4
         v0 = 0

    loc_0x803e5608: // orphan
         goto 0x803e57a4
         v0 = 0

    loc_0x803e57a4: // orphan
         // XREFS: CODE 0x803e54a4  CODE 0x803e54ac  CODE 0x803e54cc  
         // XREFS: CODE 0x803e54d4  CODE 0x803e55a4  CODE 0x803e55ac  
         // XREFS: CODE 0x803e5608  CODE 0x803e5660  CODE 0x803e5668  
         // XREFS: CODE 0x803e56cc  CODE 0x803e5784  
         ra = [sp + 0x14]         // lo
         sp += 0x38
         ret                      // lo
         

    loc_0x803e5854: // orphan
         c.lt.s f0, f12
         at = 0x86a4 << 16

    loc_0x803e585c: // orphan
         bc1f 0x803e58ac
         
         sub.s f10, f20, f2

    loc_0x803e5868: // orphan
         c.lt.s f10, f0
         
         bc1f 0x803e58ac
         
         add.s f18, f14, f2
         c.lt.s f16, f18
         
         bc1f 0x803e58ac
         

    loc_0x803e588c: // orphan
         sub.s f4, f14, f2
         t6 = 0x86a1 << 16
         c.lt.s f4, f16
         
         bc1f 0x803e58ac
         
         t6 = [t6 - 0x1008]       // t9
         v1 |= t6                 // t9
         lwc1 f0, 0x4404, at
         at = 0x86a4 << 16
         lwc1 f16, 0x4408, at
         c.lt.s f0, f12
         at = 0x86a4 << 16
         bc1f 0x803e5910
         

    loc_0x803e58c8: // orphan
         sub.s f6, f20, f2
         c.lt.s f6, f0
         
         bc1f 0x803e5910
         
         add.s f8, f14, f2
         c.lt.s f16, f8
         
         bc1f 0x803e5910
         
         sub.s f10, f14, f2
         t7 = 0x86a1 << 16
         c.lt.s f10, f16
         
         bc1f 0x803e5910
         
         t7 = [t7 - 0x1004]       // t9
         v1 |= t7                 // t9
         lwc1 f0, 0x440c, at
         at = 0x86a4 << 16
         lwc1 f16, 0x4410, at
         c.lt.s f0, f12
         
         bc1fl 0x803e5978
         ldc1 f20, 8, sp
         sub.s f18, f20, f2
         c.lt.s f18, f0
         
         bc1fl 0x803e5978
         ldc1 f20, 8, sp

    loc_0x803e5940: // orphan
         add.s f4, f14, f2
         c.lt.s f16, f4
         
         bc1fl 0x803e5978
         ldc1 f20, 8, sp

    loc_0x803e5954: // orphan
         sub.s f6, f14, f2
         t8 = 0x86a1 << 16
         c.lt.s f6, f16
         
         bc1fl 0x803e5978
         ldc1 f20, 8, sp
         t8 = [t8 - 0x1000]       // t9
         v1 |= t8                 // t9
         ldc1 f20, 8, sp
         sp += 0x10
         ret                      // ra
         v0 = v1                  // t9

    loc_0x803e5a80: // orphan
         t3 = v1 << 3
         c.lt.s f12, f4
         a1 = t3 + t4             // arg2
         bc1f 0x803e5ad8
         
         sub.s f6, f0, f16
         c.lt.s f6, f12
         

    loc_0x803e5aa0: // orphan
         bc1f 0x803e5ad8
         
         add.s f8, f2, f18
         c.lt.s f14, f8
         
         bc1f 0x803e5ad8
         
         sub.s f10, f2, f18
         c.lt.s f10, f14
         
         bc1f 0x803e5ad8
         
         goto 0x803e5aec
         v0 = 0 + 1               // lo

    loc_0x803e5aec: // orphan
         // CODE XREF from fcn.80401e44 @ 0x803e5a64
         // CODE XREF from fcn.803c507c @ 0x803e5ad0
         ldc1 f20, 8, sp
         ret                      // ra
         sp += 0x10

    loc_0x803e64a8: // orphan
         mtc1 at, f8
         t8 = 0 + 2
         t9 = 0 + 1               // lo
         c.le.s f0, f8
         

    loc_0x803e64bc: // orphan
         bc1fl 0x803e64d0
         [s0 + 0x24] = t9
         goto 0x803e64d0          // fcn.803dcc5c+0x9874
         [s0 + 0x24] = t8

    loc_0x803e6540: // orphan
         s1 += 1
         t7 = [s0 + 0x188]        // t9

    loc_0x803e6548: // orphan
         at = , t7 < 0x15         // lo
         beql at, 0, 0x803e6560   // unlikely
         [s0 + 0x64] = 0

    loc_0x803e6554: // orphan
         swc1 f20, 0x44, v1
         swc1 f20, 0x48, v1
         [s0 + 0x64] = 0

    loc_0x803e6560: // orphan
         at = , s1 < 4
         s0 += 4
         v1 += 8
         swc1 f20, 0x6c, v1
         swc1 f20, 0x70, v1
         swc1 f20, 0x8c, v1
         if                       // fcn.803dcc5c+0x9898 // unlikely
         swc1 f20, 0x90, v1

    loc_0x803e6580: // orphan
         t8 = [sp + 0x5c]

    loc_0x803e6584: // orphan
         t1 = 0x86a1 << 16
         t1 -= 0x29c8
         t9 = t8 << 4
         s2 = t9 + t1
         [sp + 0x3c] = s2
         s1 = 0

    loc_0x803e65cc: // orphan
         
         t5 = a0 << 1             // arg1
         t6 = s3 + t5
         t7 = halfword [t6 + 0xe7c]
         bnel t7, 0, 0x803e65f0   // likely
         s0 += 4

    loc_0x803e65e4: // orphan
         call 0x86a06a1c          // 0x86a06a1c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 += 4

    loc_0x803e65f0: // orphan
         at = , s0 < 0x10
         if                       // fcn.803dcc5c+0x9944 // unlikely
         s2 += 4

    loc_0x803e65fc: // orphan
         s1 = 0
         s0 = 0
         s2 = [sp + 0x3c]

    loc_0x803e6608: // orphan
         a0 = [s2 + 0]            // t9
         t8 = a0 << 2             // arg1
         t9 = s3 + t8
         t1 = [t9 + 0x24]
         at = , unsigned  , t1 < 0xb
         if                       // likely
         t1 <<= 2

    loc_0x803e6624: // orphan
         at = 0x86a1 << 16
         at += t1
         t1 = [at - 0x930]        // t9
         goto t1                  // t9
         

    loc_0x803e6654: // orphan
         s0 += 4
         at = , s0 < 0x10
         if                       // unlikely
         s2 += 4

    loc_0x803e6664: // orphan
         s1 = 0
         s0 = 0
         s2 = [sp + 0x3c]

}
