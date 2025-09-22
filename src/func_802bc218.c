/*
 * Function: 0x802bc218
 * Category: math
 */

// Decompiled C code
int fcn.802afdb0 (int esi, int edx) {
// do {
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.802afdb0 (int esi, int edx) {
    loc_0x802afdb0:
        // CALL XREF from fcn.82f22e24 @ +0x3d4
        bgezl 0, 0x802bb584 // fcn.802cbbfc-0x10678 // likely
        bgezl t0, 0x802bb698 // likely
            
    loc_0x802bb698:
        // CODE XREF from fcn.802bb2f4 @ +0x390
        t8 = 0x8009 << 16
        t8 += 0x4de0
        t6 = v1 + 8
        [s0 + 0] = t6
        t7 = 0xde00 << 16
        [v1 + 0] = t7
        [v1 + 4] = t8
        v1 = [s0 + 0]
        t7 = 0x67ff << 16
        t7 |= 0x67ff
        t9 = v1 + 8
        [s0 + 0] = t9
        t6 = 0xf700 << 16
        [v1 + 0] = t6
        [v1 + 4] = t7
        v1 = [s0 + 0]
        t6 = 0x1b << 16
         // do {
    loc_0x802bb6dc:
        t9 = 0xf641 << 16
        t8 = v1 + 8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802afdbc
    loc_0x802afdc8:
        bgezl s0, 0x802bb6dc // likely
        v1 = halfword [0 + 0x2e4c]
    loc_0x802afdd0:
        v1 = halfword [0 + 0x2e78]
        bgezl 0, 0x802bb7d8 // likely
        bgezl t0, 0x802bb80c // likely
            
    loc_0x802bb80c:
        t8 |= 0x40f8  // t9
        t7 |= 0xc0f8
        [v1 + 0] = t7
        [v1 + 4] = t8
        v1 = [s0 + 0]
        a0 = 0 + 0x49 // arg1
        a1 = a0 & 0x3ff // arg2
        a1 <<= 2      // arg2
        a3 = 0xf607 << 16
        t0 = 7 << 16
         // do {
    loc_0x802bb834:
        t9 = v1 + 8
        [s0 + 0] = t9
        t0 |= 0x4000
        a3 |= 0xc000  // arg4 // s2
        a0 += 0xb     // arg1
        a0 <<= 0x10   // arg1
        t6 = a3 | a1  // arg4 // s2
        t7 = t0 | a1  // arg2
        a0 = , signed  a0 >> 0x10 // arg1
        a2 = 0 + 2    // arg3
        t1 = 0 + 0xe
        [v1 + 4] = t7
        [v1 + 0] = t6
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802afde0
    loc_0x802afde8:
        v1 = halfword [t0 + 0x2eb0]
        v1 = halfword [s0 + 0x2eb4]
        v1 = halfword [t0 + 0x2ec8]
        v1 = halfword [s0 + 0x2ecc]
        bgezl 0, 0x802bb9ac // likely
        // CODE XREF from fcn.802ac294 @ 0x802ac4d8
        bgezl 0, 0x802bb9d0 // likely
            
    loc_0x802bb9d0:
        t6 = t9 & 0x3ff
        t7 = t6 << 0xe
        t8 = t7 | 0x310
        [v1 + 4] = t8
        v1 = [s0 + 0]
        t6 = 0x8009 << 16
        t6 += 0x4e38
        t9 = v1 + 8
        [s0 + 0] = t9
        [v1 + 4] = t6
        [v1 + 0] = ra
        v1 = [s0 + 0]
        t8 = 0xe700 << 16
        t6 = 0xfb00 << 16
        t7 = v1 + 8
        [s0 + 0] = t7
        [v1 + 4] = 0
        [v1 + 0] = t8
        v1 = [s0 + 0]
         // do {
    loc_0x802bba1c:
        t7 = 0xff << 16
        t7 |= 0xffff
        t9 = v1 + 8
        [s0 + 0] = t9
        [v1 + 4] = t7
        [v1 + 0] = t6
        v1 = [s0 + 0]
        t6 = 0xff36 << 16
        t9 = 0xfcff << 16
        t8 = v1 + 8
        [s0 + 0] = t8
        t9 |= 0x9bff
        t6 |= 0xff7f
        [v1 + 4] = t6
        call 0x8004c990 // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
        [v1 + 0] = t9
        a0 = 0 + 0x2a
        a1 = 0 + 0xc3
        a2 = v0       // s4
        a3 = 0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802afe04
    loc_0x802afe10:
        // CODE XREF from fcn.802ac294 @ 0x802ac4dc
        v1 = halfword [s0 + 0x2f28]
        v1 = halfword [t0 + 0x2f88]
        v1 = halfword [s0 + 0x2f8c]
        bgezl 0, 0x802bbcd0 // likely
        v1 = halfword [0 + 0x2fb8]
            
    loc_0x802bbcb0:
        [v1 + 4] = t6
        a0 = 0 + 1    // lo
        call 0x800496a4 // 0x800496a4(0x1, 0x442f71dcfe116408, 0x8, -1)
        a1 = 0
        t7 = [s2 + 0] // t9
        v0 = , unsigned  halfword [t7 + 0x32]
        at = , v0 < 0xfe
        if            // unlikely
        a0 = v0
            
    loc_0x802bbcdc:
        // CODE XREFS from fcn.802afdb0 @ 0x802bbccc, 0x802bbcd4
        call 0x8004b7a4 // 0x8004b7a4(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802bbce0
        a0 = 0 + 0x41
        a1 = 0 + 0x1d
        a2 = 0 + 1    // lo
        call 0x80049064 // 0x80049064(0x41, 0x1d, 0x1, -1)
        a3 = v0       // s4
        v0 = [s2 + 0] // t9
        a0 = 0x8800 << 16
        t8 = 0 + 1    // lo
        a1 = halfword [v0 + 0x3c]
        a3 = [v0 + 0x38] // t9
        [sp + 0x10] = t8
        a0 = [a0 + 0x687c] // t9
        call 0x80048e30 // 0x80048e30(-1, 0xffff, 0x1, -1)
        a2 = 0 + 0xc9
        call 0x800499ec // 0x800499ec(-1, 0xffff, 0xc9, -1)
        0x802bbd20
        v1 = [s0 + 0]
        t6 = 0xe700 << 16
        t8 = 0xe300 << 16
        t9 = v1 + 8
        [s0 + 0] = t9
        [v1 + 4] = 0
        [v1 + 0] = t6
        v1 = [s0 + 0]
        t8 |= 0xa01
        t6 = 0xfcff << 16
        t7 = v1 + 8
        [s0 + 0] = t7
        [v1 + 4] = 0
        [v1 + 0] = t8
        v1 = [s0 + 0]
        t7 = 0xfffe << 16
        t7 |= 0x793c
        t9 = v1 + 8
         // do {
    loc_0x802bbd6c:
        [s0 + 0] = t9
        t6 |= 0xffff  // s2
        [v1 + 0] = t6
        [v1 + 4] = t7
        v1 = [s0 + 0] // t9
        t6 = 0x5f50 << 16
        t9 = 0xe200 << 16
        t8 = v1 + 8
        [s0 + 0] = t8
        t9 |= 0x1c
        t6 |= 0x5240
        [v1 + 4] = t6
        [v1 + 0] = t9
        v1 = [s0 + 0]
        t9 = 0x1b << 16
        t8 = 0xf641 << 16
        t7 = v1 + 8
        [s0 + 0] = t7
        t8 |= 0xc068
        t9 |= 0x5c
        [v1 + 4] = t9
        [v1 + 0] = t8
        v1 = [s0 + 0]
        t8 = 0x1a << 16
        t7 = 0xf61b << 16
        t6 = v1 + 8
        [s0 + 0] = t6
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802afe24
    loc_0x802afe38:
        bgezl s0, 0x802bbdec // likely
        bgezl 0, 0x802bbe00 // likely
            
    loc_0x802bbe00:
        t7 |= 0x4054
         // do {
    loc_0x802bbe04:
        [v1 + 4] = t7
        [v1 + 0] = t6
        v1 = [s0 + 0]
        t6 = 7 << 16
        t9 = 0xf608 << 16
        t8 = v1 + 8
        [s0 + 0] = t8
        t9 |= 0x364
        t6 |= 0x40cc
        [v1 + 4] = t6
        [v1 + 0] = t9
        v1 = [s0 + 0]
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x802afe48: // orphan
             v1 = halfword [s0 + 0x3018]
             bgezl 0, 0x802bbef0      // likely
             bgezl t0, 0x802bbf54     // likely

    loc_0x802afe58: // orphan
         v1 = halfword [0 + 0x3050]
         v1 = halfword [0 + 0x305c]
         bgezl t0, 0x802bbff4     // likely
         bgezl s0, 0x802bc048     // likely

    loc_0x802afe6c: // orphan
         bgezl s0, 0x802bc040     // likely
         // CALL XREF from fcn.8362f01c @ +0x1220
         bgezl t0, 0x802bc024     // likely

    loc_0x802afe78: // orphan
         v1 = halfword [0 + 0x307c]

    loc_0x802afe7c: // orphan
         v1 = halfword [0 + 0x3084]
         bgezl t0, 0x802bc0b4     // likely
         bgezl s0, 0x802bc0c8     // likely

    loc_0x802afe8c: // orphan
         v1 = halfword [s0 + 0x30b8]
         v1 = halfword [t0 + 0x30c4]
         v1 = halfword [s0 + 0x30c8]
         bgezl t0, 0x802bc1cc     // fcn.802a91c8+0x13004 // likely
         bgezl s0, 0x802bc1e0     // likely

    loc_0x802afea4: // orphan
         v1 = halfword [s0 + 0x30e4]
         v1 = halfword [0 + 0x30f4]
         v1 = halfword [0 + 0x3120]
         v1 = halfword [0 + 0x3144]
         v1 = halfword [t0 + 0x3154]
         v1 = halfword [s0 + 0x3158]
         v1 = halfword [0 + 0x3160]
         bgezl t0, 0x802bc484     // fcn.802a91c8+0x132bc // likely
         bgezl s0, 0x802bc4a8     // likely

    loc_0x802afecc: // orphan
         bgezl t0, 0x802bc520     // likely
         // CODE XREF from fcn.802ac294 @ 0x802ac4fc
         bgezl s0, 0x802bc554     // likely

    loc_0x802afed8: // orphan
         v1 = halfword [0 + 0x31b4]
         v1 = halfword [t0 + 0x31c0]
         v1 = halfword [s0 + 0x31c4]
         v1 = halfword [t0 + 0x31e0]
         // CODE XREF from fcn.802ac294 @ +0x270
         v1 = halfword [s0 + 0x31e4]
         v1 = halfword [t0 + 0x31f0]
         v1 = halfword [s0 + 0x31f4]
         v1 = halfword [t0 + 0x3244]
         v1 = halfword [s0 + 0x3248]

    loc_0x802afefc: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac508
         bgezl 0, 0x802bc8f0      // fcn.802a91c8+0x13728 // likely
         bgezl 0, 0x802bc984      // likely

    loc_0x802aff08: // orphan
         v1 = halfword [s0 + 0x3334]
         v1 = halfword [t0 + 0x3348]
         v1 = halfword [s0 + 0x334c]
         v1 = halfword [0 + 0x3398]
         v1 = halfword [t0 + 0x33a0]
         v1 = halfword [s0 + 0x33ac]
         v1 = halfword [0 + 0x33b8]
         bgezl 0, 0x802bcf48      // likely
         bgezl 0, 0x802bcfac      // likely

    loc_0x802aff30: // orphan
         v1 = halfword [s0 + 0x3440]
         v1 = halfword [0 + 0x344c]
         v1 = halfword [0 + 0x3490]
         bgezl t0, 0x802bd1a0     // likely
         bgezl s0, 0x802bd1b4     // likely

    loc_0x802aff48: // orphan
         bgezl s0, 0x802bd21c     // likely
         bgezl 0, 0x802bd230      // likely

    loc_0x802aff54: // orphan
         bgezl s0, 0x802bd308     // likely
         bgezl 0, 0x802bd31c      // likely

    loc_0x802aff60: // orphan
         bgezl s0, 0x802bd3e4     // likely
         bgezl 0, 0x802bd3f8      // likely

    loc_0x802aff6c: // orphan
         bgezl s0, 0x802bd4c0     // fcn.802bd414+0xac // likely
         bgezl 0, 0x802bd4d4      // likely

    loc_0x802aff78: // orphan
         bgezl s0, 0x802bd59c     // likely
         bgezl 0, 0x802bd5b0      // likely

    loc_0x802aff84: // orphan
         bgezl s0, 0x802bd678     // fcn.82bea63c-0x292cfc4 // likely
         bgezl 0, 0x802bd68c      // likely

    loc_0x802aff90: // orphan
         bgezl s0, 0x802bd7b4     // likely
         bgezl t0, 0x802bd788     // likely

    loc_0x802aff9c: // orphan
         bgezl 0, 0x802bd7b0      // likely
         v1 = halfword [0 + 0x3620]

    loc_0x802affa4: // orphan
         v1 = halfword [0 + 0x36b4]
         bgezl t0, 0x802bda9c     // fcn.82bea63c-0x292cba0 // likely
         bgezl s0, 0x802bdaf0     // likely

    loc_0x802affb4: // orphan
         bgezl s0, 0x802bdae8     // likely
         bgezl t0, 0x802bdacc     // likely

    loc_0x802affc0: // orphan
         v1 = halfword [0 + 0x36d4]
         v1 = halfword [t0 + 0x36dc]
         v1 = halfword [s0 + 0x36e4]
         bgezl t0, 0x802bdb70     // fcn.802a91c8+0x149a8 // likely
         bgezl s0, 0x802bdba4     // likely

    loc_0x802bb6e4: // orphan
         [s0 + 0] = t8
         t9 |= 0x8060
         t6 |= 0x60
         [v1 + 4] = t6
         [v1 + 0] = t9
         v1 = [s0 + 0]            // t9
         t9 = 7 << 16
         t8 = 0xf607 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         t8 |= 0x8360
         t9 |= 0x80cc
         [v1 + 4] = t9
         [v1 + 0] = t8
         v1 = [s0 + 0]
         t8 = 0x1b << 16
         t7 = 0xf61b << 16
         t6 = v1 + 8
         [s0 + 0] = t6
         // CODE XREF from fcn.802cbbfc @ 0x802cbc2c
         t7 |= 0x68
         t8 |= 0x58
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [s0 + 0]

    loc_0x802bb744: // orphan
         // CODE XREF from fcn.802cbbfc @ 0x802cbc30
         t7 = 0x41 << 16
         t6 = 0xf641 << 16
         t9 = v1 + 8
         [s0 + 0] = t9
         t6 |= 0x8068
         // CODE XREF from fcn.802cbc34 @ 0x802cbc34
         t7 |= 0x8058
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t6 = 7 << 16

    loc_0x802bb76c: // orphan
         // CODE XREF from fcn.802cbbfc @ 0x802cbc38
         t9 = 0xf608 << 16

    loc_0x802bb770: // orphan
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 |= 0xcc
         t6 |= 0xcc
         [v1 + 4] = t6
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t9 = 7 << 16
         t8 = 0xf608 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         t8 |= 0x360
         t9 |= 0x360
         a2 = 0
         a1 = 0 + 0x77            // arg2
         s1 = 0xf600 << 16
         [v1 + 4] = t9
         [v1 + 0] = t8

    loc_0x802bb7b8: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bb7f0
         v1 = [s0 + 0]
         a0 = a1 & 0x3ff          // arg2 // a2
         // CODE XREF from fcn.802ac294 @ +0xc68
         a0 <<= 0xe               // arg1
         a1 += 0xb                // arg2
         a2 += 1                  // arg3
         t7 = a0 | s1             // arg1
         t6 = v1 + 8
         at = , unsigned  , a2 < 0xd // arg3 // lo
         a1 <<= 0x10              // arg2
         [s0 + 0] = t6
         t8 = t7 | 0x64
         t9 = a0 | 0x5c           // arg1
         a1 = , signed  a1 >> 0x10 // arg2
         [v1 + 4] = t9
         if                       // likely
         [v1 + 0] = t8

    loc_0x802bb7f8: // orphan
         v1 = [s0 + 0]
         t7 = 0xf607 << 16
         t8 = 7 << 16
         t6 = v1 + 8
         [s0 + 0] = t6

    loc_0x802bb868: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bb928
         v1 = [s0 + 0]
         a1 = a0 & 0x3ff          // arg2

    loc_0x802bb870: // orphan
         a1 <<= 2                 // arg2
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 = a3 | a1             // arg4 // s2
         t6 = t0 | a1             // arg2
         a0 += 0xb                // arg1
         [v1 + 4] = t6

    loc_0x802bb88c: // orphan
         [v1 + 0] = t9
         v1 = [s0 + 0]
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         a1 = a0 & 0x3ff          // arg2
         a1 <<= 2                 // arg2
         // CODE XREF from fcn.802ac294 @ +0xc6c
         t7 = v1 + 8
         [s0 + 0] = t7
         t8 = a3 | a1             // arg4 // s2
         t9 = t0 | a1             // arg2
         a0 += 0xb                // arg1
         [v1 + 4] = t9
         [v1 + 0] = t8
         v1 = [s0 + 0]
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         a1 = a0 & 0x3ff          // arg2
         a1 <<= 2                 // arg2
         t6 = v1 + 8
         [s0 + 0] = t6
         t7 = a3 | a1             // arg4 // s2
         t8 = t0 | a1             // arg2
         a0 += 0xb                // arg1
         a0 <<= 0x10              // arg1

    loc_0x802bb8ec: // orphan
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [s0 + 0]
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         a1 = a0 & 0x3ff          // arg2
         a1 <<= 2                 // arg2
         a0 += 0xb                // arg1
         t9 = v1 + 8
         [s0 + 0] = t9
         a0 <<= 0x10              // arg1
         t6 = a3 | a1             // arg4 // s2
         t7 = t0 | a1             // arg2
         a2 += 4                  // arg3
         a0 = , signed  a0 >> 0x10 // arg1
         [v1 + 4] = t7
         if                       // likely
         [v1 + 0] = t6

    loc_0x802bb930: // orphan
         v1 = [s0 + 0]
         t9 = 0x8009 << 16
         ra = 0xde00 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 += 0x4db8
         [v1 + 4] = t9
         [v1 + 0] = ra
         v1 = [s0 + 0]
         t8 = 0 + 0xaa
         t7 = 0xfa00 << 16
         t6 = v1 + 8
         [s0 + 0] = t6
         [v1 + 4] = t8

    loc_0x802bb968: // orphan
         [v1 + 0] = t7
         v1 = [s0 + 0]
         t7 = 7 << 16
         t6 = 0xf619 << 16
         t9 = v1 + 8

    loc_0x802bb97c: // orphan
         [s0 + 0] = t9
         t6 |= 0x40b0
         t7 |= 0x8060
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]            // t9
         v0 = [s2 + 0]            // t9
         a0 = 0 + 0x10c           // arg1
         t8 = v1 + 8
         [s0 + 0] = t8
         t6 = halfword [v0 + 0x44]
         t9 = halfword [v0 + 0x42]
         a1 = 0
         t7 = t9 + t6
         t8 = t7 & 0x3ff
         t9 = t8 << 0xe
         t6 = t9 | s1
         t7 = t6 | 0x360
         [v1 + 0] = t7
         t8 = [s2 + 0]            // t9

    loc_0x802bb9cc: // orphan
         t9 = halfword [t8 + 0x42]

    loc_0x802bba6c: // orphan
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         v1 = [s0 + 0]
         t8 = 0xe700 << 16
         t6 = 0xfb00 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t8
         v1 = [s0 + 0]
         t7 = 0xff << 16
         t7 |= 0xff
         t9 = v1 + 8
         [s0 + 0] = t9
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t6 = 0xff37 << 16
         t9 = 0xfc12 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 |= 0x9a25
         t6 |= 0xffff
         [v1 + 4] = t6
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t9 = 0xf0a << 16
         t8 = 0xe200 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         t8 |= 0x1c
         t9 |= 0x7008
         a0 = 0 + 0x10e
         a1 = 0
         [v1 + 4] = t9
         call 0x8004c990          // 0x8004c990(0x10e, 0x0, 0x8, -1)
         [v1 + 0] = t8
         t6 = [s2 + 0]            // t9
         a1 = 0 + 0xc9
         a2 = v0                  // s4
         a0 = halfword [t6 + 0x46]
         [sp + 0x10] = 0
         call 0x8004d19c          // 0x8004d19c(0xffff, 0xc9, 0xff, -1)
         a3 = 0
         v1 = [s0 + 0]
         t8 = 0xe700 << 16
         t6 = 0xfb00 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t8
         v1 = [s0 + 0]
         t7 = 0 - 0x6901
         a0 = 0 + 0x10d
         t9 = v1 + 8
         [s0 + 0] = t9
         a1 = 0
         [v1 + 4] = t7
         call 0x8004c990          // 0x8004c990(0x10d, 0x0, 0xff, 0x0)
         [v1 + 0] = t6
         call 0x8004d1fc          // 0x8004d1fc(0x10d, 0x0, 0xff, 0x0)
         a0 = v0                  // s4
         a0 = 0 + 0x1c
         a1 = 0 + 0x16
         a2 = 0 + 0x4b
         call 0x8840045c          // 0x8840045c(0x1c, 0x16, 0x4b, 0x0)
         a3 = 0 + 0x18
         v0 = [s2 + 0]            // t9
         a1 = 0 + 0xc2
         a3 = 0 + 0x18
         a0 = halfword [v0 + 0x3e]
         call 0x8840045c          // 0x8840045c(0xffff, 0xc2, 0x4b, 0x18)
         a2 = halfword [v0 + 0x40]
         t8 = [s2 + 0]            // t9
         call 0x886000f0          // "(A" // 0x886000f0(0xffff, 0xc2, 0xffff, 0x18)
         a0 = , unsigned  halfword [t8 + 0x32]
         at = , v0 < 2
         bnel at, 0, 0x802bbc14   // unlikely
         v1 = [s0 + 0]

    loc_0x802bbba8: // orphan
         v1 = [s0 + 0]
         t6 = 0xe700 << 16
         t8 = 0xfb00 << 16
         t9 = v1 + 8

    loc_0x802bbbb8: // orphan
         [s0 + 0] = t9
         [v1 + 4] = 0
         [v1 + 0] = t6
         v1 = [s0 + 0]            // t9
         t9 = 0 - 1               // s2
         a0 = 0 + 0x10c
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = t9
         [v1 + 0] = t8
         t6 = [s2 + 0]            // t9
         a1 = 0 + 0x2c
         call 0x88600170          // 0x88600170(0x10c, 0x2c, 0x8, -1)
         a2 = byte [t6 + 0x34]    // s4
         v0 = [s2 + 0]            // t9
         a0 = 0 + 0x10c
         a2 = byte [v0 + 0x35]    // s4
         t7 = byte [v0 + 0x34]    // s4
         beql t7, a2, 0x802bbc14  // likely
         v1 = [s0 + 0]

    loc_0x802bbc08: // orphan
         call 0x88600170          // 0x88600170(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x42
         v1 = [s0 + 0]

    loc_0x802bbc14: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bbba0, 0x802bbc00
         t9 = 0xe700 << 16
         t7 = 0xfb00 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t8 = 0xdcff << 16
         t8 |= 0xe6ff
         t6 = v1 + 8
         [s0 + 0] = t6
         [v1 + 4] = t8

    loc_0x802bbc44: // orphan
         [v1 + 0] = t7
         v1 = [s0 + 0]
         t7 = 0xf0a << 16
         t6 = 0xe200 << 16
         t9 = v1 + 8
         [s0 + 0] = t9
         t6 |= 0x1c
         t7 |= 0x4000
         a0 = 0 + 0x10e
         a1 = 0 + 1               // lo
         [v1 + 4] = t7
         call 0x8004c990          // 0x8004c990(0x10e, 0x1, 0x8, -1)
         [v1 + 0] = t6
         a0 = 0 + 0x10c
         a1 = 0 + 0x16
         a2 = v0                  // s4
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x10c, 0x16, 0xff, 0x0)
         [sp + 0x10] = 0
         v1 = [s0 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 = 0xde00 << 16
         [v1 + 0] = t9
         call 0x800498c4          // 0x800498c4(0x10c, 0x16, 0xff, 0x0)

    loc_0x802bbcd0: // orphan
         [v1 + 4] = t6
         a0 = 0 + 1               // lo
         call 0x800496a4          // 0x800496a4(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t7 = [s2 + 0]            // t9
         v0 = , unsigned  halfword [t7 + 0x32]
         at = , v0 < 0xfe
         if                       // unlikely
         a0 = v0

    loc_0x802bbdd8: // orphan
         t7 |= 0x8070
         t8 |= 0xc054             // t9
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [s0 + 0]
         t7 = 0x41 << 16
         t6 = 0xf642 << 16
         t9 = v1 + 8
         [s0 + 0] = t9
         t6 |= 0x70

    loc_0x802bbe34: // orphan
         t9 = 6 << 16
         t8 = 0xf608 << 16
         t7 = v1 + 8
         [s0 + 0] = t7
         t8 |= 0x80d4
         t9 |= 0xc0c8
         [v1 + 4] = t9
         [v1 + 0] = t8
         v1 = [s0 + 0]
         t8 = 6 << 16
         t7 = 0xf608 << 16
         t6 = v1 + 8
         [s0 + 0] = t6
         t7 |= 0x8368
         t8 |= 0xc35c
         [v1 + 4] = t8
         [v1 + 0] = t7
         v1 = [s0 + 0]
         t7 = 6 << 16
         t6 = 0xf61a << 16
         t9 = v1 + 8
         [s0 + 0] = t9
         t6 |= 0xbc
         t7 |= 0xc054
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]
         v0 = [s2 + 0]            // t9
         t8 = v1 + 8
         [s0 + 0] = t8
         t6 = halfword [v0 + 0x40]
         t9 = halfword [v0 + 0x3e]
         t7 = t9 + t6
         t8 = t7 + 1
         t9 = t8 & 0x3ff
         t6 = t9 << 0xe
         t7 = t6 | s1
         t8 = t7 | 0x36c
         [v1 + 0] = t8
         t9 = [s2 + 0]
         t6 = halfword [t9 + 0x3e]
         t7 = t6 - 1
         t8 = t7 & 0x3ff
         t9 = t8 << 0xe
         t6 = t9 | 0x304
         call 0x80008648          // 0x80008648(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t6
         ra = [sp + 0x2c]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x802bbf54: // orphan
         cvt.w.s f4, f18
         cfc1 s1, 31
         
         s1 &= 0x78
         beql s1, 0, 0x802bbfb4   // unlikely
         mfc1 s1, f4

    loc_0x802bbf6c: // orphan
         mtc1 at, f4
         s1 = 0 + 1               // lo
         sub.s f4, f18, f4
         ctc1 s1, 31
         
         cvt.w.s f4, f4

    loc_0x802bbf84: // orphan
         cfc1 s1, 31
         
         s1 &= 0x78
         if                       // likely
         

    loc_0x802bbf98: // orphan
         mfc1 s1, f4
         at = 0x8000 << 16
         goto 0x802bbfc0
         s1 |= at

    loc_0x802bbfa8: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bbf90, 0x802bbfb8
         goto 0x802bbfc0
         s1 = 0 - 1               // s2

    loc_0x802bbfb4: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bbf64
         
         if                       // unlikely
         

    loc_0x802bbfc0: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bbfa0, 0x802bbfa8
         ctc1 t6, 31
         call 0x800086a4          // 0x800086a4(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 &= 0xffff
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802bbfd0: // orphan
         a0 = s1
         if                       // unlikely
         s0 = 0

    loc_0x802bbfdc: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bbff0
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x88400610          // 0x88400610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 += 1
         if                       // likely
         

    loc_0x802bbff8: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bbfd4
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret
         sp += 0x20

    loc_0x802bc024: // orphan
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2

    loc_0x802bc038: // orphan
         [sp + 0x18] = s0
         t6 = , unsigned  halfword [v0 + 0]
         t0 = 1 << 16
         s4 = 0x8008 << 16

    loc_0x802bc048: // orphan
         t7 = t6 | 4
         halfword [v0 + 0] = t7
         v0 = [s1 + 0]            // t9
         s6 = 0x8009 << 16
         s2 = 0
         t8 = , unsigned  halfword [v0 + 0]
         s6 += 0x48dc
         s4 += 0x7200
         t9 = t8 | 2
         halfword [v0 + 0] = t9
         t1 = [s1 + 0]            // t9
         s3 = 0 + 3
         s5 = 0 + 0x100
         t2 = [t1 + 0x1c]         // t9
         [t2 + 0x4c] = t0

    loc_0x802bc084: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc190
         call 0x80026098          // 0x80026098(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = v0 & 0xff           // s4

    loc_0x802bc094: // orphan
         v0 = [s1 + 0]            // t9
         t3 = , unsigned  byte [v0 + 0x31] // s4
         beql t3, 0, 0x802bc0b8   // unlikely
         byte [v0 + 0x31] = s0

    loc_0x802bc0a4: // orphan
         bnel s0, 0, 0x802bc0b8   // likely
         byte [v0 + 0x31] = s0

    loc_0x802bc0ac: // orphan
         byte [v0 + 0x30] = s3
         v0 = [s1 + 0]            // t9
         byte [v0 + 0x31] = s0

    loc_0x802bc0b8: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc09c, 0x802bc0a4
         v0 = [s1 + 0]            // t9

    loc_0x802bc0bc: // orphan
         v1 = , unsigned  byte [v0 + 0x30] // s4
         if                       // unlikely
         t4 = v1 - 1              // t3

    loc_0x802bc0c8: // orphan
         goto 0x802bc188
         byte [v0 + 0x30] = t4

    loc_0x802bc0d0: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc0c0
         if                       // likely
         a0 = s0

    loc_0x802bc0d8: // orphan
         t5 = [s4 + 0]
         t6 = , unsigned  halfword [t5 + 8]
         t7 = t6 & 0x4000
         beql t7, 0, 0x802bc104   // unlikely
         t8 = [s4 + 0]

    loc_0x802bc0ec: // orphan
         a0 = 0 + 0x48
         call 0x800226c0          // 0x800226c0(0x48, 0x442f71dcfe116408, 0x8, -1)
         s2 = 0 + 1               // lo
         goto 0x802bc188
         

    loc_0x802bc100: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc0d0
         t8 = [s4 + 0]

    loc_0x802bc104: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc0e4
         if                       // likely
         v1 = , unsigned  halfword [t8 + 8]

    loc_0x802bc10c: // orphan
         t9 = v1 & 0x8000
         beql t9, 0, 0x802bc144   // likely
         t1 = v1 & 0x1000

    loc_0x802bc118: // orphan
         v1 = , unsigned  halfword [v0 + 0x32]
         at = , v1 < 0xfe
         if                       // unlikely
         a0 = v1

    loc_0x802bc128: // orphan
         goto 0x802bc130
         a0 = 0 + 0xc9

    loc_0x802bc130: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc120, 0x802bc128
         call 0x80026068          // 0x80026068(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x802bc188
         

    loc_0x802bc140: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc104
         t1 = v1 & 0x1000

    loc_0x802bc144: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc110
         if                       // unlikely
         

    loc_0x802bc14c: // orphan
         bnel a0, 0, 0x802bc164   // likely
         halfword [v0 + 0xc] = 0

    loc_0x802bc154: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x137
         v0 = [s1 + 0]            // t9

    loc_0x802bc164: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc14c
         t0 = [s1 + 0]            // t9
         halfword [t0 + 0xe] = s5
         t2 = [s1 + 0]            // t9
         t5 = [s6 + 0]            // t9
         t3 = [t2 + 0x1c]         // t9
         swl t5, 0x1e, t3
         swr t5, 0x21, t3

    loc_0x802bc180: // orphan
         t5 = , unsigned  halfword [s6 + 4]
         halfword [t3 + 0x22] = t5

    loc_0x802bc188: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc0c8, 0x802bc0f8, 0x802bc138, 0x802bc144
         call 0x88400610          // 0x88400610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         

    loc_0x802bc198: // orphan
         // DATA XREFS from fcn.80339168 @ 0x80310340, 0x80310658
         ra = [sp + 0x34]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x802bc1e0: // orphan
         cvt.s.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f16
         a1 = 0 + 1               // arg2 // lo
         a2 = 0x8840 << 16
         a2 += 0x17e0             // arg3
         mul.s f10, f6, f8
         at = 0x4f00 << 16
         div.s f18, f10, f16
         cfc1 t6, 31
         ctc1 a1, 31
         
         cvt.w.s f4, f18
         cfc1 a1, 31
         
         a1 &= 0x78               // arg2
         beql a1, 0, 0x802bc270   // likely
         mfc1 a1, f4

    loc_0x802bc228: // orphan
         mtc1 at, f4

    loc_0x802bc22c: // orphan
         a1 = 0 + 1               // arg2 // lo
         sub.s f4, f18, f4
         ctc1 a1, 31
         
         cvt.w.s f4, f4
         cfc1 a1, 31
         
         a1 &= 0x78               // arg2
         if                       // unlikely
         

    loc_0x802bc254: // orphan
         mfc1 a1, f4
         at = 0x8000 << 16
         goto 0x802bc27c
         a1 |= at                 // arg2 // t0

    loc_0x802bc264: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc24c, 0x802bc274
         goto 0x802bc27c
         a1 = 0 - 1               // arg2 // s2

    loc_0x802bc270: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc220
         
         if                       // unlikely
         

    loc_0x802bc4a8: // orphan
         ctc1 t6, 31
         
         cvt.w.s f4, f4
         cfc1 t6, 31
         
         t6 &= 0x78               // k0
         if                       // likely
         

    loc_0x802bc4c8: // orphan
         mfc1 t6, f4
         at = 0x8000 << 16
         goto 0x802bc4f0
         t6 |= at

    loc_0x802bc4d8: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc4c0
         // CODE XREF from fcn.802a91c8 @ 0x802bc4e8
         goto 0x802bc4f0
         t6 = 0 - 1               // s2

    loc_0x802bc4f0: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bc4d0, 0x802bc4d8
         t7 = [s1 + 0]            // t9
         at = 0x3f80 << 16
         mtc1 at, f6
         halfword [t7 + 0x48] = t6
         s0 = [s1 + 0]            // t9
         t2 = aav.0x80130000 << 16
         ctc1 t5, 31
         halfword [s0 + 0] = t8
         halfword [s0 + 2] = t9
         halfword [s0 + 4] = t0
         halfword [s0 + 6] = t1
         [s0 + 8] = 0
         halfword [s0 + 0xc] = 0
         halfword [s0 + 0xe] = 0
         swc1 f6, 0x10, s0
         t2 = [t2 - 0x739c]
         [s0 + 0x18] = 0
         [s0 + 0x1c] = 0
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 0x14] = t2
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 0x8840 << 16
         [sp + 0x2c] = v0

    loc_0x802bc554: // orphan
         a1 += 0x1740
         call 0x80040e80          // 0x80040e80(-1, 0x442f71dcfe117b48, 0x8, -1)
         a0 = v0                  // s4
         [s0 + 0x18] = v0
         t3 = 0x8840 << 16
         t3 = [t3 + 0x17e4]       // t9
         [s0 + 0x1c] = t3
         call 0x80003120          // 0x80003120(0xff, 0x442f71dcfe117b48, 0x8, -1)
         a0 = [sp + 0x2c]         // s4
         t4 = [s0 + 0x18]         // s4
         t5 = halfword [s0 + 6]
         a3 = halfword [s0 + 4]
         a0 = [t4 + 0xc]
         a1 = 0
         a2 = 0
         call 0x80038d0c          // 0x80038d0c(0xffff, 0x0, 0x0, 0xffff)

    loc_0x802bc594: // orphan
         [sp + 0x10] = t5
         t6 = [s0 + 0x18]         // s4
         a1 = 0x41f0 << 16
         a2 = 0x42c8 << 16
         a3 = 0x4648 << 16
         call 0x80038dc8          // 0x80038dc8(-1, 0x41f00000, 0x42c80000, 0x46480000)
         a0 = [t6 + 0xc]
         t7 = , unsigned  halfword [s0 + 0]
         halfword [s0 + 0x28] = 0
         [s0 + 0x2c] = 0
         t9 = t7 & 0xfffb
         t1 = t9 & 0xfffd
         halfword [s0 + 0] = t9
         halfword [s0 + 0] = t1
         t2 = t1 | 1              // lo
         halfword [s0 + 0] = t2
         t3 = [s1 + 0]            // t9
         a0 = s0
         call 0x80042fe4          // 0x80042fe4(0x104, 0x41f00000, 0x42c80000, 0x46480000)

    loc_0x802bc5e0: // orphan
         a1 = , unsigned  halfword [t3 + 0x32]
         call 0x88600074          // 0x88600074(-1, 0x0, 0x8, -1)
         a0 = s0
         t4 = [s0 + 0x1c]         // t9
         [t4 + 0x4c] = 0
         t5 = [s1 + 0]            // t9
         byte [t5 + 0x30] = 0
         t6 = [s1 + 0]            // t9
         byte [t6 + 0x31] = 0
         ra = [sp + 0x24]         // t9
         s1 = [sp + 0x20]         // t9
         s0 = [sp + 0x1c]
         ret                      // t9
         sp += 0x30

    loc_0x802bc984: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bc994: // orphan
         if                       // fcn.802c2018+0x10 // unlikely
         if                       // fcn.802c203c // unlikely

    loc_0x802bc9a0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802bc9d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bc9e4: // orphan
         
         if                       // fcn.802c25a8+0x34 // unlikely
         if                       // unlikely

    loc_0x802bc9f4: // orphan
         
         
         
         

    loc_0x802bcfac: // orphan
         t0 = v0 & 0x4000
         if                       // likely
         t1 = v0 & 0x8000

    loc_0x802bcfb8: // orphan
         // CODE XREF from fcn.802bc7b4 @ 0x802bc7d4
         // CODE XREF from fcn.802cbc34 @ +0x60
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         call 0x885002a0          // 0x885002a0(0x3, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 7
         goto 0x802bd29c
         ra = [sp + 0x14]

    loc_0x802bcfd0: // orphan
         beql t1, 0, 0x802bd29c   // unlikely
         ra = [sp + 0x14]

    loc_0x802bcfd8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         call 0x885002a0          // 0x885002a0(0x2, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         goto 0x802bd29c
         ra = [sp + 0x14]

    loc_0x802bd1b4: // orphan
         call 0x88500460          // 0x88500460(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x13
         // CODE XREF from fcn.802ac294 @ +0xd64
         goto 0x802bd1cc
         

    loc_0x802bd1cc: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bd1bc
         t0 = 0x8851 << 16
         t0 = , unsigned  byte [t0 - 0x2938] // s4
         at = 0x8851 << 16
         t1 = t0 ^ 1              // t3
         goto 0x802bd298
         byte [at - 0x2938] = t1

    loc_0x802bd230: // orphan
         call 0x88500460          // 0x88500460(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb
         goto 0x802bd29c
         ra = [sp + 0x14]

    loc_0x802bd298: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802bd080, 0x802bd088
         // CODE XREF from fcn.802afdb0 @ 0x802bd1dc
         // CODE XREF from fcn.82bea63c @ 0x802bd208
         ra = [sp + 0x14]

    loc_0x802bd29c: // orphan
         // XREFS: CODE 0x802bcf98  CODE 0x802bcfc8  CODE 0x802bcfe8  
         // XREFS: CODE 0x802bd0f4  CODE 0x802bd114  CODE 0x802bd238  
         v0 = [sp + 0x24]         // t9
         sp += 0x28
         ret                      // ra
         

    loc_0x802bd31c: // orphan
         ctc1 a0, 31
         
         cvt.w.s f4, f4
         cfc1 a0, 31
         
         a0 &= 0x78               // arg1
         if                       // likely
         

    loc_0x802bd33c: // orphan
         mfc1 a0, f4
         at = 0x8000 << 16
         goto 0x802bd364
         a0 |= at                 // arg1 // t9

    loc_0x802bd34c: // orphan
         goto 0x802bd364
         a0 = 0 - 1               // arg1 // s2

    loc_0x802bd364: // orphan
         // CODE XREFS from fcn.802afdb0 @ 0x802bd344, 0x802bd34c
         ctc1 t6, 31
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 &= 0xffff
         s2 = 0x8852 << 16

    loc_0x802bd3f8: // orphan
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x79
         call 0x8004c8c0          // 0x8004c8c0(0x79, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x38
         call 0x8004c8c0          // 0x8004c8c0(0x38, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         a0 = 0 + 0x10

    loc_0x802bd4d4: // orphan
         at = 0x8801 << 16
         [at - 0x1314] = v0
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xbf
         a0 = 0 + 0xbf
         call 0x8004c990          // 0x8004c990(0xbf, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 5
         at = 0x8801 << 16
         [at - 0x130c] = v0
         a0 = 0 + 0xbf
         call 0x8004c990          // 0x8004c990(0xbf, 0x5, 0x8, -1)
         a1 = 0 + 4
         at = 0x8801 << 16
         a0 = 0x8801 << 16
         [at - 0x1308] = v0
         a0 -= 0x12f8
         call 0x800476a0          // 0x800476a0(0x8800ed08, 0x4, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0x8801 << 16
         a0 -= 0x12f8
         call 0x800476fc          // 0x800476fc(0x8800ed08, 0x1, 0x8, -1)
         a1 = 0 + 1               // lo
         call 0x8004c8c0          // 0x8004c8c0(0x8800ed08, 0x1, 0x8, -1)
         a0 = 0 + 0x147
         call 0x8004c8c0          // 0x8004c8c0(0x147, 0x1, 0x8, -1)
         a0 = 0 + 0x148
         call 0x8004c8c0          // 0x8004c8c0(0x148, 0x1, 0x8, -1)
         a0 = 0 + 0x146
         call 0x8004c8c0          // 0x8004c8c0(0x146, 0x1, 0x8, -1)
         a0 = 0 + 0x14a
         call 0x8004c8c0          // 0x8004c8c0(0x14a, 0x1, 0x8, -1)
         a0 = 0 + 0x149
         call 0x8004c8c0          // 0x8004c8c0(0x149, 0x1, 0x8, -1)
         a0 = 0 + 0x145
         call 0x8004c8c0          // 0x8004c8c0(0x145, 0x1, 0x8, -1)
         a0 = 0 + 0x144
         call 0x8004c8c0          // 0x8004c8c0(0x144, 0x1, 0x8, -1)
         a0 = 0 + 0x39
         call 0x8004c8c0          // 0x8004c8c0(0x39, 0x1, 0x8, -1)
         a0 = 0 + 0x104           // s0
         call 0x8004c4b0          // 0x8004c4b0(0x104, 0x1, 0x8, -1)
         a0 = 0 + 0x34
         call 0x8004c4b0          // 0x8004c4b0(0x34, 0x1, 0x8, -1)
         a0 = 0 + 0x27
         call 0x8004c4b0          // 0x8004c4b0(0x27, 0x1, 0x8, -1)
         a0 = 0 + 0xd
         call 0x8004c4b0          // 0x8004c4b0(0xd, 0x1, 0x8, -1)
         a0 = 0 + 6
         call 0x8004c4b0          // 0x8004c4b0(0x6, 0x1, 0x8, -1)
         a0 = 0 + 0xc
         call 0x8004c4b0          // 0x8004c4b0(0xc, 0x1, 0x8, -1)
         a0 = 0 + 8               // a2
         call 0x8003efe0          // 0x8003efe0(0x8, 0x1, 0x8, -1)
         
         call 0x80041c98          // 0x80041c98(0x8, 0x1, 0x8, -1)

    loc_0x802bd5b0: // orphan
         a0 = 0 + 1               // lo
         at = aav.0x80130000 << 16
         [at - 0x739c] = v0
         v1 = 0x8800 << 16
         v1 += 0x68b8
         t6 = 0 + 1               // lo
         [v1 + 0] = t6
         at = 0x8800 << 16
         [at + 0x68b4] = t6
         at = 0x8851 << 16
         [at - 0x2990] = 0
         at = 0x8851 << 16
         [at - 0x298c] = 0
         at = 0x8851 << 16
         byte [at - 0x2938] = 0
         at = 0x8851 << 16
         t8 = 0 - 1               // s2
         call 0x8850c948          // 0x8850c948(0x1, 0x442f71dcfe116408, 0x8, -1)
         byte [at - 0x2937] = t8
         call 0x88504a54          // 0x88504a54(0x1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x8852 << 16
         call 0x88004014          // 0x88004014(0x1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x3018] = 0
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802bd68c: // orphan
         call 0x80047688          // 0x80047688(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x687c] = v0
         call 0x885009d0          // 0x885009d0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80008514          // 0x80008514(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x24]         // t9
         call 0x8850089c          // 0x8850089c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802bd6ac: // orphan
         call 0x800086a4          // 0x800086a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         call 0x80008574          // 0x80008574(0x2, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80047610          // 0x80047610(0x2, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8004c398          // 0x8004c398(0x2, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(0x2, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x504d << 16
         call 0x80002bf8          // 0x80002bf8(0x504d0000, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802bd6dc: // orphan
         a0 |= 0x4558             // t9
         ra = [sp + 0x1c]
         sp += 0x28
         v0 = 0 + 7
         ret
         

    loc_0x802bd788: // orphan
         [sp + 0x18] = s1
         [sp + 0x14] = s0

    loc_0x802bd790: // orphan
         [sp + 0x28] = a0
         t6 = , unsigned  byte [v0 + 0xa] // s4
         at = 0 | 0xa960
         a0 <<= 0x18              // arg1
         unsigned , hi
         a0 = , signed  a0 >> 0x18 // arg1 // t9
         t8 = a0 << 2             // arg1
         t8 += a0                 // arg1

    loc_0x802bd7b0: // orphan
         t8 <<= 2
         t8 += a0                 // arg1
         t8 <<= 3
         t8 -= a0                 // arg1

    loc_0x802bd7c0: // orphan
         t8 <<= 2
         t8 += a0                 // arg1

    loc_0x802bd7c8: // orphan
         t8 <<= 2
         t7 = lo
         t9 = t7 + t8
         t1 = 0x8851 << 16
         v1 = , unsigned  byte [v0 + 0x11] // s4
         t1 -= 0x2928
         t0 = t9 + 0xc8c
         s3 = t0 + t1
         t4 = , unsigned  byte [s3 + 0] // s4
         t2 = v1 << 2
         t3 = v0 + t2
         s0 = s3 + 4
         s2 = [t3 + 0x14]         // t9
         if                       // unlikely
         s1 = 0

    loc_0x802bd804: // orphan
         a0 = s2
         a1 = , unsigned  byte [s0 + 0]
         call 0x8004d878          // 0x8004d878(-1, 0x0, 0x8, -1)
         a2 = s0
         t5 = , unsigned  byte [s3 + 0] // s4
         s1 += 1
         s2 += 0xc80

    loc_0x802bd820: // orphan
         at = , s1 < t5
         if                       // unlikely
         s0 += 0x58

    loc_0x802bd82c: // orphan
         v0 = 0x8851 << 16
         v0 = [v0 - 0x2930]       // t9
         v1 = , unsigned  byte [v0 + 0x11] // s4

    loc_0x802bd838: // orphan
         t6 = v1 ^ 1
         byte [v0 + 0x11] = t6
         ra = [sp + 0x24]         // t9
         s3 = [sp + 0x20]         // t9
         s2 = [sp + 0x1c]
         s1 = [sp + 0x18]
         s0 = [sp + 0x14]
         ret                      // t9
         sp += 0x28

    loc_0x802bdacc: // orphan
         trunc.w.s f10, f8

    loc_0x802bdad0: // orphan
         mfc1 t8, f10
         
         a1 = t5 + t8             // arg2
         a1 <<= 0x10              // arg2
         call 0x880002f4          // 0x880002f4(-1, 0x1fffffffe0000, 0x8, -1)
         a1 = , signed  a1 >> 0x10
         ra = [sp + 0x1c]
         ldc1 f20, 0x10, sp

    loc_0x802bdaf0: // orphan
         sp += 0x38
         ret                      // ra
         

    loc_0x802bdba4: // orphan
         t5 = t1 + 0xc78

    loc_0x802bdba8: // orphan
         t3 = [t1 + 0]
         t1 += 0xc
         t4 += 0xc                // t1
         [t4 - 4] = t3
         t2 = [t1 - 8]            // t9
         [t4 + 0] = t2
         t3 = [t1 - 4]
         if                       // likely
         [t4 + 4] = t3

    loc_0x802bdbcc: // orphan
         t3 = [t1 + 0]            // t9
         [t4 + 8] = t3

    loc_0x802bdbd4: // orphan
         t2 = [t1 + 4]
         call 0x88500e80          // 0x88500e80(-1, 0x442f71dcfe116408, 0x8, -1)
         [t4 + 0xc] = t2
         goto 0x802bdbf0
         ra = [sp + 0x14]         // s0

    loc_0x802bdbf0: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bdbe0
         sp += 0x20
         ret                      // ra
         

    loc_0x802c1fe0: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc98c
         s0 += 0x29b0
         // CODE XREF from fcn.8167cea4 @ +0xa88
         if                       // likely
         s1 = 0

    loc_0x802c1fec: // orphan
         at = 0x8851 << 16
         lwc1 f24, -0x2b18, at
         at = 0x4370 << 16
         mtc1 at, f22

    loc_0x802c2104: // orphan
         ra = [sp + 0x3c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         ret
         sp += 0x40

    loc_0x802c2504: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc9d0
         [sp + 0x34] = 0
         [sp + 0x38] = 0
         a0 = 0
         a1 = 0 + 3               // arg2
         a2 = 0 + 0xc5            // arg3
         call 0x880048d4          // 0x880048d4(0x0, 0x3, 0xc5, -1)
         a3 = 0 + 0xf1
         v0 = 0x8852 << 16
         v0 += 0x29a0
         t7 = [v0 + 0]            // t9
         t6 = 0x8801 << 16
         t6 -= 0x11cc
         [t7 + 0xc] = t6
         t9 = [v0 + 0]
         t8 = 0 + 0xf9

    loc_0x802c2540: // orphan
         t1 = 0 + 0x79
         t0 = [t9 + 0xc]
         halfword [t0 + 0x10] = t8
         // CODE XREF from fcn.802afdb0 @ 0x802bc9d8
         t2 = [v0 + 0]
         t3 = [t2 + 0xc]          // t9
         halfword [t3 + 0x12] = t1
         ra = [sp + 0x44]
         sp += 0x48
         ret
         

    loc_0x802c2570: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc9dc
         [sp + 0x40] = s1
         call 0x8000b524          // 0x8000b524(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x3c] = s0
         t6 = 0x8008 << 16
         t6 = [t6 + 0x7200]       // t9
         a2 = 0x8852 << 16
         a2 += 0x3009
         v1 = , unsigned  halfword [t6 + 8]
         t7 = v1 & 0x8000
         // CODE XREF from fcn.802bc8fc @ +0xe4
         if                       // unlikely
         t4 = v1 & 0x4000

    loc_0x802c259c: // orphan
         v0 = byte [a2 + 0]
         a1 = 0 - 1               // s2
         t9 = 0x8852 << 16

    loc_0x802c2600: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802bc9ec
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x8f
         v0 = 0x8852 << 16
         v0 += 0x29a8
         t1 = 0 + 2
         t2 = 0 + 8               // a2
         s0 = 0x8852 << 16
         [v0 + 0] = t1
         halfword [v0 + 4] = t2
         s0 += 0x29b0

    loc_0x802c2628: // orphan
         s1 = 0

    loc_0x802c262c: // orphan
         t3 = halfword [s0 + 0x198]
         at = 0 - 1               // s2
         t4 = 0x8852 << 16
         beql t3, at, 0x802c266c  // unlikely
         s1 += 1

    loc_0x802c2640: // orphan
         t4 = byte [t4 + 0x3009]  // s4
         a0 = s0 + 0x194
         if                       // unlikely
         

    loc_0x802c2650: // orphan
         call 0x88505038          // 0x88505038(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 6
         goto 0x802c266c
         s1 += 1

    loc_0x802c2660: // orphan
         call 0x88505038          // "&1" // 0x88505038(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 4
         s1 += 1

    loc_0x802c266c: // orphan
         // CODE XREF from fcn.802afdb0 @ 0x802c2658
         at = 0 + 3
         if                       // likely
         s0 += 0x194

    loc_0x802c2678: // orphan
         a0 = 0 + 1               // lo
         call 0x88004990          // 0x88004990(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0 + 2
         call 0x88004990          // 0x88004990(0x2, 0x0, 0x8, -1)
         a1 = 0
         t6 = 0x8852 << 16
         t6 = byte [t6 + 0x3009]  // s4
         a0 = 0x8852 << 16
         t5 = 0 + 1               // lo
         t7 = t6 << 2
         t7 -= t6
         t7 <<= 3
         t7 += t6
         t7 <<= 2
         t7 += t6
         t7 <<= 2

    loc_0x802c26bc: // orphan
         at = 0x8800 << 16
         a0 += t7                 // arg1 // t9
         [at + 0x68b8] = t5
         call 0x80057908          // 0x80057908(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [a0 + 0x2b49] // s4
         goto 0x802c289c
         ra = [sp + 0x44]

    loc_0x802c27b0: // orphan
         a2 = 0x8852 << 16
         a2 += 0x3009             // arg3
         if                       // unlikely
         a1 = 0 - 1               // arg2 // s2

    loc_0x802c27c0: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         v0 = 0x8852 << 16
         v0 += 0x29a8
         s0 = 0x8852 << 16
         s1 = 0x8852 << 16
         [v0 + 0] = 0
         s1 += 0x3000
         s0 += 0x29b0
         a0 = s0

    loc_0x802c27e8: // orphan
         call 0x88505038          // 0x88505038(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         s0 += 0x194
         bnel s0, s1, 0x802c27e8  // likely
         a0 = s0

    loc_0x802c27fc: // orphan
         a0 = 0

    loc_0x802c2830: // orphan
         v0 = byte [a2 + 0]       // arg3
         t6 = v1 & 0x200

    loc_0x802c289c: // orphan
         // CODE XREF from fcn.802c25a8 @ 0x802c25f0
         // CODE XREF from fcn.802afdb0 @ 0x802c26d0
         // CODE XREF from fcn.802c2794 @ 0x802c27a8
         s0 = [sp + 0x3c]
         s1 = [sp + 0x40]
         ret                      // ra
         sp += 0x50

}

*/
