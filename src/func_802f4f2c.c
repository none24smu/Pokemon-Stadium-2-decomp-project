int fcn.802ed2a4 (int esi, int edx) {
    loc_0x802ed2a4:
        // CALL XREF from fcn.80928494 @ +0x124
        if            // fcn.802ed19c+0x795c // unlikely
        if            // unlikely
            
    loc_0x802f4b1c:
        halfword [v1 + 2] = t1
        at = 0x8af3 << 16
        a1 = 0x7478 << 16
        [at - 0x39c0] = v0
        a1 |= 0x7431  // arg2
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x74787431, 0x8, -1)
        a0 = s0
        at = 0x8af3 << 16
        a1 = 0x6d73 << 16
        [at - 0x39bc] = v0
        a1 |= 0x675f
        call 0x8ac06d8c // 0x8ac06d8c(0x104, 0x6d73675f, 0x8, -1)
        a0 = s0
         // do {
    loc_0x802f4b50:
        at = 0x8af3 << 16
        a1 = 0x6261 << 16
        [at - 0x39b8] = v0
        a1 |= 0x636b
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x6261636b, 0x8, -1)
        a0 = s0
        at = 0x8af3 << 16
        a0 = 0x8af3 << 16
        a2 = 0x776e << 16
        a3 = 0x6d73 << 16
        [at - 0x39b0] = v0
        a3 |= 0x675f
        a2 |= 0x6430
        a0 -= 0x3990
        call 0x8ac04744 // 0x8ac04744(0x8af2c670, 0x6261636b, 0x776e6430, 0x6d73675f)
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed2b0
    loc_0x802ed2bc:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f4c94:
        v1 = 0x8af3 << 16
        v1 -= 0x39b4
        [v1 + 0] = v0
        t8 = 0 + 0x36
        halfword [v0 + 0x30] = t8
        t1 = [v1 + 0] // s4
        a0 = 0x8af3 << 16
        t0 = 0 + 0xf
        a0 -= 0x39ac
        a1 = 0 + 1    // lo
        halfword [t1 + 0x32] = t0
        halfword [a0 + 0] = a1
        t2 = 0x8af2 << 16
        t2 = halfword [t2 + 0x6550]
        t3 = 0x8af3 << 16
        if            // likely
        0x802f4cd4
            
    loc_0x802f4ce0:
        call 0x8af07300 // 0x8af07300(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802f4ce4
        ra = [sp + 0x1c]
        at = 0x8af3 << 16
        halfword [at - 0x39a8] = 0
        at = 0x8af3 << 16
        t4 = 0 + 1    // lo
        s0 = [sp + 0x18]
         // do {
    loc_0x802f4d00:
        halfword [at - 0x4224] = t4
        ret           // ra
        sp += 0x30
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed2c8
    loc_0x802ed2d4:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f4dbc:
        if            // unlikely
        t4 = v0 + 1
            
    loc_0x802f4dd4:
        at = , v0 < 0x10
        if            // unlikely
        a2 = 0x8af3 << 16
            
    loc_0x802f4e24:
        a2 = 0x8af3 << 16
        a2 -= 0x3996  // arg3
        t7 = 0x8af3 << 16
        t7 = halfword [t7 - 0x3992]
        t8 = halfword [a2 + 0]
        t0 = 0x8af3 << 16
        t0 = [t0 - 0x39b0] // s4
        t9 = t7 + t8
        a1 = 0x8af3 << 16
        halfword [t0 + 0xa] = t9
        t1 = halfword [a2 + 0]
        a1 -= 0x39ac  // arg2
        bnel t1, 0, 0x802f4fa0 // likely
        t6 = halfword [a2 + 0]
            
    loc_0x802f4fa0:
        // CODE XREF from fcn.802ed2a4 @ 0x802f4f30
        bnel t6, 0, 0x802f4fb4 // likely
        v0 = halfword [sp + 0x18]
            
    loc_0x802f4fb4:
        // CODE XREF from fcn.802ed1d0 @ 0x802f4d8c
        ra = [sp + 0x14]
        sp += 0x20
        ret
        0x802f4fc0
         // } else {
    loc_0x802f4fa8:
        call 0x8af07210 // 0x8af07210(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802f4fac
        v0 = halfword [sp + 0x18]
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed2e0
    loc_0x802ed2ec:
        if            // fcn.802ed1d0+0x7ee0 // unlikely
        if            // unlikely
            
    loc_0x802f4fd4:
        [sp + 8] = a0
        a0 <<= 0x10   // arg1
        [sp + 0xc] = a1
        a1 <<= 0x10   // arg2
        a0 = , signed  a0 >> 0x10 // arg1 // t9
        if            // unlikely
        a1 = , signed  a1 >> 0x10 // arg2
            
    loc_0x802f5010:
        v0 = 0x8af2 << 16
        goto 0x802f5028
        v0 += 0x7e30
         // do {
    loc_0x802f5028:
        // CODE XREFS from fcn.802ed2a4 @ 0x802f5008, 0x802f5014, 0x802f501c
        t6 = a1 << 2  // arg2
        t6 -= a1      // arg2
        t6 <<= 2
        t6 += a1      // arg2
        t6 <<= 2
        v0 += t6
        t7 = [v0 - 0x30] // t9
        at = 0x8af2 << 16
        v0 -= 0x34
        [at + 0x6568] = t7
        t8 = [v0 + 0x14] // t9
        at = 0x8af2 << 16
        sp += 8
        [at + 0x656c] = t8
        at = 0x8af2 << 16
        ret           // ra
        [at + 0x6564] = 0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed2f8
    loc_0x802ed304:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f547c:
        halfword [t2 + 0x32] = t1
        a0 = [a0 - 0x366c] // arg1 // t9
        call 0x8af07cb0 // 0x8af07cb0(-1, 0x442f71dcfe116408, 0x8, -1)
        a2 = a1       // t0
        goto 0x802f5520
        ra = [sp + 0x14]
         // do {
    loc_0x802f5520:
        // CODE XREF from fcn.802ed2a4 @ 0x802f548c
        // CODE XREF from fcn.802ed1d0 @ 0x802f54bc
        sp += 0x18
        ret           // ra
        0x802f5528
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed310
    loc_0x802ed31c:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f56f4:
        a1 |= 0x655f  // arg2
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x442f71dcfe11655f, 0x8, -1)
        a0 = s0
        a1 = 0x8ac0 << 16
        a1 += 0x270
        a0 = v0       // s4
        call 0x8004e308 // 0x8004e308(0xff, 0x8ac00270, 0x8, -1)
        a2 = 0
        call 0x8af003a8 // 0x8af003a8(0xff, 0x8ac00270, 0x0, -1)
        a0 = 0 + 0x20 // k0
        a1 = 0x7465 << 16
        s0 = v0       // s4
        a1 |= 0x5f31
        call 0x8ac06d8c // 0x8ac06d8c(0x20, 0x74655f31, 0x0, -1)
        a0 = v0       // s4
        at = 0x8af3 << 16
        a1 = 0x7465 << 16
        [at - 0x369c] = v0
        a1 |= 0x5f32
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74655f32, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7465 << 16
        [at - 0x3698] = v0
        a1 |= 0x5f33
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74655f33, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7465 << 16
        [at - 0x3694] = v0
        a1 |= 0x5f34
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74655f34, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7465 << 16
        [at - 0x3690] = v0
        a1 |= 0x5f35
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74655f35, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7465 << 16
        [at - 0x368c] = v0
        a1 |= 0x5f36
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74655f36, 0x0, -1)
        a0 = s0       // s4
        a1 = 0x8af0 << 16
        at = 0x8af3 << 16
        a1 += 0x13d8
        a0 = 0x8af3 << 16
        [at - 0x3688] = v0
        a0 = [a0 - 0x369c] // s4
        [sp + 0x24] = a1
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x3698] // s4
        a1 = [sp + 0x24]
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x3694] // s4
        a1 = [sp + 0x24]
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x3690] // s4
        a1 = [sp + 0x24]
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x368c] // s4
        a1 = [sp + 0x24]
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x3688] // s4
        a1 = [sp + 0x24]
        call 0x8004e308 // 0x8004e308(0xff, 0x8af013d8, 0x0, -1)
        a2 = 0
        a1 = 0x706f << 16
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x706f5f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x6974 << 16
        [at - 0x3680] = v0
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x69745f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7761 << 16
        [at - 0x367c] = v0
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x77615f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x7461 << 16
        [at - 0x3678] = v0
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x74615f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x736f << 16
        [at - 0x3674] = v0
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x736f5f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x6169 << 16
        [at - 0x3670] = v0
        a1 |= 0x5f66
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x61695f66, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x626f << 16
        [at - 0x366c] = v0
        a1 |= 0x6f6b
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x626f6f6b, 0x0, -1)
        a0 = s0       // s4
        at = 0x8af3 << 16
        a1 = 0x6974 << 16
        a2 = 0x8af3 << 16
        [at - 0x3684] = v0
        a2 -= 0x3970
        a1 |= 0x656d
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x6974656d, 0x8af2c690, -1)
        a0 = s0       // s4
        a1 = 0x706f << 16
        a2 = 0x8af3 << 16
        a2 -= 0x38f8
        a1 |= 0x6b65
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x706f6b65, 0x8af2c708, -1)
        a0 = s0       // s4
        a1 = 0x7761 << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3880
        a1 |= 0x7a61
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x77617a61, 0x8af2c780, -1)
        a0 = s0       // s4
        a1 = 0x6169 << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3808
        a1 |= 0x7368
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x61697368, 0x8af2c7f8, -1)
        a0 = s0       // s4
        a1 = 0x7461 << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3790
        a1 |= 0x6d61
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x74616d61, 0x8af2c870, -1)
        a0 = s0       // s4
        a1 = 0x736f << 16
        a2 = 0x8af3 << 16
        a2 -= 0x3718
        a1 |= 0x7361
        call 0x8ac05e40 // 0x8ac05e40(0xff, 0x736f7361, 0x8af2c8e8, -1)
        a0 = s0       // s4
        call 0x8af003a8 // 0x8af003a8(0xff, 0x736f7361, 0x8af2c8e8, -1)
        a0 = 0 + 0x35
        a1 = 0x7469 << 16
        a2 = 0x7469 << 16
        a3 = 0x8af3 << 16
        s0 = v0       // s4
        a3 -= 0x3668
        a2 |= 0x7432
         // do {
    loc_0x802f5988:
        a1 |= 0x7431  // arg2
        call 0x8ac02c80 // 0x8ac02c80(-1, 0x442f71dcfe117439, 0x8, -1)
        a0 = v0       // s4
        a1 = 0x7469 << 16
        a1 |= 0x746c
        call 0x8ac06d8c // 0x8ac06d8c(0xff, 0x7469746c, 0x8, -1)
        a0 = s0
        v1 = 0x8af3 << 16
        v1 -= 0x363c
        [v1 + 0] = v0
        t0 = 0 + 0x36
        halfword [v0 + 0x30] = t0
        t3 = [v1 + 0] // s4
        t2 = 0 + 0x10
        call 0x8af07ebc // 0x8af07ebc(0x104, 0x7469746c, 0x8, -1)
        halfword [t3 + 0x32] = t2
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x3684] // s4
        at = 0x8af3 << 16
        t6 = 0 + 1    // lo
        t4 = , unsigned  halfword [v0 + 2]
        t5 = t4 & 0xfffd
        halfword [v0 + 2] = t5
        ra = [sp + 0x1c]
        halfword [at - 0x3634] = 0
        at = 0x8af3 << 16
        s0 = [sp + 0x18]
        halfword [at - 0x4224] = t6
        ret
        sp += 0x30
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed328
    loc_0x802ed334:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f698c:
        call 0x8af00130 // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0 + 0xc1
        at = 0x8af3 << 16
        t7 = 0 + 9
        halfword [at - 0x3480] = 0
        call 0x8af09cc8 // 0x8af09cc8(0xc1, 0x442f71dcfe116408, 0x8, -1)
        halfword [sp + 0x26] = t7
        a1 = 0x8af3 << 16
        goto 0x802f6c10
        a1 = halfword [a1 - 0x348c]
         // do {
    loc_0x802f6c10:
        // CODE XREF from fcn.802e1c00 @ 0x802f6810
        // CODE XREFS from fcn.802ed2a4 @ 0x802f6970, 0x802f69ac
        at = , unsigned  , a1 < 7 // arg2
        if            // likely
        v0 = a1       // t0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed340
    loc_0x802ed34c:
        if            // fcn.802f6dc4+0xac // unlikely
        if            // fcn.802f6dc4+0xf0 // unlikely
        // chop
            
    loc_0x802f6eb4:
        mfc1 t9, f10
        0x802f6eb8
        t0 = t9 << 0x10
        t1 = , signed  t0 >> 0x10 // t9
        if            // fcn.802f7080+0x58 // likely
        0x802f6ec8
        // chop
            
    loc_0x802f70d8:
        // CODE XREF from fcn.802ed2a4 @ 0x802f6d7c
        // CODE XREFS from fcn.802f6dc4 @ 0x802f6f10, 0x802f6f1c, 0x802f6f28
        call 0x8af08b74 // 0x8af08b74(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802f70dc
        v0 = 0x8af3 << 16
        v0 = halfword [v0 - 0x348c]
        at = 0 + 1    // lo
        if            // unlikely
        0x802f70f0
        // chop
            
    loc_0x802f7160:
        // CODE XREF from fcn.802f7080 @ 0x802f7104
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x34b8] // t9
        v1 = 0x8af3 << 16
        t7 = , unsigned  halfword [v0 + 2]
        // chop
         // do {
    loc_0x802f7170:
        t1 = t7 & 0xfffe
        halfword [v0 + 2] = t1
        v1 = [v1 - 0x34b0] // t9
        t3 = , unsigned  halfword [v1 + 2]
        t6 = t3 & 0xfffe
        halfword [v1 + 2] = t6
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed358
    loc_0x802ed364:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f704c:
        at = 0x3f80 << 16
        mtc1 t1, f4
        mtc1 at, f10
        cvt.s.w f0, f4
        sub.s f8, f0, f6
        c.lt.s f8, f10
        0x802f7064
        bc1fl fcn.802f7080
        lwc1 f4, 0x48, v0
        swc1 f0, 0x4c, v0
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x351c] // t9
        lwc1 f4, 0x48, v0
        // chop
         // do {
    loc_0x802f7080:
        // CALL XREF from fcn.8120dcb8 @ +0x10f0
        t2 = 0x8af3 << 16
        t2 = halfword [t2 - 0x34a4]
        trunc.w.s f6, f4
        mfc1 t6, f6
        0x802f7090
        t4 = t6 << 0x10
        t5 = , signed  t4 >> 0x10
        if            // likely
        0x802f70a0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed370
    loc_0x802ed37c:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f7384:
        a0 = v0       // s4
        a1 = 0x7769 << 16
         // do {
    loc_0x802f738c:
        a1 |= 0x5f31  // arg2
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x442f71dcfe117f39, 0x8, -1)
        a0 = [sp + 0x56c]
        a1 = 0x7469 << 16
        [sp + 0x50] = v0
        a1 |= 0x746c
        call 0x8ac06d8c // 0x8ac06d8c(0x0, 0x7469746c, 0x8, -1)
        a0 = [sp + 0x56c]
        [sp + 0x48] = v0
        t6 = 0 + 0x3b
        halfword [v0 + 0x30] = t6
        a1 = 0x736c << 16
        a1 |= 0x6966
        call 0x8ac06d8c // 0x8ac06d8c(0x0, 0x736c6966, 0x8, -1)
        a0 = [sp + 0x56c]
        [sp + 0x4c] = v0
        t9 = , unsigned  halfword [v0 + 2]
        t7 = 0 + 0x3b
        t8 = 0 + 0x1c
        t0 = t9 & 0xfffd
        halfword [v0 + 0x30] = t7
        halfword [v0 + 0x32] = t8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed388
    loc_0x802ed394:
        if            // fcn.802ed1d0+0xa948 // unlikely
        if            // unlikely
            
    loc_0x802f7b6c:
        t4 = lo
        0x802f7b70
        0x802f7b74
        div 0, t4, t5
        if            // likely
        0x802f7b80
            
    loc_0x802f7b88:
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x802f7ba0:
        v0 = lo
        at = , v0 < 8 // lo
        if            // likely
        t2 = v0       // lo
            
    loc_0x802f7bb8:
        // CODE XREF from fcn.802ed2a4 @ 0x802f7bb0
        s0 = 0x800d << 16
        s0 += 0x510
        v0 = [s0 + 0] // t9
        t8 = 0x8009 << 16
        t8 += 0x4e38
        t6 = v0 + 8
        [s0 + 0] = t6
        t7 = 0xde00 << 16
        [v0 + 0] = t7
        [v0 + 4] = t8
        a3 = [sp + 0x64]
        a0 = 0x8af3 << 16
        [sp + 0x48] = t2
        a3 <<= 2      // arg4
        a0 += a3      // arg4
        a0 = [a0 - 0x2a98] // arg1 // t9
        [sp + 0x2c] = a3
        [sp + 0x44] = t0
        a1 = 0 + 3    // arg2
        call 0x8ac010d4 // 0x8ac010d4(-1, 0x3, 0x8, 0x0)
        a2 = 0 + 4
        a0 = [sp + 0x50] // s4
        // chop
         // do {
    loc_0x802f7c10:
        // CALL XREF from fcn.81cab1c8 @ +0x3ac
        t2 = [sp + 0x48] // s4
        v0 = [s0 + 0] // t9
        t8 = s1 + 0xe
        t3 = a0 + t2  // arg1
        t4 = t3 << 2
        t9 = v0 + 8
        [s0 + 0] = t9
        t5 = t4 & 0xfff
        t6 = t5 << 0xc
        t9 = t8 << 2
        at = 0xe400 << 16
        t7 = t6 | at
        t4 = t9 & 0xfff
        t5 = t7 | t4
        t6 = a0 + 8   // arg1
        t8 = t6 << 2
        t9 = t8 & 0xfff
        t4 = s1 << 2
        [v0 + 0] = t5
        t5 = t4 & 0xfff
        t7 = t9 << 0xc
        t6 = t7 | t5
        [v0 + 4] = t6
        v0 = [s0 + 0]
        t9 = 0xe100 << 16
        t5 = 0x400 << 16
        t8 = v0 + 8
        [s0 + 0] = t8
        [v0 + 4] = 0
        [v0 + 0] = t9
        v0 = [s0 + 0]
        t5 |= 0x400
        t7 = 0xf100 << 16
        t4 = v0 + 8
        [s0 + 0] = t4
        [v0 + 4] = t5
        [v0 + 0] = t7
        t6 = [sp + 0x2c]
        a2 = 0x8af3 << 16
        [sp + 0x28] = t3
        a2 += t6      // arg3
        a2 = [a2 - 0x2aa8] // arg3 // t9
        [sp + 0x10] = 0
        a1 = s1
        call 0x8004d19c // 0x8004d19c(-1, 0x442f71dcfe117dbd, -1, -1)
        a3 = 0
        t8 = [sp + 0x2c]
        a2 = 0x8af3 << 16
        a0 = [sp + 0x28] // t3
        a2 += t8
        a2 = [a2 - 0x2a88] // t9
        a1 = s1
        a3 = 0
        call 0x8004d19c // 0x8004d19c(0xfe, 0x442f71dcfe117dbd, -1, 0x0)
        [sp + 0x10] = 0
        t9 = [sp + 0x44]
        at = 0 + 1    // lo
        v0 = [sp + 0x60]
        if            // likely
        a0 = [sp + 0x50] // s4
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed3a0
    loc_0x802ed3ac:
        if            // fcn.802f7f00+0x10 // unlikely
        if            // unlikely
            
    loc_0x802f8064:
        a2 = [sp + 0x18]
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x2c58] // t9
        t7 = , unsigned  halfword [v0 + 2]
        t8 = t7 | 2
        halfword [v0 + 2] = t8
        t9 = 0x8af2 << 16
        t9 = [t9 + 0x6940]
        // chop
         // do {
    loc_0x802f8084:
        // CALL XREF from fcn.825ec6f0 @ +0xcd4
        t3 = a2 << 7  // arg3
        v1 = 0x8af3 << 16
        if            // likely
        t4 = t3 & 0x8000
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed3b8
    loc_0x802ed3c4:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f873c:
        a2 = 0 + 1    // lo
        a0 = 0x8af3 << 16
        a0 = [a0 - 0x2c4c] // t9
        a1 = s0
        call 0x8004e308 // 0x8004e308(-1, 0x104, 0x1, -1)
         // do {
    loc_0x802f8750:
        a2 = 0 + 2
        a0 = [s1 + 0] // t9
        a1 = s0
        call 0x8004e308 // 0x8004e308(-1, 0x104, 0x2, -1)
        a2 = 0 + 3
        a0 = [s2 + 0] // t9
        a1 = s0
        call 0x8004e308 // 0x8004e308(-1, 0x104, 0x3, -1)
        a2 = 0 + 4
        a0 = [s4 + 0]
        a1 = s0
        call 0x8004e308 // 0x8004e308(0xffff0000, 0x104, 0x4, -1)
        a2 = 0 + 5
        v0 = 0x8af3 << 16
        v0 = [v0 - 0x2c54] // t9
        v1 = 0x8af3 << 16
        a2 = 0x8af3 << 16
        t3 = , unsigned  halfword [v0 + 2]
        a1 = 0x7465 << 16
        s5 = 0 - 3
        t4 = t3 & 0xfffd
        halfword [v0 + 2] = t4
        v1 = [v1 - 0x2c50] // t9
        a1 |= 0x5f31
        a0 = s3       // t9
        t5 = , unsigned  halfword [v1 + 2]
        t6 = t5 & 0xfffd
        halfword [v1 + 2] = t6
        a2 = [a2 - 0x2c4c] // t9
        t7 = , unsigned  halfword [a2 + 2]
        t8 = t7 & 0xfffd
        halfword [a2 + 2] = t8
        a3 = [s1 + 0] // t9
        t9 = , unsigned  halfword [a3 + 2]
        t2 = t9 & 0xfffd
        halfword [a3 + 2] = t2
        t0 = [s2 + 0] // t9
        t3 = , unsigned  halfword [t0 + 2]
        t4 = t3 & 0xfffd
        halfword [t0 + 2] = t4
        t1 = [s4 + 0]
        t5 = , unsigned  halfword [t1 + 2]
        t6 = t5 & 0xfffd
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x74655f31, -1, -1)
        halfword [t1 + 2] = t6
        s1 = 0x8af3 << 16
        s1 -= 0x2c3c
        a1 = 0x7465 << 16
        [s1 + 0] = v0
        a1 |= 0x5f32
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x74655f32, -1, -1)
        a0 = s3       // t9
        s2 = 0x8af3 << 16
        s0 = 0x8af0 << 16
        s2 -= 0x2c38
        s0 += 0x13d8
        [s2 + 0] = v0
        a1 = s0
        a0 = [s1 + 0] // t9
        call 0x8004e308 // 0x8004e308(-1, 0x8af013d8, -1, -1)
        a2 = 0
        a0 = [s2 + 0] // t9
        a1 = s0
        call 0x8004e308 // 0x8004e308(-1, 0x8af013d8, 0x0, -1)
        a2 = 0
        a1 = 0x626f << 16
        a1 |= 0x6f6b
        call 0x8ac06d8c // 0x8ac06d8c(-1, 0x626f6f6b, 0x0, -1)
        a0 = s3       // t9
        at = 0x8af3 << 16
        s1 = 0x8af2 << 16
        s0 = 0x8af3 << 16
        s2 = 0x8af3 << 16
        [at - 0x2c30] = v0
        s2 -= 0x2b84
        s0 -= 0x2bc0
        s1 += 0x6950
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed3d0
    loc_0x802ed3dc:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f8c64:
        0x802f8c64
        a2 = 0x8af3 << 16
        at = 0x8af2 << 16
        a2 = halfword [a2 - 0x2d00]
        goto 0x802f8ce4
        [at + 0x694c] = 0
         // do {
    loc_0x802f8ce4:
        // CODE XREF from fcn.802ed2a4 @ 0x802f8c74
        // CODE XREF from fcn.802ed1d0 @ 0x802f8ca8
        v0 = 0x8af3 << 16
        at = 0 + 0xa
        if            // unlikely
        v0 = halfword [v0 - 0x2cfc]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed3e8
    loc_0x802ed3f4:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f93dc:
        a0 = 0x8af2 << 16
        a0 = [a0 + 0x6a20] // arg1 // t9
        a1 = 0x8af3 << 16
        a1 = [a1 - 0x171c] // arg2 // t9
        call 0x8007be30 // 0x8007be30(-1, -1, 0x8, -1)
        a0 += 0x300
        goto 0x802f9414
        t7 = [sp + 0x18]
         // do {
    loc_0x802f9414:
        // CODE XREF from fcn.802ed2a4 @ 0x802f93f4
        a0 = 0x8af2 << 16
        a1 = 0x8af3 << 16
        a2 = , unsigned  byte [t7 + 2] // s4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed400
    loc_0x802ed40c:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f9664:
        a1 = a2
        t7 = [sp + 0x18]
        a3 = , unsigned  byte [t7 + 6] // s4
         // do {
    loc_0x802f9670:
        // CODE XREFS from fcn.802ed2a4 @ 0x802f9584, 0x802f95a0, 0x802f95c8, 0x802f95e4
        if            // likely
        at = , a3 < 0x33 // arg4 // lo
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed418
    loc_0x802ed424:
        if            // unlikely
        if            // unlikely
            
    loc_0x802f9a0c:
        a1 += 0x200   // arg2
        t6 = 0x8af3 << 16
        t6 = halfword [t6 - 0x1308]
        at = 0 + 1    // lo
        if            // likely
        0x802f9a20
            
    loc_0x802f9a34:
        call 0x8af0bd2c // 0x8af0bd2c(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = [sp + 0x30]
        a1 = [s0 + 0]
         // do {
    loc_0x802f9a40:
        // CODE XREF from fcn.802ed2a4 @ 0x802f9a2c
        a0 = 0 + 0x33
        call 0x8004c54c // 0x8004c54c(0x33, 0x442f71dcfe116408, 0x8, -1)
        a1 += 0x300
        a1 = [s0 + 0]
        a0 = 0 + 0x34
        call 0x8004c54c // 0x8004c54c(0x34, 0x2f, 0x8, -1)
        a1 += 0x400
        a1 = [s0 + 0]
        a0 = 0 + 0x37
        call 0x8004c54c // 0x8004c54c(0x37, 0x2f, 0x8, -1)
        a1 += 0x700
        a1 = [s0 + 0]
        a0 = 0 + 0x38
        call 0x8004c54c // 0x8004c54c(0x38, 0x2f, 0x8, -1)
        a1 += 0x800
        t7 = 0x8af2 << 16
        t7 = [t7 + 0x6940] // t9
        a0 = 0 + 0x35
        a1 = 0x8af3 << 16
        if            // unlikely
        0x802f9a90
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802ed430
    loc_0x802ed43c:
        if            // fcn.802ed1d0+0xcae0 // unlikely
        if            // fcn.80339168-0x3efa4 // unlikely
        // chop
            
    loc_0x802fa1c4:
        // CODE XREF from fcn.80339168 @ 0x80319d20
        call 0x8af01530 // 0x8af01530(-1, 0x442f71dcfe116408, 0x8, -1)
        s2 -= 1       // hi
        t7 = [s0 + 0]
        a0 = 0 + 6
        a1 = s2       // hi
        call 0x8004c874 // 0x8004c874(0x6, 0xfffffffffffffffe, 0x8, -1)
        byte [t7 + 5] = v0
        t8 = [s0 + 0]
        a0 = s3 << 0x10
        a0 = , signed  a0 >> 0x10 // t9
        call 0x8af0bb40 // 0x8af0bb40(-1, 0xfffffffffffffffe, 0x8, -1)
        [t8 + 0xc] = v0
        if            // unlikely
        t9 = 0x8af3 << 16
        // chop
            
    loc_0x802fa224:
        // CODE XREFS from fcn.80339168 @ 0x802fa1f4, 0x802fa210
        if            // unlikely
        0x802fa228
        // chop
            
    loc_0x802fa234:
        // CODE XREF from fcn.80339168 @ 0x802fa224
        if            // unlikely
        0x802fa238
        // chop
            
    loc_0x802fa244:
        // CODE XREF from fcn.80339168 @ 0x802fa234
        // CODE XREF from fcn.803199d0 @ +0x360
        if            // unlikely
        0x802fa248
        // chop
            
    loc_0x802fa254:
        // CODE XREF from fcn.80339168 @ 0x802fa244
        if            // unlikely
        0x802fa258
        // chop
            
    loc_0x802fa274:
        // CODE XREFS from fcn.80339168 @ 0x802fa254, 0x802fa264
        goto 0x802fa35c
        v0 = [s0 + 0]
        // chop
    loc_0x802ed448: // orphan
             if                       // fcn.80339168-0x3ef3c // unlikely
             if                       // fcn.80339168-0x3ef18 // unlikely

    loc_0x802ed454: // orphan
         if                       // fcn.802ed1d0+0xd0d8 // unlikely
         if                       // fcn.80339168-0x3ea5c // unlikely

    loc_0x802ed460: // orphan
         if                       // fcn.802fc120+0xb4 // unlikely
         if                       // fcn.802fc120+0xe8 // unlikely

    loc_0x802ed46c: // orphan
         if                       // fcn.80339168-0x3c548 // unlikely
         if                       // unlikely

    loc_0x802ed478: // orphan
         if                       // fcn.80339168-0x3c25c // unlikely
         if                       // unlikely

    loc_0x802ed484: // orphan
         if                       // fcn.80339168-0x3bb30 // unlikely
         if                       // fcn.80339168-0x3bafc // unlikely

    loc_0x802f4b8c: // orphan
         a1 = s0
         a1 = 0x6579 << 16
         a1 |= 0x655f
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x6579655f, 0x8, -1)
         a0 = s0
         a1 = 0x8ac0 << 16
         a1 += 0x270
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x8ac00270, 0x8, -1)
         a2 = 0
         a1 = 0x8af3 << 16

    loc_0x802f4bb8: // orphan
         a1 -= 0x39a4
         t2 = [a1 + 0]            // t9
         a2 = 0x8af3 << 16
         a2 -= 0x3996
         if                       // unlikely
         v0 = 0x8af3 << 16

    loc_0x802f4bd0: // orphan
         a2 = 0x8af3 << 16
         a2 -= 0x3996
         t3 = 0 - 0x1e0
         goto 0x802f4be8
         halfword [a2 + 0] = t3

    loc_0x802f4be4: // orphan
         halfword [a2 + 0] = 0

    loc_0x802f4be8: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f4bdc
         v0 = [v0 - 0x39b0]       // t9
         v1 = 0x8af3 << 16
         v1 -= 0x3992
         t4 = halfword [v0 + 0xa]
         t6 = halfword [a2 + 0]
         a0 = 0 + 0x35
         halfword [v1 + 0] = t4
         t5 = halfword [v1 + 0]
         t7 = t5 + t6
         halfword [v0 + 0xa] = t7
         call 0x8af003a8          // 0x8af003a8(0x35, 0x442f71dcfe116408, 0x8, -1)
         [a1 + 0] = 0
         a1 = 0x7469 << 16
         a2 = 0x8af3 << 16
         s0 = v0                  // t9
         a2 -= 0x3a60
         a1 |= 0x7431
         a0 = v0                  // t9
         call 0x8ac027d0          // 0x8ac027d0(-1, 0x74697431, 0x8af2c5a0, -1)
         a3 = 0 - 1               // s2
         a1 = 0x7469 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x3a30
         a1 |= 0x7432
         a0 = s0                  // t9
         call 0x8ac027d0          // 0x8ac027d0(-1, 0x74697432, 0x8af2c5d0, -1)
         a3 = 0 - 1               // s2
         a1 = 0x7469 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x3a00
         a1 |= 0x746c
         a0 = s0                  // t9
         call 0x8ac02770          // 0x8ac02770(-1, 0x7469746c, 0x8af2c600, -1)
         a3 = 0 + 9
         a0 = 0 + 0x11e
         call 0x8004c990          // 0x8004c990(0x11e, 0x7469746c, 0x8af2c600, 0x9)
         a1 = 0 + 3
         at = 0x8af3 << 16
         a1 = 0x7469 << 16
         [at - 0x39cc] = v0
         a1 |= 0x746c
         call 0x8ac06d8c          // 0x8ac06d8c(0x11e, 0x7469746c, 0x8af2c600, 0x9)
         a0 = s0                  // t9

    loc_0x802f4dd0: // orphan
         v0 = halfword [v0 - 0x39a8]

    loc_0x802f4df4: // orphan
         if                       // likely
         halfword [a2 + 0] = t5   // arg3

    loc_0x802f4dfc: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa9
         a2 = 0x8af3 << 16
         a2 -= 0x3996

    loc_0x802f4e0c: // orphan
         t6 = halfword [a2 + 0]
         a0 = 0 + 0xeb            // arg1
         if                       // unlikely
         

    loc_0x802f4e1c: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [a2 + 0] = 0

    loc_0x802f4e78: // orphan
         if                       // unlikely
         t6 = 0x8af2 << 16

    loc_0x802f4e80: // orphan
         goto 0x802f4ec8
         

    loc_0x802f4e88: // orphan
         t2 = [t2 + 0x63c0]       // t9
         t5 = 0 + 1               // lo
         t3 = , unsigned  halfword [t2 + 8]
         t4 = t3 & 0x200
         if                       // unlikely
         

    loc_0x802f4ea0: // orphan
         halfword [a1 + 0] = t5   // arg2
         goto 0x802f4ec8
         v0 = halfword [a1 + 0]

    loc_0x802f4eac: // orphan
         t6 = [t6 + 0x63c0]       // t9
         t7 = , unsigned  halfword [t6 + 8]
         t8 = t7 & 0x100
         if                       // unlikely
         

    loc_0x802f4ec0: // orphan
         halfword [a1 + 0] = 0    // arg2

    loc_0x802f4ec8: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f4e80, 0x802f4ea4
         if                       // unlikely
         

    loc_0x802f4ed0: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x8af07300          // 0x8af07300(0x1, 0x442f71dcfe116408, 0x8, -1)
         
         a1 = 0x8af3 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x3996
         a1 -= 0x39ac

    loc_0x802f4ef0: // orphan
         t9 = 0x8af2 << 16
         t9 = [t9 + 0x63c0]
         v0 = , unsigned  halfword [t9 + 8]
         t0 = v0 & 0x8000
         if                       // unlikely
         t4 = v0 & 0x4000

    loc_0x802f4f08: // orphan
         v0 = halfword [a1 + 0]
         at = 0x8af3 << 16
         t1 = 0 + 1               // lo
         halfword [at - 0x39aa] = v0
         at = 0x8af2 << 16
         if                       // likely
         halfword [at + 0x6550] = t1

    loc_0x802f4f24: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x802f4f30: // orphan
         goto 0x802f4fa0
         t6 = halfword [a2 + 0]

    loc_0x802f4f38: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xbe
         call 0x8af07ff0          // "$\n" // 0x8af07ff0(0xbe, 0x442f71dcfe116408, 0x8, -1)
         
         t2 = 0 + 7
         a2 = 0x8af3 << 16
         halfword [sp + 0x18] = t2
         goto 0x802f4f9c
         a2 -= 0x3996

    loc_0x802f4f5c: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xbe
         t3 = 0 + 0x24
         a2 = 0x8af3 << 16
         halfword [sp + 0x18] = t3
         goto 0x802f4f9c
         a2 -= 0x3996

    loc_0x802f4f78: // orphan
         beql t4, 0, 0x802f4fa0   // unlikely
         t6 = halfword [a2 + 0]

    loc_0x802f4f80: // orphan
         call 0x8af00130          // "$\r" // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         t5 = 0 + 1               // lo
         at = 0x8af3 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x3996
         [at - 0x39a0] = t5

    loc_0x802f4f9c: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f4f54, 0x802f4f70
         t6 = halfword [a2 + 0]

    loc_0x802f4ffc: // orphan
         at = 0 + 2
         if                       // unlikely
         v0 = 0x8af3 << 16

    loc_0x802f5008: // orphan
         goto 0x802f5028
         v0 = [sp + 4]

    loc_0x802f501c: // orphan
         goto 0x802f5028
         v0 -= 0x7d8c

    loc_0x802f5024: // orphan
         v0 -= 0x7b1c

    loc_0x802f50a0: // orphan
         v0 = 0x8af2 << 16
         goto 0x802f50c4
         v0 = [sp + 4]

    loc_0x802f50c4: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f50a4
         // CODE XREF from fcn.802ed1d0 @ 0x802f50b0
         t6 = a1 << 4             // arg2

    loc_0x802f50c8: // orphan
         t6 += a1                 // arg2
         t6 <<= 2
         v0 += t6

    loc_0x802f50d4: // orphan
         t7 = [v0 + 0x10]         // t9
         at = 0x8af2 << 16
         t9 = 0 + 1               // lo
         [at + 0x6568] = t7
         t8 = [v0 + 0x14]         // t9
         at = 0x8af2 << 16
         sp += 8
         [at + 0x656c] = t8
         at = 0x8af2 << 16
         ret                      // ra
         [at + 0x6564] = t9

    loc_0x802f5508: // orphan
         a0 = 0x8af3 << 16
         halfword [t8 + 0x32] = t7
         a0 = [a0 - 0x3670]       // arg1 // s4
         call 0x8af07cb0          // 0x8af07cb0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a2 = a1                  // t0
         ra = [sp + 0x14]

    loc_0x802f6910: // orphan
         at = 0x8af3 << 16
         trunc.w.s f6, f4
         mfc1 t2, f6
         
         halfword [at - 0x34a4] = t2

    loc_0x802f6924: // orphan
         lwc1 f8, 0x4c, v0
         at = 0x8af3 << 16
         trunc.w.s f10, f8
         mfc1 t4, f10
         
         halfword [at - 0x34a2] = t4
         at = 0x8af3 << 16
         halfword [at - 0x34a0] = 0
         at = 0x8af3 << 16
         call 0x8af08ac0          // 0x8af08ac0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at - 0x349e] = 0
         a0 = 0x8af3 << 16
         a0 = halfword [a0 - 0x34e4]

    loc_0x802f6958: // orphan
         // CODE XREFS from fcn.802e1c00 @ 0x802f6854, 0x802f68c0, 0x802f68d8
         t5 = halfword [sp + 0x1e]

    loc_0x802f695c: // orphan
         // CODE XREF from fcn.802e1c00 @ 0x802f6838
         if                       // likely
         

    loc_0x802f6964: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo

    loc_0x802f696c: // orphan
         a1 = 0x8af3 << 16
         goto 0x802f6c10
         a1 = halfword [a1 - 0x348c]

    loc_0x802f6c1c: // orphan
         t8 = a1 << 2             // arg2
         at = 0x8af3 << 16
         at += t8
         t8 = [at - 0x6f08]       // t9
         goto t8                  // t9
         

    loc_0x802f6d48: // orphan
         at = 0x8af3 << 16
         lwc1 f0, -0x6ee0, at

    loc_0x802f6d50: // orphan
         // CODE XREFS from fcn.802e1c00 @ 0x802f6cd0, 0x802f6d40
         at = 0 + 3
         if                       // unlikely
         a0 = 0x8af3 << 16

    loc_0x802f6d5c: // orphan
         at = 0 + 4
         if                       // unlikely
         at = 0 + 5

    loc_0x802f6d68: // orphan
         if                       // unlikely
         a0 = 0x8af3 << 16

    loc_0x802f6d70: // orphan
         at = 0 + 6
         if                       // unlikely
         

    loc_0x802f6d7c: // orphan
         goto 0x802f70d8          // fcn.802f7080+0x58
         

    loc_0x802f6d84: // orphan
         a0 = [a0 - 0x351c]       // arg1 // t9
         a1 = 0x3f19 << 16
         a2 = 0x3dcc << 16

    loc_0x802f6d90: // orphan
         a2 |= 0xcccd             // arg3
         a1 |= 0x999a             // arg2
         call 0x8af090b0          // 0x8af090b0(-1, 0x442f71dcfe11fd9a, 0xcccd, -1)
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x3518]       // t9
         a1 = 0x3c23 << 16
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 |= 0xd70a
         call 0x8af090b0          // 0x8af090b0(-1, 0x3c23d70a, 0x3ecccccd, -1)
         a0 += 0x40
         a0 = 0x8af3 << 16

    loc_0x802f6f30: // orphan
         a0 = [a0 - 0x351c]       // arg1 // t9
         mfc1 a1, f0
         a2 = 0x3dcc << 16
         a2 |= 0xcccd             // arg3
         call 0x8af090f0          // 0x8af090f0(-1, 0x442f71dcfe116408, 0x3dcccccd, -1)
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x3518]       // t9
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 = 0x3f80 << 16
         call 0x8af090f0          // 0x8af090f0(-1, 0x3f800000, 0x3ecccccd, -1)
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x351c]       // t9
         a1 = 0x3f8c << 16
         a2 = 0x3dcc << 16
         a2 |= 0xcccd
         a1 |= 0xcccd
         call 0x8af090f0          // 0x8af090f0(-1, 0x3f8ccccd, 0x3dcccccd, -1)

    loc_0x802f6f80: // orphan
         a0 += 0x44
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x3518]       // t9
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 = 0x3f80 << 16
         call 0x8af090f0          // 0x8af090f0(-1, 0x3f800000, 0x3ecccccd, -1)
         a0 += 0x44
         t8 = 0x8af3 << 16
         t8 = halfword [t8 - 0x34a4] // s4
         v1 = 0x8af3 << 16
         v1 -= 0x351c
         mtc1 t8, f8
         v0 = [v1 + 0]            // t9
         at = 0x3e80 << 16
         cvt.s.w f10, f8
         lwc1 f0, 0x48, v0

    loc_0x802f6fc4: // orphan
         mtc1 at, f14
         t9 = 0x8af3 << 16
         t0 = 0x8af3 << 16
         at = 0x3f80 << 16
         sub.s f4, f10, f0
         t1 = 0x8af3 << 16
         mul.s f6, f4, f14
         add.s f8, f0, f6
         swc1 f8, 0x48, v0
         t9 = halfword [t9 - 0x34a2]
         v0 = [v1 + 0]
         mtc1 t9, f10
         lwc1 f2, 0x4c, v0
         cvt.s.w f4, f10
         sub.s f6, f4, f2
         mul.s f8, f6, f14
         add.s f10, f2, f8
         swc1 f10, 0x4c, v0
         t0 = halfword [t0 - 0x34a4] // s4
         v0 = [v1 + 0]
         mtc1 at, f10
         mtc1 t0, f4
         lwc1 f6, 0x48, v0
         cvt.s.w f12, f4
         sub.s f8, f12, f6
         c.lt.s f8, f10
         
         bc1f 0x802f7044
         
         swc1 f12, 0x48, v0
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x351c]       // t9
         t1 = halfword [t1 - 0x34a2]
         lwc1 f6, 0x4c, v0

    loc_0x802f7218: // orphan
         t1 = halfword [t1 - 0x33cc]
         t2 = 0x8af3 << 16
         t2 = halfword [t2 - 0x33ca]
         halfword [at - 0x3620] = t1
         at = 0x8af3 << 16
         ret                      // ra
         halfword [at - 0x361e] = t2

    loc_0x802f73e4: // orphan
         halfword [v0 + 2] = t0
         a1 = 0x725f << 16
         a2 = 0x725f << 16
         a3 = 0x8af3 << 16
         a3 -= 0x33f8
         a2 |= 0x725f
         a1 |= 0x6c5f
         call 0x8ac02c80          // 0x8ac02c80(-1, 0x725f6c5f, 0x725f725f, 0x8af2cc08)
         a0 = [sp + 0x56c]
         a1 = 0x6162 << 16
         a1 |= 0x746e
         call 0x8ac06d8c          // 0x8ac06d8c(0x0, 0x6162746e, 0x725f725f, 0x8af2cc08)
         a0 = [sp + 0x56c]
         at = 0x8af3 << 16
         a1 = 0x6162 << 16
         a2 = 0x8af3 << 16
         [at - 0x2d98] = v0
         a2 -= 0x2d90
         a1 |= 0x746e
         call 0x8ac05e40          // 0x8ac05e40(0x0, 0x6162746e, 0x8af2d270, 0x8af2cc08)
         a0 = [sp + 0x56c]
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x2d98]       // s4
         call 0x8ac06400          // 0x8ac06400(0x8af30000, 0xff, 0x8af2d270, 0x8af2cc08)
         a0 -= 0x2d90
         a1 = 0x7961 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x2e98
         a1 |= 0x3175
         call 0x8ac05ed4          // 0x8ac05ed4(0x8af2d270, 0x79613175, 0x8af2d168, 0x8af2cc08)

    loc_0x802f7460: // orphan
         a0 = [sp + 0x56c]
         a1 = 0x7961 << 16
         a2 = 0x8af3 << 16
         a2 -= 0x2e20
         a1 |= 0x3173
         call 0x8ac05ed4          // 0x8ac05ed4(0x0, 0x79613173, 0x8af2d1e0, -1)

    loc_0x802f7478: // orphan
         a0 = [sp + 0x56c]
         v0 = [sp + 0x50]         // s4
         a0 = sp + 0x5c           // arg1
         a1 = 0 + 0x504           // arg2
         t1 = halfword [v0 + 8]
         [sp + 0x564] = t1
         t2 = halfword [v0 + 0xa]
         call 0x80075630          // 0x80075630(0x17805c, 0x504, 0x8, -1)
         [sp + 0x560] = t2
         t3 = [sp + 0x50]         // s4
         t6 = 0 + 0xd
         t7 = 0 + 0x55
         t4 = halfword [t3 + 0xc]
         t8 = 0 + 0x41
         t9 = 0 + 6
         halfword [sp + 0x5c] = t4
         t5 = halfword [t3 + 0xe]
         t0 = 0 + 3
         halfword [sp + 0x70] = t6
         [sp + 0x80] = t7
         [sp + 0x84] = t8
         [sp + 0x88] = t9
         halfword [sp + 0x98] = t0
         halfword [sp + 0x5e] = t5
         t1 = 0 + 1               // lo
         t2 = 0 + 5
         t4 = 0 + 0x41
         t5 = 0 + 0x64
         t0 = sp + 0x5c
         t9 = 0 + 0xb
         t8 = 0 + 4
         t7 = 0 + 0x64
         t6 = 0 + 0x64
         t3 = 0 + 8               // a2
         a0 = 0x8af2 << 16
         [sp + 0x60] = 0
         [sp + 0x64] = 0
         halfword [sp + 0x68] = 0

    loc_0x802f7510: // orphan
         halfword [sp + 0x6a] = 0
         halfword [sp + 0x6e] = 0
         halfword [sp + 0x9a] = t1
         [sp + 0x90] = t2
         [sp + 0x94] = 0
         halfword [sp + 0xa6] = t4
         a0 = [a0 + 0x6930]       // t9
         [sp + 0x10] = t3
         [sp + 0x24] = t6
         [sp + 0x28] = t7
         [sp + 0x2c] = t8
         [sp + 0x30] = t9
         [sp + 0x34] = t0
         [sp + 0x20] = t5
         [sp + 0x1c] = 0
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         a1 = 0 + 0xa
         a2 = [sp + 0x564]
         call 0x8af09c34          // 0x8af09c34(-1, 0xa, 0x2fff, -1)
         a3 = [sp + 0x560]
         t1 = 0x8af2 << 16
         t1 = halfword [t1 + 0x6934]
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x802f7578: // orphan
         call 0x8af09b60          // 0x8af09b60(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802f7580: // orphan
         v0 = 0x8af3 << 16
         v0 = halfword [v0 - 0x3480]
         at = 0 + 1               // lo
         a1 = 0x8af3 << 16
         if                       // likely
         

    loc_0x802f7598: // orphan
         if                       // unlikely
         t3 = 0x8af3 << 16

    loc_0x802f75a0: // orphan
         goto 0x802f763c
         t8 = 0 + 0xc4

    loc_0x802f75a8: // orphan
         a1 = halfword [a1 - 0x3620]
         a0 = 0 + 0x3b
         call 0x8004c874          // 0x8004c874(0x3b, 0xffff, 0x8, -1)
         a1 += 0x12
         a0 = 0 + 0x3d
         call 0x8004c54c          // 0x8004c54c(0x3d, 0x10011, 0x8, -1)
         a1 = v0                  // s4
         t4 = [sp + 0x48]         // s4
         t2 = 0 + 0xc4
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         halfword [t4 + 0x32] = t2
         a1 = halfword [a1 - 0x3620]
         call 0x8af01718          // 0x8af01718(0x8af30000, 0xffff, 0x8, -1)
         a0 = [a0 - 0x4570]       // t9
         goto 0x802f765c
         a1 = v0                  // s4

    loc_0x802f75ec: // orphan
         t3 = halfword [t3 - 0x361e]
         a1 = 0x8af2 << 16
         a0 = 0 + 0xc
         t5 = t3 << 1
         a1 += t5
         call 0x8004c874          // 0x8004c874(0xc, 0x8af3fffe, 0x8, -1)
         a1 = halfword [a1 + 0x63c4]
         a0 = 0 + 0x3d
         call 0x8004c54c          // 0x8004c54c(0x3d, 0xffff, 0x8, -1)
         a1 = v0                  // s4
         t7 = [sp + 0x48]         // s4
         t6 = 0 + 0xc3
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         halfword [t7 + 0x32] = t6
         a1 = halfword [a1 - 0x361e]
         call 0x8af01718          // 0x8af01718(0x8af30000, 0xffff, 0x8, -1)
         a0 -= 0x4530
         goto 0x802f765c
         a1 = v0                  // s4

    loc_0x802f763c: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f75a0
         t9 = [sp + 0x48]         // s4
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         halfword [t9 + 0x32] = t8
         a1 = halfword [a1 - 0x3620]
         call 0x8af01718          // 0x8af01718(0x8af30000, 0xffff, 0x8, -1)
         a0 = [a0 - 0x4570]       // t9
         a1 = v0                  // s4

    loc_0x802f765c: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f75e4, 0x802f7634
         a0 = 0x8af2 << 16
         call 0x8af02da4          // 0x8af02da4(0x8af20000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6930]       // t9
         v0 = 0x8af2 << 16
         v0 = [v0 + 0x6930]       // t9
         at = 0 + 6
         a0 = 0x8af3 << 16
         a1 = [v0 + 0x48]         // t9
         t0 = 0 + 0xa
         v0 += 0x28
         a1 -= 1
         div 0, a1, at
         a1 = lo
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10 // lo
         [sp + 0x58] = v0
         [sp + 0x10] = t0
         a0 -= 0x2da8
         a2 = 0 + 0x3c
         call 0x8ac0651c          // 0x8ac0651c(0x8af2d258, 0x1, 0x3c, -1)
         a3 = 0 + 3
         v1 = 0x8af2 << 16
         v1 += 0x6938
         t1 = [v1 + 0]            // t9
         v0 = [sp + 0x58]
         t4 = 0x8af3 << 16
         if                       // unlikely
         a0 = 0 + 2

    loc_0x802f76cc: // orphan
         t4 -= 0x2d18
         t5 = [t4 + 0]            // t9
         t2 = 0x8af3 << 16
         t2 -= 0x2da8
         [t2 + 0] = t5
         t5 = [t4 + 8]            // t9
         t3 = [t4 + 4]            // t9
         [t2 + 8] = t5
         t5 = , unsigned  halfword [t4 + 0xc]
         [t2 + 4] = t3
         halfword [t2 + 0xc] = t5
         [v1 + 0] = 0

    loc_0x802f76fc: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802f7b9c: // orphan
         break 6

    loc_0x802f7e88: // orphan
         t8 += 0x6454
         t7 += 0x6450
         a2 = , unsigned  halfword [v0 + 4]
         a3 = , unsigned  halfword [v0 + 6]
         [sp + 0x14] = t8
         [sp + 0x10] = t7
         a0 = 0
         call 0x8004a858          // 0x8004a858(0x0, 0x442f71dcfe116408, 0xff00, 0x0)
         a1 = 0
         ra = [sp + 0x1c]
         sp += 0x20
         v0 = 0
         ret
         

    loc_0x802f86b0: // orphan
         a0 = s3                  // t9
         at = 0x8af3 << 16
         a1 = 0x6d74 << 16
         [at - 0x2c4c] = v0
         a1 |= 0x7361             // arg2
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x6d747361, 0x8, -1)
         a0 = s3                  // t9
         s1 = 0x8af3 << 16
         s1 -= 0x2c48

    loc_0x802f86d4: // orphan
         a1 = 0x6d74 << 16
         [s1 + 0] = v0
         a1 |= 0x7362             // arg2
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x6d747362, 0x8, -1)
         a0 = s3                  // t9
         s2 = 0x8af3 << 16
         s2 -= 0x2c44
         a1 = 0x6d74 << 16
         [s2 + 0] = v0
         a1 |= 0x7370
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x6d747370, 0x8, -1)
         a0 = s3                  // t9
         s4 = 0x8af3 << 16
         s4 -= 0x2c40
         s0 = 0x8af1 << 16
         [s4 + 0] = v0
         s0 -= 0x591c
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x2c54]       // t9
         a1 = s0
         call 0x8004e308          // 0x8004e308(-1, 0x8af0a6e4, 0x8, -1)
         a2 = 0
         a0 = 0x8af3 << 16
         a0 = [a0 - 0x2c50]       // t9
         a1 = s0
         call 0x8004e308          // 0x8004e308(-1, 0x8af0a6e4, 0x0, -1)

    loc_0x802f8884: // orphan
         a0 = s3                  // t9
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s1 + 0]            // s4
         s0 += 4
         [s0 - 4] = v0
         if                       // likely
         s1 += 4

    loc_0x802f88a0: // orphan
         a1 = 0x6572 << 16
         a1 |= 0x7330
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x65727330, 0x8, -1)
         a0 = s3                  // t9
         at = 0x8af3 << 16
         a1 = 0x6572 << 16
         [at - 0x2b84] = v0
         a1 |= 0x7331
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x65727331, 0x8, -1)
         a0 = s3                  // t9
         at = 0x8af3 << 16
         a1 = 0x6572 << 16
         [at - 0x2b80] = v0
         a1 |= 0x7332
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x65727332, 0x8, -1)
         a0 = s3                  // t9
         v1 = 0x8af3 << 16
         v1 = , unsigned  halfword [v1 - 0x2cfe]
         at = 0x8af3 << 16
         s1 = [sp + 0x54]
         [at - 0x2b7c] = v0
         at = 0x8af3 << 16
         halfword [at - 0x3620] = 0
         s0 = v1 & 0xff           // s4
         halfword [s1 + 0x2c] = v1
         a0 = s0 & 0xff           // s4

    loc_0x802f8908: // orphan
         a1 = 0
         [sp + 0x30] = v1
         call 0x80063838          // 0x80063838(-1, 0x0, 0x8, -1)
         s1 += 0x28
         byte [s1 + 6] = v0
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x0, 0x8, -1)
         a1 = 0 + 1               // lo
         byte [s1 + 7] = v0
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x1, 0x8, -1)
         a1 = 0 + 2
         byte [s1 + 8] = v0
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x2, 0x8, -1)
         a1 = 0 + 3
         byte [s1 + 9] = v0
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x3, 0x8, -1)
         a1 = 0 + 4
         byte [s1 + 0xa] = v0

    loc_0x802f895c: // orphan
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 5
         byte [s1 + 0xb] = v0
         a0 = s0 & 0xff
         call 0x80063838          // 0x80063838(0x4, 0x5, 0x8, -1)
         a1 = 0 + 6
         byte [s1 + 0xc] = v0
         call 0x8006397c          // 0x8006397c(0x4, 0x6, 0x8, -1)
         a0 = s0 & 0xff
         a0 = v0 << 0x10
         call 0x8af01530          // 0x8af01530(0xff0000, 0x6, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // s4
         byte [s1 + 0xd] = v0
         call 0x800639c0          // 0x800639c0(0xff, 0x6, 0x8, -1)
         a0 = s0 & 0xff
         a0 = v0 << 0x10
         call 0x8af01530          // 0x8af01530(0xff0000, 0x6, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // s4
         s0 = 0x6162 << 16
         s0 |= 0x746e
         byte [s1 + 0xe] = v0
         a1 = s0
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x6162746e, 0x8, -1)
         a0 = s3                  // t9
         s2 = 0x8af3 << 16
         s4 = 0x8af3 << 16
         s4 -= 0x2b70
         s2 -= 0x2b78
         [s2 + 0] = v0
         a2 = s4
         a0 = s3                  // t9
         call 0x8ac05e40          // 0x8ac05e40(-1, 0x6162746e, 0x8af2d490, -1)
         a1 = s0
         a0 = s4
         call 0x8ac06400          // 0x8ac06400(0x8af2d490, 0x6162746e, 0x8af2d490, -1)
         a1 = [s2 + 0]            // s4
         t7 = , unsigned  byte [s1 + 0xe] // s4
         t8 = , unsigned  byte [s1 + 0xd] // s4
         t9 = 0 + 2
         at = 0x8af3 << 16
         if                       // unlikely
         s4 = 0 + 1               // lo

    loc_0x802f8a08: // orphan
         s4 = 0 + 1               // lo
         at = 0x8af3 << 16
         goto 0x802f8a1c
         [at - 0x2be0] = s4

    loc_0x802f8a18: // orphan
         [at - 0x2be0] = t9

    loc_0x802f8a1c: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f8a10
         call 0x8af0aaf8          // 0x8af0aaf8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a1 = 0x706f << 16
         a1 |= 0x6b65
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x706f6b65, 0x8, -1)
         a0 = s3                  // t9
         s2 = 0x8af3 << 16
         s2 -= 0x2c34
         [s2 + 0] = v0
         call 0x80041c98          // 0x80041c98(-1, 0x706f6b65, 0x8, -1)
         a0 = s4
         v1 = 0x8af3 << 16
         v1 -= 0x4578
         [v1 + 0] = v0
         a0 = v0                  // s4
         a1 = 0 + 0x60
         call 0x80042c68          // 0x80042c68(0xff, 0x60, 0x8, -1)
         a2 = 0 + 0x70
         s0 = 0x8af3 << 16
         s0 -= 0x457c
         a1 = 0x8af1 << 16
         [s0 + 0] = v0
         a1 -= 0x57b0
         a0 = [s2 + 0]            // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x8af0a850, 0x70, -1)
         a2 = 0
         a1 = 0x8af1 << 16
         a1 -= 0x5800
         call 0x80042d74          // 0x80042d74(0xff, 0x8af0a800, 0x0, -1)
         a0 = [s0 + 0]            // s4
         a0 = [s0 + 0]            // s4
         call 0x80042fbc          // 0x80042fbc(0xff, 0x8af0a800, 0x0, -1)
         a1 = [sp + 0x30]         // v1
         v1 = [s0 + 0]            // s4
         t8 = 0x8af3 << 16
         at = 0x8af3 << 16
         t2 = , unsigned  halfword [v1 + 0]
         s2 = 0x8af2 << 16
         a0 = 0 + 0xc
         t3 = t2 | 0x100
         halfword [v1 + 0] = t3
         v1 = [s0 + 0]            // s4
         t4 = , unsigned  halfword [v1 + 0]
         t5 = t4 & s5
         halfword [v1 + 0] = t5
         v1 = [s0 + 0]            // s4
         t6 = , unsigned  halfword [v1 + 0]
         t7 = t6 & 0xfffb
         halfword [v1 + 0] = t7
         t8 = [t8 - 0x2be0]       // lo
         halfword [at - 0x4538] = s4
         at = 0x8af2 << 16
         if                       // likely
         halfword [at + 0x6948] = 0

    loc_0x802f8af4: // orphan
         t9 = , unsigned  byte [s1 + 0xd] // s4
         s2 = 0x8af2 << 16
         s2 += 0x63c4
         t2 = t9 << 1
         t3 = s2 + t2
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [t3 + 0]
         a0 = 0 + 0x2f
         call 0x8004c54c          // 0x8004c54c(0x2f, 0xffff, 0x8, -1)
         a1 = v0                  // s4
         goto 0x802f8b94
         ra = [sp + 0x2c]         // t9

    loc_0x802f8b24: // orphan
         t4 = , unsigned  byte [s1 + 0xd] // s4
         s2 += 0x63c4
         a0 = 0 + 0xc
         t5 = t4 << 1
         t6 = s2 + t5
         call 0x8004c874          // 0x8004c874(0xc, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [t6 + 0]
         t7 = , unsigned  byte [s1 + 0xe] // s4
         s0 = v0                  // s4
         a0 = 0 + 0xc
         t8 = t7 << 1
         t9 = s2 + t8
         call 0x8004c874          // 0x8004c874(0xc, 0xffff, 0x8, -1)
         a1 = halfword [t9 + 0]
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6944]       // t9
         a1 = 0x8af3 << 16
         a1 -= 0x6e9c
         a2 = s0                  // s4
         a3 = v0                  // s4
         call 0x8007be30          // 0x8007be30(-1, 0x8af29164, 0xff, 0xff)
         a0 += 0x52c
         a1 = 0x8af2 << 16
         a1 = [a1 + 0x6944]       // t9
         a0 = 0 + 0x2f
         call 0x8004c54c          // 0x8004c54c(0x2f, -1, 0xff, 0xff)
         a1 += 0x52c
         ra = [sp + 0x2c]         // t9

    loc_0x802f8b94: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f8b1c
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         ret                      // ra
         sp += 0x60

    loc_0x802f8cf4: // orphan
         at = 0x8af3 << 16
         halfword [at - 0x4538] = 0

    loc_0x802f8cfc: // orphan
         at = 0 + 1               // lo

    loc_0x802f8d00: // orphan
         if                       // likely
         a0 = 0x8af3 << 16

    loc_0x802f8d08: // orphan
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x2c3c]       // t9
         v1 = 0x8af3 << 16
         t6 = , unsigned  halfword [v0 + 2]
         t7 = t6 | 1
         halfword [v0 + 2] = t7
         v1 = [v1 - 0x2c38]       // t9
         t8 = , unsigned  halfword [v1 + 2]
         t9 = t8 & 0xfffe
         goto 0x802f8d5c
         halfword [v1 + 2] = t9

    loc_0x802f8d34: // orphan
         v0 = 0x8af3 << 16
         v0 = [v0 - 0x2c3c]       // t9
         v1 = 0x8af3 << 16
         t0 = , unsigned  halfword [v0 + 2]
         t1 = t0 & 0xfffe
         halfword [v0 + 2] = t1
         v1 = [v1 - 0x2c38]       // t9
         t2 = , unsigned  halfword [v1 + 2]
         t3 = t2 | 1
         halfword [v1 + 2] = t3

    loc_0x802f8d5c: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f8d2c
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]
         a0 -= 0x2b70             // arg1
         call 0x8ac063ac          // 0x8ac063ac(0xffffd48f, 0xffff, 0x8, -1)
         halfword [sp + 0x1e] = a2
         t4 = 0x8af3 << 16
         t4 = halfword [t4 - 0x2af8]
         ra = [sp + 0x14]
         v0 = halfword [sp + 0x1e] // a2
         at = 0x8af3 << 16
         t5 = t4 + 1
         halfword [at - 0x2af8] = t5
         ret
         sp += 0x20

    loc_0x802f9420: // orphan
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x802f942c: // orphan
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = [a1 - 0x1718]       // arg2 // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x400
         goto 0x802f9484
         t8 = [sp + 0x18]

    loc_0x802f9444: // orphan
         if                       // likely
         a0 = 0x8af2 << 16

    loc_0x802f944c: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x171c]       // arg2 // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x400
         goto 0x802f9484
         t8 = [sp + 0x18]

    loc_0x802f9468: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x171c]       // arg2 // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x400
         goto 0x802f9484
         t8 = [sp + 0x18]

    loc_0x802f946c: // orphan
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0x8af3 << 16
         a1 -= 0x6dcc             // arg2
         call 0x8007be30          // 0x8007be30(-1, 0x8af29234, 0x8, -1)
         a0 += 0x400
         t8 = [sp + 0x18]

    loc_0x802f9484: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f943c, 0x802f9464
         a0 = 0x8af2 << 16
         a1 = 0x8af3 << 16
         a2 = , unsigned  byte [t8 + 3]
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x802f949c: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = [a1 - 0x1718]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x500

    loc_0x802f94ac: // orphan
         goto 0x802f94f4
         t9 = [sp + 0x18]

    loc_0x802f94b4: // orphan
         if                       // likely
         a0 = 0x8af2 << 16

    loc_0x802f94bc: // orphan
         a0 = 0x8af2 << 16

    loc_0x802f94c0: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x171c]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x500
         goto 0x802f94f4
         t9 = [sp + 0x18]

    loc_0x802f94dc: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0x8af3 << 16
         a1 -= 0x6dc8
         call 0x8007be30          // 0x8007be30(-1, 0x8af29238, 0x8, -1)
         a0 += 0x500
         t9 = [sp + 0x18]

    loc_0x802f94f4: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f94ac, 0x802f94d4
         a0 = 0x8af2 << 16
         a1 = 0x8af3 << 16
         a2 = , unsigned  byte [t9 + 4]
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x802f950c: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = [a1 - 0x1718]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x600
         goto 0x802f9564
         v0 = [sp + 0x18]

    loc_0x802f9524: // orphan
         if                       // likely
         a0 = 0x8af2 << 16

    loc_0x802f952c: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x171c]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x600
         goto 0x802f9564
         v0 = [sp + 0x18]

    loc_0x802f954c: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0x8af3 << 16
         a1 -= 0x6dc4
         call 0x8007be30          // 0x8007be30(-1, 0x8af2923c, 0x8, -1)
         a0 += 0x600
         v0 = [sp + 0x18]

    loc_0x802f9564: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f951c, 0x802f9544
         a0 = 0 + 2
         a3 = , unsigned  byte [v0 + 6]
         at = , a3 < 0x33         // lo
         if                       // likely
         

    loc_0x802f9578: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a3 - 0x32
         t0 = [sp + 0x18]
         goto 0x802f9670
         a3 = , unsigned  byte [t0 + 6] // s4

    loc_0x802f958c: // orphan
         if                       // likely
         a0 = 0 + 2

    loc_0x802f9594: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a3                  // s2
         t1 = [sp + 0x18]
         goto 0x802f9670
         a3 = , unsigned  byte [t1 + 6] // s4

    loc_0x802f95a8: // orphan
         a2 = , unsigned  byte [v0 + 7]
         a0 = 0 + 2
         at = , a2 < 0x33         // lo
         if                       // likely
         

    loc_0x802f95bc: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2 - 0x32
         t2 = [sp + 0x18]
         goto 0x802f9670
         a3 = , unsigned  byte [t2 + 6] // s4

    loc_0x802f95d0: // orphan
         if                       // unlikely
         a0 = 0 + 2

    loc_0x802f95d8: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2
         t3 = [sp + 0x18]
         goto 0x802f9670
         a3 = , unsigned  byte [t3 + 6] // s4

    loc_0x802f95ec: // orphan
         a2 = , unsigned  byte [v0 + 8] // s4
         a0 = 0 + 2
         at = , a2 < 0x33
         if                       // unlikely
         

    loc_0x802f9678: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x1718]       // arg2 // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x700
         goto 0x802f96e0
         t8 = [sp + 0x18]

    loc_0x802f9698: // orphan
         if                       // unlikely
         a0 = 0x8af2 << 16

    loc_0x802f96a0: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0 + 0x100           // arg2
         a2 = 0 + 0x3b            // arg3
         a3 = 0 + 0x39            // arg4
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x39)
         a0 += 0x700
         goto 0x802f96e0
         t8 = [sp + 0x18]

    loc_0x802f96c4: // orphan
         a0 = [a0 + 0x6a20]       // arg1 // t9
         a1 = 0 + 0x100           // arg2

    loc_0x802f96cc: // orphan
         a2 = 0 + 0x3b            // arg3
         a3 = 0 + 0x3a            // arg4
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x442f71dcfe116408, 0x3b, 0x3a)
         a0 += 0x700
         t8 = [sp + 0x18]

    loc_0x802f96e0: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f9690, 0x802f96bc
         a0 = 0x8af2 << 16
         a1 = 0x8af3 << 16
         a2 = , unsigned  byte [t8 + 7]
         if                       // likely
         at = , a2 < 0x33

    loc_0x802f96f4: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = [a1 - 0x1718]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x800
         goto 0x802f9754
         t9 = [sp + 0x18]

    loc_0x802f970c: // orphan
         if                       // unlikely
         a0 = 0x8af2 << 16

    loc_0x802f9714: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x39
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x39)
         a0 += 0x800
         goto 0x802f9754
         t9 = [sp + 0x18]

    loc_0x802f9738: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x3a
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x3a)
         a0 += 0x800
         t9 = [sp + 0x18]

    loc_0x802f9754: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f9704, 0x802f9730
         a0 = 0x8af2 << 16
         a1 = 0x8af3 << 16
         a2 = , unsigned  byte [t9 + 8] // s4
         if                       // likely
         at = , a2 < 0x33

    loc_0x802f9768: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = [a1 - 0x1718]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x900
         goto 0x802f97c8
         t0 = [sp + 0x18]

    loc_0x802f9780: // orphan
         if                       // unlikely
         a0 = 0x8af2 << 16

    loc_0x802f9788: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x39
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x39)
         a0 += 0x900
         goto 0x802f97c8
         t0 = [sp + 0x18]

    loc_0x802f97ac: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x3a
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x3a)
         a0 += 0x900
         t0 = [sp + 0x18]

    loc_0x802f97c8: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f9778, 0x802f97a4
         a0 = 0x8af2 << 16
         a1 = 0x8af3 << 16
         a2 = , unsigned  byte [t0 + 9] // s4
         if                       // likely
         at = , a2 < 0x33

    loc_0x802f97dc: // orphan
         a0 = [a0 + 0x6a20]       // t9
         a1 = [a1 - 0x1718]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0xa00
         goto 0x802f983c
         ra = [sp + 0x14]

    loc_0x802f97f4: // orphan
         if                       // unlikely
         a0 = 0x8af2 << 16

    loc_0x802f97fc: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x6a20]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x39
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x39)
         a0 += 0xa00
         goto 0x802f983c
         ra = [sp + 0x14]

    loc_0x802f9820: // orphan
         a0 = [a0 + 0x6a20]       // t9

    loc_0x802f9824: // orphan
         a1 = 0 + 0x100
         a2 = 0 + 0x3b
         a3 = 0 + 0x3a
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x100, 0x3b, 0x3a)
         a0 += 0xa00
         ra = [sp + 0x14]

    loc_0x802f983c: // orphan
         // CODE XREFS from fcn.802ed2a4 @ 0x802f97ec, 0x802f9818
         sp += 0x18
         ret                      // ra
         

    loc_0x802f9a94: // orphan
         a1 = [s0 + 0]            // s4
         a0 = 0 + 0x35
         call 0x8004c54c          // 0x8004c54c(0x35, 0xff, 0x8, -1)
         a1 += 0x500
         a1 = [s0 + 0]            // s4

    loc_0x802f9aa8: // orphan
         a0 = 0 + 0x36
         call 0x8004c54c          // 0x8004c54c(0x36, 0x442f71dcfe116408, 0x8, -1)
         a1 += 0x600
         a1 = [s0 + 0]            // s4
         a0 = 0 + 0x39
         call 0x8004c54c          // 0x8004c54c(0x39, 0xff, 0x8, -1)
         a1 += 0x900
         a1 = [s0 + 0]            // s4
         a0 = 0 + 0x3a
         call 0x8004c54c          // 0x8004c54c(0x3a, 0xff, 0x8, -1)
         a1 += 0xa00
         goto 0x802f9b14
         

    loc_0x802f9adc: // orphan
         call 0x8004c54c          // 0x8004c54c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a1 - 0x1714]       // t9
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x1714]       // t9
         call 0x8004c54c          // 0x8004c54c(-1, -1, 0x8, -1)
         a0 = 0 + 0x36
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x1714]       // t9
         call 0x8004c54c          // 0x8004c54c(0x36, -1, 0x8, -1)
         a0 = 0 + 0x39
         a1 = 0x8af3 << 16
         a1 = [a1 - 0x1714]       // t9
         call 0x8004c54c          // 0x8004c54c(0x39, -1, 0x8, -1)
         a0 = 0 + 0x3a

    loc_0x802f9b14: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f9ad4
         call 0x8af00020          // 0x8af00020(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         a0 = 0 + 0x36

    loc_0x802f9b24: // orphan
         a1 = 0x8af3 << 16
         call 0x8004c54c          // 0x8004c54c(-1, 0x8af30000, 0x8, -1)
         a1 -= 0x6d58
         a1 = 0x8af3 << 16
         a1 -= 0x6d54
         call 0x8004c54c          // 0x8004c54c(-1, 0x8af292ac, 0x8, -1)
         a0 = 0 + 0x3a
         t8 = 0x8af3 << 16
         t8 = halfword [t8 - 0x1308]
         at = 0 + 1               // lo
         a0 = 0 + 0x37
         if                       // likely
         a1 = 0x8af3 << 16

    loc_0x802f9b58: // orphan
         call 0x8004c54c          // 0x8004c54c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 -= 0x6d50
         a1 = 0x8af3 << 16
         a1 -= 0x6d4c
         call 0x8004c54c          // 0x8004c54c(-1, 0x8af292b4, 0x8, -1)
         a0 = 0 + 0x38
         a1 = 0x8af3 << 16
         a1 -= 0x6d48
         call 0x8004c54c          // 0x8004c54c(0x38, 0x8af292b8, 0x8, -1)
         a0 = 0 + 0x39

    loc_0x802f9b80: // orphan
         a1 = 0x8af3 << 16
         a1 = halfword [a1 - 0x12fc]
         call 0x8004c594          // 0x8004c594(-1, 0xffff, 0x8, -1)
         a0 = 0 + 3
         v1 = 0x8af3 << 16
         v1 -= 0x173c
         t9 = [v1 + 0]
         a0 = 0 + 0x3b
         at = 0 + 1               // lo
         halfword [t9 + 0x30] = a0
         t0 = [sp + 0x30]         // v1
         a2 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         t1 = , unsigned  byte [t0 + 0xa] // s4
         bnel t1, at, 0x802f9bd4  // likely
         t4 = [v1 + 0]            // t9

    loc_0x802f9bc0: // orphan
         t3 = [v1 + 0]
         t2 = 0 + 0x3c
         goto 0x802f9bd8
         halfword [t3 + 0x32] = t2

    loc_0x802f9bd4: // orphan
         halfword [t4 + 0x32] = a0

    loc_0x802f9bd8: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f9bc8
         a2 = , unsigned  byte [a2 - 0x677] // s4
         at = , a2 < 2
         bnel at, 0, 0x802f9c04   // unlikely
         a0 = [s0 + 0]            // s4

    loc_0x802f9be8: // orphan
         a1 = 0x8af3 << 16
         a1 -= 0x6d44
         call 0x8007be30          // 0x8007be30(-1, 0x8af292bc, 0x8, -1)
         a0 = [s0 + 0]            // s4
         goto 0x802f9c10
         a0 = 0 + 0x30

    loc_0x802f9c04: // orphan
         call 0x8007be30          // 0x8007be30(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a1 - 0x1718]       // t9
         a0 = 0 + 0x30

    loc_0x802f9c10: // orphan
         // CODE XREF from fcn.802ed2a4 @ 0x802f9bf8
         call 0x8004c54c          // 0x8004c54c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s0 + 0]            // s4
         ra = [sp + 0x1c]         // a2
         s0 = [sp + 0x18]
         sp += 0x30
         ret                      // a2
         

    loc_0x802fcc74: // orphan
         a0 = [v1 + 0]
         a1 = s2
         a2 = 0 + 0x54            // arg3
         call 0x800437b4          // 0x800437b4(0x0, -1, 0x54, -1)
         a3 = 0 + 0x54

    loc_0x802fcc88: // orphan
         at = 0x8af2 << 16
         goto 0x802fccc4          // fcn.80339168-0x3c4a4
         [at + 0x6a44] = v0

    loc_0x802fd250: // orphan
         a0 = s3                  // t9
         t1 = 0x8af3 << 16
         t1 -= 0x570
         [t1 + 0] = v0
         t7 = 0x8af3 << 16
         t7 = halfword [t7 - 0x634]
         at = 0 + 0x4f
         v0 = 0x8af3 << 16
         bnel t7, at, 0x802fd2c0  // likely
         v0 = [t1 + 0]            // s4

}
