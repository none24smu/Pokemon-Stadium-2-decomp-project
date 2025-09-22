/*
 * Function: 0x803f9f00
 * ROM Offset: 0x002faf00
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.803f9f00 (int esi, int edx) {
if            // unlikely
if            // likely
// } else {
// } else {
}
return eax;
if            // unlikely
if            // likely
if                       // likely
if                       // unlikely
}

/*
// Full analysis output
int fcn.803f9f00 (int esi, int edx) {
    loc_0x803f7c00:
        lwc1 f4, 0x14, s2
        lwc1 f6, 0x18, s2
        a0 = s4
        swc1 f4, 0x98, s2
        call 0x86b0bb24 // 0x86b0bb24(0x0, 0x0, 0x0, 0x0)
        swc1 f6, 0x9c, s2
        lwc1 f8, 0x14, s2
        mul.s f10, f8, f30
        div.s f4, f10, f22
        trunc.w.s f6, f4
        mfc1 t2, f6
        0x803f7c2c
        byte [s3 + 0x49c] = t2
        lwc1 f8, 0x18, s2
        mul.s f10, f8, f30
        div.s f4, f10, f22
        trunc.w.s f6, f4
        mfc1 t4, f6
        0x803f7c48
        byte [s3 + 0x49d] = t4
        t5 = [s5 + 0x354]
        bnel t5, 0, 0x803f7da0 // likely
        v0 = [s0 + 0x34]
            
    loc_0x803f7da0:
        at = 0x4348 << 16
        mtc1 at, f22
        at = , unsigned  , v0 < 0x18
        if            // unlikely
        t7 = v0 << 2
            
    loc_0x803fa040:
        s4 += 1
        at = 0 + 4
        s2 += 8
        s3 += 2
        s6 += 4
        s0 += 4
        if            // likely
        [s0 + 0xb4] = v0
    loc_0x803fa060:
        ra = [sp + 0x7c]
        ldc1 f20, 0x28, sp
        ldc1 f22, 0x30, sp
        ldc1 f24, 0x38, sp
        ldc1 f26, 0x40, sp
        ldc1 f28, 0x48, sp
        ldc1 f30, 0x50, sp
        s0 = [sp + 0x58]
        s1 = [sp + 0x5c]
        s2 = [sp + 0x60]
        s3 = [sp + 0x64]
        s4 = [sp + 0x68]
        s5 = [sp + 0x6c]
        s6 = [sp + 0x70]
        s7 = [sp + 0x74]
        fp = [sp + 0x78]
        ret
        sp += 0x190
         // } else {
    loc_0x803f7db4:
        at = 0x86b1 << 16
        at += t7
        t7 = [at - 0x21e8]
        goto t7
        0x803f7dc4
         // } else {
        }
        return eax;
        goto loc_0x803f7c5c
    loc_0x803f7c78:
        t9 = [t9 - 0x7e40]
        at = 0 + 6
        t1 = [t9 + 0]
        bnel t1, at, 0x803f7da0 // likely
        v0 = [s0 + 0x34]
    loc_0x803f7c8c:
        t2 = [s0 + 0x34]
        at = 0 + 2
        bnel t2, at, 0x803f7da0 // likely
        v0 = [s0 + 0x34]
    loc_0x803f7c9c:
        lwc1 f8, 0x48, s0
        c.eq.s f20, f8
        0x803f7ca4
        bc1fl 0x803f7da0
        v0 = [s0 + 0x34]
        lwc1 f12, 0xfc, s0
        call 0x86b080d4 // 0x86b080d4(0x0, 0x0, 0x0, 0x0)
        lwc1 f14, 0xf8, s5
        at = 0x86b1 << 16
        ldc1 f10, -0x21f0, at
        cvt.d.s f4, f0
        t3 = s4 << 2
        c.le.d f4, f10
        t3 += s4
        t3 <<= 3
        v0 = 0x800d << 16
        bc1f 0x803f7d9c
        v0 += t3
        v0 = , unsigned  halfword [v0 - 0x1f98]
        a0 = 0 | 0xaf02
        t4 = v0 & 0x8000
        if            // unlikely
        t2 = v0 & 0x4000
            
    loc_0x803f7d70:
        if            // likely
        t4 = 0 + 0xc
            
    loc_0x803f7d9c:
        v0 = [s0 + 0x34]
    loc_0x803f7cf8: // orphan
             t5 = [s5 + 0x284]
             t7 = 0 + 6
             [s0 + 0x34] = t7
             [s0 + 0x374] = t5
             t9 = [s5 + 0x288]
             t6 = 0 + 1
             [sp + 0x178] = t6
             v0 = t5 - t9
             t1 = v0 - 5
             if                       // likely
             a2 = s3 + 0x49c

    loc_0x803f7d24: // orphan
         t2 = 0x86b1 << 16
         t2 = [t2 - 0x1f60]
         t4 = [sp + 0x16c]
         t8 = [sp + 0x16c]
         if                       // unlikely
         t3 = v0 << 2

    loc_0x803f7d3c: // orphan
         t3 -= v0
         t5 = t3 + t4
         t7 = t5 - 0xf
         goto 0x803f7d60
         [s0 + 0x3a4] = t7

    loc_0x803f7d50: // orphan
         t6 = v0 << 2
         t9 = t6 + t8
         t1 = t9 - 0x14
         [s0 + 0x3a4] = t1

    loc_0x803f7d60: // orphan
         call 0x8002781c          // 0x8002781c(0x0, 0x0, 0x0, 0x0)
         a1 = s4 & 0xff
         goto 0x803f7da0
         v0 = [s0 + 0x34]

    loc_0x803f7d78: // orphan
         t3 = [s5 + 0x284]
         t5 = 0 + 1
         [s0 + 0x34] = t4
         [sp + 0x178] = t5
         a0 = 0 | 0xaf02
         a1 = s4 & 0xff
         a2 = s3 + 0x49c
         call 0x8002781c          // 0x8002781c(0xaf02, 0x0, 0x49c, 0x0)
         [s0 + 0x384] = t3

    loc_0x803f9f00: // orphan
         mfc1 t1, f10
         
         byte [s3 + 0x49c] = t1
         lwc1 f6, 0x18, s2
         mul.s f4, f6, f30
         div.s f8, f4, f20
         trunc.w.s f10, f8
         mfc1 t3, f10
         call 0x86b07d94          // 0x86b07d94(0x0, 0x0, 0x0, 0x0)
         byte [s3 + 0x49d] = t3
         at = 0x4348 << 16
         mtc1 at, f22
         at = 0x4302 << 16
         mtc1 at, f20
         goto 0x803fa040
         v0 = [s0 + 0x34]

}

*/
