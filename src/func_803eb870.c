/*
 * Function: 0x803eb870
 * Category: math
 */

// Decompiled C code
int fcn.803dd03c (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// do {
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
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
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.803dd03c (int esi, int edx) {
    loc_0x803dd03c:
        // CALL XREF from fcn.827d5050 @ +0xd14
        if            // fcn.803e87f4+0x2cc // unlikely
        if            // unlikely
            
    loc_0x803e8ad4:
        goto 0x803e8af4
        t3 |= at      // s4
         // do {
    loc_0x803e8af4:
        // CODE XREF from fcn.803dd03c @ 0x803e8ad4
        // CODE XREF from fcn.803e87f4 @ 0x803e8adc
        t7 = t3 & 0xff
        t4 = t7 << 8
        t1 = t8 | t4  // t9
        t6 = t1 | 0xff // t9
        [v1 + 4] = t6
        a0 = [s4 + 0] // t9
        ctc1 t5, 31
        t5 = 0 - 1    // s2
        t9 = a0 + 8   // arg1
        [s4 + 0] = t9
         // } while (?);
         // } while (?);
        goto loc_0x803dd048
    loc_0x803dd044:
        // CALL XREF from fcn.81a70d6c @ +0x4b4
        if            // fcn.803dd03c+0xbabc // unlikely
        if            // fcn.803dd03c+0xbae0 // unlikely
            
    loc_0x803e8b1c:
        [a0 + 4] = t5 // arg1
        [a0 + 0] = t2 // arg1
        a1 = [s4 + 0]
        t8 = 0x5566 << 16
        t7 = 0xfc30 << 16
         // do {
    loc_0x803e8b30:
        t3 = a1 + 8   // arg2
        [s4 + 0] = t3
        t7 |= 0xb261
        t8 |= 0xff7f  // t9
        [a1 + 4] = t8 // arg2
        goto 0x803e8bb0
        [a1 + 0] = t7 // arg2
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd050
    loc_0x803dd05c:
        if            // fcn.803dd03c+0xbb74 // unlikely
        if            // fcn.803dd03c+0xbb98 // unlikely
            
    loc_0x803e8bd4:
        if            // likely
        0x803e8bd8
            
    loc_0x803e8be0:
        // CODE XREF from fcn.803dd03c @ 0x803e8bd4
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x803e8bf8:
        // CODE XREFS from fcn.803dd03c @ 0x803e8be4, 0x803e8bec
        a0 = [s0 + 0] // t9
        call 0x8004d1fc // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
        0x803e8c00
        v0 = [s0 + 0] // t9
        a0 = s2 << 0x10
        a0 = , signed  a0 >> 0x10 // t9
        t9 = , unsigned  halfword [v0 + 0]
        at = 0x4f80 << 16
        mtc1 t9, f18
        if            // likely
        cvt.s.w f8, f18
            
    loc_0x803e8c30:
        // CODE XREF from fcn.803dd03c @ 0x803e8c1c
        mul.s f2, f8, f20
        at = 0x4f80 << 16
        c.lt.s f26, f2
        0x803e8c3c
        bc1fl 0x803e8c54
         // do {
    loc_0x803e8c44:
        mov.s f14, f24
        goto 0x803e8c54
        mov.s f14, f22
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd068
    loc_0x803dd074:
        if            // fcn.803dd03c+0xbc2c // unlikely
        if            // fcn.803dd03c+0xbc50 // unlikely
            
    loc_0x803e8c8c:
        mov.s f12, f24
        goto 0x803e8c9c
        mov.s f12, f22
         // do {
    loc_0x803e8c9c:
        // CODE XREF from fcn.803dd03c @ 0x803e8c90
        add.s f4, f12, f0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd080
    loc_0x803dd08c:
        if            // fcn.803dd03c+0xbcf4 // unlikely
        if            // fcn.803dd03c+0xbd08 // unlikely
            
    loc_0x803e8d44:
        at = 0x4f80 << 16
        mtc1 at, f8
        0x803e8d4c
        add.s f6, f6, f8
         // do {
    loc_0x803e8d54:
        // CODE XREF from fcn.803dd03c @ 0x803e8d3c
        mul.s f2, f6, f16
        c.lt.s f26, f2
        0x803e8d5c
        bc1fl 0x803e8d74
        mov.s f14, f24
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd098
    loc_0x803dd0a4:
        if            // fcn.803dd03c+0xbdac // unlikely
        if            // fcn.803dd03c+0xbdc0 // unlikely
            
    loc_0x803e8dfc:
        a3 = , signed  a3 >> 0x10 // t9
        t3 = 0x86a4 << 16
        t3 = [t3 + 0x44c4] // t9
        v0 = 0
        s1 = 0x86a4 << 16
        if            // unlikely
        s2 = 0 + 0xb6
            
    loc_0x803e9140:
        // CODE XREF from fcn.803dd03c @ 0x803e8e10
        v1 = [s4 + 0]
         // do {
    loc_0x803e9144:
        // CODE XREF from fcn.803dd03c @ 0x803e8e28
        t9 = 0x7800 << 16
        t9 |= 0xff
        t6 = v1 + 8
        [s4 + 0] = t6
        t3 = 0xfa00 << 16
        [v1 + 0] = t3
        [v1 + 4] = t9
        a0 = [s4 + 0]
        t8 = 0xffa0 << 16
        t8 |= 0xbeff
        t5 = a0 + 8
        [s4 + 0] = t5
        t7 = 0xfb00 << 16
        [a0 + 0] = t7
        [a0 + 4] = t8
        a1 = [s4 + 0]
        t1 = 0xfc30 << 16
        t2 = 0x5566 << 16
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd0b0
    loc_0x803dd0bc:
        if            // fcn.803dd03c+0xbe94 // unlikely
        if            // fcn.803dd03c+0xbeb8 // unlikely
            
    loc_0x803e8ef4:
        t2 &= 0x78
        if            // likely
        0x803e8efc
            
    loc_0x803e8f10:
        // CODE XREFS from fcn.803dd03c @ 0x803e8ef8, 0x803e8f20
        goto 0x803e8f28
        t2 = 0 - 1    // s2
         // do {
    loc_0x803e8f28:
        // CODE XREFS from fcn.803dd03c @ 0x803e8f08, 0x803e8f10
        t7 = , unsigned  byte [t7 + 0x5245] // s4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd0c8
    loc_0x803dd0d0:
        if            // fcn.803e9008+0x1c // unlikely
        if            // unlikely
            
    loc_0x803e9048:
        mtc1 at, f4
        0x803e904c
        add.s f6, f6, f4
         // do {
    loc_0x803e9054:
        // CODE XREF from fcn.803e9008 @ 0x803e9040
        mul.s f8, f6, f18
        t4 = 0 + 1    // lo
        t7 = 0xfb00 << 16
        add.s f4, f10, f8
        cfc1 t8, 31
        ctc1 t4, 31
        0x803e906c
        cvt.w.s f6, f4
        cfc1 t4, 31
        0x803e9078
        at = t4 & 4
        t4 &= 0x78
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd0dc
    loc_0x803dd0e8:
        if            // unlikely
        if            // unlikely
            
    loc_0x803e9120:
        t1 = 0xfc30 << 16
        t4 = a1 + 8   // arg2
        [s4 + 0] = t4
        t1 |= 0xb261
        t2 |= 0xff7f
        [a1 + 4] = t2 // arg2
        goto 0x803e91a4
        [a1 + 0] = t1 // arg2
         // do {
    loc_0x803e91a4:
        // CODE XREF from fcn.803dd03c @ 0x803e9138
        s1 = [s1 + 0x44bc] // t9
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd0f4
    loc_0x803dd100:
        if            // unlikely
        if            // unlikely
            
    loc_0x803e91f8:
        a0 = , signed  a0 >> 0x10 // t9
        t5 = , unsigned  halfword [v0 + 0]
        at = 0x4f80 << 16
        mtc1 t5, f18
        if            // likely
        cvt.s.w f10, f18
            
    loc_0x803e921c:
        // CODE XREF from fcn.803dd03c @ 0x803e9208
        mul.s f2, f10, f20
        at = 0x4f80 << 16
        c.lt.s f26, f2
        0x803e9228
        bc1fl 0x803e9240
        mov.s f14, f24
        goto 0x803e9240
        mov.s f14, f22
         // do {
    loc_0x803e9240:
        // CODE XREF from fcn.803dd03c @ 0x803e9234
        t7 = , unsigned  halfword [v0 + 2]
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803dd10c
    loc_0x803dd118:
        if            // fcn.803e924c+0x40 // unlikely
        if            // unlikely
            
    loc_0x803e92b0:
        mfc1 a3, f18
        a2 <<= 0x10   // arg3
        a2 = , signed  a2 >> 0x10 // arg3
        a3 <<= 0x10   // arg4
        call 0x80044270 // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff0000)
        a3 = , signed  a3 >> 0x10 // t9
        div 0, s1, s3
        s2 -= 0xd
        if            // likely
        0x803e92d4
            
    loc_0x803e92dc:
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x803e92f4:
        s1 = lo
        if            // likely
        0x803e92fc
            
    loc_0x803e91a8:
        div 0, s1, s3
        t6 = hi
        t9 = 0x86a4 << 16
        t9 += 0x6490
        t3 = t6 << 2
        s0 = t3 + t9
        if            // likely
        0x803e91c4
            
    loc_0x803e91cc:
        // CODE XREF from fcn.803dd03c @ 0x803e91c0
        at = 0 - 1    // s2
        if            // likely
        at = 0x8000 << 16
            
    loc_0x803e91e4:
        // CODE XREFS from fcn.803dd03c @ 0x803e91d0, 0x803e91d8
        a0 = [s0 + 0] // t9
        call 0x8004d1fc // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
        0x803e91ec
        v0 = [s0 + 0] // t9
        a0 = s2 << 0x10
    loc_0x803dd048: // orphan
               // CALL XREF from fcn.81a70d6c @ +0x4b4
             if                       // fcn.803dd03c+0xbabc // unlikely
             if                       // fcn.803dd03c+0xbae0 // unlikely

    loc_0x803dd054: // orphan
         if                       // fcn.803dd03c+0xbb08 // unlikely
         if                       // fcn.803e87f4+0x374 // unlikely

    loc_0x803dd060: // orphan
         if                       // fcn.803dd03c+0xbb74 // unlikely
         if                       // fcn.803dd03c+0xbb98 // unlikely

    loc_0x803dd06c: // orphan
         if                       // fcn.803dd03c+0xbbc0 // unlikely
         if                       // unlikely

    loc_0x803dd078: // orphan
         if                       // fcn.803dd03c+0xbc2c // unlikely
         if                       // fcn.803dd03c+0xbc50 // unlikely

    loc_0x803dd084: // orphan
         if                       // fcn.803dd03c+0xbc78 // unlikely
         if                       // unlikely

    loc_0x803dd090: // orphan
         if                       // fcn.803dd03c+0xbcf4 // unlikely
         if                       // fcn.803dd03c+0xbd08 // unlikely

    loc_0x803dd09c: // orphan
         if                       // fcn.803dd03c+0xbd50 // unlikely
         if                       // fcn.803dd03c+0xbd74 // unlikely

    loc_0x803dd0a8: // orphan
         if                       // fcn.803dd03c+0xbdac // unlikely
         if                       // fcn.803dd03c+0xbdc0 // unlikely

    loc_0x803dd0b4: // orphan
         if                       // fcn.803dd03c+0xbe48 // unlikely
         if                       // fcn.803dd03c+0xbe5c // unlikely

    loc_0x803dd0c0: // orphan
         if                       // fcn.803dd03c+0xbe94 // unlikely
         if                       // fcn.803dd03c+0xbeb8 // unlikely

    loc_0x803dd0cc: // orphan
         if                       // fcn.803dd03c+0xbef0 // unlikely
         

    loc_0x803dd124: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd130: // orphan
         if                       // fcn.803e9354 // unlikely
         if                       // unlikely

    loc_0x803dd13c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd148: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd154: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd160: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd16c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd178: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd184: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd190: // orphan
         if                       // fcn.803e95f4+0x50 // unlikely
         if                       // unlikely

    loc_0x803dd19c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1d8: // orphan
         

    loc_0x803dd1dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd1f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd200: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd20c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd218: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd224: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd230: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd23c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd248: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd254: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd260: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd26c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd278: // orphan
           // CALL XREF from fcn.80b94bc4 @ +0x2c0
         if                       // fcn.803dd03c+0xcdac // unlikely
         if                       // fcn.803dd03c+0xcdd0 // unlikely

    loc_0x803dd284: // orphan
         if                       // fcn.803dd03c+0xcdf8 // unlikely
         if                       // fcn.803dd03c+0xce1c // unlikely

    loc_0x803dd290: // orphan
         if                       // fcn.803dd03c+0xce64 // unlikely
         if                       // fcn.803dd03c+0xce88 // unlikely

    loc_0x803dd29c: // orphan
         if                       // fcn.803dd03c+0xceb0 // unlikely
         if                       // fcn.803dd03c+0xcef4 // unlikely

    loc_0x803dd2a8: // orphan
         if                       // fcn.803dd03c+0xcf2c // unlikely
         if                       // fcn.803dd03c+0xcf40 // unlikely

    loc_0x803dd2b4: // orphan
         if                       // fcn.803dd03c+0xcf88 // unlikely
         if                       // fcn.803dd03c+0xcfac // unlikely

    loc_0x803dd2c0: // orphan
         if                       // fcn.803dd03c+0xcfe4 // unlikely
         if                       // fcn.803dd03c+0xcff8 // unlikely

    loc_0x803dd2cc: // orphan
         if                       // fcn.803dd03c+0xd080 // unlikely
         if                       // fcn.803dd03c+0xd094 // unlikely

    loc_0x803dd2d8: // orphan
         if                       // fcn.803dd03c+0xd0cc // unlikely
         if                       // unlikely

    loc_0x803dd2e4: // orphan
         if                       // fcn.803dd03c+0xd128 // unlikely
         

    loc_0x803dd2e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd2f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd300: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd30c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd318: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd324: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd330: // orphan
         if                       // unlikely
         

    loc_0x803dd338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd344: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd350: // orphan
         

    loc_0x803dd354: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd360: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd36c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd384: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3ac: // orphan
         if                       // unlikely
         

    loc_0x803dd3b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3cc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd3f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd400: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd40c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd418: // orphan
         if                       // fcn.803dd03c+0xe0dc // unlikely
         if                       // fcn.803dd03c+0xe140 // unlikely

    loc_0x803dd424: // orphan
         if                       // fcn.803dd03c+0xe1c8 // unlikely
         if                       // fcn.803dd03c+0xe1fc // unlikely

    loc_0x803dd430: // orphan
         if                       // fcn.803dd03c+0xe294 // unlikely
         if                       // unlikely

    loc_0x803dd43c: // orphan
         if                       // unlikely
         if                       // fcn.803dd03c+0xe3c4 // unlikely

    loc_0x803dd448: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd454: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd460: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd46c: // orphan
         if                       // unlikely
         if                       // fcn.803eb75c+0x18 // unlikely

    loc_0x803dd478: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd484: // orphan
         if                       // fcn.803eb87c+0x3c // unlikely
         if                       // unlikely

    loc_0x803dd490: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd49c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4a8: // orphan
         if                       // fcn.803dc1fc+0xf970 // unlikely
         if                       // unlikely

    loc_0x803dd4b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd4e4: // orphan
         if                       // fcn.803ec068 // unlikely
         if                       // unlikely

    loc_0x803dd4f0: // orphan
         if                       // fcn.803ec200+0xc4 // unlikely
         if                       // unlikely

    loc_0x803dd4fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd508: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd514: // orphan
         if                       // unlikely
         

    loc_0x803dd51c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd528: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd534: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803dd540: // orphan
         if                       // fcn.803dc1fc+0x10928 // unlikely
         if                       // unlikely

    loc_0x803dd54c: // orphan
         if                       // fcn.803dc1fc+0x10964 // unlikely
         if                       // unlikely

    loc_0x803dd558: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803e8b8c: // orphan
         a1 = [s4 + 0]
         t7 = 0xfc30 << 16
         t8 = 0x5566 << 16
         t3 = a1 + 8              // arg2
         [s4 + 0] = t3
         t8 |= 0xff7f
         t7 |= 0xb261
         [a1 + 0] = t7            // arg2
         [a1 + 4] = t8            // arg2

    loc_0x803e8bb0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8b44
         s1 = [a2 + 0xc8]         // arg3 // t9

    loc_0x803e8bb4: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8d0c
         div 0, s1, s3
         t4 = hi
         t6 = 0x86a4 << 16
         t6 += 0x6490
         t1 = t4 << 2
         a2 = 0x86a4 << 16
         s0 = t1 + t6
         a2 += 0x43f0             // arg3

    loc_0x803e8be8: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8bd4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e8bf4: // orphan
         break 6

    loc_0x803e8c54: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8c48
         t2 = , unsigned  halfword [v0 + 2]
         add.s f6, f14, f2
         t7 = 0 + 0x704
         mtc1 t2, f4
         t8 = 0 + 0x704
         if                       // likely
         cvt.s.w f10, f4

    loc_0x803e8c70: // orphan
         mtc1 at, f18
         
         add.s f10, f10, f18

    loc_0x803e8c7c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8c68
         mul.s f0, f10, f20
         c.lt.s f26, f0
         
         bc1fl 0x803e8c9c

    loc_0x803e8ca0: // orphan
         a1 = 0 + 0x8b
         [sp + 0x10] = 0
         trunc.w.s f8, f6
         [sp + 0x14] = 0
         [sp + 0x18] = t7
         trunc.w.s f18, f4
         mfc1 a2, f8
         [sp + 0x1c] = t8
         [sp + 0x20] = 0
         mfc1 a3, f18
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0x8b, 0x8, 0xffffffffffff0000)
         a3 = , signed  a3 >> 0x10 // t9
         div 0, s1, s3
         s2 -= 0xd
         if                       // likely
         

    loc_0x803e8cec: // orphan
         break 7

    loc_0x803e8cf0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8ce4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e8cfc: // orphan
         if                       // likely
         

    loc_0x803e8d04: // orphan
         break 6

    loc_0x803e8d08: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e8cf4, 0x803e8cfc
         s1 = lo
         if                       // likely
         

    loc_0x803e8d14: // orphan
         a0 = 0x86a4 << 16
         call 0x8004d1fc          // 0x8004d1fc(0x86a40000, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803e8d1c: // orphan
         a0 = [a0 + 0x64b8]       // t9
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x64b8]       // t9
         at = 0x86a1 << 16
         lwc1 f16, -0x858, at
         t4 = , unsigned  halfword [v0 + 0]
         a0 = 0 + 0xc6
         mtc1 t4, f10
         if                       // likely
         cvt.s.w f6, f10

    loc_0x803e8d68: // orphan
         goto 0x803e8d74
         mov.s f14, f22

    loc_0x803e8d74: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8d68
         t1 = , unsigned  halfword [v0 + 2]
         add.s f8, f14, f2
         t2 = 0 + 0x500
         mtc1 t1, f4
         t5 = 0 + 0x500
         if                       // likely
         cvt.s.w f18, f4

    loc_0x803e8d90: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f18, f18, f10

    loc_0x803e8da0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8d88
         mul.s f0, f18, f16
         c.lt.s f26, f0
         
         bc1fl 0x803e8dc0

    loc_0x803e8db0: // orphan
         mov.s f12, f24
         goto 0x803e8dc0
         mov.s f12, f22

    loc_0x803e8dc0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8db4
         add.s f4, f12, f0
         a1 = 0 + 0x8f
         [sp + 0x10] = 0
         trunc.w.s f6, f8
         [sp + 0x14] = 0

    loc_0x803e8dd4: // orphan
         [sp + 0x18] = t2
         trunc.w.s f10, f4
         mfc1 a2, f6
         [sp + 0x1c] = t5
         [sp + 0x20] = 0
         mfc1 a3, f10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff0000)

    loc_0x803e8e30: // orphan
         v1 = [s4 + 0]
         t4 = 0xfa00 << 16
         t1 = 0x86a4 << 16
         t8 = v1 + 8
         [s4 + 0] = t8
         [v1 + 0] = t4
         t1 = , unsigned  byte [t1 + 0x5244] // s4
         lwc1 f4, 0xe8, sp
         t8 = 0x86a4 << 16
         mtc1 t1, f18
         t7 = 0x86a4 << 16
         if                       // likely
         cvt.s.w f8, f18

    loc_0x803e8e60: // orphan
         v1 = [s4 + 0]
         t4 = 0xfa00 << 16
         t1 = 0x86a4 << 16
         t8 = v1 + 8
         [s4 + 0] = t8
         [v1 + 0] = t4
         t1 = , unsigned  byte [t1 + 0x5244] // s4
         lwc1 f4, 0xe8, sp
         t8 = 0x86a4 << 16
         mtc1 t1, f18
         t7 = 0x86a4 << 16
         if                       // likely
         cvt.s.w f8, f18

    loc_0x803e8e64: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f8, f8, f6

    loc_0x803e8e74: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8e5c
         t6 = , unsigned  byte [t6 + 0x5248] // s4
         mul.s f10, f8, f4
         at = 0x4f80 << 16
         mtc1 t6, f18
         
         cvt.s.w f6, f18
         if                       // likely
         lwc1 f18, 0xe4, sp

    loc_0x803e8e94: // orphan
         mtc1 at, f8

    loc_0x803e8e98: // orphan
         
         add.s f6, f6, f8

    loc_0x803e8ea0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8e8c
         mul.s f8, f6, f18
         t2 = 0 + 1               // lo
         at = 0x4f00 << 16

    loc_0x803e8eac: // orphan
         add.s f6, f10, f8
         cfc1 t9, 31
         ctc1 t2, 31
         
         cvt.w.s f10, f6
         cfc1 t2, 31
         
         t2 &= 0x78
         beql t2, 0, 0x803e8f1c   // unlikely
         mfc1 t2, f10

    loc_0x803e8ed4: // orphan
         mtc1 at, f10
         t2 = 0 + 1               // lo
         sub.s f10, f6, f10
         ctc1 t2, 31
         
         cvt.w.s f10, f10
         cfc1 t2, 31
         

    loc_0x803e8f18: // orphan
         mfc1 t2, f10

    loc_0x803e8f1c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8ecc
         
         if                       // unlikely
         

    loc_0x803e8f2c: // orphan
         ctc1 t9, 31
         t3 = t2 << 0x18
         mtc1 t7, f8
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f8

    loc_0x803e8f44: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x803e8f50: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8f3c
         t8 = , unsigned  byte [t8 + 0x5249] // s4
         mul.s f8, f6, f4
         t7 = 0x86a4 << 16
         mtc1 t8, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f10

    loc_0x803e8f6c: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x803e8f78: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8f64
         mul.s f10, f6, f18
         t1 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f6, f8, f10
         cfc1 t4, 31
         ctc1 t1, 31
         
         cvt.w.s f8, f6
         cfc1 t1, 31
         
         t1 &= 0x78
         beql t1, 0, 0x803e8ff4   // likely
         mfc1 t1, f8

    loc_0x803e8fac: // orphan
         mtc1 at, f8
         t1 = 0 + 1               // lo
         sub.s f8, f6, f8
         ctc1 t1, 31
         
         cvt.w.s f8, f8
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // unlikely
         

    loc_0x803e8fd8: // orphan
         mfc1 t1, f8
         at = 0x8000 << 16
         goto 0x803e9000
         t1 |= at

    loc_0x803e8fe8: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e8fd0, 0x803e8ff8
         goto 0x803e9000
         t1 = 0 - 1               // s2

    loc_0x803e8ff4: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e8fa4
         
         if                       // unlikely
         

    loc_0x803e9000: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e8fe0, 0x803e8fe8
         t5 = , unsigned  byte [t5 + 0x5246] // s4
         ctc1 t4, 31

    loc_0x803e9084: // orphan
         beql t4, 0, 0x803e90dc   // unlikely
         mfc1 t4, f6

    loc_0x803e908c: // orphan
         at = 0x4f00 << 16
         mtc1 at, f6
         t4 = 0 + 1               // lo
         sub.s f6, f4, f6
         ctc1 t4, 31
         
         cvt.w.s f6, f6
         cfc1 t4, 31
         
         at = t4 & 4
         t4 &= 0x78
         if                       // unlikely
         

    loc_0x803e90c0: // orphan
         mfc1 t4, f6
         at = 0x8000 << 16
         goto 0x803e90e8
         t4 |= at                 // t9

    loc_0x803e90d0: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e90b8, 0x803e90e0
         goto 0x803e90e8
         t4 = 0 - 1               // s2

    loc_0x803e90dc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9084
         
         if                       // unlikely
         

    loc_0x803e90e8: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e90c8, 0x803e90d0
         t1 = t4 & 0xff           // s4
         t6 = t1 << 8
         t3 = t2 | t6
         t9 = t3 | 0xff
         [v1 + 4] = t9
         a0 = [s4 + 0]
         ctc1 t8, 31
         t8 = 0 - 1               // s2
         t5 = a0 + 8              // arg1
         [s4 + 0] = t5
         [a0 + 4] = t8            // arg1
         [a0 + 0] = t7            // arg1
         a1 = [s4 + 0]
         t2 = 0x5566 << 16

    loc_0x803e918c: // orphan
         t4 = a1 + 8
         [s4 + 0] = t4
         t2 |= 0xff7f
         t1 |= 0xb261
         [a1 + 0] = t1
         [a1 + 4] = t2

    loc_0x803e91c8: // orphan
         break 7

    loc_0x803e91d8: // orphan
         if                       // likely
         

    loc_0x803e91e0: // orphan
         break 6

    loc_0x803e9244: // orphan
         add.s f8, f14, f2
         t1 = 0 + 0x704

    loc_0x803e92d8: // orphan
         break 7

    loc_0x803e92e8: // orphan
         if                       // likely
         

    loc_0x803e92f0: // orphan
         break 6

    loc_0x803e9300: // orphan
         a0 = 0x86a4 << 16
         call 0x8004d1fc          // 0x8004d1fc(0x86a40000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x64b8]       // t9
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x64b8]       // t9
         at = 0x86a1 << 16
         lwc1 f16, -0x854, at

    loc_0x803e931c: // orphan
         t6 = , unsigned  halfword [v0 + 0]
         a0 = 0 + 0xc6
         mtc1 t6, f6
         if                       // likely
         cvt.s.w f8, f6

    loc_0x803e9330: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f8, f8, f10

    loc_0x803e9340: // orphan
         mul.s f2, f8, f16
         c.lt.s f26, f2
         
         bc1fl 0x803e9360
         mov.s f14, f24

    loc_0x803e9368: // orphan
         t7 = 0 + 0x500
         mtc1 t3, f4
         t8 = 0 + 0x500
         // CODE XREF from fcn.825e5c28 @ +0x274
         if                       // likely
         cvt.s.w f18, f4

    loc_0x803e937c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f18, f18, f6

    loc_0x803e938c: // orphan
         mul.s f0, f18, f16
         c.lt.s f26, f0
         
         bc1fl 0x803e93ac
         mov.s f12, f24
         goto 0x803e93ac
         mov.s f12, f22

    loc_0x803e93ac: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e93a0
         add.s f4, f12, f0
         a1 = 0 + 0xa6            // arg2
         [sp + 0x10] = 0
         trunc.w.s f8, f10
         [sp + 0x14] = 0
         [sp + 0x18] = t7
         trunc.w.s f6, f4
         mfc1 a2, f8
         [sp + 0x1c] = t8
         [sp + 0x20] = 0

    loc_0x803e93d4: // orphan
         mfc1 a3, f6
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3
         a3 <<= 0x10              // arg4
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff0000)
         a3 = , signed  a3 >> 0x10 // t9
         t4 = 0x86a4 << 16
         t4 = [t4 + 0x44c4]       // t9
         v0 = 0
         s1 = 0x86a4 << 16
         if                       // unlikely
         s2 = 0 + 0xb6

    loc_0x803e9404: // orphan
         t1 = 0x86a4 << 16
         t1 = [t1 + 0x4574]       // t9

    loc_0x803e940c: // orphan
         t9 = 0x86a4 << 16
         t8 = 0x86a4 << 16
         beql t1, 0, 0x803e9730   // unlikely
         v1 = [s4 + 0]

    loc_0x803e941c: // orphan
         v1 = [s4 + 0]

    loc_0x803e9420: // orphan
         t6 = 0xfa00 << 16
         t3 = 0x86a4 << 16
         t2 = v1 + 8
         [s4 + 0] = t2
         [v1 + 0] = t6
         t3 = , unsigned  byte [t3 + 0x5244] // s4
         lwc1 f4, 0xe8, sp
         t2 = 0x86a4 << 16
         mtc1 t3, f18
         t1 = 0x86a4 << 16
         if                       // likely
         cvt.s.w f10, f18

    loc_0x803e9450: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803e9460: // orphan
         t9 = , unsigned  byte [t9 + 0x5248] // s4
         mul.s f6, f10, f4

    loc_0x803e9468: // orphan
         at = 0x4f80 << 16
         mtc1 t9, f18
         
         cvt.s.w f8, f18
         if                       // likely
         // CALL XREF from fcn.82277264 @ +0x404
         lwc1 f18, 0xe4, sp

    loc_0x803e9480: // orphan
         mtc1 at, f10
         
         add.s f8, f8, f10

    loc_0x803e948c: // orphan
         mul.s f10, f8, f18
         t7 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f8, f6, f10
         cfc1 t5, 31
         ctc1 t7, 31
         
         cvt.w.s f6, f8
         cfc1 t7, 31
         

    loc_0x803e94b4: // orphan
         t7 &= 0x78
         beql t7, 0, 0x803e9508   // likely
         mfc1 t7, f6

    loc_0x803e94c0: // orphan
         mtc1 at, f6
         t7 = 0 + 1               // lo
         sub.s f6, f8, f6
         ctc1 t7, 31
         
         cvt.w.s f6, f6

    loc_0x803e94d8: // orphan
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // unlikely
         

    loc_0x803e94ec: // orphan
         mfc1 t7, f6
         at = 0x8000 << 16
         goto 0x803e9514
         t7 |= at

    loc_0x803e94fc: // orphan
         goto 0x803e9514
         t7 = 0 - 1               // s2

    loc_0x803e9508: // orphan
         
         if                       // unlikely
         

    loc_0x803e9514: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e94f4, 0x803e94fc
         t1 = , unsigned  byte [t1 + 0x5245] // s4
         ctc1 t5, 31
         t4 = t7 << 0x18

    loc_0x803e9520: // orphan
         mtc1 t1, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f10

    loc_0x803e9530: // orphan
         mtc1 at, f6

    loc_0x803e9534: // orphan
         
         add.s f8, f8, f6

    loc_0x803e953c: // orphan
         t2 = , unsigned  byte [t2 + 0x5249] // s4
         mul.s f10, f8, f4
         t1 = 0x86a4 << 16
         mtc1 t2, f6
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f6

    loc_0x803e9558: // orphan
         mtc1 at, f6
         
         add.s f8, f8, f6

    loc_0x803e9564: // orphan
         mul.s f6, f8, f18
         t3 = 0 + 1               // lo

    loc_0x803e956c: // orphan
         at = 0x4f00 << 16
         add.s f8, f10, f6
         cfc1 t6, 31
         ctc1 t3, 31
         
         cvt.w.s f10, f8
         cfc1 t3, 31
         
         t3 &= 0x78

    loc_0x803e9590: // orphan
         beql t3, 0, 0x803e95e0   // unlikely
         mfc1 t3, f10

    loc_0x803e9598: // orphan
         mtc1 at, f10
         t3 = 0 + 1               // lo
         sub.s f10, f8, f10
         ctc1 t3, 31
         
         cvt.w.s f10, f10
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // unlikely
         

    loc_0x803e95c4: // orphan
         mfc1 t3, f10
         at = 0x8000 << 16
         goto 0x803e95ec
         t3 |= at

    loc_0x803e95d4: // orphan
         goto 0x803e95ec
         t3 = 0 - 1               // s2

    loc_0x803e95e0: // orphan
         
         if                       // unlikely
         

    loc_0x803e95ec: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e95cc, 0x803e95d4
         t8 = , unsigned  byte [t8 + 0x5246] // s4
         ctc1 t6, 31

    loc_0x803e9668: // orphan
         at = t6 & 4
         t6 &= 0x78               // k0
         beql t6, 0, 0x803e96c8   // unlikely
         mfc1 t6, f8

    loc_0x803e9678: // orphan
         at = 0x4f00 << 16
         mtc1 at, f8
         t6 = 0 + 1               // lo
         sub.s f8, f4, f8
         ctc1 t6, 31
         

    loc_0x803e9690: // orphan
         cvt.w.s f8, f8
         cfc1 t6, 31
         
         at = t6 & 4
         t6 &= 0x78               // k0
         if                       // likely
         

    loc_0x803e96ac: // orphan
         mfc1 t6, f8
         at = 0x8000 << 16

    loc_0x803e96b4: // orphan
         goto 0x803e96d4
         t6 |= at

    loc_0x803e96bc: // orphan
         goto 0x803e96d4
         t6 = 0 - 1               // s2

    loc_0x803e96c8: // orphan
         
         if                       // likely
         

    loc_0x803e96d4: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803e96b4, 0x803e96bc
         t3 = t6 & 0xff
         t9 = t3 << 8
         t4 = t7 | t9
         t5 = t4 | 0xff
         [v1 + 4] = t5
         a0 = [s4 + 0]
         ctc1 t2, 31
         t2 = 0 - 1               // s2
         t8 = a0 + 8              // arg1
         [s4 + 0] = t8

    loc_0x803e96fc: // orphan
         [a0 + 4] = t2            // arg1
         [a0 + 0] = t1            // arg1
         a1 = [s4 + 0]
         t7 = 0x5566 << 16
         t3 = 0xfc30 << 16
         t6 = a1 + 8              // arg2
         [s4 + 0] = t6
         t3 |= 0xb261
         t7 |= 0xff7f

    loc_0x803e9720: // orphan
         [a1 + 4] = t7            // arg2
         goto 0x803e978c
         [a1 + 0] = t3            // arg2

    loc_0x803e972c: // orphan
         v1 = [s4 + 0]

    loc_0x803e9730: // orphan
         t5 = 0xd25a << 16
         t5 |= 0xff
         t9 = v1 + 8
         [s4 + 0] = t9
         t4 = 0xfa00 << 16
         [v1 + 0] = t4

    loc_0x803e9748: // orphan
         [v1 + 4] = t5
         a0 = [s4 + 0]
         t1 = 0xfb00 << 16
         t2 = 0 - 0x7301
         t8 = a0 + 8
         [s4 + 0] = t8
         [a0 + 4] = t2
         [a0 + 0] = t1
         a1 = [s4 + 0]
         t3 = 0xfc30 << 16
         t7 = 0x5566 << 16
         t6 = a1 + 8
         [s4 + 0] = t6
         t7 |= 0xff7f
         t3 |= 0xb261
         [a1 + 0] = t3
         [a1 + 4] = t7

    loc_0x803e978c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9724
         s1 = [s1 + 0x44c0]       // t9

    loc_0x803e9790: // orphan
         div 0, s1, s3
         t9 = hi
         t5 = 0x86a4 << 16
         t5 += 0x6490
         t4 = t9 << 2
         s0 = t4 + t5
         if                       // likely
         

    loc_0x803e97ac: // orphan
         div 0, s1, s3
         t9 = hi
         t5 = 0x86a4 << 16
         t5 += 0x6490
         t4 = t9 << 2
         s0 = t4 + t5
         if                       // likely
         

    loc_0x803e97b0: // orphan
         break 7

    loc_0x803e97b4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e97c0: // orphan
         if                       // likely
         

    loc_0x803e97c8: // orphan
         break 6

    loc_0x803e97cc: // orphan
         a0 = [s0 + 0]            // t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = [s0 + 0]            // t9
         a0 = s2 << 0x10
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x803e97e4: // orphan
         t8 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         mtc1 t8, f18
         if                       // likely
         cvt.s.w f6, f18

    loc_0x803e97f8: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x803e9804: // orphan
         mul.s f2, f6, f20
         at = 0x4f80 << 16
         c.lt.s f26, f2
         
         bc1fl 0x803e9828
         mov.s f14, f24
         goto 0x803e9828
         mov.s f14, f22

    loc_0x803e9828: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e981c
         t1 = , unsigned  halfword [v0 + 2]
         add.s f10, f14, f2
         t3 = 0 + 0x704
         mtc1 t1, f4
         t7 = 0 + 0x704
         if                       // likely
         cvt.s.w f8, f4

    loc_0x803e9844: // orphan
         mtc1 at, f18
         
         add.s f8, f8, f18

    loc_0x803e9850: // orphan
         mul.s f0, f8, f20
         c.lt.s f26, f0
         
         bc1fl 0x803e9870
         mov.s f12, f24

    loc_0x803e9864: // orphan
         goto 0x803e9870
         mov.s f12, f22

    loc_0x803e9870: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9864
         add.s f4, f12, f0
         a1 = 0 + 0xb9

    loc_0x803e9878: // orphan
         [sp + 0x10] = 0
         trunc.w.s f6, f10
         [sp + 0x14] = 0
         [sp + 0x18] = t3
         trunc.w.s f18, f4
         mfc1 a2, f6
         [sp + 0x1c] = t7
         [sp + 0x20] = 0
         mfc1 a3, f18
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff0000)
         a3 = , signed  a3 >> 0x10 // t9
         div 0, s1, s3
         s2 -= 0xd
         if                       // likely
         

    loc_0x803e98c0: // orphan
         break 7

    loc_0x803e98c4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803e98d0: // orphan
         if                       // likely
         

    loc_0x803e98d8: // orphan
         break 6

    loc_0x803e98dc: // orphan
         s1 = lo
         if                       // likely
         

    loc_0x803e98e8: // orphan
         a0 = 0x86a4 << 16
         call 0x8004d1fc          // 0x8004d1fc(0x86a40000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x64b8]       // t9
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x64b8]       // t9
         at = 0x86a1 << 16
         lwc1 f12, -0x850, at
         t9 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         a0 = 0 + 0xc6
         mtc1 t9, f8
         if                       // likely
         cvt.s.w f10, f8

    loc_0x803e991c: // orphan
         mtc1 at, f6
         
         add.s f10, f10, f6

    loc_0x803e9928: // orphan
         mul.s f2, f10, f12
         at = 0x4f80 << 16
         c.lt.s f26, f2

    loc_0x803e9934: // orphan
         
         bc1fl 0x803e994c
         mov.s f14, f24
         goto 0x803e994c
         mov.s f14, f22

    loc_0x803e994c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9940
         t4 = , unsigned  halfword [v0 + 2]
         add.s f6, f14, f2
         t1 = 0 + 0x500
         mtc1 t4, f4
         t2 = 0 + 0x500
         if                       // likely
         cvt.s.w f18, f4

    loc_0x803e9968: // orphan
         mtc1 at, f8
         

    loc_0x803e9970: // orphan
         add.s f18, f18, f8

    loc_0x803e9974: // orphan
         mul.s f0, f18, f12
         c.lt.s f26, f0
         
         bc1fl 0x803e9994
         mov.s f12, f24
         goto 0x803e9994
         mov.s f12, f22

    loc_0x803e9994: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9988
         add.s f4, f12, f0
         a1 = 0 + 0xbd
         [sp + 0x10] = 0
         trunc.w.s f10, f6
         [sp + 0x14] = 0
         [sp + 0x18] = t1
         trunc.w.s f8, f4
         mfc1 a2, f10
         [sp + 0x1c] = t2
         [sp + 0x20] = 0
         mfc1 a3, f8
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0xbd, 0x8, 0xffffffffffff0000)
         a3 = , signed  a3 >> 0x10 // t9
         v0 = [s4 + 0]
         t3 = 0xde00 << 16
         t6 = v0 + 8
         [s4 + 0] = t6
         [v0 + 0] = t3
         t7 = [sp + 0x68]
         [v0 + 4] = t7
         ra = [sp + 0x64]
         s4 = [sp + 0x60]
         s3 = [sp + 0x5c]
         s2 = [sp + 0x58]
         s1 = [sp + 0x54]
         s0 = [sp + 0x50]
         ldc1 f26, 0x48, sp

    loc_0x803e9a0c: // orphan
         ldc1 f24, 0x40, sp
         ldc1 f22, 0x38, sp
         ldc1 f20, 0x30, sp
         ret                      // ra
         sp += 0xf8

    loc_0x803e9a78: // orphan
         [v0 + 4] = a1
         [sp + 0x8c] = a1
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         v0 = [s2 + 0]            // t9
         t9 = 0xfc30 << 16
         t3 = 0x5566 << 16
         t8 = v0 + 8
         [s2 + 0] = t8
         t3 |= 0xff7f
         t9 |= 0xb261
         [v0 + 0] = t9
         [v0 + 4] = t3
         v0 = [s2 + 0]            // t9
         s3 = 0xfa00 << 16
         t5 = 0 - 1               // s2
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 4] = t5
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t7 = 8 << 16
         s4 = 0xfb00 << 16
         t6 = v0 + 8
         [s2 + 0] = t6
         t7 |= 0x58ff
         [v0 + 4] = t7

    loc_0x803e9ae4: // orphan
         [v0 + 0] = s4
         a2 = [s0 + 0]
         mtc1 0, f26
         s1 = 0x86a1 << 16
         t8 = , unsigned  halfword [a2 + 0]
         s1 -= 0xcfc
         t6 = 0 + 0x400
         mtc1 t8, f4
         t5 = 0 + 0x400
         if                       // likely
         cvt.s.w f12, f4

    loc_0x803e9b10: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f12, f12, f6

    loc_0x803e9b20: // orphan
         c.lt.s f26, f12
         
         bc1f 0x803e9b44
         at = 0x3f00 << 16

    loc_0x803e9b30: // orphan
         mtc1 at, f22
         at = 0xbf00 << 16
         mtc1 at, f24
         goto 0x803e9b58
         mov.s f20, f22

    loc_0x803e9b58: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9b3c
         t9 = , unsigned  halfword [a2 + 2]
         add.s f4, f20, f12
         mtc1 t9, f8
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803e9b6c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f0, f0, f10

    loc_0x803e9b7c: // orphan
         c.lt.s f26, f0
         trunc.w.s f6, f4
         bc1fl 0x803e9b98
         mov.s f2, f24
         goto 0x803e9b98
         mov.s f2, f22

    loc_0x803e9b98: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9b8c
         add.s f8, f2, f0

    loc_0x803e9b9c: // orphan
         a0 = [s1 + 0]            // t9
         a1 = [s1 + 4]            // t9
         mfc1 a2, f6
         trunc.w.s f10, f8
         a0 += 0x1a
         a1 -= 3
         a1 <<= 0x10
         mfc1 a3, f10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t5
         [sp + 0x1c] = t6
         call 0x80044270          // 0x80044270(0xffff0019, 0xfffffffc, 0x8, -1)
         [sp + 0x20] = 0
         v0 = [s2 + 0]            // t9
         t8 = 0 - 1               // s2
         t3 = 0xd38 << 16
         t7 = v0 + 8
         [s2 + 0] = t7
         [v0 + 4] = t8

    loc_0x803e9c08: // orphan
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t3 |= 0x17ff
         t8 = 0 + 0x400
         t9 = v0 + 8
         [s2 + 0] = t9
         [v0 + 4] = t3
         [v0 + 0] = s4
         a2 = [s0 + 0]
         t9 = 0 + 0x400
         t4 = , unsigned  halfword [a2 + 0]
         mtc1 t4, f4
         if                       // likely
         cvt.s.w f12, f4

    loc_0x803e9c40: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f12, f12, f6

    loc_0x803e9c50: // orphan
         c.lt.s f26, f12

    loc_0x803e9c54: // orphan
         
         bc1fl 0x803e9c6c
         mov.s f20, f24
         goto 0x803e9c6c
         mov.s f20, f22

    loc_0x803e9c6c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9c60
         t5 = , unsigned  halfword [a2 + 2]
         add.s f4, f20, f12
         mtc1 t5, f8
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803e9c80: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         
         add.s f0, f0, f10

    loc_0x803e9c90: // orphan
         c.lt.s f26, f0
         trunc.w.s f6, f4
         bc1fl 0x803e9cac
         mov.s f2, f24
         goto 0x803e9cac
         mov.s f2, f22

    loc_0x803e9cac: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9ca0
         add.s f8, f2, f0
         a0 = [s1 + 8]            // t9
         a1 = [s1 + 0xc]          // t9
         mfc1 a2, f6
         trunc.w.s f10, f8

    loc_0x803e9cc0: // orphan
         a0 += 0x1a
         a1 -= 3
         a1 <<= 0x10
         mfc1 a3, f10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t8
         [sp + 0x1c] = t9
         call 0x80044270          // 0x80044270(0xffff0019, 0xffff6405, 0x8, -1)
         [sp + 0x20] = 0
         v0 = [s2 + 0]            // t9
         t4 = 0 - 1               // s2

    loc_0x803e9d0c: // orphan
         t6 = 0x5808 << 16
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 4] = t4
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t6 |= 0x8ff
         t4 = 0 + 0x400
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s4
         a2 = [s0 + 0]            // t9
         t5 = 0 + 0x400
         at = 0x4f80 << 16
         t7 = , unsigned  halfword [a2 + 0]
         mtc1 t7, f4
         if                       // likely
         cvt.s.w f12, f4

    loc_0x803e9d58: // orphan
         mtc1 at, f6
         
         add.s f12, f12, f6

    loc_0x803e9d64: // orphan
         c.lt.s f26, f12

    loc_0x803e9d68: // orphan
         
         bc1fl 0x803e9d80
         mov.s f20, f24
         goto 0x803e9d80
         mov.s f20, f22

    loc_0x803e9d80: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9d74
         t8 = , unsigned  halfword [a2 + 2]
         add.s f4, f20, f12
         at = 0x4f80 << 16
         mtc1 t8, f8
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803e9d98: // orphan
         mtc1 at, f10
         
         add.s f0, f0, f10

    loc_0x803e9da4: // orphan
         c.lt.s f26, f0
         trunc.w.s f6, f4
         bc1fl 0x803e9dc0
         mov.s f2, f24
         goto 0x803e9dc0
         mov.s f2, f22

    loc_0x803e9dc0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9db4
         add.s f8, f2, f0

    loc_0x803e9dc4: // orphan
         a0 = [s1 + 0x10]         // t9
         a1 = [s1 + 0x14]         // t9
         mfc1 a2, f6
         trunc.w.s f10, f8
         a0 += 0x1a
         a1 -= 3
         a1 <<= 0x10
         mfc1 a3, f10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t4

    loc_0x803e9e0c: // orphan
         [sp + 0x1c] = t5
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         v0 = [s2 + 0]            // t9
         t7 = 0 - 1               // s2

    loc_0x803e9e20: // orphan
         t9 = 0x6838 << 16
         t6 = v0 + 8
         [s2 + 0] = t6
         [v0 + 4] = t7
         [v0 + 0] = s3

    loc_0x803e9e34: // orphan
         v0 = [s2 + 0]            // t9
         t9 |= 0xff
         t7 = 0 + 0x400
         t8 = v0 + 8
         [s2 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = s4
         a2 = [s0 + 0]            // s4
         t8 = 0 + 0x400

    loc_0x803e9e58: // orphan
         at = 0x4f80 << 16
         t3 = , unsigned  halfword [a2 + 0]
         mtc1 t3, f4
         if                       // likely
         cvt.s.w f12, f4

    loc_0x803e9e6c: // orphan
         mtc1 at, f6
         
         add.s f12, f12, f6

    loc_0x803e9e78: // orphan
         c.lt.s f26, f12

    loc_0x803e9e7c: // orphan
         at = 0x4f80 << 16
         bc1fl 0x803e9e94
         mov.s f20, f24
         goto 0x803e9e94
         mov.s f20, f22

    loc_0x803e9e94: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9e88
         t4 = , unsigned  halfword [a2 + 2]
         add.s f4, f20, f12
         mtc1 t4, f8

    loc_0x803e9ea0: // orphan
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803e9ea8: // orphan
         mtc1 at, f10
         
         add.s f0, f0, f10

    loc_0x803e9eb4: // orphan
         c.lt.s f26, f0
         trunc.w.s f6, f4
         bc1fl 0x803e9ed0
         mov.s f2, f24

    loc_0x803e9ec4: // orphan
         goto 0x803e9ed0
         mov.s f2, f22

    loc_0x803e9ed0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9ec4
         add.s f8, f2, f0
         a0 = [s1 + 0x18]         // t9

    loc_0x803e9ed8: // orphan
         a1 = [s1 + 0x1c]         // t9
         mfc1 a2, f6
         trunc.w.s f10, f8
         a0 += 0x1a
         a1 -= 3

    loc_0x803e9eec: // orphan
         a1 <<= 0x10
         mfc1 a3, f10
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t7
         [sp + 0x1c] = t8
         call 0x80044270          // 0x80044270(-1, 0xffff6408, 0x8, -1)
         [sp + 0x20] = 0
         v0 = [s2 + 0]            // t9
         a2 = 0xde00 << 16

    loc_0x803e9f30: // orphan
         t3 = 0x8009 << 16
         t9 = v0 + 8
         [s2 + 0] = t9
         t3 += 0x4f50
         [v0 + 0] = a2
         [sp + 0x88] = t3
         [v0 + 4] = t3
         v0 = [s2 + 0]            // t9
         t5 = 0x8009 << 16

    loc_0x803e9f54: // orphan
         t5 += 0x4e38
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 0] = a2
         [sp + 0x84] = t5

    loc_0x803e9f68: // orphan
         t6 = 0x86a4 << 16
         [v0 + 4] = t5
         t6 = [t6 + 0x6548]       // t9
         at = 0 + 4
         s0 = 0x86a4 << 16

    loc_0x803e9f7c: // orphan
         v1 = [t6 + 0xc]          // t9
         s0 += 0x6470
         t7 = , unsigned  byte [v1 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803e9f90: // orphan
         t8 = , unsigned  byte [v1 + 0x2182] // s4
         t9 = t8 & 1              // lo
         if                       // unlikely
         

    loc_0x803e9fa0: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]            // t9
         v0 = [s0 + 0]            // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x84c, at
         t3 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t7 = 0 + 0x5b7
         mtc1 t3, f4

    loc_0x803e9fc4: // orphan
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803e9fcc: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803e9fd8: // orphan
         mul.s f12, f6, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         

    loc_0x803e9fe8: // orphan
         bc1fl 0x803e9ffc
         mov.s f20, f24
         goto 0x803e9ffc
         mov.s f20, f22

    loc_0x803e9ffc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803e9ff0
         t4 = , unsigned  halfword [v0 + 2] // a2
         add.s f6, f20, f12
         t8 = 0 + 0x5b7
         mtc1 t4, f10

    loc_0x803ea00c: // orphan
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803ea014: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803ea020: // orphan
         mul.s f0, f4, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea040
         mov.s f2, f24

    loc_0x803ea034: // orphan
         goto 0x803ea040
         mov.s f2, f22

    loc_0x803ea040: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea034
         add.s f8, f2, f0
         a0 = halfword [s1 + 2]
         a1 = halfword [s1 + 6]
         trunc.w.s f10, f6
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f4, f8
         mfc1 a2, f10
         [sp + 0x18] = t7
         [sp + 0x1c] = t8
         mfc1 a3, f4
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(0xffff, 0xffff, 0x8, -1)
         [sp + 0x20] = 0
         goto 0x803ea180
         

    loc_0x803ea08c: // orphan
         a0 = 0x86a4 << 16
         call 0x8004d1fc          // 0x8004d1fc(0x86a40000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6480]       // t9

    loc_0x803ea098: // orphan
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x6480]       // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x844, at
         t9 = , unsigned  halfword [v0 + 0]
         t6 = 0 + 0x5b7
         mtc1 t9, f6
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803ea0bc: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803ea0cc: // orphan
         mul.s f12, f10, f14

    loc_0x803ea0d0: // orphan
         c.lt.s f26, f12
         
         bc1fl 0x803ea0ec
         mov.s f20, f24
         goto 0x803ea0ec
         mov.s f20, f22

    loc_0x803ea0e4: // orphan
         c.lt.s f26, f12
         
         bc1fl 0x803ea0ec
         mov.s f20, f24
         goto 0x803ea0ec
         mov.s f20, f22

    loc_0x803ea0ec: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea0e0
         t3 = , unsigned  halfword [v0 + 2] // a2
         add.s f10, f20, f12
         t7 = 0 + 0x5b7
         mtc1 t3, f4
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803ea104: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803ea114: // orphan
         mul.s f0, f6, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea134
         mov.s f2, f24
         goto 0x803ea134
         mov.s f2, f22

    loc_0x803ea134: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea128
         add.s f8, f2, f0
         a0 = halfword [s1 + 2]
         a1 = halfword [s1 + 6]
         trunc.w.s f4, f10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f6, f8

    loc_0x803ea150: // orphan
         mfc1 a2, f4
         [sp + 0x18] = t6
         [sp + 0x1c] = t7
         mfc1 a3, f6
         a2 <<= 0x10

    loc_0x803ea164: // orphan
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x0, -1)
         [sp + 0x20] = 0
         s0 = 0x86a4 << 16
         s0 += 0x6470

    loc_0x803ea180: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea084
         t8 = 0x86a4 << 16
         t8 = [t8 + 0x6548]       // t9
         at = 0 + 4
         v1 = [t8 + 0xc]          // t9
         t9 = , unsigned  byte [v1 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ea19c: // orphan
         t3 = , unsigned  byte [v1 + 0x2182] // s4
         a0 = 0x86a4 << 16
         t4 = t3 & 2
         if                       // unlikely
         

    loc_0x803ea1b0: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 4]            // t9
         v0 = [s0 + 4]            // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x83c, at
         t5 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t9 = 0 + 0x5b7
         mtc1 t5, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803ea1dc: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803ea1e8: // orphan
         mul.s f12, f4, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803ea20c
         mov.s f20, f24

    loc_0x803ea200: // orphan
         goto 0x803ea20c
         mov.s f20, f22

    loc_0x803ea20c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea200
         t6 = , unsigned  halfword [v0 + 2] // a2
         add.s f4, f20, f12
         t3 = 0 + 0x5b7
         mtc1 t6, f6
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803ea224: // orphan
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803ea230: // orphan
         mul.s f0, f10, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea250
         mov.s f2, f24
         goto 0x803ea250
         mov.s f2, f22

    loc_0x803ea250: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea244
         add.s f8, f2, f0
         a0 = halfword [s1 + 0xa]
         a1 = halfword [s1 + 0xe]
         trunc.w.s f6, f4
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f10, f8
         mfc1 a2, f6
         [sp + 0x18] = t9
         [sp + 0x1c] = t3

    loc_0x803ea29c: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6484]       // t9
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x6484]       // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x834, at
         t4 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t8 = 0 + 0x5b7
         mtc1 t4, f4
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803ea2cc: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803ea2d8: // orphan
         mul.s f12, f6, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803ea2fc
         mov.s f20, f24
         goto 0x803ea2fc
         mov.s f20, f22

    loc_0x803ea2fc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea2f0
         t5 = , unsigned  halfword [v0 + 2] // a2
         add.s f6, f20, f12
         t9 = 0 + 0x5b7
         mtc1 t5, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803ea314: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803ea320: // orphan
         mul.s f0, f4, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea340
         mov.s f2, f24
         goto 0x803ea340
         mov.s f2, f22

    loc_0x803ea338: // orphan
         mul.s f0, f4, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea340
         mov.s f2, f24
         goto 0x803ea340
         mov.s f2, f22

    loc_0x803ea340: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea334
         add.s f8, f2, f0
         a0 = halfword [s1 + 0xa]
         a1 = halfword [s1 + 0xe]
         trunc.w.s f10, f6
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f4, f8
         mfc1 a2, f10

    loc_0x803ea360: // orphan
         [sp + 0x18] = t8
         [sp + 0x1c] = t9
         mfc1 a3, f4
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10

    loc_0x803ea374: // orphan
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0

    loc_0x803ea384: // orphan
         // CODE XREF from fcn.803ea278 @ 0x803ea294
         t3 = 0x86a4 << 16
         t3 = [t3 + 0x6548]       // t9
         at = 0 + 4
         v1 = [t3 + 0xc]          // t9
         t4 = , unsigned  byte [v1 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ea3a0: // orphan
         t5 = , unsigned  byte [v1 + 0x2182] // s4
         a0 = 0x86a4 << 16
         t6 = t5 & 4
         if                       // unlikely
         

    loc_0x803ea3b4: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 8]            // t9
         v0 = [s0 + 8]            // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x82c, at
         t7 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t4 = 0 + 0x5b7
         mtc1 t7, f6
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803ea3e0: // orphan
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803ea3ec: // orphan
         mul.s f12, f10, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803ea410
         mov.s f20, f24

    loc_0x803ea450: // orphan
         mov.s f2, f24

    loc_0x803ea454: // orphan
         // CODE XREF from fcn.803ea404 @ 0x803ea448
         add.s f8, f2, f0
         a0 = halfword [s1 + 0x12]
         a1 = halfword [s1 + 0x16]
         trunc.w.s f4, f10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f6, f8
         mfc1 a2, f4
         [sp + 0x18] = t4
         [sp + 0x1c] = t5
         mfc1 a3, f6
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3

    loc_0x803ea488: // orphan
         a3 <<= 0x10              // arg4

    loc_0x803ea4a0: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6488]       // t9
         v0 = 0x86a4 << 16

    loc_0x803ea4ac: // orphan
         v0 = [v0 + 0x6488]       // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x824, at
         t6 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t3 = 0 + 0x5b7
         mtc1 t6, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803ea4d0: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803ea4dc: // orphan
         mul.s f12, f4, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803ea500
         mov.s f20, f24

    loc_0x803ea4f4: // orphan
         goto 0x803ea500
         mov.s f20, f22

    loc_0x803ea500: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea4f4
         t7 = , unsigned  halfword [v0 + 2] // a2
         add.s f4, f20, f12
         t4 = 0 + 0x5b7
         mtc1 t7, f6
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803ea518: // orphan
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803ea524: // orphan
         mul.s f0, f10, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea544
         mov.s f2, f24
         goto 0x803ea544
         mov.s f2, f22

    loc_0x803ea544: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea538
         add.s f8, f2, f0
         a0 = halfword [s1 + 0x12]
         a1 = halfword [s1 + 0x16]
         trunc.w.s f6, f4
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f10, f8
         mfc1 a2, f6
         [sp + 0x18] = t3
         [sp + 0x1c] = t4
         mfc1 a3, f10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(0xffff, 0xffff, 0x8, -1)
         [sp + 0x20] = 0

    loc_0x803ea588: // orphan
         // CODE XREF from fcn.803ea48c @ 0x803ea498
         t5 = 0x86a4 << 16
         t5 = [t5 + 0x6548]       // t9
         at = 0 + 4
         v1 = [t5 + 0xc]          // t9
         t6 = , unsigned  byte [v1 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ea5a4: // orphan
         t7 = , unsigned  byte [v1 + 0x2182] // s4
         a0 = 0x86a4 << 16
         t8 = t7 & 8              // a2
         if                       // unlikely
         

    loc_0x803ea5b8: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0xc]          // t9
         v0 = [s0 + 0xc]          // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x81c, at
         t9 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t6 = 0 + 0x5b7
         mtc1 t9, f4
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803ea5e4: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803ea5f0: // orphan
         mul.s f12, f6, f14
         at = 0x4f80 << 16

    loc_0x803ea5f8: // orphan
         c.lt.s f26, f12
         
         bc1fl 0x803ea614
         mov.s f20, f24
         goto 0x803ea614
         mov.s f20, f22

    loc_0x803ea610: // orphan
         mov.s f20, f24

    loc_0x803ea614: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea608
         t3 = , unsigned  halfword [v0 + 2] // a2
         add.s f6, f20, f12
         t7 = 0 + 0x5b7
         mtc1 t3, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803ea62c: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803ea638: // orphan
         mul.s f0, f4, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea658
         mov.s f2, f24

    loc_0x803ea64c: // orphan
         goto 0x803ea658
         mov.s f2, f22

    loc_0x803ea658: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea64c
         add.s f8, f2, f0
         a0 = halfword [s1 + 0x1a]

    loc_0x803ea660: // orphan
         a1 = halfword [s1 + 0x1e]
         trunc.w.s f10, f6
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f4, f8
         mfc1 a2, f10
         [sp + 0x18] = t6
         [sp + 0x1c] = t7
         mfc1 a3, f4
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0xffff, 0x8, -1)
         [sp + 0x20] = 0
         at = 0x86a1 << 16
         goto 0x803ea798
         lwc1 f14, -0x818, at

    loc_0x803ea6a8: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x648c]       // t9
         v0 = 0x86a4 << 16
         v0 = [v0 + 0x648c]       // t9
         at = 0x86a1 << 16
         lwc1 f14, -0x814, at
         t8 = , unsigned  halfword [v0 + 0]
         at = 0x4f80 << 16
         t5 = 0 + 0x5b7
         mtc1 t8, f6
         if                       // likely
         cvt.s.w f10, f6

    loc_0x803ea6d8: // orphan
         mtc1 at, f8
         
         add.s f10, f10, f8

    loc_0x803ea6e4: // orphan
         mul.s f12, f10, f14
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803ea708
         mov.s f20, f24
         goto 0x803ea708
         mov.s f20, f22

    loc_0x803ea708: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea6fc
         t9 = , unsigned  halfword [v0 + 2] // a2
         add.s f10, f20, f12
         t6 = 0 + 0x5b7
         mtc1 t9, f4
         if                       // likely
         cvt.s.w f6, f4

    loc_0x803ea720: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x803ea72c: // orphan
         mul.s f0, f6, f14
         c.lt.s f26, f0
         
         bc1fl 0x803ea74c
         mov.s f2, f24
         goto 0x803ea74c
         mov.s f2, f22

    loc_0x803ea74c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea740
         add.s f8, f2, f0
         a0 = halfword [s1 + 0x1a]
         a1 = halfword [s1 + 0x1e]
         trunc.w.s f4, f10

    loc_0x803ea75c: // orphan
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         trunc.w.s f6, f8
         mfc1 a2, f4
         [sp + 0x18] = t5
         [sp + 0x1c] = t6
         mfc1 a3, f6
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         at = 0x86a1 << 16
         lwc1 f14, -0x810, at

    loc_0x803ea798: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea6a0
         v0 = [s2 + 0]            // t9
         t8 = 0xde00 << 16
         s0 = 0x86a1 << 16
         t7 = v0 + 8

    loc_0x803ea7a8: // orphan
         [s2 + 0] = t7
         [v0 + 0] = t8
         t9 = [sp + 0x88]
         s0 -= 0x678
         a0 = s0
         [v0 + 4] = t9
         swc1 f14, 0x14, sp
         swc1 f14, 0x10, sp
         a3 = [s1 + 4]            // t9
         a2 = [s1 + 0]            // t9
         call 0x87f0d600          // 0x87f0d600(0xfffffffffffffa8c, 0x442f71dcfe116408, -1, -1)
         a1 = 0
         at = 0x86a1 << 16
         lwc1 f14, -0x80c, at
         a0 = s0
         a1 = 0 + 1               // lo
         a2 = [s1 + 8]            // t9
         a3 = [s1 + 0xc]          // t9
         swc1 f14, 0x10, sp
         call 0x87f0d600          // 0x87f0d600(0xfffffffffffffa8c, 0x1, -1, -1)
         swc1 f14, 0x14, sp
         at = 0x86a1 << 16
         lwc1 f14, -0x808, at
         a0 = s0
         a1 = 0 + 2
         a2 = [s1 + 0x10]         // t9
         a3 = [s1 + 0x14]         // t9
         swc1 f14, 0x10, sp
         call 0x87f0d600          // 0x87f0d600(0xfffffffffffffa8c, 0x2, -1, -1)
         swc1 f14, 0x14, sp
         at = 0x86a1 << 16
         lwc1 f14, -0x804, at
         a0 = s0
         a1 = 0 + 3
         a2 = [s1 + 0x18]         // t9
         a3 = [s1 + 0x1c]         // t9
         swc1 f14, 0x10, sp
         call 0x87f0d600          // 0x87f0d600(0xfffffffffffffa8c, 0x3, -1, -1)
         swc1 f14, 0x14, sp
         v0 = [s2 + 0]            // t9
         t4 = 0xde00 << 16
         s0 = 0x86a4 << 16
         t3 = v0 + 8

    loc_0x803ea854: // orphan
         [s2 + 0] = t3
         [v0 + 0] = t4
         t5 = [sp + 0x84]
         s0 += 0x64dc
         a3 = 0
         [v0 + 4] = t5
         a0 = [s1 + 0]            // t9
         [sp + 0x10] = 0
         a2 = [s0 + 0]            // t9
         a1 = [s1 + 4]            // t9
         call 0x8004d19c          // 0x8004d19c(-1, -1, -1, 0x0)
         a0 += 0x20
         a0 = [s1 + 8]            // t9
         a1 = [s1 + 0xc]          // t9
         a2 = [s0 + 0]            // t9
         a3 = 0
         [sp + 0x10] = 0
         call 0x8004d19c          // 0x8004d19c(-1, -1, -1, 0x0)
         a0 += 0x20
         a0 = [s1 + 0x10]         // t9
         a1 = [s1 + 0x14]         // t9
         a2 = [s0 + 0]            // t9
         a3 = 0
         [sp + 0x10] = 0
         call 0x8004d19c          // 0x8004d19c(-1, -1, -1, 0x0)
         a0 += 0x20
         a0 = [s1 + 0x18]         // t9

    loc_0x803ea8c0: // orphan
         a1 = [s1 + 0x1c]         // t9
         a2 = [s0 + 0]
         a3 = 0
         [sp + 0x10] = 0
         call 0x8004d19c          // 0x8004d19c(-1, -1, 0x4e37ff, 0x0)
         a0 += 0x20
         v0 = [s2 + 0]            // t9
         t2 = 0xde00 << 16
         t0 = 0 - 1               // s2
         t6 = v0 + 8
         [s2 + 0] = t6
         [v0 + 0] = t2
         t7 = [sp + 0x88]
         t6 = 0xfc61 << 16
         t6 |= 0xfec3
         [v0 + 4] = t7
         v0 = [s2 + 0]            // t9
         t7 = 0 - 0xc07
         s0 = 0x86a4 << 16
         t8 = v0 + 8
         [s2 + 0] = t8
         [v0 + 0] = t2
         t9 = [sp + 0x8c]
         s1 = 0x86a1 << 16
         s1 -= 0xcfc
         [v0 + 4] = t9
         v0 = [s2 + 0]            // t9
         s0 += 0x43f0
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 4] = t0
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 4] = t0
         [v0 + 0] = s4
         v0 = [s2 + 0]            // t9
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t7
         [v0 + 0] = t6

    loc_0x803ea968: // orphan
         t0 = [s0 + 0xe18]        // t9
         t7 = 0x86a4 << 16
         t3 = 0x86a4 << 16
         at = , t0 < 0xa
         if                       // unlikely
         t7 += 0x64e0

    loc_0x803ea980: // orphan
         at = 0 + 0xa
         div 0, t0, at
         t8 = lo
         t9 = t8 << 2
         t3 += 0x64e0
         v0 = t9 + t3
         a0 = [v0 + 0]            // t9
         [sp + 0x84] = v0
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x168] = t0
         v0 = [sp + 0x84]
         t0 = [sp + 0x168]
         t8 = 0 + 0x400
         v1 = [v0 + 0]            // t9
         t9 = 0 + 0x400
         at = 0x4f80 << 16
         t4 = , unsigned  halfword [v1 + 0]
         mtc1 t4, f10
         if                       // likely
         cvt.s.w f12, f10

    loc_0x803ea9d0: // orphan
         mtc1 at, f4
         
         add.s f12, f12, f4

    loc_0x803ea9dc: // orphan
         c.lt.s f26, f12
         at = 0x4f80 << 16
         bc1fl 0x803ea9f8
         mov.s f20, f24
         goto 0x803ea9f8
         mov.s f20, f22

    loc_0x803ea9f0: // orphan
         c.lt.s f26, f12
         at = 0x4f80 << 16
         bc1fl 0x803ea9f8
         mov.s f20, f24
         goto 0x803ea9f8
         mov.s f20, f22

    loc_0x803ea9f8: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ea9ec
         t5 = , unsigned  halfword [v1 + 2]
         add.s f10, f20, f12
         mtc1 t5, f8
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803eaa0c: // orphan
         mtc1 at, f6
         
         add.s f0, f0, f6

    loc_0x803eaa18: // orphan
         c.lt.s f26, f0
         trunc.w.s f4, f10
         bc1fl 0x803eaa34
         mov.s f2, f24
         goto 0x803eaa34
         mov.s f2, f22

    loc_0x803eaa34: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eaa28
         add.s f8, f2, f0
         a0 = [s1 + 0]            // t9
         a1 = [s1 + 4]            // t9
         mfc1 a2, f4
         trunc.w.s f6, f8
         a0 += 0x1d
         a1 += 0xa
         a1 <<= 0x10
         mfc1 a3, f6
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9

    loc_0x803eaa68: // orphan
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t8
         [sp + 0x1c] = t9
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x168] = t0
         t0 = [sp + 0x168]
         at = 0 + 0xa
         t5 = 0x86a4 << 16
         div 0, t0, at
         t3 = hi
         t4 = t3 << 2
         t5 += 0x64e0
         v0 = t4 + t5
         a0 = [v0 + 0]            // t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x84] = v0
         v0 = [sp + 0x84]
         t3 = 0 + 0x400
         t4 = 0 + 0x400
         v1 = [v0 + 0]            // t9
         at = 0x4f80 << 16
         t6 = , unsigned  halfword [v1 + 0]
         mtc1 t6, f10
         if                       // likely
         cvt.s.w f12, f10

    loc_0x803eaae0: // orphan
         mtc1 at, f4
         
         add.s f12, f12, f4

    loc_0x803eaaec: // orphan
         c.lt.s f26, f12
         at = 0x4f80 << 16
         bc1fl 0x803eab08
         mov.s f20, f24
         goto 0x803eab08
         mov.s f20, f22

    loc_0x803eab08: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eaafc
         t7 = , unsigned  halfword [v1 + 2]
         add.s f10, f20, f12
         mtc1 t7, f8
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803eab1c: // orphan
         mtc1 at, f6
         
         add.s f0, f0, f6

    loc_0x803eab28: // orphan
         c.lt.s f26, f0
         trunc.w.s f4, f10
         bc1fl 0x803eab44
         mov.s f2, f24
         goto 0x803eab44
         mov.s f2, f22

    loc_0x803eab44: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eab38
         add.s f8, f2, f0
         a0 = [s1 + 0]            // t9
         a1 = [s1 + 4]            // t9

    loc_0x803eab50: // orphan
         mfc1 a2, f4
         trunc.w.s f6, f8
         a0 += 0x24
         a1 += 0xa
         a1 <<= 0x10
         mfc1 a3, f6
         a0 <<= 0x10
         a2 <<= 0x10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t3
         [sp + 0x1c] = t4
         call 0x80044270          // 0x80044270(0xffff0023, 0xffff6412, 0x8, -1)
         [sp + 0x20] = 0
         goto 0x803eacb4
         

    loc_0x803eaba4: // orphan
         at = 0 + 0xa
         div 0, t0, at
         t5 = hi
         t6 = t5 << 2
         v0 = t6 + t7
         a0 = [v0 + 0]            // t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x84] = v0
         v0 = [sp + 0x84]
         t5 = 0 + 0x355
         t6 = 0 + 0x400
         v1 = [v0 + 0]            // t9
         at = 0x4f80 << 16
         t8 = , unsigned  halfword [v1 + 0]
         mtc1 t8, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803eabe8: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803eabf4: // orphan
         at = 0x86a1 << 16
         lwc1 f6, -0x800, at
         at = 0x4f80 << 16
         mul.s f12, f4, f6
         c.lt.s f26, f12
         
         bc1fl 0x803eac20
         mov.s f20, f24
         goto 0x803eac20
         mov.s f20, f22

    loc_0x803eac20: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eac14
         t9 = , unsigned  halfword [v1 + 2]
         add.s f4, f20, f12
         mtc1 t9, f10
         if                       // likely
         cvt.s.w f0, f10

    loc_0x803eac34: // orphan
         mtc1 at, f8
         
         add.s f0, f0, f8

    loc_0x803eac40: // orphan
         c.lt.s f26, f0
         trunc.w.s f6, f4
         bc1fl 0x803eac5c

    loc_0x803eac4c: // orphan
         mov.s f2, f24
         goto 0x803eac5c
         mov.s f2, f22

    loc_0x803eac5c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eac50
         add.s f10, f2, f0
         a0 = [s1 + 0]            // t9
         a1 = [s1 + 4]            // t9
         mfc1 a2, f6
         trunc.w.s f8, f10
         a0 += 0x20
         a1 += 0xa
         a1 <<= 0x10
         mfc1 a3, f8
         a0 <<= 0x10
         a2 <<= 0x10

    loc_0x803eac88: // orphan
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = t5
         [sp + 0x1c] = t6
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x20] = 0

    loc_0x803eacb4: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eab9c
         t7 = 0x86a1 << 16
         t7 -= 0xcdc
         s1 += 8
         at = , unsigned  , s1 < t7
         if                       // unlikely
         s0 += 4

    loc_0x803eaccc: // orphan
         v0 = [s2 + 0]            // t9
         t9 = 0xde00 << 16
         t5 = 0xde00 << 16
         t8 = v0 + 8
         [s2 + 0] = t8
         [v0 + 0] = t9
         t3 = [sp + 0x88]
         t9 = 0x5566 << 16
         t8 = 0xfc30 << 16
         [v0 + 4] = t3
         v0 = [s2 + 0]            // t9
         t8 |= 0xb261
         t9 |= 0xff7f
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 0] = t5
         t6 = [sp + 0x8c]
         s0 = 0x86a4 << 16
         s0 += 0x43f0
         [v0 + 4] = t6
         v0 = [s2 + 0]            // t9
         t0 = 0
         t7 = v0 + 8
         [s2 + 0] = t7
         [v0 + 4] = t9
         [v0 + 0] = t8

    loc_0x803ead34: // orphan
         a1 = [s0 + 0xe38]        // t9
         t3 = 0x86a1 << 16
         t3 -= 0xcdc
         if                       // unlikely
         t4 = 0x86a1 << 16

    loc_0x803ead48: // orphan
         v0 = [s0 + 0xe28]        // t9
         t4 -= 0xccc
         at = 0 + 1               // lo
         a2 = t0 + t4
         if                       // unlikely
         s1 = t0 + t3

    loc_0x803ead60: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x803ead6c: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x803ead74: // orphan
         beql v0, at, 0x803eae3c  // unlikely
         v0 = [s2 + 0]            // t9

    loc_0x803ead7c: // orphan
         goto 0x803eae74
         t7 = 0 + 0x1e

    loc_0x803ead84: // orphan
         v0 = [s2 + 0]            // t9
         t6 = 0x508c << 16
         t6 |= 0xc8ff
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t8 = 0 - 1               // s2

    loc_0x803eada8: // orphan
         t7 = v0 + 8
         [s2 + 0] = t7
         [v0 + 4] = t8
         [v0 + 0] = s4
         goto 0x803eae70
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eadc0: // orphan
         v0 = [s2 + 0]            // t9
         t3 = 0x64aa << 16
         t3 |= 0xff
         t9 = v0 + 8
         [s2 + 0] = t9
         [v0 + 4] = t3
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t5 = 0 - 1               // s2
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 4] = t5
         [v0 + 0] = s4
         goto 0x803eae70
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eadfc: // orphan
         v0 = [s2 + 0]            // t9
         t7 = 0xdc50 << 16

    loc_0x803eae04: // orphan
         t7 |= 0xa0ff
         t6 = v0 + 8
         [s2 + 0] = t6
         [v0 + 4] = t7
         [v0 + 0] = s3

    loc_0x803eae18: // orphan
         v0 = [s2 + 0]            // t9
         t9 = 0 - 1               // s2
         t8 = v0 + 8
         [s2 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = s4
         goto 0x803eae70
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eae3c: // orphan
         t4 = 0xf0aa << 16
         t4 |= 0xff
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 4] = t4
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t6 = 0 - 1               // s2

    loc_0x803eae5c: // orphan
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s4
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eae70: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803eadb8, 0x803eadf4, 0x803eae30
         t7 = 0 + 0x1e

    loc_0x803eae74: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ead7c
         v0 = t7 - a1             // arg2
         at = , v0 < 2            // lo
         if                       // unlikely
         a0 = 0x86a4 << 16

    loc_0x803eae84: // orphan
         goto 0x803eaea4
         v0 += 9

    loc_0x803eae8c: // orphan
         v0 -= 2
         at = 0 + 9
         div 0, v0, at
         v0 = hi
         
         

    loc_0x803eaea4: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eae84
         a0 = [a0 + 0x6508]       // arg1 // t9
         [sp + 0xe8] = v0
         [sp + 0x6c] = a2
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803eaeb4: // orphan
         [sp + 0x84] = t0
         v0 = [sp + 0xe8]         // s4
         at = 0x3f00 << 16
         mtc1 at, f14
         at = 0x86a1 << 16
         t8 = v0 << 2
         at += t8
         lwc1 f2, -0xcbc, at
         at = 0x86a1 << 16

    loc_0x803eaed8: // orphan
         lwc1 f4, -0x7fc, at
         at = 0x4260 << 16
         mtc1 at, f6
         sub.s f0, f4, f2
         t9 = [s1 + 0]
         a2 = [sp + 0x6c]
         t0 = [sp + 0x84]
         mul.s f10, f0, f6
         mtc1 t9, f4
         at = 0x4228 << 16
         v0 = 0x86a4 << 16
         cvt.s.w f6, f4
         mul.s f8, f10, f14
         add.s f10, f8, f6
         c.lt.s f26, f10
         swc1 f10, 0x70, sp
         bc1fl 0x803eaf2c
         swc1 f24, 0x90, sp
         goto 0x803eaf2c
         swc1 f22, 0x90, sp

    loc_0x803eaf2c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eaf20
         mtc1 at, f4
         t3 = [a2 + 0]            // t9
         at = 0x4f80 << 16
         mul.s f8, f0, f4

    loc_0x803eaf3c: // orphan
         mtc1 t3, f10
         
         cvt.s.w f4, f10
         mul.s f6, f8, f14
         add.s f8, f6, f4
         c.lt.s f26, f8
         swc1 f8, 0x74, sp
         bc1fl 0x803eaf6c
         swc1 f24, 0x94, sp
         goto 0x803eaf6c
         swc1 f22, 0x94, sp

    loc_0x803eaf6c: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eaf60
         v0 = [v0 + 0x6508]       // t9

    loc_0x803eaf70: // orphan
         t4 = , unsigned  halfword [v0 + 0]
         mtc1 t4, f10
         if                       // likely
         cvt.s.w f6, f10

    loc_0x803eaf80: // orphan
         mtc1 at, f4
         
         add.s f6, f6, f4

    loc_0x803eaf8c: // orphan
         mul.s f12, f2, f6
         at = 0x4f80 << 16
         c.lt.s f26, f12
         
         bc1fl 0x803eafb0
         mov.s f18, f24
         goto 0x803eafb0
         mov.s f18, f22

    loc_0x803eafb0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eafa4
         t5 = , unsigned  halfword [v0 + 2] // s4
         mtc1 t5, f8
         if                       // likely
         cvt.s.w f10, f8

    loc_0x803eafc0: // orphan
         mtc1 at, f4
         
         add.s f10, f10, f4

    loc_0x803eafcc: // orphan
         mul.s f16, f2, f10
         lwc1 f8, 0x90, sp

    loc_0x803eafd4: // orphan
         lwc1 f4, 0x70, sp
         at = 0x4480 << 16
         mtc1 at, f6
         add.s f10, f8, f4
         lwc1 f4, 0x74, sp
         lwc1 f8, 0x94, sp
         c.lt.s f26, f16
         div.s f0, f6, f2
         bc1f 0x803eb004
         trunc.w.s f6, f10
         goto 0x803eb008
         mov.s f14, f22

    loc_0x803eb008: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eaffc
         c.lt.s f26, f0
         add.s f10, f8, f4
         bc1f 0x803eb020
         add.s f8, f18, f12
         goto 0x803eb024
         mov.s f20, f22

    loc_0x803eb024: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb018
         c.lt.s f26, f0
         mfc1 a0, f6
         trunc.w.s f6, f10
         bc1f 0x803eb040
         trunc.w.s f4, f8
         goto 0x803eb044
         mov.s f2, f22

    loc_0x803eb044: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb038
         add.s f10, f14, f16
         mfc1 a1, f6
         mfc1 a2, f4
         add.s f8, f20, f0
         a0 <<= 0x10
         a1 <<= 0x10
         trunc.w.s f6, f10
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         add.s f10, f2, f0

    loc_0x803eb06c: // orphan
         mfc1 a3, f6
         a1 = , signed  a1 >> 0x10
         trunc.w.s f4, f8
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         trunc.w.s f6, f10
         mfc1 t4, f4
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x10] = 0

    loc_0x803eb090: // orphan
         mfc1 t6, f6
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         [sp + 0x84] = t0
         [sp + 0x18] = t4
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t6
         t0 = [sp + 0x84]

    loc_0x803eb0b0: // orphan
         t7 = 0x86a4 << 16
         t7 += 0x4400
         s0 += 4
         at = , unsigned  , s0 < t7 // lo
         if                       // likely
         t0 += 4

    loc_0x803eb0c8: // orphan
         s0 = 0x86a4 << 16
         s0 += 0x43f0
         t0 = 0

    loc_0x803eb0d4: // orphan
         a1 = [s0 + 0xe38]        // t9
         t8 = 0x86a1 << 16
         t8 -= 0xc90
         if                       // unlikely
         t9 = 0x86a1 << 16

    loc_0x803eb0e8: // orphan
         a2 = [s0 + 0xe28]        // t9
         t9 -= 0xc80
         at = 0 + 1               // lo

    loc_0x803eb0f4: // orphan
         a3 = t0 + t9
         if                       // unlikely
         s1 = t0 + t8

    loc_0x803eb100: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x803eb10c: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x803eb114: // orphan
         beql a2, at, 0x803eb1f4  // unlikely
         v0 = [s2 + 0]            // t9

    loc_0x803eb11c: // orphan
         goto 0x803eb230
         t5 = 0 + 0x1e

    loc_0x803eb124: // orphan
         v0 = [s2 + 0]            // t9
         t4 = 0xdce6 << 16
         t4 |= 0xffff
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 4] = t4
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t6 = 0x2832 << 16
         t6 |= 0x78ff
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s4
         a2 = [s0 + 0xe28]        // t9
         goto 0x803eb22c
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb168: // orphan
         v0 = [s2 + 0]            // t9
         t8 = 0xe6ff << 16
         t8 |= 0xc8ff
         t7 = v0 + 8
         [s2 + 0] = t7

    loc_0x803eb17c: // orphan
         [v0 + 4] = t8
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t3 = 0x3c78 << 16
         t3 |= 0xff
         t9 = v0 + 8
         [s2 + 0] = t9
         [v0 + 4] = t3
         [v0 + 0] = s4

    loc_0x803eb1a0: // orphan
         a2 = [s0 + 0xe28]        // t9
         goto 0x803eb22c
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb1ac: // orphan
         v0 = [s2 + 0]            // t9
         t5 = 0xffdc << 16
         t5 |= 0xf0ff
         t4 = v0 + 8
         [s2 + 0] = t4
         [v0 + 4] = t5
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t7 = 0xc81e << 16
         t7 |= 0x50ff
         t6 = v0 + 8
         [s2 + 0] = t6
         [v0 + 4] = t7
         [v0 + 0] = s4
         a2 = [s0 + 0xe28]        // t9
         goto 0x803eb22c
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb1f4: // orphan
         t9 = 0 - 0x3701
         t4 = 0xc85a << 16
         t8 = v0 + 8
         [s2 + 0] = t8

    loc_0x803eb204: // orphan
         [v0 + 4] = t9
         [v0 + 0] = s3
         v0 = [s2 + 0]            // t9
         t4 |= 0xff               // t9
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 4] = t4
         [v0 + 0] = s4
         a2 = [s0 + 0xe28]        // t9
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb22c: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803eb160, 0x803eb1a4, 0x803eb1e8
         t5 = 0 + 0x1e

    loc_0x803eb230: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb11c
         v0 = t5 - a1             // arg2
         at = , v0 < 6            // lo

    loc_0x803eb238: // orphan
         if                       // likely
         t6 = a2 << 2             // arg3 // k0

    loc_0x803eb240: // orphan
         v0 = 0 + 6

    loc_0x803eb244: // orphan
         a0 = 0x86a4 << 16
         a0 += t6                 // arg1
         a0 = [a0 + 0x650c]       // arg1 // t9
         [sp + 0xc4] = v0
         [sp + 0x70] = a3
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x84] = t0
         v0 = [sp + 0xc4]         // s4
         at = 0x4000 << 16
         mtc1 at, f19
         at = 0x86a1 << 16
         t7 = v0 << 2
         at += t7
         lwc1 f2, -0xc70, at
         at = 0x86a1 << 16
         ldc1 f8, -0x7f8, at
         cvt.d.s f4, f2
         at = 0x4038 << 16
         sub.d f0, f8, f4
         mtc1 at, f11
         mtc1 0, f10
         mtc1 0, f18

    loc_0x803eb29c: // orphan
         t8 = [s1 + 0]            // t9
         mul.d f6, f0, f10
         at = 0x4030 << 16
         mtc1 t8, f4
         mtc1 0, f15
         mtc1 0, f14
         a3 = [sp + 0x70]         // t9
         t0 = [sp + 0x84]
         cvt.d.w f10, f4
         div.d f8, f6, f18
         mtc1 0, f6
         mtc1 at, f7
         at = 0x4f80 << 16

    loc_0x803eb2d0: // orphan
         mul.d f4, f0, f6
         add.d f16, f8, f10
         div.d f8, f4, f18
         c.lt.d f14, f16
         
         bc1fl 0x803eb2f8
         swc1 f24, 0x90, sp
         goto 0x803eb2f8
         swc1 f22, 0x90, sp

    loc_0x803eb368: // orphan
         c.lt.s f26, f4
         
         bc1fl 0x803eb384
         mov.s f18, f24
         goto 0x803eb384
         mov.s f18, f22

    loc_0x803eb384: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb378
         t6 = , unsigned  halfword [v0 + 2]
         mtc1 t6, f8
         if                       // likely
         cvt.s.w f10, f8

    loc_0x803eb394: // orphan
         mtc1 at, f6
         
         add.s f10, f10, f6

    loc_0x803eb3a0: // orphan
         mul.s f0, f2, f10
         at = 0x4480 << 16
         mtc1 at, f4
         lwc1 f8, 0x90, sp
         c.lt.s f26, f0
         swc1 f0, 0x70, sp
         div.s f0, f4, f2
         bc1fl 0x803eb3d0
         mov.s f14, f24
         goto 0x803eb3d0
         mov.s f14, f22

    loc_0x803eb3d0: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb3c4
         c.lt.s f26, f0
         
         bc1fl 0x803eb3ec
         mov.s f20, f24
         goto 0x803eb3ec
         mov.s f20, f22

    loc_0x803eb3ec: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb3e0
         c.lt.s f26, f0
         
         bc1fl 0x803eb408
         mov.s f2, f24
         goto 0x803eb408
         mov.s f2, f22

    loc_0x803eb408: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb3fc
         cvt.d.s f6, f8
         lwc1 f8, 0x94, sp
         add.d f10, f6, f16
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         cvt.d.s f6, f8
         trunc.w.d f4, f10
         lwc1 f8, 0x74, sp
         [sp + 0x20] = 0
         add.d f10, f6, f12
         mfc1 a0, f4
         [sp + 0x84] = t0
         add.s f6, f18, f8
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         trunc.w.d f4, f10
         trunc.w.s f10, f6
         mfc1 a1, f4
         lwc1 f4, 0x70, sp
         mfc1 a2, f10
         add.s f8, f14, f4
         a1 <<= 0x10              // arg2
         a2 <<= 0x10              // arg3

    loc_0x803eb464: // orphan
         add.s f10, f20, f0
         a2 = , signed  a2 >> 0x10 // arg3
         a1 = , signed  a1 >> 0x10 // arg2
         trunc.w.s f6, f8
         add.s f8, f2, f0
         mfc1 a3, f6
         trunc.w.s f4, f10
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         trunc.w.s f6, f8
         mfc1 t5, f4
         mfc1 t7, f6
         [sp + 0x18] = t5

    loc_0x803eb498: // orphan
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t7
         t0 = [sp + 0x84]

    loc_0x803eb4a4: // orphan
         t8 = 0x86a4 << 16
         t8 += 0x4400
         s0 += 4
         at = , unsigned  , s0 < t8 // lo
         if                       // likely
         t0 += 4

    loc_0x803eb4bc: // orphan
         s0 = 0x86a4 << 16
         v0 = 0x86a4 << 16
         v0 += 0x4400
         s0 += 0x43f0
         t1 = 0
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb4d4: // orphan
         if                       // unlikely
         t9 = a1 - 1

    loc_0x803eb4dc: // orphan
         [s0 + 0xe38] = t9

    loc_0x803eb4e0: // orphan
         s0 += 4
         bnel s0, v0, 0x803eb4d4  // likely
         a1 = [s0 + 0xe38]        // t9

    loc_0x803eb4ec: // orphan
         v0 = [s2 + 0]            // t9
         t4 = 0xde00 << 16
         t6 = 0x86a4 << 16
         t3 = v0 + 8
         [s2 + 0] = t3
         [v0 + 0] = t4
         t5 = [sp + 0x88]
         at = 0 + 4
         t3 = 0xde00 << 16
         [v0 + 4] = t5
         t6 = [t6 + 0x6548]       // t9
         t7 = [t6 + 0xc]          // t9
         t6 = 0x3c3c << 16
         t8 = , unsigned  byte [t7 + 0x2180] // s4

    loc_0x803eb524: // orphan
         beql t8, at, 0x803eb8f0  // fcn.803eb75c+0x194 // unlikely
         ra = [sp + 0x64]

    loc_0x803eb52c: // orphan
         v0 = [s2 + 0]            // t9
         t6 |= 0x3cc8
         t8 = 0xdcdc << 16
         t9 = v0 + 8
         [s2 + 0] = t9
         [v0 + 0] = t3
         t4 = [sp + 0x8c]
         v1 = v0                  // t9
         t8 |= 0xdcff
         [v0 + 4] = t4
         v0 = [s2 + 0]            // t9
         t4 = 0x5566 << 16
         t3 = 0xfc30 << 16
         t5 = v0 + 8
         [s2 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s3
         a0 = v0                  // t9
         v0 = [s2 + 0]            // t9
         t3 |= 0xb261
         t4 |= 0xff7f
         t7 = v0 + 8
         [s2 + 0] = t7
         [v0 + 4] = t8
         [v0 + 0] = s4
         a1 = v0                  // t9
         v0 = [s2 + 0]            // t9
         t5 = 0x86a4 << 16
         a3 = 0x86a1 << 16
         t9 = v0 + 8
         [s2 + 0] = t9
         [v0 + 4] = t4

    loc_0x803eb5ac: // orphan
         [v0 + 0] = t3
         t5 = [t5 + 0x43f0]       // t9
         a3 = [a3 - 0x71c]        // t9
         s3 = 0x86a4 << 16
         s3 += 0x6520
         t6 = t5 + a3
         t7 = t6 - 1
         div 0, t7, a3
         s1 = lo
         a2 = v0                  // s4
         if                       // likely
         

    loc_0x803eb5dc: // orphan
         break 7

    loc_0x803eb5e0: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x803eb5ec: // orphan
         if                       // likely
         

    loc_0x803eb5f4: // orphan
         break 6

    loc_0x803eb5f8: // orphan
         bgezl s1, 0x803eb608     // likely
         at = , s1 < 0xa

    loc_0x803eb600: // orphan
         s1 = 0
         at = , s1 < 0xa          // lo

    loc_0x803eb608: // orphan
         if                       // likely
         at = 0 + 0xa

    loc_0x803eb610: // orphan
         div 0, s1, at
         s3 = 0x86a4 << 16
         t8 = lo
         s3 += 0x6520
         t9 = t8 << 2
         s0 = s3 + t9
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]            // t9
         v0 = [s0 + 0]            // t9
         a0 = 0 + 0x91
         t3 = , unsigned  halfword [v0 + 0]
         mtc1 t3, f10
         if                       // likely
         cvt.s.w f12, f10

    loc_0x803eb648: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         
         add.s f12, f12, f4

    loc_0x803eb658: // orphan
         c.lt.s f26, f12
         
         bc1fl 0x803eb674
         mov.s f20, f24
         goto 0x803eb674
         mov.s f20, f22

    loc_0x803eb674: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb668
         t4 = , unsigned  halfword [v0 + 2] // t3

    loc_0x803eb678: // orphan
         add.s f10, f20, f12
         t7 = 0 + 0x400
         mtc1 t4, f8
         t8 = 0 + 0x400
         if                       // likely
         cvt.s.w f0, f8

    loc_0x803eb690: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f0, f0, f6

    loc_0x803eb6a0: // orphan
         c.lt.s f26, f0
         trunc.w.s f4, f10
         bc1fl 0x803eb6bc
         mov.s f2, f24
         goto 0x803eb6bc
         mov.s f2, f22

    loc_0x803eb6bc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb6b0
         add.s f8, f2, f0
         mfc1 a2, f4
         a1 = 0 + 0x37
         [sp + 0x10] = 0
         trunc.w.s f6, f8
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x14] = 0

    loc_0x803eb6dc: // orphan
         mfc1 a3, f6
         [sp + 0x18] = t7
         [sp + 0x1c] = t8
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10 // t9
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         at = 0 + 0xa
         div 0, s1, at
         t9 = hi
         t3 = t9 << 2
         s0 = s3 + t3
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803eb710: // orphan
         a0 = [s0 + 0]            // t9
         v0 = [s0 + 0]            // t9
         a0 = 0 + 0x9f
         at = 0x4f80 << 16
         t4 = , unsigned  halfword [v0 + 0]
         mtc1 t4, f10
         if                       // likely
         cvt.s.w f12, f10

    loc_0x803eb730: // orphan
         mtc1 at, f4
         
         add.s f12, f12, f4

    loc_0x803eb73c: // orphan
         c.lt.s f26, f12
         at = 0x4f80 << 16
         bc1fl 0x803eb758
         mov.s f20, f24
         goto 0x803eb758
         mov.s f20, f22

    loc_0x803eb758: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb74c
         t5 = , unsigned  halfword [v0 + 2] // t3

    loc_0x803eb7e0: // orphan
         at = 0 + 0xa
         div 0, s1, at
         t3 = hi
         t4 = t3 << 2
         s0 = s3 + t4
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]            // t9
         v0 = [s0 + 0]            // t9
         a0 = 0 + 0x98
         at = 0x4f80 << 16
         t5 = , unsigned  halfword [v0 + 0]

    loc_0x803eb80c: // orphan
         mtc1 t5, f10
         if                       // likely
         cvt.s.w f4, f10

    loc_0x803eb818: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x803eb824: // orphan
         at = 0x86a1 << 16
         lwc1 f6, -0x7f0, at
         at = 0x4f80 << 16

    loc_0x803eb830: // orphan
         mul.s f12, f4, f6
         c.lt.s f26, f12
         
         bc1fl 0x803eb850
         mov.s f20, f24
         goto 0x803eb850
         mov.s f20, f22

    loc_0x803eb850: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb844
         t6 = , unsigned  halfword [v0 + 2] // t3
         add.s f4, f20, f12
         t9 = 0 + 0x355
         mtc1 t6, f10
         t3 = 0 + 0x400
         if                       // likely
         cvt.s.w f0, f10

    loc_0x803eb86c: // orphan
         mtc1 at, f8
         
         add.s f0, f0, f8

    loc_0x803eb878: // orphan
         c.lt.s f26, f0

    loc_0x803eb91c: // orphan
         a0 = 0x86a4 << 16
         a1 = 0x86a4 << 16
         v0 = 0 - 1               // s2
         a1 += 0x4400             // arg2
         a0 += 0x43f0             // arg1
         v1 = [a0 + 0xb4]         // arg1 // t9

    loc_0x803eb934: // orphan
         a0 += 4                  // arg1
         at = , v0 < v1           // lo
         beql at, 0, 0x803eb94c   // unlikely
         at = , unsigned  , a0 < a1 // lo

    loc_0x803eb944: // orphan
         v0 = v1
         at = , unsigned  , a0 < a1

    loc_0x803eb94c: // orphan
         bnel at, 0, 0x803eb934   // likely
         v1 = [a0 + 0xb4]         // arg1 // t9

    loc_0x803eb954: // orphan
         t6 = 0x86a4 << 16
         t6 = [t6 + 0x44a4]       // t9
         t8 = 0x86a4 << 16
         t0 = 0x86a4 << 16
         if                       // likely
         t2 = 0x86a4 << 16

    loc_0x803eb96c: // orphan
         t7 = 0 + 1               // lo
         at = 0x86a4 << 16
         goto 0x803eb984
         [at + 0x4568] = t7

    loc_0x803eb97c: // orphan
         at = 0x86a4 << 16
         [at + 0x4568] = 0

    loc_0x803eb984: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb974
         t8 = [t8 + 0x44a8]       // t9
         at = 0x86a4 << 16
         t9 = 0 + 1               // lo
         if                       // likely
         t1 = 0 + 1               // lo

    loc_0x803eb998: // orphan
         at = 0x86a4 << 16
         goto 0x803eb9a8
         [at + 0x456c] = t9

    loc_0x803eb9a4: // orphan
         [at + 0x456c] = 0

    loc_0x803eb9a8: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb99c
         t0 = [t0 + 0x44ac]       // t9
         at = 0x86a4 << 16
         t3 = 0 + 1               // lo
         if                       // likely
         

    loc_0x803eb9bc: // orphan
         at = 0x86a4 << 16
         goto 0x803eb9cc
         [at + 0x4570] = t1

    loc_0x803eb9c8: // orphan
         [at + 0x4570] = 0

    loc_0x803eb9cc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb9c0
         t2 = [t2 + 0x44b0]       // t9
         at = 0x86a4 << 16
         if                       // likely
         

    loc_0x803eb9d8: // orphan
         

    loc_0x803eb9dc: // orphan
         at = 0x86a4 << 16
         goto 0x803eb9ec
         [at + 0x4574] = t3

    loc_0x803eb9e8: // orphan
         [at + 0x4574] = 0

    loc_0x803eb9ec: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eb9e0
         v0 = 0x86a4 << 16
         v0 += 0x43f0
         t4 = [v0 + 0x184]        // t3
         t5 = [v0 + 0x178]
         t7 = [v0 + 0x17c]        // t9
         t9 = [v0 + 0x180]
         unsigned , hi
         t6 = lo
         
         
         unsigned , hi
         t8 = lo
         
         
         unsigned , hi
         t0 = lo
         if                       // likely
         

    loc_0x803eba34: // orphan
         [v0 + 0x178] = 0
         [v0 + 0x17c] = 0

    loc_0x803eba3c: // orphan
         [v0 + 0x180] = 0
         [v0 + 0x184] = 0

    loc_0x803eba44: // orphan
         ret                      // ra
         

    loc_0x803ebad4: // orphan
         call 0x8002781c          // 0x8002781c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a3 & 0xff           // s4

    loc_0x803ebadc: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803ebba0: // orphan
         if                       // unlikely
         at = 0x4020 << 16

    loc_0x803ebba8: // orphan
         mtc1 at, f0
         at = 0x3f80 << 16
         lwc1 f4, 0x20, sp
         mtc1 at, f6
         at = 0x3fc0 << 16
         swc1 f4, 0x48, v0
         swc1 f6, 0x4c, v0
         lwc1 f8, 0x24, sp
         mtc1 at, f16
         t6 = 0 - 0x4001
         swc1 f8, 0x50, v0
         lwc1 f10, 0x28, sp
         halfword [v0 + 0x42] = t6
         a0 = v0 + 0x24           // arg1
         swc1 f0, 0x54, v0
         swc1 f0, 0x5c, v0
         swc1 f16, 0x58, v0
         swc1 f10, 0x10, v0
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         a3 = 0x86a1 << 16
         a0 = [sp + 0x18]
         a3 = [a3 + 0x4e8]        // t9

    loc_0x803ebc04: // orphan
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2

    loc_0x803ebc10: // orphan
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x803ebc9c: // orphan
         v1 = v0                  // s4
         at = 0x4020 << 16
         t7 = 0x86a4 << 16
         mtc1 at, f0
         t7 += 0x43f0
         t6 = a2 << 3             // arg3
         v0 = t6 + t7
         at = 0x3f80 << 16
         lwc1 f4, 4, v0
         mtc1 at, f6
         t8 = 0 - 0x4001
         swc1 f4, 0x48, v1
         swc1 f6, 0x4c, v1

    loc_0x803ebcd0: // orphan
         lwc1 f8, 8, v0
         halfword [v1 + 0x42] = t8
         [v1 + 0x38] = a2
         [v1 + 0x20] = a2
         a0 = v1 + 0x24           // arg1
         swc1 f0, 0x54, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x5c, v1
         swc1 f8, 0x50, v1
         call 0x8003f1dc          // 0x8003f1dc(0x244, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         a3 = 0x86a1 << 16
         a0 = [sp + 0x18]
         a3 = [a3 + 0x4e8]        // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x244, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x803ebd68: // orphan
         v1 = [a1 + 0]            // arg2 // t3
         t2 = 0 + 0x80
         t4 = 0xfcff << 16
         t8 = v1 + 8
         [a1 + 0] = t8            // arg2
         [v1 + 0] = t9
         [v1 + 4] = t2
         v1 = [a1 + 0]            // arg2
         t5 = 0xfffe << 16
         t5 |= 0xfe38
         t3 = v1 + 8
         [a1 + 0] = t3            // arg2
         t4 |= 0xd3ff
         [v1 + 0] = t4
         [v1 + 4] = t5
         v1 = [a1 + 0]            // arg2
         t7 = 0xdb06 << 16
         t7 |= 0x3c
         t6 = v1 + 8
         [a1 + 0] = t6            // arg2
         [v1 + 0] = t7
         a0 = v0                  // s4
         call 0x8004ca60          // 0x8004ca60(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         t1 = [sp + 0x1c]

    loc_0x803ebdcc: // orphan
         a1 = 0x800d << 16
         a1 += 0x510
         [t1 + 4] = v0
         v1 = [a1 + 0]            // t9
         t9 = 0xde00 << 16
         t2 = 0x86a1 << 16
         t8 = v1 + 8
         [a1 + 0] = t8
         [v1 + 0] = t9
         t2 = [t2 + 0x4ec]        // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x800d0510, 0x8, -1)
         [v1 + 4] = t2
         ra = [sp + 0x14]

    loc_0x803ebe00: // orphan
         sp += 0x38
         ret                      // ra
         

    loc_0x803ebe34: // orphan
         lwc1 f4, 4, t8
         a0 = 0
         swc1 f4, 0x48, a1        // arg2
         a1 = [v0 + 0]
         t9 = [a1 + 0x20]         // arg2

    loc_0x803ebe48: // orphan
         t0 = t9 << 3
         t1 = a2 + t0             // arg3
         lwc1 f6, 8, t1
         swc1 f6, 0x50, a1        // arg2
         a1 = [v0 + 0]
         v1 = [a1 + 0x1c]         // arg2 // t9
         at = , v1 < 0x14
         beql at, 0, 0x803ebe9c   // likely
         at = 0x3f80 << 16

    loc_0x803ebe6c: // orphan
         mtc1 v1, f8
         at = 0x86a1 << 16
         lwc1 f16, -0x7ec, at
         cvt.s.w f10, f8
         mul.s f0, f10, f16
         swc1 f0, 0x5c, a1        // arg2
         t2 = [v0 + 0]
         swc1 f0, 0x58, t2
         t3 = [v0 + 0]
         goto 0x803ebebc
         swc1 f0, 0x54, t3

    loc_0x803ebe9c: // orphan
         mtc1 at, f18
         
         swc1 f18, 0x5c, a1       // arg2
         a1 = [v0 + 0]
         lwc1 f0, 0x5c, a1        // arg2
         swc1 f0, 0x58, a1        // arg2
         t4 = [v0 + 0]
         swc1 f0, 0x54, t4

    loc_0x803ebebc: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ebe90
         a1 = [v0 + 0]
         at = 0 + 5
         t5 = [a1 + 0x20]         // arg2 // t9
         t6 = t5 << 2
         t7 = a2 + t6             // arg3
         t8 = [t7 + 0xe8]         // t9
         if                       // unlikely
         

    loc_0x803ebedc: // orphan
         a0 = 0 + 1               // arg1 // lo

    loc_0x803ebee0: // orphan
         if                       // unlikely
         a0 = 0x87f1 << 16

    loc_0x803ebee8: // orphan
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9

    loc_0x803ebef0: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803ebf10: // orphan
         a1 = 0x86a1 << 16
         a1 -= 0x4674             // arg2
         a0 += 0xb38              // arg1
         call 0x87f025b8          // 0x87f025b8(0x100000b37, 0x86a0b98c, 0x8, -1)
         [sp + 0x28] = a2
         a2 = [sp + 0x28]

    loc_0x803ec1ac: // orphan
         ret                      // ra
         

    loc_0x803ec2d8: // orphan
         swc1 f2, 0x18, a3        // arg4
         swc1 f0, 0x1c, a3        // arg4
         v1 = v0 & 0x200

    loc_0x803ec2e4: // orphan
         if                       // unlikely
         t9 = v0 & 0x400

    loc_0x803ec2ec: // orphan
         beql t9, 0, 0x803ec300   // unlikely
         t3 = [sp + 0x28]         // a2

    loc_0x803ec2f4: // orphan
         swc1 f2, 0x18, a3        // arg4
         swc1 f2, 0x1c, a3        // arg4

    loc_0x803ec2fc: // orphan
         t3 = [sp + 0x28]         // a2

    loc_0x803ec300: // orphan
         at = 0x40a0 << 16
         mtc1 at, f18
         t4 = t3 << 2
         a1 = t0 + t4             // arg2
         lwc1 f0, 0xd8, a1        // arg2
         t5 = 0x86a1 << 16
         t3 = 0x86a1 << 16
         c.lt.s f18, f0
         a2 = 0 + 1               // arg3 // lo
         a0 = 0x86a4 << 16
         bc1f 0x803ec420
         
         t5 = [t5 - 0x720]        // t9
         at = 0x3f90 << 16
         beql t5, 0, 0x803ec39c   // unlikely
         mtc1 at, f3

    loc_0x803ec340: // orphan
         at = 0x3f90 << 16
         mtc1 at, f3
         at = 0x4000 << 16
         mtc1 at, f6
         lwc1 f4, 0x18, a3        // arg4
         mtc1 0, f2
         t6 = [sp + 0x2c]
         mul.s f8, f4, f6
         cvt.d.s f10, f8
         mtc1 at, f8
         mul.d f18, f10, f2
         cvt.s.d f4, f18
         swc1 f4
         lwc1 f6, 0x1c, a3        // arg4
         t7 = [sp + 0x30]
         mul.s f10, f6, f8
         cvt.d.s f18, f10
         mul.d f4, f18, f2
         neg.d f6, f4

    loc_0x803ec38c: // orphan
         // CODE XREF from fcn.8360509c @ +0x364
         cvt.s.d f8, f6
         goto 0x803ec524
         swc1 f8

    loc_0x803ec39c: // orphan
         at = 0x4000 << 16

    loc_0x803ec3a0: // orphan
         mtc1 at, f18
         lwc1 f10, 0x18, a3       // arg4
         at = 0x40c0 << 16
         mtc1 at, f6
         mul.s f4, f10, f18
         at = 0x40a0 << 16

    loc_0x803ec524: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803ec390
         // CODE XREF from fcn.803ec3c0 @ 0x803ec418
         // CODE XREF from fcn.803ec470 @ 0x803ec48c
         t8 = [sp + 0x28]         // a2
         if                       // unlikely
         

    loc_0x803ec530: // orphan
         if                       // unlikely
         a0 = 0x86a4 << 16

    loc_0x803ec534: // orphan
         if                       // unlikely
         a0 = 0x86a4 << 16

    loc_0x803ec538: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0x86a4 << 16

    loc_0x803ec544: // orphan
         t1 = 0 + 3

    loc_0x803ec548: // orphan
         if                       // unlikely
         a0 = 0x86a4 << 16

    loc_0x803ec550: // orphan
         a0 = 0x86a4 << 16
         goto 0x803ec618
         a0 = [a0 + 0x6548]       // arg1 // t9

    loc_0x803ec55c: // orphan
         a0 = [a0 + 0x6548]       // arg1 // t9
         at = 0 + 4
         t1 = 0 + 3
         v0 = [a0 + 0xc]          // arg1 // t9
         t9 = , unsigned  byte [v0 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ec578: // orphan
         t3 = , unsigned  byte [v0 + 0x2182] // s4
         t4 = t3 & 1              // lo
         bnel t4, 0, 0x803ecc28   // likely
         ra = [sp + 0x14]

    loc_0x803ec588: // orphan
         goto 0x803ec618
         a2 = 0 + 1               // arg3 // lo

    loc_0x803ec590: // orphan
         a0 = [a0 + 0x6548]       // arg1 // t9
         at = 0 + 4
         v0 = [a0 + 0xc]          // arg1 // t9
         t5 = , unsigned  byte [v0 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ec5a8: // orphan
         t6 = , unsigned  byte [v0 + 0x2182] // s4
         t7 = t6 & 2
         bnel t7, 0, 0x803ecc28   // likely
         ra = [sp + 0x14]

    loc_0x803ec5b8: // orphan
         goto 0x803ec618
         t1 = 0 + 3

    loc_0x803ec5c0: // orphan
         a0 = [a0 + 0x6548]       // arg1 // t9
         at = 0 + 4
         v0 = [a0 + 0xc]          // arg1 // t9
         t8 = , unsigned  byte [v0 + 0x2180] // s4
         if                       // unlikely
         

    loc_0x803ec5d8: // orphan
         t9 = , unsigned  byte [v0 + 0x2182] // s4
         t3 = t9 & 4
         bnel t3, 0, 0x803ecc28   // likely
         ra = [sp + 0x14]

    loc_0x803ec5e8: // orphan
         goto 0x803ec618
         t1 = 0 + 3

    loc_0x803ec5f0: // orphan
         a0 = [a0 + 0x6548]       // arg1 // t9
         at = 0 + 4
         v0 = [a0 + 0xc]          // arg1 // t9
         t4 = , unsigned  byte [v0 + 0x2180] // s4
         beql t4, at, 0x803ec61c  // unlikely
         swc1 f12, 0x18, a3       // arg4

    loc_0x803ec608: // orphan
         t5 = , unsigned  byte [v0 + 0x2182] // s4
         t6 = t5 & 8              // a2
         bnel t6, 0, 0x803ecc28   // likely
         ra = [sp + 0x14]

    loc_0x803ec618: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803ec554, 0x803ec588, 0x803ec5b8, 0x803ec5e8
         swc1 f12, 0x18, a3       // arg4

    loc_0x803ec61c: // orphan
         swc1 f12, 0x1c, a3       // arg4
         t7 = [a0 + 0xc]          // arg1 // t9
         v1 = byte [t7 + 0x2181]  // s4
         beql v1, 0, 0x803ec654   // unlikely
         [t0 + 0x16a4] = a2

    loc_0x803ec630: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803ec638: // orphan
         beql v1, at, 0x803ec674  // unlikely
         [t0 + 0x16a4] = a2

    loc_0x803ec654: // orphan
         t8 = [a0 + 0xc]          // arg1 // t9
         goto 0x803ec6f0
         v1 = byte [t8 + 0x2181]  // s4

    loc_0x803ec660: // orphan
         [t0 + 0x16a4] = a2
         t9 = [a0 + 0xc]          // arg1
         goto 0x803ec6f0
         v1 = byte [t9 + 0x2181]  // s4

    loc_0x803ec6f0: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803ec658, 0x803ec668
         beql v1, 0, 0x803ec71c   // unlikely
         v0 = [a1 + 0x34]         // arg2 // t9

    loc_0x803ec6f8: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803ec700: // orphan
         beql v1, at, 0x803ec8bc  // unlikely
         v0 = [a1 + 0x34]         // arg2 // t9

    loc_0x803ec708: // orphan
         beql v1, t1, 0x803ec964  // unlikely
         v0 = [a1 + 0x34]         // arg2 // t9

    loc_0x803ec710: // orphan
         goto 0x803eca04
         v0 = [a1 + 0x34]         // arg2 // t9

    loc_0x803ec71c: // orphan
         if                       // likely
         

    loc_0x803ec724: // orphan
         t3 = [a1 + 0xe8]         // arg2 // t9
         at = , unsigned  , t3 < 6
         if                       // likely
         t3 <<= 2

    loc_0x803ec734: // orphan
         at = 0x86a1 << 16
         at += t3
         t3 = [at - 0x7e8]        // t9
         goto t3                  // t9
         

    loc_0x803ec7e4: // orphan
         if                       // likely
         

    loc_0x803ec7ec: // orphan
         t9 = [a1 + 0xe8]         // arg2
         [a1 + 0x16c0] = 0        // arg2
         if                       // likely
         

    loc_0x803ec7fc: // orphan
         [a1 + 0x34] = 0          // arg2

    loc_0x803ec800: // orphan
         // CODE XREF from fcn.803ec7bc @ 0x803ec7d4
         goto 0x803eca04
         v0 = [a1 + 0x34]         // arg2

    loc_0x803ec808: // orphan
         v0 = [a1 + 0x34]         // arg2
         if                       // unlikely
         

    loc_0x803ec814: // orphan
         t3 = [a1 + 0xe8]         // arg2 // t9
         at = , unsigned  , t3 < 6
         if                       // likely
         t3 <<= 2

    loc_0x803ec824: // orphan
         at = 0x86a1 << 16
         at += t3
         t3 = [at - 0x7d0]        // t9
         goto t3                  // t9
         

    loc_0x803ec894: // orphan
         if                       // likely
         

    loc_0x803ec89c: // orphan
         t7 = [a1 + 0xe8]         // arg2 // t9
         [a1 + 0x16c0] = 0        // arg2

    loc_0x803ec8a4: // orphan
         if                       // unlikely
         

    loc_0x803ec8ac: // orphan
         [a1 + 0x34] = 0          // arg2

    loc_0x803ec8b0: // orphan
         goto 0x803eca04
         v0 = [a1 + 0x34]         // arg2

    loc_0x803ec8b8: // orphan
         v0 = [a1 + 0x34]         // arg2

    loc_0x803ec8bc: // orphan
         if                       // likely
         

    loc_0x803ec8c4: // orphan
         t6 = [a1 + 0xe8]         // arg2 // t9
         at = , unsigned  , t6 < 6
         if                       // likely
         t6 <<= 2

    loc_0x803ec8d4: // orphan
         at = 0x86a1 << 16
         at += t6
         t6 = [at - 0x7b8]        // t9

    loc_0x803ec8e0: // orphan
         goto t6
         

    loc_0x803ec93c: // orphan
         if                       // likely
         

    loc_0x803ec944: // orphan
         t5 = [a1 + 0xe8]         // arg2 // t9
         [a1 + 0x16c0] = 0        // arg2
         if                       // likely
         

    loc_0x803ec954: // orphan
         [a1 + 0x34] = 0          // arg2

    loc_0x803ec958: // orphan
         // CODE XREF from fcn.80421810 @ 0x803ec92c
         goto 0x803eca04
         v0 = [a1 + 0x34]         // arg2

    loc_0x803ec964: // orphan
         if                       // likely
         

    loc_0x803ec96c: // orphan
         t4 = [a1 + 0xe8]         // arg2 // t9
         at = , unsigned  , t4 < 6
         if                       // likely
         t4 <<= 2

    loc_0x803ec97c: // orphan
         at = 0x86a1 << 16
         at += t4
         t4 = [at - 0x7a0]        // t9
         goto t4                  // t9
         

    loc_0x803ec994: // orphan
         [a1 + 0x34] = 0          // arg2
         v0 = [a1 + 0x16c0]       // arg2
         a0 = 0x86a1 << 16
         v1 = , v0 < 0x1f         // lo
         t7 = v0 + 1              // lo
         [a1 + 0x16c0] = t7       // arg2
         v1 ^= 1
         if                       // fcn.803ec9bc // fcn.803ec9bc // likely
         a0 = [a0 - 0x71c]        // arg1 // t9

    loc_0x803ec9b8: // orphan
         [a1 + 0x34] = a2         // arg2

    loc_0x803ec9e4: // orphan
         bnel a2, v0, 0x803eca04  // likely
         v0 = [a1 + 0x34]         // arg2 // a2

    loc_0x803ec9ec: // orphan
         t9 = [a1 + 0xe8]         // arg2
         [a1 + 0x16c0] = 0        // arg2
         bnel t9, 0, 0x803eca04   // likely
         v0 = [a1 + 0x34]         // arg2 // a2

    loc_0x803ec9fc: // orphan
         [a1 + 0x34] = 0          // arg2

    loc_0x803eca00: // orphan
         // CODE XREF from fcn.803ec9bc @ 0x803ec9d4
         v0 = [a1 + 0x34]         // arg2

    loc_0x803eca04: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803ec710, 0x803ec800, 0x803ec8b0, 0x803ec958
         if                       // unlikely
         a0 = [sp + 0x28]         // a2

    loc_0x803eca0c: // orphan
         if                       // unlikely
         a0 = [sp + 0x28]         // a2

    loc_0x803eca14: // orphan
         goto 0x803eca64
         at = 0x40a0 << 16

    loc_0x803eca1c: // orphan
         [sp + 0x18] = a1
         call 0x86a0c7b4          // 0x86a0c7b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         at = 0x3f90 << 16
         mtc1 at, f3
         mtc1 0, f2
         a1 = [sp + 0x18]
         goto 0x803eca60
         a3 = [sp + 0x1c]         // t9

    loc_0x803eca40: // orphan
         [sp + 0x18] = a1
         call 0x86a0c8dc          // 0x86a0c8dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         at = 0x3f90 << 16

    loc_0x803eca50: // orphan
         mtc1 at, f3
         mtc1 0, f2
         a1 = [sp + 0x18]
         a3 = [sp + 0x1c]         // t9

    loc_0x803eca60: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eca38
         at = 0x40a0 << 16

    loc_0x803eca64: // orphan
         // CODE XREF from fcn.803dd03c @ 0x803eca14
         mtc1 at, f4
         lwc1 f0, 0xd8, a1
         t3 = 0x86a1 << 16
         t8 = 0x86a1 << 16
         c.lt.s f4, f0
         
         bc1f 0x803ecb50
         
         t3 = [t3 - 0x720]        // t9
         at = 0x40c0 << 16
         beql t3, 0, 0x803ecae4   // unlikely
         mtc1 at, f0

    loc_0x803ecacc: // orphan
         mul.d f6, f4, f2
         neg.d f18, f6
         cvt.s.d f8, f18
         goto 0x803ecc24
         swc1 f8

    loc_0x803ecb38: // orphan
         cvt.d.s f18, f6
         mul.d f8, f18, f2
         neg.d f10, f8
         cvt.s.d f4, f10
         goto 0x803ecc24
         swc1 f4

    loc_0x803ecbb4: // orphan
         mtc1 at, f12

    loc_0x803ecbb8: // orphan
         lwc1 f4, 0x18, a3        // arg4
         at = 0x40c0 << 16
         sub.s f6, f12, f0
         mtc1 at, f14
         at = 0x40a0 << 16
         mtc1 at, f16
         mul.s f8, f4, f6
         t5 = [sp + 0x2c]

    loc_0x803ecbd8: // orphan
         mul.s f18, f8, f14
         div.s f10, f18, f16
         cvt.d.s f4, f10
         mul.d f6, f4, f2
         cvt.s.d f8, f6
         swc1 f8
         lwc1 f10, 0xd8, a1       // arg2
         lwc1 f18, 0x1c, a3       // arg4
         t4 = [sp + 0x30]
         sub.s f4, f12, f10
         mul.s f6, f18, f4
         
         mul.s f8, f6, f14
         div.s f10, f8, f16
         cvt.d.s f18, f10
         mul.d f4, f18, f2
         neg.d f6, f4
         cvt.s.d f8, f6
         swc1 f8

    loc_0x803ecc24: // orphan
         // CODE XREFS from fcn.803dd03c @ 0x803ecad8, 0x803ecb48
         // CODE XREF from fcn.803dc1fc @ 0x803ecbac
         ra = [sp + 0x14]

    loc_0x803ecc28: // orphan
         sp += 0x28
         ret                      // ra
         

}

*/
