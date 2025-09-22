int fcn.8021e030 (int esi, int edx) {
    loc_0x8021e030:
        // CALL XREF from fcn.8019c2fc @ +0x490
        0x8021e030
        0x8021e034
        0x8021e038
        0x8021e03c
        if            // unlikely
        if            // unlikely
            
    loc_0x80238bc8:
        // CODE XREF from fcn.8021e030 @ 0x8021e044
        0x80238bc8
        break 6
         // } else {
    loc_0x8021e04c:
        0x8021e04c
        0x8021e050
        0x8021e054
        if            // fcn.8023e660-0x5974 // unlikely
        if            // fcn.8023e660-0x5960 // unlikely
        }
        return eax;
    loc_0x8021e064:
        if            // fcn.8023e660-0x58f8 // unlikely
        0x8021e068
        // chop
            
    loc_0x80238d68:
        // CODE XREF from fcn.8021e030 @ 0x8021e064
        s0 += 1
        at = , s0 < 2
        t6 = t5 << 2
        t7 = s3 + t6
        [t7 + 0x34f4] = v0
        t8 = halfword [s3 + 0x18]
        t9 = t8 + 1
        if            // unlikely
        halfword [s3 + 0x18] = t9
        // chop
            
    loc_0x80238d50:
        a0 = 0 + 4    // arg1
        a1 = s0
        a2 = s5       // t9
        call fcn.82604c40
        a3 = 0 + 0x14
        t5 = halfword [s3 + 0x18]
        // chop
    loc_0x8021e06c: // orphan
             
             
             if                       // unlikely
             if                       // unlikely

    loc_0x8021e080: // orphan
         
         
         
         
         if                       // fcn.80239bb4+0x60 // unlikely
         if                       // unlikely

    loc_0x8021e09c: // orphan
         if                       // fcn.80239bb4+0x3c // unlikely
         if                       // unlikely

    loc_0x8021e0a8: // orphan
         
         if                       // fcn.8023e660-0x4690 // unlikely
         if                       // fcn.8023e660-0x463c // unlikely

    loc_0x8021e0b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e0c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e0d0: // orphan
         if                       // fcn.8023e660-0x42fc // unlikely
         if                       // fcn.8023e660-0x4258 // unlikely

    loc_0x8021e0dc: // orphan
         if                       // fcn.8023e660-0x41c0 // unlikely
         if                       // fcn.8023a4b0+0x4 // unlikely

    loc_0x8021e0e8: // orphan
         if                       // unlikely
         

    loc_0x8021e0f0: // orphan
         
         if                       // fcn.8023a4b0+0x88 // unlikely
         if                       // fcn.8023e660-0x40b4 // unlikely

    loc_0x8021e100: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da7c
         if                       // unlikely
         

    loc_0x80238f90: // orphan
         a1 = [sp + 0x74]
         a2 = [sp + 0x48]
         a0 = 0 + 6               // arg1
         a3 = 0 + 0x14            // arg4
         call fcn.82604c40
         s2 = 0
         t5 = halfword [v0 + 0x36]
         s3 = v0 + 0x30
         s0 = s3
         blezl t5, 0x802390ec     // unlikely
         v0 = [sp + 0x74]

    loc_0x80238fbc: // orphan
         t7 = halfword [s0 + 0x214]

    loc_0x80238fc0: // orphan
         t6 = halfword [s3 + 8]
         a2 = s6 + 0x20           // arg3
         if                       // likely
         a0 = t6 + s2             // arg1

    loc_0x80238fd0: // orphan
         call 0x826119a4          // "PW" // 0x826119a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s6 + 0x1a]
         beql v0, s7, 0x802390d4  // unlikely
         t1 = halfword [s3 + 6]

    loc_0x80238fe0: // orphan
         v0 = [s4 + 0]            // t9
         t8 = [fp + 0]
         v1 = halfword [s0 + 0x22c]
         t9 = v0 + t8
         at = , v1 < t9           // lo
         if                       // unlikely
         at = , v0 < v1

    loc_0x80238ffc: // orphan
         if                       // unlikely
         s1 = v1

    loc_0x80239004: // orphan
         s1 = v0                  // s4

    loc_0x80239008: // orphan
         a0 = halfword [s0 + 0x238]
         v0 = halfword [s0 + 0x250]
         t0 = v1 + 1
         halfword [s0 + 0x22c] = t0
         at = , a0 < v0
         beql at, 0, 0x80239044   // likely
         t2 = a0 - v0

    loc_0x80239024: // orphan
         t1 = halfword [s0 + 0x22c]
         bnel s5, t1, 0x80239044  // likely
         t2 = a0 - v0

    loc_0x80239030: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x71
         a0 = halfword [s0 + 0x238]
         v0 = halfword [s0 + 0x250]
         t2 = a0 - v0

    loc_0x80239044: // orphan
         unsigned , hi
         t4 = [s4 + 0]            // t9
         t3 = lo
         
         
         div 0, t3, t4
         t5 = lo
         t6 = v0 + t5
         if                       // likely
         

    loc_0x8023906c: // orphan
         break 7

    loc_0x80239070: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8023907c: // orphan
         if                       // likely
         

    loc_0x80239084: // orphan
         break 6

    loc_0x80239088: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e074
         halfword [s0 + 0x244] = t6
         goto 0x802390a4
         t8 = halfword [s0 + 0x250]

    loc_0x80239094: // orphan
         t7 = halfword [s0 + 0x238]
         halfword [s0 + 0x214] = 0

    loc_0x8023909c: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e078
         halfword [s0 + 0x244] = t7
         t8 = halfword [s0 + 0x250]

    loc_0x802390a4: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8023908c
         beql t8, 0, 0x802390d4   // unlikely
         t1 = halfword [s3 + 6]

    loc_0x802390ac: // orphan
         t9 = halfword [s0 + 0x244]
         bnel t9, 0, 0x802390d4   // unlikely
         t1 = halfword [s3 + 6]

    loc_0x802390b8: // orphan
         t0 = halfword [s0 + 0x25c]
         a0 = 0 + 0x77            // arg1
         bnel t0, 0, 0x802390d4   // likely
         t1 = halfword [s3 + 6]

    loc_0x802390c8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s0 + 0x25c] = s5

    loc_0x802390d0: // orphan
         t1 = halfword [s3 + 6]

    loc_0x802390d4: // orphan
         s2 += 1
         s0 += 2
         at = , s2 < t1           // lo
         bnel at, 0, 0x80238fc0   // likely
         t7 = halfword [s0 + 0x214]

    loc_0x802390e8: // orphan
         v0 = [sp + 0x74]

    loc_0x802390ec: // orphan
         v0 += 1
         at = , v0 < 2
         if                       // unlikely
         [sp + 0x74] = v0

    loc_0x802390fc: // orphan
         [sp + 0x74] = 0

    loc_0x80239100: // orphan
         a1 = [sp + 0x74]
         a0 = 0 + 6               // arg1
         a2 = [sp + 0x48]
         a3 = 0 + 0x14            // arg4
         call fcn.82604c40
         s2 = 0
         t2 = halfword [v0 + 0x36]
         a2 = v0 + 0x30
         blezl t2, 0x8023915c     // unlikely
         t4 = [sp + 0x74]

    loc_0x80239128: // orphan
         a1 = halfword [a2 + 6]
         v0 = 0
         v1 = a2
         a0 = a1 << 1

    loc_0x80239138: // orphan
         t3 = halfword [v1 + 0x214]
         v0 += 2
         at = , v0 < a0           // lo
         if                       // likely
         

    loc_0x8023914c: // orphan
         [sp + 0x7c] = 0

    loc_0x80239150: // orphan
         if                       // likely
         // CALL XREF from fcn.81099108 @ +0x14
         v1 += 2

    loc_0x80239158: // orphan
         t4 = [sp + 0x74]

    loc_0x8023915c: // orphan
         v0 = 0 + 2
         t5 = t4 + 1
         if                       // likely
         [sp + 0x74] = t5

    loc_0x8023916c: // orphan
         t6 = [sp + 0x7c]
         a0 = 0 + 6               // arg1
         a1 = 0
         if                       // likely
         a3 = 0 + 0x14            // arg4

    loc_0x80239180: // orphan
         t7 = [s6 + 0x110]        // t9
         t0 = 0 + 8               // a2
         t1 = 0 + 0xa
         t8 = [t7 + 0]            // t9
         t9 = , unsigned  byte [t8 + 7] // s4
         beql v0, t9, 0x802391a8  // likely
         halfword [s6 + 2] = t1

    loc_0x8023919c: // orphan
         goto 0x802391a8
         halfword [s6 + 2] = t0

    loc_0x802391a8: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8023919c
         halfword [s6 + 6] = 0

    loc_0x802391ac: // orphan
         call fcn.82604c40
         a2 = [sp + 0x48]
         t6 = halfword [v0 + 0x26]
         t2 = halfword [v0 + 0x10]
         t3 = halfword [v0 + 0x14]
         t4 = halfword [v0 + 0x12]
         t5 = halfword [v0 + 0x16]
         a0 = [s6 + 0x110]        // int64_t arg1 // t9
         a3 = halfword [v0 + 0x24]
         t7 = t6 << 1
         [sp + 0x10] = t7
         a1 = t2 + t3
         call fcn.826026e8        // fcn.826026e8(-1)
         a2 = t4 + t5
         ra = [sp + 0x44]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]

    loc_0x80239c1c: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]       // t9
         t8 = halfword [s2 + 0x18]

    loc_0x80239c28: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e094
         s0 += 1
         s1 += 4
         at = , s0 < t8           // lo
         if                       // likely
         

    loc_0x80239c3c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         t9 = halfword [s2 + 2]
         at = 0 + 0xa
         beql t9, at, 0x80239c60  // fcn.8023e660-0x4a00 // unlikely
         ra = [sp + 0x24]

    loc_0x80239c54: // orphan
         call fcn.82602708
         a0 = [s2 + 0x110]        // t9
         ra = [sp + 0x24]

    loc_0x80239e84: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0a0
         s2 = a0                  // t9
         // CODE XREF from fcn.8023d410 @ +0xf34
         [sp + 0x20] = s3
         [sp + 0x24] = ra
         t0 = 0 + 1               // lo
         s3 = s2 + 0x114
         [sp + 0x18] = s1

    loc_0x8023a100: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0bc
         beql v0, 0, 0x8023a11c   // unlikely
         t8 = halfword [s2 + 0x12]

    loc_0x8023a108: // orphan
         beql v0, at, 0x8023a160  // unlikely
         v0 = halfword [s2 + 6]

    loc_0x8023a110: // orphan
         goto 0x8023a2d4          // fcn.8023e660-0x438c
         ra = [sp + 0x24]

    loc_0x8023a11c: // orphan
         s0 = 0
         if                       // fcn.8023e660-0x4390 // unlikely
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023a128: // orphan
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         call fcn.8260675c
         a0 = v0                  // s4
         t9 = halfword [s2 + 0x12]
         s0 += 1
         at = , s0 < t9           // lo
         bnel at, 0, 0x8023a128   // likely
         a0 = 0 + 1               // lo

    loc_0x8023a154: // orphan
         goto 0x8023a2d4          // fcn.8023e660-0x438c
         ra = [sp + 0x24]

    loc_0x8023a160: // orphan
         bnel v0, 0, 0x8023a178   // likely
         t0 = v0 + 1

    loc_0x8023a168: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x6c
         v0 = halfword [s2 + 6]
         t0 = v0 + 1

    loc_0x8023a178: // orphan
         halfword [s2 + 6] = t0
         v0 = halfword [s2 + 6]
         t4 = 0x8261 << 16
         at = , v0 < s1           // lo
         if                       // likely
         

    loc_0x8023a190: // orphan
         t1 = , unsigned  halfword [s2 + 4]
         t3 = 0 + 0x11
         t4 = 0 + 0xe
         t2 = t1 & 0x200
         beql t2, 0, 0x8023a1b8   // unlikely
         halfword [s2 + 2] = t4

    loc_0x8023a1a8: // orphan
         halfword [s2 + 2] = t3
         goto 0x8023a1bc
         halfword [s2 + 6] = 0

    loc_0x8023a1b8: // orphan
         halfword [s2 + 6] = 0

    loc_0x8023a1bc: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8023a1ac
         t5 = halfword [s2 + 0x12]
         halfword [s2 + 0x18] = 0
         s0 = 0
         if                       // unlikely
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023a1cc: // orphan
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023a1d0: // orphan
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t6 = halfword [s2 + 0x18]
         s0 += 1
         t7 = t6 << 2
         t8 = s2 + t7
         [t8 + 0x34f4] = v0
         t1 = halfword [s2 + 0x12]
         t9 = halfword [s2 + 0x18]
         at = , s0 < t1           // lo
         t0 = t9 + 1              // lo
         if                       // likely
         halfword [s2 + 0x18] = t0

    loc_0x8023a20c: // orphan
         s0 = 0

    loc_0x8023a210: // orphan
         t2 = halfword [s2 + 0x18] // lo
         s1 = s2
         if                       // fcn.8024d00c-0x12dcc // unlikely
         

    loc_0x8023a220: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]       // t9
         t3 = halfword [s2 + 0x18] // lo
         s0 += 1
         s1 += 4
         at = , s0 < t3
         // CODE XREF from fcn.8021e030 @ 0x8021e0c4
         if                       // unlikely
         

    loc_0x8023a24c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x6a
         goto 0x8023a2d4          // fcn.8023e660-0x438c
         // CODE XREF from fcn.8021e030 @ 0x8021e0c8
         ra = [sp + 0x24]

    loc_0x8023a250: // orphan
         t4 = halfword [t4 + 0x57a8]
         bnel t4, v0, 0x8023a2d4  // fcn.8023e660-0x438c // likely
         ra = [sp + 0x24]

    loc_0x8023a25c: // orphan
         t5 = halfword [s2 + 0x12]
         s0 = 0
         s1 = 0 - 1               // s2
         if                       // fcn.8023e660-0x4390 // unlikely
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023a50c: // orphan
         v0 = halfword [v1 + 0x8c]
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ 0x8021e0e8
         t2 = v0 - 1

    loc_0x8023a814: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e100
         
         s0 = v0 << 6
         s0 += v0
         s0 <<= 1
         at = 0 + 0x3c
         div 0, s0, at
         s0 = lo
         goto 0x8023a870          // fcn.8023e660-0x3df0
         

    loc_0x8023b28c: // orphan
         a1 = s1
         beql t6, 0, 0x8023b2c4   // fcn.8023e660-0x339c // unlikely
         s2 += 0x298

    loc_0x8023b298: // orphan
         call fcn.82609a88        // fcn.82609a88(-1)
         s1 = 0
         goto 0x8023b2c4          // fcn.8023e660-0x339c
         s2 += 0x298

}
