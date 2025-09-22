/*
 * Function: 0x8025221c
 * Category: math
 */

// Decompiled C code
int fcn.802482c8 (int esi, int edx) {
// } else {
}
return eax;
}

/*
// Full radare2 output
int fcn.802482c8 (int esi, int edx) {
    loc_0x802482c8:
        // CALL XREF from fcn.83b4d8fc @ +0x1420
        if            // unlikely
        // CODE XREF from fcn.80c2d078 @ +0x494
        if            // unlikely
            
    loc_0x8024b800:
        a0 = s0
        a1 = [s0 + 0x20] // t9
        call 0x82701300 // 0x82701300(0x104, -1, 0x8, -1)
        a2 = 0 + 1    // lo
        t7 = 0 + 3
        halfword [s0 + 0xa] = t7
        ra = [sp + 0x1c]
        s0 = [sp + 0x18]
        sp += 0x20
        ret
        0x8024b828
         // } else {
    loc_0x802482d4:
        if            // unlikely
        0x802482d8
        }
        return eax;
    loc_0x802482dc:
        if            // unlikely
        if            // unlikely
        // chop
    loc_0x802482e8: // orphan
             
             
             
             
             if                       // unlikely
             if                       // unlikely

    loc_0x80248304: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024833c: // orphan
         if                       // unlikely
         

    loc_0x80248344: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248350: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024835c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248368: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248374: // orphan
         if                       // fcn.8024ccdc+0xc // unlikely
         if                       // unlikely

    loc_0x80248380: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024838c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248398: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802483bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802483c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802483d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802483e0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.8024d8d0+0x34 // unlikely
         if                       // unlikely

    loc_0x8024841c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248428: // orphan
         if                       // unlikely
         

    loc_0x80248430: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024843c: // orphan
         if                       // unlikely
         

    loc_0x80248444: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248450: // orphan
         if                       // unlikely
         

    loc_0x80248458: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248464: // orphan
         if                       // unlikely
         

    loc_0x8024846c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248478: // orphan
         if                       // unlikely
         

    loc_0x80248480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024848c: // orphan
         if                       // unlikely
         

    loc_0x80248494: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484a0: // orphan
         if                       // unlikely
         

    loc_0x802484a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484cc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802484e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802484f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248504: // orphan
         if                       // unlikely
         

    loc_0x8024850c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248518: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248530: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024853c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024854c: // orphan
         if                       // fcn.8024f30c+0x4 // unlikely
         if                       // fcn.8024f30c+0x18 // unlikely

    loc_0x80248558: // orphan
         if                       // unlikely
         

    loc_0x80248560: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80248570: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024857c: // orphan
         if                       // unlikely
         

    loc_0x80248584: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248590: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802485a4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802485b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802485c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802485cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802485d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802485e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802485f0: // orphan
         if                       // fcn.80250940+0x24 // unlikely
         if                       // unlikely

    loc_0x802485fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80248608: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024b838: // orphan
         [sp + 0x1c] = ra
         a2 = s0 + 0x34           // arg3
         [sp + 0x20] = a2
         a0 = 0 + 3               // arg1
         a1 = 0
         call 0x82700e70          // 0x82700e70(0x3, 0x0, 0x138, -1)
         a3 = 0 + 0x10
         a2 = [sp + 0x20]
         a0 = 0 + 2
         a1 = 0 + 4
         a3 = 0 + 0x10
         call 0x82700e70          // 0x82700e70(0x2, 0x4, 0x138, 0x10)
         [sp + 0x34] = v0
         v1 = [sp + 0x34]         // s4
         // CODE XREF from fcn.8023d410 @ +0x9c
         // CODE XREF from fcn.81a87250 @ +0x5cc
         t6 = halfword [v1 + 6]
         beql t6, 0, 0x8024b88c   // unlikely
         halfword [s0 + 0x12] = 0

    loc_0x8024b87c: // orphan
         t7 = halfword [v1 + 0xc]
         goto 0x8024b88c
         halfword [s0 + 0x12] = t7

    loc_0x8024b88c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024b880
         beql v0, 0, 0x8024b8d0   // unlikely
         ra = [sp + 0x1c]

    loc_0x8024b894: // orphan
         // CODE XREF from fcn.8023d410 @ +0xa0
         t8 = halfword [v0 + 6]
         v1 = 0 + 2
         bnel v1, t8, 0x8024b8d0  // likely
         ra = [sp + 0x1c]

    loc_0x8024b8a4: // orphan
         t9 = halfword [s0 + 0x12]
         t0 = s0 + 4
         bnel t9, 0, 0x8024b8d0   // likely
         ra = [sp + 0x1c]

    loc_0x8024b8b4: // orphan
         t1 = , unsigned  halfword [s0 + 0xc]
         halfword [s0 + 2] = v1
         halfword [s0 + 0x16] = v1
         t2 = t1 | 2
         [s0 + 0x18] = t0
         halfword [s0 + 0xc] = t2
         ra = [sp + 0x1c]

    loc_0x8024b8d0: // orphan
         s0 = [sp + 0x18]
         sp += 0x38
         // CODE XREF from fcn.8023d410 @ +0xa4
         ret                      // ra
         

    loc_0x8024b9ec: // orphan
         ra = [sp + 0x2c]

    loc_0x8024bba0: // orphan
         call fcn.82701820
         a1 = s0
         s0 += 1
         bnel s0, s1, 0x8024bba0  // likely
         a0 = 0 + 4

    loc_0x8024bbb4: // orphan
         a0 = 0 + 2
         call fcn.827015a4        // fcn.827015a4(0x2)
         a1 = 0 + 3
         a0 = 0 + 2
         call fcn.827015a4        // fcn.827015a4(0x2)
         a1 = 0 + 4
         call 0x800226c0          // 0x800226c0(0x2, 0x4, 0x8, -1)
         a0 = 0 + 3
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x8024c528: // orphan
         ra = [sp + 0x14]
         // CODE XREFS from fcn.8024c2d0 @ +0x218, +0x228, +0x238, +0x248
         sp += 0x18
         ret
         

    loc_0x8024c5f0: // orphan
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         a0 = 0 + 0x1a
         call 0x8004c874          // 0x8004c874(0x1a, 0x442f71dcfe116408, 0x0, -1)
         a1 = 0 + 0x13
         a0 = 0 + 0x245
         a1 = 0 + 0x11a
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0x245, 0x11a, 0x2, -1)
         a3 = v0                  // s4
         // CODE XREF from fcn.8024c2d0 @ +0x318
         call 0x800499ec          // 0x800499ec(0x245, 0x11a, 0x2, 0xff)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8024c7ac: // orphan
         t8 = 0x8270 << 16
         t8 = halfword [t8 + 0x34e2]
         v0 = a0 << 0x10
         v0 = , signed  v0 >> 0x10 // t9
         if                       // likely
         t9 = 0 + 1               // lo

    loc_0x8024c7c4: // orphan
         at = 0x8270 << 16
         halfword [at + 0x34e2] = t9
         at = 0x8270 << 16
         halfword [at + 0x34ee] = 0
         at = 0x8270 << 16
         halfword [at + 0x34e0] = v0
         at = 0 + 1               // lo
         if                       // likely
         a0 = 0 + 2

    loc_0x8024c7e8: // orphan
         a2 = 0x8270 << 16
         a2 += 0x3514
         a1 = 0 + 2
         call 0x82700e70          // 0x82700e70(-1, 0x2, 0x82703514, -1)
         a3 = 0 + 0x10
         t0 = 0 + 2
         at = 0x8270 << 16
         halfword [at + 0x34e4] = t0
         a2 = halfword [v0 + 0xe]
         t1 = 0 + 2
         t2 = 0 + 0x34
         halfword [v0 + 6] = t1
         halfword [v0 + 0x14] = t2
         a3 = halfword [v0 + 0x10]
         a0 = 0 + 2
         a1 = 0 + 2
         call 0x8270188c          // 0x8270188c(0x2, 0x2, 0xff00, 0x3ff)
         halfword [v0 + 0x12] = a2

    loc_0x8024c830: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024c7e0
         v1 = 0 + 1               // lo

    loc_0x8024c834: // orphan
         // CODE XREFS from fcn.802482c8 @ 0x4d4, 0x8024c7bc
         ra = [sp + 0x14]
         sp += 0x18
         v0 = v1
         ret
         

    loc_0x8024c8f8: // orphan
         
         goto 0x80000000
         s0 = byte [s3 + 0x598]   // s4

    loc_0x8024c954: // orphan
                                  // s0
                                  // s4
         s0 = byte [s3 + 0x328c]  // s4
         s0 = byte [s3 + 0x3298]  // s4
         
         
         

    loc_0x8024cd0c: // orphan
         if                       // fcn.8024ccdc+0x2ad4 // unlikely
         

    loc_0x8024cd10: // orphan
         

    loc_0x8024cd14: // orphan
         
         
         if                       // unlikely
         

    loc_0x8024cd24: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024cd40: // orphan
         if                       // unlikely
         

    loc_0x8024cd48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024cd54: // orphan
         if                       // unlikely
         

    loc_0x8024cd5c: // orphan
         
         
         
         
         
         
         

    loc_0x8024cd78: // orphan
         
         
         
         
         // CODE XREF from fcn.8024c2d0 @ +0x784
         if                       // unlikely
         if                       // unlikely

    loc_0x8024cd94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024cda0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024cdb0: // orphan
         if                       // unlikely
         

    loc_0x8024cdb8: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8024cde0: // orphan
         
         
         
         
         
         if                       // fcn.802502b4+0x4 // unlikely
         if                       // unlikely

    loc_0x8024ce00: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce10: // orphan
         
         
         // CODE XREF from fcn.8024c2d0 @ +0x794
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce2c: // orphan
         // CODE XREF from fcn.8024c2d0 @ +0x798
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce3c: // orphan
         if                       // unlikely
         

    loc_0x8024ce44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce5c: // orphan
         if                       // fcn.80251230+0x50 // unlikely
         if                       // unlikely

    loc_0x8024ce68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce74: // orphan
         if                       // unlikely
         

    loc_0x8024ce7c: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ce94: // orphan
         

    loc_0x8024cf54: // orphan
         if                       // fcn.80248744+0xa904 // unlikely

    loc_0x8024d194: // orphan
         if                       // unlikely

    loc_0x8024d918: // orphan
         if                       // unlikely
         v1 = [a1 + 0x20]         // arg2 // t9

    loc_0x8024d920: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         // CODE XREF from fcn.8024c2d0 @ +0x8c4
         t0 = v1 << 2

    loc_0x8024d92c: // orphan
         goto 0x8024daa4
         ra = [sp + 0x1c]

    loc_0x8024d934: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024d918
         t7 = fcn.82a00000 << 16
         t7 += 0x19c8
         t6 = v1 << 4
         v0 = t6 + t7
         t8 = v1 << 0xe
         halfword [v0 + 0] = t8
         t9 = halfword [s0 + 8]
         halfword [v0 + 4] = t9
         t2 = halfword [s0 + 0xa]
         goto 0x8024daa0
         halfword [v0 + 6] = t2

    loc_0x8024d960: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024d924
         t3 = fcn.82a00000 << 16
         // CODE XREF from fcn.8023e3c0 @ 0x8023d530
         t3 += t0
         t3 = , unsigned  byte [t3 + 0x1a0a] // s4
         t5 = fcn.82a00000 << 16
         t5 += 0x19c8
         if                       // fcn.8024d904+0x190 // unlikely
         // CODE XREF from fcn.8023e3c0 @ 0x8023d534
         t4 = v1 << 4

    loc_0x8024d978: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023d534
         t4 = v1 << 4

    loc_0x8024d97c: // orphan
         v0 = t4 + t5
         t6 = halfword [v0 + 4]
         t7 = halfword [v0 + 8]
         t5 = fcn.82a00000 << 16
         at = , v1 < 2
         t8 = t6 + t7
         halfword [s0 + 8] = t8
         t2 = halfword [v0 + 0xa]
         t9 = halfword [v0 + 6]
         t5 += 0x1990
         v0 = t0 + t5
         t3 = t9 + t2
         // CODE XREF from fcn.8023d410 @ +0x128
         if                       // unlikely
         halfword [s0 + 0xa] = t3

    loc_0x8024d9b4: // orphan
         goto 0x8024d9c0
         t1 = 0 + 0x24

    loc_0x8024d9bc: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024d9ac
         t1 = 0 + 0x42

    loc_0x8024d9c0: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024d9b4
         t4 = halfword [s0 + 8]

    loc_0x8024d9c4: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023d540
         a1 = halfword [s0 + 0xa]
         [sp + 0x38] = v1
         a2 = halfword [v0 + 0xc]
         a3 = halfword [v0 + 0xe]
         a0 = t4 + t1             // arg1
         call fcn.82a001dc
         a1 += 8
         t6 = fcn.82a00000 << 16
         v1 = [sp + 0x38]
         t6 = [t6 + 0x1990]
         bnel v1, t6, 0x8024daa4  // likely
         ra = [sp + 0x1c]

    loc_0x8024d9f4: // orphan
         a0 = , unsigned  halfword [s0 + 0x24]
         call 0x8004c990          // 0x8004c990(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [s0 + 0x26]
         a0 = 0 + 0x74
         a1 = 0
         // CODE XREF from fcn.8023d410 @ +0x134
         call 0x8004c990          // 0x8004c990(0x74, 0x0, 0x8, -1)
         [sp + 0x24] = v0
         // CODE XREF from fcn.8023e3c0 @ 0x8023d53c
         v1 = [sp + 0x24]         // s4
         t3 = , unsigned  halfword [v0 + 0]
         t7 = halfword [s0 + 8]
         t8 = , unsigned  halfword [v1 + 0]
         t4 = t3 << 1
         if                       // likely
         t9 = , signed  t8 >> 1

    loc_0x8024da2c: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023d548
         at = t8 + 1
         t9 = , signed  at >> 1

    loc_0x8024da34: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024da24
         t2 = t7 + t9
         if                       // likely
         t5 = , signed  t4 >> 1   // t9

    loc_0x8024da40: // orphan
         at = t4 + 1
         t5 = , signed  at >> 1

    loc_0x8024da48: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024da38
         at = fcn.82a00000 << 16
         t6 = t2 - t5
         halfword [at + 0x1998] = t6
         t7 = , unsigned  halfword [v1 + 2]
         t4 = , unsigned  halfword [v0 + 2]
         t8 = halfword [s0 + 0xa]
         if                       // likely
         t9 = , signed  t7 >> 1

    loc_0x8024da68: // orphan
         at = t7 + 1              // lo
         t9 = , signed  at >> 1

    loc_0x8024da70: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024da60
         t3 = t8 + t9
         if                       // likely
         t2 = , signed  t4 >> 1   // t9

    loc_0x8024da7c: // orphan
         at = t4 + 1

    loc_0x8024da80: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023d54c
         t2 = , signed  at >> 1

    loc_0x8024da84: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024da74
         at = fcn.82a00000 << 16
         t5 = t3 - t2             // s2
         goto 0x8024daa0
         halfword [at + 0x199a] = t5

    loc_0x8024daa0: // orphan
         // CODE XREFS from fcn.802482c8 @ 0x8024d958, 0x8024da8c
         ra = [sp + 0x1c]

    loc_0x8024daa4: // orphan
         // CODE XREFS from fcn.802482c8 @ 0x8024d92c, 0x8024d9ec
         s0 = [sp + 0x18]
         sp += 0x40
         ret                      // ra
         v0 = 0

    loc_0x8024db84: // orphan
         t7 += t6
         t7 = , unsigned  byte [t7 + 0x1a0a] // s4
         t9 = fcn.82a00000 << 16
         t9 += 0x19c8
         if                       // unlikely
         t8 = v0 << 4

    loc_0x8024db9c: // orphan
         v1 = t8 + t9
         t0 = halfword [v1 + 4]
         t1 = halfword [v1 + 8]
         v0 = 0
         t2 = t0 + t1
         ret                      // ra
         halfword [a1 + 8] = t2

    loc_0x8024dbb8: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024db94
         t3 = , unsigned  halfword [a1 + 2]
         t4 = t3 & 0xfffd
         halfword [a1 + 2] = t4
         // CODE XREFS from fcn.8024d904 @ +0x268, +0x274
         ret                      // ra
         v0 = 0

    loc_0x8024dcac: // orphan
         halfword [s0 + 0xa] = t1
         t2 = , unsigned  halfword [s0 + 2] // v1
         // CODE XREF from fcn.8024d904 @ +0x324
         t3 = t2 & 0xfffd         // v1
         halfword [s0 + 2] = t3

    loc_0x8024de08: // orphan
         t6 = a3 << 2
         goto 0x8024de14
         a1 = 0 + 1               // lo

    loc_0x8024de14: // orphan
         // CODE XREFS from fcn.802482c8 @ 0x1b4, 0x8024de0c
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x8024de1c: // orphan
         if                       // unlikely
         t1 = a3 << 2

    loc_0x8024de24: // orphan
         goto 0x8024df14
         ra = [sp + 0x14]

    loc_0x8024de2c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024de14
         a0 = fcn.82a00000 << 16
         a0 += t6
         a0 = , unsigned  byte [a0 + 0x1a09]
         [sp + 0x24] = a2
         call fcn.82a00a04
         [sp + 0x18] = a3
         a2 = [sp + 0x24]
         a3 = [sp + 0x18]         // t9
         t8 = fcn.82a00000 << 16

    loc_0x8024de50: // orphan
         t9 = halfword [a2 + 8]
         t8 += 0x19c8
         t7 = a3 << 4
         v1 = t7 + t8
         halfword [a2 + 0x26] = v0
         halfword [v1 + 0xc] = t9
         t0 = halfword [a2 + 0xa]
         goto 0x8024df10
         halfword [v1 + 0xe] = t0

    loc_0x8024de74: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024de1c
         t2 = fcn.82a00000 << 16
         t2 += 0x1a08
         a0 = t1 + t2
         [sp + 0x24] = a2
         call fcn.82a00a90
         [sp + 0x18] = a3
         a2 = [sp + 0x24]
         if                       // unlikely
         a3 = [sp + 0x18]         // t9

    loc_0x8024de98: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d584
         t3 = , unsigned  halfword [a2 + 2]

    loc_0x8024de9c: // orphan
         t6 = fcn.82a00000 << 16
         t6 += 0x19c8
         t5 = a3 << 4
         t4 = t3 | 2
         halfword [a2 + 2] = t4
         v1 = t5 + t6
         v0 = halfword [v1 + 4]
         t7 = halfword [v1 + 0xc]

    loc_0x8024df04: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024de90
         t7 = , unsigned  halfword [a2 + 2] // t3
         t8 = t7 & 0xfffd
         halfword [a2 + 2] = t8

    loc_0x8024df40: // orphan
         [sp + 0x18] = s0
         s1 = fcn.82a00000 << 16
         s3 = v0 & 0xff           // s4
         s1 += 0x1a08
         s0 = 0
         s4 = 0 + 4

    loc_0x8024dfe4: // orphan
         t7 = 0 - 1               // s2
         halfword [at + 0x1998] = t6
         halfword [at + 0x199a] = t7
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x24
         at = fcn.82a00000 << 16
         if                       // unlikely
         [at + 0x19ac] = v0

    loc_0x8024e004: // orphan
         a0 = fcn.82a00000 << 16
         a0 = [a0 + 0x19ac]       // s4
         call 0x8004dcfc          // 0x8004dcfc(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x8024e014: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024dffc
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xd
         at = fcn.82a00000 << 16
         if                       // unlikely
         [at + 0x19b0] = v0

    loc_0x8024e028: // orphan
         // CODE XREF from fcn.8023d410 @ +0x194
         a0 = fcn.82a00000 << 16

    loc_0x8024e02c: // orphan
         a0 = [a0 + 0x19b0]       // t9
         call 0x8004dcfc          // 0x8004dcfc(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x8024e038: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024e020
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8023e660 @ 0x8023d5a8
         a0 = 0 + 0x14

    loc_0x8024e434: // orphan
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         a3 = , unsigned  halfword [s3 + 0]
         a1 = , unsigned  byte [s3 + 4] // s4
         a2 = , unsigned  byte [s3 + 5] // s4
         t9 = a3 << 5
         unsigned , hi
         t1 = 0 + 0x20            // k0
         t2 = 0 + 1               // lo
         t3 = 0 + 2
         t4 = 0 + 7
         [sp + 0x24] = t4
         [sp + 0x20] = t3
         [sp + 0x14] = t2
         [sp + 0x10] = t1
         [sp + 0x30] = 0
         t0 = lo

    loc_0x8024e478: // orphan
         a0 = v0 + t0
         [sp + 0x2c] = 0
         // CODE XREF from fcn.8024c2d0 @ +0x8fc
         [sp + 0x28] = 0
         [sp + 0x1c] = 0
         call 0x800459ac          // 0x800459ac(0x442f71dcfe116507, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = 0
         s1 = 0
         s0 = s5                  // t9

    loc_0x8024e498: // orphan
         // CODE XREF from fcn.8024c2d0 @ +0x904
         at = , s0 < 0x1e0        // lo
         if                       // unlikely
         a0 = 0

    loc_0x8024e4a4: // orphan
         a1 = s0 << 0x10
         t5 = 0 + 0x400
         // CODE XREF from fcn.8024c2d0 @ +0x908
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         a1 = , signed  a1 >> 0x10 // s0
         a2 = 0 + 0x280
         // CODE XREF from fcn.8024c2d0 @ +0x90c
         a3 = 0 + 0x20            // k0
         // CODE XREF from fcn.8024c2d0 @ +0x900
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x80044270          // "&1" // 0x80044270(-1, 0x104, 0x280, 0x20)
         [sp + 0x20] = 0

    loc_0x8024e4d4: // orphan
         s1 += 0x80
         if                       // likely
         s0 += 0x80

    loc_0x8024e4e0: // orphan
         s4 += 1
         // CODE XREF from fcn.8024c2d0 @ +0x910
         if                       // likely
         s5 += 0x20

    loc_0x8024e4ec: // orphan
         ra = [sp + 0x5c]
         s0 = [sp + 0x40]
         s1 = [sp + 0x44]
         // CODE XREF from fcn.8024c2d0 @ +0x914
         s2 = [sp + 0x48]
         s3 = [sp + 0x4c]
         s4 = [sp + 0x50]
         s5 = [sp + 0x54]
         s6 = [sp + 0x58]
         ret
         sp += 0x60

    loc_0x8024e748: // orphan
         break 6

    loc_0x8024e774: // orphan
         
         break 7

    loc_0x8024e7c0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8024e7cc: // orphan
         if                       // likely
         

    loc_0x8024e7d4: // orphan
         break 6

    loc_0x8024e7d8: // orphan
         unsigned , hi            // t3 // t3
         t8 = t2 + 8
         [ra + 0] = t8
         t8 = t4 & 0xff           // s4
         t6 = lo
         
         
         div 0, t6, v1
         t9 = lo
         t7 = t9 + t1
         if                       // likely
         

    loc_0x8024e808: // orphan
         break 7

    loc_0x8024e80c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8024e818: // orphan
         if                       // likely
         

    loc_0x8024e820: // orphan
         break 6

    loc_0x8024e824: // orphan
         [sp + 0x48] = t7
         t6 = 0xfb00 << 16
         [t2 + 0] = t6
         t6 = t8 << 0x10
         t9 = t3
         t7 = t9 << 0x18
         t9 = t7 | t6
         t8 = t5 & 0xff           // s4
         t7 = t8 << 8
         t8 = [sp + 0x48]
         t6 = t9 | t7
         t9 = t8 & 0xff
         t7 = t6 | t9

    loc_0x8024e858: // orphan
         [t2 + 4] = t7
         a3 = halfword [s0 + 2]   // k0
         a2 = halfword [s0 + 0]
         a1 = halfword [sp + 0x76]
         t6 = 0 + 0x400
         t8 = 0 + 0x400
         [sp + 0x18] = t8
         [sp + 0x1c] = t6
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a0 = halfword [sp + 0x72]
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x20)
         [sp + 0x3c] = a1
         v0 = , unsigned  halfword [s0 + 0]
         t9 = [sp + 0x70]
         a3 = halfword [s0 + 2]   // k0
         t7 = v0 - 1              // s2
         a0 = v0 + t9
         a0 <<= 0x10
         t9 = 0 + 0x400
         t8 = t7 << 5
         t6 = 0 - 0x400
         a2 = v0 << 0x10
         a1 = [sp + 0x3c]
         a2 = , signed  a2 >> 0x10
         [sp + 0x18] = t6
         [sp + 0x10] = t8
         [sp + 0x1c] = t9
         a0 = , signed  a0 >> 0x10
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x0, 0x20)
         [sp + 0x14] = 0
         ra = [sp + 0x34]         // s4
         s0 = [sp + 0x30]
         sp += 0x70
         ret                      // s4
         

    loc_0x8024e924: // orphan
         call 0x800503a4          // 0x800503a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x19bc]       // t9
         a3 = 0x800d << 16
         a3 += 0x510
         v1 = [a3 + 0]            // t9
         t8 = 0x8009 << 16
         t8 += 0x4e38
         // CODE XREF from fcn.8024c2d0 @ +0x96c
         t6 = v1 + 8
         [a3 + 0] = t6
         t7 = 0xde00 << 16
         a0 = fcn.82a00000 << 16
         a1 = fcn.82a00000 << 16
         [v1 + 0] = t7
         [v1 + 4] = t8
         a1 = halfword [a1 + 0x199a]
         a0 = halfword [a0 + 0x1998]
         call 0x82a011e4          // 0x82a011e4(0x100, 0xffff, 0x8, 0x800d0510)
         a2 = 0 + 1               // lo
         call 0x80008648          // 0x80008648(0x100, 0xffff, 0x1, 0x800d0510)
         
         ra = [sp + 0x14]
         // CODE XREF from fcn.8024c2d0 @ +0x974
         sp += 0x18
         ret
         

    loc_0x8024ea64: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x544c             // t9
         a0 = 1 << 16
         a0 |= 0x8000
         call 0x80006cd0          // 0x80006cd0(0x18000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x1, 0x0, 0x2, 0x0)
         a0 = 0 + 0x103
         call 0x8004c8c0          // 0x8004c8c0(0x103, 0x0, 0x2, 0x0)
         a0 = 0 + 0x73
         call 0x8004c8c0          // 0x8004c8c0(0x73, 0x0, 0x2, 0x0)
         a0 = 0 + 0x74
         call 0x8004c8c0          // 0x8004c8c0(0x74, 0x0, 0x2, 0x0)
         a0 = 0 + 0xe

    loc_0x8024ebbc: // orphan
         movt 0, 0, fcc0
                                  // lo
         
         
         
         
         
         goto 0x8024ebdc
         // CODE XREF from fcn.802482c8 @ 0x8024ebd8
         if                       // unlikely

    loc_0x8024ebe0: // orphan
         

    loc_0x8024ebe4: // orphan
         movf 0, 0, fcc0
         swc1 f0
         
         sc 0, 0xa01, t8
         
         sc 0, 0xc00, t8
         
         sd s0, -0x19f, at
         bnel t7, fp, 0x8024b9ec  // likely
         sc 0, 0x1c, s0

    loc_0x8024ec0c: // orphan
         call 0x8c290000          // 0x8c290000(-1, 0x442f71dcfe116408, 0x8, -1)
         bbit132 s0, 0, 0x8024ec14
         s3 = halfword [k1 + 0x64ff]
         bbit132 t8, 0, 0x8024ec1c
         dsra32 0, 0, 3
         bbit032 t7, 0x1d, 0x8024ec1c
         
         ld 0
         
         
         swc1 f0, 0xff, s0
         sd ra, 0x46c8, ra
         
         k1 = gp | 0x4664
         
         swc1 f0
         
         sc 0, 0xa01, t8
         
         sc 0, 0xc00, t8
         
         sd s0, -0x659f, at
         bnel t1, s6, 0x8024ea64  // likely
         sc 0, 0x1c, s0

    loc_0x8024ede8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024edf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee00: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee5c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee6c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee88: // orphan
         if                       // unlikely
         

    loc_0x8024ee90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024ee9c: // orphan
         if                       // unlikely
         

    loc_0x8024eea4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8024eeb4: // orphan
         if                       // unlikely
         

    loc_0x8024f228: // orphan
         t9 = , unsigned  byte [a0 + 0]
         t7 = , unsigned  byte [a0 + 0]
         if                       // likely
         

    loc_0x8024f238: // orphan
         t8 = , unsigned  byte [a0 + 2]
         at = , t8 < 6            // lo
         if                       // unlikely
         

    loc_0x8024f248: // orphan
         ret                      // ra
         v0 = 0 + 5

    loc_0x8024f250: // orphan
         ret                      // ra
         v0 = 0

    loc_0x8024f258: // orphan
         ret                      // ra
         v0 = 0 + 3

    loc_0x8024f548: // orphan
         a0 = s0

    loc_0x8024f54c: // orphan
         a1 = 0 + 1               // lo
         call 0x80062390          // 0x80062390(-1, 0x1, 0x8, -1)
         a2 = s2
         if                       // unlikely
         t6 = 0x82b1 << 16

    loc_0x8024f560: // orphan
         t6 = halfword [t6 + 0x2224]
         s0 += 0x44
         at = 0x82b1 << 16
         t7 = t6 + 1
         if                       // likely
         halfword [at + 0x2224] = t7

    loc_0x8024f578: // orphan
         call 0x80062304          // 0x80062304(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2

    loc_0x8024f930: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd1c
         
         call fcn.82b084ac
         
         call fcn.81700c0c
         a0 = 0
         call fcn.81700c0c
         a0 = 0 + 1               // lo
         goto 0x8024fb04
         ra = [sp + 0x14]         // lo

    loc_0x8024fa5c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd38
         at = 0x82b1 << 16
         goto 0x8024fa78
         [at - 0x7ad8] = v0

    loc_0x8024fa78: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024fa60
         t0 = 0 + 2
         at = 0x82b1 << 16
         // CODE XREF from fcn.8024ccdc @ +0x60
         [sp + 0x18] = t0
         goto 0x8024fb00
         halfword [at + 0x2220] = 0

    loc_0x8024faa4: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd40
         v1 = halfword [v1 + 0x2220]
         at = 0x82b1 << 16
         a0 = 0 + 0xa
         if                       // unlikely
         

    loc_0x8024fab8: // orphan
         v1 -= 1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10

    loc_0x8024fac4: // orphan
         bnel v1, 0, 0x8024fadc   // likely
         a1 = 0 - 1               // s2

    loc_0x8024facc: // orphan
         call 0x80035424          // 0x80035424(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at + 0x2220] = v1
         v1 = 0 - 1               // s2
         a1 = 0 - 1               // s2

    loc_0x8024fadc: // orphan
         at = 0x82b1 << 16
         if                       // likely
         halfword [at + 0x2220] = v1

    loc_0x8024fae8: // orphan
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8024faec: // orphan
         
         at = 0 + 1               // lo
         if                       // likely
         t2 = 0 + 5

    loc_0x8024fafc: // orphan
         [sp + 0x18] = t2

    loc_0x8024fb00: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024fa84
         ra = [sp + 0x14]         // lo

    loc_0x8024fb04: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024f94c
         v0 = [sp + 0x18]         // s4
         sp += 0x20
         ret                      // ra
         

    loc_0x8024fb6c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd48
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8170024c          // 0x8170024c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x82b07abc          // 0x82b07abc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.82b004fc        // fcn.82b004fc(-1, 0x442f71dcfe116408, 0x8)
         a0 = s0
         a0 = s0

    loc_0x8024fb90: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd4c
         call fcn.82b006d8
         a1 = s2
         if                       // likely
         s0 = v0                  // s4

    loc_0x8024fba0: // orphan
         t7 = 0x82b1 << 16
         t7 = halfword [t7 + 0x2222]
         t8 = 0 + 1               // lo
         s3 = 0
         if                       // unlikely
         // CODE XREF from fcn.8024ccdc @ +0x74
         s2 = 0x82b1 << 16

    loc_0x8024fbb8: // orphan
         [sp + 0x3c] = t8

    loc_0x8024fbbc: // orphan
         t9 = [sp + 0x3c]
         s7 = 0 + 2
         s2 -= 0x7840
         if                       // likely
         s4 = 0

    loc_0x8024fbd0: // orphan
         s5 = 0x82b1 << 16
         s6 = 0x82b1 << 16
         s6 -= 0x7ae0
         s5 -= 0x7836

    loc_0x8024fe18: // orphan
         s0 = 0
         s1 = 0 + 1               // lo
         [sp + 0x4c] = 0
         s3 = 0
         s4 = 0
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x534c             // t9
         at = 0x82b1 << 16
         [at - 0x7ae0] = s2
         a0 = 1 << 16
         call 0x80006cd0          // 0x80006cd0(0x10000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         a3 = 0
         s2 = v0                  // s4
         a0 = 0 + 0x1c
         call 0x80047588          // 0x80047588(0x1c, 0x0, 0x2, 0x0)
         a1 = 0
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00
         a1 += 0x6e30
         a0 >>= 0x18              // lo
         call 0x80004638          // 0x80004638(0x1, 0x446e30, 0x447d00, 0x0)
         a3 = 0
         call 0x80055948          // 0x80055948(0x1, 0x446e30, 0x447d00, 0x0)
         // CODE XREF from fcn.802482c8 @ 0x8024cd88
         a0 = 0 + 3
         call 0x8005a014          // 0x8005a014(0x3, 0x446e30, 0x447d00, 0x0)
         a0 = 0
         call 0x8005a014          // 0x8005a014(0x0, 0x446e30, 0x447d00, 0x0)
         a0 = 0 + 1               // lo

    loc_0x8024fec0: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd8c
         t8 = 0 - 1               // s2
         at = 0x82b1 << 16
         [at - 0x7ad4] = t8
         call 0x80008514          // 0x80008514(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         fp = fcn.82c00000 << 16
         s2 = 0x6c6f << 16
         s2 |= 0x6f70
         fp += 0                  // fcn.82c00000
         s7 = 0 + 2
         s6 = 0 + 1               // lo

    loc_0x8024feec: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         // CODE XREF from fcn.802482c8 @ 0x8024cd94
         

    loc_0x8024fefc: // orphan
         if                       // unlikely
         v0 = 0x82b1 << 16

    loc_0x8024ff04: // orphan
         goto 0x8024ffa0
         

    loc_0x8024ff0c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cd98
         call 0x80008624          // 0x80008624(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = s5                  // t9
         a1 = s1
         a2 = s3                  // t9
         // CODE XREF from fcn.8024ccdc @ +0xc0
         call fcn.82b002b8
         a3 = s4
         a0 = s1
         call fcn.82b00914
         s1 = 0
         call 0x800085ec          // 0x800085ec(0x442f71dcfe117dbd, 0x442f71dcfe117dbd, -1, 0xff)
         s0 = v0                  // s4
         call 0x8004c398          // 0x8004c398(0x442f71dcfe117dbd, 0x442f71dcfe117dbd, -1, 0xff)
         
         call fcn.82b00b78
         
         [sp + 0x4c] = v0
         call fcn.82b08508        // fcn.82b08508(0x442f71dcfe117dbd)
         s5 = v0                  // s4
         call fcn.82b08514        // fcn.82b08514(0x442f71dcfe117dbd)
         s3 = v0                  // s4
         goto 0x8024ffa0
         s4 = v0

    loc_0x8024ff68: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cda4
         v0 = [v0 + 0x2448]       // t9
         at = 0xff0 << 16
         s0 = 0
         if                       // unlikely
         a0 = fp & at

    loc_0x8024ff7c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cda8
         a0 >>= 0x14
         a1 = 0x43 << 16
         a2 = 0x43 << 16
         a2 -= 0xea0
         a1 -= 0x67b0
         a0 -= 0x10
         a3 = 0 + 0x100
         call 0x80064ce8          // 0x80064ce8(0xfef, 0x429850, 0x42f160, 0x100)
         [sp + 0x10] = v0

    loc_0x8024ffa0: // orphan
         // CODE XREF from fcn.8024ccdc @ +0xd0
         // CODE XREFS from fcn.802482c8 @ 0x8024ff04, 0x8024ff60
         call 0x80002bf8          // 0x80002bf8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // likely
         

    loc_0x8024ffb0: // orphan
         call 0x80008574          // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80047610          // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x4556 << 16
         call 0x80002bf8          // 0x80002bf8(0x45560000, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80250004: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cdb0
         sp += 0x60
         
         
         v1 = 0x82b1 << 16
         v0 = 0x82b1 << 16
         v0 += 0x2454
         v1 += 0x2450

    loc_0x80250020: // orphan
         v1 += 2
         if                       // likely
         halfword [v1 + 0xff2] = 0

    loc_0x8025002c: // orphan
         // CODE XREF from fcn.821441a8 @ +0x33c
         ret                      // ra
         

    loc_0x80250120: // orphan
         v1 = 0
         a2 = 0x82b1 << 16
         if                       // likely
         a1 = 0

    loc_0x80250130: // orphan
         a2 += 0x2450
         t7 = [a2 + 0xdf4]        // t9

    loc_0x80250138: // orphan
         bnel a0, t7, 0x8025014c  // fcn.802482b0+0x7e9c // likely
         // CODE XREF from fcn.802482c8 @ 0x8024cdd8
         t8 = halfword [v0 + 0xdf0]

    loc_0x8025013c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cdd8
         t8 = halfword [v0 + 0xdf0]

    loc_0x80250140: // orphan
         ret                      // ra
         v0 = a2 + 0xdf4

    loc_0x80250160: // orphan
         ret                      // ra
         v0 = v1

    loc_0x8025019c: // orphan
         ra = [sp + 0x1c]
         t0 = halfword [v0 + 8]
         t2 = halfword [v0 + 0xa]
         t1 = halfword [v0 + 0xe]
         t3 = halfword [v0 + 0xc]
         if                       // likely
         [sp + 0x24] = t7

    loc_0x802501b8: // orphan
         t0 = 0

    loc_0x802501bc: // orphan
         v1 = v0 + 8
         t8 = halfword [v1 + 2]
         at = , t8 < 0x280
         bnel at, 0, 0x802501d8   // unlikely
         t9 = halfword [v1 + 6]

    loc_0x802501d0: // orphan
         t2 = 0 + 0x27f
         t9 = halfword [v1 + 6]

    loc_0x802501d8: // orphan
         bgezl t9, 0x802501e8     // likely
         t4 = halfword [v1 + 4]

    loc_0x802501e0: // orphan
         t1 = 0
         t4 = halfword [v1 + 4]

    loc_0x802501e8: // orphan
         at = , t4 < 0x1e0
         bnel at, 0, 0x802501fc   // unlikely
         at = , t2 < t0           // lo

    loc_0x802501f4: // orphan
         t3 = 0 + 0x1df
         at = , t2 < t0           // lo

    loc_0x802501fc: // orphan
         if                       // likely
         at = , t3 < t1           // lo

    loc_0x80250204: // orphan
         if                       // likely
         a0 = 0x800d << 16

    loc_0x8025020c: // orphan
         a3 = t2 - t0
         a3 += 1
         t5 = t3 - t1
         // CODE XREF from fcn.8023e660 @ 0x8023d674
         t6 = t5 + 1
         a3 <<= 0x10
         a1 = t0 << 0x10
         a2 = t1 << 0x10
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x10] = t6
         call 0x80006f70          // 0x80006f70(-1, 0xffff6408, 0xffff000b, 0xffff9cf8)
         a0 += 0x510

    loc_0x80250240: // orphan
         ra = [sp + 0x1c]
         v0 = [sp + 0x24]
         sp += 0x28
         ret
         

    loc_0x802502cc: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024cdf8
         a1 = 0

    loc_0x8025037c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce08
         at = 0x82b1 << 16
         at += t7
         t7 = [at - 0x7968]
         goto t7
         

    loc_0x80250498: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce24
         [sp + 0x20] = s2
         s4 = a3                  // s2
         s6 = a2
         [sp + 0x34] = ra
         [sp + 0x2c] = s5
         [sp + 0x24] = s3
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         [sp + 0x98] = a0
         [sp + 0x9c] = a1
         [sp + 0x94] = 0
         if                       // likely
         s2 = 0

    loc_0x802504cc: // orphan
         s3 = [sp + 0xa8]
         s1 = 0 + 0x58

    loc_0x802506a0: // orphan
         t4 <<= 3
         s0 = t4 + s3

    loc_0x802506a8: // orphan
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t5 = [sp + 0x70]
         s2 += 1
         at = , t5 < v0           // lo
         bnel at, 0, 0x802506cc   // likely
         t6 = [sp + 0x6c]

    loc_0x802506c0: // orphan
         [sp + 0x70] = v0
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t6 = [sp + 0x6c]

    loc_0x802506cc: // orphan
         at = , t6 < v0           // lo
         bnel at, 0, 0x802506ec   // likely
         t8 = [sp + 0x68]

    loc_0x802506d8: // orphan
         [sp + 0x70] = t6
         t7 = , unsigned  byte [s0 + 0x1d] // s4
         [sp + 0x6c] = t7
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t8 = [sp + 0x68]

    loc_0x802506ec: // orphan
         at = , t8 < v0
         if                       // unlikely
         

    loc_0x802506f8: // orphan
         [sp + 0x6c] = t8
         t9 = , unsigned  byte [s0 + 0x1d] // s4
         [sp + 0x68] = t9

    loc_0x80250704: // orphan
         if                       // likely
         s0 += 0x58

    loc_0x8025070c: // orphan
         if                       // unlikely
         a2 = s2 << 2

    loc_0x80250714: // orphan
         a2 -= s2
         a2 <<= 2
         a2 -= s2
         a2 <<= 3
         a3 = s4 << 2
         a3 -= s4
         s0 = a2 + s3
         a3 <<= 2
         a3 -= s4
         a3 <<= 3
         v1 = s0 + 0x58
         a0 = s0 + 0xb0
         a1 = s0 + 0x108

    loc_0x80250748: // orphan
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t0 = [sp + 0x70]
         a2 += 0x160              // arg3
         at = , t0 < v0
         bnel at, 0, 0x8025076c   // unlikely
         t1 = [sp + 0x6c]         // t9

    loc_0x80250760: // orphan
         [sp + 0x70] = v0
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t1 = [sp + 0x6c]         // t9

    loc_0x8025076c: // orphan
         at = , t1 < v0
         bnel at, 0, 0x8025078c   // unlikely
         t3 = [sp + 0x68]         // s4

    loc_0x80250778: // orphan
         [sp + 0x70] = t1
         t2 = , unsigned  byte [s0 + 0x1d] // s4
         [sp + 0x6c] = t2
         v0 = , unsigned  byte [s0 + 0x1d] // s4
         t3 = [sp + 0x68]         // s4

    loc_0x8025078c: // orphan
         at = , t3 < v0           // lo
         bnel at, 0, 0x802507a8   // likely
         t5 = [sp + 0x70]

    loc_0x80250798: // orphan
         [sp + 0x6c] = t3
         t4 = , unsigned  byte [s0 + 0x1d] // s4
         [sp + 0x68] = t4
         t5 = [sp + 0x70]

    loc_0x802507a8: // orphan
         t6 = , unsigned  byte [s0 + 0x75] // s4
         at = , t5 < t6
         bnel at, 0, 0x802507c4   // unlikely
         v0 = , unsigned  byte [v1 + 0x1d] // s4

    loc_0x802507b8: // orphan
         t7 = , unsigned  byte [v1 + 0x1d] // s4
         [sp + 0x70] = t7
         v0 = , unsigned  byte [v1 + 0x1d] // s4

    loc_0x802507c4: // orphan
         t8 = [sp + 0x6c]         // t3
         at = , t8 < v0           // lo
         bnel at, 0, 0x802507e8   // likely
         t0 = [sp + 0x68]         // s4

    loc_0x802507d4: // orphan
         [sp + 0x70] = t8

    loc_0x802507d8: // orphan
         t9 = , unsigned  byte [v1 + 0x1d] // s4
         [sp + 0x6c] = t9
         v0 = , unsigned  byte [v1 + 0x1d] // s4
         t0 = [sp + 0x68]         // s4

    loc_0x802507e8: // orphan
         at = , t0 < v0
         bnel at, 0, 0x80250804   // unlikely
         t2 = [sp + 0x70]         // t9

    loc_0x802507f4: // orphan
         [sp + 0x6c] = t0
         t1 = , unsigned  byte [v1 + 0x1d] // s4
         [sp + 0x68] = t1
         t2 = [sp + 0x70]         // t9

    loc_0x80250804: // orphan
         t3 = , unsigned  byte [s0 + 0xcd] // s4
         v1 += 0x160
         at = , t2 < t3
         bnel at, 0, 0x80250824   // unlikely
         v0 = , unsigned  byte [a0 + 0x1d] // arg1 // s4

    loc_0x80250818: // orphan
         t4 = , unsigned  byte [a0 + 0x1d] // arg1 // s4

    loc_0x80250824: // orphan
         t5 = [sp + 0x6c]
         at = , t5 < v0
         bnel at, 0, 0x80250848   // unlikely
         t7 = [sp + 0x68]         // s4

    loc_0x80250834: // orphan
         [sp + 0x70] = t5
         t6 = , unsigned  byte [a0 + 0x1d] // arg1 // s4
         [sp + 0x6c] = t6
         v0 = , unsigned  byte [a0 + 0x1d] // arg1 // s4
         t7 = [sp + 0x68]         // s4

    loc_0x80250848: // orphan
         at = , t7 < v0           // lo
         bnel at, 0, 0x80250864   // likely
         t9 = [sp + 0x70]

    loc_0x80250854: // orphan
         [sp + 0x6c] = t7
         t8 = , unsigned  byte [a0 + 0x1d] // arg1 // s4
         [sp + 0x68] = t8
         t9 = [sp + 0x70]

    loc_0x80250864: // orphan
         t0 = , unsigned  byte [s0 + 0x125] // s4
         s0 += 0x160
         a0 += 0x160              // arg1
         at = , t9 < t0
         bnel at, 0, 0x80250888   // unlikely
         v0 = , unsigned  byte [a1 + 0x1d] // arg2 // s4

    loc_0x8025087c: // orphan
         t1 = , unsigned  byte [a1 + 0x1d] // arg2 // s4
         [sp + 0x70] = t1
         v0 = , unsigned  byte [a1 + 0x1d] // arg2 // s4

    loc_0x80250888: // orphan
         t2 = [sp + 0x6c]
         at = , t2 < v0           // lo

    loc_0x80250890: // orphan
         bnel at, 0, 0x802508ac   // likely
         t4 = [sp + 0x68]         // s4

    loc_0x80250898: // orphan
         [sp + 0x70] = t2
         t3 = , unsigned  byte [a1 + 0x1d] // arg2 // s4
         [sp + 0x6c] = t3
         v0 = , unsigned  byte [a1 + 0x1d] // arg2 // s4
         t4 = [sp + 0x68]         // s4

    loc_0x802508ac: // orphan
         at = , t4 < v0
         if                       // unlikely
         

    loc_0x802508b8: // orphan
         [sp + 0x6c] = t4
         t5 = , unsigned  byte [a1 + 0x1d] // arg2 // s4
         [sp + 0x68] = t5

    loc_0x802508c4: // orphan
         if                       // likely
         a1 += 0x160              // arg2

    loc_0x802508cc: // orphan
         t6 = [sp + 0x70]         // s4
         t7 = [sp + 0x68]         // s4
         t9 = [sp + 0x6c]
         a0 = s6
         t8 = t6 + t7
         call 0x80071890          // "T@" // 0x80071890(0x442f71dcfe111002, 0x442f71dcfe116408, 0x8, -1)
         a1 = t8 + t9
         bnel v0, 0, 0x802508f8   // likely
         t0 = [sp + 0x9c]

    loc_0x802508f0: // orphan
         s1 = 0 + 1               // lo
         t0 = [sp + 0x9c]

    loc_0x8025093c: // orphan
         t6 = a0 - 1

    loc_0x802509b8: // orphan
         v1 = v0                  // s4
         at = , unsigned  , a1 < 5
         if                       // loc.80250a3c // loc.80250a3c // likely
         t7 = a1 << 2

    loc_0x802509c8: // orphan
         at = 0x82b1 << 16
         at += t7
         t7 = [at - 0x793c]
         goto t7
         

    loc_0x80250a24: // orphan
         goto loc.80250a3c        // loc.80250a3c(-1)
         v1 = v0                  // s4

    loc_0x80250a58: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce34
         sp -= 0x18
         at = 1 << 16
         if                       // unlikely
         [sp + 0x14] = ra

    loc_0x80250a68: // orphan
         at = 2 << 16
         if                       // unlikely
         at = 3 << 16

    loc_0x80250a74: // orphan
         if                       // unlikely
         at = 4 << 16

    loc_0x80250a7c: // orphan
         if                       // unlikely
         at = 5 << 16

    loc_0x80250a84: // orphan
         if                       // unlikely
         a1 = 0 + 4

    loc_0x80250a8c: // orphan
         goto 0x80250ab4
         a1 = 0

    loc_0x80250a94: // orphan
         goto 0x80250ab4
         a1 = 0

    loc_0x80250a9c: // orphan
         goto 0x80250ab4
         a1 = 0 + 1               // lo

    loc_0x80250aa4: // orphan
         goto 0x80250ab4
         a1 = 0 + 2

    loc_0x80250aac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d6a8
         goto 0x80250ab4
         a1 = 0 + 3

    loc_0x80250ab4: // orphan
         // CODE XREFS from fcn.802482c8 @ 0x80250a8c, 0x80250a94, 0x80250a9c, 0x80250aa4, 0x80250aac
         call fcn.82b0173c
         
         ra = [sp + 0x14]         // lo
         sp += 0x18
         ret                      // lo
         

    loc_0x80250c90: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce3c
         t5 += t4
         t5 <<= 1
         t6 = t5 + 0x52
         halfword [s2 + 0x12] = t6
         lwl t8, 0x10, s2
         lwr t8, 0x13, s2
         t5 = 0 - 0x1e0
         t7 = 0 + 0x82
         swl t8, 0x3c, s2
         swr t8, 0x3f, s2
         swl t0                   // arg1
         swr t0, 3, a0            // arg1
         t1 = halfword [s2 + 0x14]
         t3 = halfword [s2 + 0x16]
         v0 = s2 + 0x50
         t2 = ~t1
         t4 = ~t3
         halfword [s2 + 0x18] = t2
         halfword [s2 + 0x1a] = t4
         lwl t6                   // arg1
         lwr t6, 3, a0            // arg1
         t1 = halfword [s2 + 0x14]
         t3 = halfword [s2 + 0x16]
         swl t6, 0x1c, s2
         swr t6, 0x1f, s2
         lwl t8                   // t9
         lwr t8, 3, v1            // t9

    loc_0x8025112c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce48
         lwr t0, 0x13, a0         // t9
         halfword [a0 + 0xc] = 0
         halfword [a0 + 0xe] = t6
         lwl t2, 0xc, a0
         lwr t2, 0xf, a0
         swl t0, 0x3c, a0

    loc_0x80251144: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023d6b0
         v0 = a0 + 0x14
         swr t0, 0x3f, a0
         swl t2
         swr t2, 3, v0
         lwl t4
         lwr t4, 3, v0            // s4
         v1 = a0 + 0x18
         t1 = 0 + 0x1c1
         swl t4
         swr t4, 3, v1
         lwl t6
         // CODE XREF from fcn.8024ccdc @ +0x170
         lwr t6, 3, v0
         t3 = 0x82b1 << 16
         t3 -= 0x7a44
         swl t6, 0x1c, a0

    loc_0x80251180: // orphan
         swr t6, 0x1f, a0
         lwl t8                   // t9
         lwr t8, 3, v1            // t9
         swl t8, 0x2c, a0
         swr t8, 0x2f, a0
         lwl t0
         lwr t0, 3, v0
         swl t0, 0x20, a0
         swr t0, 0x23, a0
         lwl t2                   // t9
         lwr t2, 3, v1            // t9
         swl t2, 0x30, a0
         swr t2, 0x33, a0
         // CODE XREF from fcn.802482c8 @ 0x8024ce50
         lwl t4
         lwr t4, 3, v0
         t2 = 0 + 0xa6
         swl t4, 0x24, a0
         swr t4, 0x27, a0
         lwl t6                   // t9
         lwr t6, 3, v1            // t9
         swl t6, 0x34, a0
         swr t6, 0x37, a0
         lwl t8
         lwr t8, 3, v0
         swl t8, 0x28, a0
         swr t8, 0x2b, a0
         lwl t0                   // t9
         lwr t0, 3, v1            // t9
         halfword [a0 + 0x48] = t1
         halfword [a0 + 0x4a] = t2
         swl t0, 0x38, a0
         swr t0, 0x3b, a0
         t5 = , unsigned  byte [t3 + 0] // s4
         byte [a0 + 0x4c] = t5
         t4 = , unsigned  byte [t3 + 1]

    loc_0x8025120c: // orphan
         byte [a0 + 0x4d] = t4
         t5 = , unsigned  byte [t3 + 2]
         ret                      // ra
         byte [a0 + 0x4e] = t5

    loc_0x80251228: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce54
         [sp + 0x18] = s0
         s1 = a0                  // t9

    loc_0x802512c4: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce60
         lwr t6, 0xf, s1          // t9
         swl t4, 0x3c, s1
         a0 = s1 + 0x14
         swr t4, 0x3f, s1
         swl t6
         swr t6, 3, a0
         t7 = halfword [s1 + 0x14]
         t9 = halfword [s1 + 0x16]
         v1 = s1 + 0x18
         t8 = ~t7
         t1 = ~t9
         halfword [s1 + 0x18] = t8
         halfword [s1 + 0x1a] = t1
         // CODE XREF from fcn.8023e660 @ 0x8023d6b4
         lwl t2                   // t9

    loc_0x80251518: // orphan
         ra = [sp + 0x24]         // t9
         s3 = [sp + 0x20]         // t9
         s2 = [sp + 0x1c]
         s1 = [sp + 0x18]         // s0
         s0 = [sp + 0x14]         // lo
         ret                      // t9
         sp += 0x28

    loc_0x802517f4: // orphan
         lwl t0, 0x10, a0         // t9
         lwr t0, 0x13, a0
         halfword [a0 + 0xc] = 0
         halfword [a0 + 0xe] = t6
         lwl t2, 0xc, a0
         lwr t2, 0xf, a0
         swl t0, 0x3c, a0
         v0 = a0 + 0x14
         swr t0, 0x3f, a0
         swl t2
         swr t2, 3, v0
         lwl t4
         lwr t4, 3, v0
         v1 = a0 + 0x18
         t1 = 0 + 0x194
         swl t4
         swr t4, 3, v1
         lwl t6
         lwr t6, 3, v0
         t3 = 0x82b1 << 16
         t3 -= 0x7a38
         swl t6, 0x1c, a0
         swr t6, 0x1f, a0
         lwl t8
         lwr t8, 3, v1
         swl t8, 0x2c, a0
         swr t8, 0x2f, a0

    loc_0x80251860: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce6c
         lwl t0
         lwr t0, 3, v0
         swl t0, 0x20, a0
         swr t0, 0x23, a0
         lwl t2                   // t9
         // CODE XREF from fcn.8024ccdc @ +0x194
         lwr t2, 3, v1            // t9
         swl t2, 0x30, a0
         swr t2, 0x33, a0
         lwl t4
         lwr t4, 3, v0
         t2 = 0 + 0xa0
         swl t4, 0x24, a0
         swr t4, 0x27, a0
         lwl t6                   // t9
         lwr t6, 3, v1            // t9
         swl t6, 0x34, a0
         swr t6, 0x37, a0
         lwl t8
         lwr t8, 3, v0
         swl t8, 0x28, a0
         swr t8, 0x2b, a0
         lwl t0                   // t9
         lwr t0, 3, v1            // t9
         halfword [a0 + 0x48] = t1
         halfword [a0 + 0x4a] = t2
         swl t0, 0x38, a0
         swr t0, 0x3b, a0
         t5 = , unsigned  byte [t3 + 0] // s4
         byte [a0 + 0x4c] = t5
         t4 = , unsigned  byte [t3 + 1]
         byte [a0 + 0x4d] = t4
         t5 = , unsigned  byte [t3 + 2]
         ret                      // ra
         byte [a0 + 0x4e] = t5

    loc_0x80251a70: // orphan
         a1 = 0x82b1 << 16
         v0 = a1 + 0x2450
         t6 = halfword [v0 + 0x250]
         v1 = 0 + 1               // lo
         a0 = 0
         if                       // unlikely
         a2 = 0x82b1 << 16

    loc_0x80251a8c: // orphan
         a2 += 0x2450
         a3 = 0 + 2
         a1 = [a2 + 0xb18]        // t9

    loc_0x80251a98: // orphan
         t7 = , unsigned  halfword [a1 + 6]
         beql a3, t7, 0x80251ab0  // unlikely
         t8 = halfword [v0 + 0x250]

    loc_0x80251aa4: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80251ab0: // orphan
         a0 += 1
         a2 += 4
         at = , a0 < t8
         bnel at, 0, 0x80251a98   // unlikely
         a1 = [a2 + 0xb18]        // t9

    loc_0x80251ac4: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80251ed0: // orphan
         // CODE XREF from fcn.802482c8 @ 0x8024ce8c
         unsigned , hi
         t9 = lo

    loc_0x80251ed8: // orphan
         
         
         div 0, t9, a1
         t0 = lo
         halfword [a0 + 0xc] = t0
         if                       // likely
         

    loc_0x80251ef4: // orphan
         break 7

    loc_0x80251ef8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80251f04: // orphan
         if                       // likely
         

    loc_0x80251f0c: // orphan
         break 6

    loc_0x80251f10: // orphan
         unsigned , hi            // v1 // v1
         t2 = lo
         
         
         div 0, t2, a1
         t3 = lo
         halfword [a0 + 0xe] = t3
         if                       // likely
         

    loc_0x80251f34: // orphan
         break 7

    loc_0x80251f38: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80251f44: // orphan
         // CODE XREF from fcn.8024ccdc @ +0x1c4
         if                       // likely
         

    loc_0x80251f4c: // orphan
         break 6

    loc_0x80251f50: // orphan
         goto 0x80251f5c
         

    loc_0x80251f5c: // orphan
         // CODE XREF from fcn.802482c8 @ 0x80251f50
         if                       // unlikely
         

    loc_0x80251f64: // orphan
         lwl t5, 0x14, a0
         lwr t5, 0x17, a0

    loc_0x8025217c: // orphan
         [sp + 0x30] = s0
         s0 = a0                  // t9
         [sp + 0x34] = ra
         a0 = 0 + 0x41
         call 0x8004c990          // 0x8004c990(0x41, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         [sp + 0x94] = v0
         a0 = 0 + 0x42
         // CODE XREF from fcn.8024ccdc @ +0x20c
         call 0x8004c990          // 0x8004c990(0x42, 0x0, 0x8, -1)
         a1 = 0
         [sp + 0x90] = v0
         a0 = s0                  // t9
         call fcn.82b0284c
         a1 = sp + 0x8c
         a3 = [sp + 0x94]         // s4
         t6 = [sp + 0x90]         // s4
         beql a3, 0, 0x8025260c   // unlikely
         ra = [sp + 0x34]

    loc_0x802521c4: // orphan
         beql t6, 0, 0x8025260c   // unlikely
         ra = [sp + 0x34]

    loc_0x802521cc: // orphan
         t7 = halfword [s0 + 0x48]
         t8 = , unsigned  halfword [a3 + 0]
         at = 0x4f80 << 16

    loc_0x802521d8: // orphan
         mtc1 t7, f4
         mtc1 t8, f8
         cvt.s.w f6, f4
         if                       // likely
         cvt.s.w f10, f8

    loc_0x802521ec: // orphan
         mtc1 at, f16
         // CODE XREF from fcn.8024ccdc @ +0x210
         
         add.s f10, f10, f16

    loc_0x802521f8: // orphan
         div.s f2, f6, f10
         mtc1 0, f18

    loc_0x80252200: // orphan
         
         c.lt.s f18, f2
         
         bc1fl 0x8025260c
         ra = [sp + 0x34]
         t9 = , unsigned  byte [s0 + 0x4c] // s4
         if                       // likely
         

}

*/
