/*
 * Function: 0x80526720
 * Category: math
 */

// Decompiled C code
int fcn.804fc430 (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.804fc430 (int esi, int edx) {
    loc_0x804fc430:
        // CALL XREF from fcn.8019c2fc @ +0x2bc
        if            // fcn.80508710+0x13b34 // unlikely
        if            // fcn.80508710+0x13c38 // unlikely
        // chop
            
    loc_0x8051c348:
        // CODE XREF from fcn.80508710 @ 0x804fc434
        if            // unlikely
        if            // unlikely
        // chop
            
    loc_0x8051eb90:
        // CODE XREF from fcn.80508710 @ 0x8051c34c
        call 0x80060ec8 // 0x80060ec8(-1, 0x442f71dcfe116408, 0x8, -1)
        byte [a1 + 4] = t9
        a0 = s0 + 0x34
        call 0x800625e0 // 0x800625e0(0x138, 0x442f71dcfe116408, 0x8, -1)
        a1 = , unsigned  byte [s0 + 0] // s4
        t0 = , unsigned  byte [s1 + 0] // s4
        t2 = , unsigned  halfword [s1 + 0xc]
        t3 = , unsigned  halfword [s3 + 0]
        t1 = t0 + 1
        t6 = t1 & 0xff
        t4 = t2 + t3
        t5 = t4 & 0xffff
        div 0, t5, t6
        s2 += 1
        t7 = lo
        s0 += 0x58
        byte [s1 + 0] = t1
        // chop
         // do {
    loc_0x8051ebd4:
        // CODE XREF from fcn.804ff7b4 @ 0x8051c350
        halfword [s1 + 0xc] = t4
        if            // likely
        0x8051ebdc
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x8051f844: // orphan
             if                       // fcn.80508710+0x18618 // unlikely

    loc_0x8051f850: // orphan
         if                       // fcn.80508710+0x18664 // unlikely

    loc_0x8051f85c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f868: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f874: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f880: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f88c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f8f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f904: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f910: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80508710 @ 0x8051c3cc
         if                       // unlikely

    loc_0x8051f91c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f934: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f94c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f97c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f988: // orphan
         // CODE XREF from fcn.80508710 @ 0x8051c3d0
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fc94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fcac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fe9c: // orphan
         if                       // fcn.80508710+0x1dfe0 // unlikely

    loc_0x8051fea8: // orphan
         if                       // unlikely

    loc_0x8051feb4: // orphan
         if                       // fcn.805059b0+0x20de8 // unlikely

    loc_0x8051fec0: // orphan
         if                       // fcn.80508710+0x1e114 // unlikely

    loc_0x8051fecc: // orphan
         if                       // fcn.80508710+0x1e190 // unlikely

    loc_0x8051fed8: // orphan
         if                       // fcn.80508710+0x1e23c // unlikely

    loc_0x8051fee4: // orphan
         if                       // fcn.80508710+0x1e298 // unlikely

    loc_0x8051fef0: // orphan
         if                       // fcn.805059b0+0x21594 // unlikely

    loc_0x8051fefc: // orphan
         if                       // fcn.805059b0+0x21630 // unlikely

    loc_0x8051ff08: // orphan
         if                       // unlikely

    loc_0x8051ff14: // orphan
         if                       // fcn.80508710+0x1f0c8 // unlikely

    loc_0x8051ff20: // orphan
         if                       // fcn.805059b0+0x21dc4 // unlikely

    loc_0x8051ff2c: // orphan
         if                       // fcn.80508710+0x1f1d0 // unlikely

    loc_0x8051ff38: // orphan
         if                       // fcn.80508710+0x1f2dc // unlikely

    loc_0x8051ff44: // orphan
         if                       // fcn.80508710+0x1f8a8 // unlikely

    loc_0x8051ff50: // orphan
         if                       // fcn.80508710+0x1fd84 // unlikely

    loc_0x8051ff5c: // orphan
         if                       // fcn.80508710+0x1ffe0 // unlikely

    loc_0x8051ff68: // orphan
         if                       // fcn.805059b0+0x22ecc // unlikely

    loc_0x80520eb8: // orphan
         a1 = fcn.82d00000 << 16
         a1 += 0x7428
         v0 = , unsigned  halfword [a1 + 4]

    loc_0x80520ec4: // orphan
         a3 = , unsigned  halfword [a1 + 2]
         [sp + 0x34] = ra
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3

    loc_0x80520f04: // orphan
         a0 = byte [a1 + 0xf]     // arg2 // s4
         t6 = v1 - v0
         at = , a0 < 2            // arg1
         if                       // likely
         t8 = a0 - 1              // arg1 // t3

    loc_0x80521830: // orphan
         v0 += 0x3830
         t7 = byte [v0 + 2]       // s4
         t0 = 0 + 5
         t8 = t7 - 1              // t3

    loc_0x80521d7c: // orphan
         a2 = 0
         a0 = 0 + 2
         a1 = 0 + 2
         call fcn.82d06b34
         a2 = 0

    loc_0x805220d4: // orphan
         v0 += 0x3830
         [sp + 0x14] = ra
         a0 = 0x82d2 << 16
         a0 += 0x3831
         a1 = , unsigned  byte [v0 + 4] // s4
         a2 = , unsigned  byte [v0 + 5] // s4
         call fcn.82d001c0
         a3 = 0 + 0xff            // s4
         v0 = 0x82d2 << 16
         v0 = , unsigned  halfword [v0 + 0x3d88]
         t6 = v0 & 0x8000
         if                       // likely
         t7 = v0 & 0x4000

    loc_0x80522108: // orphan
         call fcn.82d01aac
         
         goto 0x8052212c
         ra = [sp + 0x14]

    loc_0x80522118: // orphan
         beql t7, 0, 0x8052212c   // likely
         ra = [sp + 0x14]

    loc_0x80522120: // orphan
         call fcn.82d01d68        // fcn.82d01d68(-1)
         
         ra = [sp + 0x14]

    loc_0x8052212c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80522110
         sp += 0x18
         ret                      // ra
         

    loc_0x80522690: // orphan
         t6 = [at + 0x72c4]       // t9
         goto t6                  // t9
         

    loc_0x80522978: // orphan
         

    loc_0x80522a10: // orphan
         

    loc_0x80522a7c: // orphan
         v0 = [v0 + 0x7200]       // t9
         at = 0x82d2 << 16
         t7 = , unsigned  halfword [v0 + 6]
         halfword [at + 0x3d86] = t7
         t8 = , unsigned  halfword [v0 + 8]
         at = 0x82d2 << 16
         halfword [at + 0x3d88] = t8
         t9 = , unsigned  halfword [v0 + 0xc]
         at = 0x82d2 << 16

    loc_0x805243c4: // orphan
         t4 = [s2 + 0x100]        // t9
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0 + 0xff            // arg3 // s4
         // CODE XREF from fcn.804ff7b4 @ 0x8051c5a8
         t7 = t4 << 5
         if                       // unlikely
         a3 = 0 + 0x80            // arg4

    loc_0x80524568: // orphan
         a1 = halfword [sp + 0xbc]
         a0 = [sp + 0x40]
         a2 = 0 + 2
         a3 = s0
         call 0x80049064          // 0x80049064(0x0, 0x0, 0x2, 0x104)
         a1 += 0x3e
         t5 = byte [s2 + 1]       // s4
         at = 0 + 2
         bnel t5, at, 0x805245b4  // likely
         a0 = 0 + 0xff            // s4

    loc_0x80524788: // orphan
         // CODE XREF from fcn.80508710 @ 0x80524750
         at = 0 + 4
         a0 = 0 + 0xff            // s4
         if                       // likely
         a1 = 0 + 0xff            // s4

    loc_0x80524918: // orphan
         t8 <<= 2
         t8 += t7
         t8 <<= 1
         t5 = 0 + 0x96
         t3 = 0 + 0x96

    loc_0x80526658: // orphan
         t0 += v0
         t8 = t7 | 1              // lo
         t1 = t9 - t0
         byte [a0 + 0xa] = t8
         halfword [a0 + 0x14] = t1
         t2 = , unsigned  byte [v1 + 0] // s4
         t3 = t2 - 1
         at = , v0 < t3
         if                       // likely
         

    loc_0x80526680: // orphan
         v1 = halfword [a0 + 0x14]
         at = fcn.82d00000 << 16
         if                       // unlikely
         

    loc_0x80526690: // orphan
         at = fcn.82d00000 << 16
         halfword [at + 0x719c] = v1
         goto 0x805266a8
         v0 = , unsigned  byte [a0 + 0xc] // s4

    loc_0x805266a0: // orphan
         halfword [at + 0x719c] = 0
         v0 = , unsigned  byte [a0 + 0xc] // s4

    loc_0x805266a8: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80526698
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x805266b0: // orphan
         beql v0, at, 0x805266dc  // fcn.80508710+0x1dfcc // unlikely
         a0 = 0

    loc_0x805266b8: // orphan
         goto 0x805266fc          // fcn.80508710+0x1dfec
         ra = [sp + 0x14]

    loc_0x805266c0: // orphan
         v0 = fcn.82d00000 << 16
         v0 += 0x6fb4
         t4 = , unsigned  byte [v0 + 0x14a]
         t5 = t4 & 0xfffe
         goto 0x805266f8          // fcn.80508710+0x1dfe8
         byte [v0 + 0x14a] = t5

    loc_0x80526704: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805266b8
         sp += 0x18
         ret                      // ra
         // CODE XREF from fcn.805059b0 @ 0x8051c640
         

    loc_0x80526724: // orphan
         t7 = , unsigned  byte [a0 + 0xa] // lo
         t9 = halfword [a0 + 2]
         t5 = halfword [a0 + 0x18]
         t8 = t7 | 1              // lo
         byte [a0 + 0xa] = t8
         t0 = , unsigned  byte [v1 + 0] // s4
         a1 = fcn.82d00000 << 16
         a1 += 0x7198
         t1 = t0 - v0
         t2 = t1 << 2

    loc_0x8052674c: // orphan
         t2 -= t1
         t2 <<= 2
         t2 -= t1
         t2 <<= 2
         t2 += t1

    loc_0x80526760: // orphan
         t3 = t9 - t2
         halfword [a0 + 0x14] = t3
         t4 = halfword [a0 + 0x14]
         t8 = 0 + 0x280
         t6 = t4 + t5
         halfword [a1 + 0] = t6
         t7 = , unsigned  byte [a0 + 0xc] // s4
         if                       // fcn.80508710+0x1e07c // likely
         

    loc_0x805267ac: // orphan
         at = , unsigned  , t7 < 5 // lo
         if                       // fcn.80508710+0x1e104 // unlikely
         t7 <<= 2

    loc_0x805267b8: // orphan
         at = fcn.82d00000 << 16
         at += t7                 // fcn.82d00000
         t7 = [at + 0x7394]
         goto t7
         

    loc_0x80527234: // orphan
         
         

    loc_0x8052777c: // orphan
         if                       // fcn.805059b0+0x237e0 // unlikely
         if                       // unlikely

    loc_0x80527788: // orphan
         // CODE XREF from fcn.80508710 @ 0x8051c6b0
         if                       // unlikely
         if                       // unlikely

    loc_0x80527794: // orphan
         if                       // unlikely
         

    loc_0x805277c0: // orphan
         if                       // fcn.80508710+0x21144 // unlikely

    loc_0x80527974: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80527980: // orphan
         if                       // fcn.804fc430+0x2fe80 // unlikely
         if                       // unlikely

    loc_0x8052798c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80527a10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80527a1c: // orphan
         if                       // fcn.804fc430+0x308dc // unlikely
         if                       // unlikely

    loc_0x8052822c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8052823c: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x80528254: // orphan
         
         if                       // unlikely
         

    loc_0x80528260: // orphan
         if                       // fcn.80534504-0x30 // unlikely
         

    loc_0x80528268: // orphan
         if                       // unlikely
         

    loc_0x80528270: // orphan
         if                       // unlikely
         

    loc_0x80528278: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x805282c8: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x805282e4: // orphan
         if                       // unlikely
         

    loc_0x805282ec: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x805282fc: // orphan
         if                       // fcn.80536c0c+0x4 // unlikely
         if                       // unlikely

    loc_0x80528308: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80528318: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528324: // orphan
         if                       // unlikely
         

    loc_0x8052832c: // orphan
         

    loc_0x80528794: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805287a0: // orphan
         if                       // fcn.8053f8bc+0x8 // unlikely
         if                       // unlikely

    loc_0x805287ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805287b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805287c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805287d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805287dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528890: // orphan
         // CODE XREF from fcn.805445d4 @ +0x330
         if                       // unlikely
         if                       // unlikely

    loc_0x8052889c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.805445d4 @ +0x32c
         if                       // unlikely

    loc_0x80528908: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528914: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528920: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052892c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528938: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528950: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052895c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528968: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528974: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528980: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052898c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805291b4: // orphan
         t5 = 0 + 0x3e0
         t6 = 0 + 0x400
         [sp + 0x18] = t6
         [sp + 0x14] = t5

    loc_0x805291c4: // orphan
         // CODE XREF from fcn.80508710 @ 0x8051c710
         a0 = halfword [sp + 0x32]
         a1 = halfword [sp + 0x3a]
         a2 = 0 + 0x10
         a3 = halfword [sp + 0x36]
         [sp + 0x10] = 0

    loc_0x8052c29c: // orphan
         a0 = [sp + 0x18]
         a1 = v0                  // s4
         call 0x8000b580          // 0x8000b580(0x400, 0xff, 0x8, -1)
         a0 += 0x54
         v1 = 0 + 1               // lo
         // CODE XREFS from fcn.80508710 @ 0x460, 0x468, 0x470, 0x8052c26c
         ra = [sp + 0x14]
         // CODE XREF from fcn.8052bda8 @ +0x478
         sp += 0x18
         v0 = v1                  // lo
         ret
         

    loc_0x8052c368: // orphan
         goto t7
         

    loc_0x8052c448: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x15
         a0 = s0 + 0x54
         call 0x8000b580          // 0x8000b580(0x158, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0                  // s4
         goto 0x8052c47c
         ra = [sp + 0x1c]

    loc_0x8052c47c: // orphan
         // CODE XREFS from fcn.804fc430 @ 0x5f8, 0x630, 0x668, 0x8052c45c
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x8052ccf8: // orphan
         a0 = [sp + 0x18]
         a1 = v0                  // s4
         call 0x8000b580          // 0x8000b580(0x400, 0xff, 0x8, -1)
         a0 += 4
         a0 = 0 + 0x15
         call 0x8004c874          // 0x8004c874(0x15, 0xff, 0x8, -1)
         a1 = 0 + 0x3a
         a0 = [sp + 0x18]
         a1 = v0                  // s4
         call 0x8000b580          // 0x8000b580(0x400, 0xff, 0x8, -1)
         a0 += 0x54
         goto 0x8052cd68          // fcn.80508710+0x24658
         v1 = 0 + 1               // lo

    loc_0x80533aa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533ab4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533ac0: // orphan
         if                       // unlikely

    loc_0x8053409c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x8053416c
         a1 = s0 & 0xff
         a0 = , unsigned  byte [s4 + 0]
         call 0x800643cc          // "P@" // 0x800643cc(0xff, 0x4, 0x8, -1)
         a2 = , unsigned  byte [s4 + 0x1d]
         beql v0, 0, 0x80534168   // unlikely
         s1 += 1

    loc_0x805340b4: // orphan
         call 0x84400020          // 0x84400020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff
         if                       // unlikely
         a0 = s0 & 0xff

    loc_0x805340c4: // orphan
         at = 0 + 0x20            // k0
         if                       // unlikely
         at = 0 + 0x40

    loc_0x805340d0: // orphan
         if                       // unlikely
         at = 0 + 0x60

    loc_0x805340d8: // orphan
         if                       // unlikely
         a0 = s2

    loc_0x805340e0: // orphan
         at = 0 + 0x80
         if                       // unlikely
         

    loc_0x805340ec: // orphan
         goto 0x80534168
         s1 += 1

    loc_0x805340f4: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805340c8
         if                       // likely
         a0 = s2

    loc_0x805340fc: // orphan
         a0 = s0 & 0xff
         call 0x844003e4          // 0x844003e4(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = s3                  // t9
         goto 0x80534168
         s1 += 1

    loc_0x80534110: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805340f4
         call 0x84400098          // 0x84400098(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff
         goto 0x80534168
         s1 += 1

    loc_0x80534120: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805340d0
         if                       // unlikely
         a0 = s2

    loc_0x80534128: // orphan
         a0 = s0 & 0xff           // arg1
         call 0x844003e4          // 0x844003e4(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = s3                  // t9
         goto 0x80534168
         s1 += 1

    loc_0x8053413c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80534120
         call 0x84400098          // 0x84400098(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff
         goto 0x80534168
         s1 += 1

    loc_0x8053414c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805340bc
         call 0x844003e4          // 0x844003e4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s3                  // t9
         goto 0x80534168
         s1 += 1

    loc_0x8053415c: // orphan
         // CODE XREFS from fcn.804fc430 @ 0x805340d8, 0x805340e4
         call 0x84400098          // "&1" // 0x84400098(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff
         s1 += 1

    loc_0x80534168: // orphan
         // XREFS: CODE 0x805340ac  CODE 0x805340ec  CODE 0x80534108  
         // XREFS: CODE 0x80534118  CODE 0x80534134  CODE 0x80534144  
         // XREFS: CODE 0x80534154  
         at = , s1 < 0xfc
         bnel at, 0, 0x8053409c   // unlikely
         s0 = s1 & 0xff

    loc_0x80534174: // orphan
         a0 = 0x8440 << 16
         call 0x84400338          // 0x84400338(0x84400000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0xf38
         if                       // unlikely
         a0 = 0x8440 << 16

    loc_0x80534188: // orphan
         call 0x844000c4          // 0x844000c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0xf38
         v1 = v0                  // s4
         goto 0x805341ac
         s1 = v0                  // s4

    loc_0x8053419c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80534180
         call 0x844000c4          // 0x844000c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         v1 = v0                  // s4
         s1 = v0                  // s4

    loc_0x805341ac: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80534194
         if                       // unlikely
         s0 = s1 & 0xff

    loc_0x805341b4: // orphan
         call 0x84400058          // 0x84400058(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff
         if                       // unlikely
         a0 = 0x8440 << 16

    loc_0x805341c4: // orphan
         t6 = 0x8440 << 16
         t6 = [t6 + 0xf30]        // t9
         t7 = v0 & 0xff           // s4
         t8 = 0 + 1               // lo
         t9 = t8 << t7
         at = 0x8440 << 16
         t0 = t6 | t9
         // CODE XREF from fcn.805392f0 @ +0x1ff0
         [at + 0xf30] = t0

    loc_0x805341e4: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805341bc
         a0 += 0x1138
         call 0x84400098          // 0x84400098(0x100001137, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff

    loc_0x805341f0: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805341ac
         ra = [sp + 0x2c]         // t9
         v0 = s1 & 0xff
         s1 = [sp + 0x18]
         s0 = [sp + 0x14]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]         // t9
         s5 = [sp + 0x28]         // s4
         ret                      // t9
         sp += 0x30

    loc_0x8053438c: // orphan
         lwr t2, 3, t0            // t9
         a0 = s0
         swl t2, 0x40, s0
         swr t2, 0x43, s0
         t2 = , unsigned  byte [t0 + 4] // s4
         byte [s0 + 0x44] = t2
         t1 = , unsigned  byte [t0 + 5] // s4
         byte [s0 + 0x45] = t1
         t2 = , unsigned  byte [t0 + 6] // s4
         call 0x800619e8          // 0x800619e8(0x104, 0x442f71dcfe116408, 0x8, -1)
         byte [s0 + 0x46] = t2
         call 0x80061f44          // 0x80061f44(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         t3 = , unsigned  byte [s0 + 0] // s4
         at = 0 + 0x19
         bnel t3, at, 0x805343f4  // likely
         ra = [sp + 0x1c]

    loc_0x805343d0: // orphan
         call 0x8003570c          // "0L" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t4 = v0 & 3
         bnel t4, 0, 0x805343f4   // likely
         ra = [sp + 0x1c]

    loc_0x805343e4: // orphan
         t5 = , unsigned  byte [s0 + 0x1e] // s4
         t6 = t5 | 2              // s4
         byte [s0 + 0x1e] = t6
         ra = [sp + 0x1c]

    loc_0x805343f4: // orphan
         // CODE XREFS from fcn.804fc430 @ 0x805343c8, 0x805343dc
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         

    loc_0x8053464c: // orphan
         
         
         
         
         

    loc_0x80534874: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x80535a14: // orphan
         // CODE XREF from fcn.805392f0 @ +0x21a0
         swl t4, 0x10, s0
         swr t4, 0x13, s0
         t6 = [t9 + 4]
         s0 += 0x10
         swl t6, 4, s0
         swr t6, 7, s0
         t4 = [t9 + 8]
         swl t4, 8, s0
         swr t4, 0xb, s0
         t6 = [t9 + 0xc]
         t9 = fcn.81b00000 << 16
         t9 += 0x1068
         swl t6, 0xc, s0
         swr t6, 0xf, s0
         t1 = , unsigned  byte [sp + 0x2f] // s4
         beql t1, 0, 0x80535a74   // unlikely
         t0 = [sp + 0x34]         // ra

    loc_0x80535a58: // orphan
         t2 = , unsigned  byte [s0 + 0xa] // s4
         t8 = , unsigned  byte [s0 + 0xb] // s4
         t7 = t2 + 0x78
         t3 = t8 + 0xf
         byte [s0 + 0xa] = t7
         byte [s0 + 0xb] = t3
         t0 = [sp + 0x34]         // ra

    loc_0x80535a74: // orphan
         t1 = s1
         t2 = t9 + 0x24
         t5 = , unsigned  byte [t0 + 7] // s4
         beql t5, 0, 0x80535afc   // unlikely
         ra = [sp + 0x24]         // t9

    loc_0x80535a88: // orphan
         t4 = [t9 + 0]
         t9 += 0xc                // t1
         t1 += 0xc
         swl t4, -0xc, t1
         swr t4, -9, t1
         t6 = [t9 - 8]
         swl t6, -8, t1

    loc_0x80535aa4: // orphan
         swr t6, -5, t1
         t4 = [t9 - 4]
         swl t4, -4, t1
         if                       // likely
         swr t4, -1, t1

    loc_0x80535ab8: // orphan
         t4 = [t9 + 0]
         a0 = 0 + 0xf3            // arg1
         swl t4
         swr t4, 3, t1
         call 0x80064a7c          // 0x80064a7c(0xf3, 0x442f71dcfe116408, 0x8, -1)
         byte [s1 + 1] = s2
         byte [s1 + 2] = v0
         t7 = [sp + 0x34]         // ra
         call fcn.81b00764
         a0 = , unsigned  byte [t7 + 7]
         t8 = , unsigned  byte [s1 + 6] // s4
         t3 = t8 & 0xf8
         t0 = v0 + t3
         byte [s1 + 6] = t0
         t5 = , unsigned  byte [sp + 0x2e] // s4
         byte [s0 + 0] = t5
         ra = [sp + 0x24]         // t9

    loc_0x80535afc: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret                      // ra
         sp += 0x38

    loc_0x80536190: // orphan
         // CODE XREFS from fcn.805336c4 @ 0x805360d4, 0x805360dc, 0x805360f0, 0x80536138
         ra = [sp + 0x14]
         sp += 0x18
         v0 = v1
         ret
         

    loc_0x805361ac: // orphan
         t6 = v0 & 0xff           // s4
         at = , unsigned  , t6 < 0x24
         if                       // likely
         

    loc_0x805361bc: // orphan
         call 0x8003570c          // "0O" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = v0 & 0xff           // s4
         at = , unsigned  , t7 < 0x48
         if                       // likely
         

    loc_0x805361d4: // orphan
         call 0x8003570c          // "0X" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t8 = v0 & 0xff           // s4
         at = , unsigned  , t8 < 0x48
         if                       // likely
         v1 = , unsigned  byte [sp + 0x1b]

    loc_0x805361ec: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = v0                  // s4
         v1 &= 0xff               // s4
         at = , v1 < 0x4d
         if                       // likely
         t9 = , unsigned  byte [sp + 0x23]

    loc_0x80536208: // orphan
         if                       // unlikely
         

    loc_0x80536210: // orphan
         goto 0x805362f0
         v1 = 0 + 0x22

    loc_0x80536218: // orphan
         goto 0x805362f0
         v1 = 0 + 0x24

    loc_0x80536220: // orphan
         at = , v1 < 0x9a
         if                       // likely
         t0 = , unsigned  byte [sp + 0x1b]

    loc_0x8053622c: // orphan
         goto 0x805362f0
         v1 = 0 + 0x24

    loc_0x80536234: // orphan
         t1 = t0 & 0x80
         if                       // likely
         

    loc_0x80536240: // orphan
         goto 0x805362f0
         v1 = 0 + 0x21

    loc_0x80536248: // orphan
         goto 0x805362f0
         v1 = 0 + 0x20            // k0

    loc_0x80536250: // orphan
         v1 = , signed  v1 >> 4
         v1 &= 7
         v1 += 0x18
         goto 0x805362f0
         // CODE XREF from fcn.80534504 @ +0x5d8
         v1 &= 0xff

    loc_0x80536264: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         t2 = , unsigned  byte [sp + 0x1b]
         a0 &= 3
         a0 &= 0xff
         t3 = 0 + 1               // lo
         t4 = t3 << a0            // a2
         t5 = t2 & t4
         if                       // likely
         t6 = a0 << 1

    loc_0x80536290: // orphan
         goto 0x8053629c
         v0 = 0 + 1               // lo

    loc_0x80536298: // orphan
         v0 = 0

    loc_0x8053629c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80536290
         v1 = t6 + v0
         v1 += 0x10

    loc_0x805362a4: // orphan
         // CODE XREF from fcn.80534504 @ +0x5dc
         v1 &= 0xff               // k0
         goto 0x805362f4
         ra = [sp + 0x14]

    loc_0x805362b0: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         t7 = , unsigned  byte [sp + 0x1f]
         a0 &= 7
         a0 &= 0xff

    loc_0x805362c8: // orphan
         t8 = 0 + 1               // lo
         t9 = t8 << a0
         t0 = t7 & t9
         if                       // likely
         t1 = a0 << 1

    loc_0x805362dc: // orphan
         goto 0x805362e8
         v0 = 0 + 1               // lo

    loc_0x805362e4: // orphan
         v0 = 0

    loc_0x805362e8: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805362dc
         v1 = t1 + v0
         v1 &= 0xff

    loc_0x805362f0: // orphan
         // XREFS: CODE 0x80536210  CODE 0x80536218  CODE 0x8053622c  
         // XREFS: CODE 0x80536240  CODE 0x80536248  CODE 0x8053625c  
         ra = [sp + 0x14]

    loc_0x805362f4: // orphan
         // CODE XREF from fcn.804fc430 @ 0x805362a8
         sp += 0x18
         v0 = v1
         ret                      // ra
         

    loc_0x80536488: // orphan
         s0 = , unsigned  halfword [s0 + 0x8ea]
         a0 = [sp + 0x20]
         call 0x8005f7b8          // 0x8005f7b8(0x0, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80534504 @ +0x5fc
         byte [sp + 0x2f] = a1
         call 0x81c00020          // 0x81c00020(0x0, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.805336c4 @ +0x44
         a0 = , unsigned  byte [sp + 0x2f] // a2
         a0 = [sp + 0x20]
         call 0x8005f9cc          // 0x8005f9cc(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xffff         // s4

    loc_0x805364ac: // orphan
         // CODE XREF from fcn.80534504 @ +0x604
         a2 = fcn.81c00000 << 16
         a2 += 0x972              // arg3
         if                       // likely
         // CODE XREF from fcn.80534504 @ +0x600
         v0 = s0

    loc_0x805364bc: // orphan
         v1 = , unsigned  byte [a2 + 1] // arg3 // s4
         at = , v1 < 0x25

    loc_0x805364c4: // orphan
         // CODE XREF from fcn.805336c4 @ 0x80533710
         if                       // unlikely
         

    loc_0x805364cc: // orphan
         s0 = fcn.81c00000 << 16
         s0 += v1
         s0 = , unsigned  byte [s0 + 0x89c]
         a0 = , unsigned  byte [sp + 0x33]
         call 0x8005dfd4          // 0x8005dfd4(0x2, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 & 0xff
         // CODE XREF from fcn.805336c4 @ 0x80533700
         v0 = s0

    loc_0x805364e8: // orphan
         if                       // likely
         ra = [sp + 0x1c]

    loc_0x805364f0: // orphan
         s0 = 0 + 0xad

    loc_0x805364f4: // orphan
         v0 = s0
         s0 = [sp + 0x18]
         ret                      // ra
         // CODE XREF from fcn.80534504 @ +0x608
         sp += 0x30

    loc_0x80536da4: // orphan
         bbit0 k1, 0x1f, 0x80537ca4
         synci -0x24d1, 0
         bbit132 t9, 0xf, 0x8053802c
         sync
         synci 0xd7f, v0
         fp = , unsigned  , s7 < -0x3921
         bbit0 s6, 0xf, 0x80551b40
         ra = [t8 + 0x77f]        // t9
         sc ra, -0x21d1, gp
         sc ra, -0x2f61, v1
         call 0x8a3c3bfc          // 0x8a3c3bfc(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x82fc18fc

    loc_0x80537270: // orphan
         goto 0x8c83d8b0

    loc_0x805372e8: // orphan
         ldr 0, 0x5b21, t9

    loc_0x805375f0: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80544608
         synci 0xb3f, v1
         goto 0x8a7c35fc
         goto 0x893c1e3c

    loc_0x8053b54c: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80533ab8
         if                       // likely
         ld s7, 0x1000, fp

    loc_0x8053b554: // orphan
         swc1 f24, 0x3000, a0
         // CODE XREF from fcn.8053be34 @ +0x424
         goto 0x8cfc3530

    loc_0x8053f83c: // orphan
         if                       // unlikely

    loc_0x8053f908: // orphan
         goto 0x83fc3358
         goto 0x80543860

    loc_0x8053f9f4: // orphan
         s1 = , unsigned  , fp < 0x1faf
         lld t7, 0x1491, a0       // s2
         lwc1 f23, 0x153d, at
         ldc1 f23, 0x1f8b, at
         if                       // unlikely
         if                       // likely

    loc_0x8053fadc: // orphan
         ld t9, 0x2d65, t4        // s2
         t9 = , unsigned  , fp < -0x3490 // lo

    loc_0x805418e4: // orphan
         goto 0x843fbffc
         lwu t7, 0x7ff, t8        // t9

    loc_0x80541930: // orphan
         t2 = , unsigned  , t8 < 0xfaf
         sd t6, -0x51, fp
         call 0x8c31b93c          // 0x8c31b93c(-1, 0x442f71dcfe116408, 0x8, -1)
         call fcn.833ffebc
         ra = , unsigned  , s7 < -0xd2
         [ra - 0x30f1] = ra
         sd t7, 0x1f1f, fp
         pref 0xf, -0x50d1, t8
         call fcn.80bc30bc
         [t8 + 0xa0a] = t2
         call 0x8cfffffc          // 0x8cfffffc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80541f1c: // orphan
         goto 0x84191808

    loc_0x80542454: // orphan
         goto 0x8c047008
         sync 0xa

    loc_0x80542820: // orphan
         [k1 + 0x808] = t7
         t3 = , unsigned  , s1 < 0xa06

    loc_0x80542988: // orphan
         call fcn.803dbe3c

    loc_0x80542bf4: // orphan
         v0 = [t8 - 0x2100]       // t9

    loc_0x80542c30: // orphan
         // CODE XREF from fcn.805392f0 @ +0x22e0
         goto 0x84123c0c

    loc_0x80542e64: // orphan
         a3 = , unsigned  , t8 < 0x7f07
         if                       // likely

    loc_0x80542ed0: // orphan
         goto 0x8cbc3038
         ra = [sp + 0x83f]

    loc_0x8054300c: // orphan
         sync 0x1f
         sd ra, -0x20f1, fp
         call fcn.80bc15fc
         call fcn.84057c1c        // fcn.84057c1c(-1)
         if                       // unlikely
         if                       // unlikely

    loc_0x80543028: // orphan
         t6 = [t8 + 0x200]        // t9

    loc_0x80543078: // orphan
         sd ra, -0x2100, gp
         sd t7, 8, sp
         call 0x8d3cfc00          // 0x8d3cfc00(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x805435e4: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80543864
         sync 8
         goto 0x84100bfc
         lwu t7, 0xff, k0         // t9

    loc_0x80543860: // orphan
         // CODE XREF from fcn.804fc430 @ 0x8053f90c
         ld 0, 0x61f, t8

    loc_0x80543864: // orphan
         if                       // likely
         sync 0x1d

    loc_0x80544608: // orphan
         if                       // unlikely
         t9 = ra ^ 0x7ffc

    loc_0x805451e0: // orphan
         // CODE XREF from fcn.804fc430 @ 0x80543020
         sd ra, -0x201, ra
         ldl ra, -0x113, t7       // s2

    loc_0x8054f390: // orphan
         // CODE XREF from fcn.804fc430 @ 0x8053b54c
         // CODE XREF from fcn.8054aa50 @ +0x2c0
         beql 0, t7, 0x80564110   // likely
         ra = at & 0x38ff         // lo

    loc_0x8054f398: // orphan
         // CODE XREF from fcn.8054aa50 @ +0x550
         beql at, t7, 0x8055b398  // unlikely

    loc_0x80564110: // orphan
         sdc1 f11, 0x5b2d, k1
         jalx 0x84b6dcd4          // 0x84b6dcd4(-1, 0x442f71dcfe116408, 0x8, -1)
         bbit132 t2, 0xe, 0x80572694
         fp = k0 | 0x3766
         t7 = ra | 0xfd63

}

*/
