/*
 * Function: 0x802e5244
 * Category: math
 */

// Decompiled C code
int fcn.802d9024 (int esi, int edx) {
// } else {
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
}
return eax;
// do {
// } while (?);
// } while (?);
}
return eax;
// } else {
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
}
return eax;
// do {
// } while (?);
// } while (?);
}
return eax;
// } else {
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
}
return eax;
// do {
// } while (?);
// } while (?);
}

/*
// Full radare2 output
int fcn.802d9024 (int esi, int edx) {
    loc_0x802d9024:
        // CALL XREF from fcn.82276e70 @ +0x140
        0x802d9024
        if            // unlikely
        0x802d902c
            
    loc_0x802e0f2c:
        movf 0, 0, fcc0
        // fp
        0x802e0f34
        0x802e0f38
        0x802e0f3c
        // ra
        0x802e0f44
        0x802e0f48
        0x802e0f4c
         // } else {
    loc_0x802d9030:
        0x802d9030
        0x802d9034
        if            // unlikely
        if            // unlikely
        }
        return eax;
    loc_0x802d9044:
        0x802d9044
        0x802d9048
        0x802d904c
        0x802d9050
        0x802d9054
        0x802d9058
        0x802d905c
        0x802d9060
        0x802d9064
        0x802d9068
        0x802d906c
        0x802d9070
        if            // unlikely
        if            // unlikely
            
    loc_0x802e183c:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e67a4:
        // CODE XREF from fcn.802cb014 @ 0x802e3f70
        a2 = a0 + 0x14 // arg3
        t8 = t7 - t2
        halfword [sp + 0x46] = t8
        t9 = halfword [a0 + 0x1a]
        halfword [sp + 0x44] = t9
         // do {
    loc_0x802e67b8:
        // CODE XREF from fcn.802cb014 @ 0x802e3f74
        t6 = , unsigned  byte [a0 + 0x28] // arg1 // s4
        t3 = , unsigned  byte [a0 + 0x24] // arg1 // s4
        t4 = , unsigned  byte [a0 + 0x25] // arg1 // s4
        t5 = , unsigned  byte [a0 + 0x26] // arg1 // s4
        ra = , unsigned  byte [a0 + 0x27] // arg1 // s4
        byte [sp + 0x3f] = t6
        t7 = , unsigned  byte [a0 + 0x29] // arg1 // s4
        t6 = v0 + 8
        byte [sp + 0x3e] = t7
        t8 = , unsigned  byte [a0 + 0x2a] // arg1 // s4
        t7 = 0xde00 << 16
        byte [sp + 0x3d] = t8
        t9 = , unsigned  byte [a0 + 0x2b] // arg1 // s4
        [v1 + 0] = t6
        t8 = 0x8ac0 << 16
        byte [sp + 0x3c] = t9
        t8 += 0x7c10
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9080
    loc_0x802d909c:
        0x802d909c
        if            // unlikely
        if            // unlikely
            
    loc_0x802e29e8:
        // CODE XREF from fcn.802cb014 @ 0x802cb094
        t8 = [t8 + 0x1a60] // t9
        a3 = 0x88c0 << 16
        a3 += 0x1964  // arg4
        t9 = , unsigned  halfword [t8 + 0x2e]
        a0 = 0 + 0x28 // arg1
         // do {
    loc_0x802e29fc:
        // CODE XREF from fcn.802cb014 @ 0x802cb098
        a1 = 0 + 0x122 // arg2
        a2 = 0
        call 0x800495f8 // 0x800495f8(-1, 0x122, 0x0, -1)
        [sp + 0x10] = t9
        a3 = 0x88c0 << 16
        a3 += 0x1988
        a0 = 0 + 0x28
        a1 = 0 + 0x140
        call 0x800495f8 // 0x800495f8(0x28, 0x140, 0x0, 0x88c01988)
        a2 = 0
        a0 = 0 + 0xff // s4
        a1 = 0 + 0x64
        a2 = 0 + 0x64
        call 0x8004972c // 0x8004972c(0xff, 0x64, 0x64, 0x88c01988)
        a3 = 0 + 0xff // s4
        a3 = 0x88c0 << 16
        a3 += 0x19c4
        a0 = 0 + 0x32
        a1 = 0 + 0x168
        call 0x800495f8 // 0x800495f8(0x32, 0x168, 0x64, 0x88c019c4)
        a2 = 0
        a3 = 0x88c0 << 16
        a3 += 0x19f4
        a0 = 0 + 0x32
        a1 = 0 + 0x186
        call 0x800495f8 // 0x800495f8(0x32, 0x186, 0x0, 0x88c019f4)
        a2 = 0
        a0 = 0 + 8    // a2
        call 0x800496a4 // 0x800496a4(0x8, 0x186, 0x0, 0x88c019f4)
        a1 = 0 + 1    // lo
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d90ac
    loc_0x802d90b8:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2af0:
        call 0x800495f8 // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, -1)
        a2 = 0
        a3 = 0x88c0 << 16
        a3 += 0x1a20
        a0 = 0 + 0x3c
        a1 = 0 + 0xa5
        call 0x800495f8 // 0x800495f8(0x3c, 0xa5, 0x0, 0x88c01a20)
        a2 = 0
        a3 = 0x88c0 << 16
        // CODE XREF from fcn.802cb014 @ 0x802cb0a0
        a3 += 0x1a28
        a0 = 0 + 0x3c
        a1 = 0 + 0xbe
        call 0x800495f8 // 0x800495f8(0x3c, 0xbe, 0x0, 0x88c01a28)
        a2 = 0
         // do {
    loc_0x802e2b28:
        // CODE XREF from fcn.802cb014 @ 0x802cb0a4
        a3 = 0x88c0 << 16
        a3 += 0x1a30
        a0 = 0 + 0x3c
        a1 = 0 + 0xd7
        call 0x800495f8 // 0x800495f8(0x3c, 0xd7, 0x8, 0x88c01a30)
        a2 = 0
        t2 = 0x88c0 << 16
        t2 = [t2 + 0x1a60] // t9
        a0 = 0 + 0xff // s4
        a1 = 0 + 0xff // s4
        t3 = halfword [t2 + 0x26]
        // CODE XREF from fcn.802d42fc @ +0x504
        a2 = 0 + 0xff // s4
        if            // likely
        0x802e2b5c
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d90c4
    loc_0x802d90d0:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2bc8:
        div 0, t7, at
        t8 = hi
        t9 = t8 << 2
        a3 += t9
        a3 = [a3 + 0x1830] // t9
        call 0x800495f8 // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, -1)
        a2 = 0
        t0 = 0x88c0 << 16
        t0 = [t0 + 0x1a60] // t9
        at = 0 + 1    // lo
        a3 = 0 + 0xff // s4
        t1 = halfword [t0 + 0x26]
        a0 = 0 + 0xff // s4
        a1 = 0 + 0xff // s4
        if            // likely
        a2 = 0 + 0xff // s4
            
    loc_0x802e2c20:
        // CODE XREF from fcn.802d9024 @ 0x802e2c00
        call 0x8004972c // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
        a3 = 0 + 0xff // s4
         // do {
    loc_0x802e2c28:
        // CODE XREF from fcn.802d9024 @ 0x802e2c18
        t2 = 0x88c0 << 16
        t2 = [t2 + 0x1a60] // t9
        // CODE XREF from fcn.802cb014 @ 0x802cb0ac
        a3 = 0x88c0 << 16
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d90dc
    loc_0x802d90e8:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2ca0:
        a3 += 0x1a40
        t7 = , unsigned  byte [t6 + 0x23] // s4
        a0 = 0 + 0xbe
        a1 = 0 + 0xbe
        a2 = 0 + 2
        call 0x800495f8 // 0x800495f8(0xbe, 0xbe, 0x2, 0x1a3f)
        [sp + 0x10] = t7
        t8 = 0x88c0 << 16
        t8 = [t8 + 0x1a60] // t9
        at = 0 + 3
        a3 = 0 + 0xff // s4
        t9 = halfword [t8 + 0x26]
        a0 = 0 + 0xff // s4
        a1 = 0 + 0xff // s4
        // CODE XREF from fcn.802cb014 @ +0xa0
        if            // likely
        a2 = 0 + 0xff // s4
            
    loc_0x802e2cf8:
        // CODE XREF from fcn.802d9024 @ 0x802e2cd8
        call 0x8004972c // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
        // CODE XREF from fcn.802cb014 @ 0x802cb0b8
        a3 = 0 + 0xff // s4
         // do {
    loc_0x802e2d00:
        // CODE XREF from fcn.802d9024 @ 0x802e2cf0
        t0 = 0x88c0 << 16
        t0 = [t0 + 0x1a60] // t9
        a3 = 0x88c0 << 16
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d90f4
    loc_0x802d9100:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2d78:
        goto 0x802e2da0
        halfword [v1 + 0xc] = t8
         // do {
    loc_0x802e2da0:
        // CODE XREF from fcn.802d9024 @ 0x802e2d78
        [v1 + 8] = v0
        // CODE XREF from fcn.802e2724 @ +0x660
        call 0x80001ff0 // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
        [sp + 0x1c] = v1
        v1 = [sp + 0x1c]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d910c
    loc_0x802d9114:
        0x802d9114
        0x802d9118
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2eb4:
        a1 = [sp + 0x70]
        swc1 f12, 0x64, sp
        swc1 f4, 0x10, sp
        call 0x8007db50 // "\u01ec" // 0x8007db50(-1, 0x0, 0x8, -1)
        swc1 f14, 0x68, sp
        lwc1 f12, 0x64, sp
        lwc1 f6, 0x20, sp
        lwc1 f10, 0x24, sp
        // CODE XREF from fcn.802cb014 @ 0x802cb0d0
        lwc1 f18, 0x28, sp
        mul.s f8, f6, f12
        lwc1 f14, 0x68, sp
        lwc1 f6, 0x30, sp
        mul.s f16, f10, f12
         // do {
    loc_0x802e2ee8:
        // CODE XREF from fcn.802cb014 @ 0x802cb0d4
        lwc1 f10, 0x34, sp
        lwc1 f0, 0x6c, sp
        mul.s f4, f18, f12
        swc1 f8, 0x20, sp
        lwc1 f18, 0x38, sp
        mul.s f8, f6, f14
        swc1 f16, 0x24, sp
        lwc1 f6, 0x40, sp
        mul.s f16, f10, f14
        swc1 f4, 0x28, sp
        lwc1 f10, 0x44, sp
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9128
    loc_0x802d9134:
        if            // unlikely
        if            // unlikely
            
    loc_0x802e2ffc:
        at = 0x4370 << 16
        mtc1 at, f4
        at = 0xc000 << 16
        mtc1 at, f6
        [v1 + 4] = t9
        at = 0x4000 << 16
        mtc1 at, f8
        a0 = [sp + 0x50]
        a1 = 0xc3a0 << 16
        a2 = 0x43a0 << 16
        a3 = 0xc370 << 16
        swc1 f0, 0x1c, sp
        swc1 f4, 0x10, sp
        swc1 f6, 0x14, sp
         // do {
    loc_0x802e3034:
        // CODE XREF from fcn.802cb014 @ 0x802cb0e0
        call 0x8007e474 // 0x8007e474(-1, 0x442f71dcfe116408, 0x8, -1)
        swc1 f8, 0x18, sp
        at = 0x3f80 << 16
        mtc1 at, f0
        at = 0x88c0 << 16
        mtc1 0, f2
        lwc1 f16, 0x1a48, at
        at = 0x88c0 << 16
        lwc1 f18, 0x1a4c, at
        lwc1 f10, 0x58, sp
        mfc1 a1, f0
        mfc1 a2, f0
        mfc1 a3, f0
        a0 = [sp + 0x4c]
        swc1 f0, 0x1c, sp
        swc1 f16, 0x20, sp
        swc1 f2, 0x14, sp
        // CODE XREF from fcn.802cb014 @ +0xd0
        swc1 f2, 0x18, sp
        swc1 f2, 0x28, sp
        swc1 f18, 0x24, sp
        call 0x88c00bfc // 0x88c00bfc(0x0, 0x442f71dcfe116408, 0x8, -1)
        swc1 f10, 0x10, sp
        v1 = [s0 + 0] // t9
        a3 = [sp + 0x5c]
        t2 = 0xe700 << 16
        t1 = v1 + 8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9140
    loc_0x802d9160:
        if            // unlikely
        0x802d9164
            
    loc_0x802e3494:
        0x802e3494
        add.s f16, f16, f4
         // do {
    loc_0x802e349c:
        // CODE XREF from fcn.802e345c @ 0x802e3488
        at = 0xc3b4 << 16
        mtc1 at, f6
        at = 0x4270 << 16
        mtc1 at, f8
        mul.s f10, f16, f6
        a1 = 0 + 2    // arg2
        call 0x88c00ce4 // 0x88c00ce4(-1, 0x2, 0x8, -1)
        div.s f12, f10, f8
        v1 = [s0 + 0] // t9
        t8 = 0xde00 << 16
        a0 = 0 + 0x1c1
        t7 = v1 + 8
        [s0 + 0] = t7
        [v1 + 0] = t8
        t9 = [sp + 0x28]
        a1 = 0
        call 0x8004c990 // 0x8004c990(0x1c1, 0x0, 0x8, -1)
        [v1 + 4] = t9
        a0 = 0 + 0x203
        a1 = 0 + 0x5c
        a2 = v0       // s4
        a3 = 0
        call 0x8004d19c // 0x8004d19c(0x203, 0x5c, 0xff, 0x0)
        [sp + 0x10] = 0
        v1 = [s0 + 0]
        t5 = , unsigned  byte [sp + 0x4b]
        t7 = 0xe700 << 16
        t6 = v1 + 8
        [s0 + 0] = t6
        [v1 + 4] = 0
        [v1 + 0] = t7
        v1 = [s0 + 0]
        t6 = 0x55fe << 16
        t9 = 0xfc30 << 16
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9168
    loc_0x802d9184:
        if            // unlikely
        // CODE XREF from fcn.802d39fc @ +0x758
        0x802d9188
            
    loc_0x802e3a58:
        0x802e3a58
        call 0x88c01494 // 0x88c01494(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a60
        call 0x88c014d8 // 0x88c014d8(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a68
        call 0x80008574 // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a70
        a0 = 0x88c0 << 16
        call 0x800033dc // 0x800033dc(0x88c00000, 0x442f71dcfe116408, 0x8, -1)
        a0 = [a0 + 0x1a60] // t9
        call 0x80047610 // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a84
        call 0x8004c398 // 0x8004c398(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a8c
        call 0x80006d3c // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
        0x802e3a94
        call 0x80057944 // 0x80057944(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0
        a0 = 0x434c << 16
        call 0x80002bf8 // 0x80002bf8(0x434c0000, 0x442f71dcfe116408, 0x8, -1)
        a0 |= 0x4544
        ra = [sp + 0x1c] // v1
        sp += 0x28
        v0 = 0
        ret           // v1
        0x802e3abc
         // } else {
    loc_0x802d918c:
        if            // unlikely
        0x802d9190
        }
        return eax;
    loc_0x802d9194:
        if            // fcn.802e40c0+0x88 // unlikely
        if            // unlikely
            
    loc_0x802e41bc:
        t8 = 0 + 1    // lo
        goto 0x802e42d4
        [sp + 0x1c] = t8
         // do {
    loc_0x802e42d4:
        // CODE XREF from fcn.802cb014 @ 0x802cb1b0
        // CODE XREF from fcn.802d9024 @ 0x802e41c0
        ra = [sp + 0x14]
        // CODE XREF from fcn.802e40c0 @ +0x108
        v0 = [sp + 0x1c] // lo
        sp += 0x20
        ret
        0x802e42e4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d91a0
    loc_0x802d91c0:
        0x802d91c0
        if            // fcn.802cb014+0x196d4 // unlikely
        if            // unlikely
            
    loc_0x802e475c:
        a0 = 0
        v1 = 0x8800 << 16
        v1 += 0x6868
        byte [v1 + 0] = 0
        call 0x8005da1c // 0x8005da1c(0x0, 0x442f71dcfe116408, 0x8, -1)
        a0 = byte [v1 + 0]
        v1 = 0x8800 << 16
        v1 += 0x6868
        halfword [v1 + 2] = v0
        call 0x8005d92c // 0x8005d92c(0x0, 0x442f71dcfe116408, 0x8, -1)
        a0 = byte [v1 + 0]
        v1 = 0x8800 << 16
        v1 += 0x6868
        a1 = 0x8800 << 16
        byte [v1 + 4] = v0
        a1 += 0x686d
        call 0x8005dc48 // 0x8005dc48(0x0, 0x8800686d, 0x8, -1)
        a0 = byte [v1 + 0]
        // CODE XREF from fcn.802cb014 @ 0x802cb1f0
        call 0x8005a014 // 0x8005a014(0x0, 0x8800686d, 0x8, -1)
        a0 = 0
        call 0x8005a034 // 0x8005a034(0x0, 0x8800686d, 0x8, -1)
        a0 = 0
        call 0x80055948 // 0x80055948(0x0, 0x8800686d, 0x8, -1)
         // do {
    loc_0x802e47b8:
        // CODE XREF from fcn.802cb014 @ 0x802cb1f4
        a0 = 0 + 3
        call 0x88a00d0c // 0x88a00d0c(0x3, 0x442f71dcfe116408, 0x8, -1)
        a0 = [sp + 0x1c] // lo
        ra = [sp + 0x14]
        sp += 0x20
        ret
        0x802e47d0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d91d0
    loc_0x802d91dc:
        if            // fcn.802cb014+0x19d4c // unlikely
        if            // unlikely
            
    loc_0x802e4d84:
        0x802e4d84
        0x802e4d88
        // CODE XREF from fcn.802e3bbc @ +0x1fc
        0x802e4d8c
        0x802e4d90
        0x802e4d94
        0x802e4d98
        0x802e4d9c
        0x802e4da0
        0x802e4da4
        0x802e4da8
        0x802e4dac
        // CODE XREF from fcn.802cb014 @ 0x802cb26c
        0x802e4db0
        0x802e4db4
        0x802e4db8
        0x802e4dbc
        0x802e4dc0
         // do {
    loc_0x802e4dc4:
        // CODE XREF from fcn.802cb014 @ 0x802cb270
        if            // fcn.802e67fc+0xfc // unlikely
        0x802e4dc8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d91e8
    loc_0x802d9214:
        0x802d9214
        0x802d9218
        0x802d921c
        0x802d9220
        0x802d9224
        0x802d9228
        0x802d922c
        0x802d9230
        0x802d9234
        0x802d9238
        0x802d923c
        0x802d9240
        0x802d9244
        0x802d9248
        if            // unlikely
        0x802d9250
            
    loc_0x802e69b0:
        t8 = halfword [sp + 0x50]
        t6 = 0x8ac1 << 16
        t6 = halfword [t6 - 0x6642]
        t9 = t8 + t4
        [sp + 0x18] = t9
        t7 = t9 - t6
        halfword [a2 + 0xa] = t7 // arg3
        t8 = , unsigned  byte [a0 + 0x26] // arg1 // s4
        t5 = , unsigned  byte [a0 + 0x24] // arg1 // s4
        ra = , unsigned  byte [a0 + 0x25] // arg1 // s4
        byte [sp + 0x49] = t8
        t9 = , unsigned  byte [a0 + 0x27] // arg1 // s4
        v0 = [v1 + 0]
        a2 = a0 + 0x14 // arg3
        byte [sp + 0x48] = t9
        t6 = , unsigned  byte [a0 + 0x28] // arg1 // s4
        byte [sp + 0x47] = t6
        t7 = , unsigned  byte [a0 + 0x29] // arg1 // s4
        t6 = v0 + 8
        byte [sp + 0x46] = t7
        t8 = , unsigned  byte [a0 + 0x2a] // arg1 // s4
        t7 = 0xde00 << 16
        byte [sp + 0x45] = t8
        t9 = , unsigned  byte [a0 + 0x2b] // arg1 // s4
        [v1 + 0] = t6
        t8 = 0x8ac0 << 16
        byte [sp + 0x44] = t9
        t8 += 0x7c10
        [v0 + 4] = t8
        [v0 + 0] = t7
        v0 = [v1 + 0]
        t6 = 0xfa00 << 16
        t8 = t5 << 0x18
        t9 = v0 + 8
        [v1 + 0] = t9
        [v0 + 0] = t6
        t6 = ra << 0x10
        t7 = t8 | t6
        t8 = , unsigned  byte [sp + 0x49] // s4
        t6 = t8 << 8
        t9 = t7 | t6
        t7 = , unsigned  byte [sp + 0x48] // s4
        t6 = t9 | t7
        [v0 + 4] = t6
        v0 = [v1 + 0]
        t9 = 0xfb00 << 16
        t8 = v0 + 8
        [v1 + 0] = t8
        // CODE XREF from fcn.802cb014 @ 0x802e3fac
        [v0 + 0] = t9
        t6 = , unsigned  byte [sp + 0x47] // s4
        t7 = , unsigned  byte [sp + 0x46] // s4
        t8 = t6 << 0x18
        t6 = t7 << 0x10
         // do {
    loc_0x802e6a84:
        // CODE XREF from fcn.802cb014 @ 0x802e3fb0
        t9 = t8 | t6  // s2
        t8 = , unsigned  byte [sp + 0x45] // s4
        t6 = t8 << 8
        t7 = t9 | t6  // s2
        t9 = , unsigned  byte [sp + 0x44] // s4
        t6 = t7 | t9  // s2
        [v0 + 4] = t6
        a0 = [a2 + 0x18] // arg3 // t9
        call 0x8004d1fc // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
        [sp + 0x20] = a2
        v1 = 0x800d << 16
        v1 += 0x510
        v0 = [v1 + 0] // t9
        a2 = [sp + 0x20]
        t7 = [sp + 0x1c] // lo
        t8 = v0 + 8
        [v1 + 0] = t8
        t9 = halfword [a2 + 0xc]
        at = 0xe400 << 16
        t6 = t7 + t9  // lo
        t8 = t6 << 2
        t7 = t8 & 0xfff
        t9 = t7 << 0xc
        t8 = [sp + 0x18] // t9
        t7 = halfword [a2 + 0xe]
        t6 = t9 | at
        t9 = t8 + t7
        t8 = t9 << 2
        t7 = t8 & 0xfff
        t9 = t6 | t7
        [v0 + 0] = t9
        t8 = halfword [sp + 0x52]
        t6 = halfword [a2 + 8]
        t7 = t8 + t6
        t9 = t7 << 2
        t8 = t9 & 0xfff
        t7 = halfword [sp + 0x50]
        t9 = halfword [a2 + 0xa]
        t6 = t8 << 0xc
        t8 = t7 + t9
        t7 = t8 << 2
        t9 = t7 & 0xfff
        t8 = t6 | t9
        [v0 + 4] = t8
        v0 = [v1 + 0]
        t6 = 0xe100 << 16
        t8 = 0xf100 << 16
        t7 = v0 + 8
        [v1 + 0] = t7
        [v0 + 4] = 0
        [v0 + 0] = t6
        v0 = [v1 + 0]
        t7 = 0 + 0x400
        t9 = v0 + 8
        [v1 + 0] = t9
        [v0 + 4] = t7
        [v0 + 0] = t8
        ra = [sp + 0x14]
        sp += 0x60
        ret
        0x802e6b74
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9254
    loc_0x802d92d0:
        0x802d92d0
        if            // fcn.802e7464+0x4 // unlikely
        if            // unlikely
            
    loc_0x802e747c:
        if            // unlikely
        t4 <<= 2
            
    loc_0x802e7538:
        v0 = halfword [s0 + 4]
        if            // unlikely
        t5 = 0 + 1    // lo
            
    loc_0x802e7548:
        halfword [s0 + 0x12] = 0
        // CODE XREF from fcn.82bea63c @ 0x802e73bc
        ra = [sp + 0x1c] // lo
        s0 = [sp + 0x18] // t9
        sp += 0x28
        ret           // lo
        v0 = 0
         // } else {
    loc_0x802e7544:
        halfword [s0 + 4] = t5
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d92e0
    loc_0x802d92f8:
        0x802d92f8
        0x802d92fc
        0x802d9300
        0x802d9304
        0x802d9308
        0x802d930c
        0x802d9310
        0x802d9314
        0x802d9318
        0x802d931c
        0x802d9320
        0x802d9324
        0x802d9328
        if            // unlikely
        // CODE XREF from fcn.802caae0 @ 0x802cab0c
        if            // unlikely
            
    loc_0x802e7b94:
        [sp + 0x4c] = ra
        [sp + 0x48] = s0
        a2 = a1       // t0
        if            // unlikely
        s0 = [a1 + 0x20] // arg2 // t9
            
    loc_0x802e7bbc:
        a0 = , unsigned  halfword [a2 + 0x24]
        call 0x8004c990 // 0x8004c990(0x4, 0x442f71dcfe116408, 0x8, -1)
        a1 = , unsigned  halfword [a2 + 0x26] // s4
        [s0 + 0x14] = v0
        call 0x8004ca38 // 0x8004ca38(0x4, 0xff, 0x8, -1)
        a0 = [s0 + 0x10]
        [s0 + 0x18] = v0
        call 0x8004ca4c // 0x8004ca4c(0xffff0000, 0xff, 0x8, -1)
        a0 = [s0 + 0x10]
        [s0 + 0x1c] = v0
        call 0x8004ca10 // 0x8004ca10(0xffff0000, 0xff, 0x8, -1)
        a0 = [s0 + 0x10]
        [s0 + 0x20] = v0
        call 0x8004ca10 // 0x8004ca10(0xffff0000, 0xff, 0x8, -1)
        a0 = [s0 + 0x14] // s4
        [s0 + 0x24] = v0
        call 0x8004ca24 // 0x8004ca24(0xff, 0xff, 0x8, -1)
        a0 = [s0 + 0x10]
        goto 0x802e7da8
        [s0 + 0x28] = v0
         // do {
    loc_0x802e7da8:
        // CODE XREF from fcn.802d9024 @ 0x802e7c04
        ra = [sp + 0x4c]
        // CODE XREF from fcn.802d9024 @ 0x802e7bb4
        s0 = [sp + 0x48]
        sp += 0x60
        ret           // ra
        v0 = 0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802d9338
    loc_0x802d934c:
        0x802d934c
        0x802d9350
        0x802d9354
        0x802d9358
         // do {
    loc_0x802d935c:
        // CODE XREF from fcn.82bea63c @ 0x802d4178
        0x802d935c
        if            // fcn.802e8030+0x54 // unlikely
        if            // unlikely
         // } while (?);
        }
        return eax;
    loc_0x802d936c:
        if            // unlikely
        // CODE XREF from fcn.802d39fc @ +0x780
        if            // unlikely
            
    loc_0x802e80dc:
        // CODE XREF from fcn.82bea63c @ 0x802cb448
        t7 = 0x40 << 16
        t5 = 0xe100 << 16
        t8 = v0 + 8
        [v1 + 0] = t8
        [v0 + 4] = t7
        [v0 + 0] = t5
        v0 = [v1 + 0]
        t8 = 0 + 0x400
        t9 = 0xf100 << 16
        t6 = v0 + 8
        [v1 + 0] = t6
        [v0 + 4] = t8
        [v0 + 0] = t9
         // do {
    loc_0x802e8110:
        // CODE XREF from fcn.802d9024 @ 0x802e7f5c
        ra = [sp + 0x4c]
        s0 = [sp + 0x48] // "@"
        sp += 0x60
        ret           // ra
        v0 = 0
         // } while (?);
         // } while (?);
    loc_0x802e1180: // orphan
             daddiu 0, 0, 0x3c

    loc_0x802e18c4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e18d8: // orphan
         
         if                       // fcn.802caae0+0x1e150 // unlikely
         if                       // unlikely

    loc_0x802e18e8: // orphan
         // CODE XREF from fcn.802cae7c @ +0x108
         if                       // unlikely
         if                       // unlikely

    loc_0x802e18f4: // orphan
         
         if                       // fcn.802e9f40-0x184 // unlikely
         if                       // fcn.802e9f40-0x170 // unlikely

    loc_0x802e1904: // orphan
         
         
         if                       // fcn.802e9f40+0x1e0 // unlikely
         if                       // fcn.802e9f40+0x1f4 // unlikely

    loc_0x802e1918: // orphan
         if                       // fcn.802e9f40+0x25c // unlikely
         if                       // unlikely

    loc_0x802e1924: // orphan
         
         
         
         
         
         
         
         if                       // fcn.802e9f40+0xa54 // unlikely
         if                       // fcn.802e9f40+0xa88 // unlikely

    loc_0x802e194c: // orphan
         if                       // fcn.802eaa24+0x9c // unlikely
         if                       // fcn.802e9f40+0xab4 // unlikely

    loc_0x802e1958: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1968: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1974: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1984: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1990: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e199c: // orphan
         // CODE XREF from fcn.802cae7c @ +0x10c
         
         
         
         
         
         // CODE XREF from fcn.802cae7c @ +0x110
         
         
         
         
         
         
         
         // CODE XREF from fcn.802cae7c @ +0x11c
         
         
         
         
         
         
         // CODE XREF from fcn.802cae7c @ +0x124
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a00: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.802db204 @ +0x370
         if                       // unlikely

    loc_0x802e1a10: // orphan
         
         // CODE XREFS from fcn.802cae7c @ +0x114, +0x134
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a20: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a30: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a40: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.802cae7c @ +0x138
         if                       // unlikely

    loc_0x802e1a50: // orphan
         // CODE XREF from fcn.802db204 @ +0x378
         
         if                       // unlikely
         // CODE XREF from fcn.802cae7c @ +0x128
         if                       // unlikely

    loc_0x802e1a60: // orphan
         // CODE XREF from fcn.802cae7c @ +0x120
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1a9c: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.802db204 @ +0x37c
         if                       // unlikely
         // CODE XREF from fcn.802cae7c @ +0x118
         if                       // unlikely

    loc_0x802e1ac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1acc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1ae0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1aec: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e1b08: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e2748: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb064
         a0 = 0 + 1               // arg1 // lo
         t0 = 0x88c0 << 16
         t0 += 0x1a60
         v1 = [t0 + 0]            // t9
         t8 = , unsigned  byte [v1 + 0x24] // s4

    loc_0x802e275c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb068
         t9 = t8 - 1
         byte [v1 + 0x24] = t9
         v1 = [t0 + 0]            // t9
         v0 = , unsigned  halfword [v1 + 0x2c]

    loc_0x802e276c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e273c
         a0 = , unsigned  halfword [v1 + 0x20]
         // CODE XREF from fcn.802cb014 @ +0x58
         a1 = v0                  // s4

    loc_0x802e2774: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e2670
         goto 0x802e28b0
         a3 = 0 + 0x3b            // arg4

    loc_0x802e28b0: // orphan
         // XREFS: CODE 0x802e235c  CODE 0x802e240c  CODE 0x802e244c  
         // XREFS: CODE 0x802e252c  CODE 0x802e2574  CODE 0x802e25c8  
         // XREFS: CODE 0x802e261c  CODE 0x802e265c  CODE 0x802e26a8  
         // XREFS: CODE 0x802e26ec  CODE 0x802e2730  CODE 0x802e2774  
         at = , a0 < a1           // lo
         beql at, 0, 0x802e28d0   // unlikely
         v0 = , unsigned  halfword [v1 + 0x2e]

    loc_0x802e28bc: // orphan
         halfword [v1 + 0x20] = v0
         v1 = 0x88c0 << 16
         goto 0x802e28e8
         v1 = [v1 + 0x1a60]       // t9

    loc_0x802e28d0: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e28b4
         at = , v0 < a0           // lo
         beql at, 0, 0x802e28ec   // unlikely
         t4 = , unsigned  byte [v1 + 0x22] // s4

    loc_0x802e28dc: // orphan
         halfword [v1 + 0x20] = v0
         v1 = 0x88c0 << 16
         v1 = [v1 + 0x1a60]       // t9

    loc_0x802e28e8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e28c4
         t4 = , unsigned  byte [v1 + 0x22] // s4

    loc_0x802e28ec: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e28d4
         at = , t4 < 0x18
         if                       // unlikely
         t5 = 0 + 0x17

    loc_0x802e28f8: // orphan
         byte [v1 + 0x22] = t5
         v1 = 0x88c0 << 16
         v1 = [v1 + 0x1a60]       // t9

    loc_0x802e2904: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e28f0
         t6 = , unsigned  byte [v1 + 0x23] // s4
         at = , t6 < 0x3c
         bnel at, 0, 0x802e2924   // unlikely
         t7 = , unsigned  byte [v1 + 0x24] // t3

    loc_0x802e2914: // orphan
         byte [v1 + 0x23] = a3
         v1 = 0x88c0 << 16
         v1 = [v1 + 0x1a60]       // t9
         t7 = , unsigned  byte [v1 + 0x24] // s4

    loc_0x802e2924: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e290c
         at = , t7 < 0x3c         // lo
         bnel at, 0, 0x802e2938   // likely
         ra = [sp + 0x1c]         // lo

    loc_0x802e2930: // orphan
         byte [v1 + 0x24] = a3
         ra = [sp + 0x1c]         // lo

    loc_0x802e2938: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2928
         v0 = [sp + 0x24]
         sp += 0x28
         ret                      // ra
         

    loc_0x802e2a74: // orphan
         t0 = 0x88c0 << 16
         t0 = [t0 + 0x1a60]       // t9
         at = 0 + 2
         t1 = [t0 + 0x28]         // t9
         if                       // likely
         a0 = 0 + 0xff            // s4

    loc_0x802e2a8c: // orphan
         a1 = 0
         a2 = 0
         call 0x8004972c          // 0x8004972c(-1, 0x0, 0x0, -1)
         a3 = 0 + 0xff            // s4
         a3 = 0x88c0 << 16
         a3 += 0x19f8
         a0 = 0 + 0x24e
         a1 = 0 + 0xc8
         call 0x800495f8          // 0x800495f8(0x24e, 0xc8, 0x0, 0x88c019f8)
         a2 = 0 + 2
         a3 = 0x88c0 << 16
         a3 += 0x1a08
         a0 = 0 + 0x24e
         a1 = 0 + 0xdc
         call 0x800495f8          // 0x800495f8(0x24e, 0xdc, 0x2, 0x88c01a08)
         a2 = 0 + 2

    loc_0x802e2acc: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2a84
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         a3 = 0x88c0 << 16
         a3 += 0x1a1c
         a0 = 0 + 0x3c
         a1 = 0 + 0x8c

    loc_0x802e2b5c: // orphan
         

    loc_0x802e2b60: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         // CODE XREF from fcn.802d42fc @ +0x508
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x802e2b84
         

    loc_0x802e2b7c: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2b58
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4

    loc_0x802e2b84: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2b74
         t4 = 0x88c0 << 16
         t4 = [t4 + 0x1a60]       // t9
         a3 = 0x88c0 << 16
         a3 += 0x1a38
         t5 = , unsigned  halfword [t4 + 0x20]
         a0 = 0 + 0xbe
         a1 = 0 + 0x8c
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xbe, 0x8c, 0x2, 0x88c01a38)
         [sp + 0x10] = t5
         t6 = 0x88c0 << 16
         t6 = [t6 + 0x1a60]       // t9
         at = 0 + 7
         a3 = 0x88c0 << 16
         // CODE XREF from fcn.802cb014 @ +0x94
         t7 = , unsigned  halfword [t6 + 0x20]
         a0 = 0 + 0xc8
         a1 = 0 + 0x8c

    loc_0x802e2c34: // orphan
         a3 += 0x1a3c
         t3 = , unsigned  byte [t2 + 0x22]
         a0 = 0 + 0xbe
         a1 = 0 + 0xa5

    loc_0x802e2c44: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb0b0
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x2, -1)
         [sp + 0x10] = t3
         t4 = 0x88c0 << 16
         t4 = [t4 + 0x1a60]       // t9
         at = 0 + 2
         a3 = 0 + 0xff            // s4
         t5 = halfword [t4 + 0x26]
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         if                       // likely
         a2 = 0 + 0xff            // s4

    loc_0x802e2c74: // orphan
         a0 = 0 + 0xff            // s4
         // CODE XREF from fcn.802d42fc @ +0x518
         a1 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x8, -1)
         a2 = 0
         goto 0x802e2c94
         

    loc_0x802e2c8c: // orphan
         // CODE XREF from fcn.802d42fc @ +0x51c
         // CODE XREF from fcn.802d9024 @ 0x802e2c6c
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4

    loc_0x802e2c94: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2c84
         t6 = 0x88c0 << 16
         t6 = [t6 + 0x1a60]       // t9
         a3 = 0x88c0 << 16

    loc_0x802e2d0c: // orphan
         a3 += 0x1a44
         t1 = , unsigned  byte [t0 + 0x24] // s4
         // CODE XREF from fcn.802cb014 @ +0xac
         a0 = 0 + 0xbe
         a1 = 0 + 0xd7
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xbe, 0xd7, 0x2, 0x1a43)
         [sp + 0x10] = t1
         // CODE XREF from fcn.802cb014 @ 0x802cb0c4
         call 0x800499ec          // 0x800499ec(0xbe, 0xd7, 0x2, 0x1a43)
         

    loc_0x802e2d30: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb0bc
         ra = [sp + 0x1c]         // lo
         // CODE XREF from fcn.802d42fc @ +0x524
         sp += 0x20
         ret                      // lo
         

    loc_0x802e2db0: // orphan
         t6 = [sp + 0x20]         // a2
         t5 = , unsigned  halfword [v1 + 0xc]
         at = , t5 < v0
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x802e2dc4: // orphan
         if                       // likely
         a0 = 0 + 0x155

    loc_0x802e2dcc: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]

    loc_0x802e2dd8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e2dc4
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]
         t9 = , unsigned  byte [v1 + 4] // s4
         t7 = , unsigned  halfword [v1 + 0xc]

    loc_0x802e2dec: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb0c8
         t0 = t9 + 1
         a0 = t0 & 0xff
         at = , a0 < 0x3c         // lo
         t8 = t7 - v0
         halfword [v1 + 0xc] = t8
         if                       // likely
         byte [v1 + 4] = t0

    loc_0x802e2e08: // orphan
         t2 = , unsigned  byte [v1 + 3]
         t1 = a0 - 0x3c
         byte [v1 + 4] = t1
         t3 = t2 + 1
         v0 = t3 & 0xff
         at = , v0 < 0x3c         // lo
         if                       // likely
         byte [v1 + 3] = t3

    loc_0x802e2e28: // orphan
         t5 = , unsigned  byte [v1 + 2] // lo
         t4 = v0 - 0x3c
         byte [v1 + 3] = t4
         t6 = t5 + 1
         a0 = t6 & 0xff
         at = , a0 < 0x18         // lo
         if                       // likely
         byte [v1 + 2] = t6

    loc_0x802e2e48: // orphan
         t8 = , unsigned  halfword [v1 + 0]
         t7 = a0 - 0x18
         byte [v1 + 2] = t7
         t9 = t8 + 1              // lo
         halfword [v1 + 0] = t9
         t0 = 0x88c0 << 16
         t0 = [t0 + 0x1a60]       // t9
         t2 = t9 & 0xffff         // lo
         t1 = , unsigned  halfword [t0 + 0x2e]
         at = , t1 < t2
         beql at, 0, 0x802e2e80   // likely
         ra = [sp + 0x14]

    loc_0x802e2e78: // orphan
         halfword [v1 + 0] = 0

    loc_0x802e2e7c: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802e2dbc, 0x802e2e00, 0x802e2e20, 0x802e2e40
         ra = [sp + 0x14]

    loc_0x802e2e80: // orphan
         // CODE XREF from fcn.802cb014 @ +0xb8
         // CODE XREF from fcn.802d9024 @ 0x802e2e70
         sp += 0x20
         ret                      // ra
         

    loc_0x802e2f20: // orphan
         mul.s f8, f6, f0
         swc1 f16, 0x34, sp
         lwc1 f6, 0x80, sp
         mul.s f16, f10, f0
         swc1 f4, 0x38, sp
         lwc1 f10, 0x88, sp
         mul.s f4, f18, f0
         swc1 f8, 0x40, sp
         lwc1 f8, 0x84, sp
         a0 = sp + 0x20           // arg1
         swc1 f16, 0x44, sp
         a1 = [sp + 0x60]
         swc1 f6, 0x50, sp
         swc1 f4, 0x48, sp
         swc1 f10, 0x58, sp
         call 0x80084780          // 0x80084780(0x178020, 0x0, 0x8, -1)
         swc1 f8, 0x54, sp
         ra = [sp + 0x1c]         // v1
         sp += 0x60
         ret                      // v1
         

    loc_0x802e309c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb0e8
         [s0 + 0] = t1
         [v1 + 4] = 0
         [v1 + 0] = t2
         v1 = [s0 + 0]
         t4 = 0xe300 << 16
         t4 |= 0xa01
         t3 = v1 + 8
         [s0 + 0] = t3
         [v1 + 4] = 0
         [v1 + 0] = t4
         v1 = [s0 + 0]
         t6 = 0xe200 << 16
         t7 = 0x50 << 16
         t5 = v1 + 8
         t0 = 0 + 2
         [s0 + 0] = t5
         t7 |= 0x4240
         t6 |= 0x1c
         [v1 + 0] = t6
         if                       // likely
         [v1 + 4] = t7

    loc_0x802e30f0: // orphan
         v1 = [s0 + 0]
         t9 = 0xfcff << 16
         t1 = 0xfffc << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         t1 |= 0xf279
         t9 |= 0xffff
         [v1 + 0] = t9
         goto 0x802e3178
         [v1 + 4] = t1

    loc_0x802e3118: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e30e8
         v1 = [s0 + 0]
         t3 = 0xfc30 << 16
         t4 = 0x55fe << 16
         t2 = v1 + 8
         [s0 + 0] = t2
         t4 |= 0xf379
         t3 |= 0xfe61
         [v1 + 0] = t3
         [v1 + 4] = t4
         v1 = [s0 + 0]
         t6 = 0xfa00 << 16
         t7 = 0 - 1               // s2
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = t7
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t1 = 0xf17 << 16
         t1 |= 0x64ff
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 = 0xfb00 << 16
         [v1 + 0] = t9
         [v1 + 4] = t1

    loc_0x802e3178: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3110
         v1 = [s0 + 0]
         t3 = 0xd9fd << 16
         t3 |= 0xfffe
         t2 = v1 + 8
         [s0 + 0] = t2
         [v1 + 4] = 0
         [v1 + 0] = t3
         v1 = [s0 + 0]
         t5 = 0xd9ff << 16
         t6 = 0x20 << 16
         t4 = v1 + 8
         [s0 + 0] = t4
         t6 |= 4
         t5 |= 0xffff
         [v1 + 0] = t5
         [v1 + 4] = t6
         v1 = [s0 + 0]
         t8 = 0xd700 << 16
         t8 |= 2
         t7 = v1 + 8
         [s0 + 0] = t7
         t9 = 0 - 1               // s2
         [v1 + 4] = t9
         [v1 + 0] = t8
         v1 = [s0 + 0]
         t2 = 0xe300 << 16
         t2 |= 0xc00
         t1 = v1 + 8
         [s0 + 0] = t1
         t3 = 8 << 16
         [v1 + 4] = t3
         if                       // unlikely
         [v1 + 0] = t2

    loc_0x802e31fc: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t5 = 0 + 2

    loc_0x802e3208: // orphan
         if                       // unlikely
         t6 = 0 + 3

    loc_0x802e3210: // orphan
         goto 0x802e3234
         v1 = [s0 + 0]

    loc_0x802e3218: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e31f4
         t4 = 0 + 1               // lo
         goto 0x802e3230
         [sp + 0x44] = t4

    loc_0x802e3224: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3200
         goto 0x802e3230
         [sp + 0x44] = t5

    loc_0x802e322c: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3208
         [sp + 0x44] = t6

    loc_0x802e3230: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802e321c, 0x802e3224
         v1 = [s0 + 0]

    loc_0x802e3234: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3210
         t8 = 0xdb0e << 16
         t9 = 0 | 0xffff
         t7 = v1 + 8
         [s0 + 0] = t7
         [v1 + 4] = t9
         [v1 + 0] = t8

    loc_0x802e3960: // orphan
         t5 = v1 + 0x14

    loc_0x802e3964: // orphan
         a1 = v1 + 0x10           // arg2
         call 0x8005f3b0          // 0x8005f3b0(-1, 0x230, 0x8, -1)
         [sp + 0x10] = t5
         v1 = [s1 + 0]            // t9
         t6 = , unsigned  halfword [s0 + 0]
         t7 = , unsigned  halfword [v1 + 0x10]
         a0 = t6 - t7
         a0 &= 0xff               // lo
         halfword [v1 + 0x2c] = a0
         t9 = [s1 + 0]
         t8 = a0 + 0x1ff
         halfword [t9 + 0x2e] = t8
         t1 = [s1 + 0]            // t9
         a1 = [t1 + 0x28]         // t9

    loc_0x802e399c: // orphan
         // CODE XREF from fcn.802e38a0 @ 0x802e3904
         // CODE XREF from fcn.802e3934 @ 0x802e395c
         if                       // unlikely
         // CODE XREF from fcn.802cb014 @ 0x802cb12c
         t2 = 0x800d << 16

    loc_0x802e39a4: // orphan
         v0 = 0 + 1               // lo
         halfword [s0 + 0] = v0
         byte [s0 + 2] = v0
         byte [s0 + 3] = 0
         byte [s0 + 4] = 0

    loc_0x802e39b8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e399c
         t2 = [t2 - 0x25ac]       // t9
         halfword [s0 + 0xc] = 0
         a0 = s0
         call 0x88c00020          // 0x88c00020(0x104, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 8] = t2
         ra = [sp + 0x24]
         s0 = [sp + 0x1c]         // v1
         s1 = [sp + 0x20]         // a2
         ret
         sp += 0x28

    loc_0x802e3de0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3dec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3df8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e10: // orphan
         if                       // fcn.802cb014+0x1a5d0 // unlikely
         if                       // unlikely

    loc_0x802e3e1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e28: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb174
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e34: // orphan
         if                       // unlikely
         

    loc_0x802e3e3c: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e5c: // orphan
         
         if                       // fcn.802e5b34+0x20 // unlikely
         if                       // unlikely

    loc_0x802e3e6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e78: // orphan
         if                       // unlikely
         

    loc_0x802e3e80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802e3e8c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802e44bc: // orphan
         a3 = 0x88d0 << 16
         a3 += 0xa68              // arg4
         t1 = , unsigned  byte [t0 + 0xfc] // s4
         a0 = 0 + 0x15e           // arg1
         a1 = 0 + 0xa5            // arg2
         a2 = 0 + 2               // arg3
         call 0x800495f8          // 0x800495f8(0x15e, 0xa5, 0x2, 0x88d00a68)
         [sp + 0x10] = t1
         call 0x800499ec          // 0x800499ec(0x15e, 0xa5, 0x2, 0x88d00a68)
         
         call 0x80008648          // 0x80008648(0x15e, 0xa5, 0x2, 0x88d00a68)
         
         // CODE XREF from fcn.802e3bbc @ +0x19c
         ra = [sp + 0x1c]         // v1
         sp += 0x20
         ret                      // v1
         

    loc_0x802e4ba8: // orphan
         // CODE XREF from fcn.802e3bbc @ +0x1e8
         daddi t6, t3, 0x7366
         daddiu s2, t3, 0x2050
         daddi t3, t3, 0x2e00
         madd.d f17, f11, f14
         ldr 0, 0x4361, at
         madd k1, a1

    loc_0x802e4dcc: // orphan
         if                       // fcn.802e67fc+0x144 // unlikely
         if                       // unlikely

    loc_0x802e4dd8: // orphan
         
         
         
         
         
         
         goto 0x8ac00020
         

    loc_0x802e51a8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3de4
         goto 0x802e51b0
         s2 = 0 + 0xb

    loc_0x802e51b0: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e51a8
         s1 = 0 + 1               // lo
         if                       // likely
         s0 = 0

    loc_0x802e51bc: // orphan
         call 0x800542b0          // 0x800542b0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         srav t6, v0, s3
         t8 = t6 & 1              // lo
         s0 += 1
         s1 &= t8                 // lo
         if                       // likely
         s1 &= 0xff               // lo

    loc_0x802e51dc: // orphan
         if                       // likely
         

    loc_0x802e51e4: // orphan
         goto 0x802e52b4
         v0 = 0

    loc_0x802e51ec: // orphan
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x802e51f4: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x802e51fc: // orphan
         if                       // unlikely
         

    loc_0x802e5204: // orphan
         goto 0x802e523c
         t9 = , unsigned  byte [sp + 0x2e]

    loc_0x802e520c: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 6
         goto 0x802e5238
         byte [sp + 0x2e] = v0

    loc_0x802e521c: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 7
         goto 0x802e5238
         byte [sp + 0x2e] = v0

    loc_0x802e522c: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 8               // a2
         byte [sp + 0x2e] = v0

    loc_0x802e5238: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802e5214, 0x802e5224
         t9 = , unsigned  byte [sp + 0x2e] // s4

    loc_0x802e523c: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e5204
         v0 = 0
         if                       // likely
         

    loc_0x802e5248: // orphan
         if                       // unlikely
         a0 = 0 + 6

    loc_0x802e5250: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 + 7

    loc_0x802e525c: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 8               // a2

    loc_0x802e5268: // orphan
         goto 0x802e529c
         a0 = 0 + 0x13

    loc_0x802e5270: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x802e529c
         a0 = 0 + 0x13

    loc_0x802e5280: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x802e529c
         a0 = 0 + 0x13

    loc_0x802e5290: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0 + 0x13

    loc_0x802e529c: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802e5268, 0x802e5278, 0x802e5288
         call 0x80051d64          // 0x80051d64(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x80054e48          // 0x80054e48(-1, 0x0, 0x8, -1)
         a0 = 0 + 3
         goto 0x802e52b4
         v0 = 0 + 1               // lo

    loc_0x802e52b4: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802e51e4, 0x802e52ac
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         s2 = [sp + 0x1c]         // v1
         s3 = [sp + 0x20]         // a2
         ret
         sp += 0x38

    loc_0x802e5304: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3df0
         goto 0x802e53b8
         ra = [sp + 0x1c]         // v1

    loc_0x802e53b8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e5304
         v0 = [sp + 0x24]
         s0 = [sp + 0x18]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x802e5400: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3dfc
         t9 = halfword [t9 - 0x7aec]
         t5 = halfword [t5 - 0x7aea]
         mtc1 at, f0
         mtc1 t9, f4
         mtc1 t5, f16
         at = 0xed00 << 16
         cvt.s.w f6, f4
         t0 = 0x8ac1 << 16
         t6 = 0x8ac1 << 16
         cvt.s.w f18, f16
         mul.s f8, f6, f0

    loc_0x802e542c: // orphan
         
         mul.s f4, f18, f0
         trunc.w.s f10, f8
         trunc.w.s f6, f4
         mfc1 t1, f10
         mfc1 t7, f6
         t2 = t1 & 0xfff
         t3 = t2 << 0xc
         t4 = t3 | at
         t8 = t7 & 0xfff
         t9 = t4 | t8
         [v1 + 0] = t9
         t0 = halfword [t0 - 0x7ae8]
         t6 = halfword [t6 - 0x7ae6]
         mtc1 t0, f8
         mtc1 t6, f4
         cvt.s.w f10, f8
         cvt.s.w f6, f4
         mul.s f16, f10, f0
         
         mul.s f8, f6, f0
         trunc.w.s f18, f16
         trunc.w.s f10, f8
         mfc1 t2, f18
         mfc1 t4, f10
         t3 = t2 & 0xfff
         t5 = t3 << 0xc
         t8 = t4 & 0xfff          // lo
         t9 = t5 | t8
         ret                      // ra
         [v1 + 4] = t9

    loc_0x802e54fc: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e08
         sp -= 0x18
         halfword [at - 0x7ae8] = t6
         [sp + 0x14] = ra
         at = 0x8ac1 << 16
         t7 = 0 + 0x1e0
         call 0x8ac005d8          // 0x8ac005d8(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at - 0x7ae6] = t7
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x802e55f8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e14
         halfword [at - 0x7ae2] = t6
         [sp + 0] = a0
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         at = 0x8ac1 << 16
         ret                      // ra
         halfword [at - 0x7ade] = a0

    loc_0x802e5764: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e20
         s6 = s0 + a3             // arg4

    loc_0x802e5768: // orphan
         v0 = halfword [sp + 0x72]
         v0 += a2                 // arg3
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // a2
         // CODE XREF from fcn.802e3bbc @ +0x268
         halfword [sp + 0x72] = v0
         a2 = 0

    loc_0x802e5780: // orphan
         at = , s6 < 0x281
         if                       // unlikely
         v0 = halfword [sp + 0x72] // a2

    loc_0x802e578c: // orphan
         at = , s0 < 0x281        // lo
         if                       // likely
         t6 = 0 + 0x280

    loc_0x802e5798: // orphan
         s0 = 0 + 0x280

    loc_0x802e579c: // orphan
         a3 = t6 - s0             // arg4
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         s6 = a3 + s0             // arg4

    loc_0x802e57ac: // orphan
         a0 = a2 + v0             // arg3

    loc_0x802e57b0: // orphan
         at = , a0 < 0x1e1        // arg1
         if                       // unlikely
         v1 = 0x800d << 16

    loc_0x802e57bc: // orphan
         at = , a2 < 0x1e1        // arg3 // lo
         if                       // likely
         t7 = 0 + 0x1e0

    loc_0x802e57c8: // orphan
         a2 = 0 + 0x1e0           // arg3

    loc_0x802e57cc: // orphan
         v0 = t7 - a2             // arg3
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a0 = v0 + a2             // arg3

    loc_0x802e57dc: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e28
         v1 += 0x510
         v0 = [v1 + 0]            // t9
         ra = 0xe700 << 16
         mtc1 s0, f4
         t8 = v0 + 8

    loc_0x802e57f0: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e2c
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = ra
         v0 = [v1 + 0]            // t9
         t6 = 0xe300 << 16
         cvt.s.w f6, f4
         t9 = v0 + 8
         [v1 + 0] = t9
         t6 |= 0xa01
         [v0 + 0] = t6
         [v0 + 4] = 0
         v0 = [v1 + 0]
         mtc1 a2, f16
         at = 0x4080 << 16
         // CODE XREF from fcn.802cb014 @ 0x802cb2b4
         mtc1 at, f0
         cvt.s.w f18, f16
         t7 = v0 + 8
         mul.s f8, f6, f0
         [v1 + 0] = t7

    loc_0x802e583c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2b8
         t9 = 0xf0a << 16
         t8 = 0xe200 << 16
         t8 |= 0x1c
         t9 |= 0x4000
         [v0 + 4] = t9
         [v0 + 0] = t8
         // CODE XREF from fcn.802e3bbc @ +0x274
         v0 = [v1 + 0]
         mul.s f4, f18, f0
         trunc.w.s f10, f8
         t6 = v0 + 8
         [v1 + 0] = t6

    loc_0x802e5868: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e34
         t7 = 0xe300 << 16
         t7 |= 0xc00
         [v0 + 0] = t7
         [v0 + 4] = 0
         v0 = [v1 + 0]
         mtc1 s6, f8
         mfc1 t6, f10
         trunc.w.s f6, f4
         t8 = v0 + 8
         mtc1 a0, f4
         cvt.s.w f10, f8
         [v1 + 0] = t8
         t7 = t6 & 0xfff
         t8 = t7 << 0xc
         mfc1 t7, f6

    loc_0x802e58a4: // orphan
         cvt.s.w f6, f4
         mul.s f16, f10, f0
         at = 0xed00 << 16
         t9 = t8 | at
         t8 = t7 & 0xfff
         t6 = t9 | t8
         mul.s f8, f6, f0
         [v0 + 0] = t6
         at = , a2 < a0           // lo
         fp = s6
         t5 = a0                  // t9
         s7 = 0 + 0x20            // k0
         trunc.w.s f18, f16
         trunc.w.s f10, f8
         mfc1 t9, f18
         
         t8 = t9 & 0xfff
         mfc1 t9, f10
         t6 = t8 << 0xc
         t8 = t9 & 0xfff
         t7 = t6 | t8
         [v0 + 4] = t7
         v0 = [v1 + 0]
         t8 = 0xfffc << 16
         t6 = 0xfcff << 16
         t9 = v0 + 8
         [v1 + 0] = t9

    loc_0x802e5910: // orphan
         t6 |= 0xffff             // s2
         t8 |= 0xf87c             // t9
         [v0 + 4] = t8
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = 0
         if                       // unlikely
         [v0 + 0] = ra

    loc_0x802e5938: // orphan
         if                       // likely
         a0 = a2 & 0x1f           // arg3

    loc_0x802e5940: // orphan
         if                       // unlikely
         

    loc_0x802e5948: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2c4
         a0 -= 0x20               // arg1

    loc_0x802e594c: // orphan
         a1 = s7 - a0             // arg2
         t9 = a2 + a1             // arg3
         at = , t5 < t9
         if                       // likely
         t3 = s0

    loc_0x802e5960: // orphan
         a1 = t5 - a2             // arg3

    loc_0x802e5964: // orphan
         at = , s0 < s6           // lo
         if                       // unlikely
         s4 = a0 << 4             // arg1

    loc_0x802e5970: // orphan
         halfword [sp + 0x6a] = a2
         v0 = halfword [sp + 0x6a] // a2
         halfword [sp + 0x66] = s0

    loc_0x802e597c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2c8
         [sp + 0x58] = t5
         s2 = v0 + a1             // arg2
         s2 <<= 2
         s3 = v0 << 2
         s3 &= 0xfff
         s2 &= 0xfff
         s4 &= 0xffff
         if                       // likely
         s5 = , signed  v0 >> 5

    loc_0x802e59a0: // orphan
         at = v0 + 0x1f
         s5 = , signed  at >> 5   // a2

    loc_0x802e59a8: // orphan
         at = s5                  // t9
         s5 <<= 2
         s5 += at
         s5 <<= 2
         [sp + 0x30] = a1

    loc_0x802e59bc: // orphan
         if                       // likely
         v0 = t3 & 0x1f

    loc_0x802e59c4: // orphan
         if                       // unlikely
         

    loc_0x802e59cc: // orphan
         v0 -= 0x20

    loc_0x802e59d0: // orphan
         t4 = s7 - v0
         // CODE XREF from fcn.802cb014 @ 0x802cb2d0
         t6 = t3 + t4
         at = , s6 < t6
         if                       // likely
         s1 = v0                  // s4

    loc_0x802e59e4: // orphan
         t4 = s6 - t3

    loc_0x802e59e8: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2d4
         v0 = [v1 + 0]
         t7 = 0xfd10 << 16
         s0 = t3 + t4
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 0] = t7
         t7 = [sp + 0x60]
         a0 = v0
         if                       // likely
         t9 = , signed  t3 >> 5

    loc_0x802e5a10: // orphan
         at = t3 + 0x1f
         t9 = , signed  at >> 5   // a2

    loc_0x802e5a18: // orphan
         t6 = s5 + t9
         t8 = t6 << 9
         t9 = t8 + t7
         [a0 + 4] = t9            // arg1
         v0 = [v1 + 0]
         t7 = 0x708 << 16
         t7 |= 0x200
         t6 = v0 + 8
         [v1 + 0] = t6
         t8 = 0xf510 << 16
         [v0 + 0] = t8
         [v0 + 4] = t7
         v0 = [v1 + 0]
         t6 = 0xe600 << 16

    loc_0x802e5a50: // orphan
         t7 = 0xf300 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t9 = 0x70f << 16
         t9 |= 0xf200
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t7 = 0xf510 << 16
         t9 = 8 << 16
         t6 = v0 + 8
         [v1 + 0] = t6
         // CODE XREF from fcn.802d9024 @ 0x802e3e50
         [v0 + 4] = 0
         [v0 + 0] = ra
         // CODE XREF from fcn.802cb014 @ +0x2c4
         v0 = [v1 + 0]
         t9 |= 0x200
         t7 |= 0x800

    loc_0x802e5aa8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e54
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t7 = 3 << 16
         t7 |= 0xc03c
         t6 = v0 + 8
         [v1 + 0] = t6
         t8 = 0xf200 << 16
         [v0 + 0] = t8
         [v0 + 4] = t7
         v0 = [v1 + 0]
         t6 = s0 << 2
         t8 = t6 & 0xfff
         t9 = v0 + 8
         [v1 + 0] = t9
         t7 = t8 << 0xc
         at = 0xe400 << 16
         t9 = t7 | at
         t6 = t9 | s2
         t8 = t3 << 2
         t7 = t8 & 0xfff
         // CODE XREF from fcn.802cb014 @ 0x802cb2e0
         t9 = t7 << 0xc
         [v0 + 0] = t6
         t6 = t9 | s3
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t7 = 0xe100 << 16
         at = , s0 < fp           // lo
         t8 = v0 + 8
         [v1 + 0] = t8
         t8 = s1 << 0x14
         [v0 + 0] = t7
         t7 = t8 | s4

    loc_0x802e5b68: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e64
         a2 = halfword [sp + 0x6a]
         a1 = [sp + 0x30]

    loc_0x802e5b70: // orphan
         a2 += a1                 // arg3
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3
         at = , a2 < t5           // lo
         if                       // likely
         

    loc_0x802e5b88: // orphan
         v0 = [v1 + 0]
         t6 = 0xa0 << 16
         t6 |= 0x780
         t7 = v0 + 8
         [v1 + 0] = t7
         t9 = 0xed00 << 16
         [v0 + 0] = t9
         [v0 + 4] = t6
         ra = [sp + 0x2c]
         fp = [sp + 0x28]
         s7 = [sp + 0x24]
         s6 = [sp + 0x20]         // a2

    loc_0x802e5bb8: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2e4
         s5 = [sp + 0x1c]         // v1
         s4 = [sp + 0x18]         // t9
         s3 = [sp + 0x14]
         s2 = [sp + 0x10]         // s4
         // CODE XREF from fcn.802e3bbc @ +0x2b8
         s1 = [sp + 0xc]
         s0 = [sp + 8]

    loc_0x802e5bd0: // orphan
         ret                      // ra
         sp += 0x60

    loc_0x802e5bdc: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e78
         ret                      // ra
         // CODE XREF from fcn.802d9024 @ 0x802e3e6c
         [at - 0x7adc] = 0

    loc_0x802e5bf4: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e70
         v0 = [s2 + 0]            // t9
         [sp + 0x1c] = s1
         [sp + 0x38] = fp
         s1 = 0x5750 << 16
         fp = a0                  // t9
         [sp + 0x3c] = ra
         [sp + 0x34] = s7
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x18] = s0
         if                       // unlikely
         s1 |= 0x3030

    loc_0x802e5c2c: // orphan
         at = , v0 < 0x64
         if                       // likely
         s0 = 0

    loc_0x802e5c38: // orphan
         s6 = 0x8ac1 << 16
         s4 = 0x8ac0 << 16
         s4 += 0x7e50
         s6 -= 0x7ad8
         s7 = 0 + 0x64
         s5 = 0xffff << 16
         s3 = sp + 0x48
         a0 = s3
         a1 = s4
         call 0x8007be30          // 0x8007be30(0x178048, 0x8ac07e50, 0x8, -1)
         a2 = s0
         t7 = byte [sp + 0x48]
         t6 = byte [sp + 0x49]
         t9 = s1 & s5
         t8 = t7 << 8
         // CODE XREF from fcn.802d9024 @ 0x802e3e80
         v1 = t6 | t8
         // CODE XREF from fcn.802cb014 @ 0x802cb2f4
         t0 = v1 & 0xffff
         s1 = t9 | t0
         a1 = s1
         call 0x8005049c          // 0x8005049c(0x178048, 0xfe110000, 0x104, -1)

    loc_0x802e5c88: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e3e84
         a0 = fp

    loc_0x802e5c8c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb2f8
         if                       // unlikely
         s0 += 1

    loc_0x802e5cc4: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // a2
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x58

    loc_0x802e5db0: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e5dc0
         call 0x80063b7c          // "P@" // 0x80063b7c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802e3bbc @ +0x2e4
         a0 = s0 & 0xff
         beql v0, 0, 0x802e5dcc   // unlikely
         ra = [sp + 0x1c]

    loc_0x802e5dc0: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802cb30c
         goto 0x802e5db0
         s0 = v0 & 0xff           // s4

    loc_0x802e5dcc: // orphan
         v0 = s0
         s0 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x802e6964: // orphan
         sp -= 0x60
         [sp + 0x14] = ra
         a3 = [a0 + 0x14]         // arg1 // t9
         a2 = [a0 + 0]            // arg1

    loc_0x802e6974: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e3fa0
         v1 = 0x800d << 16
         // CODE XREF from fcn.802cb014 @ 0x802e3f94
         t6 = halfword [a3 + 0xe]
         v1 += 0x510
         halfword [sp + 0x52] = t6
         t7 = halfword [a3 + 0x10]
         t8 = halfword [sp + 0x52]

    loc_0x802e698c: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e3f98
         t6 = 0x8ac1 << 16
         halfword [sp + 0x50] = t7
         t3 = halfword [a0 + 0x18]
         t6 = halfword [t6 - 0x6644]
         t4 = halfword [a0 + 0x1a]
         t9 = t8 + t3
         [sp + 0x1c] = t9
         t7 = t9 - t6
         halfword [a2 + 8] = t7   // arg3

    loc_0x802e73ac: // orphan
         if                       // unlikely
         halfword [s0 + 0x10] = t1

    loc_0x802e73b4: // orphan
         beql a0, at, 0x802e7444  // unlikely
         // CODE XREF from fcn.82bea63c @ 0x802cb3c4
         t0 = halfword [s0 + 4]

    loc_0x802e73c4: // orphan
         v0 = halfword [s0 + 0x12]
         at = 0 + 6
         halfword [s0 + 4] = 0
         if                       // unlikely
         at = 0 + 0xa

    loc_0x802e7744: // orphan
           // CALL XREF from fcn.81b5c8e4 @ +0x5ec
         a0 = , unsigned  byte [sp + 0x24] // s4
         a1 = , unsigned  byte [sp + 0x25] // s4
         a2 = , unsigned  byte [sp + 0x26] // s4
         call 0x800497e4          // 0x800497e4(0xff, 0xff, 0xff, -1)
         a3 = , unsigned  byte [sp + 0x27] // s4

    loc_0x802e7778: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802cb3f4
         s0 = [sp + 0x18]
         sp += 0x40
         ret                      // ra
         v0 = 0

    loc_0x802e7bb4: // orphan
         goto 0x802e7dac
         ra = [sp + 0x4c]

    loc_0x802e7c10: // orphan
         a0 = 0x8ac1 << 16
         a0 -= 0x6644             // arg1
         t7 = t6 & 2
         beql t7, 0, 0x802e7dac   // likely
         ra = [sp + 0x4c]

    loc_0x802e7f58: // orphan
         // CODE XREF from fcn.802cb014 @ +0x420
         a0 = [s0 + 0x10]
         goto 0x802e8110
         [s0 + 0x28] = v0

    loc_0x802e8098: // orphan
         [v1 + 0] = t9
         at = 0xe400 << 16
         t6 = t5 << 2
         t7 = t6 & 0xfff
         t9 = t8 | at
         t8 = t9 | t7
         [v0 + 0] = t8
         t5 = halfword [sp + 0x56]
         t8 = halfword [sp + 0x54]
         t6 = t5 << 2
         t9 = t6 & 0xfff
         t5 = t8 << 2
         t6 = t5 & 0xfff
         t7 = t9 << 0xc
         t9 = t7 | t6
         [v0 + 4] = t9
         v0 = [v1 + 0]            // t9

    loc_0x802e8350: // orphan
         goto 0x802e8378
         [v1 + 4] = t5

    loc_0x802e8378: // orphan
         // CODE XREF from fcn.802cb014 @ 0x802e8304
         // CODE XREF from fcn.802d9024 @ 0x802e8350
         v1 = [t0 + 0]            // t9
         t5 = , unsigned  byte [sp + 0x9f]
         at = 0xfa00 << 16
         t9 = v1 + 8
         [t0 + 0] = t9
         t6 = t5 | at
         [v1 + 0] = t6
         t5 = , unsigned  byte [sp + 0xa2]
         t8 = , unsigned  byte [sp + 0xa3]
         t4 = , unsigned  byte [sp + 0xa1]
         t6 = t5 << 0x10
         t9 = t8 << 0x18
         t8 = , unsigned  byte [sp + 0xa0]
         t7 = t9 | t6
         t5 = t4 << 8
         t9 = t7 | t5
         t4 = t9 | t8
         [v1 + 4] = t4
         v1 = [t0 + 0]
         t5 = 0xfb00 << 16
         at = 0 + 2
         t7 = v1 + 8
         [t0 + 0] = t7
         [v1 + 0] = t5
         t7 = , unsigned  byte [sp + 0x9d]
         t9 = , unsigned  byte [sp + 0x9e]
         t4 = , unsigned  byte [sp + 0x9c]
         t5 = t7 << 0x10
         t8 = t9 << 0x18
         t9 = , unsigned  byte [sp + 0x9b]
         t6 = t8 | t5
         t7 = t4 << 8
         t8 = t6 | t7
         t4 = t8 | t9
         [v1 + 4] = t4
         t6 = halfword [s0 + 4]
         t7 = halfword [s0 + 0xc]
         t8 = halfword [s0 + 6]
         t9 = halfword [s0 + 0xe]

    loc_0x802e8b54: // orphan
         ra = [sp + 0x14]
         t5 = , unsigned  halfword [a2 + 2]
         t6 = t5 & 0xfffd
         goto 0x802e8d40
         // CODE XREF from fcn.802e4048 @ 0x802e4060
         halfword [a2 + 2] = t6   // arg3

    loc_0x802e8c44: // orphan
         t3 = t5 | t9
         t6 = t3 | t4             // t9
         [v1 + 4] = t6
         v1 = [a3 + 0]            // arg4 // t9
         t5 = 0xfb00 << 16
         t7 = v1 + 8
         [a3 + 0] = t7            // arg4
         [v1 + 0] = t5
         t8 = , unsigned  byte [sp + 0x38]
         t6 = , unsigned  byte [sp + 0x39]
         t3 = t8 << 0x18
         t8 = , unsigned  byte [sp + 0x3a]
         t7 = t6 << 0x10
         t5 = t3 | t7
         t7 = , unsigned  byte [sp + 0x3b]
         t4 = t8 << 8
         t6 = t5 | t4             // fp
         // CODE XREF from fcn.802e4048 @ +0x1c
         t9 = t6 | t7             // fp
         [v1 + 4] = t9
         a1 = , unsigned  halfword [sp + 0x42]
         call 0x8ac010d4          // 0x8ac010d4(-1, 0x0, 0x8, -1)
         a0 = [sp + 0x44]
         // CODE XREF from fcn.802e4048 @ 0x802e4068
         a3 = 0x800d << 16
         a3 += 0x510
         v1 = [a3 + 0]
         t0 = halfword [sp + 0x52]
         t5 = halfword [sp + 0x4e]
         t8 = v1 + 8
         [a3 + 0] = t8
         t1 = halfword [sp + 0x50]
         t8 = halfword [sp + 0x4c]
         t4 = t0 + t5
         t3 = t4 << 2
         t6 = t3 & 0xfff
         t5 = t1 + t8
         t4 = t5 << 2
         t7 = t6 << 0xc
         at = 0xe400 << 16
         t9 = t7 | at
         t3 = t4 & 0xfff
         t7 = t0 << 2
         t8 = t7 & 0xfff
         t6 = t9 | t3
         t4 = t1 << 2
         t9 = t4 & 0xfff
         t5 = t8 << 0xc
         t3 = t5 | t9
         [v1 + 4] = t3
         [v1 + 0] = t6
         v1 = [a3 + 0]
         t7 = 0xe100 << 16
         t5 = 0x400 << 16
         t6 = v1 + 8
         [a3 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = t7
         v1 = [a3 + 0]
         t5 |= 0x400
         t4 = 0xf100 << 16
         t8 = v1 + 8
         [a3 + 0] = t8
         [v1 + 4] = t5
         [v1 + 0] = t4

    loc_0x802e8d40: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802e8b60
         ra = [sp + 0x14]
         sp += 0x58
         v0 = 0
         ret
         

    loc_0x802e9880: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x802e9888: // orphan
         if                       // likely
         

    loc_0x802e9890: // orphan
         break 6

    loc_0x802e9894: // orphan
         v1 = halfword [t4 + 0x60]
         at = , v1 < 2
         bnel at, 0, 0x802e98c0   // unlikely
         v0 = halfword [t4 + 0x5a]

    loc_0x802e98a4: // orphan
         t9 = v1 & 1
         beql t9, 0, 0x802e98c0   // likely
         v0 = halfword [t4 + 0x5a]

    loc_0x802e98b0: // orphan
         t7 = v1 - 1
         halfword [t4 + 0x60] = t7
         v1 = halfword [t4 + 0x60]
         v0 = halfword [t4 + 0x5a]

    loc_0x802e98c0: // orphan
         div 0, v0, v1
         t6 = lo
         t8 = hi
         halfword [t4 + 0x66] = t6
         halfword [t4 + 0x68] = t8
         if                       // likely
         

    loc_0x802e98dc: // orphan
         break 7

    loc_0x802e98e0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802e98ec: // orphan
         if                       // likely
         

    loc_0x802e98f4: // orphan
         break 6

    loc_0x802e98f8: // orphan
         [sp + 0x144] = t4
         halfword [sp + 0x12a] = a1
         call 0x8004ca38          // 0x8004ca38(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x124]
         // CODE XREF from fcn.802e40c0 @ 0x802e40d4
         t4 = [sp + 0x144]        // t9
         a1 = halfword [sp + 0x12a]
         at = 0x3f00 << 16
         halfword [t4 + 0x5c] = v0
         halfword [t4 + 0x5e] = a1

    loc_0x802e991c: // orphan
         // CODE XREF from fcn.802e40c0 @ 0x802e40d8
         t9 = , unsigned  byte [s0 + 1]
         mtc1 at, f12
         at = 0x3f80 << 16
         t7 = t9 & 1
         t6 = , unsigned  , 0 < t7
         halfword [t4 + 0x62] = t6
         t8 = , unsigned  byte [s0 + 1]
         t6 = 0 - 1               // s2
         [t4 + 0x6c] = t6
         t6 = halfword [t4 + 0x58]
         t9 = t8 & 2
         t7 = , unsigned  , 0 < t9
         halfword [t4 + 0x64] = t7
         mtc1 t6, f8
         t9 = halfword [s0 + 8]
         t8 = halfword [sp + s0]
         cvt.s.w f10, f8
         t6 = halfword [t4 + 0x5a]
         t7 = t8 + t9
         mtc1 t7, f4
         mtc1 at, f0
         cvt.s.w f6, f4
         mul.s f4, f10, f12
         add.s f8, f6, f4
         mtc1 t6, f4
         swc1 f8, 0x48, t4
         t9 = halfword [s0 + 0xa]
         t8 = halfword [sp + 0x106]
         cvt.s.w f8, f4
         [t4 + 0x3c] = 0
         t7 = t8 + t9
         mtc1 t7, f10
         swc1 f0, 0x40, t4
         swc1 f0, 0x44, t4
         cvt.s.w f6, f10
         mul.s f10, f8, f12
         lwc1 f8, 0x48, t4
         swc1 f8, 0x50, t4
         add.s f4, f6, f10
         swc1 f4, 0x4c, t4
         lwc1 f6, 0x4c, t4
         swc1 f6, 0x54, t4
         t8 = , unsigned  halfword [s0 + 2]
         t9 = t8 & 0xfffd
         halfword [s0 + 2] = t9
         goto 0x802eac1c          // fcn.802e9f40+0xcdc
         [t4 + 0x74] = 0

    loc_0x802ea180: // orphan
         goto 0x802ea1b0
         a0 = v1

    loc_0x802eae94: // orphan
         // CODE XREF from fcn.802eaa24 @ +0x454
         t9 = halfword [a0 + 0x5a]
         at = 0x3f00 << 16
         mtc1 at, f8
         mtc1 t9, f4
         lwc1 f16, 0x44, a0       // arg1
         cvt.s.w f6, f4
         sub.s f18, f2, f16
         mul.s f10, f6, f8
         lwc1 f6, 0x54, a0        // arg1
         mul.s f4, f10, f18
         add.s f8, f6, f4
         swc1 f8, 0x4c, a0        // arg1
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802eafd0: // orphan
         sub.s f8, f0, f6
         cvt.s.w f6, f4
         swc1 f8, 0x40, a0        // arg1
         lwc1 f10
         mtc1 at, f8
         mul.s f16, f10, f2
         add.s f18, f16, f0
         mul.s f10, f6, f8
         lwc1 f6, 0x54, a0        // arg1
         swc1 f18, 0x44, a0       // arg1
         lwc1 f16, 0x44, a0       // arg1
         sub.s f18, f0, f16
         mul.s f4, f10, f18
         add.s f8, f6, f4
         ret                      // ra
         swc1 f8, 0x4c, a0        // arg1

    loc_0x802eb350: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802eb494: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802eb4f8
         s0 <<= 0x10
         s0 = , signed  s0 >> 0x10
         a0 = s0 << 0x10
         a0 = , signed  a0 >> 0x10 // s0
         call 0x8ac06464          // "P@" // 0x8ac06464(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = s2

    loc_0x802eb4ac: // orphan
         beql v0, 0, 0x802eb4f0   // unlikely
         a0 = s0 << 0x10          // arg1

    loc_0x802eb4b4: // orphan
         t6 = halfword [s2 + 8]
         s1 -= 1
         s1 <<= 0x10
         s1 = , signed  s1 >> 0x10
         unsigned , hi
         a1 = s2
         a0 = lo
         a0 <<= 0x10              // arg1
         call 0x8ac064c4          // 0x8ac064c4(0xffff804754000000, -1, 0x8, -1)
         a0 = , signed  a0 >> 0x10
         if                       // unlikely
         t7 = 0 + 1               // lo

    loc_0x802eb4e4: // orphan
         goto 0x802eb500
         [sp + 0x2c] = t7

    loc_0x802eb4ec: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802eb4dc
         a0 = s0 << 0x10

    loc_0x802eb4f0: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802eb4ac
         call 0x8ac0660c          // 0x8ac0660c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // t9
         bnel v0, 0, 0x802eb494   // likely
         s0 -= 1

    loc_0x802eb500: // orphan
         // CODE XREFS from fcn.802d9024 @ 0xa68, 0x802eb4e4
         ra = [sp + 0x24]         // t9
         v0 = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // a2
         ret                      // t9
         sp += 0x30

    loc_0x802eb5e8: // orphan
         ret                      // ra
         sp += 0x30

    loc_0x802ee0bc: // orphan
         at = 0x8af3 << 16
         call 0x8af1b5e0          // 0x8af1b5e0(-1, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x4534] = v0
         goto 0x802ee1d8
         ra = [sp + 0x14]

    loc_0x802ee1d8: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802ee0c8
         sp += 0x18
         ret                      // ra
         

    loc_0x802ee1fc: // orphan
         if                       // unlikely
         t6 <<= 2

    loc_0x802ee204: // orphan
         at = 0x8af3 << 16
         at += t6
         t6 = [at - 0x77e0]       // t9
         goto t6                  // t9
         

    loc_0x802ee2cc: // orphan
         
         goto 0x802ee3ec
         halfword [sp + 0x1e] = v0

    loc_0x802ee3ac: // orphan
         
         goto 0x802ee3ec
         halfword [sp + 0x1e] = v0

    loc_0x802ee3e8: // orphan
         halfword [sp + 0x1e] = v0

    loc_0x802ee3ec: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802ee2d0, 0x802ee3b0
         ra = [sp + 0x14]
         v0 = halfword [sp + 0x1e] // s4
         sp += 0x20
         ret
         

    loc_0x802ee48c: // orphan
         ret                      // ra
         

    loc_0x802ee54c: // orphan
         
         goto 0x802ee684
         ra = [sp + 0x14]

    loc_0x802ee66c: // orphan
         
         goto 0x802ee684
         ra = [sp + 0x14]

    loc_0x802ee684: // orphan
         // CODE XREFS from fcn.802d9024 @ 0x802ee550, 0x802ee670
         sp += 0x18
         ret                      // ra
         

    loc_0x802ee698: // orphan
         at = 0x4120 << 16
         mtc1 at, f4
         t8 = t7 << 0xc
         t9 = t8 & 0xffff
         t2 = , signed  t9 >> 4
         t3 = t2 << 2
         at = 0x8008 << 16
         a3 = a0 << 0x10          // arg4
         at += t3
         lwc1 f6, 0x7e50, at
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         mtc1 a3, f10
         mul.s f8, f4, f6
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]
         sp -= 0x18
         [sp + 0x18] = a0
         cvt.s.w f16, f10
         t5 = v0 + 8
         [sp + 0x14] = ra
         [sp + 0x1c] = a1
         [v1 + 0] = t5
         t7 = 0x8009 << 16
         add.s f18, f16, f8
         t7 += 0x4e38
         t6 = 0xde00 << 16
         a0 = 0x8af3 << 16
         trunc.w.s f4, f18
         [v0 + 0] = t6
         [v0 + 4] = t7
         a0 = [a0 - 0x40e0]       // arg1 // t9
         mfc1 a3, f4
         
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x1a] = a3
         t0 = halfword [sp + 0x1a]
         v1 = 0x800d << 16
         v1 += 0x510
         t1 = halfword [sp + 0x1e]
         v0 = [v1 + 0]
         t9 = t0 + 0x28
         t2 = t9 << 2
         t3 = t2 & 0xfff
         t6 = t1 + 0x19
         t8 = v0 + 8
         [v1 + 0] = t8
         t7 = t6 << 2
         t4 = t3 << 0xc
         at = 0xe400 << 16
         t5 = t4 | at
         t8 = t7 & 0xfff
         t2 = t0 << 2
         t3 = t2 & 0xfff
         t6 = t1 << 2
         t7 = t6 & 0xfff          // k0
         t4 = t3 << 0xc

    loc_0x802ee784: // orphan
         t9 = t5 | t8
         t5 = t4 | t7             // t9
         [v0 + 4] = t5
         [v0 + 0] = t9
         v0 = [v1 + 0]            // t9
         t9 = 0xe100 << 16
         t6 = 0x400 << 16
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = t9
         v0 = [v1 + 0]
         t6 |= 0x400
         t3 = 0xf100 << 16
         t2 = v0 + 8
         [v1 + 0] = t2
         [v0 + 4] = t6
         [v0 + 0] = t3
         v0 = [v1 + 0]
         t5 = 0x8009 << 16
         t5 += 0x4f50
         t4 = v0 + 8
         [v1 + 0] = t4
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t5
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802ee820: // orphan
         at = 0x8008 << 16
         at += t1
         t3 = t2 << 0x12
         lwc1 f6, 0x7e50, at
         t4 = , signed  t3 >> 0x10
         mtc1 t4, f10
         mul.s f8, f4, f6
         sp -= 0x30
         [sp + 0x14] = s0
         s0 = 0x800d << 16
         [sp + 0x1c] = ra
         [sp + 0x18] = s1
         cvt.s.w f16, f10
         [sp + 0x30] = a0
         [sp + 0x34] = a1
         t6 = , unsigned  byte [a2 + 1] // arg3
         s0 += 0x510
         v0 = [s0 + 0]
         add.s f18, f16, f8
         t7 = t6 & 1
         t8 = , unsigned  , 0 < t7
         t9 = v0 + 8
         trunc.w.s f4, f18
         [sp + 0x20] = t8
         [s0 + 0] = t9
         t1 = 0x8009 << 16
         mfc1 s1, f4

    loc_0x802ee88c: // orphan
         t1 += 0x4e38
         t0 = 0xde00 << 16
         [v0 + 0] = t0
         [v0 + 4] = t1
         a1 = , unsigned  halfword [a2 + 0x26]
         a0 = , unsigned  halfword [a2 + 0x24]
         s1 <<= 0x10
         s1 = , signed  s1 >> 0x10
         call 0x8004c990          // 0x8004c990(0x0, 0xe4, 0x8, -1)
         [sp + 0x38] = a2
         [sp + 0x24] = v0
         call 0x8004ca10          // 0x8004ca10(0x0, 0xe4, 0x8, -1)
         a0 = v0                  // s4
         halfword [sp + 0x2c] = v0
         call 0x8004ca24          // 0x8004ca24(0xff, 0xe4, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         a0 = [sp + 0x24]         // s4
         call 0x8004d1fc          // 0x8004d1fc(0xff, 0xe4, 0x8, -1)
         halfword [sp + 0x2a] = v0
         t2 = [sp + 0x20]         // a2
         a2 = halfword [sp + 0x2a] // s4
         a3 = halfword [sp + 0x36]
         if                       // unlikely
         at = 0xe400 << 16

    loc_0x802ee8ec: // orphan
         t4 = halfword [sp + 0x2c] // s4
         a3 = halfword [sp + 0x36]
         v0 = [s0 + 0]
         t5 = t4 << 2
         t6 = s1 + t5
         t7 = t6 & 0xfff
         t8 = t7 << 0xc
         at = 0xe400 << 16
         t0 = a3 + a2
         t3 = v0 + 8
         [s0 + 0] = t3
         t1 = t0 << 2
         t9 = t8 | at
         t4 = s1 & 0xfff
         t6 = a3 << 2
         t7 = t6 & 0xfff
         t5 = t4 << 0xc
         t2 = t1 & 0xfff
         t3 = t9 | t2
         t8 = t5 | t7
         [v0 + 4] = t8
         [v0 + 0] = t3
         v0 = [s0 + 0]
         t1 = 0xe100 << 16
         t8 = 0xfc00 << 16
         t0 = v0 + 8
         [s0 + 0] = t0
         [v0 + 0] = t1
         t9 = [sp + 0x38]         // a2
         t8 |= 0x400
         t7 = 0xf100 << 16
         t4 = halfword [t9 + 0xc]
         t6 = t4 << 0x15
         [v0 + 4] = t6
         v0 = [s0 + 0]
         t5 = v0 + 8
         [s0 + 0] = t5
         [v0 + 4] = t8
         goto 0x802eea14
         [v0 + 0] = t7

    loc_0x802ee98c: // orphan
         t1 = halfword [sp + 0x2c] // s4
         v0 = [s0 + 0]
         t5 = a3 + a2
         t9 = t1 << 2
         t2 = s1 + t9
         t3 = t2 & 0xfff
         t4 = t3 << 0xc
         t0 = v0 + 8
         [s0 + 0] = t0
         t6 = t4 | at
         t2 = a3 << 2
         t1 = s1 & 0xfff
         t7 = t5 << 2
         t8 = t7 & 0xfff
         t9 = t1 << 0xc
         t3 = t2 & 0xfff
         t4 = t9 | t3
         t0 = t6 | t8
         [v0 + 0] = t0
         [v0 + 4] = t4
         v0 = [s0 + 0]
         t7 = 0xe100 << 16
         t0 = 0x400 << 16
         t5 = v0 + 8
         [s0 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [s0 + 0]
         t0 |= 0x400
         t8 = 0xf100 << 16
         t6 = v0 + 8
         [s0 + 0] = t6
         [v0 + 4] = t0
         [v0 + 0] = t8

    loc_0x802eea14: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802ee984
         v0 = [s0 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4f50
         t1 = v0 + 8
         [s0 + 0] = t1
         t2 = 0xde00 << 16
         [v0 + 0] = t2
         [v0 + 4] = t9
         ra = [sp + 0x1c]         // s4
         s1 = [sp + 0x18]         // s0
         s0 = [sp + 0x14]
         ret                      // s4
         sp += 0x30

    loc_0x802eed28: // orphan
         sp += 0x20
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]
         sp -= 0x20               // fp
         [sp + 0x1c] = ra
         t6 = v1 + 8
         [t0 + 0] = t6
         t8 = 0x8009 << 16
         t8 += 0x4e38
         t7 = 0xde00 << 16
         [v1 + 0] = t7
         [v1 + 4] = t8
         t1 = [sp + 0x34]         // t9
         t9 = [sp + 0x30]
         [sp + 0x14] = t1
         call 0x8004ad00          // 0x8004ad00(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t9
         ra = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         

    loc_0x802eef0c: // orphan
         a1 = 0 + 2               // arg2
         t1 = 0x8af3 << 16
         t1 = [t1 - 0x41a4]       // t9
         a0 = 0x8af3 << 16
         a0 -= 0x41b8             // arg1
         if                       // unlikely
         

    loc_0x802eef28: // orphan
         call 0x8af0282c          // 0x8af0282c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2

    loc_0x802eef30: // orphan
         t2 = 0x8af3 << 16
         t2 = [t2 - 0x41c4]       // t9
         a0 = 0x8af3 << 16
         a0 -= 0x41d8             // arg1
         if                       // unlikely
         

    loc_0x802eef48: // orphan
         call 0x8af0282c          // 0x8af0282c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2

    loc_0x802eef50: // orphan
         t3 = 0x8af3 << 16
         t3 = [t3 - 0x41dc]       // t9
         a0 = 0x8af3 << 16
         a0 -= 0x41f0             // arg1
         beql t3, 0, 0x802eef74   // unlikely
         ra = [sp + 0x14]         // t9

    loc_0x802eef68: // orphan
         call 0x8af0282c          // 0x8af0282c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         ra = [sp + 0x14]         // t9

    loc_0x802eef74: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x802eef98: // orphan
         call 0x8af017a4          // 0x8af017a4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8ac00840          // 0x8ac00840(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         a0 = 0x8af3 << 16

    loc_0x802eefb8: // orphan
         t6 = 0x8af3 << 16
         t6 = [t6 - 0x4534]       // s4
         if                       // unlikely
         

    loc_0x802eefc8: // orphan
         call 0x8af01778          // 0x8af01778(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x8af3 << 16
         call 0x80046634          // 0x80046634(0x8af30000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x4534]       // s4
         goto 0x802eefec
         

    loc_0x802eefe4: // orphan
         call 0x8ac00f04          // 0x8ac00f04(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x4534]       // t9

    loc_0x802eefec: // orphan
         // CODE XREF from fcn.802d9024 @ 0x802eefdc
         call 0x8af00620          // 0x8af00620(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8ac005d8          // 0x8ac005d8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8af00e24          // 0x8af00e24(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80008648          // 0x80008648(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = 0x8af3 << 16
         t7 = [t7 - 0x4188]       // t9
         // CODE XREF from fcn.802db204 @ +0xc4
         a0 = 0x8af3 << 16
         if                       // unlikely
         

    loc_0x802ef020: // orphan
         call 0x8af00770          // 0x8af00770(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = halfword [a0 - 0x4184]
         at = 0x8af3 << 16
         [at - 0x4188] = 0

    loc_0x802ef030: // orphan
         v0 = 0x8af3 << 16

    loc_0x802ef18c: // orphan
         t6 = lo
         t7 = t6 & 0xfff          // lo
         at = 0x700 << 16
         t9 = a1 & 0xfff          // arg2
         t6 = t9 << 0xc
         t8 = t7 | at
         t7 = t8 | t6

    loc_0x802ef1a8: // orphan
         [t0 + 4] = t7
         v0 = [v1 + 0]
         t8 = 0xe700 << 16
         t7 = a2 + 7              // arg3
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t8
         t2 = v0
         v0 = [v1 + 0]
         t9 = , signed  t7 >> 3   // lo
         t8 = t9 & 0x1ff          // lo
         t6 = v0 + 8
         [v1 + 0] = t6
         t6 = t8 << 9
         t9 = 8 << 16
         t9 |= 0x200
         t7 = t6 | t1
         [v0 + 0] = t7
         [v0 + 4] = t9
         t3 = v0
         v0 = [v1 + 0]
         t6 = 0xf200 << 16
         at = 0xe400 << 16
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 0] = t6
         t7 = halfword [sp + 0x16]
         t4 = v0
         t9 = t7 - 1
         t8 = t9 << 2
         t9 = halfword [sp + 0xe]
         t6 = t8 & 0xfff
         t7 = t6 << 0xc
         t8 = t9 - 1              // s2
         t6 = t8 << 2
         t9 = t6 & 0xfff
         t8 = t7 | t9
         [v0 + 4] = t8
         v0 = [v1 + 0]
         t7 = halfword [sp + 2]
         t9 = halfword [sp + 0xa]
         t6 = v0 + 8
         [v1 + 0] = t6
         t8 = t7 + t9
         t6 = t8 << 2
         t7 = t6 & 0xfff
         t9 = t7 << 0xc
         t7 = halfword [sp + 0xe]
         t6 = halfword [sp + 6]
         t8 = t9 | at
         t5 = v0
         t9 = t6 + t7
         t6 = t9 << 2
         t7 = t6 & 0xfff          // k0
         t9 = t8 | t7
         [v0 + 0] = t9
         t6 = halfword [sp + 2]
         t8 = t6 << 2
         t6 = halfword [sp + 6]
         t7 = t8 & 0xfff
         t9 = t7 << 0xc
         t8 = t6 << 2
         t7 = t8 & 0xfff          // k0
         t6 = t9 | t7
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t9 = 0xe100 << 16
         t6 = 0xf100 << 16
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = t9
         a0 = v0
         v0 = [v1 + 0]
         t8 = 0x400 << 16
         t8 |= 0x400
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = t8
         [v0 + 0] = t6
         ret                      // ra
         a1 = v0

    loc_0x802ef4f4: // orphan
         
         at = 0 + 1               // lo
         if                       // loc.802ef508 // loc.802ef508 // likely
         t1 = 0 + 4

}

*/
