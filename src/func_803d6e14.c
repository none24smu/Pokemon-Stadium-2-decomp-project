/*
 * Function: 0x803d6e14
 * Category: math
 */

// Decompiled C code
int fcn.803c5568 (int esi, int edx) {
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
// } while (?);
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
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.803c5568 (int esi, int edx) {
    loc_0x803c5568:
        // CALL XREF from fcn.824b9b50 @ +0x188
        if            // fcn.80388000+0x4425c // unlikely
        if            // unlikely
            
    loc_0x803cc290:
        if            // unlikely
        if            // unlikely
            
    loc_0x803d6a28:
        t7 = s3 << 3
        a1 = 0x8691 << 16
        [s1 + 0x38] = t4
        a1 += t7      // arg2
        s0 = t5 + t6
        a0 = s0
        call 0x8003ef48 // 0x8003ef48(0xffff8aa0, 0x88690fff8, 0x8, -1)
        a1 = halfword [a1 - 0x145a]
        call 0x8003ef60 // 0x8003ef60(0xffff8aa0, 0xffff, 0x8, -1)
         // do {
    loc_0x803d6a4c:
        a0 = s0
        lwc1 f16, 0x28, s0
        a0 = 0 + 0x3209
        cvt.d.s f4, f16
        add.d f18, f4, f20
        cvt.s.d f6, f18
        if            // unlikely
        swc1 f6, 0x28, s0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c5574
    loc_0x803c5584:
        if            // unlikely
        0x803c5588
            
    loc_0x803cc344:
        if            // unlikely
        if            // unlikely
            
    loc_0x803d72ac:
        call 0x800503a4 // 0x800503a4(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = [a0 - 0x544] // t9
        goto 0x803d7358
        at = , s0 < 0x155 // lo
         // do {
    loc_0x803d7358:
        // CODE XREF from fcn.803c5568 @ 0x803d72b4
        if            // likely
        a0 = 0x8691 << 16
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c558c
    loc_0x803c5598:
        if            // unlikely
        // CODE XREF from fcn.80388000 @ 0x803b9758
        0x803c559c
            
    loc_0x803cc3cc:
        0x803cc3cc
         // do {
    loc_0x803cc3d0:
        if            // unlikely
        if            // unlikely
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c55a0
    loc_0x803c55ac:
        if            // unlikely
        // CODE XREF from fcn.80388000 @ 0x803b975c
        if            // unlikely
            
    loc_0x803cc580:
        0x803cc580
        if            // unlikely
        if            // unlikely
            
    loc_0x803d90fc:
        t9 = 0xde00 << 16
        [v0 + 0] = t9
        goto 0x803d91ec
        [v0 + 4] = t0
         // do {
    loc_0x803d91ec:
        // CODE XREF from fcn.803d903c @ 0x803d9054
        // CODE XREF from fcn.803c5568 @ 0x803d9104
        ra = [sp + 0x2c]
        // CODE XREFS from fcn.803d8f3c @ +0x90, +0x98
        s0 = [sp + 0x28]
        sp += 0x30
        ret
        0x803d91fc
         // } while (?);
         // } while (?);
         // } while (?);
        goto loc_0x803c55b8
    loc_0x803c55b4:
        if            // fcn.803c5568+0x7040 // unlikely
        if            // unlikely
        // chop
            
    loc_0x803cc67c:
        0x803cc67c
        0x803cc680
        0x803cc684
        0x803cc688
        0x803cc68c
        0x803cc690
        0x803cc694
        0x803cc698
        // chop
         // do {
    loc_0x803cc69c:
        0x803cc69c
        0x803cc6a0
        0x803cc6a4
        0x803cc6a8
        0x803cc6ac
        0x803cc6b0
        if            // unlikely
        0x803cc6b8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c55c0
    loc_0x803c55f0:
        if            // fcn.803df490-0x12b1c // unlikely
        if            // unlikely
        // chop
            
    loc_0x803cc988:
        sdc1 f20, 0x18, sp
        t0 = t6 + 0x198
        t9 = s4
        // chop
         // do {
    loc_0x803cc994:
        t8 = [t6 + 0] // t9
        t6 += 0xc
        t9 += 0xc     // t1
        [t9 - 0xc] = t8
        t7 = [t6 - 8] // t9
        [t9 - 8] = t7
        t8 = [t6 - 4] // t9
        if            // likely
        [t9 - 4] = t8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c55fc
    loc_0x803c5608:
        0x803c5608
        0x803c560c
        if            // unlikely
        if            // unlikely
        // chop
            
    loc_0x803ccad8:
        beql v0, a2, 0x803ccb10 // unlikely
        [s4 + 0x78] = a2
        // chop
            
    loc_0x803ccb10:
        a0 = [v1 + 0xc] // t9
        // chop
         // do {
    loc_0x803ccb14:
        // CODE XREFS from fcn.80388000 @ 0x803ccaec, 0x803ccaf8, 0x803ccb04
        v0 = , unsigned  byte [a0 + 0x2182] // s4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c561c
    loc_0x803c5628:
        0x803c5628
        0x803c562c
        0x803c5630
        // CODE XREF from fcn.80388000 @ 0x803b9770
        if            // unlikely
        if            // unlikely
        // chop
            
    loc_0x803ccbec:
        call 0x800088a4 // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0 | 0xffff
        call 0x80007b34 // 0x80007b34(0xffff, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0 + 0x14
        t7 = 0x8692 << 16
        t7 = [t7 - 0x52a8] // t9
        // CODE XREF from fcn.81c69904 @ +0xe4
        t6 = 0 + 2
        // chop
         // do {
    loc_0x803ccc08:
        a0 = 0 + 0x28
        call 0x800225c4 // 0x800225c4(0x28, 0x442f71dcfe116408, 0x8, -1)
        [t7 + 0] = t6
        call 0x800279c4 // 0x800279c4(0x28, 0x442f71dcfe116408, 0x8, -1)
        a0 = 0 | 0xcf0b
        at = 0x8691 << 16
        goto 0x803ccc40
        [at - 0x1ee4] = 0
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c5640
    loc_0x803c564c:
        // CODE XREF from fcn.80388000 @ 0x803b9768
        if            // unlikely
        if            // unlikely
        // chop
            
    loc_0x803ccc94:
        if            // unlikely
        at = 0 + 2
        // chop
            
    loc_0x803cce30:
        ra = [sp + 0x24]
        // chop
         // do {
    loc_0x803cce34:
        s0 = [sp + 0x20]
        halfword [t2 + 0] = v1
        sp += 0x40
        ret           // ra
        v0 = 0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x803c5658
    loc_0x803c5664:
        if            // unlikely
        if            // unlikely
        // chop
            
    loc_0x803ccd5c:
        if            // likely
        0x803ccd60
        // chop
            
    loc_0x803cce28:
        v1 = 0x8009 << 16
        v1 = , unsigned  halfword [v1 + 0x4904]
        // chop
    loc_0x803cc2a8: // orphan
             
             
             if                       // unlikely
             if                       // unlikely

    loc_0x803cc2bc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc2cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc2d8: // orphan
         
         
         
         // CODE XREF from fcn.803df490 @ 0x803df490
         if                       // fcn.80387fc4+0x4edf4 // unlikely
         if                       // unlikely

    loc_0x803cc2f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc2fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc308: // orphan
         // CODE XREF from fcn.803df490 @ 0x803df494
         if                       // unlikely
         

    loc_0x803cc310: // orphan
         // CODE XREF from fcn.8309ea80 @ 0x8309ea80
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc31c: // orphan
         if                       // unlikely
         

    loc_0x803cc324: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc330: // orphan
         if                       // unlikely
         

    loc_0x803cc338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc348: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc354: // orphan
         if                       // unlikely
         

    loc_0x803cc358: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc360: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc368: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc36c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc380: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc38c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc398: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc3a8: // orphan
         if                       // unlikely
         

    loc_0x803cc3b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc3bc: // orphan
         if                       // unlikely
         

    loc_0x803cc3c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc3dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc3e4: // orphan
         if                       // unlikely

    loc_0x803cc3e8: // orphan
         if                       // fcn.803ae9d8+0x29204 // unlikely
         if                       // unlikely

    loc_0x803cc3f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc400: // orphan
         if                       // fcn.803aef5c+0x28d28 // unlikely
         // CALL XREF from fcn.813276bc @ +0xc40
         if                       // unlikely

    loc_0x803cc40c: // orphan
         if                       // fcn.803aef5c+0x28d14 // unlikely
         if                       // unlikely

    loc_0x803cc418: // orphan
         if                       // fcn.803d7d44+0x18 // unlikely
         if                       // unlikely

    loc_0x803cc424: // orphan
         if                       // fcn.803d7e7c+0xc // unlikely
         if                       // unlikely

    loc_0x803cc430: // orphan
         if                       // fcn.803d7fbc-0x58 // unlikely
         if                       // unlikely

    loc_0x803cc43c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc44c: // orphan
         if                       // unlikely
         

    loc_0x803cc454: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc460: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc46c: // orphan
         // CODE XREF from fcn.803df490 @ 0x803df4a8
         

    loc_0x803cc470: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc478: // orphan
         if                       // unlikely

    loc_0x803cc47c: // orphan
         if                       // unlikely
         

    loc_0x803cc484: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc490: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc49c: // orphan
         if                       // unlikely
         

    loc_0x803cc4a4: // orphan
         if                       // fcn.803d8380+0x18 // unlikely
         if                       // fcn.803d8380+0x2c // unlikely

    loc_0x803cc4b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc4bc: // orphan
         if                       // fcn.80388000+0x50490 // unlikely
         if                       // unlikely

    loc_0x803cc4c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc4d4: // orphan
         if                       // unlikely
         

    loc_0x803cc4dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc4e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc4f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc500: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc50c: // orphan
         

    loc_0x803cc510: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc51c: // orphan
         if                       // unlikely
         

    loc_0x803cc524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc530: // orphan
         // CODE XREF from fcn.803df490 @ +0x1c
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc53c: // orphan
         

    loc_0x803cc540: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803df490 @ 0x803df4b0
         if                       // unlikely

    loc_0x803cc54c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc558: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc564: // orphan
         if                       // fcn.803d8e8c+0xc // unlikely
         if                       // unlikely

    loc_0x803cc570: // orphan
         

    loc_0x803cc574: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc59c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc5a8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc5b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc5c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803cc5d0: // orphan
         if                       // unlikely
         

    loc_0x803cc5d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803d69f8: // orphan
         v0 = [s1 + 0x38]         // t9
         t5 = s3 << 2
         t5 -= s3
         if                       // unlikely
         t4 = v0 - 1

    loc_0x803d6a0c: // orphan
         t5 <<= 2
         t5 -= s3
         t5 <<= 2
         t5 += s3
         t6 = 0x8692 << 16
         t6 -= 0x6300
         t5 <<= 3

    loc_0x803d6a6c: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         s2 = 0
         t8 = 0 + 1               // lo
         [s4 + 0x194] = t8

    loc_0x803d6a7c: // orphan
         s3 += 1
         at = 0 + 4
         if                       // likely
         s1 += 4

    loc_0x803d6a8c: // orphan
         // CODE XREF from fcn.80388000 @ 0x803d69e4
         goto 0x803d717c
         v0 = [s4 + 0x38]         // t9

    loc_0x803d6aa4: // orphan
         at = , t0 < 0xd2

    loc_0x803d6aa8: // orphan
         goto 0x803d717c
         v0 = [s4 + 0x38]         // t9

    loc_0x803d6b58: // orphan
         at = 0x8692 << 16
         if                       // likely
         

    loc_0x803d6b64: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x3f05
         t6 = 0 + 1               // lo
         at = 0x8692 << 16
         goto 0x803d6b80
         [at - 0x5260] = t6

    loc_0x803d6b7c: // orphan
         [at - 0x5260] = 0

    loc_0x803d6b80: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d6b74
         t7 = [s4 + 0x44]         // t9
         t8 = [s4 + 0x38]         // t9
         t0 = [s4 + 0x3c]         // t9

    loc_0x803d6b8c: // orphan
         t2 = [s4 + 0x40]         // t9
         t9 = t7 + t8
         t1 = t9 + t0
         t3 = t1 + t2

    loc_0x803d6b9c: // orphan
         if                       // likely
         t4 = 0 + 1               // lo

    loc_0x803d6ba4: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x3f04
         at = 0x8692 << 16
         goto 0x803d6bc0
         [at - 0x525c] = 0

    loc_0x803d6bb8: // orphan
         at = 0x8692 << 16
         [at - 0x525c] = t4

    loc_0x803d6bc0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d6bb0
         t5 = 0x8692 << 16
         t5 = [t5 - 0x525c]       // t9
         if                       // unlikely
         

    loc_0x803d6c38: // orphan
         s2 -= 0x1440
         s1 -= 0x1460
         s0 -= 0x6300

    loc_0x803d6c44: // orphan
         a0 = s0
         call 0x8003ef48          // 0x8003ef48(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s1 + 2]
         call 0x8003ef60          // "&1" // 0x8003ef60(0x104, 0xffff, 0x8, -1)
         a0 = s0

    loc_0x803d6c58: // orphan
         // CODE XREF from fcn.803df490 @ +0x624
         s1 += 8
         at = , unsigned  , s1 < s2 // lo
         if                       // likely
         s0 += 0x168

    loc_0x803d6c68: // orphan
         t8 = [sp + 0x74]
         s2 = 0 + 1               // lo
         s3 = 0
         t9 = t8 - 0xd2
         if                       // unlikely
         t0 = t9 & 1

    loc_0x803d6c80: // orphan
         if                       // unlikely
         

    loc_0x803d6c88: // orphan
         t0 -= 2

    loc_0x803d6c8c: // orphan
         if                       // unlikely
         s1 = 0x8692 << 16

    loc_0x803d6c94: // orphan
         t1 = [s4 + 0x194]        // lo
         if                       // unlikely
         

    loc_0x803d6ca0: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x3209
         goto 0x803d6d9c
         [s4 + 0x194] = 0

    loc_0x803d6cb0: // orphan
         at = 0x8691 << 16
         ldc1 f20, -0x8b8, at
         s1 -= 0x5d60

    loc_0x803d6cbc: // orphan
         v0 = [s1 + 0x38]         // t9
         t5 = s3 << 2

    loc_0x803d6cc4: // orphan
         t5 -= s3
         if                       // unlikely
         t2 = v0 - 1              // t3

    loc_0x803d6cd0: // orphan
         t5 <<= 2
         t3 = [s1 + 0x28]         // t9
         t5 -= s3
         t5 <<= 2
         // CODE XREF from fcn.803df490 @ +0x62c
         t5 += s3
         t6 = 0x8692 << 16
         t6 -= 0x6300
         t5 <<= 3
         t7 = s3 << 3

    loc_0x803d6cf4: // orphan
         // CODE XREF from fcn.803df490 @ +0x630
         a1 = 0x8691 << 16
         t4 = t3 + 1              // s4

    loc_0x803d6d4c: // orphan
         s3 += 1
         at = 0 + 4
         if                       // likely
         s1 += 4

    loc_0x803d6d5c: // orphan
         t9 = [s4 + 0x44]
         t0 = [s4 + 0x38]         // t9
         t2 = [s4 + 0x3c]         // t9
         t4 = [s4 + 0x40]         // t9
         t1 = t9 + t0

    loc_0x803d6d70: // orphan
         t3 = t1 + t2
         t5 = t3 + t4
         if                       // likely
         t6 = 0 + 0x121

    loc_0x803d6d80: // orphan
         [s4 + 0x4c] = t6

    loc_0x803d6d84: // orphan
         t7 = [s4 + 0x4c]

    loc_0x803d6d88: // orphan
         // CODE XREF from fcn.803df490 @ +0x634
         at = 0 + 0x121
         if                       // unlikely
         

    loc_0x803d6d94: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x310a

    loc_0x803d6d9c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d6ca8
         // CODE XREF from fcn.803df490 @ +0x638
         goto 0x803d717c
         v0 = [s4 + 0x38]         // t9

    loc_0x803d6e0c: // orphan
         a0 = 0 + 0x1d08          // arg1
         goto 0x803d6e30
         

    loc_0x803d6e30: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d6e10
         // CODE XREF from pc @ +0xc
         goto 0x803d717c
         v0 = [s4 + 0x38]         // t9

    loc_0x803d6e88: // orphan
         at = 0x8692 << 16
         [at - 0x5d10] = t7
         t8 = 0x8692 << 16
         t8 = [t8 - 0x5d38]       // t9
         at = 0x8692 << 16
         v0 = 0 + 0x64

    loc_0x803d6ea0: // orphan
         // CODE XREF from fcn.803df490 @ +0x63c
         [at - 0x5d28] = t8

    loc_0x803d6ea4: // orphan
         // CODE XREF from pc @ +0x68
         t9 = 0x8692 << 16
         t9 = [t9 - 0x5494]
         t4 = 0x8692 << 16
         t2 = 0 + 1               // lo
         // CODE XREF from fcn.803df490 @ +0x640
         if                       // unlikely
         at = 0x8692 << 16

    loc_0x803d6ebc: // orphan
         t0 = 0x8692 << 16
         t0 = [t0 - 0x5d34]       // t9
         at = 0x8692 << 16
         t1 = v0 - t0
         goto 0x803d6ee8
         [at - 0x5d24] = t1

    loc_0x803d6ed4: // orphan
         [at - 0x5d0c] = t2
         t3 = 0x8692 << 16
         t3 = [t3 - 0x5d34]       // t9
         at = 0x8692 << 16
         [at - 0x5d24] = t3

    loc_0x803d6ee8: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d6ecc
         t4 = [t4 - 0x5490]       // t9
         t9 = 0x8692 << 16
         t7 = 0 + 1               // lo
         if                       // unlikely
         at = 0x8692 << 16

    loc_0x803d6efc: // orphan
         t5 = 0x8692 << 16
         t5 = [t5 - 0x5d30]       // t9
         at = 0x8692 << 16
         t6 = v0 - t5
         goto 0x803d6f28
         [at - 0x5d20] = t6

    loc_0x803d6f14: // orphan
         [at - 0x5d08] = t7
         t8 = 0x8692 << 16
         t8 = [t8 - 0x5d30]       // t9
         at = 0x8692 << 16
         [at - 0x5d20] = t8
         // CODE XREF from fcn.803c5568 @ 0x803d6f0c
         t9 = [t9 - 0x548c]
         t2 = 0 + 1               // lo
         at = 0x8692 << 16
         if                       // unlikely
         t3 = 0x8692 << 16

    loc_0x803d6f74: // orphan
         at = 0x8692 << 16
         t5 = t4 + 1
         [at - 0x5268] = t5
         at = 0x8692 << 16
         t7 = t6 + 1
         [at - 0x5264] = t7
         t8 = 0x8692 << 16
         t8 -= 0x5498
         at = 0x8691 << 16
         s1 = 0x8692 << 16
         s2 = 0x8692 << 16
         s2 -= 0x6a20
         s1 -= 0x5d60
         ldc1 f20, -0x898, at
         [sp + 0x44] = t8
         [sp + 0x50] = 0

    loc_0x803d6fb4: // orphan
         t9 = [sp + 0x44]
         t1 = [sp + 0x50]

    loc_0x803d6fbc: // orphan
         t2 = 0x8692 << 16
         t0 = [t9 + 0]
         t2 -= 0x6300
         a0 = s2
         if                       // unlikely
         s0 = t1 + t2

    loc_0x803d6fd4: // orphan
         v0 = [s1 + 0x38]         // t9
         t4 = 0x8691 << 16
         t4 -= 0x1460
         t3 = s3 << 3
         t5 = t3 + t4
         if                       // unlikely
         [sp + 0x3c] = t5

    loc_0x803d6ff0: // orphan
         lwc1 f18, 0x28, s0
         t7 = [sp + 0x5c]
         t6 = v0 - 1              // t3
         cvt.d.s f6, f18
         [s1 + 0x38] = t6
         add.d f8, f6, f20
         a0 = 0 + 0x3209          // arg1
         cvt.s.d f10, f8

    loc_0x803d7010: // orphan
         if                       // likely
         swc1 f10, 0x28, s0

    loc_0x803d7018: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x5c] = 0

    loc_0x803d7020: // orphan
         a0 = s2
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803d7028: // orphan
         a1 = 0 + 2
         call 0x8003ec34          // 0x8003ec34(-1, 0x2, 0x8, -1)
         a0 = s2
         if                       // unlikely
         a0 = s2

    loc_0x803d703c: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xa

    loc_0x803d7044: // orphan
         t9 = 0x8692 << 16
         t9 = [t9 - 0x5264]
         at = 0 + 3
         t8 = [sp + 0x3c]
         div 0, t9, at
         t0 = lo
         a0 = s0
         if                       // likely
         t1 = t0 & 1              // lo

    loc_0x803d7068: // orphan
         if                       // unlikely
         

    loc_0x803d7070: // orphan
         t1 -= 2

    loc_0x803d7074: // orphan
         t2 = t1 << 2
         t3 = t8 + t2
         call 0x8003ef48          // 0x8003ef48(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [t3 + 2]
         call 0x8003ef60          // 0x8003ef60(-1, 0xffff, 0x8, -1)
         a0 = s0
         goto 0x803d7150
         t1 = [sp + 0x50]

    loc_0x803d7094: // orphan
         v0 = [s1 + 0x38]         // t3
         t4 = [sp + 0x50]
         t6 = 0x8692 << 16
         if                       // unlikely
         

    loc_0x803d70a8: // orphan
         // CODE XREF from fcn.803df490 @ +0x654
         t6 = [t6 - 0x5268]       // t9
         t5 = 0x8692 << 16
         t5 -= 0x6300
         at = , v0 < t6           // lo
         if                       // unlikely
         // CODE XREF from fcn.803df490 @ +0x658
         s0 = t4 + t5

    loc_0x803d70bc: // orphan
         // CODE XREF from fcn.803df490 @ +0x654
         t6 = [t6 - 0x5268]       // t9
         t5 = 0x8692 << 16
         t5 -= 0x6300
         at = , v0 < t6           // lo
         if                       // unlikely
         // CODE XREF from fcn.803df490 @ +0x658
         s0 = t4 + t5

    loc_0x803d70c0: // orphan
         mtc1 v0, f18
         lwc1 f16, 0x28, s0
         [s1 + 0x38] = 0
         cvt.d.w f6, f18
         cvt.d.s f4, f16
         mul.d f8, f20, f6
         sub.d f10, f4, f8
         cvt.s.d f16, f10
         goto 0x803d7120
         swc1 f16, 0x28, s0

    loc_0x803d70e4: // orphan
         mtc1 v0, f18
         lwc1 f16, 0x28, s0
         [s1 + 0x38] = 0
         cvt.d.w f6, f18
         cvt.d.s f4, f16
         mul.d f8, f20, f6
         sub.d f10, f4, f8
         cvt.s.d f16, f10
         goto 0x803d7120
         swc1 f16, 0x28, s0

    loc_0x803d70e8: // orphan
         t7 = 0x8692 << 16
         t7 = [t7 - 0x5268]
         lwc1 f18, 0x28, s0
         t9 = 0x8692 << 16
         mtc1 t7, f4
         cvt.d.s f6, f18
         cvt.d.w f8, f4
         mul.d f10, f20, f8
         sub.d f16, f6, f10
         cvt.s.d f18, f16
         swc1 f18, 0x28, s0
         t9 = [t9 - 0x5268]
         t0 = v0 - t9             // s4
         [s1 + 0x38] = t0

    loc_0x803d7120: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d70e0
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = s2
         call 0x8003f3bc          // 0x8003f3bc(-1, 0x1, 0x8, -1)
         a1 = 0 + 1               // lo
         call 0x8003ec34          // 0x8003ec34(-1, 0x1, 0x8, -1)
         a0 = s2
         if                       // unlikely
         a0 = s2

    loc_0x803d7144: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xa

    loc_0x803d714c: // orphan
         t1 = [sp + 0x50]

    loc_0x803d7150: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d708c
         t2 = [sp + 0x44]
         s3 += 1
         at = 0 + 4
         t8 = t1 + 0x168
         t3 = t2 + 4
         [sp + 0x44] = t3
         [sp + 0x50] = t8
         s1 += 4

    loc_0x803d7170: // orphan
         if                       // likely
         s2 += 0x168

    loc_0x803d7178: // orphan
         v0 = [s4 + 0x38]         // t9

    loc_0x803d717c: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d6a8c, 0x803d6aa8
         // CODE XREF from fcn.803d5fdc @ +0xaf4
         // CODE XREFS from fcn.803c5568 @ 0x803d6d9c, 0x803d6e30
         if                       // likely
         t8 = 0x8692 << 16

    loc_0x803d7184: // orphan
         t4 = [s4 + 0x3c]         // t9
         bnel t4, 0, 0x803d71d8   // likely
         t0 = [sp + 0x74]

    loc_0x803d7190: // orphan
         // CODE XREF from fcn.803df490 @ +0x65c
         t5 = [s4 + 0x40]         // t9
         bnel t5, 0, 0x803d71d8   // likely
         t0 = [sp + 0x74]

    loc_0x803d719c: // orphan
         t6 = [s4 + 0x44]         // t9
         bnel t6, 0, 0x803d71d8   // likely
         // CODE XREF from fcn.803df490 @ +0x660
         t0 = [sp + 0x74]

    loc_0x803d71a8: // orphan
         t7 = [s4 + 0x170]        // t9
         t9 = [sp + 0x74]

    loc_0x803d71b0: // orphan
         if                       // unlikely
         at = , t9 < 0x155

    loc_0x803d71b8: // orphan
         if                       // likely
         v0 = 0 + 1               // lo

    loc_0x803d71c0: // orphan
         [s4 + 0x174] = v0
         [s4 + 0x178] = v0
         [s4 + 0x17c] = v0
         [s4 + 0x180] = v0
         [s4 + 0x170] = v0

    loc_0x803d71d4: // orphan
         t0 = [sp + 0x74]

    loc_0x803d71d8: // orphan
         at = 0 + 0x122
         bnel t0, at, 0x803d71f4  // likely
         ra = [sp + 0x34]

    loc_0x803d71e4: // orphan
         t8 = [t8 - 0x52a8]       // t9
         t1 = 0 + 9
         [t8 + 0] = t1
         ra = [sp + 0x34]

    loc_0x803d71f4: // orphan
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         // CODE XREF from fcn.803df490 @ +0x66c
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         ret                      // ra
         sp += 0x78

    loc_0x803d7360: // orphan
         call 0x87f0a5bc          // 0x87f0a5bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x5e0

    loc_0x803d7368: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x30
         ret
         

    loc_0x803d7380: // orphan
         v0 += 0x19dc
         a1 = [v0 + 0]            // t9
         sp -= 0x18
         [sp + 0x14] = ra
         lwc1 f4, 0x48, a1        // arg2
         lwc1 f6, 0x10, a1        // arg2
         // CODE XREF from fcn.803df490 @ +0x674
         t7 = 0x8692 << 16
         mtc1 0, f18
         sub.s f8, f4, f6
         a3 = 0
         t7 -= 0x5488
         // CODE XREF from fcn.803df490 @ +0x678
         at = 0x4307 << 16
         swc1 f8, 0x48, a1        // arg2
         a1 = [v0 + 0]            // t9

    loc_0x803d73b8: // orphan
         v1 = [a1 + 0x20]         // arg2 // t9
         if                       // unlikely
         a0 = v1 >> 1             // arg1

    loc_0x803d73c4: // orphan
         t6 = a0 << 2             // arg1
         lwc1 f10, 0x48, a1       // arg2
         t6 -= a0                 // arg1
         t6 <<= 2
         v0 = t6 + t7
         swc1 f10
         lwc1 f16, 0x50, a1       // arg2
         t8 = 0 + 1               // lo
         [v0 + 8] = t8

    loc_0x803d73e8: // orphan
         swc1 f16, 4, v0

    loc_0x803d73ec: // orphan
         lwc1 f4, 0x10, a1        // arg2
         c.eq.s f18, f4

    loc_0x803d73f4: // orphan
         
         bc1tl 0x803d743c
         at = 0xc37a << 16
         lwc1 f6, 0x48, a1        // arg2
         mtc1 at, f8
         a2 = 0x8692 << 16

    loc_0x803d7458: // orphan
         t3 = [a1 + 0x1c]         // arg2 // t9
         a3 = 0 + 1               // arg4 // lo
         t3 = [a1 + 0x1c]         // arg2 // t9
         if                       // unlikely
         

    loc_0x803d746c: // orphan
         t4 = [a2 + 0x80]         // arg3 // t9
         a3 = 0 + 1               // arg4 // lo
         t5 = t4 + 1
         [a2 + 0x80] = t5         // arg3

    loc_0x803d747c: // orphan
         beql a3, 0, 0x803d74e0   // unlikely
         ra = [sp + 0x14]

    loc_0x803d7484: // orphan
         v1 = [a1 + 0x20]         // arg2 // t9
         at = 0x8692 << 16
         if                       // unlikely
         v0 = v1 >> 1

    loc_0x803d7494: // orphan
         t6 = v0 << 2
         t6 -= v0
         t6 <<= 2
         at += t6

    loc_0x803d74a4: // orphan
         [at - 0x5480] = 0

    loc_0x803d74a8: // orphan
         v0 = 0x8692 << 16
         v0 -= 0x5bb8
         t7 = [v0 + 0x324]        // t9
         a0 = 0x87f1 << 16
         t8 = t7 - 1
         [v0 + 0x324] = t8
         call 0x87f026e8          // 0x87f026e8(0x87f10000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         a2 = 0x8692 << 16
         a2 -= 0x5d60
         t9 = [a2 + 0x88]
         t0 = t9 - 1
         [a2 + 0x88] = t0
         ra = [sp + 0x14]

    loc_0x803d74e0: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x803d7590: // orphan
         break 6

    loc_0x803d75a4: // orphan
         a0 += 0x1448             // arg1
         [sp + 0x20] = a1
         call 0x87f025b8          // 0x87f025b8(0x100001447, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = t2
         t0 = [sp + 0x30]
         t1 = [sp + 0x24]
         t2 = [sp + 0x2c]         // s4
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x803d75c8: // orphan
         t4 = 0x8692 << 16
         t4 -= 0x5bb8
         // CODE XREF from fcn.803df490 @ +0x68c
         t7 = [t4 + 0x324]
         a3 = 0 + 0xc
         a2 = 0x8691 << 16

    loc_0x803d75dc: // orphan
         t8 = t7 + 1              // lo
         [t4 + 0x324] = t8
         t9 = [t1 + 0xc]
         a2 -= 0x1844             // arg3
         lwc1 f8, 0x40, sp
         unsigned , hi            // lo // lo // t9 // s2
         // CODE XREF from fcn.803df490 @ +0x690
         v1 = 0x8692 << 16
         at = 0 + 1               // lo
         t5 = lo
         t6 = a2 + t5             // arg3
         lwc1 f10, 4, t6
         sub.s f16, f8, f10
         swc1 f16, 0x48, v0
         t7 = [t1 + 0xc]          // t9
         unsigned , hi            // lo // lo // t9 // s2
         t8 = lo
         t9 = a2 + t8             // arg3
         lwc1 f18, 8, t9
         neg.s f4, f18
         swc1 f4, 0x4c, v0
         lwc1 f6, 0x3c, sp
         swc1 f6, 0x50, v0
         v1 = [v1 - 0x5ce8]       // t9
         beql v1, 0, 0x803d7664   // unlikely
         mtc1 t0, f8

    loc_0x803d7640: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803d7648: // orphan
         if                       // unlikely
         t3 = 0 + 3

    loc_0x803d7650: // orphan
         beql v1, t3, 0x803d7754  // unlikely
         mtc1 t0, f10

    loc_0x803d7658: // orphan
         goto 0x803d779c
         v1 = [t1 + 0xc]          // t9

    loc_0x803d7664: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7638
         at = 0x8691 << 16
         lwc1 f16, -0x890, at
         cvt.s.w f10, f8
         t6 = 0x8691 << 16
         t6 = [t6 - 0x668]        // t9
         mul.s f18, f10, f16
         trunc.w.s f4, f18
         mfc1 t0, f4
         if                       // likely
         

    loc_0x803d768c: // orphan
         mtc1 t0, f6
         at = 0x8691 << 16
         lwc1 f0, -0x88c, at
         cvt.s.w f8, f6
         mul.s f10, f8, f0
         trunc.w.s f16, f10
         mfc1 t0, f16
         

    loc_0x803d76ac: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7684
         goto 0x803d7798
         t3 = 0 + 3

    loc_0x803d76b4: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7640
         mtc1 t0, f18
         at = 0x8691 << 16
         lwc1 f6, -0x888, at
         cvt.s.w f4, f18
         t9 = 0x8691 << 16
         t9 = [t9 - 0x668]
         mul.s f8, f4, f6
         trunc.w.s f10, f8
         mfc1 t0, f10
         if                       // likely
         

    loc_0x803d76e0: // orphan
         mtc1 t0, f16
         at = 0x8691 << 16
         lwc1 f0, -0x884, at
         cvt.s.w f18, f16
         mul.s f4, f18, f0
         trunc.w.s f6, f4
         mfc1 t0, f6
         

    loc_0x803d7700: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d76d8
         goto 0x803d7798
         t3 = 0 + 3

    loc_0x803d7708: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7648
         mtc1 t0, f8
         t7 = 0x8691 << 16
         t7 = [t7 - 0x668]        // t9
         cvt.s.w f10, f8
         trunc.w.s f16, f10
         mfc1 t0, f16
         if                       // likely
         

    loc_0x803d7728: // orphan
         mtc1 t0, f18

    loc_0x803d772c: // orphan
         at = 0x8691 << 16
         lwc1 f0, -0x880, at
         cvt.s.w f4, f18
         mul.s f6, f4, f0
         trunc.w.s f8, f6
         mfc1 t0, f8
         

    loc_0x803d7748: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7720
         goto 0x803d7798
         t3 = 0 + 3

    loc_0x803d7754: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7650
         at = 0x8691 << 16
         lwc1 f0, -0x87c, at

    loc_0x803d7798: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d76ac, 0x803d7700, 0x803d7748
         v1 = [t1 + 0xc]          // t9

    loc_0x803d779c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7658
         // CODE XREF from fcn.803d775c @ 0x803d7774
         t5 = 0 - 0x19
         at = 0 + 4
         if                       // unlikely
         t6 = t5 - t2

    loc_0x803d77ac: // orphan
         if                       // unlikely
         // CODE XREF from fcn.803df490 @ +0x69c
         v1 = 0x8691 << 16

    loc_0x803d77b4: // orphan
         goto 0x803d77c8
         v1 = [v1 - 0x668]        // t9

    loc_0x803d77bc: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d77a4, 0x803d77ac
         mtc1 t0, f18

    loc_0x803d77c8: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d77b4
         // CODE XREF from fcn.803df490 @ +0x6a4
         beql v1, 0, 0x803d7808   // unlikely
         mtc1 t0, f10

    loc_0x803d77d0: // orphan
         mtc1 t0, f4
         at = 0x4080 << 16
         mtc1 at, f6

    loc_0x803d77dc: // orphan
         // CODE XREF from fcn.803df490 @ +0x6a8
         cvt.s.w f0, f4
         t7 = 0 + 4
         c.lt.s f0, f6

    loc_0x803d77e8: // orphan
         
         bc1fl 0x803d7838
         swc1 f0, 0x10, v0

    loc_0x803d77f4: // orphan
         // CODE XREF from fcn.803df490 @ +0x6a0
         mtc1 t7, f8
         t0 = 0 + 4

    loc_0x803d77fc: // orphan
         goto 0x803d7834
         cvt.s.w f0, f8

    loc_0x803d7804: // orphan
         mtc1 t0, f10

    loc_0x803d7808: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d77c8
         at = 0x8691 << 16
         lwc1 f16, -0x878, at
         cvt.s.w f0, f10
         t8 = 0 + 4
         c.lt.s f0, f16
         
         bc1fl 0x803d7838

    loc_0x803d7824: // orphan
         swc1 f0, 0x10, v0

    loc_0x803d7828: // orphan
         mtc1 t8, f18
         t0 = 0 + 4
         cvt.s.w f0, f18

    loc_0x803d7834: // orphan
         // CODE XREF from fcn.803d77c0 @ 0x803d77c0
         // CODE XREF from fcn.803c5568 @ 0x803d77fc
         swc1 f0, 0x10, v0
         [v0 + 0x20] = 0
         v1 = [t1 + 0xc]          // t9
         at = 0 + 4
         if                       // unlikely
         

    loc_0x803d784c: // orphan
         if                       // unlikely
         t7 = 0 - 0x19

    loc_0x803d7854: // orphan
         t9 = 0 - 0x3e8
         goto 0x803d7870
         [v0 + 0x1c] = t9

    loc_0x803d7860: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7844
         goto 0x803d7870
         [v0 + 0x1c] = t6

    loc_0x803d7868: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d784c
         t8 = t7 - t2
         [v0 + 0x1c] = t8

    loc_0x803d7870: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d7858, 0x803d7860
         t9 = 0 - 0x4001
         halfword [a1 + 0x42] = t9 // arg2
         t5 = [t1 + 0xc]          // t9
         a0 = a1 + 0x24           // arg2
         unsigned , hi            // lo // lo // t9 // s2
         t6 = lo
         t7 = a2 + t6             // arg3
         lwc1 f4
         swc1 f4, 0x54, a1        // arg2
         t8 = [t1 + 0xc]          // t9
         unsigned , hi            // lo // lo // t9 // s2
         t9 = lo
         t5 = a2 + t9             // arg3

    loc_0x803d78a4: // orphan
         lwc1 f6
         t9 = t2 + 0xd48
         swc1 f6, 0x58, a1        // arg2
         t6 = [t1 + 0xc]          // t9
         unsigned , hi            // lo // lo // t9 // s2
         t7 = lo
         t8 = a2 + t7             // arg3
         lwc1 f8
         [a1 + 0x38] = t9         // arg2
         swc1 f8, 0x5c, a1        // arg2
         [sp + 0x2c] = t2
         [sp + 0x24] = t1
         [sp + 0x30] = t0
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a0
         a3 = 0x8692 << 16
         a0 = [sp + 0x1c]         // t9
         // CODE XREF from fcn.803df490 @ +0x6b4
         a3 = [a3 - 0x6fe0]       // t9
         a1 = 0

    loc_0x803d78f0: // orphan
         call 0x8003f114          // 0x8003f114(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 - 1               // s2
         t0 = [sp + 0x30]
         t1 = [sp + 0x24]
         t2 = [sp + 0x2c]         // s4

    loc_0x803d7904: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d75c0
         a0 = 0x8691 << 16
         a0 += 0x1448

    loc_0x803d790c: // orphan
         // CODE XREF from fcn.803df490 @ +0x6b8
         a1 = [sp + 0x20]
         [sp + 0x30] = t0
         [sp + 0x24] = t1
         call 0x87f025b8          // 0x87f025b8(-1, 0xfe116408, 0x8, -1)
         [sp + 0x2c] = t2
         t0 = [sp + 0x30]
         t1 = [sp + 0x24]
         t2 = [sp + 0x2c]         // s4
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x803d7934: // orphan
         a2 = 0x8692 << 16

    loc_0x803d7938: // orphan
         a2 -= 0x5bb8
         t5 = [a2 + 0x324]        // t9
         mtc1 t0, f4
         lwc1 f10, 0x40, sp
         mtc1 0, f16
         t6 = t5 + 1
         cvt.s.w f6, f4
         [a2 + 0x324] = t6
         swc1 f10, 0x48, v0
         swc1 f16, 0x4c, v0
         lwc1 f18, 0x3c, sp
         at = 0 + 3
         swc1 f6, 0x10, v0
         swc1 f18, 0x50, v0
         v1 = [t1 + 0xc]          // t9
         t8 = 0 - 0x19
         t9 = t8 - t2
         if                       // unlikely
         at = 0 + 4

    loc_0x803d7984: // orphan
         if                       // unlikely
         t5 = 0 - 0x19

    loc_0x803d798c: // orphan
         t7 = 0 - 0x3e8
         goto 0x803d79a8
         [v0 + 0x1c] = t7

    loc_0x803d7998: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d797c
         goto 0x803d79a8
         [v0 + 0x1c] = t9

    loc_0x803d79a0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7984
         t6 = t5 - t2
         [v0 + 0x1c] = t6

    loc_0x803d79a8: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d7990, 0x803d7998
         t7 = [t1 + 0xc]          // t9
         v1 = 0 + 0x24
         v0 = 0x8691 << 16
         unsigned , hi
         v0 -= 0x1aa8
         a0 = a1 + 0x24
         t8 = lo
         t9 = v0 + t8
         lwc1 f8
         swc1 f8, 0x54, a1
         t5 = [t1 + 0xc]          // t9
         unsigned , hi
         t6 = lo

    loc_0x803d79dc: // orphan
         t7 = v0 + t6
         lwc1 f10
         swc1 f10, 0x58, a1
         t8 = [t1 + 0xc]          // t9
         unsigned , hi
         t9 = lo
         t5 = v0 + t9
         lwc1 f16
         swc1 f16, 0x5c, a1
         t6 = [t1 + 0xc]          // t9
         t7 = t6 << 2
         t7 -= t6
         t7 <<= 3
         t7 += t6
         t7 <<= 3
         t8 = t7 + t2
         [a1 + 0x38] = t8
         t9 = [a2 + 0x324]
         [a1 + 0x20] = t9
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a0
         a3 = 0x8692 << 16
         a0 = [sp + 0x1c]         // t9
         a3 = [a3 - 0x6fe0]       // t9
         a1 = 0
         call 0x8003f114          // 0x8003f114(-1, 0x0, 0x8, -1)
         a2 = 0 - 1               // s2

    loc_0x803d7a48: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d792c
         ra = [sp + 0x14]
         sp += 0x48
         ret
         

    loc_0x803d7a88: // orphan
         divu 0, v0, a0           // arg1
         a3 = lo
         t6 = a3 << 3             // arg4 // a2
         t6 += a3                 // arg4
         t6 <<= 2
         t7 += t6
         t7 = [t7 - 0x1a9c]       // t9
         if                       // likely
         

    loc_0x803d7aac: // orphan
         break 7

    loc_0x803d7ab0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7aa4
         a2 = hi
         bnel t7, 0, 0x803d7b8c   // unlikely
         t6 = a3 - 5              // arg4

    loc_0x803d7abc: // orphan
         if                       // likely
         v0 = 0x8692 << 16

    loc_0x803d7ac4: // orphan
         v0 = [v0 - 0x5d3c]       // t9
         t8 = a2 + 0x18           // arg3 // k0
         at = , v0 < a2
         if                       // unlikely
         at = , v0 < t8

    loc_0x803d7ad8: // orphan
         if                       // likely
         t9 = v0 << 2

    loc_0x803d7ae0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7ad0
         goto 0x803d7b00
         v1 = 0

    loc_0x803d7ae8: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7ad8
         t1 = a2 << 2             // arg3 // k0
         t2 = ~t1
         t3 = t9 + t2
         v1 = 0x8691 << 16
         v1 += t3
         v1 = [v1 - 0x1d9c]       // t9

    loc_0x803d7b00: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7ae0
         goto 0x803d7b54
         [sp + 0x44] = v1

    loc_0x803d7b08: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7abc
         at = 0 + 4
         if                       // likely
         v0 = 0x8692 << 16

    loc_0x803d7b14: // orphan
         v0 = [v0 - 0x5d3c]       // t9
         t4 = a2 + 0x18           // arg3 // k0
         at = , v0 < a2
         if                       // unlikely
         at = , v0 < t4

    loc_0x803d7b28: // orphan
         if                       // likely
         t5 = v0 << 2

    loc_0x803d7b30: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7b20
         goto 0x803d7b54
         [sp + 0x44] = 0

    loc_0x803d7b38: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7b28
         t6 = a2 << 2             // arg3 // k0
         t7 = ~t6
         t8 = t5 + t7
         v1 = 0x8691 << 16
         v1 += t8
         v1 = [v1 - 0x1d24]       // t9
         [sp + 0x44] = v1

    loc_0x803d7b54: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d7b00, 0x803d7b0c, 0x803d7b30
         t9 = 0x8691 << 16
         t9 -= 0x1bc8
         t1 = a3 << 4             // arg4
         v1 = [sp + 0x44]         // t9
         s0 = t1 + t9
         t2 = [s0 + 4]            // t9
         t3 = v1 << 2
         a0 = [s0 + 0]            // t9

    loc_0x803d7b74: // orphan
         t4 = t2 + t3
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [t4 + 0]            // t9
         goto fcn.803d7d44        // fcn.803d7d44(-1)
         a0 = v0                  // s4

    loc_0x803d7b8c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7ab4
         at = , unsigned  , t6 < 0xc
         if                       // likely
         t6 <<= 2

    loc_0x803d7b98: // orphan
         at = 0x8691 << 16
         at += t6
         t6 = [at - 0x874]        // t9
         goto t6                  // t9
         

    loc_0x803d7bf0: // orphan
         t9 = v0 << 2
         t2 = t1 + t9
         if                       // likely
         t6 = , signed  t4 >> 1   // t9

    loc_0x803d7c00: // orphan
         at = t4 + 1
         t6 = , signed  at >> 1

    loc_0x803d7c08: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7bf8
         div 0, t6, v0
         t5 = hi
         t7 = t5 << 2
         t8 = ~t7                 // a2
         t1 = t2 + t8
         if                       // likely
         

    loc_0x803d7c24: // orphan
         break 7

    loc_0x803d7c28: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7c1c
         at = 0 - 1               // s2
         if                       // fcn.803d7c30+0x10 // likely
         // CALL XREF from fcn.8019c2fc @ +0x924
         at = 0x8000 << 16

    loc_0x803d7c98: // orphan
         

    loc_0x803d7c9c: // orphan
         break 7

    loc_0x803d7ccc: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7b90
         t6 = 0x8692 << 16
         t6 = [t6 - 0x5d3c]       // t9
         t4 = 0x8691 << 16
         t4 -= 0x1bc8
         t5 = t6 + a2             // arg3
         t3 = a3 << 4             // arg4
         s0 = t3 + t4
         t2 = [s0 + 8]            // t9
         t9 = [s0 + 4]
         a0 = [s0 + 0]            // t9
         if                       // likely
         t7 = , signed  t5 >> 1

    loc_0x803d7cfc: // orphan
         at = t5 + 1
         t7 = , signed  at >> 1

    loc_0x803d7d04: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7cf4
         div 0, t7, t2
         t1 = hi
         t8 = t1 << 2
         if                       // likely
         

    loc_0x803d7d18: // orphan
         break 7

    loc_0x803d7d1c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7d10
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d7d24: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d7d10
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d7d28: // orphan
         if                       // likely
         

    loc_0x803d7d30: // orphan
         break 6

    loc_0x803d7d34: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d7d20, 0x803d7d28
         t3 = t9 + t8

    loc_0x803d7d38: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [t3 + 0]
         a0 = v0                  // s4

    loc_0x803d7db0: // orphan
         [v1 + 0] = t8
         v1 = [a1 + 0]            // arg2 // t9
         t6 = 0xdb06 << 16
         t6 |= 0x3c
         t4 = v1 + 8
         [a1 + 0] = t4            // arg2
         [v1 + 0] = t6
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x34] = v1
         t0 = [sp + 0x34]         // t9
         a1 = 0x800d << 16
         a1 += 0x510
         [t0 + 4] = v0
         v1 = [a1 + 0]            // t9
         t7 = 0xde00 << 16
         t5 = v1 + 8
         [a1 + 0] = t5
         [v1 + 0] = t7
         t2 = [s0 + 0xc]          // t9

    loc_0x803d7e9c: // orphan
           // CALL XREF from fcn.81ac21fc @ +0x38
         v1 = [a1 + 0]            // arg2
         t2 = 0xde00 << 16
         t7 = v1 + 8
         [a1 + 0] = t7            // arg2
         [v1 + 0] = t2
         t1 = [s0 + 0xc]          // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t1
         // CODE XREF from fcn.803d77c0 @ +0x2a8
         ra = [sp + 0x1c]         // t9

    loc_0x803d7ea0: // orphan
         // CODE XREF from fcn.803d7dfc @ 0x803d7e04
         s0 = [sp + 0x18]
         sp += 0x58
         ret                      // ra
         

    loc_0x803d806c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8084
         v0 += 4
         at = , a0 < v1
         beql at, 0, 0x803d8084   // likely
         at = , unsigned  , v0 < a1 // lo

    loc_0x803d8078: // orphan
         at = , unsigned  , v0 < a1 // lo

    loc_0x803d807c: // orphan
         a0 = v1
         at = , unsigned  , v0 < a1 // lo

    loc_0x803d8084: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8074
         bnel at, 0, 0x803d806c   // likely
         v1 = [v0 + 0x28]         // t9

    loc_0x803d808c: // orphan
         v0 = 0x8692 << 16
         t0 = 0x8692 << 16
         a2 = 0x8692 << 16
         a2 -= 0x5d50             // arg3
         t0 -= 0x5498
         v0 -= 0x5d60
         v1 = 0
         a1 = 0 + 1               // arg2 // lo

    loc_0x803d80ac: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d80c4
         t6 = [v0 + 0x28]         // t9
         v0 += 4
         t7 = t0 + v1
         if                       // unlikely
         

    loc_0x803d80c0: // orphan
         [t7 + 0] = a1

    loc_0x803d80c4: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d80b8
         if                       // likely
         v1 += 4

    loc_0x803d80cc: // orphan
         v0 = 0x8692 << 16
         v0 = [v0 - 0x52a8]       // t9
         at = 0 + 4
         a0 = 0x8691 << 16
         a1 = [v0 + 0xc]          // t9
         a0 -= 0x5e0              // arg1
         a2 = 0 + 7               // arg3

    loc_0x803d80e8: // orphan
         t8 = , unsigned  byte [a1 + 0x2180] // arg2 // s4
         bnel t8, at, 0x803d8108  // likely
         t9 = [t0 + 4]

    loc_0x803d80f4: // orphan
         call 0x87f0c930          // 0x87f0c930(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x14
         goto 0x803d8128
         ra = [sp + 0x24]

    loc_0x803d8108: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d80ec
         t1 = [t0 + 8]            // t9
         t2 = [t0 + 0xc]          // t9
         a3 = [t0 + 0]
         [sp + 0x10] = t9
         [sp + 0x14] = t1
         call 0x87f0a098          // 0x87f0a098(-1, 0x442f71dcfe116408, 0x8, 0xf)
         [sp + 0x18] = t2
         ra = [sp + 0x24]

    loc_0x803d8128: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d80fc
         sp += 0x28
         ret                      // ra
         

    loc_0x803d8178: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d898c
         if                       // unlikely
         // CALL XREF from fcn.817aea34 @ +0x15f4
         at = 0 + 1               // lo

    loc_0x803d8180: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803d8188: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803d8190: // orphan
         if                       // unlikely
         t6 = s2 << 2

    loc_0x803d8198: // orphan
         t6 += s2
         t7 = 0x800d << 16
         t7 -= 0x1fa0
         t6 <<= 3
         v0 = 0x8691 << 16
         v0 = [v0 - 0x668]        // t9

    loc_0x803d81b0: // orphan
         s1 = t6 + t7
         goto 0x803d82d8
         v1 = [s3 + 0x78]         // t9

    loc_0x803d81bc: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8178
         t8 = [s6 + 0]            // t9
         t2 = s2 << 2
         t2 += s2
         v0 = [t8 + 0xc]          // t9
         t3 = 0x800d << 16
         t3 -= 0x1fa0
         t9 = , unsigned  byte [v0 + 0x2180] // s4
         t2 <<= 3
         s1 = t2 + t3

    loc_0x803d81e0: // orphan
         if                       // unlikely
         

    loc_0x803d81e8: // orphan
         t0 = , unsigned  byte [v0 + 0x2182] // s4
         t1 = t0 & 1              // lo
         if                       // fcn.803d8988 // fcn.803d8988 // likely
         // CODE XREF from fcn.803c5568 @ 0x803d81e0
         v0 = 0x8691 << 16

    loc_0x803d81f4: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d81e0
         v0 = 0x8691 << 16

    loc_0x803d81f8: // orphan
         v0 = [v0 - 0x668]        // t9
         goto 0x803d82d8
         v1 = [s3 + 0x78]         // t9

    loc_0x803d8204: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8180
         t4 = [s6 + 0]            // t9
         t8 = s2 << 2

    loc_0x803d820c: // orphan
         t8 += s2
         v0 = [t4 + 0xc]          // t9
         t9 = 0x800d << 16
         t9 -= 0x1fa0
         t5 = , unsigned  byte [v0 + 0x2180] // s4
         t8 <<= 3
         s1 = t8 + t9
         if                       // likely
         

    loc_0x803d822c: // orphan
         

    loc_0x803d8230: // orphan
         t6 = , unsigned  byte [v0 + 0x2182] // s4
         t7 = t6 & 2
         if                       // fcn.803d8988 // fcn.803d8988 // likely
         // CODE XREF from fcn.803c5568 @ 0x803d8228
         v0 = 0x8691 << 16

    loc_0x803d823c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8228
         v0 = 0x8691 << 16

    loc_0x803d8240: // orphan
         v0 = [v0 - 0x668]        // t9
         goto 0x803d82d8
         v1 = [s3 + 0x78]         // t9

    loc_0x803d824c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8188
         t0 = [s6 + 0]            // t9
         t4 = s2 << 2
         t4 += s2
         v0 = [t0 + 0xc]          // t9
         t5 = 0x800d << 16
         t5 -= 0x1fa0
         t1 = , unsigned  byte [v0 + 0x2180] // s4
         t4 <<= 3
         s1 = t4 + t5
         if                       // likely
         

    loc_0x803d8278: // orphan
         t2 = , unsigned  byte [v0 + 0x2182] // s4
         t3 = t2 & 4

    loc_0x803d8280: // orphan
         if                       // fcn.803d8988 // fcn.803d8988 // likely
         // CODE XREF from fcn.803c5568 @ 0x803d8270
         v0 = 0x8691 << 16

    loc_0x803d8284: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8270
         v0 = 0x8691 << 16

    loc_0x803d8288: // orphan
         v0 = [v0 - 0x668]        // t9
         goto 0x803d82d8
         v1 = [s3 + 0x78]         // t9

    loc_0x803d8294: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8190
         t6 = [s6 + 0]            // t9

    loc_0x803d8298: // orphan
         t0 = s2 << 2
         t0 += s2
         v0 = [t6 + 0xc]          // t9
         t1 = 0x800d << 16
         t1 -= 0x1fa0
         t7 = , unsigned  byte [v0 + 0x2180] // s4
         t0 <<= 3
         s1 = t0 + t1
         if                       // likely
         

    loc_0x803d82c0: // orphan
         t8 = , unsigned  byte [v0 + 0x2182] // s4
         t9 = t8 & 8              // a2
         if                       // fcn.803d8988 // fcn.803d8988 // likely
         // CODE XREF from fcn.803c5568 @ 0x803d82b8
         v0 = 0x8691 << 16

    loc_0x803d82cc: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d82b8
         v0 = 0x8691 << 16

    loc_0x803d82d0: // orphan
         v0 = [v0 - 0x668]        // t9
         v1 = [s3 + 0x78]         // t9

    loc_0x803d82d8: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d81b4, 0x803d81fc, 0x803d8244, 0x803d828c
         t2 = , unsigned  halfword [s1 + 8]
         at = 0xffff << 16
         at |= 0x7fff
         t3 = t2 & at
         if                       // unlikely
         halfword [s1 + 8] = t3

    loc_0x803d82ec: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d81b4, 0x803d81fc, 0x803d8244, 0x803d828c
         t2 = , unsigned  halfword [s1 + 8]
         at = 0xffff << 16
         at |= 0x7fff
         t3 = t2 & at
         if                       // unlikely
         halfword [s1 + 8] = t3

    loc_0x803d82f0: // orphan
         a0 = 0 + 0x15            // arg1
         a1 = 0 + 0x12            // arg2
         a2 = 0 + 0xf             // arg3
         goto 0x803d8314
         a3 = 0 + 0xc             // arg4

    loc_0x803d8304: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d82e8
         a0 = 0 + 0x19            // arg1
         a1 = 0 + 0x15            // arg2
         a2 = 0 + 0x12            // arg3
         a3 = 0 + 0xe             // arg4

    loc_0x803d8314: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d82fc
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x803d831c: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803d8324: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x803d833c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8314
         t4 = [s3 + 0x80]         // t9
         beql t4, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d8348: // orphan
         t5 = [s5 + 0x324]        // lo
         v0 = s2 << 2

    loc_0x803d8350: // orphan
         s0 = s5 + v0
         if                       // unlikely
         v1 = s3 + v0

    loc_0x803d8358: // orphan
         v1 = s3 + v0
         t6 = [s3 + 0x84]         // t9
         bnel t6, 0, 0x803d83dc   // likely
         t5 = [s0 + 0x334]        // t9

    loc_0x803d8368: // orphan
         t7 = [s0 + 0x334]        // t9
         t8 = [v1 + 0x10]         // t9
         beql t7, t8, 0x803d898c  // likely
         s2 += 1

    loc_0x803d8378: // orphan
         t0 = [v1 + 0]            // t9

    loc_0x803d83dc: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8360
         t6 = [v1 + 0x10]         // t9
         beql t5, t6, 0x803d898c  // likely
         s2 += 1

    loc_0x803d83e8: // orphan
         t8 = [v1 + 0]            // t9
         at = , t8 < 4
         bnel at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d83f8: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = [s0 + 0x344]
         div 0, v0, t9

    loc_0x803d8408: // orphan
         t0 = hi
         if                       // likely
         

    loc_0x803d8414: // orphan
         break 7

    loc_0x803d8418: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d840c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d8424: // orphan
         if                       // likely
         

    loc_0x803d842c: // orphan
         break 6

    loc_0x803d8430: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d841c, 0x803d8424
         bnel t0, 0, 0x803d898c   // likely
         s2 += 1

    loc_0x803d8438: // orphan
         t1 = , unsigned  halfword [s1 + 8]
         t2 = t1 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t2

    loc_0x803d84d0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d831c
         t2 = [s3 + 0x80]         // t9
         beql t2, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d84f4: // orphan
         bnel t4, 0, 0x803d8570   // likely
         t3 = [s0 + 0x334]        // t9

    loc_0x803d84fc: // orphan
         t5 = [s0 + 0x334]        // t9
         t6 = [v1 + 0x10]         // t9
         beql t5, t6, 0x803d898c  // likely
         s2 += 1

    loc_0x803d850c: // orphan
         t8 = [v1 + 0]            // t9
         at = , a1 < t8
         beql at, 0, 0x803d898c   // likely
         s2 += 1

    loc_0x803d851c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = [s0 + 0x344]
         div 0, v0, t9
         t0 = hi
         if                       // likely
         

    loc_0x803d8538: // orphan
         break 7

    loc_0x803d853c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8530
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d8548: // orphan
         if                       // likely
         

    loc_0x803d8550: // orphan
         break 6

    loc_0x803d8554: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8540, 0x803d8548
         bnel t0, 0, 0x803d898c   // likely
         s2 += 1

    loc_0x803d855c: // orphan
         t1 = , unsigned  halfword [s1 + 8]
         t2 = t1 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t2

    loc_0x803d8570: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d84f4
         t4 = [v1 + 0x10]         // t9
         beql t3, t4, 0x803d898c  // unlikely
         s2 += 1

    loc_0x803d857c: // orphan
         t6 = [v1 + 0]            // t9
         at = , t6 < 4
         bnel at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d858c: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = [s0 + 0x344]        // t9
         div 0, v0, t7
         t8 = hi
         if                       // likely
         

    loc_0x803d85a8: // orphan
         break 7

    loc_0x803d85ac: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d85a0
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d85b8: // orphan
         if                       // likely
         

    loc_0x803d85c0: // orphan
         break 6

    loc_0x803d85c4: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d85b0, 0x803d85b8
         bnel t8, 0, 0x803d898c   // likely
         s2 += 1

    loc_0x803d85cc: // orphan
         t9 = , unsigned  halfword [s1 + 8]
         t0 = t9 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t0

    loc_0x803d85d8: // orphan
         halfword [s1 + 8] = t0
         // CODE XREF from fcn.803d8380 @ +0x168
         v0 = [v1 + 0x10]         // t9
         bnel v0, 0, 0x803d85f8   // likely
         t3 = [s0 + 0x334]        // t9

    loc_0x803d85e8: // orphan
         t1 = , unsigned  halfword [s1 + 8]
         t2 = t1 | 0x8000

    loc_0x803d85f0: // orphan
         halfword [s1 + 8] = t2
         t3 = [s0 + 0x334]        // t9

    loc_0x803d85f8: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d85e0
         beql t3, v0, 0x803d898c  // unlikely
         s2 += 1

    loc_0x803d8600: // orphan
         t5 = [v1 + 0]            // t9
         at = , t5 < 4
         bnel at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d8610: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = [s0 + 0x344]        // t9
         div 0, v0, t6
         if                       // likely
         

    loc_0x803d8628: // orphan
         break 7

    loc_0x803d862c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8620
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d8638: // orphan
         if                       // likely
         

    loc_0x803d8640: // orphan
         break 6

    loc_0x803d8644: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8630, 0x803d8638
         t7 = hi
         at = , t7 < 2            // lo
         beql at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d8654: // orphan
         t8 = , unsigned  halfword [s1 + 8] // s4
         t9 = t8 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t9

    loc_0x803d86b4: // orphan
         
         t7 = [s0 + 0x344]        // t9
         div 0, v0, t7
         t8 = hi
         if                       // likely
         

    loc_0x803d86cc: // orphan
         break 7

    loc_0x803d86d0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d86c4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d86dc: // orphan
         if                       // likely
         

    loc_0x803d86e4: // orphan
         break 6

    loc_0x803d86e8: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d86d4, 0x803d86dc
         bnel t8, 0, 0x803d898c   // likely
         s2 += 1

    loc_0x803d86f0: // orphan
         t9 = , unsigned  halfword [s1 + 8]
         t0 = t9 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t0

    loc_0x803d8780: // orphan
         t0 = t9 | 0x8000
         halfword [s1 + 8] = t0
         t1 = [s0 + 0x334]        // t9
         // CODE XREF from fcn.803d8380 @ +0x3f4
         beql t1, v0, 0x803d898c  // unlikely
         s2 += 1

    loc_0x803d8794: // orphan
         t3 = [v1 + 0]            // t9
         at = , t3 < 4
         bnel at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d87a4: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t4 = [s0 + 0x344]        // t9
         div 0, v0, t4
         if                       // likely
         

    loc_0x803d87bc: // orphan
         break 7

    loc_0x803d87c0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d87b4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d87cc: // orphan
         if                       // likely
         

    loc_0x803d87d4: // orphan
         break 6

    loc_0x803d87d8: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d87c4, 0x803d87cc
         t5 = hi
         at = , t5 < 2            // lo
         beql at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d87e8: // orphan
         t6 = , unsigned  halfword [s1 + 8]
         t7 = t6 | 0x8000
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t7

    loc_0x803d88fc: // orphan
         goto fcn.803d8988        // fcn.803d8988(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s1 + 8] = t6

    loc_0x803d8948: // orphan
         if                       // likely
         

    loc_0x803d8950: // orphan
         break 7

    loc_0x803d8954: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8948
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x803d8960: // orphan
         if                       // likely
         

    loc_0x803d8968: // orphan
         break 6

    loc_0x803d896c: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8958, 0x803d8960
         t3 = hi
         at = , t3 < 2            // lo
         beql at, 0, 0x803d898c   // unlikely
         s2 += 1

    loc_0x803d897c: // orphan
         t4 = , unsigned  halfword [s1 + 8]
         t5 = t4 | 0x8000
         halfword [s1 + 8] = t5

    loc_0x803d898c: // orphan
         // XREFS(41)
         if                       // likely
         

    loc_0x803d8994: // orphan
         ra = [sp + 0x34]         // t9
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]         // t9
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // s4
         s6 = [sp + 0x30]
         ret                      // t9
         sp += 0x38

    loc_0x803d8a68: // orphan
         at = 0 + 2
         if                       // unlikely
         t0 = 0 + 2

    loc_0x803d8a74: // orphan
         at = 0 + 3
         if                       // unlikely
         t6 = 0 + 3

    loc_0x803d8a80: // orphan
         goto 0x803d8aa4
         

    loc_0x803d8a98: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8a6c
         goto 0x803d8aa4
         [sp + 0x34] = t0

    loc_0x803d8aa0: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8a78
         [sp + 0x34] = t6

    loc_0x803d8aa4: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8a80
         // CODE XREFS from fcn.803c5568 @ 0x100, 0x108, 0x803d8a98
         a3 = [a3 - 0x5d18]       // arg4 // t9
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a3

    loc_0x803d8ab0: // orphan
         a3 = [sp + 0x30]         // t9
         at = 0 + 4
         t0 = [sp + 0x34]
         if                       // likely
         t8 = [sp + 0x2f8]

    loc_0x803d8ac4: // orphan
         t9 = t8 << 2
         t2 = 0x8692 << 16
         t2 += t9
         t2 = [t2 - 0x5d38]       // t9

    loc_0x803d8ad4: // orphan
         at = 0 + 0x3c
         v1 = 0
         if                       // likely
         t3 = t0 << 2

    loc_0x803d8ae4: // orphan
         at = 0 + 0xc8
         div 0, v0, at

    loc_0x803d8aec: // orphan
         t3 += t0
         t3 <<= 2
         t3 += t0
         a1 = hi
         t3 <<= 3
         t4 = sp + 0x58
         a0 = t3 + t4
         a2 = 0 + 0x1c

    loc_0x803d8b0c: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8b64
         t5 = [a0 + 0x8c]         // t9
         at = , a1 < t5
         beql at, 0, 0x803d8b64   // likely
         v1 += 4

    loc_0x803d8b1c: // orphan
         call 0x86904d48          // 0x86904d48(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v1
         v1 = [sp + 0x20]
         t1 = sp + 0x3c
         a0 = v1 + t1
         t7 = [a0 + 0]
         t6 = t7 + v0             // s4
         if                       // likely
         

    loc_0x803d8b40: // orphan
         goto 0x803d8c0c
         v0 = 0 + 1               // lo

    loc_0x803d8b48: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8b38
         call 0x86904d48          // 0x86904d48(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a0
         a0 = [sp + 0x24]         // t9
         t8 = [a0 + 0]
         goto 0x803d8c0c
         v0 = t8 + v0

    loc_0x803d8b64: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8b14
         if                       // likely
         a0 += 4

    loc_0x803d8b6c: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8abc, 0x803d8adc
         at = 0 + 0xc8

    loc_0x803d8b70: // orphan
         div 0, v0, at
         t9 = t0 << 2
         t9 += t0
         t9 <<= 2
         t2 = a3 << 3
         t2 -= a3
         t9 += t0
         t9 <<= 3
         t2 <<= 2
         a1 = hi
         t3 = t9 + t2

    loc_0x803d8b9c: // orphan
         t4 = sp + 0x58
         a0 = t3 + t4
         v0 = 0 + 0x1c
         // CODE XREF from fcn.80f5cb4c @ +0x148
         v1 = 0

    loc_0x803d8bac: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8c04
         t5 = [a0 + 0]
         at = , a1 < t5
         beql at, 0, 0x803d8c04   // likely
         v1 += 4

    loc_0x803d8bbc: // orphan
         call 0x86904d48          // 0x86904d48(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v1
         v1 = [sp + 0x20]
         t1 = sp + 0x3c
         a0 = v1 + t1
         t7 = [a0 + 0]
         t6 = t7 + v0             // s4
         if                       // likely
         

    loc_0x803d8be0: // orphan
         goto 0x803d8c0c
         v0 = 0 + 1               // lo

    loc_0x803d8be8: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8bd8
         call 0x86904d48          // 0x86904d48(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a0
         a0 = [sp + 0x24]         // t9
         t8 = [a0 + 0]
         goto 0x803d8c0c
         v0 = t8 + v0

    loc_0x803d8c04: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8bb4
         if                       // likely
         a0 += 4

    loc_0x803d8c0c: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8b40, 0x803d8b58, 0x803d8be0, 0x803d8bf8
         ra = [sp + 0x14]         // t9
         sp += 0x2f8
         ret                      // t9
         

    loc_0x803d8c68: // orphan
         v0 = [v1 + 0x330]        // t9
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x803d8c78: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x803d8c80: // orphan
         if                       // unlikely
         t8 = 0 + 1               // lo

    loc_0x803d8c88: // orphan
         goto 0x803d8e58
         

    loc_0x803d8c90: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x803d8c70, 0x803d8c78
         goto 0x803d8e58
         [sp + 0x1c] = 0

    loc_0x803d8c98: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8c80
         goto 0x803d8e58
         [sp + 0x1c] = t8

    loc_0x803d8cd8: // orphan
         // CODE XREF from fcn.803d8988 @ +0x338
         goto 0x803d8e58
         [sp + 0x1c] = t9

    loc_0x803d8d24: // orphan
         t4 += t3
         t4 = [t4 - 0x16d8]       // t9
         at = , unsigned  , t4 < 0x10
         if                       // likely
         t4 <<= 2

    loc_0x803d8d38: // orphan
         at = 0x8691 << 16

    loc_0x803d8df0: // orphan
         if                       // unlikely
         at = 0 + 6

    loc_0x803d8df8: // orphan
         if                       // unlikely
         t9 = 0 + 2

    loc_0x803d8e00: // orphan
         goto 0x803d8e58
         

    loc_0x803d8e08: // orphan
         // CODE XREFS from fcn.803c5568 @ 0x9c, 0xa4, 0x803d8df0
         goto 0x803d8e58
         [sp + 0x1c] = 0

    loc_0x803d8e10: // orphan
         // CODE XREF from fcn.803c5568 @ 0x803d8df8
         goto 0x803d8e58
         [sp + 0x1c] = t9

    loc_0x803d8e58: // orphan
         // XREFS(24)
         call 0x8690c6c4          // 0x8690c6c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x1c]         // t9

    loc_0x803d8e60: // orphan
         ra = [sp + 0x14]         // t9
         v0 = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // t9
         

    loc_0x803d8eec: // orphan
         a1 |= 0x3243             // arg2
         a2 = sp + 0x24           // arg3
         call 0x87f0a6c8          // 0x87f0a6c8(-1, 0x442f71dcfe11764b, 0x178024, -1)
         a3 = sp + 0x20
         a0 = 0x8691 << 16

    loc_0x803d8f00: // orphan
         a1 = 0x4e4d << 16
         a1 |= 0x3343
         a0 = [a0 - 0x53c]        // t9
         a2 = sp + 0x24
         call 0x87f0a6c8          // 0x87f0a6c8(-1, 0x4e4d3343, 0x178024, -1)
         a3 = sp + 0x20
         goto 0x803d8f94          // fcn.803d8e8c+0x108
         ra = [sp + 0x14]         // t9

    loc_0x803d908c: // orphan
         a1 = 0
         t6 = 0 + 0x28
         [sp + 0x14] = t6
         a0 = 0 + 0x65            // arg1
         a1 = 0 + 0x6f            // arg2
         a2 = 0 + 0x28            // arg3
         a3 = 0 + 0x28            // arg4
         [sp + 0x10] = v0
         call 0x80044734          // 0x80044734(0x65, 0x6f, 0x28, 0x28)
         [sp + 0x18] = 0
         a0 = 0x8691 << 16
         a0 = [a0 - 0x620]        // t9
         call 0x8004410c          // 0x8004410c(-1, 0x6f, 0x28, 0x28)
         a1 = 0 + 1               // lo
         t7 = 0 + 0x28
         [sp + 0x14] = t7
         a0 = 0 + 0xb3
         a1 = 0 + 0x6f
         a2 = 0 + 0x28
         a3 = 0 + 0x28
         [sp + 0x10] = v0
         call 0x80044734          // 0x80044734(0xb3, 0x6f, 0x28, 0x28)
         [sp + 0x18] = 0
         v0 = [s0 + 0]
         t0 = 0x8009 << 16
         t0 += 0x4f50
         t8 = v0 + 8
         [s0 + 0] = t8

    loc_0x803d9198: // orphan
         a0 = 0x8691 << 16
         a0 = [a0 - 0x620]        // arg1 // t9
         call 0x8004410c          // 0x8004410c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         t6 = 0 + 0x28
         [sp + 0x14] = t6
         a0 = 0 + 0xda
         a1 = 0 + 0x6f
         a2 = 0 + 0x28
         a3 = 0 + 0x28
         [sp + 0x10] = v0
         call 0x80044734          // 0x80044734(0xda, 0x6f, 0x28, 0x28)
         [sp + 0x18] = 0
         v0 = [s0 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4f50
         t7 = v0 + 8
         [s0 + 0] = t7
         t8 = 0xde00 << 16
         [v0 + 0] = t8
         [v0 + 4] = t9

    loc_0x803d92b4: // orphan
         at += t8
         t8 = [at - 0x7dc]        // t9
         goto t8                  // t9
         

    loc_0x803d93f4: // orphan
         t9 = [at - 0x7b8]
         goto t9
         

    loc_0x803d9560: // orphan
         lwc1 f18, 0x21c, a0      // arg1
         swc1 f18, 0x50, t0
         t2 = [v1 + 0]            // t9
         t1 = halfword [a0 + 0x188]
         ret                      // ra
         halfword [t2 + 0x44] = t1

    loc_0x803d95bc: // orphan
         swc1 f10, 0x48, v0
         t7 = [v1 + 0]            // t9
         lwc1 f16, 0x238, a0      // arg1
         swc1 f16, 0x4c, t7
         t8 = [v1 + 0]            // t9
         lwc1 f18, 0x23c, a0      // arg1
         swc1 f18, 0x50, t8
         t0 = [v1 + 0]            // t9
         t9 = halfword [a0 + 0x188]
         ret                      // ra
         halfword [t0 + 0x44] = t9

    loc_0x803d9624: // orphan
         a0 -= 0x6300             // arg1
         lwc1 f10, 0x38c, a0      // arg1
         swc1 f10, 0x48, v0
         t5 = [v1 + 0]            // t9
         lwc1 f16, 0x390, a0      // arg1
         swc1 f16, 0x4c, t5
         t6 = [v1 + 0]            // t9
         lwc1 f18, 0x394, a0      // arg1
         swc1 f18, 0x50, t6
         t8 = [v1 + 0]            // t9
         t7 = halfword [a0 + 0x2f0]
         ret                      // ra
         halfword [t8 + 0x44] = t7

}

*/
