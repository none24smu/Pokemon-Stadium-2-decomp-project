/*
 * Function: 0x80259060
 * ROM Offset: 0x0015a060
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80259060 (int esi, int edx) {
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
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
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
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
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
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
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.80259060 (int esi, int edx) {
    loc_0x80239200:
        s6 = [sp + 0x38]
        s7 = [sp + 0x3c]
        fp = [sp + 0x40]
        ret
        sp += 0x80
         // (break)
    loc_0x802392e4: // orphan
             a1 = s1
             a2 = [sp + 0x3c]
             call fcn.82604c40
             a3 = 0 + 0x14
             t1 = , unsigned  halfword [v0 + 0x40]
             v1 = v0 + 0x30
             s0 = v1
             at = , unsigned  , t1 < 8
             if                       // likely
             t1 <<= 2

    loc_0x8023930c: // orphan
         at = 0x8261 << 16
         at += t1
         t1 = [at + 0x5984]
         goto t1
         

    loc_0x802393d8: // orphan
         t2 = [t2 + 0x5780]
         t1 = halfword [v1 + 0x12]
         at = , t1 < t2
         beql at, 0, 0x802393f8   // unlikely
         halfword [v1 + 0x10] = t3

    loc_0x802393ec: // orphan
         goto 0x80239588
         halfword [v1 + 0x14] = s2

    loc_0x802393f8: // orphan
         halfword [v1 + 0x12] = 0
         goto 0x80239588
         halfword [v1 + 0x14] = s2

    loc_0x80239468: // orphan
         break 6

    loc_0x80239588: // orphan
         t9 = halfword [s0 + 0x10]

    loc_0x8023958c: // orphan
         s1 += 1
         at = , s1 < 2
         if                       // likely
         

    loc_0x8023959c: // orphan
         [sp + 0x50] = 0

    loc_0x802395a0: // orphan
         bnel at, 0, 0x802392e4   // unlikely
         a0 = 0 + 6               // arg1

    loc_0x802395a8: // orphan
         t1 = [sp + 0x50]
         beql t1, 0, 0x802395d8   // likely
         t4 = [sp + 0x50]

    loc_0x802395b4: // orphan
         t0 = halfword [s4 + 6]
         t2 = t0 + 1
         halfword [s4 + 6] = t2
         t3 = halfword [s4 + 6]
         at = , t3 < 0xa
         beql at, 0, 0x802395d8   // unlikely
         t4 = [sp + 0x50]

    loc_0x802395d0: // orphan
         [sp + 0x50] = 0
         t4 = [sp + 0x50]

    loc_0x802395d8: // orphan
         beql t4, 0, 0x80239738   // likely
         t0 = halfword [s4 + 2]

    loc_0x802395e0: // orphan
         t6 = [s4 + 0x110]
         v0 = , unsigned  halfword [s4 + 4]
         a0 = 0 + 6               // arg1
         t7 = [t6 + 0xc]
         a1 = 0
         a3 = 0 + 0x14            // arg4
         if                       // unlikely
         t8 = v0 & 0x800

    loc_0x80239600: // orphan
         if                       // unlikely
         t5 = 0 + 9

    loc_0x80239608: // orphan
         halfword [s4 + 2] = t5
         halfword [s4 + 6] = 0
         halfword [s4 + 0x18] = 0
         a2 = [sp + 0x3c]
         a0 = 0 + 6               // arg1
         a1 = 0
         call fcn.82604c40
         a3 = 0 + 0x14
         t9 = halfword [s4 + 0x18]
         s1 = 0
         s0 = s4
         t1 = t9 << 2
         t0 = s4 + t1
         [t0 + 0x34f4] = v0
         t2 = halfword [s4 + 0x18]
         t3 = t2 + 1
         halfword [s4 + 0x18] = t3
         t4 = halfword [s4 + 0x18]
         if                       // unlikely
         

    loc_0x80239658: // orphan
         call fcn.826078b4
         a0 = [s0 + 0x34f4]
         t6 = halfword [s4 + 0x18]
         s1 += 1
         s0 += 4
         at = , s1 < t6
         if                       // unlikely
         

    loc_0x80239678: // orphan
         goto 0x8023972c
         

    loc_0x80239680: // orphan
         t7 = v0 & 0x10
         if                       // likely
         t5 = 0 + 0x13

    loc_0x8023968c: // orphan
         t8 = 0 + 0xe
         goto 0x8023969c
         halfword [s4 + 2] = t8

    loc_0x80239698: // orphan
         halfword [s4 + 2] = t5

    loc_0x8023969c: // orphan
         halfword [s4 + 6] = 0
         halfword [s4 + 0x18] = 0
         call fcn.82604c40
         a2 = [sp + 0x3c]
         t9 = halfword [s4 + 0x18]
         a0 = 0 + 6
         a1 = 0 + 1
         t1 = t9 << 2
         t0 = s4 + t1
         [t0 + 0x34f4] = v0
         t2 = halfword [s4 + 0x18]
         a3 = 0 + 0x14
         t3 = t2 + 1
         halfword [s4 + 0x18] = t3

    loc_0x802396d4: // orphan
         call fcn.82604c40
         a2 = [sp + 0x3c]
         t4 = halfword [s4 + 0x18]
         s1 = 0
         s0 = s4
         t6 = t4 << 2
         t7 = s4 + t6
         [t7 + 0x34f4] = v0
         t8 = halfword [s4 + 0x18]
         t5 = t8 + 1
         halfword [s4 + 0x18] = t5
         t9 = halfword [s4 + 0x18]
         if                       // unlikely
         

    loc_0x8023970c: // orphan
         call fcn.826078b4
         a0 = [s0 + 0x34f4]
         t1 = halfword [s4 + 0x18]
         s1 += 1
         s0 += 4
         at = , s1 < t1
         if                       // likely
         

    loc_0x8023972c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x69
         t0 = halfword [s4 + 2]

    loc_0x80239738: // orphan
         at = 0 + 8
         beql t0, at, 0x80239750  // unlikely
         ra = [sp + 0x34]

    loc_0x80239744: // orphan
         call fcn.82602708
         a0 = [s4 + 0x110]
         ra = [sp + 0x34]

    loc_0x80239750: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         ret
         sp += 0x68

    loc_0x802399f4: // orphan
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x802399fc: // orphan
         if                       // unlikely
         

    loc_0x80239a04: // orphan
         break 6

    loc_0x80239a08: // orphan
         if                       // unlikely
         halfword [s2 + 0x10] = v0

    loc_0x80239a10: // orphan
         t8 = halfword [s2 + 0xe]
         at = , t8 < a2
         beql at, 0, 0x80239ad4   // likely
         t4 = halfword [s2 + 6]

    loc_0x80239a20: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x76
         goto 0x80239ad4
         t4 = halfword [s2 + 6]

    loc_0x80239ad0: // orphan
         t4 = halfword [s2 + 6]

    loc_0x80239ad4: // orphan
         at = , t4 < s0
         bnel at, 0, 0x80239c48   // unlikely
         t9 = halfword [s2 + 2]

    loc_0x80239ae0: // orphan
         t5 = [s2 + 0x110]
         s0 = s2 + 0x114
         a2 = s0
         t6 = [t5 + 0xc]
         a0 = 0 + 6               // arg1
         a1 = 0
         if                       // unlikely
         a3 = 0 + 0x14            // arg4

    loc_0x80239b00: // orphan
         t7 = , unsigned  halfword [s2 + 4]
         t9 = 0 + 9
         t8 = t7 & 0x800

    loc_0x80239b0c: // orphan
         bnel t8, 0, 0x80239b90   // unlikely
         t9 = , unsigned  halfword [s2 + 4]

    loc_0x80239b14: // orphan
         halfword [s2 + 2] = t9
         halfword [s2 + 6] = 0
         halfword [s2 + 0x18] = 0
         a0 = 0 + 6               // arg1
         a1 = 0
         a2 = s2 + 0x114          // arg3
         call fcn.82604c40
         a3 = 0 + 0x14
         t2 = halfword [s2 + 0x18]
         s0 = 0
         s1 = s2
         t3 = t2 << 2
         t4 = s2 + t3
         [t4 + 0x34f4] = v0
         t5 = halfword [s2 + 0x18]
         t6 = t5 + 1
         halfword [s2 + 0x18] = t6
         t7 = halfword [s2 + 0x18]
         if                       // unlikely
         

    loc_0x80239b64: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]
         t8 = halfword [s2 + 0x18]
         s0 += 1
         s1 += 4
         at = , s0 < t8
         if                       // unlikely
         

    loc_0x80239b84: // orphan
         goto 0x80239c3c
         

    loc_0x80239b8c: // orphan
         t9 = , unsigned  halfword [s2 + 4]

    loc_0x80239b90: // orphan
         t3 = 0 + 0xe
         t4 = 0 + 0x13
         t2 = t9 & 0x10
         beql t2, 0, 0x80239bb0   // likely
         halfword [s2 + 2] = t4

    loc_0x80239ba4: // orphan
         goto 0x80239bb0
         halfword [s2 + 2] = t3

    loc_0x80239bb0: // orphan
         halfword [s2 + 6] = 0
         call fcn.82604c40
         halfword [s2 + 0x18] = 0
         t5 = halfword [s2 + 0x18]
         a0 = 0 + 6
         a1 = 0 + 1
         t6 = t5 << 2
         t7 = s2 + t6
         [t7 + 0x34f4] = v0
         t8 = halfword [s2 + 0x18]
         a2 = s0
         a3 = 0 + 0x14
         t9 = t8 + 1
         call fcn.82604c40
         halfword [s2 + 0x18] = t9
         t2 = halfword [s2 + 0x18]
         s0 = 0
         s1 = s2
         t3 = t2 << 2
         t4 = s2 + t3
         [t4 + 0x34f4] = v0
         t5 = halfword [s2 + 0x18]
         t6 = t5 + 1
         halfword [s2 + 0x18] = t6
         t7 = halfword [s2 + 0x18]
         if                       // unlikely
         

    loc_0x80239c1c: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]
         t8 = halfword [s2 + 0x18]
         s0 += 1
         s1 += 4
         at = , s0 < t8
         if                       // likely
         

    loc_0x80239c3c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x69
         t9 = halfword [s2 + 2]

    loc_0x80239c48: // orphan
         at = 0 + 0xa
         beql t9, at, 0x80239c60  // unlikely
         ra = [sp + 0x24]

    loc_0x80239c54: // orphan
         call fcn.82602708
         a0 = [s2 + 0x110]
         ra = [sp + 0x24]

    loc_0x80239c60: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x80239d08: // orphan
         t2 = halfword [v1 + 0x26]
         a1 = v0 + 0x1a0
         if                       // likely
         t0 = , signed  t9 >> 1

    loc_0x80239d18: // orphan
         at = t9 + 1
         t0 = , signed  at >> 1

    loc_0x80239d20: // orphan
         a2 = v0 + t0
         call fcn.82606784
         a3 = t1 + t2
         goto 0x80239e68
         ra = [sp + 0x24]

    loc_0x80239e04: // orphan
         t4 = halfword [s2 + 0x18]
         t5 = t4 + 1
         halfword [s2 + 0x18] = t5
         t6 = halfword [s2 + 0x18]
         t7 = t6 << 2
         t8 = s2 + t7
         [t8 + 0x34f4] = s1
         t9 = halfword [s2 + 0x18]
         s1 = s2
         t0 = t9 + 1
         halfword [s2 + 0x18] = t0
         t1 = halfword [s2 + 0x18]
         if                       // unlikely
         

    loc_0x80239e3c: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]
         t2 = halfword [s2 + 0x18]
         s0 += 1
         s1 += 4
         at = , s0 < t2
         if                       // likely
         

    loc_0x80239e5c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x69
         ra = [sp + 0x24]

    loc_0x80239e68: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8023a240: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x6a
         goto 0x8023a2d4
         ra = [sp + 0x24]

    loc_0x8023a2d4: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8023a2fc: // orphan
         a2 = s0 + 0x114
         [sp + 0x20] = a2
         a0 = 0 + 8
         a1 = 0
         call fcn.82604c40
         a3 = 0 + 0x14
         [sp + 0x4c] = v0
         a0 = 0 + 9
         a1 = 0
         a2 = [sp + 0x20]
         call fcn.82604c40
         a3 = 0 + 0x14
         [sp + 0x48] = v0
         a0 = 0 + 0xa
         a1 = 0
         a2 = [sp + 0x20]
         call fcn.82604c40
         a3 = 0 + 0x14
         [sp + 0x44] = v0
         t6 = [s0 + 0x110]
         t7 = [t6 + 0]
         [sp + 0x38] = 0
         call 0x82610d14          // 0x82610d14(0xa, 0x0, 0x114, 0x14)
         [sp + 0x3c] = t7
         if                       // likely
         t8 = [sp + 0x48]

    loc_0x8023a364: // orphan
         v0 = halfword [t8 + 6]

    loc_0x8023a368: // orphan
         at = 0 + 2
         beql v0, 0, 0x8023a388   // likely
         v0 = , unsigned  halfword [s0 + 4]

    loc_0x8023a374: // orphan
         if                       // likely
         a3 = 0x8008 << 16

    loc_0x8023a37c: // orphan
         goto 0x8023a57c
         t7 = [sp + 0x38]

    loc_0x8023a388: // orphan
         t9 = v0 & 8
         beql t9, 0, 0x8023a3a4   // likely
         t1 = v0 & 0x40

    loc_0x8023a394: // orphan
         call fcn.8260675c
         a0 = [sp + 0x4c]
         v0 = , unsigned  halfword [s0 + 4]
         t1 = v0 & 0x40

    loc_0x8023a3a4: // orphan
         if                       // unlikely
         

    loc_0x8023a3ac: // orphan
         call fcn.8260675c
         a0 = [sp + 0x44]

    loc_0x8023a3b4: // orphan
         call fcn.8260675c
         a0 = [sp + 0x48]
         goto 0x8023a57c
         t7 = [sp + 0x38]

    loc_0x8023a3c4: // orphan
         a3 += 0x7200
         t2 = [a3 + 0]
         v0 = [sp + 0x48]
         t0 = 0 + 0xc
         t3 = , unsigned  halfword [t2 + 0xc]
         v1 = halfword [v0 + 0x32]
         v0 += 0x30
         t4 = t3 & 0x800
         if                       // unlikely
         a1 = v1

    loc_0x8023a3ec: // orphan
         t5 = v1 - 1
         halfword [v0 + 2] = t5
         v1 = halfword [v0 + 2]
         bgezl v1, 0x8023a40c     // likely
         t6 = [a3 + 0]

    loc_0x8023a400: // orphan
         halfword [v0 + 2] = 0
         v1 = halfword [v0 + 2]

    loc_0x8023a408: // orphan
         t6 = [a3 + 0]

    loc_0x8023a40c: // orphan
         t9 = v1 + 1
         t7 = , unsigned  halfword [t6 + 0xc]
         t8 = t7 & 0x400
         if                       // unlikely
         

    loc_0x8023a420: // orphan
         a0 = halfword [v0 + 4]
         halfword [v0 + 2] = t9
         v1 = halfword [v0 + 2]
         a0 -= 1
         at = , a0 < v1
         if                       // likely
         

    loc_0x8023a43c: // orphan
         halfword [v0 + 2] = a0
         v1 = halfword [v0 + 2]

    loc_0x8023a444: // orphan
         unsigned , hi
         a0 = [v0 + 8]
         t1 = lo
         a2 = a0 + t1
         t2 = halfword [a2 + 0]
         if                       // likely
         

    loc_0x8023a460: // orphan
         halfword [v0 + 2] = a1
         v1 = halfword [v0 + 2]
         unsigned , hi
         t3 = lo
         a2 = a0 + t3
         

    loc_0x8023a478: // orphan
         if                       // likely
         a0 = 0 + 1

    loc_0x8023a480: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = a2
         a3 = 0x8008 << 16
         a3 += 0x7200
         a2 = [sp + 0x28]

    loc_0x8023a494: // orphan
         t4 = [a3 + 0]
         t7 = 0 + 1
         t5 = , unsigned  halfword [t4 + 8]

    loc_0x8023a4a0: // orphan
         t6 = t5 & 0x8000
         beql t6, 0, 0x8023a57c   // likely
         t7 = [sp + 0x38]

    loc_0x8023a4ac: // orphan
         [sp + 0x38] = t7
         halfword [s0 + 6] = 0
         a0 = , unsigned  halfword [a2 + 6]
         call fcn.82604390
         [sp + 0x28] = a2
         t8 = [s0 + 0x110]
         a2 = [sp + 0x28]
         at = 0 + 7
         [t8 + 0x9c] = v0
         v1 = [s0 + 0x110]
         t9 = [v1 + 0x9c]
         a0 = v1 + 0x900
         bnel t9, at, 0x8023a554  // likely
         t4 = halfword [a2 + 2]

    loc_0x8023a4e4: // orphan
         call 0x80054e10          // 0x80054e10(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = a2
         if                       // unlikely
         a2 = [sp + 0x28]

    loc_0x8023a4f4: // orphan
         t1 = halfword [a2 + 2]
         v1 = [sp + 0x3c]
         beql t1, 0, 0x8023a518   // likely
         v1 = [sp + 0x3c]

    loc_0x8023a504: // orphan
         v0 = halfword [v1 + 0x8c]
         if                       // unlikely
         t2 = v0 - 1

    loc_0x8023a510: // orphan
         halfword [v1 + 0x8c] = t2

    loc_0x8023a514: // orphan
         v1 = [sp + 0x3c]

    loc_0x8023a518: // orphan
         a0 = , unsigned  byte [v1 + 7]
         call 0x826058cc          // 0x826058cc(0x0, 0x0, 0x0, 0x0)
         [sp + 0x28] = a2
         if                       // unlikely
         a2 = [sp + 0x28]

    loc_0x8023a52c: // orphan
         goto 0x8023a538
         a0 = 0 + 1

    loc_0x8023a534: // orphan
         a0 = 0

    loc_0x8023a538: // orphan
         t3 = [sp + 0x3c]
         a1 = halfword [t3 + 0x8c]
         call 0x8006cc18          // 0x8006cc18(0x0, 0xffff, 0x0, 0x0)
         [sp + 0x28] = a2
         goto 0x8023a570
         a2 = [sp + 0x28]

    loc_0x8023a554: // orphan
         t5 = [sp + 0x3c]
         if                       // likely
         

    loc_0x8023a560: // orphan
         v0 = halfword [t5 + 0x8c]
         if                       // likely
         t6 = v0 - 1

    loc_0x8023a56c: // orphan
         halfword [t5 + 0x8c] = t6

    loc_0x8023a570: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = [a2 + 8]
         t7 = [sp + 0x38]

    loc_0x8023a57c: // orphan
         t8 = 0 + 0xf
         a0 = 0 + 8
         if                       // likely
         a1 = 0

    loc_0x8023a58c: // orphan
         halfword [s0 + 2] = t8
         halfword [s0 + 6] = 0
         halfword [s0 + 0x18] = 0
         a2 = [sp + 0x20]
         call fcn.82604c40
         a3 = 0 + 0x14
         t9 = halfword [s0 + 0x18]
         a0 = 0 + 0xa
         a1 = 0
         t1 = t9 << 2
         t2 = s0 + t1
         [t2 + 0x34f4] = v0
         t3 = halfword [s0 + 0x18]
         a3 = 0 + 0x14
         t4 = t3 + 1
         halfword [s0 + 0x18] = t4
         call fcn.82604c40
         a2 = [sp + 0x20]
         t6 = halfword [s0 + 0x18]
         a0 = 0 + 9
         a1 = 0
         t5 = t6 << 2
         t7 = s0 + t5
         [t7 + 0x34f4] = v0
         t8 = halfword [s0 + 0x18]
         a3 = 0 + 0x14
         t9 = t8 + 1
         halfword [s0 + 0x18] = t9
         call fcn.82604c40
         a2 = [sp + 0x20]
         t1 = halfword [s0 + 0x18]
         v1 = 0
         a0 = s0
         t2 = t1 << 2
         t3 = s0 + t2
         [t3 + 0x34f4] = v0
         t4 = halfword [s0 + 0x18]
         t6 = t4 + 1
         halfword [s0 + 0x18] = t6
         a1 = halfword [s0 + 0x18]

    loc_0x8023a62c: // orphan
         blezl a1, 0x8023a664     // likely
         ra = [sp + 0x1c]

    loc_0x8023a634: // orphan
         v0 = [a0 + 0x34f4]
         v1 += 1
         beql v0, 0, 0x8023a658   // likely
         at = , v1 < a1

    loc_0x8023a644: // orphan
         t5 = , unsigned  halfword [v0 + 4]
         t7 = t5 | 1
         halfword [v0 + 4] = t7
         a1 = halfword [s0 + 0x18]
         at = , v1 < a1

    loc_0x8023a658: // orphan
         if                       // unlikely
         a0 += 4

    loc_0x8023a660: // orphan
         ra = [sp + 0x1c]

    loc_0x8023a664: // orphan
         s0 = [sp + 0x18]
         sp += 0x50
         ret
         

    loc_0x8023a6c8: // orphan
         
         goto 0x8023a6dc
         a1 = 0

    loc_0x8023a6dc: // orphan
         t0 = 0x8261 << 16
         t0 = halfword [t0 + 0x57b0]
         t9 = halfword [s2 + 6]
         at = , t9 < t0
         bnel at, 0, 0x8023a794   // likely
         ra = [sp + 0x24]

    loc_0x8023a6f4: // orphan
         beql a1, 0, 0x8023a794   // likely
         ra = [sp + 0x24]

    loc_0x8023a6fc: // orphan
         v0 = [s2 + 0x110]
         at = 0 + 7
         s1 = 0
         t1 = [v0 + 0x9c]
         bnel t1, at, 0x8023a738  // likely
         v0 = 0

    loc_0x8023a714: // orphan
         call 0x80054e10          // 0x80054e10(0x0, 0x0, 0x0, 0x0)
         a0 = v0 + 0x900
         if                       // likely
         

    loc_0x8023a724: // orphan
         goto 0x8023a738
         v0 = 0 + 1

    loc_0x8023a72c: // orphan
         goto 0x8023a738
         v0 = 0

    loc_0x8023a738: // orphan
         if                       // likely
         t3 = 0 + 0x13

    loc_0x8023a740: // orphan
         t2 = 0 + 0x10
         halfword [s2 + 2] = t2
         goto 0x8023a758
         halfword [s2 + 6] = 0

    loc_0x8023a750: // orphan
         halfword [s2 + 2] = t3
         halfword [s2 + 6] = 0

    loc_0x8023a758: // orphan
         t4 = halfword [s2 + 0x18]
         s0 = s2
         if                       // unlikely
         

    loc_0x8023a768: // orphan
         call fcn.826078b4
         a0 = [s0 + 0x34f4]
         t5 = halfword [s2 + 0x18]
         s1 += 1
         s0 += 4
         at = , s1 < t5
         if                       // likely
         

    loc_0x8023a788: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x69
         ra = [sp + 0x24]

    loc_0x8023a794: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x80259060: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8025906c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259078: // orphan
         if                       // unlikely
         

    loc_0x80259080: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80259094: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590b8: // orphan
         if                       // unlikely
         

    loc_0x802590c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802590fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259108: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259120: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8025912c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259144: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259150: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8025915c: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80259190: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8025919c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802591a8: // orphan
         
         
         if                       // unlikely
         

    loc_0x802591b8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802591d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802591dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802591e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802591f4: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x8025920c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8025921c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80259230: // orphan
         if                       // unlikely
         

    loc_0x80259238: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80259258: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80259270: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8025927c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259288: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80259294: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802592e8: // orphan
         if                       // unlikely

    loc_0x80277658: // orphan
         a0 = 0x5043 << 16
         call 0x80002bf8          // 0x80002bf8(0x50430000, 0x0, 0x0, 0x0)
         a0 |= 0x5345
         v1 = 0x8823 << 16
         v1 += 0x4680
         t9 = [v1 + 0x1c]
         call t9                  // 0xffffffff(0x50435345, 0x0, 0x0, 0x0)
         
         v1 = 0x8823 << 16
         v1 += 0x4680
         t7 = 0 + 5
         goto 0x80277784
         [v1 + 0x2c] = t7

    loc_0x80277694: // orphan
         goto 0x80277788
         ra = [sp + 0x24]

    loc_0x802776fc: // orphan
         bnel at, 0, 0x80277788   // unlikely
         ra = [sp + 0x24]

    loc_0x80277704: // orphan
         halfword [v1 + 4] = t8
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         [v1 + 0x2c] = t0
         goto 0x80277788
         ra = [sp + 0x24]

    loc_0x80277784: // orphan
         ra = [sp + 0x24]

    loc_0x80277788: // orphan
         sp += 0x60
         ret
         

    loc_0x80277790: // orphan
         
         sp -= 0x38
         [sp + 0x3c] = a1
         a3 = [sp + 0x3c]
         [sp + 0x38] = a0
         a0 -= 7                  // arg1
         a3 -= 7                  // arg4
         a3 <<= 0x10              // arg4
         a0 <<= 0x10              // arg1
         [sp + 0x2c] = ra
         a0 = , signed  a0 >> 0x10 // arg1
         a3 = , signed  a3 >> 0x10 // arg4
         t6 = 0 + 0x100
         t7 = 0 + 0xa0
         t8 = 0 + 0x400
         t9 = 0 + 1
         [sp + 0x24] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         [sp + 0x30] = a3
         [sp + 0x34] = a0
         a1 = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044424          // 0x80044424(0xfffffff9, 0x0, 0x0, 0xfffffff9)
         a2 = 0 + 8
         t0 = 0 + 0x300
         t1 = 0 + 0x400
         t2 = 0 + 0x400
         t3 = 0 + 1
         [sp + 0x24] = t3
         [sp + 0x1c] = t2
         [sp + 0x18] = t1

    loc_0x80277818: // orphan
         [sp + 0x10] = t0
         a0 = halfword [sp + 0x36]
         a1 = halfword [sp + 0x32]
         a2 = 0 + 8
         a3 = 0 + 8
         [sp + 0x14] = 0
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x8, 0x8)
         [sp + 0x20] = 0
         t4 = 0 + 0x2e0
         t5 = 0 + 0x400
         t6 = 0 + 1
         [sp + 0x24] = t6
         [sp + 0x1c] = t5

    loc_0x8027784c: // orphan
         [sp + 0x10] = t4
         a0 = 0
         a1 = halfword [sp + 0x32]
         a2 = halfword [sp + 0x36]
         a3 = 0 + 8
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x0, 0x8)
         [sp + 0x20] = 0
         ra = [sp + 0x2c]
         sp += 0x38
         ret
         

    loc_0x802778c4: // orphan
         [sp + 0x10] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         a2 = 0 + 5               // arg3
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x5, 0x0)
         [sp + 0x34] = a0
         t9 = 0 + 0x200
         t0 = 0 + 0x400
         t1 = 0 + 0x400
         t2 = 0 + 1
         a0 = [sp + 0x34]
         [sp + 0x24] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t0
         [sp + 0x10] = t9
         a1 = halfword [sp + 0x32]
         a2 = 0 + 5
         a3 = 0 + 8
         [sp + 0x14] = 0
         call 0x80044424          // 0x80044424(0x0, 0x0, 0x5, 0x8)
         [sp + 0x20] = 0
         v0 = [sp + 0x38]
         t3 = 0 + 0x27b
         t4 = 0 + 0x2e0
         a2 = t3 - v0
         a0 = v0 + 5
         a0 <<= 0x10
         a2 <<= 0x10
         t5 = 0 + 0x400
         t6 = 0 + 1
         [sp + 0x24] = t6
         [sp + 0x1c] = t5
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x10] = t4
         a1 = halfword [sp + 0x32]
         a3 = 0 + 8
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044424          // 0x80044424(0x5, 0x0, 0x27b, 0x8)
         [sp + 0x20] = 0
         ra = [sp + 0x2c]
         sp += 0x38
         ret
         

    loc_0x8027798c: // orphan
         [sp + 0x44] = ra
         [sp + 0x3c] = s4
         [sp + 0x38] = s3
         [sp + 0x34] = s2
         [sp + 0x30] = s1
         if                       // likely
         [sp + 0x2c] = s0

    loc_0x802779a8: // orphan
         s4 = 0x800d << 16
         s4 += 0x510
         v1 = [s4 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4e38
         t7 = v1 + 8
         [s4 + 0] = t7
         t8 = 0xde00 << 16
         [v1 + 0] = t8
         [v1 + 4] = t9
         v1 = [s4 + 0]
         t4 = 0xe200 << 16
         s1 = 0x8801 << 16
         t3 = v1 + 8
         [s4 + 0] = t3
         t4 |= 0x1e01
         s1 -= 0x133c
         [v1 + 0] = t4
         [v1 + 4] = 0
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1340]
         a1 = 0 + 0x80
         call 0x8004d27c          // 0x8004d27c(-1, 0x80, 0x0, 0x0)
         a2 = 0 + 1
         a1 = 0x8800 << 16
         a1 = , unsigned  byte [a1 + 0x686c]
         call 0x88000578          // 0x88000578(-1, 0xff, 0x1, 0x0)
         a0 = sp + 0xac
         a0 = , unsigned  byte [sp + 0xac]
         a1 = , unsigned  byte [sp + 0xad]
         call 0x88002c2c          // 0x88002c2c(0x0, 0x0, 0x1, 0x0)
         a2 = , unsigned  byte [sp + 0xae]
         t5 = [s5 + 0x2c]         // t0
         at = 0 + 3
         beql t5, at, 0x80277afc  // unlikely
         v1 = [s4 + 0]

    loc_0x80277a40: // orphan
         call 0x8004ca10          // 0x8004ca10(0x0, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         s0 = v0
         call 0x8004ca10          // 0x8004ca10(0xffff0000, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         mtc1 v0, f6
         at = 0x4480 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x8823 << 16
         lwc1 f12, 0x3e54, at
         mtc1 s0, f18
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f10, f8, f2
         cvt.s.w f6, f18
         div.s f16, f10, f12
         mul.s f8, f2, f6

    loc_0x80277a88: // orphan
         div.s f10, f8, f12
         c.lt.s f4, f16
         
         bc1fl 0x80277ab0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80277ab8
         add.s f4, f0, f10

    loc_0x80277ab8: // orphan
         t6 = halfword [s5 + 0]
         t7 = 0 + 0x3c
         a0 = 0
         trunc.w.s f16, f4
         a3 = t7 - t6
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         mfc1 t9, f16
         a1 = 0
         a2 = 0 + 0x181
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x181, 0xffff003d)
         [sp + 0x18] = t9
         v1 = [s4 + 0]

    loc_0x80277afc: // orphan
         t4 = 0xe700 << 16
         s2 = 0xdc96 << 16

    loc_0x80277b04: // orphan
         t3 = v1 + 8
         [s4 + 0] = t3
         [v1 + 4] = 0
         [v1 + 0] = t4
         v1 = [s4 + 0]
         s2 |= 0xffff
         t7 = 0xfb00 << 16
         t5 = v1 + 8
         [s4 + 0] = t5
         [v1 + 4] = s2
         [v1 + 0] = t7
         call 0x8004ca10          // 0x8004ca10(0x0, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         s0 = v0
         call 0x8004ca10          // 0x8004ca10(0xfb000000, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         mtc1 v0, f6
         at = 0x4377 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         at = 0x4480 << 16
         mtc1 at, f12
         mtc1 s0, f16

    loc_0x80277b60: // orphan
         mtc1 0, f18
         mul.s f10, f8, f12
         cvt.s.w f6, f16
         div.s f4, f10, f2
         mul.s f8, f12, f6
         div.s f10, f8, f2
         c.lt.s f18, f4
         
         bc1f 0x80277b94
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80277ba4
         add.s f18, f0, f10

    loc_0x80277ba4: // orphan
         t6 = halfword [s5 + 4]
         t8 = 0 + 0x130
         a0 = 0 + 0x189
         trunc.w.s f4, f18
         a3 = t8 - t6
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         mfc1 t3, f4
         a1 = 0
         a2 = 0 + 0xf7
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x189, 0x0, 0xf7, 0x130)
         [sp + 0x18] = t3
         t4 = [s5 + 0x2c]         // t0
         at = 0 + 3
         if                       // likely
         t5 = 0x8823 << 16

    loc_0x80277bf4: // orphan
         t5 = [t5 + 0x4564]
         at = 0 + 2
         t7 = [t5 + 0x1c]
         bnel t7, at, 0x80277d14  // likely
         a0 = 0 + 0xdc

    loc_0x80277c08: // orphan
         v1 = [s4 + 0]
         t6 = 0xe700 << 16
         t4 = 0xdcdc << 16
         t8 = v1 + 8
         [s4 + 0] = t8
         [v1 + 4] = 0
         [v1 + 0] = t6
         v1 = [s4 + 0]
         t4 |= 0xb4ff
         t3 = 0xfb00 << 16
         t9 = v1 + 8
         [s4 + 0] = t9
         [v1 + 4] = t4
         [v1 + 0] = t3
         call 0x8004ca10          // 0x8004ca10(0x0, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         s0 = v0
         call 0x8004ca10          // 0x8004ca10(0xfb000010, 0x0, 0x0, 0x0)
         a0 = [s1 + 0]
         mtc1 v0, f8
         v1 = 0x8823 << 16

    loc_0x80277c5c: // orphan
         v1 = , unsigned  halfword [v1 + 0x46ca]
         cvt.s.w f10, f8
         at = 0x4480 << 16
         mtc1 at, f18
         v1 -= 0xd
         mtc1 v1, f16
         mtc1 0, f6
         mul.s f4, f10, f18
         mtc1 s0, f10
         at = 0xbf00 << 16
         cvt.s.w f2, f16
         div.s f16, f4, f2
         c.lt.s f6, f16
         
         bc1fl 0x80277cb0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80277cb8
         cvt.s.w f18, f10

    loc_0x80277cb8: // orphan
         at = 0x4480 << 16
         mtc1 at, f8
         a0 = 0x8823 << 16
         a0 = halfword [a0 + 0x46c8]
         a2 = v1 << 0x10
         mul.s f4, f8, f18
         a0 += 5
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         a2 = , signed  a2 >> 0x10
         a1 = 0 + 0x146
         a3 = 0 + 0x53

    loc_0x80277ce8: // orphan
         div.s f6, f4, f2
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         add.s f16, f0, f6
         trunc.w.s f10, f16
         mfc1 t7, f10
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x0)
         [sp + 0x18] = t7

    loc_0x80277d10: // orphan
         a0 = 0 + 0xdc

    loc_0x80277d14: // orphan
         a1 = 0 + 0xdc
         call 0x88002ba0          // 0x88002ba0(0x0, 0xdc, 0x0, 0x0)
         a2 = 0 + 0xb4
         call 0x88200180          // 0x88200180(0x0, 0xdc, 0xb4, 0x0)
         a0 = 0
         t8 = [s5 + 0x2c]         // t0
         at = 0 + 3
         beql t8, at, 0x80277da4  // unlikely
         v1 = [s4 + 0]

    loc_0x80277d38: // orphan
         v1 = [s4 + 0]
         t9 = 0xe700 << 16
         t4 = 0xfb00 << 16
         t6 = v1 + 8
         [s4 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = t9
         v1 = [s4 + 0]
         t5 = 0 + 0x43
         a0 = 0 + 0x188
         t3 = v1 + 8
         [s4 + 0] = t3
         [v1 + 0] = t4
         t7 = , unsigned  byte [sp + 0xac]
         t9 = , unsigned  byte [sp + 0xad]
         t8 = t7 << 0x18
         t7 = , unsigned  byte [sp + 0xae]
         t3 = t9 << 0x10
         t4 = t8 | t3

    loc_0x80277d84: // orphan
         t6 = t7 << 8
         t9 = t4 | t6
         t8 = t9 | 0xff
         [v1 + 4] = t8
         t3 = halfword [s5 + 0]
         call 0x88205114          // 0x88205114(0x0, 0x0, 0x0, 0x0)
         a1 = t5 - t3
         v1 = [s4 + 0]

    loc_0x80277da4: // orphan
         t4 = 0xe700 << 16
         t9 = 0xfb00 << 16
         t7 = v1 + 8
         [s4 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t4
         v1 = [s4 + 0]
         t5 = 0 + 0x137
         a0 = 0 + 0x184
         t6 = v1 + 8
         [s4 + 0] = t6
         [v1 + 4] = s2
         [v1 + 0] = t9
         t8 = halfword [s5 + 4]
         call 0x88205200          // 0x88205200(0x184, 0x0, 0x0, 0x0)
         a1 = t5 - t8
         t3 = [s5 + 0x2c]         // t0
         at = 0 + 3
         t4 = 0xde00 << 16
         if                       // unlikely
         t6 = 0x8009 << 16

    loc_0x80277df8: // orphan
         v1 = [s4 + 0]
         t6 += 0x4e00
         t5 = 0 + 0x22
         t7 = v1 + 8
         [s4 + 0] = t7
         [v1 + 4] = t6
         [v1 + 0] = t4
         t9 = halfword [s5 + 0]
         a0 = 0x8800 << 16
         t8 = 0x20 << 16
         a2 = t5 - t9
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x10] = t8
         a0 = , unsigned  byte [a0 + 0x686c]
         a1 = 0 + 0x36
         call 0x88000808          // 0x88000808(0xff, 0x36, 0xffff1922, 0x0)
         a3 = 0

    loc_0x80277e40: // orphan
         v1 = [s4 + 0]
         t4 = 0x8009 << 16
         t4 += 0x4f50
         t3 = v1 + 8

    loc_0x80277e50: // orphan
         [s4 + 0] = t3
         t7 = 0xde00 << 16
         [v1 + 0] = t7
         call 0x800498c4          // 0x800498c4(0x0, 0x0, 0x0, 0x0)
         [v1 + 4] = t4
         a0 = 0 + 8
         call 0x800496a4          // 0x800496a4(0x8, 0x0, 0x0, 0x0)
         a1 = 0 + 2
         v1 = [s5 + 0x2c]         // t0
         at = 0 + 3
         a0 = 0x8800 << 16
         if                       // unlikely
         a1 = 0 + 0x52

    loc_0x80277e84: // orphan
         t6 = halfword [s5 + 0]
         t5 = 0 + 0x23
         a3 = 0x8800 << 16
         t9 = 0 + 1
         [sp + 0x10] = t9
         a3 += 0x686d
         a0 = [a0 + 0x687c]
         call 0x80048e30          // 0x80048e30(-1, 0x0, 0x0, 0x8800686d)
         a2 = t5 - t6
         v1 = [s5 + 0x2c]         // t0

    loc_0x80277eac: // orphan
         at = 0 + 3
         if                       // likely
         t8 = 0x8823 << 16

    loc_0x80277eb8: // orphan
         t8 = [t8 + 0x4564]
         at = 0 + 2
         t3 = [t8 + 0x1c]
         bnel t3, at, 0x80277f1c  // likely
         t6 = v1 - 2

    loc_0x80277ecc: // orphan
         call 0x80049668          // 0x80049668(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         call 0x8004989c          // 0x8004989c(0x1, 0x0, 0x0, 0x0)
         a0 = 0 + 0x1a
         t7 = halfword [s5 + 8]
         a1 = 0x8823 << 16
         a1 = halfword [a1 + 0x46c8]
         a3 = 0x8823 << 16
         t4 = t7 << 2
         a3 += t4
         a0 = 0x8800 << 16
         t5 = 0 + 1
         [sp + 0x10] = t5
         a0 = [a0 + 0x687c]
         a3 = [a3 + 0x46d0]
         a2 = 0 + 0x14c
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0x14c, -1)
         a1 += 0xf
         v1 = [s5 + 0x2c]         // t0

    loc_0x80277f18: // orphan
         t6 = v1 - 2

    loc_0x80277f1c: // orphan
         at = , unsigned  , t6 < 6
         if                       // unlikely
         t6 <<= 2

    loc_0x80277f28: // orphan
         at = 0x8823 << 16
         at += t6
         t6 = [at + 0x3e58]
         goto t6
         

    loc_0x80277fb8: // orphan
         at = 0x8823 << 16
         at += t4
         t4 = [at + 0x3e84]
         goto t4
         

    loc_0x80278004: // orphan
         goto 0x80278138
         v1 = [s5 + 0x2c]         // t0

    loc_0x80278030: // orphan
         bnel s3, s1, 0x80278058  // unlikely
         t4 = halfword [s5 + 4]

    loc_0x80278038: // orphan
         t7 = [s5 + 0xc]
         a0 = 0 + 0xff
         a1 = 0 + 0xff
         if                       // likely
         a2 = 0 + 0xff

    loc_0x8027804c: // orphan
         call 0x8004972c          // 0x8004972c(0x0, 0x0, 0x0, 0x0)
         a3 = 0 + 0x64

    loc_0x80278054: // orphan
         t4 = halfword [s5 + 4]

    loc_0x80278058: // orphan
         at = , t4 < 0xf5
         if                       // unlikely
         

    loc_0x80278064: // orphan
         t5 = halfword [s5 + 8]
         t7 = 0x8823 << 16
         t7 += 0x4568
         if                       // unlikely
         t8 = s3 << 2

    loc_0x80278078: // orphan
         v1 = [s5 + 0x2c]         // t0
         at = 0 + 6
         if                       // unlikely
         at = 0 + 3

    loc_0x80278088: // orphan
         bnel v1, at, 0x802780b8  // unlikely
         at = , s0 < 0x23

    loc_0x80278090: // orphan
         t6 = [s5 + 0x28]
         at = 0 + 6
         t9 = 0x8823 << 16
         bnel t6, at, 0x802780b8  // likely
         at = , s0 < 0x23

    loc_0x802780a4: // orphan
         t9 = [t9 + 0x4564]
         at = 0 + 3
         t3 = [t9 + 0x1c]
         if                       // unlikely
         at = , s0 < 0x23

    loc_0x802780b4: // orphan
         at = , s0 < 0x23

    loc_0x802780b8: // orphan
         if                       // likely
         v0 = t8 + t7

    loc_0x802780c0: // orphan
         a0 = 0x8800 << 16
         a0 = [a0 + 0x687c]
         a1 = 0 + 0x193
         a2 = 0 + 0x23
         a3 = [v0 + 0]
         call 0x80048e30          // 0x80048e30(-1, 0x193, 0x23, 0xde000000)
         [sp + 0x10] = s2
         goto 0x80278100
         

    loc_0x802780e4: // orphan
         a0 = 0x8800 << 16
         a0 = [a0 + 0x687c]
         a1 = 0 + 0x193

    loc_0x802780f0: // orphan
         a2 = s0
         a3 = [v0 + 0]
         call 0x80048e30          // "Vq" // 0x80048e30(0x0, 0x0, 0x0, 0xde000000)
         [sp + 0x10] = s2

    loc_0x80278100: // orphan
         bnel s3, s1, 0x80278128  // unlikely
         s3 += 1

    loc_0x80278108: // orphan
         t4 = [s5 + 0xc]
         a0 = 0 + 0xff
         a1 = 0 + 0xff
         if                       // likely
         a2 = 0 + 0xff

    loc_0x8027811c: // orphan
         call 0x8004972c          // "&s" // 0x8004972c(0x0, 0x0, 0x0, 0x0)
         a3 = 0 + 0xff

    loc_0x80278124: // orphan
         s3 += 1

    loc_0x80278128: // orphan
         at = 0 + 5
         if                       // likely
         s0 += 0x20

    loc_0x80278134: // orphan
         v1 = [s5 + 0x2c]         // t0

    loc_0x80278138: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 + 4

    loc_0x80278144: // orphan
         call 0x800496a4          // 0x800496a4(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 2
         a0 = 0 + 0xd
         call 0x8004c874          // 0x8004c874(0xd, 0x2, 0x0, 0x0)
         a1 = 0 + 9
         t9 = 0x8800 << 16
         t9 = , unsigned  halfword [t9 + 0x686a]
         t5 = halfword [s5 + 0]
         t6 = 0 + 0x27
         a3 = 0x8823 << 16
         a3 += 0x3e10
         a0 = 0 + 0x176
         a2 = 0 + 2
         [sp + 0x10] = v0
         [sp + 0x14] = t9
         call 0x800495f8          // 0x800495f8(0x176, 0x9, 0x2, 0x88233e10)
         a1 = t6 - t5
         v1 = [s5 + 0x2c]         // t0

    loc_0x8027818c: // orphan
         at = 0 + 3
         if                       // likely
         t3 = 0x8823 << 16

    loc_0x80278198: // orphan
         t3 = [t3 + 0x4564]
         at = 0 + 2
         a0 = 0 + 8
         t8 = [t3 + 0x1c]
         if                       // likely
         

    loc_0x802781b0: // orphan
         call 0x800496a4          // 0x800496a4(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 2
         a0 = 0x8823 << 16
         call 0x88000080          // 0x88000080(0x88230000, 0x2, 0x0, 0x0)
         a0 += 0x46b0
         a0 = 0 + 0xff
         a1 = 0 + 0xff
         a2 = 0 + 0xff
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x0)
         a3 = v0
         a0 = 0 + 0x1f
         call 0x8004c874          // 0x8004c874(0x1f, 0xff, 0xff, 0x0)
         a1 = 0
         a0 = 0 + 0x17e
         a1 = 0 + 0xcf

    loc_0x802781ec: // orphan
         a2 = 0 + 2
         call 0x80049064          // 0x80049064(0x0, 0x0, 0x2, 0x0)
         a3 = v0

    loc_0x802781f8: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         
         t7 = [s5 + 0x2c]         // t0
         at = 0 + 3
         t4 = 0x8823 << 16
         bnel t7, at, 0x802783dc  // likely
         ra = [sp + 0x44]

    loc_0x80278214: // orphan
         t4 = [t4 + 0x4564]
         at = 0 + 2
         a0 = 0x8823 << 16
         t6 = [t4 + 0x1c]
         bnel t6, at, 0x802783dc  // likely
         ra = [sp + 0x44]

    loc_0x8027822c: // orphan
         call 0x88000080          // 0x88000080(0x0, 0x0, 0x0, 0x0)
         a0 += 0x46bc
         v1 = [s4 + 0]
         t3 = 0x8823 << 16
         t3 += 0x3790
         t5 = v1 + 8
         [s4 + 0] = t5
         t9 = 0xde00 << 16
         s2 = 0x8823 << 16
         t8 = v0 & 0xff
         s0 = 0x8823 << 16
         s1 = 0x8823 << 16
         s3 = 0x8823 << 16
         [v1 + 0] = t9
         [v1 + 4] = t3

    loc_0x80278268: // orphan
         [sp + 0x50] = t8
         s3 += 0x378c
         s1 += 0x3780
         s0 += 0x3770
         s2 += 0x4588

    loc_0x8027827c: // orphan
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x0, 0x0, 0x0)
         a0 = [s2 + 0]
         v1 = [s4 + 0]
         t4 = 0xe700 << 16
         t5 = 0xfb00 << 16
         t7 = v1 + 8
         [s4 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t4
         v1 = [s4 + 0]
         t4 = 0 + 0x400
         t7 = 0 + 0x400
         t6 = v1 + 8
         [s4 + 0] = t6
         [v1 + 0] = t5
         t9 = [sp + 0x50]
         t3 = 0 - 0x10
         t8 = 0 - 0x10
         [v1 + 4] = t9
         t0 = [s2 + 0]
         a1 = , unsigned  halfword [s0 + 2]
         a0 = , unsigned  halfword [s0 + 0]
         a2 = halfword [t0 + 0]
         a3 = halfword [t0 + 2]
         a1 += 2
         a0 += 2
         a0 <<= 0x10
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = t4
         [sp + 0x18] = t7
         [sp + 0x14] = t8
         call 0x80044270          // 0x80044270(0xffffde02, 0x1a, 0xffff, 0xffff)
         [sp + 0x10] = t3
         v1 = [s4 + 0]
         t5 = 0xe700 << 16
         t3 = 0xfb00 << 16
         t6 = v1 + 8
         [s4 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = t5
         v1 = [s4 + 0]
         t8 = 0 - 0x10
         t9 = v1 + 8
         [s4 + 0] = t9
         [v1 + 0] = t3
         t7 = , unsigned  byte [s1 + 2]
         t5 = , unsigned  byte [s1 + 0]
         t4 = t7 << 8
         t7 = , unsigned  byte [s1 + 1]
         t9 = t5 << 0x18
         t3 = t4 | t9
         t4 = [sp + 0x50]
         t6 = t7 << 0x10
         t5 = t3 | t6
         t9 = t5 | t4
         [v1 + 4] = t9
         t0 = [s2 + 0]
         t6 = 0 + 0x400
         t3 = 0 + 0x400
         a2 = halfword [t0 + 0]
         a3 = halfword [t0 + 2]
         t7 = 0 - 0x10
         [sp + 0x14] = t7
         [sp + 0x20] = 0
         [sp + 0x1c] = t6
         [sp + 0x18] = t3
         [sp + 0x10] = t8
         a1 = halfword [s0 + 2]
         call 0x80044270          // "&1" // 0x80044270(0xffffde02, 0x28, 0xffff, 0xffff)
         a0 = halfword [s0 + 0]
         s1 += 3                  // "("
         s2 += 4
         if                       // likely
         s0 += 4

    loc_0x802783b0: // orphan
         t5 = halfword [s5 + 8]
         t9 = halfword [s5 + 4]
         a2 = , unsigned  halfword [s5 + 0x1a]
         t4 = t5 << 5
         a1 = t4 - t9
         a1 += 0x87
         a0 = 0 + 0x18b
         a3 = 0 + 0x24
         call 0x8004b314          // 0x8004b314(0x18b, 0x447, 0xffff, 0x24)
         a2 += 0x10

    loc_0x802783d8: // orphan
         ra = [sp + 0x44]

    loc_0x802783dc: // orphan
         s0 = [sp + 0x2c]
         s1 = [sp + 0x30]
         s2 = [sp + 0x34]
         s3 = [sp + 0x38]
         s4 = [sp + 0x3c]
         s5 = [sp + 0x40]
         ret
         sp += 0xb8

    loc_0x80278a5c: // orphan
         [sp + 0x10] = t6
         v0 = [s0 + 0]
         t8 = 0x8820 << 16
         t9 = 0x8820 << 16
         t7 = halfword [v0 + 8]
         a1 = halfword [v0 + 2]
         a2 = halfword [v0 + 4]
         a3 = , unsigned  halfword [v0 + 6]
         t9 += 0x5db0
         t8 += 0x5e18
         [sp + 0x14] = t8

    loc_0x80278a88: // orphan
         [sp + 0x18] = t9
         [sp + 0x1c] = 0
         a0 = 0
         call 0x882000ac          // 0x882000ac(0x0, 0x0, 0x0, 0x0)
         [sp + 0x10] = t7
         ra = [sp + 0x2c]
         s0 = [sp + 0x28]
         sp += 0x30
         ret
         

    loc_0x80278c54: // orphan
         v1 = , unsigned  halfword [sp + 0x26]
         goto 0x80278cc0
         a2 = v0

    loc_0x80278cc0: // orphan
         a0 = halfword [sp + 0x2a]
         a1 = halfword [sp + 0x2e]
         a3 = 0
         [sp + 0x10] = v1
         call 0x8004d150          // 0x8004d150(0x0, 0x0, 0x0, 0x0)
         [sp + 0x14] = 0
         ra = [sp + 0x1c]
         sp += 0x28
         ret
         

    loc_0x80278da4: // orphan
         [sp + 0x54] = ra
         [sp + 0x58] = a0
         [sp + 0x5c] = a1
         t6 = 0 + 0x17f
         [sp + 0x4c] = s5
         [sp + 0x48] = s4
         [sp + 0x44] = s3
         [sp + 0x40] = s2
         [sp + 0x3c] = s1
         [sp + 0x38] = s0
         sdc1 f20, 0x30, sp
         [sp + 0x10] = t6
         a1 = 0 + 0x2c            // arg2
         a0 = s6
         a2 = 0 + 0x48            // arg3
         call 0x80006f70          // 0x80006f70(0x0, 0x2c, 0x48, 0x0)
         a3 = 0 + 0x229
         call 0x882001e8          // 0x882001e8(0x0, 0x2c, 0x48, 0x229)
         
         v0 = [s6 + 0]
         t9 = 0x8009 << 16
         s5 = 0x8801 << 16
         t7 = v0 + 8
         [s6 + 0] = t7
         t9 += 0x4e38
         t8 = 0xde00 << 16
         s5 -= 0x133c
         [v0 + 0] = t8
         [v0 + 4] = t9
         call 0x8004d1fc          // 0x8004d1fc(0x0, 0x2c, 0x48, 0x229)
         a0 = [s5 + 0]
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1340]
         a1 = 0 + 0x80
         call 0x8004d27c          // 0x8004d27c(-1, 0x80, 0x48, 0x229)
         a2 = 0 + 1
         a0 = 0 + 0xdc
         a1 = 0 + 0xdc
         call 0x88002c2c          // 0x88002c2c(0xdc, 0xdc, 0x1, 0x229)
         a2 = 0 + 0xb4
         call 0x8004ca10          // 0x8004ca10(0xdc, 0xdc, 0xb4, 0x229)
         a0 = [s5 + 0]
         s2 = v0
         call 0x8004ca10          // 0x8004ca10(-1, 0xdc, 0xb4, 0x229)
         a0 = [s5 + 0]
         s4 = 0x8823 << 16
         s4 += 0x46f8
         s0 = [s4 + 0]
         mtc1 v0, f8
         at = 0x4480 << 16
         v1 = halfword [s0 + 6]
         cvt.s.w f10, f8
         mtc1 at, f20
         v1 -= 0xd
         mtc1 v1, f4
         mtc1 0, f6
         mul.s f16, f10, f20
         cvt.s.w f0, f4
         mtc1 s2, f4
         
         cvt.s.w f8, f4
         div.s f18, f16, f0
         mul.s f10, f20, f8
         div.s f16, f10, f0
         c.lt.s f6, f18
         
         bc1f 0x80278ec0
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x80278ed0
         add.s f6, f2, f16

    loc_0x80278ed0: // orphan
         a0 = halfword [s0 + 2]
         a1 = halfword [s0 + 4]
         a3 = halfword [s0 + 8]

    loc_0x80278edc: // orphan
         trunc.w.s f18, f6
         a0 += 5
         a1 += 5
         a3 -= 0xd
         mfc1 t2, f18
         a3 <<= 0x10
         a1 <<= 0x10
         a0 <<= 0x10
         a2 = v1 << 0x10
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(0x5, 0x5, 0x0, 0xfffffff3)
         [sp + 0x18] = t2
         s0 = [s4 + 0]
         s3 = 0
         t3 = , unsigned  byte [s0 + 0]
         s1 = halfword [s0 + 0x4c]
         beql t3, 0, 0x80279038   // unlikely
         v0 = [s6 + 0]

    loc_0x80278f40: // orphan
         call 0x8004ca10          // 0x8004ca10(0x0, 0x0, 0x0, 0x0)
         a0 = [s5 + 0]
         s2 = v0
         call 0x8004ca10          // 0x8004ca10(0xde000030, 0x0, 0x0, 0x0)
         a0 = [s5 + 0]
         s0 = [s4 + 0]
         mtc1 v0, f10
         mtc1 0, f8
         v1 = halfword [s0 + 0x4e]
         cvt.s.w f16, f10
         at = 0xbf00 << 16
         v1 -= 0xd
         mtc1 v1, f4
         mul.s f6, f16, f20
         cvt.s.w f0, f4
         mtc1 s2, f4
         
         cvt.s.w f10, f4
         div.s f18, f6, f0
         mul.s f16, f20, f10
         div.s f6, f16, f0
         c.lt.s f8, f18
         
         bc1fl 0x80278fb8
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x80278fc0
         add.s f8, f2, f6

    loc_0x80278fc0: // orphan
         a0 = halfword [s0 + 0x4a]
         a3 = halfword [s0 + 0x50]
         a1 = s1 + 5
         trunc.w.s f18, f8
         a0 += 5
         a3 -= 0xd
         a3 <<= 0x10
         mfc1 t5, f18
         a0 <<= 0x10
         a1 <<= 0x10
         a2 = v1 << 0x10
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10

    loc_0x80278ff8: // orphan
         a3 = , signed  a3 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x0)
         [sp + 0x18] = t5
         s0 = [s4 + 0]
         s3 += 1
         t7 = , unsigned  byte [s0 + 0]
         t6 = , unsigned  byte [s0 + 1]
         at = , unsigned  , s3 < t7
         if                       // likely
         s1 += t6

    loc_0x80279030: // orphan
         s3 = 0
         v0 = [s6 + 0]

    loc_0x80279038: // orphan
         t9 = 0xe700 << 16
         t2 = 0xe200 << 16
         t8 = v0 + 8
         [s6 + 0] = t8
         [v0 + 4] = 0
         [v0 + 0] = t9
         v0 = [s6 + 0]
         t3 = 0xf0a << 16
         t3 |= 0x7008
         t1 = v0 + 8
         [s6 + 0] = t1
         t2 |= 0x1c
         [v0 + 0] = t2
         [v0 + 4] = t3
         s5 = , unsigned  byte [sp + 0x5f]
         t6 = 0x9696 << 16
         s2 = 0xfb00 << 16
         if                       // unlikely
         t6 |= 0x82ff

    loc_0x80279084: // orphan
         v0 = [s6 + 0]
         s1 = 0xdcdc << 16
         s1 |= 0xb4ff
         t4 = v0 + 8
         s2 = 0xfb00 << 16
         [s6 + 0] = t4
         [v0 + 4] = s1
         goto 0x802790c4
         [v0 + 0] = s2

    loc_0x802790a8: // orphan
         v0 = [s6 + 0]
         s1 = 0xdcdc << 16
         s1 |= 0xb4ff
         t5 = v0 + 8
         [s6 + 0] = t5
         [v0 + 4] = t6
         [v0 + 0] = s2

    loc_0x802790c4: // orphan
         call 0x88200180          // 0x88200180(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2
         v0 = [s6 + 0]
         t8 = 0xe700 << 16
         t7 = v0 + 8
         [s6 + 0] = t7
         [v0 + 4] = 0
         [v0 + 0] = t8
         t9 = , unsigned  byte [sp + 0x5f]
         beql t9, 0, 0x8027910c   // likely
         v0 = [s6 + 0]

    loc_0x802790f0: // orphan
         v0 = [s6 + 0]
         t1 = v0 + 8
         [s6 + 0] = t1
         [v0 + 4] = s1
         goto 0x80279124
         [v0 + 0] = s2

    loc_0x8027910c: // orphan
         t3 = 0x9696 << 16
         t3 |= 0x82ff
         t2 = v0 + 8
         [s6 + 0] = t2
         [v0 + 4] = t3
         [v0 + 0] = s2

    loc_0x80279124: // orphan
         call 0x88200180          // 0x88200180(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 3
         v0 = [s6 + 0]
         t5 = 0xe700 << 16

    loc_0x80279134: // orphan
         t4 = v0 + 8
         [s6 + 0] = t4
         [v0 + 4] = 0
         [v0 + 0] = t5
         v0 = [s6 + 0]
         t6 = v0 + 8
         [s6 + 0] = t6
         [v0 + 4] = s1
         [v0 + 0] = s2
         s0 = [s4 + 0]
         a0 = halfword [s0 + 2]
         a1 = halfword [s0 + 4]
         a2 = , unsigned  halfword [s0 + 6]
         call 0x88002cb8          // 0x88002cb8(0x0, 0x0, 0x0, 0x0)
         a3 = , unsigned  halfword [s0 + 8]
         s0 = [s4 + 0]
         t7 = , unsigned  byte [s0 + 0]
         s1 = halfword [s0 + 0x4c]
         if                       // likely
         a1 = s1 << 0x10

    loc_0x80279180: // orphan
         t4 = v0 + 8
         [s6 + 0] = t4
         [v0 + 4] = 0
         [v0 + 0] = t5
         v0 = [s6 + 0]
         t6 = v0 + 8
         [s6 + 0] = t6
         [v0 + 4] = s1
         [v0 + 0] = s2
         s0 = [s4 + 0]
         a0 = halfword [s0 + 2]
         a1 = halfword [s0 + 4]
         a2 = , unsigned  halfword [s0 + 6]
         call 0x88002cb8          // 0x88002cb8(0x0, 0x0, 0x0, 0x0)
         a3 = , unsigned  halfword [s0 + 8]
         s0 = [s4 + 0]
         t7 = , unsigned  byte [s0 + 0]
         s1 = halfword [s0 + 0x4c]
         if                       // likely
         a1 = s1 << 0x10

    loc_0x80279184: // orphan
         a1 = , signed  a1 >> 0x10
         a0 = halfword [s0 + 0x4a]
         a2 = , unsigned  halfword [s0 + 0x4e]
         call 0x88002cb8          // 0x88002cb8(0xffff, 0x0, 0xffff, 0x0)
         a3 = , unsigned  halfword [s0 + 0x50]
         s0 = [s4 + 0]
         s3 += 1
         t9 = , unsigned  byte [s0 + 0]
         t8 = , unsigned  byte [s0 + 1]
         at = , unsigned  , s3 < t9
         if                       // unlikely
         s1 += t8

    loc_0x802791b4: // orphan
         s3 = 0

    loc_0x802791b8: // orphan
         v0 = [s6 + 0]
         t2 = 0xe700 << 16
         t4 = 0xe200 << 16
         t1 = v0 + 8
         [s6 + 0] = t1
         [v0 + 4] = 0
         [v0 + 0] = t2
         v0 = [s6 + 0]
         t5 = 0x50 << 16
         t5 |= 0x4240
         t3 = v0 + 8
         [s6 + 0] = t3
         t4 |= 0x1c
         [v0 + 0] = t4
         [v0 + 4] = t5
         v0 = [s6 + 0]
         t7 = 0 - 1
         s1 = 0 + 0x4d
         t6 = v0 + 8
         [s6 + 0] = t6
         [v0 + 4] = t7
         [v0 + 0] = s2
         t8 = [s4 + 0]
         s2 = [sp + 0x58]
         t9 = , unsigned  byte [t8 + 0]
         beql t9, 0, 0x80279264   // likely
         v0 = [s6 + 0]

    loc_0x80279224: // orphan
         t1 = [s2 + 0]
         a1 = s1 << 0x10
         a1 = , signed  a1 >> 0x10
         a0 = 0 + 0x127
         a3 = s5
         call 0x8820659c          // 0x8820659c(0x127, 0x0, 0x0, 0x0)
         a2 = [t1 + 0]
         s0 = [s4 + 0]
         s3 += 1
         s2 += 4
         t3 = , unsigned  byte [s0 + 0]
         t2 = , unsigned  byte [s0 + 1]
         at = , unsigned  , s3 < t3
         if                       // unlikely
         s1 += t2

    loc_0x80279260: // orphan
         v0 = [s6 + 0]

    loc_0x80279264: // orphan
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = v0 + 8
         [s6 + 0] = t4
         t5 = 0xde00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t6
         ra = [sp + 0x54]
         s6 = [sp + 0x50]
         s5 = [sp + 0x4c]
         s4 = [sp + 0x48]
         s3 = [sp + 0x44]
         s2 = [sp + 0x40]
         s1 = [sp + 0x3c]
         s0 = [sp + 0x38]
         ldc1 f20, 0x30, sp
         ret
         sp += 0x58

}

*/
