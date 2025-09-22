/*
 * Function: 0x8046e92c
 * ROM Offset: 0x0036f92c
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.8046e92c (int esi, int edx) {
if            // unlikely
if            // unlikely
// } else {
// } else {
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
if            // likely
// } else {
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
if            // likely
// do {
// } while (?);
// } while (?);
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// } else {
if            // unlikely
if            // unlikely
}
return eax;
if            // unlikely
if            // unlikely
// } else {
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
// do {
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.8046e92c (int esi, int edx) {
    loc_0x8046e92c:
        if            // unlikely
        if            // unlikely
            
    loc_0x804705e4:
        a3 = [sp + 0x34]
        halfword [a3 + 0] = v0 // arg4
        v1 = halfword [s0 + 2]
        t8 = [sp + 0x20]
        at = , t8 < v1
        bnel at, 0, 0x80470688 // likely
        ra = [sp + 0x1c]
            
    loc_0x80470688:
        s0 = [sp + 0x14]
        s1 = [sp + 0x18]
        ret
        sp += 0x28
         // } else {
    loc_0x80470600:
        t9 = , unsigned  halfword [s0 + 0]
        bnel t9, 0, 0x80470678 // unlikely
        t6 = halfword [s1 + 0]
         // } else {
        }
        return eax;
        goto loc_0x8046e938
    loc_0x8046e944:
        if            // unlikely
        if            // unlikely
            
    loc_0x8047063c:
        beql at, 0, 0x80470688 // likely
        ra = [sp + 0x1c]
    loc_0x80470644:
        goto 0x80470684
        halfword [s1 + 0] = v0
         // do {
    loc_0x80470684:
        // CODE XREFS from fcn.8046e92c @ 0x80470644, 0x8047066c
        ra = [sp + 0x1c]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e950
    loc_0x8046e95c:
        if            // unlikely
        if            // unlikely
            
    loc_0x80470754:
        t1 = halfword [a1 + 8]
         // do {
    loc_0x80470758:
        lwc1 f16      // arg1
        mtc1 t1, f10
        0x80470760
        cvt.s.w f0, f10
        c.lt.s f0, f16
        0x8047076c
        bc1f 0x8047077c
        0x80470774
        swc1 f0       // arg1
        ret
        0x80470780
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e968
    loc_0x8046e974:
        if            // unlikely
        if            // unlikely
            
    loc_0x8047090c:
        goto 0x8047091c
        t4 = , unsigned  byte [v1 + 3]
         // do {
    loc_0x8047091c:
        // CODE XREF from fcn.8046e92c @ 0x8047090c
        t9 = v0 + 1
        bnel t9, t4, 0x80470950 // likely
        t9 = [s1 + 4]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e980
    loc_0x8046e98c:
        if            // unlikely
        if            // unlikely
            
    loc_0x80470ac4:
        lwc1 f0, 0x1c, s0
        cvt.s.w f16, f10
        mul.s f12, f8, f14
        0x80470ad0
        mul.s f2, f16, f14
        c.lt.s f0, f2
        0x80470adc
        bc1f 0x80470b0c
        0x80470ae4
        add.s f18, f0, f12
        swc1 f18, 0x1c, s0
        lwc1 f4, 0x1c, s0
        c.lt.s f2, f4
        0x80470af8
        bc1f 0x80470b3c
        0x80470b00
        goto 0x80470b3c
        swc1 f2, 0x1c, s0
         // do {
    loc_0x80470b3c:
        // CODE XREF from fcn.8046e92c @ 0x80470b04
        call 0x84101af4 // 0x84101af4(0x0, 0x0, 0x0, 0x0)
        a1 = a2
        a2 = [sp + 0xa8]
        v1 = [a2 + 0x10]
        beql v1, 0, 0x80470f58 // unlikely
        a0 = [sp + 0x3c]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e998
    loc_0x8046e9a4:
        if            // unlikely
        if            // unlikely
            
    loc_0x80470c7c:
        beql v0, 0, 0x80470cd8 // likely
        t3 = [sp + 0x84]
            
    loc_0x80470cd8:
        a1 = s0
        if            // likely
        a0 = t3
            
    loc_0x80470d5c:
        a2 = [sp + 0x90]
        beql a2, 0, 0x80470f38 // likely
        a2 = [sp + 0xa8]
            
    loc_0x80470f38:
        a0 = s0
        t3 = [a2 + 0x10]
        v0 = [t3 + 8]
        beql v0, 0, 0x80470f58 // unlikely
        a0 = [sp + 0x3c]
            
    loc_0x80470f58:
        call 0x81100054 // "P@" // 0x81100054(0x0, 0x0, 0x0, 0x0)
        a1 = 1 << 16
        beql v0, 0, 0x80470f74 // likely
        t4 = [sp + 0xa8]
            
    loc_0x80470f74:
        a0 = [sp + 0x3c]
        t5 = [t4 + 0x14]
        beql t5, 0, 0x804713d0 // unlikely
        ra = [sp + 0x24]
            
    loc_0x804713d0:
        s0 = [sp + 0x20]
        sp += 0xb0
        ret
        0x804713dc
         // } else {
    loc_0x80470f84:
        call 0x81100054 // "P@" // 0x81100054(0x0, 0x0, 0x0, 0x0)
        a1 = 0 + 2
        beql v0, 0, 0x80470fc8 // likely
        t2 = [sp + 0xa8]
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e9b0
    loc_0x8046e9bc:
        if            // unlikely
        if            // unlikely
            
    loc_0x80470e48:
        at = 0 + 0x64
        v0 = halfword [s0 + 0x60]
        bnel v1, at, 0x80470e8c // likely
        mtc1 v1, f6
            
    loc_0x80470e8c:
        at = 0x4f80 << 16
        if            // likely
        cvt.s.w f8, f6
            
    loc_0x80470ea4:
        at = 0x42c8 << 16
        mtc1 at, f4
        at = 0x8419 << 16
        lwc1 f16, -0x7458, at
        div.s f10, f8, f4
        mtc1 v0, f18
        0x80470ebc
        cvt.s.w f8, f18
        lwc1 f18, 0x48, s0
        mul.s f6, f10, f16
        lwc1 f10, 0xac, sp
        mul.s f4, f6, f8
        0x80470ed4
        mul.s f16, f4, f10
        add.s f6, f18, f16
         // do {
    loc_0x80470ee0:
        swc1 f6, 0x48, s0
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e9c8
    loc_0x8046e9d4:
        if            // unlikely
        if            // unlikely
            
    loc_0x8047109c:
        t7 = , unsigned  byte [v1 + 0]
        byte [s0 + 0x84] = t7
        t8 = , unsigned  byte [v1 + 1]
        byte [s0 + 0x85] = t8
        t9 = , unsigned  byte [v1 + 2]
        byte [s0 + 0x86] = t9
        t2 = , unsigned  byte [v1 + 3]
        byte [s0 + 0x87] = t2
        v0 = [a1 + 8]
         // do {
    loc_0x804710c0:
        beql v0, 0, 0x80471128 // likely
        t2 = [sp + 0xa8]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e9e0
    loc_0x8046e9ec:
        if            // unlikely
        if            // unlikely
            
    loc_0x804712f0:
        bnel t6, 0, 0x804713d0 // unlikely
        ra = [sp + 0x24]
    loc_0x804712f8:
        t7 = , unsigned  byte [s0 + 0x7f]
        t8 = , unsigned  byte [v0 + 3]
        a0 = [sp + 0x3c]
        a1 = 0 + 0x200
        at = , t7 < t8
        bnel at, 0, 0x804713d0 // unlikely
        ra = [sp + 0x24]
    loc_0x80471314:
        call 0x81100074 // 0x81100074(0x0, 0x0, 0x0, 0x0)
        [sp + 0x40] = v0
        if            // unlikely
        a2 = [sp + 0x40]
            
    loc_0x8047133c:
        a0 = s0 + 0x14
        a1 = 0 + 0x10
        call 0x81100020 // 0x81100020(0x14, 0x10, 0x0, 0x0)
        [sp + 0x40] = a2
        a2 = [sp + 0x40]
         // do {
    loc_0x80471350:
        v0 = , unsigned  byte [s0 + 0x87]
        v1 = , unsigned  byte [a2 + 1]
        a1 = 0 + 0x1000
        at = , v0 < v1
        beql at, 0, 0x80471388 // likely
        at = , v1 < v0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046e9f8
    loc_0x8046ea04:
        if            // unlikely
        if            // unlikely
            
    loc_0x8047141c:
        t9 -= 0x36a8
        t8 = t7 << 2
        t8 -= t7
        t8 <<= 2
        call 0x8003c9b8 // 0x8003c9b8(0x0, 0x0, 0x0, 0x0)
        a2 = t8 + t9
        ra = [sp + 0x14]
        sp += 0x18
        ret
        0x80471440
         // } else {
    loc_0x8046ea10:
        if            // unlikely
        if            // unlikely
        }
        return eax;
    loc_0x8046ea1c:
        if            // unlikely
        if            // unlikely
            
    loc_0x804715b4:
        v1 = [a0 + 0xc] // arg1
        a2 = a0
        v0 = [a0 + 0x10] // arg1
        beql v1, 0, 0x80471660 // unlikely
        ra = [sp + 0x14]
            
    loc_0x80471660:
        // CODE XREF from fcn.8046e92c @ 0x80471638
        sp += 0x20
        ret
        0x80471668
         // } else {
    loc_0x804715c8:
        beql v0, 0, 0x80471660 // likely
        ra = [sp + 0x14]
         // } while (?);
        }
        return eax;
        goto loc_0x8046ea28
    loc_0x8046ea34:
        if            // unlikely
        if            // unlikely
            
    loc_0x8047167c:
        [sp + 0x28] = s2
        [sp + 0x24] = s1
        s0 = 0x8419 << 16
        mtc1 at, f20
        [sp + 0x2c] = ra
        s0 = [s0 - 0x36b0]
        s1 = 0
        s2 = 0 + 0x12c
         // do {
    loc_0x8047169c:
        t6 = byte [s0 + 0x98]
        beql t6, 0, 0x804717a8 // unlikely
        s1 += 1
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046ea40
    loc_0x8046ea4c:
        if            // unlikely
        if            // unlikely
            
    loc_0x80471824:
        swl t0, 0xc, sp
        swr t0, 0xf, sp
        t0 = , unsigned  halfword [s0 + 0x6e]
        a3 = [sp + 0xc]
        halfword [sp + 0x10] = t0
        lwc1 f4, 0x18, s0
        call 0x841043ac // 0x841043ac(0x0, 0x0, 0x0, 0x800a7e80)
        swc1 f4, 0x14, sp
        goto 0x804719b8
        ra = [sp + 0x24]
         // do {
    loc_0x804719b8:
        // CODE XREFS from fcn.8046e92c @ 0x80471844, 0x804718c4, 0x80471900
        s0 = [sp + 0x20]
        sp += 0x28
        ret
        0x804719c4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8046ea58
    loc_0x8046ea64:
        if            // unlikely
        if            // unlikely
            
    loc_0x804718ec:
        lwc1 f10, 0x18, s0
        swc1 f10, 0x10, sp
        t9 = halfword [s0 + 0x6e]
        call 0x84104668 // 0x84104668(0x0, 0x0, 0x0, 0x0)
        [sp + 0x14] = t9
        goto 0x804719b8
        ra = [sp + 0x24]
    loc_0x80470678: // orphan
             t7 = halfword [a3 + 0]
             t8 = t6 + t7
             halfword [s1 + 0] = t8

    loc_0x8047060c: // orphan
         v0 = halfword [s0 + 6]
         v1 = halfword [s1 + 0]
         if                       // unlikely
         at = , v0 < v1

    loc_0x8047061c: // orphan
         beql at, 0, 0x80470650   // likely
         t3 = halfword [a3 + 0]

    loc_0x80470650: // orphan
         t4 = v1 + t3
         halfword [s1 + 0] = t4
         t5 = halfword [s1 + 0]
         v0 = halfword [s0 + 6]
         at = , v0 < t5
         beql at, 0, 0x80470688   // likely
         ra = [sp + 0x1c]

    loc_0x8047066c: // orphan
         goto 0x80470684
         halfword [s1 + 0] = v0

    loc_0x80470624: // orphan
         t0 = halfword [a3 + 0]
         t1 = v1 - t0
         halfword [s1 + 0] = t1
         t2 = halfword [s1 + 0]
         v0 = halfword [s0 + 6]
         at = , t2 < v0

    loc_0x80470640: // orphan
         ra = [sp + 0x1c]

    loc_0x80470870: // orphan
         lwc1 f4, 0x24, sp
         mul.s f10, f18, f4
         swc1 f10, 0x18, s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x28
         ret
         

    loc_0x80470950: // orphan
         v0 = t2 << 1
         t0 = v0 + t3
         v1 = t9 + v0
         a2 = halfword [v1 + 0]
         a3 = halfword [v1 + 2]
         a0 = halfword [t0 + 0]
         a1 = halfword [t0 + 2]
         call 0x841005e0          // 0x841005e0(0x0, 0xffff, 0x0, 0xffff)
         [sp + 0x10] = t1
         mtc1 v0, f8
         
         cvt.s.w f10, f8
         swc1 f10, 0x1c, s0

    loc_0x804709b0: // orphan
         mul.s f8, f4, f0
         a0 = s0

    loc_0x804709a0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f4, f4, f6

    loc_0x80470928: // orphan
         t5 = [s1 + 4]
         t6 = v0 << 1
         t7 = t5 + t6
         t8 = halfword [t7 + 0]
         mtc1 t8, f4
         
         cvt.s.w f6, f4
         goto 0x80470984
         swc1 f6, 0x1c, s0

    loc_0x80470984: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80470944
         t4 = , unsigned  halfword [s0 + 0x62]
         at = 0x8419 << 16
         lwc1 f0, -0x746c, at
         mtc1 t4, f18
         lwc1 f16, 0x1c, s0
         if                       // likely
         cvt.s.w f4, f18

    loc_0x804709b8: // orphan
         mul.s f10, f8, f0
         
         mul.s f18, f16, f10
         swc1 f18, 0x1c, s0
         call 0x84101af4          // 0x84101af4(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x30]
         ra = [sp + 0x24]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x80470fc8: // orphan
         v0 = [t2 + 0x14]
         v1 = halfword [v0 + 4]
         beql v1, 0, 0x80470ff8   // unlikely
         v1 = [v0 + 8]

    loc_0x80470ff8: // orphan
         beql v1, 0, 0x80471128   // likely
         t2 = [sp + 0xa8]

    loc_0x80471128: // orphan
         t3 = [t2 + 0x14]
         v0 = [t3 + 0xc]
         beql v0, 0, 0x804713d0   // unlikely
         ra = [sp + 0x24]

    loc_0x80471138: // orphan
         [sp + 0x4c] = 0
         v1 = [v0 + 4]
         beql v1, 0, 0x804712d8   // unlikely
         t3 = [sp + 0xa8]

    loc_0x804712d8: // orphan
         t6 = [sp + 0x4c]
         t4 = [t3 + 0x14]
         t5 = [t4 + 0xc]
         v0 = [t5 + 0]
         beql v0, 0, 0x804713d0   // unlikely
         ra = [sp + 0x24]

    loc_0x80471388: // orphan
         beql at, 0, 0x804713ac   // likely
         byte [s0 + 0x87] = v0

    loc_0x804713ac: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x3c]
         if                       // likely
         a0 = s0 + 0x14

    loc_0x804713cc: // orphan
         ra = [sp + 0x24]

    loc_0x804713bc: // orphan
         call 0x81100020          // 0x81100020(0x0, 0x0, 0x0, 0x0)

    loc_0x80471390: // orphan
         t2 = , unsigned  byte [a2 + 2]
         v0 -= t2
         at = , v0 < v1
         beql at, 0, 0x804713ac   // unlikely
         byte [s0 + 0x87] = v0

    loc_0x804713a4: // orphan
         v0 = v1

    loc_0x80471368: // orphan
         t9 = , unsigned  byte [a2 + 2]
         v0 += t9
         at = , v1 < v0
         beql at, 0, 0x804713ac   // unlikely
         byte [s0 + 0x87] = v0

    loc_0x8047137c: // orphan
         goto 0x804713a8
         v0 = v1

    loc_0x804713a8: // orphan
         // CODE XREF from fcn.8046e92c @ 0x8047137c
         byte [s0 + 0x87] = v0

    loc_0x80471148: // orphan
         v0 = [s0 + 0x14]
         a2 = v1
         a0 = 0
         t4 = v0 << 0xc
         if                       // likely
         t6 = v0 & 1

    loc_0x80471178: // orphan
         beql t6, 0, 0x804711c4   // likely
         t3 = , unsigned  byte [s0 + 0x7f]

    loc_0x804711c4: // orphan
         t4 = halfword [a2 + 2]
         at = , t3 < t4
         if                       // likely
         

    loc_0x804711d8: // orphan
         // CODE XREFS from fcn.8046e92c @ 0x80471170, 0x804711b8
         if                       // likely
         t5 = 0 + 1

    loc_0x804712d4: // orphan
         t3 = [sp + 0xa8]

    loc_0x804711e0: // orphan
         [sp + 0x4c] = t5
         a0 = [sp + 0x3c]
         a1 = 0 + 0x200
         call 0x81100074          // 0x81100074(0x0, 0x200, 0x0, 0x0)
         [sp + 0x48] = a2
         if                       // unlikely
         a2 = [sp + 0x48]

    loc_0x80471214: // orphan
         a0 = s0 + 0x14
         a1 = 0 + 0x10
         call 0x81100020          // 0x81100020(0x14, 0x10, 0x0, 0x0)
         [sp + 0x48] = a2
         a2 = [sp + 0x48]

    loc_0x80471260: // orphan
         beql at, 0, 0x80471284   // likely
         byte [s0 + 0x87] = v0

    loc_0x80471284: // orphan
         [sp + 0x48] = a2
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x3c]
         if                       // likely
         a2 = [sp + 0x48]

    loc_0x804712b0: // orphan
         a0 = [sp + 0x3c]

    loc_0x804712c4: // orphan
         call 0x81100020          // 0x81100020(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x20
         t2 = , unsigned  byte [s0 + 0x87]
         byte [s0 + 0x8e] = t2

    loc_0x80471298: // orphan
         t8 = , unsigned  byte [a2 + 0]
         t9 = , unsigned  byte [s0 + 0x87]
         bnel t8, t9, 0x804712b4  // unlikely
         a0 = [sp + 0x3c]

    loc_0x804712b4: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x1000
         if                       // likely
         a0 = s0 + 0x14

    loc_0x804712a8: // orphan
         call 0x84100094          // 0x84100094(0x0, 0x0, 0x0, 0x0)
         a0 = s0

    loc_0x80471268: // orphan
         t7 = , unsigned  byte [a2 + 1]
         v0 -= t7
         at = , v0 < v1
         beql at, 0, 0x80471284   // likely
         byte [s0 + 0x87] = v0

    loc_0x8047127c: // orphan
         v0 = v1

    loc_0x80471240: // orphan
         t6 = , unsigned  byte [a2 + 1]
         v0 += t6
         at = , v1 < v0
         beql at, 0, 0x80471284   // likely
         byte [s0 + 0x87] = v0

    loc_0x80471254: // orphan
         goto 0x80471280
         v0 = v1

    loc_0x80471280: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80471254
         byte [s0 + 0x87] = v0

    loc_0x804711fc: // orphan
         a0 = [sp + 0x3c]
         a1 = 0 + 0x800
         call 0x81100054          // 0x81100054(0x0, 0x800, 0x0, 0x0)
         [sp + 0x48] = a2
         if                       // likely
         a2 = [sp + 0x48]

    loc_0x80471228: // orphan
         v0 = , unsigned  byte [s0 + 0x87]
         v1 = , unsigned  byte [a2 + 0]
         a1 = 0x4000 << 16
         at = , v0 < v1
         beql at, 0, 0x80471260   // likely
         at = , v1 < v0

    loc_0x804711d4: // orphan
         a0 = 0 + 1

    loc_0x80471180: // orphan
         [sp + 0x44] = a0
         call 0x841094ec          // 0x841094ec(0x0, 0x0, 0x0, 0x0)
         [sp + 0x48] = a2
         a0 = [sp + 0x44]
         if                       // likely
         a2 = [sp + 0x48]

    loc_0x80471198: // orphan
         t7 = , unsigned  byte [s0 + 0x82]
         t8 = t7 + 1
         byte [s0 + 0x82] = t8
         t2 = halfword [a2 + 2]
         t9 = t8 & 0xff
         at = , t9 < t2
         if                       // likely
         

    loc_0x804711b8: // orphan
         goto 0x804711d8
         a0 = 0 + 1

    loc_0x80471160: // orphan
         t5 = 0x8419 << 16
         t5 = [t5 + 0x1a4]
         if                       // unlikely
         

    loc_0x80471170: // orphan
         goto 0x804711d8
         a0 = 0 + 1

    loc_0x80471000: // orphan
         t5 = [v1 + 0]
         beql t5, 0, 0x80471128   // unlikely
         t2 = [sp + 0xa8]

    loc_0x8047100c: // orphan
         v0 = [v1 + 0]
         a0 = , unsigned  byte [s0 + 0x7f]
         a1 = v1
         a3 = , unsigned  byte [v0 + 2]
         a2 = , unsigned  byte [v0 + 0]
         at = , unsigned  , a0 < a3
         t0 = a3
         if                       // unlikely
         t1 = a2

    loc_0x80471034: // orphan
         divu 0, a0, t0
         v0 = [a1 + 4]
         a3 = hi
         if                       // likely
         

    loc_0x8047104c: // orphan
         beql v0, 0, 0x804710c0   // likely
         v0 = [a1 + 8]

    loc_0x804710c8: // orphan
         if                       // likely
         t3 = a3 << 2

    loc_0x804710dc: // orphan
         t4 = [a1 + 0]
         at = 0 + 1
         a0 = sp + 0x5c
         t5 = , unsigned  byte [t4 + 0]
         bnel t5, at, 0x80471104  // likely
         v1 = [sp + 0x58]

    loc_0x80471104: // orphan
         t6 = , unsigned  byte [v1 + 0]
         byte [s0 + 0x8b] = t6
         t7 = , unsigned  byte [v1 + 1]
         byte [s0 + 0x8c] = t7
         t8 = , unsigned  byte [v1 + 2]
         byte [s0 + 0x8d] = t8
         t9 = , unsigned  byte [v1 + 3]
         byte [s0 + 0x8e] = t9
         t2 = [sp + 0xa8]

    loc_0x804710f4: // orphan
         call 0x841009d8          // 0x841009d8(0x0, 0x0, 0x0, 0x0)
         a2 = a3
         [sp + 0x58] = v0

    loc_0x804710d0: // orphan
         v1 = v0 + t3
         goto 0x80471100
         [sp + 0x58] = v1

    loc_0x80471100: // orphan
         // CODE XREF from fcn.8046e92c @ 0x804710d4
         v1 = [sp + 0x58]

    loc_0x80471054: // orphan
         if                       // likely
         at = 0 + 1

    loc_0x8047106c: // orphan
         if                       // unlikely
         a0 = sp + 0x64

    loc_0x80471098: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80471064
         v1 = [sp + 0x60]

    loc_0x80471074: // orphan
         a2 = a3
         [sp + 0x6c] = a1
         [sp + 0x74] = a3
         call 0x84100874          // 0x84100874(0x0, 0x0, 0x0, 0x0)
         [sp + 0x68] = t1
         a1 = [sp + 0x6c]
         a3 = [sp + 0x74]
         t1 = [sp + 0x68]
         [sp + 0x60] = v0

    loc_0x8047105c: // orphan
         t6 = a3 << 2
         v1 = v0 + t6
         goto 0x80471098
         [sp + 0x60] = v1

    loc_0x80471048: // orphan
         break 7

    loc_0x80471030: // orphan
         a0 = a3 - 1

    loc_0x80470fd8: // orphan
         t3 = , unsigned  byte [s0 + 0x7f]
         bnel v1, t3, 0x80470ff8  // likely
         v1 = [v0 + 8]

    loc_0x80470fe4: // orphan
         call 0x84100094          // 0x84100094(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         t4 = [sp + 0xa8]
         v0 = [t4 + 0x14]

    loc_0x80470f94: // orphan
         t6 = [sp + 0xa8]
         t8 = , unsigned  byte [s0 + 0x7f]
         a0 = s0
         v0 = [t6 + 0x14]
         t7 = halfword [v0 + 4]
         bnel t7, t8, 0x80470ff8  // likely
         v1 = [v0 + 8]

    loc_0x80470fb0: // orphan
         call 0x84100020          // 0x84100020(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x80
         t9 = [sp + 0xa8]
         goto 0x80470ff4
         v0 = [t9 + 0x14]

    loc_0x80470ff4: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80470fbc
         v1 = [v0 + 8]

    loc_0x80470b54: // orphan
         v0 = [v1 + 0xc]
         beql v0, 0, 0x80470f38   // unlikely
         a2 = [sp + 0xa8]

    loc_0x80470b60: // orphan
         t6 = [v0 + 0]
         [sp + 0x90] = t6
         t7 = [v0 + 8]
         v1 = [v0 + 4]
         [sp + 0x88] = t7
         t8 = [v0 + 0xc]
         [sp + 0x84] = t8
         t9 = [a2 + 4]
         t2 = t9 & 8
         beql t2, 0, 0x80470bd4   // unlikely
         a0 = [s0 + 8]

    loc_0x80470bd4: // orphan
         call 0x8411ee54          // 0x8411ee54(0x0, 0x0, 0x0, 0x0)
         [sp + 0x8c] = v1
         mtc1 v0, f8
         v1 = [sp + 0x8c]
         if                       // likely
         cvt.s.w f10, f8

    loc_0x80470bfc: // orphan
         at = 0x8419 << 16

    loc_0x80470d98: // orphan
         beql v0, 0, 0x80470ee8   // likely
         v0 = [a2 + 8]

    loc_0x80470ee8: // orphan
         beql v0, 0, 0x80470f38   // likely
         a2 = [sp + 0xa8]

    loc_0x80470ef0: // orphan
         t8 = , unsigned  byte [s0 + 0x7f]
         t9 = halfword [v0 + 0]
         at = , t8 < t9
         bnel at, 0, 0x80470f38   // unlikely
         a2 = [sp + 0xa8]

    loc_0x80470f04: // orphan
         t2 = halfword [v0 + 2]
         at = 0x8419 << 16
         lwc1 f8, -0x7454, at
         mtc1 t2, f4
         lwc1 f16, 0xac, sp
         cvt.s.w f10, f4
         lwc1 f4, 0x48, s0
         mul.s f18, f8, f10
         
         mul.s f6, f18, f16
         sub.s f8, f4, f6
         swc1 f8, 0x48, s0
         a2 = [sp + 0xa8]

    loc_0x80470da0: // orphan
         a0 = , unsigned  byte [v0 + 0]
         v1 = , unsigned  byte [s0 + 0x7f]

    loc_0x80470dd4: // orphan
         bnel at, 0, 0x80470ee8   // unlikely
         v0 = [a2 + 8]

    loc_0x80470ddc: // orphan
         v1 = byte [v0 + 1]
         if                       // likely
         

    loc_0x80470e14: // orphan
         bgezl v1, 0x80470e48     // likely
         v1 = , unsigned  byte [s0 + 0x97]

    loc_0x80470ee4: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80470e80
         v0 = [a2 + 8]

    loc_0x80470e1c: // orphan
         t4 = halfword [s0 + 0x60]
         t5 = t4 + v1
         halfword [s0 + 0x60] = t5
         t6 = [a2 + 4]
         t7 = halfword [s0 + 0x60]
         v0 = halfword [t6 + 4]
         at = , t7 < v0
         beql at, 0, 0x80470e48   // likely
         v1 = , unsigned  byte [s0 + 0x97]

    loc_0x80470e40: // orphan
         halfword [s0 + 0x60] = v0

    loc_0x80470de8: // orphan
         t8 = halfword [s0 + 0x60]
         t9 = t8 + v1
         halfword [s0 + 0x60] = t9
         t2 = [a2 + 4]
         t3 = halfword [s0 + 0x60]
         v0 = halfword [t2 + 4]
         at = , v0 < t3
         beql at, 0, 0x80470e48   // likely
         v1 = , unsigned  byte [s0 + 0x97]

    loc_0x80470e0c: // orphan
         goto 0x80470e44
         halfword [s0 + 0x60] = v0

    loc_0x80470e44: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80470e0c
         v1 = , unsigned  byte [s0 + 0x97]

    loc_0x80470db0: // orphan
         t6 = byte [v0 + 1]
         bnel t6, 0, 0x80470dd4   // unlikely
         at = , v1 < a0

    loc_0x80470dbc: // orphan
         t7 = halfword [v0 + 4]
         v1 = , unsigned  byte [s0 + 0x7f]
         halfword [s0 + 0x60] = t7
         v0 = [a2 + 4]
         a0 = , unsigned  byte [v0 + 0]
         at = , v1 < a0

    loc_0x80470d74: // orphan
         call 0x8410119c          // 0x8410119c(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         t4 = [sp + 0x90]
         a0 = s0
         t5 = [t4 + 0]
         call 0x841013f4          // 0x841013f4(0x0, 0x0, 0x0, 0x0)
         a1 = halfword [t5 + 0]
         a2 = [sp + 0x90]
         v0 = [a2 + 4]

    loc_0x80470ca4: // orphan
         a0 = s0 + 0x48
         beql a1, 0, 0x80470cc0   // likely
         a1 = [v0 + 8]

    loc_0x80470cc0: // orphan
         a0 = s0 + 0x4c
         beql a1, 0, 0x80470cd8   // likely
         t3 = [sp + 0x84]

    loc_0x80470ccc: // orphan
         call 0x84101a08          // 0x84101a08(0x0, 0x0, 0x0, 0x0)
         a2 = , unsigned  byte [s0 + 0x7f]
         t3 = [sp + 0x84]

    loc_0x80470cb0: // orphan
         call 0x84101a08          // 0x84101a08(0x0, 0x0, 0x0, 0x0)
         a2 = , unsigned  byte [s0 + 0x7f]
         v0 = [sp + 0x88]
         a1 = [v0 + 8]

    loc_0x80470c94: // orphan
         call 0x84101a08          // 0x84101a08(0x0, 0x0, 0x0, 0x0)
         a2 = , unsigned  byte [s0 + 0x7f]
         v0 = [sp + 0x88]
         a1 = [v0 + 4]

    loc_0x80470c14: // orphan
         a1 = [v1 + 0]
         a0 = s0 + 0x6a
         a3 = s0 + 0x70
         beql a1, 0, 0x80470c3c   // unlikely
         a1 = [v1 + 4]

    loc_0x80470c3c: // orphan
         a0 = s0 + 0x6c
         a3 = s0 + 0x72
         beql a1, 0, 0x80470c60   // likely
         a1 = [v1 + 8]

    loc_0x80470c60: // orphan
         a0 = s0 + 0x6e
         a3 = s0 + 0x74
         beql a1, 0, 0x80470c7c   // likely
         v0 = [sp + 0x88]

    loc_0x80470c70: // orphan
         call 0x84101888          // 0x84101888(0x0, 0x0, 0x0, 0x0)
         a2 = , unsigned  byte [s0 + 0x7f]
         v0 = [sp + 0x88]

    loc_0x80470c4c: // orphan
         a2 = , unsigned  byte [s0 + 0x7f]
         call 0x84101888          // 0x84101888(0x0, 0x0, 0xff, 0x0)
         [sp + 0x8c] = v1
         v1 = [sp + 0x8c]
         a1 = [v1 + 8]

    loc_0x80470c28: // orphan
         a2 = , unsigned  byte [s0 + 0x7f]
         call 0x84101888          // 0x84101888(0x0, 0x0, 0xff, 0x0)
         [sp + 0x8c] = v1
         v1 = [sp + 0x8c]
         a1 = [v1 + 4]

    loc_0x80470bec: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f10, f10, f18

    loc_0x80470b8c: // orphan
         a0 = [s0 + 8]
         a1 = , unsigned  halfword [s0 + 0x68]
         call 0x8411e358          // 0x8411e358(-1, 0xffff, 0x0, 0x0)
         [sp + 0x8c] = v1
         mtc1 v0, f10
         v1 = [sp + 0x8c]
         if                       // likely
         cvt.s.w f16, f10

    loc_0x80470bbc: // orphan
         at = 0x8419 << 16
         lwc1 f4, -0x7464, at
         mul.s f6, f16, f4
         goto 0x80470c0c
         swc1 f6, 0xac, sp

    loc_0x80470c0c: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80470bc8
         beql v1, 0, 0x80470c7c   // likely
         v0 = [sp + 0x88]

    loc_0x80470bac: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x80470c00: // orphan
         lwc1 f16, -0x7460, at
         mul.s f4, f10, f16
         swc1 f4, 0xac, sp

    loc_0x80470da8: // orphan
         bnel a0, v1, 0x80470dd4  // unlikely
         at = , v1 < a0

    loc_0x80470e54: // orphan
         at = 0 + 0x64
         v0 = halfword [s0 + 0x60]
         bnel v1, at, 0x80470e8c  // likely
         mtc1 v1, f6

    loc_0x804712f4: // orphan
         bnel t6, 0, 0x804713d0   // unlikely
         ra = [sp + 0x24]

    loc_0x804713c0: // orphan
         a1 = 0 + 0x20
         t3 = , unsigned  byte [s0 + 0x87]
         byte [s0 + 0x8e] = t3

    loc_0x804714c8: // orphan
         add.s f16, f8, f10
         lwc1 f8, 0x30, s0
         add.s f4, f16, f18
         lwc1 f16, 0x48, s0
         add.s f10, f6, f8
         swc1 f4, 0x20, s0
         lwc1 f4, 0x54, s0
         lwc1 f8, 0x40, s0
         add.s f18, f10, f16
         lwc1 f10, 0x34, s0
         add.s f6, f18, f4
         lwc1 f18, 0x4c, s0
         add.s f16, f8, f10
         swc1 f6, 0x24, s0
         lwc1 f6, 0x58, s0
         add.s f4, f16, f18
         add.s f8, f4, f6
         swc1 f8, 0x28, s0
         call 0x84102750          // 0x84102750(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x24]
         v0 = [s0 + 0xc]
         beql v0, 0, 0x8047159c   // unlikely
         ra = [sp + 0x1c]

    loc_0x8047159c: // orphan
         s0 = [sp + 0x18]
         sp += 0x28
         ret
         

    loc_0x80471524: // orphan
         lwc1 f10, 0x20, s0
         swc1 f10, 0x24, v0
         t7 = [s0 + 0xc]
         lwc1 f16, 0x24, s0
         swc1 f16, 0x28, t7
         t8 = [s0 + 0xc]
         lwc1 f18, 0x28, s0
         swc1 f18, 0x2c, t8
         t9 = [s0 + 0xc]
         lwc1 f4, 0x18, s0
         swc1 f4, 0x30, t9
         t0 = [s0 + 0xc]
         lwc1 f6, 0x18, s0
         swc1 f6, 0x34, t0
         t1 = [s0 + 0xc]
         lwc1 f8, 0x18, s0
         swc1 f8, 0x38, t1
         t3 = [s0 + 0xc]
         t2 = halfword [s0 + 0x6a]
         halfword [t3 + 0x1e] = t2
         t5 = [s0 + 0xc]
         t4 = halfword [s0 + 0x6c]
         halfword [t5 + 0x20] = t4
         t7 = [s0 + 0xc]
         t6 = halfword [s0 + 0x6e]
         halfword [t7 + 0x22] = t6
         t9 = [s0 + 0xc]
         t8 = , unsigned  byte [s0 + 0x87]
         byte [t9 + 0x1d] = t8
         ra = [sp + 0x1c]

    loc_0x804715d0: // orphan
         a0 = [v1 + 0x44]
         beql a0, 0, 0x80471660   // unlikely
         ra = [sp + 0x14]

    loc_0x804715dc: // orphan
         t6 = halfword [a0 + 0]
         a0 = v0 + 4              // arg1
         a1 = 0 + 0x2000          // arg2
         t7 = t6 & 2
         beql t7, 0, 0x80471660   // likely
         ra = [sp + 0x14]

    loc_0x804715f4: // orphan
         [sp + 0x18] = a0
         call 0x81100074          // 0x81100074(0x0, 0x0, 0x0, 0x0)
         [sp + 0x20] = a2
         a0 = [sp + 0x18]
         if                       // likely
         a2 = [sp + 0x20]

    loc_0x8047165c: // orphan
         ra = [sp + 0x14]

    loc_0x8047160c: // orphan
         a1 = 0 + 0x4000
         call 0x81100054          // 0x81100054(0x0, 0x4000, 0x0, 0x0)
         [sp + 0x20] = a2
         if                       // likely
         a2 = [sp + 0x20]

    loc_0x80471640: // orphan
         a0 = [a2 + 0xc]
         call 0x8003ec34          // 0x8003ec34(-1, 0x0, 0x0, 0x0)
         [sp + 0x20] = a2
         if                       // likely
         a2 = [sp + 0x20]

    loc_0x80471654: // orphan
         call 0x84100094          // 0x84100094(0x0, 0x0, 0x0, 0x0)
         a0 = a2

    loc_0x80471620: // orphan
         t8 = [a2 + 0xc]
         t9 = [t8 + 0x48]
         bnel t9, 0, 0x80471660   // likely
         ra = [sp + 0x14]

    loc_0x80471630: // orphan
         call 0x84100094          // 0x84100094(0x0, 0x0, 0x0, 0x0)
         a0 = a2
         goto 0x80471660
         ra = [sp + 0x14]

    loc_0x80471650: // orphan
         a0 = [a2 + 0xc]
         call 0x8003ec34          // 0x8003ec34(-1, 0x0, 0x0, 0x0)
         [sp + 0x20] = a2
         if                       // likely
         a2 = [sp + 0x20]

    loc_0x804717a8: // orphan
         if                       // unlikely
         s0 += 0x9c

    loc_0x804717b0: // orphan
         ra = [sp + 0x2c]
         ldc1 f20, 0x18, sp
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x804716a8: // orphan
         t7 = , unsigned  byte [s0 + 0x7c]
         at = , unsigned  , t7 < 9
         if                       // likely
         t7 <<= 2

    loc_0x80471784: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80471754
         call 0x8410009c          // "P@" // 0x8410009c(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         beql v0, 0, 0x804717a8   // likely
         s1 += 1

    loc_0x80471794: // orphan
         call 0x8410488c          // 0x8410488c(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         call 0x84100350          // "&1" // 0x84100350(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         s1 += 1

    loc_0x804716b8: // orphan
         at = 0x8419 << 16
         at += t7
         t7 = [at - 0x7450]
         goto t7
         

    loc_0x80471738: // orphan
         
         a0 = [s0 + 0xc]
         mfc1 a1, f20
         call 0x84105930          // 0x84105930(-1, 0x0, 0x0, 0x0)
         a0 += 0x24
         call 0x84100b3c          // 0x84100b3c(0x100000023, 0x0, 0x0, 0x0)
         a0 = s0
         goto 0x80471784
         

    loc_0x804718c0: // orphan
         swc1 f8, 0x14, sp
         goto 0x804719b8
         ra = [sp + 0x24]

    loc_0x8046ea70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804719a8: // orphan
         a1 <<= 0x10              // arg2
         call 0x841039f4          // 0x841039f4(0x0, 0x0, 0x0, 0x0)
         a1 = , signed  a1 >> 0x10
         ra = [sp + 0x24]

    loc_0x8046ea7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471a94: // orphan
         t8 = 0xf400 << 16
         [t3 + 0] = t8
         [t3 + 4] = t5
         a1 = a0 + 8              // arg2
         t6 = 0xe700 << 16
         [a0 + 0] = t6            // arg1
         [a0 + 4] = 0             // arg1
         t7 = 8 << 16
         t7 |= 0x200
         [a1 + 4] = t7            // arg2
         [a1 + 0] = t2            // arg2
         a3 = a1 + 8              // arg4
         a1 = 0x800d << 16
         t8 = 0xf200 << 16
         t9 = v0 | v1
         [a3 + 4] = t9            // arg4
         [a3 + 0] = t8            // arg4
         a1 += 0x510              // arg2
         a0 = [a1 + 0]            // arg2
         t7 = 0xc18 << 16
         t6 = 0xe200 << 16
         t5 = a0 + 8              // arg1
         [a1 + 0] = t5            // arg2
         t6 |= 0x1c
         t7 |= 0x4a50
         [a0 + 4] = t7            // arg1
         [a0 + 0] = t6            // arg1
         ra = [sp + 0x14]
         a2 = a3 + 8              // arg4
         v0 = a2
         ret
         sp += 0x18

    loc_0x8046ea88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471b30: // orphan
         at = 0 + 4
         if                       // unlikely
         t7 = v1 & 0x40

    loc_0x80471d5c: // orphan
         t0 = v1 & 0x80
         t1 = , signed  t0 >> 6
         t9 = , signed  t7 >> 6
         v0 = t9 + t1
         if                       // likely
         t4 = 0xe200 << 16

    loc_0x80471d9c: // orphan
         a2 = 0x800d << 16

    loc_0x80471e74: // orphan
         // XREFS: CODE 0x80471b6c  CODE 0x80471c38  
         // XREFS: CODE 0x80471cd0  CODE 0x80471cfc  
         // XREFS: CODE 0x80471d28  CODE 0x80471d54  
         // XREFS: CODE 0x80471dc0  CODE 0x80471dec  
         // XREFS: CODE 0x80471e18  CODE 0x80471e44  
         ra = [sp + 0x14]

    loc_0x80471d74: // orphan
         if                       // likely
         t6 = 0xe200 << 16

    loc_0x80471dc8: // orphan
         a2 = 0x800d << 16

    loc_0x80471d7c: // orphan
         at = 0 + 2
         if                       // unlikely
         a2 = 0x800d << 16

    loc_0x80471df4: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t0 = 0xe200 << 16
         t9 = 0xc19 << 16
         t7 = v0 + 8
         [a2 + 0] = t7            // arg3
         t9 |= 0x3078
         t0 |= 0x1c
         [v0 + 0] = t0
         goto 0x80471e74
         [v0 + 4] = t9

    loc_0x80471d88: // orphan
         at = 0 + 3
         if                       // unlikely
         a2 = 0x800d << 16

    loc_0x80471e20: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t2 = 0xe200 << 16
         t4 = 0xc19 << 16
         t1 = v0 + 8
         [a2 + 0] = t1            // arg3
         t4 |= 0x3078
         t2 |= 0x1c
         [v0 + 0] = t2
         goto 0x80471e74
         [v0 + 4] = t4

    loc_0x80471d94: // orphan
         goto 0x80471e78
         ra = [sp + 0x14]

    loc_0x80471e78: // orphan
         // CODE XREFS from fcn.8046e92c @ 0x80471ca4, 0x80471d94
         sp += 0x18
         ret
         

    loc_0x80471b3c: // orphan
         at = 0 + 6
         if                       // unlikely
         t2 = v1 & 0x40

    loc_0x80471c6c: // orphan
         t4 = v1 & 0x80
         t5 = , signed  t4 >> 6
         t3 = , signed  t2 >> 6
         v0 = t3 + t5
         if                       // likely
         t8 = 0xe200 << 16

    loc_0x80471cac: // orphan
         a2 = 0x800d << 16
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t7 = 0xc18 << 16
         t7 |= 0x4240
         t6 = v0 + 8
         [a2 + 0] = t6            // arg3
         t8 |= 0x1c
         [v0 + 0] = t8
         goto 0x80471e74
         [v0 + 4] = t7

    loc_0x80471c84: // orphan
         if                       // likely
         t0 = 0xe200 << 16

    loc_0x80471cd8: // orphan
         a2 = 0x800d << 16
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t1 = 0xc18 << 16
         t1 |= 0x41c8
         t9 = v0 + 8
         [a2 + 0] = t9            // arg3
         t0 |= 0x1c
         [v0 + 0] = t0
         goto 0x80471e74
         [v0 + 4] = t1

    loc_0x80471c8c: // orphan
         at = 0 + 2
         if                       // unlikely
         a2 = 0x800d << 16

    loc_0x80471d04: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t4 = 0xe200 << 16
         t3 = 0xc18 << 16
         t2 = v0 + 8
         [a2 + 0] = t2            // arg3
         t3 |= 0x4a50
         t4 |= 0x1c
         [v0 + 0] = t4
         goto 0x80471e74
         [v0 + 4] = t3

    loc_0x80471c98: // orphan
         at = 0 + 3
         if                       // unlikely
         a2 = 0x800d << 16

    loc_0x80471d30: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t6 = 0xe200 << 16
         t8 = 0xc18 << 16
         t5 = v0 + 8
         [a2 + 0] = t5            // arg3
         t8 |= 0x49d8
         t6 |= 0x1c
         [v0 + 0] = t6
         goto 0x80471e74
         [v0 + 4] = t8

    loc_0x80471ca4: // orphan
         goto 0x80471e78
         ra = [sp + 0x14]

    loc_0x80471b48: // orphan
         at = 0 + 0x3f
         if                       // likely
         a2 = 0x800d << 16

    loc_0x80471e4c: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t5 = 0xe200 << 16
         t6 = 0xc18 << 16
         t3 = v0 + 8
         [a2 + 0] = t3            // arg3
         t6 |= 0x4240
         t5 |= 0x1c
         [v0 + 0] = t5
         [v0 + 4] = t6

    loc_0x80471b54: // orphan
         a2 = 0x800d << 16
         a2 += 0x510              // arg3

    loc_0x8046ea94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471b5c: // orphan
         call 0x84102d38          // 0x84102d38(0x0, 0x0, 0x0, 0x0)
         a0 = [a2 + 0]
         a2 = 0x800d << 16
         a2 += 0x510
         goto 0x80471e74
         [a2 + 0] = v0

    loc_0x8046eaa0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471c18: // orphan
         v0 = [a2 + 0]            // arg3
         t8 = 0xe200 << 16
         t7 = 0xc19 << 16
         t6 = v0 + 8
         [a2 + 0] = t6            // arg3
         t7 |= 0x2230
         t8 |= 0x1c
         [v0 + 0] = t8
         goto 0x80471e74
         [v0 + 4] = t7

    loc_0x8046eaac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046eab8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471da0: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t3 = 0xf0a << 16
         t3 |= 0x7008
         t2 = v0 + 8
         [a2 + 0] = t2            // arg3
         t4 |= 0x1c
         [v0 + 0] = t4
         goto 0x80471e74
         [v0 + 4] = t3

    loc_0x8046eac4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471dcc: // orphan
         a2 += 0x510              // arg3
         v0 = [a2 + 0]            // arg3
         t8 = 0xc19 << 16
         t8 |= 0x3048
         t5 = v0 + 8
         [a2 + 0] = t5            // arg3
         t6 |= 0x1c
         [v0 + 0] = t6
         goto 0x80471e74
         [v0 + 4] = t8

    loc_0x8046ead0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471e88: // orphan
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         s3 = a2
         s4 = a0
         [sp + 0x34] = ra
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         if                       // likely
         [sp + 0x18] = s0

    loc_0x80471f58: // orphan
         ra = [sp + 0x34]

    loc_0x80471eb4: // orphan
         v0 = [a1 + 0x14]         // arg2
         beql v0, 0, 0x80471f5c   // unlikely
         ra = [sp + 0x34]

    loc_0x80471f5c: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x80471ec0: // orphan
         v1 = halfword [v0 + 0]
         v0 = 0x8419 << 16
         if                       // unlikely
         t6 = v1 << 2

    loc_0x80471ed0: // orphan
         v0 += t6
         v0 = [v0 - 0x35e0]
         a0 = 0x8100 << 16
         a0 += 0x348c             // arg1
         s0 = [v0 + 4]
         s1 = , unsigned  halfword [v0 + 0]
         call 0x80003240          // 0x80003240(0x8100348c, 0x0, 0x0, 0x0)
         s2 = , unsigned  halfword [v0 + 2]
         s6 = v0
         a0 = s4
         a1 = s3
         call 0x84102b3c          // 0x84102b3c(0x0, 0x0, 0x0, 0x0)
         a2 = s1
         s1 = 0
         if                       // unlikely
         s3 = s2

    loc_0x80471f10: // orphan
         s2 = 0x800d << 16
         s2 += 0x510
         s5 = 0xde00 << 16

    loc_0x80471f1c: // orphan
         a0 = s4
         call s6                  // t(0x0, 0x0, 0x0, 0x0)
         a1 = [s0 + 0]
         a0 = , unsigned  halfword [s0 + 6]
         call 0x84102e84          // 0x84102e84(0x0, 0xe7000008, 0x0, 0x0)
         a1 = s4

    loc_0x8046eadc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80471f34: // orphan
         v1 = [s2 + 0]
         s1 += 1
         s0 += 0x10
         t7 = v1 + 8
         [s2 + 0] = t7
         [v1 + 0] = s5
         t8 = [s0 - 8]
         if                       // likely
         [v1 + 4] = t8

    loc_0x8046eae8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472790: // orphan
         mul.s f6, f8, f22
         swc1 f10, 4, a0          // arg1
         swc1 f4, 0x18, sp
         lwc1 f10, 0x18, sp
         swc1 f18, 0xc, a0        // arg1
         mul.s f4, f10, f20
         add.s f8, f6, f4
         neg.s f6, f14
         mul.s f10, f8, f12
         swc1 f10, 8, a0          // arg1
         mul.s f4, f6, f20
         lwc1 f8, 0x1c, sp
         mul.s f10, f8, f22
         add.s f6, f4, f10
         mul.s f8, f6, f12
         
         mul.s f4, f0, f22
         swc1 f8, 0x10, a0        // arg1
         mul.s f10, f4, f12
         swc1 f10, 0x14, a0       // arg1
         mul.s f6, f2, f20
         lwc1 f8, 0x18, sp
         swc1 f18, 0x1c, a0       // arg1
         swc1 f18, 0x2c, a0       // arg1
         mul.s f4, f8, f22
         add.s f10, f6, f4
         mul.s f8, f10, f12
         neg.s f10, f16
         mul.s f6, f0, f2
         swc1 f8, 0x18, a0        // arg1
         mul.s f4, f6, f12
         
         mul.s f8, f10, f12
         
         mul.s f6, f0, f14
         swc1 f4, 0x20, a0        // arg1
         swc1 f8, 0x24, a0        // arg1
         mul.s f4, f6, f12
         swc1 f4, 0x28, a0        // arg1
         lwc1 f10, 0x3c, sp
         mtc1 at, f4
         swc1 f10, 0x30, a0       // arg1
         lwc1 f8, 0x40, sp
         swc1 f8, 0x34, a0        // arg1
         lwc1 f6, 0x44, sp
         swc1 f4, 0x3c, a0        // arg1
         swc1 f6, 0x38, a0        // arg1
         ldc1 f22, 0x10, sp
         ldc1 f20, 8, sp
         ret
         sp += 0x38

    loc_0x8046eaf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8047290c: // orphan
         swc1 f6, 0x10, sp
         lwc1 f8, 0x10, sp
         swc1 f16, 0xc, a0        // arg1
         mul.s f6, f8, f18
         neg.s f8, f12
         add.s f10, f4, f6
         mul.s f4, f8, f18
         swc1 f10, 8, a0          // arg1
         lwc1 f6, 0x14, sp
         mul.s f10, f6, f20
         lwc1 f6, 0x48, sp
         add.s f8, f4, f10
         mul.s f4, f8, f6
         swc1 f4, 0x10, a0        // arg1
         mul.s f10, f0, f20
         lwc1 f8, 0x48, sp
         mul.s f6, f10, f8
         swc1 f6, 0x14, a0        // arg1
         mul.s f4, f2, f18
         lwc1 f10, 0x10, sp
         mul.s f8, f10, f20
         lwc1 f10, 0x48, sp
         swc1 f16, 0x1c, a0       // arg1
         swc1 f16, 0x2c, a0       // arg1
         add.s f6, f4, f8
         mul.s f4, f6, f10
         neg.s f6, f14

    loc_0x8046eb00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472978: // orphan
         mul.s f8, f0, f2
         swc1 f6, 0x24, a0        // arg1
         mul.s f10, f0, f12
         swc1 f4, 0x18, a0        // arg1
         swc1 f8, 0x20, a0        // arg1
         swc1 f10, 0x28, a0       // arg1
         lwc1 f4, 0x34, sp
         mtc1 at, f10
         swc1 f4, 0x30, a0        // arg1
         lwc1 f8, 0x38, sp
         swc1 f8, 0x34, a0        // arg1
         lwc1 f6, 0x3c, sp
         swc1 f10, 0x3c, a0       // arg1
         swc1 f6, 0x38, a0        // arg1
         ldc1 f20, 8, sp
         ret
         sp += 0x30

    loc_0x8046eb0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472a14: // orphan
         sdc1 f20, 8, sp
         t9 = a3 + v1             // arg4
         t1 = a3 + a1             // arg4
         lwc1 f12
         lwc1 f20
         t7 = a3 + v0             // arg4
         t0 = a2 + a1             // arg3
         lwc1 f0
         lwc1 f18
         swc1 f4, 0x14, sp
         mul.s f6, f12, f20
         lwc1 f8, 0x14, sp
         mtc1 0, f16
         at = 0x3f80 << 16
         mul.s f10, f8, f18
         lwc1 f8, 0x48, sp
         add.s f4, f6, f10
         mul.s f6, f4, f8
         swc1 f6                  // arg1
         mul.s f10, f0, f18
         lwc1 f4, 0x48, sp
         mul.s f8, f10, f4
         neg.s f10, f2
         mul.s f6, f14, f12
         
         mul.s f4, f10, f20
         swc1 f8, 4, a0           // arg1
         swc1 f6, 0x10, sp
         lwc1 f8, 0x10, sp
         mul.s f6, f8, f18
         lwc1 f8, 0x48, sp
         swc1 f16, 0xc, a0        // arg1
         add.s f10, f4, f6
         neg.s f6, f12
         mul.s f4, f10, f8
         swc1 f4, 8, a0           // arg1
         mul.s f10, f6, f18
         lwc1 f8, 0x14, sp
         mul.s f4, f8, f20
         lwc1 f8, 0x4c, sp
         add.s f6, f10, f4
         mul.s f10, f6, f8
         swc1 f10, 0x10, a0       // arg1

    loc_0x8046eb18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472ac0: // orphan
         mul.s f4, f0, f20
         lwc1 f6, 0x4c, sp
         mul.s f8, f4, f6
         swc1 f8, 0x14, a0        // arg1
         mul.s f10, f2, f18
         lwc1 f4, 0x10, sp
         mul.s f6, f4, f20
         lwc1 f4, 0x4c, sp
         swc1 f16, 0x1c, a0       // arg1
         swc1 f16, 0x2c, a0       // arg1
         add.s f8, f10, f6
         mul.s f10, f8, f4
         neg.s f8, f14
         mul.s f6, f0, f2
         swc1 f8, 0x24, a0        // arg1
         mul.s f4, f0, f12
         swc1 f10, 0x18, a0       // arg1
         swc1 f6, 0x20, a0        // arg1
         swc1 f4, 0x28, a0        // arg1
         lwc1 f10, 0x34, sp
         mtc1 at, f4
         swc1 f10, 0x30, a0       // arg1
         lwc1 f6, 0x38, sp
         swc1 f6, 0x34, a0        // arg1
         lwc1 f8, 0x3c, sp
         swc1 f4, 0x3c, a0        // arg1
         swc1 f8, 0x38, a0        // arg1
         ldc1 f20, 8, sp
         ret
         sp += 0x30

    loc_0x8046eb24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472b4c: // orphan
         at = 0x3f80 << 16
         mul.s f6, f4, f12
         swc1 f6                  // arg1
         lwc1 f8, 0x10, a1        // arg2
         mul.s f10, f8, f12
         swc1 f10, 4, a0          // arg1
         lwc1 f16, 0x20, a1       // arg2
         swc1 f0, 0xc, a0         // arg1
         mul.s f18, f16, f12
         swc1 f18, 8, a0          // arg1
         lwc1 f4, 4, a1           // arg2
         mul.s f6, f4, f12
         swc1 f6, 0x10, a0        // arg1
         lwc1 f8, 0x14, a1        // arg2
         mul.s f10, f8, f12
         swc1 f10, 0x14, a0       // arg1
         lwc1 f16, 0x24, a1       // arg2
         swc1 f0, 0x1c, a0        // arg1
         mul.s f18, f16, f12
         swc1 f18, 0x18, a0       // arg1
         lwc1 f4, 8, a1           // arg2
         mul.s f6, f4, f12
         swc1 f6, 0x20, a0        // arg1
         lwc1 f8, 0x18, a1        // arg2
         mul.s f10, f8, f12
         swc1 f10, 0x24, a0       // arg1
         lwc1 f16, 0x28, a1       // arg2

    loc_0x8046eb30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472bb8: // orphan
         swc1 f0, 0x2c, a0        // arg1
         mtc1 at, f10
         mul.s f18, f16, f12
         swc1 f18, 0x28, a0       // arg1
         lwc1 f4, 8, sp
         swc1 f4, 0x30, a0        // arg1
         lwc1 f6, 0xc, sp
         swc1 f6, 0x34, a0        // arg1
         lwc1 f8, 0x10, sp
         swc1 f10, 0x3c, a0       // arg1
         ret
         swc1 f8, 0x38, a0        // arg1

    loc_0x8046eb3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472c54: // orphan
         lwc1 f18, 0x28, a1       // arg2
         swc1 f0, 0x2c, a0        // arg1
         swc1 f18, 0x28, a0       // arg1
         lwc1 f4, 8, sp
         swc1 f4, 0x30, a0        // arg1
         lwc1 f6, 0xc, sp
         swc1 f6, 0x34, a0        // arg1
         lwc1 f8, 0x10, sp
         swc1 f10, 0x3c, a0       // arg1
         ret
         swc1 f8, 0x38, a0        // arg1

    loc_0x8046eb48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472fb0: // orphan
         swc1 f18, 8, s0
         lwc1 f4, 0x58, sp
         swc1 f4, 0x30, s0
         lwc1 f6, 0x4c, sp
         mul.s f8, f6, f0
         swc1 f8, 0x10, s0
         lwc1 f10, 0x50, sp
         mul.s f16, f10, f0
         swc1 f16, 0x14, s0
         lwc1 f18, 0x54, sp
         mul.s f4, f18, f0
         swc1 f4, 0x18, s0
         lwc1 f6, 0x5c, sp
         swc1 f6, 0x34, s0
         lwc1 f8, 0x24, sp
         mul.s f10, f8, f0
         swc1 f10, 0x20, s0
         lwc1 f16, 0x28, sp
         mtc1 at, f10
         mul.s f18, f16, f0
         swc1 f18, 0x24, s0
         lwc1 f4, 0x2c, sp
         mul.s f6, f4, f0
         swc1 f6, 0x28, s0
         lwc1 f8, 0x60, sp
         swc1 f2, 0xc, s0
         swc1 f2, 0x1c, s0
         swc1 f2, 0x2c, s0
         swc1 f10, 0x3c, s0
         swc1 f8, 0x38, s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x48
         ret
         

    loc_0x8046eb54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8047303c: // orphan
         sp -= 0x68
         [sp + 0x24] = ra
         [sp + 0x68] = a0
         [sp + 0x6c] = a1
         [sp + 0x70] = a2
         [sp + 0x74] = a3
         t6 = sp + 0x68           // fp
         t8 = [t6 + 0]
         t9 = sp + 0x74
         lwc1 f4, 0x7c, sp
         [sp + 4] = t8
         a2 = [t6 + 4]
         a1 = [sp + 4]
         a0 = sp + 0x28           // arg1
         [sp + 8] = a2
         a3 = [t6 + 8]
         [sp + 0xc] = a3
         lwl t1
         lwr t1, 3, t9
         swl t1, 0x10, sp
         swr t1, 0x13, sp
         t1 = , unsigned  halfword [t9 + 4]
         swc1 f4, 0x18, sp
         call 0x84103a3c          // 0x84103a3c(0x177fc0, 0x0, 0x0, 0x0)
         halfword [sp + 0x14] = t1
         call 0x841037a0          // 0x841037a0(0x177fc0, 0x0, 0x0, 0x0)
         a0 = sp + 0x28
         ra = [sp + 0x24]
         sp += 0x68               // fp
         ret
         

    loc_0x8046eb60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472de8: // orphan
         [sp + 0xc] = a3
         lwc1 f4, 4, a1           // arg2
         at = 0x8009 << 16
         at += v0
         mul.s f6, f4, f0
         lwc1 f2, -0x71b0, at
         lwc1 f8                  // arg2
         lwc1 f14, 0x14, sp
         mtc1 0, f16
         mul.s f10, f8, f2
         neg.s f12, f0
         at = 0x3f80 << 16
         add.s f18, f6, f10
         swc1 f18                 // arg1
         lwc1 f4, 0x14, a1        // arg2
         lwc1 f6, 0x10, a1        // arg2
         mul.s f8, f4, f0
         
         mul.s f10, f6, f2
         add.s f18, f8, f10
         swc1 f18, 4, a0          // arg1
         lwc1 f4, 0x24, a1        // arg2
         lwc1 f8, 0x20, a1        // arg2
         swc1 f16, 0xc, a0        // arg1
         mul.s f6, f4, f0
         
         mul.s f10, f8, f2
         add.s f18, f6, f10
         swc1 f18, 8, a0          // arg1
         lwc1 f4, 4, a1           // arg2
         lwc1 f6                  // arg2
         mul.s f8, f4, f2
         
         mul.s f10, f6, f12
         add.s f18, f8, f10
         mul.s f4, f18, f14
         swc1 f4, 0x10, a0        // arg1
         lwc1 f6, 0x14, a1        // arg2
         lwc1 f10, 0x10, a1       // arg2
         mul.s f8, f6, f2
         
         mul.s f18, f10, f12
         add.s f4, f8, f18
         mul.s f6, f4, f14
         swc1 f6, 0x14, a0        // arg1
         lwc1 f10, 0x24, a1       // arg2
         lwc1 f18, 0x20, a1       // arg2
         swc1 f16, 0x1c, a0       // arg1
         mul.s f8, f10, f2
         
         mul.s f4, f18, f12
         add.s f6, f8, f4
         mul.s f10, f6, f14
         swc1 f10, 0x18, a0       // arg1
         lwc1 f18, 8, a1          // arg2
         swc1 f18, 0x20, a0       // arg1
         lwc1 f8, 0x18, a1        // arg2
         swc1 f8, 0x24, a0        // arg1
         lwc1 f4, 0x28, a1        // arg2
         swc1 f16, 0x2c, a0       // arg1
         mtc1 at, f8
         swc1 f4, 0x28, a0        // arg1
         lwc1 f6, 8, sp
         swc1 f6, 0x30, a0        // arg1
         lwc1 f10, 0xc, sp
         swc1 f10, 0x34, a0       // arg1
         lwc1 f18, 0x10, sp
         swc1 f8, 0x3c, a0        // arg1
         ret
         swc1 f18, 0x38, a0       // arg1

    loc_0x8046eb6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804730c4: // orphan
         [sp + 0x6c] = a1
         [sp + 0x70] = a2
         [sp + 0x74] = a3
         t6 = sp + 0x68
         t8 = [t6 + 0]            // t1
         t9 = sp + 0x74
         lwc1 f4, 0x7c, sp
         [sp + 4] = t8
         a2 = [t6 + 4]
         a1 = [sp + 4]            // t1
         a0 = sp + 0x28           // arg1
         [sp + 8] = a2
         a3 = [t6 + 8]
         [sp + 0xc] = a3
         lwl t1
         lwr t1, 3, t9
         swl t1, 0x10, sp
         swr t1, 0x13, sp
         t1 = , unsigned  halfword [t9 + 4]
         swc1 f4, 0x18, sp
         call 0x84103bcc          // 0x84103bcc(0x178028, 0x8c5e0, 0x0, 0x0)
         halfword [sp + 0x14] = t1
         call 0x841037a0          // 0x841037a0(0x178028, 0x8c5e0, 0x0, 0x0)
         a0 = sp + 0x28
         ra = [sp + 0x24]
         sp += 0x68
         ret
         

    loc_0x8046eb78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473200: // orphan
         call 0x84103ea8          // 0x84103ea8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = t8
         call 0x841037a0          // 0x841037a0(0x0, 0x0, 0x0, 0x0)
         a0 = sp + 0x20
         ra = [sp + 0x1c]
         sp += 0x60
         ret
         

    loc_0x8046eb84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8047328c: // orphan
         
         sp -= 0x60
         [sp + 0x1c] = ra
         [sp + 0x60] = a0
         [sp + 0x64] = a1
         [sp + 0x68] = a2
         [sp + 0x6c] = a3
         t6 = sp + 0x64
         t8 = [t6 + 0]
         a1 = [sp + 0x60]
         lwc1 f4, 0x70, sp
         [sp + 8] = t8
         a3 = [t6 + 4]
         a2 = [sp + 8]
         a0 = sp + 0x20           // arg1
         [sp + 0xc] = a3
         t8 = [t6 + 8]
         a1 += 0x64               // arg2
         swc1 f4, 0x14, sp
         call 0x84103f58          // 0x84103f58(0x177fc0, 0x64, 0x0, 0x0)
         [sp + 0x10] = t8
         call 0x841037a0          // 0x841037a0(0x177fc0, 0x64, 0x0, 0x0)
         a0 = sp + 0x20
         ra = [sp + 0x1c]
         sp += 0x60               // fp
         ret
         

    loc_0x8046eb90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80472f78: // orphan
         a2 = sp + 0x4c           // arg3
         call 0x80035a10          // "\u01e0" // 0x80035a10(0x0, 0x0, 0x17804c, 0x0)
         a0 = sp + 0x24
         lwc1 f0, 0x68, sp
         lwc1 f4, 0x30, sp
         mtc1 0, f2
         at = 0x3f80 << 16
         mul.s f6, f4, f0
         swc1 f6
         lwc1 f8, 0x34, sp
         mul.s f10, f8, f0
         swc1 f10, 4, s0
         lwc1 f16, 0x38, sp
         mul.s f18, f16, f0

    loc_0x8046eb9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473434: // orphan
         ret
         v0 = [a0 + 0x14]         // arg1

    loc_0x8046eba8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804734e0: // orphan
         a0 = 0x8419 << 16
         a0 -= 0x73f0             // arg1
         call 0x84105ca0          // 0x84105ca0(0x84188c10, 0x0, 0x0, 0x0)
         [sp + 0x18] = a1
         a1 = [sp + 0x18]
         t7 = , unsigned  byte [a1 + 2]
         [a1 + 0x168] = 0
         a0 = a1
         t8 = t7 & 0xfffd
         call 0x8003f1dc          // 0x8003f1dc(0x0, 0x0, 0x0, 0x0)
         byte [a1 + 2] = t8
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x8046ebb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8047358c: // orphan
         a3 = [a3 - 0x35e0]       // arg4
         a1 = 0
         call 0x8003f114          // 0x8003f114(0x0, 0x0, 0x0, -1)
         a2 = 0 - 1
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8046ebc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473638: // orphan
         sp += 0x18
         ret
         

    loc_0x8046ebcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804736e4: // orphan
         t9 = v1 + t8
         lwc1 f4
         swc1 f4, 0x38, s0
         t0 = [a2 + 0x10]         // arg3
         t1 = [t0 + 0x10]
         t2 = halfword [t1 + 2]
         unsigned , hi
         t3 = lo
         t4 = v1 + t3
         lwc1 f6, 4, t4
         swc1 f6, 0x3c, s0
         t5 = [a2 + 0x10]         // arg3
         t6 = [t5 + 0x10]
         t7 = halfword [t6 + 2]
         unsigned , hi
         t8 = lo
         t9 = v1 + t8
         lwc1 f8, 8, t9
         goto 0x804739a4
         swc1 f8, 0x40, s0

    loc_0x804739a4: // orphan
         // CODE XREF from fcn.8046e92c @ 0x8047372c
         ra = [sp + 0x1c]

    loc_0x8046ebd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473770: // orphan
         a1 = 0x400 << 16
         if                       // likely
         a0 = [sp + 0x28]

    loc_0x804737b0: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a1 = 0x10 << 16
         if                       // likely
         a0 = [sp + 0x28]

    loc_0x80473818: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a1 = 0x20 << 16
         if                       // likely
         a2 = s0 + 0x38

    loc_0x80473830: // orphan
         v0 = , unsigned  byte [s0 + 0x7e]

    loc_0x8047385c: // orphan
         t1 = [sp + 0x34]
         a0 = [sp + 0x28]
         if                       // likely
         

    loc_0x80473850: // orphan
         a0 = [s0 + 8]
         call 0x8411dccc          // 0x8411dccc(0x1c0c, 0x0, 0x0, 0x0)
         a1 = a2

    loc_0x80473828: // orphan
         goto 0x80473834
         v0 = 0 + 0x64

    loc_0x80473834: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80473828
         a0 = [s0 + 8]
         a1 = v0 << 0x10
         a1 = , signed  a1 >> 0x10
         call 0x8003c9b8          // 0x8003c9b8(0x1c0c, 0x0, 0x0, 0x0)
         [sp + 0x24] = a2
         if                       // unlikely
         a2 = [sp + 0x24]

    loc_0x804737c0: // orphan
         a0 = [s0 + 8]
         call 0x8411dccc          // 0x8411dccc(0x1c0c, 0x0, 0x0, 0x0)
         a1 = s0 + 0x38
         t0 = [sp + 0x34]
         a0 = [sp + 0x28]
         if                       // likely
         

    loc_0x804738a4: // orphan
         // CODE XREFS from fcn.8046e92c @ 0x804737a8, 0x804737f0
         call 0x8411e1f8          // 0x8411e1f8(0x0, 0x0, 0x0, 0x0)
         a0 = [s0 + 8]
         t2 = 0x8419 << 16
         t2 = [t2 + 0x3dd0]
         t3 = v0 << 4
         t4 = t2 + t3
         t5 = , unsigned  halfword [t4 + 0x12]
         t6 = t5 & 4
         beql t6, 0, 0x80473960   // unlikely
         a0 = [sp + 0x34]

    loc_0x80473960: // orphan
         a1 = 0 + 0x20
         call 0x81100054          // "P@" // 0x81100054(0x0, 0x20, 0x0, 0x0)
         a0 += 8
         beql v0, 0, 0x804739a8   // likely
         ra = [sp + 0x1c]

    loc_0x804738cc: // orphan
         a0 = [sp + 0x34]
         a1 = 0 + 8
         call 0x81100054          // 0x81100054(0x0, 0x8, 0x0, 0x0)
         a0 += 8
         if                       // unlikely
         a0 = [sp + 0x28]

    loc_0x804737dc: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a1 = 4 << 16
         if                       // likely
         a0 = [sp + 0x28]

    loc_0x804737f8: // orphan
         call 0x81100054          // 0x81100054(0x0, 0x0, 0x0, 0x0)
         a1 = 8 << 16
         if                       // likely
         

    loc_0x804737ec: // orphan
         mtc1 0, f10
         goto 0x804738a4
         swc1 f10, 0x3c, s0

    loc_0x8047377c: // orphan
         call 0x8411e1d4          // 0x8411e1d4(0x0, 0x0, 0x0, 0x0)
         a0 = [s0 + 8]
         mtc1 v0, f10
         at = 0xc316 << 16
         mtc1 at, f18
         cvt.s.w f16, f10
         mtc1 0, f6
         mtc1 0, f8
         swc1 f6, 0x3c, s0
         swc1 f8, 0x40, s0
         mul.s f4, f16, f18
         goto 0x804738a4
         swc1 f4, 0x38, s0

    loc_0x8046ebe4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ebf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804738f8: // orphan
         lwc1 f18, 0x24, a0       // arg1
         swc1 f18, 0x38, s0
         lwc1 f4, 0x2c, a0        // arg1
         call 0x8411e1bc          // 0x8411e1bc(0x0, 0x0, 0x0, 0x0)
         swc1 f4, 0x40, s0
         t7 = [s0 + 8]
         at = 0x41f0 << 16
         mtc1 at, f2
         lwc1 f6, 0x28, t7
         a1 = 8 << 16
         add.s f8, f0, f6
         swc1 f8, 0x3c, s0
         lwc1 f10, 0x3c, s0
         c.le.s f2, f10
         
         bc1f 0x80473940
         
         swc1 f2, 0x3c, s0
         call 0x81100054          // "P@" // 0x81100054(0x0, 0x80000, 0x0, 0x0)
         a0 = [sp + 0x28]
         beql v0, 0, 0x80473960   // likely
         a0 = [sp + 0x34]

    loc_0x80473950: // orphan
         mtc1 0, f16
         
         swc1 f16, 0x3c, s0
         a0 = [sp + 0x34]

    loc_0x804739a8: // orphan
         s0 = [sp + 0x18]
         sp += 0x38
         ret
         

    loc_0x80473974: // orphan
         mtc1 0, f0
         v0 = 0x8419 << 16
         v0 += 0x20
         swc1 f0, 0x2c, s0
         swc1 f0, 0x30, s0
         swc1 f0, 0x34, s0
         lwc1 f18
         swc1 f18, 0x38, s0
         lwc1 f4, 4, v0
         swc1 f4, 0x3c, s0
         lwc1 f6, 8, v0
         swc1 f6, 0x40, s0

    loc_0x8046ebfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473a34: // orphan
         mfc1 a1, f4
         call 0x84105930          // 0x84105930(0x0, 0x0, 0x0, 0x0)
         
         goto 0x80473a54
         lwc1 f6, 0x38, s0

    loc_0x80473a54: // orphan
         // CODE XREF from fcn.8046e92c @ 0x80473a40
         lwc1 f8, 0x2c, s0
         lwc1 f16, 0x44, s0
         lwc1 f4, 0x50, s0
         add.s f10, f6, f8
         a0 = s2 + 8
         a1 = 0 + 0x10
         add.s f18, f10, f16
         add.s f6, f18, f4
         swc1 f6, 0x24, s1
         lwc1 f10, 0x30, s0
         lwc1 f8, 0x3c, s0
         lwc1 f18, 0x48, s0
         lwc1 f6, 0x54, s0
         add.s f16, f8, f10
         add.s f4, f16, f18
         add.s f8, f4, f6
         swc1 f8, 0x28, s1
         lwc1 f16, 0x34, s0
         lwc1 f10, 0x40, s0
         lwc1 f4, 0x4c, s0
         lwc1 f8, 0x58, s0
         add.s f18, f10, f16
         add.s f6, f18, f4
         add.s f10, f6, f8
         swc1 f10, 0x2c, s1
         call 0x81100054          // 0x81100054(0x8, 0x10, 0x0, 0x0)
         [sp + 0x2c] = a0
         if                       // likely
         a1 = s2

    loc_0x8046ec08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80473ba0: // orphan
         a1 = halfword [t1 + 2]
         a0 = [sp + 0x30]
         call 0x81100054          // "P@" // 0x81100054(0x0, 0xffff, 0x0, 0x0)
         a1 = 0 | 0x8000
         beql v0, 0, 0x80473bc4   // likely
         t2 = , unsigned  byte [s0 + 0x87]

    loc_0x8046ec14: // orphan
         if                       // unlikely
         if                       // unlikely

}

*/
