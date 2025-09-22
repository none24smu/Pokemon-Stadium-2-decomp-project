/*
 * Function: 0x805337e4
 * ROM Offset: 0x004347e4
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.805337e4 (int esi, int edx) {
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
if                       // unlikely
if                       // likely
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
}

/*
// Full analysis output
int fcn.805337e4 (int esi, int edx) {
    loc_0x80520ee8:
        a2 = 0
        if            // likely
        v1 = a3
            
    loc_0x80520f64:
        byte [a1 + 0xf] = 0
        halfword [a1 + 0] = 0
         // do {
    loc_0x80520f6c:
        t9 = halfword [a1 + 0]
        s5 = 0x82d2 << 16
        s4 = 0 + 6
        t1 = t9 - a2
        halfword [a1 + 0] = t1
        v0 = halfword [a1 + 0]
        t0 = 0 + 5
        a3 = 0 + 0x4b28
        if            // likely
        s5 += 0x3904
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80520ef4
    loc_0x80520f08:
        a2 = v1 - v0
        a2 <<= 0x10
        a2 = , signed  a2 >> 0x10
        halfword [a1 + 4] = a3
        goto 0x80520f6c
        byte [a1 + 0xf] = 0
    loc_0x80520f20: // orphan
             div 0, t6, a0
             a2 = lo
             a2 <<= 0x10
             a2 = , signed  a2 >> 0x10
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
         t7 = v0 + a2
         halfword [a1 + 4] = t7
         goto 0x80520f6c
         byte [a1 + 0xf] = t8

    loc_0x80520f94: // orphan
         v0 = , unsigned  byte [a1 + 0x10e]

    loc_0x80520f98: // orphan
         if                       // unlikely
         t2 = v0 - 1

    loc_0x80520fa0: // orphan
         goto 0x80520fac
         byte [a1 + 0x10e] = t0

    loc_0x80520fa8: // orphan
         byte [a1 + 0x10e] = t2

    loc_0x80520fac: // orphan
         t5 = , unsigned  byte [a1 + 0x10e]
         t3 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t4 = t3 - 1
         byte [a1 + 0xe] = t4
         t7 = byte [a1 + 0xe]
         t6 = lo
         a2 = a1 + t6
         a2 += 0x110
         unsigned , hi
         v1 = lo
         t8 = a1 + v1
         if                       // unlikely
         

    loc_0x80520fe8: // orphan
         goto 0x80520ff0
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x80520ff0: // orphan
         byte [a2 + 5] = v0
         halfword [a2 + 0xc] = v0
         t9 = byte [a1 + 0xe]
         v0 = 0
         v1 = a2
         unsigned , hi

    loc_0x80521008: // orphan
         s0 = lo
         s0 += 1
         if                       // unlikely
         t1 = a1 + s0

    loc_0x80521018: // orphan
         goto 0x80521020
         v0 = , unsigned  byte [t1 + 0x11]

    loc_0x80521020: // orphan
         byte [v1 + 6] = v0
         halfword [v1 + 0xe] = v0
         t2 = byte [a1 + 0xe]
         s2 = 0 + 2
         t5 = s2 << 1
         unsigned , hi
         v0 = 0
         a0 = a2 + t5
         t3 = lo
         v1 = t3 + s2
         if                       // unlikely
         t4 = a1 + v1

    loc_0x80521050: // orphan
         goto 0x80521058
         v0 = , unsigned  byte [t4 + 0x11]

    loc_0x80521058: // orphan
         v1 = a2 + s2
         byte [v1 + 5] = v0
         halfword [a0 + 0xc] = v0
         t6 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t7 = lo
         s0 = t7 + s2
         s0 += 1
         if                       // unlikely
         t8 = a1 + s0

    loc_0x80521084: // orphan
         goto 0x8052108c
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x8052108c: // orphan
         byte [v1 + 6] = v0
         halfword [a0 + 0xe] = v0
         t9 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t1 = lo
         s0 = t1 + s2
         s0 += 2
         if                       // unlikely
         t2 = a1 + s0

    loc_0x805210b4: // orphan
         goto 0x805210bc
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x805210bc: // orphan
         byte [v1 + 7] = v0
         halfword [a0 + 0x10] = v0
         t3 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t4 = lo
         s0 = t4 + s2
         s0 += 3
         if                       // unlikely
         t5 = a1 + s0

    loc_0x805210e4: // orphan
         goto 0x805210ec
         v0 = , unsigned  byte [t5 + 0x11]

    loc_0x805210ec: // orphan
         byte [v1 + 8] = v0
         halfword [a0 + 0x12] = v0
         t6 = halfword [a1 + 0]
         t7 = t6 - 0x3d
         halfword [a1 + 0] = t7
         v0 = halfword [a1 + 0]
         bgtzl v0, 0x80520f98     // likely
         v0 = , unsigned  byte [a1 + 0x10e]

    loc_0x8052110c: // orphan
         at = , v0 < -0x3c
         a3 = 0 + 0x4b28
         if                       // likely
         s4 = 0 + 6

    loc_0x8052111c: // orphan
         t0 = 0 + 5
         t8 = , unsigned  byte [a1 + 0x10e]

    loc_0x80521124: // orphan
         t1 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t9 = lo
         a2 = a1 + t9
         a2 += 0x110
         unsigned , hi
         v1 = lo
         v1 += 0x24
         at = , v1 < 0xfc
         if                       // unlikely
         t2 = a1 + v1

    loc_0x80521154: // orphan
         goto 0x8052115c
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x8052115c: // orphan
         byte [a2 + 5] = v0
         halfword [a2 + 0xc] = v0
         t3 = byte [a1 + 0xe]
         v0 = 0
         v1 = a2
         unsigned , hi
         s0 = lo
         s0 += 0x25
         at = , s0 < 0xfc
         if                       // unlikely
         t4 = a1 + s0

    loc_0x80521188: // orphan
         goto 0x80521190
         v0 = , unsigned  byte [t4 + 0x11]

    loc_0x80521190: // orphan
         byte [v1 + 6] = v0
         halfword [v1 + 0xe] = v0
         t5 = byte [a1 + 0xe]
         s2 = 0 + 2
         t8 = s2 << 1
         unsigned , hi
         v0 = 0
         a0 = a2 + t8
         t6 = lo
         v1 = t6 + s2
         v1 += 0x24
         at = , v1 < 0xfc
         if                       // unlikely
         t7 = a1 + v1

    loc_0x805211c8: // orphan
         goto 0x805211d0
         v0 = , unsigned  byte [t7 + 0x11]

    loc_0x805211d0: // orphan
         v1 = a2 + s2
         byte [v1 + 5] = v0
         halfword [a0 + 0xc] = v0
         t9 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t1 = lo
         s0 = t1 + s2
         s0 += 0x25
         at = , s0 < 0xfc
         if                       // unlikely
         t2 = a1 + s0

    loc_0x80521200: // orphan
         goto 0x80521208
         v0 = , unsigned  byte [t2 + 0x11]

    loc_0x80521208: // orphan
         byte [v1 + 6] = v0
         halfword [a0 + 0xe] = v0
         t3 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t4 = lo
         s0 = t4 + s2
         s0 += 0x26
         at = , s0 < 0xfc
         if                       // unlikely
         t5 = a1 + s0

    loc_0x80521234: // orphan
         goto 0x8052123c
         v0 = , unsigned  byte [t5 + 0x11]

    loc_0x8052123c: // orphan
         byte [v1 + 7] = v0
         halfword [a0 + 0x10] = v0
         t6 = byte [a1 + 0xe]
         v0 = 0
         unsigned , hi
         t7 = lo
         s0 = t7 + s2
         s0 += 0x27
         at = , s0 < 0xfc
         if                       // unlikely
         t8 = a1 + s0

    loc_0x80521268: // orphan
         goto 0x80521270
         v0 = , unsigned  byte [t8 + 0x11]

    loc_0x80521270: // orphan
         byte [v1 + 8] = v0
         halfword [a0 + 0x12] = v0
         v0 = , unsigned  byte [a1 + 0x10e]
         if                       // likely
         t9 = v0 + 1

    loc_0x80521284: // orphan
         goto 0x80521290
         byte [a1 + 0x10e] = 0

    loc_0x8052128c: // orphan
         byte [a1 + 0x10e] = t9

    loc_0x80521290: // orphan
         t3 = halfword [a1 + 0]
         t1 = byte [a1 + 0xe]
         t4 = t3 + 0x3d
         halfword [a1 + 0] = t4
         t5 = halfword [a1 + 0]
         t2 = t1 + 1
         byte [a1 + 0xe] = t2
         at = , t5 < -0x3c
         bnel at, 0, 0x80521124   // unlikely
         t8 = , unsigned  byte [a1 + 0x10e]

    loc_0x805212b8: // orphan
         s6 = , unsigned  byte [a1 + 0x10e]
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

    loc_0x8052de2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052de38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052de44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052de50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052f240: // orphan
         a0 = 0 + 0xff
         a1 = 0 + 0x80
         t1 = v1 & 0x80
         if                       // likely
         v0 = v1 & 0xffff

    loc_0x8052f2e0: // orphan
         call 0x80049628          // 0x80049628(0x0, 0x0, 0x0, 0x0)
         a2 = 0 - 0x5e29
         a0 = 0 + 0xff
         a1 = 0 + 0xff
         a2 = 0 + 0xff
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x0)
         a3 = 0 + 0xff
         t6 = byte [s1 + 0xe]
         s3 += 1
         bnel t6, 0, 0x8052f240   // likely
         v1 = byte [s0 + 0xe]

    loc_0x8052f30c: // orphan
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x0, 0x0, 0x0)
         a1 = 0
         s6 = 0x8fc0 << 16
         s7 = 0x8fc0 << 16
         s7 += 0x2764
         s6 += 0x25c0
         v0 = 0
         s4 = 0
         s3 = 0 + 0xf
         s0 = 0
         s1 = 0
         s2 = s6
         div 0, s0, s5
         t9 = lo
         t8 = 0x8fc1 << 16
         t8 = , unsigned  halfword [t8 - 0x3898]
         unsigned , hi
         t1 = 0x8fc1 << 16
         t1 = , unsigned  halfword [t1 - 0x3896]
         t7 = t8 + s1
         if                       // unlikely
         

    loc_0x805337e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805337f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805337fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533808: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533814: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533820: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053382c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533838: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533844: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533850: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053385c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533868: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533874: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533880: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053388c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805338f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533904: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533910: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053391c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533934: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053394c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8053397c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533988: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533994: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805339f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533a9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533aa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533ab4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80533ac0: // orphan
         if                       // unlikely

    loc_0x80536ed0: // orphan
         sync
         daddi t6, t3, -0x66d1
         synci -0x2cc1, t4
         sd t7, -0x2831, s3

    loc_0x805375dc: // orphan
         t7 = s7 | 0xb03f
         pref 0x11, 0x3d0f, t5
         sync 2
         call 0x85ffa63c          // 0x85ffa63c(0x0, 0x0, 0x0, 0x0)
         sdc1 f31, 0x78f, t9
         synci 0xb3f, v1
         goto 0x8a7c35fc
         goto 0x893c1e3c

    loc_0x80537658: // orphan
         ld 0, -0x3211, a0

    loc_0x80537674: // orphan
         sync 5
         goto 0x8fbc35fc

    loc_0x80537890: // orphan
         pref 0xf, -0x3042, sp
         call 0x8bf8303c          // 0x8bf8303c(0x0, 0x0, 0x0, 0x0)
         goto 0x8afc303c

    loc_0x805379dc: // orphan
         goto 0x81083efc
         goto 0x80fc2404

    loc_0x80537ad4: // orphan
         gp = , unsigned  , s2 < 0x30a
         

    loc_0x80537af8: // orphan
         
         ldr t7, 0x5a0f, k1
         t3 = , unsigned  , s2 < 0x405f
         call 0x843474b8          // 0x843474b8(0x0, 0x0, 0x0, 0x0)
         call 0x883c2c34          // 0x883c2c34(0x0, 0x0, 0x0, 0x0)
         t7 = 0 + 0xc50

    loc_0x80537b40: // orphan
         t4 = , unsigned  , t0 < 0x4e51
         goto 0x8c3c3440
         call 0x8c3ffc00          // 0x8c3ffc00(0x0, 0x0, 0x0, 0x0)

    loc_0x80537d8c: // orphan
         s1 = t7 - 0x429d

    loc_0x80537ff4: // orphan
         madd a1, a1
         
         vmulu s6, 0, t7
         dsra32 fp, ra, 0

    loc_0x80538230: // orphan
         s0 = halfword [s0 + 0x427f]
         t7 = byte [a1 + 0x2c80]
         ra = byte [a1 - 0x4e00]
         t6 -= 0x60f0
         swl t7, 0x137d, s0
         if                       // likely
         t7 = , s2 < 0x700f

    loc_0x8053826c: // orphan
         ra = byte [0 + 0x101e]
         t7 = , unsigned  byte [at + 0x1faf]
         ra = , unsigned  byte [at + 0x16cf]

    loc_0x805382d8: // orphan
         t6 = s7 | 0x7950
         if                       // unlikely
         ra = halfword [t5 + 0x172f]

    loc_0x80538304: // orphan
         ra -= 0x5cd0
         if                       // likely
         [k1 - 0x658f] = s0

    loc_0x80538430: // orphan
         call 0x8bf88800          // 0x8bf88800(0x0, 0x0, 0x0, 0x0)
         fp = [t8 + 0x25ed]
         byte [0 - 0x7751] = t7
         swl t7, 0x198f, t6

    loc_0x8053847c: // orphan
         lld t7, 0xf, k0

    loc_0x805384f8: // orphan
         call fcn.84011c00
         halfword [ra - 0x5651] = t6

    loc_0x80538694: // orphan
         if                       // likely

    loc_0x805388d0: // orphan
         addq_s.ph a1, k1, at
         ra = byte [t7 + 0x44b0]
         subu_s.ph t3, a3, 0
         snei a0, ra, 0xb9
         [s3 + 0x39e0] = s0
         lwl ra, 0x2481, t6
         ra = , unsigned  byte [v0 + 0x1ea0]
         ra = [t4 + 0x2e01]
         
         lld at, -0x65e3, s1

    loc_0x805389a4: // orphan
         if                       // likely

    loc_0x80538ad0: // orphan
         subs_s.w w13, w17, w0
         ra = s7 & 0x1ff
         lwl t6, 0x21ff, ra
         s2 = [s4 + 0x40ff]
         sdl ra, 0x11ff, t7
         halfword [t5 - 0x7f61] = sp
         beql sp, ra, 0x80520ee8  // unlikely
         sdl ra, 0x1c5c, a1

    loc_0x80538af0: // orphan
         ra = , unsigned  byte [t7 - 0x4e01]
         byte [t7 - 0x63cf] = ra
         ra = t7 + 0x1ff
         swr at, 0x3e91, t2
         s1 = [a0 - 0x5ff1]
         ldr s1, 0x288f, a1
         ldr at, -0x4762, a1

    loc_0x80538b1c: // orphan
         if                       // likely
         call 0x8ffc8bfc          // 0x8ffc8bfc(0x0, 0x0, 0x0, 0x0)

    loc_0x80538b24: // orphan
         t7 = , unsigned  byte [k1 + 0x7ab0]
         lld ra, 0x15ff, s7
         sdl ra, -0x2d31, s7
         sdl ra, -0x1ce1, s7
         fp = , unsigned  , t7 < -0x5cb1
         sdl ra, -0x6503, k0

    loc_0x80538b98: // orphan
         lwu s2, -0x3ef4, 0
         sc t7, 0x1b33, 0
         t4 = , unsigned  byte [t1 - 0x5fd1]
         t7 = , unsigned  byte [0 - 0x5761]

    loc_0x80538c94: // orphan
         lwu t7, -0x5ef1, ra

    loc_0x80538dd0: // orphan
         if                       // likely
         t6 = sp + 0x1f3d

    loc_0x80538dd8: // orphan
         [s7 + 0x233e] = ra

    loc_0x80539008: // orphan
         ra = [t9 + 0xfff]
         goto 0x8ffeb4bc

    loc_0x805391bc: // orphan
         goto 0x86fd66fc
         t7 = , unsigned  byte [0 + 0x10a0]

    loc_0x80539328: // orphan
         ra = byte [t7 + 0x1923]
         byte [t7 + 0x40ff] = ra

    loc_0x80539364: // orphan
         a0 = , unsigned  , s0 < -0x5fa1
         beql s7, sp, 0x80539b68  // unlikely
         ldl s4, 0x43ff, a3

    loc_0x805395a8: // orphan
         bbit032 ra, 0x1b, 0x80530598
         bbit032 ra, 0x1b, 0x8054f3b4
         k1 = ra ^ 0x8f05

    loc_0x805396d4: // orphan
         sd t7, 0x3e3d, gp
         ldr ra, -0x70ca, ra

    loc_0x80539750: // orphan
         s4 = at | 0x3333

    loc_0x805399a4: // orphan
         t5 = k0 | 0x325d
         t8 = at ^ 0x3fef

    loc_0x80539c50: // orphan
         lwl sp, 0xa38, s2
         ra = t1 | 0x6fbf
         cache 0xf, -0xc1, k1

    loc_0x80539c9c: // orphan
         sync 0x1f

    loc_0x80539cd8: // orphan
         sd ra, 0x3eff, fp

    loc_0x80539f00: // orphan
         k0 = s1 ^ 0x3ccf

    loc_0x80539f2c: // orphan
         lwu s5, 0x6fff, t9
         t7 = [gp - 0x81]
         ra = t1 | 0x3f2b
         cache 0x1f, 0x3fbf, t9

    loc_0x8053a078: // orphan
         ra = a3 & 0x3f3c

    loc_0x8053a208: // orphan
         lwu ra, 0x5f33, s7
         [k1 + 0x353e] = t7

    loc_0x8053af0c: // orphan
         if                       // likely
         sdc1 f22, -0x8a, s6

    loc_0x8053af14: // orphan
         if                       // likely
         sc fp, 0x205e, sp

    loc_0x8053b368: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x8053b374: // orphan
         if                       // likely
         lld t7, 0x2c41, at

    loc_0x8053b37c: // orphan
         if                       // unlikely
         a3 = a1 + 0x1f92

    loc_0x8053b384: // orphan
         lld s7, 0x10a7, a2
         sd s0, 0x1de, ra

    loc_0x8053b444: // orphan
         lwu a2, 0x1f16, t6
         pref 8, -0x2629, s7
         ld ra, 0x167d, s4
         pref 0xf, -0x1149, s6
         if                       // unlikely
         sd ra, 0x1e3e, s7

    loc_0x8053b45c: // orphan
         bbit132 s7, 0x17, 0x8053f46c
         pref 0x10, -0x1b99, gp

    loc_0x8053b54c: // orphan
         if                       // unlikely
         ld s7, 0x1000, fp

    loc_0x8053b554: // orphan
         swc1 f24, 0x3000, a0
         goto 0x8cfc3530

    loc_0x805407d0: // orphan
         daddi t7, gp, -0x15cd
         call 0x860023fc          // 0x860023fc(0x0, 0x0, 0x0, 0x0)

    loc_0x8054f390: // orphan
         beql 0, t7, 0x80564110   // likely
         ra = at & 0x38ff

    loc_0x805582cc: // orphan
         bbit032 ra, 7, 0x80566a6c

}

*/
