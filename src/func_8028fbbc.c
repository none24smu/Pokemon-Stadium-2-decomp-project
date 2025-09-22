/*
 * Function: 0x8028fbbc
 * Category: math
 */

// Decompiled C code
int fcn.802a91c8 (int esi, int edx) {
// } else {
}
return eax;
}

/*
// Full radare2 output
int fcn.802a91c8 (int esi, int edx) {
    loc_0x80287e74:
        s4 = a2
        [sp + 0x2c] = ra
        [sp + 0x20] = s2
        [sp + 0x30] = a0
        s3 = 0
        s1 = a0       // t9
        at = , s3 < s4 // lo
        beql at, 0, 0x80287f40 // unlikely
        byte [s1 + 0] = 0
            
    loc_0x80287f40:
        ra = [sp + 0x2c]
        s4 = [sp + 0x28]
        s3 = [sp + 0x24]
        s2 = [sp + 0x20] // t9
        s1 = [sp + 0x1c]
        s0 = [sp + 0x18]
        v0 = [sp + 0x30] // t9
        ret           // ra
        sp += 0x30
         // } else {
    loc_0x80287e98:
        v0 = byte [s0 + 0] // s4
        }
        return eax;
    loc_0x80287e9c: // orphan
             if                       // unlikely
             t6 = v0 & 0xff           // s4

    loc_0x80287ea4: // orphan
         at = , t6 < 0x80         // lo
         if                       // likely
         s2 = 0

    loc_0x80287eb0: // orphan
         call 0x8003514c          // "T@" // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         bnel v0, 0, 0x80287ecc   // likely
         v1 = 0 + 1               // lo

    loc_0x80287ec0: // orphan
         goto 0x80287ecc
         v1 = 0 + 2

    loc_0x80287ec8: // orphan
         v1 = 0 + 1               // lo

    loc_0x80287ecc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80287ec0
         if                       // unlikely
         s3 += 1

    loc_0x80287ed4: // orphan
         a0 = v1 & 3
         if                       // likely
         v0 = a0

    loc_0x80287ee0: // orphan
         t7 = byte [s0 + 0]       // s4
         s2 += 1
         s1 += 1
         s0 += 1
         if                       // likely
         byte [s1 - 1] = t7

    loc_0x80287ef8: // orphan
         beql s2, v1, 0x80287f34  // unlikely
         at = , s3 < s4

    loc_0x80287f00: // orphan
         t8 = byte [s0 + 0]       // s4
         s2 += 4
         s1 += 4
         byte [s1 - 4] = t8
         t9 = byte [s0 + 1]       // s4
         s0 += 4
         byte [s1 - 3] = t9
         t0 = byte [s0 - 2]       // s4
         byte [s1 - 2] = t0
         t1 = byte [s0 - 1]       // s4
         if                       // likely
         byte [s1 - 1] = t1

    loc_0x80287f30: // orphan
         at = , s3 < s4

    loc_0x80287f34: // orphan
         bnel at, 0, 0x80287e9c   // likely
         v0 = byte [s0 + 0]       // s4

    loc_0x80287f3c: // orphan
         byte [s1 + 0] = 0

    loc_0x80288084: // orphan
         byte [sp + 0x6f] = a2
         call 0x88213450          // 0x88213450(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x6b] = a3
         a2 = , unsigned  byte [sp + 0x6f]
         a3 = , unsigned  byte [sp + 0x6b] // s4
         if                       // likely
         s0 = v0                  // s4

    loc_0x802880a0: // orphan
         goto 0x802880ac
         s5 = 0 + 0x3a

    loc_0x802880a8: // orphan
         s5 = 0 + 0x171

    loc_0x802880ac: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802880a0
         s6 = a3 << 2
         s6 -= a3
         t9 = 0x8823 << 16
         t9 = [t9 + 0x4730]
         s6 <<= 2
         s6 -= a3
         s6 <<= 2
         v0 = t9 + s6
         a0 = , unsigned  halfword [v0 + 0x18]
         s1 = 0
         s4 = a3 << 2
         at = , a2 < a0           // lo
         beql at, 0, 0x802880f0   // unlikely
         a2 = a0 & 0xff           // s4

    loc_0x802880e4: // orphan
         goto 0x802880f0
         a2 &= 0xff

    loc_0x802880f0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802880e4
         t0 = halfword [v0 + 0x2e]
         t1 = 0 + 0x80
         s3 = a2
         s2 = t1 - t0
         s2 <<= 0x10
         if                       // unlikely
         s2 = , signed  s2 >> 0x10

    loc_0x8028810c: // orphan
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4730]       // t9
         t2 = v1 + s4
         t3 = [t2 + 0x68]         // t9
         v0 = v1 + s6
         if                       // unlikely
         

    loc_0x80288128: // orphan
         t4 = halfword [v0 + 0x14]
         t5 = halfword [v0 + 0x16]
         v0 = 0
         t6 = t4 - t5
         if                       // likely
         

    loc_0x80288140: // orphan
         goto 0x80288148
         v0 = 0 + 1               // lo

    loc_0x80288148: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80288140
         if                       // likely
         v0 = 0x8823 << 16

    loc_0x8028814c: // orphan
         v0 = 0x8823 << 16

    loc_0x80288150: // orphan
         v0 = [v0 + 0x46f0]       // t9
         at = 0 + 1               // lo
         a0 = 0x8800 << 16
         if                       // unlikely
         at = 0 + 3

    loc_0x80288164: // orphan
         if                       // unlikely
         

    loc_0x8028816c: // orphan
         t7 = , unsigned  byte [v1 + 0] // s4
         a1 = 0 + 0x96
         a2 = 0 + 0x96
         if                       // likely
         a3 = 0 + 0x96

    loc_0x80288180: // orphan
         call 0x880006e0          // 0x880006e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x5fa0
         goto 0x802881a4
         a0 = 0 + 0xf

    loc_0x80288190: // orphan
         call 0x8003573c          // 0x8003573c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x5c
         call 0x880006e0          // 0x880006e0(0x17805c, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         a0 = 0 + 0xf

    loc_0x802881a4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80288188
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         if                       // likely
         a0 = 0 + 0x10

    loc_0x802881b4: // orphan
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         if                       // likely
         a0 = 0 + 0x11

    loc_0x802881c4: // orphan
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         if                       // likely
         a0 = 0 + 0x12

    loc_0x802881d4: // orphan
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         if                       // likely
         a0 = 0 + 0x13

    loc_0x802881e4: // orphan
         call 0x88005cc0          // 0x88005cc0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         if                       // likely
         a0 = s5 << 0x10

    loc_0x802881f4: // orphan
         a1 = s2 << 0x10
         a1 = , signed  a1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10 // t9
         call 0x882158e4          // 0x882158e4(-1, -1, 0x8, -1)
         a2 = s0

    loc_0x80288208: // orphan
         s0 += 0x76

    loc_0x8028820c: // orphan
         s2 += 0x1b
         s2 <<= 0x10
         s1 += 1
         if                       // likely
         s2 = , signed  s2 >> 0x10

    loc_0x80288220: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         s6 = [sp + 0x2c]         // ra

    loc_0x80288390: // orphan
         t8 = a0 << 2
         t9 = v0 + t8
         t0 = [t9 + 0x68]
         t1 = a0 << 1
         t2 = t1 << 2
         if                       // likely
         t2 -= t1

    loc_0x802883ac: // orphan
         t2 <<= 2
         t3 += t2
         t3 = , unsigned  byte [t3 + 0x463c] // s4
         if                       // unlikely
         

    loc_0x802883c0: // orphan
         v1 = 0 + 1               // lo

    loc_0x802883c4: // orphan
         ret                      // ra
         v0 = v1

    loc_0x802883d8: // orphan
         [sp + 0x1c] = ra
         a0 = 0 + 1               // lo
         call 0x88213450          // 0x88213450(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [t6 + 0] // s4
         [sp + 0x24] = v0
         t7 = byte [v0 + 0x66]    // s4
         beql t7, 0, 0x802884c8   // unlikely
         ra = [sp + 0x1c]

    loc_0x802883f8: // orphan
         call 0x8004989c          // 0x8004989c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x20            // k0
         a0 = 0 + 0x10
         call 0x800496a4          // 0x800496a4(0x10, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         call 0x80047634          // 0x80047634(0x10, 0x2, 0x8, -1)
         a0 = 0 + 1               // lo
         a0 = 0 + 0x13f
         a1 = 0 + 0x154
         a2 = 0 + 1               // lo
         call 0x80049064          // 0x80049064(0x13f, 0x154, 0x1, -1)
         a3 = [sp + 0x24]         // s4
         call 0x80047650          // 0x80047650(0x13f, 0x154, 0x1, 0xff)
         a0 = 0 + 1               // lo
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x154, 0x1, 0xff)
         a1 = 0 + 1               // lo
         a3 = [sp + 0x24]         // s4
         a0 = 0x8800 << 16
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0xd5
         a2 = 0 + 0x196
         call 0x80048e30          // 0x80048e30(-1, 0xd5, 0x196, 0xff)
         a3 += 0x66
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0xd5, 0x196, 0x165)
         a1 = 0 + 1               // lo
         a0 = 0 + 0xd
         call 0x8004c874          // 0x8004c874(0xd, 0x1, 0x196, 0x165)
         a1 = 0 + 9
         a0 = 0x8800 << 16
         t9 = 0 + 1               // lo
         [sp + 0x10] = t9
         a0 = [a0 + 0x687c]       // t9
         a1 = 0 + 0x13e
         a2 = 0 + 0x19a
         call 0x80048e30          // 0x80048e30(-1, 0x13e, 0x19a, 0x165)
         a3 = v0                  // s4
         call 0x80049668          // 0x80049668(-1, 0x13e, 0x19a, 0xff)
         a0 = 0
         t0 = [sp + 0x24]         // s4
         a3 = 0x8823 << 16
         a3 += 0x3f88
         t1 = , unsigned  halfword [t0 + 0x72]
         a0 = 0 + 0x161
         a1 = 0 + 0x19a
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x161, 0x19a, 0x0, 0x88233f88)
         [sp + 0x10] = t1
         ra = [sp + 0x1c]

    loc_0x802884c8: // orphan
         sp += 0x28
         ret                      // ra
         

    loc_0x80288564: // orphan
         t1 = [s7 + 0]
         at = 0x8823 << 16
         t9 = 0 + 1               // lo
         t2 = , unsigned  byte [t1 + 0] // s4
         s6 = 0 + 6
         t3 = t2 << 1
         t4 = t3 << 2
         t4 -= t3
         t4 <<= 2
         at += t4
         [at + 0x4644] = t9
         a0 += 0x510
         v0 = [a0 + 0]            // t9
         t6 = 0xe700 << 16
         t8 = 0xfc30 << 16
         t5 = v0 + 8
         [a0 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [a0 + 0]
         t1 = 0x552e << 16
         t1 |= 0xff7f
         t7 = v0 + 8
         [a0 + 0] = t7
         t8 |= 0x9661
         [v0 + 0] = t8
         [v0 + 4] = t1
         v0 = [a0 + 0]
         t9 = s6 << 2
         t9 -= s6
         t4 = 0x8823 << 16
         t2 = v0 + 8
         [a0 + 0] = t2
         t4 += 0x3844
         t9 <<= 1
         t3 = 0xfa00 << 16
         v1 = t9 + t4
         [v0 + 0] = t3
         t1 = , unsigned  byte [v1 + 0] // s4
         t6 = , unsigned  byte [v1 + 2] // s4
         t4 = , unsigned  byte [v1 + 1] // s4
         t2 = t1 << 0x18
         t7 = t6 << 8
         t3 = t7 | t2
         t5 = t4 << 0x10
         t6 = t3 | t5
         t8 = t6 | 0xff           // t9
         [v0 + 4] = t8
         v0 = [a0 + 0]
         t7 = 0xfb00 << 16
         s2 = 0
         t1 = v0 + 8
         [a0 + 0] = t1
         [v0 + 0] = t7
         t5 = , unsigned  byte [v1 + 3] // s4
         t9 = , unsigned  byte [v1 + 5] // s4
         t7 = , unsigned  byte [v1 + 4] // s4
         t6 = t5 << 0x18
         t4 = t9 << 8
         t8 = t4 | t6
         t2 = t7 << 0x10
         t9 = t8 | t2
         t3 = t9 | 0xff
         s5 = 0 + 8               // a2
         s4 = 0 + 0x23c
         [v0 + 4] = t3
         t5 = [s7 + 0]

    loc_0x80288670: // orphan
         t4 = s6 << 3
         t6 = t5 + t4
         t1 = t6 + s2
         if                       // likely
         s0 = [t1 + 0x74]         // t9

    loc_0x80288684: // orphan
         t7 = , unsigned  halfword [s0 + 0]
         s1 = 0 + 0x154
         s3 = s4 - t7
         s3 <<= 0x10
         goto 0x802886b0
         s3 = , signed  s3 >> 0x10

    loc_0x8028869c: // orphan
         t8 = , unsigned  halfword [s0 + 0]
         s1 = 0 + 0x194
         s3 = s4 - t8
         s3 <<= 0x10
         // CODE XREF from fcn.8256dac0 @ +0x1484
         s3 = , signed  s3 >> 0x10

    loc_0x802886b0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80288694
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         a2 = halfword [s0 + 0]
         a3 = halfword [s0 + 2]
         a1 = s1 << 0x10
         t2 = 0 - 0x10
         t9 = 0 - 0x10
         t3 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t3
         [sp + 0x14] = t9
         [sp + 0x10] = t2
         a1 = , signed  a1 >> 0x10
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x104, 0xffff7dbd, 0xffff, 0xffff)
         a0 = 0 + 0x42
         v0 = , unsigned  halfword [s0 + 0]
         a3 = halfword [s0 + 2]
         a0 = s3 << 0x10
         t4 = v0 << 5
         t6 = t4 - 0x10
         a1 = s1 << 0x10
         t1 = 0 - 0x10
         t7 = 0 - 0x400
         t8 = 0 + 0x400
         a2 = v0 << 0x10
         a2 = , signed  a2 >> 0x10 // t9
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         [sp + 0x14] = t1
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = t6
         a0 = , signed  a0 >> 0x10 // t9
         call 0x80044270          // "&R" // 0x80044270(-1, 0xffff7dbd, -1, 0xffff)
         [sp + 0x20] = 0
         s2 += 4
         bnel s2, s5, 0x80288670  // likely
         t5 = [s7 + 0]

    loc_0x8028874c: // orphan
         ra = [sp + 0x4c]
         s0 = [sp + 0x2c]         // ra
         s1 = [sp + 0x30]         // t9
         s2 = [sp + 0x34]
         s3 = [sp + 0x38]
         s4 = [sp + 0x3c]
         s5 = [sp + 0x40]
         s6 = [sp + 0x44]
         s7 = [sp + 0x48]
         ret
         sp += 0x50

    loc_0x80288eb0: // orphan
         a1 = 0 + 0x28
         a2 = 0 + 0x48
         a3 = 0 + 0x233
         call 0x882000ac          // 0x882000ac(-1, 0x28, 0x48, 0x233)
         [sp + 0x1c] = 0
         at = 0x8890 << 16
         [at + 0x41b4] = 0
         at = 0x8823 << 16
         byte [at + 0x4746] = 0
         t8 = [s1 + 0]
         a1 = 0 + 1               // lo
         t0 = 0 + 0x68
         [t8 + 0] = a1
         t9 = [s1 + 0]
         v0 = 0 + 0x40
         t1 = 0 + 0x60
         byte [t9 + 4] = a1
         t4 = [s1 + 0]
         t9 = 0 + 0x30
         v1 = 0 + 0x6a
         byte [t4 + 5] = t0
         t5 = [s1 + 0]
         t2 = 0x8823 << 16
         t2 += 0x474a
         byte [t5 + 6] = v0
         t6 = [s1 + 0]
         t5 = 0 + 0x38
         at = 0x8823 << 16
         byte [t6 + 7] = v0
         t7 = [s1 + 0]
         t3 = 0x8800 << 16
         t3 += 0x68b8
         byte [t7 + 8] = t1
         t8 = [s1 + 0]
         a2 = 0x8823 << 16
         a2 += 0x3ff0
         byte [t8 + 9] = t1
         t4 = [s1 + 0]
         a0 = 0 + 4
         byte [t4 + 0xc] = t9
         t6 = [s1 + 0]
         byte [t6 + 0xd] = t5
         t7 = [s1 + 0]
         byte [t7 + 0xe] = v0
         t8 = [s1 + 0]
         byte [t8 + 0xf] = v0
         t9 = [s1 + 0]
         byte [t9 + 0x10] = v0
         t4 = [s1 + 0]
         byte [t4 + 0x11] = v0
         t5 = [s1 + 0]
         t4 = 0 + 0x34
         byte [t5 + 0x12] = v0
         t6 = [s1 + 0]
         byte [t6 + 0x13] = v1
         t7 = [s1 + 0]
         t6 = 0 + 0x58
         byte [t7 + 0x14] = v1
         t8 = [s1 + 0]
         byte [t8 + 0x15] = v1
         t9 = [s1 + 0]
         byte [t9 + 0x16] = v1
         t5 = [s1 + 0]
         t9 = 0 + 0x78
         byte [t5 + 0x1a] = t4
         t7 = [s1 + 0]
         t5 = 0 + 0x3c
         byte [t7 + 0x1b] = t6
         t8 = [s1 + 0]
         byte [t8 + 0x1c] = t0
         t4 = [s1 + 0]
         byte [t4 + 0x1d] = t9
         t6 = [s1 + 0]
         t9 = 0 + 2
         byte [t6 + 0x1e] = t5
         halfword [t2 + 0] = 0
         t7 = halfword [t2 + 0]
         halfword [at + 0x4748] = t7
         [t3 + 0] = a1
         at = 0x8800 << 16
         [at + 0x68b4] = a1
         at = 0x8823 << 16
         byte [at + 0x474c] = t9
         at = 0x8823 << 16
         byte [at + 0x474d] = 0

    loc_0x80289004: // orphan
         // CODE XREF from fcn.827b2730 @ +0x190
         at = 0x8890 << 16
         byte [at + 0x41b8] = 0
         at = 0x8823 << 16
         byte [at + 0x474e] = 0
         at = 0x8823 << 16
         call 0x80049290          // 0x80049290(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [at + 0x474f] = 0
         // CODE XREF from fcn.82a3c358 @ +0x12bc
         t4 = [s1 + 0]
         a2 = 0x8823 << 16
         a2 += 0x3ff4
         a0 = 0 + 4
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x4, 0x1, 0x88233ff4, -1)
         byte [t4 + 0x94] = v0
         t5 = [s1 + 0]
         a2 = 0x8823 << 16
         a2 += 0x3ff8
         a0 = 0 + 4
         a1 = 0 + 1               // lo
         call 0x80049290          // 0x80049290(0x4, 0x1, 0x88233ff8, -1)
         byte [t5 + 0x95] = v0
         t6 = [s1 + 0]
         byte [t6 + 0x96] = v0
         t7 = [s1 + 0]
         call 0x80001ff0          // 0x80001ff0(0x4, 0x1, 0x88233ff8, -1)
         byte [t7 + 0x12c] = 0
         call 0x80001ff0          // 0x80001ff0(0x4, 0x1, 0x88233ff8, -1)
         s0 = v0                  // s4
         mtc1 v0, f6

    loc_0x802893ec: // orphan
         ret                      // ra
         

    loc_0x8028e000: // orphan
         [sp + 0] = a0
         v1 = a0 & 0xffff
         a0 = 0x8823 << 16
         a0 += 0x4758
         v0 = 0

    loc_0x8028e1d0: // orphan
         goto 0x8028e670          // fcn.802aa9c4-0x1c354
         t2 = v1 & 0xffff

    loc_0x8028e3b0: // orphan
         v1 = , unsigned  , v1 < 1
         if                       // likely
         t4 = byte [sp + 0x49]

    loc_0x8028e3bc: // orphan
         v1 = t4 ^ a1
         v1 = , unsigned  , v1 < 1

    loc_0x8028e3c4: // orphan
         goto 0x8028e670          // fcn.802aa9c4-0x1c354
         t2 = v1 & 0xffff

    loc_0x8028e4b0: // orphan
         a1 = 0x8823 << 16
         a1 += 0x4758
         t7 = t6 & 1              // lo
         bnel t7, 0, 0x8028e4d8   // likely
         t8 = , unsigned  byte [a1 + 0xd] // s4

    loc_0x8028e4c4: // orphan
         a0 = , unsigned  byte [s0 + 0] // s4
         at = 0 + 0xfc
         if                       // likely
         

    loc_0x8028e4d4: // orphan
         t8 = , unsigned  byte [a1 + 0xd] // s4

    loc_0x8028e4d8: // orphan
         bnel t8, 0, 0x8028e674   // fcn.802aa9c4-0x1c350 // likely
         ra = [sp + 0x1c]

    loc_0x8028e4e0: // orphan
         goto 0x8028e670          // fcn.802aa9c4-0x1c354
         t2 = 0 + 1               // lo

    loc_0x8028e4e8: // orphan
         call 0x80064474          // 0x80064474(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [s0 + 0x16]
         a1 = 0x8823 << 16
         a1 += 0x4758
         t9 = , unsigned  byte [a1 + 0xd] // s4
         t2 = t9 ^ v0
         t2 = , unsigned  , t2 < 1 // lo
         goto 0x8028e670          // fcn.802aa9c4-0x1c354
         t2 &= 0xffff             // lo

    loc_0x8028e7b0: // orphan
         v0 = 0 + 1               // lo
         if                       // unlikely
         s4 = 0 + 0x800

    loc_0x8028e7bc: // orphan
         s2 = 0x8823 << 16
         s2 += 0x4744
         t9 = , unsigned  halfword [s5 + 0]

    loc_0x8028e7c8: // orphan
         s0 = v0                  // s4
         a0 = v0 & 0xffff         // s4
         t0 = t9 & v0             // s4
         beql t0, 0, 0x8028e814   // unlikely
         s1 += 1

    loc_0x8028e7dc: // orphan
         call 0x8821c004          // 0x8821c004(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [s2 + 0]
         t1 = , unsigned  halfword [s3 + 0]
         halfword [s2 + 0] = v0
         bnel t1, 0, 0x8028e80c   // likely
         t2 = , unsigned  halfword [s2 + 0]

    loc_0x8028e7f4: // orphan
         call 0x8821b9ec          // "TV" // 0x8821b9ec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s7 + 0]
         bnel v0, s6, 0x8028e80c  // likely
         t2 = , unsigned  halfword [s2 + 0]

    loc_0x8028e804: // orphan
         halfword [s3 + 0] = s0
         t2 = , unsigned  halfword [s2 + 0]

    loc_0x8028e80c: // orphan
         if                       // unlikely
         s1 += 1

    loc_0x8028e814: // orphan
         t3 = 0 + 1               // lo
         v0 = t3 << s1
         bnel s4, v0, 0x8028e7c8  // unlikely
         t9 = , unsigned  halfword [s5 + 0] // s0

    loc_0x8028e824: // orphan
         s2 = 0x8823 << 16
         a0 = 0x8823 << 16
         a1 = 0x8823 << 16
         s2 += 0x4744
         a1 = [a1 + 0x477c]       // t9
         call 0x8821b714          // 0x8821b714(0x88230000, -1, 0x8, -1)
         a0 = [a0 + 0x4778]       // t9
         s0 = 0x8800 << 16
         s0 += 0x6880
         a0 = s0
         a1 = , unsigned  halfword [s2 + 0]
         call 0x88001c24          // 0x88001c24(0x88006880, 0xffff, 0x8, -1)
         a2 = 0 + 0xe
         t4 = , unsigned  halfword [s2 + 0]

    loc_0x8028f834: // orphan
         call 0x882041e0          // 0x882041e0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s1 = aav.0x80130000 << 16
         s1 -= 0x739c

    loc_0x8028fa80: // orphan
         t6 = , unsigned  byte [t6 + 0x45d4] // s4
         sp -= 0x20
         [sp + 0x14] = ra
         if                       // unlikely
         t7 = 0x8823 << 16

    loc_0x8028fa94: // orphan
         t7 = [t7 + 0x4560]       // t9
         at = 0 + 5
         if                       // likely
         

    loc_0x8028faa4: // orphan
         call 0x88205d7c          // 0x88205d7c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8028faac: // orphan
         if                       // unlikely
         t8 = 0x8823 << 16

    loc_0x8028fab4: // orphan
         t8 = [t8 + 0x47e0]       // t9
         a0 = [t8 + 0x1c]         // t9
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a0
         if                       // unlikely
         a0 = [sp + 0x1c]         // t9

    loc_0x8028facc: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x8028fad4: // orphan
         call 0x8004b888          // 0x8004b888(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xac
         t9 = 0x8823 << 16
         t9 = [t9 + 0x4564]
         t1 = 0x8801 << 16
         t1 = byte [t1 - 0x10e8]  // s4
         t0 = byte [t9 + 0x20]    // s4
         v0 = 0x8823 << 16
         mtc1 t1, f10
         mtc1 t0, f4
         v0 += 0x47e0
         cvt.s.w f16, f10
         t2 = [v0 + 0]            // t9
         cvt.s.w f6, f4
         mul.s f8, f6, f0
         div.s f18, f8, f16
         swc1 f18, 0x10, t2
         call 0x80043678          // 0x80043678(0xac, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 0]            // t9
         at = 0x8823 << 16
         [at + 0x47e4] = v0

    loc_0x8028fb28: // orphan
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t3 = 0x8823 << 16
         t3 = [t3 + 0x4560]       // t9
         at = , unsigned  , t3 < 7
         if                       // likely
         t3 <<= 2

    loc_0x8028fb44: // orphan
         at = 0x8823 << 16
         at += t3
         t3 = [at + 0x4150]       // t9
         goto t3                  // t9
         

    loc_0x8028fbb0: // orphan
         call 0x88004180          // 0x88004180(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80008648          // 0x80008648(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80290554: // orphan
         a1 = 0 + 0x200
         if                       // unlikely
         t5 = 0x8823 << 16

    loc_0x80290560: // orphan
         t4 = 0x8823 << 16
         t4 = [t4 + 0x47f0]       // t9
         t3 = 0 + 4
         call 0x8821eb00          // 0x8821eb00(-1, 0x442f71dcfe116408, 0x8, -1)
         [t4 + 4] = t3
         goto 0x80290730          // fcn.802af284-0x1eb54
         ra = [sp + 0x3c]

    loc_0x8029057c: // orphan
         t5 = [t5 + 0x45f4]       // t9
         at = 0 + 0x70
         a0 = 0x8823 << 16
         t6 = , unsigned  byte [t5 + 9] // s4
         a1 = 0 | 0xfc00
         if                       // likely
         

    loc_0x80290598: // orphan
         call 0x88202158          // 0x88202158(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x4620]       // t9
         if                       // unlikely
         a0 = 0 + 0x25

    loc_0x802905a8: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x63
         v1 = 0x8823 << 16
         v1 = [v1 + 0x47f0]       // t9
         t7 = 0 + 0xff            // s4
         t8 = 0 + 0xaa
         a1 = halfword [v1 + 0x6c]
         a2 = halfword [v1 + 0x6e]
         t9 = 0 + 0x8c
         t1 = 0 + 2
         t2 = 0 + 2
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t9
         [sp + 0x14] = t8
         [sp + 0x10] = t7
         t0 = [v1 + 8]            // t9
         t5 = 0x8800 << 16
         t6 = 0x8822 << 16
         a1 += 0xab
         a2 += 0xa3
         a2 <<= 0x10

    loc_0x80290640: // orphan
         t7 = 0x8823 << 16
         t7 = [t7 + 0x45f4]       // t9
         a0 = 0x8823 << 16
         a1 = 0 + 0x1000
         t8 = , unsigned  byte [t7 + 0x26] // s4
         t9 = t8 & 2
         if                       // unlikely
         

    loc_0x80290660: // orphan
         call 0x88202158          // 0x88202158(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x4620]       // t9
         if                       // unlikely
         a1 = 0x8823 << 16

    loc_0x80290670: // orphan
         a1 = [a1 + 0x45f4]       // t9
         a0 = 0 + 0x1a
         call 0x8004c54c          // 0x8004c54c(0x1a, -1, 0x8, -1)
         a1 += 0x3c
         a0 = sp + 0x48
         a1 = 0 + 0x80
         a2 = 0 + 0x25
         call 0x8004c8a0          // 0x8004c8a0(0x178048, 0x80, 0x25, -1)
         a3 = 0 + 0x65
         v1 = 0x8823 << 16
         v1 = [v1 + 0x47f0]       // t9
         t1 = 0 + 0xff            // s4
         t2 = 0 + 0xaa
         a1 = halfword [v1 + 0x6c]
         a2 = halfword [v1 + 0x6e]
         t3 = 0 + 0x8c
         t4 = 0 + 2
         t5 = 0 + 2
         [sp + 0x20] = t5
         [sp + 0x1c] = t4
         [sp + 0x18] = t3

    loc_0x802906c4: // orphan
         [sp + 0x14] = t2
         [sp + 0x10] = t1
         t0 = [v1 + 8]            // t9
         t8 = 0x8800 << 16
         t9 = 0x8822 << 16
         a1 += 0xab
         a2 += 0xa3
         a2 <<= 0x10
         a1 <<= 0x10
         t9 -= 0x21fc
         t8 += 0xe4c
         t6 = t0 + 0x2c
         t7 = t0 + 0x30
         [sp + 0x28] = t7
         [sp + 0x24] = t6
         [sp + 0x2c] = t8
         [sp + 0x30] = t9
         a1 = , signed  a1 >> 0x10
         // CODE XREF from fcn.81c7047c @ +0xeec
         a2 = , signed  a2 >> 0x10
         a0 = v0                  // s4
         call 0x88903c50          // 0x88903c50(0xff, 0xffff64b3, 0xab, -1)
         a3 = 0 + 4
         goto 0x80290730          // fcn.802af284-0x1eb54
         ra = [sp + 0x3c]

    loc_0x80290724: // orphan
         call 0x8821e73c          // 0x8821e73c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         ra = [sp + 0x3c]

    loc_0x80290780: // orphan
         t4 = [v0 + 8]            // t9
         t5 = 0 + 2
         t8 = 0 + 2
         [t4 + 0x2c] = 0
         t6 = [v1 + 0]            // t9
         [t6 + 4] = t5
         t9 = [v1 + 0]
         goto fcn.802907ac        // fcn.802907ac(-1)
         byte [t9 + 0x4a0] = t8

    loc_0x80290804: // orphan
         t6 = [v0 + 0]            // t9
         sp -= 0x18

    loc_0x80290878: // orphan
         a1 = 0
         call 0x88004990          // 0x88004990(-1, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t7 + 0] // s4
         ra = [sp + 0x14]         // s4
         t8 = 0 + 1               // lo
         at = 0x8800 << 16
         [at + 0x68b8] = t8
         ret                      // s4
         sp += 0x18

    loc_0x802909cc: // orphan
         t7 = 0 + 0xdc
         t8 = 0 + 0xb4
         t9 = 0 + 2
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         [sp + 0x24] = t1
         [sp + 0x28] = t2
         [sp + 0x2c] = t3
         [sp + 0x30] = t4
         a0 = v0                  // s4
         a1 = 0 + 0x17c
         a2 = 0 + 0x11f
         a3 = 0 + 4
         call 0x88903c50          // 0x88903c50(0xff, 0x17c, 0x11f, 0x4)
         [sp + 0x20] = 0
         goto 0x80290b04
         ra = [sp + 0x3c]

    loc_0x80290b04: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80290a10
         sp += 0x1d0
         ret                      // ra
         

    loc_0x80290b40: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         t6 = [v1 + 0x54]         // t9
         beql t6, 0, 0x80290bc4   // unlikely
         v0 = [v1 + 4]            // t9

    loc_0x80290b54: // orphan
         v0 = [v1 + 4]            // t9
         at = 0 + 5
         if                       // unlikely
         at = 0 + 6

    loc_0x80290b64: // orphan
         if                       // unlikely
         t7 = 0 + 3

    loc_0x80290b6c: // orphan
         at = 0 + 7
         if                       // unlikely
         t1 = 0 + 4

    loc_0x80290b80: // orphan
         call 0x8821de04          // 0x8821de04(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80290c6c          // fcn.802af284-0x1e618
         ra = [sp + 0x14]

    loc_0x80290b90: // orphan
         [v1 + 4] = t7
         t9 = [a0 + 0]
         t8 = 0 + 1               // lo
         t0 = [t9 + 0x58]
         goto 0x80290c68          // fcn.802af284-0x1e61c
         [t0 + 0x2c] = t8

    loc_0x80290bc4: // orphan
         at = 0 + 5
         a0 = 0x8823 << 16
         if                       // fcn.802af284-0x1e664 // unlikely
         a1 = 0 + 2

    loc_0x80290f30: // orphan
         call 0x8821e21c          // 0x8821e21c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = a2 & 0xff
         ra = [sp + 0x44]
         sp += 0x50
         ret
         

    loc_0x80290fac: // orphan
         bnel t7, 0, 0x80290fc8   // unlikely
         [v0 + 4] = v1

    loc_0x80292418: // orphan
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         t8 = [s3 + 0]
         a3 = [s0 + 0]
         t7 = 0 + 1               // lo
         a1 = halfword [t8 + 0x94]
         [sp + 0x10] = t7
         a0 = [s6 + 0]            // t9
         a2 = s4
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xff, 0x220ff)
         a3 += 0x3c
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0xffff, 0xff, 0x2213b)
         a1 = 0 + 1               // lo
         t9 = [s0 + 0]
         t6 = [t9 + 0]
         t8 = [t6 + 0]
         v1 = , unsigned  byte [t8 + 8] // s4
         t7 = v1 << 2

    loc_0x80292468: // orphan
         t7 -= v1
         a0 = s5 + t7
         call 0x880006e0          // 0x880006e0(0xfffffddf, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x1db] = v1
         v1 = , unsigned  byte [sp + 0x1db] // k0
         a0 = 0 + 0x23
         if                       // likely
         v0 = v1                  // k0

    loc_0x80292488: // orphan
         a0 = 0 + 0x23
         call 0x8004c874          // 0x8004c874(0x23, 0x442f71dcfe116408, 0x8, -1)
         a1 = v1 + 0x20
         t9 = [s3 + 0]
         t6 = 0 + 1               // lo
         a0 = [s6 + 0]            // t9
         a1 = halfword [t9 + 0x98]
         [sp + 0x10] = t6
         a2 = s4
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xff, -1)
         a3 = v0                  // s4
         goto 0x802924f8
         

    loc_0x802924bc: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 + 0x20
         t8 = [s3 + 0]
         a3 = 0x8823 << 16
         a3 += 0x4198
         a0 = halfword [t8 + 0x98]
         [sp + 0x10] = v0
         t7 = [s0 + 0]
         a1 = s4
         a2 = 0
         t9 = [t7 + 0]
         t6 = , unsigned  byte [t9 + 4]
         t8 = t6 + 1              // lo
         call 0x800495f8          // 0x800495f8(0xffff, 0xff, 0x0, 0x88234198)
         [sp + 0x14] = t8

    loc_0x802924f4: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 + 0x20
         t8 = [s3 + 0]
         a3 = 0x8823 << 16
         a3 += 0x4198
         a0 = halfword [t8 + 0x98]
         [sp + 0x10] = v0
         t7 = [s0 + 0]
         a1 = s4
         a2 = 0
         t9 = [t7 + 0]
         t6 = , unsigned  byte [t9 + 4]
         t8 = t6 + 1              // lo
         call 0x800495f8          // 0x800495f8(0xffff, 0xff, 0x0, 0x88234198)
         [sp + 0x14] = t8

    loc_0x802924f8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802924b4
         a0 = 0x8800 << 16
         call 0x880006e0          // 0x880006e0(0x88000000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x5fa0
         t7 = [s0 + 0]
         call 0x800635e0          // 0x800635e0(0x88005fa0, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t7 + 9] // s4
         t9 = [s3 + 0]
         t6 = 0 + 1               // lo
         a0 = [s6 + 0]            // t9
         a1 = halfword [t9 + 0x9a]
         [sp + 0x10] = t6
         a2 = s4
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xff, -1)
         a3 = v0                  // s4
         t8 = [sp + 0x1e8]
         s4 += 0x17
         s4 <<= 0x10
         s2 += 1
         s4 = , signed  s4 >> 0x10
         if                       // unlikely
         s0 += 4

    loc_0x802929b8: // orphan
         t6 <<= 2
         at = 0x8823 << 16
         at += t6
         t6 = [at + 0x4264]       // t9
         goto t6                  // t9
         

    loc_0x802934b8: // orphan
         a1 = 0 + 0x76
         call 0x80075630          // 0x80075630(-1, 0x76, 0x8, -1)
         a0 += 4
         a1 = [s0 + 0]
         a2 = 0x8822 << 16
         a2 += 0xb80
         a0 = [sp + 0x58]
         call 0x88700364          // 0x88700364(0x0, 0x220ff, 0x88220b80, -1)
         a1 += 4
         call 0x887002f4          // 0x887002f4(0x0, 0x22103, 0x88220b80, -1)
         
         call 0x8870032c          // 0x8870032c(0x0, 0x22103, 0x88220b80, -1)
         halfword [sp + 0x52] = v0
         t2 = 0x8870 << 16

    loc_0x80293748: // orphan
         t4 = 0 + 0xf
         t5 = 0 + 0x12
         t6 = 0 + 0xd
         t7 = 0 + 0x10
         [sp + 0x28] = t7
         [sp + 0x24] = t6
         [sp + 0x20] = t5
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         [sp + 0x14] = t2
         [sp + 0x10] = t1
         [sp + 0x34] = t8
         [sp + 0x30] = 0
         [sp + 0x2c] = 0
         a1 = 0
         a3 = 0 + 1               // lo
         a0 = v1 + 4
         call 0x88002aa8          // 0x88002aa8(0x224, 0x0, 0x8, 0x1)
         a2 = v1 + 0x38
         a0 = [s0 + 0]
         t4 = 0x8822 << 16
         t5 = 0x8822 << 16
         t6 = 0x8822 << 16
         t7 = 0x8822 << 16
         t7 += 0xf4c
         t6 += 0xf40
         t5 += 0x100c
         t4 += 0xfb8
         t9 = 0 + 4
         t0 = 0 + 1               // lo
         t1 = 0 + 0xdb
         t2 = 0 + 0xdc
         t3 = 0 + 0xb4
         [sp + 0x20] = t3
         [sp + 0x1c] = t2
         [sp + 0x18] = t1
         [sp + 0x14] = t0
         [sp + 0x10] = t9
         [sp + 0x24] = t4
         [sp + 0x28] = t5
         [sp + 0x2c] = t6
         [sp + 0x30] = t7
         a1 = 0
         a2 = halfword [sp + 0x52] // s4
         a3 = halfword [sp + 0x56]
         [sp + 0x34] = 0
         [sp + 0x38] = 0
         call 0x88004804          // 0x88004804(0x220ff, 0x0, 0xff, 0x0)
         a0 += 4
         t8 = v0 << 2
         t8 += v0
         t8 <<= 2
         t1 = [s0 + 0]
         t8 -= v0
         t9 = 0x8801 << 16
         t9 -= 0x12b0
         t8 <<= 2
         t0 = t8 + t9
         [t1 + 0] = t0
         ra = [sp + 0x4c]
         at = 0x8800 << 16
         s0 = [sp + 0x48]
         [at + 0x68b4] = 0
         ret
         sp += 0x50

    loc_0x80294304: // orphan
         a3 = 0 + 1               // lo
         a2 = byte [v0 + 0x12d]   // s4
         bnel a3, a2, 0x802943fc  // likely
         v1 = byte [v0 + 0x12c]   // s4

    loc_0x80294314: // orphan
         t8 = , unsigned  halfword [v0 + 0x2c]
         at = , unsigned  , t8 < 8
         if                       // fcn.802a8228-0x13c90 // likely
         t8 <<= 2

    loc_0x80294324: // orphan
         at = 0x8823 << 16
         at += t8
         t8 = [at + 0x4340]       // t9
         goto t8                  // t9
         

    loc_0x802943fc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029430c
         a0 = 0 + 2
         if                       // unlikely
         

    loc_0x80294408: // orphan
         if                       // unlikely
         a0 = 0 + 2

    loc_0x80294424: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294400
         if                       // unlikely
         a1 = 0 + 1               // lo

    loc_0x8029442c: // orphan
         at = 0 + 3
         if                       // unlikely
         at = 0 + 4

    loc_0x80294438: // orphan
         if                       // unlikely
         a0 = 0 + 0xa

    loc_0x80294440: // orphan
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x80294448: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294424
         call 0x88221a8c          // 0x88221a8c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x80294458: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294430
         call 0x88221af0          // 0x88221af0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x80294468: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294438
         call 0x88221a8c          // 0x88221a8c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x80294478: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294408
         bnel a0, a2, 0x802944a0  // likely
         a0 = a2 - 1

    loc_0x80294480: // orphan
         t1 = halfword [v0 + 0x2c]
         if                       // likely
         a0 = 0x8822 << 16

    loc_0x8029448c: // orphan
         call 0x88221a34          // 0x88221a34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x3120
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x8029449c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294484
         a0 = a2 - 1

    loc_0x802944a0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294478
         call 0x88221a8c          // 0x88221a8c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [v0 + 0x2c]
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x802944d4: // orphan
         call 0x88221a8c          // 0x88221a8c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x8029459c          // fcn.802a8228-0x13c8c
         ra = [sp + 0x14]         // lo

    loc_0x80294d3c: // orphan
         a0 = 0x8008 << 16
         call 0x80049ed8          // 0x80049ed8(0x80080000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x7200]       // t9
         t6 = 0 + 1               // lo
         at = 0x8800 << 16
         // CODE XREF from fcn.802aacec @ +0x410
         a0 = 0x8823 << 16
         [at + 0x68b4] = t6
         call 0x800033dc          // 0x800033dc(0x88230000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x4840]       // t9
         ra = [sp + 0x14]         // lo
         sp += 0x18
         ret                      // lo
         

    loc_0x80294dc0: // orphan
         halfword [v1 + 0x1c] = t4
         // CODE XREF from fcn.80294348 @ +0xa58
         a1 = [t2 + 0]            // t9
         v0 = , unsigned  halfword [a1 + 8]
         t5 = v0 & 0x4000
         if                       // unlikely
         t9 = v0 & 0x8000

    loc_0x80294dd8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x48
         t6 = 0x8823 << 16
         t6 = [t6 + 0x4840]       // t9
         a1 = 0
         t7 = [t6 + 0]
         call 0x88004990          // 0x88004990(0x48, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t7 + 0] // s4
         t8 = 0 + 1               // lo
         at = 0x8800 << 16
         goto 0x8029532c          // fcn.802a831c-0x12ff0
         [at + 0x68b8] = t8

    loc_0x80294e08: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294dd0
         beql t9, 0, 0x80294f88   // unlikely
         v1 = [a2 + 0]

    loc_0x80294e10: // orphan
         v1 = [a2 + 0]
         v0 = 0 + 6
         a0 = halfword [v1 + 0x18]
         if                       // likely
         

    loc_0x80294e24: // orphan
         t3 = halfword [v1 + 0x1a]
         if                       // likely
         

    loc_0x80294e30: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x5c
         call 0x8821c2f4          // 0x8821c2f4(0x5c, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         v0 = 0x8823 << 16
         v0 += 0x4758
         t4 = halfword [v1 + 4]
         // CODE XREF from fcn.802aacec @ +0x414
         a0 = 0 + 1               // lo
         a1 = 0 + 1               // lo
         byte [v0 + 2] = t4
         t5 = halfword [v1 + 6]
         call 0x8821b980          // 0x8821b980(0x1, 0x1, 0x8, -1)
         byte [v0 + 3] = t5
         v0 = 0x8823 << 16
         v0 += 0x4758
         v1 = , unsigned  byte [v0 + 3]
         a0 = , unsigned  byte [v0 + 2]
         a1 = 0
         at = , v1 < a0
         beql at, 0, 0x80294ea0   // likely
         at = , a0 < v1           // lo

    loc_0x80294e8c: // orphan
         call 0x8821b700          // 0x8821b700(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80294e90: // orphan
         a0 = 0 + 1               // lo
         goto 0x80294eb0
         

    loc_0x80294ea0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294e84
         if                       // unlikely
         a0 = 0 + 1               // lo

    loc_0x80294ea8: // orphan
         call 0x8821b700          // 0x8821b700(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo

    loc_0x80294eb0: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80294e94, 0x80294ea0
         call 0x8821c0b0          // 0x8821c0b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x8800 << 16
         a0 += 0x6880
         a1 = 0
         call 0x8800225c          // 0x8800225c(0x88006880, 0x0, 0x8, -1)
         a2 = 0
         t6 = 0x8823 << 16
         t6 = [t6 + 0x4840]       // t9
         a1 = 0
         t7 = [t6 + 0]
         call 0x88004990          // 0x88004990(0x88006880, 0x0, 0x0, -1)
         a0 = , unsigned  byte [t7 + 0] // s4
         t8 = 0 + 1               // lo
         at = 0x8800 << 16
         goto 0x8029532c          // fcn.802a831c-0x12ff0
         [at + 0x68b8] = t8

    loc_0x80294ef4: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80294e1c, 0x80294e28
         bnel v0, a0, 0x80295330  // fcn.802a831c-0x12fec // likely
         ra = [sp + 0x14]         // lo

    loc_0x80294efc: // orphan
         t9 = halfword [v1 + 0x1a]
         at = 0 + 1               // lo
         bnel t9, at, 0x80295330  // fcn.802a831c-0x12fec // likely
         ra = [sp + 0x14]         // lo

    loc_0x80294f0c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x137
         call 0x8821c2f4          // 0x8821c2f4(0x137, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = 0x8823 << 16
         v0 += 0x4758
         t3 = 0 + 1               // lo
         t4 = 0 + 0x64
         byte [v0 + 2] = t3
         byte [v0 + 3] = t4
         a0 = 0 + 1               // lo
         call 0x8821b980          // 0x8821b980(0x1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802aacec @ +0x41c
         a1 = 0
         call 0x8821c0b0          // 0x8821c0b0(0x1, 0x0, 0x8, -1)
         
         a0 = 0x8800 << 16
         a0 += 0x6880
         a1 = 0
         call 0x8800225c          // 0x8800225c(0x88006880, 0x0, 0x8, -1)
         a2 = 0
         t5 = 0x8823 << 16
         // CODE XREF from fcn.802aacec @ +0x420
         t5 = [t5 + 0x4840]       // t9

    loc_0x80294f88: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80294e08
         at = 0 + 3
         t8 = halfword [v1 + 0x18]
         halfword [sp + 0x24] = t8
         t9 = halfword [v1 + 0x1a]
         halfword [sp + 0x26] = t9
         a0 = halfword [v1 + 0x18]
         if                       // likely
         

    loc_0x80294fa8: // orphan
         t3 = , unsigned  halfword [a1 + 8]
         v0 = 0 + 6
         t4 = t3 & 0x200
         if                       // unlikely
         

    loc_0x80294fbc: // orphan
         call 0x88004eb0          // 0x88004eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v1 + 0x18] = v0
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         goto 0x80295308          // fcn.802a831c-0x13014
         a0 = halfword [v1 + 0x18]

    loc_0x80294fd4: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80294fa0, 0x80294fb4
         bnel a0, at, 0x8029500c  // likely
         at = 0 + 2

    loc_0x80294fdc: // orphan
         t5 = , unsigned  halfword [a1 + 8]
         t7 = 0 + 2
         t6 = t5 & 0x200
         beql t6, 0, 0x8029500c   // unlikely
         at = 0 + 2

    loc_0x80294ff0: // orphan
         call 0x88004eb0          // 0x88004eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v1 + 0x18] = t7
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         goto 0x80295308          // fcn.802a831c-0x13014
         a0 = halfword [v1 + 0x18]

    loc_0x8029500c: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80294fd4, 0x80294fe8
         if                       // unlikely
         at = 0 + 5

    loc_0x80295014: // orphan
         bnel a0, at, 0x8029504c  // likely
         v0 = 0 + 6

    loc_0x8029501c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029500c
         t8 = , unsigned  halfword [a1 + 8]
         t3 = a0 + 1
         t9 = t8 & 0x100
         beql t9, 0, 0x8029504c   // unlikely
         v0 = 0 + 6

    loc_0x80295030: // orphan
         call 0x88004eb0          // 0x88004eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v1 + 0x18] = t3
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         goto 0x80295308          // fcn.802a831c-0x13014
         a0 = halfword [v1 + 0x18]

    loc_0x8029504c: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295014, 0x80295028
         if                       // likely
         

    loc_0x80295054: // orphan
         v0 = , unsigned  halfword [a1 + 8]
         t5 = 0 + 5
         t4 = v0 & 0x200
         if                       // unlikely
         t6 = v0 & 0x100

    loc_0x80295068: // orphan
         call 0x88004eb0          // 0x88004eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v1 + 0x18] = t5
         goto 0x802950cc
         

    loc_0x80295078: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295060
         if                       // unlikely
         

    loc_0x80295080: // orphan
         call 0x88004eb0          // 0x88004eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v1 + 0x18] = 0
         goto 0x802950cc
         

    loc_0x80295090: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295078
         call 0x8821b778          // 0x8821b778(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         

    loc_0x802950a0: // orphan
         call 0x88004ec0          // 0x88004ec0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802aacec @ +0x424
         
         t1 = 0 + 0x400

    loc_0x802950ac: // orphan
         if                       // unlikely
         at = 0 + 0x800

    loc_0x802950b4: // orphan
         if                       // likely
         // CODE XREF from fcn.802a91c8 @ 0x802950ac
         v1 = 0x8823 << 16

    loc_0x802950b8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802950ac
         v1 = 0x8823 << 16

    loc_0x802950bc: // orphan
         v1 = [v1 + 0x4840]       // t9
         t7 = halfword [v1 + 0x1a]
         t8 = t7 ^ 1
         // CODE XREF from fcn.802aacec @ +0x428
         halfword [v1 + 0x1a] = t8

    loc_0x802950cc: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295070, 0x80295088, 0x80295098, 0x802950b4
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         goto 0x80295308          // fcn.802a831c-0x13014
         a0 = halfword [v1 + 0x18]

    loc_0x802950dc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029504c
         // CODE XREF from fcn.802aacec @ +0x42c
         call 0x88004ec0          // 0x88004ec0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         t2 = 0x8008 << 16
         // CODE XREF from fcn.802aacec @ +0x430
         a3 = v0 << 0x10
         a0 = halfword [v1 + 0x18]
         a3 = , signed  a3 >> 0x10 // s4
         t2 += 0x7200
         if                       // unlikely
         a1 = v0 << 0x10

    loc_0x80295108: // orphan
         at = , a0 < 3
         if                       // likely
         a2 = v1 + 4

    loc_0x80295114: // orphan
         [sp + 0x1c] = a2
         goto 0x80295140
         halfword [sp + 0x18] = 0

    loc_0x80295120: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295100, 0x8029510c
         at = , a0 < 3
         // CODE XREF from fcn.802aacec @ +0x434
         if                       // unlikely
         at = , a0 < 6

    loc_0x8029512c: // orphan
         if                       // unlikely
         t0 = 0 + 3

    loc_0x80295134: // orphan
         a2 = v1 + 6
         [sp + 0x1c] = a2
         halfword [sp + 0x18] = t0

    loc_0x80295140: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295118, 0x80295124, 0x8029512c
         a1 = , signed  a1 >> 0x10
         at = 0 + 0x100
         a2 = [sp + 0x1c]
         if                       // unlikely
         t0 = halfword [sp + 0x18]

    loc_0x80295154: // orphan
         at = 0 + 0x200
         if                       // unlikely
         t9 = a0 - 1

    loc_0x80295160: // orphan
         t1 = 0 + 0x400
         if                       // unlikely
         at = 0 + 0x800

    loc_0x8029516c: // orphan
         beql a1, at, 0x802951e8  // unlikely
         t4 = [t2 + 0]            // t9

    loc_0x80295174: // orphan
         goto 0x8029530c          // fcn.802a831c-0x13010
         t3 = halfword [sp + 0x24]

    loc_0x8029517c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295158
         halfword [v1 + 0x18] = t9
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         a0 = halfword [v1 + 0x18]
         at = , a0 < t0           // lo
         beql at, 0, 0x8029530c   // fcn.802a831c-0x13010 // unlikely
         t3 = halfword [sp + 0x24]

    loc_0x80295198: // orphan
         halfword [v1 + 0x18] = t0

    loc_0x802951ac: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029514c
         t3 = a0 + 1
         halfword [v1 + 0x18] = t3
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         v0 = t0 + 2
         a0 = halfword [v1 + 0x18]
         at = , v0 < a0
         beql at, 0, 0x8029530c   // fcn.802a831c-0x13010 // likely
         t3 = halfword [sp + 0x24]

    loc_0x802951d0: // orphan
         halfword [v1 + 0x18] = v0
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         goto 0x80295308          // fcn.802a831c-0x13014
         a0 = halfword [v1 + 0x18]

    loc_0x802951e4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295164
         t4 = [t2 + 0]            // t9

    loc_0x802951e8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029516c
         a0 = 0 + 0x46
         t5 = , unsigned  halfword [t4 + 6]
         t6 = t5 & 0x300
         if                       // unlikely
         

    loc_0x802951fc: // orphan
         [sp + 0x1c] = a2
         halfword [sp + 0x22] = a3
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x18] = t0
         a3 = halfword [sp + 0x22]
         t1 = 0 + 0x400
         a0 = 0 + 0x800
         a2 = [sp + 0x1c]
         if                       // unlikely
         t0 = halfword [sp + 0x18]

    loc_0x80295224: // orphan
         if                       // unlikely
         

    loc_0x8029522c: // orphan
         goto 0x80295240
         a1 = byte [sp + 0x1b]

    loc_0x80295234: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295224
         goto 0x80295240
         a1 = 0 + 1               // lo

    loc_0x8029523c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029521c
         a1 = 0 - 1               // s2

    loc_0x80295240: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x8029522c, 0x80295234
         v0 = halfword [a2 + 0]
         v1 = 0 + 0x64
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x80295254: // orphan
         if                       // likely
         t7 = 0 + 1               // lo

    loc_0x8029525c: // orphan
         goto 0x802952fc
         halfword [a2 + 0] = t7

    loc_0x80295264: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x8029524c, 0x80295254
         if                       // likely
         t8 = 0x8823 << 16

    loc_0x80295268: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x8029524c, 0x80295254
         if                       // likely
         t8 = 0x8823 << 16

    loc_0x8029526c: // orphan
         // CODE XREF from fcn.802aacec @ +0x43c
         if                       // likely
         

    loc_0x80295274: // orphan
         goto 0x802952fc
         halfword [a2 + 0] = v1

    loc_0x8029527c: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295264, 0x8029526c
         t8 = [t8 + 0x4840]       // t9
         t4 = t0 + 1
         a0 = halfword [t8 + 0x18]
         if                       // likely
         

    loc_0x80295290: // orphan
         // CODE XREF from fcn.802aacec @ +0x440
         unsigned , hi
         t9 = lo
         t3 = v0 + t9
         halfword [a2 + 0] = t3
         goto 0x802952dc
         // CODE XREF from fcn.802aacec @ +0x444
         v0 = halfword [a2 + 0]

    loc_0x802952a8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295288
         if                       // unlikely
         t7 = t0 + 2

    loc_0x802952b0: // orphan
         t5 = a1 << 2
         t5 += a1
         // CODE XREF from fcn.802aacec @ +0x448
         t5 <<= 1
         t6 = v0 + t5
         halfword [a2 + 0] = t6
         goto 0x802952dc
         v0 = halfword [a2 + 0]

    loc_0x802952cc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802952a8
         if                       // likely
         t8 = v0 + a1

    loc_0x802952d4: // orphan
         halfword [a2 + 0] = t8
         v0 = halfword [a2 + 0]

    loc_0x802952dc: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802952a0, 0x802952c4, 0x802952cc
         if                       // likely
         at = , v0 < 0x65

    loc_0x802952e4: // orphan
         t9 = 0 + 1               // lo
         goto 0x802952fc
         // CODE XREF from fcn.802aacec @ +0x44c
         halfword [a2 + 0] = t9

    loc_0x802952f0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802952dc
         if                       // likely
         

    loc_0x802952f8: // orphan
         halfword [a2 + 0] = v1

    loc_0x802952fc: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802951f4, 0x8029525c, 0x80295274, 0x802952e8, 0x802952f0
         v1 = 0x8823 << 16
         v1 = [v1 + 0x4840]       // t9
         a0 = halfword [v1 + 0x18]

    loc_0x80295398: // orphan
         a1 = 0 + 1               // lo
         a0 = 0 + 0x25
         call 0x8004c874          // 0x8004c874(0x25, 0x1, 0x8, -1)
         a1 = 0 + 0x30
         s0 = 0x8800 << 16
         s0 += 0x687c
         t9 = 0 + 1               // lo
         [sp + 0x10] = t9
         a0 = [s0 + 0]            // t9
         a1 = 0 + 0xb2
         a2 = 0 + 0x9d
         call 0x80048e30          // 0x80048e30(-1, 0xb2, 0x9d, -1)
         a3 = v0                  // s4
         call 0x80049668          // 0x80049668(-1, 0xb2, 0x9d, 0xff)
         a0 = 0
         a0 = 0 + 0x25
         call 0x8004c874          // 0x8004c874(0x25, 0xb2, 0x9d, 0xff)
         a1 = 0 + 0x31
         s2 = 0x8823 << 16
         s2 += 0x4840
         t0 = [s2 + 0]            // t9
         t1 = 0 + 1               // lo
         a0 = [s0 + 0]            // t9
         a1 = halfword [t0 + 0xa]
         [sp + 0x10] = t1
         a2 = 0 + 0xc5
         call 0x80048e30          // 0x80048e30(-1, 0xffff, 0xc5, 0xff)
         a3 = v0                  // s4
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0xffff, 0xc5, 0xff)
         a1 = 0 + 1               // lo
         t2 = [s2 + 0]            // t9
         s1 = sp + 0x64
         a0 = s1
         a2 = 0 + 1               // lo
         call 0x88000ec0          // 0x88000ec0(0x178064, 0x1, 0x1, 0xff)
         a1 = halfword [t2 + 4]
         s0 = 0 + 2
         t3 = [s2 + 0]            // t9

    loc_0x80295434: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295460
         t6 = s1 + s0
         a2 = byte [t6 + 0]       // s4
         t4 = s0 << 1
         t5 = t3 + t4
         a0 = halfword [t5 + 0xc]
         a1 = 0 + 0xc3
         call 0x80049628          // 0x80049628(0xffff, 0xc3, 0xff, -1)
         a2 += 0x30
         s0 -= 1
         s0 <<= 0x18
         s0 = , signed  s0 >> 0x18
         bgezl s0, 0x80295434     // likely
         t3 = [s2 + 0]            // t9

    loc_0x80295468: // orphan
         t7 = [s2 + 0]            // t9
         a0 = s1
         a2 = 0 + 1               // lo
         call 0x88000ec0          // 0x88000ec0(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x1, -1)
         a1 = halfword [t7 + 6]
         s0 = 0 + 2
         t8 = [s2 + 0]            // t9

    loc_0x80295484: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802954b0
         t1 = s1 + s0
         a2 = byte [t1 + 0]       // s4
         t9 = s0 << 1
         t0 = t8 + t9
         a0 = halfword [t0 + 0x12]
         a1 = 0 + 0xc3
         call 0x80049628          // 0x80049628(0xffff, 0xc3, 0xff, -1)
         a2 += 0x30
         s0 -= 1
         s0 <<= 0x18
         s0 = , signed  s0 >> 0x18

    loc_0x802954b0: // orphan
         // CODE XREF from fcn.802aacec @ +0x460
         bgezl s0, 0x80295484     // likely
         t8 = [s2 + 0]            // t9

    loc_0x802954b8: // orphan
         s0 = 0
         s1 = 0 + 0xc3

    loc_0x802954c0: // orphan
         a0 = 0 + 0x25
         // CODE XREF from fcn.802aacec @ +0x464
         call 0x8004c874          // 0x8004c874(0x25, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 0x32
         a0 = 0 + 0x17b
         a1 = s1
         a2 = 0 + 1               // lo
         // CODE XREF from fcn.802aacec @ +0x468
         call 0x80049064          // 0x80049064(0x17b, 0x442f71dcfe117dbd, 0x1, -1)
         a3 = v0                  // s4
         call 0x8821b778          // 0x8821b778(0x17b, 0x442f71dcfe117dbd, 0x1, 0xff)
         
         if                       // likely
         a0 = 0 + 0xff            // s4

    loc_0x802954f0: // orphan
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(-1, 0xff, 0xff, -1)
         a3 = 0 + 0x64

    loc_0x80295500: // orphan
         s0 += 1
         s0 <<= 0x18
         s0 = , signed  s0 >> 0x18
         // CODE XREF from fcn.802aacec @ +0x46c
         s1 += 0x24
         s1 <<= 0x10
         at = , s0 < 2
         if                       // unlikely
         s1 = , signed  s1 >> 0x10

    loc_0x80295520: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a3 = 0x800d << 16
         a3 += 0x510
         v0 = [a3 + 0]            // t9
         t4 = 0x8009 << 16
         t4 += 0x4e38
         t2 = v0 + 8
         [a3 + 0] = t2
         t3 = 0xde00 << 16
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         [v0 + 0] = t3
         call 0x88002ba0          // 0x88002ba0(0xff, 0xff, 0xff, 0x800d0510)
         [v0 + 4] = t4
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1338]       // t9
         a1 = 0 + 0x100
         call 0x8004d27c          // 0x8004d27c(-1, 0x100, 0xff, 0x800d0510)
         a2 = 0 + 2
         s0 = 0
         s1 = 0 + 0xbe

    loc_0x8029557c: // orphan
         a1 = s1 << 0x10
         t5 = 0 + 2
         [sp + 0x10] = t5
         a1 = , signed  a1 >> 0x10
         a0 = 0 + 0x150
         // CODE XREF from fcn.802aacec @ +0x470
         a2 = 0 + 0x57
         call 0x88002ec0          // 0x88002ec0(0x150, 0xffff7dbd, 0x57, -1)
         a3 = 0 + 0x1e
         s0 += 1
         s0 <<= 0x18
         s0 = , signed  s0 >> 0x18
         s1 += 0x24
         s1 <<= 0x10
         at = , s0 < 2
         if                       // unlikely
         s1 = , signed  s1 >> 0x10

    loc_0x802955bc: // orphan
         v1 = [s2 + 0]            // t9
         at = 0 + 6
         s2 = 0x8823 << 16
         v0 = halfword [v1 + 0x18]
         a2 = 0x800d << 16
         a2 += 0x510
         if                       // likely
         s2 += 0x45d0

    loc_0x802955dc: // orphan
         a1 = halfword [v1 + 0x1a]
         a0 = 0 + 0x14d
         a2 = 0 + 0x5d
         at = a1
         a1 <<= 3
         a1 += at
         // CODE XREF from fcn.802aacec @ +0x474
         a1 <<= 2
         a1 += 0xbb
         call 0x8004b314          // 0x8004b314(0x14d, 0x240097, 0x5d, -1)
         a3 = 0 + 0x24
         goto 0x80295760
         

    loc_0x8029560c: // orphan
         t6 = , unsigned  halfword [v1 + 0x1c]
         at = 0x8008 << 16
         t7 = , signed  t6 >> 4
         t8 = t7 << 2
         at += t8
         lwc1 f4, 0x7e50, at
         at = 0x4000 << 16
         mtc1 at, f6
         at = , v0 < 3
         mul.s f8, f4, f6
         trunc.w.s f10, f8
         mfc1 s1, f10
         
         s1 <<= 0x18
         if                       // unlikely
         s1 = , signed  s1 >> 0x18

    loc_0x8029564c: // orphan
         if                       // unlikely
         t0 = v0 << 1

    loc_0x80295654: // orphan
         t1 = ~t0
         t2 = v1 + t1
         t3 = halfword [t2 + 0x10]
         t4 = t3 + 1
         goto 0x80295694
         halfword [sp + 0x6c] = t4

    loc_0x8029566c: // orphan
         at = , v0 < 3
         if                       // unlikely
         at = , v0 < 6

    loc_0x80295678: // orphan
         if                       // unlikely
         t5 = v0 << 1

    loc_0x80295680: // orphan
         t6 = ~t5
         t7 = v1 + t6
         t8 = halfword [t7 + 0x1c]
         t9 = t8 + 1
         halfword [sp + 0x6c] = t9

    loc_0x80295694: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295664
         v0 = [a2 + 0]
         t1 = 0xe700 << 16
         t4 = 0xffff << 16
         t0 = v0 + 8
         [a2 + 0] = t0
         [v0 + 4] = 0
         [v0 + 0] = t1
         v0 = [a2 + 0]
         t4 |= 0xff
         t3 = 0xfb00 << 16
         t2 = v0 + 8
         [a2 + 0] = t2
         [v0 + 4] = t4
         [v0 + 0] = t3
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s2 + 0]            // t9
         s0 = [s2 + 0]            // t9
         a1 = s1 + 0xb9
         a1 <<= 0x10
         a2 = halfword [s0 + 0]
         a3 = halfword [s0 + 2]
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a1 = , signed  a1 >> 0x10
         call 0x80044270          // 0x80044270(-1, 0xffff7e76, 0xde00, 0x0)
         a0 = halfword [sp + 0x6c]
         s0 = [s2 + 0]            // t9
         t7 = 0 + 0xd8
         a1 = t7 - s1
         v0 = , unsigned  halfword [s0 + 2]
         a2 = halfword [s0 + 0]
         a1 <<= 0x10
         t8 = v0 - 1              // s2
         t9 = t8 << 5
         t0 = 0 + 0x400
         // CODE XREF from fcn.802aacec @ +0x494
         t1 = 0 - 0x400
         a3 = v0 << 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x1c] = t1
         [sp + 0x18] = t0
         // CODE XREF from fcn.802aacec @ +0x498
         [sp + 0x14] = t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(0x0, 0xffff831b, 0xde00, 0x0)
         // CODE XREF from fcn.802aacec @ +0x49c
         a0 = halfword [sp + 0x6c]

    loc_0x80295760: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295604
         a0 = 0x800d << 16
         a0 += 0x510
         v0 = [a0 + 0]
         t4 = 0x8009 << 16
         t4 += 0x4f50
         t2 = v0 + 8
         [a0 + 0] = t2
         t3 = 0xde00 << 16
         [v0 + 0] = t3
         [v0 + 4] = t4
         ra = [sp + 0x3c]
         s2 = [sp + 0x38]
         // CODE XREF from fcn.802aacec @ +0x4a0
         s1 = [sp + 0x34]
         s0 = [sp + 0x30]
         ret
         sp += 0x70

    loc_0x80295850: // orphan
         t5 <<= 2
         t7 = t5 + t6
         [t8 + 0] = t7
         t0 = [s0 + 0]
         t9 = 0 + 0x110
         t2 = 0 + 0x7e
         t1 = [t0 + 0]
         v1 = 0x8823 << 16
         v1 += 0x4758
         halfword [t1 + 0x10] = t9
         t3 = [s0 + 0]
         a2 = 0x8823 << 16
         a2 += 0x4390
         t4 = [t3 + 0]
         a0 = 0 + 8               // a2
         a1 = 0
         halfword [t4 + 0x12] = t2
         t6 = [s0 + 0]
         t5 = , unsigned  byte [v1 + 2] // lo
         halfword [t6 + 4] = t5
         t8 = [s0 + 0]
         t7 = , unsigned  byte [v1 + 3]
         call 0x80049290          // 0x80049290(0x8, 0x0, 0x88234390, -1)
         halfword [t8 + 6] = t7
         t0 = [s0 + 0]
         v1 = 0 + 2
         a3 = 0 + 0xb6
         byte [t0 + 8] = v0
         a2 = [s0 + 0]

    loc_0x802958c4: // orphan
         t9 = v1 << 1
         t1 = a2 + t9

    loc_0x802958cc: // orphan
         halfword [t1 + 0xc] = a3
         a2 = [s0 + 0]
         v1 -= 1
         v1 <<= 0x18
         t3 = , unsigned  byte [a2 + 8] // s4
         v1 = , signed  v1 >> 0x18
         a3 += t3
         a3 += 1                  // s4
         a3 <<= 0x10
         if                       // likely
         a3 = , signed  a3 >> 0x10 // s4

    loc_0x802958f8: // orphan
         t2 = a3 + 3
         halfword [a2 + 0xa] = t2
         a0 = 0 + 0x25
         call 0x8004c874          // 0x8004c874(0x25, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x31
         a0 = 0 + 4
         a1 = 0
         call 0x80049290          // 0x80049290(0x4, 0x0, 0x8, -1)
         a2 = v0                  // s4
         a2 = [s0 + 0]
         v1 = 0 + 2
         t8 = 0 + 2

    loc_0x80295928: // orphan
         t4 = halfword [a2 + 0xa]
         a3 = v0 + t4
         a3 += 4
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10

    loc_0x80295d7c: // orphan
         ra = [sp + 0x14]
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x47
         call 0x88001900          // 0x88001900(0x47, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802aacec @ +0x4fc
         
         call 0x882233bc          // 0x882233bc(0x47, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x80295ec4
         ra = [sp + 0x14]

    loc_0x80295e38: // orphan
         t3 = [t3 + 0x7200]       // t9
         t4 = , unsigned  halfword [t3 + 8]
         // CODE XREF from fcn.802aacec @ +0x510
         t5 = t4 & 0x4000
         if                       // unlikely
         

    loc_0x80295e4c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x48
         // CODE XREF from fcn.802aacec @ +0x514
         call 0x882233bc          // 0x882233bc(0x48, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x80295ec4
         ra = [sp + 0x14]

    loc_0x80295e64: // orphan
         if                       // likely
         v0 = 0

    loc_0x80295e6c: // orphan
         t6 = [v1 + 8]            // t9
         if                       // likely
         

    loc_0x80295e78: // orphan
         t7 = halfword [v1 + 0x26]
         if                       // likely
         

    loc_0x80295e84: // orphan
         goto 0x80295e8c
         v0 = 0 + 1               // lo

    loc_0x80295e8c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80295e84
         if                       // unlikely
         t8 = 0x8008 << 16

    loc_0x80295e94: // orphan
         t8 = [t8 + 0x7200]       // t9
         t9 = , unsigned  halfword [t8 + 8]
         t0 = t9 & 0x8000
         if                       // unlikely
         

    loc_0x80295ea8: // orphan
         call 0x88223418          // 0x88223418(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80295ec4
         ra = [sp + 0x14]

    loc_0x80295eb8: // orphan
         call 0x880020cc          // 0x880020cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v1 + 4
         ra = [sp + 0x14]

    loc_0x80295ec4: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80295d98, 0x80295e5c, 0x80295eb0
         sp += 0x18
         ret                      // ra
         

    loc_0x8029616c: // orphan
         v0 = [s2 + 0]            // t9

    loc_0x80296838: // orphan
         sp -= 0x58
         [sp + 0x44] = ra
         call 0x800033b4          // 0x800033b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x38
         t0 = 0x8823 << 16
         t1 = 0x8822 << 16
         t2 = 0x8822 << 16
         t3 = 0x8822 << 16
         t4 = 0x8822 << 16
         t0 += 0x4850
         t4 += 0x3348
         t3 += 0x3320
         t2 += 0x3850
         t1 += 0x35cc
         t6 = 0 + 1               // lo
         t7 = 0 + 0xdc
         t8 = 0 + 0xdc
         t9 = 0 + 0xb4
         [t0 + 0] = v0
         [sp + 0x20] = t9
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         [sp + 0x24] = t1
         [sp + 0x28] = t2
         [sp + 0x2c] = t3
         [sp + 0x30] = t4
         a0 = 0
         a1 = 0 + 3
         a2 = 0 + 0xa7
         a3 = 0 + 0x92
         [sp + 0x10] = 0
         [sp + 0x34] = 0
         call 0x88004804          // 0x88004804(0x0, 0x3, 0xa7, 0x92)
         [sp + 0x38] = 0
         t5 = v0 << 2
         t0 = 0x8823 << 16
         t5 += v0
         t0 += 0x4850
         t5 <<= 2
         t8 = [t0 + 0]            // s4
         t5 -= v0
         t6 = 0x8801 << 16
         t6 -= 0x12b0
         t5 <<= 2
         t7 = t5 + t6
         [t8 + 0] = t7
         t1 = [t0 + 0]            // s4
         t9 = 0 + 0xfd
         t3 = 0 + 0x12f

    loc_0x80296900: // orphan
         t2 = [t1 + 0]            // t9
         at = 0x8800 << 16
         t6 = 0 + 1               // lo
         halfword [t2 + 0x10] = t9
         t4 = [t0 + 0]            // t9
         v0 = 0x8823 << 16
         v0 += 0x4758
         t5 = [t4 + 0]
         v1 = 0
         halfword [t5 + 0x12] = t3
         [at + 0x68b4] = 0
         t7 = [t0 + 0]            // t9
         [t7 + 0x30] = t6
         t8 = [t0 + 0]            // t9
         halfword [t8 + 0x34] = 0

    loc_0x8029693c: // orphan
         t2 = [t0 + 0]            // t9
         t1 = v0 + v1
         t9 = byte [t1 + 7]       // s4
         t4 = t2 + v1
         v1 += 1
         v1 &= 0xff
         at = , v1 < 2
         if                       // unlikely
         byte [t4 + 0x36] = t9

    loc_0x80296960: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x4c] = v0
         mtc1 v0, f6
         at = 0x4407 << 16
         mtc1 at, f2
         cvt.s.w f8, f6
         mtc1 0, f4
         t0 = 0x8823 << 16
         t0 += 0x4850

    loc_0x8029698c: // orphan
         at = 0xbf00 << 16
         div.s f10, f2, f8
         c.lt.s f4, f10
         
         bc1fl 0x802969b8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802969c0
         t6 = [sp + 0x4c]         // s4

    loc_0x802969c0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802969ac
         a0 = [t0 + 0]            // t9
         t3 = 0 + 0x17
         mtc1 t6, f16
         t5 = 0 + 0xc
         t1 = 0 + 0x29
         cvt.s.w f18, f16
         t2 = 0 + 0x29
         // CODE XREF from fcn.80bdf4dc @ +0xcc
         t9 = 0 + 0xc
         t4 = 0 + 0x46
         [sp + 0x28] = t4
         [sp + 0x24] = t9
         div.s f6, f2, f18
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x14] = t5
         [sp + 0x10] = t3
         a1 = 0 + 0x11
         a2 = 0 + 9

    loc_0x80296a08: // orphan
         a3 = 0 + 0xd1
         a0 += 4
         add.s f8, f0, f6
         trunc.w.s f4, f8
         mfc1 t8, f4
         call 0x88001c6c          // 0x88001c6c(0x100000003, 0x442f71dcfe116408, 0x8, 0xd1)
         [sp + 0x18] = t8
         ra = [sp + 0x44]
         sp += 0x58
         ret
         

    loc_0x80296a54: // orphan
         ra = [sp + 0x14]
         at = 0x8800 << 16
         [at + 0x68b8] = 0
         ret
         sp += 0x18

    loc_0x80296d48: // orphan
         t8 = t7 + a0             // t9
         a1 = , unsigned  byte [t8 + 0x36] // s4
         a0 += 1

    loc_0x80296d54: // orphan
         a0 &= 0xff               // s4
         if                       // unlikely
         at = , a0 < 4

    loc_0x80296d60: // orphan
         v1 = 0 + 1               // lo
         byte [v0 + 0] = a1
         v0 += 1

    loc_0x80296d6c: // orphan
         bnel at, 0, 0x80296d48   // likely
         t7 = [a2 + 0]

    loc_0x80296d74: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80296dcc: // orphan
         
         v0 = halfword [v1 + 0x34]
         at = 0 + 4
         if                       // fcn.802a836c-0x1157c // unlikely
         at = 0 + 5

    loc_0x80296de0: // orphan
         if                       // unlikely
         

    loc_0x80296de8: // orphan
         goto 0x80296eac
         

    loc_0x80296e40: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x137
         call 0x8821c2f4          // 0x8821c2f4(0x137, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x8823 << 16
         v1 += 0x4758
         v0 = 0

    loc_0x80296e5c: // orphan
         t0 = v1 + v0
         v0 += 1
         v0 &= 0xff
         at = , v0 < 4            // lo
         if                       // likely
         byte [t0 + 9] = 0

    loc_0x80296e74: // orphan
         a0 = 0 + 2
         call 0x8821b980          // 0x8821b980(0x2, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x8821c0b0          // 0x8821c0b0(0x2, 0x0, 0x8, -1)
         
         a0 = 0x8800 << 16
         a0 += 0x6880
         a1 = 0
         call 0x8800225c          // 0x8800225c(0x88006880, 0x0, 0x8, -1)
         a2 = 0
         call 0x88224424          // 0x88224424(0x88006880, 0x0, 0x0, -1)
         
         goto 0x80296ff0          // fcn.802a836c-0x1137c
         ra = [sp + 0x14]

    loc_0x80296eac: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80296de8
         call 0x800226c0          // fcn.80296eb4 // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x47

    loc_0x802970a8: // orphan
         v1 = [s1 + 0]
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = s5
         t0 = [s4 + 0]
         t7 = [t0 + 0x30]         // t9
         // CODE XREF from fcn.802aacec @ +0x604
         bnel t7, 0, 0x802970dc   // likely
         v1 = [s1 + 0]

    loc_0x802970cc: // orphan
         t8 = halfword [t0 + 0x34]
         bnel t8, s3, 0x802970f4  // likely
         v1 = [s1 + 0]

    loc_0x802970d8: // orphan
         v1 = [s1 + 0]

    loc_0x802970dc: // orphan
         t9 = v1 + 8
         [s1 + 0] = t9
         [v1 + 4] = t3
         goto 0x80297104
         [v1 + 0] = a1

    loc_0x802970f4: // orphan
         t5 = v1 + 8
         // CODE XREF from fcn.802aacec @ +0x608
         [s1 + 0] = t5
         [v1 + 4] = t4
         [v1 + 0] = a1

    loc_0x80297104: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802970e8
         v1 = [s1 + 0]
         t7 = s2 + 0x19
         t8 = t7 & 0x3ff

    loc_0x80297110: // orphan
         t6 = v1 + 8
         [s1 + 0] = t6
         t6 = s2 & 0x3ff
         s3 += 1
         t9 = t8 << 2
         s3 &= 0xff
         s2 += 0x26
         t7 = t6 << 2
         s2 <<= 0x10
         at = , s3 < 4            // lo
         t8 = t7 | a2
         t5 = t9 | a0
         s2 = , signed  s2 >> 0x10
         [v1 + 0] = t5
         if                       // likely
         [v1 + 4] = t8

    loc_0x80297150: // orphan
         t9 = [s4 + 0]
         t6 = 0 + 0xbb
         s3 = 0
         t5 = halfword [t9 + 0x26]
         s6 = a3                  // s2
         s2 = t6 - t5
         s2 <<= 0x10
         if                       // likely
         s2 = , signed  s2 >> 0x10

    loc_0x80297174: // orphan
         t1 = 0

    loc_0x80297178: // orphan
         v0 = s2 + 0x15
         a2 = s2 << 0x10
         s0 = v0 << 0x10
         a2 = , signed  a2 >> 0x10 // t9
         if                       // likely
         s0 = , signed  s0 >> 0x10

    loc_0x80297190: // orphan
         at = , s2 < 0xbb         // lo
         beql at, 0, 0x802971c8   // unlikely
         v1 = [s1 + 0]

    loc_0x8029719c: // orphan
         goto 0x802971c4
         a2 = 0 + 0xbb

    loc_0x802971a4: // orphan
         at = 0 + 0xa
         if                       // likely
         t7 = v0 << 0x10

    loc_0x802971b0: // orphan
         t8 = , signed  t7 >> 0x10
         at = , t8 < 0x1a0        // lo
         bnel at, 0, 0x802971c8   // likely
         v1 = [s1 + 0]

    loc_0x802971c0: // orphan
         s0 = 0 + 0x19f

    loc_0x802971c4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029719c
         v1 = [s1 + 0]

    loc_0x802971c8: // orphan
         t9 = v1 + 8
         [s1 + 0] = t9
         [v1 + 4] = 0
         [v1 + 0] = s5
         t0 = [s4 + 0]
         t6 = halfword [t0 + 0xe]
         t5 = t0 + t6
         t7 = t5 + t1
         a0 = , unsigned  byte [t7 + 0x3b] // s4
         call 0x882244b0          // "<\n" // 0x882244b0(0xff, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0xea] = a2
         t2 = 0x57 << 16
         t3 = 0x9a9 << 16
         t4 = 0x39cf << 16
         t4 |= 0x39cf
         t3 |= 0x9a9
         t2 |= 0xc000
         a1 = 0xf700 << 16
         a2 = halfword [sp + 0xea]
         if                       // unlikely
         a3 = 0xf680 << 16

    loc_0x8029721c: // orphan
         t8 = [s4 + 0]
         t9 = [t8 + 0x30]
         beql t9, 0, 0x80297250   // unlikely
         v1 = [s1 + 0]

    loc_0x8029722c: // orphan
         v1 = [s1 + 0]
         t5 = 0x39d7 << 16
         t5 |= 0x39d7
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 4] = t5
         goto 0x802972a8
         [v1 + 0] = a1

    loc_0x80297250: // orphan
         t8 = 0x2aff << 16
         t8 |= 0x2aff
         t7 = v1 + 8
         [s1 + 0] = t7
         [v1 + 4] = t8
         goto 0x802972a8
         [v1 + 0] = a1

    loc_0x8029726c: // orphan
         t9 = [s4 + 0]
         t6 = [t9 + 0x30]
         beql t6, 0, 0x80297298   // unlikely
         v1 = [s1 + 0]

    loc_0x8029727c: // orphan
         v1 = [s1 + 0]
         t5 = v1 + 8
         [s1 + 0] = t5
         [v1 + 4] = t4
         goto 0x802972a8
         [v1 + 0] = a1

    loc_0x80297298: // orphan
         t7 = v1 + 8
         [s1 + 0] = t7
         [v1 + 4] = t3
         [v1 + 0] = a1

    loc_0x802972a8: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80297244, 0x80297264, 0x8029728c
         v1 = [s1 + 0]
         t9 = s0 & 0x3ff
         s0 += 1
         t8 = v1 + 8
         [s1 + 0] = t8
         t6 = t9 << 2
         t7 = a2 & 0x3ff
         s0 <<= 0x10
         t8 = t7 << 2             // k0
         s0 = , signed  s0 >> 0x10
         t9 = t8 | t2             // s4
         t5 = t6 | a3             // s2
         at = , s0 < 0x1a0        // lo
         [v1 + 0] = t5
         if                       // unlikely
         [v1 + 4] = t9

    loc_0x802972e8: // orphan
         v1 = [s1 + 0]
         v0 = s0 & 0x3ff
         v0 <<= 2
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = s5
         t5 = [s4 + 0]
         t7 = [t5 + 0x30]         // t9
         beql t7, 0, 0x80297338   // unlikely
         v1 = [s1 + 0]

    loc_0x80297314: // orphan
         v1 = [s1 + 0]
         t9 = 0x6319 << 16
         t9 |= 0x6319
         t8 = v1 + 8
         [s1 + 0] = t8
         [v1 + 4] = t9
         goto 0x80297350
         [v1 + 0] = a1

    loc_0x80297338: // orphan
         t5 = 0x7d3f << 16
         t5 |= 0x7d3f
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 4] = t5
         [v1 + 0] = a1

    loc_0x80297350: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029732c
         v1 = [s1 + 0]
         t8 = v0 | a3             // s2
         t9 = v0 | t2             // s4
         // CODE XREF from fcn.802aacec @ +0x61c
         t7 = v1 + 8
         [s1 + 0] = t7
         [v1 + 4] = t9
         [v1 + 0] = t8

    loc_0x8029736c: // orphan
         s3 += 1
         // CODE XREF from fcn.802aacec @ +0x620
         s3 &= 0xff
         s2 += 0x17
         s2 <<= 0x10
         at = , s3 < s6           // lo
         s2 = , signed  s2 >> 0x10
         if                       // likely
         t1 = s3

    loc_0x8029738c: // orphan
         s3 = 0

    loc_0x80297390: // orphan
         v1 = [s1 + 0]
         t7 = 0x8009 << 16
         t7 += 0x4e38
         t6 = v1 + 8
         [s1 + 0] = t6
         t5 = 0xde00 << 16
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         [v1 + 0] = t5
         call 0x88002ba0          // 0x88002ba0(0xff, 0xff, 0xff, -1)
         [v1 + 4] = t7
         a0 = 0x8801 << 16
         call 0x8004d1fc          // 0x8004d1fc(0x88010000, 0xff, 0xff, -1)
         a0 = [a0 - 0x1304]       // t9
         a0 = 0x8801 << 16
         a0 = [a0 - 0x12fc]       // t9
         a1 = 0 + 0x20            // k0
         call 0x8004d27c          // 0x8004d27c(-1, 0x20, 0xff, -1)
         a2 = 0 + 1               // lo
         a0 = 0x8801 << 16
         a0 = [a0 - 0x1338]       // t9
         a1 = 0 + 0x100
         call 0x8004d27c          // 0x8004d27c(-1, 0x100, 0x1, -1)
         a2 = 0 + 2
         t8 = 0 + 3
         [sp + 0x10] = t8
         a0 = 0 + 0x15c
         a1 = 0 + 0xa7
         a2 = 0 + 0xa8
         call 0x88002ec0          // 0x88002ec0(0x15c, 0xa7, 0xa8, -1)
         a3 = 0 + 0x10d
         s2 = 0 + 0xa7

    loc_0x80297414: // orphan
         a1 = s2 << 0x10
         t9 = 0 + 3
         [sp + 0x10] = t9
         a1 = , signed  a1 >> 0x10 // t9
         a0 = 0 + 0xb6
         a2 = 0 + 0x9c
         call 0x88002ec0          // "&s" // 0x88002ec0(0xb6, -1, 0x9c, -1)
         a3 = 0 + 0x20            // k0
         // CODE XREF from fcn.802aacec @ +0x624
         s3 += 1
         s3 &= 0xff
         s2 += 0x26
         s2 <<= 0x10
         at = , s3 < 4            // lo
         // CODE XREF from fcn.802aacec @ +0x628
         if                       // likely
         s2 = , signed  s2 >> 0x10

    loc_0x80297450: // orphan
         s3 = 0
         s2 = 0 + 0x141

    loc_0x80297b34: // orphan
         a1 <<= 1
         a1 += 0xa2
         [sp + 0x1c] = 0
         [sp + 0x14] = t8
         [sp + 0x10] = t5
         a0 = 0 + 0xb1
         a2 = 0 + 0xa6
         call 0x8004b2cc          // 0x8004b2cc(0xb1, 0x885ee3b9fc22c8b2, 0xa6, -1)
         a3 = 0 + 0x2a
         ra = [sp + 0x4c]         // s4
         // CODE XREFS from fcn.8029745c @ 0x80297a84, 0x80297aa8
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         ret                      // s4
         sp += 0xf0

    loc_0x80297c48: // orphan
         t8 = [s4 + 0]
         t7 = v0 + s1
         t9 = , unsigned  byte [t7 + 9] // s4
         t0 = t8 + s1
         // CODE XREF from fcn.802aacec @ +0x678
         s1 += 1
         s1 &= 0xff
         at = , s1 < 4
         if                       // unlikely
         byte [t0 + 0x36] = t9

    loc_0x80297c6c: // orphan
         call 0x8800005c          // "P@" // 0x8800005c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         beql v0, 0, 0x80297c90   // unlikely
         t4 = [s4 + 0]

    loc_0x80297c7c: // orphan
         t1 = [s4 + 0]
         t2 = 0 + 0xa4
         goto 0x80297c98
         byte [t1 + 0x3a] = t2

    loc_0x80297c90: // orphan
         t3 = 0 + 0xfa
         byte [t4 + 0x3a] = t3

    loc_0x80297c98: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297c84
         t5 = [s4 + 0]
         s0 = 0
         s1 = 0
         t6 = , unsigned  byte [t5 + 0x3a]
         if                       // unlikely
         s3 = 0 + 0xa4

    loc_0x80297cb0: // orphan
         s2 = 0 + 0xa5

    loc_0x80297cb4: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x80297cfc, 0x80297d14
         a0 = s0 + 1
         call 0x80073510          // 0x80073510(0x105, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802aacec @ +0x67c
         a0 &= 0xff
         t7 = [s4 + 0]
         t8 = t7 + s1
         byte [t8 + 0x3b] = v0
         v1 = [s4 + 0]
         // CODE XREF from fcn.802aacec @ +0x680
         a0 = , unsigned  byte [v1 + 0x3a]
         t9 = v1 + s1
         t0 = v1 + s1
         bnel s3, a0, 0x80297d08  // likely
         t2 = , unsigned  byte [t0 + 0x3b] // s4

    loc_0x80297ce4: // orphan
         v0 = , unsigned  byte [t9 + 0x3b] // s4
         if                       // unlikely
         at = , v0 < 0xa6

    loc_0x80297cf0: // orphan
         bnel at, 0, 0x80297d20   // likely
         s1 += 1

    loc_0x80297cf8: // orphan
         s0 += 1
         goto 0x80297cb4
         s0 &= 0xff

    loc_0x80297d08: // orphan
         bnel s2, t2, 0x80297d20  // likely
         s1 += 1

    loc_0x80297d10: // orphan
         s0 += 1
         goto 0x80297cb4
         s0 &= 0xff

    loc_0x80297d20: // orphan
         s1 &= 0xff
         at = , s1 < a0           // lo
         s0 += 1
         if                       // likely
         s0 &= 0xff

    loc_0x80297d34: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x4100 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f18
         mtc1 0, f4
         mul.s f16, f8, f10
         div.s f6, f16, f18
         c.lt.s f4, f6
         
         bc1f 0x80297d7c
         at = 0x3f00 << 16
         mtc1 at, f8
         goto 0x80297d8c
         swc1 f8, 0x64, sp

    loc_0x80297d8c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297d74
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x68] = v0
         mtc1 v0, f18
         at = 0x40a0 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x4270 << 16
         mtc1 at, f10
         mtc1 0, f16
         mul.s f8, f4, f6
         div.s f18, f8, f10
         c.lt.s f16, f18
         
         bc1f 0x80297ddc
         at = 0x3f00 << 16
         mtc1 at, f4
         goto 0x80297dec
         swc1 f4, 0x6c, sp

    loc_0x80297dec: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297dd4
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x70] = v0
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x74] = v0
         mtc1 v0, f10
         at = 0x41f0 << 16
         mtc1 at, f18
         cvt.s.w f16, f10
         at = 0x4270 << 16
         mtc1 at, f6
         mtc1 0, f8
         mul.s f4, f16, f18
         div.s f10, f4, f6
         c.lt.s f8, f10
         
         bc1f 0x80297e44
         at = 0x3f00 << 16
         mtc1 at, f16
         goto 0x80297e54
         swc1 f16, 0x78, sp

    loc_0x80297e54: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297e3c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s3 = v0                  // s4
         mtc1 v0, f6
         at = 0x40a0 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         at = 0x4270 << 16
         mtc1 at, f18
         mtc1 0, f4
         mul.s f16, f8, f10
         div.s f6, f16, f18
         c.lt.s f4, f6
         
         bc1f 0x80297ea4
         at = 0x3f00 << 16
         mtc1 at, f8
         goto 0x80297eb4
         swc1 f8, 0x80, sp

    loc_0x80297eb4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297e9c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s2 = v0                  // s4
         mtc1 v0, f18
         at = 0x4100 << 16
         mtc1 at, f6
         cvt.s.w f4, f18
         at = 0x4270 << 16
         mtc1 at, f10
         mtc1 0, f16
         mul.s f8, f4, f6
         div.s f18, f8, f10
         c.lt.s f16, f18
         
         bc1f 0x80297f04
         at = 0x3f00 << 16
         mtc1 at, f4
         goto 0x80297f14
         swc1 f4, 0x88, sp

    loc_0x80297f14: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297efc
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = v0                  // s4
         mtc1 v0, f10
         at = 0x41f0 << 16
         mtc1 at, f18
         cvt.s.w f16, f10
         at = 0x4270 << 16
         mtc1 at, f6
         mtc1 0, f8
         at = 0xbf00 << 16
         mul.s f4, f16, f18
         div.s f10, f4, f6
         c.lt.s f8, f10
         
         bc1fl 0x80297f70
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x80297f74
         

    loc_0x80297f74: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297f64
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x90, sp
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = v0                  // s4
         mtc1 v0, f18
         at = 0x4270 << 16
         mtc1 at, f12
         // CODE XREF from fcn.802aacec @ +0x690
         cvt.s.w f4, f18
         at = 0x4100 << 16
         mtc1 at, f14
         mtc1 0, f16
         t1 = [sp + 0x74]         // s4
         // CODE XREF from fcn.802aacec @ +0x694
         at = 0xbf00 << 16
         mul.s f6, f4, f14
         mtc1 t1, f18
         lwc1 f2, 0x90, sp
         div.s f8, f6, f12
         c.lt.s f16, f8
         
         bc1fl 0x80297fdc
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80297fe4
         cvt.s.w f4, f18

    loc_0x80297fe4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80297fd0
         at = 0x41f0 << 16
         mtc1 at, f10
         // CODE XREF from fcn.802aacec @ +0x69c
         t5 = [sp + 0x70]         // s4
         lwc1 f8, 0x78, sp
         at = 0x40a0 << 16
         mul.s f6, f10, f4
         mtc1 at, f4
         // CODE XREF from fcn.802aacec @ +0x6a0
         t9 = [sp + 0x68]         // s4
         a0 = [s4 + 0]
         a2 = 0 + 0xff            // s4
         a3 = 0
         a0 += 0x136
         // CODE XREF from fcn.802aacec @ +0x6a4
         div.s f16, f6, f12
         mtc1 t5, f6
         add.s f18, f8, f16
         cvt.s.w f8, f6

    loc_0x80298024: // orphan
         trunc.w.s f10, f18
         mul.s f16, f4, f8
         mtc1 t9, f8
         mfc1 t4, f10
         lwc1 f10, 0x6c, sp
         div.s f18, f16, f12
         cvt.s.w f16, f8
         add.s f6, f18, f10
         mul.s f18, f14, f16
         // CODE XREF from fcn.802aacec @ +0x6a8
         mtc1 at, f16
         at = 0x41f0 << 16
         trunc.w.s f4, f6
         lwc1 f6, 0x64, sp
         div.s f10, f18, f12
         // CODE XREF from fcn.802aacec @ +0x6ac
         mtc1 s3, f18
         mfc1 t7, f4
         
         t8 = t4 + t7             // t9
         add.s f4, f10, f6
         cvt.s.w f10, f18
         trunc.w.s f8, f4
         mul.s f6, f16, f10
         lwc1 f10, 0x88, sp
         mfc1 t2, f8
         lwc1 f8, 0x80, sp
         a1 = t8 + t2
         div.s f4, f6, f12
         mtc1 s2, f6
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         add.s f18, f8, f4

    loc_0x802980a0: // orphan
         cvt.s.w f8, f6
         trunc.w.s f16, f18
         mul.s f4, f14, f8
         mtc1 at, f8
         mfc1 t3, f16
         
         [sp + 0x10] = t3
         div.s f18, f4, f12
         mtc1 s1, f4
         add.s f16, f10, f18
         cvt.s.w f10, f4
         trunc.w.s f6, f16
         mul.s f18, f8, f10
         mtc1 s0, f8
         mfc1 t6, f6
         cvt.s.w f10, f8
         [sp + 0x14] = t6
         div.s f16, f18, f12
         mul.s f18, f14, f10
         add.s f6, f2, f16

    loc_0x802985ac: // orphan
         a2 += 1

    loc_0x80298c24: // orphan
         a1 = s3 & 0xff           // s4
         t6 = t5 + s0

    loc_0x80298c2c: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ab458
         byte [t6 + 0] = s3

    loc_0x80298c30: // orphan
         t7 = [s4 + 0]
         t8 = [t7 + 0xac]         // t9
         call 0x88226058          // 0x88226058(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t8 + s1
         s2 = [s4 + 0]
         s0 += 1
         s1 += 2
         t9 = , unsigned  halfword [s2 + 0x28]
         at = , unsigned  , s0 < t9 // lo
         bnel at, 0, 0x80298c24   // likely
         t5 = [s2 + 0x9c]         // t9

    loc_0x80298c5c: // orphan
         goto 0x80298cec
         s2 = [s4 + 0]

    loc_0x80298ce4: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ab470
         [at + 0x68b8] = t4
         s2 = [s4 + 0]

    loc_0x80298cec: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x80298c5c
         goto 0x80298e84          // fcn.802a836c-0xf4e8
         v0 = halfword [s2 + 0x84]

    loc_0x80298d80: // orphan
         at = 0 + 2

    loc_0x8029c1d4: // orphan
         v0 = , unsigned  halfword [t6 + 8]
         v1 = 0x8823 << 16
         v1 = [v1 + 0x48c0]       // t9
         t7 = v0 & 0x4000
         if                       // unlikely
         v1 += 0x20

    loc_0x8029c1ec: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x48
         t8 = 0x8823 << 16
         t8 = [t8 + 0x48c0]       // t9
         a1 = 0
         t9 = [t8 + 0]
         // CODE XREF from fcn.802aacec @ +0x9b4
         call 0x88004990          // 0x88004990(0x48, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t9 + 0] // s4
         t0 = 0 + 1               // lo
         at = 0x8800 << 16
         goto 0x8029c2f8          // fcn.8029c280+0x78
         [at + 0x68b8] = t0

    loc_0x8029c21c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029c1e4
         t1 = v0 & 0x8000
         if                       // likely
         a0 = v1 + 0x28           // arg1

    loc_0x8029c228: // orphan
         call 0x8821c2f4          // 0x8821c2f4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]
         at = 0 + 1               // lo
         a0 = 0 + 0x5c
         v0 = halfword [v1 + 0x28]
         if                       // unlikely
         

    loc_0x8029c248: // orphan
         // CODE XREF from fcn.802aacec @ +0x9b8
         if                       // unlikely
         at = 0 + 2

    loc_0x8029c250: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x8029c258: // orphan
         if                       // unlikely
         

    loc_0x8029c260: // orphan
         goto 0x8029c2a8          // fcn.8029c280+0x28
         

    loc_0x8029c268: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x8029c240, 0x8029c248, 0x8029c250
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]
         at = 0x8823 << 16
         a0 = 0 + 0x200
         t2 = halfword [v1 + 0x28]

    loc_0x8029c294: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029c258
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x137
         // CODE XREF from fcn.802aacec @ +0x9cc
         a0 = 0 + 0x200
         call 0x8821b980          // 0x8821b980(0x200, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x8029c2ec: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x8029c220
         a1 = , unsigned  halfword [v1 + 0xc]
         call 0x88002720          // 0x88002720(-1, 0x0, 0x8, -1)
         a2 = v1 + 0x2c

    loc_0x802a116c: // orphan
         t7 = 0x8823 << 16
         t7 = [t7 + 0x4970]       // t9
         t6 = 0 + 1               // lo
         t8 = [t7 + 0]
         [t8 + 0x2c] = t6
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802a1224: // orphan
         a2 = 0x8823 << 16
         t7 = 0 + 1               // lo
         at = 0x8800 << 16
         a2 += 0x4970
         [at + 0x68b8] = t7
         t8 = [a2 + 0]            // t9
         a1 = 0
         t9 = [t8 + 0]
         call 0x88004990          // 0x88004990(-1, 0x0, 0x88234970, -1)
         a0 = , unsigned  byte [t9 + 0] // s4
         goto 0x802a141c
         ra = [sp + 0x14]

    loc_0x802a1364: // orphan
         at = , t1 < 5
         bnel at, 0, 0x802a137c   // unlikely
         t3 = [a1 + 0]            // t9

    loc_0x802a1370: // orphan
         halfword [v0 + 6] = 0
         v0 = [a2 + 0]
         t3 = [a1 + 0]            // t9

    loc_0x802a137c: // orphan
         v1 = , unsigned  halfword [t3 + 0xc]
         t4 = v1 & 0x200
         if                       // unlikely
         t9 = v1 & 0x100

    loc_0x802a138c: // orphan
         t5 = halfword [v0 + 4]
         t8 = 0 + 5
         t6 = t5 - 1              // s2
         halfword [v0 + 4] = t6
         v0 = [a2 + 0]
         t7 = halfword [v0 + 4]
         bgezl t7, 0x802a13f4     // likely
         t3 = halfword [sp + 0x18]

    loc_0x802a13ac: // orphan
         // CODE XREF from fcn.802ab868 @ 0x802abb18
         halfword [v0 + 4] = t8
         v0 = 0x8823 << 16
         goto 0x802a13f0
         v0 = [v0 + 0x4970]       // t9

    loc_0x802a13bc: // orphan
         beql t9, 0, 0x802a13f4   // unlikely
         t3 = halfword [sp + 0x18]

    loc_0x802a13c4: // orphan
         t0 = halfword [v0 + 4]
         t2 = t0 + 1
         halfword [v0 + 4] = t2
         v0 = [a2 + 0]
         t1 = halfword [v0 + 4]
         at = , t1 < 6
         bnel at, 0, 0x802a13f4   // unlikely
         t3 = halfword [sp + 0x18]

    loc_0x802a13e4: // orphan
         halfword [v0 + 4] = 0
         v0 = 0x8823 << 16
         v0 = [v0 + 0x4970]       // t9

    loc_0x802a13f0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a13b4
         t3 = halfword [sp + 0x18]

    loc_0x802a13f4: // orphan
         t4 = halfword [v0 + 4]
         t5 = halfword [sp + 0x1a]
         if                       // likely
         

    loc_0x802a1404: // orphan
         t6 = halfword [v0 + 6]
         beql t5, t6, 0x802a141c  // unlikely
         ra = [sp + 0x14]

    loc_0x802a1410: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x46
         ra = [sp + 0x14]

    loc_0x802a141c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a124c
         sp += 0x20
         ret                      // ra
         

    loc_0x802a1424: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a124c
         sp += 0x20
         ret                      // ra
         

    loc_0x802a17c0: // orphan
         t9 = [v1 + 8]
         a0 = s3 - 9
         a0 <<= 0x10
         t4 = , unsigned  byte [t9 + 0x15] // s4
         a1 = s6 << 0x10
         a1 = , signed  a1 >> 0x10
         if                       // likely
         a0 = , signed  a0 >> 0x10

    loc_0x802a22e8: // orphan
         at = 0x41f0 << 16
         mtc1 at, f8
         cvt.s.w f10, f6
         mtc1 0, f18
         mul.s f16, f10, f8
         div.s f4, f16, f20
         c.lt.s f18, f4
         
         bc1f 0x802a231c
         at = 0x3f00 << 16
         mtc1 at, f6
         goto 0x802a232c
         swc1 f6, 0x74, sp

    loc_0x802a232c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a2314
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x78] = v0
         mtc1 v0, f16
         at = 0x40a0 << 16
         mtc1 at, f4
         cvt.s.w f18, f16
         mtc1 0, f8
         mul.s f6, f18, f4
         div.s f10, f6, f20
         c.lt.s f8, f10
         
         bc1f 0x802a2374
         at = 0x3f00 << 16
         mtc1 at, f16
         goto 0x802a2384
         swc1 f16, 0x7c, sp

    loc_0x802a2384: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a236c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s2 = v0                  // s4
         mtc1 v0, f6
         at = 0x4100 << 16
         mtc1 at, f10
         cvt.s.w f8, f6
         mtc1 0, f4
         at = 0xbf00 << 16
         mul.s f16, f8, f10
         div.s f18, f16, f20
         c.lt.s f4, f18
         
         bc1fl 0x802a23d8
         mtc1 at, f8

    loc_0x802a23c4: // orphan
         at = 0x3f00 << 16
         mtc1 at, f6
         goto 0x802a23e0
         swc1 f6, 0x84, sp

    loc_0x802a23e0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a23cc
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = v0                  // s4
         mtc1 v0, f16
         at = 0x41f0 << 16
         mtc1 at, f18
         cvt.s.w f4, f16
         mtc1 0, f10
         at = 0xbf00 << 16
         mul.s f6, f4, f18
         div.s f8, f6, f20
         c.lt.s f10, f8
         
         bc1fl 0x802a2434
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x802a2438
         

    loc_0x802a2438: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a2428
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x8c, sp
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = v0                  // s4
         mtc1 v0, f4
         at = 0x4100 << 16
         mtc1 at, f12
         cvt.s.w f18, f4
         mtc1 0, f16
         t0 = [sp + 0x70]         // s4
         at = 0xbf00 << 16
         lwc1 f2, 0x8c, sp

    loc_0x802a28b0: // orphan
         [sp + 0x38] = 0
         [sp + 0x34] = 0
         [sp + 0x30] = t4
         [sp + 0x2c] = t3
         [sp + 0x28] = t2
         [sp + 0x24] = t1
         [sp + 0x14] = s0
         [sp + 0x10] = v1
         a1 = 0 + 2
         a2 = 0 + 0x140
         a3 = 0 + 0xf0
         call 0x88004804          // 0x88004804(-1, 0x2, 0x140, 0xf0)
         a0 += 4
         t5 = v0 << 2
         t5 += v0
         t5 <<= 2
         t8 = [s2 + 0]            // t9
         t5 -= v0
         t6 = 0x8801 << 16
         t6 -= 0x12b0
         t5 <<= 2
         t7 = t5 + t6
         [t8 + 0] = t7
         at = 0x8800 << 16
         [at + 0x68b4] = 0
         ra = [sp + 0x54]
         at = 0x8823 << 16
         [at + 0x4724] = s0
         s0 = [sp + 0x44]
         s3 = [sp + 0x50]         // s4
         s2 = [sp + 0x4c]         // s4
         s1 = [sp + 0x48]
         ret
         sp += 0x58

    loc_0x802a2a48: // orphan
         t1 = 0x8870 << 16
         t2 = 0x8823 << 16
         t3 = 0x8823 << 16
         t3 += 0x31c
         t2 += 0x2f8
         t1 += 0x1240
         t0 += 0xce4
         a3 = v0 << 0x10
         t6 = 0 + 1               // lo
         t7 = 0 + 0xdc
         t8 = 0 + 0xdc
         t9 = 0 + 0xb4
         [sp + 0x20] = t9
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         [sp + 0x14] = t6
         a3 = , signed  a3 >> 0x10 // s4
         [sp + 0x24] = t0
         [sp + 0x28] = t1
         [sp + 0x2c] = t2
         [sp + 0x30] = t3
         a0 = 0
         a1 = 0 + 3
         a2 = halfword [sp + 0x4a]
         [sp + 0x10] = 0
         [sp + 0x34] = 0
         call 0x88004804          // 0x88004804(0x0, 0x3, 0x0, 0xff)
         [sp + 0x38] = 0
         t4 = v0 << 2
         v1 = 0x8823 << 16
         t4 += v0
         v1 += 0x4990
         t4 <<= 2
         t7 = [v1 + 0]            // t9
         t4 -= v0
         t5 = 0x8801 << 16
         t5 -= 0x12b0
         t4 <<= 2
         t6 = t4 + t5
         [t7 + 0] = t6
         t9 = [v1 + 0]
         t8 = 0 + 0x181
         t1 = 0 + 0x15c
         t0 = [t9 + 0]
         at = 0x8800 << 16
         t4 = 0 + 1               // lo
         halfword [t0 + 0x10] = t8
         t2 = [v1 + 0]            // t9
         t3 = [t2 + 0]
         halfword [t3 + 0x12] = t1
         ra = [sp + 0x44]
         [at + 0x68b4] = 0
         at = 0x8823 << 16
         [at + 0x46f4] = t4
         ret
         sp += 0x50

    loc_0x802a2c14: // orphan
         a1 = 0 + 0x10
         t8 = 0x8800 << 16
         t9 = 0x8800 << 16
         t0 = 0x8890 << 16
         t1 = 0x8800 << 16
         t1 += 0xe4c
         t0 += 0x3b00
         t9 += 0x68b8
         t8 += 0x68b4
         t4 = 0 + 0xff            // s4
         t5 = 0 + 0xaa
         t6 = 0 + 0x8c
         t7 = 0 + 2
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         [sp + 0x24] = t8
         [sp + 0x28] = t9
         [sp + 0x2c] = t0
         [sp + 0x30] = t1
         a0 = v0                  // s4
         a1 = 0 + 0x140
         a2 = 0 + 0xf0
         a3 = 0 + 4
         call 0x88903c50          // 0x88903c50(0xff, 0x140, 0xf0, 0x4)
         [sp + 0x20] = 0
         goto 0x802a2d2c
         v0 = 0

    loc_0x802a2d2c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a2c80
         ra = [sp + 0x5c]
         s0 = [sp + 0x40]
         s1 = [sp + 0x44]
         s2 = [sp + 0x48]
         s3 = [sp + 0x4c]         // s4
         s4 = [sp + 0x50]
         s5 = [sp + 0x54]
         s6 = [sp + 0x58]
         ret
         sp += 0x80

    loc_0x802a2ef0: // orphan
         ret                      // ra
         

    loc_0x802a2f10: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802a2f24: // orphan
         [sp + 0x44] = ra
         [sp + 0x48] = a0
         call 0x800033b4          // 0x800033b4(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.81b5c8e4 @ +0x44c
         a0 = 0 + 0xe8
         v1 = 0x8823 << 16
         v1 += 0x49a0
         [v1 + 0] = v0
         a0 = v0 + 4
         call 0x882304b0          // 0x882304b0(0x103, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [sp + 0x4b] // s4
         if                       // likely
         a0 = 0x8823 << 16

    loc_0x802a2f54: // orphan
         a0 = 0x8823 << 16
         call 0x800033dc          // 0x800033dc(0x88230000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x49a0]       // s4
         goto 0x802a3024          // fcn.802a3010+0x14
         ra = [sp + 0x44]

    loc_0x802a2f64: // orphan
         ra = [sp + 0x44]

    loc_0x802a2f68: // orphan
         // CODE XREF from fcn.802af284 @ 0x802abc24
         a0 = [a0 + 0x49a0]       // t9

    loc_0x802a2f6c: // orphan
         t1 = 0x8823 << 16
         t2 = 0x8823 << 16
         t3 = 0x8823 << 16
         t4 = 0x8823 << 16
         t4 += 0x708
         t3 += 0x6e0
         t2 += 0x878
         t1 += 0x770
         t6 = 0 + 4
         t7 = 0 + 1               // lo
         t8 = 0 + 0xdc
         t9 = 0 + 0xdc
         t0 = 0 + 0xb4
         [sp + 0x20] = t0
         [sp + 0x1c] = t9
         [sp + 0x18] = t8

    loc_0x802a3080: // orphan
         at = 0x8800 << 16
         goto 0x802a3094
         [at + 0x68b4] = t8

    loc_0x802a3094: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a3084
         at = 0x8823 << 16
         a0 = 0x8823 << 16
         [at + 0x46f4] = 0
         call 0x800033dc          // 0x800033dc(0x88230000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x49b0]       // t9
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802a31e8: // orphan
         [sp + 0x4c] = ra
         [sp + 0x48] = s0
         call 0x800033b4          // 0x800033b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x224
         s0 = 0x8823 << 16
         s0 += 0x49b0
         [s0 + 0] = v0
         t6 = 0x8823 << 16
         t6 = [t6 + 0x45f4]       // t9
         a0 = v0 + 8
         call 0x882304b0          // 0x882304b0(0x107, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [t6 + 9] // s4
         if                       // likely
         t7 = 0x8823 << 16

    loc_0x802a3220: // orphan
         call 0x800033dc          // 0x800033dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]            // s4
         goto 0x802a33f0
         ra = [sp + 0x4c]

    loc_0x802a3230: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a3218
         t7 = [t7 + 0x4620]       // t9
         call 0x800635e0          // 0x800635e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t7 + 0]
         a0 = 0 + 0x18
         call 0x8004c54c          // 0x8004c54c(0x18, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0                  // s4
         a0 = [s0 + 0]            // s4
         a1 = 0 + 0x100
         a2 = 0 + 0x23
         a3 = 0 + 0x17
         call 0x8004c8a0          // 0x8004c8a0(0xff, 0x100, 0x23, 0x17)
         a0 += 0x124
         t8 = [s0 + 0]            // s4
         t7 = 0x8800 << 16
         t7 += 0x6020
         [t8 + 0x120] = v0
         v1 = [s0 + 0]            // s4
         t9 = 0 + 8               // a2
         t1 = 0 + 1               // lo
         t2 = 0 + 6
         t3 = 0 + 0xf
         t4 = 0 + 0x12
         t5 = 0 + 0xd
         t6 = 0 + 0x10
         [sp + 0x28] = t6
         [sp + 0x24] = t5
         [sp + 0x20] = t4
         [sp + 0x1c] = t3
         [sp + 0x18] = t2
         [sp + 0x14] = t1
         [sp + 0x10] = t9
         [sp + 0x34] = t7
         [sp + 0x30] = 0
         [sp + 0x2c] = 0
         a1 = 0
         a3 = 0 + 1               // lo
         a0 = v1 + 0xec
         call 0x88002aa8          // 0x88002aa8(0x1eb, 0x0, 0x23, 0x1)
         a2 = v1 + 0x120
         a0 = [s0 + 0]            // s4
         t3 = 0x8823 << 16
         t4 = 0x8823 << 16
         t5 = 0x8823 << 16
         t6 = 0x8823 << 16
         t6 += 0x9d8
         t5 += 0x9b0
         t4 += 0xb2c
         t3 += 0xa88
         t8 = 0 + 1               // lo
         t9 = 0 + 0xdc
         t1 = 0 + 0xdc
         t2 = 0 + 0xb4
         t7 = 0 + 4
         [sp + 0x3c] = t7
         [sp + 0x20] = t2
         [sp + 0x1c] = t1
         [sp + 0x18] = t9
         [sp + 0x14] = t8
         [sp + 0x24] = t3
         [sp + 0x28] = t4
         [sp + 0x2c] = t5
         [sp + 0x30] = t6
         a1 = 0
         a2 = 0 + 0x70
         a3 = 0 + 0xd0
         [sp + 0x10] = 0
         [sp + 0x34] = 0
         [sp + 0x38] = 0
         call 0x880048d4          // 0x880048d4(0xff, 0x0, 0x70, 0xd0)
         a0 += 0xec
         t9 = [s0 + 0]            // s4
         t8 = 0x8801 << 16
         t8 -= 0x1180
         [t9 + 0] = t8
         v1 = [s0 + 0]            // s4
         v0 = 0x8800 << 16
         v0 += 0xe4c
         t0 = [v1 + 0]
         t3 = 0 + 1               // lo
         t4 = 0 + 0xdc
         t1 = , unsigned  halfword [t0 + 0x10]
         t2 = halfword [t0 + 0xc]
         t5 = 0 + 0xdc
         t6 = 0 + 0xb4
         a2 = t1 + t2
         a2 += 5
         a2 <<= 0x10
         t7 = 0 + 5
         a2 = , signed  a2 >> 0x10
         [sp + 0x3c] = t7
         [sp + 0x20] = t6
         [sp + 0x1c] = t5
         [sp + 0x38] = 0
         [sp + 0x34] = 0
         [sp + 0x30] = v0
         [sp + 0x2c] = v0
         [sp + 0x28] = v0
         [sp + 0x24] = v0
         [sp + 0x18] = t4
         [sp + 0x14] = t3
         [sp + 0x10] = 0
         a1 = 0 + 2
         a3 = 0 + 0xd0
         call 0x880048d4          // 0x880048d4(0x1eb, 0x2, 0xffff0003, 0xd0)
         a0 = v1 + 8
         t9 = [s0 + 0]            // s4
         t8 = 0x8801 << 16
         t8 -= 0x1134
         at = 0x8800 << 16
         [t9 + 4] = t8
         [at + 0x68b4] = 0
         ra = [sp + 0x4c]

    loc_0x802a33f0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a3228
         s0 = [sp + 0x48]
         sp += 0x50
         ret                      // ra
         

    loc_0x802a3674: // orphan
         sp -= 0x28
         [sp + 0x1c] = ra
         a0 = sp + 0x26
         call 0x88230d80          // 0x88230d80(0x177ffe, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x24
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x177ffc, 0x8, -1)
         a1 = 0 + 1               // lo
         t7 = 0x8801 << 16
         // CODE XREF from fcn.802ab868 @ +0x3ec
         t7 = halfword [t7 - 0x10a8]
         t6 = halfword [sp + 0x26]
         v0 = 0x8823 << 16
         t9 = 0x8823 << 16
         at = , t6 < t7           // lo
         if                       // fcn.802af284-0xbba4 // unlikely
         

    loc_0x802a36b4: // orphan
         v0 = 0x8823 << 16
         v0 = [v0 + 0x49c0]       // t9
         t8 = halfword [sp + 0x24]
         a0 = halfword [v0 + 2]
         a1 = halfword [v0 + 4]
         a2 = , unsigned  byte [v0 + 0]
         a3 = , unsigned  byte [v0 + 1] // lo
         call 0x88217da8          // 0x88217da8(0x3904, 0x8009, 0x88, 0x1)
         [sp + 0x10] = t8
         goto 0x802a3714          // fcn.802af284-0xbb70
         ra = [sp + 0x1c]

    loc_0x802a3f40: // orphan
         a3 = 0x8821 << 16
         a3 -= 0x31d4
         a2 += 0x1784
         a1 += 0x16d0
         call 0x88005b60          // 0x88005b60(-1, 0x442f71dcfe117ad8, 0x178c, 0x8820ce2c)

    loc_0x802a3f54: // orphan
         a0 = 0 + 4
         ra = [sp + 0x14]         // lo
         sp += 0x18
         ret                      // lo
         

    loc_0x802a4df8: // orphan
         a1 = , signed  a1 >> 0x10
         t4 = , unsigned  byte [t3 + 8]
         t0 = t7 << 2
         a0 = , signed  a0 >> 0x10 // t9
         t5 = t4 << 2
         t6 = s6 + t5
         t8 = [t6 - 4]            // t9
         t9 = t8 + t0
         call 0x882129dc          // 0x882129dc(-1, 0xfffffe11, 0x8, -1)
         a2 = [t9 + 0]
         t1 = [s7 + 0]
         at = 0 + 0xd
         if                       // likely
         

    loc_0x802a4e30: // orphan
         call 0x8823243c          // 0x8823243c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xff            // s4
         goto 0x802a4e4c
         t2 = [s1 + 0]

    loc_0x802a4e40: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a4e28
         call 0x8823243c          // 0x8823243c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802af284 @ 0x802abdc0
         a0 = , unsigned  byte [sp + 0x5d]
         t2 = [s1 + 0]

    loc_0x802a4e4c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a4e38
         a0 = s2 << 0x10
         a1 = s3 << 0x10
         a1 = , signed  a1 >> 0x10 // t9

    loc_0x802a4f30: // orphan
         ra = [sp + 0x14]         // lo
         // CODE XREF from fcn.802a477c @ +0x798
         sp += 0x18
         ret                      // lo
         

    loc_0x802a506c: // orphan
         s3 = [s0 + 4]            // t9
         a0 = sp + 0x60
         call 0x88230d80          // 0x88230d80(0x178060, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x5e
         a0 = 0 + 4
         call 0x800496a4          // 0x800496a4(0x4, 0x17805e, 0x8, -1)
         a1 = 0 + 1               // lo
         v1 = halfword [sp + 0x60]
         v0 = halfword [s0 + 8]
         t6 = halfword [sp + 0x5e]
         at = , v1 < v0           // lo
         if                       // fcn.802af284-0xa188 // likely
         s7 = 0 - 1               // s2

    loc_0x802a50a0: // orphan
         unsigned , hi            // t6
         t7 = lo
         halfword [sp + 0x5e] = t7
         bnel v1, v0, 0x802a5100  // fcn.802af284-0xa184 // likely
         s7 = 0 - 1               // s2

    loc_0x802a50b4: // orphan
         // CODE XREF from fcn.802af284 @ 0x802abde0
         a0 = [s3 + 0]
         call 0x88201a74          // 0x88201a74(0x88013904, 0x442f71dcfe116408, 0x8, -1)
         a1 = [s3 + 4]
         a0 = [s3 + 0]
         a1 = [s3 + 4]

    loc_0x802a51dc: // orphan
         a2 = 0x8823 << 16
         a3 = 0x8823 << 16
         a3 += 0x2860
         a2 += 0x29a4
         // CODE XREF from fcn.802ab868 @ +0x580
         a1 += 0x28c0
         call 0x88005b60          // 0x88005b60(-1, 0x442f71dcfe118cc8, 0x882329a4, 0x88232860)
         a0 = 0 + 0xe
         ra = [sp + 0x14]         // lo
         sp += 0x18
         ret                      // lo
         

    loc_0x802a576c: // orphan
         [sp + 0x14] = ra
         a0 = 0 + 0x60
         call 0x800226c0          // 0x800226c0(0x60, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = t6
         t7 = [sp + 0x24]
         at = 0 + 8               // a2
         t8 = [t7 + 4]            // t9
         if                       // likely
         

    loc_0x802a5790: // orphan
         a3 = [t7 + 0]            // t9
         a0 = a3 + 8
         // CODE XREF from fcn.802ab868 @ +0x5ec
         t9 = , unsigned  halfword [a0 + 0x28]
         [sp + 0x20] = a0
         call 0x800619e8          // 0x800619e8(0x100000007, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x1e] = t9
         a0 = [sp + 0x20]
         t3 = , unsigned  halfword [sp + 0x1e]
         a1 = 0
         t0 = , unsigned  halfword [a0 + 0x26]
         t1 = , unsigned  halfword [a0 + 0x28]
         // CODE XREF from fcn.802ab868 @ +0x5f0
         t2 = t0 + t1
         t4 = t2 - t3
         call 0x88902e8c          // 0x88902e8c(0x7, 0x0, 0x8, -1)
         halfword [a0 + 0x26] = t4
         if                       // likely
         // CODE XREF from fcn.802ab868 @ +0x5f4
         a3 = [sp + 0x20]

    loc_0x802a57d4: // orphan
         a2 = 0x8800 << 16
         a2 = byte [a2 + 0x6868]  // s4
         a0 = sp + 0x18
         call 0x88902e4c          // 0x88902e4c(0x178018, 0x442f71dcfe116408, 0xff, -1)
         a1 = a3                  // s2
         if                       // unlikely
         t5 = 0 + 3

    loc_0x802a57e8: // orphan
         a2 = 0x8800 << 16
         a2 = byte [a2 + 0x6868]  // s4
         a0 = sp + 0x18
         call 0x88902e4c          // 0x88902e4c(0x178018, 0x442f71dcfe116408, 0xff, -1)
         a1 = a3                  // s2
         if                       // unlikely
         t5 = 0 + 3

    loc_0x802a57ec: // orphan
         t5 = 0 + 3

    loc_0x802a57f0: // orphan
         at = 0x8823 << 16
         goto 0x802a5848
         byte [at + 0x474e] = t5

    loc_0x802a57fc: // orphan
         call 0x8821c0b0          // 0x8821c0b0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         t6 = [sp + 0x24]

    loc_0x802a580c: // orphan
         t8 = [t6 + 4]            // t9
         at = 0 + 8               // a2
         a0 = 0x8823 << 16
         if                       // likely
         

    loc_0x802a5820: // orphan
         a0 = [a0 + 0x45f4]       // t9
         call 0x8822af00          // 0x8822af00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x3c
         goto 0x802a584c
         ra = [sp + 0x14]

    loc_0x802a5834: // orphan
         call 0x88001900          // 0x88001900(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = 0 + 1               // lo
         at = 0x8800 << 16

    loc_0x802a5844: // orphan
         [at + 0x68b4] = t7

    loc_0x802a5848: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a57f4
         ra = [sp + 0x14]

    loc_0x802a584c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802a582c
         sp += 0x28
         ret                      // ra
         

    loc_0x802a5c80: // orphan
         a1 = [a1 + 0x4620]       // t9
         call 0x882033b0          // 0x882033b0(-1, -1, 0x8, -1)
         a0 = [a0 + 0x45f4]       // t9
         t4 = [s0 + 4]            // t9
         at = 0 + 8               // a2
         if                       // unlikely
         

    loc_0x802a5c9c: // orphan
         a0 = [s0 + 0]
         call 0x800619e8          // 0x800619e8(0xeeccff, 0x442f71dcfe116408, 0x8, -1)
         a0 += 8
         v0 = [s0 + 4]            // t9
         at = 0 + 0x10
         if                       // unlikely
         at = 0 + 0x20            // k0

    loc_0x802a5cb8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.802ab868 @ +0x640
         at = 0 + 0x40

    loc_0x802a5cc0: // orphan
         if                       // unlikely
         at = 0 + 0x80

    loc_0x802a5cc8: // orphan
         if                       // unlikely
         at = 0 + 0x100

    loc_0x802a5cd0: // orphan
         // CODE XREF from fcn.802ab868 @ +0x644
         beql v0, at, 0x802a5d24  // unlikely
         v0 = [s0 + 0]

    loc_0x802a5cd8: // orphan
         goto 0x802a5d34
         

    loc_0x802a5ce0: // orphan
         t5 = [s0 + 0]
         t6 = , unsigned  halfword [t5 + 0x30]
         // CODE XREF from fcn.802ab868 @ +0x64c
         goto 0x802a5d34
         halfword [s0 + 0xe] = t6

    loc_0x802a5cf0: // orphan
         t7 = [s0 + 0]
         t8 = , unsigned  halfword [t7 + 0x32]
         goto 0x802a5d34
         halfword [s0 + 0xe] = t8

    loc_0x802a5d00: // orphan
         // CODE XREF from fcn.802ab868 @ +0x654
         t9 = [s0 + 0]
         t0 = , unsigned  halfword [t9 + 0x34]
         goto 0x802a5d34
         halfword [s0 + 0xe] = t0

    loc_0x802a5d10: // orphan
         t1 = [s0 + 0]
         t2 = , unsigned  halfword [t1 + 0x36]
         // CODE XREF from fcn.802ab868 @ +0x65c
         goto 0x802a5d34
         halfword [s0 + 0xe] = t2

    loc_0x802a5d24: // orphan
         t3 = , unsigned  halfword [v0 + 0x38]
         halfword [s0 + 0xe] = t3
         // CODE XREF from fcn.802ab868 @ +0x660
         t4 = , unsigned  halfword [v0 + 0x3a]
         halfword [s0 + 0x10] = t4

    loc_0x802a5d34: // orphan
         // XREFS: CODE 0x802a5cd8  CODE 0x802a5ce8  CODE 0x802a5cf8  
         // XREFS: CODE 0x802a5d08  CODE 0x802a5d18  CODE 0x802abec0  
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x63
         // CODE XREF from fcn.802ab868 @ +0x650
         a1 = 0x8823 << 16
         a2 = 0x8823 << 16
         // CODE XREF from fcn.802ab868 @ +0x648
         a3 = 0x8823 << 16
         a3 += 0x30e0
         a2 += 0x3330
         a1 += 0x31d8
         call 0x88005b60          // 0x88005b60(0x63, 0x882331d8, 0x88233330, 0x882330e0)
         a0 = 0 + 0x15
         at = 0x8801 << 16
         ra = [sp + 0x1c]
         [at - 0x10ac] = s0
         at = 0x8823 << 16
         t5 = 0 + 1               // lo
         s0 = [sp + 0x18]
         byte [at + 0x4746] = t5
         ret
         sp += 0x20

    loc_0x802a602c: // orphan
         lwl t1, -0x7272, a0      // t9
         s3 = , unsigned  byte [t4 - 0x6b6b] // s4
         // CODE XREF from fcn.802ab868 @ +0x688
         lwr k0, -0x645e, t4      // t9
         swl s0, -0x4c42, sp
         ll gp, -0x54f, fp

    loc_0x802a633c: // orphan
         lwl 0, 0x20fc, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20fc, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x20f8, at
         lwl 0, 0x25e8, at
         lwl 0, 0x2608, at
         lwl 0, 0x2628, at
         lwl 0, 0x264c, at
         lwl 0, 0x2670, at
         lwl 0, 0x2734, at
         lwl 0, 0x2734, at

    loc_0x802a63d8: // orphan
         lwl 0, 0x2780, at
         lwl 0, 0x2794, at
         lwl 0, 0x27a8, at
         
         
         // CODE XREF from fcn.802ab868 @ +0x6b0
         

    loc_0x802a650c: // orphan
         lwl 0, 0x594c, at
         lwl 0, 0x594c, at
         // CODE XREF from fcn.802ab868 @ +0x6b8
         lwl 0, 0x594c, at
         
         
         s3 = t3 + 0x2564
         
         s3 = t3 + 0x2564
         
         s3 = t3 + 0x2564

    loc_0x802a6534: // orphan
         
         
         t9 = t1 ^ 0
         t9 = t1 ^ 0x3900
         a0 = t3 + 0x2f25
         daddiu 0, 0, 0
         a0 = t3 + 0
         s3 = t3 + 0x2573
         
         lwl 0, -0x5ab0, at
         lwl 0, -0x66d4, at
         lwl 0, -0x65bc, at
         lwl 0, -0x63e0, at
         lwl 0, -0x6354, at
         lwl 0, -0x66d4, at
         lwl 0, -0x641c, at
         lwl 0, -0x64d0, at
         lwl 0, -0x6488, at
         lwl 0, -0x64ac, at
         lwl 0, -0x6464, at
         lwl 0, -0x6440, at
         lwl 0, -0x6248, at
         lwl 0, -0x62d8, at
         lwl 0, -0x6290, at
         lwl 0, -0x62b4, at
         lwl 0, -0x626c, at
         lwl 0, -0x5b7c, at
         lwl 0, -0x5c30, at
         lwl 0, -0x5be8, at
         lwl 0, -0x5c0c, at
         lwl 0, -0x5bc4, at
         lwl 0, -0x5ba0, at
         lwl 0, -0x4a94, at
         lwl 0, -0x4a7c, at
         lwl 0, -0x4a64, at
         lwl 0, -0x4a4c, at
         lwl 0, -0x4a34, at
         
         
         a0 = t3 + 0
         a0 = t3 + 0x2f25
         daddiu 0, 0, 0
         
         a0 = t3 + 0
         lwl at, 0x194c, at       // t9
         lwl at, 0x19a8, at       // t9
         lwl at, 0x1ae0, at       // t9
         lwl at, 0x1b58, at       // t9
         lwl at, 0x1c90, at       // t9
         
         
         a0 = t3 + 0x2f25
         daddiu 0, 0, 0

    loc_0x802a6608: // orphan
         s0 = t1 + 0x3564
         
         lwl at, 0x3c94, at       // t9
         lwl at, 0x3d38, at       // t9
         lwl at, 0x3c94, at       // t9
         lwl at, 0x3dc4, at       // t9
         lwl at, 0x3e20, at       // t9
         lwl at, 0x3ef0, at       // t9
         lwl at, 0x42cc, at       // t9
         lwl at, 0x41c8, at       // t9
         lwl at, 0x42cc, at       // t9
         lwl at, 0x41d8, at       // t9
         lwl at, 0x3ef0, at       // t9
         lwl at, 0x3ef0, at       // t9
         lwl at, 0x46b4, at       // t9
         lwl at, 0x4b94, at       // t9
         lwl at, 0x4d14, at       // t9
         // CODE XREF from fcn.802ab868 @ +0x6d0
         lwl at, 0x4e94, at       // t9
         lwl at, 0x4ffc, at       // t9
         lwl at, 0x4810, at       // t9
         lwl at, 0x48f4, at       // t9
         lwl at, 0x4998, at       // t9
         lwl at, 0x52dc, at       // t9

    loc_0x802a6664: // orphan
         lwl at, 0x52dc, at       // t9
         lwl at, 0x4a14, at       // t9
         lwl at, 0x4ad4, at       // t9
         
         t9 = t1 ^ 0
         t9 = t1 ^ 0x3900
         
         s0 = t1 + 0x3564
         
         mfc1 t1, f16

    loc_0x802a6724: // orphan
         lwl at, -0x4010, at      // t9
         lwl at, -0x4010, at      // t9
         lwl at, -0x4010, at      // t9
         lwl at, -0x4010, at      // t9
         lwl at, -0x4010, at      // t9

    loc_0x802a68c8: // orphan
         lwl at, -0x5b4, at       // t9
         lwl at, -0x4c4, at       // t9
         lwl at, -0x4c4, at       // t9
         lwl at, -0x4c4, at       // t9
         lwl at, -0x4c4, at       // t9
         lwl at, -0x2a8, at       // t9
         lwl at, -0x2a8, at       // t9
         lwl v0, 0x3ec, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3ec, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         // CODE XREF from fcn.802ab868 @ +0x6e4
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x394, at        // t9
         lwl v0, 0x3ec, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3d8, at        // t9
         lwl v0, 0x3bc, at        // t9
         lwl v0, 0x550, at        // t9
         lwl v0, 0x550, at        // t9
         lwl v0, 0x550, at        // t9
         lwl v0, 0x550, at        // t9
         lwl v0, 0x564, at        // t9
         lwl v0, 0x564, at        // t9
         lwl v0, 0x70c, at        // t9
         lwl v0, 0x70c, at        // t9
         lwl v0, 0x70c, at        // t9
         lwl v0, 0x7d0, at        // t9
         lwl v0, 0x894, at        // t9
         lwl v0, 0x894, at        // t9
         
         
         
         lwl v0, 0x12ec, at       // t9
         lwl v0, 0x1354, at       // t9
         lwl v0, 0x13b8, at       // t9
         lwl v0, 0x13d0, at       // t9
         lwl v0, 0x13f0, at       // t9
         lwl v0, 0x1408, at       // t9
         lwl v0, 0x14d8, at       // t9
         lwl v0, 0x14f8, at       // t9
         lwl v0, 0x1518, at       // t9
         
         
         
         lwl v0, 0x1cb8, at       // t9
         lwl v0, 0x1ccc, at       // t9
         lwl v0, 0x1ce0, at       // t9
         lwl v0, 0x1cf4, at       // t9
         lwl v0, 0x1d08, at       // t9
         lwl v0, 0x1d1c, at       // t9
         lwl v0, 0x1d54, at       // t9
         lwl v0, 0x1d68, at       // t9
         lwl v0, 0x1e50, at       // t9
         lwl v0, 0x1e64, at       // t9
         lwl v0, 0x1e78, at       // t9
         lwl v0, 0x1e8c, at       // t9
         lwl v0, 0x1ebc, at       // t9
         lwl v0, 0x229c, at       // t9
         lwl v0, 0x22b8, at       // t9
         lwl v0, 0x22d4, at       // t9
         lwl v0, 0x2310, at       // t9
         lwl v0, 0x2390, at       // t9
         
         
         
         
         
         
         a0 = t3 + 0
         
         
         
         a0 = t3 + 0
         
         
         
         a0 = t3 + 0x2f25
         daddiu 0, 0, 0
         
         
         a0 = t3 + 0x2f25
         daddiu 0, 0, 0
         
         

    loc_0x802a6f4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a6f58: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a6f68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a6f74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a6f80: // orphan
         if                       // fcn.80bb29c4-0x904110 // unlikely
         if                       // unlikely

    loc_0x802a6f8c: // orphan
         
         
         
         if                       // fcn.802cb7dc-0x1ca50 // unlikely
         if                       // unlikely

    loc_0x802a6fa4: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802af284+0x4c // unlikely
         if                       // fcn.802af284+0x70 // unlikely

    loc_0x802a6fd8: // orphan
         if                       // unlikely
         

    loc_0x802a6fe0: // orphan
         
         if                       // fcn.802af518+0x130 // unlikely
         if                       // fcn.802af518+0x1e4 // unlikely

    loc_0x802a6ff0: // orphan
         if                       // fcn.802af804+0xf0 // unlikely
         if                       // fcn.802af518+0x1230 // unlikely

    loc_0x802a6ff4: // orphan
         if                       // fcn.802af804+0xf0 // unlikely
         if                       // fcn.802af518+0x1230 // unlikely

    loc_0x802a6ffc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7000: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7008: // orphan
         if                       // unlikely
         

    loc_0x802a700c: // orphan
         if                       // unlikely
         

    loc_0x802a7010: // orphan
         
         
         
         if                       // fcn.802af518+0x1648 // unlikely
         if                       // unlikely

    loc_0x802a7028: // orphan
         if                       // unlikely
         

    loc_0x802a7030: // orphan
         if                       // unlikely
         

    loc_0x802a7038: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x802a7050: // orphan
         
         
         
         
         
         

    loc_0x802a7068: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7074: // orphan
         
         
         if                       // fcn.802af518+0x1e28 // unlikely
         if                       // unlikely

    loc_0x802a7088: // orphan
         
         if                       // fcn.802af518+0x1f18 // unlikely
         if                       // unlikely

    loc_0x802a7098: // orphan
         // CODE XREF from fcn.802ab868 @ +0x75c
         
         
         
         if                       // fcn.802b14f0+0x1d8 // unlikely
         if                       // fcn.802b14f0+0x1fc // unlikely

    loc_0x802a70b0: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802af804+0x35c0 // unlikely
         if                       // unlikely

    loc_0x802a712c: // orphan
         
         
         
         if                       // fcn.802b30a0-0x74 // unlikely
         if                       // fcn.802b30a0+0xe0 // unlikely

    loc_0x802a7144: // orphan
         
         
         
         
         
         if                       // fcn.802b30a0+0x39c // unlikely
         if                       // fcn.802b30a0+0x480 // unlikely

    loc_0x802a7164: // orphan
         if                       // fcn.802b30a0+0x648 // unlikely
         if                       // fcn.802af804+0x3fc8 // unlikely

    loc_0x802a7170: // orphan
         if                       // fcn.802af804+0x4190 // unlikely
         if                       // fcn.802af804+0x43a4 // unlikely

    loc_0x802a717c: // orphan
         if                       // fcn.802af804+0x446c // unlikely
         

    loc_0x802a7184: // orphan
         if                       // fcn.802af804+0x4534 // unlikely
         

    loc_0x802a718c: // orphan
         if                       // fcn.802af804+0x45fc // unlikely
         

    loc_0x802a7194: // orphan
         if                       // fcn.802af804+0x46c4 // unlikely
         

    loc_0x802a719c: // orphan
         if                       // fcn.802af804+0x478c // unlikely
         

    loc_0x802a71a4: // orphan
         if                       // fcn.802af804+0x48c4 // unlikely
         

    loc_0x802a71ac: // orphan
         if                       // fcn.802af804+0x493c // unlikely
         if                       // fcn.802af804+0x49b0 // unlikely

    loc_0x802a71b8: // orphan
         if                       // fcn.802af804+0x4a98 // unlikely
         if                       // fcn.802b431c+0x74 // unlikely

    loc_0x802a71c4: // orphan
         if                       // fcn.802b431c+0x25c // unlikely
         if                       // fcn.802b431c+0x350 // unlikely

    loc_0x802a71d0: // orphan
         

    loc_0x802a71d4: // orphan
         
         
         
         
         
         if                       // fcn.802b431c+0x810 // unlikely
         if                       // fcn.802b431c+0x9b4 // unlikely

    loc_0x802a71f4: // orphan
         
         if                       // fcn.802b431c+0xac0 // unlikely
         if                       // unlikely

    loc_0x802a7204: // orphan
         if                       // fcn.802b431c+0xc2c // unlikely
         if                       // fcn.802b431c+0xcd0 // unlikely

    loc_0x802a7210: // orphan
         if                       // fcn.802b431c+0xd08 // unlikely
         if                       // fcn.802b431c+0xd1c // unlikely

    loc_0x802a721c: // orphan
         if                       // fcn.802b431c+0xd74 // unlikely
         if                       // fcn.802b431c+0xda8 // unlikely

    loc_0x802a7228: // orphan
         if                       // fcn.802b431c+0xda0 // unlikely
         

    loc_0x802a7230: // orphan
         
         
         
         
         
         
         
         
         if                       // fcn.802b431c+0x1218 // unlikely
         

    loc_0x802a7258: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7264: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7270: // orphan
         if                       // fcn.802af804+0x63d0 // unlikely
         // CODE XREF from fcn.802ab868 @ +0x778
         if                       // fcn.802af804+0x63e4 // unlikely

    loc_0x802a727c: // orphan
         if                       // fcn.802af804+0x647c // unlikely
         if                       // fcn.802af804+0x64c0 // unlikely

    loc_0x802a7288: // orphan
         if                       // fcn.802af804+0x6528 // unlikely
         

    loc_0x802a7290: // orphan
         
         
         
         if                       // fcn.802af804+0x6c4c // unlikely
         if                       // fcn.802af804+0x6c90 // unlikely

    loc_0x802a72a8: // orphan
         if                       // fcn.802af804+0x6e68 // unlikely
         

    loc_0x802a72b0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a72c0: // orphan
         if                       // fcn.802b6c60+0x1e4 // unlikely
         if                       // unlikely

    loc_0x802a72cc: // orphan
         
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x77c
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7314: // orphan
         
         
         // CODE XREF from fcn.802ab868 @ +0x780
         
         
         if                       // fcn.802cbbb0-0x141c8 // unlikely
         if                       // unlikely

    loc_0x802a7330: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a73dc: // orphan
         
         if                       // fcn.802b889c+0x48 // unlikely
         if                       // fcn.802b889c+0x9c // unlikely

    loc_0x802a73ec: // orphan
         // CODE XREF from fcn.802ab868 @ +0x790
         if                       // fcn.802b889c+0x94 // unlikely
         

    loc_0x802a73f4: // orphan
         
         if                       // fcn.802b889c+0x30 // unlikely
         if                       // fcn.802b889c+0x44 // unlikely

    loc_0x802a7404: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.82bea63c-0x29310ec // unlikely
         // CODE XREF from fcn.802ab868 @ +0x794
         if                       // unlikely

    loc_0x802a7448: // orphan
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x798
         
         
         
         if                       // fcn.82bea63c-0x2930058 // unlikely
         if                       // fcn.82bea63c-0x2930044 // unlikely

    loc_0x802a748c: // orphan
         if                       // fcn.802af518+0xb658 // unlikely
         if                       // fcn.82bea63c-0x292fab8 // unlikely

    loc_0x802a7498: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a74ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a74b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a74c4: // orphan
         if                       // fcn.82bea63c-0x292f834 // unlikely
         if                       // fcn.82bea63c-0x292f7f0 // unlikely

    loc_0x802a74d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a74dc: // orphan
         if                       // fcn.802baf28+0x38 // unlikely
         if                       // fcn.802baf28+0x5c // unlikely

    loc_0x802a74e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a74f4: // orphan
         
         if                       // unlikely
         

    loc_0x802a7500: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7510: // orphan
         if                       // fcn.802bb2f4 // unlikely
         // CODE XREF from fcn.802ab868 @ +0x7a8
         if                       // fcn.802bb2f4+0x14 // unlikely

    loc_0x802a751c: // orphan
         if                       // fcn.802bb2f4+0x2c // unlikely
         if                       // fcn.802bb2f4+0x40 // unlikely

    loc_0x802a7528: // orphan
         if                       // fcn.802bb2f4+0x88 // unlikely
         if                       // fcn.802bb2f4+0x9c // unlikely

    loc_0x802a7534: // orphan
         if                       // fcn.802bb2f4+0x104 // unlikely
         if                       // unlikely

    loc_0x802a7540: // orphan
         if                       // unlikely
         

    loc_0x802a7548: // orphan
         
         // CODE XREF from fcn.802ab868 @ +0x7b0
         if                       // fcn.802cbbfc-0x1071c // unlikely
         if                       // fcn.802cbbfc-0x10708 // unlikely

    loc_0x802a7558: // orphan
         if                       // fcn.802cbbfc-0x106b0 // unlikely
         if                       // fcn.802cbbfc-0x1066c // unlikely

    loc_0x802a7564: // orphan
         if                       // fcn.802afdb0+0xba48 // unlikely
         if                       // fcn.802afdb0+0xbadc // unlikely

    loc_0x802a7570: // orphan
         
         if                       // fcn.802afdb0+0xbb28 // unlikely
         if                       // fcn.802afdb0+0xbb3c // unlikely

    loc_0x802a7580: // orphan
         if                       // fcn.802afdb0+0xbb74 // unlikely
         if                       // fcn.802afdb0+0xbbb8 // unlikely

    loc_0x802a7588: // orphan
         if                       // fcn.802afdb0+0xbbcc // unlikely
         

    loc_0x802a758c: // orphan
         

    loc_0x802a7590: // orphan
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x7b8
         if                       // fcn.802afdb0+0xc3f8 // unlikely
         if                       // unlikely

    loc_0x802a75b0: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x7bc
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x7c4
         
         
         
         if                       // fcn.802afdb0+0xc7d0 // unlikely
         if                       // fcn.802afdb0+0xc7e4 // unlikely

    loc_0x802a75f8: // orphan
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.802ab868 @ +0x7cc
         if                       // unlikely

    loc_0x802a7610: // orphan
         
         if                       // fcn.802cbbfc-0xee84 // unlikely
         if                       // unlikely

    loc_0x802a7620: // orphan
         if                       // unlikely
         

    loc_0x802a7628: // orphan
         
         // CODE XREF from fcn.802ab868 @ +0x7d0
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7638: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x7d4
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7674: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x7d4
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a767c: // orphan
         
         
         
         if                       // fcn.802afdb0+0xda5c // unlikely
         if                       // fcn.802afdb0+0xda70 // unlikely

    loc_0x802a7694: // orphan
         if                       // unlikely
         

    loc_0x802a769c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a76a8: // orphan
         if                       // unlikely
         

    loc_0x802a76b0: // orphan
         
         
         if                       // fcn.82bea63c-0x292cbd0 // unlikely
         if                       // fcn.802afdb0+0xdd20 // unlikely

    loc_0x802a76c4: // orphan
         // CODE XREF from fcn.802ab868 @ +0x7e8
         if                       // unlikely
         if                       // unlikely

    loc_0x802a76d0: // orphan
         if                       // fcn.802afdb0+0xde24 // unlikely
         

    loc_0x802a76d8: // orphan
         // CODE XREF from fcn.802ab868 @ +0x7ec
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a76ec: // orphan
         
         
         if                       // fcn.82bea63c-0x292c6e4 // unlikely
         if                       // unlikely

    loc_0x802a7700: // orphan
         if                       // fcn.82bea63c-0x292c788 // unlikely
         

    loc_0x802a7708: // orphan
         
         
         
         
         
         
         
         
         if                       // fcn.82bea63c-0x292c370 // unlikely
         if                       // fcn.82bea63c-0x292c35c // unlikely

    loc_0x802a7734: // orphan
         
         
         if                       // fcn.82bea63c-0x292c2ac // unlikely
         if                       // fcn.82bea63c-0x292c298 // unlikely

    loc_0x802a7748: // orphan
         if                       // fcn.82bea63c-0x292c210 // unlikely
         if                       // fcn.82bea63c-0x292c1ec // unlikely

    loc_0x802a7754: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7770: // orphan
         if                       // fcn.82bea63c-0x292c008 // unlikely
         

    loc_0x802a7778: // orphan
         if                       // fcn.82bea63c-0x292bfe0 // unlikely
         if                       // fcn.82bea63c-0x292bfcc // unlikely

    loc_0x802a7784: // orphan
         if                       // fcn.82bea63c-0x292bed4 // unlikely
         if                       // fcn.82bea63c-0x292bf60 // unlikely

    loc_0x802a7790: // orphan
         if                       // fcn.82bea63c-0x292bf48 // unlikely
         // CODE XREF from fcn.802ab868 @ +0x7f8
         if                       // fcn.82bea63c-0x292bee4 // unlikely

    loc_0x802a7794: // orphan
         if                       // fcn.82bea63c-0x292bf48 // unlikely
         // CODE XREF from fcn.802ab868 @ +0x7f8
         if                       // fcn.82bea63c-0x292bee4 // unlikely

    loc_0x802a77a0: // orphan
         
         
         // CODE XREF from fcn.802ab868 @ +0x7fc
         
         
         if                       // fcn.82bea63c-0x292b898 // unlikely
         if                       // fcn.82bea63c-0x292b884 // unlikely

    loc_0x802a77bc: // orphan
         if                       // fcn.802ac294+0x12bfc // unlikely
         if                       // fcn.82bea63c-0x292b748 // unlikely

    loc_0x802a77c8: // orphan
         
         if                       // fcn.82bea63c-0x292b69c // unlikely
         if                       // unlikely

    loc_0x802a77d8: // orphan
         if                       // unlikely
         

    loc_0x802a77e0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a77f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a77fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a780c: // orphan
         
         // CODE XREF from fcn.802ab868 @ +0x804
         if                       // fcn.802bf404-0x20 // unlikely
         if                       // fcn.802bf404-0xc // unlikely

    loc_0x802a781c: // orphan
         if                       // fcn.802bf404+0x3c // unlikely
         if                       // fcn.802bf404+0x50 // unlikely

    loc_0x802a7828: // orphan
         if                       // fcn.802bf404+0x98 // unlikely
         if                       // fcn.802bf404+0xac // unlikely

    loc_0x802a7834: // orphan
         if                       // fcn.802bf404+0xf4 // unlikely
         if                       // fcn.802bf404+0x108 // unlikely

    loc_0x802a7840: // orphan
         if                       // fcn.802bf404+0x150 // unlikely
         if                       // fcn.802bf404+0x164 // unlikely

    loc_0x802a784c: // orphan
         if                       // fcn.802bf404+0x1ac // unlikely
         if                       // fcn.802bf404+0x1c0 // unlikely

    loc_0x802a7858: // orphan
         if                       // fcn.802bf404+0x208 // unlikely
         if                       // fcn.802bf404+0x21c // unlikely

    loc_0x802a7864: // orphan
         if                       // fcn.802bf404+0x264 // unlikely
         if                       // fcn.802bf404+0x278 // unlikely

    loc_0x802a7870: // orphan
         if                       // fcn.802bf404+0x2c0 // unlikely
         if                       // fcn.802bf404+0x2d4 // unlikely

    loc_0x802a787c: // orphan
         if                       // fcn.802bf404+0x31c // unlikely
         if                       // fcn.802bf404+0x330 // unlikely

    loc_0x802a7888: // orphan
         if                       // fcn.802bf404+0x378 // unlikely
         if                       // fcn.802bf404+0x38c // unlikely

    loc_0x802a7894: // orphan
         if                       // fcn.802bf404+0x3d4 // unlikely
         if                       // unlikely

    loc_0x802a78a0: // orphan
         
         
         if                       // fcn.802c07c8+0x44 // unlikely
         if                       // fcn.802c07c8+0x78 // unlikely

    loc_0x802a78b4: // orphan
         if                       // fcn.802c07c8+0x90 // unlikely
         if                       // fcn.802c07c8+0xe4 // unlikely

    loc_0x802a78c0: // orphan
         if                       // unlikely
         if                       // fcn.802c07c8+0x220 // unlikely

    loc_0x802a78cc: // orphan
         // CODE XREF from fcn.802ab868 @ +0x810
         if                       // fcn.802c07c8+0x298 // unlikely
         

    loc_0x802a78d4: // orphan
         if                       // fcn.802c07c8+0x2f0 // unlikely
         if                       // fcn.802c07c8+0x304 // unlikely

    loc_0x802a78e0: // orphan
         // CODE XREF from fcn.802ab868 @ +0x814
         if                       // fcn.802c07c8+0x33c // unlikely
         if                       // fcn.802c07c8+0x350 // unlikely

    loc_0x802a78ec: // orphan
         if                       // fcn.802c07c8+0x388 // unlikely
         if                       // fcn.802c07c8+0x3ac // unlikely

    loc_0x802a78f8: // orphan
         
         

    loc_0x802a7900: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7934: // orphan
         if                       // fcn.802c104c+0xc // unlikely
         if                       // fcn.802c104c+0x70 // unlikely

    loc_0x802a7940: // orphan
         if                       // fcn.802c104c+0xb8 // unlikely
         if                       // unlikely

    loc_0x802a794c: // orphan
         if                       // fcn.802bc8fc+0x4864 // unlikely
         if                       // fcn.802bc8fc+0x4898 // unlikely

    loc_0x802a7958: // orphan
         if                       // unlikely
         if                       // fcn.802bc8fc+0x48f4 // unlikely

    loc_0x802a7964: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7974: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a799c: // orphan
         
         
         
         
         
         
         if                       // fcn.802bc8fc+0x4e5c // unlikely
         

    loc_0x802a79bc: // orphan
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802c192c+0x1c // unlikely
         if                       // unlikely

    loc_0x802a79f0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7a08: // orphan
         
         if                       // unlikely
         

    loc_0x802a7a14: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7a2c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802c307c+0x4 // unlikely
         

    loc_0x802a7a64: // orphan
         
         
         
         // CODE XREF from fcn.802ab868 @ +0x824
         
         
         if                       // fcn.802c30cc+0x60 // unlikely
         if                       // fcn.802c30cc+0x74 // unlikely

    loc_0x802a7a84: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802c3bdc+0x84 // unlikely
         

    loc_0x802a7ac4: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802a7b54: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x802a7b68: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7bcc: // orphan
         
         if                       // fcn.802af284+0x16fb0 // unlikely
         if                       // fcn.802b9cc8+0xc5c0 // unlikely

    loc_0x802a7bdc: // orphan
         
         if                       // unlikely
         if                       // fcn.802af284+0x17214 // unlikely

    loc_0x802a7c30: // orphan
         if                       // fcn.82bea63c-0x2923108 // unlikely
         

    loc_0x802a7c38: // orphan
         
         
         
         if                       // unlikely
         if                       // fcn.82bea63c-0x2922e70 // unlikely

    loc_0x802a7c50: // orphan
         
         
         if                       // fcn.802af284+0x185b8 // unlikely
         if                       // unlikely

    loc_0x802a7c64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7c70: // orphan
         if                       // fcn.82bea63c-0x2922c68 // unlikely
         if                       // unlikely

    loc_0x802a7c7c: // orphan
         if                       // fcn.80287b20+0x1c0 // unlikely
         if                       // unlikely

    loc_0x802a7c88: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7c98: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7cb4: // orphan
         if                       // unlikely
         

    loc_0x802a7cbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7cc8: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7ce4: // orphan
         
         if                       // fcn.80288e1c+0x50 // unlikely
         if                       // unlikely

    loc_0x802a7cf4: // orphan
         
         if                       // fcn.80289078+0x34 // unlikely
         if                       // fcn.80289078+0x78 // unlikely

    loc_0x802a7d04: // orphan
         if                       // fcn.80289078+0xf0 // unlikely
         if                       // fcn.80289078+0x134 // unlikely

    loc_0x802a7d10: // orphan
         if                       // fcn.80289078+0x1ac // unlikely
         if                       // fcn.80289078+0x1f0 // unlikely

    loc_0x802a7d1c: // orphan
         if                       // fcn.80289078+0x268 // unlikely
         if                       // fcn.80289078+0x27c // unlikely

    loc_0x802a7d28: // orphan
         if                       // fcn.80289078+0x2e4 // unlikely
         if                       // fcn.80289078+0x2f8 // unlikely

    loc_0x802a7d34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802a7d40: // orphan
         

    loc_0x802a821c: // orphan
         if                       // unlikely
         

    loc_0x802a91c8: // orphan
           // CALL XREF from fcn.80becacc @ +0x45c
         if                       // fcn.80bb29c4-0x904268 // likely
         if                       // likely

    loc_0x802a91d4: // orphan
         if                       // fcn.80bb29c4-0x9041ec // likely
         at = halfword [t0 + 0x1584]

    loc_0x802a91dc: // orphan
         at = halfword [s0 + 0x1594]
         if                       // fcn.80bb29c4-0x904050 // likely
         if                       // fcn.80bb29c4-0x903f7c // likely

    loc_0x802a91ec: // orphan
         at = halfword [s0 + 0x162c]
         at = halfword [t0 + 0x1648]
         at = halfword [s0 + 0x1650]
         at = halfword [0 + 0x1668]
         if                       // likely
         if                       // likely

    loc_0x802a9208: // orphan
         at = halfword [t0 + 0x1694]
         at = halfword [s0 + 0x1698]
         at = halfword [0 + 0x16b8]
         if                       // likely
         if                       // likely

    loc_0x802a9220: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a922c: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9238: // orphan
         at = halfword [0 + 0x171c]
         if                       // likely
         if                       // likely

    loc_0x802a9248: // orphan
         at = halfword [0 + 0x1740]
         at = halfword [0 + 0x176c]
         if                       // likely
         if                       // likely

    loc_0x802a925c: // orphan
         at = halfword [s0 + 0x1780]
         at = halfword [0 + 0x1788]
         if                       // likely
         at = halfword [t0 + 0x17a8]

    loc_0x802a926c: // orphan
         at = halfword [s0 + 0x17ac]
         if                       // likely
         if                       // likely

    loc_0x802a927c: // orphan
         if                       // likely
         at = halfword [0 + 0x1870]

    loc_0x802a9284: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9290: // orphan
         at = halfword [t0 + 0x1894]
         at = halfword [s0 + 0x1898]
         at = halfword [0 + 0x189c]
         if                       // likely
         if                       // fcn.802af518+0x28c // likely

    loc_0x802a92a8: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a92b4: // orphan
         at = halfword [0 + 0x1980]
         if                       // fcn.802af804+0xd8 // likely
         if                       // likely

    loc_0x802a92c4: // orphan
         at = halfword [0 + 0x19b8]
         if                       // fcn.802af804+0x1c8 // likely
         if                       // fcn.802af804+0x1dc // likely

    loc_0x802a92d4: // orphan
         if                       // likely
         at = halfword [0 + 0x19ec]

    loc_0x802a92dc: // orphan
         if                       // fcn.802af804+0x2ac // likely
         if                       // likely

    loc_0x802a92e8: // orphan
         if                       // fcn.802af804+0x328 // likely
         at = halfword [0 + 0x1a48]

    loc_0x802a92f0: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a92fc: // orphan
         at = halfword [0 + 0x1a6c]
         if                       // likely
         if                       // fcn.802af518+0x7d0 // likely

    loc_0x802a930c: // orphan
         at = halfword [0 + 0x1a90]
         if                       // fcn.802af518+0x85c // likely
         if                       // fcn.802af518+0x870 // likely

    loc_0x802a931c: // orphan
         at = halfword [0 + 0x1ab4]
         if                       // fcn.802afdb0+0x94 // likely
         if                       // fcn.802afdb0+0xa8 // likely

    loc_0x802a932c: // orphan
         if                       // likely
         at = halfword [0 + 0x1af0]

    loc_0x802a9334: // orphan
         if                       // fcn.802afdb0+0x168 // likely
         if                       // likely

    loc_0x802a9340: // orphan
         at = halfword [0 + 0x1b14]
         if                       // likely
         if                       // likely

    loc_0x802a9350: // orphan
         if                       // likely
         at = halfword [0 + 0x1b68]

    loc_0x802a9358: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9364: // orphan
         if                       // likely
         at = halfword [0 + 0x1b9c]

    loc_0x802a936c: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9378: // orphan
         if                       // likely
         at = halfword [0 + 0x1bf8]

    loc_0x802a9380: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a938c: // orphan
         at = halfword [0 + 0x1c1c]
         if                       // likely
         if                       // likely

    loc_0x802a939c: // orphan
         at = halfword [0 + 0x1c40]
         if                       // likely
         if                       // likely

    loc_0x802a93ac: // orphan
         at = halfword [0 + 0x1c64]
         if                       // likely
         if                       // likely

    loc_0x802a93bc: // orphan
         if                       // likely
         at = halfword [0 + 0x1c90]

    loc_0x802a93c4: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a93d0: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a93dc: // orphan
         at = halfword [0 + 0x1cd8]
         if                       // likely
         if                       // likely

    loc_0x802a93ec: // orphan
         at = halfword [0 + 0x1d18]
         if                       // fcn.802af284+0x70 // likely
         if                       // fcn.802b0870+0x28 // likely

    loc_0x802a93fc: // orphan
         if                       // fcn.802ac294+0x484c // likely
         if                       // likely

    loc_0x802a9408: // orphan
         if                       // fcn.802af518+0x1644 // likely
         at = halfword [0 + 0x1e64]

    loc_0x802a9410: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a941c: // orphan
         at = halfword [0 + 0x1e88]
         if                       // likely
         if                       // likely

    loc_0x802a942c: // orphan
         if                       // likely
         at = halfword [0 + 0x1ec4]

    loc_0x802a9434: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9440: // orphan
         if                       // likely
         at = halfword [0 + 0x1ef8]

    loc_0x802a9448: // orphan
         if                       // likely
         at = halfword [0 + 0x1f30]

    loc_0x802a9450: // orphan
         if                       // fcn.802cb7dc-0x1c458 // likely
         if                       // likely

    loc_0x802a945c: // orphan
         if                       // fcn.802af518+0x1e88 // likely
         if                       // fcn.802af518+0x1eac // likely

    loc_0x802a9468: // orphan
         at = halfword [0 + 0x2094]
         if                       // fcn.802b14f0+0x200 // likely
         if                       // fcn.802b14f0+0x214 // likely

    loc_0x802a9478: // orphan
         if                       // fcn.802b14f0+0x26c // likely
         if                       // fcn.802b14f0+0x290 // likely

    loc_0x802a9484: // orphan
         if                       // likely
         at = halfword [0 + 0x20e8]

    loc_0x802a948c: // orphan
         if                       // fcn.802b14f0+0x360 // likely
         if                       // likely

    loc_0x802a9498: // orphan
         if                       // likely
         at = halfword [0 + 0x211c]

    loc_0x802a94a0: // orphan
         if                       // fcn.802b14f0+0x454 // likely
         at = halfword [0 + 0x2154]

    loc_0x802a94a8: // orphan
         if                       // likely
         if                       // fcn.802af518+0x2528 // likely

    loc_0x802a94b4: // orphan
         if                       // fcn.802af518+0x2770 // likely
         if                       // fcn.802af518+0x2784 // likely

    loc_0x802a94c0: // orphan
         if                       // fcn.802af518+0x27ec // likely
         at = halfword [0 + 0x22a0]

    loc_0x802a94c8: // orphan
         if                       // fcn.802af518+0x2a54 // likely
         if                       // fcn.802af518+0x2a68 // likely

    loc_0x802a94d4: // orphan
         if                       // fcn.802af518+0x2ad0 // likely
         at = halfword [0 + 0x22fc]

    loc_0x802a94dc: // orphan
         if                       // fcn.802af518+0x2bd8 // likely
         if                       // fcn.802af518+0x2bec // likely

    loc_0x802a94e8: // orphan
         at = halfword [0 + 0x2320]
         if                       // fcn.802af518+0x2c78 // likely
         if                       // fcn.802af518+0x2c8c // likely

    loc_0x802a94f8: // orphan
         at = halfword [0 + 0x2344]
         if                       // fcn.802af518+0x2d18 // likely
         if                       // fcn.802af518+0x2d2c // likely

    loc_0x802a9508: // orphan
         at = halfword [0 + 0x2368]
         if                       // fcn.802b14f0+0xdf0 // likely
         if                       // fcn.802b14f0+0xe04 // likely

    loc_0x802a9518: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9524: // orphan
         if                       // fcn.802af804+0x2c14 // likely
         if                       // fcn.802af804+0x2c28 // likely

    loc_0x802a9530: // orphan
         if                       // likely
         at = halfword [0 + 0x23e8]

    loc_0x802a9538: // orphan
         if                       // likely
         at = halfword [0 + 0x2420]

    loc_0x802a953c: // orphan
         if                       // likely
         at = halfword [0 + 0x2420]

    loc_0x802a9540: // orphan
         if                       // fcn.802af804+0x2de0 // likely
         if                       // fcn.802af804+0x2e44 // likely

    loc_0x802a954c: // orphan
         if                       // fcn.802af804+0x2f5c // likely
         if                       // fcn.802af804+0x2f70 // likely

    loc_0x802a9558: // orphan
         if                       // fcn.802af804+0x2fb8 // likely
         if                       // fcn.802af804+0x30bc // likely

    loc_0x802a9564: // orphan
         if                       // fcn.802af804+0x31d4 // likely
         if                       // fcn.802af804+0x31e8 // likely

    loc_0x802a9570: // orphan
         if                       // fcn.802af804+0x3320 // likely
         if                       // fcn.802af804+0x3334 // likely

    loc_0x802a957c: // orphan
         if                       // fcn.802af804+0x34bc // likely
         if                       // fcn.802af804+0x34e0 // likely

    loc_0x802a9584: // orphan
         at = halfword [t0 + 0x25ec]

    loc_0x802a9588: // orphan
         at = halfword [s0 + 0x25f0]
         at = halfword [t0 + 0x2694]
         at = halfword [s0 + 0x2698]
         if                       // fcn.802b30a0-0xf8 // likely
         if                       // fcn.802b30a0-0x74 // likely

    loc_0x802a95a0: // orphan
         if                       // fcn.802b30a0+0x2d4 // likely
         if                       // fcn.802b30a0+0x2e8 // likely

    loc_0x802a95b0: // orphan
         if                       // fcn.802b30a0+0x5d4 // likely
         at = halfword [0 + 0x29f4]

    loc_0x802a95b8: // orphan
         at = halfword [0 + 0x29fc]
         at = halfword [t0 + 0x2a04]
         at = halfword [s0 + 0x2a10]
         at = halfword [0 + 0x2a1c]
         at = halfword [0 + 0x2a24]
         at = halfword [0 + 0x2a54]
         if                       // fcn.802af804+0x4770 // likely
         if                       // fcn.802af804+0x4784 // likely

    loc_0x802a95dc: // orphan
         if                       // fcn.802af804+0x486c // likely
         if                       // fcn.802af804+0x4890 // likely

    loc_0x802a95e8: // orphan
         at = halfword [s0 + 0x2ac4]
         if                       // fcn.802b431c-0x2c // likely
         if                       // fcn.802b431c+0x88 // likely

    loc_0x802a95f8: // orphan
         at = halfword [0 + 0x2c80]
         at = halfword [0 + 0x2ca8]
         at = halfword [0 + 0x2cb0]
         at = halfword [t0 + 0x2cc0]
         at = halfword [s0 + 0x2cc8]
         at = halfword [0 + 0x2cc4]
         at = halfword [0 + 0x2cd4]
         at = halfword [0 + 0x2cdc]
         at = halfword [0 + 0x2ce8]
         at = halfword [0 + 0x2cf8]
         at = halfword [0 + 0x2d08]
         at = halfword [0 + 0x2d18]
         if                       // fcn.802b4aa4+0x28 // likely
         at = halfword [0 + 0x2d40]

    loc_0x802a9630: // orphan
         if                       // fcn.802b431c+0x848 // likely
         if                       // fcn.802b431c+0x8ec // likely

    loc_0x802a963c: // orphan
         at = halfword [0 + 0x2d90]
         if                       // fcn.802b431c+0x9d8 // likely
         at = halfword [t0 + 0x2e00]

    loc_0x802a9648: // orphan
         at = halfword [s0 + 0x2e04]
         if                       // fcn.802b431c+0xb84 // likely
         if                       // fcn.802b431c+0xb98 // likely

    loc_0x802a9658: // orphan
         at = halfword [0 + 0x2e34]
         at = halfword [0 + 0x2e48]
         at = halfword [0 + 0x2e54]
         if                       // fcn.802b431c+0xcbc // likely
         if                       // fcn.802b431c+0xcd0 // likely

    loc_0x802a9670: // orphan
         at = halfword [t0 + 0x2e70]
         at = halfword [s0 + 0x2e7c]
         at = halfword [0 + 0x2e88]

    loc_0x802a967c: // orphan
         at = halfword [t0 + 0x2ea0]
         at = halfword [s0 + 0x2ea4]
         if                       // fcn.802b431c+0xe5c // likely
         if                       // fcn.802b431c+0xe70 // likely

    loc_0x802a9690: // orphan
         if                       // fcn.802b5274 // fcn.802b5274 // likely
         if                       // likely

    loc_0x802a969c: // orphan
         if                       // fcn.802b431c+0xf54 // likely
         if                       // fcn.802b5274+0x30 // likely

    loc_0x802a96a8: // orphan
         if                       // fcn.802b5274+0x78 // likely
         at = halfword [0 + 0x2f18]

    loc_0x802a96b0: // orphan
         if                       // fcn.802b431c+0xf38 // likely
         if                       // fcn.802b5274+0xe4 // likely

    loc_0x802a96bc: // orphan
         if                       // fcn.802b5274+0x11c // likely
         if                       // fcn.802b5274+0x130 // likely

    loc_0x802a96c8: // orphan
         at = halfword [s0 + 0x2f78]
         at = halfword [t0 + 0x2f80]
         at = halfword [s0 + 0x2f84]
         if                       // likely
         at = halfword [0 + 0x2fc0]

    loc_0x802a96dc: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a96e8: // orphan
         if                       // likely
         at = halfword [t0 + 0x2fd0]

    loc_0x802a96f0: // orphan
         at = halfword [s0 + 0x2fd4]
         if                       // likely
         at = halfword [t0 + 0x3004]

    loc_0x802a96fc: // orphan
         at = halfword [s0 + 0x3008]
         at = halfword [t0 + 0x300c]
         at = halfword [s0 + 0x3018]
         at = halfword [t0 + 0x3010]
         at = halfword [s0 + 0x301c]
         at = halfword [t0 + 0x3028]
         at = halfword [s0 + 0x3038]
         at = halfword [0 + 0x3044]
         if                       // fcn.802b5808+0x48 // likely
         if                       // fcn.802b5808+0x5c // likely

    loc_0x802a9728: // orphan
         at = halfword [t0 + 0x3068]
         at = halfword [s0 + 0x306c]
         at = halfword [t0 + 0x3070]
         at = halfword [s0 + 0x307c]
         at = halfword [t0 + 0x3074]
         at = halfword [s0 + 0x3080]
         at = halfword [0 + 0x308c]
         at = halfword [t0 + 0x3094]
         at = halfword [s0 + 0x309c]
         at = halfword [0 + 0x3098]
         if                       // fcn.802af804+0x61d0 // likely
         if                       // fcn.802af804+0x61e4 // likely

    loc_0x802a975c: // orphan
         at = halfword [t0 + 0x30b4]
         at = halfword [s0 + 0x30b8]
         at = halfword [0 + 0x30c4]
         at = halfword [0 + 0x3120]
         at = halfword [0 + 0x3128]
         at = halfword [0 + 0x3184]
         at = halfword [0 + 0x318c]
         at = halfword [0 + 0x3194]
         if                       // fcn.802af804+0x67bc // likely
         if                       // fcn.802af804+0x67d0 // likely

    loc_0x802a9788: // orphan
         if                       // fcn.82bea63c-0x29344b0 // likely
         if                       // fcn.82bea63c-0x293449c // likely

    loc_0x802a9794: // orphan
         at = halfword [0 + 0x3298]
         at = halfword [t0 + 0x32a0]
         at = halfword [s0 + 0x32a4]
         at = halfword [t0 + 0x32a8]

    loc_0x802a97a4: // orphan
         at = halfword [s0 + 0x32b4]
         at = halfword [0 + 0x32e8]
         at = halfword [0 + 0x32fc]
         at = halfword [0 + 0x3310]
         at = halfword [t0 + 0x3328]
         at = halfword [s0 + 0x3334]
         at = halfword [0 + 0x3340]
         if                       // likely
         at = halfword [t0 + 0x3354]

    loc_0x802a97c8: // orphan
         at = halfword [s0 + 0x3360]
         at = halfword [0 + 0x336c]
         if                       // fcn.802af804+0x6db0 // likely
         at = halfword [t0 + 0x3380]

    loc_0x802a97d8: // orphan
         at = halfword [s0 + 0x338c]
         at = halfword [0 + 0x3398]
         at = halfword [t0 + 0x33a0]
         at = halfword [s0 + 0x33a8]
         at = halfword [0 + 0x33a4]
         if                       // fcn.802af804+0x6e9c // likely
         at = halfword [0 + 0x33b4]

    loc_0x802a97f4: // orphan
         at = halfword [0 + 0x33bc]
         at = halfword [0 + 0x33c4]
         if                       // fcn.802af804+0x6f2c // likely
         if                       // fcn.82bea63c-0x2933ef8 // likely

    loc_0x802a9808: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9814: // orphan
         at = halfword [0 + 0x3428]
         if                       // fcn.82bea63c-0x2933d60 // likely
         if                       // fcn.82bea63c-0x2933d1c // likely

    loc_0x802a9824: // orphan
         if                       // fcn.82bea63c-0x2933bd4 // likely
         if                       // fcn.82bea63c-0x2933bc0 // likely

    loc_0x802a9830: // orphan
         if                       // fcn.82bea63c-0x2933b18 // likely
         if                       // fcn.82bea63c-0x2933c14 // likely

    loc_0x802a983c: // orphan
         if                       // fcn.802b6c60 // fcn.802b6c60 // likely
         if                       // fcn.802b6c60+0x44 // likely

    loc_0x802a9848: // orphan
         at = halfword [0 + 0x3570]
         at = halfword [0 + 0x3580]
         if                       // fcn.802b6c60+0x214 // likely
         if                       // likely

    loc_0x802a985c: // orphan
         at = halfword [0 + 0x359c]
         at = halfword [0 + 0x35a4]
         at = halfword [0 + 0x35ac]
         if                       // fcn.82bea63c-0x2933700 // likely
         if                       // fcn.82bea63c-0x29336ac // likely

    loc_0x802a9874: // orphan
         if                       // fcn.82bea63c-0x29336b4 // likely
         if                       // likely

    loc_0x802a9880: // orphan
         at = halfword [0 + 0x35d4]
         at = halfword [0 + 0x35ec]
         if                       // fcn.802af804+0x78d8 // likely
         at = halfword [0 + 0x361c]

    loc_0x802a9890: // orphan
         if                       // fcn.802af804+0x7920 // likely
         if                       // fcn.802af804+0x7984 // likely

    loc_0x802a989c: // orphan
         if                       // fcn.82bea63c-0x293336c // likely
         if                       // likely

    loc_0x802a98a8: // orphan
         at = halfword [0 + 0x36a4]
         at = halfword [0 + 0x36ac]
         at = halfword [0 + 0x373c]
         at = halfword [t0 + 0x3754]
         at = halfword [s0 + 0x375c]
         at = halfword [0 + 0x3758]
         at = halfword [t0 + 0x3764]
         at = halfword [s0 + 0x376c]
         if                       // likely
         if                       // likely

    loc_0x802a9c54: // orphan
         if                       // fcn.802afdb0+0xc438 // likely
         if                       // likely

    loc_0x802a9c60: // orphan
         if                       // fcn.802cbbfc-0xf938 // likely
         if                       // fcn.802cbbfc-0xf924 // likely

    loc_0x802a9c6c: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9c78: // orphan
         at = halfword [0 + 0x49e4]
         if                       // likely
         if                       // likely

    loc_0x802a9c88: // orphan
         if                       // likely
         if                       // fcn.802afdb0+0xc740 // likely

    loc_0x802a9c94: // orphan
         at = halfword [0 + 0x4a44]
         if                       // fcn.802afdb0+0xc81c // likely
         if                       // fcn.802afdb0+0xc830 // likely

    loc_0x802a9ca4: // orphan
         at = halfword [0 + 0x4a6c]
         if                       // likely
         if                       // likely

    loc_0x802a9cb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9cc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9ccc: // orphan
         if                       // fcn.802bc7b4+0x2c // likely
         if                       // likely

    loc_0x802a9cd8: // orphan
         at = halfword [0 + 0x4b04]
         if                       // fcn.802bc8fc+0x14 // likely
         if                       // fcn.802bc8fc+0x28 // likely

    loc_0x802a9ce8: // orphan
         at = halfword [0 + 0x4b2c]
         if                       // fcn.802afdb0+0xcc10 // likely
         if                       // likely

    loc_0x802a9cf4: // orphan
         if                       // likely

    loc_0x802a9cf8: // orphan
         if                       // likely
         at = halfword [0 + 0x4b84]

    loc_0x802a9d00: // orphan
         at = halfword [0 + 0x4c10]
         if                       // likely
         if                       // fcn.802cbbfc-0xee80 // likely

    loc_0x802a9d10: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9d1c: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9d28: // orphan
         at = halfword [0 + 0x4d90]
         if                       // fcn.802bd374+0x1c // likely
         if                       // fcn.802bd374+0x40 // likely

    loc_0x802a9d38: // orphan
         if                       // fcn.802afdb0+0xd8fc // likely
         at = halfword [0 + 0x4e84]

    loc_0x802a9d40: // orphan
         at = halfword [0 + 0x4f10]
         if                       // likely
         if                       // likely

    loc_0x802a9d4c: // orphan
         if                       // likely

    loc_0x802a9d50: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9d58: // orphan
         at = halfword [0 + 0x4fec]

    loc_0x802a9d5c: // orphan
         at = halfword [0 + 0x50a0]
         if                       // likely
         if                       // likely

    loc_0x802a9d6c: // orphan
         if                       // fcn.82bea63c-0x292c5cc // likely
         if                       // fcn.82bea63c-0x292c5b8 // likely

    loc_0x802a9d78: // orphan
         at = halfword [0 + 0x50e8]
         at = halfword [0 + 0x5174]
         if                       // fcn.82bea63c-0x292c2c8 // likely
         if                       // fcn.82bea63c-0x292c2b4 // likely

    loc_0x802a9d8c: // orphan
         if                       // fcn.82bea63c-0x292c25c // likely
         if                       // fcn.82bea63c-0x292c238 // likely

    loc_0x802a9d98: // orphan
         if                       // fcn.82bea63c-0x292c220 // likely
         if                       // fcn.82bea63c-0x292c1cc // likely

    loc_0x802a9da4: // orphan
         at = halfword [s0 + 0x51c0]
         at = halfword [0 + 0x51c4]
         if                       // likely
         if                       // fcn.82bea63c-0x292bf38 // likely

    loc_0x802a9db8: // orphan
         if                       // fcn.82bea63c-0x292be50 // likely
         if                       // fcn.82bea63c-0x292be3c // likely

    loc_0x802a9dc4: // orphan
         if                       // fcn.82bea63c-0x292bdc4 // likely
         at = halfword [0 + 0x52d4]

    loc_0x802a9dcc: // orphan
         if                       // fcn.82bea63c-0x292bcfc // likely
         if                       // likely

    loc_0x802a9dd8: // orphan
         if                       // fcn.82bea63c-0x292bb80 // likely
         if                       // fcn.82bea63c-0x292bb6c // likely

    loc_0x802a9de4: // orphan
         if                       // fcn.82bea63c-0x292bb24 // likely
         if                       // fcn.82bea63c-0x292ba20 // likely

    loc_0x802a9df0: // orphan
         if                       // fcn.82bea63c-0x292b908 // likely
         if                       // fcn.82bea63c-0x292b8f4 // likely

    loc_0x802a9df8: // orphan
         if                       // fcn.82bea63c-0x292b680 // likely

    loc_0x802a9dfc: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9e04: // orphan
         if                       // likely

    loc_0x802a9e08: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9e10: // orphan
         at = halfword [t0 + 0x54e8]

    loc_0x802a9e14: // orphan
         at = halfword [s0 + 0x54ec]
         if                       // fcn.802bf404+0x138 // likely
         at = halfword [t0 + 0x55d0]

    loc_0x802a9e20: // orphan
         at = halfword [s0 + 0x55e4]
         if                       // fcn.802bf404+0x174 // likely
         if                       // fcn.802bf404+0x1a8 // likely

    loc_0x802a9e30: // orphan
         if                       // fcn.802bf404+0x1a0 // likely
         at = halfword [0 + 0x5830]

    loc_0x802a9e38: // orphan
         at = halfword [0 + 0x5908]
         at = halfword [0 + 0x5928]
         at = halfword [0 + 0x5930]
         if                       // likely
         at = halfword [0 + 0x5958]

    loc_0x802a9e4c: // orphan
         at = halfword [0 + 0x5960]
         at = halfword [t0 + 0x5968]
         at = halfword [s0 + 0x5974]
         at = halfword [0 + 0x5980]
         at = halfword [0 + 0x5988]
         if                       // fcn.802c04c4+0x80 // likely
         if                       // fcn.802c043c+0x12c // likely

    loc_0x802a9e6c: // orphan
         if                       // fcn.802c043c+0x304 // likely
         if                       // fcn.802c043c+0x318 // likely

    loc_0x802a9e78: // orphan
         if                       // fcn.802c07c8+0xf4 // likely
         if                       // likely

    loc_0x802a9e84: // orphan
         at = halfword [t0 + 0x5ad8]
         at = halfword [s0 + 0x5b04]
         at = halfword [0 + 0x5b00]
         at = halfword [0 + 0x5b10]
         at = halfword [0 + 0x5b18]
         at = halfword [0 + 0x5b24]
         at = halfword [0 + 0x5b34]
         at = halfword [0 + 0x5b44]
         at = halfword [0 + 0x5b54]
         at = halfword [0 + 0x5b64]
         if                       // fcn.802c0c08+0xa8 // likely
         if                       // fcn.802c0c08+0x22c // likely

    loc_0x802a9eb8: // orphan
         if                       // fcn.802c0c08+0x254 // likely
         if                       // likely

    loc_0x802a9ec4: // orphan
         if                       // fcn.802c0c08+0x290 // likely
         at = halfword [0 + 0x5c1c]

    loc_0x802a9ecc: // orphan
         at = halfword [t0 + 0x5c4c]
         at = halfword [s0 + 0x5c50]
         if                       // fcn.802c104c+0xc // likely
         if                       // fcn.802c104c+0x20 // likely

    loc_0x802a9ee0: // orphan
         at = halfword [0 + 0x5c80]
         at = halfword [0 + 0x5c94]

    loc_0x802a9ee8: // orphan
         at = halfword [0 + 0x5ca0]
         if                       // fcn.802bc8fc+0x4894 // likely
         if                       // fcn.802bc8fc+0x48a8 // likely

    loc_0x802a9ef0: // orphan
         at = halfword [0 + 0x5ca0]
         if                       // fcn.802bc8fc+0x4894 // likely
         if                       // fcn.802bc8fc+0x48a8 // likely

    loc_0x802a9ef8: // orphan
         at = halfword [0 + 0x5cc8]
         if                       // likely
         if                       // likely

    loc_0x802a9f04: // orphan
         at = halfword [t0 + 0x5cec]

    loc_0x802a9f08: // orphan
         at = halfword [s0 + 0x5cfc]
         if                       // likely
         if                       // likely

    loc_0x802a9f18: // orphan
         if                       // fcn.802c142c+0x30 // likely
         if                       // likely

    loc_0x802a9f24: // orphan
         at = halfword [0 + 0x5d84]
         at = halfword [0 + 0x5d8c]
         at = halfword [0 + 0x5da0]
         at = halfword [0 + 0x5da8]
         at = halfword [0 + 0x5db4]
         at = halfword [t0 + 0x5dc0]
         at = halfword [s0 + 0x5dcc]
         at = halfword [0 + 0x5dd8]
         at = halfword [0 + 0x5de4]
         at = halfword [0 + 0x5df0]
         at = halfword [t0 + 0x5df8]
         at = halfword [s0 + 0x5e04]
         at = halfword [0 + 0x5e10]
         at = halfword [0 + 0x5e18]
         if                       // likely
         if                       // likely

    loc_0x802a9f68: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9f74: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9f80: // orphan
         if                       // likely
         at = halfword [t0 + 0x5ed8]

    loc_0x802a9f88: // orphan
         at = halfword [s0 + 0x5f10]
         if                       // likely
         if                       // likely

    loc_0x802a9f98: // orphan
         at = halfword [0 + 0x606c]
         at = halfword [0 + 0x60b8]
         at = halfword [t0 + 0x60f8]
         at = halfword [s0 + 0x60fc]
         if                       // likely
         if                       // likely

    loc_0x802a9fb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9fc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x802a9fcc: // orphan
         if                       // fcn.802afdb0+0x12790 // likely
         // CODE XREF from fcn.802ab868 @ +0x8f4
         at = halfword [0 + 0x6164]

    loc_0x802a9fd4: // orphan
         if                       // fcn.802c25a8 // fcn.802c25a8 // likely
         if                       // fcn.802c25a8+0x24 // likely

    loc_0x802a9fe0: // orphan
         if                       // fcn.802afdb0+0x12854 // likely
         if                       // fcn.802afdb0+0x12878 // likely

    loc_0x802a9fec: // orphan
         at = halfword [t0 + 0x61cc]
         at = halfword [s0 + 0x61d0]
         // CODE XREF from fcn.802ab868 @ +0x8f8
         at = halfword [t0 + 0x61d8]
         at = halfword [s0 + 0x61dc]
         if                       // fcn.802afdb0+0x12a30 // likely
         if                       // fcn.802c2814 // fcn.802c2814 // likely

    loc_0x802aa008: // orphan
         if                       // likely
         if                       // fcn.802c2904+0x1c // likely

    loc_0x802aa014: // orphan
         if                       // fcn.802c2838+0x40 // likely
         if                       // likely

    loc_0x802aa020: // orphan
         if                       // fcn.802c2904+0x40 // likely
         if                       // fcn.802c2904+0x94 // likely

    loc_0x802aa3e8: // orphan
         if                       // fcn.802af284+0x17678 // likely

    loc_0x802aa3f4: // orphan
         if                       // fcn.802af284+0x17734 // likely

    loc_0x802aa400: // orphan
         if                       // fcn.802af284+0x17730 // likely

    loc_0x802aa40c: // orphan
         if                       // fcn.802af284+0x1779c // likely

    loc_0x802aa418: // orphan
         if                       // likely
         at = halfword [t0 + 0x71a8]

    loc_0x802ad940: // orphan
         bltzl 0, 0x802cc8f4      // fcn.802cc8cc+0x28 // unlikely
         v0 = halfword [0 + 0x7c18]

    loc_0x802ad948: // orphan
         bltzl 0, 0x802cc9cc      // fcn.802cc8cc+0x100 // unlikely
         v0 = halfword [t0 + 0x7c0c]

    loc_0x802ad950: // orphan
         v0 = halfword [s0 + 0x7c34]
         bltzl 0, 0x802cca18      // fcn.802cc8cc+0x14c // unlikely
         v0 = halfword [0 + 0x7c40]

    loc_0x802ad95c: // orphan
         v0 = halfword [0 + 0x7c48]
         bltzl t0, 0x802ccab4     // fcn.802cc8cc+0x1e8 // unlikely
         bltzl s0, 0x802ccac8     // fcn.802cc8cc+0x1fc // unlikely

    loc_0x802ad96c: // orphan
         bltzl t0, 0x802ccb10     // fcn.802cc8cc+0x244 // unlikely
         // CODE XREF from fcn.802cb4bc @ +0x2f0
         bltzl s0, 0x802ccb24     // fcn.802cc8cc+0x258 // unlikely

    loc_0x802ad978: // orphan
         v0 = halfword [0 + 0x7c90]
         bltzl t0, 0x802ccbf0     // unlikely
         bltzl s0, 0x802ccc04     // unlikely

    loc_0x802ad988: // orphan
         bltzl t0, 0x802ccc4c     // unlikely
         bltzl s0, 0x802ccc60     // unlikely

    loc_0x802ad994: // orphan
         bltzl t0, 0x802ccd08     // unlikely
         bltzl s0, 0x802ccd3c     // unlikely

    loc_0x802ad9a0: // orphan
         v0 = halfword [0 + 0x7d2c]
         bltzl t0, 0x802cce88     // unlikely
         bltzl s0, 0x802cce9c     // unlikely

    loc_0x802ad9b0: // orphan
         bltzl t0, 0x802ccee4     // unlikely
         bltzl s0, 0x802ccef8     // unlikely

    loc_0x802ad9bc: // orphan
         bltzl 0, 0x802ccfc0      // unlikely
         bltzl t0, 0x802cd004     // unlikely

    loc_0x802ad9c8: // orphan
         v0 = halfword [0 + 0x7da4]
         bltzl t0, 0x802cd080     // unlikely
         bltzl s0, 0x802cd094     // unlikely

    loc_0x802ad9d8: // orphan
         bltzl s0, 0x802cd0bc     // unlikely
         v0 = halfword [t0 + 0x7b40]

    loc_0x802ad9e0: // orphan
         v0 = halfword [s0 + 0x7dc8]
         v0 = halfword [0 + 0x7ddc]
         bltzl t0, 0x802cd17c     // unlikely
         bltzl s0, 0x802cd190     // unlikely

    loc_0x802ad9f4: // orphan
         bltzl s0, 0x802cd1d8     // unlikely
         bltzl t0, 0x802cd1ec     // unlikely

    loc_0x802ada00: // orphan
         bltzl 0, 0x802cd264      // unlikely
         bltzl t0, 0x802cd288     // unlikely

    loc_0x802ada0c: // orphan
         bltzl t0, 0x802cd2b0     // unlikely
         bltzl s0, 0x802cd2c4     // unlikely

    loc_0x802ada18: // orphan
         bltzl t0, 0x802cd38c     // fcn.802ac294+0x210f8 // unlikely
         bltzl s0, 0x802cd3a0     // unlikely

    loc_0x802ada24: // orphan
         bltzl s0, 0x802cd3c8     // unlikely
         bltzl t0, 0x802cd5dc     // unlikely

    loc_0x802ada30: // orphan
         v0 = halfword [t0 + 0x7f30]
         // CODE XREF from fcn.802cb4bc @ +0x2f4
         v0 = halfword [s0 + 0x7f34]
         v0 = halfword [t0 + 0x7f3c]
         v0 = halfword [s0 + 0x7f44]
         v0 = halfword [t0 + 0x7f20]
         v0 = halfword [s0 + 0x7f60]
         // CODE XREF from fcn.802ac294 @ 0x802ac354
         // CODE XREF from fcn.802cb4bc @ +0x2f8
         v0 = halfword [t0 + 0x7f68]
         v0 = halfword [s0 + 0x7f74]
         v0 = halfword [t0 + 0x7f9c]
         v0 = halfword [s0 + 0x7fa0]
         v0 = halfword [t0 + 0x7fa8]

    loc_0x802ada5c: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac358
         v0 = halfword [s0 + 0x7fac]
         v0 = halfword [0 + 0x7fc4]
         v0 = halfword [t0 + 0x7fcc]
         v0 = halfword [s0 + 0x7fd0]
         v0 = halfword [t0 + 0x7fd8]
         v0 = halfword [s0 + 0x7fdc]
         v0 = halfword [0 + 0x7ffc]
         v0 = halfword [0 - 0x7ff8]
         v0 = halfword [0 - 0x7ff0]
         v0 = halfword [0 - 0x7fe4]
         v0 = halfword [0 - 0x7fd4]
         bltzl t0, 0x8028db7c     // fcn.802aa9c4-0x1ce48 // unlikely
         // CODE XREF from fcn.802cb4bc @ +0x2fc
         bltzl s0, 0x8028db90     // fcn.802aa9c4-0x1ce34 // unlikely

    loc_0x802ada94: // orphan
         v0 = halfword [s0 - 0x7fc8]
         v0 = halfword [0 - 0x7fa4]
         bltzl t0, fcn.8028dc30   // unlikely
         // CODE XREF from fcn.802cb4bc @ +0x300
         bltzl s0, 0x8028dc44     // fcn.8028dc30+0x14 // unlikely

    loc_0x802adaa8: // orphan
         v0 = halfword [t0 - 0x7ef0]
         v0 = halfword [s0 - 0x7eec]
         v0 = halfword [t0 - 0x7ee4]
         v0 = halfword [s0 - 0x7ee0]
         v0 = halfword [0 - 0x7ecc]
         v0 = halfword [0 - 0x7ec0]
         bltzl t0, 0x8028e004     // unlikely
         bltzl s0, 0x8028e018     // fcn.8028e014+0x4 // unlikely

    loc_0x802adacc: // orphan
         bltzl s0, 0x8028e000     // unlikely
         v0 = halfword [0 - 0x7e90]

    loc_0x802adad4: // orphan
         v0 = halfword [0 - 0x7e88]
         v0 = halfword [0 - 0x7e74]
         v0 = halfword [t0 - 0x7e6c]
         // CODE XREF from fcn.802ac294 @ +0xc8
         v0 = halfword [s0 - 0x7e60]
         v0 = halfword [0 - 0x7e54]
         bltzl t0, 0x8028e1bc     // unlikely
         bltzl s0, 0x8028e1d0     // unlikely

    loc_0x802adaf4: // orphan
         v0 = halfword [0 - 0x7de0]
         bltzl t0, 0x8028e39c     // unlikely
         bltzl s0, 0x8028e3b0     // unlikely

    loc_0x802adb04: // orphan
         v0 = halfword [0 - 0x7da4]
         bltzl t0, 0x8028e49c     // fcn.802aa9c4-0x1c528 // unlikely
         bltzl s0, 0x8028e4b0     // unlikely

    loc_0x802adb14: // orphan
         v0 = halfword [0 - 0x7ce8]
         bltzl t0, 0x8028e79c     // unlikely
         bltzl s0, 0x8028e7b0     // unlikely

    loc_0x802adb24: // orphan
         v0 = halfword [0 - 0x7c44]
         bltzl t0, 0x8028ea3c     // unlikely
         bltzl s0, 0x8028ea50     // fcn.802aa9c4-0x1bf74 // unlikely

    loc_0x802adb34: // orphan
         v0 = halfword [s0 - 0x7bfc]
         v0 = halfword [t0 - 0x7c14]
         v0 = halfword [s0 - 0x7bf8]
         bltzl t0, 0x8028eb24     // unlikely
         bltzl s0, 0x8028eba8     // fcn.802aa9c4-0x1be1c // unlikely

    loc_0x802adb4c: // orphan
         v0 = halfword [s0 - 0x7bf4]
         v0 = halfword [0 - 0x7bb8]
         v0 = halfword [0 - 0x7ba8]
         v0 = halfword [0 - 0x7b88]
         v0 = halfword [0 - 0x7b58]
         v0 = halfword [0 - 0x7b1c]
         v0 = halfword [0 - 0x7b0c]
         v0 = halfword [0 - 0x7aec]
         v0 = halfword [0 - 0x7ac0]
         v0 = halfword [0 - 0x7a88]
         v0 = halfword [0 - 0x79d8]
         v0 = halfword [t0 - 0x79cc]
         v0 = halfword [s0 - 0x79a8]
         bltzl 0, 0x8028f834      // unlikely
         v0 = halfword [0 - 0x78c8]

    loc_0x802adb88: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac364
         v0 = halfword [t0 - 0x78c0]
         v0 = halfword [s0 - 0x78a4]
         v0 = halfword [t0 - 0x78bc]
         v0 = halfword [s0 - 0x78a8]
         v0 = halfword [t0 - 0x78b8]
         v0 = halfword [s0 - 0x78ac]
         v0 = halfword [t0 - 0x78b4]
         v0 = halfword [s0 - 0x78b0]
         v0 = halfword [0 - 0x7860]
         bltzl t0, 0x8028f720     // fcn.802af284-0x1fb64 // unlikely
         bltzl s0, 0x8028f734     // fcn.802af284-0x1fb50 // unlikely

    loc_0x802adbb8: // orphan
         bltzl s0, 0x8028facc     // unlikely
         bltzl t0, 0x8028fa80     // unlikely

    loc_0x802adbc4: // orphan
         bltzl t0, 0x8028fa98     // unlikely
         bltzl s0, 0x8028faac     // unlikely

    loc_0x802adbd0: // orphan
         v0 = halfword [t0 - 0x77f4]
         v0 = halfword [s0 - 0x77ec]
         v0 = halfword [0 - 0x77c0]
         v0 = halfword [0 - 0x7780]
         v0 = halfword [0 - 0x7770]
         v0 = halfword [t0 - 0x7768]
         v0 = halfword [s0 - 0x7764]
         v0 = halfword [0 - 0x7710]
         v0 = halfword [t0 - 0x76ec]
         v0 = halfword [s0 - 0x76e4]
         v0 = halfword [0 - 0x76d0]
         v0 = halfword [0 - 0x7698]
         v0 = halfword [0 - 0x7668]
         v0 = halfword [0 - 0x7638]
         v0 = halfword [t0 - 0x75d8]
         v0 = halfword [s0 - 0x75d0]
         v0 = halfword [0 - 0x75d4]
         v0 = halfword [t0 - 0x75c8]
         v0 = halfword [s0 - 0x75c4]
         bltzl t0, 0x80290540     // unlikely
         bltzl s0, 0x80290554     // unlikely

    loc_0x802adc28: // orphan
         v0 = halfword [s0 - 0x7580]
         v0 = halfword [0 - 0x7584]
         v0 = halfword [0 - 0x757c]
         v0 = halfword [t0 - 0x7570]
         v0 = halfword [s0 - 0x756c]
         bltzl t0, 0x802906a0     // unlikely
         bltzl s0, 0x802906c4     // unlikely

    loc_0x802adc48: // orphan
         bltzl t0, 0x8029076c     // unlikely
         bltzl s0, 0x80290780     // unlikely

    loc_0x802adc54: // orphan
         v0 = halfword [s0 - 0x7548]
         v0 = halfword [0 - 0x7524]

    loc_0x802adc5c: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac368
         bltzl t0, 0x802907f0     // unlikely
         bltzl s0, 0x80290804     // unlikely

    loc_0x802adc68: // orphan
         v0 = halfword [t0 - 0x74f8]
         v0 = halfword [s0 - 0x74f4]
         bltzl t0, 0x80290864     // unlikely
         bltzl s0, 0x80290878     // unlikely

    loc_0x802adc7c: // orphan
         v0 = halfword [t0 - 0x74c0]
         v0 = halfword [s0 - 0x74bc]
         bltzl t0, 0x802909b8     // unlikely
         bltzl s0, 0x802909cc     // unlikely

    loc_0x802adc90: // orphan
         v0 = halfword [0 - 0x7488]
         v0 = halfword [0 - 0x7474]
         bltzl t0, 0x80290b2c     // unlikely
         bltzl s0, 0x80290b40     // unlikely

    loc_0x802adca4: // orphan
         v0 = halfword [0 - 0x741c]
         bltzl t0, fcn.80290c5c   // fcn.802af284-0x1e628 // unlikely
         bltzl s0, 0x80290c70     // fcn.802af284-0x1e614 // unlikely

    loc_0x802adcb4: // orphan
         v0 = halfword [0 - 0x73f0]
         v0 = halfword [t0 - 0x73e4]
         v0 = halfword [s0 - 0x73e0]
         v0 = halfword [0 - 0x7394]
         v0 = halfword [0 - 0x7388]
         bltzl t0, 0x80290f1c     // unlikely
         bltzl s0, 0x80290f30     // unlikely

    loc_0x802adcd4: // orphan
         bltzl s0, 0x80290f78     // unlikely
         bltzl t0, 0x80290fac     // unlikely

    loc_0x802adce0: // orphan
         bltzl t0, 0x80290ff4     // unlikely
         bltzl s0, 0x80291008     // unlikely

    loc_0x802ade18: // orphan
         v0 = halfword [t0 - 0x6e80]
         v0 = halfword [s0 - 0x6e7c]
         bltzl t0, 0x80292444     // unlikely
         bltzl s0, 0x80292468     // unlikely

    loc_0x802ade2c: // orphan
         bltzl t0, 0x802924e0     // unlikely
         bltzl s0, 0x802924f4     // unlikely

    loc_0x802ade38: // orphan
         v0 = halfword [s0 - 0x6e04]
         v0 = halfword [0 - 0x6e08]
         v0 = halfword [0 - 0x6d58]
         bltzl 0, 0x802929b8      // unlikely
         v0 = halfword [0 - 0x6d14]

    loc_0x802ade4c: // orphan
         v0 = halfword [0 - 0x6d00]
         v0 = halfword [t0 - 0x6cf4]

    loc_0x802ade54: // orphan
         v0 = halfword [s0 - 0x6cf0]
         v0 = halfword [0 - 0x6cc4]
         v0 = halfword [t0 - 0x6cb4]
         v0 = halfword [s0 - 0x6ca8]
         // CODE XREF from fcn.802ac294 @ 0x802ac370
         v0 = halfword [0 - 0x6cac]
         bltzl t0, 0x80292c1c     // unlikely

    loc_0x802ade6c: // orphan
         bltzl s0, 0x80292c40     // fcn.80292c30+0x10 // unlikely
         bltzl t0, 0x80292d04     // fcn.802aacec-0x17fe8 // unlikely

    loc_0x802ade74: // orphan
         bltzl s0, fcn.80292d28   // unlikely
         // CODE XREF from fcn.802ac294 @ 0x802ac374
         v0 = halfword [0 - 0x6c50]

    loc_0x802ade78: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac374
         v0 = halfword [0 - 0x6c50]

    loc_0x802ade7c: // orphan
         bltzl t0, 0x80292d70     // fcn.80292d28+0x48 // unlikely
         bltzl s0, 0x80292d84     // fcn.80292d28+0x5c // unlikely

    loc_0x802ade88: // orphan
         v0 = halfword [0 - 0x6c20]
         v0 = halfword [t0 - 0x6c14]
         v0 = halfword [s0 - 0x6c0c]
         v0 = halfword [0 - 0x6bf8]
         v0 = halfword [0 - 0x6be4]
         v0 = halfword [t0 - 0x6bd8]
         v0 = halfword [s0 - 0x6bd4]
         v0 = halfword [0 - 0x6ba8]
         v0 = halfword [0 - 0x6b74]
         v0 = halfword [0 - 0x6b34]
         v0 = halfword [0 - 0x6afc]
         v0 = halfword [t0 - 0x6aec]
         v0 = halfword [s0 - 0x6ae8]
         v0 = halfword [0 - 0x6ac0]
         v0 = halfword [0 - 0x6ab0]
         bltzl t0, 0x80293428     // fcn.802aacec-0x178c4 // unlikely
         bltzl s0, 0x8029344c     // fcn.802aacec-0x178a0 // unlikely

    loc_0x802aded0: // orphan
         bltzl t0, 0x802934a4     // unlikely
         bltzl s0, 0x802934b8     // unlikely

    loc_0x802adedc: // orphan
         v0 = halfword [s0 - 0x6a78]
         v0 = halfword [t0 - 0x6a7c]
         v0 = halfword [s0 - 0x6a64]
         v0 = halfword [t0 - 0x6a60]
         v0 = halfword [s0 - 0x6a5c]
         bltzl t0, 0x802935e4     // fcn.802aacec-0x17708 // unlikely
         bltzl s0, 0x802935f8     // fcn.802aacec-0x176f4 // unlikely

    loc_0x802adefc: // orphan
         v0 = halfword [0 - 0x69fc]
         bltzl t0, 0x80293734     // unlikely
         bltzl s0, 0x80293748     // unlikely

    loc_0x802adf0c: // orphan
         v0 = halfword [t0 - 0x69ac]
         v0 = halfword [s0 - 0x69a8]
         v0 = halfword [0 - 0x6964]
         v0 = halfword [0 - 0x695c]
         v0 = halfword [0 - 0x6954]
         v0 = halfword [0 - 0x68fc]
         v0 = halfword [0 - 0x68f4]
         v0 = halfword [0 - 0x689c]
         v0 = halfword [0 - 0x6894]
         v0 = halfword [0 - 0x6840]
         v0 = halfword [0 - 0x6838]
         v0 = halfword [0 - 0x6720]
         bltzl t0, 0x802942f0     // unlikely
         bltzl s0, 0x80294304     // unlikely

    loc_0x802adf48: // orphan
         v0 = halfword [0 - 0x66f8]
         v0 = halfword [0 - 0x66e0]
         bltzl t0, 0x80294444     // unlikely
         bltzl s0, 0x80294458     // unlikely

    loc_0x802adf5c: // orphan
         // CODE XREF from fcn.802ac294 @ +0xe4
         bltzl s0, 0x802944a0     // unlikely
         bltzl t0, 0x802944d4     // unlikely

    loc_0x802adf68: // orphan
         bltzl t0, 0x8029451c     // fcn.802a8228-0x13d0c // unlikely
         bltzl s0, 0x80294530     // fcn.802a8228-0x13cf8 // unlikely

    loc_0x802adf74: // orphan
         v0 = halfword [t0 - 0x6620]
         v0 = halfword [s0 - 0x661c]
         v0 = halfword [t0 - 0x660c]
         // CODE XREF from fcn.802ac294 @ 0x802ac37c
         v0 = halfword [s0 - 0x6608]
         v0 = halfword [0 - 0x65fc]
         v0 = halfword [0 - 0x65f4]
         v0 = halfword [0 - 0x6574]
         v0 = halfword [t0 - 0x6518]
         v0 = halfword [s0 - 0x6510]
         v0 = halfword [0 - 0x6514]
         v0 = halfword [t0 - 0x6508]
         v0 = halfword [s0 - 0x6504]
         v0 = halfword [t0 - 0x64f0]
         v0 = halfword [s0 - 0x64e8]
         v0 = halfword [0 - 0x64ec]
         v0 = halfword [t0 - 0x64e0]

    loc_0x802adfb4: // orphan
         v0 = halfword [s0 - 0x64d8]
         bltzl t0, 0x80294c4c     // fcn.802a8228-0x135dc // unlikely
         bltzl s0, 0x80294c80     // fcn.802a8228-0x135a8 // unlikely

    loc_0x802adfc4: // orphan
         bltzl t0, 0x80294d28     // unlikely
         bltzl s0, 0x80294d3c     // unlikely

    loc_0x802adfd0: // orphan
         v0 = halfword [s0 - 0x64b8]
         v0 = halfword [0 - 0x6494]
         bltzl t0, 0x80294dac     // unlikely
         bltzl s0, 0x80294dc0     // unlikely

    loc_0x802adfe4: // orphan
         v0 = halfword [t0 - 0x6470]
         v0 = halfword [s0 - 0x6468]
         bltzl 0, 0x80294e90      // unlikely
         v0 = halfword [0 - 0x6418]

    loc_0x802adff4: // orphan
         bltzl t0, 0x80294fc8     // unlikely
         bltzl s0, 0x8029501c     // unlikely

    loc_0x802ae000: // orphan
         v0 = halfword [0 - 0x63ec]
         bltzl 0, 0x80295088      // unlikely
         bltzl 0, 0x802950ac      // unlikely

    loc_0x802ae010: // orphan
         v0 = halfword [s0 - 0x63cc]
         v0 = halfword [0 - 0x63c4]
         bltzl t0, 0x8029512c     // unlikely
         bltzl s0, 0x80295140     // unlikely

    loc_0x802ae024: // orphan
         v0 = halfword [t0 - 0x63a0]
         v0 = halfword [s0 - 0x6398]
         v0 = halfword [0 - 0x6390]
         bltzl t0, 0x80295254     // unlikely
         bltzl s0, 0x80295268     // unlikely

    loc_0x802ae03c: // orphan
         v0 = halfword [0 - 0x6338]
         bltzl t0, 0x80295384     // unlikely
         bltzl s0, 0x80295398     // unlikely

    loc_0x802ae04c: // orphan
         bltzl 0, 0x802954b0      // unlikely
         v0 = halfword [0 - 0x6230]

    loc_0x802ae054: // orphan
         v0 = halfword [0 - 0x6224]
         bltzl t0, 0x8029583c     // unlikely
         bltzl s0, 0x80295850     // unlikely

    loc_0x802ae064: // orphan
         bltzl s0, 0x80295898     // unlikely
         bltzl t0, 0x802958cc     // unlikely

    loc_0x802ae070: // orphan
         bltzl t0, 0x80295914     // unlikely
         bltzl s0, 0x80295928     // unlikely

    loc_0x802ae07c: // orphan
         v0 = halfword [t0 - 0x6160]
         v0 = halfword [s0 - 0x615c]
         v0 = halfword [t0 - 0x6148]
         v0 = halfword [s0 - 0x6134]
         v0 = halfword [t0 - 0x6118]
         v0 = halfword [s0 - 0x6110]
         v0 = halfword [0 - 0x6114]
         v0 = halfword [t0 - 0x6108]
         v0 = halfword [s0 - 0x6104]
         v0 = halfword [t0 - 0x60f0]
         v0 = halfword [s0 - 0x60e8]
         v0 = halfword [0 - 0x60ec]
         v0 = halfword [t0 - 0x60e0]
         v0 = halfword [s0 - 0x60d8]
         bltzl t0, 0x80295d48     // unlikely
         bltzl s0, 0x80295d7c     // unlikely

    loc_0x802ae0c0: // orphan
         bltzl t0, 0x80295e14     // unlikely
         bltzl s0, 0x80295e38     // unlikely

    loc_0x802ae0cc: // orphan
         v0 = halfword [t0 - 0x606c]
         v0 = halfword [s0 - 0x605c]
         bltzl t0, 0x80295ff8     // fcn.802a836c-0x12374 // unlikely
         bltzl s0, 0x8029600c     // fcn.802a836c-0x12360 // unlikely

    loc_0x802ae0e0: // orphan
         v0 = halfword [s0 - 0x604c]
         v0 = halfword [0 - 0x6024]
         bltzl t0, 0x8029607c     // fcn.802a836c-0x122f0 // unlikely
         bltzl s0, 0x80296090     // fcn.802a836c-0x122dc // unlikely

    loc_0x802ae0f4: // orphan
         bltzl t0, 0x80296148     // unlikely
         bltzl s0, 0x8029616c     // unlikely

    loc_0x802ae100: // orphan
         bltzl s0, 0x80296234     // fcn.802a836c-0x12138 // unlikely
         bltzl t0, 0x80296298     // fcn.802a836c-0x120d4 // unlikely

    loc_0x802ae10c: // orphan
         v0 = halfword [0 - 0x5f74]
         v0 = halfword [0 - 0x5f60]
         bltzl t0, 0x802963b8     // fcn.802a836c-0x11fb4 // unlikely
         bltzl s0, 0x802963cc     // fcn.802a836c-0x11fa0 // unlikely

    loc_0x802ae120: // orphan
         v0 = halfword [0 - 0x5f1c]
         bltzl 0, 0x802964e8      // fcn.8029649c+0x4c // unlikely
         v0 = halfword [0 - 0x5f00]

    loc_0x802ae12c: // orphan
         bltzl t0, 0x802965c0     // fcn.802a836c-0x11dac // unlikely
         bltzl s0, 0x802965d4     // fcn.802a836c-0x11d98 // unlikely

    loc_0x802ae138: // orphan
         bltzl s0, 0x802965bc     // fcn.802a836c-0x11db0 // unlikely
         bltzl t0, 0x80296610     // fcn.802a836c-0x11d5c // unlikely

    loc_0x802ae144: // orphan
         bltzl t0, 0x80296588     // fcn.802a836c-0x11de4 // unlikely
         bltzl s0, 0x802965ac     // fcn.802a836c-0x11dc0 // unlikely

    loc_0x802ae150: // orphan
         bltzl s0, 0x80296764     // fcn.80296624+0x140 // unlikely
         bltzl 0, 0x80296838      // unlikely

    loc_0x802ae15c: // orphan
         v0 = halfword [t0 - 0x5e38]
         v0 = halfword [s0 - 0x5e34]
         v0 = halfword [0 - 0x5e2c]
         bltzl 0, 0x802968dc      // unlikely
         bltzl t0, 0x80296900     // unlikely

    loc_0x802ae174: // orphan
         bltzl t0, 0x80296948     // unlikely
         bltzl s0, 0x8029698c     // unlikely

    loc_0x802ae180: // orphan
         bltzl t0, 0x802969e4     // unlikely
         bltzl s0, 0x80296a08     // unlikely

    loc_0x802ae18c: // orphan
         bltzl t0, 0x80296a40     // unlikely
         bltzl s0, 0x80296a54     // unlikely

    loc_0x802ae198: // orphan
         bltzl s0, 0x8029640c     // fcn.802a836c-0x11f60 // unlikely
         bltzl t0, 0x80296480     // fcn.802a836c-0x11eec // unlikely

    loc_0x802ae1a4: // orphan
         v0 = halfword [0 - 0x5d30]
         v0 = halfword [0 - 0x5d24]
         bltzl t0, 0x80296d40     // unlikely
         bltzl s0, 0x80296d54     // unlikely

    loc_0x802ae1b8: // orphan
         bltzl s0, 0x80296dcc     // unlikely
         v0 = halfword [0 - 0x5ce0]

    loc_0x802ae1c0: // orphan
         v0 = halfword [0 - 0x5cd4]
         v0 = halfword [t0 - 0x5ccc]
         v0 = halfword [s0 - 0x5cc8]
         v0 = halfword [0 - 0x5cb0]
         v0 = halfword [0 - 0x5c80]
         v0 = halfword [t0 - 0x5c78]
         v0 = halfword [s0 - 0x5c74]
         v0 = halfword [0 - 0x5c6c]
         v0 = halfword [0 - 0x5c50]
         v0 = halfword [0 - 0x5c44]
         bltzl t0, 0x802970fc     // unlikely
         bltzl s0, 0x80297110     // unlikely

    loc_0x802ae1f4: // orphan
         v0 = halfword [0 - 0x5bec]
         v0 = halfword [0 - 0x5be0]
         v0 = halfword [0 - 0x5bc4]
         v0 = halfword [0 - 0x5b98]

    loc_0x802ae204: // orphan
         v0 = halfword [0 - 0x5b80]
         v0 = halfword [0 - 0x5b64]
         bltzl t0, 0x802974f0     // fcn.8029745c+0x94 // unlikely
         bltzl s0, 0x80297504     // fcn.8029745c+0xa8 // unlikely

    loc_0x802ae218: // orphan
         bltzl t0, 0x8029753c     // fcn.8029745c+0xe0 // unlikely
         bltzl s0, 0x80297550     // fcn.8029745c+0xf4 // unlikely

    loc_0x802ae224: // orphan
         v0 = halfword [0 - 0x5abc]
         bltzl t0, 0x8029775c     // fcn.8029745c+0x300 // unlikely
         bltzl s0, 0x80297770     // fcn.8029745c+0x314 // unlikely

    loc_0x802ae234: // orphan
         bltzl t0, 0x80297878     // fcn.8029745c+0x41c // unlikely
         bltzl s0, 0x8029788c     // fcn.8029745c+0x430 // unlikely

    loc_0x802ae240: // orphan
         v0 = halfword [0 - 0x59e8]
         bltzl t0, 0x80297ad8     // fcn.8029745c+0x67c // unlikely
         bltzl s0, 0x80297aec     // fcn.8029745c+0x690 // unlikely

    loc_0x802ae250: // orphan
         bltzl s0, 0x80297b34     // unlikely
         v0 = halfword [0 - 0x58bc]

    loc_0x802ae258: // orphan
         v0 = halfword [0 - 0x58b0]
         bltzl t0, 0x80298010     // unlikely
         bltzl s0, 0x80298024     // unlikely

    loc_0x802ae268: // orphan
         bltzl s0, 0x8029806c     // unlikely
         bltzl t0, 0x802980a0     // unlikely

    loc_0x802ae274: // orphan
         bltzl t0, 0x802980e8     // unlikely
         bltzl s0, 0x802980fc     // fcn.802a836c-0x10270 // unlikely

    loc_0x802ae280: // orphan
         v0 = halfword [t0 - 0x57f0]
         v0 = halfword [s0 - 0x57ec]
         v0 = halfword [t0 - 0x57d8]
         v0 = halfword [s0 - 0x57d4]
         v0 = halfword [0 - 0x5774]
         bltzl t0, 0x80298598     // unlikely
         bltzl s0, 0x802985ac     // unlikely

    loc_0x802ae2a0: // orphan
         v0 = halfword [s0 - 0x5754]
         v0 = halfword [0 - 0x5710]
         v0 = halfword [0 - 0x5700]
         v0 = halfword [0 - 0x56e0]
         v0 = halfword [0 - 0x5658]
         v0 = halfword [t0 - 0x563c]
         v0 = halfword [s0 - 0x5638]
         v0 = halfword [t0 - 0x5618]
         v0 = halfword [s0 - 0x5604]
         v0 = halfword [0 - 0x55d8]
         v0 = halfword [t0 - 0x55c8]
         v0 = halfword [s0 - 0x55c4]
         v0 = halfword [t0 - 0x55c0]
         v0 = halfword [s0 - 0x55bc]
         bltzl t0, 0x80298c1c     // unlikely
         bltzl s0, 0x80298c30     // unlikely

    loc_0x802ae2e0: // orphan
         v0 = halfword [0 - 0x5594]

    loc_0x802ae2e4: // orphan
         v0 = halfword [t0 - 0x558c]
         v0 = halfword [s0 - 0x5580]
         bltzl t0, 0x80298cd0     // fcn.802ac294-0x135c4 // unlikely
         bltzl s0, 0x80298ce4     // unlikely

    loc_0x802ae2f8: // orphan
         bltzl t0, 0x80298d6c     // unlikely
         bltzl s0, 0x80298d80     // unlikely

    loc_0x802ae304: // orphan
         v0 = halfword [t0 - 0x552c]
         v0 = halfword [s0 - 0x5524]
         v0 = halfword [0 - 0x5528]
         v0 = halfword [0 - 0x5520]
         bltzl 0, 0x80298eb8      // fcn.802a836c-0xf4b4 // unlikely
         v0 = halfword [t0 - 0x5510]

    loc_0x802ae31c: // orphan
         v0 = halfword [s0 - 0x550c]
         v0 = halfword [t0 - 0x5508]
         v0 = halfword [s0 - 0x5504]
         v0 = halfword [t0 - 0x5530]
         v0 = halfword [s0 - 0x54f8]
         bltzl t0, 0x80298f64     // fcn.802a836c-0xf408 // unlikely
         bltzl s0, 0x80298f78     // fcn.802a836c-0xf3f4 // unlikely

    loc_0x802ae33c: // orphan
         v0 = halfword [s0 - 0x54d4]
         v0 = halfword [t0 - 0x54c4]
         v0 = halfword [s0 - 0x54b8]
         v0 = halfword [0 - 0x54a0]
         v0 = halfword [0 - 0x5498]
         v0 = halfword [0 - 0x548c]
         v0 = halfword [0 - 0x5480]
         v0 = halfword [t0 - 0x5478]
         v0 = halfword [s0 - 0x546c]
         v0 = halfword [0 - 0x5460]
         v0 = halfword [t0 - 0x5450]
         v0 = halfword [s0 - 0x5444]
         bltzl t0, 0x80299210     // fcn.802991c8+0x48 // unlikely
         bltzl s0, 0x80299224     // fcn.802991bc+0x68 // unlikely

    loc_0x802ae378: // orphan
         v0 = halfword [0 - 0x5430]
         v0 = halfword [0 - 0x5408]
         bltzl t0, 0x80299384     // fcn.8029932c+0x58 // unlikely
         bltzl s0, 0x802993d8     // fcn.8029932c+0xac // unlikely

    loc_0x802ae38c: // orphan
         v0 = halfword [s0 - 0x53dc]
         bltzl t0, 0x802993b4     // fcn.8029932c+0x88 // unlikely
         bltzl s0, 0x80299418     // fcn.802a836c-0xef54 // unlikely

    loc_0x802ae39c: // orphan
         bltzl s0, 0x80299410     // fcn.802a836c-0xef5c // unlikely
         bltzl t0, 0x802993e4     // fcn.8029932c+0xb8 // unlikely

    loc_0x802ae6dc: // orphan
         bltzl t0, 0x8029c1c0     // unlikely
         bltzl s0, 0x8029c1d4     // unlikely

    loc_0x802ae6e8: // orphan
         v0 = halfword [s0 - 0x4958]

    loc_0x802ae770: // orphan
         bltzl t0, 0x8029c814     // unlikely

    loc_0x802ae948: // orphan
         v0 = halfword [0 - 0x417c]
         v0 = halfword [0 - 0x416c]
         bltzl t0, 0x8029e3d8     // unlikely
         bltzl s0, 0x8029e3fc     // unlikely

    loc_0x802aebd4: // orphan
         bltzl t0, 0x802a1158     // unlikely
         bltzl s0, 0x802a116c     // unlikely

    loc_0x802aebe0: // orphan
         bltzl s0, 0x802a1224     // unlikely
         v0 = halfword [t0 - 0x3664]

    loc_0x802aebe8: // orphan
         v0 = halfword [s0 - 0x3660]
         bltzl t0, 0x802a1350     // unlikely
         bltzl s0, 0x802a1364     // unlikely

    loc_0x802aebf8: // orphan
         v0 = halfword [s0 - 0x360c]
         bltzl t0, 0x802a13f0     // unlikely
         bltzl s0, 0x802a1424     // unlikely

    loc_0x802aec08: // orphan
         bltzl t0, 0x802a14fc     // fcn.802ab868-0xa36c // unlikely
         bltzl s0, 0x802a1510     // fcn.802ab868-0xa358 // unlikely

    loc_0x802aec14: // orphan
         bltzl t0, 0x802a1578     // fcn.802ab868-0xa2f0 // unlikely
         bltzl s0, 0x802a158c     // fcn.802ab868-0xa2dc // unlikely

    loc_0x802aec20: // orphan
         bltzl t0, 0x802a16a4     // fcn.802a165c+0x48 // unlikely
         bltzl s0, 0x802a16b8     // fcn.802a165c+0x5c // unlikely

    loc_0x802aec2c: // orphan
         v0 = halfword [s0 - 0x3548]
         v0 = halfword [0 - 0x354c]
         v0 = halfword [0 - 0x352c]
         bltzl t0, 0x802a17ac     // fcn.802a165c+0x150 // unlikely
         bltzl s0, 0x802a17c0     // unlikely

    loc_0x802aec44: // orphan
         v0 = halfword [s0 - 0x3508]
         v0 = halfword [0 - 0x350c]
         v0 = halfword [0 - 0x34ec]
         bltzl t0, 0x802a18c4     // fcn.802a165c+0x268 // unlikely
         bltzl s0, 0x802a18d8     // fcn.802a165c+0x27c // unlikely

    loc_0x802aec5c: // orphan
         bltzl s0, 0x802a1a80     // fcn.802a18f0+0x190 // unlikely
         bltzl t0, 0x802a1ae4     // fcn.802a18f0+0x1f4 // unlikely

    loc_0x802aec68: // orphan
         bltzl t0, 0x802a1bac     // unlikely
         bltzl s0, 0x802a1bc0     // fcn.802a18f0+0x2d0 // unlikely

    loc_0x802aec74: // orphan
         bltzl s0, 0x802a1c38     // fcn.802a18f0+0x348 // unlikely
         bltzl t0, 0x802a1c6c     // fcn.802a18f0+0x37c // unlikely

    loc_0x802aec80: // orphan
         bltzl t0, 0x802a1cd4     // fcn.802a18f0+0x3e4 // unlikely
         bltzl s0, 0x802a1d28     // fcn.802a18f0+0x438 // unlikely

    loc_0x802aec8c: // orphan
         bltzl t0, 0x802a1df0     // fcn.802a18f0+0x500 // unlikely
         bltzl s0, 0x802a1e04     // fcn.802a18f0+0x514 // unlikely

    loc_0x802aec98: // orphan
         v0 = halfword [s0 - 0x3374]
         v0 = halfword [0 - 0x3348]
         v0 = halfword [0 - 0x333c]
         v0 = halfword [0 - 0x3330]
         v0 = halfword [t0 - 0x3320]
         v0 = halfword [s0 - 0x3308]
         v0 = halfword [0 - 0x3304]
         v0 = halfword [0 - 0x32f0]
         v0 = halfword [0 - 0x32c8]
         v0 = halfword [0 - 0x32b0]
         v0 = halfword [t0 - 0x32a8]
         v0 = halfword [s0 - 0x32a4]
         v0 = halfword [t0 - 0x329c]
         v0 = halfword [s0 - 0x3298]
         bltzl t0, 0x802a22b4     // unlikely
         bltzl s0, 0x802a22e8     // unlikely

    loc_0x802aecdc: // orphan
         bltzl t0, 0x802a23b0     // unlikely
         bltzl s0, 0x802a23c4     // unlikely

    loc_0x802aece8: // orphan
         v0 = halfword [0 - 0x31d4]
         v0 = halfword [0 - 0x3178]
         v0 = halfword [t0 - 0x316c]
         v0 = halfword [s0 - 0x3168]
         bltzl t0, 0x802a288c     // unlikely
         bltzl s0, 0x802a28b0     // unlikely

    loc_0x802aed04: // orphan
         v0 = halfword [0 - 0x30fc]
         v0 = halfword [0 - 0x30ec]
         v0 = halfword [0 - 0x30e0]
         bltzl t0, 0x802a2a24     // unlikely
         bltzl s0, 0x802a2a48     // unlikely

    loc_0x802aed1c: // orphan
         bltzl t0, 0x802a2c00     // unlikely
         bltzl s0, 0x802a2c14     // unlikely

    loc_0x802aed28: // orphan
         bltzl s0, 0x802a2f2c     // unlikely
         bltzl t0, 0x802a2f10     // unlikely

    loc_0x802aed2c: // orphan
         bltzl s0, 0x802a2f2c     // unlikely
         bltzl t0, 0x802a2f10     // unlikely

    loc_0x802aed34: // orphan
         bltzl t0, 0x802a2ed8     // unlikely
         bltzl s0, 0x802a2f6c     // unlikely

    loc_0x802aed38: // orphan
         bltzl t0, 0x802a2ed8     // unlikely
         bltzl s0, 0x802a2f6c     // unlikely

    loc_0x802aed40: // orphan
         bltzl s0, 0x802a2f64     // unlikely
         v0 = halfword [0 - 0x2f48]

    loc_0x802aed44: // orphan
         bltzl s0, 0x802a2f64     // unlikely
         v0 = halfword [0 - 0x2f48]

    loc_0x802aed48: // orphan
         bltzl t0, 0x802a305c     // unlikely
         bltzl s0, 0x802a3080     // unlikely

    loc_0x802aed54: // orphan
         v0 = halfword [s0 - 0x2f20]
         v0 = halfword [t0 - 0x2f04]
         v0 = halfword [s0 - 0x2ee8]
         bltzl t0, 0x802a31d4     // unlikely
         bltzl s0, 0x802a31e8     // unlikely

    loc_0x802aed6c: // orphan
         bltzl t0, 0x802a3660     // unlikely
         bltzl s0, 0x802a3674     // unlikely

    loc_0x802aed78: // orphan
         bltzl s0, 0x802a371c     // fcn.802af284-0xbb68 // unlikely
         bltzl t0, 0x802a3950     // fcn.802af284-0xb934 // unlikely

    loc_0x802aed84: // orphan
         bltzl t0, 0x802a39a8     // fcn.802af284-0xb8dc // unlikely
         bltzl s0, 0x802a39dc     // fcn.802af284-0xb8a8 // unlikely

    loc_0x802aed90: // orphan
         bltzl s0, 0x802a3a04     // fcn.802af284-0xb880 // unlikely
         bltzl t0, 0x802a3c38     // fcn.802af284-0xb64c // unlikely

    loc_0x802aed9c: // orphan
         bltzl t0, 0x802a3c90     // fcn.802af284-0xb5f4 // unlikely
         bltzl s0, 0x802a3cc4     // fcn.802af284-0xb5c0 // unlikely

    loc_0x802aeda0: // orphan
         bltzl t0, 0x802a3c90     // fcn.802af284-0xb5f4 // unlikely
         bltzl s0, 0x802a3cc4     // fcn.802af284-0xb5c0 // unlikely

    loc_0x802aeda8: // orphan
         bltzl s0, 0x802a3cec     // fcn.802af284-0xb598 // unlikely
         bltzl t0, 0x802a3f40     // unlikely

    loc_0x802aedac: // orphan
         bltzl s0, 0x802a3cec     // fcn.802af284-0xb598 // unlikely
         bltzl t0, 0x802a3f40     // unlikely

    loc_0x802aedb4: // orphan
         v0 = halfword [0 - 0x2b58]

    loc_0x802aedb8: // orphan
         v0 = halfword [0 - 0x2b3c]
         v0 = halfword [t0 - 0x2b30]
         v0 = halfword [s0 - 0x2b10]
         v0 = halfword [0 - 0x2acc]
         v0 = halfword [0 - 0x2abc]
         bltzl t0, 0x802a4340     // fcn.802a4330+0x10 // unlikely
         bltzl s0, 0x802a4374     // fcn.802a4360+0x14 // unlikely

    loc_0x802aedd8: // orphan
         bltzl t0, 0x802a453c     // fcn.802af284-0xad48 // unlikely
         bltzl s0, 0x802a4550     // fcn.802af284-0xad34 // unlikely

    loc_0x802aede4: // orphan
         bltzl s0, 0x802a4588     // fcn.802af284-0xacfc // unlikely
         v0 = halfword [t0 - 0x2a04]

    loc_0x802aedec: // orphan
         v0 = halfword [s0 - 0x2a00]
         v0 = halfword [t0 - 0x2a08]
         v0 = halfword [s0 - 0x29f4]
         bltzl 0, 0x802a47bc      // fcn.802af284-0xaac8 // unlikely
         v0 = halfword [0 - 0x295c]

    loc_0x802aee00: // orphan
         v0 = halfword [0 - 0x294c]
         v0 = halfword [0 - 0x28e8]
         v0 = halfword [t0 - 0x28a8]
         v0 = halfword [s0 - 0x28a0]
         v0 = halfword [0 - 0x28a4]
         v0 = halfword [t0 - 0x2898]
         v0 = halfword [s0 - 0x2894]
         v0 = halfword [t0 - 0x2880]
         v0 = halfword [s0 - 0x2878]
         v0 = halfword [0 - 0x287c]
         v0 = halfword [t0 - 0x2870]
         v0 = halfword [s0 - 0x2868]
         bltzl t0, 0x802a4c84     // fcn.802af284-0xa600 // unlikely
         bltzl s0, 0x802a4cb8     // fcn.802af284-0xa5cc // unlikely

    loc_0x802aee34: // orphan
         v0 = halfword [0 - 0x294c]
         v0 = halfword [0 - 0x28e8]
         v0 = halfword [t0 - 0x28a8]
         v0 = halfword [s0 - 0x28a0]
         v0 = halfword [0 - 0x28a4]
         v0 = halfword [t0 - 0x2898]
         v0 = halfword [s0 - 0x2894]
         v0 = halfword [t0 - 0x2880]
         v0 = halfword [s0 - 0x2878]
         v0 = halfword [0 - 0x287c]
         v0 = halfword [t0 - 0x2870]
         v0 = halfword [s0 - 0x2868]
         bltzl t0, 0x802a4c84     // fcn.802af284-0xa600 // unlikely
         bltzl s0, 0x802a4cb8     // fcn.802af284-0xa5cc // unlikely

    loc_0x802aee3c: // orphan
         bltzl t0, 0x802a4d60     // unlikely
         bltzl s0, 0x802a4d74     // fcn.802af284-0xa510 // unlikely

    loc_0x802aee48: // orphan
         v0 = halfword [s0 - 0x2848]
         v0 = halfword [0 - 0x2824]
         bltzl t0, 0x802a4de4     // unlikely
         bltzl s0, 0x802a4df8     // unlikely

    loc_0x802aee5c: // orphan
         v0 = halfword [t0 - 0x2800]
         v0 = halfword [s0 - 0x27f8]
         v0 = halfword [0 - 0x27e4]
         bltzl 0, 0x802a4f0c      // unlikely
         bltzl t0, 0x802a4f30     // unlikely

    loc_0x802aee74: // orphan
         v0 = halfword [0 - 0x27c0]
         v0 = halfword [t0 - 0x27b4]
         v0 = halfword [s0 - 0x27ac]
         v0 = halfword [0 - 0x27a4]
         bltzl t0, 0x802a5058     // unlikely
         bltzl s0, 0x802a506c     // unlikely

    loc_0x802aee90: // orphan
         v0 = halfword [0 - 0x2740]
         bltzl t0, 0x802a51c8     // fcn.802af284-0xa0bc // unlikely
         bltzl s0, 0x802a51dc     // unlikely

    loc_0x802aeea0: // orphan
         v0 = halfword [t0 - 0x26e8]
         v0 = halfword [s0 - 0x26e4]
         v0 = halfword [0 - 0x26a0]
         v0 = halfword [0 - 0x2660]
         // CODE XREF from fcn.81b5c8e4 @ +0x190
         v0 = halfword [0 - 0x2648]
         v0 = halfword [0 - 0x2630]
         v0 = halfword [0 - 0x2620]
         v0 = halfword [0 - 0x2610]
         v0 = halfword [0 - 0x25f8]
         bltzl t0, 0x802a5758     // unlikely
         bltzl s0, 0x802a576c     // unlikely

    loc_0x802aeed0: // orphan
         bltzl s0, 0x802a57b4     // unlikely
         bltzl t0, 0x802a57e8     // unlikely

    loc_0x802aeedc: // orphan
         bltzl t0, 0x802a5830     // unlikely
         bltzl s0, 0x802a5844     // unlikely

    loc_0x802aeee4: // orphan
         v0 = halfword [0 - 0x2554]

    loc_0x802aeee8: // orphan
         v0 = halfword [t0 - 0x2538]
         v0 = halfword [s0 - 0x2534]
         v0 = halfword [t0 - 0x2520]
         v0 = halfword [s0 - 0x250c]
         v0 = halfword [t0 - 0x24f8]
         v0 = halfword [s0 - 0x24f0]
         v0 = halfword [0 - 0x24f4]
         v0 = halfword [t0 - 0x24e8]
         v0 = halfword [s0 - 0x24e4]
         v0 = halfword [t0 - 0x24d0]
         v0 = halfword [s0 - 0x24b8]
         v0 = halfword [0 - 0x24bc]
         bltzl t0, 0x802a5c4c     // unlikely
         bltzl s0, 0x802a5c80     // unlikely

    loc_0x802aef24: // orphan
         v0 = halfword [s0 - 0x24a4]
         // CODE XREF from fcn.802cb7dc @ 0x802cb824
         v0 = halfword [0 - 0x2480]
         v0 = halfword [0 - 0x2440]
         v0 = halfword [0 - 0x241c]
         v0 = halfword [0 - 0x2410]

    loc_0x802aef38: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac3c4
         v0 = halfword [0 - 0x2404]
         v0 = halfword [0 - 0x23f8]
         v0 = halfword [0 - 0x23f0]
         bltzl t0, 0x802a6018     // unlikely
         bltzl s0, 0x802a602c     // unlikely

    loc_0x802aef50: // orphan
         bltzl t0, 0x802a60a4     // unlikely
         bltzl s0, 0x802a60b8     // unlikely

    loc_0x802aef5c: // orphan
         v0 = halfword [t0 - 0x238c]
         v0 = halfword [s0 - 0x2388]
         bltzl t0, 0x802a6178     // unlikely
         bltzl s0, 0x802a618c     // unlikely

    loc_0x802aef70: // orphan
         v0 = halfword [s0 - 0x232c]
         v0 = halfword [0 - 0x2318]
         bltzl 0, 0x802a633c      // unlikely
         v0 = halfword [0 - 0x22f8]

    loc_0x802aef80: // orphan
         bltzl t0, 0x802a63c4     // unlikely
         bltzl s0, 0x802a63d8     // unlikely

    loc_0x802aef8c: // orphan
         bltzl 0, 0x802a6460      // unlikely
         v0 = halfword [0 - 0x22b0]

    loc_0x802aef94: // orphan
         bltzl t0, 0x802a64f8     // unlikely
         bltzl s0, 0x802a650c     // unlikely

    loc_0x802aefa0: // orphan
         bltzl s0, 0x802a6534     // unlikely
         v0 = halfword [t0 - 0x2358]

    loc_0x802aefa8: // orphan
         v0 = halfword [s0 - 0x228c]
         v0 = halfword [0 - 0x2278]
         bltzl t0, 0x802a65f4     // unlikely
         bltzl s0, 0x802a6608     // unlikely

    loc_0x802aefbc: // orphan
         bltzl s0, 0x802a6650     // unlikely
         bltzl t0, 0x802a6664     // unlikely

    loc_0x802aefc8: // orphan
         v0 = halfword [0 - 0x2238]
         bltzl t0, 0x802a6710     // unlikely
         bltzl s0, 0x802a6724     // unlikely

    loc_0x802aefd8: // orphan
         bltzl 0, 0x802a678c      // fcn.802a6738+0x54 // unlikely
         bltzl t0, 0x802a67b0     // fcn.802a6738+0x78 // unlikely

    loc_0x802aefe4: // orphan
         bltzl t0, 0x802a67d8     // fcn.802a6738+0xa0 // unlikely
         bltzl s0, 0x802a67ec     // unlikely

    loc_0x802aeff0: // orphan
         bltzl t0, 0x802a68b4     // unlikely
         bltzl s0, 0x802a68c8     // unlikely

    loc_0x802aeffc: // orphan
         bltzl s0, 0x802a68f0     // unlikely
         bltzl t0, 0x802a6b04     // unlikely

    loc_0x802af038: // orphan
         v0 = halfword [0 - 0x2060]
         v0 = halfword [0 - 0x2054]
         v0 = halfword [0 - 0x204c]
         bltzl t0, 0x802a6f38     // unlikely
         bltzl s0, 0x802a6f4c     // unlikely

    loc_0x802af050: // orphan
         bltzl s0, 0x802a6ff4     // unlikely
         v0 = halfword [t0 - 0x203c]

    loc_0x802af058: // orphan
         v0 = halfword [s0 - 0x2038]
         v0 = halfword [0 - 0x200c]
         bltzl t0, 0x802a7054     // unlikely
         bltzl s0, 0x802a7068     // unlikely

    loc_0x802af06c: // orphan
         v0 = halfword [t0 - 0x1f68]
         v0 = halfword [s0 - 0x1f64]
         v0 = halfword [t0 - 0x1f5c]
         v0 = halfword [s0 - 0x1f58]
         v0 = halfword [0 - 0x1f44]
         v0 = halfword [0 - 0x1f38]
         bltzl t0, 0x802a73c8     // unlikely
         bltzl s0, 0x802a73dc     // unlikely

    loc_0x802af090: // orphan
         bltzl t0, 0x802a7574     // unlikely
         bltzl s0, 0x802a7588     // unlikely

    loc_0x802af09c: // orphan
         bltzl t0, 0x802a7660     // unlikely
         bltzl s0, 0x802a7674     // unlikely

    loc_0x802af0a8: // orphan
         v0 = halfword [0 - 0x1e54]
         bltzl t0, 0x802a7780     // unlikely
         bltzl s0, 0x802a7794     // unlikely

    loc_0x802af0b8: // orphan
         bltzl t0, 0x802a78ec     // unlikely
         bltzl s0, 0x802a7900     // unlikely

    loc_0x802af0c4: // orphan
         v0 = halfword [0 - 0x1d34]

    loc_0x802af0c8: // orphan
         bltzl t0, 0x802a7c1c     // unlikely
         bltzl s0, 0x802a7c30     // unlikely

    loc_0x802af0d4: // orphan
         v0 = halfword [0 - 0x1c9c]
         v0 = halfword [0 - 0x1c8c]
         v0 = halfword [0 - 0x1c78]
         v0 = halfword [0 - 0x1c48]
         v0 = halfword [0 - 0x1c18]
         v0 = halfword [0 - 0x1be8]
         bltzl t0, 0x802a81c0     // unlikely
         bltzl s0, 0x802a8234     // fcn.802a8228+0xc // unlikely

    loc_0x802af0f8: // orphan
         bltzl s0, 0x802a822c     // fcn.802a8228+0x4 // unlikely
         bltzl t0, 0x802a81f0     // fcn.802a81d8+0x18 // unlikely

    loc_0x802af104: // orphan
         bltzl t0, 0x802a8208     // unlikely
         bltzl s0, 0x802a821c     // unlikely

    loc_0x802af108: // orphan
         bltzl t0, 0x802a8208     // unlikely
         bltzl s0, 0x802a821c     // unlikely

    loc_0x802af110: // orphan
         v0 = halfword [t0 - 0x1b4c]
         v0 = halfword [s0 - 0x1b48]
         v0 = halfword [0 - 0x1ad4]
         v0 = halfword [t0 - 0x1a70]
         v0 = halfword [s0 - 0x1a6c]
         v0 = halfword [0 - 0x1a34]
         v0 = halfword [0 - 0x1a24]
         v0 = halfword [0 - 0x1a04]
         v0 = halfword [0 - 0x19d8]
         v0 = halfword [0 - 0x1990]
         v0 = halfword [0 - 0x1980]
         v0 = halfword [0 - 0x1960]
         // CODE XREF from fcn.802cb7dc @ +0x50
         v0 = halfword [0 - 0x1938]
         v0 = halfword [0 - 0x1900]
         v0 = halfword [t0 - 0x1858]
         v0 = halfword [s0 - 0x1854]
         v0 = halfword [0 - 0x17fc]
         v0 = halfword [t0 - 0x17e0]
         v0 = halfword [s0 - 0x17dc]
         v0 = halfword [t0 - 0x17c8]
         v0 = halfword [s0 - 0x17a0]
         v0 = halfword [t0 - 0x1790]
         v0 = halfword [s0 - 0x1788]
         v0 = halfword [t0 - 0x1780]
         v0 = halfword [s0 - 0x1778]
         // CODE XREF from fcn.802cb7dc @ 0x802cb830
         v0 = halfword [t0 - 0x1768]
         v0 = halfword [s0 - 0x1764]
         bltzl t0, 0x802a93b0     // unlikely
         bltzl s0, 0x802a93c4     // unlikely

    loc_0x802af188: // orphan
         v0 = halfword [s0 - 0x174c]
         bltzl 0, 0x802a9490      // unlikely
         bltzl t0, 0x802a9584     // unlikely

    loc_0x802af198: // orphan
         bltzl t0, 0x802a959c     // unlikely
         bltzl s0, 0x802a95b0     // unlikely

    loc_0x802af1a4: // orphan
         bltzl s0, 0x802a9588     // unlikely
         bltzl t0, 0x802a953c     // unlikely

    loc_0x802af1b0: // orphan
         v0 = halfword [0 - 0x16e4]
         bltzl t0, 0x802a9668     // unlikely
         // CODE XREF from fcn.802ac294 @ 0x802ac3f4
         bltzl s0, 0x802a967c     // unlikely

    loc_0x802af1c0: // orphan
         v0 = halfword [s0 - 0x16c8]
         v0 = halfword [0 - 0x16a0]
         v0 = halfword [0 - 0x1698]

    loc_0x802af1cc: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac3f8
         bltzl t0, 0x802a9790     // unlikely
         bltzl s0, 0x802a97a4     // unlikely

    loc_0x802af1d8: // orphan
         v0 = halfword [0 - 0x1678]
         v0 = halfword [0 - 0x1660]
         v0 = halfword [0 - 0x164c]
         v0 = halfword [0 - 0x163c]
         v0 = halfword [0 - 0x1630]
         v0 = halfword [0 - 0x1600]
         v0 = halfword [0 - 0x15f0]
         v0 = halfword [0 - 0x15e8]

    loc_0x802af1f8: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb834
         v0 = halfword [0 - 0x15dc]
         v0 = halfword [0 - 0x15cc]
         // CODE XREF from fcn.802ac294 @ +0x168
         v0 = halfword [0 - 0x15c0]
         v0 = halfword [0 - 0x15b0]
         v0 = halfword [0 - 0x15a4]
         bltzl t0, 0x802a9c30     // unlikely
         bltzl s0, 0x802a9c54     // unlikely

    loc_0x802af218: // orphan
         v0 = halfword [0 - 0x1568]
         // CODE XREF from fcn.802cb7dc @ +0x5c
         bltzl t0, 0x802a9ce0     // unlikely
         bltzl s0, 0x802a9cf4     // unlikely

    loc_0x802af220: // orphan
         v0 = halfword [0 - 0x1568]
         // CODE XREF from fcn.802cb7dc @ +0x5c
         bltzl t0, 0x802a9ce0     // unlikely
         bltzl s0, 0x802a9cf4     // unlikely

    loc_0x802af228: // orphan
         bltzl s0, 0x802a9d4c     // unlikely
         v0 = halfword [0 - 0x151c]

    loc_0x802af22c: // orphan
         bltzl s0, 0x802a9d4c     // unlikely
         v0 = halfword [0 - 0x151c]

    loc_0x802af230: // orphan
         bltzl t0, 0x802a9de4     // unlikely
         bltzl s0, 0x802a9df8     // unlikely

    loc_0x802af23c: // orphan
         bltzl s0, 0x802a9f40     // unlikely
         bltzl t0, 0x802a9f04     // unlikely

    loc_0x802af248: // orphan
         bltzl t0, 0x802a9e9c     // unlikely
         bltzl s0, 0x802a9ef0     // unlikely

    loc_0x802af254: // orphan
         bltzl s0, 0x802a9ee8     // unlikely
         v0 = halfword [0 - 0x14b0]

    loc_0x802af25c: // orphan
         bltzl t0, 0x802a9fc0     // unlikely
         bltzl s0, 0x802a9fd4     // unlikely

    loc_0x802af268: // orphan
         v0 = halfword [s0 - 0x1484]
         v0 = halfword [0 - 0x1464]
         // CODE XREF from fcn.802cb7dc @ 0x802cb83c
         bltzl t0, 0x802aa104     // fcn.802aa09c+0x68 // unlikely
         bltzl s0, 0x802aa138     // fcn.802aa09c+0x9c // unlikely

    loc_0x802af27c: // orphan
         v0 = halfword [s0 - 0x144c]
         v0 = halfword [0 - 0x143c]

    loc_0x802af38c: // orphan
         v0 = halfword [0 - 0x9f0]
         v0 = halfword [0 - 0x9e8]
         v0 = halfword [0 - 0x98c]
         v0 = halfword [0 - 0x984]
         v0 = halfword [0 - 0x97c]
         v0 = halfword [0 - 0x8a0]
         v0 = halfword [0 - 0x894]
         v0 = halfword [0 - 0x884]
         v0 = halfword [t0 - 0x87c]
         // CODE XREF from fcn.802ac294 @ 0x802ac41c
         v0 = halfword [s0 - 0x878]
         v0 = halfword [t0 - 0x874]
         v0 = halfword [s0 - 0x868]
         v0 = halfword [0 - 0x834]
         v0 = halfword [t0 - 0x824]

    loc_0x802af3f4: // orphan
         v0 = halfword [0 - 0x69c]
         v0 = halfword [0 - 0x62c]
         v0 = halfword [0 - 0x5ec]
         v0 = halfword [t0 - 0x5e0]
         v0 = halfword [s0 - 0x5dc]
         // CODE XREF from fcn.802cb7dc @ 0x802cb854
         v0 = halfword [0 - 0x5c8]
         v0 = halfword [t0 - 0x5b8]
         v0 = halfword [s0 - 0x5b4]
         bltzl t0, 0x802adde8     // unlikely
         bltzl s0, 0x802ade6c     // unlikely

    loc_0x802af420: // orphan
         bltzl s0, 0x802ade64     // unlikely
         bltzl t0, 0x802ade18     // unlikely

    loc_0x802af42c: // orphan
         bltzl t0, 0x802ade30     // unlikely
         bltzl s0, 0x802ade54     // unlikely

    loc_0x802af438: // orphan
         bltzl t0, 0x802adfec     // unlikely
         bltzl s0, 0x802ae010     // unlikely

    loc_0x802af43c: // orphan
         bltzl t0, 0x802adfec     // unlikely
         bltzl s0, 0x802ae010     // unlikely

    loc_0x802af444: // orphan
         v0 = halfword [s0 - 0x4f8]
         // CODE XREF from fcn.802ac294 @ +0x190
         v0 = halfword [0 - 0x488]

    loc_0x802af44c: // orphan
         // CODE XREF from fcn.802ad1c8 @ 0x802cb858
         v0 = halfword [0 - 0x464]
         v0 = halfword [0 - 0x40c]
         v0 = halfword [0 - 0x404]
         v0 = halfword [0 - 0x3b4]
         v0 = halfword [0 - 0x3ac]
         v0 = halfword [0 - 0x3a4]
         v0 = halfword [0 - 0x354]
         v0 = halfword [0 - 0x34c]
         v0 = halfword [0 - 0x2fc]
         v0 = halfword [0 - 0x2f4]
         v0 = halfword [0 - 0x2a0]
         v0 = halfword [0 - 0x298]

    loc_0x802af47c: // orphan
         v0 = halfword [0 - 0x248]
         v0 = halfword [0 - 0x240]
         bltzl t0, 0x802aed98     // fcn.802cb7dc-0x1ca44 // unlikely
         bltzl s0, 0x802aedac     // unlikely

    loc_0x802af490: // orphan
         v0 = halfword [t0 - 0xa0]
         v0 = halfword [s0 - 0x8c]
         v0 = halfword [t0 - 0x78]
         v0 = halfword [s0 - 0x70]
         v0 = halfword [0 - 0x74]
         v0 = halfword [t0 - 0x68]
         v0 = halfword [s0 - 0x64]
         bltzl t0, 0x802af350     // fcn.802af284+0xcc // unlikely
         bltzl s0, 0x802af364     // fcn.802af284+0xe0 // unlikely

    loc_0x802af4b8: // orphan
         bltzl 0, 0x802af43c      // unlikely
         v0 = halfword [t0 - 0x14]

    loc_0x802af4bc: // orphan
         bltzl 0, 0x802af43c      // unlikely
         v0 = halfword [t0 - 0x14]

    loc_0x802af4c0: // orphan
         v0 = halfword [s0 - 0xc]
         bltzl t0, 0x802af488     // unlikely
         bltzl s0, 0x802af4bc     // unlikely

    loc_0x802af4d0: // orphan
         bgezl t0, 0x802af514     // likely
         bgezl s0, 0x802af528     // likely

    loc_0x802af4dc: // orphan
         v1 = halfword [t0 + 0x38]
         v1 = halfword [s0 + 0x3c]
         bgezl t0, 0x802af658     // fcn.802af518+0x140 // likely
         bgezl s0, 0x802af66c     // fcn.802af518+0x154 // likely

    loc_0x802af4f0: // orphan
         v1 = halfword [s0 + 0x4c]
         v1 = halfword [0 + 0x70]
         bgezl 0, 0x802af6dc      // fcn.802af518+0x1c4 // likely
         // CODE XREF from fcn.802ac294 @ 0x802ac428
         bgezl t0, 0x802af700     // fcn.802af518+0x1e8 // likely

    loc_0x802af504: // orphan
         bgezl t0, 0x802af738     // fcn.802af518+0x220 // likely
         bgezl s0, 0x802af76c     // likely

    loc_0x802af510: // orphan
         bgezl 0, 0x802af7d4      // likely
         bgezl t0, 0x802af7f8     // likely

    loc_0x802af51c: // orphan
           // CALL XREF from fcn.80b70b3c @ +0x5ac
         bgezl s0, 0x802af80c     // likely
         v1 = halfword [0 + 0xcc]

    loc_0x802af528: // orphan
         bgezl 0, 0x802af8fc      // fcn.802af804+0xf8 // likely
         v1 = halfword [0 + 0x128]

    loc_0x802af76c: // orphan
         v1 = halfword [t0 + 0x978]
         v1 = halfword [s0 + 0x97c]
         bgezl t0, 0x802b1d1c     // likely
         bgezl s0, 0x802b1d30     // likely

    loc_0x802af7f8: // orphan
         bgezl s0, 0x802b22ec     // fcn.802b14f0+0xdfc // likely
         bgezl 0, 0x802b2310      // likely

    loc_0x802af850: // orphan
         bgezl t0, 0x802b26c0     // likely
         bgezl s0, 0x802b2714     // likely

    loc_0x802af8f0: // orphan
         bgezl s0, 0x802b3554     // fcn.802b30a0+0x4b4 // likely

    loc_0x802afa48: // orphan
         v1 = halfword [t0 + 0x13fc]

    loc_0x802afac4: // orphan
         v1 = halfword [s0 + 0x16ec]
         v1 = halfword [t0 + 0x178c]
         v1 = halfword [s0 + 0x1790]
         bgezl 0, 0x802b5994      // likely
         v1 = halfword [0 + 0x182c]

    loc_0x802afc48: // orphan
         bgezl t0, 0x802b874c     // likely
         bgezl s0, 0x802b87a0     // likely

    loc_0x802afc54: // orphan
         bgezl s0, 0x802b8798     // likely
         bgezl t0, 0x802b877c     // likely

    loc_0x802afc60: // orphan
         v1 = halfword [0 + 0x22d8]
         v1 = halfword [t0 + 0x233c]
         v1 = halfword [s0 + 0x2340]
         v1 = halfword [t0 + 0x2348]
         v1 = halfword [s0 + 0x2350]
         v1 = halfword [t0 + 0x243c]
         v1 = halfword [s0 + 0x2440]
         v1 = halfword [0 + 0x24bc]
         v1 = halfword [t0 + 0x24dc]
         v1 = halfword [s0 + 0x24e0]
         bgezl 0, 0x802b90bc      // likely
         bgezl 0, 0x802b93f0      // fcn.82bea63c-0x293124c // likely

    loc_0x802afc94: // orphan
         bgezl s0, 0x802b94b8     // likely
         v1 = halfword [0 + 0x263c]

    loc_0x802afc9c: // orphan
         bgezl 0, 0x802b9690      // fcn.82bea63c-0x2930fac // likely
         bgezl t0, 0x802b9734     // likely

    loc_0x802afca8: // orphan
         v1 = halfword [0 + 0x26d0]
         bgezl t0, 0x802b9810     // likely
         bgezl s0, 0x802b9824     // likely

    loc_0x802afcb8: // orphan
         bgezl 0, 0x802b9a2c      // likely
         bgezl 0, 0x802b9b20      // likely

    loc_0x802afcc4: // orphan
         bgezl 0, 0x802b9bc8      // fcn.82bea63c-0x2930a74 // likely
         bgezl 0, 0x802b9c3c      // fcn.82bea63c-0x2930a00 // likely

    loc_0x802afcd0: // orphan
         bgezl t0, 0x802b9d70     // likely
         bgezl s0, 0x802b9dd4     // fcn.802b9cc8+0x10c // likely

    loc_0x802afcdc: // orphan
         bgezl s0, 0x802b9dbc     // fcn.802b9cc8+0xf4 // likely
         bgezl t0, 0x802b9da0     // fcn.802b9cc8+0xd8 // likely

    loc_0x802afe30: // orphan
         v1 = halfword [t0 + 0x2fc0]
         v1 = halfword [s0 + 0x2fc8]
         bgezl t0, 0x802bbdc0     // likely
         bgezl s0, 0x802bbe04     // likely

    loc_0x802afe3c: // orphan
         bgezl s0, 0x802bbdec     // likely
         bgezl 0, 0x802bbe00      // likely

    loc_0x802aff2c: // orphan
         v1 = halfword [t0 + 0x3434]

    loc_0x802afffc: // orphan
         // CODE XREF from fcn.81a85ac4 @ +0x14ac
         tge s0, v1, 0xdf

    loc_0x802b027c: // orphan
         tge s0, v1, 0xfb
         teq s0, v1, 0xfb

    loc_0x802b0398: // orphan
         tge s0, v1, 0x101
         teq s0, v1, 0x101

    loc_0x802b076c: // orphan
         a3 = a0 << 0x10
         v1 = a1 & 0xff           // a2
         a3 = , signed  a3 >> 0x10 // t9

    loc_0x802b0778: // orphan
         a2 &= 0xff
         [sp + 0x14] = ra
         [sp + 0x20] = a0
         if                       // unlikely
         [sp + 0x24] = a1

    loc_0x802b078c: // orphan
         t6 = 0 + 1               // lo
         goto 0x802b079c
         [sp + 0x1c] = t6

    loc_0x802b0798: // orphan
         [sp + 0x1c] = 0

    loc_0x802b079c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b0790
         if                       // unlikely
         a0 = a2

    loc_0x802b07a4: // orphan
         t7 = 0 + 1               // lo
         goto 0x802b07b4
         [sp + 0x18] = t7

    loc_0x802b07b0: // orphan
         [sp + 0x18] = 0

    loc_0x802b07b4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b07a8
         at = 0 + 0x800
         if                       // likely
         v0 = 0x8860 << 16

    loc_0x802b07c0: // orphan
         v0 = [v0 + 0x189c]       // t9
         t8 = halfword [v0 + 0xa]
         t9 = t8 - v1
         goto 0x802b07f0
         halfword [v0 + 0xa] = t9

    loc_0x802b07d4: // orphan
         at = 0 + 0x400
         if                       // likely
         v0 = 0x8860 << 16

    loc_0x802b07e0: // orphan
         v0 = [v0 + 0x189c]       // t9
         t0 = halfword [v0 + 0xa]
         t1 = t0 + a0
         halfword [v0 + 0xa] = t1

    loc_0x802b07f0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b07cc
         a0 = 0x8860 << 16
         call 0x88001d0c          // 0x88001d0c(0x88600000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x189c]       // t9
         a0 = 0x8860 << 16
         call 0x88307fb0          // 0x88307fb0(0x88600000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x189c]       // t9
         t3 = 0x8860 << 16
         t3 = [t3 + 0x189c]       // t9
         t2 = 0x8860 << 16
         t2 = [t2 + 0x1898]       // t9
         t4 = halfword [t3 + 8]
         v0 = 0x8831 << 16
         v0 -= 0x7208
         t5 = t4 << 2

    loc_0x802b0828: // orphan
         t6 = t2 + t5
         t7 = [t6 + 0]            // t9
         t8 = , unsigned  halfword [t7 + 0]
         halfword [v0 + 0] = t8
         call 0x8004b7a4          // 0x8004b7a4(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802b083c: // orphan
         a0 = t8 & 0xffff
         a0 = 0x8831 << 16
         a1 = 0x8831 << 16
         a1 = , unsigned  halfword [a1 - 0x7208]
         call 0x80042fbc          // 0x80042fbc(0x88310000, 0xffff, 0x8, -1)
         a0 = [a0 - 0x7218]       // t9
         a0 = 0x8831 << 16
         call 0x8004b7a4          // 0x8004b7a4(0x88310000, 0xffff, 0x8, -1)
         a0 = , unsigned  halfword [a0 - 0x7208]
         v1 = 0x8831 << 16
         a0 = , unsigned  halfword [v1 - 0x7208]
         at = 0x8831 << 16
         // CODE XREF from fcn.802cb7dc @ 0x802cb8a8
         call 0x8004b7a4          // 0x8004b7a4(0xffff, 0xffff, 0x8, -1)

    loc_0x802b0af4: // orphan
         if                       // unlikely
         a0 = 0x8831 << 16

    loc_0x802b0afc: // orphan
         goto 0x802b0be0          // fcn.802af518+0x16c8
         ra = [sp + 0x1c]

    loc_0x802b0b88: // orphan
         a0 -= 0x71e8
         call 0x880002f4          // 0x880002f4(0xffff8e17, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 4
         [sp + 0x10] = t6
         a0 = 0 + 0x69
         a1 = 0 + 0xa0
         a2 = 0 + 0xc9
         a3 = 0 + 0xf2
         call 0x88306e90          // 0x88306e90(0x69, 0xa0, 0xc9, 0xf2)
         [sp + 0x14] = 0
         call 0x880022f0          // 0x880022f0(0x69, 0xa0, 0xc9, 0xf2)
         
         at = 0x8831 << 16
         byte [at - 0x7201] = 0
         at = 0x8831 << 16
         byte [at - 0x71fc] = 0
         at = 0x8831 << 16
         byte [at - 0x7200] = 0
         at = 0x8831 << 16
         halfword [at - 0x71fe] = 0
         ra = [sp + 0x1c]

    loc_0x802b0c24: // orphan
         a0 = 0 + 1               // lo
         t7 = [sp + 0x20]         // t9
         beql t7, 0, 0x802b0c40   // unlikely
         t8 = [sp + 0x24]

    loc_0x802b0c34: // orphan
         call 0x88306404          // 0x88306404(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         t8 = [sp + 0x24]

    loc_0x802b0c40: // orphan
         beql t8, 0, 0x802b0c54   // unlikely
         ra = [sp + 0x14]

    loc_0x802b0c48: // orphan
         call 0x88306404          // 0x88306404(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         ra = [sp + 0x14]

    loc_0x802b0c54: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x802b0ccc: // orphan
         [sp + 0x30] = a0
         a1 = [sp + 0x30]         // t9
         [sp + 0x2c] = ra
         a0 = 0 + 0x108
         call 0x8004c990          // 0x8004c990(0x108, -1, 0x8, -1)
         a1 += 1
         call 0x8004d1fc          // 0x8004d1fc(0x108, 0x100000000, 0x8, -1)
         a0 = v0                  // s4
         a0 = [sp + 0x30]         // t9
         t6 = 0 - 0x10
         t7 = 0 - 0x10
         at = a0                  // t9
         a0 <<= 4
         a0 -= at
         a0 <<= 2
         a0 += 0x43
         a0 <<= 0x10
         t8 = 0 + 0x400
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         a0 = , signed  a0 >> 0x10
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a1 = 0 + 0xd5
         a2 = 0 + 0x3c
         a3 = 0 + 0x3e
         call 0x80044270          // 0x80044270(0xffff0007, 0xd5, 0x3c, 0x3e)
         [sp + 0x20] = 0
         ra = [sp + 0x2c]
         sp += 0x30
         ret                      // ra
         

    loc_0x802b0dd8: // orphan
         a3 = 0x8831 << 16
         a3 -= 0x776c
         a0 = 0 + 0x97
         a1 = 0 + 0x64
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x97, 0x64, 0x0, 0x88308894)
         [sp + 0x10] = t7

    loc_0x802b0df4: // orphan
         s0 = 0x8860 << 16
         s0 += 0x1890
         v0 = [s0 + 0]            // t9
         a0 = 0 + 0xec
         a1 = 0 + 0x84
         t8 = [v0 + 0]
         a2 = 0 + 2
         a3 = 0x8831 << 16
         at = , t8 < 4
         bnel at, 0, 0x802b0ee4   // unlikely
         // CODE XREF from fcn.802ac294 @ 0x802ac5f8
         t3 = , unsigned  byte [v0 + 0x38b] // s4

    loc_0x802b0e20: // orphan
         t9 = , unsigned  byte [v0 + 0x38e] // s4
         a3 = 0x8831 << 16
         a3 -= 0x7764
         a0 = 0 + 0xec

    loc_0x802b0e30: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac5fc
         a1 = 0 + 0x98
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(-1, 0x98, 0x2, -1)
         [sp + 0x10] = t9
         t0 = [s0 + 0]
         a3 = 0x8831 << 16
         a3 -= 0x7760
         t1 = , unsigned  byte [t0 + 0x38f] // s4
         a0 = 0 + 0xec
         a1 = 0 + 0xac
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xec, 0xac, 0x2, 0x883088a0)
         [sp + 0x10] = t1
         call 0x80049668          // 0x80049668(0xec, 0xac, 0x2, 0x883088a0)
         a0 = 0 + 1               // lo

    loc_0x802b0e6c: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb8b8
         s0 = 0
         s1 = 0 + 0x98
         s2 = 0 + 2

    loc_0x802b0e78: // orphan
         a0 = 0 + 0x28
         call 0x8004c874          // "$\n" // 0x8004c874(0x28, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 4
         t2 = 0 + 1               // lo

    loc_0x802b0e88: // orphan
         [sp + 0x10] = t2
         // CODE XREF from fcn.802ac294 @ 0x802ac608
         a0 = [s3 + 0]
         a1 = 0 + 0x4d
         a2 = s1
         call 0x80048e30          // 0x80048e30(0x88013904, 0x4d, 0x442f71dcfe117dbd, -1)
         a3 = v0                  // s4
         // CODE XREF from fcn.802cb7dc @ +0xe0
         s0 += 1
         if                       // likely
         s1 += 0x14

    loc_0x802b0eac: // orphan
         a0 = 0 + 8               // a2

    loc_0x802b0eb0: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac60c
         call 0x800496a4          // 0x800496a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0 + 0x28
         call 0x8004c874          // 0x8004c874(0x28, 0x1, 0x8, -1)
         a1 = 0 + 0x14
         a0 = 0 + 0x9d
         a1 = 0 + 0x7c
         a2 = 0 + 1               // lo
         call 0x80049064          // 0x80049064(0x9d, 0x7c, 0x1, -1)
         a3 = v0                  // s4
         goto 0x802b0f84
         ra = [sp + 0x2c]

    loc_0x802b0ee4: // orphan
         a3 -= 0x775c
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x8, 0xffffffffffff88a3)
         [sp + 0x10] = t3
         t4 = [s0 + 0]
         a3 = 0x8831 << 16
         a3 -= 0x7758
         t5 = , unsigned  byte [t4 + 0x38c] // s4

    loc_0x802b0f00: // orphan
         a0 = 0 + 0xec
         a1 = 0 + 0x98
         // CODE XREF from fcn.802ac294 @ 0x802ac614
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xec, 0x98, 0x2, -1)
         [sp + 0x10] = t5
         t6 = [s0 + 0]
         a3 = 0x8831 << 16

    loc_0x802b0f1c: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac618
         a3 -= 0x7754
         t7 = , unsigned  byte [t6 + 0x38d] // s4
         a0 = 0 + 0xec
         a1 = 0 + 0xac
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xec, 0xac, 0x2, 0xffffffffffff88ab)
         [sp + 0x10] = t7
         call 0x80049668          // 0x80049668(0xec, 0xac, 0x2, 0xffffffffffff88ab)
         a0 = 0 + 1               // lo
         s0 = 0
         s1 = 0 + 0x84
         s2 = 0 + 3

    loc_0x802b0f4c: // orphan
         a0 = 0 + 0x28
         call 0x8004c874          // 0x8004c874(0x28, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 3
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [s3 + 0]
         a1 = 0 + 0x4d
         a2 = s1
         call 0x80048e30          // 0x80048e30(0x88013904, 0x4d, 0x442f71dcfe117dbd, -1)
         a3 = v0                  // s4
         s0 += 1
         if                       // likely
         s1 += 0x14

    loc_0x802b0f7c: // orphan
         a0 = 0 + 0x28
         call 0x8004c874          // 0x8004c874(0x28, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + 3
         t8 = 0 + 1               // lo
         [sp + 0x10] = t8
         a0 = [s3 + 0]
         a1 = 0 + 0x4d
         a2 = s1
         call 0x80048e30          // 0x80048e30(0x88013904, 0x4d, 0x442f71dcfe117dbd, -1)
         a3 = v0                  // s4
         s0 += 1
         if                       // likely
         s1 += 0x14

    loc_0x802b0f80: // orphan
         ra = [sp + 0x2c]

    loc_0x802b0f84: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b0ed8
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret                      // ra
         sp += 0x30

    loc_0x802b0fe4: // orphan
         [v0 + 4] = t3
         v0 = [v1 + 0]
         t6 = 0xa0a0 << 16
         t6 |= 0x96ff
         t4 = v0 + 8
         [v1 + 0] = t4
         t5 = 0xfa00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t9 = 0xa0a << 16
         t2 = 0x8831 << 16

    loc_0x802b1014: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cb8c0
         t7 = v0 + 8
         [v1 + 0] = t7
         t9 |= 0xaff
         t8 = 0xfb00 << 16
         t2 -= 0x7201
         [v0 + 0] = t8
         [v0 + 4] = t9
         a1 = byte [t2 + 0]       // s4
         call 0x8004c990          // 0x8004c990(-1, 0xff, 0x8, -1)
         a0 = 0 + 0x9b
         a0 = 0 + 0x1fa
         a1 = 0 + 0x16e
         a2 = v0                  // s4
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x1fa, 0x16e, 0xff, 0x0)
         [sp + 0x10] = 0
         t3 = 0x8831 << 16
         t3 = , unsigned  byte [t3 - 0x7200]

    loc_0x802b105c: // orphan
         t2 = 0x8831 << 16
         t2 -= 0x7201
         blezl t3, 0x802b1080     // unlikely
         t6 = byte [t2 + 0]

    loc_0x802b106c: // orphan
         t4 = byte [t2 + 0]
         t5 = t4 + 2
         goto 0x802b1088
         byte [t2 + 0] = t5

    loc_0x802b1080: // orphan
         t7 = t6 + 1
         byte [t2 + 0] = t7

    loc_0x802b1088: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b1074
         v0 = byte [t2 + 0]
         at = , v0 < 0xf
         if                       // unlikely
         t8 = v0 - 0xf

    loc_0x802b1098: // orphan
         byte [t2 + 0] = t8

    loc_0x802b109c: // orphan
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x802b1158: // orphan
         a1 = 0

    loc_0x802b115c: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802ac648
         a1 = 0x8831 << 16
         a1 = halfword [a1 - 0x70f0]
         a0 = 0 + 0x123
         a2 = v0                  // s4
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x123, 0xffff, 0xff, 0x0)
         [sp + 0x10] = 0
         ra = [sp + 0x3c]
         sp += 0x40
         ret
         

    loc_0x802b11f0: // orphan
         v0 = 0 + 3
         at = 0x8831 << 16
         goto 0x802b1214
         byte [at - 0x71f3] = v0

    loc_0x802b1214: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b11f8
         at = 0x8831 << 16
         byte [at - 0x71f6] = v0
         at = 0x8831 << 16
         byte [at - 0x71f5] = v0
         at = 0x8831 << 16
         byte [at - 0x71f4] = v0
         // CODE XREF from fcn.802ac294 @ +0x3c4
         at = 0x8831 << 16
         byte [at - 0x71f2] = v0
         at = 0x8831 << 16
         byte [at - 0x71f1] = v0
         ra = [sp + 0x14]
         // CODE XREF from fcn.802ac294 @ +0x3c8
         at = 0x8831 << 16
         byte [at - 0x71f0] = v0
         at = 0x8831 << 16
         byte [at - 0x71f7] = v0
         ret
         sp += 0x18

    loc_0x802b1354: // orphan
         t9 = v0 - 1              // t3

    loc_0x802b1444: // orphan
         t1 -= 0x7208
         call 0x8004b7a4          // 0x8004b7a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  halfword [t1 + 0]
         goto 0x802b22dc          // fcn.802b14f0+0xdec
         

    loc_0x802b17e8: // orphan
         

    loc_0x802b1864: // orphan
         if                       // unlikely
         

    loc_0x802b18cc: // orphan
         a0 = 0 + 1               // arg1 // lo

    loc_0x802b2310: // orphan
         sp -= 0x2d8
         [sp + 0x64] = ra
         [sp + 0x60] = fp
         [sp + 0x5c] = s7
         [sp + 0x58] = s6
         [sp + 0x54] = s5
         [sp + 0x50] = s4
         // CODE XREF from fcn.802ac294 @ +0x524
         [sp + 0x4c] = s3
         [sp + 0x48] = s2
         [sp + 0x44] = s1
         [sp + 0x40] = s0
         call 0x8830609c          // 0x8830609c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2d8] = a0
         if                       // likely
         

    loc_0x802b234c: // orphan
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t8 = 0x8009 << 16
         t8 += 0x4de0
         t6 = s0 + 8
         [a0 + 0] = t6
         t7 = 0xde00 << 16
         [s0 + 0] = t7
         [s0 + 4] = t8
         s0 = [a0 + 0]
         t7 = 1 << 16
         t7 |= 1
         t9 = s0 + 8
         [a0 + 0] = t9
         t6 = 0xf700 << 16
         v0 = 0x8831 << 16
         v0 -= 0x71c8
         s6 = 0
         s3 = 0 + 4
         a2 = 0 + 1               // lo
         a1 = 0xf600 << 16
         [s0 + 0] = t6

    loc_0x802b23b0: // orphan
         [s0 + 4] = t7

    loc_0x802b2494: // orphan
         call 0x8830602c          // 0x8830602c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         t6 = 0x8831 << 16

    loc_0x802b250c: // orphan
         t7 = 0x8009 << 16
         t7 += 0x4f50
         v0 = 0x8831 << 16
         s7 = 0x8800 << 16
         s7 += 0x687c
         v0 = , unsigned  byte [v0 - 0x71f3]
         goto 0x802b4b40          // fcn.802b431c+0x824
         [sp + 0x78] = t7

    loc_0x802b2510: // orphan
         s3 = 0x8831 << 16
         s3 -= 0x7210
         call 0x80043064          // 0x80043064(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s3 + 0]            // t9
         t6 = v0 & 0xffff         // s4
         if                       // fcn.802af804+0x2d70 // unlikely
         v1 = v0 & 0xffff         // s4

    loc_0x802b252c: // orphan
         v0 = 0x8831 << 16
         v0 -= 0x7206
         halfword [v0 + 0] = v1
         a0 = v1 & 0xffff
         call 0x88600c38          // 0x88600c38(0x220, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t8 = 0x8831 << 16
         t8 = [t8 - 0x76d0]       // t9

    loc_0x802b2e08: // orphan
         a3 = halfword [s1 + 2]

    loc_0x802b4df0: // orphan
         t1 -= 0x76d0
         t7 = [t1 + 0]            // t9
         at = 0 + 1               // lo
         if                       // unlikely
         t0 = 0x800d << 16

    loc_0x802b5288: // orphan
         goto 0x802b5290
         s1 = t2                  // s4

    loc_0x802b5578: // orphan
         [sp + 0x18] = s1
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s0
         mtc1 v0, f4
         at = 0x8831 << 16
         lwc1 f8, -0x76e0, at
         cvt.s.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f16
         v1 = 0 + 1               // lo
         at = 0x4f00 << 16
         mul.s f10, f6, f8
         div.s f18, f10, f16
         // CODE XREF from fcn.802cb7dc @ +0x2ac
         cfc1 t6, 31
         ctc1 v1, 31
         
         cvt.w.s f4, f18
         cfc1 v1, 31
         // CODE XREF from fcn.802cb7dc @ 0x802cba8c
         
         v1 &= 0x78
         beql v1, 0, 0x802b5618   // likely
         mfc1 v1, f4

    loc_0x802b55d0: // orphan
         mtc1 at, f4
         v1 = 0 + 1               // lo
         sub.s f4, f18, f4
         ctc1 v1, 31
         
         cvt.w.s f4, f4
         cfc1 v1, 31
         
         v1 &= 0x78
         if                       // unlikely
         

    loc_0x802b55fc: // orphan
         mfc1 v1, f4
         at = 0x8000 << 16
         goto 0x802b5624
         v1 |= at

    loc_0x802b560c: // orphan
         goto 0x802b5624
         v1 = 0 - 1               // s2

    loc_0x802b5618: // orphan
         

    loc_0x802b561c: // orphan
         if                       // unlikely
         

    loc_0x802b5624: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802b5604, 0x802b560c
         ctc1 t6, 31
         a0 = v1 & 0xffff
         call 0x80007aec          // 0x80007aec(0x220, 0x442f71dcfe116408, 0x8, -1)
         s1 = a0                  // v1

    loc_0x802b56a0: // orphan
         t7 = t6 | 4
         halfword [v1 + 0] = t7
         v0 = [a0 + 0]            // arg1
         a2 = 1 << 16
         s1 = 0x8800 << 16
         t8 = , unsigned  halfword [v0 + 0]
         s1 += 0x6860
         t9 = t8 | 4
         halfword [v0 + 0] = t9

    loc_0x802b56c4: // orphan
         v0 = [a0 + 0]            // arg1
         t0 = , unsigned  halfword [v0 + 0]
         t1 = t0 | 2
         halfword [v0 + 0] = t1

    loc_0x802b56d4: // orphan
         // CODE XREF from fcn.802ac294 @ 0x802aca50
         t2 = [a1 + 0]            // arg2 // t9
         t3 = [t2 + 0x1c]         // t9
         // CODE XREF from fcn.802cb7dc @ 0x802cba98
         [t3 + 0x4c] = a2
         t4 = [a0 + 0]            // arg1
         t5 = [t4 + 0x1c]         // t9

    loc_0x802b56e8: // orphan
         [t5 + 0x4c] = a2
         t6 = [s1 + 0]

    loc_0x802b56f0: // orphan
         // CODE XREF from fcn.802cb7dc @ 0x802cba9c
         bnel s0, t6, 0x802b5720  // likely
         ra = [sp + 0x1c]

    loc_0x802b56f8: // orphan
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x88300b48          // 0x88300b48(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x88301c00          // 0x88301c00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         t7 = [s1 + 0]
         if                       // unlikely
         

    loc_0x802b571c: // orphan
         ra = [sp + 0x1c]

    loc_0x802b5720: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x802b57ac: // orphan
         sub.s f4, f18, f4
         ctc1 s1, 31
         
         cvt.w.s f4, f4
         cfc1 s1, 31
         
         s1 &= 0x78
         if                       // likely
         

    loc_0x802b57d0: // orphan
         mfc1 s1, f4
         at = 0x8000 << 16
         goto 0x802b57f8
         s1 |= at

    loc_0x802b57e0: // orphan
         goto 0x802b57f8
         s1 = 0 - 1               // s2

    loc_0x802b57f8: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802b57d8, 0x802b57e0
         at = 0x8860 << 16
         [at + 0x17ac] = 0
         a1 = [a2 + 0]            // arg3
         ctc1 t6, 31

    loc_0x802b64f4: // orphan
         bnel a0, at, 0x802b66fc  // likely
         s3 += 1

    loc_0x802b686c: // orphan
         a1 = s1 << 0x10          // arg2
         t6 = 0 - 0x10
         t7 = 0 + 0xf0
         t8 = 0 + 0x400
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x10] = t6

    loc_0x802b6890: // orphan
         a1 = , signed  a1 >> 0x10 // arg2
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         a2 = 0 + 8               // arg3
         a3 = 0 + 8               // arg4 // a2
         // CODE XREF from fcn.82bea63c @ 0x802acb1c
         [sp + 0x20] = 0
         [sp + 0x4c] = v0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x8, 0x8)
         [sp + 0x48] = v1
         t0 = [sp + 0x4c]         // s4

    loc_0x802b6e58: // orphan
         at = , unsigned  , s1 < v1

    loc_0x802b6e88: // orphan
         a0 = [s2 + 0]            // t9
         call 0x8800225c          // 0x8800225c(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         goto 0x802b6eb0
         t7 = [s3 + 0]

    loc_0x802b6f6c: // orphan
         t1 = 0x8800 << 16
         s4 += 0x1896
         t1 += 0x6880
         // CODE XREF from fcn.802cb7dc @ +0x34c
         t2 = 0 + 0xfb
         [s0 + 0] = t1
         byte [s4 + 0] = t2
         goto 0x802b71a4          // fcn.802af804+0x79a0
         v0 = t2 & 0xff

    loc_0x802b7294: // orphan
         t3 = 0 + 0xf00
         t4 = 0 + 0x46
         div.s f10, f2, f8
         div.s f6, f2, f18
         c.lt.s f4, f10
         
         bc1fl 0x802b72c8
         mtc1 at, f0
         at = 0x3f00 << 16
         // CODE XREF from fcn.82bea63c @ 0x802acbd4
         mtc1 at, f0
         goto 0x802b72d0          // fcn.82bea63c-0x293336c
         add.s f8, f0, f6

    loc_0x802b7680: // orphan
         t2 = 0 + 1               // lo
         halfword [at - 0x714a] = t1
         at = 0x8831 << 16
         [at - 0x7160] = t2
         ra = [sp + 0x14]
         sp += 0x18
         // CODE XREF from fcn.802cb7dc @ +0x378
         ret
         

    loc_0x802b79fc: // orphan
         t9 = 0xfa00 << 16
         t2 = 0 - 1               // s2
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t2
         [v0 + 0] = t9
         v0 = [v1 + 0]
         t5 = 0x9b9b << 16
         s2 = 0x8831 << 16
         // CODE XREF from fcn.802cb7dc @ +0x3b0
         t3 = v0 + 8
         [v1 + 0] = t3
         t5 |= 0xff
         t4 = 0xfb00 << 16
         s2 -= 0x715c
         [v0 + 0] = t4
         [v0 + 4] = t5
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s2 + 0]            // t9
         at = 0x43a8 << 16
         mtc1 at, f22
         at = 0x4140 << 16
         s5 = 0x8831 << 16
         s4 = 0x8008 << 16
         s3 = 0x8009 << 16
         mtc1 at, f20
         s3 -= 0x71b0
         // CODE XREF from fcn.802cbbb0 @ 0x802cbb90
         s4 += 0x7e50
         s5 -= 0x714c
         s1 = 0
         s6 = 0 + 4

    loc_0x802b7a74: // orphan
         v1 = s0 & 0xffff
         v1 = , signed  v1 >> 4
         v0 = [s2 + 0]            // t9
         v1 <<= 2
         t6 = s3 + v1

    loc_0x802b7a88: // orphan
         // CODE XREF from fcn.802cbbb0 @ 0x802cbb94
         lwc1 f4
         t0 = , unsigned  halfword [v0 + 0]
         t2 = halfword [s5 + 0]
         mul.s f6, f4, f20
         t7 = , signed  t0 >> 1
         mtc1 t7, f10
         t9 = s4 + v1
         t1 = , unsigned  halfword [v0 + 2]
         t7 = 0 + 0x400
         // CODE XREF from fcn.802cb7dc @ +0x3bc
         cvt.s.w f16, f10
         t3 = , signed  t1 >> 1
         t6 = 0 - 0x10
         t5 = 0 - 0x10
         t8 = 0 + 0x400
         add.s f8, f6, f22
         lwc1 f6
         a2 = t0 << 0x10
         a3 = t1 << 0x10
         sub.s f18, f8, f16
         mtc1 t2, f8
         mul.s f10, f6, f20
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         trunc.w.s f4, f18
         [sp + 0x14] = t6
         [sp + 0x10] = t5
         cvt.s.w f16, f8
         mfc1 a0, f4
         mtc1 t3, f4
         a0 <<= 0x10
         cvt.s.w f6, f4
         a0 = , signed  a0 >> 0x10 // t9
         add.s f18, f10, f16
         sub.s f8, f18, f6
         trunc.w.s f10, f8
         mfc1 a1, f10
         
         a1 <<= 0x10
         call 0x80044270          // 0x80044270(-1, 0x71dcfe1164080000, 0xfffffa00, 0x0)
         a1 = , signed  a1 >> 0x10
         s0 -= 0x4000
         s0 <<= 0x10
         s1 += 1
         if                       // likely
         s0 = , signed  s0 >> 0x10

    loc_0x802b877c: // orphan
         ret                      // ra
         

    loc_0x802b87a0: // orphan
         [sp + 0x34] = ra
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         call 0x8005e6b8          // 0x8005e6b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = byte [s6 + 0]       // s4
         s5 = 0x8860 << 16
         s5 += 0x1890
         s0 = 0

    loc_0x802b87d0: // orphan
         s1 = s0 + 1
         a1 = s1
         call 0x8005e728          // 0x8005e728(-1, 0x105, 0x8, -1)
         a0 = byte [s6 + 0]       // s4
         t6 = [s5 + 0]
         at = , unsigned  , s1 < 0xfb
         t7 = t6 + s0
         s0 = s1
         if                       // unlikely
         byte [t7 + 0x274] = v0

    loc_0x802b87f8: // orphan
         s0 = 0 + 1               // lo

    loc_0x802b87fc: // orphan
         call 0x80063804          // 0x80063804(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff
         call 0x886000f0          // 0x886000f0(0x4, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 & 0xffff         // s4
         if                       // unlikely
         

    loc_0x802b8814: // orphan
         t8 = [s5 + 0]
         byte [t8 + 0x389] = s0

    loc_0x802b881c: // orphan
         call 0x886000f0          // "P@" // 0x886000f0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xffff
         beql v0, 0, 0x802b8838   // unlikely
         s0 += 1

    loc_0x802b882c: // orphan
         t9 = [s5 + 0]
         byte [t9 + 0x38a] = s0
         s0 += 1

    loc_0x802b8838: // orphan
         at = , unsigned  , s0 < 0xfc
         if                       // unlikely
         

    loc_0x802b8844: // orphan
         call 0x8800005c          // "P@" // 0x8800005c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         beql v0, 0, 0x802b886c   // unlikely
         t2 = [s5 + 0]

    loc_0x802b8854: // orphan
         t0 = [s5 + 0]
         at = 0x8860 << 16
         t1 = , unsigned  byte [t0 + 0x38a]
         goto 0x802b8878
         byte [at + 0x1896] = t1

    loc_0x802b886c: // orphan
         at = 0x8860 << 16
         t3 = , unsigned  byte [t2 + 0x389] // s4
         byte [at + 0x1896] = t3

    loc_0x802b8878: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802b8860
         call 0x8005eca4          // 0x8005eca4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = byte [s6 + 0]       // s4
         t4 = [s5 + 0]
         byte [t4 + 0x38b] = v0
         call 0x8005ed78          // 0x8005ed78(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = byte [s6 + 0]       // s4
         t5 = [s5 + 0]
         byte [t5 + 0x38c] = v0
         call 0x8005ee4c          // 0x8005ee4c(0xff, 0x442f71dcfe116408, 0x8, -1)
         // CALL XREF from fcn.80930b70 @ +0xefc
         a0 = byte [s6 + 0]       // s4

    loc_0x802b94b8: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b94d4: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b94f0: // orphan
         // CODE XREF from fcn.82bea63c @ 0x802acd3c
         if                       // unlikely
         if                       // unlikely

    loc_0x802b94fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9584: // orphan
         

    loc_0x802b9734: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9740: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802b974c: // orphan
         if                       // unlikely
         if                       // fcn.802bf404-0x30 // unlikely

    loc_0x802b9758: // orphan
         
         
         if                       // fcn.802bf404+0x120 // unlikely
         if                       // fcn.802bf404+0x134 // unlikely

    loc_0x802b976c: // orphan
         if                       // fcn.802bf404+0x3bc // unlikely
         if                       // unlikely

    loc_0x802b9778: // orphan
         if                       // fcn.802bf404+0x488 // unlikely
         if                       // fcn.802bf404+0x4fc // unlikely

    loc_0x802b9784: // orphan
         
         
         if                       // fcn.802bf404+0x58c // unlikely
         if                       // fcn.802bf404+0x5e0 // unlikely

    loc_0x802b9798: // orphan
         if                       // fcn.802bf404+0x658 // unlikely
         if                       // fcn.802bf404+0x67c // unlikely

    loc_0x802b97a4: // orphan
         if                       // fcn.802bf404+0x704 // unlikely
         if                       // unlikely

    loc_0x802b97b0: // orphan
         if                       // fcn.802bf404+0x6c0 // unlikely
         if                       // fcn.802bfc68+0x1e0 // unlikely

    loc_0x802b97bc: // orphan
         if                       // fcn.802bfc68+0x218 // unlikely
         

    loc_0x802b97c4: // orphan
         
         
         if                       // fcn.802bfc68+0x318 // unlikely
         if                       // fcn.802bfc68+0x33c // unlikely

    loc_0x802b97d8: // orphan
         if                       // fcn.802bfc68+0x284 // unlikely
         if                       // unlikely

    loc_0x802b97e4: // orphan
         
         if                       // fcn.802c009c+0x40 // unlikely
         if                       // unlikely

    loc_0x802b97f4: // orphan
         if                       // fcn.802c0128+0x80 // unlikely
         if                       // unlikely

    loc_0x802b9800: // orphan
         if                       // fcn.802c0128+0xcc // unlikely
         if                       // unlikely

    loc_0x802b980c: // orphan
         if                       // fcn.802c0494+0xc // unlikely
         

    loc_0x802b9814: // orphan
         
         
         if                       // fcn.802c04c4+0x4c // unlikely
         if                       // fcn.802c04c4+0x70 // unlikely

    loc_0x802b9824: // orphan
         if                       // fcn.802c043c+0x14c // unlikely
         

    loc_0x802b9828: // orphan
         

    loc_0x802b982c: // orphan
         
         if                       // fcn.802c043c+0x1d8 // unlikely
         if                       // fcn.802c043c+0x23c // unlikely

    loc_0x802b983c: // orphan
         if                       // fcn.802c043c+0x274 // unlikely
         if                       // unlikely

    loc_0x802b9848: // orphan
         if                       // fcn.802c043c+0x2f0 // unlikely
         if                       // fcn.802c043c+0x324 // unlikely

    loc_0x802b9854: // orphan
         
         
         if                       // fcn.802c07c8+0x38 // unlikely
         if                       // fcn.802c07c8+0x4c // unlikely

    loc_0x802b9868: // orphan
         
         
         
         
         
         if                       // fcn.802c07c8+0x2c8 // unlikely
         if                       // fcn.802c07c8+0x2dc // unlikely

    loc_0x802b9888: // orphan
         if                       // fcn.802c0c08+0x144 // unlikely
         

    loc_0x802b9890: // orphan
         
         if                       // fcn.802c0c08+0x270 // unlikely
         if                       // fcn.802c0c08+0x2a4 // unlikely

    loc_0x802b98a0: // orphan
         
         
         
         
         if                       // fcn.802c1014 // unlikely
         if                       // fcn.802c104c+0xc // unlikely

    loc_0x802b98bc: // orphan
         
         
         
         
         if                       // fcn.802c104c+0x84 // unlikely
         if                       // fcn.802c104c+0x98 // unlikely

    loc_0x802b98d8: // orphan
         if                       // fcn.802bc8fc+0x4850 // unlikely
         if                       // fcn.802bc8fc+0x4864 // unlikely

    loc_0x802b98e4: // orphan
         if                       // fcn.802bc8fc+0x48bc // unlikely
         if                       // unlikely

    loc_0x802b98f0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9900: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9910: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9924: // orphan
         if                       // unlikely
         

    loc_0x802b992c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b993c: // orphan
         if                       // unlikely
         

    loc_0x802b9944: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802b9954: // orphan
         if                       // fcn.802bc8fc+0x4cac // unlikely
         if                       // fcn.802bc8fc+0x4cd0 // unlikely

    loc_0x802b9b20: // orphan
         if                       // fcn.802aa09c+0x18f38 // unlikely
         if                       // fcn.802aa09c+0x18f4c // unlikely

    loc_0x802b9b2c: // orphan
         if                       // fcn.802c30cc+0x154 // unlikely
         if                       // unlikely

    loc_0x802b9b38: // orphan
         if                       // fcn.802c30cc+0x270 // unlikely
         

    loc_0x802b9b40: // orphan
         
         
         
         

    loc_0x802bac78: // orphan
         if                       // fcn.802ca910+0xc07c // unlikely
         if                       // unlikely

    loc_0x802bac84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bac90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bac9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802baca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bacb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bacc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802baccc: // orphan
         if                       // unlikely
         

    loc_0x802bacd4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bace4: // orphan
         if                       // fcn.802d6f34+0x64 // unlikely
         

    loc_0x802bacec: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bacfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad14: // orphan
         if                       // fcn.802d7378 // unlikely
         if                       // unlikely

    loc_0x802bad20: // orphan
         

    loc_0x802bad24: // orphan
         if                       // fcn.802d7378+0x20 // unlikely
         if                       // fcn.802d7378+0x44 // unlikely

    loc_0x802bad30: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad64: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad74: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad84: // orphan
         if                       // unlikely
         

    loc_0x802bad8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bad98: // orphan
         
         

    loc_0x802bada0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // fcn.802caa18+0xd690 // unlikely

    loc_0x802badbc: // orphan
         if                       // fcn.802caa18+0xd6a8 // unlikely
         if                       // fcn.802caa18+0xd6bc // unlikely

    loc_0x802badc8: // orphan
         if                       // fcn.802d81fc+0x30 // unlikely

    loc_0x802baed8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802baee4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bb000: // orphan
         if                       // likely
         v1 = 0

    loc_0x802bb008: // orphan
         v0 = 0 + 0x800
         a0 = 0 + 0x400
         a1 = 0 + 0x200
         goto 0x802bb02c
         a2 = 0 + 0x100

    loc_0x802bb01c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb000
         v0 = 0 + 8               // a2
         a0 = 0 + 4
         a1 = 0 + 2
         a2 = 0 + 1               // lo

    loc_0x802bb02c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb014
         t6 = 0x8008 << 16
         t6 = [t6 + 0x7200]       // t9
         a3 = , unsigned  halfword [t6 + 6]
         t7 = a3 & v0
         beql t7, 0, 0x802bb064   // unlikely
         t1 = a3 & a0

    loc_0x802bb044: // orphan
         t8 = halfword [s0 + 0]
         t0 = 0x8008 << 16
         v1 = 0 + 1               // lo
         t9 = t8 + 0x400
         halfword [s0 + 0] = t9
         t0 = [t0 + 0x7200]       // t9
         a3 = , unsigned  halfword [t0 + 6]
         t1 = a3 & a0

    loc_0x802bb064: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb03c
         beql t1, 0, 0x802bb08c   // unlikely
         t5 = a3 & a1             // t0

    loc_0x802bb06c: // orphan
         t2 = halfword [s0 + 0]
         t4 = 0x8008 << 16
         v1 = 0 + 1               // lo
         t3 = t2 - 0x400          // s2
         halfword [s0 + 0] = t3
         t4 = [t4 + 0x7200]       // t9
         a3 = , unsigned  halfword [t4 + 6]
         t5 = a3 & a1

    loc_0x802bb08c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb064
         beql t5, 0, 0x802bb0b4   // unlikely
         t9 = a3 & a2

    loc_0x802bb094: // orphan
         t6 = halfword [s0 + 2]
         t8 = 0x8008 << 16

    loc_0x802bb09c: // orphan
         v1 = 0 + 1               // lo
         t7 = t6 + 0x400
         halfword [s0 + 2] = t7
         t8 = [t8 + 0x7200]       // t9
         a3 = , unsigned  halfword [t8 + 6]
         t9 = a3 & a2

    loc_0x802bb0b4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb08c
         beql t9, 0, 0x802bb0d0   // unlikely
         s0 = [sp + 4]

    loc_0x802bb0bc: // orphan
         t0 = halfword [s0 + 2]
         v1 = 0 + 1               // lo
         t1 = t0 - 0x400
         halfword [s0 + 2] = t1
         s0 = [sp + 4]

    loc_0x802bb0d0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb0b4
         sp += 8
         ret                      // ra
         v0 = v1

    loc_0x802bb18c: // orphan
         sp -= 0x20
         [sp + 0x1c] = ra
         [sp + 0x18] = s0
         // CODE XREF from fcn.802ac294 @ +0xc60
         v0 = , unsigned  halfword [a0 + 0]
         s0 = a0                  // t9
         v1 = 0
         t6 = v0 & 2
         if                       // likely
         // CODE XREF from fcn.802ac294 @ +0xc64
         a0 = v0 & 1              // lo

    loc_0x802bb1b0: // orphan
         a1 = [s0 + 0x1c]         // t9
         a0 = , unsigned  , 0 < a0 // lo
         call 0x88400034          // 0x88400034(0x1, -1, 0x8, -1)
         a1 += 0x1e
         if                       // likely
         v1 = v0                  // s4

    loc_0x802bb1c8: // orphan
         v1 = 0

    loc_0x802bb1cc: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802bb1a8, 0x802bb1c0
         if                       // unlikely
         t7 = 0x8840 << 16

    loc_0x802bb1e8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb1cc
         t9 = , unsigned  halfword [s0 + 0]
         t0 = t9 & 4
         beql t0, 0, 0x802bb218   // fcn.802af518+0xbd00 // unlikely
         lwc1 f0, 0x10, s0

    loc_0x802bb1f8: // orphan
         v0 = halfword [s0 + 0xc]
         if                       // unlikely
         t1 = v0 - 1

    loc_0x802bb204: // orphan
         goto 0x802bb214          // fcn.802af518+0xbcfc
         halfword [s0 + 0xc] = t1

    loc_0x802bb20c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bb1fc
         call 0x8840011c          // 0x8840011c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0

    loc_0x802bb474: // orphan
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         a3 = halfword [sp + 0x4e] // s4
         t8 = 0 + 0x400

    loc_0x802bb48c: // orphan
         t9 = 0 + 0x400
         a3 -= 8
         // CODE XREF from fcn.802cbbfc @ 0x802cbc10
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x34] = a3
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         a0 = halfword [sp + 0x42]
         a1 = halfword [sp + 0x46]
         a2 = 0 + 8
         [sp + 0x10] = 0

    loc_0x802bc1bc: // orphan
         sp += 0x38
         sp -= 0x20
         [sp + 0x1c] = ra
         [sp + 0x18] = s1
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s0
         mtc1 v0, f4
         at = 0x8840 << 16

    loc_0x802bc1dc: // orphan
         lwc1 f8, 0x17d4, at

    loc_0x802bc394: // orphan
         // CODE XREF from fcn.802bc160 @ +0x228
         s0 = v1 & 0xff           // k0
         call 0x8006397c          // 0x8006397c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff           // k0
         t8 = [s1 + 0]
         a0 = s0 & 0xff           // k0
         call 0x800639c0          // 0x800639c0(0x20, 0x442f71dcfe116408, 0x8, -1)
         byte [t8 + 0x34] = v0
         t9 = [s1 + 0]
         a0 = 0 + 0x28
         a1 = 0 + 0x10
         call 0x8004c874          // 0x8004c874(0x28, 0x10, 0x8, -1)
         byte [t9 + 0x35] = v0
         t0 = [s1 + 0]
         a0 = 0 + 1               // lo
         a1 = 0
         [t0 + 0x38] = v0
         t1 = [s1 + 0]
         call 0x80049290          // 0x80049290(0x1, 0x0, 0x8, -1)
         a2 = [t1 + 0x38]         // s4
         t4 = [s1 + 0]
         t2 = 0 + 0x11b
         t3 = t2 - v0
         halfword [t4 + 0x3c] = t3
         v1 = [s1 + 0]
         t7 = v0 + 0x20
         t5 = halfword [v1 + 0x3c]
         t6 = t5 - 0x17
         halfword [v1 + 0x3e] = t6
         t8 = [s1 + 0]
         halfword [t8 + 0x40] = t7
         v1 = [s1 + 0]
         t9 = halfword [v1 + 0x3e]
         t0 = t9 + 2
         halfword [v1 + 0x42] = t0
         v1 = [s1 + 0]
         t1 = halfword [v1 + 0x40]
         t2 = t1 - 4
         halfword [v1 + 0x44] = t2
         v1 = [s1 + 0]
         t3 = halfword [v1 + 0x3e]
         t4 = t3 + 9
         call 0x80001ff0          // 0x80001ff0(0x1, 0x0, 0xff, -1)
         halfword [v1 + 0x46] = t4
         mtc1 v0, f4
         at = 0x4140 << 16
         mtc1 at, f8
         cvt.s.w f6, f4
         at = 0x4000 << 16
         mtc1 at, f16
         t6 = 0 + 1               // lo
         at = 0x4f00 << 16
         t8 = 0 + 0x106

    loc_0x802bc464: // orphan
         mul.s f10, f6, f8
         t9 = 0 + 1               // lo
         t0 = 0 + 0x140
         t1 = 0 + 0xf0
         div.s f18, f10, f16
         cfc1 t5, 31
         ctc1 t6, 31
         
         cvt.w.s f4, f18
         cfc1 t6, 31
         
         t6 &= 0x78               // k0
         beql t6, 0, 0x802bc4e4   // unlikely
         mfc1 t6, f4

    loc_0x802bc49c: // orphan
         mtc1 at, f4
         t6 = 0 + 1               // lo
         sub.s f4, f18, f4

    loc_0x802bc4e4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bc494
         
         if                       // fcn.802afdb0+0xc728 // likely
         

    loc_0x802bc690: // orphan
         a0 = [sp + 0x2c]         // s0
         call 0x80008514          // 0x80008514(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x24]         // t9
         call 0x88400f48          // 0x88400f48(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8840104c          // 0x8840104c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x88401200          // 0x88401200(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80008574          // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x8840 << 16
         call 0x800033dc          // 0x800033dc(0x88400000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x17e0]       // t9
         call 0x80047610          // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8004c398          // 0x8004c398(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x5a4f << 16
         call 0x80002bf8          // 0x80002bf8(0x5a4f0000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4f4d
         ra = [sp + 0x1c]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x802bc788: // orphan
         
         

    loc_0x802bc834: // orphan
         
         if                       // fcn.82bea63c-0x292c518 // unlikely
         

    loc_0x802bc838: // orphan
         
         // CODE XREF from fcn.802bc160 @ +0x648
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.802bc160 @ +0x64c
         

    loc_0x802bc854: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802bf404+0x340 // unlikely
         if                       // fcn.802bf404+0x3a4 // unlikely

    loc_0x802bc88c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.802c043c+0x214 // unlikely
         if                       // fcn.802c043c+0x228 // unlikely

    loc_0x802bc8d8: // orphan
         
         
         if                       // fcn.802c07c8+0x1ac // unlikely
         if                       // fcn.802c07c8+0x270 // unlikely

    loc_0x802bc8ec: // orphan
         
         
         
         

    loc_0x802bc9d4: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802bca48: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bca5c
         call 0x88500cf0          // 0x88500cf0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff
         s0 += 1
         at = , unsigned  , s0 < 2
         s1 += 4

    loc_0x802bca5c: // orphan
         if                       // likely
         [s1 - 4] = v0

    loc_0x802bca64: // orphan
         t6 = [sp + 0x38]
         v0 = sp + 0xcc4
         a0 = 0x8851 << 16
         a1 = 0x8852 << 16
         a1 -= 0x7fc0
         a0 -= 0x2920
         v1 = sp + 0x40
         t9 = v0
         at = t6 + 0x54

    loc_0x802bca88: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcaa4
         t8 = [t6 + 0]            // t9
         t6 += 0xc
         // CODE XREF from fcn.802ac294 @ +0xce8
         t9 += 0xc                // t1
         [t9 - 0xc] = t8
         t7 = [t6 - 8]            // t9
         [t9 - 8] = t7
         t8 = [t6 - 4]            // t9
         if                       // likely
         [t9 - 4] = t8

    loc_0x802bcaac: // orphan
         t8 = [t6 + 0]            // t9
         s0 = 0
         s1 = sp + 0x38
         [t9 + 0] = t8
         t9 = [sp + 0x3c]
         t6 = [sp + 0x38]
         ra = 0 + 2
         at = t9 + 0x54

    loc_0x802bcacc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcae8
         t8 = [t9 + 0]
         t9 += 0xc                // t1
         t6 += 0xc
         [t6 - 0xc] = t8
         t7 = [t9 - 8]
         [t6 - 8] = t7
         t8 = [t9 - 4]
         if                       // likely
         [t6 - 4] = t8

    loc_0x802bcaf0: // orphan
         t8 = [t9 + 0]
         at = v0 + 0x54
         t5 = 0 + 0x46
         [t6 + 0] = t8
         t9 = [sp + 0x3c]
         t8 = v0                  // s4

    loc_0x802bcb08: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcb24
         t7 = [t8 + 0]            // t9
         t8 += 0xc                // t1
         t9 += 0xc                // t1
         [t9 - 0xc] = t7
         t6 = [t8 - 8]            // t9
         [t9 - 8] = t6
         t7 = [t8 - 4]            // t9
         if                       // likely
         [t9 - 4] = t7

    loc_0x802bcb2c: // orphan
         t7 = [t8 + 0]            // t9
         t6 = a0                  // t9
         at = a0 + 0xc78
         [t9 + 0] = t7
         t7 = v1

    loc_0x802bcb40: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcb5c
         t9 = [t6 + 0]
         t6 += 0xc
         t7 += 0xc
         [t7 - 0xc] = t9
         t8 = [t6 - 8]            // t9
         [t7 - 8] = t8
         t9 = [t6 - 4]
         if                       // likely
         [t7 - 4] = t9

    loc_0x802bcb64: // orphan
         t9 = [t6 + 0]
         at = a1 + 0xc78
         t4 = 0 + 7
         [t7 + 0] = t9
         t8 = [t6 + 4]            // t9
         t9 = a0
         t3 = 0 + 6
         [t7 + 4] = t8
         t8 = a1                  // t0

    loc_0x802bcb88: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcba4
         t7 = [t8 + 0]            // t9
         t8 += 0xc                // t1
         t9 += 0xc                // t1
         [t9 - 0xc] = t7
         t6 = [t8 - 8]            // t9
         [t9 - 8] = t6
         t7 = [t8 - 4]            // t9
         if                       // likely
         [t9 - 4] = t7

    loc_0x802bcbac: // orphan
         t7 = [t8 + 0]            // t9
         at = v1 + 0xc78
         t2 = 0 + 5
         [t9 + 0] = t7
         t6 = [t8 + 4]            // t9
         t7 = a1                  // t0
         t1 = 0 + 4
         [t9 + 4] = t6
         t6 = v1

    loc_0x802bcbd0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcbec
         t9 = [t6 + 0]
         t6 += 0xc
         t7 += 0xc

    loc_0x802bcbdc: // orphan
         [t7 - 0xc] = t9
         t8 = [t6 - 8]            // t9
         [t7 - 8] = t8
         t9 = [t6 - 4]
         if                       // likely
         [t7 - 4] = t9

    loc_0x802bcbf4: // orphan
         t9 = [t6 + 0]
         a2 = 0x8851 << 16
         a1 = 0x8851 << 16
         [t7 + 0] = t9
         t8 = [t6 + 4]            // t9
         a1 -= 0x2988
         a2 -= 0x2928
         t0 = 0 + 0x14
         a3 = 0 | 0xa960
         [t7 + 4] = t8

    loc_0x802bcc1c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcc94
         a0 = [s1 + 0]
         v1 = 0 + 1               // lo
         v0 = , unsigned  byte [a0 + 0x1e] // s4
         t6 = v0 & 2
         if                       // unlikely
         t8 = v0 & 1              // lo

    loc_0x802bcc34: // orphan
         unsigned , hi            // t9 // s2
         t7 = lo
         t8 = a2 + t7
         t9 = byte [t8 + 0]       // s4
         unsigned , hi
         t6 = lo
         t7 = a1 + t6
         v0 = , unsigned  byte [t7 + 1] // s4
         if                       // unlikely
         

    loc_0x802bcc5c: // orphan
         if                       // likely
         

    loc_0x802bcc64: // orphan
         if                       // unlikely
         

    loc_0x802bcc6c: // orphan
         if                       // likely
         

    loc_0x802bcc74: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802bcc54, 0x802bcc5c, 0x802bcc64
         goto 0x802bcc88
         v1 = 0

    loc_0x802bcc7c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcc2c
         if                       // unlikely
         

    loc_0x802bcc84: // orphan
         v1 = 0

    loc_0x802bcc88: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802bcc6c, 0x802bcc74, 0x802bcc7c
         if                       // unlikely
         s0 += 1

    loc_0x802bcc90: // orphan
         byte [a0 + 0x1c] = t5

    loc_0x802bcc94: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bcc88
         if                       // likely
         s1 += 4

    loc_0x802bcc9c: // orphan
         ra = [sp + 0x1c]

    loc_0x802bcca0: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         ret                      // ra
         sp += 0xd20

    loc_0x802bcd8c: // orphan
         call 0x88507fa8          // 0x88507fa8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto 0x802bce64          // fcn.802cbbfc-0xed98
         ra = [sp + 0x14]

    loc_0x802bcde8: // orphan
         cvt.w.s f4, f18
         cfc1 a0, 31
         
         a0 &= 0x78
         beql a0, 0, 0x802bce48   // unlikely
         mfc1 a0, f4

    loc_0x802bce00: // orphan
         mtc1 at, f4
         a0 = 0 + 1               // lo
         sub.s f4, f18, f4
         ctc1 a0, 31
         
         cvt.w.s f4, f4
         cfc1 a0, 31
         // CODE XREF from fcn.802cbbfc @ 0x802cbc68
         
         a0 &= 0x78
         if                       // unlikely
         

    loc_0x802bce2c: // orphan
         mfc1 a0, f4
         // CODE XREF from fcn.802cbc34 @ +0x38
         at = 0x8000 << 16
         goto 0x802bce54
         a0 |= at                 // t9

    loc_0x802bce3c: // orphan
         goto 0x802bce54
         a0 = 0 - 1               // s2

    loc_0x802bce48: // orphan
         
         if                       // unlikely
         

    loc_0x802bce54: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802bce34, 0x802bce3c
         ctc1 t7, 31
         // CODE XREF from fcn.802cbc34 @ +0x40
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 &= 0xffff
         // CODE XREF from fcn.802bc8fc @ +0x3c8
         ra = [sp + 0x14]

    loc_0x802bcf34: // orphan
         ret                      // ra
         

    loc_0x802bcf7c: // orphan
         
         call 0x800084a0          // "T@" // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.802cbc34 @ +0x5c
         
         bnel v0, 0, 0x802bd29c   // fcn.802afdb0+0xd4ec // likely
         ra = [sp + 0x14]

    loc_0x802bcf90: // orphan
         call 0x885002a0          // 0x885002a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x802bd29c          // fcn.802afdb0+0xd4ec
         ra = [sp + 0x14]

    loc_0x802bd028: // orphan
         t2 += v0
         t2 <<= 2
         a0 = 0x8851 << 16
         a0 += t2
         call 0x88000020          // 0x88000020(0x885107f8, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [a0 - 0x2987] // s4
         // CODE XREF from fcn.802bc7b4 @ +0x28
         [sp + 0x1c] = v0
         call 0x88504e94          // 0x88504e94(0xff, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         t3 = v0 << 2
         t3 += v0
         t3 <<= 2
         a0 = 0x8851 << 16
         a0 += t3
         call 0x88000020          // 0x88000020(0x885113ec, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [a0 - 0x2987] // s4
         t4 = [sp + 0x1c]         // s4
         t5 = 0 + 1               // lo
         at = 0x8880 << 16
         if                       // likely
         

    loc_0x802bd07c: // orphan
         at = 0x8880 << 16
         goto 0x802bd298          // fcn.802afdb0+0xd4e8
         [at + 0x4054] = t5

    loc_0x802bd084: // orphan
         [at + 0x4054] = t5

    loc_0x802bd088: // orphan
         goto 0x802bd298          // fcn.802afdb0+0xd4e8
         [at + 0x4054] = 0

    loc_0x802bd0e4: // orphan
         beql v0, 0, 0x802bd29c   // fcn.802afdb0+0xd4ec // unlikely
         ra = [sp + 0x14]

    loc_0x802bd0ec: // orphan
         call 0x885002a0          // 0x885002a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 4
         goto 0x802bd29c          // fcn.802afdb0+0xd4ec
         ra = [sp + 0x14]

    loc_0x802bd294: // orphan
         [sp + 0x24] = 0

    loc_0x802bd758: // orphan
         t2 -= t1
         t2 <<= 3
         t0 = v1 + t9
         v0 = t0 + t2
         ret                      // ra
         v0 += 0xc90

    loc_0x802bd8a8: // orphan
         v1 = 0 + 1               // lo
         a1 = 0
         [t7 + 0x34] = v1
         t8 = [v0 + 0]
         t9 = [t8 + 4]
         [t9 + 0x34] = v1
         t0 = [v0 + 0]
         t1 = [t0 + 0]            // t9
         call 0x88004990          // 0x88004990(-1, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t1 + 0] // s4
         v0 = 0x8851 << 16
         v0 -= 0x2930
         t2 = [v0 + 0]            // t9
         a1 = 0
         t3 = [t2 + 4]            // t9
         call 0x88004990          // 0x88004990(0xff, 0x0, 0x8, -1)
         a0 = , unsigned  byte [t3 + 0] // s4
         ra = [sp + 0x14]
         t4 = 0 + 1               // lo
         at = 0x8800 << 16
         [at + 0x68b8] = t4
         ret
         sp += 0x18

    loc_0x802bd964: // orphan
         c.lt.s f4, f18
         
         bc1fl 0x802bd988
         mtc1 at, f8
         at = 0x3f00 << 16
         mtc1 at, f6
         goto 0x802bd990
         swc1 f6, 0x20, sp

    loc_0x802bd990: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bd97c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v0
         mtc1 v0, f16
         at = 0x4150 << 16
         mtc1 at, f18
         cvt.s.w f4, f16
         mtc1 0, f10
         at = 0xbf00 << 16
         mul.s f6, f4, f18

    loc_0x802bd9bc: // orphan
         div.s f8, f6, f20
         c.lt.s f10, f8
         
         bc1fl 0x802bd9e4
         mtc1 at, f4
         at = 0x3f00 << 16
         mtc1 at, f16
         goto 0x802bd9ec
         swc1 f16, 0x28, sp

    loc_0x802bd9ec: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bd9d8
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = v0

    loc_0x802bd9fc: // orphan
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = v0
         mtc1 v0, f6
         at = 0x40a0 << 16
         mtc1 at, f2
         cvt.s.w f10, f6
         mtc1 0, f18
         t9 = [sp + 0x2c]         // s4
         at = 0xbf00 << 16
         mtc1 t9, f6
         mul.s f8, f10, f2
         div.s f16, f8, f20
         c.lt.s f18, f16
         

    loc_0x802bda34: // orphan
         bc1fl 0x802bda50
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bda58
         cvt.s.w f10, f6

    loc_0x802bda58: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bda44
         at = 0x4150 << 16
         mtc1 at, f4

    loc_0x802bdb5c: // orphan
         [t2 + 0x64] = v0
         t3 = [t3 + 0x4058]       // t9
         beql t3, 0, 0x802bdbec   // unlikely
         byte [v1 + 1] = 0

    loc_0x802bdb6c: // orphan
         byte [v1 + 1] = t4
         v0 = [a0 + 0]            // t9
         t9 = byte [v1 + 0xc88]   // s4
         t4 = v1
         t5 = , unsigned  byte [v0 + 0x10] // s4
         t0 = t9 << 2
         t0 -= t9
         t6 = t5 << 2
         // CODE XREF from fcn.802cbc34 @ +0x94
         t7 = v0 + t6
         t8 = [t7 + 0x14]         // t9
         t0 <<= 3
         t0 += t9
         t0 <<= 7
         t1 = t8 + t0

    loc_0x802bdbec: // orphan
         ra = [sp + 0x14]

    loc_0x802bdc58: // orphan
         t1 = [v0 + 0]
         t2 = [t1 + 4]            // t9
         [t2 + 0x34] = t0
         t4 = [v0 + 0]
         byte [t4 + 8] = t3
         t5 = [v0 + 0]
         [t5 + 0x64] = 0

    loc_0x802bdca8: // orphan
         t6 = 0 + 0xff            // s4
         t7 = 0 + 0xaa
         t8 = 0 + 0x8c
         t9 = 0 + 2
         [sp + 0x20] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         [sp + 0x1c] = 0
         t0 = [v1 + 4]
         t3 = 0x8800 << 16
         t4 = 0x8000 << 16
         t4 += 0x612c
         t3 += 0xe4c
         t2 = v1 + 0x88
         t1 = t0 + 0x2c
         [sp + 0x24] = t1
         [sp + 0x28] = t2
         [sp + 0x2c] = t3
         [sp + 0x30] = t4
         a0 = v0                  // s4
         a1 = 0 + 0x141
         a2 = 0 + 0x108
         call 0x88903c50          // 0x88903c50(0xff, 0x141, 0x108, -1)
         a3 = 0 + 4
         ra = [sp + 0x3c]
         sp += 0x40

    loc_0x802bdf8c: // orphan
         sp -= 0x30
         [sp + 0x14] = ra
         v0 = , unsigned  byte [v1 + 8] // s4
         if                       // likely
         

    loc_0x802bdfa0: // orphan
         t6 = , unsigned  byte [v1 + 9] // s4
         beql t6, 0, 0x802be004   // unlikely
         t3 = byte [v1 + 0x30]    // s4

    loc_0x802bdfac: // orphan
         if                       // fcn.802bdfb8+0x1c // unlikely
         t7 = v0 - 1              // t3

    loc_0x802bdfb4: // orphan
         byte [v1 + 8] = t7

    loc_0x802be004: // orphan
         at = 0 | 0xa960
         t6 = 0x8851 << 16
         byte [sp + 0x2f] = t3
         a1 = halfword [v1 + 0x56]
         t6 -= 0x2928

    loc_0x802be018: // orphan
         a0 = 0x8880 << 16
         halfword [sp + 0x2c] = a1
         t4 = , unsigned  byte [v1 + 0xa] // s4
         a0 = [a0 + 0x4054]       // t9
         t9 = 0x8851 << 16
         unsigned , hi            // s4 // s4
         a0 = , unsigned  , a0 < 1
         t5 = lo                  // s4
         a3 = t5 + t6
         t7 = byte [a3 + 0]       // s4
         t8 = t7 << 2
         t8 += t7
         t8 <<= 2
         t9 += t8
         t9 = , unsigned  byte [t9 - 0x2987] // s4
         if                       // fcn.82bea63c-0x292c5b8 // likely
         byte [sp + 0x27] = t9

    loc_0x802be380: // orphan
         t6 = halfword [v1 + 0xc]
         t8 = t6 + 1              // lo
         halfword [v1 + 0xc] = t8
         // CODE XREF from fcn.802cbc34 @ +0xb8
         v1 = [a2 + 0]            // arg3 // t9
         t0 = halfword [v1 + 0xc]
         at = , t0 < 6
         bnel at, 0, 0x802be390   // unlikely
         // CODE XREF from fcn.802a91c8 @ 0x802bc84c
         t1 = halfword [sp + 0x18]

    loc_0x802be5bc: // orphan
         call 0x88500e4c          // 0x88500e4c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = v0 << 0x18
         v1 = , signed  v1 >> 0x18 // t9
         t5 = v1 << 2
         t5 += v1
         t5 <<= 2
         t5 += v1
         t5 <<= 3
         t5 -= v1
         t4 = [sp + 0x138]
         t5 <<= 2
         t5 += v1
         t5 <<= 2
         t9 = t4 + t5
         t6 = t9 + 0xc8c
         t7 = 0 + 2
         s1 = 0x8851 << 16
         [sp + 0x150] = t6
         // CODE XREF from fcn.802cbc34 @ +0xe0
         s1 = [s1 - 0x2930]       // t9

    loc_0x802be9a4: // orphan
         call 0x880007b0          // 0x880007b0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         if                       // unlikely
         

    loc_0x802be9b4: // orphan
         call 0x80063754          // 0x80063754(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [s3 + 1] // s4
         if                       // unlikely
         v1 = 0x800d << 16

    loc_0x802be9c0: // orphan
         v1 = 0x800d << 16

    loc_0x802be9c4: // orphan
         v1 += 0x510
         s0 = [v1 + 0]            // t9
         t3 = 0x5007 << 16
         t3 |= 0x5007
         t2 = s0 + 8
         [v1 + 0] = t2
         [s0 + 4] = t3
         goto 0x802bea0c          // fcn.82bea63c-0x292bc30
         [s0 + 0] = s2

    loc_0x802be9e8: // orphan
         s0 = 0x800d << 16
         s0 = [s0 + 0x510]
         at = 0x800d << 16
         t5 = 0x9a9 << 16
         t4 = s0 + 8
         [at + 0x510] = t4
         t5 |= 0x9a9
         [s0 + 4] = t5
         // CODE XREF from fcn.802cbc34 @ +0xf0
         [s0 + 0] = s2

    loc_0x802befd4: // orphan
         bnel t7, 0, 0x802beff4   // unlikely
         t8 = halfword [s1 + 0x56]

    loc_0x802befdc: // orphan
         call 0x8003573c          // 0x8003573c(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802befe0: // orphan
         a3 = 0 + 0x46
         mtc1 0, f18
         goto 0x802bf18c
         s2 = s7 + 1

    loc_0x802beff4: // orphan
         a0 = sp + 0x144
         a1 = 0
         if                       // likely
         a2 = 0 + 0x46

    loc_0x802bf004: // orphan
         t3 = byte [s1 + 0x30]    // s4
         s2 = s7 + 1
         t4 = s1 + t3
         t9 = byte [t4 + 0x31]    // s4
         bnel s2, t9, 0x802bf17c  // likely
         a3 = 0 + 0x82

    loc_0x802bf01c: // orphan
         a0 = , unsigned  byte [sp + 0x13f]
         t2 = 0 + 0xff            // s4
         at = 0x437f << 16
         unsigned , hi
         v1 = t2 - a0             // s4
         t5 = v1 << 3
         t5 += v1
         t5 <<= 2
         t5 -= v1
         t5 <<= 1
         mtc1 at, f10
         t7 = v1 << 6

    loc_0x802bf04c: // orphan
         t7 += v1
         v0 = lo
         mtc1 v0, f6
         t6 = v0 + t5
         mtc1 t6, f4
         cvt.s.w f8, f6
         t7 <<= 1
         t8 = 0 + t7
         t3 = a0 << 6
         t3 += a0
         cvt.s.w f6, f4
         t3 <<= 1
         t4 = ~t3
         t2 = v0 - 0              // lo
         div.s f2, f8, f10
         mtc1 at, f8
         mtc1 t8, f10
         
         cvt.s.w f4, f10
         div.s f12, f6, f8
         mtc1 at, f6
         at = 0 | 0x817e

    loc_0x802bf0a4: // orphan
         t9 = t4 + at
         mtc1 t9, f8
         at = 0x437f << 16
         cvt.s.w f10, f8
         div.s f14, f4, f6
         mtc1 t2, f6
         mtc1 at, f4
         cvt.s.w f8, f6
         div.s f16, f10, f4
         mtc1 at, f10
         at = 0xbf00 << 16
         div.s f4, f8, f10
         c.lt.s f18, f4
         
         bc1fl 0x802bf0f8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0

    loc_0x802bf0ec: // orphan
         goto 0x802bf100
         add.s f6, f0, f2

    loc_0x802bf100: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bf0ec
         at = 0xbf00 << 16
         c.lt.s f18, f12
         trunc.w.s f8, f6
         mfc1 t6, f8
         bc1f 0x802bf128
         byte [sp + 0x144] = t6
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf134
         add.s f10, f0, f12

    loc_0x802bf124: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bf0ec
         at = 0xbf00 << 16
         c.lt.s f18, f12
         trunc.w.s f8, f6
         mfc1 t6, f8
         bc1f 0x802bf128
         byte [sp + 0x144] = t6
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf134
         add.s f10, f0, f12

    loc_0x802bf134: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bf120
         at = 0xbf00 << 16
         c.lt.s f18, f14
         trunc.w.s f4, f10
         mfc1 t8, f4
         bc1f 0x802bf15c
         byte [sp + 0x145] = t8
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802bf168
         add.s f6, f0, f16

    loc_0x802bf168: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bf154
         trunc.w.s f8, f6
         mfc1 t4, f8

    loc_0x802bf170: // orphan
         goto 0x802bf18c
         byte [sp + 0x146] = t4

    loc_0x802bf178: // orphan
         a3 = 0 + 0x82

    loc_0x802bf17c: // orphan
         call 0x8003573c          // 0x8003573c(-1, 0x442f71dcfe116408, 0x8, -1)
         s2 = s7 + 1
         mtc1 0, f18
         

    loc_0x802bf18c: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802befe8, 0x802bf170
         a0 = 0x800d << 16
         a0 += 0x510
         s0 = [a0 + 0]
         t2 = 0xfa00 << 16

    loc_0x802bf19c: // orphan
         s1 = 0x8851 << 16
         t9 = s0 + 8
         [a0 + 0] = t9

    loc_0x802bf1a8: // orphan
         [s0 + 0] = t2
         t6 = , unsigned  byte [sp + 0x144]
         t3 = , unsigned  byte [sp + 0x145] // s4
         t5 = , unsigned  byte [sp + 0x146] // s4
         t7 = t6 << 0x18
         t4 = t3 << 0x10
         t9 = t7 | t4
         t6 = t5 << 8
         t8 = t9 | t6
         t3 = t8 | 0xff

    loc_0x802bf1d0: // orphan
         [s0 + 4] = t3
         s0 = [a0 + 0]
         t4 = s5 + 0x17
         t2 = t4 & 0x3ff
         t7 = s0 + 8
         [a0 + 0] = t7
         t5 = t2 << 0xe
         t8 = s5 & 0x3ff

    loc_0x802bf1f0: // orphan
         t3 = t8 << 0xe
         t9 = t5 | s3
         t6 = t9 | 0x1a4
         t7 = t3 | 0x154
         [s0 + 4] = t7
         [s0 + 0] = t6
         // CODE XREF from fcn.802cbc34 @ +0x120
         s1 = [s1 - 0x2930]       // t9
         s5 += 0x18
         s5 <<= 0x10
         t4 = , unsigned  byte [s1 + 0x2d]
         s5 = , signed  s5 >> 0x10
         s7 = s2
         at = , unsigned  , s2 < t4
         bnel at, 0, 0x802befac   // fcn.82bea63c-0x292b690 // unlikely
         t9 = , unsigned  byte [s1 + 0x2e]

    loc_0x802bf22c: // orphan
         t1 = 0x8851 << 16
         t0 = 0x800d << 16
         t0 += 0x510
         t1 -= 0x2930
         s7 = 0

    loc_0x802bf2e4: // orphan
         a0 = halfword [s1 + 0x8e]
         a2 = , unsigned  halfword [s1 + 0x90]
         t5 = 0 + 3
         [sp + 0x10] = t5
         a1 = 0 + 0x52
         call 0x88002ec0          // 0x88002ec0(0xffff, 0x52, 0xffff, -1)
         a3 = 0 + 0x1a
         t9 = 0x8851 << 16
         t9 = [t9 - 0x2930]
         t6 = 0 + 3
         a0 = 0 + 0x5c
         a2 = , unsigned  halfword [t9 + 0x8c]
         [sp + 0x10] = t6
         a1 = 0 + 0x52
         call 0x88002ec0          // 0x88002ec0(0x5c, 0x52, 0xffff, 0x1a)
         // CODE XREF from fcn.802cbc34 @ +0x128
         a3 = 0 + 0x1a
         a2 = 0x8801 << 16

    loc_0x802bf328: // orphan
         a2 = [a2 - 0x1334]       // t9
         a0 = 0 + 0x40
         a1 = 0 + 0x53
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x40, 0x53, -1, 0x0)
         [sp + 0x10] = 0
         t8 = 0x8851 << 16
         t8 = [t8 - 0x2930]       // t9
         a2 = 0x8801 << 16
         a2 = [a2 - 0x1330]       // t9
         a0 = halfword [t8 + 0x9c]
         [sp + 0x10] = 0
         a1 = 0 + 0x53
         call 0x8004d19c          // 0x8004d19c(0xffff, 0x53, -1, 0x0)
         a3 = 0
         a0 = 0 + 0xef

    loc_0x802bf368: // orphan
         call 0x8004d334          // 0x8004d334(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x8004d40c          // 0x8004d40c(-1, 0x0, 0x8, -1)
         a0 = 0 + 1               // lo
         t3 = 0x8851 << 16
         t3 = [t3 - 0x2930]       // t9
         a1 = 0 + 0x100
         a2 = 0 + 1               // lo
         call 0x8004d27c          // 0x8004d27c(0x1, 0x100, 0x1, -1)
         a0 = [t3 + 0x20]         // t9
         s1 = 0x8851 << 16
         s1 = [s1 - 0x2930]       // t9
         s5 = halfword [s1 + 0x9e]
         t7 = , unsigned  byte [s1 + 0x2e]
         s5 += 4
         s5 <<= 0x10
         if                       // fcn.802bf404+0x64 // likely
         s5 = , signed  s5 >> 0x10

    loc_0x802bf3b0: // orphan
         s4 = 0x8851 << 16
         s3 = 0xa0a0 << 16
         s3 |= 0xa0ff
         s4 -= 0x2bb0
         s1 = [sp + 0x138]
         s6 = 0 - 1               // s2

    loc_0x802bf7e4: // orphan
         t2 = [sp + 0x78]
         v0 = 0x8851 << 16
         v0 -= 0x2930
         t3 = [t2 + 0]            // t9
         t8 = 0 + 5
         t9 = , unsigned  byte [t3 + 0]
         bnel s6, t9, 0x802bf7f4  // likely
         a0 = s5                  // t9

    loc_0x802bf7ec: // orphan
         goto 0x802bf834
         [sp + 0x170] = t8

    loc_0x802bfb1c: // orphan
         mtc1 at, f4
         
         swc1 f4, 0x94, sp

    loc_0x802c00f0: // orphan
         [t2 + 0x84] = 0

    loc_0x802c00f4: // orphan
         t3 = 0x8880 << 16
         t3 = [t3 + 0x4054]       // t9
         if                       // fcn.802c0104+0xc4 // unlikely
         

    loc_0x802c01cc: // orphan
         call 0x8000612c          // 0x8000612c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = halfword [sp + 0x1e]

    loc_0x802c0208: // orphan
         at = 0x8800 << 16
         a0 = 0x8851 << 16
         [at + 0x68b4] = t6
         call 0x800033dc          // 0x800033dc(0x88510000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x2930]       // t9
         call 0x888002dc          // 0x888002dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x5049 << 16
         call 0x80002bf8          // 0x80002bf8(0x50490000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x5550
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x802c0378: // orphan
         t8 = [s3 + 0]
         call 0x8003514c          // "T@" // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         [t8 + 0x28] = v0
         bnel v0, 0, 0x802c0490   // likely
         t0 = [s3 + 0]

    loc_0x802c038c: // orphan
         t9 = [s3 + 0]
         a1 = byte [sp + 0xc7]
         v0 = 0 + 9
         byte [t9 + 0x2d] = v0
         t1 = [s3 + 0]
         t0 = 0 + 0x10d
         t2 = 0 + 0x1ba
         halfword [t1 + 0x8c] = t0
         t3 = [s3 + 0]
         t4 = 0 + 0x87
         t6 = 0 + 0x2f
         halfword [t3 + 0x8e] = t2
         t5 = [s3 + 0]
         t8 = 0 + 0x8e

    loc_0x802c0490: // orphan
         v0 = 0 + 0xe

    loc_0x802c06f4: // orphan
         add.s f4, f0, f8

    loc_0x802c09b0: // orphan
         mtc1 at, f10
         
         swc1 f10, 0x70, sp

    loc_0x802c0e80: // orphan
         
         at = 0x4150 << 16

    loc_0x802c1010: // orphan
         t4 = a1 << 2

    loc_0x802c1118: // orphan
         [sp + 0x1c] = s1
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x18] = s0
         s1 = 0x8851 << 16
         [sp + 0x2c] = ra
         s1 -= 0x2988
         s0 = 0
         s2 = sp + 0x38
         s3 = sp + 0x3a
         s4 = 0 + 4

    loc_0x802c11cc: // orphan
         beql v0, 0, 0x802c11fc   // unlikely
         t6 = , unsigned  byte [a0 + 3]

    loc_0x802c11d4: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x802c11dc: // orphan
         // CODE XREF from fcn.802bc8fc @ 0x802bc918
         if                       // unlikely
         v1 = 0 + 2

    loc_0x802c11e4: // orphan
         at = 0 + 5
         if                       // unlikely
         

    loc_0x802c11fc: // orphan
         bnel t6, 0, 0x802c1210   // likely
         t7 = , unsigned  byte [a0 + 2] // lo

    loc_0x802c1204: // orphan
         ret                      // ra
         v0 = 0 + 4

    loc_0x802c1210: // orphan
         if                       // unlikely
         

    loc_0x802c1218: // orphan
         ret                      // ra
         v0 = 0 + 3

    loc_0x802c1220: // orphan
         ret                      // ra
         v0 = 0

    loc_0x802c1228: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802c1230: // orphan
         ret                      // ra
         v0 = v1

    loc_0x802c1278: // orphan
         s3 += 1

    loc_0x802c127c: // orphan
         at = , s3 < 4
         s0 += 0x194
         [s0 - 0x194] = 0
         halfword [s0 - 0x190] = s4
         if                       // unlikely
         [s0 - 0x18c] = 0

    loc_0x802c1294: // orphan
         call 0x88504704          // 0x88504704(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s6 = 0x8852 << 16
         s6 += 0x3008
         t6 = 0 + 1               // lo
         s1 = 0x8851 << 16
         s5 = 0x8852 << 16
         byte [s6 + 0] = t6
         s5 += 0x300c
         s1 -= 0x2988
         s3 = 0
         fp = 0 + 7
         s7 = 0 + 6

    loc_0x802c12c8: // orphan
         call 0x885047b4          // 0x885047b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         if                       // likely
         at = , unsigned  , v0 < 5

    loc_0x802c12d8: // orphan
         t7 = byte [s5 + 0]

    loc_0x802c12dc: // orphan
         t0 = v0 << 2
         bnel s3, t7, 0x802c12f4  // likely
         v1 = byte [s6 + 0]       // s4

    loc_0x802c12e8: // orphan
         goto 0x802c131c
         s0 = s2

    loc_0x802c12f4: // orphan
         t8 = v1 << 2
         t8 -= v1
         t8 <<= 3
         t8 += v1
         t8 <<= 2
         t8 += v1
         t8 <<= 2
         t9 = v1 + 1
         byte [s6 + 0] = t9
         s0 = s2 + t8

    loc_0x802c131c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c12e8
         halfword [s0 + 4] = s3

    loc_0x802c1320: // orphan
         if                       // unlikely
         [s0 + 8] = v0

    loc_0x802c1328: // orphan
         at = 0x8851 << 16
         at += t0
         t0 = [at - 0x2b68]       // t9
         goto t0                  // t9
         

    loc_0x802c1350: // orphan
         at = 0x8851 << 16
         at += t2
         t2 = [at - 0x2b54]       // t9
         goto t2                  // t9
         

    loc_0x802c13b8: // orphan
         s3 += 1
         at = , s3 < 4
         if                       // unlikely
         s1 += 0x14

    loc_0x802c13c8: // orphan
         t9 = byte [s6 + 0]
         s0 = 0x8852 << 16
         s0 += 0x29b0
         if                       // fcn.802c142c+0x8 // unlikely
         s3 = 0

    loc_0x802c13dc: // orphan
         s4 = 0x8852 << 16
         s4 += 0x3004

    loc_0x802c13e4: // orphan
         s5 = 0 - 2               // hi

    loc_0x802c13e8: // orphan
         s2 = s0 + 0x28

    loc_0x802c1488: // orphan
         a1 -= 0x2da4
         call 0x80040e80          // 0x80040e80(-1, 0x442f71dcfe113664, 0x8, -1)
         a0 = v0                  // s4
         at = 0x8852 << 16
         a1 = 0x8851 << 16
         [at + 0x3000] = v0

    loc_0x802c14a0: // orphan
         a1 -= 0x2dd8
         call 0x80040e80          // 0x80040e80(-1, 0x442f71dcfe113630, 0x8, -1)
         a0 = [sp + 0x1c]
         at = 0x8852 << 16

    loc_0x802c14b0: // orphan
         [at + 0x3004] = v0
         call 0x80003120          // 0x80003120(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x1c]
         v0 = 0x8852 << 16
         v0 += 0x29a8
         [v0 + 0] = 0
         call 0x80064c88          // 0x80064c88(0xfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         halfword [v0 + 4] = 0
         v1 = 0x8852 << 16
         v1 += 0x300c
         t6 = 0 - 1               // s2
         byte [v1 + 0] = v0
         byte [v1 + 1] = t6
         at = 0x8852 << 16

    loc_0x802c14e8: // orphan
         call 0x88504828          // 0x88504828(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [at + 0x3009] = 0
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x802c1570: // orphan
         at += t8
         lwc1 f0, 0x7e50, at
         s3 = v0                  // s4
         at = 0xbf00 << 16
         add.s f2, f0, f0
         c.lt.s f4, f2
         
         bc1fl 0x802c15a8
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c15b0          // fcn.802bc8fc+0x4cb4
         add.s f6, f0, f2

    loc_0x802c1804: // orphan
         t7 = t6 + 0x7b
         v1 = 0 + 1               // lo
         halfword [sp + 0x1e] = t7
         goto fcn.802c1834        // fcn.802c1834(-1, 0x442f71dcfe116408, 0x8)
         // CALL XREF from fcn.8250fc68 @ +0xbd8
         halfword [sp + 0x1c] = t8

    loc_0x802c18f0: // orphan
         ret                      // ra
         

    loc_0x802c195c: // orphan
         a1 = 0 + 3
         a2 = 0 + 0x5e
         call 0x880048d4          // 0x880048d4(-1, 0x3, 0x5e, -1)
         a3 = 0 + 0xda
         v1 = 0x8852 << 16
         v1 += 0x29a0
         t3 = [v1 + 0]            // t9
         t2 = 0x8801 << 16
         v0 = [sp + 0x4c]         // s4
         t2 -= 0x1264
         [t3 + 4] = t2
         t5 = [v1 + 0]            // t9
         t4 = 0 + 0x1c7
         t7 = 0 + 0xa7
         t6 = [t5 + 4]
         t5 = 0 + 2
         t2 = 0 + 0xff            // s4
         halfword [t6 + 0x10] = t4
         t8 = [v1 + 0]            // t9
         t3 = 0 + 0xf0
         t0 = 0 + 1               // lo
         t9 = [t8 + 4]
         t1 = 0 + 0xe6
         a0 = 0
         halfword [t9 + 0x12] = t7
         [sp + 0x3c] = t5
         [sp + 0x38] = 0
         [sp + 0x34] = 0
         [sp + 0x20] = t3
         [sp + 0x1c] = t2
         [sp + 0x18] = t1
         [sp + 0x14] = t0
         [sp + 0x10] = 0
         a1 = 0 + 3
         a2 = 0 + 0x5b
         a3 = 0 + 0x18f

    loc_0x802c19ec: // orphan
         [sp + 0x30] = v0
         [sp + 0x2c] = v0
         [sp + 0x28] = v0
         call 0x880048d4          // 0x880048d4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v0
         v1 = 0x8852 << 16
         v1 += 0x29a0
         t6 = [v1 + 0]            // t9
         t4 = 0x8801 << 16
         t4 -= 0x1218
         [t6 + 8] = t4
         t7 = [v1 + 0]            // t9
         t8 = 0 + 0x1cc
         t0 = 0 + 0x31
         t9 = [t7 + 8]
         halfword [t9 + 0x10] = t8
         t1 = [v1 + 0]            // t9
         t2 = [t1 + 8]
         halfword [t2 + 0x12] = t0
         ra = [sp + 0x44]
         sp += 0x50
         ret                      // ra
         

    loc_0x802c1bb4: // orphan
         t2 = halfword [a0 + 0xc]
         t5 = lo
         t6 = t5 & 1              // lo
         halfword [a0 + 0x16] = 0
         if                       // unlikely
         halfword [a0 + 0x10] = t2

    loc_0x802c1bcc: // orphan
         t7 = 0 - 0x8000
         goto 0x802c1bdc
         halfword [a0 + 0x12] = t7

    loc_0x802c1bd8: // orphan
         halfword [a0 + 0x12] = 0

    loc_0x802c1bdc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c1bd0
         t8 = halfword [a0 + 0x12]
         at = 0x3f80 << 16
         mtc1 at, f18
         halfword [a0 + 0x14] = t8
         ret                      // ra
         swc1 f18, 0x1c, a0

    loc_0x802c1d34: // orphan
         lwc1 f4
         mtc1 t5, f16
         at = 0x44c0 << 16
         mul.s f10, f4, f8
         a1 = , unsigned  halfword [a0 + 0x14]
         t2 = v0 + a2
         a1 = , signed  a1 >> 4
         a1 <<= 2
         cvt.s.w f18, f16
         mtc1 at, f16
         t1 = t0 + a1
         at = 0x8009 << 16
         at += a1
         sub.s f6, f18, f10
         mul.s f18, f16, f0
         trunc.w.s f4, f6
         mfc1 t7, f4
         
         halfword [a0 + 0xc] = t7
         lwc1 f8
         mul.s f10, f8, f18
         trunc.w.s f6, f10
         mfc1 t9, f6
         
         halfword [a0 + 0x18] = t9
         lwc1 f4
         mul.s f16, f4, f2
         add.s f8, f16, f12
         swc1 f8, 0x20, a0
         lwc1 f18, -0x71b0, at
         halfword [a0 + 0x12] = t2
         mul.s f10, f18, f2
         add.s f6, f10, f12
         swc1 f6, 0x24, a0
         halfword [sp + 0x18] = a3
         call 0x8000b524          // 0x8000b524(-1, 0x0, 0x8, -1)
         [sp + 0x20] = a0
         a0 = [sp + 0x20]         // t9
         a3 = halfword [sp + 0x18]
         t5 = v0 & 0xf
         t3 = halfword [a0 + 0x14]
         t6 = t5 << 4
         t4 = t3 + a3
         t7 = t4 + t6
         halfword [a0 + 0x14] = t7
         ra = [sp + 0x14]         // lo
         sp += 0x20
         ret                      // lo
         

    loc_0x802c23f0: // orphan
         a0 = 0 + 0x34
         call 0x8004c874          // fcn.802c23fc // 0x8004c874(0x34, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 6

    loc_0x802c2494: // orphan
         at = 0x8852 << 16
         [at + 0x29a8] = t6
         t1 = 0x8850 << 16
         t2 = 0x8850 << 16
         t3 = 0x8800 << 16
         t4 = 0x8850 << 16
         [sp + 0x44] = ra
         at = 0x8852 << 16
         t4 += 0x57bc
         t3 += 0xe4c
         t2 += 0x59b8
         t1 += 0x57f4
         t7 = 0 + 1               // lo
         t8 = 0 + 0xe6
         t9 = 0 + 0xff            // s4
         t0 = 0 + 0xf0
         t5 = 0 + 3
         byte [at + 0x300a] = 0

    loc_0x802c24dc: // orphan
         [sp + 0x3c] = t5
         [sp + 0x20] = t0
         [sp + 0x1c] = t9
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         [sp + 0x24] = t1
         [sp + 0x28] = t2

    loc_0x802c24f8: // orphan
         [sp + 0x2c] = t3
         [sp + 0x30] = t4
         [sp + 0x10] = 0

    loc_0x802c288c: // orphan
         // CODE XREF from fcn.802c2838 @ 0x802c2854
         beql a0, v0, 0x802c289c  // fcn.802afdb0+0x12aec // unlikely
         ra = [sp + 0x44]

    loc_0x802c28f0: // orphan
         t6 = 0x8852 << 16
         t6 = [t6 + 0x29a8]
         [sp + 0x2c] = ra
         [sp + 0x28] = s5
         [sp + 0x24] = s4

    loc_0x802c2b68: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c2c20
         if                       // likely
         a0 = t0 << 0x10

    loc_0x802c2b70: // orphan
         unsigned , hi
         t7 = lo

    loc_0x802c2b78: // orphan
         t8 = s6 + t7
         t9 = halfword [t8 + 0x198]
         bnel s4, t9, 0x802c2bac  // likely
         at = 0 + 1               // lo

    loc_0x802c2b88: // orphan
         v1 = [s2 + 0]            // t9
         t4 = 0 + 0x64
         s0 = 0 + 1               // lo
         t3 = v1 + 8
         [s2 + 0] = t3
         [v1 + 4] = t4
         goto 0x802c2be8
         [v1 + 0] = t1

    loc_0x802c2ba8: // orphan
         at = 0 + 1               // lo

    loc_0x802c2bac: // orphan
         bnel s0, at, 0x802c2bec  // likely
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x802c2bb4: // orphan
         unsigned , hi
         t5 = lo
         t6 = s6 + t5
         t7 = halfword [t6 + 0x198]
         beql s4, t7, 0x802c2bec  // unlikely
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x802c2bcc: // orphan
         v1 = [s2 + 0]            // t9
         t9 = 0 + 0xaa
         s0 = 0
         t8 = v1 + 8
         [s2 + 0] = t8
         [v1 + 4] = t9
         [v1 + 0] = t1

    loc_0x802c2be8: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c2ba0
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x802c2bec: // orphan
         a1 = 0 + 0xeb
         a2 = 0 + 0x82
         a3 = 0 + 0x82
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(-1, 0xeb, 0x82, 0x82)
         [sp + 0x50] = t0
         t0 = [sp + 0x50]
         s1 += 1
         t1 = 0xfa00 << 16
         if                       // likely
         t0 += 0x8e

    loc_0x802c3234: // orphan
         // CODE XREF from fcn.802c30cc @ 0x802c31cc
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x58] = v0
         mtc1 v0, f6
         at = 0x4270 << 16
         mtc1 at, f2
         cvt.s.w f10, f6
         at = 0x3f80 << 16
         mtc1 at, f8
         mtc1 0, f18
         at = 0xbf00 << 16
         mul.s f16, f10, f8
         div.s f4, f16, f2
         c.lt.s f18, f4
         
         bc1fl 0x802c323c
         mtc1 at, f12
         at = 0x3f00 << 16
         mtc1 at, f12
         goto 0x802c3240
         

    loc_0x802c53a0: // orphan
         bc1fl 0x802c53bc
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x802c53c4
         add.s f8, f0, f6

    loc_0x802c53c4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c53b0
         trunc.w.s f10, f8
         mfc1 t2, f10
         
         halfword [a0 + 4] = t2

    loc_0x802c55b4: // orphan
         t0 = t9 - 1
         halfword [a0 + 0x14] = t0
         t2 = halfword [a0 + 0x14]
         t1 = halfword [a0 + 8]
         t7 = halfword [a0 + 4]   // s4
         t5 = 0 + 0x78
         t3 = t1 + t2
         halfword [a0 + 8] = t3
         t4 = halfword [a0 + 8]
         t8 = t6 + t7
         halfword [a0 + 6] = t8
         at = , t4 < 0x79
         if                       // likely
         

    loc_0x802c55ec: // orphan
         [a0 + 0] = 0
         halfword [a0 + 8] = t5

    loc_0x802c55f4: // orphan
         ret                      // ra
         

    loc_0x802c6018: // orphan
         halfword [a0 + 8] = t6
         t7 = halfword [a2 + 0xa]
         mtc1 at, f12
         at = 0x8009 << 16
         t8 = t7 + 0x200
         t9 = t8 & 0xffff
         t0 = , signed  t9 >> 4
         t1 = t0 << 2
         halfword [a2 + 0xa] = t8
         at += t1
         lwc1 f4, -0x71b0, at
         at = 0x437f << 16
         mtc1 at, f10
         mul.s f6, f4, f12
         mtc1 0, f16
         at = 0xbf00 << 16
         add.s f8, f6, f12

    loc_0x802c68a4: // orphan
         a2 = 0 + 0x4c
         call 0x8850a0a0          // 0x8850a0a0(-1, 0x442f71dcfe116408, 0x4c, -1)
         a3 = 0 + 0x5a
         goto 0x802c68cc          // fcn.802ad1c8+0x19704
         ra = [sp + 0x14]

    loc_0x802c6950: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         t6 = 0 + 1               // lo
         at = 0x8800 << 16
         call 0x88900494          // 0x88900494(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x68b4] = t6
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x802c6aac: // orphan
         t2 = [t2 + 0x30f4]       // t9
         at = 0x8800 << 16
         [at + 0x68b4] = 0
         t3 = , unsigned  byte [t2 + 0]
         at = s0 + 0x7fff
         byte [at + 0x2959] = t3
         ra = [sp + 0x3c]         // t9
         s4 = [sp + 0x38]
         s3 = [sp + 0x34]
         s2 = [sp + 0x30]         // t9
         s1 = [sp + 0x2c]         // ra
         s0 = [sp + 0x28]         // t9
         ret                      // t9
         sp += 0x40

    loc_0x802c7880: // orphan
         // CODE XREF from fcn.802af284 @ 0x802c7860
         trunc.w.s f6, f4
         mfc1 t8, f6
         if                       // likely
         halfword [s4 + 0x16] = t8

    loc_0x802c78dc: // orphan
         t7 <<= 2
         at = 0x8851 << 16
         at += t7
         t7 = [at - 0x2a00]       // t9
         goto t7                  // t9
         

    loc_0x802c79e8: // orphan
         ret                      // ra
         

    loc_0x802c7a14: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x802c7a24: // orphan
         mul.s f2, f6, f14
         c.lt.s f16, f2
         
         bc1f 0x802c7a44
         at = 0x3f00 << 16
         mtc1 at, f18
         goto 0x802c7a58
         mov.s f0, f18

    loc_0x802c7a58: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802c7a3c
         add.s f10, f0, f2
         at = 0x4f80 << 16
         trunc.w.s f4, f10
         mfc1 t8, f4
         
         halfword [sp + 0x56] = t8
         t9 = , unsigned  halfword [a0 + 2]
         mtc1 t9, f8
         if                       // fcn.82bea63c-0x2922bb0 // likely
         cvt.s.w f6, f8

    loc_0x802ccc04: // orphan
         goto 0x802ccc2c          // fcn.802cc8cc+0x360
         ra = [sp + 0x14]

    loc_0x802ccc60: // orphan
         halfword [sp + 0x22] = a2
         at = 0 + 1               // lo
         if                       // likely
         a2 = , unsigned  halfword [sp + 0x22]

    loc_0x802ccc70: // orphan
         a0 = 0 + 0x13
         a1 = 0 + 0x13
         a2 = [sp + 0x24]         // s4
         call 0x88600860          // 0x88600860(0x13, 0x13, 0xff, -1)
         a3 = 0
         goto 0x802cccbc
         ra = [sp + 0x14]

    loc_0x802ccc8c: // orphan
         a0 = a2 & 0xff
         call 0x8006397c          // 0x8006397c(0x8, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         a0 = [sp + 0x18]         // a2
         call 0x800639c0          // 0x800639c0(0x8, 0x442f71dcfe116408, 0x8, -1)
         byte [sp + 0x1e] = v0
         a0 = , unsigned  byte [sp + 0x1e] // s4
         a1 = v0                  // s4
         a2 = [sp + 0x24]         // s4
         call 0x88600860          // 0x88600860(0xff, 0xff, 0xff, -1)
         a3 = 0
         ra = [sp + 0x14]

    loc_0x802cccbc: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802ccc84
         sp += 0x20
         ret                      // ra
         

    loc_0x802ccd3c: // orphan
         a3 = 0x8860 << 16
         a3 = , unsigned  byte [a3 + 0x18c0] // s4
         a2 = [a2 + 0x18bc]       // t9
         a0 = , unsigned  byte [sp + 0x1e] // s4
         call 0x88600860          // 0x88600860(0xff, 0x442f71dcfe116408, -1, 0xff)
         a1 = v0                  // s4
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x802cce9c: // orphan
         [v0 + 0] = t7
         t6 = , unsigned  byte [a1 + 1] // s4
         t9 = , unsigned  byte [a1 + 0] // s4
         t5 = , unsigned  byte [a1 + 2] // s4
         t7 = t6 << 0x10
         t4 = t9 << 0x18
         t9 = , unsigned  byte [a1 + 3] // s4
         t8 = t4 | t7
         t6 = t5 << 8
         t4 = t8 | t6
         t5 = t4 | t9
         [v0 + 4] = t5
         v0 = [t0 + 0]            // t9
         t6 = 0xfb00 << 16
         a2 += 0x1918
         t8 = v0 + 8
         [t0 + 0] = t8
         [v0 + 0] = t6
         t8 = , unsigned  byte [a2 + 1] // s4
         t4 = , unsigned  byte [a2 + 0] // s4
         t5 = , unsigned  byte [a2 + 2] // s4
         t6 = t8 << 0x10
         t9 = t4 << 0x18

    loc_0x802ccef8: // orphan
         t4 = , unsigned  byte [a2 + 3] // s4
         t7 = t9 | t6             // s2
         t8 = t5 << 8
         t9 = t7 | t8             // s2
         t5 = t9 | t4             // s2
         t7 = 0x8860 << 16
         [v0 + 4] = t5
         t7 = [t7 + 0x17ac]
         t8 = 0x8860 << 16
         t6 = 0x8860 << 16
         if                       // likely
         at = 0x8860 << 16

    loc_0x802ccf28: // orphan
         t8 = byte [t8 + 0x18a0]  // s4
         t6 = byte [t6 + 0x191c]  // s4
         t4 = 0x8860 << 16
         t5 = 0x8860 << 16
         t5 = byte [t5 + 0x191d]  // s4
         t4 = byte [t4 + 0x18a1]  // s4
         t9 = t8 + t6
         t6 = 0x8860 << 16
         t8 = 0x8860 << 16
         t7 = t4 + t5
         t8 = byte [t8 + 0x18a2]  // s4
         t6 = byte [t6 + 0x191e]  // s4
         byte [at + 0x18a0] = t9
         at = 0x8860 << 16
         t5 = 0x8860 << 16
         t4 = 0x8860 << 16
         t4 = byte [t4 + 0x18a3]  // s4
         t5 = byte [t5 + 0x191f]  // s4
         byte [at + 0x18a1] = t7
         at = 0x8860 << 16
         t9 = t8 + t6
         byte [at + 0x18a2] = t9
         at = 0x8860 << 16
         a0 = 0x8860 << 16
         a1 = 0x8860 << 16
         t7 = t4 + t5
         byte [at + 0x18a3] = t7
         a1 += 0x1510
         a0 += 0x1500
         v1 = [a0 + 0]            // t9

    loc_0x802ccfa0: // orphan
         v0 = byte [v1 + 0]
         if                       // likely
         at = , v0 < 0x80         // lo

    loc_0x802ccfac: // orphan
         t8 = v0 + 0x80
         goto 0x802ccfc4
         byte [v1 + 0] = t8

    loc_0x802ccfb8: // orphan
         if                       // likely
         t6 = v0 - 0x80

    loc_0x802ccfc0: // orphan
         byte [v1 + 0] = t6

    loc_0x802ccfc4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802ccfb0
         v1 = [a0 + 4]
         a0 += 8
         v0 = byte [v1 + 0]       // s4
         if                       // likely
         at = , v0 < 0x80

    loc_0x802ccfd8: // orphan
         t9 = v0 + 0x80
         goto 0x802ccff0
         byte [v1 + 0] = t9

    loc_0x802ccfe4: // orphan
         if                       // likely
         t4 = v0 - 0x80

    loc_0x802ccfec: // orphan
         byte [v1 + 0] = t4

    loc_0x802ccff0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802ccfdc
         bnel a0, a1, 0x802ccfa0  // likely
         v1 = [a0 + 0]

    loc_0x802ccff8: // orphan
         a0 = 0x8860 << 16
         call 0x8004ca60          // 0x8004ca60(0x88600000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x1930]       // t9

    loc_0x802cd004: // orphan
         v1 = 0x8860 << 16
         v1 = [v1 + 0x1930]       // t9
         t9 = 0x8860 << 16
         t4 = 0x8860 << 16
         t5 = , unsigned  halfword [v1 + 2]
         a1 = , unsigned  byte [v1 + 4]
         a2 = , unsigned  byte [v1 + 5] // s4
         a3 = , unsigned  halfword [v1 + 0]
         t4 = byte [t4 + 0x1921]  // s4
         t9 = byte [t9 + 0x1920]  // s4
         t7 = 0 + 1               // lo
         t8 = 0 + 5
         t6 = 0 + 5
         [sp + 0x28] = t6
         [sp + 0x24] = t8
         [sp + 0x14] = t7
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x18] = 0
         a0 = v0                  // s4
         [sp + 0x10] = t5
         [sp + 0x30] = t4
         call 0x800459ac          // 0x800459ac(0xff, 0x0, 0xff, 0xfb00)
         [sp + 0x2c] = t9
         a0 = 0x8860 << 16
         call 0x8004ca60          // 0x8004ca60(0x88600000, 0x0, 0xff, 0xfb00)
         a0 = [a0 + 0x1934]       // t9
         v1 = 0x8860 << 16
         v1 = [v1 + 0x1934]       // t9
         t6 = 0 + 1               // lo
         t9 = 0 + 5
         t5 = , unsigned  byte [v1 + 5] // s4
         a3 = , unsigned  byte [v1 + 4]
         t4 = 0 + 5
         [sp + 0x10] = t5
         t7 = , unsigned  halfword [v1 + 0]

    loc_0x802cd094: // orphan
         t5 = 0x8860 << 16
         t5 = byte [t5 + 0x1922]  // s4
         [sp + 0x14] = t7
         t8 = , unsigned  halfword [v1 + 2]
         t7 = 0x8860 << 16
         t7 = byte [t7 + 0x1923]  // s4
         [sp + 0x30] = t4
         [sp + 0x2c] = t9
         [sp + 0x28] = 0
         [sp + 0x24] = 0

    loc_0x802cd0bc: // orphan
         [sp + 0x20] = 0
         [sp + 0x1c] = t6
         a0 = v0                  // s4
         a1 = 0 + 0x100
         a2 = 0 + 1               // lo
         [sp + 0x34] = t5
         [sp + 0x18] = t8
         call 0x80045db4          // 0x80045db4(0xff, 0x100, 0x1, -1)
         [sp + 0x38] = t7
         a3 = 0x8860 << 16
         t0 = 0x800d << 16
         t0 += 0x510
         a3 += 0x18a0
         t6 = byte [a3 + 0]       // s4
         v0 = [t0 + 0]
         t1 = 0x8860 << 16
         t1 += 0x18a1
         t7 = byte [t1 + 0]       // t3
         t9 = t6 & 0xfff          // s4
         t8 = v0 + 8
         a1 = 0xf200 << 16
         [t0 + 0] = t8
         t4 = t9 << 0xc
         t5 = t4 | a1
         t8 = t7 & 0xfff          // t3
         t6 = t5 | t8
         [v0 + 0] = t6
         t9 = byte [a3 + 0]       // s4
         t8 = byte [t1 + 0]       // t3
         t2 = 0x8860 << 16
         t4 = t9 + 0x7c
         t7 = t4 & 0xfff
         t6 = t8 + 0x7c
         t9 = t6 & 0xfff
         t5 = t7 << 0xc
         t4 = t5 | t9
         [v0 + 4] = t4
         t2 += 0x18a2
         t8 = byte [t2 + 0]       // t3
         v0 = [t0 + 0]
         t3 = 0x8860 << 16
         t3 += 0x18a3
         t4 = byte [t3 + 0]
         t6 = t8 & 0xfff          // t3
         t7 = v0 + 8
         [t0 + 0] = t7
         t5 = t6 << 0xc
         t9 = t5 | a1
         t7 = t4 & 0xfff          // t3
         t8 = t9 | t7
         [v0 + 0] = t8
         t6 = byte [t2 + 0]       // t3
         t8 = byte [t3 + 0]

    loc_0x802cd190: // orphan
         at = 0x100 << 16
         t5 = t6 + 0x7c
         t4 = t5 & 0xfff
         t9 = t4 << 0xc
         t6 = t8 + 0x7c
         t5 = t6 & 0xfff
         t7 = t9 | at
         t4 = t7 | t5
         a2 = 0x8860 << 16
         [v0 + 4] = t4
         a2 = [a2 + 0x18bc]       // t9
         at = 0 + 1               // lo
         t9 = 0x8860 << 16
         beql a2, at, 0x802cd3b0  // unlikely
         ra = [sp + 0x44]

    loc_0x802cd1cc: // orphan
         t9 = [t9 + 0x17ac]
         v0 = 0x8860 << 16
         v0 += 0x18c0
         beql t9, 0, 0x802cd394   // unlikely
         at = 0 + 2

    loc_0x802cd1e0: // orphan
         t8 = , unsigned  byte [v0 + 0]
         t7 = a2 - 2
         at = , unsigned  , t7 < 6

    loc_0x802cd1ec: // orphan
         t6 = t8 + 1
         if                       // unlikely
         byte [v0 + 0] = t6

    loc_0x802cd1f8: // orphan
         t7 <<= 2
         at = 0x8860 << 16
         at += t7
         t7 = [at + 0x186c]       // t9
         goto t7                  // t9
         

    loc_0x802cd288: // orphan
         a0 = a2
         at = , t9 < t8
         if                       // unlikely
         at = 0 + 3

    loc_0x802cd298: // orphan
         if                       // likely
         a0 = 0x8860 << 16

    loc_0x802cd2a0: // orphan
         a1 = 0x8860 << 16
         a1 = [a1 + 0x18c8]       // t9
         a0 = [a0 + 0x18c4]       // t9
         a2 = 0 + 4
         call 0x88600860          // 0x88600860(-1, -1, 0x4, -1)
         a3 = 0
         a2 = 0x8860 << 16
         goto 0x802cd390
         a2 = [a2 + 0x18bc]       // t9

    loc_0x802cd2c4: // orphan
         at = 0 + 6
         if                       // likely
         a0 = 0x8860 << 16

    loc_0x802cd2d0: // orphan
         a1 = 0x8860 << 16
         a1 = [a1 + 0x18c8]       // t9
         a0 = [a0 + 0x18c4]       // t9
         a2 = 0 + 7
         call 0x88600860          // 0x88600860(-1, -1, 0x7, -1)
         a3 = 0
         a2 = 0x8860 << 16
         goto 0x802cd390
         a2 = [a2 + 0x18bc]       // t9

    loc_0x802cd2f4: // orphan
         call 0x886006b8          // 0x886006b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a2 = 0x8860 << 16
         goto 0x802cd390
         a2 = [a2 + 0x18bc]       // t9

    loc_0x802cd390: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802cd2bc, 0x802cd2ec, 0x802cd300
         // CODE XREFS from fcn.802ac294 @ 0x802cd348, 0x802cd378
         at = 0 + 2

    loc_0x802cd394: // orphan
         if                       // unlikely
         at = 0 + 5

    loc_0x802cd39c: // orphan
         beql a2, at, 0x802cd3b0  // unlikely
         ra = [sp + 0x44]

    loc_0x802cd3a0: // orphan
         beql a2, at, 0x802cd3b0  // unlikely
         ra = [sp + 0x44]

    loc_0x802cd3a4: // orphan
         call 0x88600578          // 0x88600578(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x802cd3ac: // orphan
         ra = [sp + 0x44]

    loc_0x802cd3b0: // orphan
         sp += 0x48
         ret                      // ra
         

    loc_0x802cd5dc: // orphan
         ra = byte [a3 - 1]       // s4
         a0 = byte [v1 - 0x6901]  // s4
         sd v1, 0x203, t8
         if                       // unlikely
         

    loc_0x802cd5ec: // orphan
         

    loc_0x802cd5f0: // orphan
         mfc0 0, 0, 0
         mfc0 0, 0, 0
         lwl 0, 0x18a8, v1
         
         ra = byte [a3 - 0x4bc9]  // s4
         
         sd v0, 0x202, t8
         sd 0, 0x300, s0

    loc_0x802d69f0: // orphan
         at = 0 + 0xe

    loc_0x802d69f4: // orphan
         if                       // unlikely
         a1 = t4 + 0x9a

    loc_0x802d69fc: // orphan
         call 0x8004c54c          // 0x8004c54c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x41
         t4 = [s1 + 0]
         goto 0x802d6a28
         a0 = [t4 + 0x120]        // t9

    loc_0x802d6a28: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802d6a08
         t5 = a0 - 1
         at = , unsigned  , t5 < 0xe
         if                       // likely
         t5 <<= 2

    loc_0x802d6a38: // orphan
         at = 0x8890 << 16
         at += t5
         t5 = [at + 0x3f80]       // t9
         goto t5                  // t9
         

    loc_0x802d6a5c: // orphan
         t8 = t6 & 2
         beql t8, 0, 0x802d6a74   // likely
         t9 = [t4 + 0x68]

    loc_0x802d6a68: // orphan
         goto 0x802d6a8c
         v1 = 0 + 7

    loc_0x802d6a74: // orphan
         call 0x8004b7a4          // 0x8004b7a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t9 + 0]
         a0 = 0 + 0x22
         call 0x8004c54c          // 0x8004c54c(0x22, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0                  // s4
         v1 = 0 + 8               // a2

    loc_0x802d6a8c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802d6a68
         goto 0x802d6b54
         halfword [sp + 0x1b2] = v1

    loc_0x802d6af4: // orphan
         // CODE XREF from fcn.802d39fc @ +0x5e4
         halfword [sp + 0x1b2] = v1

    loc_0x802d6af8: // orphan
         v1 = 0 + 0xb
         goto 0x802d6b54
         halfword [sp + 0x1b2] = v1

    loc_0x802d6b54: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802d6a8c, 0x802d6afc
         a3 = , unsigned  halfword [sp + 0x1b2]
         a0 = sp + 0x74
         a1 = 0 + 0x100
         call 0x8004c8a0          // 0x8004c8a0(0x178074, 0x100, 0x8, 0xb)
         a2 = 0 + 0x45
         t4 = [s1 + 0]
         a0 = 0x8800 << 16
         t6 = 0 + 1               // lo
         a1 = byte [t4 + 0x12d]   // s4
         a2 = byte [t4 + 0x12e]   // s4
         [sp + 0x10] = t6
         a0 = [a0 + 0x687c]       // t9
         a3 = v0                  // s4
         a1 += 0xae
         call 0x80048e30          // 0x80048e30(-1, 0x1ad, 0xff, 0xff)
         a2 += 0x14f
         call 0x800499ec          // 0x800499ec(-1, 0x1ad, 0x24e, 0xff)
         
         t8 = [s1 + 0]
         a2 = 0xde00 << 16
         a0 = [t8 + 0x120]        // t9
         a1 = 0 + 1               // lo

    loc_0x802d6bac: // orphan
         if                       // unlikely
         t0 = a0                  // t9

    loc_0x802d6bb4: // orphan
         at = 0 + 2
         beql t0, at, 0x802d6bdc  // unlikely
         v1 = [s0 + 0]

    loc_0x802d6bc0: // orphan
         at = 0 + 3
         beql t0, at, 0x802d6bdc  // unlikely
         v1 = [s0 + 0]

    loc_0x802d6bcc: // orphan
         a0 = 0x8009 << 16

    loc_0x802d6bd0: // orphan
         goto fcn.802d6f34        // fcn.802d6f34(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1, -1, -1, -1)
         a0 += 0x4e00

    loc_0x802d6bd8: // orphan
         v1 = [s0 + 0]

    loc_0x802d6bdc: // orphan
         t7 = 0x8890 << 16
         t7 += 0x3e10
         t9 = v1 + 8
         [s0 + 0] = t9
         [v1 + 4] = t7
         [v1 + 0] = a2
         t4 = [s1 + 0]
         a0 = s0
         v0 = v1
         t0 = [t4 + 0x120]        // t9
         beql t0, a1, 0x802d6c30  // unlikely
         v0 = halfword [t4 + 0x150]

    loc_0x802d6c0c: // orphan
         at = 0 + 2
         beql t0, at, 0x802d6c7c  // unlikely
         t7 = halfword [t4 + 0x152]

    loc_0x802d6c18: // orphan
         at = 0 + 3

    loc_0x802d6c1c: // orphan
         beql t0, at, 0x802d6cc4  // unlikely
         t9 = halfword [t4 + 0x13e]

    loc_0x802d6c24: // orphan
         goto 0x802d6d04
         v1 = [s0 + 0]

    loc_0x802d6c30: // orphan
         t5 = halfword [t4 + 0x13e]
         t6 = v0 - t5
         t8 = t6 << 8
         t8 -= t6
         div 0, t8, v0
         t9 = lo
         byte [sp + 0x1a9] = t9
         if                       // likely
         

    loc_0x802d6c54: // orphan
         break 7

    loc_0x802d6c58: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802d6c64: // orphan
         if                       // likely
         

    loc_0x802d6c6c: // orphan
         break 6

    loc_0x802d6c70: // orphan
         goto 0x802d6d04
         v1 = [s0 + 0]

    loc_0x802d6c7c: // orphan
         t6 = halfword [t4 + 0x150]
         t5 = t7 << 8
         // CODE XREF from fcn.802d39fc @ +0x5f4
         t5 -= t7

    loc_0x802d6c88: // orphan
         div 0, t5, t6
         t8 = lo
         byte [sp + 0x1a9] = t8
         if                       // likely
         // CODE XREF from fcn.802d39fc @ +0x5f8
         

    loc_0x802d6c9c: // orphan
         break 7

    loc_0x802d6ca0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802d6cac: // orphan
         if                       // likely
         

    loc_0x802d6cb0: // orphan
         

    loc_0x802d6cb4: // orphan
         break 6

    loc_0x802d6cb8: // orphan
         goto 0x802d6d04
         v1 = [s0 + 0]

    loc_0x802d6cc4: // orphan
         t5 = halfword [t4 + 0x156]
         t7 = t9 << 8
         t7 -= t9
         div 0, t7, t5
         t6 = lo
         byte [sp + 0x1a9] = t6
         if                       // likely
         

    loc_0x802d6ce4: // orphan
         break 7

    loc_0x802d6ce8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802d6cf4: // orphan
         if                       // likely
         

    loc_0x802d6cfc: // orphan
         break 6

    loc_0x802d6d00: // orphan
         v1 = [s0 + 0]

    loc_0x802d6d04: // orphan
         // CODE XREFS from fcn.802a91c8 @ 0x802d6c24, 0x802d6c70, 0x802d6cb8
         t7 = , unsigned  byte [sp + 0x1a9] // lo
         at = 0xfa00 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         t6 = 0 - 1               // s2
         t5 = t7 | at
         [v1 + 0] = t5
         [v1 + 4] = t6
         t4 = [s1 + 0]
         t8 = 0 + 0x8d
         a3 = 0 + 0xd0
         a1 = byte [t4 + 0x12d]   // s4
         a2 = byte [t4 + 0x12e]   // s4
         [sp + 0x10] = t8
         a1 += 0xf1
         a2 += 0xa4
         a2 <<= 0x10
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         call 0x80006f70          // 0x80006f70(-1, 0x1f0, 0x1a30000, 0xd0)
         a2 = , signed  a2 >> 0x10
         t4 = [s1 + 0]
         t2 = 0
         t9 = byte [t4 + 0x12e]   // s4
         t3 = [t4 + 0x64]         // t9
         t7 = t9 + 0xa4
         halfword [sp + 0x1aa] = t7

    loc_0x802d6d70: // orphan
         v1 = [s0 + 0]
         t6 = 0xfd10 << 16
         t7 = 0x708 << 16
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = t3
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t7 |= 0x200
         t9 = 0xf510 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         [v1 + 4] = t7
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t6 = 0xe600 << 16
         t7 = 0x70c << 16
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = 0
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t7 |= 0xf028
         t9 = 0xf300 << 16
         t8 = v1 + 8
         [s0 + 0] = t8
         [v1 + 4] = t7
         [v1 + 0] = t9
         v1 = [s0 + 0]
         t6 = 0xe700 << 16
         t9 = 0xf510 << 16
         t5 = v1 + 8
         [s0 + 0] = t5
         [v1 + 4] = 0
         [v1 + 0] = t6
         v1 = [s0 + 0]
         t7 = 8 << 16
         t7 |= 0x200
         t8 = v1 + 8
         [s0 + 0] = t8
         t9 |= 0x6800
         [v1 + 0] = t9
         [v1 + 4] = t7
         v1 = [s0 + 0]
         t8 = 0x33 << 16
         t8 |= 0xc000
         t5 = v1 + 8
         [s0 + 0] = t5
         t6 = 0xf200 << 16
         [v1 + 0] = t6
         [v1 + 4] = t8
         t4 = [s1 + 0]
         at = 0x8008 << 16
         mtc1 0, f6
         t7 = halfword [t4 + 0x146]
         t9 = halfword [t4 + 0x144]
         a1 = halfword [sp + 0x1aa]
         unsigned , hi
         a2 = 0 + 0xd0
         a3 = 0 + 1               // lo
         t5 = lo
         t6 = t9 + t5
         t5 = halfword [t4 + 0x142]
         t8 = t6 & 0xffff
         t7 = , signed  t8 >> 4
         mtc1 t5, f16
         t9 = t7 << 2
         at += t9
         cvt.s.w f18, f16
         lwc1 f4, 0x7e50, at
         at = 0xbf00 << 16
         t9 = 0 - 0x10
         t5 = 0 - 0x10
         mul.s f0, f4, f18
         c.lt.s f6, f0
         
         bc1fl 0x802d6ebc
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x802d6ec4
         add.s f10, f2, f0

    loc_0x802d6ec4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802d6eb0
         t7 = byte [t4 + 0x12d]   // s4
         t6 = 0 + 0x400
         [sp + 0x18] = t6
         trunc.w.s f8, f10
         [sp + 0x1ac] = t3
         [sp + 0x1b4] = t2
         [sp + 0x20] = 0

    loc_0x802d6ee0: // orphan
         mfc1 t8, f8
         [sp + 0x14] = t5
         [sp + 0x10] = t9
         a0 = t8 + t7             // t9
         a0 += 0xf1
         a0 <<= 0x10
         t8 = 0 + 0x400
         [sp + 0x1c] = t8
         call 0x80044270          // 0x80044270(0x1000000f00000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x10
         t7 = halfword [sp + 0x1aa]
         t2 = [sp + 0x1b4]        // s4
         t3 = [sp + 0x1ac]
         at = 0 + 0x8d
         t9 = t7 + 1
         t2 += 1
         halfword [sp + 0x1aa] = t9
         if                       // likely
         t3 += 0x1a0

    loc_0x802d6f2c: // orphan
         goto 0x802d6fe8          // fcn.802d6f34+0xb4
         t9 = 0 + 0x1e0

    loc_0x802d71c8: // orphan
         call 0x80025f84          // 0x80025f84(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x68c0
         t7 = [sp + 0x50]
         bnel t7, 0, 0x802d722c   // likely
         t7 = [s0 + 0]

    loc_0x802d71dc: // orphan
         t9 = [s0 + 0]
         t8 = 0 - 0x1a
         t0 = 0 - 0x39
         byte [t9 + 0x12d] = t8
         t1 = [s0 + 0]
         a1 = 0 + 0xe6
         a2 = 0 + 0xff            // s4
         byte [t1 + 0x12e] = t0
         a0 = [s0 + 0]
         a3 = 0 + 0xf0
         call 0x8003573c          // 0x8003573c(0x260, 0xe6, 0xff, 0xf0)
         a0 += 0x129
         t3 = [s0 + 0]
         t2 = 0 + 2
         t4 = 0 + 3
         [t3 + 0x148] = t2
         t5 = [s0 + 0]
         goto 0x802d726c
         [t5 + 0x14c] = t4

    loc_0x802d7224: // orphan
         t9 = [s0 + 0]
         t8 = 0 - 0x1a
         t0 = 0 - 0x39
         byte [t9 + 0x12d] = t8
         t1 = [s0 + 0]
         a1 = 0 + 0xe6
         a2 = 0 + 0xff            // s4
         byte [t1 + 0x12e] = t0
         a0 = [s0 + 0]
         a3 = 0 + 0xf0
         call 0x8003573c          // 0x8003573c(0x260, 0xe6, 0xff, 0xf0)
         a0 += 0x129
         t3 = [s0 + 0]
         t2 = 0 + 2
         t4 = 0 + 3
         [t3 + 0x148] = t2
         t5 = [s0 + 0]
         goto 0x802d726c
         [t5 + 0x14c] = t4

    loc_0x802d722c: // orphan
         t6 = 0 + 8               // a2
         a1 = 0 + 0xdc
         byte [t7 + 0x12d] = t6
         t8 = [s0 + 0]
         a2 = 0 + 0xdc
         a3 = 0 + 0xb4
         byte [t8 + 0x12e] = 0
         a0 = [s0 + 0]
         call 0x8003573c          // 0x8003573c(0x260, 0xdc, 0xdc, 0xb4)
         a0 += 0x129
         t0 = [s0 + 0]
         t9 = 0 + 0x47
         t1 = 0 + 0x48
         [t0 + 0x148] = t9
         t2 = [s0 + 0]
         [t2 + 0x14c] = t1

    loc_0x802d726c: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802d7220
         v0 = [s0 + 0]
         t3 = 0 + 2
         t9 = [sp + 0x60]
         a2 = byte [v0 + 0x12d]
         a3 = byte [v0 + 0x12e]
         [sp + 0x14] = t3
         [sp + 0x10] = 0
         t4 = , unsigned  byte [v0 + 0x129] // s4
         t0 = [sp + 0x64]
         t1 = , unsigned  byte [sp + 0x6f] // a2
         [sp + 0x18] = t4
         t5 = , unsigned  byte [v0 + 0x12a] // s4
         t7 = 0x8890 << 16
         t8 = 0x8890 << 16
         [sp + 0x1c] = t5
         t6 = , unsigned  byte [v0 + 0x12b] // s4
         a2 += 0x9f
         a3 += 0x92
         a3 <<= 0x10
         a2 <<= 0x10
         t8 += 0x1a24
         t7 += 0xf54
         [sp + 0x24] = t7
         [sp + 0x28] = t8
         a2 = , signed  a2 >> 0x10
         a3 = , signed  a3 >> 0x10
         // CODE XREF from fcn.802d39fc @ +0x614
         [sp + 0x38] = 0
         a0 = 0
         a1 = 0 + 3
         [sp + 0x2c] = t9
         [sp + 0x30] = t0
         // CODE XREF from fcn.802d39fc @ +0x618
         [sp + 0x34] = t1
         call 0x88004804          // 0x88004804(0x0, 0x3, 0x185, 0x92)
         [sp + 0x20] = t6
         t2 = v0 << 2
         t2 += v0
         t2 <<= 2
         t5 = [s0 + 0]
         t2 -= v0
         t3 = 0x8801 << 16
         t3 -= 0x12b0
         t2 <<= 2
         v1 = [sp + 0x54]
         t4 = t2 + t3
         [t5 + 0] = t4
         t7 = [s0 + 0]
         t6 = 0 + 0x178
         t9 = 0 + 0x12f
         t8 = [t7 + 0]
         a1 = v1 + 0x34
         halfword [t8 + 0x10] = t6
         t0 = [s0 + 0]
         t1 = [t0 + 0]

    loc_0x802d7340: // orphan
         halfword [t1 + 0x12] = t9
         t3 = [s0 + 0]
         t2 = [sp + 0x50]
         [t3 + 0x5c] = t2
         t4 = [s0 + 0]
         [t4 + 0x68] = v1
         t7 = [s0 + 0]
         t5 = byte [sp + 0x5b]    // s4
         byte [t7 + 0x11a] = t5
         t8 = [s0 + 0]
         t6 = [sp + 0x5c]
         [t8 + 0x11c] = t6
         t9 = [s0 + 0]
         t0 = [sp + 0x68]         // s4

    loc_0x802d758c: // orphan
         v0 = v1
         [sp + 4] = a1
         v1 = a1 & 0xff           // a2
         v0 = 0
         t6 = a0 + v0             // t9

    loc_0x802d75a0: // orphan
         t7 = , unsigned  byte [t6 + 2] // s4
         v0 += 1
         v0 &= 0xff
         if                       // likely
         at = , v0 < 4            // lo

    loc_0x802d75b4: // orphan
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x802d75bc: // orphan
         bnel at, 0, 0x802d75a0   // likely
         t6 = a0 + v0

    loc_0x802d75c4: // orphan
         v0 = 0
         ret                      // ra
         

    loc_0x802d75e8: // orphan
         if                       // unlikely
         a0 = , unsigned  byte [sp + 0x27]

    loc_0x802d75f0: // orphan
         goto 0x802d7600
         v1 = v0 & 0xff           // s4

    loc_0x802d75f8: // orphan
         v1 = 0x8890 << 16
         v1 = , unsigned  byte [v1 + 0x41a0] // s4

    loc_0x802d7600: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802d75f0
         t6 = [sp + 0x20]         // s4
         a1 = t6 + v1
         byte [a1 + 2] = a0
         call 0x80062e10          // 0x80062e10(-1, 0x31f, 0x8, -1)
         [sp + 0x18] = a1
         // CODE XREF from fcn.802ba56c @ +0x7f4
         a1 = [sp + 0x18]

    loc_0x802d7618: // orphan
         byte [a1 + 0x18] = v0    // arg2
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x802d7704: // orphan
         call 0x8005d92c          // 0x8005d92c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = s2
         v1 = [s0 + 0]
         s2 = v0 & 0xff           // s4
         a0 = , unsigned  byte [v1 + 0]
         beql a0, 0, 0x802d7824   // unlikely
         v0 = 0

    loc_0x802d7720: // orphan
         v0 = , unsigned  byte [s1 + 0x1d] // s4
         at = , v0 < a0           // lo
         bnel at, 0, 0x802d7824   // likely
         v0 = 0

    loc_0x802d7730: // orphan
         if                       // likely
         a0 = s1

    loc_0x802d7738: // orphan
         call 0x88902ba0          // 0x88902ba0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [v1 + 1]
         if                       // likely
         t6 = s2 - 1              // hi

    loc_0x802d7748: // orphan
         at = , unsigned  , t6 < 6
         if                       // likely
         t6 <<= 2

    loc_0x802d7754: // orphan
         at = 0x8890 << 16
         at += t6
         // CODE XREF from fcn.802a91c8 @ 0x802bad68
         t6 = [at + 0x4008]       // t9
         goto t6                  // t9
         

    loc_0x802d7770: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bad6c
         t8 = t7 & 1
         beql t8, 0, 0x802d77fc   // likely
         t9 = [s0 + 0]

    loc_0x802d777c: // orphan
         v0 = , unsigned  byte [v1 + 1]
         t9 = v1 + 3
         goto 0x802d7824
         [s0 + 0] = t9

    loc_0x802d77d4: // orphan
         v1 = [s0 + 0]
         t6 = , unsigned  byte [v1 + 2] // s4
         t7 = t6 & 8              // a2
         beql t7, 0, 0x802d77fc   // unlikely
         t9 = [s0 + 0]

    loc_0x802d77e8: // orphan
         v0 = , unsigned  byte [v1 + 1]
         t8 = v1 + 3
         goto 0x802d7824
         [s0 + 0] = t8

    loc_0x802d77f8: // orphan
         t9 = [s0 + 0]

    loc_0x802d77fc: // orphan
         v1 = t9 + 3
         [s0 + 0] = v1
         a0 = , unsigned  byte [v1 + 0]
         beql a0, 0, 0x802d7824   // likely
         v0 = 0

    loc_0x802d7810: // orphan
         v0 = , unsigned  byte [s1 + 0x1d] // s4
         at = , v0 < a0           // lo
         if                       // unlikely
         

    loc_0x802d7820: // orphan
         v0 = 0

    loc_0x802d7824: // orphan
         // CODE XREF from fcn.802ba56c @ +0x814
         // CODE XREFS from fcn.802a91c8 @ 0x802d7784, 0x802d77f0
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // s4
         s2 = [sp + 0x20]         // t9
         ret
         // CODE XREF from fcn.802a91c8 @ 0x802bad84
         sp += 0x28

    loc_0x802d7838: // orphan
         // CODE XREF from fcn.802ba56c @ +0x814
         // CODE XREFS from fcn.802a91c8 @ 0x802d7784, 0x802d77f0
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // s4
         s2 = [sp + 0x20]         // t9
         ret
         // CODE XREF from fcn.802a91c8 @ 0x802bad84
         sp += 0x28

    loc_0x802d78c4: // orphan
         at = , unsigned  , t8 < 7
         if                       // likely
         t8 <<= 2

    loc_0x802d78d0: // orphan
         at = 0x8890 << 16
         at += t8
         t8 = [at + 0x4020]       // t9
         goto t8                  // t9
         

    loc_0x802d7a00: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bad7c
         beql at, 0, 0x802d7a50   // unlikely
         v0 = , unsigned  byte [s1 + 3]

    loc_0x802d7a08: // orphan
         goto 0x802d7a60
         v0 = , unsigned  byte [s1 + 2]

    loc_0x802d7a4c: // orphan
         v0 = , unsigned  byte [s1 + 3]

    loc_0x802d7a50: // orphan
         s1 += 3
         bnel v0, 0, 0x802d78c4   // likely
         t8 = v0 - 1              // t3

    loc_0x802d7a5c: // orphan
         v0 = 0

    loc_0x802d7a60: // orphan
         // CODE XREF from fcn.802d7978 @ 0x802d7978
         // CODE XREF from fcn.802a91c8 @ 0x802d7a08
         ra = [sp + 0x24]
         s0 = [sp + 0x1c]         // s4
         s1 = [sp + 0x20]         // t9
         ret
         sp += 0x38

    loc_0x802d7af4: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802bad90
         v0 = 0 + 0x88
         ret                      // ra
         v0 = 0 + 0x26

    loc_0x802dadc0: // orphan
         // CODE XREF from fcn.802a91c8 @ 0x802baedc
         // CODE XREF from fcn.802d39fc @ +0x8b0
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         ret                      // ra
         sp += 0x30

}

*/
