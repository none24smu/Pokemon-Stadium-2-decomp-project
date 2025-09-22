/*
 * Function: 0x80533900
 * ROM Offset: 0x00434900
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80533900 (int esi, int edx) {
if            // likely
// do {
if            // likely
// } while (?);
// } while (?);
}
return eax;
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
if                       // likely
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
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.80533900 (int esi, int edx) {
    loc_0x80520ee8:
        a2 = 0
        if            // likely
        v1 = a3
            
    loc_0x80520f64:
        byte [a1 + 0xf] = 0 // arg2
        halfword [a1 + 0] = 0 // arg2
         // do {
    loc_0x80520f6c:
        t9 = halfword [a1 + 0]
        s5 = 0x82d2 << 16
        s4 = 0 + 6
        t1 = t9 - a2  // arg3
        halfword [a1 + 0] = t1 // arg2
        v0 = halfword [a1 + 0]
        t0 = 0 + 5
        a3 = 0 + 0x4b28 // arg4
        if            // likely
        s5 += 0x3904
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80520ef4
    loc_0x80520f08:
        a2 = v1 - v0  // arg3
        a2 <<= 0x10   // arg3
        a2 = , signed  a2 >> 0x10 // arg3
        halfword [a1 + 4] = a3 // arg2
        goto 0x80520f6c
        byte [a1 + 0xf] = 0 // arg2
    loc_0x80520f20: // orphan
             div 0, t6, a0            // arg1
             a2 = lo
             a2 <<= 0x10              // arg3
             a2 = , signed  a2 >> 0x10 // arg3
             if                       // unlikely
             

    loc_0x80520f38: // orphan
         break 7

    loc_0x80520f3c: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x80520f48: // orphan
         if                       // unlikely
         

    loc_0x80520f50: // orphan
         break 6

    loc_0x80520f54: // orphan
         t7 = v0 + a2             // arg3
         halfword [a1 + 4] = t7   // arg2
         goto 0x80520f6c
         byte [a1 + 0xf] = t8     // arg2

    loc_0x80520f94: // orphan
         v0 = , unsigned  byte [a1 + 0x10e] // arg2

    loc_0x80520f98: // orphan
         if                       // unlikely
         t2 = v0 - 1

    loc_0x80520fa0: // orphan
         goto 0x80520fac
         byte [a1 + 0x10e] = t0   // arg2

    loc_0x80520fa8: // orphan
         byte [a1 + 0x10e] = t2   // arg2

    loc_0x80520fac: // orphan
         t5 = , unsigned  byte [a1 + 0x10e] // arg2
         t3 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t4 = t3 - 1
         byte [a1 + 0xe] = t4     // arg2
         t7 = byte [a1 + 0xe]     // arg2
         t6 = lo
         a2 = a1 + t6             // arg3
         a2 += 0x110              // arg3
         unsigned , hi
         v1 = lo
         t8 = a1 + v1             // arg2
         if                       // unlikely
         

    loc_0x80520fe8: // orphan
         goto 0x80520ff0
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x80520ff0: // orphan
         byte [a2 + 5] = v0       // arg3
         halfword [a2 + 0xc] = v0 // arg3
         t9 = byte [a1 + 0xe]     // arg2
         v0 = 0
         v1 = a2
         unsigned , hi
         s0 = lo
         s0 += 1
         if                       // unlikely
         t1 = a1 + s0             // arg2

    loc_0x80521018: // orphan
         goto 0x80521020
         v0 = , unsigned  byte [t1 + 0x11]

    loc_0x80521020: // orphan
         byte [v1 + 6] = v0
         halfword [v1 + 0xe] = v0
         t2 = byte [a1 + 0xe]     // arg2
         s2 = 0 + 2
         t5 = s2 << 1
         unsigned , hi
         v0 = 0
         a0 = a2 + t5             // arg3
         t3 = lo
         v1 = t3 + s2
         if                       // unlikely
         t4 = a1 + v1             // arg2

    loc_0x80521050: // orphan
         goto 0x80521058
         v0 = , unsigned  byte [t4 + 0x11]

    loc_0x80521058: // orphan
         v1 = a2 + s2             // arg3
         byte [v1 + 5] = v0
         halfword [a0 + 0xc] = v0 // arg1
         t6 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t7 = lo
         s0 = t7 + s2
         s0 += 1
         if                       // unlikely
         t8 = a1 + s0             // arg2

    loc_0x80521084: // orphan
         goto 0x8052108c
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x8052108c: // orphan
         byte [v1 + 6] = v0
         halfword [a0 + 0xe] = v0 // arg1
         t9 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t1 = lo
         s0 = t1 + s2
         s0 += 2
         if                       // unlikely
         t2 = a1 + s0             // arg2

    loc_0x805210b4: // orphan
         goto 0x805210bc
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x805210bc: // orphan
         byte [v1 + 7] = v0
         halfword [a0 + 0x10] = v0 // arg1
         t3 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t4 = lo
         s0 = t4 + s2
         s0 += 3
         if                       // unlikely
         t5 = a1 + s0             // arg2

    loc_0x805210e4: // orphan
         goto 0x805210ec
         v0 = , unsigned  byte [t5 + 0x11]

    loc_0x805210ec: // orphan
         byte [v1 + 8] = v0
         halfword [a0 + 0x12] = v0 // arg1
         t6 = halfword [a1 + 0]
         t7 = t6 - 0x3d
         halfword [a1 + 0] = t7   // arg2
         v0 = halfword [a1 + 0]
         bgtzl v0, 0x80520f98     // likely
         v0 = , unsigned  byte [a1 + 0x10e] // arg2

    loc_0x8052110c: // orphan
         at = , v0 < -0x3c
         a3 = 0 + 0x4b28          // arg4
         if                       // likely
         s4 = 0 + 6

    loc_0x8052111c: // orphan
         t0 = 0 + 5
         t8 = , unsigned  byte [a1 + 0x10e] // arg2

    loc_0x80521124: // orphan
         t1 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t9 = lo
         a2 = a1 + t9             // arg3
         a2 += 0x110              // arg3
         unsigned , hi
         v1 = lo
         v1 += 0x24
         at = , v1 < 0xfc
         if                       // unlikely
         t2 = a1 + v1             // arg2

    loc_0x80521154: // orphan
         goto 0x8052115c
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x8052115c: // orphan
         byte [a2 + 5] = v0       // arg3
         halfword [a2 + 0xc] = v0 // arg3
         t3 = byte [a1 + 0xe]     // arg2
         v0 = 0
         v1 = a2
         unsigned , hi
         s0 = lo
         s0 += 0x25
         at = , s0 < 0xfc
         if                       // unlikely
         t4 = a1 + s0             // arg2

    loc_0x80521188: // orphan
         goto 0x80521190
         v0 = , unsigned  byte [t4 + 0x11]

    loc_0x80521190: // orphan
         byte [v1 + 6] = v0
         halfword [v1 + 0xe] = v0
         t5 = byte [a1 + 0xe]     // arg2
         s2 = 0 + 2
         t8 = s2 << 1
         unsigned , hi
         v0 = 0
         a0 = a2 + t8             // arg3
         t6 = lo
         v1 = t6 + s2
         v1 += 0x24
         at = , v1 < 0xfc
         if                       // unlikely
         t7 = a1 + v1             // arg2

    loc_0x805211c8: // orphan
         goto 0x805211d0
         v0 = , unsigned  byte [t7 + 0x11]

    loc_0x805211d0: // orphan
         v1 = a2 + s2             // arg3
         byte [v1 + 5] = v0
         halfword [a0 + 0xc] = v0 // arg1
         t9 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t1 = lo
         s0 = t1 + s2
         s0 += 0x25
         at = , s0 < 0xfc
         if                       // unlikely
         t2 = a1 + s0             // arg2

    loc_0x80521200: // orphan
         goto 0x80521208
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x80521208: // orphan
         byte [v1 + 6] = v0
         halfword [a0 + 0xe] = v0 // arg1
         t3 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t4 = lo
         s0 = t4 + s2
         s0 += 0x26
         at = , s0 < 0xfc
         if                       // unlikely
         t5 = a1 + s0             // arg2

    loc_0x80521234: // orphan
         goto 0x8052123c
         v0 = , unsigned  byte [t5 + 0x11]

    loc_0x8052123c: // orphan
         byte [v1 + 7] = v0
         halfword [a0 + 0x10] = v0 // arg1
         t6 = byte [a1 + 0xe]     // arg2
         v0 = 0
         unsigned , hi
         t7 = lo
         s0 = t7 + s2
         s0 += 0x27
         at = , s0 < 0xfc
         if                       // unlikely
         t8 = a1 + s0             // arg2

    loc_0x80521268: // orphan
         goto 0x80521270
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x80521270: // orphan
         byte [v1 + 8] = v0
         halfword [a0 + 0x12] = v0 // arg1
         v0 = , unsigned  byte [a1 + 0x10e] // arg2
         if                       // likely
         t9 = v0 + 1

    loc_0x80521284: // orphan
         goto 0x80521290
         byte [a1 + 0x10e] = 0    // arg2

    loc_0x8052128c: // orphan
         byte [a1 + 0x10e] = t9   // arg2

    loc_0x80521290: // orphan
         t3 = halfword [a1 + 0]
         t1 = byte [a1 + 0xe]     // arg2
         t4 = t3 + 0x3d
         halfword [a1 + 0] = t4   // arg2
         t5 = halfword [a1 + 0]
         t2 = t1 + 1
         byte [a1 + 0xe] = t2     // arg2
         at = , t5 < -0x3c
         bnel at, 0, 0x80521124   // unlikely
         t8 = , unsigned  byte [a1 + 0x10e] // arg2

    loc_0x805212b8: // orphan
         s6 = , unsigned  byte [a1 + 0x10e] // arg2
         s2 = 0
         at = 0 + 0x4b28

    loc_0x805212c4: // orphan
         unsigned , hi
         t8 = 0x82d0 << 16
         t8 += 0x7428
         s0 = 0
         t6 = lo
         t7 = t6 + 0x110
         s1 = t7 + t8
         s3 = s1

    loc_0x805212e4: // orphan
         a0 = s5
         call fcn.82d00030
         a1 = , unsigned  byte [s3 + 5]
         if                       // likely
         t5 = 0 + 1

    loc_0x805212f8: // orphan
         t9 = , unsigned  byte [s1 + 4]
         t1 = 0 + 1
         t2 = t1 << s0
         t3 = t9 | t2
         goto 0x80521324
         byte [s1 + 4] = t3

    loc_0x80521310: // orphan
         t4 = , unsigned  byte [s1 + 4]
         t6 = t5 << s0
         not t7, t6
         t8 = t4 & t7
         byte [s1 + 4] = t8

    loc_0x80521324: // orphan
         s0 += 1
         if                       // likely
         s3 += 1

    loc_0x80521330: // orphan
         s6 += 1
         at = , s6 < 6
         if                       // likely
         s2 += 1

    loc_0x80521340: // orphan
         s6 = 0

    loc_0x80521344: // orphan
         bnel s2, s4, 0x805212c4  // unlikely
         at = 0 + 0x4b28

    loc_0x8052134c: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x80533900: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053390c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533918: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533924: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533930: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053393c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533948: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533954: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533960: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053396c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533978: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533984: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533990: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053399c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533aa4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533ab0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533abc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80538ae8: // orphan
         beql sp, ra, 0x80520ee8  // unlikely
         sdl ra, 0x1c5c, a1

    loc_0x80538af0: // orphan
         ra = , unsigned  byte [t7 - 0x4e01]
         byte [t7 - 0x63cf] = ra
         ra = t7 + 0x1ff
         swr at, 0x3e91, t2
         s1 = [a0 - 0x5ff1]       // arg1
         ldr s1, 0x288f, a1       // arg2
         ldr at, -0x4762, a1      // arg2

    loc_0x80538b14: // orphan
         s1 = at & 0xbeec
         sync 1
         if                       // likely
         call 0x8ffc8bfc          // 0x8ffc8bfc(0x0, 0x0, 0x0, 0x0)

    loc_0x80538b24: // orphan
         t7 = , unsigned  byte [k1 + 0x7ab0]
         lld ra, 0x15ff, s7
         sdl ra, -0x2d31, s7
         sdl ra, -0x1ce1, s7
         fp = , unsigned  , t7 < -0x5cb1
         sdl ra, -0x6503, k0

    loc_0x80538c80: // orphan
         if                       // likely
         t9 = t7 << 4

    loc_0x80538c88: // orphan
         
         if                       // unlikely
         fp = [t8 + 0x1b8f]

    loc_0x80538c94: // orphan
         lwu t7, -0x5ef1, ra

    loc_0x8053911c: // orphan
         s2 = , t8 < -0x5fd1

    loc_0x80539188: // orphan
         lwc1 f30, 0x6ff, s7
         synci -0x40f1, s7
         t7 = , unsigned  , t9 < 0x7eff
         t7 = , unsigned  byte [s7 + 0x16b3]
         dsra32 t8, t7, 0
         sdl t7, -0x6fa1, v0

    loc_0x80539350: // orphan
         s6 = v0 | 0x2e04
         daddi t7, s0, 0x3e04

    loc_0x805393e8: // orphan
         s3 = , unsigned  , t3 < 0x712f
         s0 = t6 + 0x4321

    loc_0x80539544: // orphan
         gp |= 0x644b

    loc_0x80539670: // orphan
         call 0x84283824          // 0x84283824(0x0, 0x0, 0x0, 0x0)
         goto 0x84303c3c

    loc_0x80539950: // orphan
         lwu ra, 0x3c3c, fp
         lwu t7, 0x7f7f, ra

    loc_0x80539bac: // orphan
         ld fp, 0x3b8f, t9
         t7 = s2 | 0xefcf

    loc_0x80539c68: // orphan
         sd ra, 0x3aff, t9
         ld ra, -0x20c3, fp
         t1 = s0 ^ 0x3939

    loc_0x80539e80: // orphan
         lwu ra, 0x3032, gp
         s1 |= 0x3434
         t6 = k0 | 0x7f38
         [t9 + 0x343f] = gp
         ra = v1 | 0x343f

    loc_0x80539f4c: // orphan
         pref 0x19, 0x4d4d, t9

    loc_0x8053a0c0: // orphan
         ldr k1, -0x2001, t9

    loc_0x8053a148: // orphan
         k0 = at + 0x3f3f

    loc_0x8053a184: // orphan
         s3 = t9 & 0x315f

    loc_0x8053a250: // orphan
         [t9 + 0xcaf] = ra

    loc_0x8053a2bc: // orphan
         ra = , v0 < 0x3d5e

    loc_0x8053a308: // orphan
         [t9 + 0x3c34] = gp

    loc_0x8053ae08: // orphan
         t4 = , unsigned  , k0 < -0x24a9
         ra = a1 + 0x1647
         bbit1 ra, 7, 0x80549b10

    loc_0x8053b420: // orphan
         bbit132 sp, 0x16, 0x80540e04
         bbit1 ra, 6, 0x805435a8

    loc_0x8053b4e8: // orphan
         if                       // likely
         s7 = t7 & 0x1c8

    loc_0x8053b4f0: // orphan
         s7 = t7 & 0xea96
         at = , unsigned  , k1 < 0x1196
         call 0x8f60ae88          // 0x8f60ae88(0x0, 0x0, 0x0, 0x0)
         call 0x895051fc          // 0x895051fc(0x0, 0x0, 0x0, 0x0)
         goto 0x8a6039b0
         dsubu v0, 0, s7

    loc_0x8053b644: // orphan
         s6 = a0 | 0xbff          // arg1
         goto 0x88d03468

    loc_0x8053b7c4: // orphan
         call 0x83cf573c          // 0x83cf573c(0x0, 0x0, 0x0, 0x0)
         beql 0, s7, 0x8053bb38   // likely

    loc_0x8053b7d0: // orphan
         
         call 0x8fc7bbf8          // 0x8fc7bbf8(0x0, 0x0, 0x0, 0x0)
         ra = , t9 < -0x730
         lld a1, 0x2017, t6
         if                       // unlikely

    loc_0x8053bb38: // orphan
         at = , unsigned  , t8 < 0x469
         if                       // unlikely

    loc_0x80542484: // orphan
         sd fp, 0xa06, fp

}

*/
