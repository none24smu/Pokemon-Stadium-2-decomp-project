/*
 * Function: 0x8037f1dc
 * Category: math
 */

// Decompiled C code
int fcn.803742ac (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.803742ac (int esi, int edx) {
    loc_0x803742ac:
        // CALL XREF from fcn.83225ec4 @ +0xe54
        if            // fcn.80398300-0x1b9c0 // unlikely
        if            // unlikely
            
    loc_0x8037c964:
        if            // unlikely
        if            // unlikely
            
    loc_0x8037eb5c:
        0x8037eb5c
        sp -= 0x28
        [sp + 0x28] = a0
        a0 = 0x8641 << 16
        a0 = [a0 + 0x6c00] // arg1 // t9
        [sp + 0x2c] = a1
        [sp + 0x14] = ra
        a1 = 0x8640 << 16
        // CODE XREF from fcn.803b012c @ 0x803985a8
        [sp + 0x30] = a2
        [sp + 0x34] = a3
        a1 += 0x9d4   // arg2
        call 0x87f025b8 // 0x87f025b8(-1, 0x864009d4, 0x8, -1)
        a0 += 0xe00
         // do {
    loc_0x8037eb90:
        // CODE XREF from fcn.803747c4 @ 0x803985ac
        if            // unlikely
        v1 = v0       // s4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803742b8
    loc_0x803742d0:
        if            // unlikely
        if            // unlikely
            
    loc_0x8037d988:
        a0 = s0 + 4   // arg1
        a1 = s0 + 8   // arg2
        t1 = t0 << 3
        v0 = t1 + s3
        lwc1 f4
        swc1 f4, 4, s0
        lwc1 f6, 4, v0
        call 0x87d0059c // "&1" // 0x87d0059c(0x108, 0x10c, 0x8, -1)
        swc1 f6, 8, s0
        s1 += 1
        if            // likely
        s0 += 0xc
            
    loc_0x8037d984:
        t0 = , unsigned  byte [s0 + 0] // s4
    loc_0x803742dc: // orphan
             if                       // fcn.80398300-0x1a880 // unlikely
             if                       // unlikely

    loc_0x803742e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803742f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80374300: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037430c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80374318: // orphan
         if                       // unlikely
         // CALL XREF from fcn.83f16074 @ +0xd88
         if                       // unlikely

    loc_0x80374324: // orphan
         

    loc_0x80374328: // orphan
         
         if                       // fcn.803b00ac-0x31ccc // unlikely
         if                       // unlikely

    loc_0x80374338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80374344: // orphan
         if                       // unlikely
         // CALL XREF from fcn.8159c50c @ +0x40c
         

    loc_0x8037434c: // orphan
         
         
         // CODE XREF from fcn.80371f1c @ +0x40c
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037436c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037437c: // orphan
         if                       // unlikely
         

    loc_0x80374384: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80374390: // orphan
         
         // CODE XREF from fcn.80371f1c @ +0x44c
         if                       // unlikely
         if                       // unlikely

    loc_0x803743a0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803743b4: // orphan
         if                       // unlikely
         

    loc_0x803743bc: // orphan
         if                       // fcn.8037f6ec+0x34 // unlikely
         if                       // unlikely

    loc_0x803743c8: // orphan
         if                       // fcn.803986c0-0x18e54 // unlikely
         if                       // unlikely

    loc_0x803743d4: // orphan
         if                       // unlikely
         

    loc_0x803743dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803743e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803743f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80374400: // orphan
         
         
         
         
         
         if                       // fcn.80380038 // unlikely
         

    loc_0x8037441c: // orphan
         
         if                       // fcn.803986c0-0x185fc // unlikely
         // CODE XREF from fcn.80371f1c @ +0x4dc
         if                       // unlikely

    loc_0x8037442c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80374440: // orphan
         
         
         
         
         if                       // fcn.803b00ac-0x2fcb8 // unlikely
         if                       // unlikely

    loc_0x8037445c: // orphan
         
         
         
         if                       // fcn.803804d8+0xb4 // unlikely
         if                       // unlikely

    loc_0x80374474: // orphan
         
         
         if                       // fcn.803804d8+0x288 // unlikely
         if                       // fcn.803804d8+0x29c // unlikely

    loc_0x80374488: // orphan
         if                       // fcn.803804d8+0x2d4 // unlikely
         if                       // fcn.803804d8+0x2e8 // unlikely

    loc_0x80374494: // orphan
         if                       // fcn.803807c4+0x34 // unlikely
         if                       // unlikely

    loc_0x803744a0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803744b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803744c0: // orphan
         if                       // fcn.803804d8+0x62c // unlikely
         if                       // fcn.803804d8+0x640 // unlikely

    loc_0x803744cc: // orphan
         if                       // fcn.803804d8+0x688 // unlikely
         

    loc_0x803744d4: // orphan
         
         if                       // loc.80380c38+0x14 // unlikely
         if                       // unlikely

    loc_0x8037c978: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c988: // orphan
         if                       // unlikely
         

    loc_0x8037c990: // orphan
         
         
         

    loc_0x8037c99c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398388
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c9a8: // orphan
         if                       // unlikely
         

    loc_0x8037c9b0: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039838c
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037c9d8: // orphan
         
         
         
         if                       // fcn.8038041c+0xc // unlikely
         if                       // unlikely

    loc_0x8037c9f0: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037ca10: // orphan
         if                       // fcn.803804d8+0x53c // unlikely
         

    loc_0x8037ca18: // orphan
         
         
         
         
         if                       // fcn.803804d8+0x6c4 // unlikely
         if                       // fcn.803804d8+0x6d8 // unlikely

    loc_0x8037ca34: // orphan
         
         
         
         if                       // fcn.80398784-0x17930 // unlikely
         if                       // unlikely

    loc_0x8037ca4c: // orphan
         if                       // unlikely
         

    loc_0x8037ca54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037ca60: // orphan
         if                       // fcn.80380fa8+0x1c // unlikely
         if                       // unlikely

    loc_0x8037ca6c: // orphan
         
         
         
         if                       // fcn.80381138+0x14 // unlikely
         if                       // unlikely

    loc_0x8037ca84: // orphan
         if                       // unlikely
         

    loc_0x8037ca8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037ca98: // orphan
         
         
         
         
         
         
         if                       // fcn.803814c4+0x40 // unlikely
         if                       // unlikely

    loc_0x8037cabc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cac8: // orphan
         if                       // unlikely
         

    loc_0x8037cad0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cadc: // orphan
         
         
         
         
         
         
         
         if                       // fcn.80398784-0x16d08 // unlikely
         if                       // unlikely

    loc_0x8037cb04: // orphan
         
         
         if                       // unlikely
         

    loc_0x8037cb14: // orphan
         
         if                       // unlikely
         

    loc_0x8037cb20: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cb30: // orphan
         if                       // unlikely
         

    loc_0x8037cb38: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8037cb6c: // orphan
         
         
         
         if                       // unlikely
         if                       // fcn.80353f78+0x2f858 // unlikely

    loc_0x8037cb84: // orphan
         if                       // fcn.80354694+0x2f204 // unlikely
         if                       // unlikely

    loc_0x8037cb90: // orphan
         if                       // unlikely
         

    loc_0x8037cb98: // orphan
         
         if                       // fcn.80383994+0x2c // unlikely
         if                       // unlikely

    loc_0x8037cba8: // orphan
         if                       // unlikely
         

    loc_0x8037cbb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037cbbc: // orphan
         
         

    loc_0x8037cbc4: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398390
         if                       // fcn.80383b20+0xc8 // unlikely
         if                       // fcn.80383c7c // unlikely

    loc_0x8037d41c: // orphan
         

    loc_0x8037d420: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d434: // orphan
         if                       // unlikely
         

    loc_0x8037d43c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d44c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d458: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d464: // orphan
         
         
         
         
         
         if                       // fcn.803877bc+0x7630 // unlikely
         if                       // unlikely

    loc_0x8037d484: // orphan
         
         
         
         
         
         
         if                       // fcn.8038ee4c+0x104 // unlikely
         if                       // unlikely

    loc_0x8037d4a8: // orphan
         if                       // unlikely
         

    loc_0x8037d4b0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d4c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d4d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d4dc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d4f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d4fc: // orphan
         
         
         

    loc_0x8037d508: // orphan
         // CODE XREF from fcn.803b00ac @ 0x80398424
         
         if                       // fcn.8038f50c+0x1f4 // unlikely
         if                       // fcn.8038f50c+0x208 // unlikely

    loc_0x8037d518: // orphan
         if                       // fcn.803af434-0x1fc78 // unlikely
         if                       // unlikely

    loc_0x8037d524: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d538: // orphan
         
         
         
         
         if                       // fcn.80390c40+0x1c // unlikely
         if                       // unlikely

    loc_0x8037d554: // orphan
         if                       // fcn.80387818+0x98b0 // unlikely
         if                       // unlikely

    loc_0x8037d560: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d56c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d578: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d584: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d590: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d5a8: // orphan
         if                       // unlikely
         

    loc_0x8037d5b0: // orphan
         if                       // fcn.80387818+0xa77c // unlikely
         if                       // unlikely

    loc_0x8037d5bc: // orphan
         if                       // fcn.80392070+0x40 // unlikely
         if                       // unlikely

    loc_0x8037d5c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8037d5d4: // orphan
         if                       // unlikely
         if                       // fcn.803afb68-0x1d11c // unlikely

    loc_0x8037d9b8: // orphan
         // CODE XREF from fcn.8039843c @ +0x28
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]

    loc_0x8037d9cc: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398468
         ret                      // ra
         sp += 0x28

    loc_0x8037db44: // orphan
         
         mul.s f4, f12, f18

    loc_0x8037db4c: // orphan
         add.s f6, f10, f4
         c.le.s f16, f6
         
         bc1f 0x8037db70
         
         sub.s f8, f14, f0
         t6 = [sp + 0x14]
         goto 0x8037db84
         swc1 f8

    loc_0x8037db84: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037db68
         ret                      // ra
         v0 = v1

    loc_0x8037db90: // orphan
         v1 += 0x19dc
         a1 = [v1 + 0]            // t9
         sp -= 0x18
         // CODE XREF from fcn.8039843c @ +0x3c
         [sp + 0x14] = ra
         lwc1 f4, 0x48, a1        // arg2
         lwc1 f6, 0x10, a1        // arg2
         at = 0x8641 << 16
         add.s f8, f4, f6
         swc1 f8, 0x48, a1        // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f10, 0x4c, a1       // arg2
         lwc1 f16, 0x14, a1       // arg2
         // CODE XREF from fcn.80398300 @ 0x8039847c
         add.s f18, f10, f16
         swc1 f18, 0x4c, a1       // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f4, 0x50, a1        // arg2
         lwc1 f6, 0x18, a1        // arg2

    loc_0x8037dbd4: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398480
         add.s f8, f4, f6
         swc1 f8, 0x50, a1        // arg2
         a1 = [v1 + 0]            // t9
         t6 = [a1 + 0xc]          // arg2 // t9
         t7 = t6 << 3

    loc_0x8037dbe8: // orphan
         // CODE XREF from fcn.803b00ac @ 0x80398484
         if                       // likely
         

    loc_0x8037dbf0: // orphan
         at = 0x8641 << 16
         goto 0x8037dc00
         lwc1 f0, -0x6670, at

    loc_0x8037dbfc: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398488
         lwc1 f0, -0x666c, at

    loc_0x8037dc00: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037dbf4
         lwc1 f10, 0x54, a1       // arg2
         at = 0x8641 << 16
         lwc1 f2, -0x6668, at
         mul.s f16, f10, f0
         at = 0x8641 << 16
         swc1 f16, 0x54, a1       // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f18, 0x58, a1       // arg2

    loc_0x8037dc20: // orphan
         // CODE XREF from fcn.80398300 @ 0x8039848c
         mul.s f4, f18, f0
         swc1 f4, 0x58, a1        // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f6, 0x5c, a1        // arg2
         mul.s f8, f6, f0
         swc1 f8, 0x5c, a1        // arg2
         a1 = [v1 + 0]            // t9
         lwc1 f10, 0x10, a1       // arg2
         mul.s f16, f10, f2

    loc_0x8037dd3c: // orphan
         trunc.w.s f16, f10
         mfc1 a0, f16
         
         a1 = [v1 + 0]            // t9

    loc_0x8037dd4c: // orphan
         // CODE XREF from fcn.8037dc44 @ 0x8037dcf8
         t2 = [a1 + 0x1c]         // t9
         at = , t2 < a0
         if                       // unlikely
         a0 = 0x87f1 << 16

    loc_0x8037dd5c: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9

    loc_0x8037dd64: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8037dfe0: // orphan
         goto 0x8037dff8
         t6 = 0 - 1               // s2

    loc_0x8037dfe8: // orphan
         mfc1 t6, f6

    loc_0x8037dfec: // orphan
         
         if                       // likely
         

    loc_0x8037dff8: // orphan
         // CODE XREF from fcn.80398300 @ 0x8037dfd8
         // CODE XREF from fcn.803742ac @ 0x8037dfe0
         t8 = t6 & 0xff
         t7 = t5 | t8             // t9
         [a3 + 4] = t7            // arg4
         v1 = [a2 + 0]            // arg3 // t9
         ctc1 t4, 31
         t4 = 0xdb06 << 16
         t9 = v1 + 8
         [a2 + 0] = t9            // arg3
         t4 |= 0x3c
         [v1 + 0] = t4
         a1 = , unsigned  byte [sp + 0x28]
         call 0x8004c990          // 0x8004c990(-1, 0x0, 0x8, -1)
         [sp + 0x1c] = v1
         call 0x8004ca60          // 0x8004ca60(-1, 0x0, 0x8, -1)
         a0 = v0                  // s4
         t6 = [sp + 0x1c]         // t9
         a2 = 0x800d << 16
         a2 += 0x510
         [t6 + 4] = v0
         v1 = [a2 + 0]            // t9
         t7 = 0x8641 << 16
         t7 -= 0x6740
         t5 = v1 + 8
         [a2 + 0] = t5
         t8 = 0xde00 << 16
         [v1 + 0] = t8
         call 0x8003cd84          // 0x8003cd84(0xff, 0x0, 0x800d0510, -1)
         [v1 + 4] = t7
         ra = [sp + 0x14]
         sp += 0x38
         ret
         

    loc_0x8037e0d0: // orphan
         [sp + 0x1c] = ra
         a1 = 0x8640 << 16
         [sp + 0x18] = s0
         swc1 f12, 0x38, sp
         swc1 f14, 0x3c, sp
         [sp + 0x40] = a2
         [sp + 0x44] = a3
         a1 += 0x2cc              // arg2
         call 0x87f025b8          // 0x87f025b8(-1, 0x864002cc, 0x8, -1)
         a0 += 0x3334
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x8037e100: // orphan
         a0 = v0 + 0x24
         a1 = 0x8640 << 16
         a1 += 0x7b8
         [sp + 0x24] = a0
         call 0x80037e3c          // 0x80037e3c(0x123, 0x864007b8, 0x8, -1)
         a2 = v0                  // s4
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x864007b8, 0xff, -1)
         a0 = [sp + 0x24]
         t6 = 0x8641 << 16

    loc_0x8037e124: // orphan
         t6 = [t6 + 0x6c00]       // t9
         a0 = [sp + 0x24]
         a1 = 0

    loc_0x8037e130: // orphan
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, -1, -1)
         a3 = [t6 + 0x7b8]        // t9

    loc_0x8037e13c: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803984c8
         t7 = , unsigned  byte [s0 + 0x26] // s4
         t8 = t7 | 0x10           // s4
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s0 + 0x26] = t8
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = v0
         mtc1 v0, f4

    loc_0x8037e158: // orphan
         at = 0x4270 << 16
         mtc1 at, f8
         // CODE XREF from fcn.8039843c @ +0x90
         cvt.s.w f6, f4
         at = 0x40c0 << 16
         mtc1 at, f16
         mtc1 0, f4
         div.s f10, f6, f8
         mul.s f18, f10, f16
         c.le.s f4, f18
         
         bc1f 0x8037e1cc
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6

    loc_0x8037e194: // orphan
         at = 0x4270 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x40c0 << 16
         mtc1 at, f18
         // CODE XREF from fcn.803b00ac @ 0x803984d4
         at = 0x3f00 << 16
         mtc1 at, f6
         div.s f16, f8, f10
         mul.s f4, f16, f18
         add.s f8, f4, f6

    loc_0x8037e1bc: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803984d8
         trunc.w.s f10, f8

    loc_0x8037e280: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x38
         ret                      // ra
         

    loc_0x8037e3f4: // orphan
         sub.s f8, f4, f6

    loc_0x8037e3f8: // orphan
         // CODE XREF from fcn.80398500 @ 0x80398504
         trunc.w.s f10, f8
         mfc1 v1, f10
         
         v0 = [s0 + 0]            // t9

    loc_0x8037e408: // orphan
         // CODE XREF from fcn.803b00ac @ 0x8037e3bc
         t3 = [v0 + 0x1c]         // t9

    loc_0x8037e40c: // orphan
         // CODE XREF from fcn.803b00ac @ 0x80398508
         at = , t3 < v1           // lo
         bnel at, 0, 0x8037e68c   // likely
         ra = [sp + 0x1c]

    loc_0x8037e418: // orphan
         t4 = [v0 + 0xc]          // t9
         at = 0xefff << 16

    loc_0x8037e420: // orphan
         // CODE XREF from fcn.80398500 @ 0x8039850c
         at |= 0xffff
         t5 = t4 & at
         [v0 + 0xc] = t5
         v0 = [s0 + 0]            // t9
         at = 0x2000 << 16
         t6 = [v0 + 0xc]          // t9
         t7 = t6 | at             // t9
         [v0 + 0xc] = t7
         t8 = [s0 + 0]            // t9

    loc_0x8037e444: // orphan
         // CODE XREF from fcn.80398500 @ 0x80398510
         goto 0x8037e688
         [t8 + 0x1c] = 0

    loc_0x8037e688: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037e444
         ra = [sp + 0x1c]

    loc_0x8037e68c: // orphan
         // CODE XREF from fcn.803b00ac @ 0x8037e57c
         s0 = [sp + 0x18]
         sp += 0x28
         ret                      // ra
         

    loc_0x8037e740: // orphan
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x4270 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x40a0 << 16
         mtc1 at, f18
         at = 0x3f00 << 16
         mtc1 at, f6
         div.s f16, f8, f10
         mul.s f4, f16, f18
         add.s f8, f4, f6
         trunc.w.s f10, f8
         mfc1 v1, f10
         goto 0x8037e7cc
         t6 = [sp + 0x40]         // a2

    loc_0x8037e7cc: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037e780
         at = 0x4348 << 16
         mtc1 at, f0
         t7 = [t6 + 0x1c]         // t9
         mtc1 v1, f16
         t3 = 0 + 1               // lo
         mtc1 t7, f6
         cvt.s.w f18, f16
         at = 0x4f00 << 16
         cvt.s.w f8, f6
         mul.s f10, f0, f8
         div.s f4, f10, f18
         cfc1 t8, 31
         ctc1 t3, 31
         
         cvt.w.s f6, f4
         cfc1 t3, 31
         
         t3 &= 0x78
         beql t3, 0, 0x8037e874   // likely
         mfc1 t3, f6

    loc_0x8037e81c: // orphan
         mtc1 at, f6
         t3 = 0 + 1               // lo
         sub.s f6, f4, f6
         ctc1 t3, 31
         
         cvt.w.s f6, f6

    loc_0x8037e864: // orphan
         ctc1 t8, 31
         goto 0x8037ea1c
         t3 &= 0xff

    loc_0x8037e874: // orphan
         
         bltzl t3, 0x8037e864     // unlikely
         t3 = 0 - 1               // s2

    loc_0x8037e880: // orphan
         ctc1 t8, 31
         goto 0x8037ea1c
         t3 &= 0xff

    loc_0x8037ea1c: // orphan
         // CODE XREF from fcn.8037e834 @ 0x8037e858
         // CODE XREFS from fcn.803742ac @ 0x8037e868, 0x8037e884
         // CODE XREFS from fcn.803b00ac @ 0x8037e9f8, 0x8037ea14
         a2 = 0x800d << 16

    loc_0x8037ea20: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039857c
         a2 += 0x510              // arg3

    loc_0x8037ea24: // orphan
         v1 = [a2 + 0]            // arg3
         t6 = 0xe700 << 16

    loc_0x8037ea2c: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398568
         t8 = 0xfc30 << 16
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         [v1 + 0] = t6
         [v1 + 4] = 0

    loc_0x8037ea40: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039856c
         v1 = [a2 + 0]            // arg3
         t9 = 0x5ffe << 16
         t9 |= 0xfe38
         t7 = v1 + 8
         [a2 + 0] = t7            // arg3

    loc_0x8037ea54: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398570
         t8 |= 0xd3ff             // t9
         [v1 + 0] = t8
         [v1 + 4] = t9
         v1 = [a2 + 0]            // arg3
         t6 = 0xfa00 << 16
         t1 = t3 & 0xff
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         [v1 + 0] = t6

    loc_0x8037ea78: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398574
         t7 = [sp + 0x34]
         a0 = 0 + 0x96            // arg1
         t9 = , unsigned  byte [t7 + 0] // s4
         t8 = , unsigned  byte [t7 + 1] // s4
         t5 = t9 << 0x18
         t9 = t8 << 0x10
         t6 = t5 | t9
         t5 = , unsigned  byte [t7 + 2] // s4
         t9 = t5 << 8
         t7 = t6 | t9
         t8 = t7 | t1

    loc_0x8037eaa4: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398580
         [v1 + 4] = t8
         v1 = [a2 + 0]            // arg3
         t6 = 0xfb00 << 16
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3

    loc_0x8037eab8: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398584
         [v1 + 0] = t6
         t9 = [sp + 0x30]
         t8 = , unsigned  byte [t9 + 0] // s4
         t7 = , unsigned  byte [t9 + 1] // s4
         t5 = t8 << 0x18

    loc_0x8037eacc: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398588
         t8 = t7 << 0x10
         t6 = t5 | t8             // t9
         t5 = , unsigned  byte [t9 + 2]

    loc_0x8037ead8: // orphan
         t8 = t5 << 8
         t9 = t6 | t8

    loc_0x8037eae0: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039858c
         t7 = t9 | t1
         [v1 + 4] = t7
         v1 = [a2 + 0]            // arg3
         t6 = 0xdb06 << 16
         t6 |= 0x3c
         t5 = v1 + 8
         [a2 + 0] = t5            // arg3
         [v1 + 0] = t6
         a1 = , unsigned  byte [sp + 0x3b]
         // CODE XREF from fcn.803747c4 @ 0x80398590
         call 0x8004c990          // 0x8004c990(-1, 0x0, 0x8, -1)

    loc_0x8037eb08: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803985a4
         [sp + 0x18] = v1
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         t8 = [sp + 0x18]         // v1

    loc_0x8037eb18: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398594
         a2 = 0x800d << 16
         a2 += 0x510
         [t8 + 4] = v0
         v1 = [a2 + 0]
         t7 = 0xde00 << 16

    loc_0x8037eb2c: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398598
         t5 = 0x8641 << 16
         t9 = v1 + 8
         [a2 + 0] = t9
         [v1 + 0] = t7
         t5 = [t5 + 0x6c00]       // t9
         t6 = t5 + 0x7fff
         t6 = [t6 + 0x3551]       // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t6
         // CODE XREF from fcn.803b012c @ 0x8039859c
         ra = [sp + 0x14]
         sp += 0x48
         ret
         

    loc_0x8037eb98: // orphan
         v0 = [v0 + 0x20]         // t9
         [v1 + 0x38] = v1
         a0 = v1 + 0x24
         // CODE XREF from fcn.803747c4 @ 0x803985b0
         [sp + 0x18] = a0
         [sp + 0x24] = v1
         call 0x8003f1dc          // 0x8003f1dc(0x244, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v0
         t6 = 0x8641 << 16
         // CODE XREF from fcn.803b012c @ 0x803985b4
         t6 = [t6 + 0x6c00]       // t9
         a0 = [sp + 0x18]
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x244, 0x0, -1, -1)
         a3 = [t6 + 0x7b4]        // t9
         v1 = [sp + 0x24]
         at = 0x4020 << 16
         mtc1 at, f0

    loc_0x8037ebdc: // orphan
         // CODE XREF from fcn.803b012c @ 0x803985b8
         t7 = [v1 + 0xc]          // t9
         // CODE XREF from fcn.803b012c @ 0x803985cc
         v0 = [sp + 0x20]         // t9
         a0 = [sp + 0x28]
         at = 0x1000 << 16
         t8 = t7 | at             // t9
         // CODE XREF from fcn.80398500 @ +0xbc
         [v1 + 0xc] = t8
         [v1 + 0x1c] = 0
         lwc1 f4, 0x2c, sp
         mtc1 0, f2
         t9 = 0 - 0x4000
         // CODE XREF from fcn.803b012c @ 0x803985c0
         swc1 f4, 0x48, v1
         lwc1 f6, 0x30, sp
         swc1 f6, 0x4c, v1
         lwc1 f8, 0x34, sp
         halfword [v1 + 0x42] = t9
         swc1 f0, 0x54, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x5c, v1

    loc_0x8037ec24: // orphan
         swc1 f2, 0x10, v1

    loc_0x8037ec28: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803985c4
         swc1 f2, 0x14, v1
         swc1 f2, 0x18, v1
         swc1 f8, 0x50, v1
         [v0 + 0] = 0
         t0 = [a0 + 0]
         byte [v0 + 4] = t0
         t1 = [a0 + 0xc]          // t9
         byte [v0 + 5] = t1
         t2 = [a0 + 4]            // s4
         byte [v0 + 6] = t2

    loc_0x8037ec50: // orphan
         ra = [sp + 0x14]

    loc_0x8037ec54: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803985d0
         sp += 0x28
         ret                      // ra
         

    loc_0x8037ed4c: // orphan
         // CODE XREF from fcn.803b00ac @ 0x8037ecfc
         t8 = 0x8641 << 16
         t8 = [t8 + 0x6c00]       // t9
         v0 = [sp + 0x1c]         // ra
         mtc1 v1, f4
         lwc1 f8
         lwc1 f6, 0x18, v0
         at = 0x3f80 << 16
         mtc1 at, f16
         div.s f10, f6, f8
         t1 = [a0 + 0xc]          // arg1 // t9
         at = 0x1000 << 16
         cvt.s.w f6, f4
         t2 = t1 | at             // t9
         [a0 + 0xc] = t2          // arg1
         t4 = t2 << 0xd
         sub.s f18, f16, f10
         mul.s f8, f6, f18
         trunc.w.s f16, f8
         mfc1 t0, f16
         if                       // unlikely
         [a0 + 0x1c] = t0         // arg1

    loc_0x8037eda0: // orphan
         // CODE XREF from fcn.803985fc @ +0x10
         if                       // likely
         at = 0x8641 << 16

    loc_0x8037eda8: // orphan
         lwc1 f0, -0x665c, at
         lwc1 f10, 0x10, a0       // arg1
         lwc1 f6, 0x18, a0        // arg1

    loc_0x8037edb4: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803985f0
         mul.s f4, f10, f0
         
         mul.s f18, f6, f0
         swc1 f4, 0x10, a0        // arg1
         goto 0x8037ee00
         // CODE XREF from fcn.803747c4 @ 0x80398664
         swc1 f18, 0x18, a0       // arg1

    loc_0x8037edcc: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803985f8
         t5 = , unsigned  halfword [a1 + 8]
         at = 0x4f80 << 16
         mtc1 t5, f8
         if                       // likely
         cvt.s.w f16, f8

    loc_0x8037ede0: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803985fc
         mtc1 at, f10
         

    loc_0x8037ede8: // orphan
         // CODE XREF from fcn.803b00ac @ 0x803985f4
         add.s f16, f16, f10

    loc_0x8037edec: // orphan
         swc1 f16, 0x48, v0
         lwc1 f4                  // arg2
         swc1 f4, 0x10, a0        // arg1
         lwc1 f6, 4, a1           // arg2
         swc1 f6, 0x18, a0        // arg1

    loc_0x8037ee00: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037edc4
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8037eea8: // orphan
         s0 = 0x8641 << 16
         s6 = [s1 + 0x20]         // t9
         s0 -= 0x6978
         s2 = 0

    loc_0x8037eeb8: // orphan
         lwc1 f4, 0x48, s1
         mfc1 a1, f20
         t8 = s0 + 0xc
         swc1 f4, 0x94, sp
         lwc1 f6, 0x50, s1
         a0 = s3                  // t9
         a3 = s0 + 4              // arg4
         // CODE XREF from fcn.803747c4 @ 0x80398610
         swc1 f6, 0x98, sp
         t6 = , unsigned  byte [s0 + 0] // s4
         [sp + 0x14] = s5
         [sp + 0x10] = t8
         t7 = t6 << 3

    loc_0x8037eee8: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398614
         call 0x86400114          // 0x86400114(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = t7 + s4
         if                       // unlikely
         lwc1 f10, 0x8c, sp

    loc_0x8037eef8: // orphan
         lwc1 f8, 0xc, s0
         // CODE XREF from fcn.803985fc @ +0x1c
         lwc1 f18, 0x48, s1
         a0 = s1
         mul.s f16, f8, f10
         a1 = s6
         add.s f4, f18, f16
         lwc1 f18, 0x50, s1
         swc1 f4, 0x48, s1
         lwc1 f6, 0x10, s0
         lwc1 f8, 0x8c, sp
         mul.s f10, f6, f8
         lwc1 f6, 0x10, s1

    loc_0x8037ef28: // orphan
         add.s f16, f18, f10
         lwc1 f10, 0x18, s1
         // CODE XREF from fcn.803747c4 @ 0x8039861c
         swc1 f16, 0x50, s1
         lwc1 f4, 0xc, s0
         lwc1 f18, 0x10, s0
         mul.s f8, f4, f6
         

    loc_0x8037ef44: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398620
         mul.s f16, f18, f10
         add.s f4, f8, f16
         c.lt.s f4, f22
         
         bc1f 0x8037ef70
         
         call 0x864013a8          // 0x864013a8(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = [s0 + 0x14]         // t9
         t9 = [s1 + 0xc]
         t0 = t9 | fp
         [s1 + 0xc] = t0

    loc_0x8037ef70: // orphan
         s2 += 1
         at = , s2 < 4            // lo
         if                       // likely
         s0 += 0x18

    loc_0x8037ef80: // orphan
         s0 = 0x8641 << 16
         s0 -= 0x6918
         s2 = 0

    loc_0x8037ef8c: // orphan
         lwc1 f6, 0x48, s1
         mfc1 a1, f20
         t3 = sp + 0x78
         swc1 f6, 0x94, sp
         lwc1 f18, 0x50, s1
         a0 = s3                  // t9
         a3 = s0 + 4
         swc1 f18, 0x98, sp
         t1 = , unsigned  byte [s0 + 0] // s4
         [sp + 0x14] = s5
         [sp + 0x10] = t3
         t2 = t1 << 3
         call 0x864001e0          // 0x864001e0(-1, 0x442f71dcfe116408, 0x8, 0x108)
         a2 = t2 + s4
         if                       // unlikely
         s2 += 1

    loc_0x8037efcc: // orphan
         lwc1 f10, 0x78, sp
         lwc1 f8, 0x8c, sp
         lwc1 f4, 0x48, s1
         mul.s f16, f10, f8
         add.s f6, f4, f16
         lwc1 f4, 0x50, s1
         swc1 f6, 0x48, s1
         // CODE XREF from fcn.803985fc @ +0x28
         lwc1 f10, 0x8c, sp
         lwc1 f18, 0x7c, sp
         mul.s f8, f18, f10
         add.s f16, f4, f8
         swc1 f16, 0x50, s1

    loc_0x8037effc: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398628
         if                       // likely
         s0 += 0xc

    loc_0x8037f004: // orphan
         lwc1 f6, 0x48, s1
         c.lt.s f6, f24
         

    loc_0x8037f010: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039862c
         bc1fl 0x8037f044
         lwc1 f10, 0x48, s1
         lwc1 f18, 0x10, s1
         swc1 f24, 0x48, s1
         a0 = s1
         c.lt.s f18, f22
         a1 = s6
         a2 = 0x8641 << 16
         bc1fl 0x8037f044
         // CODE XREF from fcn.803985fc @ +0x34
         lwc1 f10, 0x48, s1
         call 0x864013a8          // 0x864013a8(0x442f71dcfe117dbd, 0x442f71dcfe111002, 0x86410000, -1)
         a2 -= 0x69fc
         lwc1 f10, 0x48, s1
         c.lt.s f26, f10
         // CODE XREF from fcn.803747c4 @ 0x80398634
         
         bc1fl 0x8037f088
         lwc1 f16, 0x50, s1
         lwc1 f4, 0x10, s1
         swc1 f26, 0x48, s1

    loc_0x8037f05c: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398638
         a0 = s1
         mul.s f8, f4, f28
         a1 = s6
         a2 = 0x8641 << 16
         c.lt.s f8, f22
         // CODE XREF from fcn.803985fc @ +0x40
         
         bc1fl 0x8037f088
         lwc1 f16, 0x50, s1
         call 0x864013a8          // 0x864013a8(0x442f71dcfe117dbd, 0x442f71dcfe111002, 0x86410000, -1)
         a2 -= 0x69e4
         lwc1 f16, 0x50, s1
         c.lt.s f16, f30
         
         bc1f 0x8037f0c0
         // CODE XREF from fcn.803747c4 @ 0x80398640
         
         lwc1 f6, 0x18, s1
         swc1 f30, 0x50, s1
         a0 = s1
         c.lt.s f6, f22

    loc_0x8037f0a8: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398644
         a1 = s6
         a2 = 0x8641 << 16
         bc1f 0x8037f0c0
         
         call 0x864013a8          // 0x864013a8(-1, 0x442f71dcfe111002, 0x86410000, -1)
         // CODE XREF from fcn.803985fc @ +0x4c
         a2 -= 0x6a08
         at = 0x8641 << 16
         lwc1 f18, -0x6648, at
         lwc1 f10, 0x50, s1
         c.lt.s f18, f10
         // CODE XREF from fcn.803747c4 @ 0x8039864c
         
         bc1fl 0x8037f118
         t4 = [sp + 0x88]
         lwc1 f8, 0x18, s1
         at = 0x8641 << 16
         lwc1 f4, -0x6644, at

    loc_0x8037f0e8: // orphan
         mul.s f16, f28, f8
         a0 = s1
         a1 = s6

    loc_0x8037f0f4: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398650
         a2 = 0x8641 << 16
         swc1 f4, 0x50, s1
         c.lt.s f16, f22
         
         bc1fl 0x8037f118
         // CODE XREF from fcn.803985fc @ +0x58
         t4 = [sp + 0x88]
         call 0x864013a8          // 0x864013a8(-1, 0x442f71dcfe116408, 0x86410000, -1)
         a2 -= 0x69f0
         t4 = [sp + 0x88]
         s1 += 0x18c
         // CODE XREF from fcn.803747c4 @ 0x80398658
         t5 = t4 + 1              // lo
         if                       // likely
         [sp + 0x88] = t5

    loc_0x8037f128: // orphan
         ra = [sp + 0x74]
         ldc1 f20, 0x20, sp

    loc_0x8037f130: // orphan
         // CODE XREF from fcn.803747c4 @ 0x8039865c
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         ldc1 f28, 0x40, sp
         ldc1 f30, 0x48, sp
         s0 = [sp + 0x50]
         s1 = [sp + 0x54]
         s2 = [sp + 0x58]
         s3 = [sp + 0x5c]
         // CODE XREF from fcn.803985fc @ +0x64
         s4 = [sp + 0x60]
         s5 = [sp + 0x64]
         s6 = [sp + 0x68]
         s7 = [sp + 0x6c]
         fp = [sp + 0x70]
         ret                      // ra
         sp += 0xa8

    loc_0x8037f190: // orphan
         // CODE XREF from fcn.803985fc @ +0x70
         ra = [sp + 0x14]         // t9
         [a1 + 0x38] = t8         // arg2
         t0 = [sp + 0x1c]         // ra
         mtc1 0, f4
         at = 0x8641 << 16

    loc_0x8037f1a4: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398670
         swc1 f4, 0x1c, t0
         t1 = [a0 + 0xc]          // arg1 // t9

    loc_0x8037f1ac: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398668
         t2 = t1 | v0
         [a0 + 0xc] = t2          // arg1
         lwc1 f6, -0x6640, at
         swc1 f6, 0x14, a0        // arg1
         t3 = [sp + 0x1c]         // ra
         a0 = 0 + 0x5f03          // arg1
         a1 = , unsigned  byte [t3 + 3]
         call 0x8002781c          // 0x8002781c(0x5f03, 0xae, 0x8, -1)
         a2 = t3 + 0x58
         ra = [sp + 0x14]         // t9
         sp += 0x18
         ret                      // t9
         

    loc_0x8037f28c: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398678
         div.s f16, f18, f0
         swc1 f6, 0x3c, sp
         div.s f4, f8, f0
         swc1 f16, 0x40, sp
         goto 0x8037f38c
         // CODE XREF from fcn.803747c4 @ 0x8039867c
         swc1 f4, 0x44, sp

    loc_0x8037f38c: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037f29c
         lwc1 f6, 0x3c, sp
         // CODE XREF from fcn.803b00ac @ 0x8039868c
         at = 0x3f00 << 16
         mtc1 at, f0
         neg.s f4, f6
         lwc1 f8, 0x2c, a3        // arg4
         mul.s f10, f4, f2
         lwc1 f6, 0x30, a3        // arg4
         t6 = 0x8641 << 16
         at = 0x8641 << 16
         mul.s f18, f10, f0
         add.s f16, f8, f18
         swc1 f16, 0x2c, a3       // arg4
         lwc1 f4, 0x40, sp
         neg.s f10, f4
         lwc1 f4, 0x34, a3        // arg4
         mul.s f8, f10, f2
         
         mul.s f18, f8, f0
         add.s f16, f6, f18
         swc1 f16, 0x30, a3       // arg4
         lwc1 f10, 0x44, sp
         neg.s f8, f10
         mul.s f6, f8, f2

    loc_0x8037f3e8: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803986b4
         
         mul.s f18, f6, f0
         add.s f16, f4, f18

    loc_0x8037f3f4: // orphan
         swc1 f16, 0x34, a3       // arg4
         lwc1 f8, 0x3c, sp
         lwc1 f10, 0x2c, s0
         lwc1 f16, 0x30, s0
         mul.s f6, f8, f2
         
         mul.s f4, f6, f0

    loc_0x8037f410: // orphan
         // CODE XREFS from fcn.803747c4 @ 0x8039869c, 0x803986ac
         add.s f18, f10, f4
         swc1 f18, 0x2c, s0

    loc_0x8037f418: // orphan
         // CODE XREF from fcn.803747c4 @ 0x80398694
         lwc1 f8, 0x40, sp

    loc_0x8037f41c: // orphan
         mul.s f6, f8, f2
         
         mul.s f10, f6, f0
         add.s f4, f16, f10
         swc1 f4, 0x30, s0
         lwc1 f8, 0x38, sp
         lwc1 f18, 0x44, sp
         lwc1 f4, 0x34, s0
         sub.s f6, f12, f8
         mul.s f16, f18, f6
         
         mul.s f10, f16, f0
         add.s f8, f4, f10
         swc1 f8, 0x34, s0
         t6 = [t6 + 0x6c00]       // t9
         lwc1 f6, -0x6634, at
         lwc1 f4, 0x1c, a3        // arg4
         lwc1 f18
         lwc1 f8, 0x3c, sp
         mul.s f16, f18, f6
         
         mul.s f2, f16, f0
         c.lt.s f2, f4
         
         bc1f 0x8037f500
         
         lwc1 f10, 0x10, s2
         lwc1 f6, 0x18, s2
         lwc1 f16, 0x40, sp
         mul.s f18, f10, f8
         mtc1 0, f8
         mul.s f4, f6, f16
         add.s f10, f18, f4
         c.le.s f8, f10
         
         bc1fl 0x8037f504
         lwc1 f8, 0x1c, s0
         lwc1 f6, 0x1c, s0
         a0 = s1
         a1 = s0
         c.lt.s f6, f2
         
         bc1fl 0x8037f504
         lwc1 f8, 0x1c, s0
         call 0x864018b0          // 0x864018b0(0x442f71dcfe117dbd, 0x104, 0x8, -1)
         [sp + 0x30] = a3
         t7 = 0x8641 << 16
         t7 = [t7 + 0x6c00]       // t9
         at = 0x8641 << 16
         lwc1 f18, -0x6630, at
         lwc1 f16
         at = 0x3f00 << 16
         mtc1 at, f10
         mul.s f4, f16, f18
         a3 = [sp + 0x30]         // t9
         mul.s f2, f4, f10
         
         lwc1 f8, 0x1c, s0
         lwc1 f16, 0x3c, sp
         c.lt.s f2, f8
         lwc1 f8, 0x40, sp
         bc1fl 0x8037f56c
         t8 = [s2 + 0xc]
         lwc1 f6, 0x10, s1
         neg.s f18, f16
         lwc1 f10, 0x18, s1
         mul.s f4, f6, f18
         neg.s f16, f8
         mtc1 0, f8
         mul.s f6, f10, f16
         add.s f18, f4, f6
         c.le.s f8, f18
         
         bc1fl 0x8037f56c
         t8 = [s2 + 0xc]
         lwc1 f10, 0x1c, a3
         a0 = s2
         c.lt.s f10, f2
         
         bc1fl 0x8037f56c
         t8 = [s2 + 0xc]
         call 0x864018b0          // 0x864018b0(-1, 0x104, 0x8, -1)
         a1 = a3                  // t9
         t8 = [s2 + 0xc]
         v0 = 0x8000 << 16
         t9 = t8 << 0
         bgezl t9, 0x8037f59c     // likely
         t2 = [s1 + 0xc]          // t9

    loc_0x8037f57c: // orphan
         t0 = [s1 + 0xc]          // t9
         at = 0x8641 << 16
         t1 = t0 & v0             // s4
         bnel t1, 0, 0x8037f59c   // likely
         t2 = [s1 + 0xc]          // t9

    loc_0x8037f590: // orphan
         lwc1 f16, -0x662c, at
         swc1 f16, 0x14, s2
         t2 = [s1 + 0xc]          // t9

    loc_0x8037f59c: // orphan
         t3 = t2 & v0             // s4
         beql t3, 0, 0x8037f5c8   // unlikely
         ra = [sp + 0x24]         // v1

    loc_0x8037f5a8: // orphan
         t4 = [s2 + 0xc]
         at = 0x8641 << 16

    loc_0x8037f5b0: // orphan
         t5 = t4 & v0             // s4
         bnel t5, 0, 0x8037f5c8   // likely
         ra = [sp + 0x24]         // v1

    loc_0x8037f5bc: // orphan
         lwc1 f4, -0x6628, at
         swc1 f4, 0x14, s1
         ra = [sp + 0x24]         // v1

    loc_0x8037f5c8: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // ra
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x48

    loc_0x8037f618: // orphan
         s4 = v0 + 1
         s5 = s2 + 0x18c
         at = , s4 < 4
         s0 = s5
         if                       // likely
         s1 = s4

    loc_0x8037f630: // orphan
         a0 = s2
         call 0x86401920          // "&1" // 0x86401920(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0

    loc_0x8037f638: // orphan
         a1 = s0
         s1 += 1
         if                       // likely
         s0 += 0x18c

    loc_0x8037f648: // orphan
         v0 = s4
         if                       // likely
         s2 = s5                  // t9

    loc_0x8037f654: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // ra
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // v1
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // s4
         s6 = [sp + 0x30]         // t9
         ret
         sp += 0x38

    loc_0x8037f794: // orphan
         lwc1 f2, 0x38, sp
         if                       // likely
         cvt.s.w f4, f18

    loc_0x8037f7a0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f4, f4, f6

    loc_0x8037f7b0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         at = 0x3f00 << 16

    loc_0x8037f7bc: // orphan
         mtc1 at, f10
         div.s f16, f4, f8
         lwc1 f6, 0x10, a0        // arg1
         at = 0x40a0 << 16
         lwc1 f12, 0x48, a0       // arg1
         neg.s f4, f6
         lwc1 f14, 0x4c, a0       // arg1
         a2 = [a0 + 0x50]         // arg1 // t9
         add.s f18, f16, f10
         mtc1 at, f16
         mul.s f0, f0, f18
         swc1 f16, 0x14, sp
         mul.s f8, f4, f2
         mfc1 a3, f0

    loc_0x8037f880: // orphan
         
         v1 |= 0x800
         v1 &= 0xffff
         lwc1 f10, -0x6618, at
         at = 0xc314 << 16
         mtc1 at, f12
         c.le.s f10, f2
         at = 0x8641 << 16
         bc1fl 0x8037f8b4

    loc_0x8037f8a4: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986c0
         c.le.s f0, f12
         v1 |= 0x400
         v1 &= 0xffff
         c.le.s f0, f12
         
         bc1fl 0x8037f914
         at = 0xc2b9 << 16
         lwc1 f4, -0x6614, at
         at = 0xc2b9 << 16
         c.le.s f4, f0
         
         bc1fl 0x8037f914
         at = 0xc2b9 << 16

    loc_0x8037f8d8: // orphan
         mtc1 at, f14
         at = 0x42b9 << 16
         c.lt.s f14, f2
         
         bc1fl 0x8037f914
         at = 0xc2b9 << 16
         mtc1 at, f16
         
         c.lt.s f2, f16
         
         bc1fl 0x8037f914
         at = 0xc2b9 << 16
         v1 |= 0x100
         v1 &= 0xffff
         at = 0xc2b9 << 16
         mtc1 at, f14
         at = 0x42b9 << 16
         mtc1 at, f16
         at = 0x4314 << 16
         mtc1 at, f18
         // CODE XREF from fcn.803747c4 @ 0x803986d4
         at = 0x8641 << 16
         c.le.s f18, f0
         
         bc1fl 0x8037f97c
         c.le.s f2, f14

    loc_0x8037f93c: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986d8
         lwc1 f6, -0x6610, at

    loc_0x8037f940: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986cc
         c.le.s f0, f6
         
         bc1fl 0x8037f97c
         c.le.s f2, f14
         c.lt.s f14, f2
         
         bc1fl 0x8037f97c
         c.le.s f2, f14
         c.lt.s f2, f16
         
         bc1fl 0x8037f97c
         c.le.s f2, f14
         v1 |= 0x200

    loc_0x8037f974: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986d0
         v1 &= 0xffff
         c.le.s f2, f14
         at = 0x8641 << 16
         bc1fl 0x8037f9c8
         c.le.s f16, f2
         lwc1 f8, -0x660c, at
         c.le.s f8, f2
         
         bc1fl 0x8037f9c8
         c.le.s f16, f2
         c.lt.s f12, f0
         
         bc1fl 0x8037f9c8
         c.le.s f16, f2
         c.lt.s f0, f18
         
         bc1fl 0x8037f9c8
         c.le.s f16, f2
         v1 |= 0x400
         v1 &= 0xffff
         c.le.s f16, f2
         at = 0x8641 << 16
         bc1f 0x8037fa10
         
         lwc1 f10, -0x6608, at
         c.le.s f2, f10
         
         bc1f 0x8037fa10
         // CODE XREF from fcn.803986c0 @ 0x803986e0
         
         c.lt.s f12, f0
         
         bc1f 0x8037fa10
         

    loc_0x8037f9f8: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986e4
         c.lt.s f0, f18
         
         bc1f 0x8037fa10
         

    loc_0x8037fa08: // orphan
         v1 |= 0x800
         v1 &= 0xffff
         ret                      // ra
         v0 = v1

    loc_0x8037fa44: // orphan
         [sp + 0x1c] = v1
         [sp + 0x28] = a0
         halfword [sp + 0x2e] = a1
         call 0x86401f60          // 0x86401f60(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a2
         a2 = [sp + 0x24]
         a1 = , unsigned  halfword [sp + 0x2e]
         not t8, v0
         t9 = [a2 + 4]
         a1 &= t8
         a1 &= 0xffff
         at = , unsigned  , t9 < 8
         v1 = [sp + 0x1c]
         if                       // likely
         a0 = [sp + 0x28]         // t9

    loc_0x8037fa80: // orphan
         t9 <<= 2
         at = 0x8641 << 16
         at += t9
         t9 = [at - 0x6604]
         goto t9
         

    loc_0x8037faf4: // orphan
         // CODE XREF from fcn.803986c0 @ 0x8037fab4
         t0 = a1 & 0x800          // arg2
         if                       // likely
         v0 = a1                  // t0

    loc_0x8037fb00: // orphan
         v1 = 0x8641 << 16
         goto 0x8037fb48
         v1 -= 0x69e4

    loc_0x8037fb0c: // orphan
         t1 = v0 & 0x400
         if                       // likely
         t2 = v0 & 0x200

    loc_0x8037fb18: // orphan
         v1 = 0x8641 << 16
         goto 0x8037fb48
         v1 -= 0x69fc

    loc_0x8037fb20: // orphan
         v1 = 0x8641 << 16
         goto 0x8037fb48
         v1 -= 0x69fc

    loc_0x8037fb24: // orphan
         if                       // unlikely
         t3 = v0 & 0x100

    loc_0x8037fb2c: // orphan
         v1 = 0x8641 << 16
         goto 0x8037fb48
         v1 -= 0x6a08

    loc_0x8037fb38: // orphan
         if                       // unlikely
         

    loc_0x8037fb40: // orphan
         v1 = 0x8641 << 16
         v1 -= 0x69f0

    loc_0x8037fb48: // orphan
         // CODE XREFS from fcn.803742ac @ 0x8037fb04, 0x8037fb1c, 0x8037fb30
         beql v1, 0, 0x8037fbb8   // unlikely
         ra = [sp + 0x14]         // t9

    loc_0x8037fb50: // orphan
         lwc1 f4, 0x10, a0        // arg1
         lwc1 f6
         lwc1 f10, 0x18, a0       // arg1
         lwc1 f16, 4, v1
         mul.s f8, f4, f6
         mtc1 0, f6
         // CODE XREF from fcn.803986c0 @ +0x34
         mul.s f18, f10, f16
         add.s f4, f8, f18
         c.le.s f6, f4
         
         bc1fl 0x8037fbb8
         ra = [sp + 0x14]         // t9
         t4 = , unsigned  halfword [v1 + 8]
         at = 0x4f80 << 16
         mtc1 t4, f10
         // CODE XREF from fcn.803986c0 @ 0x803986f8
         if                       // likely
         cvt.s.w f16, f10

    loc_0x8037fb94: // orphan
         mtc1 at, f8
         
         add.s f16, f16, f8

    loc_0x8037fba0: // orphan
         // CODE XREF from fcn.803986c0 @ 0x803986fc
         swc1 f16, 0x48, a2       // arg3
         lwc1 f18
         swc1 f18, 0x10, a0       // arg1
         lwc1 f4, 4, v1
         swc1 f4, 0x18, a0        // arg1
         ra = [sp + 0x14]         // t9

    loc_0x8037fbb8: // orphan
         sp += 0x28
         ret                      // ra
         

    loc_0x8037fc2c: // orphan
         t8 = [s1 + 0]            // t9
         t7 = , unsigned  byte [v0 + 4]
         beql t7, t8, 0x8037ff10  // unlikely
         s0 = [s0 + 4]

    loc_0x8037fc3c: // orphan
         v1 = [s0 + 0xc]          // t9
         t9 = v1 << 2
         bgezl t9, 0x8037ff10     // likely
         // CODE XREF from fcn.803986c0 @ 0x80398704
         s0 = [s0 + 4]

    loc_0x8037fc4c: // orphan
         lwc1 f4, 0x48, s2
         lwc1 f6, 0x48, s0
         lwc1 f8, 0x50, s2
         lwc1 f10, 0x50, s0
         sub.s f2, f4, f6
         at = 0x41f0 << 16
         mtc1 at, f4
         sub.s f12, f8, f10
         mul.s f16, f2, f2
         
         mul.s f18, f12, f12
         add.s f0, f16, f18

    loc_0x8037fc7c: // orphan
         // CODE XREF from fcn.803986c0 @ 0x80398708
         sqrt.s f0, f0
         c.lt.s f0, f4
         // CALL XREF from fcn.8145b6e4 @ +0xb14
         
         bc1f 0x8037ff0c
         
         v0 = [s2 + 0xc]
         t0 = v0 << 0xd
         if                       // unlikely
         t1 = v0 & s4

    loc_0x8037fca0: // orphan
         if                       // likely
         at = 0x8641 << 16

    loc_0x8037fca8: // orphan
         swc1 f26, 0x1c, s1
         lwc1 f6, -0x65e4, at
         at = 0 + 1               // lo
         s3 = s1 + 0x58
         swc1 f6, 0x14, s2
         v1 = [s1 + 0x14]         // t9
         if                       // unlikely
         

    loc_0x8037fcc8: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x8037fcd0: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x8037fcd8: // orphan
         if                       // unlikely
         

    loc_0x8037fce0: // orphan
         goto 0x8037fed0
         t4 = [s2 + 0xc]

    loc_0x8037fce8: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f8
         
         cvt.s.w f10, f8
         div.s f16, f10, f20
         mul.s f18, f16, f22
         c.le.s f26, f18
         
         bc1f 0x8037fd44
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         
         cvt.s.w f6, f4
         div.s f8, f6, f20
         mul.s f10, f8, f22
         add.s f16, f10, f24
         trunc.w.s f18, f16
         mfc1 t3, f18
         goto 0x8037fecc
         [s1 + 0x38] = t3

    loc_0x8037fd74: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         
         cvt.s.w f6, f4
         div.s f8, f6, f20
         mul.s f10, f8, f22
         c.le.s f26, f10
         
         bc1f 0x8037fdd0
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f16
         
         cvt.s.w f18, f16
         div.s f4, f18, f20
         mul.s f6, f4, f22

    loc_0x8037fe20: // orphan
         // CODE XREF from fcn.803986c0 @ 0x8039873c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f10
         
         cvt.s.w f16, f10
         div.s f18, f16, f20
         mul.s f4, f18, f22
         c.le.s f26, f4
         
         bc1f 0x8037fe7c
         
         // CODE XREF from fcn.803986c0 @ 0x80398718
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         
         cvt.s.w f8, f6

    loc_0x8037fe60: // orphan
         // CODE XREF from fcn.803986c0 @ 0x8039871c
         div.s f10, f8, f20
         mul.s f16, f10, f22
         add.s f18, f16, f24
         trunc.w.s f4, f18
         mfc1 v1, f4
         goto 0x8037feac
         mtc1 v1, f6

    loc_0x8037fe7c: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         
         cvt.s.w f8, f6
         div.s f10, f8, f20
         mul.s f16, f10, f22
         sub.s f18, f16, f24
         trunc.w.s f4, f18
         mfc1 v1, f4
         
         mtc1 v1, f6

    loc_0x8037feac: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037fe74
         at = 0x8641 << 16
         lwc1 f10, -0x65dc, at
         cvt.s.w f8, f6
         mul.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 t3, f18
         
         [s1 + 0x38] = t3

    loc_0x8037fecc: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037fd3c
         // CODE XREF from fcn.8037fdbc @ 0x8037fe18
         t4 = [s2 + 0xc]

    loc_0x8037fed0: // orphan
         // CODE XREF from fcn.803742ac @ 0x8037fce0
         a0 = 0 + 0x5f03          // arg1
         a2 = s3                  // t9
         // CODE XREF from fcn.803986c0 @ 0x80398724
         t5 = t4 | s4             // t9
         [s2 + 0xc] = t5
         call 0x8002781c          // 0x8002781c(0x5f03, 0x442f71dcfe116408, -1, -1)
         a1 = , unsigned  byte [s1 + 3] // s4
         v1 = [s0 + 0xc]          // t9

    loc_0x8037feec: // orphan
         // CODE XREF from fcn.803986c0 @ 0x80398728
         at = 0x4000 << 16
         t6 = v1 | at
         at = 0xdfff << 16
         at |= 0xffff
         [s0 + 0xc] = t6
         t8 = t6 & at
         [s0 + 0xc] = t8
         [s0 + 0x1c] = 0
         s0 = [s0 + 4]

    loc_0x8037ff10: // orphan
         bnel s0, 0, 0x8037fc2c   // likely
         v0 = [s0 + 0x20]         // t9

    loc_0x8037ff18: // orphan
         ra = [sp + 0x4c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp

    loc_0x8037ff24: // orphan
         // CODE XREF from fcn.803986c0 @ 0x80398730
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         s0 = [sp + 0x38]
         s1 = [sp + 0x3c]
         s2 = [sp + 0x40]         // a2
         s3 = [sp + 0x44]         // t9
         s4 = [sp + 0x48]
         ret                      // ra
         sp += 0x50

    loc_0x803800d8: // orphan
         mfc1 v1, f6
         

    loc_0x803800e0: // orphan
         // CODE XREF from fcn.803800a0 @ 0x803800a8
         // CODE XREF from fcn.828df654 @ +0x60c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803801b4: // orphan
         if                       // unlikely
         [a1 + 0x38] = t9         // arg2

    loc_0x803801bc: // orphan
         // CODE XREF from fcn.803986c0 @ +0xa8
         at = , t9 < 0x12
         if                       // unlikely
         t1 = 0xff00 << 16

    loc_0x803801c8: // orphan
         t0 = 0xff64 << 16
         t0 |= 0x64c8
         goto 0x803801dc
         // CALL XREF from fcn.82530b08 @ +0xa50
         [a0 + 0xc4] = t0         // arg1

    loc_0x803801d8: // orphan
         [a0 + 0xc4] = t1         // arg1

    loc_0x803801dc: // orphan
         // CODE XREF from fcn.803742ac @ 0x803801d0
         t2 = [a3 + 0x38]         // arg4 // t9

    loc_0x803801e0: // orphan
         // CODE XREF from fcn.803986c0 @ 0x8039876c
         at = 0 + 5
         a0 = 0 + 0x5404          // arg1
         div 0, t2, at
         t3 = hi
         a2 = a3 + 0x58           // arg4
         bnel t3, 0, 0x80380210   // likely
         t4 = [sp + 0x20]         // t9

    loc_0x803801fc: // orphan
         a1 = , unsigned  byte [a3 + 3] // arg4 // s4
         call 0x8002781c          // 0x8002781c(-1, 0xff, 0x8, -1)

    loc_0x80380210: // orphan
         at = 0x8641 << 16
         t5 = , unsigned  halfword [t4 + 0]
         t6 = t5 & 0xf0ff

    loc_0x8038021c: // orphan
         halfword [t4 + 0] = t6
         v0 = [a3 + 0x14]         // arg4 // t9
         beql v0, 0, 0x80380254   // unlikely
         // CODE XREF from fcn.803986c0 @ 0x80398774
         lwc1 f4, 0x18, a3        // arg4

    loc_0x8038022c: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x80380238: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803986c0 @ 0x80398778
         at = 0 + 3

    loc_0x80380254: // orphan
         lwc1 f6, -0x65d0, at
         v1 = 0
         mul.s f8, f4, f6
         goto 0x803802d8
         swc1 f8, 0x18, a3        // arg4

    loc_0x80380268: // orphan
         at = 0x8641 << 16
         lwc1 f16, -0x65cc, at
         lwc1 f10, 0x18, a3       // arg4
         v1 = 0
         mul.s f18, f10, f16
         goto 0x803802d8
         // CALL XREF from fcn.824f644c @ +0x3b4
         swc1 f18, 0x18, a3       // arg4

    loc_0x80380284: // orphan
         at = 0x8641 << 16
         lwc1 f6, -0x65c8, at
         lwc1 f4, 0x18, a3        // arg4
         v1 = 0
         mul.s f8, f4, f6
         goto 0x803802d8
         swc1 f8, 0x18, a3        // arg4

    loc_0x803802bc: // orphan
         mtc1 0, f0
         t7 = [a0 + 0xc]          // arg1 // s4
         at |= 0xffff
         swc1 f0, 0x14, a0        // arg1
         t8 = t7 & at             // s4
         [a0 + 0xc] = t8          // arg1
         swc1 f0, 0x4c, a0        // arg1

    loc_0x803802d8: // orphan
         // CODE XREF from fcn.80380240 @ 0x80380248
         // CODE XREFS from fcn.803742ac @ 0x80380260, 0x8038027c, 0x80380298
         // CODE XREF from fcn.80380240 @ 0x803802b4
         ra = [sp + 0x14]         // t9
         sp += 0x18

    loc_0x80380408: // orphan
         [sp + 0x24] = a2
         a1 = s1 + 0x48           // arg2

    loc_0x8038043c: // orphan
         goto 0x80380448
         [s0 + 0x20] = 0

    loc_0x80380448: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038043c
         lwc1 f4, 0x48, s1
         a0 = s1
         swc1 f4, 0x24, s0
         lwc1 f6, 0x50, s1
         swc1 f6, 0x28, s0
         call 0x86402688          // 0x86402688(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803805a0: // orphan
         sub.s f0, f6, f4
         mul.s f16, f8, f0
         
         mul.s f6, f0, f18
         swc1 f16, 0x18, s0
         mul.s f4, f10, f6
         swc1 f4, 0x1c, s0
         call 0x86402304          // 0x86402304(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x46] = 0
         goto 0x80380760          // fcn.803804d8+0x288
         lwc1 f0, 0x1c, s0

    loc_0x8038080c: // orphan
         t3 = t1 & 0xf0ff
         halfword [sp + 0x46] = t3
         t4 = halfword [s1 + 0x44]

    loc_0x803808f0: // orphan
         at = 0x8641 << 16
         c.lt.s f6, f0
         // CALL XREF from fcn.8135f570 @ +0x650
         
         bc1f 0x8038090c
         
         lwc1 f12, -0x656c, at
         sub.s f0, f12, f0
         at = 0x8641 << 16
         lwc1 f12, -0x6568, at
         at = 0x8641 << 16
         lwc1 f16, -0x6564, at
         at = 0x3f00 << 16
         mtc1 at, f18
         c.lt.s f0, f16
         at = 0x4f00 << 16
         bc1f 0x80380938
         
         add.s f0, f12, f0
         mul.s f4, f0, f18
         mtc1 0, f7
         mtc1 0, f6
         add.s f10, f2, f4
         swc1 f10, 0x4c, s0
         lwc1 f2, 0x4c, s0
         cvt.d.s f8, f2
         c.lt.d f8, f6
         // CODE XREF from fcn.80398784 @ 0x80398824
         
         bc1fl 0x80380974
         c.lt.s f12, f2
         add.s f16, f2, f12
         swc1 f16, 0x4c, s0

    loc_0x8038096c: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398828
         lwc1 f2, 0x4c, s0
         c.lt.s f12, f2
         
         bc1fl 0x80380990
         cfc1 t9, 31
         // CODE XREF from fcn.80398784 @ +0xa8
         sub.s f18, f2, f12
         swc1 f18, 0x4c, s0
         lwc1 f2, 0x4c, s0
         cfc1 t9, 31
         ctc1 t0, 31
         
         cvt.w.s f4, f2

    loc_0x8038099c: // orphan
         cfc1 t0, 31
         

    loc_0x803809a4: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398830
         t0 &= 0x78               // a2
         beql t0, 0, 0x803809f8   // unlikely
         mfc1 t0, f4

    loc_0x803809b0: // orphan
         mtc1 at, f4
         t0 = 0 + 1               // lo
         sub.s f4, f2, f4
         ctc1 t0, 31
         
         cvt.w.s f4, f4
         cfc1 t0, 31

    loc_0x803809cc: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398838
         
         t0 &= 0x78               // a2
         if                       // likely
         

    loc_0x803809dc: // orphan
         mfc1 t0, f4

    loc_0x803809e0: // orphan
         // CODE XREF from fcn.80398784 @ 0x8039883c
         at = 0x8000 << 16
         goto 0x80380a04
         t0 |= at

    loc_0x803809ec: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803809d4, 0x803809fc
         // CODE XREF from fcn.82b89d84 @ +0x570
         goto 0x80380a04
         t0 = 0 - 1               // s2

    loc_0x803809f8: // orphan
         // CODE XREF from fcn.803742ac @ 0x803809a8
         
         if                       // unlikely
         

    loc_0x80380a04: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803809e4, 0x803809ec
         ctc1 t9, 31
         call 0x86402304          // 0x86402304(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 0x44] = t0
         // CODE XREF from fcn.80380848 @ 0x803808bc
         // CODE XREF from fcn.803807c4 @ 0x803808d4
         t2 = [s0 + 0x44]         // t9

    loc_0x80380e90: // orphan
         add.s f4, f16, f18
         goto 0x80380f48
         swc1 f4, 0x1c, sp

    loc_0x80380e98: // orphan
         swc1 f4, 0x1c, sp
         // CODE XREF from fcn.80380d40 @ +0xf8
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.80398784 @ 0x803988b0
         mtc1 v0, f8
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f8

    loc_0x80380eb4: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x80380ec0: // orphan
         // CODE XREF from fcn.803742ac @ 0x80380eac
         at = 0x4f80 << 16
         mtc1 at, f16
         at = 0x8641 << 16
         lwc1 f4, -0x6550, at
         div.s f18, f6, f16
         at = 0x8641 << 16
         lwc1 f10, -0x654c, at
         mul.s f8, f18, f4
         add.s f6, f8, f10
         goto 0x80380f48
         swc1 f6, 0x1c, sp

    loc_0x80380f48: // orphan
         // CODE XREF from fcn.80398784 @ 0x80380e50
         // CODE XREFS from fcn.803742ac @ 0x80380e94, 0x80380ee4
         // CODE XREF from fcn.80398784 @ 0x80380f34
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.80398784 @ 0x803988bc
         mtc1 v0, f10
         at = 0x4270 << 16
         mtc1 at, f16
         cvt.s.w f6, f10
         at = 0x432f << 16

    loc_0x80380f64: // orphan
         // CODE XREF from fcn.80398784 @ 0x803988c0
         mtc1 at, f18
         mtc1 0, f10
         div.s f4, f6, f16
         mul.s f8, f4, f18
         c.le.s f10, f8

    loc_0x80380f78: // orphan
         // CODE XREF from fcn.803747c4 @ 0x803988c4
         

    loc_0x80380f7c: // orphan
         bc1f 0x80380fc8
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x4270 << 16
         mtc1 at, f4
         cvt.s.w f16, f6
         at = 0x432f << 16
         mtc1 at, f8
         at = 0x3f00 << 16

    loc_0x80380fd8: // orphan
         mtc1 at, f10
         cvt.s.w f8, f18
         at = 0x432f << 16
         mtc1 at, f16
         at = 0x3f00 << 16
         mtc1 at, f18
         div.s f6, f8, f10
         mul.s f4, f6, f16
         sub.s f8, f4, f18
         trunc.w.s f10, f8

    loc_0x803810f8: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038134c
         t7 = [s4 + 0]
         t8 = , unsigned  byte [v0 + 4]
         beql t7, t8, 0x8038134c  // likely
         s1 = [s1 + 4]            // t9

    loc_0x80381108: // orphan
         t9 = [s1 + 0xc]
         at = 0x3000 << 16
         t0 = t9 & at
         // CODE XREF from fcn.80398784 @ +0x15c
         beql t0, 0, 0x8038134c   // unlikely
         s1 = [s1 + 4]            // t9

    loc_0x8038111c: // orphan
         t1 = [s4 + 0x50]         // t9
         t2 = [s1 + 0x1c]         // t9
         a0 = s0
         a1 = s2
         at = , t1 < t2
         if                       // likely
         a2 = sp + 0x84           // arg3

    loc_0x80381188: // orphan
         // CODE XREF from fcn.80398784 @ 0x803988f4
         neg.s f0, f0

    loc_0x8038118c: // orphan
         // CODE XREF from fcn.80381138 @ 0x8038117c
         // CODE XREF from fcn.80398784 @ 0x803988e8
         c.lt.s f0, f24

    loc_0x80381190: // orphan
         
         bc1fl 0x803811b4
         lwc1 f16, 0x80, sp
         c.lt.s f16, f24

    loc_0x803811a0: // orphan
         // CODE XREF from fcn.80398784 @ 0x803988ec
         
         bc1fl 0x803811b4
         lwc1 f16, 0x80, sp
         s5 = 0 + 1               // lo
         lwc1 f16, 0x80, sp
         c.lt.s f16, f24
         
         bc1fl 0x8038134c
         s1 = [s1 + 4]            // t9
         add.s f10, f8, f24
         neg.s f4, f10
         c.lt.s f4, f16
         
         bc1fl 0x8038134c
         s1 = [s1 + 4]            // s4

    loc_0x803811dc: // orphan
         // CODE XREF from fcn.80398784 @ 0x803988f8
         c.lt.s f26, f16
         sub.s f12, f14, f24
         add.s f2, f14, f24
         mov.s f18, f12
         bc1f 0x803811fc

    loc_0x803811f0: // orphan
         // CODE XREF from fcn.80398300 @ 0x803988fc
         mov.s f20, f2
         goto 0x80381200
         mov.s f0, f16

    loc_0x80381200: // orphan
         // CODE XREF from fcn.803742ac @ 0x803811f4
         c.lt.s f0, f24
         // CODE XREF from fcn.80398784 @ 0x80398900
         
         bc1fl 0x803812f4
         c.lt.s f12, f26
         c.lt.s f26, f2
         

    loc_0x80381218: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398904
         bc1fl 0x80381274
         c.lt.s f18, f22
         c.lt.s f2, f22
         
         bc1fl 0x80381274
         c.lt.s f18, f22
         lwc1 f8
         lwc1 f6
         a0 = s3                  // t9
         mul.s f10, f8, f20
         lwc1 f8, 4, s0
         a1 = s0
         add.s f4, f6, f10
         swc1 f4
         lwc1 f6, 4, s2
         mul.s f10, f6, f20
         add.s f4, f8, f10
         swc1 f4, 4, s0
         call 0x8640377c          // "\u01f2" // 0x8640377c(-1, 0x104, 0x8, -1)
         swc1 f18, 0x78, sp
         lwc1 f18, 0x78, sp
         mov.s f22, f0
         c.lt.s f18, f22

    loc_0x80381274: // orphan
         
         bc1fl 0x8038134c
         s1 = [s1 + 4]            // t9
         c.lt.s f22, f20
         
         bc1fl 0x8038134c

    loc_0x8038128c: // orphan
         // CODE XREF from fcn.80398300 @ 0x80398908
         s1 = [s1 + 4]            // t9
         sub.s f6, f22, f18
         sub.s f8, f20, f22
         c.lt.s f6, f8
         

    loc_0x803812a0: // orphan
         // CODE XREF from fcn.80398784 @ 0x8039890c
         bc1fl 0x803812b4
         mov.s f0, f20
         goto 0x803812b4
         mov.s f0, f18

    loc_0x803812b4: // orphan
         // CODE XREF from fcn.803742ac @ 0x803812a8
         lwc1 f4
         lwc1 f10
         a0 = s3                  // t9
         mul.s f6, f4, f0
         lwc1 f4, 4, s0
         a1 = s0
         add.s f8, f10, f6
         swc1 f8
         lwc1 f10, 4, s2
         mul.s f6, f10, f0
         add.s f8, f4, f6
         call 0x8640377c          // 0x8640377c(-1, 0x104, 0x8, -1)
         swc1 f8, 4, s0
         goto 0x80381348
         mov.s f22, f0

    loc_0x80381348: // orphan
         // CODE XREF from fcn.803742ac @ 0x80381130
         // CODE XREF from fcn.80381138 @ 0x80381160
         // CODE XREF from fcn.803742ac @ 0x803812e8
         s1 = [s1 + 4]            // t9

    loc_0x8038134c: // orphan
         // CODE XREFS from fcn.803742ac @ 0x80381100, 0x80381114
         bnel s1, 0, 0x803810f8   // likely
         v0 = [s1 + 0x20]         // t9

    loc_0x80381354: // orphan
         lwc1 f14
         lwc1 f16, 4, s0

    loc_0x8038135c: // orphan
         // CODE XREF from fcn.80398784 @ 0x803810dc
         lwc1 f10, 0x94, sp
         lwc1 f4, 0x98, sp
         lwc1 f6, 0x94, sp
         c.eq.s f10, f14
         lwc1 f8, 0x98, sp
         v0 = s5                  // t9
         bc1fl 0x80381390
         sub.s f2, f6, f14
         c.eq.s f4, f16
         
         bc1tl 0x803813cc
         ra = [sp + 0x54]
         sub.s f2, f6, f14
         at = 0x8641 << 16
         sub.s f12, f8, f16
         // CODE XREF from fcn.80398784 @ 0x80398914
         mul.s f10, f2, f2
         lwc1 f8, -0x6540, at
         mul.s f4, f12, f12
         add.s f0, f10, f4
         sqrt.s f0, f0

    loc_0x803813ac: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398918
         c.lt.s f8, f0
         
         bc1fl 0x803813cc
         ra = [sp + 0x54]
         swc1 f6
         lwc1 f10, 0x98, sp
         swc1 f10, 4, s0
         ra = [sp + 0x54]
         ldc1 f20, 0x18, sp
         // CODE XREF from fcn.80398784 @ +0x198
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         s0 = [sp + 0x3c]
         s1 = [sp + 0x40]         // a2
         s2 = [sp + 0x44]
         s3 = [sp + 0x48]
         s4 = [sp + 0x4c]
         s5 = [sp + 0x50]
         ret
         // CODE XREF from fcn.80398784 @ 0x80398924
         sp += 0xa8

    loc_0x80381568: // orphan
         fp = [sp + 0x60]
         ret                      // ra
         sp += 0x90

    loc_0x80381614: // orphan
         
         mtc1 v0, f4
         t8 = [sp + 0x24]         // a2
         if                       // likely
         cvt.s.w f6, f4

    loc_0x80381628: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80381638: // orphan
         // CODE XREF from fcn.803742ac @ 0x80381620
         at = 0x4f80 << 16
         mtc1 at, f10
         t9 = [t8 + 4]            // s4
         at = 0x8641 << 16
         div.s f16, f6, f10
         t0 = t9 << 2
         at += t0
         lwc1 f18, -0x69b8, at
         at = 0x8641 << 16
         lwc1 f4, -0x6538, at
         t1 = 0 | 0x8000
         mul.s f8, f18, f4
         c.lt.s f16, f8
         
         bc1fl 0x8038180c
         ra = [sp + 0x14]         // t9
         goto fcn.80381808        // fcn.80381808(-1)
         [sp + 0x1c] = t1

    loc_0x803816bc: // orphan
         mtc1 at, f4
         t3 = [t2 + 4]
         at = 0x8641 << 16
         div.s f16, f10, f4
         t4 = t3 << 2
         at += t4
         lwc1 f8, -0x69b8, at
         at = 0x8641 << 16
         lwc1 f6, -0x6534, at
         t5 = 0 | 0x8000
         mul.s f18, f8, f6
         c.lt.s f16, f18
         
         bc1fl 0x8038180c
         ra = [sp + 0x14]         // t9
         goto fcn.80381808        // fcn.80381808(-1)
         [sp + 0x1c] = t5

    loc_0x80381778: // orphan
         // CODE XREF from fcn.80381548 @ +0xa8
         beql v0, 0, 0x80381798   // unlikely
         a0 = a2

    loc_0x80381780: // orphan
         beql v1, v0, 0x80381798  // unlikely
         a0 = a2

    loc_0x80381788: // orphan
         beql a0, v0, 0x80381798  // unlikely
         a0 = a2

    loc_0x80381790: // orphan
         if                       // fcn.80381808 // fcn.80381808 // likely
         a0 = a2

    loc_0x80381798: // orphan
         // CODE XREFS from fcn.803742ac @ 0x80381778, 0x80381780, 0x80381788
         // CODE XREF from fcn.80398784 @ 0x80398964
         call 0x86403cb4          // "T@" // 0x86403cb4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a2
         bnel v0, 0, 0x8038180c   // likely
         ra = [sp + 0x14]         // t9

    loc_0x803817a8: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80398784 @ 0x80398968
         

    loc_0x803817ac: // orphan
         // CODE XREF from fcn.80398784 @ 0x80398968
         
         mtc1 v0, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f10

    loc_0x803817c0: // orphan
         mtc1 at, f4
         
         add.s f8, f8, f4

    loc_0x803817cc: // orphan
         // CODE XREF from fcn.803742ac @ 0x803817b8
         at = 0x4f80 << 16
         // CODE XREF from fcn.80398784 @ +0x1e8
         mtc1 at, f6
         t0 = [sp + 0x24]         // a2
         at = 0x8641 << 16
         div.s f16, f8, f6
         t1 = [t0 + 4]            // t9
         t3 = 0 | 0x8000
         t2 = t1 << 2
         at += t2
         lwc1 f18, -0x69b8, at
         c.lt.s f16, f18
         
         bc1fl 0x8038180c

    loc_0x8038180c: // orphan
         // CODE XREFS from fcn.803742ac @ 0xb0, 0xc0, 0x140, 0x1c0, 0x803817a0
         v0 = , unsigned  halfword [sp + 0x1e]
         sp += 0x20

    loc_0x80381a90: // orphan
         neg.s f12, f12

    loc_0x80381a94: // orphan
         // CODE XREF from fcn.80398784 @ 0x80381a84
         swc1 f12, 0x58, sp
         swc1 f14, 0x5c, sp

    loc_0x80381c30: // orphan
         at = 0 + 4
         c.lt.s f4, f0
         // CALL XREF from fcn.81bbb3f8 @ +0x724
         
         bc1f 0x80381c4c
         
         goto fcn.80381d18        // fcn.80381d18(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1, -1, -1, -1)
         t0 = 0 + 0x200

    loc_0x8038246c: // orphan
         a1 = , signed  a1 >> 0x10 // arg2
         call 0x8003eb84          // "&P" // 0x8003eb84(-1, 0xfffffe11, 0x8, -1)
         a0 = s0
         s0 = s2 + 0x24

    loc_0x803825ec: // orphan
         a1 = 0

    loc_0x803825f0: // orphan
         // CODE XREFS from fcn.80354694 @ 0xf8, 0x114, 0x803825cc
         ra = [sp + 0x24]         // a2

    loc_0x803825f4: // orphan
         // XREFS: CODE 0x80382308  CODE 0x8038237c  CODE 0x803823fc  
         // XREFS: CODE 0x803824c8  CODE 0x803824d8  CODE 0x80382564  
         // XREFS: CODE 0x803825e0  
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x80382750: // orphan
         s0 = [s2 + 0x20]         // t9
         s1 = 0x8641 << 16
         a0 = s2
         t5 = [s0 + 4]            // s4
         a1 = s0                  // t9
         t6 = t5 << 2
         s1 += t6
         s1 = [s1 - 0x69d8]       // t9
         call 0x86404d48          // 0x86404d48(-1, -1, 0x8, -1)
         [s5 + 0] = 0
         lwc1 f6
         lwc1 f16, 4, s1
         lwc1 f10, 0x50, s2
         mul.s f8, f6, f22
         lwc1 f4, 0x48, s2
         mul.s f18, f16, f22
         add.s f12, f4, f8
         add.s f14, f10, f18
         call 0x8000b3b0          // 0x8000b3b0(-1, -1, 0x8, -1)
         neg.s f14, f14
         mtc1 v0, f6
         at = 0x8641 << 16
         lwc1 f8, -0x64bc, at
         cvt.s.w f4, f6
         v1 = [s0 + 8]            // t9
         mtc1 0, f18
         div.s f2, f4, f8
         if                       // unlikely
         mov.s f0, f2

    loc_0x803827c4: // orphan
         if                       // unlikely
         at = 0x3f00 << 16

    loc_0x803827cc: // orphan
         at = 0 + 2
         if                       // likely
         at = 0x3f40 << 16

    loc_0x803827d8: // orphan
         mtc1 at, f16
         goto 0x803827f8
         sub.s f0, f2, f16

    loc_0x803827e4: // orphan
         goto 0x803827f8
         sub.s f0, f2, f24

    loc_0x803827ec: // orphan
         mtc1 at, f10
         
         sub.s f0, f2, f10

    loc_0x803827f8: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803827dc, 0x803827e4
         c.lt.s f0, f18
         

    loc_0x803828a4: // orphan
         swc1 f8, 0x10, s0

    loc_0x803828a8: // orphan
         call 0x86404a0c          // 0x86404a0c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         a0 = s2
         a1 = s0
         call 0x86401dbc          // 0x86401dbc(-1, 0x104, 0x8, -1)
         a2 = [s0 + 0x18]         // t9
         s5 += 4
         t8 = sp + 0x90
         at = , unsigned  , s5 < t8 // lo
         if                       // likely
         s2 += 0x18c

    loc_0x803828d4: // orphan
         call 0x864033ac          // 0x864033ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s2 = [s4 + 0]
         s5 = sp + 0x80
         s3 = 0 | 0xb554
         s2 += 0x7d0
         t0 = [s5 + 0]
         s1 = [s2 + 0x20]         // t9
         beql t0, 0, 0x803829b8   // likely
         s5 += 4

    loc_0x80382d74: // orphan
         s1 = [s0 + 0x20]
         a0 = s0
         call 0x86404d48          // 0x86404d48(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         a0 = s0
         a1 = s1
         call 0x86401dbc          // 0x86401dbc(0x104, 0x0, 0x8, -1)
         a2 = [s1 + 0x18]         // t9
         lwc1 f8, 0x18, s1
         c.lt.s f8, f20
         
         bc1f 0x80382e38
         
         t1 = [s0 + 0xc]
         t2 = t1 & s3
         if                       // likely
         

    loc_0x80382db8: // orphan
         t6 = [s1 + 0]            // t9
         t3 = 0x8641 << 16
         t3 = [t3 + 0x6c00]       // t9
         unsigned , hi            // lo // lo
         t4 = t3 + s4
         t5 = [t4 + 0x4dd0]       // t9
         t7 = lo
         v0 = t5 + t7
         t8 = [v0 + 0xc]
         t9 = t8 | s6
         if                       // likely
         [v0 + 0xc] = t9

    loc_0x80382de8: // orphan
         call 0x86405138          // 0x86405138(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80382df0: // orphan
         t0 = [s0 + 0xc]
         t1 = t0 | s3             // t9
         t3 = t1 & s7             // t9
         if                       // likely
         [s0 + 0xc] = t1

    loc_0x80382e04: // orphan
         v0 = , unsigned  halfword [s0 + 0x44]
         [s0 + 0x1c] = 0
         at = 0x8008 << 16
         v0 = , signed  v0 >> 4
         v0 <<= 2

    loc_0x80382e18: // orphan
         t4 = fp + v0
         lwc1 f10
         at += v0
         swc1 f10, 0x10, s0
         lwc1 f16, 0x7e50, at
         neg.s f4, f16
         swc1 f4, 0x18, s0
         swc1 f22, 0x18, s1

    loc_0x80382e38: // orphan
         call 0x86404a0c          // "&R" // 0x86404a0c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s2 += 1
         at = 0 + 4
         if                       // likely
         s0 += 0x18c

    loc_0x80382e50: // orphan
         ra = [sp + 0x54]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         s0 = [sp + 0x30]         // t9
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]         // a2
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]
         ret
         sp += 0x58

    loc_0x803838ac: // orphan
         a1 -= 0x66d8             // arg2
         a0 = s1
         call 0x80040e80          // 0x80040e80(0x442f71dcfe117dbd, 0x442f71dcfe10fd30, 0x8, -1)
         [t3 + 0x7ac] = v0
         t4 = [s4 + 0]
         // CODE XREF from fcn.82851868 @ +0xbec
         a1 = 0x8641 << 16
         a1 -= 0x66a4
         a0 = s1
         call 0x80040e80          // 0x80040e80(0x442f71dcfe117dbd, 0x8640995c, 0x8, -1)
         [t4 + 0x7b4] = v0
         t5 = [s4 + 0]

    loc_0x803838f0: // orphan
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x6c
         call 0x80002b24          // 0x80002b24(0x6c, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = [s4 + 0]
         s1 = v0                  // s4

    loc_0x80383914: // orphan
         a0 = s3                  // t9
         a2 = 0 + 6
         a3 = s2
         call 0x87f0ad50          // 0x87f0ad50(-1, 0x442f71dcfe116408, 0x6, -1)
         a1 = [t6 + 0x70]         // t9
         a3 = [s3 + 0]
         a0 = s1
         a1 = 0 + 0x6c
         a2 = 0
         call 0x8004e018          // 0x8004e018(0x442f71dcfe117dbd, 0x6c, 0x0, 0x0)
         [sp + 0xc] = a3
         t9 = [s4 + 0]
         a0 = s1
         a1 = 0 + 0x6c
         t2 = t9 + s0
         [t2 + 0x788] = v0
         a3 = [s3 + 0]
         a2 = 0 + 1               // lo
         call 0x8004e018          // 0x8004e018(0x442f71dcfe117dbd, 0x6c, 0x1, 0x0)
         [sp + 0xc] = a3
         t5 = [s4 + 0]
         a0 = s1
         t6 = t5 + s0
         call 0x80003120          // "&R" // 0x80003120(0x442f71dcfe117dbd, 0x6c, 0x1, 0x0)
         [t6 + 0x798] = v0
         s2 += 1
         at = , s2 < 4            // lo
         if                       // likely
         s0 += 4

    loc_0x80383988: // orphan
         a1 = 0x8641 << 16
         a1 = , unsigned  byte [a1 - 0x68e0] // s4
         call 0x8004c990          // 0x8004c990(-1, 0xff, 0x8, -1)

    loc_0x803839ec: // orphan
         s1 -= 0x6360
         a1 = s1

    loc_0x803839f4: // orphan
         call 0x80037e9c          // 0x80037e9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         t8 = [s4 + 0]
         call 0x87f01870          // 0x87f01870(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t8 + 0x70]         // t9
         t9 = [s4 + 0]
         call 0x87f01f34          // 0x87f01f34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t9 + 0x70]
         call 0x87f00030          // 0x87f00030(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87f0c980          // 0x87f0c980(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = [s4 + 0]
         a2 = 0 + 4
         a0 = v1 + 0x7bc
         call 0x87f024f4          // 0x87f024f4(0x7bc, 0x442f71dcfe116408, 0x4, -1)
         a1 = v1 + 0x7d0
         v0 = 0
         a0 = 0
         a1 = 0 | 0xcb8c

    loc_0x80383a44: // orphan
         v1 = [s4 + 0]
         t2 = v1 + a0             // t9
         a0 += 0x5c
         at = , a0 < 0x170
         t3 = t2 + a1
         t4 = v1 + v0             // s4
         v0 += 0x18c
         if                       // unlikely
         [t4 + 0x7f0] = t3

    loc_0x80383a68: // orphan
         v1 = [s4 + 0]
         a0 = s0
         a3 = 0 + 0x18
         a1 = v1 + 0xe00
         call 0x87f0252c          // 0x87f0252c(0x104, 0xe00, 0x8, 0x18)
         a2 = v1 + 0xe14
         v0 = 0
         a0 = 0
         t1 = 0 + 0xc0
         t0 = 0 | 0xcd14
         a3 = 0 | 0xcd0c
         a2 = 0 | 0xcd04
         a1 = 0 | 0xccfc

    loc_0x80383a9c: // orphan
         v1 = [s4 + 0]
         t5 = v1 + a0             // t9
         t6 = t5 + a1
         t7 = v1 + v0             // s4
         [t7 + 0xe34] = t6
         v1 = [s4 + 0]
         t8 = v1 + a0             // t9

    loc_0x80383ab8: // orphan
         t9 = t8 + a2
         t2 = v1 + v0
         [t2 + 0xfc0] = t9
         v1 = [s4 + 0]
         t3 = v1 + a0             // t9
         t4 = t3 + a3
         t5 = v1 + v0             // s4
         [t5 + 0x114c] = t4
         v1 = [s4 + 0]
         t6 = v1 + a0             // t9
         t7 = t6 + t0
         a0 += 0x20
         t8 = v1 + v0             // s4
         [t8 + 0x12d8] = t7
         if                       // likely
         v0 += 0x630

    loc_0x80383af8: // orphan
         v1 = [s4 + 0]
         a2 = 0 + 0x50
         a0 = v1 + 0x3334
         call 0x87f024f4          // 0x87f024f4(0x3334, 0x442f71dcfe116408, 0x50, -1)
         a1 = v1 + 0x3348
         call 0x86407aa0          // 0x86407aa0(0x3334, 0x3348, 0x50, -1)
         
         a0 = [s4 + 0]
         at = 0 | 0xb554
         a1 = s1

    loc_0x8038e944: // orphan
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         call 0x8003f018          // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s4
         call 0x8003f018          // 0x8003f018(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = s7                  // t9
         a1 = 0x8651 << 16
         a1 -= 0x2660
         call 0x8003f03c          // 0x8003f03c(-1, 0x8650d9a0, 0x8, -1)
         a0 = fp
         a1 = 0x87f1 << 16

    loc_0x8038e970: // orphan
         a1 += 0x5b70             // arg2
         call 0x8003f03c          // 0x8003f03c(-1, 0x442f71dcfe11bf78, 0x8, -1)
         a0 = s1
         a0 = [sp + 0xb0]
         call 0x87f06430          // 0x87f06430(0x0, 0x442f71dcfe11bf78, 0x8, -1)
         a1 = s6
         at = 0x425c << 16
         mtc1 at, f4
         t2 = [sp + 0xac]
         swc1 f26, 0x38, s1
         swc1 f26, 0x34, s1
         swc1 f26, 0x30, s1
         swc1 f4, 0x28, s1
         a0 = s1
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x442f71dcfe117dbd, 0x0, -1, -1)
         a3 = [t2 + 0]            // t9

    loc_0x8038e9b8: // orphan
         a0 = s1
         call 0x8003f210          // 0x8003f210(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = s1
         call 0x8003eb74          // 0x8003eb74(0x442f71dcfe117dbd, 0x0, 0x8, -1)
         a1 = 1 << 16
         call 0x8007afa0          // 0x8007afa0(0x442f71dcfe117dbd, 0x10000, 0x8, -1)
         
         at = 0 + 0xf
         div 0, v0, at
         a1 = hi
         a1 += 0xf
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // 0x8003eb84(0x442f71dcfe117dbd, 0xd, 0x8, -1)
         a0 = s1
         a0 = s1
         call 0x8003ef48          // 0x8003ef48(0x442f71dcfe117dbd, 0xd, 0x8, -1)
         a1 = 0
         a0 = s1
         call 0x8003f3bc          // 0x8003f3bc(0x442f71dcfe117dbd, 0x0, 0x8, -1)
         a1 = 0
         t3 = [sp + 0xa8]
         a1 = 0x8651 << 16
         a1 -= 0x2660
         a0 = s2
         call 0x8003f03c          // 0x8003f03c(-1, 0x8650d9a0, 0x8, -1)
         [t3 + 0xc] = 0
         call 0x8003f018          // 0x8003f018(-1, 0x8650d9a0, 0x8, -1)
         a0 = [sp + 0xa0]
         mtc1 s6, f8
         at = 0xc20c << 16
         mtc1 at, f6
         cvt.s.w f10, f8
         at = 0x42f0 << 16
         mtc1 at, f18
         at = 0xc334 << 16
         swc1 f6, 0x2c, s3
         mtc1 at, f6
         mul.s f4, f10, f18

    loc_0x8038ea58: // orphan
         at = 0x8651 << 16
         lwc1 f8, -0x3b30, at
         t4 = 0x8651 << 16
         a0 = [sp + 0x98]
         add.s f22, f4, f6
         mul.s f10, f22, f8
         swc1 f10, 0x24, s3
         t4 = [t4 - 0x3b8c]       // t9
         swc1 f28, 0x30, s3
         swc1 f28, 0x38, s3
         mtc1 t4, f18
         swc1 f28, 0x34, s3
         cvt.s.w f4, f18
         call 0x8003f018          // 0x8003f018(0x0, 0x442f71dcfe116408, 0x8, -1)
         swc1 f4, 0x28, s3
         at = 0x8651 << 16
         lwc1 f2, -0x27a4, at
         at = 0x3f80 << 16
         mtc1 at, f12
         at = 0x4240 << 16
         mtc1 at, f6
         t5 = [sp + 0x94]
         at = 0x8651 << 16
         swc1 f6, 0x2c, s4
         t6 = [t5 + 0]            // t9
         lwc1 f8, -0x3b30, at
         at = 0x4234 << 16
         mtc1 t6, f10
         mul.s f14, f22, f8
         mtc1 at, f4
         swc1 f30, 0x28, s4
         swc1 f30, 0x28, s7
         at = 0x8651 << 16
         swc1 f2, 0x30, s4
         cvt.s.w f18, f10
         swc1 f2, 0x38, s4
         swc1 f2, 0x34, s4
         swc1 f12, 0x34, s7
         swc1 f12, 0x38, s7
         swc1 f4, 0x2c, s7
         add.s f0, f18, f14
         lwc1 f16, 0x24, s3
         v0 = 0
         s0 = [sp + 0xcc]
         swc1 f0, 0x24, s4
         swc1 f0, 0x24, s7
         lwc1 f6, -0x27a0, at
         at = 0x4248 << 16
         mtc1 at, f8
         at = 0x42b8 << 16
         mtc1 at, f10
         at = 0x8651 << 16
         swc1 f16, 0x24, fp
         swc1 f6, 0x30, s7
         swc1 f8, 0x2c, fp
         swc1 f10, 0x28, fp
         lwc1 f12, -0x3b0c, at
         at = 0x4220 << 16
         mtc1 at, f18

    loc_0x8038eb44: // orphan
         swc1 f14, 0x24, s2
         swc1 f30, 0x28, s2
         swc1 f18, 0x2c, s2
         swc1 f20, 0x30, s2
         swc1 f20, 0x38, s2
         swc1 f24, 0x34, s2
         lwc1 f2, 0x2c, s2
         lwc1 f0, 0x24, s2
         swc1 f12, 0x38, fp
         swc1 f12, 0x34, fp
         swc1 f12, 0x30, fp

    loc_0x8038eb70: // orphan
         v0 += 1

    loc_0x8038eb74: // orphan
         s0 += 0x168
         swc1 f0, -0x144, s0
         swc1 f2, -0x13c, s0
         swc1 f20, -0x138, s0
         swc1 f20, -0x130, s0
         if                       // likely
         swc1 f24, -0x134, s0

    loc_0x8038eb90: // orphan
         v0 = [sp + 0xa0]
         at = 0x8651 << 16
         lwc1 f0, -0x279c, at
         at = 0x42c8 << 16
         mtc1 0, f4
         mtc1 at, f6
         a0 = s3                  // t9
         a1 = [sp + 0x84]
         a2 = s6
         swc1 f16, 0x24, v0

    loc_0x8038ebb8: // orphan
         swc1 f0, 0x30, v0
         swc1 f0, 0x34, v0
         swc1 f0, 0x38, v0
         swc1 f4, 0x28, v0
         call 0x80037e3c          // 0x80037e3c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x2c, v0
         a0 = s4
         a1 = [sp + 0x80]
         call 0x80037e3c          // 0x80037e3c(0xff, 0x0, 0x8, -1)
         a2 = s6
         a0 = s2
         a1 = [sp + 0x7c]
         call 0x80037e3c          // 0x80037e3c(-1, 0x0, 0x442f71dcfe111002, -1)
         a2 = s6
         a0 = [sp + 0x78]
         a1 = [sp + 0x74]
         call 0x80037e3c          // 0x80037e3c(0x0, 0x0, 0x442f71dcfe111002, -1)
         a2 = s6
         t7 = [sp + 0x70]
         a0 = s4
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0xff, 0x0, -1, -1)
         a3 = [t7 + 0]            // t9
         t8 = [sp + 0xcc]
         t0 = [sp + 0xb0]
         t2 = [sp + 0xac]
         t4 = [sp + 0xa8]
         t6 = [sp + 0xa0]
         t9 = t8 + 0x2d0
         t1 = t0 + 0x168
         t3 = t2 + 4
         t5 = t4 + 0x98
         t4 = [sp + 0x70]
         t2 = [sp + 0x78]
         t0 = [sp + 0x94]
         t8 = [sp + 0x98]
         t7 = t6 + 0x168
         t6 = [sp + 0xe4]
         [sp + 0xa8] = t5
         [sp + 0xac] = t3
         [sp + 0xb0] = t1
         [sp + 0xcc] = t9
         s6 += 1
         t5 = t4 + 4
         t3 = t2 + 0x2d0
         t1 = t0 + 4
         t9 = t8 + 0x168
         [sp + 0x98] = t9
         [sp + 0x94] = t1
         [sp + 0x78] = t3
         [sp + 0x70] = t5
         [sp + 0xa0] = t7
         s3 += 0x168
         s4 += 0x168
         s7 += 0x168
         fp += 0x168
         s1 += 0x168

    loc_0x8038eca0: // orphan
         if                       // likely
         s2 += 0x168

    loc_0x8038eca8: // orphan
         a0 = 0x8651 << 16
         a1 = 0x8650 << 16
         a1 += 0x515c

    loc_0x8038ecb4: // orphan
         a0 += 0x10f0
         call 0x80037e3c          // 0x80037e3c(0x1000010ef, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         s0 = 0x8651 << 16
         s0 -= 0x2c0
         call 0x8003f018          // 0x8003f018(0x1000010ef, 0x442f71dcfe116408, 0x0, -1)
         a0 = s0
         at = 0x4220 << 16
         mtc1 at, f8
         mtc1 0, f10
         at = 0x8651 << 16

    loc_0x8038ece0: // orphan
         swc1 f8, 0x2c, s0
         swc1 f10, 0x24, s0
         lwc1 f18, -0x2798, at
         at = 0x3f80 << 16
         mtc1 at, f4
         at = 0x8651 << 16
         swc1 f18, 0x28, s0
         swc1 f4, 0x38, s0
         lwc1 f6, -0x2794, at
         at = 0x3f00 << 16
         mtc1 at, f8
         swc1 f6, 0x30, s0
         call 0x86502958          // 0x86502958(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f8, 0x34, s0
         ra = [sp + 0x6c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         ldc1 f26, 0x30, sp
         ldc1 f28, 0x38, sp
         ldc1 f30, 0x40, sp
         s0 = [sp + 0x48]
         s1 = [sp + 0x4c]
         s2 = [sp + 0x50]
         s3 = [sp + 0x54]
         s4 = [sp + 0x58]
         s5 = [sp + 0x5c]
         s6 = [sp + 0x60]
         s7 = [sp + 0x64]
         fp = [sp + 0x68]
         // CODE XREF from fcn.82e48db4 @ +0x100
         ret
         sp += 0xe8

    loc_0x8038ee00: // orphan
         a1 = 0 + 0x3c            // arg2
         a2 = 0
         call 0x800495f8          // 0x800495f8(-1, 0x3c, 0x0, -1)
         [sp + 0x10] = t9
         a3 = 0x8651 << 16
         a3 -= 0x2b58
         a0 = 0 + 0x78
         a1 = 0 + 0x46
         call 0x800495f8          // 0x800495f8(0x78, 0x46, 0x0, 0x8650d4a8)
         a2 = 0
         t0 = 0x8651 << 16
         t0 = [t0 - 0x2d18]       // t9
         at = , t0 < 0xa
         if                       // likely
         t1 = 0x8651 << 16

    loc_0x8038ee3c: // orphan
         t1 = [t1 - 0x3a04]       // t9
         at = 0 + 1               // lo
         if                       // fcn.8038ee4c+0x20 // unlikely
         t2 = 0x8651 << 16

    loc_0x8038ee48: // orphan
         t2 = 0x8651 << 16

    loc_0x8038ef8c: // orphan
         a0 = 0 + 0x78
         a1 = 0 + 0x6e

    loc_0x8038ef94: // orphan
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         t1 = 0x8651 << 16
         t1 = [t1 - 0x2d18]       // t9
         at = , t1 < 0xa
         if                       // likely
         t2 = 0x8651 << 16

    loc_0x8038efb0: // orphan
         t2 = [t2 - 0x3a04]       // t9
         at = 0 + 5
         if                       // unlikely
         t3 = 0x8651 << 16

    loc_0x8038efbc: // orphan
         t3 = 0x8651 << 16

    loc_0x8038efc0: // orphan
         t3 = [t3 - 0x3b50]       // t9
         a3 = 0x8651 << 16
         a3 -= 0x2af8
         a0 = 0 + 0xe6
         a1 = 0 + 0x6e
         a2 = 0
         call 0x800495f8          // 0x800495f8(0xe6, 0x6e, 0x0, 0x8650d508)
         [sp + 0x10] = t3

    loc_0x8038efe0: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2af4
         a0 = 0 + 0x78
         a1 = 0 + 0x78
         call 0x800495f8          // 0x800495f8(0x78, 0x78, 0x8, 0x8650d50c)
         a2 = 0
         t4 = 0x8651 << 16
         t4 = [t4 - 0x2d18]       // t9
         at = , t4 < 0xa
         if                       // likely
         t5 = 0x8651 << 16

    loc_0x8038f00c: // orphan
         t5 = [t5 - 0x3a04]       // t9
         at = 0 + 6
         if                       // unlikely
         v0 = 0x8651 << 16

    loc_0x8038f018: // orphan
         v0 = 0x8651 << 16

    loc_0x8038f01c: // orphan
         v0 = [v0 - 0x3b40]       // t9
         a0 = 0 + 0xe6
         a1 = 0 + 0x78
         if                       // unlikely
         a2 = 0

    loc_0x8038f030: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 + 0xe6

    loc_0x8038f03c: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 0xe6

    loc_0x8038f048: // orphan
         goto 0x8038f094
         

    loc_0x8038f050: // orphan
         a3 = 0x8651 << 16
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0x86510000)
         a3 -= 0x2ae0
         goto 0x8038f094
         

    loc_0x8038f064: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2ad8
         a1 = 0 + 0x78
         call 0x800495f8          // 0x800495f8(-1, 0x78, 0x8, 0x8650d528)
         a2 = 0
         goto 0x8038f094
         

    loc_0x8038f080: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2ad0
         a1 = 0 + 0x78
         call 0x800495f8          // 0x800495f8(-1, 0x78, 0x8, 0x8650d530)
         a2 = 0

    loc_0x8038f094: // orphan
         // CODE XREFS from fcn.803742ac @ 0x8038f048, 0x8038f05c, 0x8038f078
         a3 = 0x8651 << 16
         a3 -= 0x2ac0
         a0 = 0 + 0x78
         a1 = 0 + 0x82
         call 0x800495f8          // 0x800495f8(0x78, 0x82, 0x8, 0x8650d540)
         a2 = 0
         t6 = 0x8651 << 16
         t6 = [t6 - 0x2d18]       // t9

    loc_0x8038f0b4: // orphan
         at = , t6 < 0xa          // lo
         if                       // unlikely
         t7 = 0x8651 << 16

    loc_0x8038f0c0: // orphan
         t7 = [t7 - 0x3a04]       // t9
         at = 0 + 7
         if                       // unlikely
         at = 0x8651 << 16

    loc_0x8038f0cc: // orphan
         at = 0x8651 << 16

    loc_0x8038f0d0: // orphan
         lwc1 f8, -0x3b0c, at
         a3 = 0x8651 << 16
         a3 -= 0x2aac             // arg4
         cvt.d.s f10, f8
         a0 = 0 + 0xe6            // arg1
         sdc1 f10, 0x10, sp
         a1 = 0 + 0x82            // arg2
         call 0x800495f8          // 0x800495f8(0xe6, 0x82, 0x8, 0x8650d554)
         a2 = 0

    loc_0x8038f0f4: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2aa4
         a0 = 0 + 0x78
         a1 = 0 + 0x8c
         call 0x800495f8          // 0x800495f8(0x78, 0x8c, 0x8, 0x8650d55c)
         a2 = 0
         t8 = 0x8651 << 16
         t8 = [t8 - 0x2d18]       // t9
         at = , t8 < 0xa
         if                       // likely
         t9 = 0x8651 << 16

    loc_0x8038f120: // orphan
         t9 = [t9 - 0x3a04]
         at = 0 + 8               // a2
         if                       // unlikely
         v0 = 0x8651 << 16

    loc_0x8038f12c: // orphan
         v0 = 0x8651 << 16

    loc_0x8038f130: // orphan
         v0 = [v0 - 0x3b90]       // t9
         a0 = 0 + 0xe6
         a1 = 0 + 0x8c
         if                       // unlikely
         a2 = 0

    loc_0x8038f144: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 + 0xe6

    loc_0x8038f150: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 0xe6

    loc_0x8038f15c: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 + 0xe6

    loc_0x8038f168: // orphan
         goto 0x8038f1d0
         

    loc_0x8038f170: // orphan
         a3 = 0x8651 << 16
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0x86510000)
         a3 -= 0x2a94
         goto 0x8038f1d0
         

    loc_0x8038f184: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2a88
         a1 = 0 + 0x8c
         call 0x800495f8          // 0x800495f8(-1, 0x8c, 0x8, 0x8650d578)
         a2 = 0
         goto 0x8038f1d0
         

    loc_0x8038f1a0: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2a78
         a1 = 0 + 0x8c
         call 0x800495f8          // 0x800495f8(-1, 0x8c, 0x8, 0x8650d588)
         a2 = 0
         goto 0x8038f1d0
         

    loc_0x8038f1bc: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2a6c

    loc_0x8038f1d0: // orphan
         // CODE XREFS from fcn.803742ac @ 0x8038f168, 0x8038f17c, 0x8038f198, 0x8038f1b4
         a3 = 0x8651 << 16
         a3 -= 0x2a60

    loc_0x8038f1d8: // orphan
         a0 = 0 + 0x78
         a1 = 0 + 0x96
         call 0x800495f8          // 0x800495f8(0x78, 0x96, 0x8, -1)
         a2 = 0
         t0 = 0x8651 << 16
         t0 = [t0 - 0x2d18]       // t9
         t1 = 0x8651 << 16
         t2 = 0x8651 << 16
         at = , t0 < 0xa
         if                       // likely
         

    loc_0x8038f204: // orphan
         t1 = [t1 - 0x3a04]       // t9
         at = 0 + 9
         if                       // unlikely
         

    loc_0x8038f214: // orphan
         t2 = [t2 - 0x3b10]       // t9
         at = 0 + 1               // lo
         a0 = 0 + 0xe6
         if                       // likely
         a1 = 0 + 0x96

    loc_0x8038f228: // orphan
         a3 = 0x8651 << 16

    loc_0x8038f22c: // orphan
         a3 -= 0x2a50
         a0 = 0 + 0xe6
         a1 = 0 + 0x96
         call 0x800495f8          // 0x800495f8(0xe6, 0x96, 0x8, 0xffffffffffffd5af)
         a2 = 0
         goto 0x8038f258
         

    loc_0x8038f248: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x2a44
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0x8650d5bc)
         a2 = 0

    loc_0x8038f258: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038f240
         a3 = 0x8651 << 16
         a3 -= 0x2a38
         a0 = 0 + 0x78
         a1 = 0 + 0xa0
         call 0x800495f8          // 0x800495f8(0x78, 0xa0, 0x8, 0x8650d5c8)
         a2 = 0
         t3 = 0x8651 << 16
         t3 = [t3 - 0x2d18]       // t9
         t4 = 0x8651 << 16
         t5 = 0x8651 << 16
         at = , t3 < 0xa
         if                       // likely
         

    loc_0x8038f28c: // orphan
         t4 = [t4 - 0x3a04]       // t9
         at = 0 + 0xa
         if                       // unlikely
         

    loc_0x8038f29c: // orphan
         t5 = [t5 - 0x3b00]       // t9
         a0 = 0 + 0xe6
         a1 = 0 + 0xa0
         if                       // likely
         a2 = 0

    loc_0x8038f2b0: // orphan
         at = 0x8651 << 16
         lwc1 f16, -0x3b08, at
         a3 = 0x8651 << 16
         a3 -= 0x2a24
         cvt.d.s f18, f16
         a0 = 0 + 0xe6
         sdc1 f18, 0x10, sp
         a1 = 0 + 0xa0
         call 0x800495f8          // 0x800495f8(0xe6, 0xa0, 0x8, 0x8650d5dc)
         a2 = 0
         goto 0x8038f2fc
         

    loc_0x8038f2e0: // orphan
         at = 0x8651 << 16
         lwc1 f4, -0x3b04, at
         a3 = 0x8651 << 16
         a3 -= 0x2a18
         cvt.d.s f6, f4
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0x8650d5e8)
         sdc1 f6, 0x10, sp

    loc_0x8038f2fc: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038f2d8
         a3 = 0x8651 << 16
         a3 -= 0x2a08
         a0 = 0 + 0x78
         a1 = 0 + 0xaa
         call 0x800495f8          // 0x800495f8(0x78, 0xaa, 0x8, 0x8650d5f8)
         a2 = 0
         t6 = 0x8651 << 16
         t6 = [t6 - 0x2d18]       // t9
         t7 = 0x8651 << 16
         t8 = 0x8651 << 16
         at = , t6 < 0xa
         if                       // likely
         

    loc_0x8038f330: // orphan
         t7 = [t7 - 0x3a04]       // t9
         at = 0 + 0xb
         if                       // unlikely
         

    loc_0x8038f340: // orphan
         t8 = [t8 - 0x3afc]       // t9
         a0 = 0 + 0xe6
         a1 = 0 + 0xaa

    loc_0x8038f34c: // orphan
         if                       // likely
         a2 = 0

    loc_0x8038f354: // orphan
         a3 = 0x8651 << 16
         a3 -= 0x29f4
         a0 = 0 + 0xe6
         a1 = 0 + 0xaa
         call 0x800495f8          // 0x800495f8(0xe6, 0xaa, 0x8, 0x8650d60c)
         a2 = 0
         goto 0x8038f380
         

    loc_0x8038f374: // orphan
         a3 = 0x8651 << 16
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0x86510000)
         a3 -= 0x29e8

    loc_0x8038f380: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038f36c
         a3 = 0x8651 << 16
         a3 -= 0x29dc
         a0 = 0 + 0x78
         a1 = 0 + 0xb4
         call 0x800495f8          // 0x800495f8(0x78, 0xb4, 0x8, 0x8650d624)
         a2 = 0
         t9 = 0x8651 << 16
         t9 = [t9 - 0x3b2c]
         a3 = 0x8651 << 16
         a3 -= 0x29cc
         a0 = 0 + 0xe6
         a1 = 0 + 0xb4
         a2 = 0
         call 0x800495f8          // 0x800495f8(0xe6, 0xb4, 0x0, 0x8650d634)
         [sp + 0x10] = t9
         call 0x80049b9c          // 0x80049b9c(0xe6, 0xb4, 0x0, 0x8650d634)
         
         call 0x800499ec          // 0x800499ec(0xe6, 0xb4, 0x0, 0x8650d634)
         
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x8038f428: // orphan
         t3 <<= 2
         t3 -= a2                 // arg3
         t4 = 0x8651 << 16
         t4 += 0x1698
         t3 <<= 3
         t1 = t3 + t4
         v0 = [t1 + 0x8c]         // t9
         a0 = 0 + 0x18e           // arg1
         a1 = 0
         at = , v0 < 0xa
         bnel at, 0, 0x8038f464   // unlikely
         t5 = v0 << 2

    loc_0x8038f458: // orphan
         [t1 + 0x8c] = 0
         v0 = 0
         t5 = v0 << 2

    loc_0x8038f464: // orphan
         at = 0x8651 << 16
         at += t5
         lwc1 f14, -0x2ce0, at
         [sp + 0x5c] = v0
         [sp + 0x68] = a2
         [sp + 0x38] = t1
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f14, 0x60, sp
         a0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x64] = v0
         a3 = 0x800d << 16
         a3 += 0x510
         v1 = [a3 + 0]
         t0 = [sp + 0x64]         // s4
         t1 = [sp + 0x38]
         t6 = v1 + 8
         lwc1 f14, 0x60, sp
         [a3 + 0] = t6
         t7 = 0xfa00 << 16
         [v1 + 0] = t7
         t8 = [sp + 0x5c]         // s4
         t2 = 0x8651 << 16
         t2 -= 0x2cb8
         t9 = t8 << 2
         t9 -= t8
         t9 <<= 2
         a0 = t9 + t2
         t3 = [a0 + 8]            // t9
         t7 = [a0 + 0]            // t9
         t2 = [a0 + 4]            // t9
         t4 = t3 & 0xff           // s4
         t5 = t4 << 8
         t8 = t7 << 0x18
         t3 = t2 & 0xff           // s4
         t4 = t3 << 0x10
         t9 = t5 | t8
         t6 = t9 | t4
         t7 = t6 | 0xff
         [v1 + 4] = t7
         v1 = [a3 + 0]
         t8 = 0xfb00 << 16

    loc_0x8038f7d0: // orphan
         t4 = [v1 + 8]            // t9
         t3 = t2 & 0xff           // s4
         t6 = t5 << 0x18
         t7 = t3 | t6
         t9 = t8 & 0xff           // s4
         t1 = t9 << 0x10
         t5 = t4 & 0xff           // s4
         t3 = t5 << 8

    loc_0x8038f7f0: // orphan
         t2 = t7 | t1
         t6 = t2 | t3
         [v0 + 4] = t6
         v0 = [s7 + 0]
         t0 = 0xfb00 << 16
         s1 = 0
         t8 = v0 + 8              // a2

    loc_0x8038f80c: // orphan
         [s7 + 0] = t8
         [v0 + 0] = t0
         t9 = [v1 + 0x18]
         t6 = [v1 + 0x14]         // t9
         t5 = [v1 + 0x10]

    loc_0x8038f820: // orphan
         t7 = t9 & 0xff           // s4
         t1 = t7 << 8
         t8 = t6 & 0xff
         t2 = t5 << 0x18
         t3 = t1 | t2
         t9 = t8 << 0x10

    loc_0x8038f838: // orphan
         t7 = t3 | t9
         t4 = t7 | 0xff           // t9
         [v0 + 4] = t4
         t5 = [sp + 0xcc]
         t3 = [sp + 0xc8]
         t7 = 0x8651 << 16
         if                       // likely
         t9 = t3 << 2

    loc_0x8038f858: // orphan
         t1 = [sp + 0xc8]
         t6 = 0x8651 << 16
         t6 += 0x1698
         t2 = t1 << 2
         t2 += t1
         t2 <<= 2
         t2 -= t1
         t2 <<= 3
         t8 = t2 + t6
         [sp + 0x84] = t8
         goto 0x8038f8a8
         fp = [t8 + 0x18]         // t9

    loc_0x8038f888: // orphan
         t9 += t3

    loc_0x8038f88c: // orphan
         t9 <<= 2
         t9 -= t3

    loc_0x8038f894: // orphan
         t9 <<= 3
         t7 += 0x1698
         t4 = t9 + t7
         [sp + 0x84] = t4
         fp = [t4 + 8]            // t9

    loc_0x8038f8a8: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038f880
         t5 = [sp + 0x84]
         at = 0xbf00 << 16
         a2 = 0 - 1               // arg3 // s2
         t1 = [t5 + 0x80]         // t9
         bgezl t1, 0x8038ff3c     // likely
         mtc1 at, f26

    loc_0x8038f8c0: // orphan
         t2 = [sp + 0xcc]
         a1 = 0 + 1               // arg2 // lo
         bnel t2, a1, 0x8038ff3c  // likely
         mtc1 at, f26

    loc_0x8038f8d0: // orphan
         v0 = [s7 + 0]            // t9
         a0 = 0 + 0x1ad           // arg1
         a1 = 0x8651 << 16
         t6 = v0 + 8
         [s7 + 0] = t6
         [v0 + 0] = a3
         t7 = [s2 + 0x70]         // t9
         t8 = [s2 + 0x7c]         // t9
         t1 = [s2 + 0x74]         // t9
         t9 = [s2 + 0x78]
         t4 = t7 << 0x18
         t3 = t8 & 0xff           // s4
         t5 = t3 | t4
         t2 = t1 & 0xff           // s4

    loc_0x8038f908: // orphan
         t6 = t2 << 0x10
         t7 = t9 & 0xff           // s4
         t3 = t7 << 8
         t8 = t5 | t6             // t9
         t4 = t8 | t3             // t9
         [v0 + 4] = t4
         v0 = [s7 + 0]            // t9
         t1 = v0 + 8
         [s7 + 0] = t1
         [v0 + 0] = t0
         t2 = [s2 + 0x88]         // t9
         t4 = [s2 + 0x84]         // t9
         t7 = [s2 + 0x80]         // t9
         t5 = t2 & 0xff           // s4
         t6 = t5 << 8
         t1 = t4 & 0xff           // s4
         t8 = t7 << 0x18
         t3 = t6 | t8
         t2 = t1 << 0x10
         t5 = t3 | t2
         t9 = t5 | 0xff
         [v0 + 4] = t9
         t7 = [sp + 0x84]
         t6 = [t7 + 0x80]         // t9
         s6 = [t7 + 0x44]         // t9
         at = , t6 < -5
         if                       // likely
         

    loc_0x8038f978: // orphan
         a1 = 0x8651 << 16
         a1 = [a1 - 0x3bd4]       // arg2 // t9
         call 0x8004c990          // 0x8004c990(-1, -1, 0x8, -1)

    loc_0x8038f984: // orphan
         a0 = 0 + 0x1ad
         s0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0x1ad, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         t8 = , unsigned  halfword [s0 + 0]
         mtc1 0, f20
         at = 0x8651 << 16
         mtc1 t8, f4
         lwc1 f22, -0x2788, at
         if                       // likely
         cvt.s.w f6, f4

    loc_0x8038f9b0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x8038f9c0: // orphan
         mul.s f14, f6, f22
         t1 = [sp + 0xc8]
         t2 = 0x8651 << 16
         s1 = s6 << 0x10

    loc_0x8038f9d0: // orphan
         s1 = , signed  s1 >> 0x10
         t2 -= 0x2d14
         s2 = 0x8651 << 16
         c.lt.s f20, f14
         t3 = t1 << 2
         v0 = t3 + t2
         s2 -= 0x2d04
         bc1f 0x8038fa0c
         a1 = s1 << 0x10
         at = 0x3f00 << 16
         mtc1 at, f24
         at = 0xbf00 << 16
         mtc1 at, f26
         goto 0x8038fa20
         mov.s f12, f24

    loc_0x8038fa20: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fa04
         t4 = , unsigned  halfword [s0 + 2]
         a1 = , signed  a1 >> 0x10
         add.s f4, f12, f14

    loc_0x8038fa2c: // orphan
         mtc1 t4, f10
         t8 = 0 + 0x704
         if                       // likely
         cvt.s.w f16, f10

    loc_0x8038fa3c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x8038fa4c: // orphan
         mul.s f2, f16, f22
         t4 = 0 + 0x704
         c.lt.s f20, f2
         
         bc1fl 0x8038fa70
         mov.s f0, f26
         goto 0x8038fa70
         mov.s f0, f24

    loc_0x8038fa70: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fa64
         add.s f6, f0, f2
         t5 = [s2 + 0]            // t9
         t9 = [v0 + 0]
         trunc.w.s f8, f4
         [sp + 0x10] = 0
         a0 = t5 + t9
         trunc.w.s f10, f6
         mfc1 a2, f8
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         mfc1 a3, f10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x14] = 0
         [sp + 0x18] = t8
         [sp + 0x1c] = t4
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff6407, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x78] = v0
         a1 = 0x8651 << 16
         a1 = [a1 - 0x3bf8]       // t9
         call 0x8004c990          // 0x8004c990(0xffff6407, -1, 0x8, -1)
         a0 = 0 + 0x1ad
         s0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0x1ad, -1, 0x8, -1)
         a0 = v0                  // s4
         t1 = , unsigned  halfword [s0 + 0]
         a1 = s1 << 0x10
         a1 = , signed  a1 >> 0x10

    loc_0x8038faec: // orphan
         mtc1 t1, f18
         t5 = [sp + 0x78]         // s4
         if                       // likely
         cvt.s.w f16, f18

    loc_0x8038fafc: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         

    loc_0x8038fb08: // orphan
         add.s f16, f16, f4

    loc_0x8038fb0c: // orphan
         mul.s f14, f16, f22
         t8 = 0 + 0x704
         t4 = 0 + 0x704
         c.lt.s f20, f14
         
         bc1fl 0x8038fb34
         mov.s f12, f26
         goto 0x8038fb34
         mov.s f12, f24

    loc_0x8038fb34: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fb28
         t3 = , unsigned  halfword [s0 + 2]
         add.s f18, f12, f14
         at = 0x4f80 << 16
         mtc1 t3, f8
         if                       // likely
         cvt.s.w f6, f8

    loc_0x8038fb4c: // orphan
         mtc1 at, f10

    loc_0x8038fb50: // orphan
         
         add.s f6, f6, f10

    loc_0x8038fb58: // orphan
         mul.s f2, f6, f22
         c.lt.s f20, f2
         
         bc1fl 0x8038fb78
         mov.s f0, f26
         goto 0x8038fb78
         mov.s f0, f24

    loc_0x8038fb78: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fb6c
         add.s f16, f0, f2
         t2 = [s2 + 4]            // t9
         t9 = [t5 + 0]
         trunc.w.s f4, f18

    loc_0x8038fb88: // orphan
         [sp + 0x20] = 0
         a0 = t2 + t9
         trunc.w.s f8, f16
         mfc1 a2, f4
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         mfc1 a3, f8
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x1c] = t4
         [sp + 0x18] = t8
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xffff00fe, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         a1 = 0x8651 << 16
         a1 = [a1 - 0x3bfc]       // t9
         call 0x8004c990          // 0x8004c990(0xffff00fe, -1, 0x8, -1)
         a0 = 0 + 0x1ad
         s0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0x1ad, -1, 0x8, -1)
         a0 = v0                  // s4
         t1 = , unsigned  halfword [s0 + 0]
         a1 = s1 << 0x10
         a1 = , signed  a1 >> 0x10
         mtc1 t1, f10
         t2 = [sp + 0x78]         // s4
         if                       // likely
         cvt.s.w f6, f10

    loc_0x8038fc00: // orphan
         at = 0x4f80 << 16

    loc_0x8038fc04: // orphan
         mtc1 at, f18
         
         add.s f6, f6, f18

    loc_0x8038fc10: // orphan
         mul.s f14, f6, f22
         t8 = 0 + 0x704
         t4 = 0 + 0x704
         at = 0x4f80 << 16
         c.lt.s f20, f14
         
         bc1fl 0x8038fc3c
         mov.s f12, f26
         goto 0x8038fc3c
         mov.s f12, f24

    loc_0x8038fc3c: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fc30
         t3 = , unsigned  halfword [s0 + 2]
         add.s f10, f12, f14
         mtc1 t3, f4
         if                       // likely
         cvt.s.w f16, f4

    loc_0x8038fcd4: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a1 - 0x3bd4]       // t9
         s0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(-1, -1, 0x8, -1)
         a0 = v0                  // s4
         t1 = , unsigned  halfword [s0 + 0]
         mtc1 0, f20
         at = 0x8651 << 16
         mtc1 t1, f8
         lwc1 f22, -0x2784, at
         if                       // likely
         cvt.s.w f16, f8

    loc_0x8038fd04: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f16, f16, f10

    loc_0x8038fd14: // orphan
         mul.s f14, f16, f22
         t2 = [sp + 0xc8]
         t9 = 0x8651 << 16
         s1 = s6 << 0x10
         s1 = , signed  s1 >> 0x10

    loc_0x8038fd28: // orphan
         t9 -= 0x2d14
         s2 = 0x8651 << 16
         c.lt.s f20, f14
         t5 = t2 << 2
         v0 = t5 + t9
         s2 -= 0x2d04
         bc1f 0x8038fd60
         a1 = s1 << 0x10
         at = 0x3f00 << 16
         mtc1 at, f24
         at = 0xbf00 << 16
         mtc1 at, f26
         goto 0x8038fd74
         mov.s f12, f24

    loc_0x8038fd74: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fd58
         t3 = , unsigned  halfword [s0 + 2]
         a1 = , signed  a1 >> 0x10
         add.s f8, f12, f14
         mtc1 t3, f18
         t1 = 0 + 0x704
         if                       // likely
         cvt.s.w f6, f18

    loc_0x8038fd90: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         
         add.s f6, f6, f4

    loc_0x8038fda0: // orphan
         mul.s f2, f6, f22
         t3 = 0 + 0x704
         c.lt.s f20, f2
         
         bc1fl 0x8038fdc4
         mov.s f0, f26
         goto 0x8038fdc4
         mov.s f0, f24

    loc_0x8038fdc4: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fdb8
         add.s f16, f0, f2
         t7 = [s2 + 0x10]
         t6 = [v0 + 0]
         trunc.w.s f10, f8
         [sp + 0x10] = 0
         a0 = t7 + t6
         trunc.w.s f18, f16
         mfc1 a2, f10
         a0 <<= 0x10

    loc_0x8038fde8: // orphan
         a0 = , signed  a0 >> 0x10 // t9
         mfc1 a3, f18
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x14] = 0
         [sp + 0x18] = t1
         [sp + 0x1c] = t3
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x78] = v0
         t2 = [sp + 0x84]
         a1 = 0x8651 << 16
         a0 = 0 + 0x1ad
         t5 = [t2 + 0x80]         // t9
         t9 = ~t5
         t7 = t9 << 2
         a1 += t7
         call 0x8004c990          // 0x8004c990(0x1ad, 0xfffffffc86510004, 0x8, -1)
         a1 = [a1 - 0x3bfc]       // t9
         s0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0x1ad, -1, 0x8, -1)
         a0 = v0                  // s4
         t6 = , unsigned  halfword [s0 + 0]
         a1 = s1 << 0x10
         a1 = , signed  a1 >> 0x10
         mtc1 t6, f4
         t1 = [sp + 0x78]         // s4
         if                       // likely
         cvt.s.w f6, f4

    loc_0x8038fe64: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x8038fe74: // orphan
         mul.s f14, f6, f22
         t9 = 0 + 0x704
         t7 = 0 + 0x704
         at = 0x4f80 << 16
         c.lt.s f20, f14
         
         bc1fl 0x8038fea0
         mov.s f12, f26
         goto 0x8038fea0
         mov.s f12, f24

    loc_0x8038fea0: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fe94
         t8 = , unsigned  halfword [s0 + 2]
         add.s f4, f12, f14
         mtc1 t8, f10
         if                       // likely
         cvt.s.w f16, f10

    loc_0x8038feb4: // orphan
         mtc1 at, f18

    loc_0x8038feb8: // orphan
         
         add.s f16, f16, f18

    loc_0x8038fec0: // orphan
         mul.s f2, f16, f22
         c.lt.s f20, f2
         
         bc1fl 0x8038fee0
         mov.s f0, f26
         goto 0x8038fee0
         mov.s f0, f24

    loc_0x8038fee0: // orphan
         // CODE XREF from fcn.803742ac @ 0x8038fed4
         add.s f6, f0, f2
         t4 = [s2 + 0x14]         // t9
         t3 = [t1 + 0]
         trunc.w.s f8, f4
         [sp + 0x20] = 0
         a0 = t4 + t3
         trunc.w.s f10, f6
         mfc1 a2, f8
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         mfc1 a3, f10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10

    loc_0x8038ff14: // orphan
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x1c] = t7
         [sp + 0x18] = t9
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         goto 0x80390370          // fcn.803902e8+0x88
         ra = [sp + 0x74]

    loc_0x8038ff3c: // orphan
         at = 0x3f00 << 16
         mtc1 at, f24
         at = 0x8651 << 16
         mtc1 0, f20
         a1 = 0 + 1               // arg2 // lo
         lwc1 f22, -0x2780, at
         t6 = [sp + 0x84]

    loc_0x80390da0: // orphan
         s5 -= 0x13a0
         s4 -= 0x191c
         s3 -= 0x24d8
         s2 += 0x1698
         s0 -= 0x1940
         lwc1 f20, -0x2744, at
         s1 = 0

    loc_0x80390dbc: // orphan
         // CODE XREF from fcn.803742ac @ 0x80390e98
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s3 + 0]
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x0, -1, 0xfe116408)

    loc_0x80390dd8: // orphan
         a1 = 0
         a0 = s0
         call 0x8003eb74          // 0x8003eb74(0x104, 0x0, 0x8, -1)
         a1 = 2 << 16
         call 0x8007afa0          // 0x8007afa0(0x104, 0x20000, 0x8, -1)
         
         at = 0 + 0xf
         div 0, v0, at

    loc_0x80390df8: // orphan
         a1 = hi
         a1 += 0xf
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003eb84          // 0x8003eb84(-1, 0xd, 0x8, -1)
         a0 = s0
         a0 = s0
         call 0x8003ef48          // 0x8003ef48(0x104, 0xd, 0x8, -1)
         a1 = 0
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x0, 0x8, -1)
         a1 = 0
         a0 = s4
         call 0x87f06430          // 0x87f06430(0xff, 0x0, 0x8, -1)
         a1 = s1
         swc1 f20, 0x38, s0
         swc1 f20, 0x34, s0
         swc1 f20, 0x30, s0
         swc1 f22, 0x28, s0
         halfword [s0 + 0x1e] = 0
         [s2 + 0xc] = 0
         [s2 + 0x10] = 0
         call 0x8003f1dc          // 0x8003f1dc(0xff, 0x442f71dcfe117dbd, 0x8, -1)
         a0 = s5                  // t9
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe117dbd, 0x8, -1)
         a0 = s6
         halfword [s0 + 0x20] = 0

    loc_0x80390e64: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s7                  // t9
         call 0x8003f1dc          // "&1" // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = fp
         s1 += 1
         at = 0 + 4
         s0 += 0x168
         s3 += 4
         s4 += 0x168
         s2 += 0x98
         s5 += 0x168
         s6 += 0x168
         s7 += 0x168
         if                       // likely
         fp += 0x168

    loc_0x80390ea0: // orphan
         a0 = 0x8651 << 16
         call fcn.819006a0        // "\n"
         a0 = [a0 + 0x18f8]       // t9
         call 0x86502958          // 0x86502958(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x4c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         s0 = [sp + 0x28]         // t9
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]         // t9
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         s5 = [sp + 0x3c]
         s6 = [sp + 0x40]         // a2
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret
         sp += 0x50

    loc_0x803910dc: // orphan
         t2 <<= 2
         t2 -= s0
         t2 <<= 2
         t2 += s0
         t3 = 0x8651 << 16
         t3 -= 0x1940
         t2 <<= 3
         a0 = t2 + t3             // arg1
         [sp + 0x20] = a0
         call 0x8003ec34          // 0x8003ec34(0x86514de0, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v1
         at = 0 + 1               // lo
         v1 = [sp + 0x24]
         if                       // likely
         a0 = [sp + 0x20]

    loc_0x80391118: // orphan
         a1 = 0 + 1               // lo
         call 0x8003f210          // 0x8003f210(-1, 0x1, 0x8, -1)
         [sp + 0x24] = v1
         v1 = [sp + 0x24]
         [v1 + 0x10] = 0

    loc_0x8039112c: // orphan
         // CODE XREF from fcn.80387818 @ 0x803910d0
         // CODE XREF from fcn.803742ac @ 0x80391110
         ra = [sp + 0x1c]

    loc_0x80391130: // orphan
         // CODE XREF from fcn.803af8c8 @ 0x80391074
         s0 = [sp + 0x18]         // t9
         sp += 0x30
         ret                      // ra
         

    loc_0x80391158: // orphan
         [sp + 0x18] = s1
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s0
         at = 0 + 1               // lo
         if                       // likely
         s1 = 0

    loc_0x80391170: // orphan
         s3 = 0x8651 << 16
         s0 = 0x8651 << 16
         s4 = 0x8651 << 16
         s2 = 0x8651 << 16
         s5 = 0x8651 << 16
         s5 += 0x18f8
         s2 += 0x1698
         s4 -= 0x24d8
         s0 -= 0x1ee0
         s3 -= 0x1940
         s1 = 0 + 0xf

    loc_0x8039119c: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391238
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         a0 = s0
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x104, 0x0, -1, -1)
         a3 = [s4 + 0]
         a0 = s0
         call 0x8003ef48          // 0x8003ef48(0x104, 0x0, -1, 0xfe116408)
         a1 = 0
         a0 = s0
         call 0x8003f3bc          // 0x8003f3bc(0x104, 0x0, -1, 0xfe116408)
         a1 = 0
         a0 = s0
         call 0x8003f210          // 0x8003f210(0x104, 0x0, -1, 0xfe116408)

    loc_0x803911d8: // orphan
         a1 = 0
         call 0x8007afa0          // 0x8007afa0(-1, 0x0, 0x8, -1)
         
         div 0, v0, s1
         a1 = hi
         a1 += 0xf
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = s0
         if                       // likely
         

    loc_0x80391204: // orphan
         break 7

    loc_0x80391208: // orphan
         // CODE XREF from fcn.803742ac @ 0x803911fc
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80391214: // orphan
         if                       // likely
         

    loc_0x8039121c: // orphan
         break 6

    loc_0x80391220: // orphan
         // CODE XREFS from fcn.803742ac @ 0x8039120c, 0x80391214
         call 0x8003eb84          // "&R" // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s2 += 0x98
         s3 += 0x168
         s0 += 0x168
         s4 += 4
         if                       // likely
         [s2 - 0x8c] = 0

    loc_0x80391240: // orphan
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x14
         call 0x87f00688          // 0x87f00688(0x14, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = 0 + 6
         at = 0x8651 << 16
         goto 0x803912a0
         [at - 0x3a14] = t6

    loc_0x80391260: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391168
         s2 = 0x8651 << 16
         s2 += 0x1698
         s3 = 0 + 4
         s0 = 0 + 0x37

    loc_0x80391270: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391298
         t7 = [s2 + 0x88]         // t9
         if                       // likely
         

    loc_0x8039127c: // orphan
         call 0x8650863c          // 0x8650863c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         goto 0x80391298
         s1 += 1

    loc_0x8039128c: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391274
         call 0x86508780          // "&1" // 0x86508780(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         s1 += 1

    loc_0x80391298: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391284
         if                       // likely
         s2 += 0x98

    loc_0x803912a0: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391258
         ra = [sp + 0x2c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]         // v1
         s5 = [sp + 0x28]         // t9
         ret
         sp += 0x30

    loc_0x803916a4: // orphan
         v0 = 0x8651 << 16
         v0 -= 0x3b0c
         lwc1 f10
         at = 0x8651 << 16
         ldc1 f18, -0x2710, at
         cvt.d.s f16, f10
         add.d f4, f16, f18
         cvt.s.d f6, f4
         goto 0x803918e0
         swc1 f6

    loc_0x8039172c: // orphan
         t0 -= 0x3a20
         if                       // unlikely
         t3 = v0 & 2

    loc_0x80391738: // orphan
         if                       // likely
         

    loc_0x80391740: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391730
         t4 = [t0 + 0x1c]         // t9
         t1 = 0 + 1               // lo
         t5 = t4 - 1
         at = , unsigned  , t5 < 0xb
         if                       // likely
         t5 <<= 2

    loc_0x80391758: // orphan
         at = 0x8651 << 16
         at += t5
         t5 = [at - 0x2708]       // t9
         goto t5                  // t9
         

    loc_0x80391840: // orphan
         t2 = t9 - 1
         at = , t2 < 2
         if                       // likely
         [v0 + 0] = t2

    loc_0x80391850: // orphan
         goto 0x803918e0
         [v0 + 0] = t4

    loc_0x803918e0: // orphan
         // XREFS(37)
         t0 = 0x8651 << 16
         t0 -= 0x3a20
         t8 = [t0 + 0x1c]         // t9
         a0 = 0x8651 << 16
         at = 0 + 0xa
         if                       // likely
         a0 = [a0 - 0x3b40]       // arg1 // t9

    loc_0x803918fc: // orphan
         v0 = , unsigned  halfword [a2 + 6]
         t2 = 0x8651 << 16
         t9 = v0 & 0x8000
         if                       // likely
         

    loc_0x80391910: // orphan
         t2 = [t2 - 0x3b00]       // t9

    loc_0x80391914: // orphan
         v1 = 0x8651 << 16
         v1 -= 0x3b08
         if                       // likely
         

    loc_0x80391924: // orphan
         lwc1 f8
         at = 0x8651 << 16
         ldc1 f0, -0x26c8, at
         cvt.d.s f10, f8
         add.d f16, f10, f0
         cvt.s.d f18, f16
         swc1 f18
         goto 0x80391970
         v0 = , unsigned  halfword [a2 + 6]

    loc_0x80391948: // orphan
         // CODE XREF from fcn.803742ac @ 0x8039191c
         a1 = 0x8651 << 16
         a1 -= 0x3b04             // arg2
         lwc1 f4                  // arg2
         at = 0x8651 << 16
         ldc1 f0, -0x26c0, at
         cvt.d.s f6, f4
         add.d f8, f6, f0
         cvt.s.d f10, f8
         swc1 f10                 // arg2
         v0 = , unsigned  halfword [a2 + 6]

    loc_0x80391970: // orphan
         // CODE XREFS from fcn.803742ac @ 0x80391908, 0x80391940
         v1 = 0x8651 << 16
         a1 = 0x8651 << 16
         at = 0x8651 << 16
         t3 = v0 & 0x4000
         ldc1 f0, -0x26b8, at
         a1 -= 0x3b04             // arg2
         if                       // likely
         v1 -= 0x3b08

    loc_0x80391990: // orphan
         t4 = 0x8651 << 16
         t4 = [t4 - 0x3b00]       // t9
         bnel t4, 0, 0x803919bc   // likely
         lwc1 f8                  // arg2

    loc_0x803919a0: // orphan
         lwc1 f16
         cvt.d.s f18, f16
         sub.d f4, f18, f0
         cvt.s.d f6, f4
         goto 0x803919cc
         swc1 f6

    loc_0x803919bc: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391998
         cvt.d.s f10, f8
         sub.d f16, f10, f0

    loc_0x803919c4: // orphan
         cvt.s.d f18, f16
         swc1 f18                 // arg2

    loc_0x803919cc: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803918f4, 0x80391988, 0x803919b0
         if                       // unlikely
         

    loc_0x803919d4: // orphan
         v0 = , unsigned  halfword [a2 + 6]
         t1 = 0 + 1               // lo
         t5 = v0 & 8

    loc_0x803919e0: // orphan
         beql t5, 0, 0x80391a2c   // unlikely
         t7 = v0 & 4

    loc_0x803919e8: // orphan
         v0 = 0x8651 << 16
         v0 -= 0x3b84
         at = 0x40a0 << 16
         mtc1 at, f0
         lwc1 f4
         t6 = 0x8651 << 16
         add.s f6, f4, f0
         swc1 f6
         t6 = [t6 - 0x262c]       // t9
         at = , t6 < 2
         if                       // likely
         

    loc_0x80391a18: // orphan
         lwc1 f8

    loc_0x80391a1c: // orphan
         sub.s f10, f8, f0
         goto 0x80391ba8
         swc1 f10

    loc_0x80391a2c: // orphan
         // CODE XREF from fcn.803742ac @ 0x803919e0
         if                       // likely
         t8 = v0 & 0x8000

    loc_0x80391a34: // orphan
         v0 = 0x8651 << 16
         v0 -= 0x3b84
         at = 0x40a0 << 16
         mtc1 at, f0
         lwc1 f16
         at = 0xc3fa << 16
         mtc1 at, f2
         sub.s f18, f16, f0
         swc1 f18
         lwc1 f4
         c.lt.s f4, f2
         
         bc1f 0x80391ba8
         
         goto 0x80391ba8
         swc1 f2

    loc_0x80391a74: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391a2c
         if                       // unlikely
         t9 = v0 & 0x4000

    loc_0x80391a7c: // orphan
         at = 0xc4fa << 16

    loc_0x80391a80: // orphan
         mtc1 at, f0
         at = 0x4120 << 16
         mtc1 at, f8
         lwc1 f6, 0x2c, t0
         sub.s f10, f6, f8
         swc1 f10, 0x2c, t0
         lwc1 f16, 0x2c, t0
         c.lt.s f16, f0
         
         bc1f 0x80391ba8
         
         goto 0x80391ba8
         swc1 f0, 0x2c, t0

    loc_0x80391ab4: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391a74
         if                       // unlikely
         t2 = v0 & 1              // lo

    loc_0x80391abc: // orphan
         at = 0x8651 << 16
         lwc1 f0, -0x26b0, at
         at = 0x4120 << 16
         mtc1 at, f4
         lwc1 f18, 0x2c, t0
         add.s f6, f18, f4
         swc1 f6, 0x2c, t0
         lwc1 f8, 0x2c, t0
         c.lt.s f0, f8
         
         bc1f 0x80391ba8
         

    loc_0x80391aec: // orphan
         goto 0x80391ba8
         swc1 f0, 0x2c, t0

    loc_0x80391af4: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391ab4
         if                       // unlikely
         v1 = 0x8651 << 16

    loc_0x80391b04: // orphan
         lwc1 f16, -0x26ac, at
         lwc1 f10
         add.s f18, f10, f16
         goto 0x80391ba8
         swc1 f18

    loc_0x80391ba8: // orphan
         // XREFS: CODE 0x803919cc  CODE 0x80391a10  CODE 0x80391a20  
         // XREFS: CODE 0x80391a6c  CODE 0x80391aac  CODE 0x80391aec  
         // XREFS: CODE 0x80391b10  CODE 0x80391b38  CODE 0x80391b48  
         beql t1, 0, 0x80391bbc   // unlikely
         ra = [sp + 0x2c]

    loc_0x80391bac: // orphan
         // XREFS: CODE 0x803919cc  CODE 0x80391a10  CODE 0x80391a20  
         // XREFS: CODE 0x80391a6c  CODE 0x80391aac  CODE 0x80391aec  
         // XREFS: CODE 0x80391b10  CODE 0x80391b38  CODE 0x80391b48  
         beql t1, 0, 0x80391bbc   // unlikely
         ra = [sp + 0x2c]

    loc_0x80391bb0: // orphan
         call 0x86502524          // 0x86502524(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x2c]

    loc_0x80391bbc: // orphan
         // CODE XREF from fcn.803742ac @ 0x80391ba8
         sp += 0x38
         ret                      // ra
         

    loc_0x80391fb8: // orphan
         
         t7 = v0 - t6
         [a0 + 0] = t7            // arg1
         v0 = t7

    loc_0x80391fc8: // orphan
         // CODE XREF from fcn.803af8c8 @ 0x80391f64
         if                       // likely
         a0 = 0x8651 << 16

    loc_0x80391fd0: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x2c0
         v1 = [s2 + 8]
         goto 0x80392014
         t0 = 0 + 1               // lo

    loc_0x80392014: // orphan
         // XREFS: CODE 0x80391e38  CODE 0x80391e44  CODE 0x80391e6c  
         // XREFS: CODE 0x80391e7c  CODE 0x80391f50  CODE 0x80391fc8  
         // XREFS: CODE 0x80391fdc  CODE 0x80392000  
         if                       // likely
         a2 = 0 + 2               // arg3

    loc_0x8039201c: // orphan
         t8 = [s0 + 0]            // t9
         bnel t8, 0, 0x80392198   // likely
         a0 = [s2 + 4]            // t9

    loc_0x803920d4: // orphan
         [s2 + 0x14] = t6

    loc_0x803920d8: // orphan
         [s2 + 0x34] = 0
         [s2 + 0x50] = 0
         v0 = [s0 + 8]

    loc_0x803920e4: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392128
         s0 += 0x98
         if                       // unlikely
         at = , v0 < 0xe

    loc_0x803920f0: // orphan
         t8 = [s2 + 0x50]
         if                       // unlikely
         

    loc_0x803920fc: // orphan
         [s2 + 0x50] = t0

    loc_0x80392100: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803920e8, 0x803920f4
         if                       // likely
         

    loc_0x80392108: // orphan
         t9 = [s2 + 0x50]
         at = , t9 < 2
         if                       // likely
         

    loc_0x80392118: // orphan
         [s2 + 0x50] = a2

    loc_0x8039211c: // orphan
         // CODE XREFS from fcn.803742ac @ 0x80392100, 0x80392110
         if                       // likely
         

    loc_0x80392124: // orphan
         [s2 + 0x50] = a1

    loc_0x80392128: // orphan
         // CODE XREF from fcn.803742ac @ 0x8039211c
         bnel s0, a0, 0x803920e4  // likely
         v0 = [s0 + 8]

    loc_0x80392130: // orphan
         v1 = [s2 + 0x50]
         at = 0 + 1               // lo
         t0 = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x80392144: // orphan
         if                       // unlikely
         a0 = 0 + 0x1e09          // arg1

    loc_0x8039214c: // orphan
         if                       // unlikely
         a0 = 0 + 0x1d08          // arg1

    loc_0x80392154: // orphan
         if                       // unlikely
         a0 = 0 + 0x1c07          // arg1

    loc_0x8039215c: // orphan
         goto 0x80392194
         t0 = 0 + 1               // lo

    loc_0x80392164: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392154
         call 0x80027774          // 0x80027774(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x8c
         goto 0x80392194
         t0 = 0 + 1               // lo

    loc_0x80392174: // orphan
         // CODE XREF from fcn.803742ac @ 0x8039214c
         call 0x80027774          // 0x80027774(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x8c
         goto 0x80392194
         t0 = 0 + 1               // lo

    loc_0x80392184: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392144
         call 0x80027774          // 0x80027774(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x8c
         goto 0x80392194
         t0 = 0 + 1               // lo

    loc_0x80392194: // orphan
         // XREFS: CODE 0x80392014  CODE 0x803920d0  CODE 0x8039213c  
         // XREFS: CODE 0x8039215c  CODE 0x8039216c  CODE 0x8039217c  
         // XREFS: CODE 0x8039218c  
         a0 = [s2 + 4]            // t9
         // CODE XREF from fcn.803742ac @ 0x80392020
         at = 0 + 0x50
         bnel a0, at, 0x80392274  // likely
         v0 = [s2 + 0x30]         // t9

    loc_0x803921a4: // orphan
         [s2 + 0x30] = t0
         t3 = 0x8651 << 16
         t3 = [t3 + 0x16a0]       // t9
         t5 = 0x8651 << 16
         t7 = 0x8651 << 16
         if                       // likely
         t9 = 0x8651 << 16

    loc_0x803921c0: // orphan
         t4 = 0 - 0xa
         at = 0x8651 << 16
         // CODE XREF from fcn.823582f8 @ +0x9ac
         [at + 0x1718] = t4

    loc_0x803921cc: // orphan
         // CODE XREF from fcn.803742ac @ 0x803921b8
         at = 0x3e80 << 16
         mtc1 at, f0
         at = 0x8651 << 16

    loc_0x803921d8: // orphan
         t5 = [t5 + 0x1738]       // t9
         swc1 f0, -0x1eb0, at
         at = 0x8651 << 16
         swc1 f0, -0x1ea8, at
         at = 0x8651 << 16
         if                       // likely
         swc1 f0, -0x1eac, at

    loc_0x803921f4: // orphan
         t6 = 0 - 0xa
         at = 0x8651 << 16
         [at + 0x17b0] = t6

    loc_0x80392200: // orphan
         // CODE XREF from fcn.803742ac @ 0x803921ec
         at = 0x8651 << 16
         swc1 f0, -0x1d48, at
         t7 = [t7 + 0x17d0]       // t9
         at = 0x8651 << 16
         swc1 f0, -0x1d40, at
         at = 0x8651 << 16
         if                       // likely
         swc1 f0, -0x1d44, at

    loc_0x80392220: // orphan
         t8 = 0 - 0xa

    loc_0x80392224: // orphan
         at = 0x8651 << 16
         [at + 0x1848] = t8

    loc_0x8039222c: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392218
         at = 0x8651 << 16
         swc1 f0, -0x1be0, at
         t9 = [t9 + 0x1868]
         at = 0x8651 << 16

    loc_0x8039223c: // orphan
         swc1 f0, -0x1bd8, at
         at = 0x8651 << 16
         if                       // likely
         swc1 f0, -0x1bdc, at

    loc_0x8039224c: // orphan
         t3 = 0 - 0xa
         at = 0x8651 << 16
         [at + 0x18e0] = t3

    loc_0x80392258: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392244
         at = 0x8651 << 16
         swc1 f0, -0x1a78, at
         at = 0x8651 << 16
         swc1 f0, -0x1a70, at

    loc_0x80392268: // orphan
         at = 0x8651 << 16
         swc1 f0, -0x1a74, at
         v0 = [s2 + 0x30]

    loc_0x80392274: // orphan
         // CODE XREF from fcn.803742ac @ 0x8039219c
         t4 = 0 + 0x2710
         [sp + 0x58] = t4

    loc_0x8039227c: // orphan
         if                       // unlikely
         at = 0 + 5

    loc_0x80392284: // orphan
         if                       // unlikely
         s0 = 0x8651 << 16

    loc_0x8039228c: // orphan
         at = 0 + 6
         if                       // unlikely
         t6 = 0x8651 << 16

    loc_0x80392298: // orphan
         goto 0x803923a8
         t5 = [sp + 0x58]

    loc_0x803922a0: // orphan
         // CODE XREF from fcn.803742ac @ 0x8039227c
         s0 = 0x8651 << 16

    loc_0x803922a4: // orphan
         s1 = 0x8651 << 16
         s1 -= 0x24c8
         s0 += 0x10f0
         a0 = s0

    loc_0x803922b4: // orphan
         // CODE XREF from fcn.803742ac @ 0x803922d0
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [s1 + 0]            // t9
         t5 = 0x8651 << 16
         t5 += 0x1690
         s0 += 0x168
         bnel s0, t5, 0x803922b4  // likely
         a0 = s0

    loc_0x803922d8: // orphan
         goto 0x803923a4
         a0 = [s2 + 4]            // t9

    loc_0x803922e0: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392290
         t6 = [t6 - 0x3b38]       // t9

    loc_0x803922e4: // orphan
         s0 = 0x8651 << 16
         s0 += 0x1698
         if                       // likely
         t4 = 0 + 4

    loc_0x803922f4: // orphan
         v1 = 0x8651 << 16
         v1 += 0x18f8
         v0 = [s0 + 8]

    loc_0x80392300: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392318
         s0 += 0x98
         at = , s1 < v0
         beql at, 0, 0x80392318   // likely
         at = , unsigned  , s0 < v1 // lo

    loc_0x80392310: // orphan
         s1 = v0                  // s4

    loc_0x80392314: // orphan
         at = , unsigned  , s0 < v1 // lo

    loc_0x80392318: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392308
         bnel at, 0, 0x80392300   // likely
         v0 = [s0 + 8]

    loc_0x80392320: // orphan
         at = 0x8651 << 16
         [at + 0x16a8] = t0
         at = 0x8651 << 16
         t7 = 0 + 6
         [at + 0x16a4] = t7
         at = 0x8651 << 16
         [at + 0x1740] = t0
         at = 0x8651 << 16
         t8 = 0 + 6
         [at + 0x173c] = t8
         at = 0x8651 << 16
         [at + 0x17d8] = t0
         at = 0x8651 << 16
         t9 = 0 + 6

    loc_0x80392358: // orphan
         [at + 0x17d4] = t9
         at = 0x8651 << 16
         [at + 0x1870] = t0
         at = 0x8651 << 16
         t3 = 0 + 6
         [at + 0x186c] = t3

    loc_0x80392370: // orphan
         // CODE XREF from fcn.803742ac @ 0x803922ec
         goto 0x803923a4
         [s2 + 0x30] = t4

    loc_0x80392378: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392284
         s1 = 0x8651 << 16
         s1 += 0x1690
         s0 += 0x10f0

    loc_0x80392384: // orphan
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 0x168
         if                       // likely
         

    loc_0x80392398: // orphan
         [s2 + 0x50] = 0
         [sp + 0x58] = 0
         a0 = [s2 + 4]            // t9

    loc_0x803923a4: // orphan
         // CODE XREFS from fcn.803742ac @ 0x803922d8, 0x80392370
         t5 = [sp + 0x58]

    loc_0x803923a8: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392298
         t6 = t5 + 0x50
         at = , t6 < a0
         if                       // likely
         t7 = 0x8651 << 16

    loc_0x803923b8: // orphan
         t7 = [t7 - 0x3b54]       // t9
         mtc1 0, f8
         at = 0x8651 << 16
         mtc1 t7, f6
         v0 = 0x8651 << 16
         t8 = 0 - 2               // hi

    loc_0x803923d0: // orphan
         cvt.s.w f18, f6
         v0 += 0x19a0
         s0 = 0x8651 << 16
         t2 = 0x8651 << 16
         t1 = 0x8651 << 16
         t0 = 0x8651 << 16
         swc1 f18, 0x1690, at
         at = 0x8651 << 16
         swc1 f8, -0x2ed4, at
         t9 = [s2 + 0]
         [s2 + 8] = t8
         t0 += 0x5b0
         t3 = t9 + 1
         [s2 + 0] = t3
         t1 -= 0xe00
         t2 -= 0x1ee0
         s0 += 0x1698
         [sp + 0x38] = v0
         s1 = 0
         [sp + 0x3c] = 0

    loc_0x80392420: // orphan
         v0 = [sp + 0x38]
         mtc1 0, f10
         [sp + 0x2c] = t0
         [sp + 0x30] = t1
         [sp + 0x40] = t2
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10
         at = 0 + 0xb
         divu 0, v0, at
         v1 = hi
         at = , v1 < 6            // lo
         t0 = [sp + 0x2c]
         t1 = [sp + 0x30]
         if                       // likely
         t2 = [sp + 0x40]         // s4

    loc_0x8039245c: // orphan
         t4 = v1 << 8
         if                       // likely
         t5 = , signed  t4 >> 1

    loc_0x80392468: // orphan
         at = t4 + 1
         t5 = , signed  at >> 1

    loc_0x80392470: // orphan
         goto 0x80392494
         halfword [t1 + 0x1e] = t5

    loc_0x80392478: // orphan
         at = ~v1
         t6 = at << 8
         if                       // unlikely
         t7 = , signed  t6 >> 1

    loc_0x80392488: // orphan
         at = t6 + 1
         t7 = , signed  at >> 1

    loc_0x80392490: // orphan
         halfword [t1 + 0x1e] = t7

    loc_0x80392494: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392470
         t8 = v1 & 1
         if                       // unlikely
         at = ~v1

    loc_0x803924a0: // orphan
         t9 = v1 << 5
         goto 0x803924b4
         halfword [t1 + 0x22] = t9

    loc_0x803924ac: // orphan
         t3 = at << 5             // k0
         halfword [t1 + 0x22] = t3

    loc_0x803924b4: // orphan
         // CODE XREF from fcn.803742ac @ 0x803924a4
         at = 0x4220 << 16
         mtc1 at, f4
         t4 = [s0 + 0]            // t9
         lwc1 f16, 0x24, t2
         lwc1 f6, 0x30, t1
         lwc1 f18, 0x34, t1
         lwc1 f8, 0x38, t1
         at = 0 - 1               // s2
         [s0 + 0x34] = 0
         [s0 + 0x30] = 0
         halfword [t0 + 0x18a] = 0
         halfword [t0 + 0x186] = 0
         swc1 f4, 0x194, t0
         swc1 f16, 0x18c, t0
         swc1 f6, 0x198, t0
         swc1 f18, 0x19c, t0
         if                       // unlikely
         swc1 f8, 0x1a0, t0

    loc_0x803924fc: // orphan
         t5 = 0 - 1               // s2
         [s0 + 0] = t5

    loc_0x80392504: // orphan
         t6 = [s0 + 0x40]         // t9
         t5 = 0x8651 << 16
         t3 = 0x8651 << 16
         if                       // likely
         t5 -= 0x2480

    loc_0x80392518: // orphan
         t7 = [s0 + 0x18]         // t9
         t8 = [s0 + 8]
         t9 = t7 + t8
         [s0 + 0x18] = t9

    loc_0x80392528: // orphan
         t3 = [t3 - 0x3b50]       // t9
         t4 = [s2 + 0]            // t9
         a0 = s1 + t5
         a1 = 0
         if                       // likely
         a2 = 0 - 1               // s2

    loc_0x80392540: // orphan
         t6 = [sp + 0x3c]
         t7 = 0x8651 << 16
         t7 -= 0x860
         a3 = 0x8651 << 16
         t8 = s1 + t7
         a3 += t6
         a3 = [a3 - 0x24c0]       // t9
         [sp + 0x34] = t8
         [sp + 0x2c] = t0
         [sp + 0x30] = t1
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x40] = t2
         a3 = 0x8651 << 16
         a3 = [a3 - 0x2490]       // t9
         a0 = [sp + 0x34]
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x8462755d, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         t0 = [sp + 0x2c]
         t1 = [sp + 0x30]
         t2 = [sp + 0x40]         // s4

    loc_0x80392594: // orphan
         t9 = [sp + 0x3c]
         t4 = [sp + 0x38]
         t6 = 0x8651 << 16
         t6 += 0x10f0
         t0 += 0x2d0
         t3 = t9 + 4
         t5 = t4 + 4
         [sp + 0x38] = t5
         [sp + 0x3c] = t3
         s0 += 0x98
         s1 += 0x168
         t2 += 0x168
         if                       // likely
         t1 += 0x168

    loc_0x803925cc: // orphan
         call 0x86502720          // 0x86502720(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = 0x8651 << 16
         t7 = [t7 - 0x3b50]       // t9
         t8 = [s2 + 0]            // t9

    loc_0x803925e0: // orphan
         t4 = 0 + 1               // lo
         a0 = 0 + 0x1b06
         if                       // likely
         a1 = 0 + 0x8c

    loc_0x803925f0: // orphan
         call 0x86502b88          // 0x86502b88(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0xc448 << 16
         mtc1 at, f10
         at = 0x8651 << 16
         t9 = 0 + 9
         t3 = 0 - 3
         swc1 f10, 0x1690, at
         [s2 + 0xc] = t9
         goto 0x80392624
         [s2 + 8] = t3

    loc_0x8039261c: // orphan
         call 0x80027774          // 0x80027774(-1, 0x442f71dcfe116408, 0x8, -1)
         [s2 + 0x38] = t4

    loc_0x80392624: // orphan
         // CODE XREF from fcn.803742ac @ 0x80392614
         ra = [sp + 0x24]         // v1
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret                      // v1
         sp += 0x68

}

*/
