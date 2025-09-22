int fcn.816b7e54 (int esi, int edx) {
    loc_0x807cacb0:
        // CODE XREF from fcn.816b7e54 @ 0x8169a4dc
        if            // unlikely
         // (break)
    loc_0x8150a754: // orphan
             // CODE XREF from fcn.816b7e54 @ 0x81692ba8
             bbit1 t8, 0, 0x81505fbc

    loc_0x81692ba8: // orphan
         goto 0x8150a754
         s5 &= 0xffff

    loc_0x81694358: // orphan
         a0 = , unsigned  byte [ra + 2]
         a2 = , unsigned  byte [ra + 4]
         a1 = , unsigned  byte [ra + 3]
         a3 = , unsigned  byte [ra + 5]
         a0 &= 0x1f               // a2
         a2 &= 0x1f
         t0 = , unsigned  , a2 < a0
         a1 &= 0x1f
         a3 &= 0x1f
         if                       // unlikely
         t1 = , unsigned  , a3 < a1 // lo

    loc_0x81694384: // orphan
         if                       // likely
         t2 = , unsigned  byte [ra + 0]

    loc_0x8169438c: // orphan
         t0 = t2 & 7
         t1 = t0 ^ 1
         t3 = , unsigned  byte [ra + 1]

    loc_0x81694398: // orphan
         if                       // likely
         t0 ^= 4

    loc_0x816943a0: // orphan
         t3 &= 3
         t1 = t3 << 2             // a2
         t3 |= t1
         t2 |= 2                  // s4

    loc_0x816943b0: // orphan
         if                       // likely
         

    loc_0x816943b8: // orphan
         t3 &= 0x30
         t0 = t3 >> 2
         t3 |= t0
         t2 |= 2                  // s4

    loc_0x816943c8: // orphan
         at = 3 << 16
         at |= 0x30f7
         at += gp
         t5 = 0 + 0x11

    loc_0x816943d8: // orphan
         t4 = 0 + 0x13

    loc_0x816943dc: // orphan
         t0 = t2 & 1              // lo
         if                       // unlikely
         

    loc_0x816943e8: // orphan
         t0 = , unsigned  , a0 < t4
         t1 = , unsigned  , t4 < a2
         t0 &= t1
         t1 = , unsigned  , a1 < t5 // lo
         t0 &= t1
         t1 = , unsigned  , t5 < a3
         t0 &= t1
         if                       // likely
         

    loc_0x8169440c: // orphan
         byte [at + 0] = t3

    loc_0x81694410: // orphan
         t0 = t2 & 2
         if                       // unlikely
         // CODE XREF from fcn.81685134 @ 0x816852ac
         

    loc_0x8169441c: // orphan
         t0 = , unsigned  , t4 < a0
         t1 = , unsigned  , a2 < t4 // lo
         t0 |= t1                 // lo
         t1 = , unsigned  , t5 < a1
         t0 |= t1                 // lo
         t1 = , unsigned  , a3 < t5
         t0 |= t1                 // lo
         if                       // likely
         

    loc_0x81694440: // orphan
         if                       // likely
         

    loc_0x81694448: // orphan
         if                       // unlikely
         

    loc_0x81694450: // orphan
         if                       // unlikely
         

    loc_0x81694458: // orphan
         if                       // likely
         

    loc_0x81694460: // orphan
         t0 = t3 >> 2
         byte [at + 0] = t0

    loc_0x81694468: // orphan
         t0 = t2 & 4
         if                       // unlikely
         

    loc_0x81694474: // orphan
         t0 = , unsigned  , t4 < a0
         t1 = , unsigned  , a2 < t4 // lo
         t0 |= t1                 // lo
         t1 = , unsigned  , t5 < a1
         t0 |= t1                 // lo
         t1 = , unsigned  , a3 < t5
         t0 |= t1                 // lo
         if                       // unlikely
         

    loc_0x81694498: // orphan
         t0 = t3 >> 4
         byte [at + 0] = t0

    loc_0x816944a0: // orphan
         at -= 1
         if                       // likely
         t4 -= 1

    loc_0x816944ac: // orphan
         if                       // likely
         t5 -= 1

    loc_0x816944b4: // orphan
         t0 = [gp + 0x384]        // [0x384:4]=-1 // 900 // t9
         ra += 6
         if                       // likely
         

    loc_0x816944c4: // orphan
         .qword 0x0c54368000000000
         a0 = 0 | 0xff00
         goto fcn.8150d680
         ra = [sp + 0xf0]

    loc_0x81695b90: // orphan
         byte [v1 + 0x2e] = t6
         byte [v1 + 0x2d] = v0
         t2 = lo
         [v1 + 0x28] = t2
         bgezl t5, 0x81695bb0     // likely
         t7 = [v1 + 0x34]         // t9

    loc_0x81695ba8: // orphan
         byte [v1 + 0] = t4
         // CODE XREF from fcn.816955bc @ +0x568
         t7 = [v1 + 0x34]         // t9

    loc_0x81695bb0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81695ba0
         t6 = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x81695bbc: // orphan
         goto 0x816960ec
         byte [v1 + 0x3a] = 0

    loc_0x81695bc4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81695bb4
         goto 0x816960ec
         byte [v1 + 0x3a] = t6

    loc_0x81695dcc: // orphan
         a0 = t6 & 0xffff
         a2 = 0x8153 << 16
         a2 += 0x1170
         goto 0x816960ec
         // CALL XREF from fcn.82ae9ee4 @ +0x84
         [a2 + 0xc] = v0          // arg3

    loc_0x816960ec: // orphan
         // XREFS(31)
         ra = [sp + 0x14]

    loc_0x816960f0: // orphan
         // XREFS: CODE 0x81695a88  CODE 0x81695c18  CODE 0x81695d2c  
         // XREFS: CODE 0x81695d4c  CODE 0x81695e70  CODE 0x81695e84  
         // XREFS: CODE 0x81695f00  CODE 0x816960a0  
         sp += 0x30
         ret                      // ra
         

    loc_0x816968b8: // orphan
         sub.s f2, f2, f14
         mfc1 t4, f18
         halfword [v0 - 4] = t2
         sub.s f0, f0, f12
         if                       // likely
         halfword [v0 - 2] = t4

    loc_0x8169691c: // orphan
         a2 += 0x37e0
         v0 = , unsigned  byte [a2 + 0] // s4
         v1 = 0x8153 << 16
         a0 = 0x8153 << 16
         if                       // unlikely
         t6 = 0x8151 << 16

    loc_0x81696934: // orphan
         v1 = v0 - 1              // t3
         goto 0x81696944
         v1 &= 0xff               // t3

    loc_0x81696940: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169692c
         v1 = , unsigned  byte [v1 + 0x10d0] // s4

    loc_0x81696944: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696938
         v0 = , unsigned  byte [a2 + 1] // s4
         a1 = 0x8153 << 16
         if                       // unlikely
         

    loc_0x81696954: // orphan
         a0 = v0 - 1              // t3
         goto 0x81696964
         a0 &= 0xff               // t3

    loc_0x81696960: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169694c
         a0 = , unsigned  byte [a0 + 0x1120] // s4

    loc_0x81696964: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696958
         v0 = , unsigned  byte [a2 + 2] // s4
         t3 = a0 << 1
         if                       // unlikely
         

    loc_0x81696974: // orphan
         a1 = v0 - 1              // t3
         goto 0x81696984
         a1 &= 0xff               // t3

    loc_0x81696980: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169696c
         a1 = , unsigned  byte [a1 + 0x1170] // s4

    loc_0x81696984: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696978
         v0 = , unsigned  byte [a2 + 3] // s4
         a2 = 0x8153 << 16
         if                       // unlikely
         

    loc_0x81696994: // orphan
         a2 = v0 - 1              // t3
         goto 0x816969a4
         a2 &= 0xff               // t3

    loc_0x816969a0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169698c
         a2 = , unsigned  byte [a2 + 0x11c0] // s4

    loc_0x816969a4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696998
         t6 = , unsigned  halfword [t6 + 0x25e6]
         t9 = a2 << 3
         t1 = a1 << 2
         t7 = t6 >> 0xf           // lo
         t8 = t7 << 7
         t0 = t8 | t9
         t2 = t0 | t1
         t4 = t2 | t3
         a3 = t4 | v1
         ret                      // ra
         v0 = a3 & 0xff           // t3

    loc_0x816969cc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696998
         t6 = , unsigned  halfword [t6 + 0x25e6]
         t9 = a2 << 3
         t1 = a1 << 2
         t7 = t6 >> 0xf           // lo
         t8 = t7 << 7
         t0 = t8 | t9
         t2 = t0 | t1
         t4 = t2 | t3
         a3 = t4 | v1
         ret                      // ra
         v0 = a3 & 0xff           // t3

    loc_0x81696a10: // orphan
         t7 = [a0 + 0]            // arg1 // t9
         t6 = v0 + 1
         [a2 + 0] = t6            // arg3
         t8 = t7 ^ 1
         t6 = hi
         [a0 + 0] = t8            // arg1
         t8 = t6 + 2
         div 0, t8, a1            // arg2
         t5 = t4                  // t9
         sp -= 0x50
         [sp + 0x14] = ra
         [t1 + 0] = t4
         if                       // likely
         

    loc_0x81696a44: // orphan
         t7 = [a0 + 0]            // arg1
         t6 = v0 + 1
         [a2 + 0] = t6            // arg3
         t8 = t7 ^ 1              // t9
         t6 = hi
         [a0 + 0] = t8            // arg1
         t8 = t6 + 2
         div 0, t8, a1            // arg2
         t5 = t4                  // t9
         sp -= 0x50
         [sp + 0x14] = ra
         [t1 + 0] = t4
         if                       // likely
         

    loc_0x81696a48: // orphan
         break 7

    loc_0x81696a4c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696a40
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x81696a58: // orphan
         if                       // likely
         

    loc_0x81696a60: // orphan
         break 6

    loc_0x81696a64: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696a50
         v1 = hi
         [t1 + 0] = t6
         t7 = t6
         if                       // likely
         

    loc_0x81696a74: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696a50
         v1 = hi
         [t1 + 0] = t6
         t7 = t6
         if                       // likely
         

    loc_0x81696a78: // orphan
         break 7

    loc_0x81696a7c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x81696a88: // orphan
         if                       // likely
         

    loc_0x81696a90: // orphan
         break 6

    loc_0x81696a94: // orphan
         [sp + 0x44] = v1
         call 0x800828b0          // 0x800828b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t2 = 0x8153 << 16
         t2 += 0x5e3c
         t9 = [t2 + 0]
         t1 = 0x8153 << 16
         t1 += 0x5e14
         at = , unsigned  , t9 < 0x10
         v1 = [sp + 0x44]

    loc_0x81696abc: // orphan
         if                       // unlikely
         t3 = v0 >> 2

    loc_0x81696ac4: // orphan
         t5 = 0x8153 << 16
         t5 += 0x5e2c
         t4 = v1 << 1
         a3 = t4 + t5
         a2 = halfword [a3 + 0]
         t7 = 0x8153 << 16
         t7 += 0x5e20
         if                       // unlikely
         t6 = v1 << 2

    loc_0x81696ae8: // orphan
         t0 = t6 + t7
         a0 = [t0 + 0]            // t9

    loc_0x81696af0: // orphan
         [sp + 0x18] = t0
         a1 = a2 << 2             // k0
         [sp + 0x20] = a3
         call fcn.8150dfa0
         [sp + 0x4c] = t3
         t1 = 0x8153 << 16
         t2 = 0x8153 << 16
         at = 0 - 1               // s2
         t2 += 0x5e3c
         t1 += 0x5e14
         a3 = [sp + 0x20]         // t9

    loc_0x81696b1c: // orphan
         t0 = [sp + 0x18]
         if                       // likely
         // CALL XREF from fcn.8107c5c8 @ +0x2d8
         t3 = [sp + 0x4c]

    loc_0x81696b28: // orphan
         goto 0x81696b5c
         t6 = [t2 + 0]            // t9

    loc_0x81696b30: // orphan
         t8 = halfword [a3 + 0]
         v1 = [t0 + 0]            // t9
         at = 0x8153 << 16
         t9 = t8 << 2

    loc_0x81696b40: // orphan
         v0 = v1 + t9
         t4 = halfword [v0 - 4]
         halfword [at + 0x10c0] = t4
         t5 = halfword [v0 - 2]
         at = 0x8153 << 16
         halfword [at + 0x10c2] = t5

    loc_0x81696b58: // orphan
         t6 = [t2 + 0]            // t9

    loc_0x81696b5c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696b28
         a0 = 0x8153 << 16
         a0 += 0x5dd0             // arg1
         at = , unsigned  , t6 < 0x11
         if                       // unlikely
         t4 = 0x8153 << 16

    loc_0x81696b70: // orphan
         goto 0x81696cb8
         v0 = 0

    loc_0x81696b78: // orphan
         t7 = [t2 + 0]            // t9
         t6 = 0x8153 << 16
         t4 += 0x5e20
         if                       // unlikely
         t6 += 0x5e2c

    loc_0x81696b8c: // orphan
         v0 = [t2 + 0]            // t9
         t8 = v0 + 1
         [t2 + 0] = t8

    loc_0x81696b98: // orphan
         v1 = [t1 + 0]
         t7 = halfword [a0 + 6]
         v0 = halfword [a0 + 0xa]
         t9 = v1 << 2
         t0 = t9 + t4
         t8 = t7 - t3
         t9 = t8 + 0x80
         t5 = v1 << 1
         a3 = t5 + t6             // arg4
         t4 = t9 & 0xfff0
         t5 = t4 + 0x10
         halfword [a3 + 0] = t5   // arg4
         a2 = halfword [a3 + 0]
         a1 = [t0 + 0]            // t9
         t6 = 0x8151 << 16
         at = , a2 < v0           // lo
         beql at, 0, 0x81696bec   // unlikely
         v0 = halfword [a0 + 8]

    loc_0x81696be0: // orphan
         halfword [a3 + 0] = v0   // arg4
         a2 = halfword [a3 + 0]
         v0 = halfword [a0 + 8]

    loc_0x81696bec: // orphan
         at = , v0 < a2
         if                       // likely
         

    loc_0x81696bf8: // orphan
         halfword [a3 + 0] = v0   // arg4
         a2 = halfword [a3 + 0]

    loc_0x81696c00: // orphan
         t6 = [t6 + 0x26dc]       // t9
         a0 = a2
         bnel t6, 0, 0x81696c34   // likely
         [sp + 0x38] = a1

    loc_0x81696c10: // orphan
         a0 = a2
         [sp + 0x38] = a1
         [sp + 0x20] = a3
         call fcn.8150f55c
         [sp + 0x18] = t0
         a3 = [sp + 0x20]         // t9
         goto 0x81696c48
         t0 = [sp + 0x18]

    loc_0x81696c34: // orphan
         [sp + 0x20] = a3
         call fcn.81510140        // fcn.81510140(-1, 0x442f71dcfe116408)
         [sp + 0x18] = t0
         a3 = [sp + 0x20]         // t9
         t0 = [sp + 0x18]

    loc_0x81696c48: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696c28
         a1 = halfword [a3 + 0]
         a0 = [sp + 0x38]
         [sp + 0x18] = t0
         call 0x800776b0          // 0x800776b0(0xfe116408, 0xffff, 0x8, -1)
         a1 <<= 2
         call 0x800799c0          // 0x800799c0(0xfe116408, 0x3fffc, 0x8, -1)
         
         v1 = 0x8153 << 16
         a0 = 0x8153 << 16
         a0 += 0x5e08
         v1 += 0x5e34

    loc_0x81696c74: // orphan
         t7 = [v1 + 0]            // t9
         t8 = [a0 + 0]            // t9
         t0 = [sp + 0x18]
         t6 = [a0 + 0]            // t9
         t9 = t7 + t8

    loc_0x81696c88: // orphan
         unsigned , hi            // t3 // t3
         t5 = [t0 + 0]            // t9
         t7 = t6 & 0xff
         t8 = t7 << 1
         t9 = t5 + t8
         v0 = 0
         t4 = lo
         [v1 + 0] = t4
         t6 = [v1 + 0]
         t4 = halfword [t9 + 0]
         t7 = t4 + t6
         [v1 + 0] = t7

    loc_0x81696cb8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x81696b70
         ra = [sp + 0x14]

    loc_0x81696cbc: // orphan
         sp += 0x50
         ret                      // ra
         

    loc_0x81696cd0: // orphan
         [at + 0x26dc] = a0
         at = 0x8151 << 16
         ret                      // ra
         [at + 0x26e0] = a0

    loc_0x81696d14: // orphan
         t6 = [t1 + 0]
         v1 = 0x8151 << 16
         v1 += 0x26f0
         [v0 + 4] = t9
         [v0 + 4] = 0

    loc_0x81696d28: // orphan
         [t1 + 0] = 0
         t0 = 0 + 0x400
         at = 0x8153 << 16
         [v1 + 0] = t8
         [v1 + 4] = t7
         [v0 + 0] = t6
         [at - 0x3e00] = t0
         v0 = 0x8151 << 16
         v0 += 0x26e8
         t1 = [v0 + 0]
         v1 = 0x8151 << 16
         t0 = 0x8153 << 16
         t0 = [t0 - 0x3e00]
         if                       // unlikely
         v1 += 0x26f0

    loc_0x81696d64: // orphan
         t2 = t1 << 2
         a0 = 0x8153 << 16
         a0 += t2
         a0 = [a0 - 0x3e24]       // t9
         a2 = 0x8153 << 16
         a2 += t2
         a2 = [a2 - 0x3e48]       // t9
         [sp + 0x18] = a0

    loc_0x81696d84: // orphan
         t1 = [v1 + 0]            // t9
         a0 = [sp + 0x18]         // t9
         at = 0x8153 << 16
         if                       // unlikely
         t2 = t1 << 2

    loc_0x81696d98: // orphan
         t3 = 0x8153 << 16
         t3 += t2
         t3 = [t3 - 0x3e24]
         a3 = 0x8153 << 16
         a3 += t2
         a3 = [a3 - 0x3e48]
         [sp + 0x14] = t3

    loc_0x81696db4: // orphan
         t7 = [sp + 0x30]
         t3 = [sp + 0x14]
         t1 = 0
         if                       // fcn.81696eec+0x100 // likely
         [at - 0x3e00] = t0

    loc_0x81696dc8: // orphan
         t2 = t7 & 1
         beql t2, 0, 0x81696e88   // likely
         t6 = [sp + 0x30]

    loc_0x81696dd4: // orphan
         if                       // unlikely
         t2 = 0

    loc_0x81696ddc: // orphan
         t1 = [v0 + 4]
         t2 = 0
         if                       // likely
         t8 = t1 + a2

    loc_0x81696dec: // orphan
         [v0 + 0] = 0
         goto 0x81696e08
         a2 = 0

    loc_0x81696df8: // orphan
         t2 = byte [t8 + 0]       // s4
         t9 = t1 + 1
         goto 0x81696e08
         [v0 + 4] = t9

    loc_0x81696e08: // orphan
         if                       // unlikely
         t4 = 0

    loc_0x81696e10: // orphan
         t1 = [v1 + 4]
         t4 = 0
         if                       // likely
         t6 = t1 + a3             // s2

    loc_0x81696e20: // orphan
         [v1 + 0] = 0
         goto 0x81696e58
         a3 = 0

    loc_0x81696e2c: // orphan
         t4 = byte [t6 + 0]       // s4
         t7 = t1 + 1
         [v1 + 4] = t7
         unsigned , hi
         t4 = lo
         if                       // likely
         at = t4

    loc_0x81696e48: // orphan
         at = t4 + 0x3ff

    loc_0x81696e4c: // orphan
         t4 = , signed  at >> 0xa
         goto 0x81696e5c
         t8 = t2 + t4             // s4

    loc_0x81696e58: // orphan
         t8 = t2 + t4

    loc_0x81696e5c: // orphan
         t6 = t2 - t4
         t7 = t6 << 6
         t9 = t8 << 6
         halfword [a1 + 0] = t9
         halfword [a1 + 2] = t7
         t8 = [sp + 0x30]
         t1 = 0 + 1               // lo
         at = 0x8153 << 16
         if                       // fcn.81696eec+0x100 // unlikely
         [at - 0x3e00] = t0

    loc_0x81696e84: // orphan
         t6 = [sp + 0x30]

    loc_0x81696e88: // orphan
         t9 = t1 << 2
         t5 = a1 + t9
         t7 = t6 << 2
         t8 = t7 + a1
         [sp + 4] = t8

    loc_0x81696fe0: // orphan
         // CODE XREF from fcn.81696eec @ 0x81696fb4
         t7 = t2 - t4
         t8 = t7 << 6
         t6 = t9 << 6
         halfword [t5 + 4] = t6
         halfword [t5 + 6] = t8
         t9 = [sp + 4]
         t5 += 8
         if                       // likely
         

    loc_0x81697004: // orphan
         scd s0, -0x304, a3
         sd gp, -0xc0d, a3

    loc_0x8169703c: // orphan
         
         tltu 0, 0, 0x3cf
         
         t8 = 0 << 3

    loc_0x81697100: // orphan
         
         
         syscall                  // 255 = unknown ()

    loc_0x81697134: // orphan
         

    loc_0x81697188: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816971ac: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816971d0: // orphan
         
         
         
         
         

    loc_0x816971e4: // orphan
         
         
         
         
         

    loc_0x816971f8: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x8169721c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816972a0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816972e4: // orphan
         
         
         
         
         

    loc_0x816972f8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816973ac: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816973f0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x81697454: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x81697478: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         s0 = 0 << 0
         
         

    loc_0x816975a8: // orphan
         a0 = t0 + 0x3144

    loc_0x8169767c: // orphan
         cache 0xe, -0x318e, t7
         ld s6, -0x1086, s7       // s2
         v0 = 0 >> 2
         a0 = t0 + 0x3188

    loc_0x81697864: // orphan
         
         
         
                                  // k0
                                  // k0

    loc_0x81697878: // orphan
         

    loc_0x816978bc: // orphan
         dmult 0, 0
         
         

    loc_0x816979c4: // orphan
         at = s2 << 0x10
         if                       // likely
         call 0x88503800          // 0x88503800(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816979d0: // orphan
         if                       // fcn.8169d248-0x824 // likely
         if                       // likely

    loc_0x816979dc: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816979e4: // orphan
         

    loc_0x816979e8: // orphan
         
         if                       // unlikely
         

    loc_0x816979f0: // orphan
         

    loc_0x816979f4: // orphan
         
         
         
         
         
         
         
         
         goto 0x88000000
         

    loc_0x81697a58: // orphan
         if                       // likely
         call 0x88503800          // 0x88503800(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x81697a60: // orphan
         

    loc_0x81697a6c: // orphan
         at = s2 << 0x10
         if                       // likely
         call 0x88503800          // 0x88503800(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x81697a78: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697a7c: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697a90: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697ad4: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697b18: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697b5c: // orphan
         goto 0x80242c1c
         goto 0x84242428

    loc_0x81697b80: // orphan
         goto 0x84242424
         goto 0x84242424

    loc_0x81697ba4: // orphan
         goto 0x8c2c2c2c
         goto 0x8c2c2c20

    loc_0x81697bb8: // orphan
         goto 0x88282828
         goto 0x88282828

    loc_0x81697c70: // orphan
         s1 = byte [t2 + 0xf68]   // s4
         s1 = byte [t2 + 0x1040]  // s4
         s1 = byte [t2 + 0xcc8]   // s4
         s1 = byte [t2 + 0xdd0]   // s4
         s1 = byte [t2 + 0xea8]   // s4
         s1 = byte [t2 + 0xf80]   // s4
         s1 = byte [t2 + 0x1058]  // s4
         s1 = byte [t2 + 0xcf8]   // s4
         s1 = byte [t2 + 0xde8]   // s4

    loc_0x81697c94: // orphan
         s1 = byte [t2 + 0xec0]   // s4
         s1 = byte [t2 + 0xf98]   // s4
         s1 = byte [t2 + 0x1070]  // s4
         s0 = byte [t2 - 0x3a2c]  // s4
         s0 = byte [t2 - 0x3a18]  // s4
         s0 = byte [t2 - 0x3a04]  // s4
         s0 = byte [t2 - 0x39f0]  // s4
         s0 = byte [t2 - 0x39dc]  // s4
         s0 = byte [t2 - 0x39b8]  // s4
         s0 = byte [t2 - 0x3998]  // s4
         s0 = byte [t2 - 0x3a40]  // s4
         s0 = byte [t2 - 0x3840]  // s4
         s0 = byte [t2 - 0x3828]  // s4
         s0 = byte [t2 - 0x3810]  // s4
         s0 = byte [t2 - 0x37f8]  // s4
         s0 = byte [t2 - 0x37e0]  // s4
         s0 = byte [t2 - 0x37b8]  // s4
         s0 = byte [t2 - 0x3794]  // s4
         s0 = byte [t2 - 0x3858]  // s4
         s0 = byte [t2 - 0x3960]  // s4
         s0 = byte [t2 - 0x3948]  // s4
         s0 = byte [t2 - 0x3930]  // s4
         s0 = byte [t2 - 0x3918]  // s4
         s0 = byte [t2 - 0x3900]  // s4
         s0 = byte [t2 - 0x38d8]  // s4
         s0 = byte [t2 - 0x38b4]  // s4
         s0 = byte [t2 - 0x3978]  // s4
         s0 = byte [t2 - 0x374c]  // s4
         s0 = byte [t2 - 0x373c]  // s4
         s0 = byte [t2 - 0x372c]  // s4
         s0 = byte [t2 - 0x371c]  // s4
         s0 = byte [t2 - 0x370c]  // s4
         s0 = byte [t2 - 0x36f4]  // s4
         s0 = byte [t2 - 0x36c4]  // s4

    loc_0x81697d1c: // orphan
         s0 = byte [t2 - 0x375c]  // s4
         s0 = byte [t2 - 0x36a0]  // s4
         s0 = byte [t2 - 0x3694]  // s4
         s0 = byte [t2 - 0x3688]  // s4
         s0 = byte [t2 - 0x367c]  // s4
         s0 = byte [t2 - 0x3670]  // s4
         s0 = byte [t2 - 0x365c]  // s4
         s0 = byte [t2 - 0x3644]  // s4
         s0 = byte [t2 - 0x36ac]  // s4

    loc_0x81697d40: // orphan
         s0 = byte [t2 - 0x361c]  // s4
         s0 = byte [t2 - 0x360c]  // s4
         s0 = byte [t2 - 0x35fc]  // s4
         s0 = byte [t2 - 0x35ec]  // s4
         s0 = byte [t2 - 0x35dc]  // s4
         s0 = byte [t2 - 0x35c4]  // s4
         s0 = byte [t2 - 0x3594]  // s4
         s0 = byte [t2 - 0x362c]  // s4
         s0 = byte [t2 - 0x34a0]  // s4
         s0 = byte [t2 - 0x3488]  // s4

    loc_0x81697d68: // orphan
         s0 = byte [t2 - 0x3470]  // s4
         s0 = byte [t2 - 0x3458]  // s4
         s0 = byte [t2 - 0x3440]  // s4
         s0 = byte [t2 - 0x341c]  // s4
         s0 = byte [t2 - 0x33f8]  // s4
         s0 = byte [t2 - 0x34b8]  // s4
         s0 = byte [t2 - 0x3568]  // s4
         s0 = byte [t2 - 0x3554]  // s4
         s0 = byte [t2 - 0x3540]  // s4
         s0 = byte [t2 - 0x352c]  // s4
         s0 = byte [t2 - 0x3518]  // s4
         s0 = byte [t2 - 0x34f8]  // s4
         s0 = byte [t2 - 0x34d8]  // s4
         s0 = byte [t2 - 0x357c]  // s4
         s0 = byte [t2 - 0x3200]  // s4
         s0 = byte [t2 - 0x31f8]  // s4
         s0 = byte [t2 - 0x31f0]  // s4
         s0 = byte [t2 - 0x31e8]  // s4
         s0 = byte [t2 - 0x31e0]  // s4
         s0 = byte [t2 - 0x31d4]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3208]  // s4
         s0 = byte [t2 - 0x323c]  // s4
         s0 = byte [t2 - 0x3234]  // s4
         s0 = byte [t2 - 0x322c]  // s4
         s0 = byte [t2 - 0x3224]  // s4
         s0 = byte [t2 - 0x321c]  // s4
         s0 = byte [t2 - 0x3210]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3244]  // s4
         s0 = byte [t2 - 0x3278]  // s4
         s0 = byte [t2 - 0x3270]  // s4
         s0 = byte [t2 - 0x3268]  // s4
         s0 = byte [t2 - 0x3260]  // s4
         s0 = byte [t2 - 0x3258]  // s4
         s0 = byte [t2 - 0x324c]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3280]  // s4
         s0 = byte [t2 - 0x32b4]  // s4
         s0 = byte [t2 - 0x32ac]  // s4
         s0 = byte [t2 - 0x32a4]  // s4
         s0 = byte [t2 - 0x329c]  // s4
         s0 = byte [t2 - 0x3294]  // s4
         s0 = byte [t2 - 0x3288]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x32bc]  // s4
         s0 = byte [t2 - 0x32f0]  // s4
         s0 = byte [t2 - 0x32e8]  // s4
         s0 = byte [t2 - 0x32e0]  // s4
         s0 = byte [t2 - 0x32d8]  // s4
         s0 = byte [t2 - 0x32d0]  // s4
         s0 = byte [t2 - 0x32c4]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x32f8]  // s4
         s0 = byte [t2 - 0x332c]  // s4
         s0 = byte [t2 - 0x3324]  // s4
         s0 = byte [t2 - 0x331c]  // s4

    loc_0x81697e4c: // orphan
         s0 = byte [t2 - 0x3314]  // s4
         s0 = byte [t2 - 0x330c]  // s4
         s0 = byte [t2 - 0x3300]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3334]  // s4
         s0 = byte [t2 - 0x3368]  // s4
         s0 = byte [t2 - 0x3360]  // s4
         s0 = byte [t2 - 0x3358]  // s4
         s0 = byte [t2 - 0x3350]  // s4
         s0 = byte [t2 - 0x3348]  // s4
         s0 = byte [t2 - 0x333c]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3370]  // s4
         s0 = byte [t2 - 0x33a0]  // s4

    loc_0x81697e84: // orphan
         s0 = byte [t2 - 0x3398]  // s4
         s0 = byte [t2 - 0x3390]  // s4
         s0 = byte [t2 - 0x3388]  // s4
         s0 = byte [t2 - 0x33a8]  // s4
         s0 = byte [t2 - 0x3380]  // s4
         s0 = byte [t2 - 0x33d4]  // s4
         s0 = byte [t2 - 0x3378]  // s4
         s0 = byte [t2 - 0x31c4]  // s4
         s0 = byte [t2 - 0x31bc]  // s4
         s0 = byte [t2 - 0x31b4]  // s4
         s0 = byte [t2 - 0x31ac]  // s4
         s0 = byte [t2 - 0x31a4]  // s4
         s0 = byte [t2 - 0x319c]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x31cc]  // s4
         s0 = byte [t2 - 0x318c]  // s4
         s0 = byte [t2 - 0x3184]  // s4
         s0 = byte [t2 - 0x317c]  // s4
         s0 = byte [t2 - 0x3174]  // s4
         s0 = byte [t2 - 0x316c]  // s4
         s0 = byte [t2 - 0x3164]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x3194]  // s4
         s0 = byte [t2 - 0x3154]  // s4
         s0 = byte [t2 - 0x314c]  // s4
         s0 = byte [t2 - 0x3144]  // s4
         s0 = byte [t2 - 0x313c]  // s4
         s0 = byte [t2 - 0x3134]  // s4
         s0 = byte [t2 - 0x312c]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x315c]  // s4
         s0 = byte [t2 - 0x311c]  // s4
         s0 = byte [t2 - 0x3114]  // s4
         s0 = byte [t2 - 0x310c]  // s4
         s0 = byte [t2 - 0x3104]  // s4
         s0 = byte [t2 - 0x30fc]  // s4
         s0 = byte [t2 - 0x30f4]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x3124]  // s4
         s0 = byte [t2 - 0x30e4]  // s4
         s0 = byte [t2 - 0x30dc]  // s4
         s0 = byte [t2 - 0x30d4]  // s4
         s0 = byte [t2 - 0x30cc]  // s4
         s0 = byte [t2 - 0x30c4]  // s4
         s0 = byte [t2 - 0x30bc]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x30ec]  // s4
         s0 = byte [t2 - 0x30ac]  // s4
         s0 = byte [t2 - 0x30a4]  // s4
         s0 = byte [t2 - 0x309c]  // s4
         s0 = byte [t2 - 0x3094]  // s4
         s0 = byte [t2 - 0x308c]  // s4
         s0 = byte [t2 - 0x3084]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x30b4]  // s4
         s0 = byte [t2 - 0x3074]  // s4
         s0 = byte [t2 - 0x306c]  // s4
         s0 = byte [t2 - 0x3064]  // s4
         s0 = byte [t2 - 0x305c]  // s4
         s0 = byte [t2 - 0x3054]  // s4
         s0 = byte [t2 - 0x304c]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x307c]  // s4
         s0 = byte [t2 - 0x303c]  // s4
         s0 = byte [t2 - 0x3034]  // s4
         s0 = byte [t2 - 0x302c]  // s4
         s0 = byte [t2 - 0x3024]  // s4
         s0 = byte [t2 - 0x301c]  // s4
         s0 = byte [t2 - 0x3014]  // s4
         s0 = byte [t2 - 0x300c]  // s4
         s0 = byte [t2 - 0x3044]  // s4
         s0 = byte [t2 - 0x2fb8]  // s4
         s0 = byte [t2 - 0x2fb0]  // s4
         s0 = byte [t2 - 0x2fa8]  // s4
         s0 = byte [t2 - 0x2fa0]  // s4
         s0 = byte [t2 - 0x2f98]  // s4
         s0 = byte [t2 - 0x2f90]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2fc0]  // s4
         s0 = byte [t2 - 0x2f80]  // s4
         s0 = byte [t2 - 0x2f78]  // s4
         s0 = byte [t2 - 0x2f70]  // s4
         s0 = byte [t2 - 0x2f68]  // s4
         s0 = byte [t2 - 0x2f60]  // s4
         s0 = byte [t2 - 0x2f58]  // s4

    loc_0x81697fd8: // orphan
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2f88]  // s4
         s0 = byte [t2 - 0x2f48]  // s4
         s0 = byte [t2 - 0x2f40]  // s4
         s0 = byte [t2 - 0x2f38]  // s4
         s0 = byte [t2 - 0x2f30]  // s4
         s0 = byte [t2 - 0x2f28]  // s4
         s0 = byte [t2 - 0x2f20]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2f50]  // s4
         s0 = byte [t2 - 0x2f10]  // s4
         s0 = byte [t2 - 0x2f08]  // s4
         s0 = byte [t2 - 0x2f00]  // s4
         s0 = byte [t2 - 0x2ef8]  // s4
         s0 = byte [t2 - 0x2ef0]  // s4
         s0 = byte [t2 - 0x2ee8]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2f18]  // s4
         s0 = byte [t2 - 0x2ed8]  // s4
         s0 = byte [t2 - 0x2ed0]  // s4
         s0 = byte [t2 - 0x2ec8]  // s4
         s0 = byte [t2 - 0x2ec0]  // s4
         s0 = byte [t2 - 0x2eb8]  // s4
         s0 = byte [t2 - 0x2eb0]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2ee0]  // s4
         s0 = byte [t2 - 0x2ea0]  // s4
         s0 = byte [t2 - 0x2e98]  // s4
         s0 = byte [t2 - 0x2e90]  // s4
         s0 = byte [t2 - 0x2e88]  // s4
         s0 = byte [t2 - 0x2e80]  // s4
         s0 = byte [t2 - 0x2e78]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2ea8]  // s4
         s0 = byte [t2 - 0x2e68]  // s4
         s0 = byte [t2 - 0x2e60]  // s4
         s0 = byte [t2 - 0x2e58]  // s4
         s0 = byte [t2 - 0x2e50]  // s4
         s0 = byte [t2 - 0x2e48]  // s4
         s0 = byte [t2 - 0x2e40]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2e70]  // s4
         s0 = byte [t2 - 0x2e30]  // s4
         s0 = byte [t2 - 0x2e28]  // s4
         s0 = byte [t2 - 0x2e20]  // s4
         s0 = byte [t2 - 0x2e18]  // s4
         s0 = byte [t2 - 0x2e10]  // s4
         s0 = byte [t2 - 0x2e08]  // s4
         s0 = byte [t2 - 0x2fe4]  // s4
         s0 = byte [t2 - 0x2e38]  // s4

    loc_0x816983cc: // orphan
         s0 = byte [t2 - 0x4438]  // s4

    loc_0x816983f4: // orphan
         s0 = byte [t2 - 0x4404]  // s4

    loc_0x8169847c: // orphan
         s0 = byte [t2 - 0x4560]  // s4

    loc_0x81698564: // orphan
         s0 = byte [t2 - 0x3cdc]  // s4

    loc_0x8169858c: // orphan
         s0 = byte [t2 - 0x3cb4]  // s4

    loc_0x816985e4: // orphan
         s0 = byte [t2 - 0x43d0]  // s4

    loc_0x816986bc: // orphan
         s0 = byte [t2 - 0x45e8]  // s4
         bgezl s0, 0x816986c4     // likely
         s0 = byte [t2 - 0x4600]  // s4

    loc_0x816986c4: // orphan
         s0 = byte [t2 - 0x45e8]  // s4
         bgezl s0, 0x816986c4     // likely
         s0 = byte [t2 - 0x4600]  // s4

    loc_0x816986c8: // orphan
         if                       // likely
         s0 = byte [t2 - 0x47b4]  // s4

    loc_0x816986cc: // orphan
         s0 = byte [t2 - 0x47b4]  // s4

    loc_0x81698744: // orphan
         s0 = byte [t2 - 0x463c]  // s4
         if                       // likely
         s0 = byte [t2 - 0x47a4]  // s4

    loc_0x8169874c: // orphan
         s0 = byte [t2 - 0x47a4]  // s4

    loc_0x81698760: // orphan
         if                       // likely
         s0 = byte [t2 - 0x46ac]  // s4

    loc_0x81698764: // orphan
         s0 = byte [t2 - 0x46ac]  // s4

    loc_0x81698768: // orphan
         if                       // likely
         s0 = byte [t2 - 0x4670]  // s4

    loc_0x8169876c: // orphan
         s0 = byte [t2 - 0x4670]  // s4

    loc_0x81698770: // orphan
         bgezl 0, 0x81698774      // likely
         s0 = byte [t2 - 0x4590]  // s4

    loc_0x81698774: // orphan
         bgezl 0, 0x81698774      // likely
         s0 = byte [t2 - 0x4590]  // s4

    loc_0x81698874: // orphan
         s0 = byte [t2 - 0x3a80]  // s4

    loc_0x816988dc: // orphan
         a1 = t8 + 0x20f9

    loc_0x81698938: // orphan
         lwc1 f11, 0x1117, t6
         ll t3, 0x1117, t6        // t9
         if                       // unlikely
         v0 = t9 + 0x23c9

    loc_0x81698948: // orphan
         pref 0xd, 0x6666, s7
         pref 0xd, 0xb, 0

    loc_0x81698974: // orphan
         swr t9, 0x333e, sp

    loc_0x81698a20: // orphan
         break 0x26, 0x343

    loc_0x81698a6c: // orphan
         break 0x118, 3

    loc_0x81698b08: // orphan
         lwl t1, 0xe, a0
         ld t4, 0x6ee6, a2        // s2
         ld sp, -0x2667, t6       // s2
         swr k1, 0x6763, sp
         ldr t6, -0x1334, s0
         ld gp, -0x6661, t6       // s2
         swr t9, 0x333e, sp
         
         
         
         
         
         

    loc_0x81698b50: // orphan
         call 0x89a4ab88          // 0x89a4ab88(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x81698b84: // orphan
         bbit132 s1, 0x1e, 0x81699308

    loc_0x81698ccc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x81698cd8: // orphan
         lwr fp, 0x822, at        // t9

    loc_0x81698d18: // orphan
         ll s0, -0xefd, a3        // t9

    loc_0x81698d2c: // orphan
         call 0x8c3c7c7c          // 0x8c3c7c7c(-1, 0x442f71dcfe116408, 0x8, -1)
         sd ra

    loc_0x81698d54: // orphan
         dsra32 t7, 0, 0x1d

    loc_0x81698d68: // orphan
         sd fp, -0x2061, s6

    loc_0x81698da0: // orphan
         ext t8, a3, 0

    loc_0x81698ddc: // orphan
         

    loc_0x81698e28: // orphan
         s0 = byte [t2 - 0x2474]  // s4
         s0 = byte [t2 - 0x2460]  // s4
         s0 = byte [t2 - 0x287c]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x26c8]  // s4
         s0 = byte [t2 - 0x2598]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x2974]  // s4
         s0 = byte [t2 - 0x2a14]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x2a4c]  // s4
         s0 = byte [t2 - 0x2a54]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x2ad4]  // s4
         s0 = byte [t2 - 0x23f4]  // s4
         s0 = byte [t2 - 0x2a44]  // s4
         s0 = byte [t2 - 0x2a24]  // s4

    loc_0x816992d4: // orphan
         [a1 - 0x2dd1] = v0
         beql v0, s0, 0x816aebbc  // unlikely
         bbit032 t5, 0xb, 0x81683598

    loc_0x816992e0: // orphan
         sdc1 f16, 0x554f, t2

    loc_0x816992e8: // orphan
         sdr s4, -0x1ba1, t4
         nmsub.d f27, f2, f7
         bbit0 a1, 8, 0x81683d8c
         swl fp, 0x3353, a2       // arg3
         beql t2, t9, 0x816a3254  // unlikely
         swr a1, -0x565a, sp

    loc_0x81699300: // orphan
         [t7 + 0x2a48] = s1
         bnel s2, a3, 0x816a6398  // unlikely

    loc_0x816993a0: // orphan
         beql s2, s3, 0x816ae0f0  // unlikely
         beql k0, s4, 0x816ae0f8  // unlikely

    loc_0x816993ac: // orphan
         sc t2, -0x4d57, fp
         swl t0, -0x5858, a1
         swl a3, -0x575a, a1
         halfword [sp - 0x3e2a] = t0
         sd s6, 0x4854, t1
         bnel v0, s2, 0x816ae10c  // likely
         beql k0, s2, 0x816ae514  // unlikely

    loc_0x816993cc: // orphan
         at = t9 ^ 0x8ee
         bbit032 t6, 1, 0x81684e78
         swl t1, -0x5758, s5
         halfword [sp - 0x575a] = a3
         halfword [sp - 0x585e] = a0
         sdr ra, -0xcf3, a2
         k0 = t1 + 0x4e53
         beql s2, s1, 0x816add30  // unlikely
         beql s2, s3, 0x816ae140  // unlikely

    loc_0x816993f4: // orphan
         bnel t2, s5, 0x816ae0ec  // likely
         t7 = , unsigned  , t0 < -0x192b // lo

    loc_0x816993fc: // orphan
         ll t6, -0x5758, a1       // t9
         swl t1, -0x5557, t5
         swl t0, -0x5759, t5
         halfword [sp - 0x5759] = t0
         halfword [sp - 0x5852] = a1
         ll t7, -0x16f3, t6       // t9

    loc_0x81699444: // orphan
         halfword [sp - 0x5758] = a3
         swl t1, -0x4d41, a1      // arg2
         bbit0 t6, 0x18, 0x81692028
         if                       // unlikely

    loc_0x816994f8: // orphan
         swl t1, -0x5657, t5

    loc_0x816994fc: // orphan
         swl t1, -0x5657, t5
         swl t4, -0x4f4c, t5
         swr gp, -0x3d3b, a1
         pref 0x18, -0x221e, t6
         bbit1 a3, 0xd, 0x816960ec

    loc_0x81699510: // orphan
         sd at, 0x70c, 0
         if                       // likely
         s2 = , unsigned  , s1 < 0x373b

    loc_0x8169952c: // orphan
         bnel v0, s4, 0x816ae680  // unlikely
         bnel v0, s4, 0x816ae680  // unlikely

    loc_0x81699538: // orphan
         beql k0, s3, 0x816ae288  // unlikely
         beql k0, s3, 0x816ae28c  // unlikely

    loc_0x81699544: // orphan
         beql s2, s2, 0x816ade90  // likely
         beql t2, t7, 0x816ac26c  // unlikely

    loc_0x81699550: // orphan
         s4 = t9 | 0x2e26
         fp = t8 + 0x1a16
         if                       // unlikely
         tlt t8, 0, 0x3eb

    loc_0x816995d4: // orphan
         gp = s1 ^ 0x3e40

    loc_0x81699670: // orphan
         ll ra, -0x4143, a1       // t9
         cache 0x1c, -0x4344, a1
         cache 0x1c, -0x4346, a1
         swr t9, -0x4646, t5
         swr gp, -0x4344, sp

    loc_0x81699684: // orphan
         cache 0x1b, -0x4546, a1

    loc_0x81699688: // orphan
         swr k0, -0x4445, s5
         swr k1, -0x4446, sp
         swr k0, -0x4443, s5
         cache 0, -0x3e3f, s6
         ll at, -0x3e3f, s6       // t9
         ll at, -0x3e3f, t6       // t9
         ll v1, -0x3b3b, s6       // t9
         lwc1 f5, -0x3a3b, t6
         lwc1 f6, -0x3734, s6
         pref 0xb, -0x3333, a2
         pref 0x11, -0x2d2e, fp
         lld s1, -0x3031, s6      // s2
         lld s4, -0x292a, fp
         ldc1 f23, -0x2828, s6
         bbit032 t6, 0x1b, 0x81690e44
         sc at, -0x1e1f, t7
         sc v1, -0x1b1a, s7

    loc_0x816996cc: // orphan
         bbit1 a3, 0xa, 0x8169467c
         bbit1 ra, 0xb, 0x81694684

    loc_0x81699750: // orphan
         t6 = , unsigned  , t9 < 0x2e2e
         s0 = , unsigned  , t9 < 0x3031
         s0 = t1 & 0x2f2f
         t6 = , unsigned  , t9 < 0x2e2d
         t3 = , unsigned  , at < 0x2a2a // lo
         t3 = , s1 < 0x2c2c
         t3 = , t9 < 0x2a29
         a3 = , at < 0x2727       // arg4 // lo
         a1 = s1 + 0x2322         // arg2
         at = s1 + 0x2020
         

    loc_0x81699798: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816997a4: // orphan
         goto 0x8c2c2828
         goto 0x84242428

    loc_0x816997ac: // orphan
         goto 0x8c2c2c28
         goto 0x88282828

    loc_0x81699a74: // orphan
         sd fp, -0x100, t7

    loc_0x81699a84: // orphan
         dsra32 0, at, 3

    loc_0x81699a88: // orphan
         sd sp, -0x200, s7

    loc_0x81699a98: // orphan
         sd fp, -0x100, a3        // arg4
         dsra32 ra, 0, 0x1f

    loc_0x81699ad0: // orphan
         movf 0, 0, fcc0

    loc_0x81699b04: // orphan
         sd sp, -0x102, t7
         sd sp, -0x204, t7
         bbit132 ra, 0x1b, 0x81698afc
         sd sp, -0x304, a3        // arg4
         bbit132 ra, 0x1b, 0x81698f08
         bbit132 ra, 0x1a, 0x81698b08
         sd sp, -0x102, a3        // arg4
         sd sp, -0x303, s7
         sd ra, -3, ra
         sd gp, -0x302, a3        // arg4
         

    loc_0x81699b30: // orphan
         sd ra, s0, s7

    loc_0x81699b5c: // orphan
         sd ra, 1, s7

    loc_0x81699b80: // orphan
         bbit132 t7, 0x1a, 0x8169876c
         bbit132 s7, 0x19, 0x81698778
         sd fp, -1, t7
         sd sp, -0x203, s7
         sd ra, 0x204, s7

    loc_0x81699c08: // orphan
         sdc1 f21, -0x809, t7
         sdc1 f24, -0x404, ra
         sd ra, -0x103, s7
         bbit132 ra, 0x1a, 0x81698c18

    loc_0x81699c1c: // orphan
         sd ra, -0x100, ra

    loc_0x81699cb4: // orphan
         sdc1 f23, -0x809, t7
         bbit132 a3, 0x18, 0x816980a0
         bbit132 ra, 0x1c, 0x816990ac
         bbit132 ra, 0x1b, 0x816990b8
         sd v0, 0x302, t8

    loc_0x81699ce8: // orphan
         bbit132 a3, 0x19, 0x816984d4
         bbit132 s7, 0x19, 0x816984d8
         sd ra, s0, a3            // arg4

    loc_0x81699da0: // orphan
         bbit132 s7, 0x1a, 0x8169899c
         tlti t8, 0x908

    loc_0x81699de4: // orphan
         bbit132 a3, 0x18, 0x816985cc
         bbit132 a3, 0x18, 0x81697dc8
         bbit132 a3, 0x1a, 0x816995e4
         sd ra

    loc_0x81699e6c: // orphan
         goto 0x882c3030
         goto 0x8c241c14

    loc_0x81699f10: // orphan
         goto 0x882c2824
         bltzl t8, 0x8169a720     // unlikely

    loc_0x81699f1c: // orphan
         bbit132 s7, 0x1a, 0x81698700
         bbit132 a3, 0x18, 0x81697afc
         sdc1 f18, -0xd0d, a3
         sdc1 f22, -0x807, t7
         bbit132 t7, 0x1b, 0x81699b34

    loc_0x8169a13c: // orphan
         bbit132 t7, 0x19, 0x81698924
         bbit132 a3, 0x17, 0x81698128
         sd sp, -0x203, a3        // arg4
         bbit132 ra, 0x19, 0x81698530
         bbit132 s7, 0x1a, 0x8169892c

    loc_0x8169a150: // orphan
         sdc1 f21, -0xa0a, t7
         bbit132 a3, 0x19, 0x81698d40
         bbit132 a3, 0x19, 0x8169954c
         sd gp, -0x305, t7
         sd fp, -0x101, a3        // arg4

    loc_0x8169a1c8: // orphan
         sd ra, 2, s7

    loc_0x8169a20c: // orphan
         bgezl 0, 0x8169aa14      // likely

    loc_0x8169a220: // orphan
         sdc1 f21, -0xa0b, s7
         sdc1 f22, -0x707, s7
         bbit132 s7, 0x1c, 0x81699e28
         sd k1, -0x70a, s7
         sdc1 f23, -0x604, s7
         sd sp, -0x305, s7
         bbit132 ra, 0x1d, 0x81699e40

    loc_0x8169a46c: // orphan
         bbit0 t7, 2, 0x8169a8d8
         s1 = , t1 < 0x332b
         if                       // unlikely
         cache 0x1c, -0x3b19, sp

    loc_0x8169a47c: // orphan
         if                       // unlikely
         k0 = t9 & 0x3823

    loc_0x8169a48c: // orphan
         sc t1, 0x2833, s0
         t7 = , unsigned  , t1 < 0x3d41 // lo
         v1 = t0 & 0xd5c4
         lwc1 f8, -0x3d42, t6
         pref 0xc, 0xc23, a3
         s2 = , unsigned  , s1 < 0x3438

    loc_0x8169a4d4: // orphan
         bbit0 t6, 9, 0x8168b7d0
         swr v0, -0x2d14, fp
         goto 0x807cacb0
         s3 = , unsigned  , t1 < 0x3a38 // lo

    loc_0x8169a4f0: // orphan
         sdl sp, -0x2c14, sp
         sd t3, 0x1520, t8
         t3 = , t1 < 0x2621
         fp = 0 + 0x180d
         sd t3, -0x2839, s7
         ll 0, -0x4148, a2
         sdr ra, -0x312a, t5
         lld t5, -0x20fe, a2      // s2
         t5 = t9 + 0x2925
         s3 = , t1 < 0x3635

    loc_0x8169a518: // orphan
         t7 = s1 & 0x2512
         bbit132 s7, 8, 0x81691874

    loc_0x8169a520: // orphan
         pref 4, -0x3e3c, a2
         bbit0 a2, 9, 0x8168c850
         ldc1 f5, -0x7f7, a3
         if                       // likely
         a2 = s1 + 0x2a32

    loc_0x8169a534: // orphan
         
         a2 = t1 & 0x1602

    loc_0x8169a544: // orphan
         bbit0 t6, 3, 0x8168a870
         sc k0, 0xa12, t7

    loc_0x8169a60c: // orphan
         scd t3, -0x1b23, ra
         ldc1 f18, -0x2e30, s6
         pref 9, -0x383b, t6
         ll fp, -0x4548, s5       // t9
         sdr s4, -0x5055, sp

    loc_0x8169a620: // orphan
         swl t5, -0x4a42, s5
         bbit0 a2, 0x13, 0x81691dc8
         scd gp, 0x50e, s7
         if                       // likely
         a2 = t9 + 0x2a2d

    loc_0x8169a634: // orphan
         s3 = , unsigned  , t9 < 0x3638
         sp = t9 ^ 0x4144
         bz.w w9, 0x816adb80      // unlikely
         beql t2, t6, 0x816ac344  // fcn.816b71d8-0xae94 // unlikely

    loc_0x8169a644: // orphan
         t7 = at ^ 0x271e

    loc_0x8169a648: // orphan
         if                       // likely

    loc_0x8169a6a8: // orphan
         sdl t5, -0x5659, t5
         halfword [t5 - 0x6060] = v0
         swl s7, -0x382d, a1
         bbit032 ra, 3, 0x816966a4
         bgezal t8, 0x816a1b64    // 0x1a(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8169a710: // orphan
         sdr gp, -0x3d37, a1
         ldc1 f1, -0x1006, a3

    loc_0x8169a74c: // orphan
         goto 0x880febc4
         swc1 f30, -0x2831, fp

    loc_0x8169a778: // orphan
         call fcn.80343c3c        // fcn.80343c3c(-1, 0x442f71dcfe116408, 0x8)
         call 0x88384448          // 0x88384448(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // likely
         if                       // likely

    loc_0x8169a78c: // orphan
         s0 = , unsigned  , s1 < 0x353e

    loc_0x8169a7f4: // orphan
         ldc1 f26, -0x1d13, a2
         scd t5, -0x110a, t7
         sd at, 0x304, t0

    loc_0x8169a830: // orphan
         t7 = s1 | 0x2728
         s0 = , unsigned  , t1 < 0x3539 // lo
         gp = t9 ^ 0x4455
         daddi fp, k0, 0x5553
         bnel v0, s5, 0x816af990  // likely

    loc_0x8169a868: // orphan
         lwc1 f4, -0x444a, s6
         swr k0, -0x4544, a1
         cache 0x16, -0x4c48, a1
         lwc1 f10, -0x3635, a2
         lld t8, -0x1f16, s6      // s2
         scd s4, -0xd07, s7

    loc_0x8169aa44: // orphan
         if                       // likely
         t2 = , unsigned  , t1 < 0x2a2e // lo

    loc_0x8169aa4c: // orphan
         t7 = at & 0x2d26

    loc_0x8169aa58: // orphan
         scd s3, -0x809, s7
         sdc1 f18, -0x5fa, a3
         call 0x88445c78          // 0x88445c78(-1, 0x442f71dcfe116408, 0x8, -1)
         t6 = t1 + 0x3941

    loc_0x8169ab54: // orphan
         ld a0, -0x1a19, s7       // s2
         bbit1 s7, 0xd, 0x81696f34
         bbit132 s7, 0x15, 0x81695b00
         bbit1 s7, 8, 0x816936c4
         pref 4, -0x4549, fp

    loc_0x8169ab68: // orphan
         sdr t4, -0x5f67, t5
         lwr gp, -0x6161, t4      // t9
         byte [t5 - 0x5c53] = at
         swr 0, -0x3d3d, t6
         bbit0 a2, 0xf, 0x8168fedc

    loc_0x8169ab7c: // orphan
         bbit032 fp, 0x16, 0x8168eeb4
         pref 0xd, -0x3b46, fp
         sdl t5, -0x585c, sp
         byte [t4 - 0x6f76] = k0
         s2 = [t4 - 0x6d6e]       // t9
         s5 = , unsigned  halfword [a0 - 0x6660]
         swl t7, -0x5253, s5
         sdr t9, -0x4342, a1
         cache 0x1d, -0x4545, sp
         ll v0, -0x464f, t6       // t9
         [sp - 0x5154] = t7
         swl a2, -0x6265, sp
         byte [a1 - 0x6268] = at
         s7 = , unsigned  halfword [s4 - 0x6765]
         lwu sp, -0x6767, gp      // t9
         byte [a1 - 0x5557] = a3
         swl t4, -0x514c, s5

    loc_0x8169abc0: // orphan
         cache 0x1f, -0x4346, a1
         cache 3, -0x3a3f, t6
         cache 0x19, -0x4b4e, s5
         sdl s2, -0x5561, sp
         lwr t9, -0x686c, s4

    loc_0x8169abd4: // orphan
         t7 = , unsigned  byte [gp - 0x7476] // s4
         k0 = , unsigned  byte [t4 - 0x6365] // s4
         byte [a1 - 0x5049] = a3
         cache 5, -0x3b3b, fp
         pref 0x16, -0x292f, t6
         pref 9, -0x3b40, t6
         cache 0x1a, -0x525f, sp
         lwu sp, -0x656b, s4      // t9
         t5 = , unsigned  byte [a0 - 0x7574] // s4
         gp = , unsigned  halfword [t4 - 0x6263]
         byte [sp - 0x4741] = t5
         lwc1 f9, -0x3635, t6
         lld k0, -0x262c, fp
         lld s0, -0x3034, a2      // s2
         bbit0 a2, 1, 0x816886c4
         swl t3, -0x565e, s5
         lwu sp, -0x6260, t4      // t9
         halfword [s5 - 0x5557] = t2
         [t5 - 0x403e] = t8
         lwc1 f8, -0x3633, t6
         lld t9, -0x272f, fp
         lld s4, -0x282a, a2      // s2
         ldc1 f17, -0x3338, a2
         bbit0 t6, 0xf, 0x8168df40
         cache 0x1f, -0x4041, sp
         cache 0x1d, -0x464c, sp
         sdr fp, -0x3f43, s5
         swr sp, -0x3d39, sp
         pref 0x16, -0x292b, s6
         bbit032 t7, 2, 0x81694ff4
         bbit1 s7, 0xb, 0x8169640c
         scd s6, -0xd16, ra
         swc1 f3, -0x1c21, a3

    loc_0x8169ac58: // orphan
         ldc1 f16, -0x363d, fp
         ll a1, -0x3a3f, fp
         cache 3, -0x3531, s6
         ldc1 f28, -0x1f1c, s6

    loc_0x8169ac6c: // orphan
         tgei 0, 0xb0e
         if                       // unlikely
         dsll ra, 0, 0x1f

    loc_0x8169ac80: // orphan
         lld t9, -0x1d18, a2      // s2

    loc_0x8169acc4: // orphan
         if                       // likely
         v1 = at + 0x2423

    loc_0x8169accc: // orphan
         t3 = t9 + 0x3538
         k1 = at ^ 0x4046

    loc_0x8169ad38: // orphan
         bgtzl t3, 0x816b3ac4     // likely

    loc_0x8169ad60: // orphan
         ldl a0, 0x6262, v1       // s2
         daddi ra, s2, 0x5c56

    loc_0x8169ad74: // orphan
         a2 = s1 + 0x2d37

    loc_0x8169ae08: // orphan
         a1 = s1 + 0x2321

    loc_0x8169ae1c: // orphan
         ld sp, -0x2320, t6       // s2
         bbit1 t7, 0xf, 0x81698610
         sd ra, 0x209, s7
         if                       // unlikely
         call fcn.802c2824

    loc_0x8169ae64: // orphan
         pref 0xe, -0x2e29, a2
         bbit032 fp, 0x1c, 0x816925f0
         bbit1 ra, 0x13, 0x81698248
         bbit132 t7, 0x1a, 0x8169a27c
         bltzl t0, 0x81699a48     // unlikely
         sdc1 f16, -0x161f, a3

    loc_0x8169ae78: // orphan
         pref 0xe, -0x2e29, a2
         bbit032 fp, 0x1c, 0x816925f0
         bbit1 ra, 0x13, 0x81698248
         bbit132 t7, 0x1a, 0x8169a27c
         bltzl t0, 0x81699a48     // unlikely
         sdc1 f16, -0x161f, a3

    loc_0x8169ae7c: // orphan
         bbit032 t6, 0x11, 0x8168d99c
         bbit0 a2, 3, 0x8168995c
         swr sp, -0x3d3a, t5
         bbit0 fp, 0xf, 0x8168f9f8
         bbit1 a3, 0xf, 0x81697a60
         bbit132 a3, 0x1c, 0x8169ae98
         teq s7, sp, 0x3db
         sdc1 f18, -0x1520, a3

    loc_0x8169ae9c: // orphan
         bbit032 a2, 0x12, 0x8168ddc0
         lwc1 f2, -0x4347, fp
         swr 0, -0x3d3d, fp
         lwc1 f9, -0x322b, s6
         ld v1, -0x1b1b, s7       // s2

    loc_0x8169aeb0: // orphan
         bbit1 s7, 0x10, 0x81697e84
         sdc1 f17, -0x1113, t7

    loc_0x8169aec4: // orphan
         pref 0x10, -0x3237, a2
         bbit0 t6, 0xa, 0x8168e20c
         ldc1 f21, -0x2c2d, a2
         bbit032 t7, 0, 0x81693a60
         swc1 f6, -0x1613, a3
         scd s4, -0xe12, s7
         scd s4, -0xb0f, t7

    loc_0x8169af9c: // orphan
         sdc1 f27, 0x208, t7
         call 0x8c5c6c68          // 0x8c5c6c68(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8169b0a0: // orphan
         tgeu ra, ra, 0x3ef
         swc1 f31, -0x1b15, t6

    loc_0x8169b0b4: // orphan
         goto 0x80446868          // fcn.80434080+0x127e8
         if                       // likely

    loc_0x8169b0c0: // orphan
         call fcn.801befd4        // fcn.801befd4(-1, 0x442f71dcfe116408, 0x8)
         bbit132 a3, 0x1c, 0x81698868
         swc1 f15, -0x505, t7
         sdc1 f19, -0x1f6, a3

    loc_0x8169b0f8: // orphan
         sdc1 f17, -0xbfd, ra
         if                       // unlikely
         s5 = t9 + 0x3329

    loc_0x8169b104: // orphan
         t6 = s1 + 0x3327
         if                       // likely
         sd t0, -0x2220, a3

    loc_0x8169b110: // orphan
         swc1 f29, -0x3134, s6
         bbit032 s7, 7, 0x816954a8
         bbit1 t7, 0x1b, 0x8169e55c
         call 0x844c90c4          // 0x844c90c4(-1, 0x442f71dcfe116408, 0x8, -1)
         v1 = , unsigned  , s1 < 0x212a
         a1 = at & 0x130b         // lo
         call 0x88380bb8          // 0x88380bb8(-1, 0x1, 0x8, -1)
         swc1 f11, -0x111a, s7
         bbit032 s6, 0x19, 0x816940e4
         bbit1 s7, 4, 0x81695d24
         goto 0x801c0818          // fcn.801c0808+0x10
         if                       // likely

    loc_0x8169b13c: // orphan
         swc1 f29, -0x3134, s6
         bbit032 s7, 7, 0x816954a8
         bbit1 t7, 0x1b, 0x8169e55c
         call 0x844c90c4          // 0x844c90c4(-1, 0x442f71dcfe116408, 0x8, -1)
         v1 = , unsigned  , s1 < 0x212a
         a1 = at & 0x130b         // lo
         call 0x88380bb8          // 0x88380bb8(-1, 0x1, 0x8, -1)
         swc1 f11, -0x111a, s7
         bbit032 s6, 0x19, 0x816940e4
         bbit1 s7, 4, 0x81695d24
         goto 0x801c0818          // fcn.801c0808+0x10
         if                       // likely

    loc_0x8169b144: // orphan
         if                       // likely

    loc_0x8169b150: // orphan
         bbit132 0, 0, 0x81699d10
         scd fp, 0x5fe, t7
         scd s2, -0x3fe, ra
         bbit132 t7, 0xc, 0x81695d28
         sdc1 f18, -0x1717, ra
         sdc1 f30, -0x30a, t7
         sd t3, 0x130e, 0
         tgeiu s0, 0x141a
         if                       // likely

    loc_0x8169b1cc: // orphan
         bbit132 s0, 2, 0x8169c1b0

    loc_0x8169b274: // orphan
         sc sp, -0x1707, a2

    loc_0x8169b2a8: // orphan
         bbit032 t6, 0x1b, 0x816915dc
         lwc1 f8, -0x2a22, a2
         ld sp, -0x1501, s6       // s2
         goto 0x8c303c68
         t0 = s1 + 0x221f

    loc_0x8169b2cc: // orphan
         sdc1 f27, -0x606, s7

    loc_0x8169b370: // orphan
         call 0x8c6c7460          // 0x8c6c7460(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // likely

    loc_0x8169b3b0: // orphan
         t3 = , at < 0x2a1f       // lo

    loc_0x8169b3b4: // orphan
         call fcn.8403f3dc
         bbit1 fp, 0x1b, 0x8168fb00
         ldc1 f18, -0x3335, a2
         ldc1 f0, -0x1a19, t7

    loc_0x8169b3c8: // orphan
         call 0x8c446884          // 0x8c446884(-1, 0x442f71dcfe116408, 0x8, -1)
         s7 = 0 + 0x1011
         if                       // likely
         scd s4, -0x101b, t7

    loc_0x8169b3d8: // orphan
         sc a2, -0x1213, a3

    loc_0x8169b3dc: // orphan
         bbit1 a3, 0xb, 0x81698bd8
         sd gp, -0x1f9, ra
         call 0x8c300ffc          // 0x8c300ffc(-1, 0x442f71dcfe116408, 0x8, -1)
         tlti t0, 0x4f8
         scd s4, -0x80e, t7
         bbit1 s7, 9, 0x816973c8
         sdc1 f22, -0x4fa, ra
         if                       // unlikely

    loc_0x8169b4f0: // orphan
         sync 4

    loc_0x8169b504: // orphan
         swc1 f19, -0x201, ra

    loc_0x8169b548: // orphan
         t1 = , unsigned  , t1 < 0x292a // lo
         t8 = t0 + 0xa02
         sd t8, -0x131e, ra
         ld ra, -0x1e21, t6       // s2
         ld ra, -0x160e, a2       // s2
         sdc1 f24, -0x1f7, s7
         if                       // unlikely

    loc_0x8169b58c: // orphan
         scd t9, -0x3ff, s7
         goto 0x84507488
         t3 = t1 + 0x3236

    loc_0x8169b5a0: // orphan
         scd t2, -0x222f, t7
         pref 0x10, -0x2c2d, t6
         ldc1 f29, -0x1409, a2
         sd a1, 0x1224, s0
         s1 = , unsigned  , t9 < 0x3238

    loc_0x8169b6b4: // orphan
         pref 6, -0x3e3d, t6
         bbit0 t6, 0xe, 0x8168fe18
         swc1 f21, 0x209, a3
         call 0x8c6ca0bc          // 0x8c6ca0bc(-1, 0x442f71dcfe116408, 0x8, -1)
         t5 = , unsigned  , t9 < 0x2d2d
         ra = , t0 < 0x140b

    loc_0x8169b708: // orphan
         swc1 f8, -0x1919, ra

    loc_0x8169b9f0: // orphan
         sdc1 f0, 0x912, s0

    loc_0x8169be34: // orphan
         ra = 0 + 0xb06
         if                       // unlikely

    loc_0x8169be58: // orphan
         t7 = at + 0x1bfb
         bbit1 t6, 0x1d, 0x8169099c
         lld t1, -0x4d5e, a2      // s2
         sdr s3, -0x2220, fp
         swc1 f14, -0x5f2, t7
         v1 = , unsigned  , k0 < 0x3a31 // lo

    loc_0x8169be8c: // orphan
         s5 = s1 & 0x291e
         s5 = at + 0x3824
         if                       // likely

    loc_0x8169bea0: // orphan
         scd t7, -0x1413, s7
         sd s3, 0xef6, s0
         scd ra, 0x90b, a3
         goto 0x8007cb8c

    loc_0x8169beb4: // orphan
         sc a3, -0xb02, ra
         // CODE XREF from fcn.8167e25c @ +0x914
         goto 0x844823ec

    loc_0x8169bed8: // orphan
         t5 = s1 + 0x2b29
         a0 = k0 & 0x4932         // arg1
         if                       // likely
         sd t7, -0x2541, a3       // arg4

    loc_0x8169bee8: // orphan
         sdl v0, -0x3242, fp

    loc_0x8169beec: // orphan
         [s5 - 0x4639] = t7
         bbit032 s7, 0x11, 0x8169aec4
         bbit132 t8, 0x1c, 0x816aa3f8

    loc_0x8169bf00: // orphan
         if                       // likely
         swc1 f22, -0x3747, fp

    loc_0x8169bf08: // orphan
         swr t4, -0x2933, s6
         ll t1, -0x1f0d, s6       // t9
         bbit132 t8, 3, 0x8169d718

    loc_0x8169bf74: // orphan
         ll a1, -0x3637, a2       // t9
         lwc1 f18, -0x7f1, a2
         call 0x843460a4          // 0x843460a4(-1, -1, 0x8, -1)
         v0 = k0 | 0x4d46
         t0 = , unsigned  , s1 < 0x353a
         s2 = , t8 < -0xc
         bbit1 t7, 8, 0x81697b1c
         bbit0 t5, 0x1d, 0x8168e2fc
         sc gp, -0x231e, a2

    loc_0x8169bf98: // orphan
         swc1 f24, 0x111d, ra
         if                       // likely
         a3 = , unsigned  , t1 < 0x2118 // lo

    loc_0x8169bfa4: // orphan
         goto 0x8c204c6c
         call 0x8bd7bbdc          // 0x8bd7bbdc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8169bfac: // orphan
         bbit132 ra, 0x1d, 0x8169bf9c
         scd t5, -0x1ea, t7
         if                       // likely
         sd a0, 0xa0a, t8

    loc_0x8169bfbc: // orphan
         sdc1 f1, -0x1504, s7

    loc_0x8169bfc0: // orphan
         sd s2, -0x171c, a3
         swc1 f10, -0x2f3, a3

    loc_0x8169bfd4: // orphan
         t6 = t8 - 0x203
         sd s6, -0x1321, s7
         bbit0 s5, 0x1d, 0x8168db38
         bbit032 s6, 0xd, 0x8168d730
         swc1 f21, 0x815, s7
         if                       // likely
         beql v0, a3, 0x816aacd4  // unlikely

    loc_0x8169bff4: // orphan
         if                       // likely
         bbit1 a2, 0x18, 0x8168e2f0

    loc_0x8169bff8: // orphan
         bbit1 a2, 0x18, 0x8168e2f0

    loc_0x8169bffc: // orphan
         sdr s1, -0x422b, a1
         bbit032 fp, 0xd, 0x816903ac

    loc_0x8169c020: // orphan
         sdc1 f9, -0x1603, a3
         if                       // likely
         if                       // unlikely

    loc_0x8169c030: // orphan
         goto 0x8c2c0bf8
         bbit132 a3, 0x13, 0x8169a45c

    loc_0x8169c034: // orphan
         bbit132 a3, 0x13, 0x8169a45c
         if                       // unlikely
         tlti 0, 0xb09

    loc_0x8169c06c: // orphan
         bbit032 s6, 0x1a, 0x81695068

    loc_0x8169c094: // orphan
         
         sp = , unsigned  , s0 < 0xa0d // lo
         if                       // fcn.81698ec4+0x158 // unlikely
         ld a0, -0x1818, t7       // s2

    loc_0x8169c0a4: // orphan
         bbit1 t6, 0x1d, 0x81690c1c

    loc_0x8169c0a8: // orphan
         sdc1 f6, 0x1f6, s0
         bbit132 s0, 6, 0x8169f918
         k0 = t8 + 0x802
         if                       // unlikely
         goto s0

    loc_0x8169c0f4: // orphan
         ld s0, -0x1118, ra
         sdc1 f18, 0x282f, 0
         t8 = s1 | 0x3436

    loc_0x8169c178: // orphan
         ll t3, -0x3845, t6       // t9

    loc_0x8169c17c: // orphan
         swr t6, -0x1508, s6
         bbit132 t8, 3, 0x8169fde8
         v0 = , unsigned  , v0 < 0x4b3f // lo
         s2 = , unsigned  , t9 < 0x4242
         a1 = t9 & 0x1400         // arg2
         sdc1 f23, -0x81f, t7
         ll k0, -0x3d39, s5
         bbit0 s6, 0xd, 0x8168fcc8
         pref 8, 0x409, ra

    loc_0x8169c1b4: // orphan
         bbit032 t6, 0x1c, 0x81696984
         scd t5, -0x1317, s7

    loc_0x8169c22c: // orphan
         if                       // likely
         gp = , unsigned  , t0 < 0x171a

    loc_0x8169c250: // orphan
         bbit132 ra, 0xf, 0x81698654
         goto 0x882c3438
         goto 0x8c3c80b8

    loc_0x8169c264: // orphan
         bbit132 t7, 0xb, 0x8169763c

    loc_0x8169c278: // orphan
         s4 = , t9 < 0x414b

    loc_0x8169c29c: // orphan
         t0 = t9 | 0x2529
         s2 = s0 - 0x40f
         bbit1 ra, 3, 0x81694624
         ldc1 f6, -0x3c2c, t6
         swc1 f4, -0x1e19, a3

    loc_0x8169c314: // orphan
         sdr k1, -0x3e30, sp
         ld sp, -0x2212, a2       // s2

    loc_0x8169c37c: // orphan
         pref 6, -0x4548, a2
         lwc1 f24, -0x2121, s6
         swc1 f22, 0x315, ra
         s7 = , t9 < 0x3432

    loc_0x8169c40c: // orphan
         swc1 f17, -0x805, t7
         goto 0x8c90d4dc
         s7 = s1 & 0x3f43

    loc_0x8169c440: // orphan
         bbit132 a3, 0x11, 0x81698c0c
         scd s4, -0xf1d, s7
         ld t1, -0xc0d, s7        // s2
         bbit1 ra, 7, 0x81697004
         scd sp, 0xf7, s7
         scd s6, 0x409, t7

    loc_0x8169c484: // orphan
         a1 = t9 & 0x180b
         sd k0, -0xb1f, ra
         bbit0 s5, 0x1e, 0x8168c79c
         ll sp, -0x4243, a1       // t9
         ll s4, -0x160a, s6       // t9
         bbit132 s0, 0, 0x816a0528
         s6 = , unsigned  , t1 < 0x3c39 // lo
         s7 = t1 | 0x3f3f
         fp = 0 & 0x140d

    loc_0x8169c4dc: // orphan
         sd t8, -0x803, t7

    loc_0x8169c548: // orphan
         // CODE XREF from fcn.8169d248 @ +0x320
         ra = , s0 < 0x1d25       // lo
         a3 = , s1 < 0x2019
         if                       // unlikely
         goto 0x87e3b7b8

    loc_0x8169c580: // orphan
         ld s0, -0x3d3d, fp
         bbit0 fp, 0xf, 0x816914e8
         bbit032 s6, 0x1b, 0x81695978
         call 0x88485478          // 0x88485478(-1, 0x442f71dcfe116408, 0x8, -1)
         s7 = , t9 < 0x3f46

    loc_0x8169c664: // orphan
         call 0x88241414          // 0x88241414(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x842bebac

    loc_0x8169c6b0: // orphan
         ld s6, -0x3037, t6       // s2
         ll ra, -0x464e, sp
         cache 0x13, -0x211f, a2

    loc_0x8169c6bc: // orphan
         swc1 f18, 0x312, s7
         t7 = s1 + 0x302b
         fp = t1 & 0x443f
         t5 = at | 0x261e

    loc_0x8169c718: // orphan
         bbit132 a3, 0xf, 0x8169525c
         lwc1 f8, -0x3338, s6
         cache 0x1e, -0x382d, sp
         sc s0, -0x600, a3

    loc_0x8169c77c: // orphan
         goto 0x8c200bd8
         bbit1 t7, 6, 0x81697b38

    loc_0x8169c814: // orphan
         swc1 f2, -0x1c13, t7
         sdc1 f3, 0x101a, t8

    loc_0x8169c828: // orphan
         if                       // likely
         swc1 f25, -0x333e, a2    // arg3

    loc_0x8169c830: // orphan
         swr s6, -0x4135, sp
         pref 0xb, -0x2e1e, s6
         sdc1 f4, 0x101b, t0
         a1 = at + 0x3342         // arg2
         bz.w w2, 0x816ab928      // unlikely
         s4 = t1 ^ 0x2d22

    loc_0x8169c848: // orphan
         call 0x8fefc3ac          // 0x8fefc3ac(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f24, -0x363d, t6
         ll 0, -0x3831, t6
         lld s0, -0x2a19, t6      // s2
         bbit132 t0, 2, 0x8169e89c
         if                       // likely
         t3 = at | 0x2428

    loc_0x8169c864: // orphan
         a3 = , t9 < 0x221b
         call 0x8c0ffc0c          // 0x8c0ffc0c(-1, 0x442f71dcfe116408, 0x8, 0x0)

    loc_0x8169c8f4: // orphan
         tne a3, ra, 0x3ef

    loc_0x8169c970: // orphan
         if                       // likely
         a0 = t1 + 0x1f1a         // arg1

    loc_0x8169c984: // orphan
         swc1 f4, -0x1b1c, t7
         sc sp, -0x2524, s6
         sc t0, -0x1213, s7

    loc_0x8169ca28: // orphan
         
         goto 0x83e39b74
         bbit032 fp, 0x15, 0x8168fd48

    loc_0x8169ca4c: // orphan
         call fcn.83e7a380
         bbit032 fp, 0x13, 0x8168f158
         cache 0, -0x3b33, s6
         ldc1 f25, -0x2117, t6
         bbit132 s0, 9, 0x816a0ab4
         if                       // unlikely
         s2 = at | 0x2b25

    loc_0x8169ca68: // orphan
         v0 = at + 0x1c14
         goto 0x8c03dfd0
         sdc1 f15, -0x1c26, a3

    loc_0x8169cae8: // orphan
         if                       // likely
         t4 = t1 + 0x2f2b

    loc_0x8169caf0: // orphan
         v0 = t9 + 0x1d1a

    loc_0x8169cafc: // orphan
         bbit1 a3, 2, 0x8169426c
         sc a2, -0x1a20, t7
         sc t0, -0x120f, a3
         bbit132 a3, 0x1c, 0x8169c304
         bltzall s0, 0x816a2354   // 0x12(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x8169cd14: // orphan
         bbit032 fp, 0x12, 0x81690c44
         bbit0 a2, 9, 0x816918a0

    loc_0x8169cd28: // orphan
         if                       // likely
         bbit032 t6, 0x12, 0x8169084c

    loc_0x8169cd30: // orphan
         lwc1 f9, -0x2c20, a2
         bbit1 s7, 0x13, 0x8169d984

    loc_0x8169cd80: // orphan
         bbit0 fp, 0x13, 0x81695948
         sd t1, 0x1727, s0
         s5 = t9 & 0x3637
         t4 = t1 | 0x1f10

    loc_0x8169cde4: // orphan
         lwc1 f8, -0x3432, s6
         ldc1 f2, -0xcfb, t7
         if                       // unlikely
         s6 = s1 | 0x3330

    loc_0x8169cdf4: // orphan
         fp = , t8 < 0xcff
         sdc1 f9, -0x232f, t7
         pref 0xf, -0x2e2f, a2
         bbit032 a3, 5, 0x816999f4

    loc_0x8169cef0: // orphan
         if                       // likely
         a2 = , at < 0x2420       // lo

    loc_0x8169d7e0: // orphan
         tnei t8, 0x1418

    loc_0x8169d9ac: // orphan
         scd s4, -0x805, s7
         if
         call 0x8c485050          // 0x8c485050(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x8169d9e0: // orphan
         bbit132 a3, 0x1e, 0x8169ea0c
         call 0x8c485054          // 0x8c485054(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // likely

    loc_0x8169d9f0: // orphan
         sdc1 f19, -0xe10, s7

    loc_0x8169da48: // orphan
         sd a0, 0x90d, t8
         if                       // unlikely
         if                       // unlikely

    loc_0x8169da58: // orphan
         sdc1 f19, -0xd0f, t7

    loc_0x8169da5c: // orphan
         scd s1, -0xc0a, t7
         bbit132 a3, 0x1b, 0x8169d264

    loc_0x8169daa4: // orphan
         bbit132 a3, 0x13, 0x81699654
         bbit1 t7, 9, 0x81698660
         scd s5, -0x501, a3
         tgeiu 0, 0xc0f
         if                       // unlikely
         call 0x84281c0c          // 0x84281c0c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8169db10: // orphan
         bbit1 ra, 0xc, 0x81699ae0
         sdc1 f27, -0xfc, s7
         tltiu t8, 0xd0e
         call 0x88383430          // 0x88383430(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x881c1004

    loc_0x8169db24: // orphan
         sd gp, -0x509, ra
         sdc1 f20, -0xc0d, t7
         scd s4, -0x908, ra
         bbit132 s7, 0x1c, 0x8169d73c
         tgei t0, 0xa0d
         call 0x8c3c3c38          // 0x8c3c3c38(-1, 0x442f71dcfe116408, 0x8, -1)
         call fcn.80241804        // fcn.80241804(-1, 0x442f71dcfe116408, 0x8)
         sd t9, -0xb10, t7

    loc_0x8169dd34: // orphan
         sd v1, 0x70b, s0
         call 0x88404844          // 0x88404844(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x8169dd44: // orphan
         scd s0, -0x1011, s7

    loc_0x8169dd48: // orphan
         scd s2, -0xa07, a3
         sd at, 0x407, t0
         // CODE XREF from fcn.8169d248 @ +0xb10
         goto 0x882c3434
         call fcn.802c241c        // fcn.802c241c(-1)

    loc_0x8169dd7c: // orphan
         scd s2, -0xc0c, ra
         sdc1 f26, -0x300, ra
         tgei 0, 0xb0d
         call 0x8c403c38          // 0x8c403c38(-1, 0x442f71dcfe116408, 0x8, -1)
         call fcn.80241404        // fcn.80241404(-1, 0x442f71dcfe116408)
         sd s7, -0xc0f, a3

    loc_0x8169de58: // orphan
         call 0x8c382c1c          // 0x8c382c1c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8169df08: // orphan
         tgeiu s0, 0xa0c
         call fcn.80302c24        // fcn.80302c24(-1)

    loc_0x8169df30: // orphan
         scd s0, -0xd0c, a3
         sdc1 f25, -0x2ff, s7

    loc_0x8169df44: // orphan
         sd k1, -0x609, s7
         // CODE XREF from fcn.8169cd04 @ +0x240
         sdc1 f22, -0x90a, s7
         sdc1 f25, -0x404, ra
         sd 0, 0x204, s0

    loc_0x8169e1cc: // orphan
         bbit132 t7, 0x17, 0x8169b99c
         scd s3, -0xa0a, ra
         bbit132 t7, 0x1c, 0x8169e1e4
         tgei s0, 0xb0c
         call 0x84302c24          // 0x84302c24(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8169e370: // orphan
         sd fp, 0x103, a3

    loc_0x8169e48c: // orphan
         sd fp, 2, a3

    loc_0x8169e5c0: // orphan
         sd sp, -0xff, a3

    loc_0x8169e790: // orphan
         bbit132 ra, 0x1c, 0x8169df8c
         sd at, 0x304, t8

    loc_0x8169e8c4: // orphan
         sd sp, -0x101, a3        // arg4

    loc_0x8169e990: // orphan
         bbit132 ra, 0x1c, 0x8169e18c
         sd 0, 0x202, t8

    loc_0x8169e9fc: // orphan
         

    loc_0x8169ea58: // orphan
         sd sp, -0x305, s7
         bbit132 ra, 0x1b, 0x8169da50
         // CODE XREF from fcn.8169d248 @ +0x1018
         sd fp, -0x100, t7

    loc_0x8169eac4: // orphan
         bbit132 ra, 0x1b, 0x8169debc
         sd ra, 1, s7

    loc_0x8169eb30: // orphan
         sd 0, 0x102, t8

    loc_0x8169eb7c: // orphan
         sd sp, -0x101, a3        // arg4
         

    loc_0x8169ec44: // orphan
         sd gp, -0x405, a3
         bbit132 ra, 0x1c, 0x8169e444
         sd 0, 0x102, t8

    loc_0x8169f958: // orphan
         sd sp, -0x202, t7
         sd ra, -0x100, s7
         

    loc_0x8169fefc: // orphan
         sdc1 f20, -0xb0c, t7
         sdc1 f20, -0xb0c, a3
         sdc1 f20, -0xb0c, a3
         sdc1 f20, -0xb0d, a3
         scd s3, -0xc0c, ra
         sdc1 f20, -0xb0c, a3
         sdc1 f19, -0xc0d, a3

    loc_0x816a0030: // orphan
         if                       // likely
         if                       // likely

    loc_0x816a003c: // orphan
         if                       // likely
         if                       // likely

    loc_0x816a0048: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816a0054: // orphan
         if                       // unlikely

    loc_0x816a0670: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169da50
         if                       // unlikely
         if                       // fcn.816a560c+0xc0 // likely

    loc_0x816a067c: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816a0688: // orphan
         call 0x8c3c3838          // 0x8c3c3838(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x88383838          // 0x88383838(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x88343434          // 0x88343434(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x84343434          // 0x84343434(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x84343434          // 0x84343434(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x84343030          // 0x84343030(-1, 0x442f71dcfe116408, 0x8, -1)
         call fcn.80303030        // fcn.80303030(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1)
         call fcn.80303030        // fcn.80303030(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1)
         call fcn.80302c30        // fcn.80302c30(-1)
         call fcn.8030302c        // fcn.8030302c(-1, 0x442f71dcfe116408)
         goto 0x8c2c2c2c
         goto 0x8c2c2c2c

    loc_0x816a11e0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169d9b8
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, t7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7

    loc_0x816a13fc: // orphan
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8169d248 @ +0x198
         
         
         
         
         
         
         
         

    loc_0x816a1444: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816a1468: // orphan
         
         
         

    loc_0x816a1820: // orphan
         ld sp, -0x2222, a2       // arg3
         ld ra, -0x1f20, fp
         sc at, -0x1d1e, t7
         sc v1, -0x1b1c, ra
         swc1 f6, -0x1919, t7
         swc1 f7, -0x1718, ra
         bbit1 a3, 8, 0x8169ab9c
         bbit0 t6, 8, 0x81694768
         pref 0xe, -0x2f2d, t6
         ldc1 f22, -0x2928, a2    // arg3
         bbit032 t6, 0x1a, 0x816987b8
         ld gp, -0x2223, a2       // arg3
         ld fp, -0x2121, t6       // s2
         ld ra, -0x2021, fp       // s2
         ld 0, -0x1f20, ra
         sc 0, -0x1e1f, a3
         sc at, -0x1d1e, t7
         sc v1, -0x1c1d, s7
         sc v1, -0x1b1c, ra
         swc1 f5, -0x1a1a, a3     // arg4
         swc1 f6, -0x1819, s7

    loc_0x816a1874: // orphan
         swc1 f8, -0x1717, ra
         bbit1 t7, 9, 0x8169c424
         bbit1 ra, 0xb, 0x8169cc30

    loc_0x816a1890: // orphan
         sdc1 f20, -0xa0a, a3
         sdc1 f22, -0x909, s7
         sdc1 f24, -0x5f9, ra
         a2 = , unsigned  , v0 < 0x3c3b // lo

    loc_0x816a1a1c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169d9e8
         s3 = t9 & 0x3332
         s1 &= 0x3232
         s0 = t1 & 0x3030
         t6 = , unsigned  , t9 < 0x2e2d
         sp = , s0 < 0xc0a        // lo
         call 0x842c3440          // 0x842c3440(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x816a1b4c: // orphan
         bbit132 s7, 0x1a, 0x816a0b3c
         sd gp, -0x302, a3        // arg4

    loc_0x816a1eb0: // orphan
         ll v0, -0x3c3c, a2       // t9
         ll v0, -0x3d3f, fp
         ll ra, -0x4042, a1       // t9
         cache 0x1e, -0x4142, s5
         cache 0x1f, -0x4040, sp
         ll at, -0x3d3e, t6
         ll v1, -0x3c3c, fp
         lwc1 f7, -0x3737, t6
         bbit0 fp, 0xc, 0x8169560c
         pref 0xf, -0x2f2f, s6
         lld s2, -0x2d2d, t6
         lld s4, -0x2b2c, fp
         ldc1 f21, -0x2928, a2
         bbit032 a2, 0x10, 0x816935f8
         lwc1 f5, -0x3837, fp
         bbit0 t6, 0xc, 0x81695224
         pref 0xf, -0x2f2f, fp

    loc_0x816a1ef4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169dab4
         lld s3, -0x2c2d, s6      // s2
         lld t7, -0x2f2f, t6      // s2
         lld s3, -0x2c2c, t6      // s2
         ldc1 f21, -0x2a2a, a2
         ldc1 f23, -0x2728, fp
         bbit032 t6, 0x19, 0x81698a74
         bbit032 fp, 0x1b, 0x81698e80
         ld sp, -0x2222, a2
         ld fp, -0x2121, s6       // s2
         ld 0, -0x1f1f, ra
         sc v0, -0x1d1e, t7
         sc v1, -0x1b1c, ra
         swc1 f5, -0x191a, t7
         swc1 f7, -0x1718, ra
         bbit1 a3, 9, 0x8169c6d8
         bbit1 s7, 0xb, 0x8169cee4

    loc_0x816a217c: // orphan
         ld k0, -0x2d3c, a2       // s2
         cache 0x1e, -0x4141, a1
         ll a0, -0x3938, s6       // t9
         bbit0 s6, 0xb, 0x816954c0
         pref 0xf, -0x2f30, s6
         lld t6, -0x3336, a2      // s2
         bbit0 a2, 6, 0x816934a4
         ll at, -0x3e3f, s6       // t9
         ll k0, -0x5868, a1       // t9
         byte [a1 - 0x5f59] = at
         swl t5, -0x4d4b, t5
         swr sp, -0x403e, s5
         lwc1 f6, -0x3737, a2
         bbit0 s6, 0xb, 0x816950e8
         pref 0xd, -0x3132, t6
         pref 0xe, -0x3031, s6

    loc_0x816a21bc: // orphan
         pref 0xf, -0x2f30, fp
         lld s1, -0x2d2e, t6      // s2
         lld s3, -0x2c2c, fp
         ldc1 f20, -0x2b2b, a2    // arg3
         ldc1 f22, -0x2929, t6
         ldc1 f23, -0x2728, fp
         bbit032 t6, 0x19, 0x81698d44
         bbit032 fp, 0x1c, 0x81699550
         ld fp, -0x2121, t6       // s2
         // CODE XREF from fcn.8169d248 @ +0xb58
         ld 0, -0x1e1f, ra
         sc v0, -0x1c1d, s7
         swc1 f4, -0x1a1b, a3     // arg4
         swc1 f6, -0x1819, s7
         bbit1 a3, 8, 0x8169c998
         bbit1 t7, 0xa, 0x8169cda0
         bbit1 ra, 0xb, 0x8169d1ac

    loc_0x816a2a24: // orphan
         sc 0, -0x1f22, a3
         bbit032 a2, 0x17, 0x8169918c
         bbit032 a2, 0x19, 0x81699198
         bbit032 s6, 0x1a, 0x816999a0
         bbit032 fp, 0x1c, 0x81699da8

    loc_0x816a2a38: // orphan
         ld sp, -0x2222, a2       // arg3
         ld fp, -0x2021, s6       // s2
         ld sp, -0x2d40, fp       // s2
         swr fp, -0x4140, t5
         lwc1 f5, -0x3736, a2     // arg3
         pref 0xe, -0x2f2e, t6
         lld s4, -0x2a2a, fp      // s2
         ldc1 f23, -0x2728, fp
         bbit032 t6, 0x19, 0x816995c4
         bbit032 fp, 0x1b, 0x816999d0
         ld gp, -0x2223, a2       // arg3
         ld fp, -0x2121, s6       // s2
         ld 0, -0x1f20, ra
         sc at, -0x1d1e, t7
         sc v1, -0x1a13, ra
         sdc1 f21, -0xb0b, a3
         sdc1 f20, -0xb0c, a3
         scd s3, -0xc0c, ra
         bbit132 a3, 0x1e, 0x816a2e88
         break 0x203, 0x14

    loc_0x816a2f9c: // orphan
         bbit0 fp, 9, 0x816972e4
         lld s7, -0x2825, fp
         ld sp, -0x2020, a2       // s2
         sc v0, -0x1d1d, t7
         sc a0, -0x1b1c, ra
         swc1 f5, -0x1a1b, t7
         swc1 f5, -0x1a1b, t7
         swc1 f5, -0x191a, t7
         swc1 f6, -0x1919, s7

    loc_0x816a2fc0: // orphan
         swc1 f7, -0x1718, ra
         bbit1 a3, 9, 0x8169d76c
         bbit1 s7, 0xa, 0x8169db78
         bbit1 ra, 0xb, 0x8169e380

    loc_0x816a30e4: // orphan
         bbit1 a3, 7, 0x8169cc80
         swc1 f5, -0x1b1c, t7
         swc1 f4, -0x1b1c, a3
         swc1 f4, -0x1b1c, a3
         sc s7, -0x3b45, s6

    loc_0x816a30f8: // orphan
         ll fp, -0x4044, a1       // t9
         sdl t7, -0x504e, s5
         sdr t8, -0x4343, t5
         ll v1, -0x3a3a, t6       // t9
         lwc1 f8, -0x3636, fp
         bbit0 fp, 0xb, 0x81696440
         pref 0xc, -0x3333, a2
         pref 0xd, -0x3233, t6
         pref 0xd, -0x3233, t6
         pref 0xe, -0x3233, t6
         pref 0xe, -0x3132, t6
         pref 0xf, -0x3031, s6
         lld s0, -0x2f2f, a2      // s2
         lld s2, -0x2d2d, t6
         lld s4, -0x2a2a, fp      // s2
         ldc1 f24, -0x2728, s6
         bbit032 t6, 0x19, 0x81699ca4
         bbit032 s6, 0x1a, 0x81699064
         swr k0, -0x4246, a1      // arg2
         cache 2, -0x3d3a, fp
         lwc1 f10, -0x3333, fp
         pref 0xf, -0x2e2f, fp
         lld s3, -0x2b2b, s6      // s2
         ldc1 f22, -0x2829, s6
         bbit032 a2, 0x18, 0x816998c0
         bbit032 t6, 0x1a, 0x81699ccc
         bbit032 fp, 0x1b, 0x8169a4d4
         ld sp, -0x2223, t6       // s2
         ld fp, -0x2021, s6       // s2
         ld 0, -0x1f1f, ra

    loc_0x816a3170: // orphan
         sc v0, -0x1d1d, t7
         sc a0, -0x1b1b, ra
         swc1 f6, -0x1919, t7
         swc1 f7, -0x1718, ra
         bbit1 t7, 9, 0x8169dd2c

    loc_0x816a3184: // orphan
         bbit1 ra, 0xb, 0x8169e538

    loc_0x816a3198: // orphan
         sdc1 f21, -0xa0b, a3
         sdc1 f22, -0x808, s7
         bbit132 a3, 0x18, 0x816a1988
         sd t6, 0x2022, t8
         v0 = at + 0x1e1d

    loc_0x816a31c8: // orphan
         v0 = s1 + 0x2222
         v1 = s1 + 0x2323
         v1 = t9 + 0x2424
         a0 = at + 0x2525
         a1 = t1 + 0x2526
         a2 = s1 + 0x2626
         a2 = s1 + 0x2626
         a2 = s1 + 0x2626
         a2 = s1 + 0x2626
         a2 = s1 + 0x2626
         a2 = s1 + 0x2626
         a2 = s1 + 0x2525
         a1 = t1 + 0x2525
         a1 = t1 + 0x2525
         at += 0x1f1c

    loc_0x816a3254: // orphan
         bbit032 t6, 0x1a, 0x816995c8
         ld 0, -0x1d1c, t7
         swc1 f7, -0x1516, ra

    loc_0x816a32ec: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816a560c @ +0x950
         if                       // fcn.816b71d8-0xf298 // likely

    loc_0x816a32f8: // orphan
         if                       // fcn.816b71d8-0xf290 // likely
         if                       // likely

    loc_0x816a338c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169cb10
         bbit132 a3, 0x18, 0x816a176c
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         // CODE XREF from fcn.8169d248 @ +0x908
         sdc1 f19, -0x1a33, s7
         lwc1 f11, -0x3534, t6
         lld s2, -0x2b2b, a2
         ldc1 f22, -0x2829, fp
         ldc1 f23, -0x292b, s6
         ldc1 f20, -0x2b2d, t6
         lld s3, -0x2c2e, fp
         lld s2, -0x2d2e, s6
         lld s2, -0x2c2d, s6
         lld s3, -0x2b2c, fp
         ldc1 f21, -0x2a2a, t6
         ldc1 f23, -0x2829, s6
         ldc1 f14, -0x3e47, t6
         swr t9, -0x4544, t5
         cache 1, -0x3c3b, s6
         lwc1 f8, -0x3636, s6
         pref 0xd, -0x3132, a2
         // CODE XREF from fcn.8169d248 @ +0x54c
         pref 0x10, -0x2f2f, fp
         lld s1, -0x2f3a, t6      // s2
         sdl a0, -0x5254, a1
         [a1 - 0x4c48] = s3
         cache 0x1e, -0x3d3c, a1
         lwc1 f8, -0x3534, s6
         pref 0xe, -0x3030, t6
         lld s1, -0x2e2e, a2      // s2
         lld s2, -0x2c2d, s6
         ldc1 f20, -0x2b2c, a2
         ldc1 f21, -0x2a2a, a2
         ldc1 f22, -0x2929, s6

    loc_0x816a3420: // orphan
         ldc1 f24, -0x2727, fp
         bbit032 t6, 0x19, 0x81699f90
         bbit032 fp, 0x1b, 0x8169a79c
         ld sp, -0x2122, t6       // s2
         ld ra, -0x1f20, fp
         sc at, -0x1d1e, t7
         sc v1, -0x1b1c, ra
         swc1 f5, -0x191a, t7
         swc1 f7, -0x1718, ra
         bbit1 t7, 9, 0x8169dff0
         bbit1 ra, 0xb, 0x8169e7fc

    loc_0x816a35f4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169c970
         goto 0x801c1814          // fcn.801c180c+0x8

    loc_0x816a3664: // orphan
         sd k1, -0x719, a3        // arg4
         pref 8, -0x2f34, a2
         lld s4, -0x2a27, a2      // s2
         bbit032 fp, 0x1d, 0x8169b9f8
         sc v1, -0x1b1b, s7
         swc1 f6, -0x1819, s7
         bbit1 a3, 8, 0x8169da20
         bbit1 a3, 8, 0x8169da24
         bbit1 a3, 8, 0x8169da28
         bbit1 a3, 7, 0x8169d628
         swc1 f8, -0x1718, ra
         swc1 f7, -0x191b, ra
         swc1 f2, -0x1e20, a3     // arg4
         ld fp, -0x2224, fp
         bbit032 fp, 0x1a, 0x8169a204
         bbit032 t6, 0x19, 0x81699e08
         bbit032 t6, 0x1a, 0x8169a614
         bbit032 fp, 0x1b, 0x8169aa1c
         ld sp, -0x2126, t6       // s2
         bbit0 t5, 0x13, 0x8169099c
         sdr gp, -0x3f3f, sp
         lwc1 f7, -0x3534, t6
         pref 0xf, -0x3138, s6
         swr s4, -0x4b4b, sp
         sdr t8, -0x4544, s5
         cache 1, -0x3c3c, fp
         lwc1 f6, -0x3737, t6
         bbit0 t6, 0xa, 0x81696600
         pref 0xc, -0x3333, a2
         pref 0xd, -0x3232, t6
         pref 0x10, -0x2e2f, fp
         lld s3, -0x2b2c, s6      // s2
         ldc1 f21, -0x292a, t6
         ldc1 f24, -0x2728, fp
         bbit032 t6, 0x19, 0x8169a258
         bbit032 fp, 0x1b, 0x8169aa64
         ld sp, -0x2222, t6       // s2
         ld ra, -0x2020, s6       // s2
         sc at, -0x1d1e, a3
         sc v1, -0x1b1b, ra
         swc1 f6, -0x1919, t7
         swc1 f8, -0x1717, ra
         bbit1 t7, 9, 0x8169e2bc
         bbit1 ra, 0xc, 0x8169eac0
         bbit1 ra, 0xc, 0x8169ff34

    loc_0x816a37cc: // orphan
         bbit132 s7, 0x1a, 0x816a2bc0
         sd fp, -0x100, t7

    loc_0x816a38b0: // orphan
         if                       // likely
         if                       // likely

    loc_0x816a38bc: // orphan
         if                       // unlikely
         sdc1 f20, -0xa09, a3

    loc_0x816a38c4: // orphan
         bbit132 t7, 0x1b, 0x816a2cc0
         sd at, 0x203, t8

    loc_0x816a38d4: // orphan
         goto 0x84305cbc

    loc_0x816a3988: // orphan
         ld 0, -0x1f1d, s7
         swc1 f5, -0x1818, a3
         bbit1 s7, 0xa, 0x8169e944

    loc_0x816a39f0: // orphan
         swc1 f6, -0x1919, t7
         swc1 f7, -0x1819, ra
         bbit1 a3, 8, 0x8169dda0
         bbit1 t7, 0xa, 0x8169e5a8

    loc_0x816a3bf4: // orphan
         sc v1, -0x1b1c, ra
         swc1 f4, -0x1a1b, a3
         swc1 f5, -0x1a1a, t7
         swc1 f6, -0x1919, s7
         swc1 f8, -0x1718, ra
         bbit1 t7, 7, 0x81699ef0
         [t5 - 0x4a4a] = s6
         cache 0x1e, -0x3d3b, a1
         bbit0 a2, 0xb, 0x81697354
         // CODE XREF from fcn.8169cd04 @ +0x2a0
         lld s3, -0x2b2b, a2      // s2
         ldc1 f23, -0x2728, s6
         bbit032 t6, 0x19, 0x8169a38c
         bbit032 s6, 0x1a, 0x8169a794
         bbit032 fp, 0x1b, 0x8169ab98
         bbit032 fp, 0x1b, 0x8169afa0
         ld gp, -0x2223, a2
         ld fp, -0x2021, s6       // s2
         ld 0, -0x1f1f, ra
         sc v0, -0x1d1d, t7
         sc v1, -0x1b1c, ra
         swc1 f5, -0x1a1a, t7
         swc1 f8, -0x1717, ra
         bbit1 t7, 0xa, 0x8169ec08
         bbit132 a3, 0x1d, 0x8169fbd0
         sc v0, -0x1e1b, ra
         sc a2, -0x1819, ra
         bbit1 s7, 9, 0x8169ec0c

    loc_0x816a3ec8: // orphan
         bbit0 fp, 0xf, 0x81697e18
         ldc1 f22, -0x2626, a2
         bbit032 fp, 0x1c, 0x8169b64c
         ld 0, -0x1e1e, ra
         sc v1, -0x1c1c, s7
         swc1 f4, -0x1a1b, a3
         swc1 f6, -0x1919, t7
         swc1 f8, -0x1718, ra
         bbit1 t7, 9, 0x8169e694
         bbit1 s7, 0xb, 0x8169eea0

    loc_0x816a3f8c: // orphan
         if                       // likely
         call 0x88302c28          // 0x88302c28(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a3f94: // orphan
         goto 0x84201c18
         bgezl 0, 0x816a47a0      // likely

    loc_0x816a3fa0: // orphan
         bbit132 ra, 0x1a, 0x816a2380
         sdc1 f21, -0xb0d, s7
         scd s2, -0xe0f, s7
         scd s0, -0xf10, a3

    loc_0x816a4280: // orphan
         scd s1, -0xf11, s7

    loc_0x816a4294: // orphan
         bbit1 ra, 0xb, 0x8169f244

    loc_0x816a4300: // orphan
         bbit032 s6, 0x1b, 0x8169b274
         bbit032 fp, 0x1c, 0x8169b664
         lwc1 f15, -0x4d49, t5
         sdl k0, -0x4141, sp
         ll a1, -0x3836, fp
         bbit0 fp, 0xd, 0x81697e54
         lld s2, -0x2d2c, t6
         ldc1 f21, -0x2a2a, a2
         ldc1 f23, -0x2729, fp
         bbit032 a2, 0x18, 0x8169a68c
         bbit032 t6, 0x1a, 0x8169ae98
         bbit032 fp, 0x1c, 0x8169b6a4
         ld fp, -0x2121, t6       // s2
         ld 0, -0x1e1f, ra
         sc v0, -0x1d1d, t7
         // CODE XREF from fcn.816a4298 @ +0xc9c
         swc1 f4, -0x1a1b, a3
         swc1 f6, -0x1818, s7
         bbit1 a3, 9, 0x8169eaf0
         bbit1 s7, 0xb, 0x8169f2fc

    loc_0x816a46b8: // orphan
         v0 = s1 + 0x2222
         at = t1 + 0x2120

    loc_0x816a46cc: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816a46d8: // orphan
         bbit032 s6, 0x16, 0x8169c244
         ld v1, -0x1b18, s7       // s2
         bbit1 s7, 0xd, 0x816a06a8
         scd s4, -0xa0a, s7
         sdc1 f24, -0x607, ra
         bbit132 t7, 0x1a, 0x816a32d8
         bbit132 s7, 0x1a, 0x816a36dc
         bbit132 ra, 0x1b, 0x816a36e4
         bbit132 ra, 0x1b, 0x816a36e8
         bbit132 ra, 0x1b, 0x816a3af0
         sd gp, -0x303, a3
         sd sp, -0x203, t7
         sd fp, -0x102, s7

    loc_0x816a4768: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169cae8
         if                       // unlikely
         if                       // unlikely

    loc_0x816a4774: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816a4780: // orphan
         call 0x88302c28          // 0x88302c28(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x801c3498          // fcn.801c3464+0x34

    loc_0x816a47a0: // orphan
         goto 0x8c28201c
         bgezl t0, 0x816a4fa4     // likely

    loc_0x816a47ac: // orphan
         sdc1 f22, -0xb0d, ra
         scd s1, -0xe10, s7
         scd s0, -0xf11, a3
         scd s0, -0xf10, a3
         scd s1, -0xe0e, t7
         scd s3, -0xc0d, s7
         sdc1 f21, -0xa0a, a3
         sdc1 f22, -0x809, s7
         sdc1 f23, -0x708, ra
         bbit132 a3, 0x18, 0x816a2fb8
         bbit132 s7, 0x1d, 0x816a6834

    loc_0x816a4ac4: // orphan
         if                       // unlikely
         call 0x84343030          // 0x84343030(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a4acc: // orphan
         call fcn.802c2c2c        // fcn.802c2c2c(-1)
         goto 0x8c2c2c30

    loc_0x816a4c70: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816a4c7c: // orphan
         sd gp, -0x306, ra
         bbit132 s7, 0x1a, 0x816a3870
         sd 0, 0x304, 0

    loc_0x816a4cd4: // orphan
         v1 = t9 + 0x2222
         v0 = s1 + 0x2221
         at = t1 + 0x2120

    loc_0x816a4e78: // orphan
         sdc1 f24, -0x708, ra
         bbit132 t7, 0x19, 0x816a3668
         bbit132 s7, 0x1b, 0x816a4274
         sd fp, 0x212, t7
         t8 = , unsigned  , s1 < 0x3233
         t5 = t1 & 0x2b28         // a2
         v1 = s1 + 0x211e

    loc_0x816a4f7c: // orphan
         // CODE XREF from fcn.816a62e4 @ +0xc8
         goto 0x84282820
         goto 0x801c1814          // fcn.801c180c+0x8

    loc_0x816a4fa4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a47a4
         scd s1, -0xe0f, s7
         scd s0, -0xf10, t7
         scd t7, -0x1011, a3

    loc_0x816a4fe0: // orphan
         bbit1 ra, 0xb, 0x8169ff94

    loc_0x816a4ff4: // orphan
         scd t7, -0xf10, a3
         scd s1, -0x1123, t7
         sdr a1, -0x4c50, t5
         sdl k0, -0x4440, t5
         lwc1 f8, -0x3331, t6
         lld s3, -0x2a2a, a2      // s2
         bbit032 t6, 0x1a, 0x8169bf80
         ld sp, -0x2223, a2
         ld fp, -0x2122, s6       // s2
         ld ra, -0x2021, fp       // s2
         ld 0, -0x1f20, ra
         sc at, -0x1e1f, a3
         sc v0, -0x1d1d, t7
         sc v1, -0x1b1c, ra
         swc1 f5, -0x1a1a, a3
         swc1 f7, -0x1818, s7
         bbit1 a3, 9, 0x8169fbe0
         bbit1 s7, 0xa, 0x8169ffe8
         bbit1 ra, 0xc, 0x8169ef90
         sdr s2, -0x3e31, sp
         swc1 f12, -0x130c, a3
         scd s4, -0xa0d, s7
         sdc1 f19, -0xc0d, t7
         scd s3, -0xd0d, ra
         scd s3, -0xc0d, ra
         scd s4, -0xc0c, ra
         sdc1 f21, -0xa0b, a3
         sdc1 f22, -0x909, s7
         sdc1 f24, -0x707, ra
         bbit132 t7, 0x19, 0x816a3c54
         bbit132 ra, 0x1b, 0x816a4460
         sd sp, -0x202, t7
         sd fp, -1, s7
         movf 0, 0, fcc0

    loc_0x816a50a8: // orphan
         sd sp, 0x31d, a3

    loc_0x816a50cc: // orphan
         sd fp, -0x102, s7
         sd ra, -0x100, s7

    loc_0x816a5154: // orphan
         if                       // unlikely
         swc1 f9, -0x2e2a, fp

    loc_0x816a515c: // orphan
         lld k1, -0x211f, t6      // s2
         swc1 f9, -0x1210, ra
         scd s5, -0x807, s7
         bbit132 s7, 0x1b, 0x816a4560
         sd fp, -1, s7
         

    loc_0x816a520c: // orphan
         v1 = , s1 < 0x211d

    loc_0x816a5250: // orphan
         goto 0x8024282c          // fcn.80242824+0x8
         goto 0x8c30302c

    loc_0x816a5284: // orphan
         if                       // likely
         call fcn.802c2c28        // fcn.802c2c28(-1)

    loc_0x816a528c: // orphan
         goto 0x88282424
         goto 0x84242424

    loc_0x816a52a8: // orphan
         goto 0x8c2c3030
         call fcn.80303030        // fcn.80303030(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1)

    loc_0x816a52dc: // orphan
         bbit132 a3, 0x18, 0x816a3ad0

    loc_0x816a5300: // orphan
         sdc1 f20, -0xa0b, a3
         sdc1 f21, -0x90a, t7
         sdc1 f22, -0x909, s7
         // CODE XREF from fcn.8169d248 @ +0x2c
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x708, ra
         bbit132 a3, 0x18, 0x816a36f8
         bbit132 a3, 0x18, 0x816a36fc
         bbit132 a3, 0x18, 0x816a3700
         bbit132 a3, 0x18, 0x816a3704
         bbit132 a3, 0x18, 0x816a3304
         // CODE XREF from fcn.8169d248 @ +0x44
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra

    loc_0x816a5334: // orphan
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x90a, s7
         sdc1 f22, -0x90a, s7
         sdc1 f22, -0x90a, s7

    loc_0x816a5358: // orphan
         sdc1 f22, -0x90a, s7
         sdc1 f22, -0x80a, s7
         sdc1 f22, -0x909, s7
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra

    loc_0x816a537c: // orphan
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x708, ra
         bbit132 a3, 0x18, 0x816a3768
         bbit132 a3, 0x18, 0x816a3768
         sdc1 f14, -0x1313, a3

    loc_0x816a5410: // orphan
         sdc1 f21, -0xa0b, t7
         sdc1 f22, -0x90a, t7
         sdc1 f22, -0x809, s7
         sdc1 f23, -0x809, ra
         bbit132 a3, 0x18, 0x816a3804
         bbit132 a3, 0x19, 0x816a3c0c
         bbit132 t7, 0x19, 0x816a3c14
         bbit132 s7, 0x1a, 0x816a4018
         bbit132 s7, 0x1a, 0x816a4420

    loc_0x816a5434: // orphan
         bbit132 ra, 0x1b, 0x816a4424
         bbit132 ra, 0x1b, 0x816a442c
         

    loc_0x816a55a0: // orphan
         sd ra, -0x102, ra
         sd fp, -0x203, s7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd fp, -0x102, t7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7

    loc_0x816a55e8: // orphan
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd sp, -0x203, s7
         sd sp, -0x203, t7
         sd sp, -0x203, t7

    loc_0x816a5720: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816a5744: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816a5768: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816a578c: // orphan
         
         
         
         
         
         dsra32 0, 0, 3
         
         
         

    loc_0x816a57b0: // orphan
         
         
         
         
         

    loc_0x816a57c4: // orphan
         
         
         
         
         
         
         
         

    loc_0x816a5808: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816a582c: // orphan
         
         
         
         

    loc_0x816a5928: // orphan
         t3 = t1 ^ 0x1d12
         call 0x8c547c98          // 0x8c547c98(-1, 0x442f71dcfe116408, 0x8, -1)
         t3 = , t1 < 0x2c2b
         
         // CODE XREF from fcn.8169c350 @ +0x950
         goto 0x8c180c04

    loc_0x816a598c: // orphan
         ldc1 f25, -0x211c, a2
         bbit1 ra, 0x12, 0x816a3568
         sdc1 f21, -0x706, a3
         bbit132 a3, 0x15, 0x816a359c
         call 0x88709cc0          // 0x88709cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         k1 = t9 | 0x3f41

    loc_0x816a59b0: // orphan
         call 0x8c2403dc          // 0x8c2403dc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a59d4: // orphan
         bbit032 a2, 0x1c, 0x8169ed90
         sdc1 f24, -0x80a, s7
         bbit132 a3, 0x1e, 0x816a7a2c

    loc_0x816a59f8: // orphan
         goto 0x84446c88
         t3 = s1 + 0x3136

    loc_0x816a5a3c: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816a5a48: // orphan
         goto 0x8c13efc8
         bbit1 t7, 0, 0x8169bd90

    loc_0x816a5a60: // orphan
         ldc1 f12, -0xf4, s7
         if                       // likely
         beql v0, s4, 0x816bb3cc  // likely

    loc_0x816a5a70: // orphan
         t1 = , unsigned  , s1 < 0x2621
         if                       // likely
         t6 = , unsigned  , t9 < 0x2c28

    loc_0x816a5a7c: // orphan
         t9 = t0 + 0x120b
         bltzl t0, 0x816a5e8c     // unlikely
         tgeiu t0, 0xa08

    loc_0x816a5ac8: // orphan
         lwc1 f3, -0x3c40, a2
         cache 0x1b, -0x4241, a1
         cache 0x18, -0x4a46, t5
         lwc1 f20, -0x211b, fp

    loc_0x816a5adc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5b10
         if                       // unlikely

    loc_0x816a5b0c: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816a5b18: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169ca60
         lwc1 f10, -0x2b20, fp

    loc_0x816a5b30: // orphan
         goto 0x83d7874c
         pref 0x11, -0x2a28, s6

    loc_0x816a5b74: // orphan
         scd s7, 0x10f, a3

    loc_0x816a5b98: // orphan
         lwc1 f4, -0x3c3f, t6
         cache 0x1d, -0x4245, s5
         sdr s3, -0x4e4b, sp
         cache 0xa, -0x2a1e, s6

    loc_0x816a5ba8: // orphan
         scd v1, 0x1522, t0
         t4 = , at < 0x333a       // lo

    loc_0x816a5be0: // orphan
         cache 0xf, -0x2822, fp
         bbit1 s0, 0, 0x816ac09c

    loc_0x816a5c04: // orphan
         goto 0x841c100c

    loc_0x816a5c28: // orphan
         if                       // likely

    loc_0x816a5c4c: // orphan
         ldc1 f2, -0x1410, ra
         scd s5, -0x501, s7

    loc_0x816a5c70: // orphan
         s4 = s1 | 0x2f29
         k0 = s0 + 0xf01
         sdc1 f14, -0x161d, s7
         ld sp, -0x2122, fp
         ld gp, -0x211d, t6       // s2
         bbit1 s7, 0xf, 0x816a2454
         // CODE XREF from fcn.816a6000 @ +0xc0
         bbit132 t0, 4, 0x816a98f0
         t1 += 0x3033
         t4 = t1 & 0x2418

    loc_0x816a5c94: // orphan
         goto 0x87e3a778
         // CODE XREF from fcn.816a4298 @ +0xdf4
         bbit032 t6, 0x18, 0x8169b7f8

    loc_0x816a5cac: // orphan
         a1 = at + 0x2320

    loc_0x816a5cb8: // orphan
         ldc1 f24, -0x1d11, t6
         bbit132 a3, 0x1e, 0x816a70f8
         if                       // unlikely
         s3 = , unsigned  , t9 < 0x3431

    loc_0x816a5cc8: // orphan
         t0 = , unsigned  , t1 < 0x241d // lo
         if                       // likely
         if                       // unlikely

    loc_0x816a5cd8: // orphan
         ld s4, -0x3238, s6       // s2

    loc_0x816a5cdc: // orphan
         lwc1 f7, -0x3634, s6
         lld s4, -0x2521, a2      // s2
         sc a0, -0x1c20, s7
         ld sp, -0x1e19, t6       // s2
         bbit1 ra, 0xe, 0x816a28cc
         sd a2, 0xa0b, t8
         goto 0x88304054

    loc_0x816a5d24: // orphan
         swl s1, -0x4337, s5
         ldc1 f1, -0x1305, s7
         call 0x8070a4c8          // 0x8070a4c8(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a5d48: // orphan
         goto 0x881c1410
         bgezl 0, 0x816a6d64      // likely

    loc_0x816a5d54: // orphan
         bbit1 t6, 0x1b, 0x81698840
         [a1 - 0x686e] = 0
         s2 = , unsigned  byte [a0 - 0x6a65] // s4
         byte [sp - 0x4234] = t7
         bbit032 s7, 5, 0x816a216c
         if                       // unlikely

    loc_0x816a5d90: // orphan
         lld t5, -0x3539, s6      // s2
         lwc1 f1, -0x4246, a2
         swr k1, -0x4240, t5
         ll t0, -0x2e24, s6       // t9
         swc1 f15, -0x4f9, s7
         call 0x8c444034          // 0x8c444034(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x8c485864          // 0x8c485864(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a5db4: // orphan
         t6 = s1 | 0x241b
         if                       // unlikely
         if                       // unlikely

    loc_0x816a5dfc: // orphan
         bbit1 t7, 4, 0x8169e178
         ld 0, -0x1f21, s7
         sc a1, -0x130e, a3
         sdc1 f20, -0x7fe, a3
         call 0x886080a0          // 0x886080a0(-1, 0x442f71dcfe116408, 0x8, -1)
         s3 = , unsigned  , t9 < 0x322e
         k1 = s0 + 0xdfe

    loc_0x816a5e44: // orphan
         s1 = , unsigned  , s1 < 0x3437
         s3 = t9 | 0x2c24

    loc_0x816a5e68: // orphan
         bbit032 a2, 0x11, 0x81698990
         pref 0x17, -0x1f1a, s6

    loc_0x816a5e8c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5a80
         if                       // likely
         call 0x842c2014          // 0x842c2014(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a5eb0: // orphan
         s7 = , t1 < 0x444f

    loc_0x816a5ed4: // orphan
         bbit132 s7, 0x10, 0x8169fe44
         pref 3, -0x444d, fp
         swl v1, -0x6161, sp
         halfword [s5 - 0x4845] = s0
         cache 7, -0x2817, s6
         bbit132 0, 5, 0x816a9f50

    loc_0x816a5f1c: // orphan
         swc1 f8, -0x1617, s7
         bbit1 s7, 0xf, 0x816a36fc
         scd t6, -0x1517, ra
         bbit1 s7, 0xa, 0x816a16fc
         sd v1, 0xb15, 0

    loc_0x816a5f88: // orphan
         goto 0x843c5c74
         v1 = t1 + 0x272a

    loc_0x816a6034: // orphan
         s6 = t1 & 0x3738         // a2
         s7 = at ^ 0x3430
         t6 = , unsigned  , s1 < 0x2d2b
         
         if                       // unlikely
         if                       // unlikely

    loc_0x816a6050: // orphan
         goto 0x8013f7d4

    loc_0x816a6100: // orphan
         sd k1, -0x302, a3
         sd gp, -0x502, s7
         goto 0x84547890
         t7 = , t1 < 0x3232

    loc_0x816a61ac: // orphan
         bbit032 a2, 0x1f, 0x8169f954

    loc_0x816a61f0: // orphan
         ld sp, -0x1c14, a2       // s2
         sdc1 f26, -0x200, a3
         syscall                  // 255 = unknown ()
         if                       // unlikely

    loc_0x816a6248: // orphan
         scd s0, -0xf0d, s7
         sdc1 f29, 0x208, ra
         call 0x8c587080          // 0x8c587080(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = t9 + 0x2523

    loc_0x816a62f4: // orphan
         ld a2, -0x110a, ra
         sd t0, 0xe0f, t8
         call 0x8838444c          // 0x8838444c(-1, 0x442f71dcfe116408, 0xbf77fce11dd06132, -1)
         if                       // likely

    loc_0x816a6308: // orphan
         at = t1 + 0x1c17
         if                       // unlikely
         tgeiu s0, 0xb0d

    loc_0x816a6314: // orphan
         call 0x88383834          // 0x88383834(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x840ff3d4

    loc_0x816a6390: // orphan
         // CODE XREF from fcn.8169d248 @ +0xac
         bbit1 t7, 0xb, 0x816a2b78
         sd v0, 0x408, t8
         call 0x884c585c          // 0x884c585c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a643c: // orphan
         bbit1 ra, 0x15, 0x816a5848
         teqi t8, 0x1115

    loc_0x816a64c8: // orphan
         call 0x88445058          // 0x88445058(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a6528: // orphan
         tgei t8, 0x90a
         goto 0x841c140c

    loc_0x816a6564: // orphan
         goto 0x84180c04
         movf 0, 0, fcc0

    loc_0x816a6620: // orphan
         sdc1 f24, -0x301, s7

    loc_0x816a669c: // orphan
         if                       // likely
         call 0x842c2828          // 0x842c2828(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a66a4: // orphan
         call fcn.80383c3c        // fcn.80383c3c(-1)
         call 0x88342c20          // 0x88342c20(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a6738: // orphan
         sd v1, 0x608, t8
         goto 0x801c1810          // fcn.801c180c+0x4
         tlt a3, k0, 0x3db

    loc_0x816a67e4: // orphan
         if                       // likely
         call 0x842c2828          // 0x842c2828(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816a67ec: // orphan
         // CODE XREF from fcn.816a62e4 @ +0x104
         goto 0x8c34302c
         goto 0x88241c14

    loc_0x816a6880: // orphan
         sd 0, 0x100, t8
         sd fp, -0x306, ra
         bbit132 a3, 0x16, 0x816a3c58
         scd t6, -0x1110, t7
         sdc1 f24, -0x403, a3
         sd 0, 0x204, t8
         tgeiu t8, 0xa0c
         call 0x843c4448          // 0x843c4448(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x816a68a8: // orphan
         goto 0x8013ffec
         bbit132 t7, 0x18, 0x816a488c

    loc_0x816a6a08: // orphan
         if                       // likely
         sdc1 f18, -0xe0e, t7

    loc_0x816a6a10: // orphan
         scd s3, -0xc0d, ra
         sdc1 f21, -0x908, a3
         bbit132 t7, 0x1a, 0x816a5608
         sd 0, 0x406, t0
         goto fcn.80242c30        // fcn.80242c30(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1)
         goto 0x8c281c10

    loc_0x816a6a8c: // orphan
         bbit132 s7, 0x17, 0x816a3e58
         scd t6, -0x1215, a3
         bbit1 t7, 7, 0x816a0634
         bbit1 t7, 0xc, 0x816a2658
         scd s4, -0x704, t7
         sd v0, 0x508, t8
         call fcn.80404850        // fcn.80404850(-1)
         // CODE XREF from fcn.816a6000 @ +0x2a0
         if                       // likely

    loc_0x816a6ab8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x8169cdec
         goto 0x84201810

    loc_0x816a6c30: // orphan
         goto fcn.80201c18

    loc_0x816a6d64: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5d4c
         sdc1 f24, -0x505, t7
         sd fp, s0, a3
         tgei s0, 0xa0c
         call 0x84383430          // 0x84383430(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x88201814

    loc_0x816a713c: // orphan
         sd ra, 1, t7

    loc_0x816a83cc: // orphan
         sd k0, -0x506, s7
         sdc1 f13, -0x100c, s7
         sdc1 f20, -0x6fa, a3
         call fcn.80344c54        // fcn.80344c54(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1, -1, -1, -1, 0x0, 0x0, 0x0, 0x0)
         if                       // unlikely

    loc_0x816a83e4: // orphan
         scd t7, -0x1010, s7
         bbit132 0, 6, 0x816a97d4
         bbit132 t7, 0x1c, 0x816a8c10

    loc_0x816a8700: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a4ac4
         goto 0x88181004

    loc_0x816a8b18: // orphan
         sdc1 f24, -0x607, ra
         bbit132 t7, 0x19, 0x816a6efc
         sdc1 f25, -0x301, ra

    loc_0x816a8bb4: // orphan
         sd gp, -0x202, a3        // arg4
         sd ra, 1, s7

    loc_0x816a9278: // orphan
         sd gp, -0x305, a3
         bbit132 ra, 0x1a, 0x816a7e68
         bbit132 s7, 0x1a, 0x816a7e6c
         bbit132 ra, 0x1b, 0x816a8678
         sd gp, -0x304, a3
         sd k1, -0x405, a3
         bbit132 ra, 0x1c, 0x816a8684
         sd gp, -0x304, a3
         sd k1, -0x506, a3
         bbit132 t7, 0x19, 0x816a7a84
         bbit132 t7, 0x1a, 0x816a7e90
         bbit132 ra, 0x1b, 0x816a8290
         bbit132 s7, 0x1a, 0x816a7a90
         bbit132 t7, 0x19, 0x816a7a94
         bbit132 s7, 0x1b, 0x816a82a4
         sd sp, -0x204, a3
         sd k1, -0x507, a3
         // CODE XREF from fcn.816a4298 @ +0xfe0
         bbit132 t7, 0x19, 0x816a7aa4
         bbit132 s7, 0x1a, 0x816a82b0
         bbit132 ra, 0x1b, 0x816a7eb0
         bbit132 s7, 0x1a, 0x816a7eb0
         bbit132 t7, 0x19, 0x816a7eb8
         bbit132 t7, 0x19, 0x816a7ab8
         bbit132 t7, 0x1a, 0x816a7ec0
         bbit132 s7, 0x1a, 0x816a7ec8
         bbit132 ra, 0x1b, 0x816a82cc
         bbit132 ra, 0x1b, 0x816a7ecc
         bbit132 s7, 0x19, 0x816a7acc
         bbit132 t7, 0x19, 0x816a7ed4
         bbit132 s7, 0x1b, 0x816a82dc
         bbit132 ra, 0x1b, 0x816a82dc
         bbit132 s7, 0x1a, 0x816a7adc
         bbit132 t7, 0x1a, 0x816a7ee8
         bbit132 ra, 0x1c, 0x816a86f0
         sd gp, -0x305, a3
         bbit132 ra, 0x1a, 0x816a7ef0
         bbit132 ra, 0x1b, 0x816a86fc
         sd sp, -0x304, t7
         bbit132 ra, 0x1b, 0x816a82fc
         bbit132 s7, 0x1a, 0x816a7f00
         bbit132 ra, 0x1b, 0x816a870c
         sd gp, -0x304, a3

    loc_0x816a9384: // orphan
         sd sp, -0x203, t7
         sd gp, -0x304, t7
         sd gp, -0x303, a3
         sd fp, -0x102, t7
         sd fp, -0x102, s7
         sd sp, -0x304, t7
         sd gp, -0x304, a3
         sd sp, -0x102, t7
         sd fp, -0x102, s7
         sd sp, -0x203, t7
         sd gp, -0x304, a3
         sd gp, -0x303, a3
         sd sp, -0x202, t7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -1, s7
         sd fp, -0x102, s7

    loc_0x816a93c8: // orphan
         sd fp, -1, s7

    loc_0x816a94c0: // orphan
         dsra32 0, 0, 3
         sd ra
         movf 0, 0, fcc0

    loc_0x816a95ec: // orphan
         

    loc_0x816a9748: // orphan
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x203, s7
         sd sp, -0x202, t7
         sd fp, -0x101, s7

    loc_0x816a9814: // orphan
         

    loc_0x816a9880: // orphan
         
         

    loc_0x816a98ec: // orphan
         dsra32 0, 0, 3
         
         
         movf 0, 0, fcc0

    loc_0x816a9958: // orphan
         
         
         
         
         
         
         

    loc_0x816a99a0: // orphan
         

    loc_0x816a99e4: // orphan
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816a9a3c: // orphan
         
         
         

    loc_0x816a9ad0: // orphan
         
         
         
         

    loc_0x816a9c70: // orphan
         
         

    loc_0x816a9cd0: // orphan
         cache 0x17, -0x666b, t4

    loc_0x816a9cd4: // orphan
         s7 = , unsigned  halfword [fp + 0x3d63]
         daddi t2, v1, 0x2ece
         [s4 - 0x676b] = s4
         lwu t6, 0x3256, t7       // t9
         daddiu s5, k0, 0x3f2c
         bbit1 s5, 0xe, 0x8168df54
         s4 = , unsigned  halfword [fp - 0x31fa]
         ld.b w1, 0x5b, t5

    loc_0x816a9d3c: // orphan
         bbit032 a1, 0x1c, 0x81694fac
         t9 = , unsigned  byte [gp - 0x6d64] // s4
         // CODE XREF from fcn.816a4298 @ +0x658
         t7 = [s5 - 0x1df]        // t9

    loc_0x816a9d60: // orphan
         t7 = s2 & 0x6364
         daddi a0, k1, 0x6365
         daddi t0, t3, 0x581f
         bbit132 t6, 0x12, 0x816973f8
         s7 = , unsigned  halfword [s4 - 0x6969]
         s6 = , unsigned  halfword [s4 - 0x676d]
         lwr gp, -0x19f3, t5      // t9
         t2 = , unsigned  , t2 < 0x6063 // lo
         daddi v1, s3, 0x6364
         daddi a0, k1, 0x6364

    loc_0x816a9da8: // orphan
         daddiu a1, s3, 0x6461
         bz.h w7, 0x816ac558      // unlikely
         lld s5, -0x6168, s5      // s2

    loc_0x816a9db4: // orphan
         lwr t8, -0x6869, t4      // t9
         s6 = , unsigned  halfword [gp - 0x686b]
         s3 = , unsigned  halfword [s4 - 0x6870]
         halfword [t6 - 0xff0] = t8
         a1 = , unsigned  , v0 < 0x5d63 // lo
         daddi at, s3, 0x6160

    loc_0x816a9dcc: // orphan
         daddi v1, s3, 0x6364
         daddi a0, k1, 0x6465
         daddiu a2, t3, 0x6349
         s2 = s0 | 0xe1cd
         sdl fp, -0x6869, gp
         lwr t8, -0x6567, t4      // t9
         lwr t8, -0x6869, t4      // t9
         s7 = , unsigned  halfword [s4 - 0x686a]
         s4 = , unsigned  halfword [s4 - 0x6962]

    loc_0x816a9e38: // orphan
         daddi v0, s3, 0x6263
         daddi v1, k1, 0x6464
         daddiu v1, v1, 0x6363
         daddiu a0, v1, 0x6464
         daddiu a0, v1, 0x6463
         daddi v0, s3, 0x594d

    loc_0x816a9ea4: // orphan
         daddi v1, k1, 0x6364
         daddi k0, v0, 0x4f40
         s0 = t1 ^ 0x261e
         if                       // likely
         sdc1 f12, -0x1a27, s7

    loc_0x816a9eb8: // orphan
         bbit0 fp, 3, 0x81698d8c
         [s5 - 0x5d64] = a3
         lwr s7, -0x6869, a0      // t9
         s7 = , unsigned  halfword [gp - 0x696a]
         s7 = , unsigned  halfword [gp - 0x6869]
         // CODE XREF from fcn.816a4298 @ +0xfe8
         s7 = , unsigned  halfword [gp - 0x6869]
         // CODE XREF from fcn.816a6000 @ +0x298
         s7 = , unsigned  halfword [gp - 0x6768]
         lwr t8, -0x6768, a0      // t9
         lwr t8, -0x6768, a0      // t9
         lwr t8, -0x6767, a0      // t9
         lwr gp, -0x5e5b, t4      // t9
         swl t7, -0x4946, sp
         ll s1, -0x2923, fp
         swc1 f9, -0xf0b, a3
         sd at, 0x90e, 0

    loc_0x816a9f0c: // orphan
         daddiu a0, v1, 0x6464
         daddiu a0, v1, 0x6464
         daddi v1, k1, 0x6363
         daddi v1, k1, 0x6363
         daddi v1, k1, 0x6363
         daddi v0, k1, 0x6263
         daddi v0, s3, 0x6262
         daddi fp, t2, 0x5a56
         beql s2, t7, 0x816bc84c  // unlikely

    loc_0x816a9ff8: // orphan
         bz.w w7, 0x816bb50c      // unlikely

    loc_0x816aa01c: // orphan
         sd k0, -0x70b, ra
         scd s1, -0x1011, ra

    loc_0x816aa094: // orphan
         bbit0 t6, 8, 0x8169bbb0
         bbit0 s6, 0xc, 0x8169dbd4
         pref 0xf, -0x3030, fp
         lld s4, -0x2926, t6      // s2
         ld k1, -0x2425, a2       // s2
         ld sp, -0x211f, a2       // s2
         sc a2, -0x1819, ra
         swc1 f7, -0x1817, ra
         bbit1 s7, 0xc, 0x816a5874
         scd s0, -0xe0f, a3
         scd s6, -0x705, ra
         sd 0, 0x103, s0

    loc_0x816aa0e8: // orphan
         t6 = , unsigned  , at < 0x2d2d // lo
         t7 = , unsigned  , t1 < 0x3131 // lo
         t7 = t1 & 0x2e2d
         t6 = , unsigned  , t1 < 0x3133 // lo
         s5 = t1 | 0x3435
         s7 = t1 | 0x393a
         gp = t9 ^ 0x3c3c
         k1 = t9 ^ 0x3b3d

    loc_0x816aa190: // orphan
         call fcn.80303030        // fcn.80303030(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1)
         // CODE XREF from fcn.816a62e4 @ +0x27c
         call fcn.802c2820        // "$\r"

    loc_0x816aa1e4: // orphan
         sdc1 f23, -0x708, ra
         bbit132 t7, 0x1a, 0x816a8dd4
         bbit132 s7, 0x19, 0x816a85cc
         sdc1 f21, -0xa0c, s7
         sdc1 f19, -0xd0f, a3
         scd t7, -0x1011, a3

    loc_0x816aa2cc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5e8c
         sd at, 0x200, t8
         sd t9, -0x808, a3
         bbit132 s7, 0x1d, 0x816a9ecc
         sd k1, -0x404, t7
         sd v0, 0x304, t8

    loc_0x816aa2ec: // orphan
         sd k1, -0x506, t7
         bbit132 s7, 0x1b, 0x816a96e8
         sd k1, -0x506, a3
         bbit132 s7, 0x1b, 0x816a96fc

    loc_0x816aa310: // orphan
         bbit132 s7, 0x1a, 0x816a9304
         sd sp, -0x204, a3
         bbit132 ra, 0x1c, 0x816a970c
         bbit132 ra, 0x1a, 0x816a8b04
         bbit132 a3, 0x19, 0x816a931c

    loc_0x816aa3d8: // orphan
         sd sp, -0x408, ra
         sdc1 f24, -0x606, ra
         bbit132 s7, 0x1a, 0x816a8fcc
         bbit132 ra, 0x1c, 0x816a9be4

    loc_0x816aa43c: // orphan
         sdc1 f21, -0xa0a, s7
         bbit132 a3, 0x19, 0x816a8c2c
         bbit132 s7, 0x1a, 0x816a8c30
         bbit132 s7, 0x19, 0x816a8c34
         bbit132 ra, 0x1b, 0x816a9840
         sd k1, -0x404, a3        // arg4
         sd sp, -0x1ff, t7

    loc_0x816aa504: // orphan
         sd ra, -4, ra
         bbit132 ra, 0x1b, 0x816a9904
         
         sd ra, 0x205, s7

    loc_0x816aa568: // orphan
         sd fp, -1, t7
         sd sp, -0x304, s7
         sd ra, 0x205, t7
         bgezl 0, 0x816aad78      // likely
         sd sp, -0x201, s7

    loc_0x816aa57c: // orphan
         sd fp, -0x204, ra
         sd gp, -0x303, a3
         sd ra
         sd fp, -0x103, ra
         sd ra, 2, s7

    loc_0x816aa690: // orphan
         sd t9, -0xa0d, a3
         scd s5, -0xa0a, ra
         sdc1 f23, -0x808, s7
         bbit132 ra, 0x1b, 0x816a9688
         bbit132 s7, 0x1b, 0x816a9698
         sd v0, 0x403, t8

    loc_0x816aa6ac: // orphan
         sd at, 0x203, t8

    loc_0x816aa6b4: // orphan
         tgei t0, 0xa09
         bgezl t8, 0x816aa6ac     // likely
         bbit132 s7, 0x1a, 0x816a96ac

    loc_0x816aa6c0: // orphan
         bbit132 ra, 0x1a, 0x816a8a94
         scd s2, -0xc0b, s7
         sdc1 f24, -0x707, ra
         bbit132 t7, 0x18, 0x816a8ab4
         bbit132 ra, 0x1e, 0x816aaee8
         tgei t8, 0x807

    loc_0x816aa75c: // orphan
         sd 0, 0x101, s0
         sd sp, -0x508, ra
         bbit132 a3, 0x1a, 0x816a9b60
         sd ra, -0x208, ra
         sdc1 f23, -0x806, ra
         sd ra, -3, a3
         bbit132 s7, 0x18, 0x816a8754
         sdc1 f24, -0x706, ra
         bbit132 ra, 0x1d, 0x816a9b68
         bbit132 a3, 0x19, 0x816a8b7c
         goto 0x842c2c28
         goto 0x84242830

    loc_0x816aa7e0: // orphan
         sd ra, -2, ra
         sd 0, 0x405, t0

    loc_0x816aa828: // orphan
         scd s2, -0xb09, a3
         bbit132 t7, 0x1a, 0x816a940c
         scd s7, -0x3ff, ra

    loc_0x816aa84c: // orphan
         call fcn.80343838        // fcn.80343838(-1)
         call 0x842c2018          // 0x842c2018(-1, 0x442f71dcfe116408, 0x8, -1)
         tgei s0, 0x808

    loc_0x816aa894: // orphan
         bbit132 s7, 0x1c, 0x816aa48c
         sd gp, -0x60a, t7

    loc_0x816aa89c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a6048
         sdc1 f19, -0x802, a3
         sd gp, -0x70a, s7
         sdc1 f24, -0x400, s7

    loc_0x816aa8b8: // orphan
         sd sp, -0x304, ra
         sd sp, -0x407, a3        // arg4
         bbit132 a3, 0x18, 0x816a8cb0
         sd 0, 0x100, t8

    loc_0x816aa900: // orphan
         sdc1 f22, -0xa0c, s7
         scd t7, -0x1010, t7
         scd s4, -0xa09, ra
         bbit132 a3, 0x1b, 0x816aa514

    loc_0x816aa924: // orphan
         bbit132 ra, 0x1c, 0x816aa524
         sd ra, -0x100, ra

    loc_0x816aa990: // orphan
         goto 0x88282c2c
         goto 0x8c302c20

    loc_0x816aaa0c: // orphan
         sdc1 f22, -0x707, a3
         bbit132 ra, 0x1d, 0x816aa60c
         sd fp, -0x100, s7

    loc_0x816aaa54: // orphan
         bbit132 s7, 0x1a, 0x816a9a48
         bbit132 ra, 0x19, 0x816a8638
         bbit132 s7, 0x1c, 0x816aa654
         sd k0, -0x506, a3
         bbit132 t7, 0x18, 0x816a8a44
         sdc1 f24, -0x706, ra
         bbit132 s7, 0x19, 0x816a8a48
         bbit132 a3, 0x19, 0x816aa270
         sd k1, -0x505, t7

    loc_0x816aaa78: // orphan
         sd 0, 0x305, t0
         bgezl 0, 0x816ab290      // likely

    loc_0x816aaad0: // orphan
         bbit132 ra, 0x1a, 0x816a92b4
         sdc1 f25, -0x403, ra

    loc_0x816aaad8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a669c
         sd ra, -2, ra
         sd fp, 2, s7

    loc_0x816aaaf4: // orphan
         bbit132 ra, 0x1b, 0x816a9aec
         sd ra, 0x101, s7
         
         ra = 0 >> 0x1c

    loc_0x816aab3c: // orphan
         sd gp, -0x405, a3
         sd sp, -0x101, a3

    loc_0x816aab84: // orphan
         goto 0x84140c04

    loc_0x816aaba8: // orphan
         sd ra, 2, s7

    loc_0x816aabdc: // orphan
         call fcn.80383c40        // fcn.80383c40(-1)
         if                       // unlikely

    loc_0x816aabe8: // orphan
         goto 0x8c28241c

    loc_0x816aac00: // orphan
         sdc1 f19, -0xc0d, a3
         sdc1 f21, -0x909, a3
         bbit132 t7, 0x1c, 0x816aa808
         sd k0, -0x80c, t7
         sdc1 f21, -0x705, a3
         // CODE XREF from fcn.816a560c @ +0x9c8
         sd sp, -0x406, t7
         bbit132 s7, 0x1d, 0x816aa820

    loc_0x816aac48: // orphan
         sd ra, 0xff, t7
         sd 0, -2, t8
         sd gp, -0x508, t7
         bbit132 t7, 0x1a, 0x816a9840
         bbit132 ra, 0x1b, 0x816a9c48
         bbit132 ra, 0x1b, 0x816aa05c

    loc_0x816aac6c: // orphan
         sd fp, -1, t7

    loc_0x816aace8: // orphan
         sd fp, -0x103, s7
         sd gp, -0x405, a3        // arg4
         sd v1, 0xa0f, t8
         call 0x88302824          // 0x88302824(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x84282824

    loc_0x816aad0c: // orphan
         goto 0x801c0c08          // fcn.801ac1ec+0x14a1c

    loc_0x816aad54: // orphan
         
         
         
         
         
         
         
         dsra32 0, 0, 3
         sd ra

    loc_0x816aadf4: // orphan
         sd ra
         sd ra
         sd ra, -0x100, ra

    loc_0x816aae3c: // orphan
         lld s6, -0x1e0b, s6      // s2
         call 0x887c9ca0          // 0x887c9ca0(-1, 0x442f71dcfe116408, 0x8, -1)
         s5 = 0 - 0x422
         bbit0 t5, 0x1c, 0x81698114
         cache 0x1d, 0x21f, s6
         k0 = t1 & 0x3d33

    loc_0x816aaecc: // orphan
         sdl s0, -0x525a, t5
         halfword [t5 - 0x3518] = s0
         sd t5, 0x1927, t8
         s3 = t1 & 0x2e28         // a2
         a0 = s1 + 0x1d10
         sd t0, -0x3044, s7
         sdr s4, -0x4e56, a1
         halfword [sp - 0x3a32] = s2
         lwc1 f4, -0x27fe, fp
         s6 = , s1 < 0x312c
         gp = t1 & 0x413f
         t8 = t9 ^ 0x2c15
         bbit132 t7, 3, 0x816a0a30
         ll t9, -0x4a48, s5
         cache 0x1e, -0x4241, t5
         bbit0 ra, 0, 0x816a8b34

    loc_0x816aaf24: // orphan
         cache 0x17, -0x4b40, s5
         bbit032 ra, 0x19, 0x816adf84

    loc_0x816aaf48: // orphan
         sdr t8, -0x4238, sp
         ld s4, 0x917, a3         // s2

    loc_0x816aaf90: // orphan
         ll 0, -0x4047, t6
         sdl s1, -0x4e53, sp
         halfword [t5 - 0x5741] = 0
         bbit032 a3, 0xa, 0x816a8394
         goto 0x8458809c
         s2 = , unsigned  , t1 < 0x3638 // lo

    loc_0x816ab078: // orphan
         bbit032 s6, 0x18, 0x816a07c0
         pref 0xa, -0x383d, s6
         cache 0x1b, -0x484c, sp
         sdl t4, -0x575b, a1
         byte [s4 - 0x676a] = sp
         s0 = , unsigned  byte [gp - 0x7272] // s4
         lwr t1, -0x4336, a1      // t9
         ldc1 f30, -0x1405, a2
         goto 0x805488c8

    loc_0x816ab0e4: // orphan
         t6 = [gp - 0x7171]       // t9
         t6 = [s4 - 0x7172]       // t9
         s0 = [gp - 0x6b64]       // t9
         halfword [s5 - 0x4941] = t7
         bbit0 fp, 0x1c, 0x816a64dc
         v1 = t8 | t4             // t9
         sp = t1 & 0x4953

    loc_0x816ab150: // orphan
         scd s7, -0x402, ra
         if
         call fcn.80383c40        // fcn.80383c40(-1)
         if                       // unlikely

    loc_0x816ab174: // orphan
         ldr s0, 0x706f, t3
         ldr t7, 0x6f6f, s3
         ldr t1, 0x6662, t3

    loc_0x816ab1bc: // orphan
         sdl s0, -0x555c, sp
         lwu k0, -0x6b71, s4      // t9
         t7 = [s4 - 0x7071]       // t9
         t6 = [s4 - 0x6f6a]       // t9
         lwu a0, -0x544e, t5      // t9
         swr ra, -0x3b36, a1
         pref 0x14, -0x2622, fp
         // CODE XREF from fcn.816a6000 @ +0x18c
         sc a3, -0x1310, ra
         sdc1 f24, -0x503, a3

    loc_0x816ab1e0: // orphan
         sd at, 0x408, t8
         call 0x803c4c58          // 0x803c4c58(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ab228: // orphan
         call 0x8c2007e8          // 0x8c2007e8(-1, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f13, -0x1922, a3
         ldc1 f13, -0x3942, s6
         swr s2, -0x5359, a1
         byte [s4 - 0x676d] = sp
         t7 = , unsigned  byte [a0 - 0x7171] // s4
         s0 = [gp - 0x6e6d]       // t9
         s6 = , unsigned  halfword [a0 - 0x6766]
         lwu ra, -0x5d5a, a0      // t9

    loc_0x816ab24c: // orphan
         swl t4, -0x4f4d, t5
         sdr k1, -0x403c, sp
         bbit0 a2, 0xd, 0x8169fdb4
         ld v0, -0x1915, t7       // s2
         scd s5, -0x500, a3

    loc_0x816ab294: // orphan
         sdr s4, -0x4949, t5
         swr k0, -0x4343, t5
         cache 0, -0x3e3d, fp
         lwc1 f6, -0x3838, a2
         bbit0 s6, 0xb, 0x8169e5dc
         pref 0xf, -0x2e2e, s6
         lld s4, -0x2a2a, fp
         ldc1 f23, -0x2727, fp
         bbit032 s6, 0x1a, 0x816a2224

    loc_0x816ab2b8: // orphan
         ld gp, -0x2223, a2       // arg3
         ld sp, -0x2122, t6       // s2
         ld fp, -0x2223, s6       // s2
         ld sp, -0x2324, t6       // s2
         bbit032 fp, 0x1b, 0x816a1e30
         bbit032 t6, 0x19, 0x816a1a30
         bbit032 a2, 0x18, 0x816a1e40
         ld fp, -0x1f1f, t6       // s2
         sc a1, -0x1918, ra
         bbit1 ra, 0xd, 0x816a72a4
         sdc1 f25, -0x1ff, a3
         syscall                  // 255 = unknown ()
         call 0x8c485464          // 0x8c485464(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ab300: // orphan
         ldr s1, 0x7071, s3

    loc_0x816ab324: // orphan
         swc1 f3, -0x2126, ra
         ldc1 f18, -0x3034, s6
         bbit0 t6, 6, 0x8169c234
         cache 0x1c, -0x4548, s5
         sdr s4, -0x4c4e, s5
         sdl s0, -0x4f51, t5
         [sp - 0x5151] = t7
         [sp - 0x4f4f] = t7
         sdl s3, -0x4b4b, s5
         sdr t8, -0x4645, s5
         cache 0x1f, -0x3d3c, t5
         lwc1 f8, -0x3433, s6
         lld s3, -0x2a27, a2      // s2
         ld ra, -0x1d1b, a2       // arg3 // s2
         bbit1 a3, 0xb, 0x816a6f24
         sdc1 f23, -0x504, t7
         sd 0, 0x304, s0
         tgei s0, 0x90b

    loc_0x816ab36c: // orphan
         call fcn.80383c40        // fcn.80383c40(-1)
         if                       // unlikely

    loc_0x816ab378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816ab384: // orphan
         goto 0x8c28241c
         bgezl t0, 0x816abb8c     // likely

    loc_0x816ab390: // orphan
         scd t6, -0x1317, t7
         swc1 f3, -0x1f24, s7
         bbit032 t6, 0x16, 0x816a02dc
         pref 9, -0x393e, a2
         cache 0x1b, -0x484d, sp
         [sp - 0x585d] = t3
         byte [a0 - 0x676b] = gp
         t6 = , unsigned  byte [t4 - 0x7072] // s4
         s0 = [s4 - 0x6d6d]       // t9
         s6 = , unsigned  halfword [t4 - 0x6868]
         lwr sp, -0x5f5c, s4      // t9
         halfword [sp - 0x5150] = t3
         sdl s6, -0x4542, sp
         ll a1, -0x3734, t6       // t9
         lld s4, -0x2826, a2      // s2
         ld 0, -0x1c1a, t7
         bbit1 t7, 0xc, 0x816a7398
         // CODE XREF from fcn.816a62e4 @ +0xa0
         sdc1 f23, -0x504, a3

    loc_0x816ab3d8: // orphan
         sd 0, 0x305, s0
         tgeiu t8, 0xb0d
         call 0x8c444850          // 0x8c444850(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // likely

    loc_0x816ab444: // orphan
         v1 = t9 + 0x2425
         a3 = s1 + 0x282a
         t4 = , t9 < 0x2d2e
         s3 = at & 0x3536
         t8 = t9 | 0x3a3b

    loc_0x816ab4b0: // orphan
         v1 = t9 + 0x2322
         v0 = s1 + 0x2222
         v1 = s1 + 0x2323
         a0 = t9 + 0x2425
         a2 = t1 + 0x2627
         t0 = t9 + 0x2929
         t3 = , s1 < 0x2c2d
         t6 = , unsigned  , s1 < 0x2f30
         s1 = at & 0x3233         // lo
         s5 = at | 0x3637
         t8 = at ^ 0x393a
         k1 = s1 ^ 0x3c3c

    loc_0x816ab588: // orphan
         s7 = , unsigned  halfword [gp - 0x6869]
         s7 = , unsigned  halfword [gp - 0x6868]
         lwr t9, -0x6667, a0
         lwr t8, -0x6768, a0      // t9
         lwr t9, -0x6667, a0
         lwr k0, -0x6566, s4      // t9
         lwr k0, -0x6566, s4      // t9
         lwr t9, -0x6667, t4
         lwr t9, -0x6666, t4
         lwr k1, -0x6464, s4      // t9
         lwu gp, -0x6364, a0      // t9
         lwu gp, -0x6364, a0      // t9
         lwu gp, -0x6364, a0      // t9
         lwu sp, -0x6262, t4      // t9
         lwu fp, -0x6061, s4      // t9
         lwu ra, -0x6062, gp      // t9
         lwu fp, -0x6161, s4      // t9
         lwu ra, -0x6060, gp      // t9
         byte [t5 - 0x5d5d] = at
         byte [sp - 0x5b5c] = a0
         // CODE XREF from fcn.816a560c @ +0x364
         halfword [a1 - 0x5b5c] = a0
         halfword [a1 - 0x5b5b] = a0
         halfword [t5 - 0x595a] = a1
         halfword [s5 - 0x5858] = a3
         // CODE XREF from fcn.816a6000 @ +0x188
         swl t0, -0x5657, a1
         swl t1, -0x5657, t5
         swl t1, -0x5656, t5

    loc_0x816ab5f4: // orphan
         swl t4, -0x5253, sp
         [s5 - 0x4f4f] = t7
         sdl s2, -0x4c4d, s5
         sdr s4, -0x4a4b, a1
         sdr s6, -0x494a, t5
         sdr s7, -0x4748, sp
         swr t8, -0x4647, a1
         swr k1, -0x4444, s5
         cache 0x1e, -0x4141, t5
         // CODE XREF from fcn.816b7e54 @ 0x816a5dbc
         ll 0, -0x3f3f, a2
         ll at, -0x3e3e, t6       // t9
         ll v1, -0x3b3c, fp
         lwc1 f8, -0x3535, s6
         bbit0 fp, 0xb, 0x8169e55c
         pref 0xd, -0x3130, t6
         lld s2, -0x2b2c, t6
         ldc1 f22, -0x2828, t6
         bbit032 a2, 0x18, 0x816a199c
         bbit032 a2, 0x18, 0x816a1da8
         bbit032 fp, 0x1d, 0x816a31c0
         sc at, -0x1d1e, a3
         sc a0, -0x1b1b, ra
         swc1 f6, -0x1819, t7
         bbit1 a3, 9, 0x816a6604

    loc_0x816ab660: // orphan
         bbit132 a3, 0x19, 0x816aa250
         sd sp, -0x200, a3

    loc_0x816ab7a4: // orphan
         v1 = at + 0x2322
         at = t1 + 0x2020

    loc_0x816ab810: // orphan
         scd t7, -0x1112, t7

    loc_0x816ab8ec: // orphan
         swc1 f7, -0x1819, ra
         swc1 f7, -0x1818, ra
         bbit1 a3, 8, 0x816a5c98
         bbit1 a3, 8, 0x816a5c98
         swc1 f7, -0x181a, ra
         swc1 f6, -0x191a, s7
         swc1 f6, -0x191a, s7
         swc1 f5, -0x1a1b, t7
         swc1 f5, -0x1b1c, t7
         swc1 f4, -0x1b1d, a3
         sc v1, -0x1c1d, ra
         swc1 f4, -0x1b1c, a3
         swc1 f5, -0x1a1b, a3
         swc1 f5, -0x191a, t7
         swc1 f6, -0x191a, s7

    loc_0x816ab928: // orphan
         swc1 f6, -0x1a1b, s7
         swc1 f6, -0x1919, s7
         swc1 f8, -0x1718, ra
         bbit1 a3, 8, 0x816a5cd8
         bbit1 a3, 9, 0x816a60e4
         bbit1 ra, 0xb, 0x816a68f0

    loc_0x816ab998: // orphan
         call fcn.80303034        // fcn.80303034(-1, 0x442f71dcfe116408)
         call 0x84383c3c          // 0x84383c3c(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely
         if                       // unlikely

    loc_0x816ab9ac: // orphan
         if                       // unlikely
         call 0x8c3c3c38          // 0x8c3c3c38(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ab9b4: // orphan
         call 0x88383c3c          // 0x88383c3c(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x8c3c3838          // 0x8c3c3838(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ab9bc: // orphan
         call 0x88383834          // 0x88383834(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x84343030          // 0x84343030(-1, 0x442f71dcfe116408, 0x8, -1)
         call fcn.802c2c2c        // fcn.802c2c2c(-1)
         goto 0x88282424

    loc_0x816aba04: // orphan
         goto 0x88282c30
         call fcn.80303030        // fcn.80303030(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1)

    loc_0x816aba28: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816aba34: // orphan
         call 0x88383838          // 0x88383838(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x88383834          // 0x88383834(-1, 0x442f71dcfe116408, 0x8, -1)
         call 0x8434302c          // 0x8434302c(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x8c282828

    loc_0x816aba94: // orphan
         sd ra, -2, ra
         sd fp, -0x100, s7

    loc_0x816abb00: // orphan
         

    loc_0x816abb48: // orphan
         bbit132 a3, 0x17, 0x816a9724
         sdc1 f21, -0xa0b, s7
         sdc1 f20, -0xb0b, a3
         sdc1 f22, -0x909, t7
         bbit132 a3, 0x18, 0x816a9b34
         sdc1 f21, -0xa0a, s7
         sdc1 f22, -0x809, s7
         sdc1 f23, -0x80a, ra
         sdc1 f21, -0xb0d, s7

    loc_0x816abb6c: // orphan
         scd s0, -0x1011, t7

    loc_0x816abb74: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a6300
         scd s2, -0xd0e, s7
         scd s2, -0xd0f, s7
         scd s1, -0xf10, t7
         scd s1, -0xe0e, a3
         scd s4, -0xb0c, ra
         sdc1 f21, -0xa0b, t7

    loc_0x816abb8c: // orphan
         sdc1 f20, -0xc0d, a3

    loc_0x816abb90: // orphan
         scd s3, -0xc0d, ra
         sdc1 f20, -0xa0a, a3
         sdc1 f24, -0x506, ra
         bbit132 ra, 0x1b, 0x816aab8c
         bbit132 ra, 0x1a, 0x816aa388
         bbit132 t7, 0x19, 0x816aa38c
         bbit132 t7, 0x19, 0x816aa794
         bbit132 s7, 0x1b, 0x816aab9c
         bbit132 ra, 0x1b, 0x816aaba0

    loc_0x816abbb4: // orphan
         bbit132 s7, 0x1a, 0x816aa398
         bbit132 a3, 0x19, 0x816aa3a4
         bbit132 s7, 0x1b, 0x816aabb0
         sd fp, -1, t7

    loc_0x816abbd8: // orphan
         sd sp, -0x203, s7
         sd gp, -0x304, t7
         bbit132 ra, 0x1b, 0x816aabd0
         bbit132 ra, 0x1b, 0x816aabd4
         bbit132 ra, 0x1a, 0x816aa7d0
         bbit132 t7, 0x1a, 0x816aa7dc
         bbit132 ra, 0x1c, 0x816aafe8
         sd fp, -0x102, t7
         sd ra, -0x102, ra

    loc_0x816abbfc: // orphan
         sd sp, -0x202, t7
         sd sp, -0x203, s7
         sd gp, -0x305, t7
         bbit132 ra, 0x1b, 0x816aa7f4
         bbit132 s7, 0x1a, 0x816aa7f8
         bbit132 s7, 0x1b, 0x816aac04
         sd sp, -0x203, t7
         sd sp, -0x204, t7
         sd k1, -0x405, a3        // arg4
         bbit132 ra, 0x1a, 0x816aa810
         bbit132 ra, 0x1b, 0x816aac14
         bbit132 ra, 0x1b, 0x816aac14
         bbit132 t7, 0x19, 0x816aa410
         bbit132 a3, 0x18, 0x816aa014
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x90b, ra
         sdc1 f20, -0xc0e, a3

    loc_0x816abc44: // orphan
         scd s2, -0xe0f, s7
         scd s1, -0xe0e, t7
         scd s3, -0xc0c, s7
         sdc1 f21, -0x90a, t7
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x808, ra
         bbit132 a3, 0x18, 0x816aa444
         bbit132 s7, 0x1a, 0x816aac50
         sd k1, -0x405, a3        // arg4

    loc_0x816abc68: // orphan
         sd gp, -0x304, a3        // arg4
         bbit132 ra, 0x1b, 0x816aa858
         bbit132 t7, 0x19, 0x816aa458
         bbit132 t7, 0x1a, 0x816aa860
         bbit132 s7, 0x1b, 0x816aac68
         bbit132 ra, 0x1b, 0x816ab070
         sd sp, -0x203, a3        // arg4
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd gp, -0x304, a3        // arg4
         sd sp, -0x203, a3        // arg4
         sd sp, -0x203, t7
         sd fp, -0x101, t7
         sd 0, 0x101, t8

    loc_0x816abcb0: // orphan
         goto fcn.801c1c1c        // fcn.801c1c1c(-1, 0x442f71dcfe116408)

    loc_0x816abd1c: // orphan
         sd ra, -1, s7
         
         

    loc_0x816abd64: // orphan
         goto 0x8c2c2c2c
         goto 0x8c2c2c2c

    loc_0x816abd88: // orphan
         sd fp, -0x203, s7
         sd gp, -0x304, a3        // arg4
         sd gp, -0x304, a3        // arg4
         sd gp, -0x305, a3        // arg4
         bbit132 ra, 0x1b, 0x816aad84
         bbit132 s7, 0x1a, 0x816aa988
         bbit132 t7, 0x19, 0x816aa588
         bbit132 a3, 0x18, 0x816aa188
         bbit132 a3, 0x18, 0x816aa18c

    loc_0x816abdac: // orphan
         bbit132 t7, 0x19, 0x816aa594
         bbit132 a3, 0x18, 0x816aa194
         bbit132 a3, 0x18, 0x816aa198
         bbit132 t7, 0x19, 0x816aa5a0
         // CODE XREF from fcn.816a6000 @ +0x14c
         bbit132 s7, 0x1a, 0x816aadb0
         sd gp, -0x304, a3        // arg4
         sd gp, -0x304, a3        // arg4
         sd sp, -0x202, t7
         sd fp, -0x103, s7

    loc_0x816abdd0: // orphan
         sd sp, -0x203, t7
         sd sp, -0x202, a3        // arg4
         sd 0
         

    loc_0x816abe3c: // orphan
         sd sp, -0x203, s7
         sd sp, -0x304, t7
         bbit132 ra, 0x1a, 0x816aaa2c
         bbit132 t7, 0x19, 0x816aa22c
         bbit132 a3, 0x17, 0x816a9e2c
         sdc1 f24, -0x708, ra
         bbit132 a3, 0x18, 0x816aa238
         bbit132 a3, 0x18, 0x816aa23c
         sdc1 f23, -0x809, ra

    loc_0x816abe60: // orphan
         sdc1 f22, -0x90a, ra
         sdc1 f22, -0x909, s7
         // CODE XREF from fcn.816a62e4 @ +0x32c
         sdc1 f24, -0x707, ra
         bbit132 t7, 0x19, 0x816aa654
         bbit132 s7, 0x1a, 0x816aaa5c
         bbit132 s7, 0x1b, 0x816aae68
         sd gp, -0x304, a3
         sd gp, -0x304, a3
         sd sp, -0x101, t7

    loc_0x816abecc: // orphan
         dsra32 ra, 0, 0x1f
         sd fp, -0x102, ra
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd sp, -0x203, t7
         sd gp, -0x304, a3        // arg4
         sd k1, -0x405, a3        // arg4
         bbit132 s7, 0x1a, 0x816aaad4
         bbit132 s7, 0x19, 0x816aa6d4

    loc_0x816abef0: // orphan
         bbit132 t7, 0x1a, 0x816aaadc
         bbit132 t7, 0x19, 0x816aa6dc
         bbit132 a3, 0x18, 0x816aa2e0
         bbit132 t7, 0x19, 0x816aa2e0
         bbit132 a3, 0x17, 0x816a9ee0
         sdc1 f23, -0x808, ra
         bbit132 a3, 0x18, 0x816aa6f0
         bbit132 t7, 0x19, 0x816aa6f4
         bbit132 t7, 0x19, 0x816aa6f8

    loc_0x816abf14: // orphan
         bbit132 t7, 0x19, 0x816aa700
         bbit132 ra, 0x1b, 0x816aaf08
         bbit132 ra, 0x1b, 0x816aab08
         bbit132 s7, 0x19, 0x816aab0c
         bbit132 s7, 0x1a, 0x816aaf18
         sd sp, -0x202, t7
         sd fp, -0x102, s7
         sd sp, -0x102, t7
         sd 0, 0x102, t8

    loc_0x816abfc8: // orphan
         bbit132 t7, 0x18, 0x816a9fa8
         // CODE XREF from fcn.816a62e4 @ +0x80
         sdc1 f22, -0x90a, ra
         sdc1 f23, -0x809, ra
         sdc1 f23, -0x80a, ra
         sdc1 f22, -0xa0b, s7
         sdc1 f22, -0x909, t7
         sdc1 f23, -0x708, ra
         bbit132 a3, 0x18, 0x816aa3c8
         bbit132 a3, 0x18, 0x816aa3cc

    loc_0x816abfec: // orphan
         sdc1 f23, -0x809, ra
         bbit132 a3, 0x18, 0x816aa7dc
         bbit132 ra, 0x1c, 0x816ab7ec
         sd sp, -0x203, t7
         sd sp, -0x304, t7
         sd gp, -0x405, a3
         sd gp, -0x303, a3
         sd sp, -0x203, t7
         sd gp, -0x304, t7

    loc_0x816ac010: // orphan
         sd gp, -0x304, a3        // arg4
         sd sp, -0x203, t7
         sd fp, -1, s7
         sd 0

    loc_0x816ac07c: // orphan
         sd sp, -0x203, t7
         sd gp, -0x304, a3        // arg4
         sd sp, -0x203, a3        // arg4
         sd sp, -0x203, t7
         sd sp, -0x304, t7
         sd gp, -0x405, a3        // arg4
         bbit132 ra, 0x1b, 0x816ab084
         bbit132 ra, 0x1b, 0x816ab084
         // CODE XREF from fcn.816c4d8c @ +0x770
         bbit132 s7, 0x1a, 0x816aac88

    loc_0x816ac0a0: // orphan
         bbit132 s7, 0x19, 0x816aa484
         sdc1 f23, -0x809, ra
         sdc1 f24, -0x707, ra
         bbit132 s7, 0x1b, 0x816ab09c
         bbit132 ra, 0x1b, 0x816ab0a0
         bbit132 ra, 0x1b, 0x816ab0a4
         bbit132 ra, 0x1b, 0x816ab4ac
         sd sp, -0x202, a3        // arg4
         sd fp, -1, s7

    loc_0x816ac0c4: // orphan
         sd ra, -0x102, ra
         sd gp, -0x405, t7
         bbit132 s7, 0x1a, 0x816aa8b4
         bbit132 t7, 0x19, 0x816aa8bc
         bbit132 ra, 0x1b, 0x816ab0c4
         bbit132 ra, 0x1a, 0x816aa8c0
         bbit132 a3, 0x17, 0x816aa0b8
         sdc1 f22, -0x90a, s7
         sdc1 f23, -0x809, ra

    loc_0x816ac0e8: // orphan
         sdc1 f22, -0x809, s7
         bbit132 a3, 0x18, 0x816aa8d4
         bbit132 s7, 0x1a, 0x816ab0e0
         bbit132 ra, 0x1b, 0x816ab0e0
         bbit132 t7, 0x19, 0x816aa8e0
         bbit132 t7, 0x1a, 0x816ab4f4
         sd 0
         dsrl32 ra, 0, 0x1f
         sd fp, -0x102, s7

    loc_0x816ac10c: // orphan
         sd ra

    loc_0x816ac164: // orphan
         
         
         
         movf 0, 0, fcc0

    loc_0x816ac198: // orphan
         sd sp, -0x102, t7
         sd fp, -1, s7
         sd ra, -0x102, ra
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd fp, -0x102, s7
         sd sp, -0x203, s7
         sd fp, -0x101, t7

    loc_0x816ac26c: // orphan
         sd gp, -0x203, a3        // arg4
         sd sp, -0x204, t7
         sd sp, -0x202, a3        // arg4
         sd 0, 0x102, t8

    loc_0x816ac2b4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5a40
         sd fp, -0x100, t7

    loc_0x816ac414: // orphan
         sdc1 f22, -0x706, s7
         sd fp, -1, t7
         

    loc_0x816ac438: // orphan
         goto 0x88282420
         goto fcn.801c1c1c        // fcn.801c1c1c(-1, 0x442f71dcfe116408)

    loc_0x816ac46c: // orphan
         goto 0x84242424
         goto 0x84242424

    loc_0x816ac4e4: // orphan
         sd fp, -0x203, s7
         sd fp, -0x101, s7
         sd ra, -2, ra
         sd fp, -0x102, s7
         sd fp, -0x101, s7
         sd ra, -0x100, ra

    loc_0x816ac558: // orphan
         sdc1 f22, -0x90b, s7
         sdc1 f20, -0xc0d, t7
         scd s3, -0xc0c, ra
         sdc1 f20, -0xa0b, a3
         sdc1 f22, -0x90a, s7
         sdc1 f22, -0xa0c, s7
         sdc1 f20, -0xb0b, a3
         sdc1 f24, -0x606, ra
         bbit132 ra, 0x1b, 0x816ab564
         bbit132 s7, 0x19, 0x816aad60
         bbit132 a3, 0x18, 0x816aa964
         bbit132 t7, 0x19, 0x816ab174

    loc_0x816ac588: // orphan
         bbit132 ra, 0x1b, 0x816ab170
         bbit132 a3, 0x18, 0x816aa56c
         bbit132 a3, 0x18, 0x816aad7c
         bbit132 s7, 0x1b, 0x816ab98c
         sd fp, -0x101, t7
         sd 0

    loc_0x816aca6c: // orphan
         sd gp, -0x304, a3
         sd sp, -0x101, t7
         

    loc_0x816acedc: // orphan
         
         movf 0, 0, fcc0

    loc_0x816acfc8: // orphan
         

    loc_0x816acfd4: // orphan
         sd ra, -2, ra
         sd ra, -1, s7

    loc_0x816ad02c: // orphan
         sd fp, -0x102, s7
         sd fp, -0x102, s7

    loc_0x816ad050: // orphan
         sd 0
         

    loc_0x816ad13c: // orphan
         
         dsra32 ra, 0, 0x1f
         
         
         dsra32 ra, 0, 0x1f
         sd ra, -0x100, ra
         

    loc_0x816ad170: // orphan
         sd fp, -0x102, s7
         sd ra, -1, s7

    loc_0x816ad1a4: // orphan
         sd fp, -0x101, s7

    loc_0x816ad398: // orphan
         
         
         
         
         
         
         
         
         

    loc_0x816ad3bc: // orphan
         
         // CODE XREF from fcn.816aac3c @ +0x1b74
         
         
         
         // CODE XREF from fcn.816aac3c @ +0x1b84
         
         

    loc_0x816ad3d4: // orphan
         
         
         

    loc_0x816ad3e0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         dsra32 ra, 0, 0x1f

    loc_0x816ad7bc: // orphan
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.816a560c @ +0x948
         
         
         
         

    loc_0x816ad7f0: // orphan
         dsra32 0, 0, 3

    loc_0x816adbc8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816ae3ec
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x816ade64: // orphan
         swc1 f9, -0x4962, a3
         swl 0, -0x1f38, t6
         lwc1 f19, -0x36fa, s5

    loc_0x816ae084: // orphan
         goto 0x87cb5748
         bbit132 t0, 0x1d, 0x816b6cb4

    loc_0x816ae0ec: // orphan
         t3 = t9 | 0xdaa9
         halfword [t8 + 0x1a02] = at
         goto 0x8418701c
         sc a0, 0x2b28, a3

    loc_0x816ae0f8: // orphan
         sc a0, 0x2b28, a3
         call 0x8c84ed38          // "7" // 0x8c84ed38(-1, 0x442f71dcfe116408, 0x8, -1)
         t8 = , t7 < -0x35ff
         
         s3 = , unsigned  , t7 < -0x3047 // lo
         bbit1 t0, 0xf, 0x816adcb8
         ldc1 f31, 0xee5, t7
         pref 0x13, 0x22fc, t0
         bbit0 sp, 0x14, 0x816aa4e8
         ld k1, 0x706f, a3        // s2
         k1 = t6 & 0xcd05
         s6 = t1 | 0xe20f

    loc_0x816ae140: // orphan
         goto 0x8ba4242c
         sdc1 f1, -0x4a1a, t6

    loc_0x816ae28c: // orphan
         sdr k1, 0xcf0, t6
         sc t0, 0x708, t7
         scd s7, -0x3a04, fp
         if                       // unlikely
         goto 0x8003f7dc

    loc_0x816ae398: // orphan
         swc1 f2, 0x212, ra

    loc_0x816ae3ec: // orphan
         if                       // unlikely
         call 0x8c4f8b3c          // 0x8c4f8b3c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ae3f4: // orphan
         swc1 f25, 0x703, a3

    loc_0x816ae410: // orphan
         v0 = , unsigned  , s1 < 0x8f3
         ld s7, -0x2f24, fp
         sd s1, 0x1406, t0
         if                       // unlikely
         ld a1, 0x526, ra

    loc_0x816ae424: // orphan
         goto 0x8858ccc0

    loc_0x816ae514: // orphan
         lld t6, -0x25e3, s6      // s2

    loc_0x816ae554: // orphan
         if                       // likely
         bgezal t7, 0x816b1600    // 0x11(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ae55c: // orphan
         t3 = s7 - 0x2c28
         bbit1 a3, 0xe, 0x8169d0ec
         s2 = t1 & 0xeced
         sd s2, -0x122, s0
         sc v0, 0x3205, 0
         sdc1 f22, 0xaf0, t7
         ldc1 f8, 0x25, ra
         goto 0x87ebdfd0
         sd a0, 0xb2c, 0

    loc_0x816ae658: // orphan
         call 0x88885814          // 0x88885814(-1, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f18, -0xe0c, ra
         scd s2, -0x3fb, t7
         sd t4, -0xe13, ra
         scd 0, -0xfd, t8

    loc_0x816ae680: // orphan
         sd t3, 0x120c, t8
         call 0x8c584420          // 0x8c584420(-1, 0x442f71dcfe116408, 0x8, -1)
         bbit132 t0, 2, 0x816b22cc

    loc_0x816ae68c: // orphan
         call 0x8c20102c          // 0x8c20102c(-1, 0x442f71dcfe116408, 0x8, -1)
         bbit132 a2, 0x1f, 0x816a5604
         sc v1, -0x1a0a, ra
         tgeu a3, s4, 0x3a3
         scd s0, -0x150e, t7
         goto 0x8078a3f0

    loc_0x816ae784: // orphan
         at = t1 + 0xef4
         scd s7, 0xafd, ra

    loc_0x816ae7a8: // orphan
         call 0x8464583c          // 0x8464583c(-1, 0x442f71dcfe116408, 0x8, -1)
         goto 0x8c405c38

    loc_0x816ae800: // orphan
         goto 0x881c0424
         sd 0, -0x1e13, t7

    loc_0x816ae824: // orphan
         if                       // likely
         bltzl s0, 0x816b0c60     // unlikely

    loc_0x816ae858: // orphan
         call 0x8c241800          // 0x8c241800(-1, 0x442f71dcfe116408, 0x8, -1)
         scd s5, 0x509, a3

    loc_0x816ae87c: // orphan
         call 0x841c0c04          // 0x841c0c04(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ae8d4: // orphan
         if                       // unlikely
         goto 0x8c13efe0

    loc_0x816ae9d8: // orphan
         if                       // unlikely
         call 0x88141c28          // 0x88141c28(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816ae9e0: // orphan
         call 0x8c1fe7d8          // 0x8c1fe7d8(-1, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f22, -0x1014, s7
         sdc1 f2, -3, t8
         // CODE XREF from fcn.816a6000 @ +0x13c
         sd s7, -0x710, a3
         scd 0, 0xc0f, s0
         sd s2, -0xd0f, a3

    loc_0x816aebbc: // orphan
         call fcn.801c03f8        // fcn.801c03f8(-1)

    loc_0x816aeec4: // orphan
         bbit132 a3, 0x16, 0x816ac2a8
         sd 0, -0x302, s0

    loc_0x816aef4c: // orphan
         sd 0, -0x506, s0
         movt 0, 0, fcc0
         goto 0x8c40401c

    loc_0x816aeff4: // orphan
         bltzl s0, 0x816acfc8     // unlikely
         sdc1 f29, 0xfc, t7

    loc_0x816aeffc: // orphan
         bbit132 s7, 0x19, 0x816acbd4
         bbit132 t8, 3, 0x816b2440
         call 0x882c1c14          // 0x882c1c14(-1, 0x442f71dcfe116408, 0x8, -1)
         sd k1, -0x1fd, s7

    loc_0x816af008: // orphan
         sd k1, -0x1fd, s7

    loc_0x816af024: // orphan
         bbit132 s0, 0, 0x816b0038

    loc_0x816af0c8: // orphan
         sd 0, 0x1fa, t8
         sd at, -0x108, s0
         sdc1 f27, -0x301, s7
         sd v1, 0x708, s0
         if                       // unlikely
         sd gp, 0x203, ra

    loc_0x816af16c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5cc0
         goto 0x8817f3ec
         dsrl32 0, at, 7

    loc_0x816af27c: // orphan
         goto 0x80201c14          // fcn.80201c10+0x4

    loc_0x816af308: // orphan
         call 0x800bfff0          // 0x800bfff0(-1, 0x442f71dcfe116408, 0x8, -1)
         bbit132 ra, 0x17, 0x816acaec
         sd at, -0x204, t0
         sd a0, 0x709, t8
         goto 0x84343018

    loc_0x816af668: // orphan
         sd sp, -3, s7
         bbit132 ra, 0x19, 0x816ad648
         sdc1 f25, -0x1fc, s7
         goto fcn.80281c0c        // fcn.80281c0c(-1)

    loc_0x816af72c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5a74
         sd k0, -0x70a, a3
         sdc1 f25, -0x400, s7

    loc_0x816af7c0: // orphan
         goto fcn.80201c0c
         sd gp, -0x404, ra

    loc_0x816af9f0: // orphan
         bgezl 0, 0x816b01f8      // likely
         sd t9, -0x605, a3

    loc_0x816af9f8: // orphan
         bbit132 ra, 0x1d, 0x816af1f0
         sd 0, -0x100, t8

    loc_0x816b0010: // orphan
         bbit132 ra, 0x1d, 0x816afc10
         sd fp, -0xff, s7

    loc_0x816b01f0: // orphan
         sd gp, -0x101, t7
         sd ra, -0x100, ra

    loc_0x816b03c8: // orphan
         

    loc_0x816b0d1c: // orphan
         sd ra, -0x100, ra
         
         

    loc_0x816b0d94: // orphan
         
         

    loc_0x816b0da8: // orphan
         
         

    loc_0x816b0fc0: // orphan
         sd 0
         
         

    loc_0x816b0fd4: // orphan
         sd 0
         
         

    loc_0x816b144c: // orphan
         sd ra, -0x100, ra
         dsra32 0, 0, 3

    loc_0x816b14f8: // orphan
         dsra32 ra, 0, 0x1f
         sd fp, -0x100, s7
         

    loc_0x816b1530: // orphan
         

    loc_0x816b15b4: // orphan
         
         dsra32 0, 0, 3
         sd fp, -0x101, s7
         dsra32 0, 0, 3
         sd fp, -0x102, s7

    loc_0x816b181c: // orphan
         movt 0, 0, fcc0

    loc_0x816b1b44: // orphan
         dsra32 0, 0, 3
         sd gp, -0x300, s7
         dsrl32 ra, 0, 0x1b
         sd sp, -0x101, t7

    loc_0x816b2030: // orphan
         sd sp, 0x105, s7
         bgezl s0, 0x816b142c     // likely

    loc_0x816b219c: // orphan
         sd s3, -0xa09, s7
         sdc1 f27, -0xfd, s7

    loc_0x816b23b8: // orphan
         goto 0x84485048
         call 0x8813f810          // 0x8813f810(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816b24c4: // orphan
         bbit132 a3, 0x19, 0x816b18c4
         goto 0x84302004
         bbit132 a3, 0xe, 0x816ae8d8

    loc_0x816b2820: // orphan
         swc1 f28, 0x110e, ra
         if                       // unlikely
         bbit132 s7, 0x19, 0x816ab7e8

    loc_0x816b282c: // orphan
         tltu s0, k0, 0x63
         bbit1 s7, 0x12, 0x816aebac

    loc_0x816b2a7c: // orphan
         halfword [t5 - 0x493d] = at
         lld ra, -0x1e27, s6      // s2
         lld a1, -0x3429, t6      // s2

    loc_0x816b2adc: // orphan
         a1 = t1 | 0x252d         // arg2
         v1 = , unsigned  , t1 < 0x2839 // lo
         a2 = t0 - 0x606          // arg3
         call fcn.80789864
         sd t6, -0x232c, s7
         bbit0 a1, 0x1f, 0x816a5e50
         sc gp, -0x3257, a2
         v1 = , unsigned  halfword [s5 - 0x4328]
         ll s0, -0x4c4d, s5       // t9
         sdr k1, -0x4046, t5
         swr 0, -0x4550, fp

    loc_0x816b2b08: // orphan
         byte [a0 - 0x726b] = t6  // arg1
         byte [sp - 0x4c4a] = t6
         byte [s4 - 0x6e5a] = 0
         ll gp, -0x384e, a2       // t9
         lwu t1, -0x4443, sp
         bbit0 t6, 0xe, 0x816a9aa8
         sc sp, -0x1315, s6
         ldc1 f17, 0xc17, ra

    loc_0x816b2c24: // orphan
         bbit132 0, 1, 0x816b4050
         call 0x8438302c          // 0x8438302c(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x816b2c34: // orphan
         goto 0x8830342c

    loc_0x816b2d20: // orphan
         sd gp, 4, t7

    loc_0x816b2e3c: // orphan
         a0 = 0 + 0

    loc_0x816b2e40: // orphan
         t2 -= 1                  // t3
         a2 = t2 & 0xfff          // t3
         call fcn.84001668        // "\r" // fcn.84001668(-1)
         a1 = t0
         call fcn.840016a0        // fcn.840016a0(-1)
         a1 = t1
         t2 ^= a2
         a2 += 1                  // s4
         t0 += a2
         if                       // unlikely
         t1 += a2

    loc_0x816b2e6c: // orphan
         a0 = 0 + 0xa00           // signed int64_t arg3
         a2 = 0 + 0x53f
         call fcn.84001668        // fcn.84001668(0xa00)
         a1 = t4                  // t9
         a0 = 0 + 0               // int64_t arg3
         a2 = 0 + 0xbf
         call fcn.84001664        // fcn.84001664(0x0)
         a1 = t3 + 0xa10
         t0 = 1 << 16
         mtc0 t0, a0, 0
         bbit1 0, 0, 0x816bb088
         bbit1 0, 1, 0x816bb090
         bbit1 0, 2, 0x816bb098
         bbit1 0, 3, 0x816bb0a0
         t1 += 8
         [0 + 0xfe0] = t1

    loc_0x816b2f28: // orphan
         t1 = [0 + 0xfec]         // t9
         a0 = 0 + 0x200           // signed int64_t arg3
         a2 = 0 + 0xff            // arg3 // s4
         t0 = a3 & 3              // arg4
         t2 = t0 << 1
         t2 += t0
         t2 <<= 9
         t1 += 0x1200
         call fcn.84001668        // fcn.84001668(0x200)
         a1 = t1 + t2
         a0 = 0 + 0x400           // signed int64_t arg3
         call fcn.84001668        // fcn.84001668(0x400)
         a1 += 0x300
         a0 = 0 + 0x600           // signed int64_t arg3
         t0 = 0 + 0x2a00
         t2 = t0 - t2
         call fcn.84001668        // fcn.84001668(0x600)
         a1 = t1 + t2
         a0 = 0 + 0x800           // signed int64_t arg3
         call fcn.84001668        // "\r" // fcn.84001668(0x800)
         a1 += 0x300
         call 0x84001678          // 0x84001678(0x800, 0x100002cff, 0xff, -1)
         
         s0 = , unsigned  byte [0 + 0xe79] // s4
         gp = 0 + 0x480
         v0 = a3 & 7
         v1 = v0 ^ 7
         sp = 0 - 1               // s2
         s1 = a3 & 0x10
         s1 |= 0x80

    loc_0x816b2fa0: // orphan
         if                       // likely
         t0 = s0 & 7

    loc_0x816b2fa8: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f1] // [0x9f1:1]=255 // 2545 // s4

    loc_0x816b2fac: // orphan
         s0 = , unsigned  byte [gp + 0x9f1] // [0x9f1:1]=255 // 2545 // s4

    loc_0x816b2fb0: // orphan
         if                       // likely
         gp -= 8

    loc_0x816b2fb4: // orphan
         gp -= 8

    loc_0x816b2fb8: // orphan
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t2 = , unsigned  byte [gp + 0xa01] // [0xa01:1]=255 // 2561 // s4

    loc_0x816b2fc0: // orphan
         t7 = t0 & 4
         t7 <<= 8
         t3 = t1 & 0x90
         if                       // likely
         t3 = t1 & 8              // a2

    loc_0x816b2fd4: // orphan
         t3 <<= 5
         t3 |= t2
         t3 >>= 3
         t3 <<= 6
         if                       // unlikely
         sp = t3

    loc_0x816b2fec: // orphan
         a1 = [0 + 0xfec]         // t9
         a0 = 0 + 0xf80           // int64_t arg3
         a2 = 0 + 0x3f            // arg3
         call fcn.84001664        // fcn.84001664(0xf80)
         a1 += t3

    loc_0x816b3000: // orphan
         s2 = , unsigned  byte [gp + 0xa06] // [0xa06:1]=255 // 2566 // s4
         s3 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s5 = s2 >> 3
         s5 <<= 1
         s2 &= 7
         s2 ^= 7
         goto 0x840016b0
         t9 = 0 + 0x1190

    loc_0x816b3020: // orphan
         s0 = , unsigned  byte [0 + 0xe7a] // s4
         gp = 0 + 0x480
         v0 = a3 & 7              // arg4
         v1 = v0 ^ 7
         s1 = a3 & 0x10           // arg4
         s1 |= 0xa0

    loc_0x816b3038: // orphan
         if                       // likely
         t0 = s0 & 7

    loc_0x816b3040: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f2] // [0x9f2:1]=255 // 2546 // s4

    loc_0x816b3048: // orphan
         if                       // likely
         gp -= 8

    loc_0x816b304c: // orphan
         gp -= 8

    loc_0x816b3050: // orphan
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t2 = , unsigned  byte [gp + 0xa02] // [0xa02:1]=255 // 2562 // s4
         t7 = t0 & 4
         t7 <<= 8
         t3 = t1 & 0xb0
         if                       // likely
         t3 = t1 & 0x40

    loc_0x816b306c: // orphan
         t3 <<= 2
         t3 |= t2
         t3 >>= 3
         t3 <<= 6
         if                       // unlikely
         sp = t3

    loc_0x816b3084: // orphan
         a1 = [0 + 0xfec]         // t9
         a0 = 0 + 0xf80           // int64_t arg3
         a2 = 0 + 0x3f            // arg3
         call fcn.84001664        // fcn.84001664(0xf80)
         a1 += t3

    loc_0x816b3098: // orphan
         s2 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s3 = 0 + 0xa7
         s6 = s2 - s3
         if                       // likely
         s5 = 0 + 0

    loc_0x816b30ac: // orphan
         goto 0x840016b0
         t9 = 0 + 0x1228

    loc_0x816b30b4: // orphan
         if                       // unlikely
         t0 = a3 & 0x10           // arg4

    loc_0x816b30bc: // orphan
         if                       // likely
         a3 -= 0x10               // arg4

    loc_0x816b30cc: // orphan
         v0 = 0 - 0x9c

    loc_0x816b30d0: // orphan
         s0 = , unsigned  byte [v0 + 0xf1c] // s4
         s2 = , unsigned  byte [v0 + 0xf1d] // s4
         v1 = , unsigned  byte [v0 + 0xf1f] // s4

    loc_0x816b30dc: // orphan
         s3 = , unsigned  byte [v0 + 0xf1e] // s4
         t0 = s0 - 1
         t0 = , unsigned  , t0 < 0x9f
         t1 = s2 - 1              // hi
         t1 = , unsigned  , t1 < 0xa7
         t0 &= t1
         if                       // likely
         s0 -= 0x10

    loc_0x816b30fc: // orphan
         if                       // likely
         a3 = 0 + 7               // arg4

    loc_0x816b3104: // orphan
         a3 += s0                 // arg4
         s0 = 0 + 0

    loc_0x816b310c: // orphan
         gp = s0 << 3
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         a1 = [0 + 0xfec]         // t9
         t2 = v1 & 8
         t2 <<= 9
         t0 = s3 & 0xfe           // t3
         t0 <<= 4
         t0 += t2
         t0 += 0x4000
         a1 += t0                 // arg2
         a0 = 0 + 0xf80           // signed int64_t arg3
         call fcn.84001668        // "0j" // fcn.84001668(0xf80)
         a2 = 0 + 0x1f
         t2 = v1 & 0x40
         t0 = t2 >> 5
         t0 -= 1                  // s2
         sp = t0 & 0xe
         s4 = t0 << 1             // hi
         t1 &= 4
         if                       // likely
         t2 >>= 2

    loc_0x816b3160: // orphan
         t2 = s3 & 1              // lo
         t2 <<= 4
         goto 0x84001380
         sp |= t2

    loc_0x816b316c: // orphan
         sp |= t2
         if                       // likely
         t7 = sp ^ 0x10

    loc_0x816b3178: // orphan
         goto 0x84001770
         t9 = 0 + 0x1370

    loc_0x816b3180: // orphan
         s0 = , unsigned  byte [v0 + 0xf1c] // s4
         sp = t7
         a3 = 0 + 7
         s0 -= 8
         if                       // unlikely
         gp = s0 << 3

    loc_0x816b3198: // orphan
         goto 0x84001770
         t9 = 0 + 0x1390

    loc_0x816b31a0: // orphan
         if                       // unlikely
         v0 += 4

    loc_0x816b31a8: // orphan
         a1 = [0 + 0xff8]
         a0 = 0 + 0x800           // int64_t arg3
         a2 = 0 + 0x1ff           // arg3
         t0 = a1 + 0x200          // arg2
         call fcn.84001664        // fcn.84001664(0x800)
         [0 + 0xff8] = t0
         t1 = , unsigned  byte [0 + 0xffc]
         t1 <<= 9
         mtc2 t1, a0, 0
         t0 = a0 + a2
         t0 += 1
         bbit0 t0, 0, 0x816bb3d4
         t0 -= 0x10

    loc_0x816b3344: // orphan
         bbit1 a0, 3, 0x816bb374
         t0 = t1 & 0xff00
         if                       // likely
         a0 = 0 + 0x140           // arg1

    loc_0x816b3354: // orphan
         a1 = [0 + 0xff0]         // t9
         s4 ^= t0
         t0 = s4 & 0xff00
         t0 >>= 2
         t0 += 0x29a0
         a1 += t0                 // arg2
         goto 0x840019a0
         t9 = 0 + 0x1564

    loc_0x816b3394: // orphan
         t5 = s2 + 0x140
         t9 = 0 + 0
         t8 = s2
         t4 = 0 + 1               // lo

    loc_0x816b33a4: // orphan
         t0 = , unsigned  byte [t9 + 0]
         t1 = , unsigned  byte [t9 + 1]
         t2 = , unsigned  byte [t9 + 2]
         t3 = , unsigned  byte [t9 + 3]
         t0 = , unsigned  halfword [t0 + 0x100]
         t1 = , unsigned  halfword [t1 + 0x100]
         t2 = , unsigned  halfword [t2 + 0x100]
         t3 = , unsigned  halfword [t3 + 0x100]
         halfword [t8 + 0x200] = t0
         t9 += 4
         halfword [t8 + 0x202] = t1
         t8 += 8
         halfword [t8 + 0x1fc] = t2
         halfword [t8 + 0x1fe] = t3
         if                       // likely
         t4 -= 1

    loc_0x816b33e4: // orphan
         if                       // unlikely
         a2 = 0xa00 << 16

    loc_0x816b33e8: // orphan
         if                       // unlikely
         a2 = 0xa00 << 16

    loc_0x816b33ec: // orphan
         a2 |= 0x102f             // arg3
         s0 = 0 + 1               // lo
         goto 0x840018c0
         t9 = 0 + 0x15ec

    loc_0x816b3430: // orphan
         t6 -= 1
         s0 = 0 + 2
         if                       // unlikely
         a3 -= 1                  // arg4 // hi

    loc_0x816b3440: // orphan
         t0 = 0 + 0
         goto 0x84001678
         ra = 0 + 0x1880

    loc_0x816b3454: // orphan
         [0 + 0xffc] = at
         call 0x84001678          // 0x84001678(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816b345c: // orphan
         mfc0 t0, a0, 0
         t0 &= 0x400
         if                       // likely
         t0 = 0 | 0x4000

    loc_0x816b346c: // orphan
         mtc0 t0, a0, 0
         break

    loc_0x816b34ec: // orphan
         if                       // likely
         t1 = s4 & 0x7fe          // t3

    loc_0x816b34f4: // orphan
         t1 ^= t7
         t1 += 0x200
         bbit0 t1, 2, 0x816b5500
         t0 = s4 & 0xb800
         mtc2 t0, at, 0
         mtc2 s6, a1, 0
         t0 = s4 & 0x4000
         if                       // likely
         bbit0 t8, 6, 0x816bf518

    loc_0x816b3578: // orphan
         goto fcn.840016a0        // fcn.840016a0(-1)
         ra = t9

    loc_0x816b36cc: // orphan
         a2 = 0 + 0xff            // arg3 // s4
         a1 = [0 + 0xff8]
         call fcn.84001664        // fcn.84001664(-1)
         // CODE XREF from fcn.816acf84 @ +0x131c
         a0 = 0 + 0x700
         a2 &= 0xff               // s4
         s1 = s2 - 0x60

    loc_0x816b36e4: // orphan
         t0 = , unsigned  byte [a0 + 0]
         t1 = , unsigned  byte [a0 + 1]
         t2 = , unsigned  byte [a0 + 2]
         t3 = , unsigned  byte [a0 + 3]
         t0 <<= 1
         t0 = , unsigned  halfword [t0 + 0x800]
         t1 <<= 1
         t1 = , unsigned  halfword [t1 + 0x800]
         t2 <<= 1
         t2 = , unsigned  halfword [t2 + 0x800]
         t3 <<= 1
         t3 = , unsigned  halfword [t3 + 0x800]
         s1 += 8
         halfword [s1 + 0x1f8] = t0
         a0 += 4
         halfword [s1 + 0x1fa] = t1
         a2 -= 4
         halfword [s1 + 0x1fc] = t2
         if                       // likely
         halfword [s1 + 0x1fe] = t3

    loc_0x816b3734: // orphan
         t0 = s0 & 1
         if                       // likely
         s0 -= 1

    loc_0x816b3740: // orphan
         s1 += 0x140
         goto 0x840018d4
         a2 = 0 + 0x2f

    loc_0x816b374c: // orphan
         a1 += 0x100
         if                       // unlikely
         [0 + 0xff8] = a1

    loc_0x816b3758: // orphan
         a1 = t4                  // t9
         a2 = s3 - 1
         call fcn.84001664        // fcn.84001664(-1)
         a0 = 0 + 0x480
         t4 += s3
         t0 = a0 + s3
         t1 = 0 + 0x200
         bbit0 a0, 0, 0x816bb778
         bbit0 t1, 1, 0x816bb77c
         a0 += 0x10
         t1 += 0x10

    loc_0x816b3794: // orphan
         a0 = 0 + 0x200
         a1 = [0 + 0xfe8]         // t9
         a2 = s3 - 1
         ra = t9
         a1 += v0
         goto fcn.840016a0        // fcn.840016a0(0x200)
         v0 += s3

    loc_0x816b3808: // orphan
         bbit1 t0, 3, 0x816bb80c
         goto t9
         

    loc_0x816b38e0: // orphan
         mfc0 k0, t4, 0
         bbit0 0, 0, 0x816bbad8
         bbit0 0, 1, 0x816bbae0
         bbit0 0, 2, 0x816bbae8
         bbit0 0, 3, 0x816bbaf0
         t0 = [0 + 0xfe0]
         t1 = [0 + 0xfec]         // t9
         t3 = [0 + 0xfc8]         // t9
         t4 = [0 + 0xff0]         // t9
         t2 = 0 | 0x6000
         at = 0 + 0
         a0 = 0 + 0

    loc_0x816b3910: // orphan
         t2 -= 1                  // t3

    loc_0x816b3914: // orphan
         a2 = t2 & 0xfff          // s4
         call 0x84001698          // "\r" // 0x84001698(-1, 0x442f71dcfe116408, 0xff, -1)
         a1 = t0
         call 0x840016d0          // 0x840016d0(-1, 0x442f71dcfe116408, 0xff, -1)
         a1 = t1
         t2 ^= a2
         a2 += 1
         t0 += a2
         if                       // unlikely
         t1 += a2

    loc_0x816b393c: // orphan
         a0 = 0 + 0xa00
         a2 = 0 + 0x53f
         call 0x84001698          // 0x84001698(0xa00, 0x442f71dcfe116408, 0x53f, -1)
         a1 = t4                  // t9
         a0 = 0 + 0
         a2 = 0 + 0xbf
         call 0x84001694          // 0x84001694(0x0, -1, 0xbf, -1)
         a1 = t3 + 0xb30
         t0 = 1 << 16
         mtc0 t0, a0, 0
         bbit1 0, 0, 0x816bbb58
         bbit1 0, 1, 0x816bbb60

    loc_0x816b396c: // orphan
         bbit1 0, 2, 0x816bbb68
         bbit1 0, 3, 0x816bbb70
         t1 += 8
         [0 + 0xfe0] = t1

    loc_0x816b3980: // orphan
         bbit0 a0, 0x1a, 0x816bb984
         bbit0 a0, 0x19, 0x816bb98c
         bbit0 a0, 0x18, 0x816bb994
         bbit0 a0, 0x1d, 0x816bb99c
         bbit0 a0, 0x1b, 0x816bb9a4
         bbit0 a0, 0x1c, 0x816bb9ac
         bbit0 a0, 0x16, 0x816bb9b4
         bbit0 a0, 0x15, 0x816bb9bc
         bbit0 a0, 0x13, 0x816bb9c4
         bbit0 a0, 0x12, 0x816bb9cc
         bbit0 a0, 0xf, 0x816bb9d4
         bbit0 a0, 0xe, 0x816bb9dc
         a3 = 0 + 0x13
         t1 = [0 + 0xfec]         // t9
         a0 = 0 + 0x200
         a2 = 0x1000 << 16
         a2 |= 0x11ff
         t0 = a3 & 3
         t2 = t0 << 1
         t2 += t0
         t2 <<= 9
         t1 += 0x1000
         call 0x84001698          // 0x84001698(0x200, 0x442f71dcfe116408, 0x100011ff, 0x13)
         a1 = t1 + t2
         a0 = 0 + 0x600
         t0 = 0 + 0x2a00
         t2 = t0 - t2
         a1 = t1 + t2
         goto 0x84001698
         ra = 0 + 0x116c

    loc_0x816b39f8: // orphan
         t1 = [0 + 0xfec]         // t9
         a0 = 0 + 0x200
         a2 = 0 + 0xff            // s4
         t0 = a3 & 3
         t2 = t0 << 1
         t2 += t0
         t2 <<= 9
         t1 += 0x1200
         call 0x84001698          // 0x84001698(0x200, 0x442f71dcfe116408, 0xff, -1)
         a1 = t1 + t2
         a0 = 0 + 0x400
         call 0x84001698          // 0x84001698(0x400, 0x1000023ff, 0xff, -1)
         a1 += 0x300

    loc_0x816b3a28: // orphan
         a1 += 0x300
         a0 = 0 + 0x600
         t0 = 0 + 0x2a00
         t2 = t0 - t2
         call 0x84001698          // 0x84001698(0x600, 0x442f71dcfe116708, 0x8, -1)
         a1 = t1 + t2
         a0 = 0 + 0x800
         call 0x84001698          // "\r" // 0x84001698(0x800, 0x10000290c, 0x8, -1)
         a1 += 0x300
         call fcn.840016a8
         
         s0 = , unsigned  byte [0 + 0xe79] // s4
         gp = 0 + 0x480
         v0 = a3 & 7
         v1 = v0 ^ 7
         sp = 0 - 1               // s2
         s1 = a3 & 0x10
         s1 |= 0x80

    loc_0x816b3a70: // orphan
         if                       // likely
         t0 = s0 & 7

    loc_0x816b3a78: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f1] // [0x9f1:1]=255 // 2545 // s4

    loc_0x816b3a7c: // orphan
         s0 = , unsigned  byte [gp + 0x9f1] // [0x9f1:1]=255 // 2545 // s4
         if                       // likely
         gp -= 8

    loc_0x816b3a88: // orphan
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t2 = , unsigned  byte [gp + 0xa01] // [0xa01:1]=255 // 2561 // s4
         t7 = t0 & 4
         t7 <<= 8
         t3 = t1 & 0x90
         if                       // likely
         t3 = t1 & 8              // a2

    loc_0x816b3aa4: // orphan
         t3 <<= 5

    loc_0x816b3aa8: // orphan
         t3 |= t2                 // s4
         t3 >>= 3
         t3 <<= 6
         if                       // unlikely
         sp = t3

    loc_0x816b3abc: // orphan
         a1 = [0 + 0xfec]         // t9
         a0 = 0 + 0xf80
         a2 = 0 + 0x3f
         call 0x84001694          // 0x84001694(0xf80, -1, 0x3f, -1)
         a1 += t3

    loc_0x816b3ad0: // orphan
         s2 = , unsigned  byte [gp + 0xa06] // [0xa06:1]=255 // 2566 // s4
         s3 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s5 = s2 >> 3
         s5 <<= 1
         s2 &= 7

    loc_0x816b3ae4: // orphan
         s2 ^= 7
         goto 0x840016e0
         t9 = 0 + 0x1190

    loc_0x816b3af0: // orphan
         s0 = , unsigned  byte [0 + 0xe7a] // s4
         gp = 0 + 0x480
         v0 = a3 & 7
         v1 = v0 ^ 7
         s1 = a3 & 0x10
         s1 |= 0xa0

    loc_0x816b3b08: // orphan
         if                       // likely
         t0 = s0 & 7

    loc_0x816b3b10: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f2] // [0x9f2:1]=255 // 2546 // s4

    loc_0x816b3b18: // orphan
         if                       // likely
         gp -= 8

    loc_0x816b3b1c: // orphan
         gp -= 8

    loc_0x816b3b20: // orphan
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t2 = , unsigned  byte [gp + 0xa02] // [0xa02:1]=255 // 2562 // s4
         t7 = t0 & 4
         t7 <<= 8
         t3 = t1 & 0xb0
         if                       // likely
         t3 = t1 & 0x40

    loc_0x816b3b3c: // orphan
         t3 <<= 2

    loc_0x816b3b40: // orphan
         t3 |= t2                 // s4
         t3 >>= 3
         t3 <<= 6
         if                       // unlikely
         sp = t3

    loc_0x816b3b54: // orphan
         a1 = [0 + 0xfec]         // t9
         a0 = 0 + 0xf80
         a2 = 0 + 0x3f
         call 0x84001694          // 0x84001694(0xf80, -1, 0x3f, -1)
         a1 += t3

    loc_0x816b3b68: // orphan
         s2 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s3 = 0 + 0xa7
         s6 = s2 - s3
         if                       // likely
         s5 = 0 + 0

    loc_0x816b3b84: // orphan
         if                       // unlikely
         t0 = a3 & 0x10

    loc_0x816b3b8c: // orphan
         if                       // likely
         a3 -= 0x10

    loc_0x816b3b94: // orphan
         goto 0x840010d4
         a3 += 0x1f

    loc_0x816b3b9c: // orphan
         v0 = 0 - 0x9c

    loc_0x816b3ba0: // orphan
         s0 = , unsigned  byte [v0 + 0xf1c] // s4
         s2 = , unsigned  byte [v0 + 0xf1d] // s4
         v1 = , unsigned  byte [v0 + 0xf1f] // s4
         s3 = , unsigned  byte [v0 + 0xf1e] // s4
         t0 = s0 - 1              // t3
         t0 = , unsigned  , t0 < 0x9f
         t1 = s2 - 1              // t3
         t1 = , unsigned  , t1 < 0xa7
         t0 &= t1
         if                       // likely
         s0 -= 0x10

    loc_0x816b3bcc: // orphan
         if                       // likely
         a3 = 0 + 7

    loc_0x816b3bd4: // orphan
         a3 += s0
         s0 = 0 + 0

    loc_0x816b3bdc: // orphan
         gp = s0 << 3
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         a1 = [0 + 0xfec]         // t9
         t2 = v1 & 8
         t2 <<= 9
         t0 = s3 & 0xfe           // t3
         t0 <<= 4
         t0 += t2
         t0 += 0x4000
         a1 += t0
         a0 = 0 + 0xf80
         call 0x84001698          // "0j" // 0x84001698(0xf80, 0x100004fdf, 0x8, -1)
         a2 = 0 + 0x1f
         t2 = v1 & 0x40
         t0 = t2 >> 5
         t0 -= 1                  // s2
         sp = t0 & 0xe
         s4 = t0 << 1             // hi
         t1 &= 4
         if                       // likely
         t2 >>= 2

    loc_0x816b3c70: // orphan
         if                       // unlikely
         v0 += 4

    loc_0x816b3c78: // orphan
         a1 = [0 + 0xff8]

    loc_0x816b3c7c: // orphan
         a0 = 0 + 0x800
         a2 = 0 + 0x1ff
         t0 = a1 + 0x200
         call 0x84001694          // 0x84001694(0x800, 0x442f71dcfe116408, 0x1ff, -1)
         [0 + 0xff8] = t0
         t1 = , unsigned  byte [0 + 0xffc]
         t1 <<= 9
         mtc2 t1, a0, 0
         t0 = a0 + a2
         t0 += 1
         bbit0 t0, 0, 0x816bbea4
         t0 -= 0x10

    loc_0x816b3df0: // orphan
         goto 0x840015b4
         t1 = , unsigned  halfword [gp + 0xe7c]

    loc_0x816b3e98: // orphan
         t9 = 0 + 0
         t8 = s2
         t4 = 0 + 1               // lo

    loc_0x816b3ea4: // orphan
         t0 = , unsigned  byte [t9 + 0]
         t1 = , unsigned  byte [t9 + 1]

    loc_0x816b3eac: // orphan
         t2 = , unsigned  byte [t9 + 2]
         t3 = , unsigned  byte [t9 + 3]
         t0 = , unsigned  halfword [t0 + 0x100]
         t1 = , unsigned  halfword [t1 + 0x100] // s4
         t2 = , unsigned  halfword [t2 + 0x100]
         t3 = , unsigned  halfword [t3 + 0x100]
         halfword [t8 + 0x200] = t0
         t9 += 4
         halfword [t8 + 0x202] = t1
         t8 += 8
         halfword [t8 + 0x1fc] = t2
         halfword [t8 + 0x1fe] = t3
         if                       // likely
         t4 -= 1

    loc_0x816b3ee4: // orphan
         if                       // unlikely
         a2 = 0xa00 << 16

    loc_0x816b3fa4: // orphan
         ret                      // ra
         

    loc_0x816b3fd8: // orphan
         call 0x84001694          // "&X" // 0x84001694(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 += t0
         t8 = s2 + 1
         s4 = , unsigned  halfword [s5 + 0xf80]
         s6 = s2 - s3
         if                       // unlikely
         t1 = s4 & 0x7fe

    loc_0x816b3ff4: // orphan
         t1 ^= t7
         t1 += 0x200
         bbit0 t1, 2, 0x816b6000
         t0 = s4 & 0xb800
         mtc2 t0, at, 0
         mtc2 s6, a1, 0
         t0 = s4 & 0x4000
         if                       // likely
         bbit0 t8, 6, 0x816c0018

    loc_0x816b4078: // orphan
         goto 0x840016d0
         ra = t9

    loc_0x816b4084: // orphan
         t0 = s0 << 2
         t0 += s0
         t0 <<= 5
         t1 = s2 & 0xf8
         t1 -= 8
         t0 += t1
         a1 += t0
         t0 = a3 << 3
         gp += t0
         t8 = t0 << 1
         a2 = 0x900 << 16
         t0 <<= 9
         a2 |= t0

    loc_0x816b40b8: // orphan
         a2 |= 0xf                // arg3
         call 0x84001694          // 0x84001694(-1, 0x442f71dcfe116408, 0xf, -1)
         a0 = 0 + 0

    loc_0x816b40c4: // orphan
         t2 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t0 = s2 & 7
         t0 += t8
         gp -= 8
         t2 &= 2
         if                       // unlikely
         a3 -= 1                  // hi

    loc_0x816b40e0: // orphan
         t1 = , unsigned  halfword [sp + 0xf80]
         t2 = v1 << 8
         bbit0 t0, 0, 0x816c00ec
         mtc2 t2, v1, 0
         t3 = v1 & 0x20           // k0
         mtc2 t1, v0, 0

    loc_0x816b4174: // orphan
         bbit1 t0, 1, 0x816c0178

    loc_0x816b4178: // orphan
         sp += s4
         if                       // unlikely
         t8 -= 0x10

    loc_0x816b4184: // orphan
         call fcn.840016cc
         ra = t9
         t9 = ra
         a0 = s3                  // t9
         a2 = s3 - 1
         a1 = [0 + 0xfe8]         // t9

    loc_0x816b419c: // orphan
         a0 -= 0x10
         if                       // likely
         bbit1 a0, 0x1f, 0x816bc228

    loc_0x816b41a8: // orphan
         a0 = 0 + 0x200
         a1 += v0

    loc_0x816b41b0: // orphan
         call 0x840016d0          // 0x840016d0(-1, 0x442f71dcfe116408, 0x8, -1)
         v0 += s3
         a1 += s3
         if                       // likely
         t0 -= 1

    loc_0x816b41c4: // orphan
         goto t9
         s0 = 0 + 0

    loc_0x816b41d0: // orphan
         a1 = [0 + 0xff8]
         call 0x84001694          // 0x84001694(-1, 0xfe116608, 0x8, -1)
         a0 = 0 + 0x700
         a2 &= 0xff
         s1 = s2 - 0x60

    loc_0x816b41e4: // orphan
         t0 = , unsigned  byte [a0 + 0]
         t1 = , unsigned  byte [a0 + 1]
         t2 = , unsigned  byte [a0 + 2]
         t3 = , unsigned  byte [a0 + 3]
         t0 <<= 1
         t0 = , unsigned  halfword [t0 + 0x800]
         t1 <<= 1
         t1 = , unsigned  halfword [t1 + 0x800]
         t2 <<= 1
         t2 = , unsigned  halfword [t2 + 0x800]
         t3 <<= 1
         t3 = , unsigned  halfword [t3 + 0x800]
         s1 += 8
         // CODE XREF from fcn.816ca94c @ +0x19f0
         halfword [s1 + 0x1f8] = t0
         a0 += 4
         halfword [s1 + 0x1fa] = t1
         a2 -= 4
         halfword [s1 + 0x1fc] = t2
         if                       // likely
         halfword [s1 + 0x1fe] = t3

    loc_0x816b4234: // orphan
         t0 = s0 & 1
         if                       // likely
         s0 -= 1

    loc_0x816b4240: // orphan
         s1 += 0x140
         goto 0x84001904
         a2 = 0 + 0x2f

    loc_0x816b424c: // orphan
         a1 += 0x100
         if                       // unlikely
         [0 + 0xff8] = a1

    loc_0x816b4258: // orphan
         a1 = t4                  // t9
         a2 = s3 - 1
         call 0x84001694          // 0x84001694(-1, -1, 0xfffffffe, -1)
         a0 = 0 + 0x480
         t4 += s3
         t0 = a0 + s3
         t1 = 0 + 0x200
         bbit0 a0, 0, 0x816bc278
         bbit0 t1, 1, 0x816bc27c
         a0 += 0x10
         t1 += 0x10

    loc_0x816b4294: // orphan
         a0 = 0 + 0x200
         a1 = [0 + 0xfe8]         // t9
         a2 = s3 - 1
         ra = t9
         a1 += v0
         goto 0x840016d0
         v0 += s3

    loc_0x816b430c: // orphan
         goto t9
         

    loc_0x816b4404: // orphan
         goto t9
         

    loc_0x816b4478: // orphan
         if                       // unlikely
         ll 0, 0x600, 0

    loc_0x816b4480: // orphan
         sd ra, -2, ra
         sd sp, -4, ra
         sd k1, -6, ra
         sd t9, -8, ra
                                  // s2
                                  // t0
                                  // v1
                                  // lo

    loc_0x816b44f0: // orphan
         t4 = [0 + 0xff0]         // t9
         t2 = 0 | 0x6000
         at = 0 + 0
         a0 = 0 + 0

    loc_0x816b4500: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4524
         t2 -= 1                  // t3

    loc_0x816b4504: // orphan
         a2 = t2 & 0xfff          // arg3 // s4
         call fcn.84001654        // "\r"
         a1 = t0
         call fcn.8400168c
         a1 = t1
         t2 ^= a2
         a2 += 1
         t0 += a2
         if                       // unlikely
         t1 += a2

    loc_0x816b452c: // orphan
         a0 = 0 + 0xa00
         a2 = 0 + 0x53f
         call fcn.84001654
         a1 = t4                  // t9
         a0 = 0 + 0
         a2 = 0 + 0xbf
         call fcn.84001650
         a1 = t3 + 0xa60
         t0 = 1 << 16
         mtc0 t0, a0, 0
         bbit1 0, 0, 0x816bc748
         bbit1 0, 1, 0x816bc750
         bbit1 0, 2, 0x816bc758
         bbit1 0, 3, 0x816bc760
         t1 += 8
         [0 + 0xfe0] = t1

    loc_0x816b457c: // orphan
         bbit0 a0, 0x1d, 0x816bc58c
         bbit0 a0, 0x1b, 0x816bc594
         bbit0 a0, 0x1c, 0x816bc59c
         bbit0 a0, 0x16, 0x816bc5a4
         bbit0 a0, 0x15, 0x816bc5ac
         bbit0 a0, 0x13, 0x816bc5b4
         bbit0 a0, 0x12, 0x816bc5bc
         bbit0 a0, 0xf, 0x816bc5c4
         bbit0 a0, 0xe, 0x816bc5cc
         a3 = 0 + 0x13
         t1 = [0 + 0xfec]         // t9
         a0 = 0 + 0x200
         a2 = 0x1000 << 16
         a2 |= 0x11ff
         t0 = a3 & 3
         t2 = t0 << 1
         t2 += t0
         t2 <<= 9
         t1 += 0x1000
         call fcn.84001654
         a1 = t1 + t2

    loc_0x816b45d0: // orphan
         a0 = 0 + 0x600           // arg1
         t0 = 0 + 0x2a00
         t2 = t0 - t2
         a1 = t1 + t2             // arg2
         goto fcn.84001654
         ra = 0 + 0x116c

    loc_0x816b45e8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b477c
         t1 = [0 + 0xfec]         // t9
         a0 = 0 + 0x200           // arg1
         a2 = 0 + 0xff            // arg3 // s4
         t0 = a3 & 3              // arg4
         t2 = t0 << 1
         t2 += t0
         t2 <<= 9
         t1 += 0x1200
         call fcn.84001654
         a1 = t1 + t2
         a0 = 0 + 0x400
         call fcn.84001654
         a1 += 0x300
         a0 = 0 + 0x600
         t0 = 0 + 0x2a00
         t2 = t0 - t2
         call fcn.84001654
         a1 = t1 + t2
         a0 = 0 + 0x800
         call fcn.84001654        // "\r"
         a1 += 0x300

    loc_0x816b4638: // orphan
         a1 += 0x300
         call fcn.84001664        // fcn.84001664(-1)
         
         s0 = , unsigned  byte [0 + 0xe79] // s4
         gp = 0 + 0x480
         v0 = a3 & 7
         v1 = v0 ^ 7
         sp = 0 - 1               // s2
         s1 = a3 & 0x10

    loc_0x816b465c: // orphan
         s1 |= 0x81
         // CODE XREFS from fcn.816b30c4 @ +0x15ac, +0x15c8
         if                       // likely
         t0 = s0 & 7

    loc_0x816b4668: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f1] // [0x9f1:1]=255 // 2545 // s4

    loc_0x816b46c4: // orphan
         s3 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s5 = s2 >> 3
         s5 <<= 1
         s2 &= 7
         s2 ^= 7
         goto fcn.8400169c        // fcn.8400169c(-1)
         t9 = 0 + 0x1190

    loc_0x816b46e0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4660
         s0 = , unsigned  byte [0 + 0xe7a] // s4
         gp = 0 + 0x480
         v0 = a3 & 7              // arg4
         v1 = v0 ^ 7
         s1 = a3 & 0x10           // arg4
         s1 |= 0xa1

    loc_0x816b46f8: // orphan
         // CODE XREFS from fcn.816b7e54 @ 0x816b4708, 0x816b4724, 0x816b4764
         if                       // likely
         t0 = s0 & 7

    loc_0x816b4700: // orphan
         if                       // unlikely
         s0 = , unsigned  byte [gp + 0x9f2] // [0x9f2:1]=255 // 2546 // s4

    loc_0x816b4708: // orphan
         if                       // likely
         // CODE XREF from fcn.816b7e54 @ 0x816b4700
         gp -= 8

    loc_0x816b470c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4700
         gp -= 8

    loc_0x816b4710: // orphan
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t2 = , unsigned  byte [gp + 0xa02] // [0xa02:1]=255 // 2562 // s4
         t7 = t0 & 4
         t7 <<= 8
         t3 = t1 & 0xb1
         if                       // likely
         t3 = t1 & 0x40

    loc_0x816b472c: // orphan
         t3 <<= 2
         t3 |= t2
         t3 >>= 3
         t3 <<= 6
         if                       // unlikely
         sp = t3

    loc_0x816b4744: // orphan
         a1 = [0 + 0xfec]         // t9
         a0 = 0 + 0xf80           // arg1
         a2 = 0 + 0x3f            // arg3
         call fcn.84001650
         a1 += t3

    loc_0x816b4758: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b473c
         s2 = , unsigned  byte [gp + 0xa03] // [0xa03:1]=255 // 2563 // s4
         s3 = 0 + 0xa7
         s6 = s2 - s3
         if                       // likely
         s5 = 0 + 0

    loc_0x816b476c: // orphan
         goto fcn.8400169c        // fcn.8400169c(-1)
         t9 = 0 + 0x1228

    loc_0x816b4774: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b46f8
         if                       // unlikely
         t0 = a3 & 0x10           // arg4

    loc_0x816b477c: // orphan
         if                       // likely
         a3 -= 0x10               // arg4

    loc_0x816b4784: // orphan
         goto 0x840010d4
         a3 += 0x1f               // arg4

    loc_0x816b478c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4774
         call fcn.84001664        // fcn.84001664(-1)

    loc_0x816b4790: // orphan
         t0 = , unsigned  byte [0 + 0xe7f] // s4
         t0 &= 3
         t0 <<= 1
         t1 = t0 << 8
         t0 |= t1
         mtc2 t0, 0, 0
         a1 = [0 + 0xfe0]
         t0 = , unsigned  byte [0 + 0xa00] // s4
         a0 = 0 + 0

    loc_0x816b47b4: // orphan
         a2 = 0 + 0x9f
         gp = 0 - 0x480

    loc_0x816b480c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816ae41c
         ra = 0 + 0x131c
         // CODE XREF from fcn.816b30c4 @ +0x172c
         v0 = 0 - 0x9c

    loc_0x816b4814: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b48d8
         s0 = , unsigned  byte [v0 + 0xf1c] // s4
         s2 = , unsigned  byte [v0 + 0xf1d] // s4
         v1 = , unsigned  byte [v0 + 0xf1f] // s4
         s3 = , unsigned  byte [v0 + 0xf1e] // s4
         t0 = s0 - 1              // t3
         t0 = , unsigned  , t0 < 0x9f
         t1 = s2 - 1              // t3

    loc_0x816b4830: // orphan
         t1 = , unsigned  , t1 < 0xa7 // lo
         t0 &= t1
         if                       // likely
         s0 -= 0x10

    loc_0x816b4840: // orphan
         if                       // likely
         a3 = 0 + 7               // arg4

    loc_0x816b4848: // orphan
         a3 += s0                 // arg4
         s0 = 0 + 0

    loc_0x816b4850: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4840
         gp = s0 << 3
         t1 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         a1 = [0 + 0xfec]         // t9
         t0 = s3 & 0xfe           // t3
         t0 <<= 4
         t0 += 0x4000
         a1 += t0                 // arg2
         a0 = 0 + 0xf80           // arg1
         call fcn.84001654        // "0j"
         a2 = 0 + 0x1f
         t2 = v1 & 0x40
         t0 = t2 >> 5
         t0 -= 1                  // s2
         sp = t0 & 0xe
         s4 = t0 << 1             // hi
         t1 &= 4
         if                       // likely
         t2 >>= 2

    loc_0x816b48d8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4838
         // CODE XREF from fcn.816b30c4 @ +0x1804
         if                       // unlikely
         v0 += 4

    loc_0x816b48e0: // orphan
         a1 = [0 + 0xff8]
         a0 = 0 + 0x800           // arg1
         a2 = 0 + 0x1ff           // arg3
         t0 = a1 + 0x200          // arg2
         call fcn.84001650
         [0 + 0xff8] = t0
         t1 = , unsigned  byte [0 + 0xffc]
         t1 <<= 9
         mtc2 t1, a0, 0
         t0 = a0 + a2
         t0 += 1
         // CODE XREF from fcn.816b30c4 @ +0x1880
         bbit0 t0, 0, 0x816bcb0c
         t0 -= 0x10

    loc_0x816b49a8: // orphan
         gp = 0 - 0x478
         t1 = , unsigned  byte [0 + 0xffd]
         t2 = t1 << 2
         mtc2 t2, s0, 0
         t2 = t1 << 5

    loc_0x816b4a94: // orphan
         t9 = 0 + 0x15c8
         t0 = gp & 0x38
         if                       // unlikely
         t7 -= 5

    loc_0x816b4ae8: // orphan
         a3 -= 1                  // hi
         t0 = 0 + 0
         goto fcn.84001664        // fcn.84001664(-1)
         ra = 0 + 0x18b0

    loc_0x816b4c90: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4d6c
         t2 = , unsigned  byte [gp + 0xa00] // [0xa00:1]=255 // 2560 // s4
         t0 = s2 & 7
         t0 += t8
         gp -= 8
         t2 &= 2
         if                       // unlikely
         a3 -= 1                  // hi

    loc_0x816b4cac: // orphan
         t1 = , unsigned  halfword [sp + 0xf80]
         t4 = , unsigned  halfword [gp + 0xa0c]
         t2 = v1 << 8
         bbit0 t0, 0, 0x816c0cbc
         mtc2 t2, v1, 0
         t3 = v1 & 0x20           // k0
         t2 = v1 & 0x10
         if                       // unlikely
         mtc2 t1, v0, 0

    loc_0x816b4cd0: // orphan
         t4 >>= 8

    loc_0x816b4cd4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4cc8
         t1 = t4 & 0xc
         t1 <<= 7
         mtc2 t1, s1, 0
         t2 = t4 & 0x30
         t2 <<= 5

    loc_0x816b4d68: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4ca4
         sp += s4
         if                       // unlikely
         t8 -= 0x10

    loc_0x816b4d74: // orphan
         call 0x84001688          // 0x84001688(-1, 0x442f71dcfe116408, 0x8, -1)
         ra = t9
         t9 = ra
         a0 = s3                  // t9
         a2 = s3 - 1
         a1 = [0 + 0xfe8]         // t9

    loc_0x816b4d8c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4d90
         a0 -= 0x10
         if                       // likely
         bbit1 a0, 0x1f, 0x816bce18

    loc_0x816b4d98: // orphan
         a0 = 0 + 0x200
         a1 += v0

    loc_0x816b4da0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b4dac
         call fcn.8400168c
         v0 += s3
         a1 += s3
         if                       // likely
         t0 -= 1

    loc_0x816b4db4: // orphan
         goto t9
         // CODE XREF from fcn.816b30c4 @ +0x18dc
         s0 = 0 + 0

    loc_0x816b4e9c: // orphan
         v0 += s3
         call fcn.84001650
         t0 = a0 + a2
         t0 += 1
         // CODE XREF from fcn.816b4bd4 @ +0x320
         bbit0 t0, 0, 0x816bd0ac
         t0 -= 0x10

    loc_0x816b5048: // orphan
         s0 = byte [t2 + 0x1ebc]  // s4
         s0 = byte [t2 + 0x1e38]  // s4
         s0 = byte [t2 + 0x1e44]  // s4
         s0 = byte [t2 + 0x1e50]  // s4
         s0 = byte [t2 + 0x1e5c]  // s4
         s0 = byte [t2 + 0x1e68]  // s4
         s0 = byte [t2 + 0x1e74]  // s4
         s0 = byte [t2 + 0x1e80]  // s4
         s0 = byte [t2 + 0x1e8c]  // s4
         s0 = byte [t2 + 0x1e98]  // s4
         s0 = byte [t2 + 0x1ea4]  // s4
         s0 = byte [t2 + 0x1eb0]  // s4
         s0 = byte [t2 + 0x1fb0]  // s4
         s0 = byte [t2 + 0x1f2c]  // s4
         s0 = byte [t2 + 0x1f38]  // s4
         s0 = byte [t2 + 0x1f44]  // s4
         s0 = byte [t2 + 0x1f50]  // s4
         s0 = byte [t2 + 0x1f5c]  // s4
         s0 = byte [t2 + 0x1f68]  // s4
         s0 = byte [t2 + 0x1f74]  // s4
         s0 = byte [t2 + 0x1f80]  // s4
         s0 = byte [t2 + 0x1f8c]  // s4
         s0 = byte [t2 + 0x1f98]  // s4
         s0 = byte [t2 + 0x1fa4]  // s4
         s0 = byte [t2 + 0x380c]  // s4
         s0 = byte [t2 + 0x3838]  // s4
         s0 = byte [t2 + 0x3868]  // s4
         s0 = byte [t2 + 0x3894]  // s4
         s0 = byte [t2 + 0x38c0]  // s4
         s0 = byte [t2 + 0x38f0]  // s4
         s0 = byte [t2 + 0x3920]  // s4
         s0 = byte [t2 + 0x4c48]  // s4
         s0 = byte [t2 + 0x4d18]  // s4
         s0 = byte [t2 + 0x4d88]  // s4
         s0 = byte [t2 + 0x4de0]  // s4
         s0 = byte [t2 + 0x4de0]  // s4
         s0 = byte [t2 + 0x4e9c]  // s4
         s0 = byte [t2 + 0x4ec4]  // s4
         s0 = byte [t2 + 0x516c]  // s4
         s0 = byte [t2 + 0x51a8]  // s4
         s0 = byte [t2 + 0x54a0]  // s4
         s0 = byte [t2 + 0x5024]  // s4
         s0 = byte [t2 + 0x516c]  // s4
         s0 = byte [t2 + 0x5324]  // s4
         s0 = byte [t2 + 0x54a0]  // s4
         s0 = byte [t2 + 0x54d8]  // s4
         s0 = byte [t2 + 0x5508]  // s4
         s0 = byte [t2 + 0x5534]  // s4
         s0 = byte [t2 + 0x4cd0]  // s4
         s0 = byte [t2 + 0x579c]  // s4
         s0 = byte [t2 + 0x57e0]  // s4
         s0 = byte [t2 + 0x5824]  // s4
         s0 = byte [t2 + 0x580c]  // s4
         s0 = byte [t2 + 0x580c]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x5920]  // s4
         s0 = byte [t2 + 0x579c]  // s4
         s0 = byte [t2 + 0x59c0]  // s4
         s0 = byte [t2 + 0x59e4]  // s4
         s0 = byte [t2 + 0x5a08]  // s4
         s0 = byte [t2 + 0x5a2c]  // s4
         s0 = byte [t2 + 0x5a78]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5a68]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x5b2c]  // s4
         s0 = byte [t2 + 0x59c0]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5b50]  // s4
         s0 = byte [t2 + 0x5e0c]  // s4
         // CODE XREF from fcn.816d505c @ +0x150
         s0 = byte [t2 + 0x5dd4]  // s4
         s0 = byte [t2 + 0x5dd4]  // s4
         s0 = byte [t2 + 0x5dd4]  // s4
         s0 = byte [t2 + 0x5e28]  // s4
         s0 = byte [t2 + 0x5df0]  // s4
         s0 = byte [t2 + 0x5df0]  // s4
         s0 = byte [t2 + 0x5df0]  // s4
         s0 = byte [t2 + 0x5ebc]  // s4
         s0 = byte [t2 + 0x5ec4]  // s4
         s0 = byte [t2 + 0x5ecc]  // s4
         s0 = byte [t2 + 0x5ed4]  // s4
         s0 = byte [t2 + 0x5edc]  // s4
         s0 = byte [t2 + 0x5f78]  // s4
         s0 = byte [t2 + 0x5f80]  // s4
         s0 = byte [t2 + 0x5f88]  // s4
         s0 = byte [t2 + 0x5f90]  // s4
         s0 = byte [t2 + 0x5f98]  // s4
         s0 = byte [t2 + 0x6014]  // s4
         s0 = byte [t2 + 0x6014]  // s4
         s0 = byte [t2 + 0x6014]  // s4
         s0 = byte [t2 + 0x6014]  // s4
         s0 = byte [t2 + 0x6034]  // s4
         s0 = byte [t2 + 0x6034]  // s4
         s0 = byte [t2 + 0x6034]  // s4
         s0 = byte [t2 + 0x6034]  // s4
         s0 = byte [t2 + 0x6eac]  // s4
         s0 = byte [t2 + 0x6dfc]  // s4
         s0 = byte [t2 + 0x7500]  // s4
         s0 = byte [t2 + 0x7628]  // s4
         s0 = byte [t2 + 0x7988]  // s4
         s0 = byte [t2 + 0x7ba0]  // s4
         s0 = byte [t2 + 0x7f60]  // s4

    loc_0x816b5264: // orphan
         s0 = byte [t2 - 0x6b78]  // s4
         s0 = byte [t2 - 0x6b64]  // s4
         s0 = byte [t2 - 0x6b50]  // s4
         s0 = byte [t2 - 0x6b3c]  // s4
         
         
         

    loc_0x816b52dc: // orphan
         beql k1, t7, 0x816d2898  // unlikely
         daddiu 0, at, 0x3078

    loc_0x816b52e4: // orphan
         s3 = s1 & 0x2020
         bnel s3, t7, 0x816d036c  // likely
         a0 = t3 + 0x2028

    loc_0x816b52f0: // orphan
         beql s3, a1, 0x816d2088  // unlikely
         jalx fcn.80810dbc

    loc_0x816b52f8: // orphan
         jalx 0x85b9d194          // 0x85b9d194(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816b54e8: // orphan
         s0 = byte [t2 - 0x5c4]   // s4
         

    loc_0x816b5624: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5630: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b563c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5648: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5654: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5660: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b566c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5684: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b57e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b57ec: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b550c
         if                       // unlikely

    loc_0x816b57f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5810: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b581c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5828: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5834: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5a7c: // orphan
         if                       // fcn.816b5508+0xe2d8 // unlikely
         if                       // unlikely

    loc_0x816b5a88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5a94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5aa0: // orphan
         if                       // fcn.816b5508+0xe6fc // unlikely
         if                       // unlikely

    loc_0x816b5aac: // orphan
         if                       // fcn.816b5508+0xe928 // unlikely
         if                       // unlikely

    loc_0x816b5ab8: // orphan
         if                       // fcn.816b5508+0xeae4 // unlikely
         if                       // unlikely

    loc_0x816b5ac4: // orphan
         if                       // fcn.816b5508+0xeb60 // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5524
         if                       // unlikely

    loc_0x816b5ad0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5adc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5ae8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5af4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b3c: // orphan
         if                       // fcn.816b5508+0xf638 // unlikely
         if                       // unlikely

    loc_0x816b5b48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5b9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5ba8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5bb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5bc0: // orphan
         if                       // fcn.816b5508+0x108dc // unlikely
         if                       // unlikely

    loc_0x816b5bcc: // orphan
         // CODE XREF from fcn.816acf84 @ +0x1450
         if                       // fcn.816b5508+0x10948 // unlikely
         if                       // unlikely

    loc_0x816b5bd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5be4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5bf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5bfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5c8c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816d3eec @ +0x1ec
         if                       // unlikely

    loc_0x816b5c98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5ca4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5ce0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5cf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b5d58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b61f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6204: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6210: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b621c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6234: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6240: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b624c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6258: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6264: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6270: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b627c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6288: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6294: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b62f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6300: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b630c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6318: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6324: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6330: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b553c
         if                       // unlikely
         if                       // unlikely

    loc_0x816b633c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6348: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6354: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6360: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b636c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6378: // orphan
         if                       // unlikely
         if                       // fcn.816cec60 // unlikely

    loc_0x816b6384: // orphan
         // CODE XREF from fcn.816b5508 @ +0x38
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6390: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b639c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63c0: // orphan
         if                       // fcn.816b5508+0x1a92c // unlikely
         if                       // unlikely

    loc_0x816b63cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63e4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816acf84 @ +0xf50
         // CODE XREF from fcn.816b5508 @ 0x816b5544
         if                       // unlikely

    loc_0x816b63f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b63fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6408: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6414: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6420: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b642c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6438: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6444: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6450: // orphan
         if                       // fcn.816b5508+0x1bfac // unlikely
         if                       // unlikely

    loc_0x816b645c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ +0x44
         if                       // unlikely

    loc_0x816b6468: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b646c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6478: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6484: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6490: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b649c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b64fc: // orphan
         if                       // unlikely
         if                       // fcn.816d2fa4 // unlikely

    loc_0x816b6500: // orphan
         if                       // unlikely
         if                       // fcn.816d2fa4 // unlikely

    loc_0x816b6508: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b650c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6514: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6518: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6520: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b652c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6530: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6538: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b653c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6544: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6548: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6550: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6554: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b655c: // orphan
         if                       // fcn.816b5508+0x1dfc8 // unlikely
         if                       // unlikely

    loc_0x816b6560: // orphan
         if                       // fcn.816b5508+0x1dfc8 // unlikely
         if                       // unlikely

    loc_0x816b6568: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b656c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6574: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6578: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6580: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6584: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b658c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6590: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6598: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b659c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b65fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6604: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6608: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6610: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6614: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b661c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6620: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6628: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b662c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6634: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6638: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6640: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6644: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b664c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6650: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6658: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b665c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6664: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6668: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6670: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6674: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b667c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6680: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6688: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b668c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6694: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6698: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b66f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6700: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6704: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b670c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6710: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6718: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b671c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6728: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6734: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6740: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b674c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6758: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6764: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b676c: // orphan
         if                       // unlikely

    loc_0x816b6770: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6778: // orphan
         if                       // unlikely

    loc_0x816b677c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6784: // orphan
         if                       // unlikely

    loc_0x816b6788: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6790: // orphan
         if                       // unlikely

    loc_0x816b6794: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b679c: // orphan
         if                       // unlikely

    loc_0x816b67a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67a8: // orphan
         if                       // unlikely

    loc_0x816b67ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67b4: // orphan
         if                       // unlikely

    loc_0x816b67b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67c0: // orphan
         if                       // unlikely

    loc_0x816b67c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67cc: // orphan
         if                       // unlikely

    loc_0x816b67d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67d8: // orphan
         if                       // unlikely

    loc_0x816b67dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67e4: // orphan
         if                       // unlikely

    loc_0x816b67e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67f0: // orphan
         if                       // unlikely

    loc_0x816b67f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b67fc: // orphan
         if                       // unlikely

    loc_0x816b6800: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6808: // orphan
         if                       // unlikely

    loc_0x816b680c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6810: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6814: // orphan
         if                       // unlikely

    loc_0x816b6818: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b681c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6820: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6828: // orphan
         if                       // unlikely

    loc_0x816b682c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6834: // orphan
         if                       // unlikely

    loc_0x816b6838: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b683c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6840: // orphan
         if                       // unlikely

    loc_0x816b6844: // orphan
         if                       // unlikely
         if                       // fcn.81696868-0x1c // unlikely

    loc_0x816b6848: // orphan
         if                       // unlikely
         if                       // fcn.81696868-0x1c // unlikely

    loc_0x816b684c: // orphan
         if                       // fcn.81696868-0x8 // unlikely

    loc_0x816b6850: // orphan
         if                       // fcn.81696868+0xc // unlikely
         if                       // fcn.81696868+0x20 // unlikely

    loc_0x816b6854: // orphan
         if                       // fcn.81696868+0xc // unlikely
         if                       // fcn.81696868+0x20 // unlikely

    loc_0x816b6858: // orphan
         if                       // unlikely

    loc_0x816b685c: // orphan
         if                       // unlikely
         if                       // fcn.81696868+0x3c // unlikely

    loc_0x816b6860: // orphan
         if                       // unlikely
         if                       // fcn.81696868+0x3c // unlikely

    loc_0x816b6864: // orphan
         if                       // unlikely

    loc_0x816b6868: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b686c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6870: // orphan
         if                       // unlikely

    loc_0x816b6874: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b5550
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6878: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b5550
         if                       // unlikely
         if                       // unlikely

    loc_0x816b687c: // orphan
         if                       // unlikely

    loc_0x816b6880: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6884: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6888: // orphan
         if                       // unlikely

    loc_0x816b688c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6890: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6894: // orphan
         if                       // unlikely

    loc_0x816b6898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b689c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68a0: // orphan
         if                       // unlikely

    loc_0x816b68a4: // orphan
         if                       // unlikely
         if                       // fcn.81696eec+0x50 // unlikely

    loc_0x816b68a8: // orphan
         if                       // unlikely
         if                       // fcn.81696eec+0x50 // unlikely

    loc_0x816b68ac: // orphan
         if                       // unlikely

    loc_0x816b68b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68b8: // orphan
         if                       // unlikely

    loc_0x816b68bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68c4: // orphan
         if                       // unlikely

    loc_0x816b68c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68d0: // orphan
         if                       // unlikely

    loc_0x816b68d4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5554
         if                       // unlikely

    loc_0x816b68d8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5554
         if                       // unlikely

    loc_0x816b68dc: // orphan
         if                       // unlikely

    loc_0x816b68e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68e8: // orphan
         if                       // unlikely

    loc_0x816b68ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b68f4: // orphan
         if                       // unlikely

    loc_0x816b68f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ +0x50
         if                       // unlikely

    loc_0x816b68fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ +0x50
         if                       // unlikely

    loc_0x816b6900: // orphan
         if                       // unlikely

    loc_0x816b6904: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6908: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b690c: // orphan
         if                       // unlikely

    loc_0x816b6910: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6914: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6918: // orphan
         if                       // unlikely

    loc_0x816b691c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6920: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6924: // orphan
         if                       // unlikely

    loc_0x816b6928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b692c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6930: // orphan
         if                       // unlikely

    loc_0x816b6934: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6938: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b693c: // orphan
         if                       // unlikely

    loc_0x816b6940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6948: // orphan
         if                       // unlikely

    loc_0x816b694c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6954: // orphan
         if                       // unlikely

    loc_0x816b6958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6960: // orphan
         if                       // unlikely

    loc_0x816b6964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b696c: // orphan
         if                       // unlikely

    loc_0x816b6970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6978: // orphan
         if                       // unlikely

    loc_0x816b697c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b555c
         if                       // unlikely

    loc_0x816b6984: // orphan
         if                       // unlikely

    loc_0x816b6988: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6990: // orphan
         if                       // unlikely

    loc_0x816b6994: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b699c: // orphan
         if                       // unlikely

    loc_0x816b69a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69a8: // orphan
         if                       // unlikely

    loc_0x816b69ac: // orphan
         // CODE XREF from fcn.816d456c @ +0x74
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69b4: // orphan
         if                       // unlikely

    loc_0x816b69b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69c0: // orphan
         if                       // unlikely

    loc_0x816b69c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69cc: // orphan
         if                       // unlikely

    loc_0x816b69d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69d8: // orphan
         if                       // unlikely

    loc_0x816b69dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69e4: // orphan
         if                       // unlikely

    loc_0x816b69e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b69fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a28: // orphan
         if                       // unlikely

    loc_0x816b6a2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a34: // orphan
         if                       // unlikely

    loc_0x816b6a38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a40: // orphan
         if                       // unlikely

    loc_0x816b6a44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a4c: // orphan
         if                       // unlikely

    loc_0x816b6a50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a58: // orphan
         if                       // unlikely

    loc_0x816b6a5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a64: // orphan
         if                       // unlikely

    loc_0x816b6a68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6a70: // orphan
         if                       // unlikely

    loc_0x816b6a74: // orphan
         if                       // unlikely
         if                       // fcn.81698ec4+0x38 // unlikely

    loc_0x816b6a7c: // orphan
         if                       // fcn.81698ec4+0x4c // unlikely

    loc_0x816b6a80: // orphan
         if                       // fcn.81698ec4+0x70 // unlikely
         if                       // fcn.81698ec4+0x84 // unlikely

    loc_0x816b6a88: // orphan
         if                       // fcn.81698ec4+0xb8 // unlikely

    loc_0x816b6a8c: // orphan
         if                       // fcn.81698ec4+0xcc // unlikely
         if                       // fcn.81698ec4+0xf0 // unlikely

    loc_0x816b6a94: // orphan
         if                       // fcn.81698ec4+0x104 // unlikely

    loc_0x816b6a98: // orphan
         if                       // fcn.81698ec4+0x118 // unlikely
         if                       // fcn.81698ec4+0x15c // unlikely

    loc_0x816b6aa0: // orphan
         if                       // fcn.81698ec4+0x1a0 // unlikely
         if                       // fcn.81698ec4+0x1b4 // unlikely

    loc_0x816b6aac: // orphan
         if                       // unlikely

    loc_0x816b6ab0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ab8: // orphan
         if                       // unlikely

    loc_0x816b6abc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ac4: // orphan
         if                       // unlikely

    loc_0x816b6ac8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ad0: // orphan
         if                       // unlikely

    loc_0x816b6ad4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6adc: // orphan
         if                       // unlikely

    loc_0x816b6ae0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ae8: // orphan
         if                       // unlikely

    loc_0x816b6aec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6af4: // orphan
         if                       // unlikely

    loc_0x816b6af8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b00: // orphan
         if                       // unlikely

    loc_0x816b6b04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b0c: // orphan
         if                       // unlikely

    loc_0x816b6b10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b18: // orphan
         if                       // unlikely

    loc_0x816b6b1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b24: // orphan
         if                       // unlikely

    loc_0x816b6b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b7c: // orphan
         if                       // unlikely
         if                       // fcn.8169a1b4 // unlikely

    loc_0x816b6b80: // orphan
         if                       // unlikely
         if                       // fcn.8169a1b4 // unlikely

    loc_0x816b6b84: // orphan
         if                       // fcn.8169a1b4 // unlikely
         if                       // unlikely

    loc_0x816b6b88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6b9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ba0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ba4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ba8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6be0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6be4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6be8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6bfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6c9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ca4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ccc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cd4: // orphan
         if                       // unlikely
         if                       // fcn.8169c350-0x418 // unlikely

    loc_0x816b6cd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ce0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ce4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ce8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6cfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d3c: // orphan
         // CODE XREF from fcn.816c4440 @ +0x530
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d40: // orphan
         // CODE XREF from fcn.816c4440 @ +0x530
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6d98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6da0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5560
         if                       // unlikely

    loc_0x816b6da4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5560
         if                       // unlikely

    loc_0x816b6dac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6db0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6db8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6de0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6de4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6df0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6df8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6dfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6e94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ea0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6eac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6eb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ec4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ed0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6edc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ef4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6f48: // orphan
         // CODE XREF from fcn.816b4bd4 @ +0x370
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6fc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6fcc: // orphan
         if                       // fcn.816b5508-0x14128 // unlikely
         if                       // unlikely

    loc_0x816b6fd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6fe4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ff0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b6ffc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7008: // orphan
         if                       // unlikely
         if                       // fcn.816a2a90 // unlikely

    loc_0x816b7014: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7020: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b702c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7038: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7040: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7044: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b704c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7050: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7054: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7058: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b705c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7060: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7064: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7068: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b706c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7070: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7074: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7078: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b707c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7080: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7084: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7088: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b708c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7090: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7094: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7098: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b709c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70f4: // orphan
         // CODE XREF from fcn.816b5508 @ +0x68
         if                       // unlikely
         if                       // unlikely

    loc_0x816b70f8: // orphan
         // CODE XREF from fcn.816b5508 @ +0x68
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7100: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7104: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7108: // orphan
         if                       // unlikely
         if                       // fcn.816a560c // unlikely

    loc_0x816b710c: // orphan
         if                       // fcn.816a560c+0x34 // unlikely
         if                       // fcn.816a560c+0x68 // unlikely

    loc_0x816b7110: // orphan
         if                       // fcn.816a560c+0x34 // unlikely
         if                       // fcn.816a560c+0x68 // unlikely

    loc_0x816b7114: // orphan
         if                       // fcn.816a560c+0x68 // unlikely
         if                       // fcn.816a560c+0x8c // unlikely

    loc_0x816b7118: // orphan
         if                       // fcn.816a560c+0xc0 // unlikely
         if                       // unlikely

    loc_0x816b711c: // orphan
         if                       // fcn.816a560c+0xc0 // unlikely
         if                       // unlikely

    loc_0x816b7120: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7124: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7128: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b712c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7130: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7134: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b713c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7140: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7144: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7148: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b714c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7150: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7154: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7158: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b715c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7160: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7164: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7168: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b716c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7170: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7174: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7178: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b717c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7180: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7184: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7188: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b718c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7190: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7194: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7198: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b719c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71c8: // orphan
         if                       // unlikely

    loc_0x816b71cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b71d4: // orphan
         if                       // unlikely

    loc_0x816b71e0: // orphan
         if                       // unlikely

    loc_0x816b71ec: // orphan
         if                       // unlikely

    loc_0x816b71f8: // orphan
         if                       // unlikely

    loc_0x816b7204: // orphan
         if                       // unlikely

    loc_0x816b7210: // orphan
         if                       // unlikely

    loc_0x816b721c: // orphan
         if                       // unlikely

    loc_0x816b7228: // orphan
         if                       // unlikely

    loc_0x816b7234: // orphan
         if                       // unlikely

    loc_0x816b7240: // orphan
         if                       // unlikely

    loc_0x816b724c: // orphan
         if                       // unlikely

    loc_0x816b7258: // orphan
         if                       // unlikely

    loc_0x816b7264: // orphan
         if                       // unlikely

    loc_0x816b7270: // orphan
         if                       // unlikely

    loc_0x816b727c: // orphan
         if                       // unlikely

    loc_0x816b7288: // orphan
         if                       // unlikely

    loc_0x816b7294: // orphan
         if                       // unlikely

    loc_0x816b72a0: // orphan
         if                       // unlikely

    loc_0x816b72ac: // orphan
         if                       // unlikely

    loc_0x816b72b8: // orphan
         if                       // unlikely

    loc_0x816b72c4: // orphan
         if                       // unlikely

    loc_0x816b72d0: // orphan
         if                       // unlikely

    loc_0x816b72dc: // orphan
         if                       // unlikely

    loc_0x816b72e8: // orphan
         if                       // unlikely

    loc_0x816b7554: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7560: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b756c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7578: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7584: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7590: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b759c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75c8: // orphan
         if                       // unlikely

    loc_0x816b75cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75d4: // orphan
         if                       // unlikely

    loc_0x816b75d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75e0: // orphan
         if                       // unlikely

    loc_0x816b75e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75ec: // orphan
         if                       // unlikely

    loc_0x816b75f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b75f8: // orphan
         if                       // unlikely

    loc_0x816b75fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7604: // orphan
         if                       // unlikely

    loc_0x816b7608: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7610: // orphan
         if                       // unlikely

    loc_0x816b7614: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b761c: // orphan
         if                       // fcn.816a9df0 // unlikely

    loc_0x816b7620: // orphan
         if                       // fcn.816a9df0+0x24 // unlikely
         if                       // unlikely

    loc_0x816b7628: // orphan
         if                       // unlikely

    loc_0x816b762c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7634: // orphan
         if                       // unlikely

    loc_0x816b7638: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7640: // orphan
         if                       // unlikely

    loc_0x816b7644: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b764c: // orphan
         if                       // unlikely

    loc_0x816b7650: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7658: // orphan
         if                       // unlikely

    loc_0x816b765c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7664: // orphan
         if                       // unlikely

    loc_0x816b7668: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7670: // orphan
         if                       // unlikely

    loc_0x816b7674: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b767c: // orphan
         if                       // unlikely

    loc_0x816b7680: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7688: // orphan
         if                       // unlikely

    loc_0x816b768c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7694: // orphan
         if                       // unlikely

    loc_0x816b7698: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76a0: // orphan
         if                       // unlikely

    loc_0x816b76a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76ac: // orphan
         if                       // unlikely

    loc_0x816b76b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76b8: // orphan
         if                       // unlikely

    loc_0x816b76bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76c4: // orphan
         if                       // unlikely

    loc_0x816b76c8: // orphan
         if                       // fcn.816aa96c // unlikely
         if                       // unlikely

    loc_0x816b76d0: // orphan
         if                       // unlikely

    loc_0x816b76d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76dc: // orphan
         if                       // unlikely

    loc_0x816b76e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76e8: // orphan
         if                       // unlikely

    loc_0x816b76ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76f4: // orphan
         if                       // unlikely

    loc_0x816b76f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b76fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7700: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7704: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7708: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b770c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7710: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816ca94c @ +0x22e8
         if                       // unlikely

    loc_0x816b7714: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816ca94c @ +0x22e8
         if                       // unlikely

    loc_0x816b7718: // orphan
         // CODE XREF from fcn.816ca94c @ +0x22e8
         if                       // unlikely
         if                       // unlikely

    loc_0x816b771c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7720: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7724: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7728: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b772c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7730: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7738: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b773c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7744: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7748: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7750: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7754: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b775c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7760: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7768: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b776c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7774: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7778: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7780: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b778c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7798: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b779c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77c8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5578
         if                       // unlikely

    loc_0x816b77cc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5578
         if                       // unlikely

    loc_0x816b77d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b77f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7810: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b781c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7828: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7834: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7840: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b784c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7858: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7864: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7870: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7874: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b787c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7880: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7888: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b788c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7894: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78a0: // orphan
         if                       // fcn.816b7890-0xbd6c // unlikely
         if                       // unlikely

    loc_0x816b78a4: // orphan
         if                       // fcn.816b7890-0xbd6c // unlikely
         if                       // unlikely

    loc_0x816b78ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78dc: // orphan
         if                       // fcn.816b7890-0xbb50 // unlikely

    loc_0x816b78e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78e8: // orphan
         if                       // unlikely

    loc_0x816b78ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b78fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7900: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7904: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7908: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b790c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7910: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7914: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7918: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b791c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7920: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7924: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b792c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7930: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7934: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7938: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b793c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7948: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b794c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7950: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7954: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7958: // orphan
         if                       // unlikely
         if                       // fcn.816b71d8-0xae88 // unlikely

    loc_0x816b795c: // orphan
         if                       // unlikely
         if                       // fcn.816b71d8-0xae88 // unlikely

    loc_0x816b7960: // orphan
         if                       // fcn.816b71d8-0xae88 // unlikely
         if                       // unlikely

    loc_0x816b7964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7968: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b796c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7974: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7978: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b797c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7980: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7984: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7988: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b798c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7990: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ +0x74
         if                       // unlikely

    loc_0x816b7994: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7998: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b799c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b79fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a40: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5580
         if                       // unlikely

    loc_0x816b7a44: // orphan
         if                       // unlikely
         // CODE XREF from fcn.816b5508 @ 0x816b5580
         if                       // unlikely

    loc_0x816b7a4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7a88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bcc: // orphan
         if                       // unlikely

    loc_0x816b7bd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bd8: // orphan
         if                       // unlikely

    loc_0x816b7bdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7be0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7be4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7be8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7bf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c18: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b5584
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7c9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ccc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ce4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ce8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7cfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7d9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7da0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7da8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7db4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7db8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7dd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ddc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7de8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7df4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e48: // orphan
         if                       // fcn.816b5508+0x2c4 // unlikely
         if                       // unlikely

    loc_0x816b7e54: // orphan
           // CALL XREF from fcn.80c3dc48 @ +0x114
         if                       // fcn.816b5508+0x370 // unlikely
         if                       // unlikely

    loc_0x816b7e60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e84: // orphan
         if                       // fcn.816b5508+0xf50 // unlikely
         if                       // unlikely

    loc_0x816b7e88: // orphan
         if                       // fcn.816b5508+0xf50 // unlikely
         if                       // unlikely

    loc_0x816b7e90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7e9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ea0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ea8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7eac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7eb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7eb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ec0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ec4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ecc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ed0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ed8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7edc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ee4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ef0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ef4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7efc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7f9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fa4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fe0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7fec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b7ff8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816b8004: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816b8010: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b801c: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8028: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8034: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8040: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b804c: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8058: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8064: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8070: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b807c: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8088: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b8094: // orphan
         if                       // likely
         if                       // likely

    loc_0x816b80a0: // orphan
         if                       // fcn.816b5508+0x3cac // likely
         if                       // likely

    loc_0x816b80ac: // orphan
         syscall                  // 255 = unknown ()

    loc_0x816b85d8: // orphan
         teq s0, at, 0x59

    loc_0x816b91c8: // orphan
         cache 0xb, 0x57b6, t7
         swr ra, 0x37c7, ra
         lwu t7, 0x1bdf, s5       // t9
         bnel s5, fp, 0x8169e140  // likely
         ra = , unsigned  halfword [ra - 0x33]

    loc_0x816b99bc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5628
         sd ra, -0x1011, ra
         bbit032 t7, 0x1f, 0x816b84c0
         cache 0x1f, -2, s3
         sd a3, -0x801, s7
         sd t5, -0x1011, k1

    loc_0x816b99d0: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b562c
         sd s7, -0x81, k1
         bbit132 fp, 0x1e, 0x816b99b4
         sd k1, -2, ra
         sdc1 f31, -1, ra
         sd ra, -0x409, ra
         sd ra, -1, t3
         sd ra, -0x1001, ra
         sd ra, -1, s1
         [ra - 2] = fp
         // CODE XREF from fcn.816b7e54 @ 0x816b5630
         sd fp, 0x7fff, s7
         bbit1 ra, 0x1f, 0x816d99f4
         ld a3, -9, ra
         sd ra, -0x5001, ra
         sd ra, -0x201, ra
         sd ra, -0x21, ra
         sd ra, -0x201, fp
         sd k1, -0x1009, ra

    loc_0x816b9a88: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5634
         sd ra, -0x4881, ra
         sd sp, 0x7bff, ra
         sd ra, -1, k1
         lld ra, -0x203, ra
         cache 0x1f, 0x7dff, ra

    loc_0x816b9a9c: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b5638
         ld sp, -0x4002, ra
         sd k0, -0x4401, k0
         swr fp, -0x21, ra
         sd k0, 0x7ff7, t7
         sdc1 f19, -0x1801, fp
         sd k1, -0x5021, k1
         sd ra, -0x22, ra
         sd ra, -0x121, ra
         sd k1, -0x801, ra
         bbit132 ra, 0x1f, 0x816b8ac0
         daddiu k1, t7, -0x201
         ldr ra, -0x11b, ra
         sd ra, 0x7eff, ra
         sd ra, -0x101, ra

    loc_0x816b9b50: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b564c
         sdc1 f31, -0x801, fp

    loc_0x816b9b64: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5640
         bbit132 t9, 0xf, 0x816b9b60
         bbit132 ra, 0x1f, 0x816b9b68
         sd ra, -0x4401, ra
         sd s7, -1, k1
         sd sp, -0x43, ra
         sdc1 f31, 0x7fff, ra
         sd ra, -2, sp
         sdc1 f26, -0x42, k1
         sdc1 f31, -5, ra
         cache 0x1f, -9, ra

    loc_0x816b9fbc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5658
         swc1 f31, -0x81, ra
         sd ra, -6, s7

    loc_0x816ba3c4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5670
         sd ra, -0x801, ra

    loc_0x816ba660: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b567c
         sd ra, -0x101, ra

    loc_0x816bb3cc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5a68
         bbit132 ra, 0xf, 0x816bb3cc
         cache 0x19, 0x5bf7, t7
         scd a3, -0x201, t8
         sc fp, 0x66a7, s1

    loc_0x816bd3e8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b57e4
         sdc1 f29, -0x411, ra
         sd t7, -1, ra
         sd ra, -0x21, t7
         sd t7, -1, t3
         sd fp, -2, ra
         sd ra, -0x801, k1
         sd ra, 0x7fff, ra
         sd ra, -3, ra
         sd s6, -1, fp
         cache 0x1f, -2, ra
         sd ra, 0x7fef, sp
         sdc1 f31, -1, ra
         sd ra, -0x4009, t7
         [ra - 1] = sp
         sdc1 f15, -0x81, ra

    loc_0x816bd4a4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b57f0
         sd ra, -0x111, ra
         sd fp, -0x2801, t7

    loc_0x816bd500: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b57fc
         sd ra, -0x1011, ra
         sdc1 f31, -1, ra
         sd ra, -1, k1
         bbit132 ra, 0x1f, 0x816bd48c

    loc_0x816bd5a8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5814
         sd ra, -0x21, ra
         sd s5, -0x202, ra
         bbit132 ra, 0x1f, 0x816dd5b0
         sd t7, -1, ra
         bbit132 k1, 0x1f, 0x816bd3b8

    loc_0x816bd5bc: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b5818
         sd ra, -0x821, sp
         sd ra, -0x101, ra

    loc_0x816bd5f4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5820
         sd ra, -0x831, ra
         sdc1 f10, 0x7fff, ra
         sd s7, -0x401, ra
         sd ra, -0x201, ra
         sd ra, -0x41, ra
         sd t7, -0x205, sp
         sdc1 f31, -1, ra
         cache 0x1f, -0x4201, ra

    loc_0x816c38b4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5a80
         t5 = , unsigned  , s2 < 0x1fa5

    loc_0x816c3cb8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5aa4
         s4 = t7 + 0x19d4

    loc_0x816c3ef4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5ab0
         v1 = a0 | 0x22d5         // t9
         if                       // unlikely
         if                       // unlikely

    loc_0x816c3f04: // orphan
         if                       // likely

    loc_0x816c4010: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5abc
         t3 = fp + 0x477b
         if                       // unlikely
         if                       // unlikely

    loc_0x816c4020: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816c402c: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816c46e4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5ae0
         daddiu s6, s2, 0x4556
         bnel t1, v0, 0x816d06ec  // likely
         if                       // likely

    loc_0x816c46f4: // orphan
         if                       // likely
         t8 = , unsigned  , a1 < 0x16dd

    loc_0x816c46fc: // orphan
         if                       // likely

    loc_0x816c47ac: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5af8
         bz.w w18, 0x816ca3e0     // unlikely
         t3 = s4 & 0x2cef

    loc_0x816c47f8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b04
         bnz.v w9, 0x816ca2a0     // unlikely
         gp = s1 + 0x53cb

    loc_0x816c4800: // orphan
         if                       // likely

    loc_0x816c48e4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b10
         if                       // unlikely
         t1 = , a2 < 0x1cdb       // lo

    loc_0x816c48ec: // orphan
         t1 = ra & 0x1001
         if                       // likely

    loc_0x816c4990: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b1c
         if                       // unlikely

    loc_0x816c4ab8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b34
         t5 = byte [t2 + 0x614d]  // s4
         a0 = , unsigned  , v0 < 0x4bbd // lo

    loc_0x816c4b24: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b40
         t0 = , a1 < 0x148c

    loc_0x816c4fa0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b4c
         s2 = , t1 < 0x158e
         ra = s6 + 0x25c7
         t3 = t4 + 0x3a94
         at = 0 + 0x1d56

    loc_0x816c528c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b58
         gp = t3 | 0x4fe0
         fp = [fp - 0x621a]
         sp = t2 & 0x70a1
         a0 = a1 - 0x3e9e
         if                       // fcn.816b5508+0x147d4 // likely
         if                       // likely

    loc_0x816c52a8: // orphan
         if                       // likely
         s6 = t1 & 0x1fef

    loc_0x816c52b0: // orphan
         k0 = , t4 < 0x2d8c

    loc_0x816c5478: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b64
         bc0f cc5, 0x816d0f8c

    loc_0x816c5aa0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b7c
         t9 = halfword [t6 + 0x75de]

    loc_0x816c5bf8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5b94
         bbit1 t8, 0x16, 0x816c00d4

    loc_0x816c5d40: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5bac
         a0 = s0 & 0x134d
         t8 += 0x15db

    loc_0x816c5e18: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5bc4
         s3 = , t0 < 0x1910
         if                       // unlikely
         daddi t6, at, 0x44d8

    loc_0x816c5ec0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5bdc
         a0 = byte [0 + 0x1c30]   // s4

    loc_0x816c6170: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c0c
         a3 = t6 ^ 0x4414         // arg4
         v0 = s7 | 0x5414         // t9

    loc_0x816c6218: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c24
         s7 = t4 + 0x19b0

    loc_0x816c621c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c18
         if                       // unlikely
         k1 = t6 + 0x146e

    loc_0x816c6344: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c30
         if                       // unlikely
         sp = s6 ^ 0x582c

    loc_0x816c63a0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c3c
         if                       // unlikely

    loc_0x816c6718: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c54
         t7 = sp & 0x5252
         a2 = v0 | 0x7251
         bnel t6, t0, 0x816d06e8  // likely
         beql k1, s5, 0x816cefd8  // unlikely

    loc_0x816c67d4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c60
         ll t9, 0x661c, s7

    loc_0x816c6870: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c6c
         ra = v1 ^ 0x37b9
         a3 = t9 | 0x525c
         jalx 0x85589540          // 0x85589540(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // likely

    loc_0x816c6a14: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5c90
         s2 = s7 + 0x464f

    loc_0x816c6a9c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5ca8
         

    loc_0x816c6bd8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5cb4
         if                       // likely

    loc_0x816c6cb4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5cc0
         v1 = s2 ^ 0x3a3f

    loc_0x816c6d7c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5cd8
         s5 = ra | 0x3a3e

    loc_0x816c6ed4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5cf0
         goto 0x8f09ee20
         bbit1 sp, 0xd, 0x816b6f40

    loc_0x816c6fbc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5d08
         jalx fcn.821a05c4        // fcn.821a05c4(-1)
         bbit1 s7, 0x17, 0x816aa748
         ldr s7, 0x716c, s5
         sdr s5, 0x1a38, a0

    loc_0x816c7060: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5d2c
         lwu sp, 0x559f, t4       // t9
         swl s7, -0x5be8, s7

    loc_0x816c714c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5d38
         bnel a1, a0, 0x816de9f8  // likely

    loc_0x816c7314: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b5d50
         k0 = v0 | 0x5227
         k1 = v0 + 0x2e89

    loc_0x816c8244: // orphan
         s6 = , s7 < 0x36f7
         t9 = sp + 0x3c5a

    loc_0x816c9b78: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816c46ec
         v0 = a1 + 0x2173
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9b88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9b94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9ba0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9bac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9bb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816c9bc4: // orphan
         if                       // unlikely
         gp = v0 + 0x1039

    loc_0x816c9bcc: // orphan
         if                       // unlikely

    loc_0x816ca3e0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816c47ac
         gp = , unsigned  , s7 < 0x24fe
         // CODE XREF from fcn.816c4d8c @ +0x724
         a0 = fp + 0x3695

    loc_0x816cb324: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816c5e1c
         if                       // likely
         if                       // likely

    loc_0x816cb330: // orphan
         // CODE XREF from fcn.816b5508 @ 0x816b60ac
         if                       // likely
         if                       // likely

    loc_0x816cb33c: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816cb348: // orphan
         a0 = v0 | 0x1672
         if                       // unlikely
         t8 = t5 + 0x12d0

    loc_0x816cb354: // orphan
         a0 = v0 | 0x155b
         if                       // unlikely
         daddiu t8, t5, 0x1889

    loc_0x816cb360: // orphan
         if                       // unlikely
         s5 = s0 + 0x13e7

    loc_0x816cb368: // orphan
         fp = a3 + 0x40b9
         if                       // unlikely
         // CODE XREF from fcn.816c3ffc @ +0x3f4
         s5 = s0 | 0x17cf

    loc_0x816cb3d8: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816cb3e4: // orphan
         fp = a3 + 0x238a
         if                       // unlikely
         bnel a3, fp, 0x816d39bc  // likely

    loc_0x816cb3f4: // orphan
         fp = a3 | 0x13e7         // s2
         a0 = v0 | 0x14fe
         fp = a3 | 0x25b8         // s2
         if                       // unlikely
         if                       // likely

    loc_0x816cc41c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61a8
         if                       // likely
         sp = , t7 < 0x1ab7       // lo

    loc_0x816cc488: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61b4
         t8 = t5 + 0x24a1
         gp = v0 & 0x222d
         s6 = , unsigned  , sp < 0x2ab7

    loc_0x816cc560: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61cc
         fp = a3 + 0x1a5a

    loc_0x816cc6ac: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61d8
         if                       // likely
         gp = v0 - 0x7b02

    loc_0x816cc7d8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61e4
         if                       // unlikely
         if                       // unlikely

    loc_0x816cc7e4: // orphan
         t9 = a1 + 0x14e7
         gp = v0 + 0x128a

    loc_0x816cc8c4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b61f0
         if                       // unlikely
         sp = , t7 < 0x18e6       // lo

    loc_0x816cc8cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816cc8d8: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816cc8e4: // orphan
         

    loc_0x816cca1c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6208
         s6 = t0 + 0x2ab7
         if                       // unlikely

    loc_0x816cce0c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6238
         gp = v0 + 0x405c
         s7 = , s5 < 0x29fd
         s7 = , s5 < -0x7549
         s7 = , s5 < 0x3173

    loc_0x816cced4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6250
         t6 = fp ^ 0x105c

    loc_0x816ccf70: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b625c
         s7 = , s5 < 0x1889
         t9 = a1 + 0x2ab7

    loc_0x816cd128: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6274
         s1 = k1 ^ 0x2ab7

    loc_0x816cd8fc: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6298
         if                       // unlikely
         t1 = , a0 < 0x20b9

    loc_0x816cd904: // orphan
         v1 = , t2 < 0x4b14       // lo
         s7 = , s5 < 0x4ab7

    loc_0x816cdc14: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b62b0
         if                       // unlikely
         if                       // unlikely

    loc_0x816cdc20: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816cdc2c: // orphan
         if                       // unlikely

    loc_0x816cdcac: // orphan
         t9 = a1 + 0x15cf
         if                       // unlikely

    loc_0x816cdcf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816cdd20: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b62bc
         if                       // unlikely
         if                       // likely

    loc_0x816cdd2c: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816cdd38: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816cdd44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816cdd50: // orphan
         if                       // unlikely
         t9 = a1 & 0x10b9         // a2

    loc_0x816cdd58: // orphan
         gp = v0 + 0x11d0

    loc_0x816cdeac: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b62c8
         t9 = a1 + 0x10b9

    loc_0x816cdfe8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b62d4
         if                       // unlikely
         if                       // unlikely

    loc_0x816cdff4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816ce034: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b62e0
         if                       // unlikely
         if                       // unlikely

    loc_0x816ce040: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816ce13c: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816ce148: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816ce154: // orphan
         t9 = a1 + 0x16bd
         t9 = a1 + 0x10b9

    loc_0x816ce450: // orphan
         if                       // unlikely

    loc_0x816ce600: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b631c
         beql a1, t9, 0x816d53ac  // unlikely
         if                       // likely

    loc_0x816ce7d8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6334
         if                       // unlikely
         if                       // unlikely

    loc_0x816ce7e4: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816ce8a4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6340
         if                       // unlikely

    loc_0x816cea2c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6358
         if                       // unlikely
         if                       // likely

    loc_0x816cea38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x816ceae8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6364
         if                       // likely

    loc_0x816ceba4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6370
         if                       // unlikely
         if                       // likely

    loc_0x816cebb0: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x816cebbc: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x816cebc8: // orphan
         // CODE XREF from fcn.816b616c @ +0x208
         if                       // likely
         if                       // unlikely

    loc_0x816ced1c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6388
         a3 = , s7 < 0x2e6f
         if                       // unlikely
         // CODE XREF from fcn.816c3ffc @ +0x3d4
         ra = , s1 < 0x1471

    loc_0x816cefd8: // orphan
         if                       // unlikely
         

    loc_0x816cf550: // orphan
         if                       // likely

    loc_0x816cf824: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b63a0
         if                       // likely
         t3 = , 0 < 0x1c2f        // lo

    loc_0x816cf860: // orphan
         if                       // likely

    loc_0x816cfd40: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b63ac
         gp = , unsigned  , a1 < 0x1b01
         if                       // unlikely
         t6 = at & 0x212a

    loc_0x816cfe58: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b63c4
         sp = t6 | 0x2bad

    loc_0x816cfea4: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b63d0
         if                       // likely
         a1 = s2 + 0x257b

    loc_0x816cfeac: // orphan
         t0 = t8 + 0x15ee

    loc_0x816d0a38: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cc8c4
         t1 = s7 + 0x3ba1
         t1 = , unsigned  , s3 < 0x1ba6

    loc_0x816d0db8: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b6424
         s6 = at + 0x1ba2
         if                       // unlikely

    loc_0x816d146c: // orphan
         k0 = , s3 < 0x14ab
         if                       // unlikely
         k1 = s4 ^ 0x21c1

    loc_0x816d1478: // orphan
         v1 = , unsigned  , t4 < 0x3cfb
         if                       // unlikely

    loc_0x816d1af4: // orphan
         t5 = t8 + 0x115a
         t2 = a0 ^ 0x1291         // arg1
         k1 = a3 & 0x428b         // arg4
         t7 = t6 + 0x1d2e

    loc_0x816d1d98: // orphan
         // CODE XREFS from fcn.816b7e54 @ 0x3164, 0x816cdc24
         t7 = t6 | 0x3ce6
         if                       // likely

    loc_0x816d1e4c: // orphan
         s3 = , unsigned  , a2 < 0x1cff // lo
         // CODE XREF from fcn.816c4d8c @ +0x488
         if                       // unlikely
         s0 = t2 + 0x19c9

    loc_0x816d1e58: // orphan
         if                       // unlikely
         s2 = ra ^ 0x7165

    loc_0x816d1e60: // orphan
         bnel s5, t6, 0x816db340  // likely
         if                       // likely

    loc_0x816d1e68: // orphan
         // CODE XREF from fcn.816ca94c @ +0x3234
         beql t3, ra, 0x816d92ec  // unlikely
         // CODE XREF from fcn.816ca94c @ +0x3238
         muleq_s.w.phr s2, sp, s0

    loc_0x816d1e6c: // orphan
         // CODE XREF from fcn.816ca94c @ +0x3238
         muleq_s.w.phr s2, sp, s0

    loc_0x816d1e70: // orphan
         v0 = , sp < 0x1752

    loc_0x816d1f34: // orphan
         fp = gp ^ 0x2586
         // CODE XREF from fcn.816ca94c @ +0x3304
         t1 = t4 + 0x1589
         // CODE XREFS from fcn.816ca94c @ +0x3194, +0x347c
         t9 = , k0 < 0x1543       // lo

    loc_0x816d2018: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdd30
         // CODE XREF from fcn.816ca94c @ +0x3558
         v1 = , unsigned  , s4 < 0x28d5 // lo

    loc_0x816d216c: // orphan
         bnel t6, t6, 0x816db1bc  // unlikely
         if                       // likely

    loc_0x816d2320: // orphan
         t2 = s1 | 0x13a4

    loc_0x816d2434: // orphan
         if                       // unlikely
         t3 = t7 ^ 0x5b9d

    loc_0x816d243c: // orphan
         t1 = , s5 < 0x1cc6
         if                       // likely

    loc_0x816d2644: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdc18
         bc0f cc6, 0x816d8248
         if                       // unlikely
         // CODE XREF from fcn.816ca94c @ +0x3450
         s7 = , sp < 0x25cf

    loc_0x816d267c: // orphan
         if                       // unlikely
         t0 = , gp < 0x10e3       // lo

    loc_0x816d2684: // orphan
         if                       // unlikely
         t5 = , unsigned  , a1 < 0x1906

    loc_0x816d2898: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816b52dc
         t5 = t6 | 0x2992

    loc_0x816d2dac: // orphan
         s7 = t1 + 0x3d43
         v1 = , unsigned  , t9 < 0x3e8d
         t2 = s0 | 0x19f1

    loc_0x816d2e88: // orphan
         t5 = , unsigned  , k0 < 0x2d69 // lo
         s1 = k1 + 0x276a
         t5 = a1 + 0x5921

    loc_0x816d3070: // orphan
         madd.s f16, f1, f11
         s4 = t0 & 0x5b9f

    loc_0x816d3080: // orphan
         t7 = , t1 < 0x277b
         bz.w w13, 0x816ee7b8     // unlikely
         s0 = s3 & 0x3fbc

    loc_0x816d308c: // orphan
         if                       // likely

    loc_0x816d30a8: // orphan
         ldr at, 0x12ed, s6

    loc_0x816d31ac: // orphan
         s3 = a1 | 0x102e
         t1 = , unsigned  , t1 < 0x450f // lo

    loc_0x816d3314: // orphan
         lwl 0, 0x3ca9, sp

    loc_0x816d3408: // orphan
         bnel t0, sp, 0x816e3518  // likely
         // CODE XREF from fcn.816c5aa4 @ +0x254
         sp = gp ^ 0x251d

    loc_0x816d344c: // orphan
         gp = v1 + 0x2e89

    loc_0x816d3484: // orphan
         // CODE XREF from fcn.816ca94c @ +0x1914
         if                       // unlikely

    loc_0x816d34a8: // orphan
         t5 = s4 & 0x153b
         ldr s4, -0x69c0, s0

    loc_0x816d34e4: // orphan
         beql s3, a3, 0x816eed14  // unlikely
         // CODE XREF from fcn.816ca94c @ +0x23a4
         daddi t7, sp, -0x4523

    loc_0x816d34ec: // orphan
         // CODE XREF from fcn.816ca94c @ +0x20c0
         a1 = , unsigned  byte [t6 + 0x2203] // s4

    loc_0x816d35b0: // orphan
         sp = gp ^ 0x6a99

    loc_0x816d3648: // orphan
         bnel t8, t6, 0x816f0200  // likely

    loc_0x816d36fc: // orphan
         lwl 0, -0x7763, v0
         swl v0, 0x3ba3, sp

    loc_0x816d3728: // orphan
         // CODE XREF from fcn.816ca94c @ +0x28cc
         ldr 0, -0x3100, t8

    loc_0x816d3804: // orphan
         v1 = s0 + 0x3830
         // CODE XREF from fcn.816ca94c @ +0x2550
         a2 = , unsigned  , s6 < 0x1ae2 // arg3
         ldr k1, 0x1fa9, s4
         // CODE XREF from fcn.816c5aa4 @ +0x248
         bnel 0, t3, 0x816f36c0   // likely
         v1 = , unsigned  , a1 < 0x5a20 // arg2

    loc_0x816d3818: // orphan
         if                       // unlikely

    loc_0x816d38bc: // orphan
         if                       // unlikely
         bz.w w27, 0x816df97c     // unlikely

    loc_0x816d38c8: // orphan
         ldr t8, 0x6b9c, k0
         lwl s3, 0x6d1a, a1       // t9

    loc_0x816d38d8: // orphan
         ld.h w28, -0xc4, v1

    loc_0x816d3954: // orphan
         bnel s6, v1, 0x816e7d68  // likely

    loc_0x816d39bc: // orphan
         t6 = , s5 < 0x1e60

    loc_0x816d39ec: // orphan
         
         s5 = t2 ^ 0x34a5
         sp = gp ^ 0x1df0

    loc_0x816d3a70: // orphan
         [v1 - 0x7382] = fp
         t3 = , t8 < 0x450d
         gp = , unsigned  , t7 < 0x6df4 // lo

    loc_0x816d3b68: // orphan
         beql s4, t2, 0x816ec598  // likely

    loc_0x816d3c38: // orphan
         goto 0x816dc7fc

    loc_0x816d3d04: // orphan
         t5 = ra ^ 0x3ae7

    loc_0x816d3d18: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdd3c
         s1 = , unsigned  byte [t4 + 0x5db2] // s4

    loc_0x816d3d6c: // orphan
         lwu t7, 0x7d34, t1       // t9
         daddi ra, sp, -0x7164
         t2 = , unsigned  byte [s6 + 0x2ea1] // s4
         t7 = s6 & 0x2dde

    loc_0x816d3e8c: // orphan
         s4 = s5 + 0x3ac8

    loc_0x816d3f00: // orphan
         lwc1 f2, -0x7876, a1     // arg2
         lwl s3, -0x6b57, a2      // arg3 // t9
         lwc1 f13, 0x44b2, a1     // arg2
         lwr t0, 0x3816, 0        // t9

    loc_0x816d3f3c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cc7dc
         jalx 0x89c159ac          // 0x89c159ac(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816d43c4: // orphan
         ra = t2 ^ 0xb960

    loc_0x816d45e8: // orphan
         bnel sp, s0, 0x816e02e4  // likely
         bnz.h w19, 0x816e67ec    // unlikely

    loc_0x816d45f4: // orphan
         t1 = , a2 < 0x21e9       // lo
         t0 = a2 ^ 0x45de

    loc_0x816d475c: // orphan
         v1 = , unsigned  , t7 < 0x192d // lo

    loc_0x816d4860: // orphan
         at = sp & 0x2008

    loc_0x816d491c: // orphan
         a2 = k1 & 0x2cbd

    loc_0x816d49e8: // orphan
         sdl s4, 0x1f8f, s6

    loc_0x816d4a2c: // orphan
         daddiu a0, s6, 0x5e0a
         t3 = s2 ^ 0x6000
         sp = ra + 0x1731
         fp = , unsigned  , k1 < 0x1f07
         k1 = , unsigned  , k1 < 0x4890 // lo
         at = byte [t0 + 0x688d]  // s4
         t2 = t9 ^ 0x1a3c
         if                       // unlikely
         v0 = v1 & 0x7313

    loc_0x816d4a50: // orphan
         bc2tl cc1, 0x816e2bd0
         t5 = , s5 < 0x5906

    loc_0x816d4b8c: // orphan
         bnel a0, k1, 0x816eaa20  // likely

    loc_0x816d4b94: // orphan
         k1 = halfword [s2 + 0x3795]
         lwr t3, 0x6b16, s1       // t9
         bbit132 t1, 6, 0x816bb010

    loc_0x816d4bb8: // orphan
         sdl t2, -0x50b8, fp
         jalx 0x8abd4f2c          // 0x8abd4f2c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x816d4d24: // orphan
         t6 = s0 + 0x1ae1

    loc_0x816d4d5c: // orphan
         ldr s6, 0x2bad, s5
         s6 = , unsigned  , s5 < 0x3eba

    loc_0x816d4d90: // orphan
         s4 = 0 << 0

    loc_0x816d4e18: // orphan
         lwr s1, 0x7531, t7       // t9

    loc_0x816d4e3c: // orphan
         ldl t2, 0x4c6b, t2       // s2

    loc_0x816d50d8: // orphan
         swl a1, 0x2e87, t3
         swr s7, -0x618d, fp
         t0 = , unsigned  , s3 < 0x3bd2

    loc_0x816d5110: // orphan
         [t9 - 0x66ca] = t2
         bnel a3, a0, 0x816cf604  // likely
         a0 = byte [0 - 0x66bd]   // s4

    loc_0x816d5124: // orphan
         

    loc_0x816d5364: // orphan
         t8 = t0 + 0x486a
         msub.d f10, f18, f4
         bc1f fcc5, 0x816ec2b8
         ra = , unsigned  , k1 < 0x43ca // lo
         fp = , unsigned  , k1 < -0x7453 // lo

    loc_0x816d539c: // orphan
         a2 = [s7 + 0x5bbd]       // t9
         if                       // unlikely
         if                       // likely

    loc_0x816d53d8: // orphan
         a1 = s7 + 0x2478
         beql s7, a0, 0x816e0ce0  // likely
         v0 = , unsigned  , s2 < 0x16e3

    loc_0x816d53e4: // orphan
         if                       // unlikely
         lwl k1, 0x4129, s1       // t9

    loc_0x816d540c: // orphan
         // CODE XREF from fcn.816ca94c @ +0x30b4
         lwl s0, 0x42fe, v0       // t9
         // CODE XREF from fcn.816ca94c @ +0x3504
         [sp - 0x7cfc] = t5

    loc_0x816d5498: // orphan
         v0 = , unsigned  , a0 < 0x3413 // arg1

    loc_0x816d5500: // orphan
         t2 = s7 + 0x2937
         a0 = a2 + 0x2e5d
         gp = , t1 < 0x3001

    loc_0x816d5514: // orphan
         k1 = s2 ^ 0x5000

    loc_0x816d554c: // orphan
         s1 = v0 ^ 0x1fac
         beql a1, t3, 0x816f1f80  // unlikely
         s2 = , unsigned  , t8 < 0x5f15

    loc_0x816d5558: // orphan
         bbit0 t8, 1, 0x816efcd0
         ldl gp, 0x2295, s7       // s2
         bbit0 s7, 0x1c, 0x816c26e8
         lwl s2, -0x7b1d, t6      // t9

    loc_0x816d5574: // orphan
         k1 = , s7 < 0x29eb
         s4 = t7 + 0x35f3
         ldl a3, 0x2e3d, t7       // s2

    loc_0x816d55f0: // orphan
         s6 = t4 & 0x6531

    loc_0x816d5678: // orphan
         k0 = fp ^ 0x6dfb

    loc_0x816d56ac: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdcf4
         dinsm v1, k1, 0x16
         
         

    loc_0x816d5754: // orphan
         a1 = t3 + 0x6287         // arg2
         t9 = ra & 0x3186
         t4 = 0 ^ 0x17a2
         ra = s0 & 0x938e
         t2 = , unsigned  , k1 < 0x7586 // lo
         call 0x86352ecc          // 0x86352ecc(-1, 0x6385, 0x8, -1)
         ldr sp, 0x7bad, s4

    loc_0x816d57b8: // orphan
         a2 = , unsigned  , s5 < 0x1ea0 // arg3

    loc_0x816d5854: // orphan
         goto 0x816e52f0
         

    loc_0x816d5890: // orphan
         ldl s7, -0x7263, 0       // s2

    loc_0x816d5b00: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cc41c
         bbit0 a1, 0x14, 0x816df504

    loc_0x816d5f6c: // orphan
         if                       // likely

    loc_0x816d5fd4: // orphan
         swr s7, 0x595, t6
         t5 = , unsigned  , t1 < 0x1464 // lo

    loc_0x816d600c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdd24
         t1 = , a2 < 0x18c3       // lo
         t1 = , a2 < 0x18c4       // lo
         // CODE XREF from fcn.816b7e54 @ 0x816cdd2c
         goto 0x816e0334

    loc_0x816d60ac: // orphan
         // CODE XREF from fcn.816ca94c @ +0x3190
         lld v0, 0x563b, t3       // s2

    loc_0x816d60c0: // orphan
         ld s2, 0x6c57, v0
         goto 0x87ded4dc
         // CODE XREF from fcn.816ca94c @ +0x31ac
         bbit1 t2, 0x11, 0x816d60cc

    loc_0x816d6148: // orphan
         lld s4, -0x6efc, a3      // s2
         lwl ra
         lwl s3
         byte [t3 + 0x73ee] = gp
         s5 = [s0 - 0x76df]       // t9
                                  // t9

    loc_0x816d61a4: // orphan
         bbit032 t7, 2, 0x816ec694
         bbit132 t5, 0x13, 0x816e6f5c
         s1 = k1 + 0x2376

    loc_0x816d6220: // orphan
         bbit0 a1, 0x13, 0x816e93b4

    loc_0x816d6234: // orphan
         t7 = , unsigned  , v1 < 0x525c // lo

    loc_0x816d62a0: // orphan
         goto 0x816e1184
         if                       // likely

    loc_0x816d62e8: // orphan
         a3 = , unsigned  , t1 < 0x3bb8 // lo
         swc1 f7, 0x5bb7, v0

    loc_0x816d630c: // orphan
         sdr t1, 0x3cc6, gp

    loc_0x816d6320: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdd50
         a1 = at ^ 0x1527
         if                       // unlikely
         s4 = s1 & 0x275a

    loc_0x816d632c: // orphan
         bnel k0, k1, 0x816e2330  // likely
         s2 = s1 & 0x5de6

    loc_0x816d6364: // orphan
         // CODE XREF from fcn.816ca94c @ +0x35bc
         t3 = [0 + 0x3f49]        // t9
         ldl a3, 1, s7
         v1 = [gp + 0x6000]       // [0x6000:4]=-1 // t9
         jalx 0x8ef85198          // 0x8ef85198(-1, 0x442f71dcfe116408, 0x8, 0x1000000000000002)
         ldc1 f11, 0x546c, v1

    loc_0x816d6378: // orphan
         v0 = 0 & 0x2304
         t3 = k0 + 0x1750
         a1 = t8 & 0x274e

    loc_0x816d6434: // orphan
         s2 = , unsigned  , s5 < 0x5765
         s7 = , unsigned  , s5 < 0x576a
         daddi s3, s7, 0x5ebe

    loc_0x816d6458: // orphan
         t5 = t0 + 0x2000
         t5 = t3 & 0x450d
         t5 = t3 & 0x450d
         s2 = t9 | 0x950d
         s1 = , s1 < 0x3c74

    loc_0x816d648c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdd48
         sdl s1, 0x175f, t3
         snei s0, t3, 0x105

    loc_0x816d64c8: // orphan
         s7 = sp ^ 0x4ded
         s3 = , a1 < 0x4df1
         ll t6, 0x4df5, s7

    loc_0x816d64fc: // orphan
         pref 0x19, -0x192d, s2
         t9 = , unsigned  byte [0 + 0x52f3] // s4

    loc_0x816d6530: // orphan
         msub.s f8, f23, f24
         bbit1 t8, 0xc, 0x816bbf60
         daddiu s6, v1, 0x1f8f
         swl t7, 0x685, t4
         goto 0x861316a8

    loc_0x816d6544: // orphan
         goto 0x85819958
         lwr t5, 0x6522, s6       // t9

    loc_0x816d6558: // orphan
         ll s7, -0x1ff1, v1       // t9

    loc_0x816d657c: // orphan
         
         ll t1, -0x609d, 0        // t9
         ra = , unsigned  byte [sp + 0x754c]
         s7 = , unsigned  , k1 < -0x607e // lo
         k0 = at << 0             // lo
         daddi a0, 0, -0x1ff1     // arg1
         byte [0 - 0x7010] = t1
         t6 = byte [0 + 0x4458]   // s4
         k0 = , s7 < 0x1bb0       // lo

    loc_0x816d65b0: // orphan
         t6 = , unsigned  , t6 < 0x2694

    loc_0x816d65c4: // orphan
         sp = , unsigned  , a0 < 0x4cbc
         s2 = t6 ^ 0x7148
         lwr s3, 0x4a15, gp       // [0x4a15:4]=-1 // t9
         ldl t6, 0x4b83, gp       // [0x4b83:8]=-1 // s2
         ldl a0, 0x3ecb, gp       // [0x3ecb:8]=-1 // s2
         if                       // likely
         s1 = 0 ^ 0x3812

    loc_0x816d660c: // orphan
         lwl s5, 0x1001, t8       // t9
         if                       // unlikely
         bc3t cc6, 0x816dabe0

    loc_0x816d6644: // orphan
         byte [0 - 0x5992] = 0
         fp = , unsigned  , t0 < 0x6196
         pref 0, 0x6bfc, t1
         sd a1, 0x65b, t1
         call 0x8481f4a8          // 0x8481f4a8(-1, 0x442f71dcfe116408, 0x8, -1)
         ldr s3, -0x669b, t1
         sc t1, 0x14, 0

    loc_0x816d6700: // orphan
         daddi a1, a3, 0x58ad
         bbit032 a0, 0xf, 0x816d88dc

    loc_0x816d6708: // orphan
         bbit032 v0, 0x1b, 0x816e6458

    loc_0x816d6750: // orphan
         fp = halfword [a2 - 0x7995]

    loc_0x816d6790: // orphan
         a2 = , unsigned  , s5 < 0x6c6e

    loc_0x816d6824: // orphan
         v0 = , unsigned  , s5 < 0xe9e
         v0 = halfword [s5 + 0x7e9e]
         a2 = , unsigned  halfword [k1 + 0x6ea0]
         s3 = byte [s1 + 0x1232]  // s4
         if                       // likely

    loc_0x816d6838: // orphan
         if                       // likely
         if                       // likely

    loc_0x816d6840: // orphan
         t5 = , s2 < 0x1004       // lo

    loc_0x816d6844: // orphan
         t5 = s1 + 0x151c
         s1 = s2 ^ 0x2a4e
         daddi 0, 0, 0x2522
         ra = t0 | 0x2523
         s5 = s2 ^ 0x3527

    loc_0x816d74a4: // orphan
         synci 0x4f3, a1
         tgeu t6, ra, 0x1b

    loc_0x816d7644: // orphan
         byte [at - 0xfec] = t1
         sdr s0, 0x4aa, a0
         swc1 f4, -0x3fd2, a2

    loc_0x816d9e6c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816cdcf8
         ra = t1 & 0x3a41         // lo
         bz.h w29, 0x816eb7ac     // unlikely

    loc_0x816da438: // orphan
         bz.h w30, 0x816ed968     // unlikely

    loc_0x816da83c: // orphan
         s7 = t1 & 0x3f39
         bnel s2, s5, 0x816e88f4  // likely

    loc_0x816db0f4: // orphan
         s3 = at ^ 0x3048
         a2 = v0 ^ 0x4d2d

    loc_0x816de378: // orphan
         ra = s1 ^ 0x4a39
         k0 = , s1 < 0x4f4b

    loc_0x816e3b84: // orphan
         a0 = t1 + 0x261f
         bnel v0, a2, 0x816ed8a0  // likely

    loc_0x816e52f0: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816d5854
         s3 = t9 | 0x5d50

    loc_0x816e67ec: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816d45ec
         bnel t9, t3, 0x816ee088  // likely
         

    loc_0x816ee088: // orphan
         goto fcn.81040c64
         bc0f cc7, 0x816f70c0

    loc_0x816f1f80: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816d5550
         daddi a3, k0, 0x2842     // arg4

    loc_0x8202b030: // orphan
         ldl ra, 0x4012, a2       // s2
         swc1 f17, 0x51ee, v0
         halfword [t6 - 0x5ffb] = t0

    loc_0x83d7874c: // orphan
         // CODE XREF from fcn.816b7e54 @ 0x816a5b30
         bbit132 t7, 0xf, 0x83d60334

    loc_0x83fdebc8: // orphan
         daddi a2, a1, 0xa60
         halfword [t0 + 0x50a5] = t2
         goto 0x89429028

    loc_0x83fe23b8: // orphan
         s5 = v1 & 0x760
         jalx 0x881dc000          // 0x881dc000(-1, 0x442f71dcfe116408, 0x8, -1)
         dsra32 ra, t7, 0x1f

    loc_0x83ffa9e0: // orphan
         call 0x8e4ff540          // 0x8e4ff540(-1, 0x442f71dcfe116408, 0x8, -1)
         if                       // unlikely

    loc_0x83ffa9ec: // orphan
         // CODE XREF from fcn.83fde584 @ +0x300
         pref 0x19, -0x11b2, s6
         bbit1 s7, 0xe, 0x83ff25ac

    loc_0x83ffb9b0: // orphan
         sdr t1, 0x2067, t8

    loc_0x840015b4: // orphan
         ll gp, 0x51c9, 0         // t9

    loc_0x84001698: // orphan
         // XREFS: CALL 0x816b3918  CALL 0x816b3944  CALL 0x816b39d8  
         // XREFS: CALL 0x816b3a18  CALL 0x816b3a24  CALL 0x816b3a38  
         // XREFS: CALL 0x816b3a44  CALL 0x816b3c08  
         ldc1 f29, 0x6fd7, t7

    loc_0x840016b0: // orphan
         pref 0x1c, -0x7040, ra
         bbit132 gp, 0x1f, 0x83fedea0
         [sp - 0x641] = v0
         t8 = , unsigned  halfword [a3 - 0x207a]
         sdc1 f31, 0x79f7, ra

    loc_0x840016e0: // orphan
         sdr k1, 0x7fb7, s7
         bbit132 gp, 0xf, 0x83fefad4
         lwu k0, -0x451, sp
         swr k1, -0x3043, ra
         bbit132 ra, 0xf, 0x83ff16e4
         call 0x8f07f0bc          // 0x8f07f0bc(-1, 0x442f71dcfe116408, 0x8, -1)
         ll gp, 0x4fc6, ra
         sd ra, -0x3704, v1
         [fp - 0x321] = t3
         pref 0x1d, 0x1fd2, ra
         sd t7, -0x2903, t2
         k1 = [fp - 0x221]
         ld fp, 0x3fe8, ra
         sd t7, -0xa01, s7
         sc t0, 0x130, 0
         a0 = s0 + 0x2064
         goto 0x8202b030
         byte [a2 + 0xe70] = ra

    loc_0x84001770: // orphan
         pref 0x1c, 0x4fbd, a3
         bbit132 k1, 0xf, 0x83fedb60
         [sp - 0x5f1] = a0
         // CODE XREFS from fcn.816b30c4 @ +0x17ec, +0x180c
         lwu t9, -0x606a, a3
         bbit132 t3, 0xf, 0x83fe7768
         [sp - 0x571] = 0
         sdl k1, 0x3fb4, ra
         bbit132 k0, 0xf, 0x83feeb7c

    loc_0x840018c0: // orphan
         t9 = byte [s3 - 0x849]   // s4

    loc_0x840018d4: // orphan
         swc1 f23, 0x7527, k0

    loc_0x84001904: // orphan
         // CODE XREF from fcn.816b4bd4 @ +0x260
         bgezl sp, 0x840200a4     // likely
         swl gp, 0x67ed, t3

    loc_0x8400190c: // orphan
         t8 = byte [t3 + 0x3e85]  // s4
         swl a0, -0x7a08, v1
         beql t4, v1, 0x83ffb9b0  // unlikely
         s7 = byte [a1 - 0x1083]  // s4

    loc_0x8400191c: // orphan
         bnz.h w26, 0x8402027c    // unlikely
         t8 = , unsigned  halfword [v1 - 0x4879]

    loc_0x840019a0: // orphan
         beql t6, t9, 0x8400a1ac  // unlikely
         bnel s1, a3, 0x83fe23b8  // likely

    loc_0x840019ac: // orphan
         s3 = s2 & 0x2121
         lld t9, 0x3157, s0       // s2
         if                       // unlikely
         // CODE XREF from fcn.83fe6004 @ +0x150
         lld s7, 0x440, v1        // s2

    loc_0x840019bc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.83fe5b90 @ +0x1d4
         bbit132 v0, 0x1f, 0x84018190

    loc_0x840019c4: // orphan
         // CODE XREF from fcn.83ffe898 @ +0x228
         s2 = , unsigned  , t8 < -0x1072
         swc1 f13, -0x7130, t7

    loc_0x840200a4: // orphan
         bc2f cc1, 0x84001dc4
         ldc1 f17, 0x4654, v1

    loc_0x8402027c: // orphan
         bbit132 a1, 0xc, fcn.84003fe4
         s6 = a0 | 0x1975         // t9
         t1 = , unsigned  halfword [s4 + 0x398e]
         bbit132 a0, 0x11, 0x84000be8
         sdl s3, -0x3933, t3
         daddiu a2, s5, 0x1a5e
         t4 = t6 | 0x6066
         s3 = , unsigned  halfword [v1 + 0x47a5]
         dinsm t0, s5, 0x1e
         bbit1 a0, 0xf, 0x84003104
         ld t7, -0x16e6, gp       // s2
         t1 = , unsigned  byte [t8 + 0x4395] // s4
         fp = , t2 < -0x6987
         ldr s7, 0x2974, t4
         t1 = , unsigned  halfword [k1 + 0x7697]
         ldl s5, -0x68a7, t3      // s2
         daddi s2, t4, 0x58cb
         s7 = halfword [t6 - 0x198a]
         sdc1 f2, 0x6ab6, t8

}
