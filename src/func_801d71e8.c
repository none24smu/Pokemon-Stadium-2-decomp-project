int fcn.801d69dc (int esi, int edx) {
    loc_0x801d69dc:
        // CALL XREF from fcn.8217ac0c @ +0xbc8
        0x801d69dc
        0x801d69e0
        0x801d69e4
        0x801d69e8
        0x801d69ec
        0x801d69f0
        0x801d69f4
        if            // fcn.801c95d4+0xd6e8 // unlikely
        0x801d69fc
        // chop
            
    loc_0x801d6cbc:
        // CODE XREF from fcn.801d69dc @ 0x801d69f8
        0x801d6cbc
        0x801d6cc0
        0x801d6cc4
        if            // fcn.801d38b8+0x92c4 // unlikely
        if            // fcn.801d38b8+0x93a8 // unlikely
        // chop
            
    loc_0x801dcc60:
        // CODE XREF from fcn.801c95d4 @ 0x801d6ccc
        s0 = [sp + 0x48]
        ldc1 f26, 0x40, sp
        ldc1 f24, 0x38, sp
        ldc1 f22, 0x30, sp
        ldc1 f20, 0x28, sp
        // chop
         // do {
    loc_0x801dcc74:
        // CALL XREF from fcn.806bb5dc @ +0xe44
        ret           // ra
        sp += 0x80
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6a00
    loc_0x801d6a14:
        0x801d6a14
        if            // unlikely
        if            // unlikely
            
    loc_0x801d6f00:
        // CODE XREF from fcn.801d69dc @ 0x801d6a1c
        0x801d6f00
        if            // fcn.801c95d4+0x172c4 // unlikely
        if            // fcn.801c95d4+0x17318 // unlikely
        // chop
            
    loc_0x801e08ec:
        // CODE XREF from fcn.801d69dc @ 0x801d6f08
        t5 = t4 | 0xff // t9
        s2 = 0
        [v0 + 4] = t5
        s0 = 0
        // chop
         // do {
    loc_0x801e08fc:
        a0 = s2
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6a24
    loc_0x801d6a30:
        0x801d6a30
        0x801d6a34
        if            // unlikely
        0x801d6a3c
            
    loc_0x801d719c:
        // CODE XREF from fcn.801d69dc @ 0x801d6a38
        at = 0x8161 << 16
        c.le.s f2, f14
        0x801d71a4
        bc1f 0x801d71b8
        0x801d71ac
        goto 0x801d71dc
        mov.s f0, f2
         // do {
    loc_0x801d71dc:
        // CODE XREFS from fcn.801d69dc @ 0x374, 0x801d71b0
        ra = [sp + 0x14]
        sp += 0x18
        ret
        0x801d71e8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6a40
    loc_0x801d6a50:
        0x801d6a50
        if            // unlikely
        if            // unlikely
            
    loc_0x801d74bc:
        // CODE XREF from fcn.801d69dc @ 0x801d6a58
        v0 = v1
        beql a1, 0, 0x801d751c // unlikely
        v0 = halfword [a0 + 0]
            
    loc_0x801d751c:
        // CODE XREF from fcn.801d69dc @ 0x801d74c0
        v1 = , v0 < 1
        beql v1, 0, 0x801d7564 // likely
        v0 = v1
            
    loc_0x801d7564:
        // CODE XREFS from fcn.801d69dc @ 0x801d7520, 0x801d7538, 0x801d7548
        ret           // ra
        0x801d7568
         // } else {
    loc_0x801d7528:
        t8 = halfword [a0 + 4]
        v1 = v0 + t8
        v1 = , v1 < 0x140
        v1 ^= 1       // lo
        beql v1, 0, 0x801d7564 // unlikely
        v0 = v1       // lo
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6a60
    loc_0x801d6ac8:
        0x801d6ac8
        0x801d6acc
        if            // fcn.801d80a0+0x34 // unlikely
        if            // unlikely
        // chop
            
    loc_0x801d80f4:
        if            // unlikely
        // CODE XREF from fcn.801d69dc @ 0x801d6ad4
        0x801d80f8
        // chop
            
    loc_0x801d8100:
        a1 = s7 - a0  // arg2
        t9 = a2 + a1  // arg3
        at = , t5 < t9
        if            // likely
        // CODE XREF from fcn.801d69dc @ 0x801d6adc
        t3 = s0
        // chop
            
    loc_0x801d8118:
        at = , s0 < s6 // lo
        if            // unlikely
        s4 = a0 << 4  // arg1
        // chop
            
    loc_0x801d8324:
        a2 += a1      // arg3
        a2 <<= 0x10   // arg3
        a2 = , signed  a2 >> 0x10 // arg3
        at = , a2 < t5 // lo
        if            // likely
        0x801d8338
        // chop
    loc_0x801d80ec:
        // CODE XREF from fcn.801d69dc @ +0xfc
        if            // likely
        a0 = a2 & 0x1f // arg3
        // chop
         // }
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6adc
    loc_0x801d6ae8:
        if            // fcn.801d81fc-0x70 // unlikely
        if            // fcn.801d81fc-0x4c // unlikely
        // chop
            
    loc_0x801d81b0:
        // CODE XREF from fcn.801d69dc @ 0x801d6aec
        [v0 + 0] = t7
        t7 = [sp + 0x60]
        a0 = v0       // s4
        if            // likely
        t9 = , signed  t3 >> 5
        // chop
            
    loc_0x801d81cc:
        t6 = s5 + t9
        // chop
         // do {
    loc_0x801d81d0:
        // CALL XREF from fcn.831d41d4 @ +0x98
        // CALL XREF from fcn.83ae1c0c @ +0x11d4
        t8 = t6 << 9
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6af4
    loc_0x801d6b24:
        if            // unlikely
        if            // unlikely
            
    loc_0x801d8d0c:
        // CODE XREF from fcn.801d69dc @ 0x801d6b28
        [sp + 0x24] = a3
        a3 = [sp + 0x24] // t9
        at = 0 + 0x53
        if            // unlikely
        a0 = s0
            
    loc_0x801d8d34:
        at = 0 + 0x84
        if            // unlikely
        a0 = s0
            
    loc_0x801d8d54:
        at = 0 + 0x68
        if            // unlikely
        at = 0 + 0x69
            
    loc_0x801d8d74:
        ra = [sp + 0x1c]
        s0 = [sp + 0x18]
        sp += 0x20
        ret
        0x801d8d84
         // } else {
    loc_0x801d8d60:
        if            // unlikely
        a0 = s0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6b30
    loc_0x801d6b3c:
        0x801d6b3c
        // chop
         // do {
    loc_0x801d6b40:
        0x801d6b40
        0x801d6b44
        if            // fcn.801d9324+0x278 // unlikely
        if            // fcn.801d9324+0x2ec // unlikely
         // } while (?);
        }
        return eax;
    loc_0x801d6b54:
        if            // unlikely
        0x801d6b58
        // chop
            
    loc_0x801d9708:
        // CODE XREF from fcn.801c95d4 @ 0x801d6b54
        mov.s f18, f14
        // chop
         // do {
    loc_0x801d970c:
        // CODE XREF from fcn.801d9324 @ 0x801d9700
        add.s f6, f18, f16
        trunc.w.s f4, f6
        mfc1 t6, f4
        0x801d9718
        t9 = t6 << 0x10
        t8 = , signed  t9 >> 0x10
        unsigned , hi // t9 // s2
        v1 = lo
        a0 = , signed  v1 >> 7 // arg1
        goto 0x801d97f0
        t4 = halfword [sp + 0x6e]
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d6b5c
    loc_0x801d6b9c:
        0x801d6b9c
        0x801d6ba0
        0x801d6ba4
        0x801d6ba8
        0x801d6bac
        0x801d6bb0
        0x801d6bb4
        // chop
         // do {
    loc_0x801d6bb8:
        // CODE XREF from fcn.801cf1cc @ 0x801cf1e4
        0x801d6bb8
        0x801d6bbc
        0x801d6bc0
        0x801d6bc4
        0x801d6bc8
        0x801d6bcc
        // CODE XREF from fcn.801cf1cc @ 0x801cf1ec
        0x801d6bd0
        0x801d6bd4
        0x801d6bd8
        0x801d6bdc
        0x801d6be0
        0x801d6be4
        0x801d6be8
        0x801d6bec
        0x801d6bf0
         // } while (?);
        }
        return eax;
    loc_0x801d6f20: // orphan
             
             
             if                       // unlikely
             if                       // unlikely

    loc_0x801d6f34: // orphan
         
         
         

    loc_0x801d6fdc: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6a28
         mov.s f0, f2
         mtc1 at, f2
         
         c.le.s f2, f12
         
         bc1fl 0x801d7004
         mov.s f0, f12
         ret                      // ra
         mov.s f0, f2

    loc_0x801d740c: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6a48
         t8 = halfword [a1 + 4]
         t7 = a2 + t6             // arg3
         t9 = v0 + t8
         v1 = , t7 < t9           // lo
         v1 ^= 1
         if                       // fcn.801c95d4+0xde84 // likely
         

    loc_0x801d7428: // orphan
         v0 = halfword [a1 + 2]
         a2 = halfword [a0 + 2]
         v1 = , v0 < a2
         v1 ^= 1                  // lo
         if                       // fcn.801c95d4+0xde84 // unlikely
         

    loc_0x801d7440: // orphan
         t0 = halfword [a0 + 6]
         t2 = halfword [a1 + 6]
         t1 = a2 + t0             // arg3
         t3 = v0 + t2

    loc_0x801d74d8: // orphan
         t6 = halfword [a0 + 4]
         v1 = v0 + t6
         v1 = , v1 < 0x280
         v1 ^= 1                  // lo
         if                       // unlikely
         

    loc_0x801d74f0: // orphan
         v0 = halfword [a0 + 2]
         v1 = , v0 < 1
         if                       // likely
         

    loc_0x801d7500: // orphan
         t7 = halfword [a0 + 6]
         v1 = v0 + t7
         v1 = , v1 < 0x1e0
         v1 ^= 1                  // lo

    loc_0x801d7510: // orphan
         // CODE XREFS from fcn.801d69dc @ 0x801d74d0, 0x801d74e8, 0x801d74f8
         ret                      // ra
         v0 = v1

    loc_0x801d7540: // orphan
         v0 = halfword [a0 + 2]
         v1 = , v0 < 1
         beql v1, 0, 0x801d7564   // likely
         v0 = v1

    loc_0x801d7550: // orphan
         t9 = halfword [a0 + 6]
         v1 = v0 + t9
         v1 = , v1 < 0xf0
         v1 ^= 1                  // lo
         v0 = v1                  // lo

    loc_0x801d7fd4: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6ac0
         mtc1 a2, f16
         at = 0x4080 << 16
         mtc1 at, f0
         cvt.s.w f18, f16
         t7 = v0 + 8
         mul.s f8, f6, f0
         [v1 + 0] = t7
         t9 = 0xf0a << 16
         t8 = 0xe200 << 16
         // CODE XREF from fcn.801d69dc @ +0xe8
         t8 |= 0x1c
         t9 |= 0x4000
         [v0 + 4] = t9
         [v0 + 0] = t8
         v0 = [v1 + 0]
         mul.s f4, f18, f0
         trunc.w.s f10, f8
         t6 = v0 + 8
         [v1 + 0] = t6
         t7 = 0xe300 << 16
         // CODE XREF from fcn.82ca6ae4 @ +0x83c
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

    loc_0x801d80f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.801d69dc @ 0x801d6ad4
         

    loc_0x801d8bf0: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6b1c
         s1 = 0
         s0 = sp + 0x50

    loc_0x801d8d68: // orphan
         a1 = 0 + 0x76            // arg2
         call fcn.816019c0
         a2 = 0 + 1               // lo

    loc_0x801d8e08: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6b34
         at = 0 + 0x53

    loc_0x801e09fc: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6f18
         a0 = v0                  // s4
         a0 = [sp + 0x28]
         a1 = [sp + 0x2c]
         a2 = [sp + 0x24]         // t9
         a3 = 0
         [sp + 0x10] = 0
         a0 -= 0x10               // arg1
         call 0x8004d19c          // 0x8004d19c(0xfffffffffffffff0, 0x0, -1, 0x0)
         a1 -= 0x10
         ra = [sp + 0x1c]
         sp += 0x28
         ret
         

    loc_0x801e0ba0: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801d6f2c
         goto 0x801e0bd0
         byte [v1 + 0] = t5

    loc_0x801e0bd0: // orphan
         // CODE XREF from fcn.801d69dc @ 0x801e0ba0
         if                       // fcn.801d35b4+0xd69c // unlikely
         

    loc_0x801e0bd8: // orphan
         if                       // fcn.801d35b4+0xd69c // unlikely
         

    loc_0x801e0be0: // orphan
         bgtzl t1, 0x801e0bf4     // likely
         mtc1 t1, f4

    loc_0x801e0be8: // orphan
         if                       // fcn.801d35b4+0xd69c // unlikely
         

    loc_0x801e0bf0: // orphan
         mtc1 t1, f4

    loc_0x801e0bf4: // orphan
         // CODE XREF from fcn.801d6e1c @ +0x114
         at = 0x8161 << 16
         lwc1 f12, -0x3d24, at
         cvt.s.w f0, f4
         mtc1 a0, f6
         
         cvt.s.w f2, f6
         mul.s f8, f0, f12
         c.lt.s f8, f2
         
         bc1f 0x801e0c30
         
         t5 = , unsigned  byte [v1 + 0] // s4
         t6 = t5 | 2              // s4
         ret                      // ra
         byte [v1 + 0] = t6

}
