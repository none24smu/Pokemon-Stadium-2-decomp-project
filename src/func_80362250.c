int fcn.80353c80 (int esi, int edx) {
    loc_0x80353c80:
        // CALL XREF from fcn.82d26944 @ +0x40
        0x80353c80
        0x80353c84
        if            // fcn.803547f0+0xaa4c // unlikely
        if            // unlikely
            
    loc_0x8035f280:
        div.s f10, f6, f2
        div.s f16, f18, f2
        swc1 f10, 0x50, sp
        div.s f8, f4, f2
        swc1 f16, 0x54, sp
        goto 0x8035f2a8
        swc1 f8, 0x58, sp
         // do {
    loc_0x8035f2a8:
        // CODE XREF from fcn.80353c80 @ 0x8035f294
        t3 = [v0 + 0] // t9
        lwc1 f10, 0x50, sp
        lwc1 f4, 0x10, s2
        t4 = t3 + v1
        lwc1 f18, 0x17a8, t4
        mul.s f16, f10, f18
        add.s f8, f4, f16
        lwc1 f4, 0x14, s2
        swc1 f8, 0x10, s2
        t5 = [v0 + 0] // t9
        lwc1 f6, 0x54, sp
        t6 = t5 + v1
        lwc1 f10, 0x17a8, t6
        mul.s f18, f6, f10
        add.s f16, f4, f18
        lwc1 f4, 0x18, s2
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80353c94
    loc_0x80353ca0:
        0x80353ca0
        0x80353ca4
        if            // unlikely
        0x80353cac
            
    loc_0x8035f518:
        goto 0x8035f52c
        [s1 + 0xc4] = t5
         // do {
    loc_0x8035f52c:
        // CODE XREFS from fcn.80353c80 @ 0x8035f518, 0x8035f520
        ra = [sp + 0x24]
        s0 = [sp + 0x14]
        s1 = [sp + 0x18]
        s2 = [sp + 0x1c]
        s3 = [sp + 0x20]
        ret
        sp += 0x28
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80353cb0
    loc_0x80353cbc:
        if            // unlikely
        if            // unlikely
            
    loc_0x8035f8b4:
        a0 -= 0x52e0  // arg1
        t7 = [a0 + 0] // arg1 // t9
        at = 0x4458 << 16
        mtc1 at, f2
        a3 = 0 | 0x8000 // arg4
        at = 0x3f00 << 16
        t8 = t7 + a3  // arg4
        lwc1 f16, 0x1774, t8
        mtc1 at, f4
        a1 = 0x87f1 << 16
        a1 += 0x19dc  // arg2
        mul.s f18, f16, f4
        v0 = [a1 + 0] // arg2 // t9
        neg.s f10, f2
        a2 = 0x8611 << 16
        lwc1 f6, 0x48, v0
        a2 -= 0x5ef4  // arg3
        add.s f8, f6, f18
        swc1 f8, 0x48, v0
        v0 = [a1 + 0] // arg2 // t9
        lwc1 f0, 0x48, v0
        c.lt.s f0, f10
        0x8035f90c
        bc1fl 0x8035f9cc
        ra = [sp + 0x14]
        add.s f16, f2, f2
        add.s f4, f0, f16
        swc1 f4, 0x48, v0
        t9 = [a0 + 0] // arg1
        v1 = t9 + a3  // arg4
        t0 = [v1 + 0x17b4] // t9
        bgezl t0, 0x8035f9cc // likely
        ra = [sp + 0x14]
            
    loc_0x8035f9cc:
        sp += 0x30
        ret           // ra
        0x8035f9d4
         // } else {
    loc_0x8035f938:
        t1 = [v1 + 0xf18] // t9
        t3 = [sp + 0x2c]
        t7 = [sp + 0x2c]
        bnel t1, 0, 0x8035f96c // likely
        t6 = , unsigned  byte [a2 + 2] // arg3 // s4
         // } while (?);
        }
        return eax;
        goto loc_0x80353cc8
    loc_0x80353cd4:
        0x80353cd4
        if            // unlikely
        if            // unlikely
            
    loc_0x8035fc30:
        sdc1 f28, 0x48, sp
        at = 0x442f << 16
        mtc1 at, f28
        sdc1 f24, 0x38, sp
        at = 0x4f80 << 16
        mtc1 at, f24
        [sp + 0x74] = s7
        sdc1 f26, 0x40, sp
        sdc1 f22, 0x30, sp
        at = 0x3f80 << 16
        [sp + 0x78] = fp
        [sp + 0x70] = s6
        [sp + 0x6c] = s5
        [sp + 0x60] = s2
        [sp + 0x58] = s0
        s7 = 0x8611 << 16
        mtc1 at, f22
        mtc1 0, f26
        s5 = a0       // t9
        [sp + 0x7c] = ra
        [sp + 0x68] = s4
        [sp + 0x64] = s3
        [sp + 0x5c] = s1
        sdc1 f20, 0x28, sp
        s7 -= 0x52e0
        s0 = 0 + 0xff // s4
        s2 = 0 + 0xc8
        s6 = 0
        fp = 0 | 0x8000
         // do {
    loc_0x8035fca4:
        call 0x8003570c // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
        0x8035fca8
        call 0x8003570c // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
        s1 = v0       // s4
        call 0x8003570c // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
        s3 = v0       // s4
        call 0x8003570c // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
        s4 = v0
        t0 = [s7 + 0] // t9
        mtc1 s1, f4
        at = 0 | 0x8ff8
        a1 = 0
        a0 = t0 + at
        if            // likely
        cvt.s.w f6, f4
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80353ce4
    loc_0x80353cec:
        0x80353cec
         // do {
    loc_0x80353cf0:
        0x80353cf0
        if            // unlikely
        0x80353cf8
         // } while (?);
        }
        return eax;
    loc_0x80353cfc:
        if            // unlikely
        if            // unlikely
            
    loc_0x8035ff54:
        s3 = [sp + 0x64] // t9
        s4 = [sp + 0x68]
        s5 = [sp + 0x6c] // t9
        s6 = [sp + 0x70]
        s7 = [sp + 0x74] // t9
        fp = [sp + 0x78]
        ret           // ra
        sp += 0x80
         // } else {
    loc_0x80353d08:
        if            // unlikely
        0x80353d0c
        }
        return eax;
    loc_0x80353d10:
        if            // unlikely
        if            // unlikely
            
    loc_0x8035ffd8:
        a0 = [s3 + 0] // t9
        t8 = [a0 + 0x20] // arg1 // t9
        beql a1, t8, 0x8035fffc // unlikely
        t1 = [a0 + 0x1c] // arg1 // t9
            
    loc_0x8035fffc:
        // CODE XREF from fcn.81e03ff4 @ +0x8a8
        at = , t1 < 0x10
        // chop
         // do {
    loc_0x80360000:
        // XREFS: UNKNOWN 0x805b7bf8  UNKNOWN 0x805bd948  CALL 0x82657940
        // XREFS: UNKNOWN 0x83727c34  UNKNOWN 0x83d37080  UNKNOWN 0x83f21c74
        bnel at, 0, 0x80360070 // fcn.80353c80+0xc3f0 // likely
        s0 += 1
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80353d1c
    loc_0x80353d2c:
        0x80353d2c
        if            // unlikely
        if            // unlikely
            
    loc_0x80360228:
        0x80360228
        t6 = [a1 + 0xc] // arg2 // t9
        t8 = 0x8611 << 16
        at = 0 | 0x8de0
        t7 = t6 << 0xb
        if            // likely
        0x80360240
        // chop
    loc_0x80353d3c: // orphan
             
             if                       // fcn.80360284 // unlikely

    loc_0x80353d44: // orphan
         if                       // unlikely
         

    loc_0x80353d4c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353d5c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353d6c: // orphan
         if                       // fcn.80344cc0+0x1bd00 // unlikely
         if                       // unlikely

    loc_0x80353d78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353d84: // orphan
         

    loc_0x80353d88: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353d98: // orphan
         if                       // fcn.803547f0+0xc88c // unlikely
         if                       // unlikely

    loc_0x80353da4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353db0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353dbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353dc8: // orphan
         

    loc_0x80353dcc: // orphan
         if                       // fcn.80361344+0x9c // unlikely
         if                       // unlikely

    loc_0x80353dd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353de4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353df4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e28: // orphan
         if                       // fcn.80361948+0x74 // unlikely
         if                       // unlikely

    loc_0x80353e34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e40: // orphan
         
         
         
         
         if                       // fcn.80361c30+0x124 // unlikely
         if                       // unlikely

    loc_0x80353e5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353e8c: // orphan
         if                       // fcn.80362290+0x80 // unlikely
         if                       // unlikely

    loc_0x80353e98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353ea4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353eb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353ebc: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x80353ed0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353edc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353ee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353ef4: // orphan
         

    loc_0x80353ef8: // orphan
         if                       // fcn.80339168+0x29b94 // unlikely
         if                       // unlikely

    loc_0x80353f04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353f10: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353f24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353f30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353f3c: // orphan
         if                       // fcn.8036354c+0xa4 // unlikely
         if                       // unlikely

    loc_0x80353f48: // orphan
         if                       // unlikely
         

    loc_0x80353f50: // orphan
         

    loc_0x80353f54: // orphan
         
         if                       // unlikely

    loc_0x80353f5c: // orphan
         if                       // unlikely
         

    loc_0x80353f64: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035f3dc: // orphan
         [sp + 0x18] = s1
         [sp + 0x14] = s0
         s2 = [t6 + 0x20]         // t9
         v0 = 0x8611 << 16
         v0 -= 0x52e0
         t7 = [s2 + 0]            // t9
         s0 = [v0 + 0]            // t9
         at = 0 | 0x8de0
         t8 = t7 + 1
         [s2 + 0] = t8
         t9 = [v0 + 0]
         s1 = [s3 + 0]
         s0 += at
         at = 1 << 16
         at += t9
         lwc1 f6, -0x688c, at
         lwc1 f4, 0x48, s1
         at = 0x8611 << 16

    loc_0x8035f424: // orphan
         add.s f8, f4, f6
         swc1 f8, 0x48, s1
         t0 = [s2 + 0]            // t9
         lwc1 f18, -0x53ac, at
         mtc1 t0, f10
         
         cvt.s.w f16, f10
         mul.s f12, f16, f18
         call 0x80073f70          // 0x80073f70(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x4120 << 16
         mtc1 at, f4
         lwc1 f8, 4, s2
         t1 = [s3 + 0]
         mul.s f6, f0, f4
         s2 = 0 + 4
         s1 = 0
         add.s f10, f6, f8
         swc1 f10, 0x4c, t1

    loc_0x8035f470: // orphan
         a0 = s0
         call 0x861056c0          // "&1" // 0x861056c0(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s3 + 0]
         s1 += 1
         if                       // likely
         s0 += 0x2c

    loc_0x8035f488: // orphan
         s1 = [s3 + 0]
         at = 0x8611 << 16
         lwc1 f18, -0x53a8, at
         lwc1 f16, 0x48, s1
         a0 = 0x87f1 << 16
         a1 = s1

    loc_0x8035f4a0: // orphan
         c.lt.s f16, f18
         
         bc1fl 0x8035f4c4
         v1 = [s1 + 0xc]          // t9
         call 0x87f026e8          // 0x87f026e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         s1 = 0x87f1 << 16
         s1 = [s1 + 0x19dc]       // t9
         v1 = [s1 + 0xc]          // t9
         t7 = 0 - 0x100
         t2 = v1 << 3
         bgezl t2, 0x8035f52c     // likely
         [s1 + 0xc4] = t7

    loc_0x8035f4d4: // orphan
         v0 = [s1 + 0x1c]         // t9
         t5 = 0 + 0x9f

    loc_0x8035f4dc: // orphan
         t6 = 0 - 0x61
         at = , v0 < 0x10
         if                       // unlikely
         at = 0xefff << 16

    loc_0x8035f4ec: // orphan
         at |= 0xffff
         t3 = v1 & at
         [s1 + 0xc] = t3
         s1 = 0x87f1 << 16
         s1 = [s1 + 0x19dc]       // t9
         v0 = [s1 + 0x1c]         // t9

    loc_0x8035f504: // orphan
         at = 0 + 3
         div 0, v0, at
         t4 = hi
         if                       // unlikely
         

    loc_0x8035f51c: // orphan
         goto 0x8035f52c
         [s1 + 0xc4] = t5

    loc_0x8035f520: // orphan
         goto 0x8035f52c
         [s1 + 0xc4] = t6

    loc_0x8035f618: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x8035f620: // orphan
         if                       // likely
         

    loc_0x8035f628: // orphan
         break 6

    loc_0x8035f62c: // orphan
         t5 = 0xdb06 << 16
         t4 = v1 + 8
         t1 = lo
         [a2 + 0] = t4            // arg3
         t5 |= 0x3c
         a1 += t1                 // arg2
         [v1 + 0] = t5
         a1 = , unsigned  byte [a1 - 0x5f30] // arg2 // s4
         call 0x8004c990          // 0x8004c990(-1, 0xff, 0x8, -1)
         [sp + 0x18] = v1
         call 0x8004ca60          // 0x8004ca60(-1, 0xff, 0x8, -1)
         a0 = v0                  // s4
         t6 = [sp + 0x18]         // v1
         a2 = 0x800d << 16
         a2 += 0x510
         [t6 + 4] = v0
         v1 = [a2 + 0]            // t9
         t9 = 0x8611 << 16
         t9 -= 0x5690
         t7 = v1 + 8
         [a2 + 0] = t7
         t8 = 0xde00 << 16
         [v1 + 0] = t8
         call 0x8003cd84          // 0x8003cd84(0xff, 0xff, 0x800d0510, -1)
         [v1 + 4] = t9
         ra = [sp + 0x14]         // s0
         sp += 0x38
         ret                      // s0
         

    loc_0x8035f94c: // orphan
         t2 = , unsigned  byte [a2 + 1] // arg3
         t4 = 0 + 1               // lo
         [t3 + 0] = t2
         t5 = [a0 + 0]            // arg1
         at = t5 + 0x7fff
         goto 0x8035f9c8
         [at + 0xf19] = t4

    loc_0x8035f96c: // orphan
         at = 0x8611 << 16
         [t7 + 0] = t6
         lwc1 f6, -0x539c, at
         mul.s f12, f2, f6
         call 0x861072ac          // 0x861072ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8611 << 16
         v0 = [v0 - 0x52e0]       // t9
         v1 = 0xfffe << 16
         v1 |= 0xffff
         t0 = [v0 + 0x894]        // t9
         t2 = [v0 + 0xa20]        // t9
         t4 = [v0 + 0xbac]        // t9
         t8 = [v0 + 0x708]        // t9
         t1 = t0 & v1
         t3 = t2 & v1
         t5 = t4 & v1
         t9 = t8 & v1
         [v0 + 0xbac] = t5
         [v0 + 0xa20] = t3
         [v0 + 0x894] = t1
         v0 += 0xba0
         [v0 - 0x498] = t9

    loc_0x8035f9c8: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8035f960
         ra = [sp + 0x14]         // s0

    loc_0x8035fa70: // orphan
         t4 |= 0xffff             // t9
         [v1 + 0] = t4
         [v1 + 4] = t5
         v1 = [a2 + 0]            // arg3
         t7 = 0xde00 << 16
         t8 = 0x8611 << 16
         t6 = v1 + 8
         [a2 + 0] = t6            // arg3
         [v1 + 0] = t7
         t8 = [t8 - 0x52e0]       // t9
         t9 = [t8 + 0x6e0]
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t9
         ra = [sp + 0x14]         // s0
         sp += 0x28
         ret                      // s0
         

    loc_0x8035fc08: // orphan
         bc1f 0x8035fc18
         
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x8035fce0: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x8035fcf0: // orphan
         div.s f0, f6, f24
         t6 = t0 + fp
         lwc1 f10, 0x1768, t6
         v1 = 0x87f1 << 16
         v1 = [v1 + 0x19dc]       // t9
         mul.s f16, f30, f10
         at = 0x4f80 << 16
         lwc1 f6, 0x48, v1
         mul.s f2, f28, f16
         add.s f18, f0, f0
         mtc1 s3, f16
         sub.s f4, f18, f22
         cvt.s.w f18, f16
         mul.s f8, f4, f2
         add.s f10, f8, f6
         mfc1 a2, f10
         bgezl s3, 0x8035fd48     // likely
         div.s f12, f18, f24

    loc_0x8035fd38: // orphan
         mtc1 at, f4
         
         add.s f18, f18, f4
         div.s f12, f18, f24

    loc_0x8035fd48: // orphan
         lwc1 f16, 0x4c, v1
         lwc1 f18, 0x50, v1
         at = 0x4f80 << 16
         swc1 f18, 0x10, sp
         add.s f8, f12, f12
         sub.s f6, f8, f22
         mtc1 s4, f8
         mul.s f10, f6, f2
         cvt.s.w f6, f8
         add.s f4, f10, f16
         mfc1 a3, f4
         bgezl s4, 0x8035fd8c     // likely
         div.s f16, f6, f24

    loc_0x8035fd7c: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10
         div.s f16, f6, f24

    loc_0x8035fd8c: // orphan
         t7 = v0 & 0xf
         t8 = t7 + 0xa
         [sp + 0x18] = t8
         add.s f4, f16, f22
         call 0x87f0328c          // 0x87f0328c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f4, 0x14, sp
         if                       // unlikely
         s1 = v0                  // s4

    loc_0x8035fdac: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         s3 = [v0 + 0x20]         // t9
         mtc1 v0, f18
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f8, f18

    loc_0x8035fdc4: // orphan
         mtc1 at, f10
         
         add.s f8, f8, f10

    loc_0x8035fdd0: // orphan
         div.s f20, f8, f24
         at = 0x4040 << 16
         mtc1 at, f4
         t9 = [s7 + 0]
         t1 = t9 + fp
         lwc1 f10, 0x1774, t1
         add.s f6, f20, f20
         sub.s f16, f6, f22
         mul.s f18, f16, f4
         add.s f8, f18, f10
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f8, 0x10, s1
         mtc1 v0, f6
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f16, f6

    loc_0x8035fe10: // orphan
         mtc1 at, f4
         

    loc_0x8035fe18: // orphan
         add.s f16, f16, f4

    loc_0x8035fe1c: // orphan
         div.s f20, f16, f24
         at = 0x40f0 << 16
         mtc1 at, f10
         swc1 f26, 0x18, s1
         at = 0x8611 << 16
         add.s f18, f20, f20
         mul.s f8, f18, f10
         add.s f6, f8, f22
         swc1 f6, 0x14, s1
         swc1 f22, 0x18, s3
         v1 = [s1 + 0x20]         // t9
         swc1 f26, 0x20, v1
         lwc1 f4, -0x5390, at
         swc1 f26, 0x28, v1
         if                       // unlikely
         swc1 f4, 0x24, v1

    loc_0x8035fe5c: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x8035fe80: // orphan
         v0 = [s1 + 0x20]         // t9
         byte [v0 + 0x10] = s2
         byte [v0 + 0x11] = s2
         byte [v0 + 0x12] = s0
         byte [v0 + 0x13] = s0
         byte [v0 + 0x14] = 0
         byte [v0 + 0x15] = 0
         byte [v0 + 0x16] = s0
         goto 0x8035ff1c
         byte [v0 + 0x17] = s0

    loc_0x8035ff1c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8035fea0
         s6 += 1
         at = 0 + 5
         if                       // likely
         

    loc_0x8035ff2c: // orphan
         ra = [sp + 0x7c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         ldc1 f24, 0x38, sp
         ldc1 f26, 0x40, sp
         ldc1 f28, 0x48, sp
         ldc1 f30, 0x50, sp
         s0 = [sp + 0x58]
         s1 = [sp + 0x5c]
         s2 = [sp + 0x60]         // t9

    loc_0x8035ff7c: // orphan
         s1 = 0x8611 << 16
         s1 = [s1 - 0x52e0]       // t9
         [sp + 0x20] = s3
         [sp + 0x28] = s5
         [sp + 0x24] = s4
         [sp + 0x1c] = s2
         [sp + 0x14] = s0
         at = 0 | 0x8de0
         s3 = 0x87f1 << 16
         [sp + 0x2c] = ra
         [sp + 0x40] = a0
         [sp + 0x34] = 0
         // DATA XREF from fcn.81c03034 @ 0x81c1a18c
         s3 += 0x19dc
         s0 = 0
         s2 = 0x20 << 16
         s4 = 0x100 << 16
         s5 = 0 + 4
         s1 += at

    loc_0x8035ffc4: // orphan
         a1 = [s1 + 0]            // t9
         t6 = [a1 + 0xc]          // arg2 // t9
         t7 = t6 & s2             // t9
         bnel t7, 0, 0x80360070   // likely
         s0 += 1

    loc_0x8035fff8: // orphan
         t1 = [a0 + 0x1c]         // arg1 // t9

    loc_0x80360008: // orphan
         call 0x861060f8          // 0x861060f8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         t2 = 0x8611 << 16

    loc_0x80360070: // orphan
         if                       // likely
         s1 += 0x2c

    loc_0x80360078: // orphan
         ra = [sp + 0x2c]
         v0 = [sp + 0x34]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // t9
         ret                      // ra
         sp += 0x40

    loc_0x80360118: // orphan
         bc1f 0x80360144
         
         swc1 f2, 0x4c, v0
         v0 = [v1 + 0]            // t9
         at = 0xbf80 << 16
         mtc1 at, f6
         lwc1 f4, 0x14, v0
         mul.s f8, f4, f6
         swc1 f8, 0x14, v0
         v0 = [v1 + 0]            // t9
         // CODE XREF from fcn.80358e2c @ +0x940
         lwc1 f0, 0x4c, v0
         at = 0x8611 << 16
         lwc1 f2, -0x5388, at
         c.lt.s f0, f2
         
         bc1f 0x80360178
         
         swc1 f2, 0x4c, v0
         v0 = [v1 + 0]            // t9
         at = 0xbf80 << 16
         mtc1 at, f16
         lwc1 f10, 0x14, v0
         mul.s f18, f10, f16
         swc1 f18, 0x14, v0
         ret                      // ra
         

    loc_0x80360298: // orphan
         goto 0x803604d0
         swc1 f6, 0x4c, s0

    loc_0x803603d8: // orphan
         t1 = [s1 + 0]            // t9
         swc1 f6, 0x14, t1
         s0 = [s1 + 0]            // t9
         lwc1 f8, 0x14, s0
         swc1 f8, 0x10, s0
         s0 = [s1 + 0]            // t9
         t2 = [s0 + 0xc]          // t9
         t3 = t2 & at             // lo
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         [s0 + 0xc] = t3
         mtc1 v0, f10
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f4, f10

    loc_0x80360410: // orphan
         mtc1 at, f6
         
         add.s f4, f4, f6

    loc_0x8036041c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         at = 0x3f80 << 16
         mtc1 at, f6
         // CODE XREF from fcn.80358e2c @ +0x94c
         div.s f0, f4, f8
         at = 0x41f0 << 16
         mtc1 at, f8
         t4 = [s1 + 0]            // t9
         add.s f10, f0, f0
         sub.s f4, f10, f6
         mul.s f10, f4, f8
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10, 0x10, t4
         mtc1 v0, f6
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f4, f6

    loc_0x80360460: // orphan
         mtc1 at, f8
         
         add.s f4, f4, f8

    loc_0x8036046c: // orphan
         at = 0x4f80 << 16
         mtc1 at, f10
         at = 0x3f80 << 16
         mtc1 at, f8
         div.s f0, f4, f10
         at = 0x41f0 << 16
         mtc1 at, f10
         t5 = [s1 + 0]            // t9
         add.s f6, f0, f0
         sub.s f4, f6, f8
         mul.s f6, f4, f10
         swc1 f6, 0x14, t5
         t6 = [s1 + 0]            // t9
         [t6 + 0x1c] = 0
         t7 = [s1 + 0]            // t9
         goto 0x803604d0
         [t7 + 0x20] = 0

    loc_0x803604d0: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x80360298, 0x803604a8
         call 0x86106688          // 0x86106688(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = [s1 + 0]
         v1 = [t9 + 0x1c]
         at = , v1 < 0x3c         // lo
         if                       // unlikely
         at = 0 + 3

    loc_0x803604ec: // orphan
         div 0, v1, at
         t8 = hi
         bnel t8, 0, 0x80360684   // likely
         ra = [sp + 0x2c]

    loc_0x803604f8: // orphan
         div 0, v1, at
         t8 = hi
         bnel t8, 0, 0x80360684   // likely
         ra = [sp + 0x2c]

    loc_0x803604fc: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x34] = v0
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x38] = v0
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x3c] = v0
         at = 0x3ff0 << 16
         mtc1 at, f15
         t0 = [sp + 0x34]         // s4
         at = 0x403e << 16
         mtc1 at, f17
         at = 0x4f80 << 16
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         mtc1 t0, f6
         mtc1 at, f18
         at = 0 | 0x8ff8
         mtc1 0, f14
         mtc1 0, f16
         a1 = 0 + 1               // lo
         a0 += at
         if                       // likely
         cvt.s.w f8, f6

    loc_0x80360560: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         
         add.s f8, f8, f4

    loc_0x80360570: // orphan
         // CODE XREF from fcn.80358e2c @ +0x950
         div.s f10, f8, f18
         s0 = [s1 + 0]            // t9
         t1 = [sp + 0x38]         // s4
         at = 0x4f80 << 16
         cvt.d.s f0, f10
         lwc1 f10, 0x48, s0
         add.d f6, f0, f0
         sub.d f4, f6, f14
         cvt.d.s f6, f10
         mul.d f8, f4, f16
         add.d f4, f8, f6
         mtc1 t1, f8
         cvt.s.d f10, f4
         cvt.s.w f6, f8
         mfc1 a2, f10
         bgezl t1, 0x803605c4     // likely
         div.s f10, f6, f18

    loc_0x803605b4: // orphan
         // CODE XREF from fcn.80358e2c @ +0x954
         mtc1 at, f4
         
         add.s f6, f6, f4
         div.s f10, f6, f18

    loc_0x803605c4: // orphan
         t2 = [sp + 0x3c]         // s4
         at = 0x4f80 << 16
         cvt.d.s f2, f10
         lwc1 f10, 0x4c, s0
         add.d f8, f2, f2
         sub.d f4, f8, f14

    loc_0x80360680: // orphan
         ra = [sp + 0x2c]

    loc_0x80360684: // orphan
         v0 = [sp + 0x64]         // t9
         // CODE XREF from fcn.80358e2c @ +0x958
         s0 = [sp + 0x24]         // s4
         s1 = [sp + 0x28]         // t9
         ret                      // ra
         sp += 0x68

    loc_0x80360a54: // orphan
         t6 = 0 + 4

    loc_0x80360a58: // orphan
         goto 0x80360a80
         v1 = [a3 + 0]            // arg4 // t9

    loc_0x80360a80: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80360a58
         at = 0 - 0x100
         t1 = t9 | at             // s2
         t7 = v1 + 8
         [a3 + 0] = t7            // arg4
         [v1 + 0] = t8
         [v1 + 4] = t1
         v1 = [a3 + 0]            // arg4 // t9
         t3 = 0xdb06 << 16
         t3 |= 0x3c
         t2 = v1 + 8
         [a3 + 0] = t2            // arg4
         [v1 + 0] = t3
         a1 = [sp + 0x28]         // t9
         call 0x8004c990          // 0x8004c990(-1, -1, 0x8, -1)
         [sp + 0x18] = v1
         call 0x8004ca60          // 0x8004ca60(-1, -1, 0x8, -1)
         a0 = v0                  // s4
         t4 = [sp + 0x18]         // t9
         a3 = 0x800d << 16
         a3 += 0x510
         [t4 + 4] = v0
         v1 = [a3 + 0]
         t7 = 0x8611 << 16
         t7 -= 0x5770
         t5 = v1 + 8
         [a3 + 0] = t5
         t6 = 0xde00 << 16

    loc_0x80360aec: // orphan
         [v1 + 0] = t6
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t7
         ra = [sp + 0x14]         // s0
         sp += 0x38
         ret                      // s0
         

    loc_0x80360c00: // orphan
         if                       // likely
         v1 += 0xd0

    loc_0x80360c08: // orphan
         at = 0x4120 << 16
         v0 = t0 & 0xffff
         mtc1 at, f0
         v0 = , signed  v0 >> 4
         v0 <<= 2
         at = 0x8009 << 16
         at += v0

    loc_0x80360c24: // orphan
         lwc1 f6, -0x71b0, at
         at = 0x8008 << 16
         at += v0
         mul.s f8, f6, f0
         lwc1 f10, 0x7e50, at
         lwc1 f4, 8, v1
         a2 = [v1 + 0]
         mul.s f16, f10, f0
         a3 = [v1 + 4]
         mtc1 0, f18
         swc1 f8, 0x14, sp
         a0 = 0x8000 << 16
         a1 = [sp + 0x28]         // t9
         swc1 f4, 0x10, sp
         swc1 f16, 0x18, sp
         call 0x86107098          // 0x86107098(0x80000000, -1, 0xffff8aa1, 0x0)
         swc1 f18, 0x1c, sp

    loc_0x80360c68: // orphan
         ra = [sp + 0x24]         // s4
         sp += 0x28
         // CODE XREF from fcn.81753c48 @ +0x74
         ret                      // s4
         

    loc_0x80361004: // orphan
         at = 1 << 16
         at += t5
         swc1 f12, -0x682c, at
         at = 0x3f00 << 16
         mtc1 at, f8
         t6 = [v1 + 0]
         at = 1 << 16
         at += t6
         swc1 f8, -0x6840, at
         t7 = [v1 + 0]
         at = 1 << 16
         at += t7
         swc1 f0, -0x683c, at
         t8 = [v1 + 0]
         at = 1 << 16
         at += t8
         ret                      // ra
         swc1 f2, -0x6838, at

    loc_0x803610c0: // orphan
         a2 = 0
         call 0x87f04314          // 0x87f04314(-1, 0x442f71dcfe116408, 0x0, -1)
         [sp + 0x14] = 0
         s0 = [s1 + 0]            // t9
         at = 0 | 0x9780
         a3 = 0x8611 << 16
         t7 = s0 + at
         at = 0 | 0x9781
         t8 = s0 + at
         at = 0 | 0x9782
         t3 = 0 + 0xc
         t4 = 0 + 1               // lo
         t5 = 0 + 3
         t6 = 0 + 1               // lo
         t9 = s0 + at
         [sp + 0x2c] = t9
         [sp + 0x1c] = t6

    loc_0x80361104: // orphan
         [sp + 0x18] = t5
         [sp + 0x14] = t4
         [sp + 0x10] = t3
         [sp + 0x28] = t8
         [sp + 0x24] = t7
         a3 -= 0x55e4
         a0 = 0
         a1 = 0
         a2 = 0 + 1               // lo
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x1, 0xffffffffffffaa1b)
         [sp + 0x20] = 0
         s0 = [s1 + 0]            // t9
         at = 0 | 0x9784
         a3 = 0x8611 << 16
         t5 = s0 + at
         at = 0 | 0x9788
         t6 = s0 + at

    loc_0x80361148: // orphan
         // CODE XREF from fcn.80339030 @ 0x803597a4
         at = 0 | 0x978c
         t0 = 0 + 0xc
         t1 = 0 + 2
         t2 = 0 + 0xa
         t3 = 0 + 3
         t4 = 0 + 3
         t7 = s0 + at
         [sp + 0x2c] = t7
         [sp + 0x20] = t4
         [sp + 0x1c] = t3
         [sp + 0x18] = t2
         [sp + 0x14] = t1
         [sp + 0x10] = t0
         [sp + 0x28] = t6
         [sp + 0x24] = t5
         a3 -= 0x55d8
         a0 = 0

    loc_0x8036118c: // orphan
         a1 = 0
         call 0x87f04314          // 0x87f04314(-1, 0x0, 0x8, -1)
         a2 = 0 + 2
         s0 = [s1 + 0]            // t9
         at = 0 | 0x9790
         a3 = 0x8611 << 16
         t3 = s0 + at
         at = 0 | 0x9794

    loc_0x803611ac: // orphan
         // CODE XREF from fcn.80339030 @ 0x803597a8
         t4 = s0 + at
         at = 0 | 0x9798
         t8 = 0 + 0xc
         t9 = 0 + 3
         t0 = 0 + 0xa
         t1 = 0 + 1               // lo
         t2 = 0 + 5
         t5 = s0 + at
         [sp + 0x2c] = t5

    loc_0x803611d0: // orphan
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t0
         [sp + 0x14] = t9
         [sp + 0x10] = t8
         [sp + 0x28] = t4
         [sp + 0x24] = t3
         a3 -= 0x55cc
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x8, 0xffffffffffffaa33)
         a2 = 0 + 3
         s0 = [s1 + 0]            // t9
         at = 0 | 0x97a8
         a3 = 0x8611 << 16
         t1 = s0 + at
         at = 0 | 0x97ac

    loc_0x80361214: // orphan
         t2 = s0 + at
         at = 0 | 0x97b0
         t6 = 0 + 0xc
         t7 = 0 + 4
         t8 = 0 + 0xa
         t9 = 0 + 2
         t0 = 0 + 3
         t3 = s0 + at
         [sp + 0x2c] = t3
         [sp + 0x20] = t0

    loc_0x80361258: // orphan
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x8, -1)
         a2 = 0 + 4
         s0 = [s1 + 0]            // t9
         at = 0 | 0x979c
         a3 = 0x8611 << 16
         t9 = s0 + at
         at = 0 | 0x97a0

    loc_0x8036127c: // orphan
         t0 = s0 + at
         at = 0 | 0x97a4
         t4 = 0 + 0xc
         t5 = 0 + 5
         t6 = 0 + 0xa

    loc_0x80361290: // orphan
         t7 = 0 + 2
         t8 = 0 + 3
         t1 = s0 + at
         [sp + 0x2c] = t1
         // CODE XREF from fcn.80358e2c @ +0x980
         [sp + 0x20] = t8
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         [sp + 0x28] = t0
         [sp + 0x24] = t9
         a3 -= 0x55b4
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x8, 0xffffffffffffaa4b)
         a2 = 0 + 5
         s0 = [s1 + 0]            // t9
         at = 0 | 0x97cc
         a3 = 0x8611 << 16
         t7 = s0 + at
         at = 0 | 0x97d0

    loc_0x803612e4: // orphan
         t8 = s0 + at
         at = 0 | 0x97d4
         t2 = 0 + 0xc
         t3 = 0 + 6
         t4 = 0 + 0xa
         t5 = 0 + 4
         t6 = 0 + 5
         t9 = s0 + at
         [sp + 0x2c] = t9
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         [sp + 0x28] = t8
         [sp + 0x24] = t7
         a3 -= 0x55a8
         a0 = 0
         a1 = 0
         call 0x87f04314          // 0x87f04314(0x0, 0x0, 0x8, 0xffffffffffffaa57)
         a2 = 0 + 6
         s0 = [s1 + 0]            // t9
         at = 0 | 0x97c0
         a3 = 0x8611 << 16

    loc_0x80361414: // orphan
         at = 0 | 0x976c
         t1 = s0 + at
         at = 0 | 0x9770
         t5 = 0 + 0xc
         t6 = 0 + 9

    loc_0x80361428: // orphan
         // CODE XREF from fcn.80339030 @ 0x803597b4
         t7 = 0 + 0xa
         t8 = 0 + 3
         t9 = 0 + 3
         t2 = s0 + at
         [sp + 0x2c] = t2
         [sp + 0x20] = t9
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         [sp + 0x10] = t5
         [sp + 0x28] = t1
         [sp + 0x24] = t0
         a3 -= 0x5588
         a0 = 0

    loc_0x80361460: // orphan
         a1 = 0
         call 0x87f04314          // 0x87f04314(-1, 0x0, 0x8, -1)
         a2 = 0 + 9
         ra = [sp + 0x3c]         // s4
         s0 = [sp + 0x34]         // s4
         s1 = [sp + 0x38]         // s4
         ret                      // s4
         sp += 0x40

    loc_0x803615a0: // orphan
         call 0x80003120          // 0x80003120(-1, 0x442f71dcfe116408, 0x8, -1)
         [t4 + 0x6dc] = v0
         s1 = 0
         s0 = 0
         s3 = sp + 0x38

    loc_0x803615b4: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8036161c
         call 0x8004ddf4          // 0x8004ddf4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x35
         call 0x80002b24          // 0x80002b24(0x35, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t5 = [s4 + 0]
         s2 = v0                  // s4
         a0 = s3                  // t9
         // CODE XREF from fcn.80358e2c @ +0x98c
         a2 = 0
         a3 = s1
         call 0x87f0ad50          // 0x87f0ad50(-1, 0x0, 0x0, 0x442f71dcfe117dbd)
         a1 = [t5 + 0]            // s4
         a2 = [s3 + 0]
         a0 = s2                  // s4
         a1 = 0 + 0x35
         call 0x8004dfec          // 0x8004dfec(0xff, 0x35, 0xdb06003c, 0x442f71dcfe117dbd)
         [sp + 8] = a2
         t8 = [s4 + 0]
         a0 = s2                  // s4
         t9 = t8 + s0
         call 0x80003120          // "&1" // 0x80003120(0xff, 0x35, 0xdb06003c, 0x442f71dcfe117dbd)
         [t9 + 0x6cc] = v0
         s1 += 1
         at = , s1 < 4
         if                       // unlikely
         s0 += 4

    loc_0x80361624: // orphan
         call 0x8003efe0          // 0x8003efe0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s3 = 0x8611 << 16
         s3 -= 0x5310
         a1 = s3
         call 0x80037e9c          // 0x80037e9c(-1, 0x8610acf0, 0x8, -1)
         a0 = 0
         s2 = 0x8611 << 16
         s2 -= 0x52f8
         a1 = s2
         call 0x80037e9c          // 0x80037e9c(0x0, 0x8610ad08, 0x8, -1)
         a0 = 0
         call 0x861075dc          // 0x861075dc(0x0, 0x8610ad08, 0x8, -1)
         
         call 0x86107360          // 0x86107360(0x0, 0x8610ad08, 0x8, -1)
         
         call 0x80041e2c          // 0x80041e2c(0x0, 0x8610ad08, 0x8, -1)
         
         s0 = 0

    loc_0x80361670: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361688
         call 0x80041c98          // 0x80041c98(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         t1 = [s4 + 0]
         t2 = t1 + s0
         s0 += 4
         at = , s0 < 4
         if                       // unlikely
         [t2 + 0x6e4] = v0

    loc_0x80361690: // orphan
         t3 = [s4 + 0]
         t4 = 0x8611 << 16
         a2 = [t4 - 0x5e1c]       // t9
         a0 = [t3 + 0x6e4]        // t9
         // CODE XREF from fcn.80339030 @ 0x803597bc
         a1 = 0 + 0x7c
         call 0x80041fa0          // 0x80041fa0(-1, 0x7c, -1, -1)
         [sp + 8] = a2
         t5 = [s4 + 0]
         call 0x800428f8          // 0x800428f8(-1, 0x7c, -1, -1)
         a0 = [t5 + 0x6e4]        // t9
         call 0x87f024cc          // 0x87f024cc(-1, 0x7c, -1, -1)
         
         t0 = [s4 + 0]
         a0 = 0x87f1 << 16
         a0 += 0x5b70
         a3 = 0 + 4
         a1 = t0 + 0x7c
         call 0x87f0252c          // 0x87f0252c(0x87f15b70, 0x17b, -1, 0x4)
         a2 = t0 + 0x90
         t0 = [s4 + 0]

    loc_0x803616e0: // orphan
         a2 = 0 + 4
         a0 = t0 + 0x6e8
         call 0x87f024f4          // 0x87f024f4(0x442f71dcfe116af0, 0x442f71dcfe116408, 0x4, -1)
         a1 = t0 + 0x6fc
         a0 = [s4 + 0]
         at = 0 | 0x905c
         a1 = aav.0x80120000 << 16
         a1 += 0x6420
         call 0x86109f78          // 0x86109f78(0xff, 0x80126420, 0x4, -1)
         a0 += at
         t0 = [s4 + 0]
         a0 = s2
         a3 = 0 + 0x10
         a1 = t0 + 0xd2c
         call 0x87f0252c          // 0x87f0252c(-1, 0xe2b, 0x4, 0x10)
         a2 = t0 + 0xd40
         v0 = 0
         v1 = 0
         a0 = 0 | 0x8e90

    loc_0x8036172c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361748
         t0 = [s4 + 0]
         t6 = t0 + v1
         v1 += 8
         at = , v1 < 0x80
         t7 = t6 + a0
         t8 = t0 + v0
         v0 += 0x18c
         if                       // unlikely
         [t8 + 0xd60] = t7

    loc_0x80361750: // orphan
         t0 = [s4 + 0]
         a0 = s2
         a3 = 0 + 0x40
         a1 = t0 + 0x2600
         call 0x87f0252c          // 0x87f0252c(-1, 0x26ff, 0x8, 0x40)
         // CODE XREF from fcn.80339030 @ 0x803597c0
         a2 = t0 + 0x2614

    loc_0x80361764: // orphan
         t0 = [s4 + 0]
         a0 = s2
         a3 = 0 + 0x40
         a1 = t0 + 0x2600
         call 0x87f0252c          // 0x87f0252c(-1, 0x26ff, 0x8, 0x40)
         // CODE XREF from fcn.80339030 @ 0x803597c0
         a2 = t0 + 0x2614

    loc_0x80361798: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803617b8
         t0 = [s4 + 0]
         t2 = t0 + v0
         v0 += 0x18c
         t9 = t0 + s0
         at = , v0 < 0x318        // lo
         t1 = t9 + v1
         t3 = t2 + s2
         s0 += 4
         if                       // likely
         [t3 + 0x948] = t1

    loc_0x803617c0: // orphan
         t0 = [s4 + 0]
         at = 0 | 0x8c40
         a2 = 0 + 1               // lo
         a0 = t0 + at
         at = 0 | 0x8c54
         call 0x87f024f4          // 0x87f024f4(0x8d3f, 0x442f71dcfe116408, 0x1, -1)
         a1 = t0 + at
         t0 = [s4 + 0]
         at = 0 | 0x8fd8
         t4 = [t0 + 0]            // s4
         a0 = t0 + at
         call 0x87f029b8          // 0x87f029b8(0x90d7, 0x8d53, 0x1, -1)
         a1 = , unsigned  byte [t4 + 0x2182] // s4
         t0 = [s4 + 0]
         a2 = 0x87f1 << 16
         a2 += 0x19c0
         a0 = t0 + 4
         call 0x87f0d48c          // 0x87f0d48c(0x103, 0xff, 0x87f119c0, -1)
         a1 = [t0 + 0]            // s4
         a0 = [s4 + 0]
         at = 0 | 0x8ff8
         a1 = 0 + 0x80
         call 0x87f02cb0          // 0x87f02cb0(0xff, 0x80, 0x87f119c0, -1)
         a0 += at
         a1 = [s4 + 0]
         at = 0 | 0x9018
         // CODE XREF from fcn.80358e2c @ +0x998
         a0 = s3                  // t9
         a2 = 0 + 0x20            // k0
         call 0x87f034f0          // 0x87f034f0(-1, 0xff, 0x20, -1)
         a1 += at
         a0 = [s4 + 0]
         at = 0 | 0x903c
         a1 = 0 + 0x40
         call 0x87f03bb0          // 0x87f03bb0(0xff, 0x40, 0x20, -1)
         a0 += at
         t5 = [s4 + 0]
         call 0x87f01870          // 0x87f01870(0x913b, 0x40, 0x20, -1)
         a0 = [t5 + 0]            // s4
         call 0x87f00030          // 0x87f00030(0xff, 0x40, 0x20, -1)

    loc_0x8036185c: // orphan
         
         call 0x87f00020          // 0x87f00020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x19
         s1 = 0
         s0 = 0
         v1 = 0 + 4

    loc_0x80361874: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803618b4
         t0 = [s4 + 0]
         t8 = 0 + 1               // lo
         t9 = t8 << s1
         t6 = [t0 + 0]            // s4
         t3 = t0 + s0
         s0 += 4
         t7 = , unsigned  byte [t6 + 0x2182] // s4
         t4 = t3 + s2
         v0 = 0 + 2
         t2 = t7 & t9             // s4
         if                       // unlikely
         

    loc_0x803618a4: // orphan
         goto 0x803618ac
         v0 = 0 + 6

    loc_0x803618ac: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x8036189c, 0x803618a4
         t1 = v0 + s1
         s1 += 1
         if                       // likely
         [t4 + 0x16f4] = t1

    loc_0x803618bc: // orphan
         t5 = [s4 + 0]
         at = t5 + 0x7fff
         call 0x8610880c          // 0x8610880c(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x17e1] = 0
         t6 = [s4 + 0]
         at = 0 + 4
         t8 = [t6 + 0]            // s4
         t7 = , unsigned  byte [t8 + 0x2180] // s4
         bnel t7, at, 0x80361910  // likely
         ra = [sp + 0x2c]

    loc_0x803618e4: // orphan
         call 0x86105008          // 0x86105008(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.80339030 @ 0x803597c8
         call 0x86104cac          // 0x86104cac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t2 = [s4 + 0]

    loc_0x803618f4: // orphan
         call 0x86105008          // 0x86105008(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.80339030 @ 0x803597c8
         call 0x86104cac          // 0x86104cac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t2 = [s4 + 0]

    loc_0x803618f8: // orphan
         t9 = 0 + 3
         call 0x87f00688          // 0x87f00688(-1, 0x442f71dcfe116408, 0x8, -1)
         [t2 + 0x3c] = t9
         call 0x800225c4          // 0x800225c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x28
         ra = [sp + 0x2c]

    loc_0x80361910: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803618dc
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         ret                      // ra
         sp += 0x48

    loc_0x803619d0: // orphan
         if                       // unlikely
         a0 += 0x1c               // arg1

    loc_0x803619d8: // orphan
         at = 0x8611 << 16
         lwc1 f0, -0x5354, at
         at = 0 + 0xa
         div 0, t5, at
         a0 = [sp + 0x34]         // s4
         a1 = [sp + 0x38]         // s4
         t3 = hi
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x10] = t3
         a0 += 0x24               // arg1
         call 0x87f06240          // 0x87f06240(0x123, 0xff, 0x8, -1)
         a1 += 2
         goto 0x80361a7c
         ra = [sp + 0x1c]

    loc_0x80361a14: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803619d0
         t4 = [sp + 0x30]
         at = 0x8611 << 16
         lwc1 f0, -0x5350, at
         at = 0 + 0xa
         div 0, t4, at
         t6 = lo
         a1 += 2                  // arg2
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x24] = a1
         call 0x87f06240          // 0x87f06240(-1, 0x442f71dcfe11640a, 0x8, -1)
         [sp + 0x10] = t6
         t9 = [sp + 0x30]
         at = 0x8611 << 16
         lwc1 f0, -0x534c, at

    loc_0x80361a50: // orphan
         // CODE XREF from fcn.80339030 @ 0x803597cc
         at = 0 + 0xa
         div 0, t9, at
         a0 = [sp + 0x34]         // s4

    loc_0x80361a5c: // orphan
         t7 = hi
         mfc1 a2, f0
         mfc1 a3, f0
         a1 = [sp + 0x24]
         [sp + 0x10] = t7
         call 0x87f06240          // 0x87f06240(-1, 0xfe11640a, 0x8, -1)
         a0 += 0x29
         ra = [sp + 0x1c]

    loc_0x80361a7c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361a0c
         sp += 0x30
         ret                      // ra
         

    loc_0x80361e28: // orphan
         a1 = t6 + 0x7fff         // arg2
         call 0x8004c990          // 0x8004c990(-1, 0xaa0, 0x8, -1)
         a1 = [a1 + 0x1701]       // t9
         a0 = v0                  // s4
         call 0x8004d1fc          // 0x8004d1fc(0xff, -1, 0x8, -1)
         [sp + 0x3c] = v0
         v1 = [sp + 0x3c]         // s4
         a0 = 0 + 0xeb
         t7 = , unsigned  halfword [v1 + 0]
         mtc1 t7, f18
         if                       // likely
         cvt.s.w f8, f18

    loc_0x80361e58: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f8, f8, f6

    loc_0x80361e68: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361e50
         mul.s f14, f8, f20
         mtc1 0, f10
         
         c.lt.s f10, f14
         
         bc1f 0x80361e90
         at = 0x3f00 << 16
         mtc1 at, f12
         goto 0x80361ea0
         t8 = , unsigned  halfword [v1 + 2]

    loc_0x80361ea0: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361e88
         add.s f10, f12, f14
         t2 = 0 + 0x500
         mtc1 t8, f4
         t3 = 0 + 0x500
         if                       // likely
         cvt.s.w f18, f4

    loc_0x80361eb8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f18, f18, f6

    loc_0x80361ec8: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361eb0
         mul.s f2, f18, f20
         mtc1 0, f8
         // CODE XREF from fcn.80358e2c @ +0x9b0
         at = 0xbf00 << 16
         c.lt.s f8, f2
         
         bc1fl 0x80361ef8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80361f00
         add.s f6, f0, f2

    loc_0x80361f00: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80361eec
         a1 = 0 + 0x10
         [sp + 0x10] = 0
         trunc.w.s f4, f10
         [sp + 0x14] = 0
         [sp + 0x18] = t2

    loc_0x80361f14: // orphan
         trunc.w.s f18, f6
         mfc1 a2, f4
         [sp + 0x1c] = t3
         [sp + 0x20] = 0
         // CODE XREF from fcn.80339030 @ 0x803597e0
         mfc1 a3, f18
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         a3 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff0000)
         a3 = , signed  a3 >> 0x10 // t9
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = v1 + 8
         [t0 + 0] = t4
         t5 = 0xde00 << 16
         a0 = 0x8611 << 16
         [v1 + 0] = t5
         [v1 + 4] = t6
         a0 = [a0 - 0x52e0]       // t9
         swc1 f20, 0x14, sp
         swc1 f20, 0x10, sp
         a1 = 0

    loc_0x80361f78: // orphan
         // CODE XREF from fcn.80339030 @ 0x803597e4
         a2 = 0 + 0x1c
         a3 = 0 + 0x10

    loc_0x80361f80: // orphan
         call 0x87f0d600          // 0x87f0d600(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 4
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         a1 = 0 + 1               // lo
         a2 = 0 + 0x61
         a3 = 0 + 0x10
         swc1 f20, 0x10, sp
         swc1 f20, 0x14, sp
         call 0x87f0d600          // 0x87f0d600(-1, 0x1, 0x61, 0x10)
         a0 += 4
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         a1 = 0 + 2
         a2 = 0 + 0xa6
         a3 = 0 + 0x10
         swc1 f20, 0x10, sp
         swc1 f20, 0x14, sp
         call 0x87f0d600          // 0x87f0d600(-1, 0x2, 0xa6, 0x10)
         a0 += 4
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         a1 = 0 + 3
         a2 = 0 + 0xeb
         a3 = 0 + 0x10
         swc1 f20, 0x10, sp
         swc1 f20, 0x14, sp
         call 0x87f0d600          // 0x87f0d600(-1, 0x3, 0xeb, 0x10)
         a0 += 4
         call 0x87f061f0          // 0x87f061f0(0x100000003, 0x3, 0xeb, 0x10)
         
         t7 = 0x8611 << 16
         t7 = [t7 - 0x52e0]       // t9
         t8 = 0 + 0x9b
         t9 = 0 + 0xaa
         a0 = t7 + 0x7fff
         a0 = [a0 + 0xde5]        // t9
         t1 = 0 + 0xf5
         t2 = 0 + 0xff            // s4
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t9
         [sp + 0x14] = t8
         [sp + 0x10] = 0
         a1 = 0 + 0x1c
         a2 = 0 + 0x10
         call 0x86107ebc          // 0x86107ebc(-1, 0x1c, 0x10, 0x10)
         // CODE XREF from fcn.80358e2c @ +0x9bc
         a3 = 0
         t3 = 0x8611 << 16
         t3 = [t3 - 0x52e0]       // t9
         t4 = 0 + 0x64
         t5 = 0 + 0xc8
         a0 = t3 + 0x7fff
         a0 = [a0 + 0xe11]        // t9
         t6 = 0 + 0xff            // s4
         t7 = 0 + 0x9b
         [sp + 0x20] = t7
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x14] = 0
         [sp + 0x10] = t4
         a1 = 0 + 0x61
         a2 = 0 + 0x10
         call 0x86107ebc          // 0x86107ebc(-1, 0x61, 0x10, 0x0)
         a3 = 0
         t8 = 0x8611 << 16
         t8 = [t8 - 0x52e0]       // t9
         t9 = 0 + 0xff            // s4
         // CODE XREF from fcn.80339030 @ 0x803597ec
         t1 = 0 + 0xa0
         a0 = t8 + 0x7fff
         a0 = [a0 + 0xe3d]        // t9
         t2 = 0 + 0xbe
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t9
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a1 = 0 + 0xa6
         a2 = 0 + 0x10
         call 0x86107ebc          // 0x86107ebc(-1, 0xa6, 0x10, 0x0)
         a3 = 0 + 0x78

    loc_0x803620c4: // orphan
         // CODE XREF from fcn.80339168 @ 0x803597f0
         t3 = 0x8611 << 16
         t3 = [t3 - 0x52e0]       // t9
         t4 = 0 + 0x5a
         t5 = 0 + 0xff            // s4
         a0 = t3 + 0x7fff
         a0 = [a0 + 0xe69]        // t9
         t6 = 0 + 0xff            // s4
         t7 = 0 + 0x8c
         [sp + 0x20] = t7
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x14] = 0
         [sp + 0x10] = t4
         a1 = 0 + 0xeb
         a2 = 0 + 0x10
         call 0x86107ebc          // 0x86107ebc(-1, 0xeb, 0x10, -1)
         a3 = 0 + 0xd2
         ra = [sp + 0x34]         // s4
         // CODE XREF from fcn.80361948 @ +0x170
         ldc1 f20, 0x28, sp
         sp += 0x40
         ret                      // s4
         

    loc_0x803621bc: // orphan
         at = 0 | 0x9704
         beql t9, 0, 0x803621e4   // unlikely
         v1 = [a1 + 0x17e0]       // arg2 // t9

    loc_0x803621c8: // orphan
         call 0x87f0a5bc          // 0x87f0a5bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + at
         v0 = 0x8611 << 16
         v0 = [v0 - 0x52e0]       // t9
         at = 0 | 0x8000
         a1 = v0 + at
         v1 = [a1 + 0x17e0]       // t9

    loc_0x803621e4: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803621c0
         goto 0x80362218
         // CODE XREF from fcn.80339168 @ 0x803597f4
         a0 = v1 & 1              // arg1

    loc_0x803621e8: // orphan
         // CODE XREF from fcn.80339168 @ 0x803597f4
         a0 = v1 & 1              // arg1
         v1 = [v1 + 0x17e1]       // t9
         // CODE XREF from fcn.80361c30 @ +0x568
         a0 = v1 & 1              // arg1 // lo
         if                       // likely
         

    loc_0x803621fc: // orphan
         call 0x86108018          // 0x86108018(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8611 << 16
         v0 = [v0 - 0x52e0]       // t9
         v1 = v0 + 0x7fff
         v1 = [v1 + 0x17e1]       // t9
         a0 = v1 & 1              // lo

    loc_0x80362218: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x803621e4, 0x803621f4
         beql a0, 0, 0x8036223c   // unlikely
         t1 = v1 & 2

    loc_0x80362220: // orphan
         call 0x87f07fe8          // 0x87f07fe8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x44
         t0 = 0x8611 << 16
         t0 = [t0 - 0x52e0]       // t9
         v1 = t0 + 0x7fff
         v1 = [v1 + 0x17e1]       // t9
         t1 = v1 & 2

    loc_0x8036223c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362218
         if                       // unlikely
         

    loc_0x80362244: // orphan
         call 0x87f022f0          // 0x87f022f0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80362248: // orphan
         call 0x87f022f0          // 0x87f022f0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8036224c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8036223c
         call 0x87f01d44          // 0x87f01d44(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         call 0x87f0c88c          // 0x87f0c88c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2c
         call 0x80008648          // 0x80008648(0x10000002b, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x1c]         // s4
         sp += 0x20
         ret                      // s4
         

    loc_0x80362334: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8036234c
         t6 = [s2 + 0]            // t9
         a1 = s0
         call 0x87f026e8          // "&1" // 0x87f026e8(-1, 0x104, 0x8, -1)
         a0 = t6 + s3
         s1 += 1
         at = , s1 < 2
         if                       // unlikely
         s0 += 0x18c

    loc_0x80362354: // orphan
         s0 = [s2 + 0]            // t9
         at = 0 | 0x8c54
         s1 = 0
         // CODE XREF from fcn.80339168 @ 0x803597fc
         s3 = 0 | 0x8c40
         s0 += at

    loc_0x80362368: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8036237c
         t7 = [s2 + 0]            // t9
         a1 = s0
         call 0x87f026e8          // "&1" // 0x87f026e8(-1, 0x104, 0x8, -1)
         a0 = t7 + s3
         s1 += 1
         if                       // unlikely
         s0 += 0x18c

    loc_0x80362384: // orphan
         a0 = [s2 + 0]            // t9
         at = 0 | 0x8ff8
         call 0x87f034cc          // 0x87f034cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += at
         a0 = [s2 + 0]            // t9
         at = 0 | 0x905c
         call 0x86109f58          // 0x86109f58(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += at

    loc_0x803623a4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80359800
         t8 = [s2 + 0]            // t9
         s0 = 0 | 0x8000
         v1 = 0x1000 << 16
         t9 = t8 + s0
         v0 = [t9 + 0xfec]
         at = 0xc2c8 << 16
         mtc1 at, f12
         t0 = [v0 + 0xc]          // lo
         t1 = t0 | v1
         [v0 + 0xc] = t1
         t2 = [s2 + 0]            // t9
         t3 = t2 + s0
         v0 = [t3 + 0xfec]        // t9
         t4 = [v0 + 0x198]        // t9
         v0 += 0x18c
         t5 = t4 | v1             // t9
         [v0 + 0xc] = t5
         // CODE XREF from fcn.80358e2c @ +0x9d8
         t6 = [s2 + 0]            // t9
         t7 = t6 + s0

    loc_0x803623f0: // orphan
         v0 = [t7 + 0xfec]        // t9
         t8 = [v0 + 0x324]        // t9
         v0 += 0x318
         t9 = t8 | v1
         [v0 + 0xc] = t9
         t0 = [s2 + 0]            // t9
         t1 = t0 + s0
         v0 = [t1 + 0xfec]        // t9
         t2 = [v0 + 0x4b0]        // t9
         v0 += 0x4a4
         t3 = t2 | v1             // t9
         call 0x86106044          // 0x86106044(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 0xc] = t3
         at = 0x443f << 16
         mtc1 at, f12
         call 0x86106044          // 0x86106044(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t4 = [s2 + 0]            // t9
         t0 = 0 + 0x4b0
         // CODE XREF from fcn.80339168 @ 0x80359808
         at = t4 + 0x7fff
         [at + 0xf19] = 0
         at = 0xc100 << 16
         mtc1 at, f4
         t5 = [s2 + 0]            // t9
         at = 1 << 16
         at += t5
         swc1 f4, -0x688c, at
         t6 = [s2 + 0]            // t9
         v0 = t6 + s0
         t8 = , unsigned  byte [v0 + 0x17d9] // s4
         t9 = t8 | 0x80           // s4
         byte [v0 + 0x17d9] = t9
         t1 = [s2 + 0]            // t9
         at = t1 + 0x7fff
         [at + 0x17b5] = t0
         t2 = [s2 + 0]            // t9
         at = t2 + 0x7fff
         [at + 0x17dd] = 0
         t3 = [s2 + 0]            // t9
         call 0x87f01f34          // 0x87f01f34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t3 + 0]
         call 0x861001a0          // 0x861001a0(0xdb06003c, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8036249c: // orphan
         call 0x86105508          // 0x86105508(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s4
         s2 = [sp + 0x1c]         // s4
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8036275c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803627a0
         t8 = [a0 + 0]            // arg1
         t9 = [v1 + 0]
         a1 += 1                  // arg2
         a0 += 4                  // arg1
         [t9 + 8] = t8
         v0 = [v1 + 0]
         t0 = [v0 + 4]            // t9
         at = , t0 < 5
         if                       // unlikely
         

    loc_0x80362784: // orphan
         t1 = [v0 + 8]            // t9
         t2 = t1 | 0x1000         // t9
         [v0 + 8] = t2
         v0 = [v1 + 0]
         t3 = [v0 + 8]

    loc_0x80362798: // orphan
         t4 = t3 & a2             // arg3
         [v0 + 8] = t4

    loc_0x803627a0: // orphan
         // CODE XREF from fcn.80353c80 @ 0x8036277c
         if                       // likely
         v1 += 4

    loc_0x803627a8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80362290 @ +0x4b0
         t6 = 0x8611 << 16

    loc_0x803627b0: // orphan
         t6 -= 0x5f60
         t5 = a1 << 2             // arg2
         // CODE XREF from fcn.80339168 @ 0x80359814
         t7 = s0 << 2
         a3 = t7 + t6             // arg4
         a0 = t5 + t6             // arg1
         a2 = 0 - 0x2007          // arg3

    loc_0x803627c8: // orphan
         // CODE XREF from fcn.80339168 @ 0x803628c8
         t8 = [a0 + 0]            // arg1
         t9 = [v1 + 0]
         [t9 + 8] = t8
         v0 = [v1 + 0]
         t0 = [v0 + 4]            // t9
         at = , t0 < 5
         bnel at, 0, 0x80362808   // unlikely
         t5 = [a0 + 4]            // arg1 // s4

    loc_0x803627e8: // orphan
         t1 = [v0 + 8]            // a2
         t2 = t1 | 0x1000
         [v0 + 8] = t2
         v0 = [v1 + 0]
         t3 = [v0 + 8]
         t4 = t3 & a2             // arg3
         [v0 + 8] = t4
         t5 = [a0 + 4]            // arg1 // s4

    loc_0x80362808: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803627e0
         t7 = [v1 + 4]
         v1 += 4
         [t7 + 8] = t5
         v0 = [v1 + 0]
         t6 = [v0 + 4]            // t9
         at = , t6 < 5
         bnel at, 0, 0x80362848   // fcn.80339168+0x296e0 // unlikely
         t2 = [a0 + 8]            // arg1 // t9

    loc_0x803628d0: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x4a4, 0x803627a8
         call 0x86102630          // 0x86102630(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         if                       // unlikely
         at = , s0 < 2

    loc_0x803628e0: // orphan
         bnel at, 0, 0x80362944   // likely
         ra = [sp + 0x1c]         // s4

    loc_0x80362940: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803628d8
         // CODE XREF from fcn.80362290 @ +0x684
         ra = [sp + 0x1c]         // s4
         // CODE XREF from fcn.80353c80 @ 0x803628e0
         // CODE XREF from fcn.80362290 @ +0x664
         s0 = [sp + 0x18]         // s4
         sp += 0x50
         ret                      // s4
         

    loc_0x8036297c: // orphan
         call 0x86108b28          // 0x86108b28(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         // CODE XREF from fcn.80339168 @ 0x80359820
         v1 = sp + 0x38
         if                       // unlikely
         a1 = 0

    loc_0x80362990: // orphan
         v0 = s0 & 3
         if                       // likely
         a3 = v0

    loc_0x8036299c: // orphan
         t7 = 0x8611 << 16
         t7 -= 0x5f50
         t6 = 0 << 2
         a0 = t6 + t7
         a2 = 0 - 0x2007

    loc_0x803629b0: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803629f4
         t8 = [a0 + 0]            // arg1
         t9 = [v1 + 0]
         a1 += 1                  // arg2
         a0 += 4                  // arg1
         [t9 + 8] = t8
         v0 = [v1 + 0]

    loc_0x803629c8: // orphan
         // CODE XREF from fcn.80339168 @ 0x80359824
         t1 = [v0 + 4]            // t9
         at = , t1 < 9
         if                       // unlikely
         

    loc_0x803629d8: // orphan
         t2 = [v0 + 8]
         t3 = t2 | 0x1000
         [v0 + 8] = t3
         v0 = [v1 + 0]
         t4 = [v0 + 8]
         t5 = t4 & a2             // arg3
         [v0 + 8] = t5

    loc_0x803629f4: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803629d0
         if                       // likely
         v1 += 4

    loc_0x803629f8: // orphan
         // CODE XREF from fcn.80353c80 @ 0x803629d0
         if                       // likely
         v1 += 4

    loc_0x803629fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80353c80 @ 0x80362994
         t7 = 0x8611 << 16

    loc_0x80362a00: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362994
         t7 = 0x8611 << 16

    loc_0x80362a04: // orphan
         t7 -= 0x5f50
         t6 = a1 << 2             // arg2
         t8 = s0 << 2
         a3 = t8 + t7             // arg4
         a0 = t6 + t7             // arg1
         a2 = 0 - 0x2007          // arg3

    loc_0x80362a1c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362b1c
         t9 = [a0 + 0]            // arg1
         t1 = [v1 + 0]
         [t1 + 8] = t9
         v0 = [v1 + 0]
         t2 = [v0 + 4]            // t9
         at = , t2 < 9
         bnel at, 0, 0x80362a5c   // unlikely
         t8 = [a0 + 4]            // arg1 // s4

    loc_0x80362a3c: // orphan
         t3 = [v0 + 8]
         t4 = t3 | 0x1000
         [v0 + 8] = t4
         v0 = [v1 + 0]
         t5 = [v0 + 8]
         t6 = t5 & a2             // arg3

    loc_0x80362a54: // orphan
         [v0 + 8] = t6
         t8 = [a0 + 4]            // arg1 // s4

    loc_0x80362a5c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362a34
         t7 = [v1 + 4]
         v1 += 4
         [t7 + 8] = t8
         v0 = [v1 + 0]
         t9 = [v0 + 4]
         at = , t9 < 9
         bnel at, 0, 0x80362a9c   // unlikely
         t5 = [a0 + 8]            // arg1 // t9

    loc_0x80362a7c: // orphan
         t1 = [v0 + 8]
         t2 = t1 | 0x1000
         [v0 + 8] = t2
         v0 = [v1 + 0]
         t3 = [v0 + 8]
         t4 = t3 & a2             // arg3
         [v0 + 8] = t4
         t5 = [a0 + 8]            // arg1 // t9

    loc_0x80362a9c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362a74
         t6 = [v1 + 4]
         v1 += 4
         [t6 + 8] = t5
         v0 = [v1 + 0]
         t8 = [v0 + 4]            // t9
         at = , t8 < 9
         bnel at, 0, 0x80362adc   // unlikely
         t3 = [a0 + 0xc]          // arg1

    loc_0x80362abc: // orphan
         t7 = [v0 + 8]
         t9 = t7 | 0x1000
         [v0 + 8] = t9
         v0 = [v1 + 0]
         t1 = [v0 + 8]            // a2
         t2 = t1 & a2             // arg3
         [v0 + 8] = t2
         t3 = [a0 + 0xc]          // arg1

    loc_0x80362adc: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362ab4
         t4 = [v1 + 4]
         v1 += 4
         a0 += 0x10               // arg1
         [t4 + 8] = t3
         v0 = [v1 + 0]
         t5 = [v0 + 4]            // t9
         at = , t5 < 9
         if                       // unlikely
         

    loc_0x80362b00: // orphan
         t6 = [v0 + 8]
         t8 = t6 | 0x1000
         [v0 + 8] = t8
         v0 = [v1 + 0]
         t7 = [v0 + 8]            // a2
         t9 = t7 & a2             // arg3
         [v0 + 8] = t9

    loc_0x80362b1c: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362af8
         if                       // likely
         v1 += 4

    loc_0x80362b24: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x80362988, 0x803629fc
         call 0x86102630          // 0x86102630(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         if                       // fcn.80339168+0x29a60 // unlikely
         t0 = sp + 0x38

    loc_0x80362c00: // orphan
         call 0x86108b28          // 0x86108b28(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x30
         a2 = [sp + 0x44]
         v1 = sp + 0x30
         a0 = 0
         if                       // likely
         a3 = a2 & 3

    loc_0x80362c1c: // orphan
         if                       // unlikely
         a1 = a3                  // s2

    loc_0x80362c24: // orphan
         t7 = 0x8611 << 16
         t7 -= 0x5f40
         t6 = 0 << 2
         v0 = t6 + t7

    loc_0x80362c34: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362c48
         t8 = [v0 + 0]            // s4
         t9 = [v1 + 0]
         a0 += 1
         v0 += 4
         v1 += 4
         if                       // likely
         [t9 + 8] = t8

    loc_0x80362c50: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80353c80 @ 0x80362c1c
         t2 = 0x8611 << 16

    loc_0x80362c54: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362c1c
         t2 = 0x8611 << 16

    loc_0x80362c58: // orphan
         t2 -= 0x5f40
         t1 = a0 << 2
         t3 = a2 << 2             // k0
         a1 = t3 + t2
         v0 = t1 + t2

    loc_0x80362c6c: // orphan
         t4 = [v0 + 0]            // s4
         t5 = [v1 + 0]
         v0 += 0x10
         v1 += 0x10
         [t5 + 8] = t4
         t7 = [v1 - 0xc]
         t6 = [v0 - 0xc]          // t9
         [t7 + 8] = t6
         t9 = [v1 - 8]

    loc_0x80362c90: // orphan
         // CODE XREF from fcn.80339168 @ 0x8035983c
         t8 = [v0 - 8]            // t9
         [t9 + 8] = t8
         t3 = [v1 - 4]            // t9
         t1 = [v0 - 4]
         if                       // likely
         [t3 + 8] = t1

    loc_0x80362ca8: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x80362c14, 0x80362c50
         a0 = 0
         call 0x86102630          // 0x86102630(0x0, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x44] = a2
         a2 = [sp + 0x44]
         if                       // unlikely
         t0 = sp + 0x30

    loc_0x80362d10: // orphan
         cvt.s.w f18, f16
         mul.s f10, f6, f8
         c.lt.s f10, f18
         
         bc1fl 0x80362d58
         v0 = [v1 - 4]            // t9
         v1 = t0 + t4
         v0 = [v1 - 4]            // t9
         at = 0 - 3
         t5 = [v0 + 8]
         t6 = t5 | 4
         [v0 + 8] = t6
         v0 = [v1 - 4]            // t9
         t7 = [v0 + 8]
         t8 = t7 & at
         goto 0x80362d78
         [v0 + 8] = t8

    loc_0x80362d78: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362d4c
         ra = [sp + 0x14]

    loc_0x80362d7c: // orphan
         sp += 0x48
         ret                      // ra
         

    loc_0x80362f8c: // orphan
         
         if                       // likely
         v1 = 0 + 2

    loc_0x80362f98: // orphan
         call 0x87f01a40          // 0x87f01a40(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x80359858
         

    loc_0x80362f9c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80359858
         
         goto 0x80362fa8
         v1 = v0                  // s4

    loc_0x80362fa8: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80362fa0
         if                       // unlikely
         at = 0 + 2

    loc_0x80362fb0: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x80362fb8: // orphan
         if                       // unlikely
         at = 0 + 4

    loc_0x80362fc0: // orphan
         if                       // unlikely
         

    loc_0x80362fd0: // orphan
         call 0x86100790          // 0x86100790(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87f006ac          // 0x87f006ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x80362fec: // orphan
         call 0x800279c4          // 0x800279c4(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80358e2c @ +0xa30
         a0 = 0 + 0xf06

    loc_0x80362ff4: // orphan
         call 0x87f006ac          // 0x87f006ac(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 2
         if                       // likely
         t6 = 0 + 4

    loc_0x80363008: // orphan
         t7 = 0x8611 << 16
         t7 = [t7 - 0x52e0]       // t9
         a0 = 0 + 0xf07
         call 0x800279c4          // 0x800279c4(0xf07, 0x442f71dcfe116408, 0x8, -1)
         [t7 + 0x3c] = t6
         call 0x80021ed8          // 0x80021ed8(0xf07, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xd
         call 0x86104948          // 0x86104948(0xd, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80363050
         ra = [sp + 0x14]

    loc_0x80363034: // orphan
         call 0x861094bc          // 0x861094bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x80363050
         ra = [sp + 0x14]

    loc_0x8036304c: // orphan
         ra = [sp + 0x14]
         // CODE XREFS from fcn.80353c80 @ 0x8036302c, 0x8036303c
         sp += 0x18
         ret
         

    loc_0x80363200: // orphan
         call 0x861094bc          // 0x861094bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x80363218
         

    loc_0x80363218: // orphan
         // CODE XREF from fcn.80353c80 @ 0x80363208
         v0 = 0x8611 << 16
         goto 0x80363284
         v0 = [v0 - 0x52e0]       // t9

    loc_0x80363284: // orphan
         // CODE XREF from fcn.80339168 @ 0x80363110
         // CODE XREF from fcn.80353c80 @ 0x8036321c
         call 0x87f0d5b8          // 0x87f0d5b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 4

    loc_0x8036328c: // orphan
         a0 = 0x8611 << 16
         a0 = [a0 - 0x52e0]       // t9
         call 0x87f0c6f4          // 0x87f0c6f4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2c
         if                       // unlikely
         t9 = 0x8611 << 16

    loc_0x803632a4: // orphan
         t9 = [t9 - 0x52e0]
         t8 = 0 + 3
         t1 = 0x8611 << 16
         at = t9 + 0x7fff
         [at + 0x17e9] = t8
         t1 = [t1 - 0x52e0]       // t9
         t0 = 0 + 8               // a2
         [t1 + 0x3c] = t0

    loc_0x803632c4: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x803634f8: // orphan
         call 0x8004c398          // 0x8004c398(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x4d59 << 16
         call 0x80002bf8          // 0x80002bf8(0x4d590000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x524d
         t9 = 0x8611 << 16
         t9 = [t9 - 0x52e0]
         call 0x87f0f480          // 0x87f0f480(0x4d59524d, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t9 + 0]
         call 0x80027ee0          // 0x80027ee0(0xdb06003c, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xffe
         t0 = 0x8611 << 16
         t0 = [t0 - 0x52e0]       // t9
         ra = [sp + 0x24]
         s0 = [sp + 0x1c]         // s4

    loc_0x80363624: // orphan
         
         sub.s f10, f0, f6
         trunc.w.s f4, f10
         mfc1 v0, f4
         
         t8 = [v1 + 8]

    loc_0x8036363c: // orphan
         // CODE XREF from fcn.8036354c @ 0x80363618
         t5 = v0 & 0xffff         // s4
         t6 = , signed  t5 >> 4
         t9 = [t8 + 0xc]
         t7 = t6 << 2
         at = 0x8008 << 16
         at += t7
         t0 = t9 << 0xf
         if                       // likely
         lwc1 f18, 0x7e50, at

    loc_0x80363660: // orphan
         at = 0x41c8 << 16
         mtc1 at, f8
         at = 0x42fa << 16
         mtc1 at, f10
         mul.s f6, f8, f18
         t2 = 0 + 1               // lo
         at = 0x4f00 << 16
         add.s f4, f6, f10
         cfc1 t1, 31
         ctc1 t2, 31
         
         cvt.w.s f8, f4
         cfc1 t2, 31
         
         t2 &= 0x78
         beql t2, 0, 0x803636ec   // fcn.803547f0+0xeefc // likely
         // CODE XREF from fcn.80339168 @ 0x8035987c
         mfc1 t2, f8

    loc_0x803636a0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8035987c
         mfc1 t2, f8

    loc_0x803636a4: // orphan
         mtc1 at, f8
         t2 = 0 + 1               // lo
         sub.s f8, f4, f8
         ctc1 t2, 31
         
         cvt.w.s f8, f8
         cfc1 t2, 31
         
         t2 &= 0x78
         if                       // unlikely
         

    loc_0x803636d0: // orphan
         mfc1 t2, f8
         at = 0x8000 << 16
         goto 0x803636f8
         t2 |= at

    loc_0x803636e0: // orphan
         goto 0x803636f8
         // CODE XREF from fcn.80358e2c @ +0xa54
         t2 = 0 - 1               // s2

    loc_0x803636f8: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x803636d8, 0x803636e0
         ctc1 t1, 31
         goto 0x8036372c
         byte [a0 + 3] = t2       // arg1

    loc_0x80363704: // orphan
         v0 = , unsigned  byte [a0 + 3] // arg1 // s4
         at = , v0 < 2

    loc_0x8036370c: // orphan
         if                       // likely
         t3 = v0 - 1

    loc_0x80363714: // orphan
         goto 0x8036372c
         byte [a0 + 3] = t3       // arg1

    loc_0x8036371c: // orphan
         byte [a0 + 3] = 0        // arg1
         t4 = , unsigned  byte [a1 + 1] // arg2 // s4
         t5 = t4 & 0xfffe         // t3

    loc_0x8036372c: // orphan
         // CODE XREFS from fcn.80353c80 @ 0x803636fc, 0x80363714
         v0 = [v1 + 8]
         at = 0x43e1 << 16
         lwc1 f12, 0x10, v0
         lwc1 f14, 0x14, v0
         t7 = [v0 + 0xd0]         // t9
         mul.s f6, f12, f12
         [a1 + 0x24] = t7         // arg2
         mul.s f10, f14, f14
         t6 = [v0 + 0xd4]         // t9
         [a1 + 0x28] = t6         // arg2
         t7 = [v0 + 0xd8]         // t9
         add.s f0, f6, f10
         [a1 + 0x2c] = t7         // arg2
         lwc1 f4, 0x2c, a1        // arg2
         sqrt.s f2, f0
         mtc1 at, f0

    loc_0x80363950: // orphan
         t7 <<= 2
         v0 = t6 + t7
         byte [v0 + 0x654] = a3
         // CODE XREF from fcn.80339030 @ 0x80359898
         t8 = [sp + 0x30]
         a0 = v1 + 0x24           // arg1
         a1 = 0x8611 << 16
         [v0 + 0x64c] = t8
         [sp + 0x18] = a0
         [sp + 0x24] = v1
         a1 -= 0x6520             // arg2
         call 0x80037e3c          // 0x80037e3c(0x244, 0x86109ae0, 0x8, -1)
         a2 = v0 + 0x644
         call 0x8003f1dc          // 0x8003f1dc(0x244, 0x86109ae0, 0xffffffffffff90e5, -1)
         a0 = [sp + 0x18]
         t9 = [sp + 0x28]
         a0 = [sp + 0x18]
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x244, 0x0, -1, -1)
         a3 = [t9 + 0x694]

    loc_0x803639a0: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035989c
         at = 0x4010 << 16
         mtc1 at, f0
         v1 = [sp + 0x24]
         swc1 f0, 0x5c, v1
         swc1 f0, 0x58, v1
         swc1 f0, 0x54, v1
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x80363c54: // orphan
         
         
         
         if                       // likely
         

    loc_0x80363c64: // orphan
         
         
         
         if                       // likely
         

    loc_0x80363c68: // orphan
         
         
         
         if                       // unlikely
         t1 = s0 + 0

    loc_0x80363c78: // orphan
         t1 = s0 + 0

    loc_0x80363c7c: // orphan
         
         goto 0x80000000
         s0 = halfword [s0 - 0x629c]

}
