/*
 * Function: 0x80259254
 * ROM Offset: 0x0015a254
 * Category: general
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80259254 (int esi, int edx) {
if            // unlikely
// } else {
// } else {
// } else {
// } else {
}
return eax;
if            // unlikely
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
}

/*
// Full analysis output
int fcn.80259254 (int esi, int edx) {
    loc_0x80239b0c:
        bnel t8, 0, 0x80239b90 // unlikely
        t9 = , unsigned  halfword [s2 + 4]
            
    loc_0x80239b90:
        t3 = 0 + 0xe
        t4 = 0 + 0x13
        t2 = t9 & 0x10
        beql t2, 0, 0x80239bb0 // likely
        halfword [s2 + 2] = t4
            
    loc_0x80239bb0:
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
        if            // unlikely
        0x80239c18
            
    loc_0x80239c3c:
        call 0x800226c0 // 0x800226c0(0x0, 0x0, 0x0, 0x0)
        a0 = 0 + 0x69
        t9 = halfword [s2 + 2]
        at = 0 + 0xa
        beql t9, at, 0x80239c60 // unlikely
        ra = [sp + 0x24]
            
    loc_0x80239c60:
        s0 = [sp + 0x18]
        s1 = [sp + 0x1c]
        s2 = [sp + 0x20]
        ret
        sp += 0x28
         // } else {
    loc_0x80239c54:
        call fcn.82602708
        a0 = [s2 + 0x110]
        ra = [sp + 0x24]
         // } else {
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x80239b14
    loc_0x80239b64:
        call fcn.826078b4
        a0 = [s1 + 0x34f4]
        t8 = halfword [s2 + 0x18]
        s0 += 1
        s1 += 4
        at = , s0 < t8
        if            // unlikely
        0x80239b80
    loc_0x80239b84:
        goto 0x80239c3c
        0x80239b88
    loc_0x80239d08: // orphan
             t2 = halfword [v1 + 0x26]
             a1 = v0 + 0x1a0          // arg2
             if                       // likely
             t0 = , signed  t9 >> 1

    loc_0x80239d18: // orphan
         at = t9 + 1
         t0 = , signed  at >> 1

    loc_0x80239d20: // orphan
         a2 = v0 + t0             // arg3
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
         a2 = s0 + 0x114          // arg3
         [sp + 0x20] = a2
         a0 = 0 + 8               // arg1
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

    loc_0x80259254: // orphan
         
         
         
         
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

}

*/
