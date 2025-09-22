int fcn.80339030 (int esi, int edx) {
    loc_0x802fbdb8:
        // CODE XREF from fcn.80339030 @ 0x80319f54
        at = 0 + 1    // lo
        if            // unlikely
        t6 = 0 + 1    // lo
            
    loc_0x802fbdfc:
        // CODE XREF from fcn.80339030 @ 0x802fbdbc
        [sp + 0x2c] = 0
        [sp + 0x28] = 0
        [sp + 0x24] = t6
         // do {
    loc_0x802fbe08:
        // CODE XREF from fcn.80339030 @ 0x802fbdd0
        // CODE XREF from fcn.8031c300 @ 0x802fbde4
        // CODE XREF from fcn.80339030 @ 0x802fbdf4
        a1 = 0x8af3 << 16
        a1 = , unsigned  halfword [a1 - 0x423a]
        // CODE XREF from fcn.80339030 @ 0x80319f5c
        a0 -= 0x15d8
        call 0x8ac0602c // 0x8ac0602c(0xffffea27, 0xffff, 0x8, -1)
        a2 = [sp + 0x2c]
        a0 = 0x8af3 << 16
        a1 = 0x8af3 << 16
        a1 = , unsigned  halfword [a1 - 0x423a]
        a0 -= 0x1560
        call 0x8ac060e4 // 0x8ac060e4(0x8af2eaa0, 0xffff, 0x0, -1)
        a2 = [sp + 0x2c]
        a0 = 0x8af3 << 16
        a1 = 0x8af3 << 16
        a1 = , unsigned  halfword [a1 - 0x423a]
        a0 -= 0x14e8
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x802fbdc4
    loc_0x802fbdd0:
        goto 0x802fbe08
        0x802fbdd4
    loc_0x802fbdec: // orphan
             // CODE XREF from fcn.80339030 @ 0x802fbdc8
             [sp + 0x2c] = 0
             [sp + 0x28] = t4
             goto 0x802fbe08
             [sp + 0x24] = 0

    loc_0x802fbe44: // orphan
         // CODE XREF from fcn.80339030 @ 0x80319f60
         call 0x8ac0602c          // 0x8ac0602c(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = [sp + 0x28]         // t9
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]
         a0 -= 0x1470
         call 0x8ac060e4          // 0x8ac060e4(0x8af2eb90, 0xffff, -1, -1)
         a2 = [sp + 0x28]         // t9
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]
         a0 -= 0x13f8
         call 0x8ac0602c          // 0x8ac0602c(0x8af2ec08, 0xffff, -1, -1)
         a2 = [sp + 0x24]
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]
         a0 -= 0x1380
         call 0x8ac060e4          // 0x8ac060e4(0x8af2ec80, 0xffff, 0x0, -1)
         a2 = [sp + 0x24]
         ra = [sp + 0x14]
         v0 = halfword [sp + 0x3e]
         sp += 0x40
         ret
         

    loc_0x802fbecc: // orphan
         // CODE XREF from fcn.80339030 @ 0x80319f68
         [sp + 0x34] = s5
         [sp + 0x30] = s4
         [sp + 0x2c] = s3
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         if                       // fcn.8031c300-0x20410 // unlikely
         [sp + 0x20] = s0

    loc_0x802fe8b4: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031a2f0
         t7 = [t7 + 0xac]         // t9
         s0 = 0x8af3 << 16
         at = 0x8af3 << 16
         s0 += 0xb8
         [at + 0xbc] = t6
         // CODE XREF from fcn.80339168 @ 0x8031a2f4
         t8 = 0x8af3 << 16
         [s0 + 0] = t7
         t8 = [t8 + 0xb0]         // t9
         at = 0x8af3 << 16
         call 0x8af10840          // 0x8af10840(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0xc0] = t8
         v0 = 0x8af3 << 16
         goto 0x802fe938          // fcn.80339168-0x3a830
         // CODE XREF from fcn.80339168 @ 0x8031a304
         v0 = halfword [v0 + 0x1000]

    loc_0x80300f8c: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031a6a8
         v0 = 0 + 0x80
         t4 = , unsigned  byte [s4 + 1]
         t6 -= 0x7e50
         a3 = v0
         t5 = t4 << 2
         // CODE XREF from fcn.8031c6d4 @ 0x8031a6ac
         s0 = t5 + t6
         a0 = , unsigned  byte [s0 + 0] // s4
         a1 = , unsigned  byte [s0 + 1] // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x8, 0x80)
         a2 = , unsigned  byte [s0 + 2] // s4
         t7 = 0x8af3 << 16
         t7 = halfword [t7 + 0x16a4]
         t9 = 0x8af3 << 16
         a1 = s2 - 1              // hi
         // CODE XREF from fcn.80339030 @ 0x8031a6b0
         if                       // fcn.8030103c+0x10 // likely
         

    loc_0x80301200: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031a6dc
         call 0x8007be30          // 0x8007be30(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e18
         t7 = [sp + 0x18]
         a2 = , unsigned  byte [t7 + 1] // s4
         if                       // likely
         // CODE XREF from fcn.8031a470 @ +0x270
         a0 = 0x8af3 << 16

    loc_0x80301218: // orphan
         a1 = 0x8af3 << 16
         a1 = [a1 + 0x361c]       // t9
         call 0x8007be30          // 0x8007be30(-1, -1, 0x8, -1)
         a0 += 0x2f18
         goto 0x8030126c
         t8 = [sp + 0x18]

    loc_0x80301230: // orphan
         at = 0 + 1               // lo
         if                       // likely
         a0 = 0x8af3 << 16

    loc_0x803012ac: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031a6e8
         a0 += 0x3018
         goto 0x803012cc          // fcn.803012c4+0x8
         t9 = [sp + 0x18]

    loc_0x80301cd0: // orphan
         [sp + 0x3c] = s0
         a0 = [a0 + 0x7130]       // t9
         call 0x80075630          // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x52c
         call 0x8004c4b0          // 0x8004c4b0(-1, 0x52c, 0x8, -1)
         a0 = 0 + 6
         call 0x8004c4b0          // 0x8004c4b0(0x6, 0x52c, 0x8, -1)
         a0 = 0 + 0x3b
         call 0x8004c8c0          // 0x8004c8c0(0x3b, 0x52c, 0x8, -1)
         a0 = 0 + 0xbe
         call 0x8004c8c0          // 0x8004c8c0(0xbe, 0x52c, 0x8, -1)
         a0 = 0 + 0x37
         call 0x8004c8c0          // 0x8004c8c0(0x37, 0x52c, 0x8, -1)
         a0 = 0 + 0x38
         call 0x8004c8c0          // 0x8004c8c0(0x38, 0x52c, 0x8, -1)
         a0 = 0 + 0x143
         s0 = 0x8af3 << 16
         s0 += 0x1e10
         a0 = s0
         call 0x800476a0          // 0x800476a0(0x8af31e10, 0x52c, 0x8, -1)
         a1 = 0 + 3
         a0 = s0
         call 0x800476fc          // 0x800476fc(0x8af31e10, 0x3, 0x8, -1)
         a1 = 0 + 3
         a0 = 0 + 0x37
         call 0x8004c990          // 0x8004c990(0x37, 0x3, 0x8, -1)
         a1 = 0
         a0 = 0
         a1 = v0                  // s4
         a2 = 0
         call 0x80047738          // 0x80047738(0x0, 0xff, 0x0, -1)
         a3 = 0
         call 0x8af00020          // 0x8af00020(0x0, 0xff, 0x0, 0x0)
         
         if                       // unlikely
         a0 = 0 + 0x37

    loc_0x80301d60: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         a0 = 0 + 1               // lo
         a1 = v0                  // s4
         a2 = 0
         call 0x80047738          // 0x80047738(0x1, 0xff, 0x0, -1)
         a3 = 0
         goto 0x80301da8
         a0 = 0 + 0x38

    loc_0x80301d84: // orphan
         a0 = 0 + 0x143
         call 0x8004c990          // 0x8004c990(0x143, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0 + 1               // lo
         a1 = v0                  // s4
         // CODE XREF from fcn.80339168 @ 0x8031a794
         a2 = 0
         call 0x80047738          // 0x80047738(0x1, 0xff, 0x0, -1)
         a3 = 0
         a0 = 0 + 0x38

    loc_0x80301da8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80301d7c
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x8031a798
         a1 = 0 + 2               // arg2

    loc_0x803022a0: // orphan
         halfword [sp + 0x36] = t0

    loc_0x803022a4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80302278
         v1 = [sp + 0x30]         // s4

    loc_0x803022a8: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8030228c
         t4 = 0x8af3 << 16
         t4 = halfword [t4 + 0x3624]
         t2 = halfword [v1 + 0x38]

    loc_0x803022b4: // orphan
         t1 = halfword [v1 + 0x34]
         t8 = 0x8af3 << 16
         t3 = t2 << 2
         t3 -= t2
         t3 <<= 1
         v0 = t1 + t3
         v0 <<= 0x10
         // CODE XREF from fcn.8031a470 @ +0x37c
         v0 = , signed  v0 >> 0x10
         at = , v0 < t4           // lo
         if                       // likely
         v1 += 0x28

    loc_0x803022e0: // orphan
         at = 0x8af3 << 16
         goto 0x80302304
         byte [at + 0x1e41] = 0

    loc_0x803022ec: // orphan
         // CODE XREF from fcn.80339030 @ 0x803022d8
         t5 = v0 << 1
         t6 = 0x8af3 << 16
         t6 += t5
         t6 = halfword [t6 + 0x2c10]
         at = 0x8af3 << 16
         byte [at + 0x1e41] = t6
         // CODE XREF from fcn.80339030 @ 0x803022e4
         t7 = halfword [v1 + 0xc]
         t8 = halfword [t8 + 0x3760]
         t0 = v0 << 3
         t9 = 0x8af3 << 16
         if                       // unlikely
         t0 -= v0

    loc_0x8030233c: // orphan
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]
         a1 = halfword [v1 + 0x10]
         // CODE XREF from fcn.803021a8 @ +0x17c
         a0 = 0x8af3 << 16
         a0 += 0x3718
         call 0x8ac0686c          // 0x8ac0686c(0x8af33718, 0xffff, 0x8, -1)
         [sp + 0x1c] = v1
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16

    loc_0x80302360: // orphan
         a1 = , unsigned  halfword [a1 - 0x423a]
         call 0x8ac0619c          // 0x8ac0619c(-1, 0xffff, 0x8, -1)
         a0 += 0x3628
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16

    loc_0x80302374: // orphan
         a1 = , unsigned  halfword [a1 - 0x423a]
         call 0x8ac06220          // 0x8ac06220(-1, 0xffff, 0x8, -1)
         a0 += 0x36a0
         v1 = [sp + 0x1c]
         at = 0x8af3 << 16
         ra = [sp + 0x14]
         t1 = halfword [v1 + 0xc]
         v0 = halfword [sp + 0x36]
         halfword [at + 0x3760] = t1
         t3 = halfword [v1 + 0x10]
         at = 0x8af3 << 16
         sp += 0x38
         // CODE XREF from fcn.8031a470 @ +0x380
         ret
         halfword [at + 0x3762] = t3

    loc_0x803029e0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031a89c
         s2 = [sp + 0x20]         // s0
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]         // t9
         ret                      // ra
         sp += 0x30

    loc_0x80302b3c: // orphan
         [v0 + 4] = a3
         [v0 + 0] = t4
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x3db0]       // t9

    loc_0x80302ba8: // orphan
         t4 = t9 | t3
         t6 = t2 | t5             // t9

    loc_0x80302d1c: // orphan
         s4 = v1 + 0x14

    loc_0x80303de4: // orphan
         sp -= 0x38
         [sp + 0x2c] = s5
         s5 = 0x8af3 << 16
         [sp + 0x24] = s3
         s5 += 0x40bc
         [sp + 0x30] = s6
         [sp + 0x28] = s4
         [sp + 0x1c] = s1
         [sp + 0x38] = a0
         s3 = 0x8af3 << 16
         [sp + 0x34] = ra
         [sp + 0x20] = s2
         [sp + 0x18] = s0
         s3 += 0x3dc0

    loc_0x803043f0: // orphan
         a0 += 0x41b0
         call 0x8ac0686c          // 0x8ac0686c(0x1000041af, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [t1 + 0x38]
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]
         call 0x8ac0619c          // 0x8ac0619c(0x8af30000, 0xffff, 0x8, -1)
         a0 += 0x40c0
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = , unsigned  halfword [a1 - 0x423a]

    loc_0x803045d4: // orphan
         
         // CODE XREF from fcn.80317ed0 @ 0x8031aa04
         s1 = 0x8af3 << 16
         s1 += 0x4818
         a0 = s1
         call 0x80075630          // 0x80075630(0x8af34818, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x2ee

    loc_0x803045ec: // orphan
         // CODE XREF from fcn.80317ed0 @ 0x8031aa08
         s3 = 0x8af3 << 16
         s6 = 0
         s0 = s1
         s3 += 0x4c38
         s7 = 0 + 0xa5
         s1 = , unsigned  byte [s3 + 0] // s4

    loc_0x80304604: // orphan
         s2 = s1 & 0xff
         a0 = s2 & 0xff
         call 0x80062d98          // 0x80062d98(0xbd, 0x442f71dcfe116408, 0x8, -1)
         s4 = s1
         a0 = v0 << 0x10
         call 0x8af01530          // 0x8af01530(0xff0000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // s4
         s5 = v0 << 0x10
         if                       // unlikely
         s5 = , signed  s5 >> 0x10 // s4

    loc_0x8030462c: // orphan
         t8 = v0 << 0x10
         // CODE XREF from fcn.8031a86c @ +0x1a0
         t9 = , signed  t8 >> 0x10 // s4
         if                       // likely
         

    loc_0x8030463c: // orphan
         call 0x8af16eb0          // 0x8af16eb0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2 & 0xff           // s4
         if                       // likely
         

    loc_0x8030464c: // orphan
         s6 += 1
         s6 <<= 0x10

    loc_0x80304654: // orphan
         // CODE XREF from fcn.80317ed0 @ 0x8031aa10
         byte [s0 + 0] = s4
         byte [s0 + 1] = s5
         byte [s0 + 2] = 0
         s0 += 3
         s6 = , signed  s6 >> 0x10

    loc_0x80304668: // orphan
         t0 = 0x8af3 << 16
         t0 += 0x4d32
         s3 += 1
         at = , unsigned  , s3 < t0 // lo
         bnel at, 0, 0x80304604   // likely
         s1 = , unsigned  byte [s3 + 0] // s4

    loc_0x80304680: // orphan
         if                       // likely
         t1 = s6 & 3

    loc_0x80304688: // orphan
         if                       // unlikely
         

    loc_0x80304690: // orphan
         t1 -= 4

    loc_0x80304694: // orphan
         t2 = 0 + 4
         v0 = t2 - t1
         v1 = v0 << 0x10
         v1 = , signed  v1 >> 0x10
         a1 = v0 << 0x10
         at = , v1 < 4
         if                       // likely
         a1 = , signed  a1 >> 0x10

    loc_0x803046b4: // orphan
         a1 = v1 + 4
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10

    loc_0x803046c0: // orphan
         if                       // fcn.80304700+0x38 // unlikely
         v0 = 0

    loc_0x803046c8: // orphan
         v1 = a1 & 3
         if                       // likely
         a0 = v1

    loc_0x803046d4: // orphan
         v1 = 0 + 0xff            // s4

    loc_0x803046d8: // orphan
         v0 += 1
         byte [s0 + 0] = v1
         byte [s0 + 1] = 0
         byte [s0 + 2] = 0
         if                       // likely
         s0 += 3

    loc_0x803046f0: // orphan
         if                       // fcn.80304700+0x34 // unlikely
         v1 = 0 + 0xff            // s4

    loc_0x803046f4: // orphan
         v1 = 0 + 0xff            // s4

    loc_0x80304ac0: // orphan
         a0 = s1
         t7 = 0x8af3 << 16
         t7 = halfword [t7 + 0x47f6]
         t5 = 0x8af3 << 16
         t5 = halfword [t5 + 0x47f4]
         t8 = t7 << 2
         t9 = t8 << 2
         t6 = t5 << 2
         t9 -= t8
         t2 = 0x8af3 << 16
         t6 -= t5
         t1 = t6 + t9
         t2 += 0x4818
         call 0x8af171d8          // 0x8af171d8(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         a0 = t1 + t2
         a1 = halfword [s0 + 0]
         a0 = 0x8af3 << 16
         t3 = 0 + 0xa
         a1 -= 1
         [sp + 0x10] = t3
         a0 += 0x4808
         if                       // likely
         at = a1

    loc_0x80304b1c: // orphan
         at = a1 + 3

    loc_0x80304b20: // orphan
         a1 = , signed  at >> 2
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a2 = 0 + 0x14
         call 0x8ac0651c          // 0x8ac0651c(-1, 0x0, 0x14, -1)
         a3 = halfword [sp + 0x2a]
         ra = [sp + 0x24]
         s0 = [sp + 0x1c]         // v1
         s1 = [sp + 0x20]         // " " s0
         ret
         sp += 0x38

    loc_0x80304b4c: // orphan
         t6 = 0x8af3 << 16
         t7 = 0x8af3 << 16
         t6 = halfword [t6 + 0x47f4]
         t7 = halfword [t7 + 0x47f6]
         sp -= 0x30
         [sp + 0x14] = ra
         halfword [sp + 0x26] = t6
         call 0x8ac007fc          // 0x8ac007fc(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x24] = t7
         t8 = 0 + 0x12
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         halfword [sp + 0x2e] = t8
         a1 = halfword [a1 + 0x47f6]
         call 0x8ac0686c          // 0x8ac0686c(0x8af30000, 0xffff, 0x8, -1)
         a0 += 0x4808
         v0 = 0x8af2 << 16
         v0 = [v0 + 0x63c0]       // t9
         t2 = 0x8af3 << 16
         t9 = , unsigned  halfword [v0 + 8]
         t0 = t9 & 0x4000
         if                       // unlikely
         

    loc_0x80304ba8: // orphan
         call 0x8af00130          // "$\t" // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         t1 = 0 + 0x10
         goto 0x80304ca8          // fcn.80304c7c+0x2c
         halfword [sp + 0x2e] = t1

    loc_0x80304bbc: // orphan
         t2 = halfword [t2 + 0x480c]
         if                       // fcn.80304c7c+0x2c // likely
         

    loc_0x80304bc8: // orphan
         t3 = , unsigned  halfword [v0 + 6]
         v1 = 0
         a0 = 0x8af3 << 16
         t4 = t3 & 0x800
         if                       // likely
         

    loc_0x80304be0: // orphan
         a0 = halfword [a0 + 0x480a]
         call 0x8ac0660c          // 0x8ac0660c(0xffff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = 0
         if                       // unlikely
         v1 = [sp + 0x1c]

    loc_0x80304bf4: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         t5 = 0x8af3 << 16
         t5 = halfword [t5 + 0x480a]
         at = 0x8af3 << 16
         v1 = 0 + 1               // lo
         t6 = t5 - 1
         goto 0x80304c90          // fcn.80304c7c+0x14
         halfword [at + 0x47f6] = t6

    loc_0x80304c18: // orphan
         t7 = 0x8af2 << 16
         // CODE XREF from fcn.82b2b0b8 @ +0x218
         t7 = [t7 + 0x63c0]       // t9

    loc_0x803088dc: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031af08
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         if                       // likely
         t8 = , signed  t7 >> 2

    loc_0x80308f44: // orphan
         t9 = 0x8af3 << 16
         v1 += 0x71f0
         t9 += 0x7178
         [v1 + 0] = t9

    loc_0x80309218: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031afa4
         call 0x8af00504          // 0x8af00504(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x84
         s0 = 0x8af2 << 16
         s0 += 0x7490

    loc_0x803095b4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031afb0
         
         v0 = 0x8af3 << 16
         v0 = halfword [v0 + 0x7564]
         t6 = 0 + 0x16
         halfword [sp + 0x1e] = t6

    loc_0x80309614: // orphan
         halfword [sp + 0x1e] = t9
         if                       // unlikely
         

    loc_0x80309620: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031afbc
         call 0x8af1bf00          // 0x8af1bf00(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         

    loc_0x80309630: // orphan
         call 0x8af00130          // "$\t" // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc0

    loc_0x80309644: // orphan
         // CODE XREF from fcn.8031ace0 @ +0x2e0
         call 0x8af1bed8          // 0x8af1bed8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         t2 = 0x8af2 << 16

    loc_0x80309654: // orphan
         t2 = [t2 + 0x63c0]       // t9
         t3 = , unsigned  halfword [t2 + 8]
         t4 = t3 & 0x800
         if                       // unlikely
         

    loc_0x80309668: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc4
         a0 = 0x8af3 << 16
         t5 = 0 + 1               // lo
         at = 0x8af3 << 16
         a0 += 0x7244

    loc_0x80309680: // orphan
         halfword [at + 0x7564] = t5
         t8 = 0x8af3 << 16
         t8 = [t8 + 0x7240]       // t9
         t6 = [a0 + 0]            // t9
         at = 0x8af3 << 16
         t9 = halfword [t8 + 0xe]
         t7 = halfword [t6 + 0xa]
         t0 = t7 + t9
         goto 0x80309788          // fcn.80339168-0x2f9e0
         halfword [at + 0x7566] = t0

    loc_0x803096a8: // orphan
         call 0x8af1bf00          // 0x8af1bf00(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // fcn.80339168-0x2f9e0 // unlikely
         t1 = 0x8af2 << 16

    loc_0x803096b8: // orphan
         t1 = [t1 + 0x63c0]       // t9
         t2 = , unsigned  halfword [t1 + 8]
         t3 = t2 & 0x8400
         if                       // fcn.80339168-0x2f9e0 // unlikely
         

    loc_0x8030973c: // orphan
         halfword [v0 + 0xa] = v1
         at = 0x8af3 << 16
         goto 0x80309788          // fcn.80339168-0x2f9e0
         halfword [at + 0x7564] = 0

    loc_0x803097a8: // orphan
         a2 = 0x643c << 16
         a2 |= 0xff
         a1 |= 0x64ff
         a0 += 0x7410
         call 0x8ac06d70          // 0x8ac06d70(0x10000740f, 0x442f71dcfe1164ff, 0x643c00ff, -1)
         a3 = 0 + 6
         a0 = 0x8af3 << 16
         a1 = 0xe6dc << 16
         a2 = 0x643c << 16
         a2 |= 0xff
         a1 |= 0x64ff
         a0 += 0x7440
         call 0x8ac06d70          // 0x8ac06d70(0x8af37440, 0xe6dc64ff, 0x643c00ff, 0x6)
         a3 = 0 + 2
         a0 = 0x8af3 << 16
         a1 = 0xe6dc << 16
         a2 = 0x643c << 16
         // CODE XREF from fcn.8031ace0 @ +0x2f8
         a2 |= 0xff
         a1 |= 0x64ff
         a0 += 0x7470
         call 0x8ac06d70          // 0x8ac06d70(0x8af37470, 0xe6dc64ff, 0x643c00ff, 0x2)
         a3 = 0 + 6
         // CODE XREF from fcn.8031ace0 @ +0x2fc
         a0 = 0x8af3 << 16
         a1 = 0xe6dc << 16
         a2 = 0x643c << 16
         a2 |= 0xff
         a1 |= 0x64ff
         a0 += 0x74a0
         // CODE XREF from fcn.8031ace0 @ +0x304
         call 0x8ac06d70          // 0x8ac06d70(0x8af374a0, 0xe6dc64ff, 0x643c00ff, 0x6)
         a3 = 0 + 2
         goto 0x803098a8          // fcn.80309888+0x20
         

    loc_0x8030aa80: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031b13c
         t8 = t7 + 1              // lo
         halfword [a1 + 0] = t8
         a0 = halfword [a0 + 0x779e]

    loc_0x80312698: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031b8b4
         sp -= 0x50
         [sp + 0x1c] = ra
         [sp + 0x18] = s0

    loc_0x803126a4: // orphan
         call 0x8004c8c0          // 0x8004c8c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xbe
         // CODE XREF from fcn.8031b72c @ +0x18c
         call 0x8004c8c0          // 0x8004c8c0(0xbe, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xbb
         s0 = 0x8af4 << 16
         s0 -= 0x5c60
         a0 = s0
         // CODE XREF from fcn.80339030 @ 0x8031b8bc
         call 0x800476a0          // 0x800476a0(0x8af3a3a0, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339030 @ 0x8031b8b0
         a1 = 0 + 2
         a0 = s0
         call 0x800476fc          // 0x800476fc(0x8af3a3a0, 0x2, 0x8, -1)
         a1 = 0 + 2
         a0 = 0 + 0xbe
         call 0x8004c990          // 0x8004c990(0xbe, 0x2, 0x8, -1)
         a1 = 0
         a0 = 0

    loc_0x803126e4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031b8c0
         a1 = v0                  // s4
         a2 = 0

    loc_0x80313474: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031ba30
         t6 = 0 + 0x36
         halfword [t7 + 0x30] = t6
         t9 = [v1 + 0]
         a0 = 0x8af4 << 16
         t8 = 0 + 0x4a
         a0 -= 0x591c             // arg1
         halfword [t9 + 0x32] = t8
         v0 = halfword [a0 + 0]
         at = , v0 < 0x1e
         if                       // likely
         t0 = v0 + 1

    loc_0x803134a0: // orphan
         goto 0x80313500
         halfword [a0 + 0] = t0   // arg1

    loc_0x803134a8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80313498
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x599c]       // t9
         t3 = 0x8af2 << 16
         t1 = , unsigned  halfword [v0 + 2]
         t2 = t1 | 1
         // CODE XREF from fcn.80339030 @ 0x8031ba38
         halfword [v0 + 2] = t2
         t3 = [t3 + 0x63c0]       // t9
         t4 = , unsigned  halfword [t3 + 8]
         t5 = t4 & 0x8000
         if                       // unlikely
         t6 = 0 + 2

    loc_0x803134d4: // orphan
         // CODE XREF from fcn.8031b9e0 @ +0x60
         at = 0x8af4 << 16
         halfword [at - 0x599e] = t6
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x803134e0: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031ba3c
         a0 = 0 + 0xc2
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x599c]       // t9
         at = 0x8af4 << 16
         halfword [at - 0x591a] = 0
         t7 = , unsigned  halfword [v0 + 2]
         t8 = t7 & 0xfffe
         halfword [v0 + 2] = t8

    loc_0x80313500: // orphan
         // CODE XREFS from fcn.80339030 @ 0x803134a0, 0x803134cc
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80314238: // orphan
         

    loc_0x80314428: // orphan
         syscall                  // 255 = unknown ()

    loc_0x80315d64: // orphan
         

    loc_0x80315dc0: // orphan
         
         
         
         
         s0 = t1 + 0x3264
         
         beql s3, s3, 0x8032eb28  // fcn.80339168-0xa640 // likely
         daddi s2, k1, 0x4c6f

    loc_0x80315de0: // orphan
         daddi a0, t3, 0x5273
         daddi a0, k0, 0x6174
         daddi t1, t2, 0x6e4c
         ldl s3, 0x7428, t3       // s2
         

    loc_0x80315e5c: // orphan
         lwl s0, 0xa98, s7        // t9
         lwl s0, 0xaac, s7        // t9
         lwl s0, 0xae8, s7        // t9
         lwl s0, 0xafc, s7        // t9
         lwl s0, 0xac0, s7        // t9
         lwl s0, 0xad4, s7        // t9
         lwl s0, 0xb5c, s7        // t9
         lwl s0, 0xb10, s7        // t9
         lwl s0, 0xb5c, s7        // t9
         lwl s0, 0xb5c, s7        // t9
         lwl s0, 0xb5c, s7        // t9
         lwl s0, 0xb5c, s7        // t9
         lwl s0, 0xb2c, s7        // t9
         lwl s0, 0xba8, s7        // t9
         lwl s0, 0xd58, s7        // t9
         lwl s0, 0xbb8, s7        // t9
         lwl s0, 0xbb8, s7        // t9
         lwl s0, 0xbb8, s7        // t9
         lwl s0, 0xd78, s7        // t9

    loc_0x80315ea8: // orphan
         lwl s0, 0xbc8, s7        // t9
         lwl s0, 0xbd8, s7        // t9
         lwl s0, 0xbe8, s7        // t9
         lwl s0, 0xbf8, s7        // t9
         lwl s0, 0xc08, s7        // t9

    loc_0x80316578: // orphan
         daddiu t2, t2, 0x756d

    loc_0x803165d4: // orphan
         daddiu 0, at, 0xa00
         ldr a3, 0x5365, k1
         jalx fcn.8141859c        // fcn.8141859c(-1)
         daddiu t6, t2, 0x6f72
         ldr at, 0x6c5f, t3

    loc_0x803166cc: // orphan
         
         daddiu t2, 0, 0
         
         
         

    loc_0x80316758: // orphan
         
         

    loc_0x803167e4: // orphan
         lwl s0, -0x58c4, s7      // t9
         lwl s0, -0x58b4, s7      // t9
         lwl s0, -0x58a4, s7      // t9
         lwl s0, -0x5894, s7      // t9
         lwl s0, -0x5424, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x53f8, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x53cc, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x53a0, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9

    loc_0x80316870: // orphan
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5348, s7      // t9
         lwl s0, -0x5374, s7      // t9
         
         
         a0 = t3 + 0
         a0 = t3 + 0
         a0 = t3 + 0
         a0 = t3 + 0
         bnel k1, at, 0x80335238  // fcn.803231ec+0x1204c // likely
         madd.s f20, f19, f13

    loc_0x80316988: // orphan
         daddi ra, t2, 0x666c
         daddi a3, t3, 0x2030

    loc_0x803178ec: // orphan
         daddiu t1, t3, 0x5f31
         sp = at + 0x2025
         daddiu t2, 0, 0
         t7 = , unsigned  , t9 < 0x2f2f
         t7 = , unsigned  , t9 < 0x2f20

    loc_0x80317c40: // orphan
         if                       // unlikely
         

    loc_0x80317c48: // orphan
         if                       // fcn.8031818c+0x20 // unlikely
         if                       // unlikely

    loc_0x80317ea4: // orphan
         if                       // unlikely
         

    loc_0x80317eac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80317eb8: // orphan
         
         if                       // fcn.80339168-0x1e9e8 // unlikely
         if                       // fcn.80339168-0x1e9c4 // unlikely

    loc_0x80317ec8: // orphan
         
         if                       // unlikely
         // CALL XREF from fcn.815fbb1c @ +0x19c
         if                       // fcn.80339168-0x1e944 // unlikely

    loc_0x80317ef0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80317f68: // orphan
         if                       // unlikely

    loc_0x80317fa4: // orphan
         if                       // fcn.80339168-0x1e120 // unlikely
         if                       // fcn.80339168-0x1e0dc // unlikely

    loc_0x80317fec: // orphan
         if                       // fcn.80339168-0x1dc58 // unlikely
         if                       // unlikely

    loc_0x80317ff8: // orphan
         if                       // fcn.80339168-0x1db9c // unlikely
         if                       // fcn.80339168-0x1db08 // unlikely

    loc_0x80318814: // orphan
         if                       // fcn.80327070-0x8 // unlikely

    loc_0x80318a98: // orphan
         if                       // fcn.80339168-0xf14c // unlikely

    loc_0x80318aa4: // orphan
         if                       // fcn.80339168-0xf110 // unlikely
         

    loc_0x803194f8: // orphan
         if                       // fcn.80339168-0x52ac // unlikely

    loc_0x803195f4: // orphan
         if                       // fcn.80339168-0x45b0 // unlikely

    loc_0x80319600: // orphan
         if                       // fcn.80339168-0x44b4 // unlikely
         if                       // fcn.80339168-0x44a0 // unlikely

    loc_0x80319af8: // orphan
         if                       // unlikely

    loc_0x80319b04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319b10: // orphan
         if                       // fcn.80339168-0x884 // unlikely
         if                       // fcn.80339168-0x850 // unlikely

    loc_0x80319b1c: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x824 // unlikely

    loc_0x80319c38: // orphan
         if                       // fcn.80339168+0x434 // unlikely

    loc_0x80319f50: // orphan
         if                       // fcn.8031c300-0x2058c // unlikely
         if                       // unlikely

    loc_0x80319f5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319f68: // orphan
         if                       // unlikely
         

    loc_0x80319f70: // orphan
         if                       // fcn.8031c300-0x2035c // unlikely
         if                       // fcn.8031c300-0x20348 // unlikely

    loc_0x8031a1d4: // orphan
         if                       // fcn.80339168-0x3b640 // unlikely
         

    loc_0x8031a2ec: // orphan
         if                       // fcn.80339168-0x3a9a8 // unlikely

    loc_0x8031a698: // orphan
         if                       // fcn.8030103c-0x190 // unlikely

    loc_0x8031a6a4: // orphan
         if                       // fcn.8031c6d4-0x1b7dc // unlikely
         if                       // unlikely

    loc_0x8031a6b0: // orphan
         if                       // unlikely
         if                       // fcn.8030103c+0xc // unlikely

    loc_0x8031a6cc: // orphan
         if                       // fcn.8030103c+0x114 // unlikely
         if                       // fcn.8030103c+0x128 // unlikely

    loc_0x8031a6d8: // orphan
         if                       // fcn.8030103c+0xe0 // unlikely
         if                       // unlikely

    loc_0x8031a6e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a6f0: // orphan
         if                       // fcn.803012c4+0x10 // unlikely
         if                       // fcn.803012c4+0x54 // unlikely

    loc_0x8031a724: // orphan
         if                       // fcn.80301460+0x188 // unlikely

    loc_0x8031a730: // orphan
         if                       // fcn.80301460+0x204 // unlikely

    loc_0x8031a860: // orphan
         if                       // unlikely
         if                       // fcn.80302800-0x28 // unlikely

    loc_0x8031a898: // orphan
         if                       // fcn.80339168-0x3672c // unlikely

    loc_0x8031a8a4: // orphan
         

    loc_0x8031a918: // orphan
         if                       // fcn.8030312c // unlikely
         

    loc_0x8031a920: // orphan
         if                       // unlikely
         if                       // fcn.80317ed0-0x14d58 // unlikely

    loc_0x8031a938: // orphan
         if                       // fcn.803031b0+0xbc // unlikely
         if                       // fcn.803031b0+0xd0 // unlikely

    loc_0x8031a944: // orphan
         if                       // fcn.80303320+0xf8 // unlikely
         

    loc_0x8031a94c: // orphan
         
         if                       // fcn.803034b8+0x1c // unlikely
         if                       // fcn.803034b8+0x30 // unlikely

    loc_0x8031aa20: // orphan
         if                       // fcn.80317ed0-0x1343c // unlikely
         if                       // fcn.80317ed0-0x13458 // unlikely

    loc_0x8031aed4: // orphan
         if                       // fcn.80339168-0x30a90 // unlikely
         if                       // fcn.80339168-0x30a9c // unlikely

    loc_0x8031aee0: // orphan
         if                       // fcn.80339168-0x30a34 // unlikely
         if                       // fcn.80339168-0x30a20 // unlikely

    loc_0x8031aeec: // orphan
         if                       // fcn.80339168-0x309a8 // unlikely
         if                       // fcn.80339168-0x30984 // unlikely

    loc_0x8031aef8: // orphan
         if                       // fcn.80339168-0x3094c // unlikely
         if                       // fcn.80339168-0x308f8 // unlikely

    loc_0x8031af04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031af10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031afac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031afb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b330: // orphan
         

    loc_0x8031b554: // orphan
         if                       // fcn.80339168-0x29b90 // unlikely
         if                       // fcn.80339168-0x29b7c // unlikely

    loc_0x8031b8b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b8bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b8c8: // orphan
         if                       // fcn.80339168-0x26a6c // unlikely
         if                       // fcn.80339168-0x26a58 // unlikely

    loc_0x8031b8d4: // orphan
         if                       // fcn.80339168-0x26a20 // unlikely
         if                       // fcn.80339168-0x269dc // unlikely

    loc_0x8031b8e0: // orphan
         if                       // fcn.80339168-0x269f4 // unlikely
         if                       // fcn.80339168-0x269e0 // unlikely

    loc_0x8031ba28: // orphan
         
         if                       // fcn.80339168-0x25d18 // unlikely
         if                       // unlikely

    loc_0x8031ba38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031ba44: // orphan
         
         if                       // unlikely
         if                       // fcn.80339168-0x25c08 // unlikely

    loc_0x8031ba54: // orphan
         if                       // fcn.80339168-0x25bc0 // unlikely
         if                       // fcn.80318454-0x4e88 // unlikely

    loc_0x8031bbb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bbc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bbcc: // orphan
         if                       // unlikely
         if                       // fcn.80318030-0x3d9c // unlikely

    loc_0x8031bbf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc6c: // orphan
         if                       // fcn.8031c6d4-0x7e44 // unlikely
         if                       // unlikely

    loc_0x8031c060: // orphan
         if                       // fcn.80339168-0x21344 // unlikely
         if                       // fcn.80339168-0x21300 // unlikely

    loc_0x8031dae8: // orphan
         if                       // fcn.80339168-0xcbfc // likely

    loc_0x8031daf4: // orphan
         if                       // fcn.80339168-0xcc20 // likely

    loc_0x8031db00: // orphan
         if                       // fcn.80339168-0xcad4 // likely

    loc_0x8031db0c: // orphan
         if                       // fcn.80339168-0xcaa8 // likely

    loc_0x8031db18: // orphan
         at = halfword [0 + 0x3af4]

    loc_0x8031f020: // orphan
         if                       // fcn.80300188+0xc // likely
         at = halfword [0 - 0x7b90]

    loc_0x8031f2b8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f2c4: // orphan
         if                       // fcn.80339168-0x373b0 // likely
         if                       // fcn.80339168-0x3735c // likely

    loc_0x8031f2d0: // orphan
         if                       // fcn.80339168-0x37304 // likely
         if                       // fcn.80339168-0x37310 // likely

    loc_0x8031f2dc: // orphan
         if                       // fcn.80339168-0x372c8 // likely
         if                       // fcn.80339168-0x372b4 // likely

    loc_0x8031f2e8: // orphan
         if                       // fcn.80339168-0x3724c // likely
         if                       // fcn.80339168-0x37228 // likely

    loc_0x8031f2f4: // orphan
         if                       // fcn.80339168-0x371f0 // likely
         if                       // fcn.80339168-0x371cc // likely

    loc_0x8031f300: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f30c: // orphan
         if                       // fcn.8030204c+0x10 // likely
         if                       // likely

    loc_0x8031f318: // orphan
         if                       // fcn.8030209c+0xc // likely
         if                       // likely

    loc_0x8031f324: // orphan
         if                       // fcn.803020d8+0x40 // likely
         if                       // fcn.80302130+0x3c // likely

    loc_0x8031f330: // orphan
         if                       // fcn.803021a8+0x2c // likely
         if                       // fcn.803021a8+0x20 // likely

    loc_0x8031f33c: // orphan
         if                       // fcn.803021a8+0x58 // likely
         if                       // fcn.803021a8+0x9c // likely

    loc_0x8031f348: // orphan
         if                       // fcn.8031c6d4-0x1a448 // likely
         if                       // likely

    loc_0x8031f354: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f360: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f424: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f430: // orphan
         if                       // fcn.80302b78+0xc // likely
         if                       // likely

    loc_0x8031f43c: // orphan
         if                       // fcn.80302c30 // fcn.80302c30 // likely
         if                       // fcn.80302c3c+0x18 // likely

    loc_0x8031f448: // orphan
         if                       // fcn.80339168-0x364dc // likely
         if                       // fcn.80339168-0x36498 // likely

    loc_0x8031f454: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f460: // orphan
         if                       // fcn.80302d7c+0x18 // likely
         if                       // fcn.80302d7c+0x3c // likely

    loc_0x8031f46c: // orphan
         if                       // fcn.80302d7c+0x50 // likely
         if                       // likely

    loc_0x8031f478: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f484: // orphan
         if                       // fcn.80302eac+0x2c // likely
         if                       // fcn.80302eac+0x40 // likely

    loc_0x8031f490: // orphan
         if                       // fcn.80339168-0x36244 // likely
         if                       // fcn.80339168-0x36200 // likely

    loc_0x8031f49c: // orphan
         if                       // fcn.80339168-0x36218 // likely
         at = halfword [0 - 0x7150]

    loc_0x8031f4a4: // orphan
         if                       // fcn.80339168-0x361e0 // likely
         if                       // fcn.80302eac+0xf0 // likely

    loc_0x8031f4b0: // orphan
         if                       // fcn.80303040+0x4 // likely
         if                       // fcn.80303018 // fcn.80303018 // likely

    loc_0x8031f4bc: // orphan
         if                       // fcn.80303074+0x1c // likely
         if                       // fcn.80303098+0xc // likely

    loc_0x8031f650: // orphan
         if                       // fcn.80303874+0x380 // likely
         if                       // fcn.80303874+0x424 // likely

    loc_0x8031f65c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f668: // orphan
         if                       // fcn.80303e44+0x38 // likely
         if                       // fcn.80303f44+0x6c // likely

    loc_0x8031f674: // orphan
         if                       // fcn.80303f44+0x84 // likely
         if                       // fcn.80303ffc+0x10 // likely

    loc_0x8031f680: // orphan
         if                       // fcn.80304040+0x24 // likely
         if                       // fcn.80304068+0x20 // likely

    loc_0x8031f68c: // orphan
         if                       // fcn.80304068+0x78 // likely
         if                       // fcn.80304068+0x9c // likely

    loc_0x8031f698: // orphan
         if                       // fcn.80304068+0x104 // likely
         if                       // fcn.80304068+0x128 // likely

    loc_0x8031f6a4: // orphan
         if                       // fcn.803041a4+0x44 // likely
         if                       // fcn.803041a4+0x88 // likely

    loc_0x8031f6b0: // orphan
         if                       // fcn.803041a4+0x70 // likely
         if                       // fcn.803041a4+0x84 // likely

    loc_0x8031f6bc: // orphan
         if                       // fcn.80304304+0x5c // likely
         if                       // fcn.80304284+0x30 // likely

    loc_0x8031f6c8: // orphan
         if                       // fcn.803042c0+0xc // likely
         if                       // likely

    loc_0x8031f6d4: // orphan
         if                       // likely
         if                       // fcn.8030445c+0x60 // likely

    loc_0x8031f6e0: // orphan
         if                       // fcn.80304304+0x20 // likely
         if                       // fcn.803044e0+0x8 // likely

    loc_0x8031f6ec: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f6f8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f748: // orphan
         if                       // fcn.8031c6d4-0x17d18 // likely
         if                       // likely

    loc_0x8031f754: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fb20: // orphan
         at = halfword [0 - 0x5a6c]

    loc_0x8031fba8: // orphan
         if                       // likely

    loc_0x8031fbb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fbc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fbcc: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320d88: // orphan
         if                       // likely

    loc_0x80320d94: // orphan
         if                       // likely

    loc_0x80320da0: // orphan
         if                       // fcn.80339030-0x231a0 // likely
         if                       // likely

    loc_0x80320dac: // orphan
         if                       // likely
         at = halfword [0 - 0x2bb8]

    loc_0x80320ec0: // orphan
         if                       // likely

    loc_0x80320ecc: // orphan
         if                       // likely

    loc_0x80320ed8: // orphan
         if                       // fcn.80339168-0x22b5c // likely

    loc_0x80320ee4: // orphan
         if                       // likely

    loc_0x80320ef0: // orphan
         if                       // likely

    loc_0x80320efc: // orphan
         if                       // likely

    loc_0x80320f08: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320f14: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320f20: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320f2c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321040: // orphan
         if                       // likely

    loc_0x8032109c: // orphan
         if                       // likely

    loc_0x803210a8: // orphan
         if                       // fcn.80317ed0+0xc // likely
         if                       // likely

    loc_0x803210b4: // orphan
         if                       // fcn.80317ed0+0x68 // likely
         if                       // fcn.80339168-0x211fc // likely

    loc_0x803210c0: // orphan
         if                       // fcn.80339168-0x21214 // likely
         if                       // likely

    loc_0x803210cc: // orphan
         if                       // likely
         if                       // fcn.8031c6d4-0x4630 // likely

    loc_0x80321310: // orphan
         at = halfword [0 - 0x1a94]

    loc_0x8032173c: // orphan
         if                       // likely

    loc_0x80321748: // orphan
         if                       // fcn.8031c6d4+0x2dd8 // likely

    loc_0x80321760: // orphan
         if                       // fcn.8031c6d4+0x3050 // likely
         // CODE XREF from fcn.80339168 @ 0x80321a00
         if                       // likely

    loc_0x80321b3c: // orphan
         bltzl s0, 0x80322700     // unlikely
         bltzl t0, 0x80322644     // fcn.80339168-0x16b24 // unlikely

    loc_0x80321b48: // orphan
         bltzl t0, 0x8032265c     // fcn.80339168-0x16b0c // unlikely
         bltzl s0, 0x803227b0     // unlikely

    loc_0x80321b54: // orphan
         bltzl s0, 0x803227f8     // unlikely
         bltzl t0, 0x803226bc     // fcn.80339168-0x16aac // unlikely

    loc_0x80321b60: // orphan
         bltzl t0, 0x803226e4     // fcn.80339168-0x16a84 // unlikely
         bltzl s0, 0x80322888     // unlikely

    loc_0x80321b6c: // orphan
         bltzl s0, 0x803228d0     // fcn.80339168-0x16898 // unlikely
         bltzl t0, 0x80322744     // fcn.80339168-0x16a24 // unlikely

    loc_0x80321b78: // orphan
         bltzl t0, 0x8032275c     // fcn.80339168-0x16a0c // unlikely
         bltzl s0, 0x80322960     // fcn.80339168-0x16808 // unlikely

    loc_0x80321b84: // orphan
         bltzl s0, 0x803229b8     // fcn.80339168-0x167b0 // unlikely
         bltzl t0, 0x80321fac     // unlikely

    loc_0x80321b90: // orphan
         bltzl t0, 0x80322a04     // fcn.80339168-0x16764 // unlikely
         bltzl s0, 0x80322a78     // unlikely

    loc_0x80321b9c: // orphan
         bltzl s0, 0x80322b00     // fcn.80339168-0x16668 // unlikely
         bltzl t0, 0x80322a44     // unlikely

    loc_0x80321ba8: // orphan
         bltzl t0, 0x80322a5c     // unlikely
         bltzl s0, 0x80322bb0     // unlikely

    loc_0x80321bb8: // orphan
         bltzl t0, 0x80322abc     // fcn.80339168-0x166ac // unlikely
         bltzl s0, 0x80322c40     // unlikely

    loc_0x80321bc4: // orphan
         bltzl s0, 0x80322c88     // unlikely
         bltzl t0, 0x80322afc     // fcn.80339168-0x1666c // unlikely

    loc_0x80321bd0: // orphan
         bltzl t0, 0x80322b44     // fcn.80339168-0x16624 // unlikely
         bltzl s0, 0x80322d18     // unlikely

    loc_0x80321bdc: // orphan
         bltzl s0, 0x80322d60     // fcn.80339168-0x16408 // unlikely
         bltzl t0, 0x80322d74     // unlikely

    loc_0x80321be8: // orphan
         v0 = halfword [0 + 0x47c]

    loc_0x80321bec: // orphan
         v0 = halfword [0 + 0x488]
         bltzl t0, 0x80322e34     // fcn.80339168-0x16334 // unlikely
         bltzl s0, 0x80322e48     // unlikely

    loc_0x80321bfc: // orphan
         bltzl s0, 0x80322f20     // fcn.80339168-0x16248 // unlikely
         bltzl t0, 0x80322ec4     // unlikely

    loc_0x80321c08: // orphan
         v0 = halfword [0 + 0x4e0]
         bltzl t0, 0x80322ff0     // fcn.80339168-0x16178 // unlikely
         bltzl s0, 0x80323004     // unlikely

    loc_0x80321c44: // orphan
         bltzl s0, 0x80323438     // fcn.80339168-0x15d30 // unlikely
         bltzl t0, 0x8032345c     // unlikely

    loc_0x80321c50: // orphan
         bltzl t0, 0x80323514     // unlikely
         bltzl s0, 0x80323528     // fcn.80339168-0x15c40 // unlikely

    loc_0x80321c5c: // orphan
         bltzl s0, 0x803235c0     // unlikely
         bltzl t0, 0x80323654     // fcn.80339168-0x15b14 // unlikely

    loc_0x80321c68: // orphan
         bltzl 0, 0x8032391c      // fcn.80338964-0x15048 // unlikely
         bltzl 0, 0x80323940      // unlikely

    loc_0x80321c74: // orphan
         bltzl s0, 0x803239b8     // fcn.80323968+0x50 // unlikely
         bltzl t0, 0x8032397c     // unlikely

    loc_0x80321cac: // orphan
         bltzl t0, 0x80323ca0     // unlikely
         bltzl s0, 0x80323cd4     // unlikely

    loc_0x80321cb8: // orphan
         bltzl t0, 0x80323dbc     // unlikely
         bltzl s0, 0x80323de0     // unlikely

    loc_0x80321cc4: // orphan
         bltzl 0, 0x80323df8      // unlikely
         bltzl 0, 0x80323e5c      // unlikely

    loc_0x80321cd0: // orphan
         bltzl s0, 0x80323ea4     // unlikely
         bltzl 0, 0x80323e98      // unlikely

    loc_0x80321cdc: // orphan
         bltzl t0, 0x80323ef0     // unlikely

    loc_0x80321ce0: // orphan
         bltzl s0, 0x80323f04     // unlikely
         v0 = halfword [0 + 0x88c]

    loc_0x80321ce8: // orphan
         bltzl t0, 0x80323f3c     // unlikely
         bltzl s0, 0x80323f80     // unlikely

    loc_0x80321cf4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321a60
         bltzl s0, 0x80323f68     // unlikely
         v0 = halfword [0 + 0x8a0]

    loc_0x80321cfc: // orphan
         bltzl t0, 0x80323fa0     // unlikely
         bltzl s0, 0x80323fe4     // unlikely

    loc_0x80321da4: // orphan
         v0 = halfword [0 + 0xbf8]

    loc_0x80321da8: // orphan
         bltzl t0, 0x80324dbc     // unlikely
         bltzl s0, 0x80324dd0     // unlikely

    loc_0x80321db4: // orphan
         bltzl t0, 0x80324e28     // fcn.80339168-0x14340 // unlikely
         bltzl s0, 0x80324e3c     // fcn.80339168-0x1432c // unlikely

    loc_0x80321dc0: // orphan
         bltzl t0, 0x80324e84     // fcn.80339168-0x142e4 // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321a70
         bltzl s0, 0x80324ec8     // fcn.80339168-0x142a0 // unlikely

    loc_0x80321dcc: // orphan
         bltzl s0, 0x80324eb0     // fcn.80339168-0x142b8 // unlikely
         bltzl 0, 0x80324ec4      // fcn.80339168-0x142a4 // unlikely

    loc_0x80321dd8: // orphan
         // CODE XREF from fcn.80321804 @ +0x270
         bltzl s0, 0x80324f0c     // fcn.80339168-0x1425c // unlikely
         bltzl 0, 0x80324f00      // fcn.80339168-0x14268 // unlikely

    loc_0x80321de4: // orphan
         bltzl s0, 0x80324f88     // fcn.80339168-0x141e0 // unlikely
         bltzl 0, 0x80324fac      // fcn.80339168-0x141bc // unlikely

    loc_0x80321eac: // orphan
         bltzl t0, 0x803258fc     // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321a78
         bltzl s0, 0x80325910     // unlikely

    loc_0x80321fac: // orphan
         // CODE XREFS from fcn.80339030 @ 0x2a4, 0x80321b88
         bltzl t0, 0x80326a80     // fcn.80339168-0x126e8 // unlikely
         bltzl s0, 0x80326aa4     // fcn.80339168-0x126c4 // unlikely

    loc_0x80322054: // orphan
         bltzl s0, 0x803270d8     // fcn.8031880c+0xe8cc // unlikely
         bltzl t0, 0x8032702c     // fcn.80322040+0x4fec // unlikely

    loc_0x80322090: // orphan
         v0 = halfword [0 + 0x147c]

    loc_0x803223d8: // orphan
         bltzl s0, 0x80329ebc     // fcn.80339168-0xf2ac // unlikely

    loc_0x803223e4: // orphan
         bltzl s0, 0x80329f98     // unlikely
         bltzl t0, 0x80329f7c     // unlikely

    loc_0x803223f0: // orphan
         bltzl 0, 0x80329fd4      // unlikely
         bltzl t0, 0x80329ff8     // unlikely

    loc_0x803223fc: // orphan
         bltzl t0, 0x8032a110     // unlikely
         // CALL XREF from fcn.825f0398 @ +0x1718
         bltzl s0, 0x8032a124     // unlikely

    loc_0x80322408: // orphan
         bltzl s0, 0x8032a19c     // fcn.80339168-0xefcc // unlikely
         bltzl t0, 0x8032a200     // fcn.80339168-0xef68 // unlikely

    loc_0x80322510: // orphan
         bltzl t0, 0x8032b5b4     // fcn.80339168-0xdbb4 // unlikely

    loc_0x80322528: // orphan
         bltzl t0, 0x8032b64c     // fcn.80339168-0xdb1c // unlikely

    loc_0x8032264c: // orphan
         bltzl t0, 0x8032c6c0     // fcn.80339168-0xcaa8 // unlikely

    loc_0x80322658: // orphan
         bltzl s0, 0x8032c8cc     // fcn.80339168-0xc89c // unlikely

    loc_0x80322664: // orphan
         bltzl t0, 0x8032c748     // fcn.80339168-0xca20 // unlikely

    loc_0x80322678: // orphan
         bltzl t0, 0x8032c788     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321b34
         bltzl s0, 0x8032c9ec     // unlikely

    loc_0x8032267c: // orphan
         bltzl t0, 0x8032c7a0     // fcn.80339168-0xc9c8 // unlikely

    loc_0x80322688: // orphan
         bltzl s0, 0x8032ca7c     // fcn.80339168-0xc6ec // unlikely

    loc_0x80322694: // orphan
         bltzl t0, 0x8032cb18     // fcn.8032cac8+0x50 // unlikely

    loc_0x803226a0: // orphan
         bltzl s0, 0x8032cbb4     // fcn.80339168-0xc5b4 // unlikely

    loc_0x803226ac: // orphan
         bltzl t0, 0x8032cb80     // fcn.80339168-0xc5e8 // unlikely

    loc_0x803226c4: // orphan
         bltzl t0, 0x8032cbf8     // fcn.80339168-0xc570 // unlikely

    loc_0x803226d0: // orphan
         bltzl s0, 0x8032ce04     // fcn.80339168-0xc364 // unlikely

    loc_0x803226dc: // orphan
         bltzl t0, 0x8032cc80     // fcn.80339168-0xc4e8 // unlikely

    loc_0x803226f0: // orphan
         bltzl t0, 0x8032ccc0     // unlikely
         bltzl s0, 0x8032cf24     // unlikely

    loc_0x803226fc: // orphan
         bltzl s0, 0x8032cf6c     // unlikely
         // CODE XREF from fcn.80321804 @ +0x364
         bltzl t0, 0x8032cd20     // unlikely

    loc_0x80322708: // orphan
         bltzl t0, 0x8032cd38     // unlikely
         bltzl s0, 0x8032cffc     // unlikely

    loc_0x80322714: // orphan
         bltzl t0, 0x8032d074     // unlikely
         bltzl s0, 0x8032d088     // unlikely

    loc_0x80322720: // orphan
         bltzl t0, 0x8032d0b4     // unlikely
         bltzl s0, 0x8032d198     // unlikely

    loc_0x8032274c: // orphan
         bltzl s0, 0x8032d3c0     // fcn.80339168-0xbda8 // unlikely

    loc_0x80322758: // orphan
         bltzl t0, 0x8032d1dc     // unlikely

    loc_0x80322764: // orphan
         bltzl s0, 0x8032d498     // fcn.80339168-0xbcd0 // unlikely

    loc_0x80322770: // orphan
         bltzl t0, 0x8032d234     // fcn.80339168-0xbf34 // unlikely

    loc_0x80322788: // orphan
         bltzl t0, 0x8032d5cc     // unlikely
         bltzl s0, 0x8032d610     // fcn.80323968+0x9ca8 // unlikely

    loc_0x80322794: // orphan
         bltzl s0, 0x8032d318     // fcn.80318c70+0x146a8 // unlikely
         bltzl t0, 0x8032d32c     // unlikely

    loc_0x803227a0: // orphan
         v0 = halfword [0 + 0x2bac]

    loc_0x803227a4: // orphan
         bltzl 0, 0x8032d698      // fcn.80339168-0xbad0 // unlikely
         v0 = halfword [0 + 0x2bc4]

    loc_0x803227ac: // orphan
         bltzl t0, 0x8032d6e0     // fcn.80339168-0xba88 // unlikely

    loc_0x803227b0: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b4c
         bltzl s0, 0x8032d704     // fcn.80339168-0xba64 // unlikely
         bltzl t0, 0x8032d718     // fcn.80339168-0xba50 // unlikely

    loc_0x803227c0: // orphan
         bltzl t0, 0x8032d740     // unlikely
         bltzl s0, 0x8032d7b4     // unlikely

    loc_0x803227c4: // orphan
         bltzl t0, 0x8032d758     // fcn.80339168-0xba10 // unlikely

    loc_0x803227cc: // orphan
         bltzl s0, 0x8032d83c     // unlikely
         bltzl t0, 0x8032d780     // unlikely

    loc_0x803227d0: // orphan
         bltzl s0, 0x8032d8c4     // fcn.80339168-0xb8a4 // unlikely

    loc_0x803227dc: // orphan
         bltzl t0, 0x8032d7e0     // fcn.80339168-0xb988 // unlikely

    loc_0x803227e0: // orphan
         bltzl s0, 0x8032d9a4     // unlikely

    loc_0x803227ec: // orphan
         bltzl t0, 0x8032d820     // unlikely
         bltzl s0, 0x8032da34     // fcn.80339168-0xb734 // unlikely

    loc_0x803227f8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b54
         bltzl s0, 0x8032da7c     // unlikely
         bltzl t0, 0x8032d880     // unlikely

    loc_0x80322804: // orphan
         bltzl s0, 0x8032dac4     // unlikely
         bltzl t0, 0x8032d898     // fcn.80339030-0xb798 // unlikely

    loc_0x80322810: // orphan
         bltzl s0, 0x8032db54     // unlikely
         bltzl t0, 0x8032d8d8     // fcn.80339168-0xb890 // unlikely

    loc_0x8032283c: // orphan
         bltzl t0, 0x8032d9c0     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321b5c
         bltzl s0, 0x8032dd04     // unlikely

    loc_0x80322848: // orphan
         bltzl s0, 0x8032dd6c     // unlikely
         bltzl t0, 0x8032dd80     // unlikely

    loc_0x80322854: // orphan
         bltzl s0, 0x8032ddf4     // unlikely
         bltzl t0, 0x8032dd98     // unlikely

    loc_0x80322860: // orphan
         bltzl t0, 0x8032ddc0     // unlikely
         bltzl s0, 0x8032df04     // unlikely

    loc_0x80322878: // orphan
         bltzl t0, 0x8032de38     // unlikely
         bltzl s0, 0x8032e03c     // unlikely

    loc_0x80322884: // orphan
         bltzl s0, 0x8032e084     // unlikely
         bltzl t0, 0x8032de78     // unlikely

    loc_0x80322888: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b64
         bltzl s0, 0x8032e0cc     // unlikely
         bltzl t0, 0x8032dec0     // fcn.80339168-0xb2a8 // unlikely

    loc_0x80322890: // orphan
         bltzl t0, 0x8032dec0     // fcn.80339168-0xb2a8 // unlikely
         bltzl s0, 0x8032e114     // fcn.80339168-0xb054 // unlikely

    loc_0x80322894: // orphan
         bltzl t0, 0x8032ded8     // fcn.80339168-0xb290 // unlikely
         bltzl s0, 0x8032e15c     // unlikely

    loc_0x803228a0: // orphan
         bltzl s0, 0x8032e1a4     // unlikely
         bltzl t0, 0x8032df18     // fcn.80339168-0xb250 // unlikely

    loc_0x803229d4: // orphan
         bltzl t0, 0x8032ecb8     // fcn.80338964-0x9cac // unlikely
         bltzl s0, 0x8032ef5c     // unlikely

    loc_0x803229e0: // orphan
         bltzl s0, 0x8032efa4     // unlikely
         bltzl t0, 0x8032ed18     // unlikely

    loc_0x803229ec: // orphan
         bltzl s0, 0x8032efec     // fcn.80339030-0xa044 // unlikely
         bltzl t0, 0x8032ed30     // unlikely

    loc_0x80322a28: // orphan
         bltzl s0, 0x8032f2cc     // fcn.80339168-0x9e9c // unlikely
         bltzl t0, 0x8032f220     // fcn.80339168-0x9f48 // unlikely

    loc_0x80322a34: // orphan
         bltzl t0, 0x8032f268     // fcn.80339168-0x9f00 // unlikely
         bltzl s0, 0x8032f3dc     // fcn.80339168-0x9d8c // unlikely

    loc_0x80322a40: // orphan
         bltzl s0, 0x8032f444     // fcn.80339168-0x9d24 // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321ba0
         bltzl t0, 0x8032f2a8     // fcn.80339168-0x9ec0 // unlikely

    loc_0x80322a44: // orphan
         bltzl s0, 0x8032f444     // fcn.80339168-0x9d24 // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321ba0
         bltzl t0, 0x8032f2a8     // fcn.80339168-0x9ec0 // unlikely

    loc_0x80322a4c: // orphan
         bltzl t0, 0x8032f2c0     // fcn.80339168-0x9ea8 // unlikely
         bltzl s0, 0x8032f4d4     // fcn.80339168-0x9c94 // unlikely

    loc_0x80322a50: // orphan
         bltzl t0, 0x8032f2c0     // fcn.80339168-0x9ea8 // unlikely
         bltzl s0, 0x8032f4d4     // fcn.80339168-0x9c94 // unlikely

    loc_0x80322a58: // orphan
         bltzl s0, 0x8032f51c     // fcn.80339168-0x9c4c // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321ba8
         bltzl t0, 0x8032f320     // fcn.80339168-0x9e48 // unlikely

    loc_0x80322a5c: // orphan
         bltzl s0, 0x8032f51c     // fcn.80339168-0x9c4c // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321ba8
         bltzl t0, 0x8032f320     // fcn.80339168-0x9e48 // unlikely

    loc_0x80322a64: // orphan
         bltzl t0, 0x8032f348     // fcn.80339168-0x9e20 // unlikely
         bltzl s0, 0x8032f5ac     // fcn.80339168-0x9bbc // unlikely

    loc_0x80322a68: // orphan
         bltzl t0, 0x8032f348     // fcn.80339168-0x9e20 // unlikely
         bltzl s0, 0x8032f5ac     // fcn.80339168-0x9bbc // unlikely

    loc_0x80322a70: // orphan
         bltzl s0, 0x8032f5f4     // fcn.80339168-0x9b74 // unlikely
         bltzl t0, 0x8032f3a8     // fcn.80339168-0x9dc0 // unlikely

    loc_0x80322a74: // orphan
         bltzl s0, 0x8032f5f4     // fcn.80339168-0x9b74 // unlikely
         bltzl t0, 0x8032f3a8     // fcn.80339168-0x9dc0 // unlikely

    loc_0x80322a78: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b94
         bltzl s0, 0x8032f63c     // fcn.80339168-0x9b2c // unlikely

    loc_0x80322a7c: // orphan
         bltzl t0, 0x8032f3c0     // fcn.80339168-0x9da8 // unlikely
         bltzl s0, 0x8032f684     // fcn.80339168-0x9ae4 // unlikely

    loc_0x80322a80: // orphan
         bltzl t0, 0x8032f3c0     // fcn.80339168-0x9da8 // unlikely
         bltzl s0, 0x8032f684     // fcn.80339168-0x9ae4 // unlikely

    loc_0x80322a90: // orphan
         bltzl s0, 0x8032f754     // fcn.80339168-0x9a14 // unlikely

    loc_0x80322a98: // orphan
         bltzl t0, 0x8032f448     // unlikely
         bltzl s0, 0x8032f79c     // unlikely

    loc_0x80322a9c: // orphan
         bltzl t0, 0x8032f460     // fcn.80339168-0x9d08 // unlikely

    loc_0x80322aa4: // orphan
         bltzl s0, 0x8032f7e4     // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321bb0
         bltzl 0, 0x8032f818      // unlikely

    loc_0x80322aa8: // orphan
         bltzl t0, 0x8032f83c     // fcn.80339168-0x992c // unlikely

    loc_0x80322ab0: // orphan
         bltzl s0, 0x8032f860     // fcn.80339030-0x97d0 // unlikely
         bltzl 0, 0x8032f854      // unlikely

    loc_0x80322ab4: // orphan
         v0 = halfword [0 + 0x3374]

    loc_0x80322bb0: // orphan
         bltzl t0, 0x80330370     // fcn.80330330+0x40 // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321bac
         bltzl s0, 0x80330394     // unlikely

    loc_0x80322c40: // orphan
         bltzl t0, 0x80330830     // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321bbc
         bltzl s0, 0x80330854     // unlikely

    loc_0x80322d18: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321bd4
         bltzl t0, 0x803311bc     // fcn.80331194+0x28 // unlikely

    loc_0x80322d24: // orphan
         bltzl s0, 0x80331248     // fcn.80339168-0x7f20 // unlikely

    loc_0x80322d74: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321be0
         bltzl t0, 0x80331518     // fcn.80339168-0x7c50 // unlikely
         bltzl s0, 0x8033152c     // fcn.80339168-0x7c3c // unlikely

    loc_0x80322d80: // orphan
         bltzl s0, 0x80331494     // fcn.80339168-0x7cd4 // unlikely
         bltzl t0, 0x80331578     // fcn.80339168-0x7bf0 // unlikely

    loc_0x80322d8c: // orphan
         bltzl t0, 0x803315f0     // fcn.80339168-0x7b78 // unlikely
         bltzl s0, 0x80331614     // unlikely

    loc_0x80322d98: // orphan
         bltzl 0, 0x8033168c      // fcn.80339168-0x7adc // unlikely
         bltzl 0, 0x80331750      // fcn.80339168-0x7a18 // unlikely

    loc_0x80322da4: // orphan
         bltzl 0, 0x803317b8      // unlikely
         v0 = halfword [0 + 0x3a94]

    loc_0x80322e48: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321bf4
         bltzl 0, 0x8033208c      // fcn.80339168-0x70dc // unlikely

    loc_0x80322e54: // orphan
         bltzl t0, 0x80332108     // fcn.80339168-0x7060 // unlikely

    loc_0x80322e60: // orphan
         bltzl t0, 0x803321a4     // fcn.80339168-0x6fc4 // unlikely

    loc_0x80322e68: // orphan
         bltzl s0, 0x803321b8     // unlikely
         bltzl t0, 0x803321dc     // unlikely

    loc_0x80322e6c: // orphan
         bltzl s0, 0x80332220     // fcn.80339168-0x6f48 // unlikely

    loc_0x80322e74: // orphan
         bltzl 0, 0x80332214      // unlikely
         bltzl t0, 0x80332258     // unlikely

    loc_0x80322e78: // orphan
         bltzl s0, 0x8033229c     // fcn.80339168-0x6ecc // unlikely

    loc_0x80322e80: // orphan
         bltzl t0, 0x80332270     // unlikely
         bltzl s0, 0x80332284     // unlikely

    loc_0x80322ec4: // orphan
         bltzl 0, 0x80332504      // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321c00
         bltzl 0, 0x80332528      // unlikely

    loc_0x80322ed0: // orphan
         bltzl 0, 0x803325b0      // unlikely
         v0 = halfword [0 + 0x3dc0]

    loc_0x80322f10: // orphan
         bltzl s0, 0x80332814     // unlikely

    loc_0x80322f1c: // orphan
         bltzl s0, 0x80332880     // fcn.80339168-0x68e8 // unlikely

    loc_0x80322f28: // orphan
         bltzl t0, 0x8033293c     // fcn.80339168-0x682c // unlikely

    loc_0x80322f34: // orphan
         bltzl s0, 0x80332968     // fcn.80339168-0x6800 // unlikely

    loc_0x80322f40: // orphan
         bltzl s0, 0x803329b4     // fcn.80339168-0x67b4 // unlikely

    loc_0x80322f4c: // orphan
         bltzl s0, 0x80332a40     // unlikely
         v0 = halfword [0 + 0x3ec0]

    loc_0x80323004: // orphan
         v0 = halfword [0 + 0x40d4]
         // CODE XREF from fcn.8260e2c4 @ +0x50
         bltzl t0, 0x80333384     // fcn.8031cf8c+0x163f8 // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321c10
         bltzl s0, 0x803333a8     // unlikely

    loc_0x80323010: // orphan
         bltzl s0, 0x803333d0     // fcn.8031cf8c+0x16444 // unlikely
         bltzl t0, 0x80333424     // fcn.8031cf8c+0x16498 // unlikely

    loc_0x80323014: // orphan
         bltzl s0, 0x80333438     // fcn.8031cf8c+0x164ac // unlikely
         v0 = halfword [0 + 0x4114]

    loc_0x803233e8: // orphan
         bltzl s0, 0x8033600c     // unlikely

    loc_0x803233f4: // orphan
         bltzl t0, 0x80336088     // fcn.80339168-0x30e0 // unlikely

    loc_0x80323400: // orphan
         bltzl s0, 0x80336104     // fcn.80339168-0x3064 // unlikely

    loc_0x8032340c: // orphan
         bltzl t0, 0x80336140     // fcn.80339168-0x3028 // unlikely

    loc_0x80323424: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321c40
         bltzl t0, 0x80336278     // fcn.80339168-0x2ef0 // unlikely

    loc_0x80323430: // orphan
         bltzl s0, 0x80336374     // fcn.80339168-0x2df4 // unlikely

    loc_0x8032343c: // orphan
         bltzl t0, 0x803364a0     // fcn.80339168-0x2cc8 // unlikely

    loc_0x80323448: // orphan
         bltzl s0, 0x8033655c     // fcn.80339168-0x2c0c // unlikely

    loc_0x80323454: // orphan
         bltzl t0, 0x80336678     // fcn.80339168-0x2af0 // unlikely

    loc_0x8032345c: // orphan
         bltzl s0, 0x8033668c     // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321c48
         bltzl t0, 0x80336700     // unlikely

    loc_0x80323460: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321c48
         bltzl t0, 0x80336700     // unlikely
         bltzl s0, 0x80336734     // fcn.80339168-0x2a34 // unlikely

    loc_0x80323468: // orphan
         bltzl t0, 0x803367b8     // unlikely
         bltzl s0, 0x803367cc     // unlikely

    loc_0x8032346c: // orphan
         bltzl s0, 0x803367cc     // unlikely
         bltzl t0, 0x80336860     // unlikely

    loc_0x80323474: // orphan
         bltzl s0, 0x80336874     // unlikely
         bltzl t0, 0x803368e8     // unlikely

    loc_0x80323478: // orphan
         bltzl t0, 0x803368e8     // unlikely
         bltzl s0, 0x8033691c     // unlikely

    loc_0x80323480: // orphan
         bltzl t0, 0x80336990     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321c4c
         bltzl s0, 0x803369a4     // unlikely

    loc_0x80323484: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321c4c
         bltzl s0, 0x803369a4     // unlikely
         bltzl t0, 0x80336a18     // unlikely

    loc_0x8032348c: // orphan
         bltzl s0, 0x80336a4c     // fcn.80339030-0x25e4 // unlikely
         bltzl t0, 0x80336ac0     // unlikely

    loc_0x80323490: // orphan
         bltzl t0, 0x80336ac0     // unlikely
         bltzl s0, 0x80336ad4     // fcn.80339168-0x2694 // unlikely

    loc_0x80323498: // orphan
         bltzl t0, 0x80336b48     // unlikely
         bltzl s0, 0x80336b7c     // unlikely

    loc_0x8032349c: // orphan
         bltzl s0, 0x80336b7c     // unlikely
         bltzl t0, 0x80336c00     // unlikely

    loc_0x803234a4: // orphan
         bltzl s0, 0x80336c14     // unlikely
         bltzl t0, 0x80336ca8     // unlikely

    loc_0x803234a8: // orphan
         bltzl t0, 0x80336ca8     // unlikely
         bltzl s0, 0x80336cbc     // unlikely

    loc_0x803234b0: // orphan
         bltzl t0, 0x80336d30     // unlikely
         bltzl s0, 0x80336d64     // unlikely

    loc_0x803234b4: // orphan
         bltzl s0, 0x80336d64     // unlikely
         bltzl t0, 0x80336dd8     // fcn.80339168-0x2390 // unlikely

    loc_0x803234cc: // orphan
         bltzl t0, 0x80336f90     // fcn.80339168-0x21d8 // unlikely

    loc_0x803234d8: // orphan
         bltzl s0, 0x8033705c     // fcn.80339168-0x210c // unlikely

    loc_0x803234e4: // orphan
         bltzl t0, 0x80337118     // fcn.80339168-0x2050 // unlikely

    loc_0x803234fc: // orphan
         bltzl t0, 0x80337270     // fcn.80339168-0x1ef8 // unlikely

    loc_0x80323508: // orphan
         bltzl s0, 0x803372ec     // unlikely

    loc_0x80323514: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321c50
         bltzl t0, 0x80337348     // fcn.80339168-0x1e20 // unlikely
         bltzl s0, 0x8033737c     // fcn.80339168-0x1dec // unlikely

    loc_0x80323520: // orphan
         bltzl s0, 0x80337404     // fcn.80339168-0x1d64 // unlikely
         bltzl t0, 0x80337418     // fcn.80339168-0x1d50 // unlikely

    loc_0x8032352c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321c54
         bltzl s0, 0x8033746c     // fcn.80339030-0x1bc4 // unlikely
         bltzl t0, 0x80337430     // unlikely

    loc_0x80323530: // orphan
         bltzl t0, 0x80337430     // unlikely
         bltzl s0, 0x803374b4     // fcn.80339168-0x1cb4 // unlikely

    loc_0x80323538: // orphan
         bltzl t0, 0x803374c8     // fcn.80339030-0x1b68 // unlikely
         bltzl s0, 0x803374fc     // unlikely

    loc_0x8032353c: // orphan
         bltzl s0, 0x803374fc     // unlikely
         bltzl t0, 0x80337570     // fcn.80339168-0x1bf8 // unlikely

    loc_0x80323544: // orphan
         bltzl s0, 0x80337584     // unlikely
         v0 = halfword [0 + 0x5034]

    loc_0x80323940: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321c6c
         bltzl s0, 0x80339b54     // unlikely
         bltzl t0, 0x80339b78     // unlikely

    loc_0x8032394c: // orphan
         bltzl t0, 0x80339bb0     // fcn.80339168+0xa48 // unlikely
         bltzl s0, 0x80339bd4     // unlikely

    loc_0x80323958: // orphan
         bltzl t0, 0x80339c5c     // fcn.80338964+0x12f8 // unlikely
         bltzl s0, 0x80339c80     // unlikely

    loc_0x80323964: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321c70
         bltzl s0, 0x80339cd8     // fcn.80339168+0xb70 // unlikely
         // CALL XREF from fcn.81da60ec @ +0x4ec
         bltzl t0, 0x80339cfc     // unlikely

    loc_0x80323970: // orphan
         bltzl 0, 0x80339d34      // fcn.80338964+0x13d0 // unlikely
         bltzl t0, 0x80339de8     // unlikely

    loc_0x8032397c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321c78
         bltzl t0, 0x80339e00     // fcn.80338964+0x149c // unlikely
         bltzl s0, 0x80339e14     // unlikely

    loc_0x80323988: // orphan
         bltzl s0, 0x80339dbc     // fcn.80338964+0x1458 // unlikely
         bltzl t0, 0x80339e70     // unlikely

    loc_0x80323994: // orphan
         bltzl t0, 0x80339eb8     // fcn.80339168+0xd50 // unlikely
         bltzl s0, 0x80339ecc     // unlikely

    loc_0x803239a0: // orphan
         bltzl s0, 0x80339f04     // fcn.80339168+0xd9c // unlikely
         bltzl 0, 0x80339f18      // fcn.8031c6d4+0x1d844 // unlikely

    loc_0x80323cd4: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321cb0
         tge s0, v0, 0x1a8
         tge s0, v0, 0x1c4

    loc_0x80323e5c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321cc8
         teq s0, v0, 0x223

    loc_0x80323e98: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321cd4
         tge s0, v0, 0x224
         teq s0, v0, 0x224

    loc_0x80323fe4: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321d00
         syscall                  // 255 = unknown ()

    loc_0x80324dd0: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321dac
         ret                      // ra
         

    loc_0x8032707c: // orphan
         v1 += 8
         // CODE XREF from fcn.80322040 @ 0x8032204c
         if                       // fcn.80327070-0x14 // likely
         halfword [v1 - 8] = v0

    loc_0x80329f7c: // orphan
         // CODE XREF from fcn.80339030 @ 0x803223e8
         
         v1 = 0x8ab1 << 16
         v1 += 0x1d0c
         t6 = [v1 + 0]            // t9
         a0 = 0 - 1               // s2
         // CODE XREF from fcn.80322320 @ +0xcc
         v0 = 0 + 2
         byte [t6 + 0x16] = a0
         // CODE XREF from fcn.80339030 @ 0x803223e4
         t7 = [v1 + 0]            // t9
         a1 = 0 + 0xa
         byte [t7 + 4] = a0
         t8 = [v1 + 0]            // t9
         byte [t8 + 5] = a0

    loc_0x80329fac: // orphan
         // CODE XREF from fcn.80339030 @ 0x80329fdc
         // CODE XREF from fcn.80339168 @ 0x80339968
         t9 = [v1 + 0]
         t0 = t9 + v0
         byte [t0 + 4] = a0
         t1 = [v1 + 0]
         t2 = t1 + v0
         byte [t2 + 5] = a0
         t3 = [v1 + 0]
         t4 = t3 + v0
         byte [t4 + 6] = a0
         t5 = [v1 + 0]
         // CODE XREF from fcn.80339030 @ 0x803223f0
         t6 = t5 + v0
         v0 += 4
         if                       // likely
         byte [t6 + 7] = a0

    loc_0x80329fe4: // orphan
         ret                      // ra
         

    loc_0x80329ff8: // orphan
         // CODE XREF from fcn.80339030 @ 0x803223f4
         at = 0 + 1               // lo
         if                       // unlikely
         t0 = 0x8ab1 << 16

    loc_0x8032a004: // orphan
         goto 0x8032a0f8          // fcn.8032a070+0x88
         ra = [sp + 0x1c]

    loc_0x8032a03c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80329ffc
         t0 = [t0 + 0x6958]       // t9
         at = 0 + 8               // a2

    loc_0x8032a124: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322400
         a1 = 0 + 0x250
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x250, 0x8, -1)
         a0 = 0 + 0xe0
         s1 = v0                  // s4
         a0 = v0                  // s4
         call 0x8004dcfc          // 0x8004dcfc(0xff, 0x250, 0x8, -1)

    loc_0x8032b954: // orphan
         call 0x8ab0699c          // 0x8ab0699c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x80339b00
         a0 = 0
         s0 = v0                  // s4

    loc_0x8032b9b0: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339b0c
         t8 = t7 | 1              // lo
         call 0x8ab04ae4          // 0x8ab04ae4(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v0 + 2] = t8
         a0 = 0x8ab1 << 16
         a0 += 0x26a8

    loc_0x8032bc1c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339b18
         if                       // fcn.80339168-0xd538 // likely
         

    loc_0x8032bc24: // orphan
         t2 = [v0 + 0]
         v1 = 0 - 1               // s2

    loc_0x8032bc68: // orphan
         at = 0 - 1               // s2
         if                       // likely
         // CODE XREF from fcn.80339030 @ 0x80339b24
         at = 0x8000 << 16

    loc_0x8032bff4: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339b60
         a0 += 0x26a8
         a1 = 0 + 0x100
         a2 = 0 + 0x39
         call 0x8004c8a0          // 0x8004c8a0(0x1000026a7, 0x100, 0x39, -1)
         a3 = 0 + 9
         // CODE XREF from fcn.8031c6d4 @ 0x803225a4
         call 0x80021ed8          // 0x80021ed8(0x1000026a7, 0x100, 0x39, 0x9)
         a0 = 0 + 0x4a
         t7 = 0x8ab1 << 16
         t7 = [t7 + 0x1d0c]       // t9
         at = 0 + 1               // lo

    loc_0x8032c01c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339b68
         a0 = 0 + 3
         // CODE XREF from fcn.80339168 @ 0x803225ac
         v0 = , unsigned  halfword [t7 + 0]
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x80339b64
         // CALL XREF from fcn.80759178 @ +0xce8
         // CALL XREF from fcn.81140ae8 @ +0x6d8
         // CALL XREF from fcn.81163e30 @ +0x3a0
         at = 0 + 2

    loc_0x8032c02c: // orphan
         if                       // unlikely
         a0 = 0 + 4               // arg1

    loc_0x8032c048: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x8032c1a4          // fcn.8032c034+0x170
         ra = [sp + 0x14]

    loc_0x8032c058: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x8032c1a4          // fcn.8032c034+0x170
         // CODE XREF from fcn.80339168 @ 0x80339b70
         ra = [sp + 0x14]

    loc_0x8032d050: // orphan
         // CODE XREF from fcn.80339030 @ 0x8032270c
         call 0x8ab0a2d8          // 0x8ab0a2d8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         a1 = v0                  // s4

    loc_0x8032d09c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322718
         [sp + 0x14] = ra
         a0 = 0x8ab1 << 16
         call 0x800503a4          // 0x800503a4(0x8ab10000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6a40]       // t9
         t6 = [sp + 0x18]         // " " s0
         t7 = t6 - 0x13
         // CODE XREF from fcn.80339030 @ 0x80322720
         at = , unsigned  , t7 < 0xf
         if                       // likely
         t7 <<= 2

    loc_0x8032d194: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322750
         call 0x8ab0a2d8          // 0x8ab0a2d8(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339030 @ 0x80322724
         a0 = 0 + 2
         goto 0x8032d1c0          // fcn.80339168-0xbfa8
         ra = [sp + 0x14]

    loc_0x8032d21c: // orphan
         call 0x8ab04ae4          // 0x8ab04ae4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         goto 0x8032d23c
         // CODE XREF from fcn.80339168 @ 0x80322768
         // CODE XREF from fcn.80338964 @ 0x80339ce8
         v1 = [sp + 0x1c]

    loc_0x8032d32c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322798
         v0 = [sp + 0x1c]         // v1

    loc_0x8032d378: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322744
         a3 = 0 + 3

    loc_0x8032d450: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032275c
         t4 = [t4 + 0x7200]       // t9
         v0 = , unsigned  halfword [t4 + 8]

    loc_0x8032d83c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339d78
         ra = [sp + 0x14]
         call 0x8ab09a28          // 0x8ab09a28(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         // CODE XREF from fcn.80322400 @ +0x3f4
         goto 0x8032d860
         // CODE XREF from fcn.80339168 @ 0x803227c8
         [sp + 0x18] = v0

    loc_0x8032d880: // orphan
         // CODE XREF from fcn.80339030 @ 0x803227fc
         [sp + 0x14] = ra
         a0 = 0x8ab1 << 16
         a0 += 0x6a60
         a1 = 0 + 0x100
         a3 = , unsigned  halfword [v0 + 0x32]
         call 0x8004c8a0          // 0x8004c8a0(0x8ab16a60, 0x100, 0x8, 0xffff)
         // CODE XREF from fcn.80339030 @ 0x80322804
         a2 = , unsigned  halfword [v0 + 0x30]
         a1 = 0x8ab1 << 16
         a1 = halfword [a1 + 0x6ccc]
         v1 = 0x8ab1 << 16
         v1 += 0x6a60
         if                       // fcn.80339168-0xb858 // unlikely
         a0 = 0

    loc_0x8032d8b4: // orphan
         a2 = 0 + 0xa
         v0 = , unsigned  byte [v1 + 0]

    loc_0x8032db0c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322808
         a0 = , signed  a0 >> 0x10 // t9

    loc_0x8032dd04: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322840
         a0 = s0 << 0x10
         call 0x8ab01454          // 0x8ab01454(0x1040000, 0x442f71dcfe116408, 0x8, -1)
         a0 = , signed  a0 >> 0x10 // " " s0
         call 0x8ab09418          // 0x8ab09418(0x104, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80338964 @ 0x80339e00
         a0 = s2
         t4 = 0x8ab1 << 16
         t4 += 0x6c20
         t3 = s1 << 2
         s0 = t3 + t4

    loc_0x8032dd28: // orphan
         // CODE XREF from fcn.80338964 @ 0x80339e04
         v0 = [s0 + 0]
         t7 = 0 + 6
         t5 = , unsigned  halfword [v0 + 2]
         t6 = t5 | 2
         halfword [v0 + 2] = t6

    loc_0x8032dd3c: // orphan
         // CODE XREF from fcn.80338964 @ 0x80339e08
         t8 = [s0 + 0]
         halfword [t8 + 0x26] = t7

    loc_0x8032dd44: // orphan
         // CODE XREF from fcn.80338964 @ 0x8032dcec
         t9 = 0 + 4
         halfword [s2 + 6] = t9
         v0 = [s3 + 8]            // t9
         // CODE XREF from fcn.80338964 @ 0x80339e0c
         t2 = s1 + 6
         a0 = 0x8ab1 << 16
         // CODE XREF from fcn.80322400 @ +0x444
         t0 = , unsigned  halfword [v0 + 2]
         a1 = 0xffff << 16
         a1 |= 0xff

    loc_0x8032dd64: // orphan
         // CODE XREF from fcn.80338964 @ 0x80339e10
         t1 = t0 | 2
         halfword [v0 + 2] = t1
         // CODE XREF from fcn.80339030 @ 0x80322848
         t3 = [s3 + 8]            // t9
         halfword [t3 + 0x26] = t2
         call 0x8ab00b98          // 0x8ab00b98(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339030 @ 0x80339e14
         a0 = [a0 + 0x2670]       // t9
         goto 0x8032de6c          // fcn.80339168-0xb2fc
         // CODE XREF from fcn.80339030 @ 0x8032284c
         t0 = [s2 + 0xc]          // t9

    loc_0x8032dd80: // orphan
         // CODE XREF from fcn.80338964 @ 0x80339e10
         t1 = t0 | 2
         halfword [v0 + 2] = t1
         // CODE XREF from fcn.80339030 @ 0x80322848
         t3 = [s3 + 8]            // t9
         halfword [t3 + 0x26] = t2
         call 0x8ab00b98          // 0x8ab00b98(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339030 @ 0x80339e14
         a0 = [a0 + 0x2670]       // t9
         goto 0x8032de6c          // fcn.80339168-0xb2fc
         // CODE XREF from fcn.80339030 @ 0x8032284c
         t0 = [s2 + 0xc]          // t9

    loc_0x8032dd8c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339e18
         t5 = , unsigned  halfword [t4 + 2]
         t6 = t5 & 2
         bnel t6, 0, 0x8032de6c   // fcn.80339168-0xb2fc // likely
         // CODE XREF from fcn.80339030 @ 0x80322854
         t0 = [s2 + 0xc]          // t9

    loc_0x8032dfe8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339e74
         call 0x8ab02438          // 0x8ab02438(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = 0 + 1               // lo
         // CODE XREF from fcn.80322400 @ +0x470
         s1 = 0x8ab1 << 16
         at = 0x8ab1 << 16
         s1 += 0x6cce
         // CODE XREF from fcn.80338964 @ 0x803228cc
         halfword [at + 0x6ccc] = s0
         a0 = 0x8ab1 << 16
         halfword [s1 + 0] = 0
         // CODE XREF from fcn.803393f0 @ +0xa88
         a0 += 0x6a60
         call 0x80075630          // 0x80075630(0x8ab16a60, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x100
         v0 = 0x8ab1 << 16
         v0 = [v0 + 0x6a58]       // t9
         v1 = 0x8ab1 << 16
         t7 = , unsigned  halfword [v0 + 2]
         t8 = t7 | 1
         halfword [v0 + 2] = t8
         v1 = [v1 + 0x1d00]       // t9
         t9 = , unsigned  halfword [v1 + 2]
         t0 = t9 & 0xfffe

    loc_0x8032e0cc: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322888
         
         s1 = 0x8ab1 << 16
         s1 += 0x6cce
         t3 = halfword [s1 + 0]
         if                       // likely
         

    loc_0x8032e15c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322898
         // CODE XREF from fcn.803393f0 @ +0xa98
         t6 = 0 + 0x1a
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x18] = t6

    loc_0x8032e16c: // orphan
         at = 0 + 1               // lo
         // CODE XREFS from fcn.80339030 @ 0xa9c, 0x80339ecc
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x80339e80
         at = 0 + 2

    loc_0x8032e178: // orphan
         beql a0, at, 0x8032e33c  // fcn.80339168-0xae2c // unlikely
         ra = [sp + 0x14]

    loc_0x8032e180: // orphan
         goto 0x8032e33c          // fcn.80339168-0xae2c
         ra = [sp + 0x14]

    loc_0x8032e188: // orphan
         // CODE XREF from fcn.803393f0 @ +0xa94
         t7 = 0 + 0x14
         at = 0x8ab1 << 16
         halfword [at + 0x269c] = t7
         at = 0x8ab1 << 16
         goto 0x8032e338          // fcn.80339168-0xae30
         [at + 0x6cd4] = 0

    loc_0x8032e1a0: // orphan
         call 0x8ab01728          // 0x8ab01728(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339030 @ 0x803228a0
         
         call 0x8ab09428          // 0x8ab09428(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t8 = 0x8ab1 << 16
         t8 = [t8 + 0x6cd4]
         if                       // likely
         // CODE XREF from fcn.80339168 @ 0x80339e90
         t9 = , signed  v0 >> 2

    loc_0x8032e1c8: // orphan
         at = v0 + 3
         t9 = , signed  at >> 2

    loc_0x8032e1d0: // orphan
         div 0, t8, t9
         t0 = hi
         v0 = 0x8ab1 << 16
         if                       // likely
         

    loc_0x8032e1e4: // orphan
         break 7

    loc_0x8032e1e8: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339e94
         at = 0 - 1               // s2

    loc_0x8032ed18: // orphan
         // CODE XREF from fcn.80339030 @ 0x803229e4
         t3 = , unsigned  halfword [t2 + 2]
         t4 = t3 & 0xfffd
         halfword [t2 + 2] = t4
         t5 = [t5 + 0x6ca0]       // t9
         t6 = , unsigned  halfword [t5 + 2]
         t7 = t6 & 0xfffd

    loc_0x8032ef18: // orphan
         t7 = 0x8ab1 << 16
         t7 = [t7 + 0x1d0c]       // t9
         a0 = s2
         a1 = 0 + 0x94            // arg2
         t8 = , unsigned  byte [t7 + 0xe] // s4
         srav s0, t8, s1
         call 0x80075630          // 0x80075630(-1, 0x94, 0x8, -1)
         s0 &= 0xff
         v1 = 0x8ab1 << 16
         t9 = s0 & 1
         if                       // likely
         v1 += 0x2690

    loc_0x8032ef5c: // orphan
         // CODE XREF from fcn.80339030 @ 0x803229d8
         s1 += 1
         at = , s1 < 4
         if                       // unlikely
         s2 += 0x94

    loc_0x8032ef6c: // orphan
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe1
         s1 = v0                  // s4
         a0 = v0                  // s4
         call 0x8004dcfc          // 0x8004dcfc(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x80002b24          // 0x80002b24(0xff, 0x0, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x0, 0x8, -1)
         a1 = 0
         s0 = v0                  // s4
         a0 = v0                  // s4
         call 0x8004eb58          // 0x8004eb58(0xff, 0x0, 0x8, -1)

    loc_0x8032efa4: // orphan
         // CODE XREF from fcn.80339030 @ 0x803229e0
         a1 = s1

    loc_0x8032efa8: // orphan
         s3 = 0x8ab1 << 16
         s3 += 0x6cf0
         a1 = 0x8ab1 << 16
         [s3 + 0] = v0
         a1 += 0x12a4
         call 0x80040e80          // 0x80040e80(-1, 0x8ab112a4, 0x8, -1)
         a0 = s0                  // " "
         at = 0x8ab1 << 16
         [at + 0x6f78] = v0
         call 0x80003120          // 0x80003120(0x104, 0x8ab112a4, 0x8, -1)
         a0 = s0                  // " "
         // CODE XREF from fcn.80338964 @ 0x80339f90
         call 0x8ac06e98          // 0x8ac06e98(0x104, 0x8ab112a4, 0x8, -1)
         a0 = [s3 + 0]            // s4
         v0 = [s3 + 0]            // s4
         a1 = 0x706c << 16
         a1 |= 0x6931
         t9 = , unsigned  halfword [v0 + 2]
         // CODE XREF from fcn.80339168 @ 0x803229e8
         t6 = t9 | 1
         halfword [v0 + 2] = t6
         v0 = [s3 + 0]            // s4
         t7 = , unsigned  halfword [v0 + 2]
         t8 = t7 | 2
         halfword [v0 + 2] = t8
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x706c6931, 0x8, -1)
         a0 = [s3 + 0]            // s4
         s4 = 0x8ab1 << 16
         s4 += 0x6cf8

    loc_0x8032f014: // orphan
         a1 = 0x706c << 16

    loc_0x8032f860: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322aac
         call 0x8ab0c414          // 0x8ab0c414(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x8032f8ec          // fcn.80339168-0x987c
         a1 = v0                  // s4

    loc_0x803312c0: // orphan
         t0 += 0x6f96
         halfword [t0 + 0] = 0
         v0 = 0x8ab1 << 16

    loc_0x80331614: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322d90
         [sp + 0x14] = ra
         if                       // fcn.80331634 // unlikely
         [sp + 0x1c] = t6

    loc_0x80331620: // orphan
         at = 0 + 1               // lo
         // CODE XREF from fcn.80339ffc @ +0x234
         if                       // unlikely
         t3 = 0x8ab1 << 16

    loc_0x8033162c: // orphan
         goto 0x8033177c          // fcn.80339168-0x79ec
         ra = [sp + 0x14]

    loc_0x803316d0: // orphan
         t3 = halfword [t3 + 0x6f9c]

    loc_0x803317b8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322da4
         t8 = halfword [t8 + 0x3f2c]
         t7 = 0x8ab1 << 16
         // CODE XREF from fcn.80339168 @ 0x8033a25c
         t7 = [t7 + 0x1d0c]       // t9
         t9 = t8 << 3
         t9 += t8
         t9 <<= 2
         t9 += t8
         a0 = , unsigned  byte [t7 + 2] // s4
         // CODE XREF from fcn.80339ffc @ +0x268
         t9 <<= 2
         a1 = 0x8ab1 << 16
         a1 += t9

    loc_0x8033258c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322ec8
         call 0x8ab0e2ec          // 0x8ab0e2ec(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x8033a39c
         a0 = 0 + 1               // arg1 // lo

    loc_0x8033281c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322f08
         ra = [sp + 0x14]
         // CODE XREF from fcn.80331970 @ +0xe94
         at = 0x8ab1 << 16
         goto 0x80332858
         halfword [at + 0x723a] = 0

    loc_0x80332848: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322f14
         t7 = halfword [t7 + 0x723a]
         at = 0x8ab1 << 16
         t8 = t7 + 1
         halfword [at + 0x723a] = t8

    loc_0x80332858: // orphan
         // CODE XREF from fcn.80339030 @ 0x80332824
         ra = [sp + 0x14]
         // CODE XREF from fcn.80331970 @ +0xea8
         sp += 0x18
         v0 = 0 + 0x24

    loc_0x803328d4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322f20
         t6 = 0 + 0x25
         [sp + 0x14] = ra
         // CODE XREF from fcn.80339168 @ 0x8033a3c8
         if                       // fcn.80339168-0x6870 // unlikely
         [sp + 0x18] = t6

    loc_0x803328e4: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a1 = 0x8ab1 << 16

    loc_0x803328f0: // orphan
         goto 0x80332a2c          // fcn.80339168-0x673c
         ra = [sp + 0x14]

    loc_0x803329b8: // orphan
         // CODE XREF from fcn.80339030 @ 0x803328e8
         a0 = 0x8ab1 << 16
         a0 += 0x7110
         call 0x8ac063ac          // 0x8ac063ac(0x8ab17110, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [a1 + 0x268e]
         t2 = 0x8ab1 << 16
         t2 = halfword [t2 + 0x723c]
         a2 = 0x8ab1 << 16
         a2 += 0x2668
         at = , t2 < 0x1f
         if                       // fcn.80339168-0x6754 // unlikely
         

    loc_0x803329e4: // orphan
         v1 = [a2 + 0]            // t9
         a0 = 0

    loc_0x80332a40: // orphan
         // CODE XREF from fcn.80339030 @ 0x80322f4c
         t6 = 0 + 0x26
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x1c] = t6

    loc_0x80332a50: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x80332a5c: // orphan
         if                       // unlikely
         

    loc_0x80332a64: // orphan
         goto 0x80332bf4          // fcn.80339168-0x6574
         ra = [sp + 0x14]

    loc_0x80332a6c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80332a48
         v0 = 0x8ab1 << 16
         v0 = [v0 + 0x7220]       // t9
         // CODE XREF from fcn.80339168 @ 0x8033a3e0
         t0 = 0 + 0xf0
         // CODE XREF from fcn.80339168 @ 0x80322f54
         t7 = halfword [v0 + 8]
         t9 = halfword [v0 + 0xa]
         t8 = t7 - 0x140
         t1 = t0 - t9
         mtc1 t1, f6

    loc_0x80332b20: // orphan
         // CODE XREF from fcn.80339030 @ 0x80332a54
         call 0x87f006bc          // 0x87f006bc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87f006ac          // 0x87f006ac(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x80322f68
         
         v1 = v0 << 0x10
         v1 = , signed  v1 >> 0x10 // s4
         at = 0 + 1               // lo
         if                       // unlikely
         // CODE XREFS from fcn.80339168 @ 0x80322f6c, 0x8033a3ec
         a0 = 0 + 0x64            // arg1

    loc_0x80332b60: // orphan
         // CODE XREF from fcn.80339030 @ 0x80332b3c
         v1 = 0x8ab1 << 16
         v1 += 0x7188
         a1 = halfword [v1 + 0]
         call 0x8ab00ba4          // 0x8ab00ba4(-1, 0xffff, 0x8, -1)
         a2 = 0
         // CODE XREF from fcn.80322c00 @ +0x370
         v1 = 0x8ab1 << 16
         v1 += 0x7188
         t6 = halfword [v1 + 0]
         t7 = t6 - 1

    loc_0x80332be4: // orphan
         // CODE XREF from fcn.80339030 @ 0x80332a5c
         a0 = 0x8ab1 << 16
         call 0x8003c6b8          // 0x8003c6b8(0x8ab10000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x7234]       // t9

    loc_0x80335fb4: // orphan
         // CODE XREF from fcn.80339168 @ 0x803233e0
         lwl s0, -0x75b0, s5      // t9
         lwl s0, -0x75a0, s5      // t9
         lwl s0, -0x7590, s5      // t9
         lwl s0, -0x7580, s5      // t9
         lwl s0, -0x74ac, s5      // t9
         lwl s0, -0x749c, s5      // t9
         lwl s0, -0x748c, s5      // t9
         lwl s0, -0x747c, s5      // t9
         lwl s0, -0x746c, s5      // t9
         lwl s0, -0x745c, s5      // t9

    loc_0x80335fdc: // orphan
         lwl s0, -0x744c, s5      // t9
         lwl s0, -0x743c, s5      // t9
         lwl s0, -0x742c, s5      // t9
         lwl s0, -0x740c, s5      // t9
         lwl s0, -0x741c, s5      // t9
         lwl s0, -0x73fc, s5      // t9
         lwl s0, -0x73ec, s5      // t9

    loc_0x80336040: // orphan
         // CODE XREF from fcn.80339168 @ 0x803233ec
         lwl s0, -0x4bcc, s5      // t9
         lwl s0, -0x4bbc, s5      // t9
         lwl s0, -0x4bac, s5      // t9
         lwl s0, -0x4b9c, s5      // t9
         lwl s0, -0x4b8c, s5      // t9

    loc_0x80336154: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323410
         ldl t1, 0x5f66, k1       // s2
         ldr a3, 0x203d, v1
         a1 = at + 0x6420
         t7 = v1 + 0x7465
         jalx 0x81d5ada4          // 0x81d5ada4(-1, 0x6421, 0x8, -1)

    loc_0x80336230: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032341c
         lwl s0, -0x154, s5       // t9
         lwl s0, -0x134, s5       // t9
         lwl s0, -0x144, s5       // t9
         lwl s0, -0x124, s5       // t9
         lwl s0, -0x108, s5       // t9

    loc_0x80336368: // orphan
         if                       // unlikely

    loc_0x80336380: // orphan
         if                       // unlikely

    loc_0x8033638c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033a768
         if                       // unlikely

    loc_0x80336398: // orphan
         if                       // fcn.8031c6d4+0x1a7a8 // unlikely

    loc_0x803363a4: // orphan
         if                       // fcn.80339168-0x2140 // unlikely

    loc_0x803364d4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323440
         if                       // fcn.8031c6d4+0x1b8e4 // unlikely
         if                       // fcn.80339168-0x119c // unlikely

    loc_0x803364e0: // orphan
         if                       // fcn.80339168-0x1164 // unlikely
         if                       // unlikely

    loc_0x803364ec: // orphan
         if                       // fcn.80339168-0x1118 // unlikely
         if                       // unlikely

    loc_0x803364f8: // orphan
         if                       // fcn.80339168-0x10ac // unlikely
         if                       // fcn.80339168-0x1098 // unlikely

    loc_0x80336504: // orphan
         if                       // fcn.80339168-0x1080 // unlikely
         if                       // unlikely

    loc_0x80336510: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033651c: // orphan
         if                       // fcn.80339168-0xfb8 // unlikely
         if                       // fcn.80339168-0xfa4 // unlikely

    loc_0x80336860: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x8032346c
         if                       // unlikely

    loc_0x8033691c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x80323478
         if                       // unlikely

    loc_0x80336928: // orphan
         if                       // fcn.8033ff6c+0xc // unlikely
         if                       // unlikely

    loc_0x80336940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336980: // orphan
         if                       // fcn.80339168+0x78fc // unlikely

    loc_0x8033698c: // orphan
         if                       // fcn.80339168+0x7918 // unlikely

    loc_0x80336998: // orphan
         if                       // fcn.80339168+0x7944 // unlikely

    loc_0x803369a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803369ac: // orphan
         if                       // fcn.80339030+0x81cc // unlikely
         if                       // unlikely

    loc_0x803369b0: // orphan
         if                       // fcn.80339168+0x82cc // unlikely

    loc_0x803369b8: // orphan
         if                       // fcn.80341438+0xa0 // unlikely
         if                       // unlikely

    loc_0x803369bc: // orphan
         // CODE XREF from fcn.80339ffc @ +0x80c
         if                       // unlikely

    loc_0x803369dc: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a804
         if                       // fcn.80339030+0x891c // unlikely
         if                       // unlikely

    loc_0x803369e0: // orphan
         if                       // unlikely

    loc_0x803369e8: // orphan
         if                       // fcn.80339030+0x8978 // unlikely
         if                       // unlikely

    loc_0x803369ec: // orphan
         if                       // fcn.80339168+0x8888 // unlikely

    loc_0x803369f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803369f8: // orphan
         if                       // fcn.80339168+0x8914 // unlikely

    loc_0x80336a0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336a10: // orphan
         if                       // fcn.80339168+0x8aac // unlikely

    loc_0x80336a18: // orphan
         if                       // fcn.80341c28 // unlikely
         // CODE XREF from fcn.80339030 @ 0x80323484
         if                       // unlikely

    loc_0x80336a1c: // orphan
         if                       // unlikely

    loc_0x80336a24: // orphan
         if                       // fcn.80339030+0x8c84 // unlikely
         if                       // unlikely

    loc_0x80336a28: // orphan
         if                       // unlikely

    loc_0x80336a30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336a3c: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a814
         if                       // unlikely
         if                       // unlikely

    loc_0x80336a48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336a4c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x80323488
         if                       // fcn.80339168+0x8e18 // unlikely

    loc_0x80336a54: // orphan
         if                       // fcn.80339168+0x8e70 // unlikely
         if                       // fcn.80339168+0x8e54 // unlikely

    loc_0x80336a58: // orphan
         if                       // fcn.80339168+0x8e70 // unlikely
         if                       // fcn.80339168+0x8e54 // unlikely

    loc_0x80336a60: // orphan
         if                       // fcn.80339168+0x8eac // unlikely
         if                       // fcn.80342048+0x10 // unlikely

    loc_0x80336a64: // orphan
         if                       // fcn.80339168+0x8eac // unlikely
         if                       // fcn.80342048+0x10 // unlikely

    loc_0x80336a6c: // orphan
         if                       // fcn.80342048+0x8 // unlikely
         if                       // fcn.80339168+0x8f2c // unlikely

    loc_0x80336a70: // orphan
         if                       // fcn.80342048+0x8 // unlikely
         if                       // fcn.80339168+0x8f2c // unlikely

    loc_0x80336adc: // orphan
         if                       // fcn.8034244c+0x40 // unlikely
         if                       // unlikely

    loc_0x80336ae0: // orphan
         if                       // fcn.80339168+0x937c // unlikely

    loc_0x80336ae8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336aec: // orphan
         if                       // fcn.80339168+0x9448 // unlikely

    loc_0x80336af4: // orphan
         if                       // fcn.80339168+0x94b0 // unlikely
         if                       // fcn.80339168+0x94c4 // unlikely

    loc_0x80336b00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b30: // orphan
         if                       // fcn.8031c6d4+0x2623c // unlikely
         if                       // unlikely

    loc_0x80336be4: // orphan
         if                       // fcn.80343c24 // unlikely
         if                       // unlikely

    loc_0x80336bf0: // orphan
         if                       // fcn.80339168+0xaaec // unlikely
         if                       // unlikely

    loc_0x80336bfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336c00: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x8032349c
         if                       // unlikely

    loc_0x80336c08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336c0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336c14: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a82c
         if                       // fcn.80339030+0xae24 // unlikely
         // CODE XREF from fcn.80339168 @ 0x803234a0
         if                       // unlikely

    loc_0x80336cbc: // orphan
         // CODE XREF from fcn.80339030 @ 0x803234a8
         if                       // fcn.803547f0-0xffc0 // unlikely

    loc_0x80336d94: // orphan
         if                       // fcn.80339030+0xc284 // unlikely
         if                       // unlikely

    loc_0x80336d98: // orphan
         if                       // fcn.80339168+0xc1a4 // unlikely

    loc_0x80336da0: // orphan
         if                       // fcn.80339030+0xc2f0 // unlikely
         if                       // unlikely

    loc_0x80336da4: // orphan
         if                       // unlikely
         

    loc_0x80336dd4: // orphan
         if                       // unlikely

    loc_0x80336de0: // orphan
         if                       // fcn.803547f0-0xf1cc // unlikely

    loc_0x80336dec: // orphan
         // CODE XREF from fcn.80339168 @ 0x803234b8
         if                       // unlikely
         if                       // fcn.80339168+0xc56c // unlikely

    loc_0x80336e70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f30: // orphan
         

    loc_0x80336fc4: // orphan
         // CODE XREF from fcn.80339168 @ 0x803234d0
         if                       // fcn.80339168+0xe150 // unlikely

    loc_0x803370f0: // orphan
         // CODE XREF from fcn.80339168 @ 0x803234dc
         

    loc_0x8033713c: // orphan
         if                       // fcn.80348700 // unlikely

    loc_0x80337148: // orphan
         

    loc_0x8033716c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x803234e8
         if                       // unlikely

    loc_0x803371c8: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a884
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x803234f4
         if                       // unlikely

    loc_0x80337284: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323500
         
         if                       // fcn.80339168+0x10344 // unlikely
         if                       // unlikely

    loc_0x80337294: // orphan
         if                       // unlikely

    loc_0x803372b8: // orphan
         if                       // fcn.80339168+0x103f4 // unlikely
         

    loc_0x80337424: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033746c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323528
         if                       // fcn.80339168+0x11f28 // unlikely

    loc_0x803374c8: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323534
         if                       // fcn.8031c6d4+0x2eed8 // unlikely
         if                       // unlikely

    loc_0x803374e0: // orphan
         if                       // unlikely

    loc_0x803374ec: // orphan
         if                       // fcn.80339168+0x12628 // unlikely

    loc_0x803374f8: // orphan
         if                       // fcn.80339168+0x125a4 // unlikely

    loc_0x80337504: // orphan
         if                       // fcn.80339168+0x12700 // unlikely

    loc_0x8033751c: // orphan
         if                       // fcn.80339168+0x12848 // unlikely

    loc_0x80337528: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337534: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337540: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337590: // orphan
         

    loc_0x803375b4: // orphan
         if                       // unlikely
         if                       // fcn.8034c308-0x1c // unlikely

    loc_0x803375c0: // orphan
         if                       // fcn.8034c308-0x4 // unlikely
         if                       // fcn.8034c308+0x10 // unlikely

    loc_0x803375cc: // orphan
         
         // CODE XREF from fcn.80339ffc @ +0x8c0
         
         
         // CODE XREF from fcn.80339168 @ 0x8033a8b4
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803375f0: // orphan
         if                       // unlikely
         

    loc_0x8033761c: // orphan
         if                       // fcn.80339168+0x13a48 // unlikely

    loc_0x80337bf0: // orphan
         if                       // fcn.80339168+0x17fac // unlikely

    loc_0x80337c04: // orphan
         if                       // fcn.80339168+0x18100 // unlikely

    loc_0x80337c10: // orphan
         if                       // fcn.80339168+0x181cc // unlikely
         // CALL XREF from fcn.806db760 @ +0x544
         if                       // fcn.80339168+0x18210 // unlikely

    loc_0x80337c1c: // orphan
         if                       // fcn.803513fc+0x4 // unlikely
         if                       // fcn.803513fc+0x48 // unlikely

    loc_0x80337fd4: // orphan
         if                       // fcn.80339168+0x1b750 // unlikely
         if                       // unlikely

    loc_0x80337ffc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338008: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338014: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338018: // orphan
         if                       // unlikely

    loc_0x80338020: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338064: // orphan
         if                       // fcn.80339168+0x1bfa0 // unlikely

    loc_0x80338070: // orphan
         if                       // fcn.80339168+0x1bfdc // unlikely

    loc_0x8033807c: // orphan
         

    loc_0x803380fc: // orphan
         

    loc_0x8033811c: // orphan
         if                       // fcn.80339168+0x1c818 // unlikely

    loc_0x80338134: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x1c9e4 // unlikely

    loc_0x80338140: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033814c: // orphan
         if                       // fcn.80339168+0x1d108 // unlikely
         if                       // unlikely

    loc_0x80338158: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x1d388 // unlikely

    loc_0x80338164: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x80323684
         if                       // unlikely

    loc_0x80338170: // orphan
         if                       // fcn.80339168+0x1d46c // unlikely
         if                       // fcn.80339168+0x1d480 // unlikely

    loc_0x8033817c: // orphan
         if                       // fcn.80339168+0x1d4d8 // unlikely
         // CODE XREF from fcn.80323274 @ +0x418
         if                       // fcn.80339168+0x1d4ec // unlikely

    loc_0x80338188: // orphan
         if                       // fcn.80339168+0x1d584 // unlikely
         if                       // fcn.80356714+0x1c // unlikely

    loc_0x803382c4: // orphan
         

    loc_0x803382d8: // orphan
         if                       // unlikely
         

    loc_0x803386b0: // orphan
         if                       // fcn.8031c6d4-0x20f0 // unlikely

    loc_0x803386bc: // orphan
         if                       // fcn.80339168-0x1e998 // unlikely

    loc_0x803386c8: // orphan
         if                       // fcn.80339168-0x1eafc // unlikely

    loc_0x803386d4: // orphan
         // CODE XREF from fcn.803199d0 @ +0x110
         // CODE XREF from fcn.80338964 @ 0x80323720
         if                       // fcn.80339168-0x1e8c0 // unlikely

    loc_0x803386e0: // orphan
         if                       // unlikely

    loc_0x803386ec: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319ad8
         if                       // fcn.80339168-0x1e7e8 // unlikely

    loc_0x803386f8: // orphan
         // CODE XREF from fcn.80338964 @ 0x80323724
         if                       // fcn.80317ed0+0x2b0c // unlikely
         if                       // unlikely

    loc_0x80338704: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319adc
         if                       // fcn.80317ed0+0x2b64 // unlikely
         if                       // unlikely

    loc_0x8033874c: // orphan
         if                       // fcn.8031c438-0x15ec // unlikely
         // CODE XREF from fcn.80339030 @ 0x80319b08
         if                       // unlikely

    loc_0x80338758: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319af0
         if                       // unlikely
         if                       // unlikely

    loc_0x80338764: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319aec
         if                       // unlikely
         // CODE XREF from fcn.80338964 @ 0x80323730
         if                       // unlikely

    loc_0x80338770: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033877c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319af4
         if                       // unlikely
         

    loc_0x80338794: // orphan
         if                       // fcn.80339168-0x1dd30 // unlikely
         

    loc_0x8033879c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803387c0: // orphan
         // CODE XREF from fcn.80339168 @ 0x80319afc
         if                       // unlikely
         if                       // fcn.80339168-0x1da50 // unlikely

    loc_0x803387cc: // orphan
         if                       // fcn.80339168-0x1d9c8 // unlikely
         // CODE XREF from fcn.80338964 @ 0x8032373c
         if                       // fcn.80339168-0x1d984 // unlikely

    loc_0x803387d8: // orphan
         if                       // fcn.80338964-0x1d0f8 // unlikely
         if                       // unlikely

    loc_0x803387e4: // orphan
         if                       // unlikely
         

    loc_0x803387ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803387f8: // orphan
         if                       // fcn.80318030+0x3b5c // unlikely
         if                       // unlikely

    loc_0x80338804: // orphan
         if                       // fcn.80339168-0x1d510 // unlikely
         // CODE XREF from fcn.80339168 @ 0x8033aa34
         if                       // unlikely

    loc_0x80338810: // orphan
         if                       // fcn.80339168-0x1d4c4 // unlikely
         

    loc_0x80338a2c: // orphan
         if                       // fcn.80339168-0x1bb28 // unlikely
         if                       // unlikely

    loc_0x80338e8c: // orphan
         if                       // fcn.80339168-0x177c8 // unlikely
         if                       // fcn.80339168-0x177d4 // unlikely

    loc_0x80338e98: // orphan
         if                       // fcn.80339168-0x176fc // unlikely
         if                       // fcn.80339168-0x176c8 // unlikely

    loc_0x80338ea4: // orphan
         if                       // fcn.80339168-0x17640 // unlikely
         if                       // unlikely

    loc_0x80338eb0: // orphan
         if                       // fcn.8031c6d4+0x54d0 // unlikely
         if                       // unlikely

    loc_0x80338ebc: // orphan
         if                       // fcn.8031c6d4+0x554c // unlikely
         if                       // unlikely

    loc_0x80338ec8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x803237e8
         if                       // unlikely

    loc_0x80338ed4: // orphan
         if                       // fcn.8031c6d4+0x5664 // unlikely
         if                       // unlikely

    loc_0x80338ee0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338eec: // orphan
         if                       // fcn.8031c6d4+0x575c // unlikely
         // CODE XREF from fcn.80339168 @ 0x803237ec
         if                       // unlikely

    loc_0x80338ef8: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1c4
         if                       // fcn.80339168-0x1736c // unlikely
         if                       // fcn.80339168-0x17288 // unlikely

    loc_0x80338f04: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1c0
         if                       // fcn.8031c6d4+0x5864 // unlikely
         if                       // unlikely

    loc_0x80338f10: // orphan
         if                       // fcn.8031c6d4+0x5830 // unlikely
         if                       // fcn.80339168-0x17190 // unlikely

    loc_0x80338f1c: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1c8
         if                       // fcn.80339168-0x17148 // unlikely
         if                       // unlikely

    loc_0x80338f28: // orphan
         if                       // fcn.80339168-0x170dc // unlikely
         if                       // fcn.80339168-0x170a8 // unlikely

    loc_0x80338fd4: // orphan
         if                       // unlikely

    loc_0x80338fe0: // orphan
         if                       // unlikely

    loc_0x80338fec: // orphan
         if                       // unlikely

    loc_0x80338ff8: // orphan
         if                       // fcn.8031c6d4+0x6218 // unlikely

    loc_0x80339004: // orphan
         if                       // fcn.80339168-0x16850 // unlikely

    loc_0x80339030: // orphan
           // CALL XREF from fcn.8019c2fc @ +0x5c0
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x80323810
         if                       // unlikely

    loc_0x80339040: // orphan
         if                       // fcn.80339030-0x165c0 // unlikely
         if                       // unlikely

    loc_0x80339044: // orphan
         if                       // unlikely

    loc_0x8033904c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339050: // orphan
         if                       // fcn.80339168-0x16694 // unlikely

    loc_0x80339058: // orphan
           // CALL XREF from fcn.81bae36c @ +0x4bc
         if                       // fcn.80339168-0x16680 // unlikely
         if                       // fcn.80339168-0x1666c // unlikely

    loc_0x80339064: // orphan
         if                       // fcn.80339168-0x16634 // unlikely
         if                       // fcn.80339168-0x16640 // unlikely

    loc_0x803390ac: // orphan
         if                       // unlikely

    loc_0x803390b8: // orphan
         if                       // fcn.80339168-0x161dc // unlikely

    loc_0x803390c4: // orphan
         

    loc_0x80339b08: // orphan
         if                       // fcn.8031c6d4+0xf2a8 // unlikely
         if                       // unlikely

    loc_0x80339b14: // orphan
         if                       // fcn.80339168-0xd530 // unlikely
         if                       // unlikely

    loc_0x80339b20: // orphan
         // CODE XREF from fcn.8033aba4 @ +0x58
         if                       // fcn.80339168-0xd534 // unlikely
         if                       // unlikely

    loc_0x80339b2c: // orphan
         if                       // fcn.80339168-0xd3e8 // unlikely
         if                       // fcn.80339168-0xd3a4 // unlikely

    loc_0x80339b38: // orphan
         if                       // fcn.80339168-0xd32c // unlikely
         if                       // fcn.80339168-0xd318 // unlikely

    loc_0x80339b44: // orphan
         if                       // fcn.80339168-0xd2e0 // unlikely
         if                       // fcn.80339168-0xd2bc // unlikely

    loc_0x80339b50: // orphan
         if                       // fcn.80339168-0xd294 // unlikely
         if                       // fcn.80339168-0xd200 // unlikely

    loc_0x80339b5c: // orphan
         if                       // fcn.80339168-0xd188 // unlikely
         if                       // unlikely

    loc_0x80339b68: // orphan
         if                       // unlikely
         

    loc_0x80339b78: // orphan
         if                       // fcn.80339168-0xd06c // unlikely

    loc_0x80339b84: // orphan
         if                       // fcn.80339168-0xcff0 // unlikely

    loc_0x80339b90: // orphan
         if                       // fcn.8032c300+0x14 // unlikely

    loc_0x80339b9c: // orphan
         if                       // fcn.80339168-0xcdf8 // unlikely

    loc_0x80339bd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339be0: // orphan
         if                       // fcn.80339168-0xca54 // unlikely
         if                       // fcn.80339168-0xca40 // unlikely

    loc_0x80339bec: // orphan
         if                       // fcn.80339168-0xc9e8 // unlikely
         // CODE XREF from fcn.80339168 @ 0x80319c9c
         if                       // fcn.80339168-0xc9c4 // unlikely

    loc_0x80339c80: // orphan
         if                       // fcn.80339168-0xc444 // unlikely
         if                       // fcn.80339168-0xc420 // unlikely

    loc_0x80339c8c: // orphan
         // CODE XREF from fcn.8033aba4 @ +0x74
         if                       // fcn.80339168-0xc3f8 // unlikely
         if                       // fcn.80339168-0xc3d4 // unlikely

    loc_0x80339cfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339e14: // orphan
         // CODE XREF from fcn.8033aba4 @ +0x9c
         if                       // unlikely
         if                       // unlikely

    loc_0x80339e70: // orphan
         if                       // fcn.80339168-0xb1c4 // unlikely
         if                       // unlikely

    loc_0x80339e7c: // orphan
         if                       // fcn.80339168-0xb128 // unlikely
         if                       // unlikely

    loc_0x80339ecc: // orphan
         if                       // unlikely

    loc_0x8033b024: // orphan
         if                       // likely

    loc_0x8033b030: // orphan
         if                       // fcn.80339168+0x437c // likely
         at = halfword [0 + 0x934]

    loc_0x8033bac0: // orphan
         t6 = 0x8ae1 << 16

    loc_0x8033d49c: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]         // s4
         ret                      // ra
         // CODE XREF from fcn.80339168 @ 0x8033b028
         sp += 0x38

    loc_0x803408cc: // orphan
         t0 = v0 + 8
         [a2 + 0] = t0
         a1 = 0x8ae1 << 16
         [v0 + 4] = t2
         [v0 + 0] = t1
         a1 = halfword [a1 - 0x6750]
         a2 = 0x8ae1 << 16
         a0 = 0 + 0x46
         if                       // unlikely
         a3 = 0

    loc_0x803408f4: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 + 0x46

    loc_0x80340900: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 0x46

    loc_0x8034090c: // orphan
         goto 0x80340a30          // fcn.80339168+0x78c8
         

    loc_0x80340914: // orphan
         a1 = 0 + 0x2d
         a2 = [a2 - 0x6728]       // t9
         call 0x8004d19c          // 0x8004d19c(-1, 0x2d, -1, -1)
         [sp + 0x10] = 0
         t3 = 0x8ae1 << 16
         t3 = , unsigned  halfword [t3 - 0x7afa]
         at = 0 + 0x1e
         a0 = 0x8ae0 << 16
         div 0, t3, at
         t4 = hi
         at = , t4 < 0x10         // lo
         if                       // unlikely
         a0 += 0x76a0

    loc_0x80340948: // orphan
         a1 = 0 + 0x46
         call 0x8ae04fa8          // 0x8ae04fa8(-1, 0x46, 0x8, -1)
         a2 = 0 + 0x2d

    loc_0x80340954: // orphan
         a0 = 0x8ae0 << 16
         a0 += 0x76a0
         a1 = 0 + 0x46
         call 0x8ae050ac          // 0x8ae050ac(0x8ae076a0, 0x46, 0x8, -1)
         a2 = 0 + 0x2d
         goto 0x80340a30          // fcn.80339168+0x78c8
         

    loc_0x80340970: // orphan
         a2 = 0x8ae1 << 16
         a2 = [a2 - 0x6720]       // t9
         a1 = 0 + 0x2d
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(-1, 0x2d, -1, 0x0)
         [sp + 0x10] = 0
         t5 = 0x8ae1 << 16
         t5 = , unsigned  halfword [t5 - 0x7afa]
         at = 0 + 0x1e
         a0 = 0x8ae0 << 16
         div 0, t5, at
         t6 = hi
         at = , t6 < 0x10         // lo
         if                       // unlikely
         a0 += 0x7758

    loc_0x803409ac: // orphan
         a1 = 0 + 0x46
         call 0x8ae04fa8          // 0x8ae04fa8(-1, 0x46, 0x8, -1)
         a2 = 0 + 0x2d

    loc_0x803409b8: // orphan
         a0 = 0x8ae0 << 16
         a0 += 0x7758
         a1 = 0 + 0x46
         call 0x8ae050ac          // 0x8ae050ac(0x8ae07758, 0x46, 0x8, -1)
         a2 = 0 + 0x2d
         goto 0x80340a30          // fcn.80339168+0x78c8
         

    loc_0x803409d4: // orphan
         a2 = 0x8ae1 << 16
         a2 = [a2 - 0x6718]       // t9
         a1 = 0 + 0x2d
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(-1, 0x2d, -1, 0x0)
         [sp + 0x10] = 0
         t7 = 0x8ae1 << 16
         t7 = , unsigned  halfword [t7 - 0x7afa]
         at = 0 + 0x1e
         a0 = 0x8ae0 << 16
         div 0, t7, at
         t8 = hi
         at = , t8 < 0x10         // lo
         if                       // unlikely
         a0 += 0x781c

    loc_0x80340a10: // orphan
         a1 = 0 + 0x46
         call 0x8ae04fa8          // 0x8ae04fa8(-1, 0x46, 0x8, -1)
         a2 = 0 + 0x2d

    loc_0x80340a1c: // orphan
         a0 = 0x8ae0 << 16
         a0 += 0x781c
         a1 = 0 + 0x46
         call 0x8ae050ac          // 0x8ae050ac(0x8ae0781c, 0x46, 0x8, -1)
         a2 = 0 + 0x2d

    loc_0x80341130: // orphan
         lwc1 f8
         v0 = 0x8ae1 << 16
         v0 -= 0x7b10
         goto 0x80341148
         swc1 f8

    loc_0x803411fc: // orphan
         ret                      // ra
         

    loc_0x803414d8: // orphan
         call 0x8ae0575c          // 0x8ae0575c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 8
         call 0x8ae05910          // 0x8ae05910(0x107, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         call 0x8ae00020          // 0x8ae00020(0x2, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x46

    loc_0x80341610: // orphan
         // CODE XREF from fcn.80339168 @ 0x803414f4
         a0 = 0x8ae1 << 16
         a0 = [a0 - 0x7b44]       // arg1 // t9
         a1 = a2 - 0x7b30         // arg3
         call 0x8ae059a8          // 0x8ae059a8(-1, 0xffffffffffff84d8, 0x8, -1)
         a0 += 0xb4
         a2 = 0x8ae1 << 16
         a2 -= 0x7b30
         at = 0x447a << 16
         mtc1 at, f8
         lwc1 f4
         at = 0x8ae1 << 16
         lwc1 f6, 4, a2
         lwc1 f18, -0x7bb0, at
         lwc1 f16, 8, a2
         swc1 f4, 0x30, sp
         add.s f10, f6, f8
         a0 = 0x8ae1 << 16
         a0 = [a0 - 0x7b44]       // t9
         add.s f4, f16, f18
         swc1 f10, 0x34, sp
         a1 = sp + 0x30
         a0 += 0xa8
         call 0x8ae059a8          // 0x8ae059a8(0x1000000a7, 0x178030, 0x8ae084d0, -1)
         swc1 f4, 0x38, sp
         t8 = 0x8008 << 16
         t8 = [t8 + 0x7200]       // t9
         at = 0x8ae1 << 16
         a0 = 0 + 4
         v0 = , unsigned  halfword [t8 + 8]
         t9 = v0 & 0x4000
         beql t9, 0, 0x80341644   // unlikely
         t1 = v0 & 1              // lo

    loc_0x8034194c: // orphan
         v1 = 0x8ae1 << 16
         t6 = a0 - 1
         v1 -= 0x5ea4
         sp -= 0x28
         at = , unsigned  , t6 < 7

    loc_0x80341994: // orphan
         t8 = 0 + 3
         at = 0x8ae1 << 16
         goto 0x803419f8          // fcn.80339168+0x8890
         halfword [at - 0x6198] = t8

    loc_0x803419a8: // orphan
         at = 0x8ae1 << 16
         goto 0x803419f8          // fcn.80339168+0x8890
         halfword [at - 0x6198] = t9

    loc_0x80341c70: // orphan
         [at - 0x66c4] = v0
         a0 = 0 + 0x38
         call 0x8004c990          // 0x8004c990(0x38, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 4
         at = 0x8ae1 << 16
         goto 0x80341d00          // fcn.80339168+0x8b98
         [at - 0x66c4] = v0

    loc_0x80341cb4: // orphan
         goto 0x80341d00          // fcn.80339168+0x8b98
         [at - 0x66c4] = v0

    loc_0x80341cfc: // orphan
         [at - 0x66c4] = v0

    loc_0x80342ae4: // orphan
         
         sd s1, -0x69dd, 0
         sd t7, -1, t9
         ldc1 f0, 2, t8
         
         sd s0
         lwl 0, 0x67c8, s7
         sdc1 f16

    loc_0x80342b70: // orphan
         sd t4, 0x3e, ra
         
         
         dsra32 t7, 0, 0x1f
         sd t4, 0x2a, ra
         
         
         dsra32 t7, 0, 0x1f
                                  // lo
         
         if                       // unlikely
         dsra32 t7, 0, 0x1f

    loc_0x80342ba0: // orphan
         dsrl32 0, s4, 0
         
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x80342ba8
         dsra32 t7, 0, 0x1f

    loc_0x80342bac: // orphan
         // CODE XREF from fcn.80339030 @ 0x80342ba8
         dsra32 t7, 0, 0x1f

    loc_0x80342bb0: // orphan
         sd t4, 0x2a, ra
         
         

    loc_0x80342bbc: // orphan
         dsra32 t7, 0, 0x1f
         sd t4, 0x16, ra
         
         
         dsra32 t7, 0, 0x1f

    loc_0x80342c88: // orphan
         bbit032 t7, 0x1f, 0x80342c88
         movf 0, 0, fcc0
         sd s1, -0x69dd, 0
         sd t7, -1, t9
         ldc1 f0, 2, t8

    loc_0x8034359c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80342b98
         
                                  // t1
         

    loc_0x80343b94: // orphan
         if                       // fcn.80339168+0xab80 // unlikely

    loc_0x80343ba0: // orphan
         if                       // unlikely

    loc_0x80343bac: // orphan
         if                       // fcn.80343b9c+0x1b4 // unlikely
         if                       // unlikely

    loc_0x80343bb8: // orphan
         if                       // fcn.80343b9c+0x2b0 // unlikely
         if                       // fcn.80339168+0xac88 // unlikely

    loc_0x80343bc4: // orphan
         if                       // fcn.80339168+0xad30 // unlikely
         if                       // fcn.80343ebc+0x20 // unlikely

    loc_0x80343bd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343bdc: // orphan
         if                       // unlikely
         if                       // fcn.80343f54+0xc // unlikely

    loc_0x80343be8: // orphan
         if                       // fcn.80339030+0xaf18 // unlikely
         if                       // unlikely

    loc_0x80343bec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343bf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343c04: // orphan
         if                       // fcn.80344058+0x40 // unlikely
         if                       // unlikely

    loc_0x80343c18: // orphan
         if                       // fcn.8031c6d4+0x27a68 // unlikely

    loc_0x80343c98: // orphan
         if                       // fcn.80339030+0xb568 // unlikely
         if                       // unlikely

    loc_0x80343c9c: // orphan
         if                       // unlikely

    loc_0x80343ca4: // orphan
         if                       // fcn.80339030+0xb5f4 // unlikely
         if                       // fcn.80339030+0xb618 // unlikely

    loc_0x80343cfc: // orphan
         

    loc_0x80343d64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343d70: // orphan
         
         
         
         
         
         

    loc_0x80343d88: // orphan
         if                       // fcn.80339168+0xc594 // unlikely
         if                       // unlikely

    loc_0x80343d94: // orphan
         if                       // fcn.80345858+0x40 // unlikely
         if                       // unlikely

    loc_0x80343da0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343dac: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0xc94c // unlikely

    loc_0x80343db4: // orphan
         if                       // unlikely

    loc_0x80343db8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343dc0: // orphan
         if                       // fcn.80339168+0xcf9c // unlikely

    loc_0x80343dc4: // orphan
         if                       // fcn.80339168+0xcfe0 // unlikely

    loc_0x80343dcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343dd8: // orphan
         if                       // unlikely
         

    loc_0x80343e20: // orphan
         
         if                       // fcn.80339168+0xd9a0 // unlikely
         if                       // fcn.80339168+0xd9b4 // unlikely

    loc_0x80343e30: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80343e44: // orphan
         if                       // fcn.80339168+0xdb40 // unlikely
         if                       // fcn.80339168+0xdb94 // unlikely

    loc_0x80343e50: // orphan
         

    loc_0x80343e54: // orphan
         
         
         
         
         
         
         
         
         
         if                       // fcn.80339168+0xe084 // unlikely
         if                       // fcn.80339168+0xe0c8 // unlikely

    loc_0x80343e84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343e90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80343ef8: // orphan
         if                       // fcn.80353f78-0xc9bc // unlikely
         if                       // fcn.80353f78-0xc9f8 // unlikely

    loc_0x80343f04: // orphan
         if                       // fcn.80353f78-0xc990 // unlikely
         if                       // fcn.80353f78-0xc97c // unlikely

    loc_0x80343f48: // orphan
         if                       // fcn.80347bfc // unlikely
         if                       // fcn.80347bfc+0x24 // unlikely

    loc_0x80343fb0: // orphan
         if                       // fcn.80339168+0xff5c // unlikely
         if                       // unlikely

    loc_0x80343fbc: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x1007c // unlikely

    loc_0x80343fc4: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x10114 // unlikely

    loc_0x80343fc8: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x10114 // unlikely

    loc_0x80343fd0: // orphan
         if                       // fcn.80339168+0x101cc // unlikely
         if                       // fcn.80339168+0x10220 // unlikely

    loc_0x80343fd4: // orphan
         if                       // fcn.80339168+0x101cc // unlikely
         if                       // fcn.80339168+0x10220 // unlikely

    loc_0x803440ac: // orphan
         if                       // fcn.80344054+0x6f7c // unlikely
         if                       // fcn.80353f78-0x8f54 // unlikely

    loc_0x803440b8: // orphan
         if                       // fcn.80339168+0x11eb4 // unlikely
         if                       // unlikely

    loc_0x803440c4: // orphan
         if                       // fcn.80339168+0x11f90 // unlikely
         if                       // fcn.8031c6d4+0x2ee08 // unlikely

    loc_0x80344180: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x13020 // unlikely

    loc_0x8034418c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80344598: // orphan
         if                       // fcn.80339168+0x15fc4 // unlikely
         if                       // fcn.80339168+0x16018 // unlikely

    loc_0x803445f0: // orphan
         
         if                       // fcn.80339168+0x16240 // unlikely
         if                       // fcn.80339168+0x16274 // unlikely

    loc_0x80344600: // orphan
         if                       // fcn.80339168+0x162ac // unlikely
         

    loc_0x80344608: // orphan
         if                       // fcn.80339168+0x162c4 // unlikely
         if                       // fcn.80339168+0x162f8 // unlikely

    loc_0x80344614: // orphan
         if                       // fcn.80339168+0x16320 // unlikely
         if                       // fcn.80339168+0x162f4 // unlikely

    loc_0x80344620: // orphan
         

    loc_0x80344624: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80344630: // orphan
         if                       // unlikely
         

    loc_0x80344638: // orphan
         if                       // fcn.80339168+0x163d4 // unlikely
         if                       // fcn.80339168+0x16408 // unlikely

    loc_0x80344644: // orphan
         if                       // fcn.80339168+0x16400 // unlikely
         

    loc_0x803447e0: // orphan
         if                       // fcn.80339168+0x16fbc // unlikely

    loc_0x803447ec: // orphan
         if                       // fcn.80339168+0x16ff8 // unlikely

    loc_0x803447f8: // orphan
         if                       // fcn.80339168+0x17044 // unlikely

    loc_0x80344804: // orphan
         if                       // fcn.803501d0+0x38 // unlikely

    loc_0x80345230: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8034523c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80345248: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80345254: // orphan
         if                       // unlikely
         

    loc_0x803452b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803452c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803452cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803452d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803452e4: // orphan
         if                       // unlikely

    loc_0x803452f0: // orphan
         if                       // fcn.80339168+0x212cc // unlikely

    loc_0x803452fc: // orphan
         if                       // fcn.80339168+0x212a8 // unlikely

    loc_0x80345308: // orphan
         if                       // fcn.80339168+0x21314 // unlikely

    loc_0x80345314: // orphan
         if                       // unlikely

    loc_0x80345320: // orphan
         if                       // fcn.80339168+0x2139c // unlikely

    loc_0x8034532c: // orphan
         if                       // fcn.80339168+0x213f8 // unlikely

    loc_0x80345338: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80345358: // orphan
         if                       // fcn.80339168+0x21554 // unlikely

    loc_0x80345364: // orphan
         if                       // fcn.80339168+0x21640 // unlikely

    loc_0x80345370: // orphan
         if                       // fcn.80339168+0x216ac // unlikely

    loc_0x8034537c: // orphan
         if                       // fcn.80339168+0x21718 // unlikely

    loc_0x80345388: // orphan
         if                       // fcn.80339168+0x21794 // unlikely
         if                       // fcn.80339168+0x217a8 // unlikely

    loc_0x80345394: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803453a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803453f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80345590: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8034559c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803455a8: // orphan
         
         if                       // fcn.80339168+0x23ca8 // unlikely
         if                       // fcn.80339168+0x23f3c // unlikely

    loc_0x803455b8: // orphan
         if                       // fcn.8035d074+0x14 // unlikely
         if                       // unlikely

    loc_0x803455c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803455d0: // orphan
         if                       // fcn.80339168+0x2403c // unlikely
         if                       // fcn.80339168+0x24050 // unlikely

    loc_0x803455dc: // orphan
         

    loc_0x803455e0: // orphan
         
         if                       // fcn.8031c6d4+0x40b84 // unlikely
         if                       // unlikely

    loc_0x803455ec: // orphan
         if                       // unlikely

    loc_0x803455f0: // orphan
         if                       // unlikely
         

    loc_0x803455f8: // orphan
         if                       // unlikely
         

    loc_0x80345600: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80345648: // orphan
         if                       // fcn.803547f0+0x8e3c // unlikely
         if                       // unlikely

    loc_0x80345654: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80345664: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80345670: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8034567c: // orphan
         

    loc_0x80345680: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80345694: // orphan
         if                       // unlikely
         

    loc_0x80345740: // orphan
         if                       // fcn.803547f0+0x9d24 // unlikely
         if                       // unlikely

    loc_0x8034574c: // orphan
         

    loc_0x80345750: // orphan
         
         
         
         
         
         
         

    loc_0x8034605c: // orphan
         [sp + 0x10c] = a1
         [sp + 0x110] = a2
         v0 = [a0 + 0x1894]       // t9
         t7 = 0x8601 << 16
         s0 = a0                  // t9

    loc_0x80346070: // orphan
         if                       // unlikely
         t7 -= 0x2ea8

    loc_0x80346078: // orphan
         goto 0x80346088
         s1 = v0                  // s4

    loc_0x80346080: // orphan
         s1 = 0x8601 << 16
         s1 -= 0x2e78

    loc_0x80346088: // orphan
         // CODE XREF from fcn.80339030 @ 0x80346078
         t9 = [t7 + 0]
         t8 = [t7 + 4]
         t6 = sp + 0xe0
         [t6 + 0] = t9
         [t6 + 4] = t8
         t8 = [t7 + 0xc]          // t9
         t9 = [t7 + 8]
         t1 = 0x8601 << 16
         [t6 + 0xc] = t8
         [t6 + 8] = t9
         t9 = [t7 + 0x10]
         t8 = [t7 + 0x14]         // t9
         t1 -= 0x2e90
         [t6 + 0x10] = t9
         [t6 + 0x14] = t8
         t2 = [t1 + 4]            // t9

    loc_0x803465e4: // orphan
         v1 = a0 + 0x30
         swc1 f0
         swc1 f0, 4, a0
         swc1 f0, 8, a0
         swc1 f0, 0x10, a0
         swc1 f0, 0x14, a0
         swc1 f0, 0x18, a0
         swc1 f0, 0x1c, a0
         swc1 f0, 0x20, a0
         swc1 f0, 0x28, a0
         swc1 f0, 0x2c, a0
         a0 = 0 + 0xa
         v0 = 0 + 2

    loc_0x80346c60: // orphan
         v1 = v0                  // s4
         v0 = v1                  // s4
         goto 0x80346c70          // fcn.80339168+0xdb08
         a2 = v0                  // s4

    loc_0x80347370: // orphan
         a0 = [sp + 0x20]         // t9
         a1 = v0                  // s4
         call 0x87c03b60          // 0x87c03b60(-1, 0xff, 0x8, -1)
         a2 = a3 + 0x1890
         a3 = [sp + 0x30]         // s4
         at = 0x8601 << 16
         lwc1 f0, -0x29c4, at
         t8 = byte [a3 + 0x1890]  // s4
         at = 0xc2fe << 16
         mtc1 at, f2
         mtc1 t8, f4
         t0 = 0 - 0x7f

    loc_0x803473a0: // orphan
         at = 0x42fe << 16
         cvt.s.w f6, f4
         t4 = 0 - 0x7f
         mul.s f8, f6, f0
         swc1 f8, 0x24, sp
         t9 = byte [a3 + 0x1891]  // s4
         c.le.s f8, f2

    loc_0x803473bc: // orphan
         lwc1 f4, 0x24, sp
         mtc1 t9, f10
         
         cvt.s.w f16, f10
         mul.s f18, f16, f0
         bc1f 0x803473e0
         swc1 f18, 0x28, sp
         goto 0x80347414          // fcn.80339168+0xe2ac
         byte [a3 + 0x1890] = t0

    loc_0x80348ab0: // orphan
         a0 += 0x18
         at = 0x8601 << 16
         a2 = [at - 0x2968]       // t9

    loc_0x803490e8: // orphan
         t0 = [s0 + 0x1870]       // t9
         ldc1 f16, 0x17d0, s0
         at = 0x8601 << 16
         c.lt.d f20, f16
         
         bc1fl 0x80349138
         t0 = [s0 + 0x1870]       // t9
         ldc1 f18, -0x21c0, at
         at = 0x8601 << 16
         ldc1 f4, -0x20f0, at
         a0 = s0
         mul.d f6, f18, f4
         mfc1 a3, f6
         mfc1 a2, f7
         call 0x86007a80          // 0x86007a80(0x104, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x8601 << 16
         ldc1 f8, -0x2158, at
         sdc1 f8, 0xe8, s0
         t0 = [s0 + 0x1870]       // t9
         ldc1 f10, 0x17e8, s0
         ldc1 f16, 0x6890, t0
         sub.d f18, f10, f16
         c.lt.d f18, f20
         sdc1 f18, 0x17e8, s0
         bc1f 0x80349158
         
         sdc1 f20, 0x17e8, s0

    loc_0x803494d0: // orphan
         [a0 + 0x186c] = 0
         a0 = 0 + 0x4f06
         a1 = , unsigned  byte [s0 + 0x1813] // s4
         call 0x8002781c          // 0x8002781c(0x4f06, 0xff, 0x8, -1)
         a2 = s0 + 0x1890
         a1 = 0x8601 << 16
         a1 -= 0x2a10
         a0 = s0 + 0x17a0
         call 0x87c01e30          // 0x87c01e30(0x18a4, 0x8600d5f0, 0x1994, -1)
         a2 = 0
         at = 0x8601 << 16
         ldc1 f4, -0x1fe0, at
         ldc1 f12
         ldc1 f14, 0x10, s0
         call 0x87c00d14          // 0x87c00d14(0x18a4, 0x8600d5f0, 0x0, -1)
         sdc1 f4, 0x17d0, s0
         sdc1 f0, 0x17d8, s0
         call 0x86001fcc          // 0x86001fcc(0x18a4, 0x8600d5f0, 0x0, -1)
         a0 = s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x803495ec: // orphan
         t3 = [v0 + 0x1814]       // t9
         t2 = [s2 + 0x1810]       // t9
         a0 = 0 + 0xf04
         t4 = v0 + t3
         byte [t4 + 0x1990] = t2
         t5 = [s2 + 0x1870]       // t9
         a1 = s0 & 0xff
         v0 = t5 + s1
         t6 = [v0 + 0x1814]       // t9
         t7 = t6 + 1
         call 0x80027a28          // 0x80027a28(0xf04, 0x4, 0x8, -1)
         [v0 + 0x1814] = t7
         s0 += 1
         // CODE XREF from fcn.80339168 @ 0x803495d8
         // CODE XREF from loc.80348cf4 @ +0x8f0
         if                       // fcn.80339168+0x10464 // likely
         s1 += 0x1998

    loc_0x8034a3cc: // orphan
         v0 += 1
         if                       // likely
         a1 += 0x40               // arg2

    loc_0x8034b000: // orphan
         if                       // fcn.80344054+0x6f58 // likely
         s0 += 0x1998

    loc_0x8034b5c0: // orphan
         v1 = t0 + t2
         at = 0 | 0x8000
         v0 = v1 + at
         swc1 f6, 0x1f4, v0
         ldc1 f8, 8, a3           // arg4
         at = 0 | 0x81d0
         a0 = v1 + at             // arg1
         cvt.s.d f10, f8
         a1 = 0

    loc_0x8034b5e4: // orphan
         swc1 f10, 0x1f8, v0
         ldc1 f16, 0x10, a3       // arg4
         cvt.s.d f18, f16
         swc1 f18, 0x1fc, v0
         [sp + 0x3c] = a3
         [sp + 0x20] = a0
         [sp + 0x24] = v1
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v0
         a0 = [sp + 0x20]         // t9
         v0 = [sp + 0x1c]         // s4
         v1 = [sp + 0x24]
         t3 = , unsigned  byte [a0 + 1]
         a3 = [sp + 0x3c]         // t9
         at = 0 | 0x8000
         t4 = t3 | 1              // lo
         byte [a0 + 1] = t4
         t6 = [sp + 0x34]
         t9 = [sp + 0x38]
         t5 = [sp + 0x30]         // s4
         t8 = t6 << 4
         t1 = t9 << 2
         t7 = t5 + t8
         a2 = t7 + t1
         a2 += at
         at = 0x8601 << 16
         ldc1 f4, -0x1f00, at
         cvt.s.d f6, f4
         swc1 f6, 0x2ed0, a2

    loc_0x8034b658: // orphan
         t0 = [sp + 0x40]
         beql t0, 0, 0x8034b6c8   // fcn.80339168+0x12560 // likely
         ra = [sp + 0x14]

    loc_0x8034b664: // orphan
         ldc1 f8
         at = 0 | 0x9850

    loc_0x8034b66c: // orphan
         a0 = v1 + at
         cvt.s.d f10, f8
         a1 = 0
         swc1 f10, 0x1874, v0
         ldc1 f16, 8, a3
         cvt.s.d f18, f16

    loc_0x8034b684: // orphan
         swc1 f18, 0x1878, v0
         ldc1 f4, 0x10, a3
         cvt.s.d f6, f4
         swc1 f6, 0x187c, v0
         [sp + 0x18] = a2
         call 0x8003f210          // 0x8003f210(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = a0
         a0 = [sp + 0x20]         // t9
         a2 = [sp + 0x18]
         at = 0x8601 << 16

    loc_0x8034ba80: // orphan
         [sp + 0x10] = t9
         s0 = [s4 + 4]

    loc_0x8034c1b4: // orphan
         call 0x860065e8          // "T@" // 0x860065e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2

    loc_0x8034c330: // orphan
         a0 = s0 + 0x751c
         a2 = 0 + 1               // lo

    loc_0x8034c8dc: // orphan
         a0 = s1
         s0 += 0x1998
         if                       // likely
         s1 += 0x1998

    loc_0x8034f4f4: // orphan
         ldc1 f2, 0x28, sp
         cvt.d.s f10, f0

    loc_0x8034f4fc: // orphan
         ldc1 f18, 0x10, s0
         mul.d f16, f10, f2

    loc_0x8035108c: // orphan
         mtc1 0, f16
         sdc1 f10, 0x18, v0
         ldc1 f4, -0x2320, at
         at = 0x8601 << 16
         mtc1 0, f19
         mul.d f6, f0, f4
         mtc1 0, f18
         mtc1 0, f13
         mtc1 0, f12
         t7 = 0 + 5
         t8 = 0 + 0x3c
         t9 = 0 + 4
         v1 = 0 + 1               // lo
         div.d f8, f6, f2
         sdc1 f8, 0x20, v0
         ldc1 f10, -0x2318, at
         at = 0x8601 << 16

    loc_0x8035492c: // orphan
         if                       // unlikely
         

    loc_0x80354ccc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354cd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354ce4: // orphan
         if                       // fcn.80339168+0x9a70 // unlikely
         if                       // fcn.80339168+0x9aa4 // unlikely

    loc_0x80354cf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803550dc: // orphan
         if                       // fcn.80339168+0xdf68 // unlikely
         if                       // fcn.80339168+0xdf7c // unlikely

    loc_0x803550e8: // orphan
         if                       // fcn.80339168+0xe174 // unlikely
         if                       // unlikely

    loc_0x803550fc: // orphan
         if                       // fcn.80339168+0xe148 // unlikely
         

    loc_0x80355168: // orphan
         
         if                       // unlikely
         if                       // fcn.80347bfc // unlikely

    loc_0x80355174: // orphan
         if                       // unlikely
         

    loc_0x803561f8: // orphan
         cvt.d.w f10, f8
         mul.d f6, f4, f2
         mtc1 t8, f8
         a1 = 0 + 0x17
         a3 = 0 + 0x15
         t1 = 0 + 0x13

    loc_0x80356454: // orphan
         [sp + 0x44] = a1
         [sp + 0x48] = a2
         call 0x87c00238          // 0x87c00238(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x28
         a0 = [sp + 0x44]
         call 0x87c00208          // 0x87c00208(0xfe116408, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0x48]         // a2
         call 0x87c00f9c          // "\u05e6" // 0x87c00f9c(0xfe116408, 0x8, 0x8, -1)
         mov.d f12, f0
         ldc1 f6, 0x50, sp
         neg.d f4, f0
         a0 = [sp + 0x40]
         mul.d f8, f4, f6
         a1 = sp + 0x28
         mfc1 a3, f8
         mfc1 a2, f9
         call 0x87c00bf4          // 0x87c00bf4(0x0, 0x178028, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x40
         ret                      // ra
         

    loc_0x8035657c: // orphan
         bc1fl 0x80356598
         t8 = [a2 + 0]
         call 0x87c010d8          // 0x87c010d8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2
         goto 0x803565dc          // fcn.80339168+0x1d474
         at = 0x3ff0 << 16

    loc_0x80357b8c: // orphan
         a1 = a3                  // s2
         a0 = [sp + 0x10c]
         a1 = s0
         call 0x87c021a4          // 0x87c021a4(0xfe116408, 0x104, 0x8, -1)
         a2 = sp + 0x40
         a0 = sp + 0x88
         a1 = sp + 0x40
         call 0x87c00160          // 0x87c00160(0x178088, 0x178040, 0x178040, -1)
         a2 = sp + 0x58
         a0 = sp + 0xa0
         a1 = sp + 0x88
         call 0x87c003bc          // 0x87c003bc(0x1780a0, 0x178088, 0x178058, -1)
         a2 = [sp + 0x110]
         a0 = sp + 0xa0
         a1 = a0
         a2 = 0x3ff0 << 16
         call 0x87c00718          // 0x87c00718(0x1780a0, 0x1780a0, 0x3ff00000, -1)
         a3 = 0 + 0
         t6 = [sp + 0x110]        // a2

    loc_0x803597a4: // orphan
         if                       // fcn.80353c80+0xd4c8 // unlikely
         if                       // fcn.80353c80+0xd52c // unlikely

    loc_0x803597b0: // orphan
         if                       // fcn.80361344+0xb0 // unlikely
         if                       // fcn.80353c80+0xd7a8 // unlikely

    loc_0x803597bc: // orphan
         if                       // fcn.80353c80+0xda20 // unlikely
         if                       // fcn.80353c80+0xdae4 // unlikely

    loc_0x803597c8: // orphan
         if                       // fcn.80353c80+0xdc6c // unlikely
         if                       // fcn.80353c80+0xddd0 // unlikely

    loc_0x803597d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803597e0: // orphan
         if                       // fcn.80353c80+0xe2a4 // unlikely
         if                       // fcn.80353c80+0xe2f8 // unlikely

    loc_0x803597ec: // orphan
         if                       // fcn.80353c80+0xe410 // unlikely

    loc_0x803597f8: // orphan
         if                       // fcn.80362290+0x8c // unlikely

    loc_0x80359898: // orphan
         if                       // fcn.80353c80+0xfcdc // unlikely
         if                       // fcn.80353c80+0xfd20 // unlikely

    loc_0x803598a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803598b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80359da4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80359d84
         t1 = t0 + 1
         v0 = t0 + 0x18
         goto 0x80359dac
         [sp + 0x44] = t1

    loc_0x80359e20: // orphan
         [sp + 0x14] = ra
         t7 = t6 + 0x7fff
         t7 = [t7 + 0xfd1]        // t9
         at = 0x4f80 << 16
         t8 = , unsigned  byte [t7 + 1] // lo

    loc_0x8035a26c: // orphan
         bnel t7, at, 0x8035a288  // likely
         at = v0 + 0x7fff

    loc_0x8035a274: // orphan
         call 0x87f0c930          // 0x87f0c930(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x2c
         goto 0x8035a2d8
         ra = [sp + 0x24]         // v1

    loc_0x8035a288: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a26c
         [at + 0x17dd] = t8
         v0 = [t0 + 0]
         v1 = 0x10 << 16
         at = 0 | 0x9704
         t1 = [v0 + 0x894]        // t9
         t9 = [v0 + 0x708]
         a1 = [v0 + 0]            // t9
         t2 = t1 & v1
         [sp + 0x10] = t2
         t3 = [v0 + 0xa20]        // t9
         a2 = 0
         // CODE XREF from fcn.80358e2c @ +0x684
         a0 = v0 + at
         t4 = t3 & v1
         [sp + 0x14] = t4
         t5 = [v0 + 0xbac]        // t9
         a3 = t9 & v1

    loc_0x8035a2c8: // orphan
         t6 = t5 & v1
         call 0x87f0a098          // 0x87f0a098(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = t6
         ra = [sp + 0x24]         // v1

    loc_0x8035a2d8: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a27c
         sp += 0x28
         ret                      // ra
         

    loc_0x8035a2f0: // orphan
         [sp + 0x14] = ra
         a1 = 0
         a0 = 0
         t0 = 0 + 4
         a3 = 0x20 << 16
         v1 = t1 + 0x6fc

    loc_0x8035a308: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a320
         v0 = [v1 + 0xc]          // t9
         a0 += 1
         t6 = v0 & a3             // t9
         if                       // unlikely
         

    loc_0x8035a31c: // orphan
         a1 += 1

    loc_0x8035a320: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a314
         if                       // likely
         v1 += 0x18c

    loc_0x8035a328: // orphan
         t7 = t1 + 0x7fff
         t7 = [t7 + 0x17dd]       // t9
         bnel t7, 0, 0x8035a34c   // likely
         ra = [sp + 0x14]

    loc_0x8035a338: // orphan
         blezl a1, 0x8035a34c     // unlikely
         ra = [sp + 0x14]

    loc_0x8035a340: // orphan
         call 0x861007d8          // 0x861007d8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]

    loc_0x8035a34c: // orphan
         // CODE XREFS from fcn.80339030 @ 0x8035a330, 0x8035a338
         sp += 0x18
         ret                      // ra
         

    loc_0x8035a364: // orphan
         at = 0 | 0x8de0
         [sp + 0x34] = s7
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         a0 = v1 + at
         [sp + 0x3c] = ra
         [sp + 0x38] = fp

    loc_0x8035a384: // orphan
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x18] = s0
         s7 = 0

    loc_0x8035a398: // orphan
         s1 = a0                  // t9
         s2 = 0
         s3 = [sp + 0x44]

    loc_0x8035a3a4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a3cc
         bnel s2, 0, 0x8035a3b4   // likely
         v0 = [s1 + 4]            // t9

    loc_0x8035a3ac: // orphan
         s3 = [s1 + 4]            // t9
         v0 = [s1 + 4]            // t9

    loc_0x8035a3b4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a3a4
         s2 += 1
         at = , s3 < v0
         beql at, 0, 0x8035a3cc   // likely
         at = , s2 < 4            // lo

    loc_0x8035a3c4: // orphan
         s3 = v0                  // s4
         at = , s2 < 4            // lo

    loc_0x8035a3cc: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a3bc
         if                       // likely
         s1 += 0x2c

    loc_0x8035a3d4: // orphan
         s0 = v1 + 0x6fc
         s1 = a0                  // t9
         s2 = 0

    loc_0x8035a424: // orphan
         t9 = [s0 + 0xc]

    loc_0x8035a538: // orphan
         
         sp -= 0x30

    loc_0x8035a5e4: // orphan
         t8 = 0 - 0x2000
         t9 = t8 - t7
         halfword [v0 + 0x1c] = t9
         t0 = halfword [sp + 0x24]
         t1 = t0 + 0x6000
         halfword [v0 + 0x1e] = t1

    loc_0x8035a5fc: // orphan
         // CODE XREF from fcn.8035a5b0 @ 0x8035a5b0
         ra = [sp + 0x1c]
         sp += 0x30
         v0 = 0
         ret
         // CODE XREF from fcn.80358e2c @ +0x87c
         

    loc_0x8035a630: // orphan
         t6 = v1 + 8
         [a0 + 0] = t6
         t8 |= 0x398              // t9
         t7 |= 0x28
         [v1 + 0] = t7
         [v1 + 4] = t8
         // CODE XREF from fcn.8035a5b0 @ +0x64
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x8035a838: // orphan
         c.lt.s f12, f0
         swc1 f2, 0x10, a0
         lwc1 f0, 0x10, a0
         c.lt.s f12, f0
         
         bc1fl 0x8035a85c
         lwc1 f0, 0x14, a0
         swc1 f12, 0x10, a0
         lwc1 f0, 0x14, a0

    loc_0x8035a894: // orphan
         t6 = a1 << 0             // t0
         [sp + 0x14] = ra
         a2 = a0                  // t9
         if                       // likely
         a3 = a1                  // t0

    loc_0x8035a8a8: // orphan
         v0 = [a0 + 0xc]          // t9
         t7 = v0 << 1
         if                       // fcn.80339168+0x21814 // unlikely
         t8 = v0 | a1

    loc_0x8035a8c4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a8a0
         t9 = a3 << 1             // hi
         if                       // unlikely
         t4 = a3 << 9

    loc_0x8035a8f4: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a8c8
         if                       // likely
         t7 = a3 << 7             // arg4

    loc_0x8035a948: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a8f4
         if                       // likely
         t8 = 0xff00 << 16

    loc_0x8035a950: // orphan
         t9 = [a2 + 0xc]
         t8 |= 0xaf               // t9
         [a2 + 0xc4] = t8
         t0 = t9 | a3             // s2
         [a2 + 0xc] = t0
         goto 0x8035a97c          // fcn.80339168+0x21814
         [a2 + 0x1c] = 0

    loc_0x8035a96c: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035a948
         t1 = [a2 + 0xc]          // t9
         [a2 + 0x1c] = 0
         t2 = t1 | a3             // s2
         [a2 + 0xc] = t2

    loc_0x8035aa50: // orphan
         lwc1 f16, -0x5534, at
         a0 = sp + 0x34
         a1 = sp + 0x30
         mul.s f8, f18, f4
         lwc1 f4, 0x4c, s0
         add.s f6, f8, f10
         mul.s f18, f6, f16
         sub.s f8, f18, f4
         call 0x86101558          // 0x86101558(0x178034, 0x178030, 0x8, -1)
         swc1 f8, 0x30, sp
         at = 0x4170 << 16
         mtc1 at, f0
         lwc1 f6, 0x34, sp
         a0 = [sp + 0x40]
         lwc1 f10, 0x50, s0
         t8 = 0x8611 << 16
         mul.s f16, f6, f0
         t8 = [t8 - 0x52e0]       // t9
         at = 0x2000 << 16
         lwc1 f8, 0x30, sp
         a2 = [s0 + 0x48]         // t9
         a3 = [s0 + 0x4c]         // t9
         a0 |= at
         at = 1 << 16
         swc1 f10, 0x10, sp
         at += t8
         mul.s f10, f8, f0
         lwc1 f18, -0x688c, at

    loc_0x8035b12c: // orphan
         swc1 f2, 0x1c, sp
         sub.s f16, f8, f6
         mtc1 0, f8
         mul.s f10, f16, f16
         swc1 f16, 0x18, sp
         add.s f0, f4, f10
         c.eq.s f8, f0
         swc1 f0, 0xc, sp
         bc1tl 0x8035b17c
         mtc1 0, f8
         mul.s f4, f18, f2
         v0 = [sp + 0x4c]
         mul.s f10, f6, f16
         lwc1 f6, 0xc, sp
         add.s f8, f4, f10
         div.s f4, f8, f6
         neg.s f10, f4
         goto 0x8035b184
         swc1 f10

    loc_0x8035b184: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035b170
         lwc1 f12
         lwc1 f6, 0x1c, sp
         lwc1 f10, 0x18, sp
         t6 = [sp + 0x48]         // a2
         mul.s f4, f12, f6
         lwc1 f6, 4, sp
         sp += 0x30
         mul.s f8, f12, f10
         add.s f2, f4, f18
         add.s f14, f8, f6
         mul.s f4, f2, f2
         
         mul.s f10, f14, f14
         add.s f0, f4, f10
         sqrt.s f0, f0
         ret                      // ra
         swc1 f0

    loc_0x8035b24c: // orphan
         a2 = [s0 + 0x48]         // t9
         a3 = [s0 + 0x4c]         // t9
         lwc1 f12, 0x48, v0
         lwc1 f14, 0x4c, v0
         [sp + 0x1c] = s4
         [sp + 0x18] = s3
         swc1 f24, 0x14, sp

    loc_0x8035b268: // orphan
         call 0x8610167c          // "\u01e0" // 0x8610167c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f22, 0x10, sp
         lwc1 f0, 0x74, sp
         c.lt.s f26, f0
         
         bc1fl 0x8035b300
         s0 = [s0 + 4]
         c.lt.s f0, f28
         
         bc1fl 0x8035b300
         s0 = [s0 + 4]            // t9
         t7 = [s1 + 0]            // t9
         at = 0x442f << 16
         mtc1 at, f10
         // CODE XREF from fcn.80358e2c @ +0x890
         t8 = t7 + s5
         lwc1 f6, 0x1768, t8
         at = 0x8611 << 16
         lwc1 f18, -0x551c, at
         mul.s f8, f6, f30
         at = 0x8611 << 16
         lwc1 f4, 0x78, sp
         mul.s f16, f8, f10
         lwc1 f8, -0x5518, at
         at = 0x8611 << 16
         add.s f6, f16, f18
         lwc1 f16, -0x5514, at
         at = 0x428c << 16

    loc_0x8035b2d4: // orphan
         mul.s f10, f6, f8
         
         mul.s f18, f10, f16
         c.lt.s f4, f18
         
         bc1f 0x8035b2fc
         
         mtc1 at, f6
         
         add.s f20, f20, f6
         s0 = [s0 + 4]
         bnel s0, 0, 0x8035b24c   // likely
         v0 = [s2 + 0]            // t9

    loc_0x8035b308: // orphan
         ra = [sp + 0x6c]
         mov.s f0, f20
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         ldc1 f28, 0x40, sp
         ldc1 f30, 0x48, sp
         s0 = [sp + 0x54]
         s1 = [sp + 0x58]
         s2 = [sp + 0x5c]
         s3 = [sp + 0x60]
         s4 = [sp + 0x64]
         s5 = [sp + 0x68]
         ret
         sp += 0x80

    loc_0x8035b360: // orphan
         bc1f 0x8035b370
         
         ret                      // ra
         v0 = 0

    loc_0x8035b374: // orphan
         lwc1 f2, 0x48, v0
         c.lt.s f12, f2
         
         bc1f 0x8035b3cc
         // CODE XREF from fcn.80358e2c @ +0x894
         
         sub.s f14, f2, f12

    loc_0x8035b38c: // orphan
         lwc1 f6, 0x4c, v0
         lwc1 f8, 4, sp
         at = 0x8611 << 16
         mul.s f10, f14, f14
         sub.s f16, f6, f8
         lwc1 f6, -0x550c, at
         mul.s f4, f16, f16
         // CODE XREF from fcn.80358e2c @ +0x898
         sub.s f18, f12, f6
         add.s f8, f18, f18
         add.s f0, f10, f4
         sqrt.s f0, f0
         c.lt.s f8, f0
         // CODE XREF from fcn.80358e2c @ +0x89c
         
         bc1f 0x8035b3cc
         
         v1 = 0
         ret                      // ra
         v0 = v1

    loc_0x8035b49c: // orphan
         at = 0x8611 << 16
         // CODE XREF from fcn.80358e2c @ +0x8a0
         sub.s f2, f6, f12
         lwc1 f6, -0x5500, at
         sub.s f16, f8, f14
         mul.s f10, f2, f2
         
         mul.s f18, f16, f16
         add.s f0, f10, f18
         mul.s f8, f4, f6
         lwc1 f10, 0x6c, sp
         lwc1 f4, 0x68, sp
         sqrt.s f0, f0
         mul.s f18, f8, f10
         
         mul.s f6, f0, f4
         call 0x861015ac          // 0x861015ac(-1, 0x442f71dcfe116408, 0x8, -1)
         add.s f20, f6, f18
         mul.s f8, f0, f26
         lwc1 f12, 0x48, s0
         lwc1 f14, 0x4c, s0
         call 0x86101758          // 0x86101758(-1, 0x442f71dcfe116408, 0x8, -1)
         sub.s f20, f20, f8
         mul.s f10, f0, f28

    loc_0x8035b4f8: // orphan
         add.s f20, f20, f10
         c.lt.s f20, f22
         
         bc1fl 0x8035b518
         s0 = [s0 + 4]
         mov.s f22, f20
         s3 = s0
         s0 = [s0 + 4]            // t9
         bnel s0, 0, 0x8035b45c   // likely
         lwc1 f12, 0x48, s0

    loc_0x8035cfd8: // orphan
         goto 0x8035d028
         

    loc_0x8035d014: // orphan
         swc1 f16, 0x4c, a0
         at = 0x8611 << 16
         lwc1 f18, -0x5498, at
         swc1 f0, 0x4c, a0
         swc1 f18, 0x48, a0

    loc_0x8035d028: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035cfd8
         at = 0x8611 << 16
         lwc1 f0, -0x5494, at
         at = 0x4496 << 16
         mtc1 at, f4
         v0 = 0x8611 << 16
         v0 -= 0x52e0
         swc1 f4, 0x50, a0
         t6 = [v0 + 0]            // t9
         v1 = 0 | 0x8000
         t2 = 0 + 0x3fff
         t7 = t6 + v1
         lwc1 f8, 0x1768, t7
         mul.s f10, f8, f0
         swc1 f10, 0x54, a0
         t8 = [v0 + 0]            // t9
         t9 = t8 + v1
         lwc1 f6, 0x1768, t9
         mul.s f16, f6, f0
         swc1 f16, 0x5c, a0

    loc_0x8035d2cc: // orphan
         t5 = 0 + 1               // lo
         goto 0x8035d314
         byte [t7 + 0x24] = t5

    loc_0x8035d2e4: // orphan
         c.lt.s f16, f2
         
         bc1fl 0x8035d300
         neg.s f12, f2
         goto 0x8035d300
         mov.s f12, f2

    loc_0x8035d300: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035d2f4
         c.lt.s f12, f6
         
         bc1fl 0x8035d318
         t8 = [sp + 0x40]
         byte [t6 + 0x24] = 0
         // CODE XREF from fcn.80339030 @ 0x8035d2d0
         t8 = [sp + 0x40]
         at = 0 + 1               // lo
         v0 = , unsigned  byte [t8 + 0x24] // lo
         if                       // likely
         

    loc_0x8035d328: // orphan
         c.le.s f16, f0

    loc_0x8035d32c: // orphan
         at = 0x438c << 16
         bc1fl 0x8035d360

    loc_0x8035d36c: // orphan
         if                       // fcn.8035d334+0x8c // likely
         at = 0x42c8 << 16

    loc_0x8035d374: // orphan
         mtc1 at, f4
         at = 0x43b4 << 16
         c.le.s f4, f0
         
         bc1tl 0x8035d3a8
         at = 0x4387 << 16
         mtc1 at, f6
         at = 0xc2b4 << 16
         c.le.s f6, f0
         
         bc1fl 0x8035d3b8
         mtc1 at, f10
         at = 0x4387 << 16
         mtc1 at, f8
         goto 0x8035d3c0          // fcn.8035d334+0x8c
         sub.s f14, f8, f0

    loc_0x8035d3bc: // orphan
         // CODE XREF from fcn.80358e2c @ +0x8ec
         sub.s f14, f10, f0

    loc_0x8035d640: // orphan
         lwc1 f16, 0x10, t7
         lwc1 f0, -0x547c, at
         lwc1 f4, 0x28, v1
         add.s f18, f10, f16
         lwc1 f10, 0x2c, v1
         swc1 f18, 0x24, v1
         t8 = [a1 + 0]
         lwc1 f6, 0x14, t8
         add.s f8, f4, f6
         swc1 f8, 0x28, v1
         t9 = [a1 + 0]
         lwc1 f16, 0x18, t9
         add.s f18, f10, f16
         swc1 f18, 0x2c, v1
         v0 = [a1 + 0]
         lwc1 f4, 0x10, v0
         mul.s f6, f4, f0
         swc1 f6, 0x10, v0
         v0 = [a1 + 0]
         lwc1 f8, 0x14, v0
         mul.s f10, f8, f0
         swc1 f10, 0x14, v0
         v0 = [a1 + 0]
         lwc1 f16, 0x18, v0
         mul.s f18, f16, f0
         swc1 f18, 0x18, v0
         ra = [sp + 0x14]
         sp += 0x20
         ret                      // ra
         

    loc_0x8035d6d0: // orphan
         t7 = 0x8611 << 16
         t6 = a2 + 0x24
         [sp + 0x58] = t6
         t8 = [a2 + 0x20]         // t9
         t7 = [t7 - 0x52e0]       // t9
         at = 0 | 0x8de0
         t9 = t8 << 2
         t9 -= t8
         t9 <<= 2
         t9 -= t8
         t9 <<= 2
         a0 = t7 + t9
         a0 += at
         byte [a2 + 0xc7] = 0
         call 0x86103b74          // 0x86103b74(0x2d00008db3, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x54] = a0
         a2 = [s0 + 0]
         a0 = [sp + 0x54]
         v1 = 0x8611 << 16

    loc_0x8035d71c: // orphan
         v0 = [a2 + 0xc]          // t9
         t0 = v0 << 9
         if                       // likely
         t3 = v0 << 0xb

    loc_0x8035d72c: // orphan
         v1 = [v1 - 0x52e0]       // t9
         at = 0 | 0x8000
         t2 = [a2 + 0x20]         // t9
         v1 += at
         at = 0x8611 << 16
         lwc1 f4, -0x5478, at
         lwc1 f6, 0x1768, v1
         at = 0x442f << 16
         mtc1 at, f10
         mul.s f8, f4, f6
         at = 0x8611 << 16
         lwc1 f18, -0x5474, at
         t1 = [v1 + 0xff0]        // t9
         t3 = t2 << 2
         t3 -= t2
         // CODE XREF from fcn.80358e2c @ +0x908
         t3 <<= 3
         mul.s f16, f10, f8
         v0 = t1 + t3
         lwc1 f6, 8, v0

    loc_0x8035d778: // orphan
         t8 = 0 + 0xf
         mul.s f4, f16, f18
         add.s f10, f6, f4
         swc1 f10, 8, v0
         a2 = [s0 + 0]
         t4 = [a2 + 0xc]          // t9
         t5 = t4 << 0xb
         if                       // likely
         t6 = 0 + 0x1e

    loc_0x8035d79c: // orphan
         goto 0x8035d7a8
         [sp + 0x50] = t6

    loc_0x8035d7a4: // orphan
         [sp + 0x50] = t8

    loc_0x8035d7a8: // orphan
         // CODE XREF from fcn.80339030 @ 0x8035d79c
         t7 = [a2 + 0x1c]
         at = , t7 < 3
         if                       // unlikely
         

    loc_0x8035d7b8: // orphan
         lwc1 f16, 0x10, a2
         // CODE XREF from fcn.80358e2c @ +0x90c
         mtc1 0, f9
         mtc1 0, f8
         cvt.d.s f18, f16
         c.lt.d f8, f18
         
         bc1f 0x8035d840
         

    loc_0x8035d7d8: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f6
         at = 0x8611 << 16
         lwc1 f0, -0x5470, at
         a2 = [s0 + 0]
         if                       // likely
         cvt.s.w f4, f6

    loc_0x8035d980: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f10, f10, f6
         at = 0x4f80 << 16
         mtc1 at, f4
         at = 0x3f80 << 16
         mtc1 at, f18
         // CODE XREF from fcn.80358e2c @ +0x920
         div.s f0, f10, f4
         t2 = 0x8611 << 16
         t2 = [t2 - 0x52e0]       // t9
         at = 0x8611 << 16
         lwc1 f6, -0x545c, at
         at = 1 << 16
         at += t2
         lwc1 f10, -0x6898, at
         at = 0x442f << 16
         mul.s f4, f6, f10
         add.s f16, f0, f0
         sub.s f8, f16, f18
         mtc1 at, f16
         at = 0x8611 << 16
         lwc1 f10, -0x5458, at
         mul.s f18, f16, f4
         lwc1 f4, 0x4c, a2
         mul.s f6, f8, f18
         
         mul.s f16, f6, f10
         add.s f8, f4, f16
         swc1 f8, 0x4c, a2
         call 0x86100da8          // 0x86100da8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         v1 = 0x8611 << 16
         v1 -= 0x52e0
         t1 = [v1 + 0]            // t9
         a0 = 0 | 0x8000
         at = 0x8611 << 16
         t3 = t1 + a0
         lwc1 f6, 0x1768, t3
         lwc1 f18, -0x5454, at
         at = 0x3fa0 << 16
         mtc1 at, f10
         mul.s f2, f18, f6
         a2 = [s0 + 0]
         at = 0x8611 << 16
         lwc1 f12, 0x54, a2
         mul.s f4, f2, f10
         c.lt.s f12, f4
         
         bc1fl 0x8035daf4
         t4 = [sp + 0x50]         // t9
         lwc1 f16, -0x5450, at
         mtc1 0, f14
         // CODE XREF from fcn.80358e2c @ +0x924
         at = 0x8611 << 16
         mul.s f8, f2, f16
         add.s f18, f12, f8
         swc1 f18, 0x54, a2
         a2 = [s0 + 0]
         lwc1 f0, 0x54, a2
         swc1 f0, 0x5c, a2
         t4 = [s0 + 0]
         swc1 f0, 0x58, t4
         t7 = [s0 + 0]
         t5 = [v1 + 0]            // t9
         t9 = [t7 + 0x20]
         t6 = t5 + a0
         t8 = [t6 + 0xff0]        // t9
         t0 = t9 << 2
         t0 -= t9
         t0 <<= 3
         v0 = t8 + t0
         swc1 f14, 4, v0
         t2 = [v1 + 0]            // t9
         lwc1 f6, -0x544c, at
         t3 = [s0 + 0]
         t1 = t2 + a0
         lwc1 f10, 0x1768, t1
         lwc1 f4, 0x54, t3
         at = 0x442f << 16
         mul.s f2, f6, f10
         mtc1 at, f8

    loc_0x8035dac4: // orphan
         at = 0x8611 << 16
         lwc1 f10, -0x5448, at
         swc1 f14, 0xc, v0
         div.s f16, f4, f2
         mul.s f18, f8, f2
         
         mul.s f6, f16, f18
         
         mul.s f4, f6, f10
         swc1 f4, 8, v0
         a2 = [s0 + 0]
         t4 = [sp + 0x50]         // t9
         t5 = [a2 + 0x1c]         // t9
         at = , t4 < t5
         beql at, 0, 0x8035db60   // likely
         t1 = [sp + 0x58]

    loc_0x8035db6c: // orphan
         if                       // likely
         t4 = v0 << 8

    loc_0x8035db74: // orphan
         if                       // unlikely
         a1 = sp + 0x48

    loc_0x8035db7c: // orphan
         a2 = sp + 0x44
         call 0x86102b30          // 0x86102b30(-1, 0x442f71dcfe116408, 0x178044, -1)
         [sp + 0x54] = a0
         at = 0x8611 << 16
         lwc1 f0, -0x5444, at
         lwc1 f8, 0x48, sp
         lwc1 f18, 0x44, sp
         a0 = [sp + 0x54]         // t9
         mul.s f16, f8, f0
         a2 = [s0 + 0]
         v1 = 0x8611 << 16
         mul.s f6, f18, f0
         swc1 f16, 0x48, sp
         swc1 f6, 0x44, sp
         lwc1 f12, 0x18, a0
         lwc1 f2, 0x48, a2
         c.lt.s f2, f12
         
         bc1fl 0x8035dbd8
         sub.s f0, f12, f2
         goto 0x8035dbdc
         sub.s f0, f12, f2

    loc_0x8035ddac: // orphan
         t9 = [a2 + 0x20]
         t6 = 0x8611 << 16
         t6 = [t6 - 0x52e0]       // t9
         t8 = t9 << 2
         t8 -= t9
         t8 <<= 3
         t8 += t9
         t7 = t6 + 0x7fff
         t7 = [t7 + 0xfed]        // t9
         t8 <<= 2
         t8 -= t9
         t8 <<= 2
         v0 = t7 + t8
         t0 = [v0 + 0xc]          // t9
         at = 0x1000 << 16
         a1 = 1 << 16
         t2 = t0 | at             // t9
         [v0 + 0xc] = t2
         a0 = [s0 + 0]
         call 0x8003eb74          // 0x8003eb74(0xffff, 0x10000, 0x8, -1)
         a0 += 0x24
         t1 = 0x8611 << 16
         t1 = [t1 - 0x52e0]       // t9
         at = 1 << 16
         a2 = [s0 + 0]
         at += t1
         lwc1 f0, -0x6834, at
         lwc1 f4, 0x14, a2
         v1 = 0x20 << 16
         add.s f16, f0, f0
         at = 0x8611 << 16
         add.s f8, f4, f16
         swc1 f8, 0x14, a2
         a2 = [s0 + 0]
         v0 = [sp + 0x58]
         a0 = [sp + 0x58]
         t3 = [a2 + 0xc]          // t9
         t4 = t3 << 0xa
         if                       // likely
         

    loc_0x8035de4c: // orphan
         at = 0x8611 << 16
         lwc1 f0, -0x543c, at
         lwc1 f18, 0x28, v0
         at = 0x8611 << 16
         c.lt.s f0, f18
         
         bc1fl 0x8035de78
         lwc1 f6, 0x10, a2
         swc1 f0, 0x28, v0
         a2 = [s0 + 0]
         lwc1 f6, 0x10, a2
         lwc1 f10, -0x5438, at
         mul.s f4, f6, f10
         goto 0x8035df08
         swc1 f4, 0x10, a2

    loc_0x8035de88: // orphan
         lwc1 f0, -0x5434, at
         lwc1 f16, 0x28, a0
         c.lt.s f16, f0
         
         bc1f 0x8035dee8
         
         swc1 f0, 0x28, a0
         a2 = [s0 + 0]
         v0 = [a2 + 0xc]          // t9
         t5 = v0 & v1
         if                       // likely
         t6 = v0 | v1             // t9

    loc_0x8035e538: // orphan
         call 0x8610362c          // 0x8610362c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t3 = 0x8611 << 16
         t3 = [t3 - 0x52e0]       // t9
         at = 1 << 16
         v0 = 0x87f1 << 16
         at += t3
         lwc1 f8, -0x6898, at
         at = 0x8611 << 16

    loc_0x8035e55c: // orphan
         lwc1 f10, -0x53fc, at
         v0 += 0x19dc
         t4 = [v0 + 0]            // t9
         mul.s f0, f8, f10
         swc1 f0, 0x5c, t4
         t5 = [v0 + 0]            // t9
         swc1 f0, 0x58, t5
         t6 = [v0 + 0]            // t9
         goto 0x8035e58c
         swc1 f0, 0x54, t6

    loc_0x8035e58c: // orphan
         // CODE XREF from fcn.803547f0 @ 0x8035e530
         // CODE XREF from fcn.80339030 @ 0x8035e57c
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x80361d9c: // orphan
         // CODE XREF from fcn.80361c30 @ 0x80361d70
         add.s f8, f12, f14
         t4 = 0 + 0x500
         mtc1 t1, f10
         t5 = 0 + 0x500
         if                       // likely
         // CODE XREF from fcn.80339030 @ 0x803597d8
         cvt.s.w f18, f10

    loc_0x80363864: // orphan
         // CODE XREF from fcn.80339168 @ 0x80359890
         t5 = , unsigned  byte [v0 + 0]
         t7 = , unsigned  byte [v0 + 2]
         t9 = t8 << 0x10
         t6 = t5 << 0x18
         t5 = , unsigned  byte [v0 + 3]
         t4 = t6 | t9
         t8 = t7 << 8
         t6 = t4 | t8
         t7 = t6 | t5
         [v1 + 4] = t7
         v1 = [a0 + 0]
         t8 = 0xfb00 << 16
         t4 = v1 + 8
         [a0 + 0] = t4
         [v1 + 0] = t8
         t4 = , unsigned  byte [v0 + 5]
         t6 = , unsigned  byte [v0 + 4]
         t7 = , unsigned  byte [v0 + 6]
         t8 = t4 << 0x10
         t5 = t6 << 0x18
         t6 = , unsigned  byte [v0 + 7] // s4
         t9 = t5 | t8
         t4 = t7 << 8
         t5 = t9 | t4
         t7 = t5 | t6             // s4
         // CODE XREF from fcn.80339168 @ 0x80359894
         [v1 + 4] = t7
         v1 = [a0 + 0]
         t4 = 0xdb06 << 16
         t4 |= 0x3c
         t9 = v1 + 8
         [a0 + 0] = t9
         [v1 + 0] = t4
         t8 = [t3 + 4]
         t6 = 0xde00 << 16
         [v1 + 4] = t8
         v1 = [a0 + 0]
         t5 = v1 + 8
         [a0 + 0] = t5
         [v1 + 0] = t6
         t7 = [t3 + 0]
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t7
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x80363a5c: // orphan
         // CODE XREF from fcn.80339030 @ 0x803598a8
         a3 = 0xf00 << 16
         mfc1 a1, f0
         mfc1 a2, f0
         call 0x87f08df8          // 0x87f08df8(-1, 0x442f71dcfe116408, 0x8, 0xf000000)
         
         s4 = v0
         a0 = s1
         a1 = s2
         a2 = s2 + 0x14
         call 0x87f0252c          // 0x87f0252c(0x442f71dcfe117dbd, -1, 0x13, 0xf000000)
         a3 = 0 + 4
         s0 = s2
         s2 = 0 + 0x169
         s1 = 0
         s3 = 0 + 4
         [s0 + 0x644] = s4
         a0 = 0 + 0x157
         call 0x8004c990          // 0x8004c990(0x157, -1, 0x13, 0x4)
         a1 = 0
         call 0x8004ca60          // 0x8004ca60(0x157, 0x0, 0x13, 0x4)
         a0 = v0                  // s4
         [s0 + 0x648] = v0
         call 0x8003570c          // 0x8003570c(0xff, 0x0, 0x13, 0x4)
         byte [s0 + 0x654] = s1
         divu 0, v0, s2
         s1 += 1                  // lo
         t6 = hi
         s0 += 0x14
         if                       // likely
         

    loc_0x8036c2b4: // orphan
         goto 0x8036c2dc          // fcn.8036c1f4+0xe8
         [s0 + 8] = s6

}
