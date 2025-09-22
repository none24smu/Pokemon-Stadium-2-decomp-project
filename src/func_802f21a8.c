int fcn.802e1c00 (int esi, int edx) {
    loc_0x802e1c00:
        // CODE XREF from fcn.802cae7c @ +0x140
        // CALL XREF from fcn.826129ac @ +0x5b8
        0x802e1c00
        if            // unlikely
        if            // unlikely
            
    loc_0x802f041c:
        a2 = 0x8af3 << 16
        a3 = 0x4943 << 16
        a3 |= 0x414c  // arg4
        call 0x8af02c28 // 0x8af02c28(-1, 0x442f71dcfe116408, 0x8af30000, 0x4943414c)
        a2 -= 0x41f0
        ra = [sp + 0x14]
        sp += 0x18
        ret
        0x802f043c
         // } else {
    loc_0x802e1c10:
        0x802e1c10
        // CODE XREF from fcn.802cae7c @ +0x144
        0x802e1c14
        if            // unlikely
        if            // unlikely
        }
        return eax;
    loc_0x802e1c24:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f065c:
        goto 0x802f0698
        halfword [v0 + 0xe] = t7
         // do {
    loc_0x802f0698:
        // CODE XREF from fcn.802e1c00 @ 0x802f065c
        t2 = halfword [v0 + 0x10]
        a0 = 0 + 1    // arg1 // lo
        t3 = t2 - 1
        call 0x8af00130 // 0x8af00130(0x1, 0x442f71dcfe116408, 0x8, -1)
        halfword [v0 + 0x10] = t3
        ra = [sp + 0x14]
        sp += 0x28
        ret
        0x802f06b8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1c30
    loc_0x802e1c40:
        0x802e1c40
        0x802e1c44
        0x802e1c48
        0x802e1c4c
        0x802e1c50
        0x802e1c54
        if            // fcn.802f09c4+0x188 // unlikely
        if            // fcn.802f09c4+0x19c // unlikely
        // chop
            
    loc_0x802f0b60:
        a0 = a2
        goto 0x802f0c3c
        v0 = 0 - 1    // s2
        // chop
         // do {
    loc_0x802f0c3c:
        // XREFS: CODE 0x802f0aa0  CODE 0x802f0ab8  CODE 0x802f0af0
        // XREFS: CODE 0x802f0b34  CODE 0x802f0b64  CODE 0x802f0b8c
        // XREFS: CODE 0x802f0ba4  CODE 0x802f0bd0  CODE 0x802f0be8
        // XREFS: CODE 0x802f0c18  CODE 0x802f0c30
        ra = [sp + 0x14]
        sp += 0x38
        ret
        0x802f0c48
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1c64
    loc_0x802e1d1c:
        0x802e1d1c
        0x802e1d20
        0x802e1d24
        0x802e1d28
        if            // unlikely
        0x802e1d30
            
    loc_0x802f1b00:
        halfword [a1 + 0xa] = t4 // arg2
        if            // likely
        0x802f1b08
            
    loc_0x802f1b10:
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x802f1b28:
        v0 = 0
        ret           // ra
        0x802f1b30
         // } else {
    loc_0x802f1b1c:
        if            // likely
        0x802f1b20
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1d34
    loc_0x802e1d44:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f1ccc:
        t9 = t8 + 0x2d
        if            // likely
        [a2 + 0x4e0] = t9 // arg3
            
    loc_0x802f1cec:
        call 0x8af0454c // 0x8af0454c(-1, 0x442f71dcfe116408, 0x8, -1)
        halfword [sp + 0x3e] = a3
        a3 = halfword [sp + 0x3e]
         // do {
    loc_0x802f1cf8:
        // CODE XREF from fcn.802e1c00 @ 0x802f1ce4
        a0 = [sp + 0x40]
        v0 = 0
        t0 = byte [a0 + 0x16] // s4
        v1 = a0
        bnel a3, t0, 0x802f1ef0 // fcn.802cb014+0x26edc // likely
        ra = [sp + 0x1c]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1d50
    loc_0x802e1d5c:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f1d54:
        [at - 0x4080] = t3
        t4 = [s0 + 0xc]
        a0 = sp + 0x38 // arg1
        bnel t4, 0, 0x802f1d90 // likely
        t8 = [s0 + 0x10] // t9
            
    loc_0x802f1d90:
        a0 = sp + 0x38 // arg1
        bnel t8, 0, 0x802f1dc0 // likely
        t2 = , unsigned  halfword [s1 + 0x26]
            
    loc_0x802f1dc0:
        t3 = 0 + 0xff // s4
        a0 = sp + 0x38 // arg1
        bnel t2, 0, 0x802f1dd8 // likely
        t4 = [s1 + 4] // t9
            
    loc_0x802f1dd8:
        t5 = [a2 + 0x4c0] // arg3 // t9
        t6 = , unsigned  byte [sp + 0x47]
        if            // unlikely
        0x802f1de4
            
    loc_0x802f1ee0:
        if            // fcn.802cb014+0x26ed8 // likely
        t7 = 0 - 1    // s2
        // chop
            
    loc_0x802f1eec:
        // CODE XREF from fcn.802cb014 @ 0x802f1ed8
        ra = [sp + 0x1c]
        // chop
         // do {
    loc_0x802f1ef0:
        // CODE XREF from fcn.802e1c00 @ 0x802f1d48
        s0 = [sp + 0x14]
        s1 = [sp + 0x18]
        sp += 0x58
        ret           // ra
        v0 = 0
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1d68
    loc_0x802e1d74:
        0x802e1d74
        0x802e1d78
        0x802e1d7c
        0x802e1d80
        0x802e1d84
        0x802e1d88
        0x802e1d8c
        if            // unlikely
        0x802e1d94
            
    loc_0x802f2004:
        t4 = [t4 - 0x3a7c] // t9
        a3 = 0x8af3 << 16
        // chop
         // do {
    loc_0x802f200c:
        a3 -= 0x7570  // arg4
        a2 = 0 + 1    // arg3 // lo
        call 0x800495f8 // 0x800495f8(-1, 0x442f71dcfe116408, 0x1, 0xffffffffffff8a8f)
        [sp + 0x10] = t4
        goto 0x802f206c
        0x802f2020
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1d98
    loc_0x802e1da4:
        0x802e1da4
        if            // unlikely
        // CODE XREF from fcn.802cae7c @ +0x15c
        if            // unlikely
            
    loc_0x802f20f0:
        t7 = halfword [a1 + 0xa]
        t8 = [t8 - 0x404c] // t9
        at = 0x8af3 << 16
        halfword [at - 0x3a66] = t7
        at = 0x8af3 << 16
        t0 = 0x8af3 << 16
        [at - 0x3a70] = t8
        t0 = , unsigned  byte [t0 - 0x3a70] // s4
        v0 = 0 + 0x4b
        t9 = 0x8af3 << 16
        unsigned , hi
        t9 = [t9 - 0x4048]
        at = 0x8af3 << 16
        t2 = 0x8af3 << 16
        [at - 0x3a6c] = t9
        t2 = , unsigned  byte [t2 - 0x3a6c] // s4
        v1 = 0 + 0xd9
        a0 = 0 + 0x124 // arg1
        t6 = 0x8af3 << 16
        t6 = , unsigned  byte [t6 - 0x3a6f] // s4
        t1 = lo
        t8 = 0x8af3 << 16
        t8 = , unsigned  byte [t8 - 0x3a6b] // s4
        unsigned , hi
        a2 = sp + 0x10 // arg3
        t3 = lo
        t4 = t1 + t3
        t1 = 0x8af3 << 16
        div 0, t4, a0 // arg1
        t5 = lo
        t1 = , unsigned  byte [t1 - 0x3a6e] // s4
        if            // likely
        0x802f2170
            
    loc_0x802f2178:
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x802f2190:
        unsigned , hi // t9 // s2
        t4 = 0x8af3 << 16
        t4 = , unsigned  byte [t4 - 0x3a6a] // s4
        byte [sp + 0x10] = t5
        t7 = lo
        0x802f21a4
        0x802f21a8
        unsigned , hi
        t9 = lo
        t0 = t7 + t9
        t7 = 0x8af3 << 16
        div 0, t0, a0 // arg1
        t2 = lo
        t7 = , unsigned  byte [t7 - 0x3a6d] // s4
        if            // likely
        0x802f21cc
            
    loc_0x802f21d4:
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x802f21ec:
        unsigned , hi // s4 // s4
        t0 = 0x8af3 << 16
        t0 = , unsigned  byte [t0 - 0x3a69] // s4
        byte [sp + 0x11] = t2
        t3 = lo
        0x802f2200
        // chop
         // do {
    loc_0x802f2204:
        0x802f2204
        unsigned , hi
        t5 = lo
        t6 = t3 + t5
        t3 = 0 + 0x22
        div 0, t6, a0 // arg1
        t8 = lo
        byte [sp + 0x12] = t8
        if            // likely
        0x802f2228
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1db4
    loc_0x802e1dc0:
        // CODE XREF from fcn.802cae7c @ +0x160
        if            // unlikely
        0x802e1dc4
            
    loc_0x802f21e0:
        if            // likely
        0x802f21e4
         // } while (?);
        }
        return eax;
        goto loc_0x802e1dc8
    loc_0x802e1ddc:
        0x802e1ddc
        0x802e1de0
        0x802e1de4
        0x802e1de8
        0x802e1dec
        0x802e1df0
        0x802e1df4
        0x802e1df8
        0x802e1dfc
        0x802e1e00
        0x802e1e04
        0x802e1e08
        if            // fcn.802ed19c+0x5a94 // unlikely
        if            // fcn.802ed19c+0x5aa8 // unlikely
        // chop
            
    loc_0x802f2c44:
        t4 = [sp + 0x2c]
        t3 = halfword [v0 + 0xa]
        at = 0x8af3 << 16
        t5 = halfword [t4 + 0xa]
        a1 = 0x6162 << 16
        a1 |= 0x746e  // arg2
        t6 = t3 - t5
        halfword [at - 0x3f78] = t6
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x6162746e, 0x8, -1)
        a0 = [s0 + 0] // t9
        at = 0x8af3 << 16
        [at - 0x40b0] = v0
        a1 = 0x6162 << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3d88
        a1 |= 0x746e
        call 0x8ac05e40 // 0x8ac05e40(-1, 0x6162746e, 0x8af2c278, -1)
        a0 = [s0 + 0] // t9
        a0 = 0x8af3 << 16
        a1 = 0x8af3 << 16
        a1 = [a1 - 0x40b0] // s4
        call 0x8ac06400 // 0x8ac06400(0x8af30000, 0xff, 0x8af2c278, -1)
        a0 -= 0x3d88
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x40b0] // s4
        a1 = 0x6d61 << 16
        a1 |= 0x726b
        t7 = , unsigned  halfword [v0 + 2]
        t8 = t7 & 0xfffe
        halfword [v0 + 2] = t8
        call 0x8ac06d8c // 0x8ac06d8c(0x8af2c278, 0x6d61726b, 0x8af2c278, -1)
        a0 = [s0 + 0] // t9
        t9 = [sp + 0x38]
        halfword [v0 + 0x26] = 0
        a1 = 0x8af0 << 16
        halfword [v0 + 0x24] = t9
        a2 = [sp + 0x20]
        a0 = [s0 + 0] // t9
        call 0x8004e308 // 0x8004e308(-1, 0x8af00000, 0x0, -1)
        a1 += 0x3f14
        a1 = 0x736c << 16
        a1 |= 0x6964
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x736c6964, 0x0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        [sp + 0x54] = v0
        a1 += 0x4404
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af04404, 0x0, -1)
        a2 = [sp + 0x20]
        a1 = 0x8af3 << 16
        a1 -= 0x3b18
        call 0x8005053c // 0x8005053c(0xff, 0x8af2c4e8, 0x0, -1)
        a0 = [sp + 0x54] // s4
        a1 = 0x8af2 << 16
        a1 += 0x6498
        call 0x80050578 // 0x80050578(0xff, 0x8af26498, 0x0, -1)
        a0 = [sp + 0x54] // s4
        a1 = 0x6361 << 16
        a1 |= 0x7465
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x63617465, 0x0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        a1 += 0x3da8
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af03da8, 0x0, -1)
        // chop
         // do {
    loc_0x802f2d4c:
        a2 = v0       // s4
        a1 = 0x6b6f << 16
        a1 |= 0x756d  // arg2
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x6b6f756d, 0xff, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        a1 += 0x3df0
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af03df0, 0xff, -1)
        a2 = [sp + 0x20]
        a1 = 0x6675 << 16
        a1 |= 0x6b69
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1e18
    loc_0x802e1e20:
        if            // fcn.802ed19c+0x5c58 // unlikely
        if            // fcn.802ed19c+0x5c9c // unlikely
        // chop
            
    loc_0x802f2e38:
        a0 = 0x8af3 << 16
        [at - 0x40a8] = v0
        a0 = [a0 - 0x40a4] // t9
        [sp + 0x20] = a1
        call 0x8004e308 // 0x8004e308(-1, 0x442f71dcfe116408, 0x8, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a1 = [sp + 0x20]
        a0 = [a0 - 0x40a8] // t9
        call 0x8004e308 // 0x8004e308(-1, 0xfe116408, 0x0, -1)
        a2 = 0
        a1 = 0x7461 << 16
        a1 |= 0x6731
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x74616731, 0x0, -1)
        a0 = [s0 + 0] // t9
        at = 0x8af3 << 16
        [at - 0x40b8] = v0
        a1 = 0x7461 << 16
        a1 |= 0x6732
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x74616732, 0x0, -1)
        a0 = [s0 + 0] // t9
        at = 0x8af3 << 16
        [at - 0x40b4] = v0
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x4048] // t9
        a2 -= 0x4040
        a1 |= 0x7331
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617331, 0x8af2bfc0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x4048] // t9
        a2 -= 0x4010
        a1 |= 0x7332
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617332, 0x8af2bff0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x404c] // t9
        a2 -= 0x3fd8
        a1 |= 0x7333
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617333, 0x8af2c028, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x404c] // t9
        a2 -= 0x3fa8
        a1 |= 0x7334
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617334, 0x8af2c058, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x725f << 16
        a2 = 0x725f << 16
        a3 = 0x8af3 << 16
        a3 -= 0x4078
        a2 |= 0x725f
        a1 |= 0x6c5f
        call 0x8ac02c80 // 0x8ac02c80(-1, 0x725f6c5f, 0x725f725f, 0x8af2bf88)
        // chop
         // do {
    loc_0x802f2f30:
        a0 = [s0 + 0] // t9
        goto 0x802f31e0
        v0 = [sp + 0x30]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1e2c
    loc_0x802e1e34:
        // CODE XREF from fcn.802cae7c @ +0x164
        if            // unlikely
        if            // unlikely
            
    loc_0x802f2fec:
        a1 = 0x7469 << 16
        a1 |= 0x746c  // arg2
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x7469746c, 0x8, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        a1 += 0x4894
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af04894, 0x8, -1)
        a2 = [sp + 0x20]
        a1 = 0x736c << 16
        a1 |= 0x6964
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x736c6964, 0xfe116408, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        [sp + 0x54] = v0
        a1 += 0x4340
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af04340, 0xfe116408, -1)
        a2 = [sp + 0x20]
        a1 = 0x8af3 << 16
        a1 -= 0x3b18
        call 0x8005053c // 0x8005053c(0xff, 0x8af2c4e8, 0xfe116408, -1)
        a0 = [sp + 0x54] // s4
        a1 = 0x8af2 << 16
        a1 += 0x6498
        call 0x80050578 // 0x80050578(0xff, 0x8af26498, 0xfe116408, -1)
        a0 = [sp + 0x54] // s4
        a1 = 0x735f << 16
        a1 |= 0x755f
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x735f755f, 0xfe116408, -1)
        a0 = [s0 + 0] // t9
        [sp + 0x2c] = v0
        a1 = 0x735f << 16
        a1 |= 0x645f
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x735f645f, 0xfe116408, -1)
        a0 = [s0 + 0] // t9
        t3 = [sp + 0x2c] // s4
        t4 = halfword [v0 + 0xa]
        at = 0x8af3 << 16
        t5 = halfword [t3 + 0xa]
        a1 = 0x6675 << 16
        a1 |= 0x6b69
        t6 = t4 - t5
        halfword [at - 0x3f78] = t6
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x66756b69, 0xfe116408, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x8af0 << 16
        a1 += 0x4a54
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8af04a54, 0xfe116408, -1)
        a2 = 0
        a1 = 0x6d61 << 16
        a1 |= 0x726b
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x6d61726b, 0x0, -1)
        a0 = [s0 + 0] // t9
        t7 = [sp + 0x38]
        halfword [v0 + 0x26] = 0
        a1 = 0x7961 << 16
        a2 = 0x8af3 << 16
        halfword [v0 + 0x24] = t7
        a0 = [s0 + 0] // t9
        a2 -= 0x3e78
        call 0x8ac05ed4 // 0x8ac05ed4(-1, 0x79610000, 0x8af2c188, -1)
        a1 |= 0x6a31
        a1 = 0x7961 << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3e00
        a1 |= 0x6a32
        call 0x8ac05ed4 // fcn.802f3104 // 0x8ac05ed4(-1, 0x79616a32, 0x8af2c200, -1)
        a0 = [s0 + 0] // t9
        // chop
         // do {
    loc_0x802f3104:
        // CALL XREF from fcn.812f1270 @ +0x13c
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x4048] // arg4 // t9
        a2 -= 0x4040  // arg3
        a1 |= 0x7331  // arg2
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617331, 0x8af2bfc0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x4048] // t9
        a2 -= 0x4010
        a1 |= 0x7332
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617332, 0x8af2bff0, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x404c] // t9
        a2 -= 0x3fd8
        a1 |= 0x7333
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617333, 0x8af2c028, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x4d61 << 16
        a2 = 0x8af3 << 16
        a3 = 0x8af3 << 16
        a3 = [a3 - 0x404c] // t9
        a2 -= 0x3fa8
        a1 |= 0x7334
        call 0x8ac027d0 // 0x8ac027d0(-1, 0x4d617334, 0x8af2c058, -1)
        a0 = [s0 + 0] // t9
        a1 = 0x725f << 16
        a2 = 0x725f << 16
        a3 = 0x8af3 << 16
        a3 -= 0x4078
        a2 |= 0x725f
        a1 |= 0x6c5f
        call 0x8ac02c80 // 0x8ac02c80(-1, 0x725f6c5f, 0x725f725f, 0x8af2bf88)
        a0 = [s0 + 0] // t9
        call 0x80021ed8 // 0x80021ed8(-1, 0x725f6c5f, 0x725f725f, 0x8af2bf88)
        a0 = 0 + 7
        goto 0x802f31e0 // fcn.802ed19c+0x6044
        v0 = [sp + 0x30]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1e40
    loc_0x802e1e4c:
        if            // fcn.802ed19c+0x60b4 // unlikely
        if            // fcn.802f32a4 // unlikely
        // chop
            
    loc_0x802f32a4:
        // CALL XREF from fcn.8151b1b4 @ +0x718
        [sp + 0x34] = ra
        [sp + 0x2c] = s6
        [sp + 0x28] = s5
        [sp + 0x24] = s4
        [sp + 0x20] = s3
        [sp + 0x1c] = s2
        if            // likely
        [sp + 0x18] = s1
        // chop
            
    loc_0x802f32d0:
        // CODE XREF from fcn.802f32a4 @ 0x802f32bc
        t7 = 0 + 1    // lo
        [s0 + 0] = t7
        at = 0x8af3 << 16
        [at - 0x40c0] = 0
        call 0x8004c4b0 // 0x8004c4b0(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0 + 0x37
        call 0x8ac006f4 // 0x8ac006f4(0x37, 0x442f71dcfe116408, 0x8, -1)
        0x802f32ec
        s2 = s7 + 0x28
        byte [s2 + 0x4bc] = 0
        [s2 + 0x4b0] = 0
        at = 0x8af3 << 16
        [at - 0x408c] = 0
        at = 0x8af3 << 16
        call 0x8af04d68 // 0x8af04d68(0x37, 0x442f71dcfe116408, 0x8, -1)
        halfword [at - 0x3f6c] = 0
        s1 = 0x8af3 << 16
        s0 = v0       // s4
        s1 -= 0x417c
        s6 = 0 + 3
        // chop
         // do {
    loc_0x802f3320:
        s5 = 0 + 2
        s4 = 0 - 1    // s2
        s3 = 0 + 4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1e58
    loc_0x802e1e64:
        if            // fcn.802ed19c+0x624c // unlikely
        if            // unlikely
            
    loc_0x802f344c:
        ret           // ra
        v0 = 0
         // } else {
    loc_0x802e1e70:
        if            // unlikely
        0x802e1e74
        }
        return eax;
    loc_0x802e1e78:
        if            // unlikely
        0x802e1e7c
            
    loc_0x802f379c:
        a2 = 0 + 4    // arg3
        call 0x8004e308 // 0x8004e308(-1, 0x442f71dcfe116408, 0x4, -1)
        [sp + 0x3c] = a3
        a3 = [sp + 0x3c] // t9
        // CODE XREF from fcn.802f340c @ +0x384
        if            // unlikely
        a1 = 0x8af0 << 16
            
    loc_0x802f37c4:
        // CODE XREF from fcn.802e1c00 @ 0x802f37ac
        t0 = [sp + 0x68]
        a1 = 0x4a56 << 16
        a1 |= 0x4331
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564331, 0x8, -1)
        a0 = [t0 + 0] // t9
        t1 = [sp + 0x68]
        [sp + 0x38] = v0
        a1 = 0x4a56 << 16
        a1 |= 0x4332
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564332, 0x8, -1)
        a0 = [t1 + 0] // t9
        t2 = [sp + 0x68]
        [sp + 0x34] = v0
        a1 = 0x4a56 << 16
        a1 |= 0x4333
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564333, 0x8, -1)
        a0 = [t2 + 0] // t9
        a0 = [sp + 0x38] // s4
        a3 = v0       // s4
        if            // unlikely
        a1 = 0x8af0 << 16
            
    loc_0x802f382c:
        // CODE XREF from fcn.802e1c00 @ 0x802f3810
        a0 = [sp + 0x34] // s4
        if            // unlikely
        a1 = 0x8af0 << 16
            
    loc_0x802f384c:
        // CODE XREF from fcn.802e1c00 @ 0x802f3830
        if            // unlikely
        a1 = 0x8af0 << 16
            
    loc_0x802f3864:
        // CODE XREF from fcn.802e1c00 @ 0x802f384c
        t3 = [sp + 0x68]
        a1 = 0x4a56 << 16
        a1 |= 0x4531
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564531, 0x8, -1)
        a0 = [t3 + 0] // t9
        t4 = [sp + 0x68]
        [sp + 0x2c] = v0
        a1 = 0x4a56 << 16
        a1 |= 0x4532
        // CODE XREF from fcn.802db204 @ +0xf4
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564532, 0x8, -1)
        a0 = [t4 + 0] // t9
        t5 = [sp + 0x68]
        [sp + 0x28] = v0
        a1 = 0x4a56 << 16
        a1 |= 0x4533
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x4a564533, 0x8, -1)
        // CALL XREF from fcn.80798d28 @ +0x1a8
        a0 = [t5 + 0] // t9
        // chop
         // do {
    loc_0x802f38a4:
        // CALL XREF from fcn.80798d28 @ +0x1a8
        a0 = [t5 + 0] // t9
        a0 = [sp + 0x2c] // s4
        a3 = v0       // s4
        if            // unlikely
        a1 = 0x8af0 << 16
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1e80
    loc_0x802e1e8c:
        if            // fcn.802f38a4+0xfc // unlikely
        // CODE XREF from fcn.802db204 @ +0x398
        if            // fcn.802f38a4+0x110 // unlikely
        // chop
            
    loc_0x802f39b4:
        a0 = 0x5273 << 16
        call 0x8ac00ffc // 0x8ac00ffc(0x52730000, 0x442f71dcfe116408, 0x8, -1)
        a0 |= 0x635a
        t8 = [sp + 0x68]
        t7 = 0 + 1    // lo
        at = 0x8af3 << 16
        [at - 0x40c0] = t7
        a1 = 0
        call 0x8004dcfc // 0x8004dcfc(0x5273635a, 0x0, 0x8, -1)
        a0 = [t8 + 8] // t9
        v1 = [sp + 0x64]
        a2 = [sp + 0x60]
        a1 = 0 + 0x31
        t9 = , unsigned  halfword [v1 + 2]
        t1 = t9 | 1
        t2 = t1 | 2
        halfword [v1 + 2] = t1
        halfword [v1 + 2] = t2
        t3 = , unsigned  halfword [a2 + 2]
        t5 = t3 & 0xfffe
        t6 = t5 & 0xfffd
        halfword [a2 + 2] = t5
        halfword [a2 + 2] = t6
        call 0x8af04e2c // 0x8af04e2c(-1, 0x31, 0x0, -1)
        a0 = [sp + 0x70]
        v1 = [v0 + 0]
        a1 = 0 + 0x30
        t7 = , unsigned  halfword [v1 + 2]
        t9 = t7 & 0xfffe
        t0 = t9 & 0xfffd
        halfword [v1 + 2] = t9
        halfword [v1 + 2] = t0
        call 0x8af04e2c // 0x8af04e2c(0x0, 0x30, 0x0, -1)
        a0 = [sp + 0x70]
        v1 = [v0 + 0]
        at = 0x8af2 << 16
        a0 = 0 + 0x67
        t1 = , unsigned  halfword [v1 + 2]
        t3 = t1 | 1
        t4 = t3 | 2
        halfword [v1 + 2] = t3
        halfword [v1 + 2] = t4
        call 0x80021ed8 // 0x80021ed8(0x67, 0x30, 0x0, -1)
        [at + 0x646c] = 0
        // CODE XREF from fcn.802f340c @ +0x198
        ra = [sp + 0x14]
        sp += 0x70
        ret
        0x802f3a70
         // } else {
    loc_0x802e1e98:
        if            // fcn.802f38a4+0x168 // unlikely
        if            // fcn.802ed1d0+0x68b0 // unlikely
        }
        return eax;
    loc_0x802e1ea4:
        if            // unlikely
        0x802e1ea8
            
    loc_0x802f3b68:
        a1 = 0 + 0x30 // arg2
        t0 = t8 | 1   // t9
        halfword [s0 + 2] = t0
        t1 = t0 | 2   // t9
        halfword [s0 + 2] = t1
        t2 = , unsigned  halfword [s1 + 2]
        t4 = t2 & 0xfffe
        halfword [s1 + 2] = t4
        t5 = t4 & 0xfffd
        call 0x8af04e2c // 0x8af04e2c(-1, 0x30, 0x8, -1)
        halfword [s1 + 2] = t5
        s1 = [v0 + 0]
        a0 = s2
        a1 = 0 + 0x31
        t6 = , unsigned  halfword [s1 + 2]
        t8 = t6 & 0xfffe
        t9 = t8 & 0xfffd
        halfword [s1 + 2] = t8
        call 0x8af04e2c // 0x8af04e2c(-1, 0x31, 0x8, -1)
        halfword [s1 + 2] = t9
        s0 = [v0 + 0]
        v1 = 0x8af3 << 16
        a0 = s2
        t0 = , unsigned  halfword [s0 + 2]
        a1 = 0 + 0x58
        t2 = t0 | 1
        t3 = t2 | 2
        halfword [s0 + 2] = t2
        halfword [s0 + 2] = t3
        v1 = [v1 - 0x40a0] // t9
        t4 = , unsigned  halfword [v1 + 2]
        t5 = t4 | 1
        call 0x8af04e2c // 0x8af04e2c(-1, 0x58, 0x8, -1)
        halfword [v1 + 2] = t5
        s0 = [v0 + 0]
        a1 = 0x6a6f << 16
        a1 |= 0x6261
        t6 = , unsigned  halfword [s0 + 2]
        t8 = t6 | 1
        t9 = t8 | 2
        halfword [s0 + 2] = t8
        halfword [s0 + 2] = t9
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x6a6f6261, 0x8, -1)
        a0 = [v0 + 0]
        t0 = , unsigned  halfword [v0 + 2]
        a0 = 0 + 7
        t2 = t0 | 1
        halfword [v0 + 2] = t2
        t3 = t2 | 2
        call 0x80021ed8 // 0x80021ed8(0x7, 0x6a6f6261, 0x8, -1)
        halfword [v0 + 2] = t3
        ra = [sp + 0x24] // s4
        s0 = [sp + 0x18]
        s1 = [sp + 0x1c] // t9
        s2 = [sp + 0x20] // t9
        ret           // s4
        sp += 0x40
         // } else {
    loc_0x802e1eac:
        0x802e1eac
        if            // unlikely
        if            // unlikely
        }
        return eax;
    loc_0x802e1ebc:
        0x802e1ebc
        if            // unlikely
        if            // unlikely
            
    loc_0x802f3cd8:
        v0 = [v0 - 0x409c] // t9
        beql v0, 0, 0x802f3cf4 // unlikely
        t6 = halfword [v1 + 0]
            
    loc_0x802f3cf4:
        // CODE XREFS from fcn.802e1c00 @ 0x802f3ca4, 0x802f3cdc
        t9 = 0 + 0x3e8
        t7 = t6 + 1
        halfword [v1 + 0] = t7
        t8 = halfword [v1 + 0]
        at = , t8 < 0x3e9
        bnel at, 0, 0x802f3d54 // unlikely
        v0 = [sp + 0x58]
            
    loc_0x802f3d54:
        // CODE XREFS from fcn.802e1c00 @ 0x802f3d08, 0x802f3d3c
        at = 0 + 4
        t5 = [v0 + 0] // t9
        a0 = v0 + 0x28
        bnel t5, at, 0x802f44d4 // fcn.802f4374+0x160 // likely
        v0 = 0
        // chop
            
    loc_0x802f44d4:
        // XREFS: CODE 0x802f3d60  CODE 0x802f3f98  CODE 0x802f414c
        // XREFS: CODE 0x802f419c  CODE 0x802f41d0  CODE 0x802f42d0
        ra = [sp + 0x14]
        sp += 0x58
        ret
        0x802f44e0
         // } else {
    loc_0x802f3d68:
        call 0x8af05dc8 // 0x8af05dc8(-1, 0x442f71dcfe116408, 0x8, -1)
        [sp + 0x1c] = a0
        t6 = [sp + 0x1c] // t9
        a2 = 0x8af3 << 16
        a2 -= 0x40bc
        [a2 + 0] = v0
        v1 = [t6 + 0x4b4] // t9
        at = 0 + 0x42
        t8 = 0 + 1    // lo
        if            // unlikely
        a0 = 0 + 2
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1ecc
    loc_0x802e1ed8:
        0x802e1ed8
        if            // fcn.802f3dbc+0x134 // unlikely
        if            // fcn.802f3dbc+0x148 // unlikely
        // chop
            
    loc_0x802f3f04:
        a0 = 0 + 1    // lo
        t7 = 0x8af3 << 16
        t7 = [t7 - 0x40bc] // s4
        t9 = [sp + 0x1c]
        t1 = 0x8af3 << 16
        t8 = [t7 + 0x10]
        [t9 + 0x4b8] = t8
        t1 = [t1 - 0x40bc] // s4
        t3 = [sp + 0x1c] // t9
        t2 = [t1 + 0x1c] // t9
        goto 0x802f44c8 // fcn.802f4374+0x154
        [t3 + 0x4c0] = t2
        // chop
         // do {
    loc_0x802f44c8:
        // XREFS(31)
        at = 0x8af3 << 16
        [at - 0x4080] = 0
        v0 = 0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1ee8
    loc_0x802e1ef0:
        if            // fcn.802f407c+0x8 // unlikely
        if            // fcn.802f407c+0x6c // unlikely
        // chop
            
    loc_0x802f40e8:
        t4 = , unsigned  halfword [a1 + 2]
        // chop
         // do {
    loc_0x802f40ec:
        a0 = 0 + 0xc2 // arg1
        t5 = t4 & 0xfffe
        halfword [a1 + 2] = t5 // arg2
        a2 = [a2 - 0x40a8] // arg3 // t9
        t6 = , unsigned  halfword [a2 + 2]
        t7 = t6 & 0xfffe
        halfword [a2 + 2] = t7 // arg3
        v0 = [v0 - 0x40b0] // t9
        t8 = , unsigned  halfword [v0 + 2]
        t9 = t8 & 0xfffe
        call 0x8af00130 // 0x8af00130(0xc2, 0x442f71dcfe116408, -1, -1)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802e1efc
    loc_0x802e1f0c:
        0x802e1f0c
        0x802e1f10
        0x802e1f14
        if            // fcn.802f3dbc+0x5a0 // unlikely
        if            // fcn.802f4374+0x10c // unlikely
        // chop
            
    loc_0x802f4480:
        a0 -= 0x40b4  // arg1
        a3 = 0xffff << 16
        [t6 + 0x2c] = v1
        t7 = [a0 + 0] // arg1 // t9
        a3 |= 0xff    // arg4
        a2 = 0x8af3 << 16
        [t7 + 0x28] = a3
        t8 = [a0 + 0] // arg1 // t9
        a1 = 0x8af3 << 16
        [t8 + 0x2c] = a3
        a2 = [a2 - 0x40a8] // arg3 // t9
        t9 = , unsigned  halfword [a2 + 2]
        t1 = t9 & t0
        halfword [a2 + 2] = t1 // arg3
        a1 = [a1 - 0x40a4] // arg2 // t9
        t2 = , unsigned  halfword [a1 + 2]
        t3 = t2 | 1
        halfword [a1 + 2] = t3 // arg2
        // chop
    loc_0x802e1f24: // orphan
             if                       // unlikely
             if                       // unlikely

    loc_0x802e1f30: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1f4c: // orphan
         if                       // unlikely
         

    loc_0x802e1f54: // orphan
         
         
         
         
         if                       // fcn.802ed19c+0x795c // unlikely
         if                       // fcn.802ed19c+0x7970 // unlikely

    loc_0x802e1f70: // orphan
         if                       // fcn.802ed2a4+0x7940 // unlikely
         

    loc_0x802e1f78: // orphan
         
         
         
         
         if                       // fcn.802ed2a4+0x7bb8 // unlikely
         if                       // fcn.802ed2a4+0x7bdc // unlikely

    loc_0x802e1f94: // orphan
         if                       // fcn.802ed2a4+0x7e04 // unlikely
         

    loc_0x802e1f9c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.802cae7c @ +0x174
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1fe8: // orphan
         // CODE XREF from fcn.802cae7c @ +0x178
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1ff4: // orphan
         if                       // unlikely
         

    loc_0x802e1ffc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e2008: // orphan
         if                       // unlikely
         

    loc_0x802e2010: // orphan
         
         
         
         // CODE XREF from fcn.802cae7c @ +0x17c
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e2034: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e2050: // orphan
         // CODE XREF from fcn.802cae7c @ +0x180
         if                       // fcn.802ed2a4+0x9af0 // unlikely
         if                       // unlikely

    loc_0x802e205c: // orphan
         if                       // fcn.802f6dc4+0xc // unlikely
         if                       // fcn.802f6dc4+0x20 // unlikely

    loc_0x802e2068: // orphan
         if                       // fcn.802f7080+0xcc // unlikely
         if                       // fcn.802f7080+0xf0 // unlikely

    loc_0x802e2074: // orphan
         if                       // fcn.802ed1d0+0xa018 // unlikely
         if                       // fcn.802ed1d0+0xa03c // unlikely

    loc_0x802e2080: // orphan
         
         if                       // unlikely
         if                       // fcn.802ed2a4+0xa0e8 // unlikely

    loc_0x802e2090: // orphan
         if                       // fcn.802ed2a4+0xa140 // unlikely
         // CODE XREF from fcn.802cae7c @ +0x184
         

    loc_0x802e2098: // orphan
         if                       // fcn.802ed2a4+0xa198 // unlikely
         if                       // fcn.802ed2a4+0xa1bc // unlikely

    loc_0x802e20a4: // orphan
         if                       // fcn.802ed2a4+0xa224 // unlikely
         if                       // fcn.802ed2a4+0xa238 // unlikely

    loc_0x802f0520: // orphan
         call 0x80044734          // 0x80044734(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = v0
         t7 = [sp + 0x44]         // t3
         at = 0 + 3
         t6 = halfword [sp + 0x3c]
         t8 = t7 << 1
         div 0, t8, at
         v0 = [sp + 0x2c]         // s4
         v1 = [sp + 0x4c]
         t9 = lo
         a2 = [sp + 0x38]         // s4
         a1 = t6 + t9
         a1 <<= 0x10
         t3 = 0x20 << 16
         v1 += v0                 // s4
         [sp + 0x10] = v1
         [sp + 0x18] = t3
         a1 = , signed  a1 >> 0x10
         a0 = halfword [sp + 0x3e]
         a3 = halfword [sp + 0x32] // s4
         call 0x80044734          // 0x80044734(0xffff, 0xffff0000, 0xff, 0xff)
         [sp + 0x14] = a2
         ra = [sp + 0x24]         // s4
         sp += 0x50
         ret                      // s4
         

    loc_0x802f1b24: // orphan
         break 6

    loc_0x802f1b70: // orphan
         v0 = 0
         [a1 + 0x28] = v0         // arg2
         [a1 + 0x2c] = v0         // arg2
         ret                      // ra
         v0 = 0

    loc_0x802f1d10: // orphan
         t1 = , unsigned  byte [s0 + 0]
         t2 = byte [v1 + 4]       // s4

    loc_0x802f1d18: // orphan
         a0 = s1
         bnel t1, t2, 0x802f1d3c  // likely
         v0 += 1

    loc_0x802f1d24: // orphan
         [sp + 0x34] = v0
         call 0x8af04530          // 0x8af04530(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = v1
         v0 = [sp + 0x34]         // s4
         v1 = [sp + 0x28]
         v0 += 1

    loc_0x802f1d3c: // orphan
         at = 0 + 0xa
         if                       // likely
         v1 += 1

    loc_0x802f1d48: // orphan
         goto 0x802f1ef0          // fcn.802cb014+0x26edc
         ra = [sp + 0x1c]         // t9

    loc_0x802f1db0: // orphan
         a2 = [sp + 0x54]         // s4
         t1 = t9 + t0
         halfword [at + 0x6468] = t1

    loc_0x802f1dbc: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f1d84
         t2 = , unsigned  halfword [s1 + 0x26]

    loc_0x802f1e20: // orphan
         t3 = [a2 + 0x4e8]        // t9
         t5 = 0 + 1               // lo
         [a2 + 0x4f8] = t5
         t4 = t3 - 0xa
         goto 0x802f1e64
         [a2 + 0x4e8] = t4

    loc_0x802f1e38: // orphan
         t6 = [a2 + 0x4dc]        // t9
         at = , v0 < t6           // lo
         beql at, 0, 0x802f1e64   // unlikely
         [a2 + 0x4f8] = 0

    loc_0x802f1e48: // orphan
         t7 = [a2 + 0x4e8]
         t9 = 0 - 1               // s2
         [a2 + 0x4f8] = t9
         t8 = t7 + 0xa            // t9
         goto 0x802f1e64
         [a2 + 0x4e8] = t8

    loc_0x802f1e64: // orphan
         // CODE XREFS from fcn.802e1c00 @ 0x802f1e30, 0x802f1e58
         v1 = [a2 + 0x4cc]
         v0 = [a2 + 0x4d0]
         t0 = v1 << 0x10
         t1 = , signed  t0 >> 0x10 // t9
         a0 = v0 << 0x10
         if                       // likely
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x802f1e80: // orphan
         if                       // fcn.802cb014+0x26e84 // unlikely
         a0 = 0 + 1               // lo

    loc_0x802f1e84: // orphan
         a0 = 0 + 1               // lo

    loc_0x802f1e88: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x54] = a2

    loc_0x802f218c: // orphan
         break 6

    loc_0x802f21cc: // orphan
         unsigned , hi            // t9 // s2
         t4 = 0x8af3 << 16
         t4 = , unsigned  byte [t4 - 0x3a6a] // s4
         byte [sp + 0x10] = t5
         t7 = lo
         
         
         unsigned , hi
         t9 = lo
         t0 = t7 + t9
         t7 = 0x8af3 << 16
         div 0, t0, a0            // arg1
         t2 = lo
         t7 = , unsigned  byte [t7 - 0x3a6d] // s4
         if                       // likely
         

    loc_0x802f21e4: // orphan
         if                       // likely
         

    loc_0x802f21e8: // orphan
         break 6

    loc_0x802f33a0: // orphan
         if                       // fcn.802ed19c+0x6218 // likely
         

    loc_0x802f33a8: // orphan
         goto 0x802f33b4          // fcn.802ed19c+0x6218
         a2 = 0 + 1               // arg3 // lo

    loc_0x802f3494: // orphan
         v1 = 0 - 1               // s2
         at = 0 + 0x4d
         if                       // unlikely
         at = 0 + 0x59

    loc_0x802f34a4: // orphan
         if                       // unlikely
         

    loc_0x802f34ac: // orphan
         goto 0x802f34d4
         v0 = [sp + 0]

    loc_0x802f34b4: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f34a4
         v0 = 0x8af2 << 16
         goto 0x802f34d4
         v0 += 0x7e30

    loc_0x802f34cc: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f349c
         v0 = 0x8af3 << 16
         v0 -= 0x7b1c

    loc_0x802f34d4: // orphan
         // CODE XREFS from fcn.802e1c00 @ 0x802f34ac, 0x802f34b8
         // CODE XREFS from fcn.802e1c00 @ 0xb8, 0x802f34f0
         a0 = [v0 + 4]
         beql a0, 0, 0x802f34fc   // unlikely
         v0 = v1

    loc_0x802f34e0: // orphan
         if                       // likely
         

    loc_0x802f34e8: // orphan
         goto 0x802f34f8
         v1 = [v0 + 0x20]         // t9

    loc_0x802f34f0: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f34e0
         goto 0x802f34d4
         v0 += 0x34

    loc_0x802f34f8: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f34e8
         v0 = v1

    loc_0x802f34fc: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f34d8
         ret                      // ra
         sp += 8

    loc_0x802f3c58: // orphan
         call 0x8ac008e4          // 0x8ac008e4(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x46] = 0
         if                       // likely
         v1 = 0x8af3 << 16

    loc_0x802f3c68: // orphan
         v1 -= 0x3cde
         t6 = halfword [v1 + 0]
         v0 = 0x8af3 << 16
         at = , t6 < 0xa
         if                       // likely
         

    loc_0x802f3c80: // orphan
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x40a0]       // t9
         if                       // unlikely
         

    loc_0x802f3c90: // orphan
         t7 = , unsigned  halfword [v0 + 2]
         t8 = t7 | 1
         halfword [v0 + 2] = t8

    loc_0x802f3c9c: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3c88
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x409c]       // t9
         beql v0, 0, 0x802f3cf4   // unlikely
         t6 = halfword [v1 + 0]

    loc_0x802f3cac: // orphan
         t9 = , unsigned  halfword [v0 + 2]
         t1 = t9 | 1
         goto 0x802f3cf0
         halfword [v0 + 2] = t1

    loc_0x802f3cbc: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3c78
         v0 = [v0 - 0x40a0]       // t9
         if                       // unlikely
         

    loc_0x802f3cc8: // orphan
         t2 = , unsigned  halfword [v0 + 2]
         t3 = t2 & 0xfffe
         halfword [v0 + 2] = t3

    loc_0x802f3cd4: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3cc0
         v0 = 0x8af3 << 16

    loc_0x802f3cf0: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3cb4
         t6 = halfword [v1 + 0]

    loc_0x802f3d18: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3c60
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x40a0]       // t9
         if                       // unlikely
         

    loc_0x802f3d28: // orphan
         t1 = , unsigned  halfword [v0 + 2]
         t2 = t1 | 1
         halfword [v0 + 2] = t2

    loc_0x802f3d34: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3d20
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x409c]       // t9
         beql v0, 0, 0x802f3d54   // unlikely
         v0 = [sp + 0x58]

    loc_0x802f3d44: // orphan
         t3 = , unsigned  halfword [v0 + 2]
         t4 = t3 | 1
         halfword [v0 + 2] = t4

    loc_0x802f3d50: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3d10
         v0 = [sp + 0x58]

    loc_0x802f3d94: // orphan
         at = 0 + 0x4d
         if                       // unlikely
         t1 = 0 + 2

    loc_0x802f3da0: // orphan
         at = 0 + 0x59
         if                       // fcn.802f3dbc+0x50 // likely
         a0 = 0 + 2

    loc_0x802f3dac: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [v0 + 0] // s4
         a0 = 0 + 3
         call 0x8004c594          // 0x8004c594(0x3, 0xff, 0x8, -1)
         // CALL XREF from fcn.81ab524c @ +0x10a0
         a1 = 0 + 0x14            // arg2

    loc_0x802f3dc8: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3d8c
         t9 = [a2 + 0]
         halfword [sp + 0x46] = t8
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [t9 + 0] // s4
         a0 = 0 + 3
         call 0x8004c594          // 0x8004c594(0x3, 0xff, 0x8, -1)
         a1 = 0 + 0xb
         goto 0x802f3e0c          // fcn.802f3dbc+0x50
         

    loc_0x802f3dec: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f3d98
         t2 = [a2 + 0]            // t9
         halfword [sp + 0x46] = t1
         a0 = 0 + 2
         call 0x8004c594          // 0x8004c594(0x2, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [t2 + 0] // s4
         a0 = 0 + 3
         call 0x8004c594          // 0x8004c594(0x3, 0xff, 0x8, -1)
         a1 = 0 + 0xb

    loc_0x802f453c: // orphan
         [sp + 0x38] = s0
         call 0x8af04d68          // 0x8af04d68(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x60] = a0
         fp = 0x8af3 << 16
         s7 = 0x8af3 << 16
         s6 = 0x8af3 << 16
         s5 = 0x8af3 << 16
         s2 = 0x8af3 << 16
         s1 = v0                  // s4
         s2 -= 0x4234
         s5 -= 0x4010
         s6 -= 0x4040
         s7 -= 0x4048
         fp -= 0x3fa8
         s4 = 0 + 0x31
         s3 = 0 - 1               // s2

    loc_0x802f457c: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f461c
         s0 = halfword [s1 + 0]
         a0 = s5                  // t9
         a1 = s6
         if                       // unlikely
         a2 = 0

    loc_0x802f4590: // orphan
         if                       // likely
         a3 = 0

    loc_0x802f4598: // orphan
         v0 = [s7 + 0]
         t8 = [s2 + 0]            // t9
         t6 = 0 + 8               // a2
         t7 = 0 + 0xf
         [sp + 0x1c] = t7
         [sp + 0x10] = t6
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x20] = v0
         [sp + 0x24] = v0
         call 0x8ac0695c          // 0x8ac0695c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = t8
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x404c]       // t9
         t1 = [s2 + 0]            // t9
         a1 = 0x8af3 << 16
         t9 = 0 + 8               // a2
         t0 = 0 + 0xf
         [sp + 0x1c] = t0
         [sp + 0x10] = t9
         a1 -= 0x3fd8
         a0 = fp
         a2 = 0
         a3 = 0
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x20] = v0
         [sp + 0x24] = v0
         call 0x8ac06a2c          // 0x8ac06a2c(0x178000, 0x8af2c028, 0x0, 0x0)
         [sp + 0x28] = t1

    loc_0x802f4610: // orphan
         a0 = [sp + 0x60]         // t9
         call 0x8af06e74          // 0x8af06e74(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         goto 0x802f457c
         s1 += 2

    loc_0x802f4624: // orphan
         s0 = 0x8af3 << 16
         s0 -= 0x3d10
         t2 = [s0 + 0]            // t9
         v0 = 0x8af3 << 16
         beql t2, 0, 0x802f46f0   // unlikely
         ra = [sp + 0x5c]

    loc_0x802f463c: // orphan
         v0 = halfword [v0 - 0x3f6c]
         at = 0 + 1               // lo
         t3 = 0x8af3 << 16
         if                       // unlikely
         

    loc_0x802f4650: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x802f4658: // orphan
         if                       // unlikely
         

    loc_0x802f4660: // orphan
         goto 0x802f46f0
         ra = [sp + 0x5c]

    loc_0x802f4668: // orphan
         t3 = [t3 - 0x4094]       // t9
         a0 = 0x8af3 << 16
         if                       // likely
         

    loc_0x802f4678: // orphan
         call 0x8ac05f00          // 0x8ac05f00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x3e78

    loc_0x802f4680: // orphan
         t4 = 0x8af3 << 16
         t4 = [t4 - 0x4090]       // t9
         a0 = 0x8af3 << 16
         bnel t4, 0, 0x802f46f0   // likely
         ra = [sp + 0x5c]

    loc_0x802f4694: // orphan
         call 0x8ac05f00          // 0x8ac05f00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x3e00
         goto 0x802f46f0
         ra = [sp + 0x5c]

    loc_0x802f46a4: // orphan
         v0 = 0x8af3 << 16
         v0 = halfword [v0 - 0x3f76]
         a0 = 0x8af3 << 16
         at = , v0 < 2
         if                       // unlikely
         

    loc_0x802f46bc: // orphan
         call 0x8ac05f00          // 0x8ac05f00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x3f68
         v0 = 0x8af3 << 16
         v0 = halfword [v0 - 0x3f76]

    loc_0x802f46cc: // orphan
         t5 = 0x8af3 << 16
         t5 = halfword [t5 - 0x3f74]
         a0 = 0x8af3 << 16
         at = , v0 < t5           // lo
         beql at, 0, 0x802f46f0   // unlikely
         ra = [sp + 0x5c]

    loc_0x802f46e4: // orphan
         call 0x8ac05f00          // 0x8ac05f00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x3ef0
         ra = [sp + 0x5c]

    loc_0x802f46f0: // orphan
         // CODE XREFS from fcn.802e1c00 @ 0x802f4660, 0x802f469c
         t6 = 0 + 1               // lo
         [s0 + 0] = t6
         s0 = [sp + 0x38]
         s1 = [sp + 0x3c]         // t9
         s2 = [sp + 0x40]
         s3 = [sp + 0x44]
         s4 = [sp + 0x48]
         s5 = [sp + 0x4c]
         s6 = [sp + 0x50]
         s7 = [sp + 0x54]         // a2
         fp = [sp + 0x58]
         ret                      // ra
         sp += 0x60

    loc_0x802f4798: // orphan
         t6 = [v0 + 0]            // t9
         a0 = 0x4742 << 16
         a0 |= 0x5345             // arg1
         beql t6, 0, 0x802f47b8   // unlikely
         ra = [sp + 0x14]

    loc_0x802f47ac: // orphan
         call 0x8ac01064          // 0x8ac01064(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 0] = 0
         ra = [sp + 0x14]

    loc_0x802f47b8: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x802f4860: // orphan
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802f5eb4: // orphan
         halfword [sp + 0x1a] = v1
         t0 = v1 << 2
         at = 0x8af3 << 16
         at += t0
         t0 = [at - 0x6f34]       // t9
         goto t0                  // t9
         

    loc_0x802f5f40: // orphan
         call 0x8af086c4          // 0x8af086c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 7
         a1 = v0 << 0x10
         v1 = 0x8af3 << 16
         v1 = halfword [v1 - 0x36a0]
         goto 0x802f5f74
         a1 = , signed  a1 >> 0x10 // s4

    loc_0x802f5f74: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f5f54
         t1 = halfword [sp + 0x1a] // v1
         a0 = 0 + 1               // lo
         if                       // likely
         

    loc_0x802f5f84: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x26] = a1
         a1 = halfword [sp + 0x26]

    loc_0x802f5f90: // orphan
         call 0x8af07ebc          // 0x8af07ebc(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x26] = a1
         call 0x8af08390          // 0x8af08390(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8af07cbc          // 0x8af07cbc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         v0 = halfword [sp + 0x26]
         sp += 0x28
         ret
         

    loc_0x802f67e8: // orphan
         a0 = 0x8af3 << 16
         v1 = , unsigned  halfword [t7 + 8]
         t8 = v1 & 0x4000
         if                       // unlikely
         

    loc_0x802f67fc: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         t9 = 0 + 7
         a1 = 0x8af3 << 16
         halfword [sp + 0x26] = t9
         goto 0x802f6c10          // fcn.802ed2a4+0x996c
         a1 = halfword [a1 - 0x348c]

    loc_0x802f6818: // orphan
         a0 = halfword [a0 - 0x34e4]
         at = 0 + 1               // lo
         t0 = v1 & 0x100
         halfword [sp + 0x1e] = a0
         if                       // unlikely
         v0 = a0

    loc_0x802f6830: // orphan
         if                       // unlikely
         t8 = v1 & 0x200

    loc_0x802f6838: // orphan
         goto 0x802f695c          // fcn.802ed2a4+0x96b8
         t5 = halfword [sp + 0x1e]

    loc_0x802f6840: // orphan
         if                       // unlikely
         t2 = v1 & 0x8000

    loc_0x802f6848: // orphan
         t1 = 0 + 1               // lo
         at = 0x8af3 << 16
         halfword [at - 0x34e4] = t1
         goto 0x802f6958          // fcn.802ed2a4+0x96b4
         a0 = 0 + 1               // arg1 // lo

    loc_0x802f685c: // orphan
         beql t2, 0, 0x802f695c   // fcn.802ed2a4+0x96b8 // unlikely
         t5 = halfword [sp + 0x1e]

    loc_0x802f6864: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc0
         a2 = 0x8af3 << 16
         t3 = 0 + 3

    loc_0x802f6874: // orphan
         at = 0x8af3 << 16
         a2 -= 0x3620
         halfword [at - 0x348c] = t3
         halfword [a2 + 0] = 0
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x3528]       // t9
         at = 0x8af3 << 16
         lwc1 f4, 0x48, v0
         trunc.w.s f6, f4
         mfc1 t5, f6
         
         halfword [at - 0x34a4] = t5
         lwc1 f8, 0x4c, v0
         at = 0x8af3 << 16

    loc_0x802f68ac: // orphan
         trunc.w.s f10, f8
         mfc1 t7, f10
         call 0x8af08ac0          // 0x8af08ac0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at - 0x34a2] = t7
         a0 = 0x8af3 << 16
         goto 0x802f6958          // fcn.802ed2a4+0x96b4
         a0 = halfword [a0 - 0x34e4] // lo

    loc_0x802f68c8: // orphan
         if                       // unlikely
         t9 = v1 & 0x8000

    loc_0x802f68d0: // orphan
         at = 0x8af3 << 16
         halfword [at - 0x34e4] = 0
         goto 0x802f6958          // fcn.802ed2a4+0x96b4
         a0 = 0

    loc_0x802f68e0: // orphan
         beql t9, 0, 0x802f695c   // fcn.802ed2a4+0x96b8 // unlikely
         t5 = halfword [sp + 0x1e]

    loc_0x802f68e8: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc0
         t0 = 0 + 4
         at = 0x8af3 << 16
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x3524]       // t9
         halfword [at - 0x348c] = t0
         at = 0x8af3 << 16
         halfword [at - 0x361e] = 0
         lwc1 f4, 0x48, v0

    loc_0x802f6b80: // orphan
         t2 = v1 & 0x4000
         t9 = halfword [t9 - 0x361e]
         at = , t9 < 0x11
         if                       // likely
         

    loc_0x802f6b94: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc1
         t0 = 0 + 1               // lo
         at = 0x8af3 << 16
         t1 = 0 + 9
         halfword [at - 0x3480] = t0
         call 0x8af09cc8          // 0x8af09cc8(0xc1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x26] = t1
         a1 = 0x8af3 << 16
         a3 = 0x8af3 << 16
         a3 -= 0x349e
         goto 0x802f6bf0
         a1 = halfword [a1 - 0x348c]

    loc_0x802f6bf0: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f6bc0
         t6 = 0x8af3 << 16
         t6 = halfword [t6 - 0x34a0]
         t4 = halfword [a3 + 0]
         at = 0x8af3 << 16
         t5 = t6 << 3
         t5 += t6
         t7 = t4 + t5
         halfword [at - 0x361e] = t7

    loc_0x802f6ccc: // orphan
         swc1 f0, 0x44, t3
         goto 0x802f6d50          // fcn.802ed2a4+0x9aac
         v0 = halfword [v0 - 0x348c]

    loc_0x802f6d38: // orphan
         at = 0x8af3 << 16
         lwc1 f0, -0x6ee4, at
         goto 0x802f6d50          // fcn.802ed2a4+0x9aac
         v0 = halfword [v0 - 0x348c]

}
