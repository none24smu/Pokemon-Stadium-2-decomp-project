int fcn.8031c6d4 (int esi, int edx) {
    loc_0x802fdcc8:
        // CODE XREF from fcn.80339168 @ 0x8031a1f4
        t1 = halfword [v0 + 0xa]
        t2 = 0x8af3 << 16
        t2 = halfword [t2 + 0xffc]
        a0 = t8 + t9
        a1 = t0 + t1
        a0 <<= 0x10
        a1 <<= 0x10
        a2 = 0x8af2 << 16
        a3 = 0x8af2 << 16
        a0 = , signed  a0 >> 0x10
        a1 = , signed  a1 >> 0x10
        a3 = halfword [a3 + 0x6f24]
        a2 += 0x6b98
        // CODE XREF from fcn.80339168 @ 0x8031a1f8
        call 0x8ac015b0 // 0x8ac015b0(0xfffffffe, 0xffff6407, 0x8af26b98, 0xffff)
        [sp + 0x10] = t2
        ra = [sp + 0x1c]
        // CODE XREF from fcn.80339168 @ 0x802fdc94
        sp += 0x30
        v0 = 0
        ret
        // CODE XREF from fcn.8031c6d4 @ 0x8031a200
        0x802fdd14
         // (break)
    loc_0x802fdd14: // orphan
             // CODE XREF from fcn.80339168 @ 0x8031a1f4
             t1 = halfword [v0 + 0xa]
             t2 = 0x8af3 << 16
             t2 = halfword [t2 + 0xffc]
             a0 = t8 + t9
             a1 = t0 + t1
             a0 <<= 0x10
             a1 <<= 0x10
             a2 = 0x8af2 << 16
             a3 = 0x8af2 << 16
             a0 = , signed  a0 >> 0x10
             a1 = , signed  a1 >> 0x10
             a3 = halfword [a3 + 0x6f24]
             a2 += 0x6b98
             // CODE XREF from fcn.80339168 @ 0x8031a1f8
             call 0x8ac015b0          // 0x8ac015b0(0xfffffffe, 0xffff6407, 0x8af26b98, 0xffff)
             [sp + 0x10] = t2
             ra = [sp + 0x1c]
             // CODE XREF from fcn.80339168 @ 0x802fdc94
             sp += 0x30
             v0 = 0
             ret
             // CODE XREF from fcn.8031c6d4 @ 0x8031a200
             

    loc_0x802fdd24: // orphan
         at = 0 + 1               // lo
         beql a0, at, 0x802fdd4c  // unlikely
         a0 = sp + 0x24

    loc_0x802fdd30: // orphan
         goto 0x802fdde4          // fcn.80339168-0x3b384
         ra = [sp + 0x1c]

    loc_0x802fdd38: // orphan
         t6 = , unsigned  halfword [a1 + 2]
         t7 = t6 & 0xfffd
         goto 0x802fdde0
         halfword [a1 + 2] = t7

    loc_0x802fdd4c: // orphan
         call 0x800504bc          // 0x800504bc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x34] = a1
         a1 = [sp + 0x34]

    loc_0x802fdde0: // orphan
         t5 = 0x8af3 << 16
         t5 = halfword [t5 + 0xffa]
         a2 = 0x8af2 << 16
         a3 = 0x8af2 << 16
         a3 = halfword [a3 + 0x6f20]
         // CODE XREF from fcn.80339168 @ 0x8031a20c
         a2 += 0x6dd8             // arg3
         a1 = halfword [sp + 0x28]
         call 0x8ac015b0          // 0x8ac015b0(-1, 0x0, 0x8af26dd8, 0xffff)
         [sp + 0x10] = t5
         // CODE XREF from fcn.8031c6d4 @ 0x802fdd40
         ra = [sp + 0x1c]

    loc_0x802fe1f8: // orphan
         halfword [v0 + 0] = t3
         halfword [v0 + 2] = 0
         halfword [v0 + 4] = v1
         [v0 + 8] = t4
         [v0 + 0xc] = a0
         // CODE XREF from fcn.8031a1a0 @ +0xfc
         t7 = [t5 + 0]            // t9
         s0 += 1
         a0 += 1                  // arg1
         // CODE XREF from fcn.80339168 @ 0x8031a278
         swl t7, 0x16, v0
         swr t7, 0x19, v0
         t9 = [ra + 0]
         v1 += 0x18
         v0 += 0x20
         // CODE XREF from fcn.80339168 @ 0x8031a27c
         swl t9, -6, v0
         if                       // likely
         // CODE XREF from fcn.8031c6d4 @ 0x8031a274
         swr t9, -3, v0

    loc_0x802fe350: // orphan
         // CODE XREF from fcn.8031c300 @ 0x8031a2bc
         halfword [at + 0xff8] = 0
         at = 0x8af3 << 16
         halfword [at + 0xffc] = 0
         at = 0x8af3 << 16
         halfword [at + 0xffa] = 0
         at = 0x8af3 << 16
         halfword [at + 0xffe] = 0

    loc_0x802fe36c: // orphan
         at = 0x8af3 << 16
         ret                      // ra
         // CODE XREF from fcn.8031c300 @ 0x8031a2c0
         halfword [at + 0xc4] = 0

    loc_0x802fee34: // orphan
         call 0x8af125d0          // 0x8af125d0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x8031a374
         a0 = halfword [a0 + 0xffc]
         a0 = 0x8af3 << 16
         v0 = 0x8af3 << 16
         v0 = halfword [v0 + 0x1002]

    loc_0x802ff16c: // orphan
         a0 = 0 + 3
         t8 = 0 + 2
         at = 0x8af3 << 16
         halfword [at + 0x1000] = t8
         goto 0x802ff21c          // fcn.80339168-0x39f4c
         a0 = 0 + 2

    loc_0x802ff1f8: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         a2 = 0x8af3 << 16
         a2 += 0xffe
         t7 = halfword [a2 + 0]
         a0 = 0x8af3 << 16

    loc_0x802ff248: // orphan
         bnel a0, at, 0x802ff260  // likely
         // CODE XREF from fcn.80339168 @ 0x8031a3e4
         at = , unsigned  , a0 < 0xb // arg1

    loc_0x802ff284: // orphan
         a1 = [a1 + 0xd8]         // t9
         call 0x8ac06400          // 0x8ac06400(-1, -1, 0x8, -1)
         a0 = [a0 + 0xa8]         // t9
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = [a1 + 0xdc]         // t9
         call 0x8ac06400          // 0x8ac06400(0x8af30000, -1, 0x8, -1)
         a0 = [a0 + 0xac]         // t9
         a0 = 0x8af3 << 16

    loc_0x802ff30c: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031a3f8
         t2 = [t2 + 0xa8]         // t9
         v0 = 0x8af3 << 16
         v0 += 0xb4
         goto 0x802ff334
         [v0 + 0] = t2

    loc_0x802ff358: // orphan
         t7 = 0x8af3 << 16
         t7 = [t7 + 0xa8]         // t9
         t8 = 0x8af3 << 16
         t8 = [t8 + 0xac]         // t9
         at = 0x8af3 << 16

    loc_0x802ff3a0: // orphan
         t0 = [t0 + 0xac]         // t9
         at = 0x8af3 << 16
         t2 = 0x8af3 << 16

    loc_0x802ff85c: // orphan
         // CODE XREF from fcn.8031c300 @ 0x8031a488
         v1 = 0x8af3 << 16
         a0 = 0x8af3 << 16
         t6 = , unsigned  halfword [v0 + 2]
         a1 = 0x8af3 << 16
         t4 = t6 | 1              // lo
         halfword [v0 + 2] = t4

    loc_0x802ffa6c: // orphan
         v1 += 1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         at = , v1 < 0xfa
         if                       // likely
         // CODE XREF from fcn.8031c300 @ 0x8031a4b8
         byte [t6 + 0] = a0

    loc_0x803004d4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031a5f0
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x80300ab0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031a65c
         a1 = 0x8af3 << 16

    loc_0x80300dd0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8031a688
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         if                       // likely
         // CODE XREF from fcn.8031c6d4 @ 0x8031a68c
         t8 = , signed  t7 >> 2

    loc_0x80300eac: // orphan
         goto 0x80301074
         // CODE XREF from fcn.80339030 @ 0x8031a698
         s6 = halfword [sp + 0x62]

    loc_0x80300ef8: // orphan
         // CODE XREF from fcn.80339030 @ 0x8031a6a4
         t2 = s1 << 6
         t5 = t3 + t4
         t7 = halfword [sp + 0x68]
         t2 += s1
         s3 = t5 - t6
         t2 <<= 1
         s3 += 4
         s3 <<= 0x10
         s7 = t1 + t2
         s7 += 6
         s3 = , signed  s3 >> 0x10
         t9 = t7 - 0x14
         s7 <<= 0x10
         at = , t9 < s3           // lo
         if                       // fcn.8030103c+0x28 // unlikely
         s7 = , signed  s7 >> 0x10

    loc_0x80301858: // orphan
         sp -= 0x38
         a2 = a0 << 0x10

    loc_0x80301940: // orphan
         t3 = s0 & 4
         byte [s3 + 1] = s1
         s4 = s7                  // t9
         if                       // unlikely
         t4 = s0 & 0x40

    loc_0x80302268: // orphan
         t6 = 0 + 0xf
         halfword [sp + 0x36] = t6
         call 0x8af0326c          // 0x8af0326c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a0
         if                       // fcn.80339030-0x36d8c // likely
         t7 = 0x8af2 << 16

    loc_0x80302280: // orphan
         t7 = [t7 + 0x63c0]       // t9
         t8 = , unsigned  halfword [t7 + 8]
         t9 = t8 & 0x4000
         beql t9, 0, 0x803022a8   // fcn.80339030-0x36d88 // unlikely
         v1 = [sp + 0x30]         // t9

    loc_0x80302294: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 3
         t0 = 0 + 0xe

    loc_0x8030489c: // orphan
         at = 0x8af3 << 16
         sp -= 0x18
         halfword [at + 0x47f4] = 0
         [sp + 0x14] = ra
         at = 0x8af3 << 16
         a0 = 0x8af3 << 16
         halfword [at + 0x47f6] = 0
         a0 += 0x4808
         call 0x80075630          // 0x80075630(0x8af34808, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xe
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x80304928: // orphan
         halfword [a1 + 0] = 0
         halfword [s0 + 0] = 0
         v1 += 0x4818
         a0 = 0
         t0 = 0 + 0xfa
         a3 = 0 + 0xfe            // t3
         a2 = 0 + 0xff            // s4

    loc_0x80304944: // orphan
         t6 = , unsigned  byte [v1 + 0] // s4
         a0 += 1
         blezl t6, 0x8030498c     // unlikely
         a1 = 0x7469 << 16

    loc_0x80304954: // orphan
         t7 = halfword [s0 + 0]
         t8 = t7 + 1              // lo
         halfword [s0 + 0] = t8
         v0 = , unsigned  byte [v1 + 0] // s4
         if                       // unlikely
         

    loc_0x8030496c: // orphan
         if                       // unlikely
         

    loc_0x80304974: // orphan
         t9 = halfword [a1 + 0]
         t1 = t9 + 1              // lo
         halfword [a1 + 0] = t1

    loc_0x80304980: // orphan
         if                       // likely
         v1 += 3

    loc_0x80304988: // orphan
         a1 = 0x7469 << 16

    loc_0x8030498c: // orphan
         a1 |= 0x746c
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x442f71dcfe11746c, 0x8, -1)
         a0 = s1
         v1 = 0x8af3 << 16
         v1 += 0x42ec
         [v1 + 0] = v0
         t2 = 0 + 0x3b
         halfword [v0 + 0x30] = t2
         // CODE XREF from fcn.80317ed0 @ 0x8031aa18
         t5 = [v1 + 0]            // s4
         t4 = 0 + 0xc5
         a1 = 0x736c << 16
         a1 |= 0x6966
         a0 = s1
         call 0x8ac06d8c          // 0x8ac06d8c(0x442f71dcfe117dbd, 0x736c6966, 0x8, -1)
         halfword [t5 + 0x32] = t4
         v1 = 0x8af3 << 16
         v1 += 0x42e4
         [v1 + 0] = v0
         t6 = 0 + 0x3b
         halfword [v0 + 0x30] = t6
         t9 = [v1 + 0]            // s4
         t8 = 0 + 0x67
         a1 = 0x6275 << 16
         a1 |= 0x6e31
         a0 = s1
         call 0x8ac06d8c          // 0x8ac06d8c(0x442f71dcfe117dbd, 0x62756e31, 0x8, -1)
         halfword [t9 + 0x32] = t8
         at = 0x8af3 << 16
         a1 = 0x7769 << 16
         [at + 0x42e0] = v0
         a1 |= 0x5f31
         call 0x8ac06d8c          // 0x8ac06d8c(0x442f71dcfe117dbd, 0x77695f31, 0x8, -1)
         a0 = s1
         a2 = 0x8af3 << 16
         a2 += 0x42e8
         [a2 + 0] = v0
         t1 = halfword [v0 + 8]
         at = 0x8af3 << 16
         // CODE XREF from fcn.81d17064 @ +0x9c0
         a0 = 0 + 0x3b
         halfword [at + 0x47f0] = t1
         t2 = halfword [v0 + 0xa]
         at = 0x8af3 << 16
         a1 = 0 + 0x3d
         halfword [at + 0x47f2] = t2
         t3 = halfword [v0 + 0xe]
         at = 0 + 0x14
         div 0, t3, at
         t4 = lo
         halfword [sp + 0x2a] = t4
         call 0x8004c874          // 0x8004c874(0x3b, 0x3d, 0x8af342e8, -1)
         
         at = 0x8af3 << 16
         [at + 0x47f8] = v0

    loc_0x80304f54: // orphan
         a1 = s0 - 1
         a0 = s4
         a1 = s1
         call 0x800495bc          // "&s" // 0x800495bc(0xff, 0x442f71dcfe117dbd, 0x8, -1)
         a2 = v0                  // s4

    loc_0x8030505c: // orphan
         halfword [a1 + 2] = t7   // arg2
         a0 = sp + 0x24           // arg1

    loc_0x80305064: // orphan
         call 0x800504bc          // 0x800504bc(-1, 0x442f71dcfe116408, 0x8, -1)
         // CALL XREF from fcn.82901dd4 @ +0xcc
         [sp + 0x34] = a1
         v0 = [sp + 0x34]

    loc_0x803050d8: // orphan
         at = 0 + 1               // lo
         beql a0, at, 0x80305100  // unlikely
         a0 = sp + 0x24

    loc_0x803050e4: // orphan
         goto 0x80305158          // fcn.80339168-0x34010
         ra = [sp + 0x1c]

    loc_0x80305100: // orphan
         call 0x800504bc          // 0x800504bc(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80305104: // orphan
         [sp + 0x34] = a1
         v0 = [sp + 0x34]
         t8 = halfword [sp + 0x24]
         t0 = halfword [sp + 0x26]
         t9 = halfword [v0 + 8]
         t1 = halfword [v0 + 0xa]

    loc_0x80305230: // orphan
         t2 = 0x8af3 << 16
         t7 = t6 & 0xfffd
         halfword [a2 + 2] = t7
         a3 = [a3 + 0x4fd0]       // t9
         t3 = 0x8af3 << 16
         t4 = 0x8af3 << 16
         t8 = , unsigned  halfword [a3 + 2]
         t5 = 0x8af3 << 16
         a0 = 0x8af3 << 16
         t9 = t8 & 0xfffd
         halfword [a3 + 2] = t9
         t0 = [t0 + 0x4fe4]       // t9
         t6 = , unsigned  halfword [t0 + 2]
         t7 = t6 & 0xfffd
         halfword [t0 + 2] = t7
         t1 = [t1 + 0x4fd4]       // t9
         t8 = , unsigned  halfword [t1 + 2]
         t9 = t8 & 0xfffd
         // CODE XREF from fcn.80339168 @ 0x8031aa94
         halfword [t1 + 2] = t9
         t2 = [t2 + 0x4fe8]       // t9
         t6 = , unsigned  halfword [t2 + 2]
         t7 = t6 & 0xfffd
         halfword [t2 + 2] = t7
         // CODE XREF from fcn.80339168 @ 0x8031aa98
         t3 = [t3 + 0x4fd8]       // t9
         t8 = , unsigned  halfword [t3 + 2]
         t9 = t8 & 0xfffd
         halfword [t3 + 2] = t9
         t4 = [t4 + 0x4fec]       // t9
         t6 = , unsigned  halfword [t4 + 2]
         t7 = t6 & 0xfffd
         halfword [t4 + 2] = t7
         t5 = [t5 + 0x4fdc]       // t9
         t6 = 0x8af3 << 16
         t8 = , unsigned  halfword [t5 + 2]
         t9 = t8 & 0xfffd
         halfword [t5 + 2] = t9
         t6 = , unsigned  halfword [t6 + 0x500c]
         at = , unsigned  , t6 < 0xa
         if                       // likely
         t6 <<= 2

    loc_0x803052d0: // orphan
         // CODE XREF from fcn.8031a86c @ +0x230
         at = 0x8af3 << 16
         at += t6
         t6 = [at - 0x6504]       // t9
         goto t6                  // t9
         

    loc_0x8030538c: // orphan
         v0 = [v0 + 0x4fc8]       // t9
         v1 = 0x8af3 << 16
         a0 = 0x8af3 << 16
         t7 = , unsigned  halfword [v0 + 2]
         a1 = 0x8af3 << 16
         t8 = t7 | 1
         halfword [v0 + 2] = t8
         v1 = [v1 + 0x4fcc]       // t9
         t9 = , unsigned  halfword [v1 + 2]
         t6 = t9 | 1
         halfword [v1 + 2] = t6

    loc_0x803053b8: // orphan
         a0 = [a0 + 0x4fc0]       // t9
         t7 = , unsigned  halfword [a0 + 2]
         t8 = t7 & 0xfffe
         halfword [a0 + 2] = t8
         a1 = [a1 + 0x4fc4]       // t9
         t9 = , unsigned  halfword [a1 + 2]
         t6 = t9 & 0xfffe
         ret                      // ra
         halfword [a1 + 2] = t6

    loc_0x80305528: // orphan
         a0 = [a0 + 0x4fc0]       // t9
         a1 = 0x8af3 << 16
         v0 = 0x8af3 << 16
         t7 = , unsigned  halfword [a0 + 2]
         v1 = 0x8af3 << 16
         t8 = t7 & 0xfffe
         halfword [a0 + 2] = t8
         a1 = [a1 + 0x4fc4]       // t9
         t9 = , unsigned  halfword [a1 + 2]
         t6 = t9 & 0xfffe
         // CODE XREF from fcn.8031a86c @ +0x260
         halfword [a1 + 2] = t6
         v0 = [v0 + 0x4fc8]       // t9
         t7 = , unsigned  halfword [v0 + 2]

    loc_0x8030ac7c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b178
         a1 |= 0x999a
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x442f71dcfe11fd9a, 0x8, -1)

    loc_0x8030ac84: // orphan
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 + 0x771c]       // t9
         // CODE XREF from fcn.8031ace0 @ +0x49c
         a1 = 0x3c23 << 16
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 |= 0xd70a
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x3c23d70a, 0x3ecccccd, -1)

    loc_0x8030aca4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b180
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 + 0x7720]       // t9
         a1 = 0x3c23 << 16
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 |= 0xd70a
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x3c23d70a, 0x3ecccccd, -1)
         a0 += 0x40
         a0 = 0x8af3 << 16
         a0 = [a0 + 0x7718]       // t9
         a1 = 0x3f19 << 16
         a2 = 0x3dcc << 16
         a2 |= 0xcccd
         a1 |= 0x999a
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x3f19999a, 0x3dcccccd, -1)
         a0 += 0x44
         a0 = 0x8af3 << 16
         a0 = [a0 + 0x771c]       // t9
         a1 = 0x3c23 << 16
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 |= 0xd70a

    loc_0x8030ad00: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b18c
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x44
         a0 = 0x8af3 << 16

    loc_0x8030ad0c: // orphan
         a0 = [a0 + 0x7720]       // t9
         a1 = 0x3c23 << 16
         // CODE XREF from fcn.8031ace0 @ +0x4b0
         a2 = 0x3ecc << 16
         a2 |= 0xcccd
         a1 |= 0xd70a
         call 0x8af1cdac          // 0x8af1cdac(-1, 0x3c23d70a, 0x3ecccccd, -1)
         a0 += 0x44

    loc_0x8030ad28: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b194
         v1 = 0x8af3 << 16
         v1 += 0x7718
         v0 = [v1 + 0]            // t9
         at = 0x42f0 << 16
         mtc1 at, f12
         lwc1 f0, 0x48, v0
         at = 0x3e80 << 16
         mtc1 at, f14
         sub.s f4, f12, f0
         at = 0x4334 << 16
         mtc1 at, f16
         at = 0x8af3 << 16
         mul.s f6, f4, f14
         lwc1 f18, -0x614c, at
         add.s f8, f0, f6
         swc1 f8, 0x48, v0
         v0 = [v1 + 0]            // t9
         lwc1 f2, 0x4c, v0
         sub.s f10, f16, f2
         mul.s f4, f10, f14

    loc_0x8030b1f4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1c0
         [t6 + 0] = t9
         t1 = halfword [t1 + 0x7860]
         t2 = 0x8af3 << 16
         t2 = halfword [t2 + 0x7862]
         halfword [at + 0x7798] = t1
         // CODE XREF from fcn.8031ace0 @ +0x4e4
         at = 0x8af3 << 16
         ret                      // ra
         halfword [at - 0x361e] = t2

    loc_0x8030b21c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1c8
         t6 = 0x8af3 << 16
         t6 += 0x7868
         t0 = t7 + 0x528

    loc_0x8030b2a8: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1d4
         byte [a0 + 0x23] = t8
         t9 = , unsigned  byte [sp + 0x1f]
         byte [a0 + 0x24] = t9
         t0 = , unsigned  byte [sp + 0x23] // s4
         t9 = a0
         byte [a0 + 0x25] = t0
         t1 = , unsigned  byte [sp + 0x27] // s4
         byte [a0 + 0x26] = t1
         t2 = , unsigned  byte [sp + 0x2b] // lo
         byte [a0 + 0x27] = t2
         t3 = [sp + 0x2c]
         [a0 + 0x14] = t4
         [a0 + 0] = t3
         t5 = [sp + 0x30]         // t9
         [a0 + 0x1c] = t5
         t6 = [sp + 0x34]
         t0 = t6 + 0x504

    loc_0x8030b334: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1e0
         at = 0x8af2 << 16
         [at + 0x7938] = 0
         ret                      // ra
         sp += 0x18

    loc_0x8030b400: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1ec
         halfword [v0 + 0x30] = t9
         halfword [v0 + 0x32] = t0
         halfword [v0 + 2] = t2
         a1 |= 0x746e
         call 0x8ac06d8c          // 0x8ac06d8c(-1, 0x442f71dcfe11746e, 0x8, -1)
         a0 = s0

    loc_0x8030b418: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1f4
         at = 0x8af3 << 16
         a1 = 0x6162 << 16
         a2 = 0x8af3 << 16
         [at + 0x7e88] = v0
         a2 += 0x7e90
         a1 |= 0x746e
         call 0x8ac05e40          // 0x8ac05e40(-1, 0x6162746e, 0x8af37e90, -1)
         a0 = s0
         a0 = 0x8af3 << 16
         a1 = 0x8af3 << 16
         a1 = [a1 + 0x7e88]       // s4
         call 0x8ac06400          // 0x8ac06400(0x8af30000, 0xff, 0x8af37e90, -1)
         a0 += 0x7e90
         a1 = 0x725f << 16
         a2 = 0x725f << 16
         a3 = 0x8af3 << 16
         a3 += 0x7f08
         a2 |= 0x725f
         a1 |= 0x6c5f
         call 0x8ac02c80          // 0x8ac02c80(0x8af37e90, 0x725f6c5f, 0x725f725f, 0x8af37f08)
         a0 = s0
         a1 = 0x7961 << 16
         a2 = 0x8af3 << 16
         a2 += 0x7d98
         a1 |= 0x3175
         call 0x8ac05ed4          // 0x8ac05ed4(0x104, 0x79613175, 0x8af37d98, 0x8af37f08)
         a0 = s0
         a1 = 0x7961 << 16
         a2 = 0x8af3 << 16
         // CODE XREF from fcn.8031c6d4 @ 0x8031b208
         a2 += 0x7e10
         // CODE XREF from fcn.8031c6d4 @ 0x8031b1fc
         a1 |= 0x3173
         call 0x8ac05ed4          // 0x8ac05ed4(0x104, 0x79613173, 0x8af37e10, 0x8af37f08)
         a0 = s0
         v0 = [sp + 0x60]
         a0 = sp + 0x6c

    loc_0x8030b4a4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b200
         a1 = 0 + 0x504
         t3 = halfword [v0 + 0xa]
         s0 = halfword [v0 + 8]
         call 0x80075630          // 0x80075630(-1, 0x504, 0x8, -1)

    loc_0x8030b4b4: // orphan
         [sp + 0x570] = t3
         t4 = [sp + 0x60]
         t7 = 0 + 0xd
         t8 = 0 + 0x55
         t5 = halfword [t4 + 0xc]
         t9 = 0 + 0x41
         t0 = 0 + 6
         halfword [sp + 0x6c] = t5
         t6 = halfword [t4 + 0xe]
         t1 = 0 + 3
         halfword [sp + 0x80] = t7
         [sp + 0x90] = t8
         [sp + 0x94] = t9
         [sp + 0x98] = t0
         halfword [sp + 0xa8] = t1
         halfword [sp + 0x6e] = t6
         t2 = 0 + 1               // lo
         t3 = 0 + 5
         t5 = 0 + 0x41
         t6 = 0 + 0x64
         t1 = sp + 0x6c
         t0 = 0 + 0xb
         t9 = 0 + 4
         t8 = 0 + 0x64
         t7 = 0 + 0x64
         t4 = 0 + 8               // a2
         a0 = 0x8af2 << 16
         [sp + 0x70] = 0
         [sp + 0x74] = 0
         halfword [sp + 0x78] = 0
         halfword [sp + 0x7a] = 0

    loc_0x8030b530: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031b20c
         halfword [sp + 0x7e] = 0
         halfword [sp + 0xaa] = t2
         [sp + 0xa0] = t3
         [sp + 0xa4] = 0
         halfword [sp + 0xb6] = t5
         a0 = [a0 + 0x7930]       // t9
         [sp + 0x10] = t4
         [sp + 0x24] = t7
         [sp + 0x28] = t8
         [sp + 0x2c] = t9
         [sp + 0x30] = t0
         [sp + 0x34] = t1
         [sp + 0x20] = t6
         [sp + 0x1c] = 0
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         a1 = 0 + 0xa
         a2 = s0
         call 0x8af1dc14          // 0x8af1dc14(-1, 0xa, 0x104, -1)
         a3 = [sp + 0x570]        // t3
         t2 = 0x8af2 << 16
         t2 = halfword [t2 + 0x7934]
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x8030b594: // orphan
         call 0x8af1db40          // 0x8af1db40(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8030b59c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8030b58c
         s0 = 0x8af3 << 16
         s0 += 0x7798
         a1 = halfword [s0 + 0]
         // CODE XREF from fcn.80339168 @ 0x8031b214
         a0 = 0 + 0x3b
         call 0x8004c874          // 0x8004c874(0x3b, 0xffff, 0x8, -1)

    loc_0x8030b5b0: // orphan
         a1 += 0x12
         a0 = 0 + 0x3d
         call 0x8004c54c          // 0x8004c54c(0x3d, 0x442f71dcfe11641a, 0x8, -1)
         a1 = v0                  // s4
         // CODE XREF from fcn.8031ace0 @ +0x53c
         t5 = [sp + 0x58]
         t3 = 0 + 0xc4
         a0 = 0x8af3 << 16
         halfword [t5 + 0x32] = t3
         a1 = halfword [s0 + 0]   // lo
         call 0x8af01718          // 0x8af01718(0x8af30000, 0x1, 0x8, -1)
         a0 = [a0 - 0x4570]       // t9

    loc_0x8030b5dc: // orphan
         a0 = 0x8af2 << 16
         a0 = [a0 + 0x7930]       // t9
         call 0x8af02da4          // 0x8af02da4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0                  // s4
         s0 = 0x8af2 << 16
         s0 = [s0 + 0x7930]       // t9
         at = 0 + 6
         a0 = 0x8af3 << 16

    loc_0x8030b86c: // orphan
         s0 = 0x8af2 << 16
         s0 = [s0 + 0x7930]       // t9
         [sp + 0x1c] = ra
         a3 = 0 + 0x104           // s0
         t7 = [s0 + 0x4c]         // t9
         t6 = halfword [s0 + 0x34]
         // CODE XREF from fcn.80339168 @ 0x8031b260
         a0 = [s0 + 8]            // t9
         // CODE XREF from fcn.80339168 @ 0x8031b254
         t0 = [s0 + 0x5c]         // t9
         unsigned , hi
         t8 = lo
         t9 = a0 + t8
         t1 = t9 + t0

    loc_0x8030b968: // orphan
         t6 = a0 & 0xf
         v0 = a1 & 0xf            // a2
         if                       // unlikely
         [sp + 4] = a1

    loc_0x8030b978: // orphan
         t7 = a0 & 0xf0
         t8 = , signed  t7 >> 4
         bnel v0, t8, 0x8030b994  // likely
         v0 = 0

    loc_0x8030b988: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8030b970
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x8030b994: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8030b980
         ret                      // ra
         

    loc_0x8030d318: // orphan
         [sp + 0x3c] = ra
         at = 0x8af4 << 16
         a0 = 0x8af2 << 16
         halfword [at - 0x6dd8] = 0
         a0 = [a0 + 0x7970]       // t9
         call 0x80075630          // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x14b0

    loc_0x8030d330: // orphan
         a1 = 0 + 0x14b0
         a0 = 0x8af4 << 16
         a0 -= 0x6a78
         call 0x80075630          // 0x80075630(0x8af39588, 0x14b0, 0x8, -1)
         a1 = 0 + 0xe
         a0 = 0x8af4 << 16
         a0 -= 0x6a68
         call 0x80075630          // 0x80075630(0x8af39598, 0xe, 0x8, -1)
         a1 = 0 + 0xe
         a0 = 0x8af4 << 16
         a0 -= 0x6a58
         call 0x80075630          // 0x80075630(0x8af395a8, 0xe, 0x8, -1)
         a1 = 0 + 0xe
         call 0x8af00504          // 0x8af00504(0x8af395a8, 0xe, 0x8, -1)
         a0 = 0 + 0x8d
         call 0x8af003a8          // 0x8af003a8(0x8d, 0xe, 0x8, -1)
         a0 = 0 + 0x8d
         [sp + 0x584] = v0
         call 0x8ac06e98          // 0x8ac06e98(0x8d, 0xe, 0x8, -1)
         a0 = v0                  // s4
         a1 = 0x7769 << 16
         a1 |= 0x5f33
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x77695f33, 0x8, -1)
         a0 = [sp + 0x584]        // s4
         v1 = 0x8af4 << 16
         v1 -= 0x6b94
         a1 = 0x8af2 << 16
         [v1 + 0] = v0
         a1 -= 0xe10
         a2 = 0x8af2 << 16
         a2 = [a2 + 0x7970]       // t9
         [sp + 0x44] = a1
         call 0x8004e308          // 0x8004e308(0xff, 0x8af1f1f0, -1, -1)
         a0 = v0                  // s4
         a1 = 0x7769 << 16
         a1 |= 0x5f31
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x77695f31, -1, -1)
         a0 = [sp + 0x584]        // s4
         v1 = 0x8af4 << 16
         v1 -= 0x6b9c
         [v1 + 0] = v0
         a2 = 0x8af2 << 16
         a2 = [a2 + 0x7970]       // t9
         a0 = v0                  // s4
         a1 = [sp + 0x44]
         call 0x8004e308          // 0x8004e308(0xff, 0x8af1f1f0, -1, -1)
         a2 += 0x52c
         a1 = 0x7769 << 16
         a1 |= 0x5f32
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x77695f32, 0x10000052b, -1)
         a0 = [sp + 0x584]        // s4
         v1 = 0x8af4 << 16
         v1 -= 0x6b98
         [v1 + 0] = v0
         a2 = 0x8af2 << 16
         a2 = [a2 + 0x7970]       // t9
         a0 = v0                  // s4
         a1 = [sp + 0x44]
         call 0x8004e308          // 0x8004e308(0xff, 0x8af1f1f0, -1, -1)
         a2 += 0xa58
         a1 = 0x7769 << 16
         a1 |= 0x5f34
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x77695f34, 0x100000a57, -1)
         a0 = [sp + 0x584]        // s4
         v1 = 0x8af4 << 16
         v1 -= 0x6b90
         [v1 + 0] = v0
         a2 = 0x8af2 << 16
         a2 = [a2 + 0x7970]       // t9
         a0 = v0                  // s4
         a1 = [sp + 0x44]
         call 0x8004e308          // 0x8004e308(0xff, 0x8af1f1f0, -1, -1)
         a2 += 0xf84
         a1 = 0x7769 << 16
         a1 |= 0x5f35
         call 0x8ac06d8c          // 0x8ac06d8c(0xff, 0x77695f35, 0x100000f83, -1)
         a0 = [sp + 0x584]        // s4
         v1 = 0x8af4 << 16
         v1 -= 0x6b8c

    loc_0x8030e55c: // orphan
         at = 0 + 1               // lo
         bnel a0, at, 0x8030e5c4  // fcn.803217dc-0x13218 // likely
         ra = [sp + 0x1c]

    loc_0x803100f8: // orphan
         t9 = , unsigned  halfword [a1 + 2]
         t4 = 0x8af4 << 16
         // UNKNOWN XREF from fcn.82e7c7f0 @ +0x574
         t5 = 0x8af4 << 16
         t6 = t9 & 0xfffd
         halfword [a1 + 2] = t6

    loc_0x803110cc: // orphan
         halfword [s0 + 0] = t4
         t6 = 0 + 6
         halfword [s2 + 0] = t5
         halfword [s0 + 0] = t6
         call 0x8af22608          // 0x8af22608(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 4
         goto 0x803110f4          // fcn.80339168-0x28074
         

    loc_0x80311138: // orphan
         at = 0x8af4 << 16
         halfword [at - 0x5eb4] = s0

    loc_0x80311140: // orphan
         call 0x80054488          // 0x80054488(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s2 + 1] // s4
         a0 = 0 + 0x13
         call 0x80051d64          // 0x80051d64(0x13, 0xff, 0x8, -1)
         a1 = 0
         call 0x80054e48          // 0x80054e48(0x13, 0x0, 0x8, -1)
         a0 = 0 + 3
         goto 0x80311170          // fcn.80339168-0x27ff8
         

    loc_0x803111c0: // orphan
         a3 = 0 + 0x1c6           // arg4
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80311224: // orphan
         t9 = , unsigned  halfword [t9 - 0x5f80]
         at = , unsigned  , t9 < 0xb
         if                       // fcn.80339168-0x27690 // likely
         t9 <<= 2

    loc_0x80311234: // orphan
         at = 0x8af3 << 16
         at += t9
         t9 = [at - 0x5bac]
         goto t9
         

    loc_0x80311270: // orphan
         halfword [at - 0x4592] = 0
         goto 0x80311ad8          // fcn.80339168-0x27690
         halfword [sp + 0x3e] = t1

    loc_0x80311428: // orphan
         call 0x8af22608          // 0x8af22608(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         call 0x8ac00824          // 0x8ac00824(0x0, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80311adc          // fcn.80339168-0x2768c
         v0 = halfword [sp + 0x3e]

    loc_0x80312050: // orphan
         a0 = 0
         if                       // unlikely
         a3 = 0x8af4 << 16

    loc_0x8031205c: // orphan
         a3 = [a3 - 0x5a00]       // arg4 // t9
         t0 = 0x8af4 << 16
         t1 = 0x8af4 << 16
         t8 = , unsigned  halfword [a3 + 2]
         t7 = t8 | 1              // lo
         halfword [a3 + 2] = t7   // arg4
         t0 = [t0 - 0x59fc]       // t9
         t9 = , unsigned  halfword [t0 + 2] // lo
         t6 = t9 | 1              // lo
         halfword [t0 + 2] = t6
         t1 = [t1 - 0x59f8]       // t9
         t8 = , unsigned  halfword [t1 + 2] // lo
         t7 = t8 | 1              // lo
         halfword [t1 + 2] = t7

    loc_0x80312094: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80312054
         call 0x8ac004e0          // 0x8ac004e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         if                       // unlikely
         t2 = 0x8af4 << 16

    loc_0x803120a4: // orphan
         t2 = [t2 - 0x59f4]       // t9
         t3 = 0x8af4 << 16
         t4 = 0x8af4 << 16
         t9 = , unsigned  halfword [t2 + 2] // lo
         t6 = t9 | 1              // lo
         halfword [t2 + 2] = t6
         t3 = [t3 - 0x59f0]       // t9
         t8 = , unsigned  halfword [t3 + 2] // lo
         t7 = t8 | 1              // lo
         halfword [t3 + 2] = t7
         t4 = [t4 - 0x59ec]       // t9
         t9 = , unsigned  halfword [t4 + 2] // lo
         t6 = t9 | 1              // lo
         halfword [t4 + 2] = t6

    loc_0x803120dc: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031209c
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80312178: // orphan
         a3 -= 0x5a08             // arg4
         [t6 + 0x2c] = v1
         t7 = [a3 + 0]            // arg4 // t9
         t0 = 0x8af4 << 16
         t0 -= 0x5a04
         [t7 + 0x2c] = v1
         t8 = [t0 + 0]            // t9
         t1 = 0x8af4 << 16
         t1 -= 0x5a00
         [t8 + 0x2c] = v1
         // CODE XREF from fcn.8031b72c @ +0xa0
         t9 = [t1 + 0]
         a0 = 0x3cb4 << 16
         a0 |= 0x5aff             // arg1
         t2 = 0x8af4 << 16
         t2 -= 0x59fc
         [t9 + 0x2c] = a0
         // CODE XREF from fcn.8031b72c @ +0xa8
         t6 = [t2 + 0]            // t9
         t4 = 0x8af4 << 16
         t4 -= 0x59f8
         [t6 + 0x2c] = a0
         t7 = [t4 + 0]            // t9
         // CODE XREF from fcn.8031b72c @ +0xac
         t3 = 0x8af4 << 16
         t3 -= 0x59f4

    loc_0x803121d4: // orphan
         // CODE XREF from fcn.8031b72c @ +0xa4
         [t7 + 0x2c] = a0
         t8 = [t3 + 0]
         a1 = 0x3c78 << 16
         a1 |= 0xb4ff             // arg2
         t5 = 0x8af4 << 16
         t5 -= 0x59f0
         [t8 + 0x2c] = a1
         t9 = [t5 + 0]
         ra = 0x8af4 << 16
         ra -= 0x59ec
         [t9 + 0x2c] = a1
         t6 = [ra + 0]            // t9
         v0 = 0x8af4 << 16
         v1 = 0 + 1               // lo
         [t6 + 0x2c] = a1
         v0 = halfword [v0 - 0x5c38]
         // CODE XREF from fcn.80339168 @ 0x8031b7e0
         if                       // fcn.80339168-0x26f2c // unlikely
         

    loc_0x8031221c: // orphan
         if                       // unlikely
         a0 = 0 + 2               // arg1

    loc_0x80312224: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x8031222c: // orphan
         if                       // unlikely
         

    loc_0x80312234: // orphan
         goto 0x8031267c          // fcn.803123a4+0x2d8
         // CODE XREF from fcn.80339168 @ 0x8031b7e4
         v0 = [sp + 0x18]

    loc_0x80312344: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031221c
         v0 = 0x8af4 << 16
         v0 = halfword [v0 - 0x5c36]
         if                       // unlikely
         

    loc_0x80312354: // orphan
         // CODE XREF from fcn.80318030 @ 0x8031b820
         if                       // unlikely
         a0 = 0 + 2               // arg1

    loc_0x8031235c: // orphan
         if                       // unlikely
         

    loc_0x80312364: // orphan
         goto 0x80312440          // fcn.803123a4+0x9c
         // CODE XREF from fcn.80318030 @ 0x8031b824
         

    loc_0x8031236c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031234c
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x5c24]       // t9
         t8 = 0xf0e6 << 16
         t8 |= 0x6eff
         // CODE XREF from fcn.80338964 @ 0x8031b828
         t6 = , unsigned  halfword [v0 + 2] // lo
         t7 = t6 | 1              // lo
         halfword [v0 + 2] = t7
         t9 = [a3 + 0]            // arg4
         t6 = 0x8af4 << 16
         v0 = 0 + 0x34

    loc_0x80312394: // orphan
         // CODE XREF from fcn.80318030 @ 0x8031b830
         [t9 + 0x2c] = t8
         t6 = [t6 - 0x59b8]       // t9
         if                       // fcn.803123a4+0x8 // unlikely
         // CODE XREF from fcn.80338964 @ 0x8031b82c
         

    loc_0x803123b4: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80312354
         v0 = 0x8af4 << 16

    loc_0x803123e8: // orphan
         // CODE XREF from fcn.80338964 @ 0x8031b834
         v0 = [v0 - 0x5c18]       // t9
         t9 = 0x8cff << 16
         t9 |= 0x8cff
         t7 = , unsigned  halfword [v0 + 2] // lo
         t8 = t7 | 1              // lo
         halfword [v0 + 2] = t8
         t6 = [t2 + 0]
         t7 = 0x8af4 << 16
         v0 = 0 + 0x35
         [t6 + 0x2c] = t9
         t7 = [t7 - 0x59b4]       // t9
         if                       // unlikely
         

    loc_0x803123fc: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031235c
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x5c0c]       // t9

    loc_0x80312448: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80312224
         v0 = 0x8af4 << 16
         v0 = halfword [v0 - 0x5c36]

    loc_0x8031254c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031222c
         v0 = 0x8af4 << 16
         v0 = halfword [v0 - 0x5c36]
         if                       // unlikely
         

    loc_0x8031255c: // orphan
         if                       // unlikely
         

    loc_0x80312574: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80312554
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x5c04]       // t9

    loc_0x8031257c: // orphan
         // CODE XREF from fcn.80338964 @ 0x8031b878
         t6 = 0x8af4 << 16
         t7 = 0x8af4 << 16
         t8 = , unsigned  halfword [v0 + 2] // s4
         t9 = t8 | 1              // s4
         halfword [v0 + 2] = t9
         t6 = [t6 - 0x59b8]       // t9
         // CODE XREF from fcn.8031b72c @ +0x154
         v0 = 0 + 0x50
         if                       // fcn.80338964-0x263a0 // unlikely
         

    loc_0x803125cc: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8031255c
         v0 = 0x8af4 << 16
         v0 = [v0 - 0x5c00]       // t9
         t7 = 0x8af4 << 16
         t8 = 0x8af4 << 16
         t9 = , unsigned  halfword [v0 + 2] // lo
         // CODE XREF from fcn.8031b72c @ +0x160
         t6 = t9 | 1              // lo
         halfword [v0 + 2] = t6
         t7 = [t7 - 0x59b4]       // t9
         v0 = 0 + 0x51
         if                       // unlikely
         

    loc_0x803125f8: // orphan
         // CODE XREF from fcn.80338964 @ 0x8031b894
         t8 = [t8 - 0x59c0]       // t9
         t9 = 0x8af4 << 16
         if                       // unlikely
         

    loc_0x80312608: // orphan
         t9 = [t9 - 0x59a8]
         // CODE XREF from fcn.8031b72c @ +0x16c
         if                       // unlikely
         

    loc_0x80312614: // orphan
         goto 0x8031261c
         v0 = 0 + 0x54

    loc_0x8031261c: // orphan
         // CODE XREFS from fcn.8031c6d4 @ 0x803125f0, 0x80312600, 0x8031260c, 0x80312614
         goto 0x80312678          // fcn.80338964-0x262ec
         // CODE XREF from fcn.8031b72c @ +0x170
         [sp + 0x18] = v0

    loc_0x803137a8: // orphan
         t8 = 0 + 4
         at = 0x8af4 << 16
         halfword [at - 0x599e] = t8
         // CODE XREF from fcn.803132dc @ +0x4c8
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80313948: // orphan
         v0 = [v0 - 0x599c]       // t9
         t2 = 0x8af2 << 16
         t5 = 0 + 8               // a2
         t0 = , unsigned  halfword [v0 + 2] // lo
         at = 0x8af4 << 16
         a0 = 0 + 0xc2            // arg1
         t1 = t0 | 1              // lo
         halfword [v0 + 2] = t1
         t2 = [t2 + 0x63c0]       // t9
         t3 = , unsigned  halfword [t2 + 8]
         t4 = t3 & 0x8000
         beql t4, 0, 0x80313988   // unlikely
         ra = [sp + 0x14]

    loc_0x8031397c: // orphan
         call 0x8af00130          // 0x8af00130(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [at - 0x599e] = t5
         ra = [sp + 0x14]

    loc_0x80313988: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80313974
         sp += 0x18
         ret                      // ra
         

    loc_0x803139b4: // orphan
         a1 = 0x8af4 << 16
         t8 = 0 + 0x4f
         a1 -= 0x599c             // arg2
         halfword [t9 + 0x32] = t8
         v0 = [a1 + 0]            // arg2 // t9
         t2 = 0x8af2 << 16

    loc_0x803139cc: // orphan
         t0 = , unsigned  halfword [v0 + 2] // s4
         t1 = t0 | 1              // s4
         halfword [v0 + 2] = t1
         t2 = [t2 + 0x63c0]       // t9
         t3 = , unsigned  halfword [t2 + 8]
         t4 = t3 & 0x8000
         beql t4, 0, 0x80313a10   // unlikely
         ra = [sp + 0x14]

    loc_0x803139ec: // orphan
         v0 = [a1 + 0]            // arg2
         at = 0x8af4 << 16
         a0 = 0 + 0xc2            // arg1
         t5 = , unsigned  halfword [v0 + 2]
         t6 = t5 & 0xfffe
         halfword [v0 + 2] = t6
         call 0x8af00130          // 0x8af00130(0xc2, 0x442f71dcfe116408, 0x8, -1)
         halfword [at - 0x599e] = 0
         ra = [sp + 0x14]

    loc_0x80313a10: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803139e4
         sp += 0x18
         ret                      // ra
         

    loc_0x80313a20: // orphan
         
         

    loc_0x80313a28: // orphan
         
         
         lwl s2, -0x5a70, s7      // t9
         if
         syscall                  // 255 = unknown ()

    loc_0x80313a3c: // orphan
         sync

    loc_0x80313a40: // orphan
                                  // lo
                                  // arg1 // t9
                                  // t6
         srav 0, a1, 0

    loc_0x80313a9c: // orphan
         call 0x8c290000          // 0x8c290000(-1, 0x442f71dcfe116408, 0x8, -1)
         sc 0, 0xc00, t8
         
         sd ra, -1, a3
         sd gp, -0x784, ra
         ld 0
         
         
         
         sd ra, -0x100, ra
         [sp - 0xb00] = a1

    loc_0x80313ac8: // orphan
         
         
         lwl s2, -0x5a48, s7      // t9

    loc_0x80313ad4: // orphan
         
         
         

    loc_0x80313bb4: // orphan
         
         
         
         
         
         
         
         lwl s2, -0x5a48, s7      // t9
         
         
         
         
         
         
         
         lwl s2, -0x3970, s7      // t9
         lwl s2, -0x38f8, s7      // t9
         lwl s2, -0x3880, s7      // t9
         lwl s2, -0x3808, s7      // t9
         lwl s2, -0x3790, s7      // t9
         lwl s2, -0x3718, s7      // t9
         
         

    loc_0x80313c10: // orphan
                                  // s4
                                  // s2
                                  // lo
         
         dsra 0, 0, 0
         
         

    loc_0x80313c2c: // orphan
         dsra32 ra, 0, 0x1f

    loc_0x80313c3c: // orphan
                                  // t9
         dsra 0, 0, 0
         mtlo 0
         
         dsra32 ra, 0, 0x1f

    loc_0x80313c98: // orphan
                                  // lo

    loc_0x80313d5c: // orphan
         
         syscall                  // 255 = unknown ()
         
         

    loc_0x80313d88: // orphan
         

    loc_0x80313e44: // orphan
         
         
         syscall                  // 255 = unknown ()
         cache 0x1f, -0x1974, s7
         swc1 f31
                                  // lo

    loc_0x80313e60: // orphan
         syscall                  // 255 = unknown ()
         
         
         syscall                  // 255 = unknown ()

    loc_0x80313fa4: // orphan
         
         
         
         
         lwl s2, -0x5a48, s7      // t9
         

    loc_0x80313fbc: // orphan
         

    loc_0x80314030: // orphan
         goto 0
         movf 0, 0, fcc0

    loc_0x8031405c: // orphan
         
         sc 0, 0xc00, t8
         
         sc 0, 0xa01, t8
         
         sd ra, -1, a3
         sd gp, -0xd87, ra
         sc 0, 0x1c, s0

    loc_0x803143c8: // orphan
         syscall                  // 255 = unknown ()

    loc_0x8031459c: // orphan
         
         
         if                       // fcn.80339168-0x1ee90 // unlikely
         bnel k0, t9, 0x8032b05c  // fcn.8032b054+0x8 // likely

    loc_0x803145b0: // orphan
         bbit1 s7, 0xb, 0x8030f970
         scd s1, 0x200c, a3

    loc_0x803145c0: // orphan
         
         
         
         
         
         
         
         
         
         

    loc_0x80314768: // orphan
                                  // t9
                                  // t9
         
         
         
         
         
         
         
         
         lwr ra, -1, ra
         
         

    loc_0x80314800: // orphan
                                  // lo
                                  // t9
         dsra 0, 0, 0

    loc_0x80314890: // orphan
         
         dsra32 ra, 0, 0x1f

    loc_0x80314974: // orphan
         dsra32 ra, 0, 0x1f

    loc_0x803149b0: // orphan
         
         dsra32 ra, 0, 0x1f

    loc_0x80314a88: // orphan
         dsra 0, 0, 0

    loc_0x80314b20: // orphan
         
         dsra32 ra, 0, 0x1f

    loc_0x80314b34: // orphan
                                  // t9
         dsra 0, 0, 0
         mtlo 0
         
         dsra32 ra, 0, 0x1f

    loc_0x80314b7c: // orphan
         dlsa 0, 0, 0
         
         dsra32 ra, 0, 0x1f

    loc_0x80314df0: // orphan
         syscall                  // 255 = unknown ()

    loc_0x803154c0: // orphan
         ,hi,lo = 0 * 0

    loc_0x8031575c: // orphan
         ldl t1, 0x3133, k1       // s2
         ldl t1, 0x3135, k1       // s2
         srav 0, 0, 0

    loc_0x803157f8: // orphan
         ldl t1, 0x3136, k1       // s2
         ldl t1, 0x3138, k1       // s2
         

    loc_0x803158e0: // orphan
         

    loc_0x803158f8: // orphan
         ldl t1, 0x3031, k1       // s2
         
         ldl t1, 0x3032, k1       // s2
         
         
         srav 0, 0, 0
         ddivu 0, 0, 0
         

    loc_0x803159a4: // orphan
         
         goto 0
         divu 0, 0, 0

    loc_0x80315c7c: // orphan
         break 0, 1

    loc_0x80315c84: // orphan
         
         
         if                       // unlikely

    loc_0x80317e44: // orphan
         if                       // unlikely

    loc_0x80317e50: // orphan
         

    loc_0x803180a0: // orphan
         if                       // fcn.80318030+0x3f54 // unlikely
         if                       // unlikely

    loc_0x803180ac: // orphan
         if                       // fcn.80318030+0x4020 // unlikely
         if                       // fcn.80339168-0x1d0d4 // unlikely

    loc_0x803180b8: // orphan
         

    loc_0x803180bc: // orphan
         
         if                       // unlikely

    loc_0x8031839c: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x19124 // unlikely

    loc_0x803183a8: // orphan
         if                       // fcn.80339168-0x190ec // unlikely
         if                       // unlikely

    loc_0x803183b4: // orphan
         if                       // fcn.80339168-0x190a0 // unlikely
         if                       // unlikely

    loc_0x803183c0: // orphan
         if                       // fcn.80339168-0x19054 // unlikely
         if                       // unlikely

    loc_0x803183cc: // orphan
         if                       // unlikely
         

    loc_0x80318468: // orphan
         if                       // fcn.80339168-0x1883c // unlikely
         if                       // fcn.80339168-0x187f8 // unlikely

    loc_0x80318474: // orphan
         if                       // fcn.80318454+0x8584 // unlikely
         if                       // unlikely

    loc_0x80318480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031848c: // orphan
         if                       // fcn.80320c04+0xc // unlikely
         if                       // fcn.80339168-0x18514 // unlikely

    loc_0x80318498: // orphan
         if                       // fcn.80339168-0x1848c // unlikely

    loc_0x803184a4: // orphan
         if                       // fcn.80339168-0x18430 // unlikely

    loc_0x8031944c: // orphan
         if                       // fcn.80339168-0x5aa8 // unlikely

    loc_0x80319458: // orphan
         if                       // unlikely

    loc_0x80319464: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x587c // unlikely

    loc_0x80319470: // orphan
         if                       // fcn.80339168-0x5814 // unlikely
         if                       // unlikely

    loc_0x8031947c: // orphan
         if                       // fcn.80339168-0x57f8 // unlikely
         if                       // fcn.80339168-0x57b4 // unlikely

    loc_0x80319488: // orphan
         if                       // fcn.80339168-0x576c // unlikely
         if                       // unlikely

    loc_0x80319494: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194a0: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x5650 // unlikely

    loc_0x803194ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803194f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319500: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319514: // orphan
         if                       // fcn.80339168-0x5140 // unlikely

    loc_0x80319564: // orphan
         if                       // fcn.80339168-0x4cc0 // unlikely
         if                       // fcn.80339168-0x4cec // unlikely

    loc_0x80319570: // orphan
         
         if                       // unlikely
         

    loc_0x8031957c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319588: // orphan
         if                       // fcn.80339168-0x4a3c // unlikely
         if                       // fcn.80339168-0x4a18 // unlikely

    loc_0x80319594: // orphan
         
         if                       // unlikely
         if                       // fcn.80354694-0x1feb4 // unlikely

    loc_0x803195a4: // orphan
         if                       // fcn.80339168-0x4930 // unlikely
         if                       // fcn.80354694-0x1fde8 // unlikely

    loc_0x803195b0: // orphan
         if                       // fcn.80354694-0x1fdc0 // unlikely
         if                       // fcn.80339168-0x4840 // unlikely

    loc_0x80319740: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80319758: // orphan
         
         if                       // fcn.8031818c+0x1de14 // unlikely
         if                       // fcn.80339030-0x307c // unlikely

    loc_0x80319768: // orphan
         if                       // fcn.80339030-0x3044 // unlikely
         if                       // unlikely

    loc_0x803197ac: // orphan
         if                       // fcn.80339168-0x2b98 // unlikely
         if                       // unlikely

    loc_0x803197b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803197c4: // orphan
         if                       // fcn.8031c6d4+0x19fc0 // unlikely
         if                       // unlikely

    loc_0x803197d0: // orphan
         if                       // fcn.80339168-0x2a54 // unlikely
         if                       // fcn.80339168-0x2a10 // unlikely

    loc_0x803197dc: // orphan
         if                       // fcn.80339168-0x2998 // unlikely
         if                       // fcn.80339168-0x2974 // unlikely

    loc_0x803197e8: // orphan
         
         if                       // fcn.80339168-0x28d8 // unlikely
         if                       // fcn.80339168-0x28b4 // unlikely

    loc_0x803197f8: // orphan
         if                       // unlikely

    loc_0x80319804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319810: // orphan
         if                       // unlikely
         

    loc_0x80319820: // orphan
         if                       // fcn.80339168-0x2764 // unlikely
         if                       // fcn.80339168-0x2750 // unlikely

    loc_0x8031982c: // orphan
         if                       // fcn.80339168-0x26c8 // unlikely
         

    loc_0x80319834: // orphan
         if                       // fcn.80339030-0x2538 // unlikely
         if                       // unlikely

    loc_0x80319840: // orphan
         if                       // fcn.80339168-0x2604 // unlikely
         if                       // fcn.80339168-0x25e0 // unlikely

    loc_0x8031984c: // orphan
         if                       // fcn.80339168-0x2598 // unlikely
         if                       // fcn.80339030-0x243c // unlikely

    loc_0x80319858: // orphan
         if                       // fcn.80339168-0x252c // unlikely
         if                       // unlikely

    loc_0x80319864: // orphan
         if                       // fcn.80339168-0x24b0 // unlikely
         

    loc_0x8031986c: // orphan
         
         
         
         
         if                       // fcn.80339168-0x23d8 // unlikely
         if                       // fcn.80339030-0x228c // unlikely

    loc_0x80319888: // orphan
         if                       // fcn.80339168-0x234c // unlikely
         if                       // unlikely

    loc_0x80319894: // orphan
         if                       // fcn.80339168-0x22e0 // unlikely
         if                       // fcn.80339168-0x22cc // unlikely

    loc_0x80319898: // orphan
         if                       // fcn.80339168-0x22e0 // unlikely
         if                       // fcn.80339168-0x22cc // unlikely

    loc_0x803198a0: // orphan
         if                       // fcn.80339168-0x22e4 // unlikely
         if                       // fcn.80336f28 // unlikely

    loc_0x803198a4: // orphan
         if                       // fcn.80339168-0x22e4 // unlikely
         if                       // fcn.80336f28 // unlikely

    loc_0x803198b0: // orphan
         if                       // fcn.8031c6d4+0x1a8ac // unlikely
         

    loc_0x803198b4: // orphan
         if                       // fcn.80339168-0x2180 // unlikely
         if                       // fcn.80339168-0x216c // unlikely

    loc_0x8031994c: // orphan
         if                       // fcn.80339168-0x1c48 // unlikely

    loc_0x80319958: // orphan
         if                       // unlikely

    loc_0x80319964: // orphan
         

    loc_0x803199e4: // orphan
         if                       // fcn.80339168-0x1570 // unlikely

    loc_0x803199fc: // orphan
         if                       // fcn.80339168-0x1428 // unlikely

    loc_0x80319a08: // orphan
         if                       // fcn.80337db0+0xc // unlikely

    loc_0x80319a14: // orphan
         if                       // fcn.80339168-0x1310 // unlikely
         if                       // fcn.80339168-0x12dc // unlikely

    loc_0x80319a20: // orphan
         if                       // fcn.80339168-0x12c4 // unlikely
         if                       // fcn.80339168-0x12b0 // unlikely

    loc_0x80319a2c: // orphan
         if                       // fcn.80339168-0x10b8 // unlikely
         if                       // unlikely

    loc_0x80319a38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80319a44: // orphan
         if                       // fcn.80339168-0xfd0 // unlikely
         if                       // unlikely

    loc_0x80319a50: // orphan
         if                       // fcn.80338204 // unlikely
         if                       // unlikely

    loc_0x80319a5c: // orphan
         if                       // fcn.80339168-0xe18 // unlikely
         if                       // unlikely

    loc_0x80319a68: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0xe38 // unlikely

    loc_0x80319a74: // orphan
         if                       // fcn.80339168-0xd50 // unlikely
         if                       // unlikely

    loc_0x80319aa0: // orphan
         if                       // fcn.80339168-0xc24 // unlikely

    loc_0x80319aac: // orphan
         if                       // fcn.80339168-0xbe8 // unlikely

    loc_0x80319ab8: // orphan
         if                       // fcn.8031c268+0x1c364 // unlikely

    loc_0x80319ac4: // orphan
         if                       // fcn.8031c268+0x1c3a0 // unlikely

    loc_0x80319ad0: // orphan
         

    loc_0x80319e08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a1fc: // orphan
         if                       // fcn.80339168-0x3b3b8 // unlikely
         if                       // unlikely

    loc_0x8031a208: // orphan
         if                       // unlikely
         

    loc_0x8031a264: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a270: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a288: // orphan
         if                       // fcn.80339168-0x3af1c // unlikely

    loc_0x8031a294: // orphan
         if                       // fcn.80339168-0x3aee0 // unlikely
         if                       // fcn.80339168-0x3aebc // unlikely

    loc_0x8031a2a0: // orphan
         if                       // fcn.80339168-0x3ae54 // unlikely
         if                       // fcn.80339168-0x3aea0 // unlikely

    loc_0x8031a2ac: // orphan
         if                       // fcn.80339168-0x3ae58 // unlikely
         if                       // fcn.80339168-0x3ae34 // unlikely

    loc_0x8031a2b8: // orphan
         if                       // fcn.80339168-0x3ae5c // unlikely

    loc_0x8031a2c4: // orphan
         if                       // fcn.8031c300-0x1df68 // unlikely

    loc_0x8031a2d0: // orphan
         if                       // fcn.80339168-0x3ad14 // unlikely

    loc_0x8031a2dc: // orphan
         if                       // fcn.8031a2c8-0x1bedc // unlikely
         if                       // unlikely

    loc_0x8031a2e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a3ec: // orphan
         if                       // fcn.80339168-0x39eb8 // unlikely

    loc_0x8031a484: // orphan
         if                       // fcn.8031c300-0x1ca8c // unlikely
         if                       // unlikely

    loc_0x8031a490: // orphan
         if                       // fcn.8031c300-0x1ca60 // unlikely
         if                       // unlikely

    loc_0x8031a49c: // orphan
         if                       // fcn.8031c300-0x1c9a4 // unlikely
         if                       // unlikely

    loc_0x8031a4a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a4b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a4c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a4cc: // orphan
         if                       // fcn.8031c300-0x1c834 // unlikely
         if                       // unlikely

    loc_0x8031a4d8: // orphan
         if                       // fcn.8031c300-0x1c7b8 // unlikely
         if                       // unlikely

    loc_0x8031a4e4: // orphan
         if                       // unlikely
         if                       // fcn.802ffc2c+0xc // unlikely

    loc_0x8031a5c8: // orphan
         if                       // fcn.80300188+0x90 // unlikely
         if                       // fcn.80300188+0xe4 // unlikely

    loc_0x8031a5d4: // orphan
         if                       // fcn.80300188+0x11c // unlikely
         if                       // fcn.80300188+0x170 // unlikely

    loc_0x8031a5e0: // orphan
         if                       // fcn.80300188+0x1a8 // unlikely
         if                       // unlikely

    loc_0x8031a5ec: // orphan
         if                       // fcn.8030038c+0x30 // unlikely
         if                       // unlikely

    loc_0x8031a5f8: // orphan
         if                       // unlikely
         if                       // fcn.8030043c // unlikely

    loc_0x8031a604: // orphan
         if                       // fcn.8030052c+0x8 // unlikely
         if                       // unlikely

    loc_0x8031a610: // orphan
         if                       // fcn.80300550+0x70 // unlikely
         if                       // unlikely

    loc_0x8031a61c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a628: // orphan
         if                       // fcn.80300814+0x24 // unlikely
         if                       // unlikely

    loc_0x8031a634: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a640: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a64c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a658: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a664: // orphan
         if                       // fcn.80300ac0+0x4 // unlikely
         if                       // unlikely

    loc_0x8031a670: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031a67c: // orphan
         if                       // unlikely
         if                       // fcn.80300c34+0x2c // unlikely

    loc_0x8031a688: // orphan
         if                       // fcn.80300cf0+0x8 // unlikely
         if                       // unlikely

    loc_0x8031a694: // orphan
         if                       // fcn.80300c34 // unlikely
         if                       // unlikely

    loc_0x8031a6a0: // orphan
         if                       // fcn.8030103c-0x17c // unlikely
         if                       // unlikely

    loc_0x8031a6ac: // orphan
         if                       // fcn.80339030-0x38090 // unlikely

    loc_0x8031b174: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b180: // orphan
         if                       // unlikely
         

    loc_0x8031b188: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b194: // orphan
         if                       // unlikely
         

    loc_0x8031b19c: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b1c8: // orphan
         if                       // unlikely
         

    loc_0x8031b1d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b1dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b1e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b1f4: // orphan
         if                       // unlikely
         

    loc_0x8031b1fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b208: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031b274: // orphan
         if                       // fcn.80339168-0x2d6e0 // unlikely

    loc_0x8031b584: // orphan
         if                       // fcn.80339168-0x29900 // unlikely

    loc_0x8031b590: // orphan
         

    loc_0x8031b668: // orphan
         

    loc_0x8031b97c: // orphan
         if                       // fcn.80339168-0x263c8 // unlikely
         

    loc_0x8031b9e8: // orphan
         if                       // fcn.80339168-0x25fc0 // unlikely
         

    loc_0x8031ba94: // orphan
         if                       // unlikely
         

    loc_0x8031ba9c: // orphan
         if                       // unlikely
         if                       // fcn.80318454-0x4c50 // unlikely

    loc_0x8031bac0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bacc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bad8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031baf0: // orphan
         if                       // unlikely
         

    loc_0x8031baf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb50: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x25260 // unlikely

    loc_0x8031bb5c: // orphan
         if                       // unlikely

    loc_0x8031bb60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bb80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc68: // orphan
         if                       // fcn.80318030-0x3788 // unlikely
         if                       // unlikely

    loc_0x8031bc74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bc88: // orphan
         if                       // unlikely

    loc_0x8031bc94: // orphan
         if                       // unlikely

    loc_0x8031bca0: // orphan
         if                       // unlikely

    loc_0x8031bcac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bcb8: // orphan
         if                       // fcn.80339168-0x2466c // unlikely
         if                       // unlikely

    loc_0x8031bcc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bd80: // orphan
         if                       // unlikely

    loc_0x8031bd8c: // orphan
         if                       // unlikely

    loc_0x8031bd98: // orphan
         if                       // unlikely

    loc_0x8031bda4: // orphan
         if                       // unlikely

    loc_0x8031bdb0: // orphan
         

    loc_0x8031bdc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bdd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bddc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bde8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031bdf4: // orphan
         if                       // fcn.80318030-0x257c // unlikely
         if                       // unlikely

    loc_0x8031be08: // orphan
         if                       // unlikely
         

    loc_0x8031be10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031be1c: // orphan
         if                       // fcn.80339168-0x23478 // unlikely
         

    loc_0x8031bfc8: // orphan
         if                       // unlikely

    loc_0x8031c0dc: // orphan
         

    loc_0x8031c4fc: // orphan
         if                       // fcn.80339168-0x1daf8 // unlikely
         

    loc_0x8031c558: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031c564: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031c570: // orphan
         if                       // fcn.80339030-0x1d47c // unlikely
         if                       // unlikely

    loc_0x8031c57c: // orphan
         if                       // fcn.80339168-0x1d418 // unlikely
         if                       // unlikely

    loc_0x8031c588: // orphan
         if                       // fcn.80339168-0x1d3bc // unlikely
         if                       // unlikely

    loc_0x8031c594: // orphan
         
         if                       // unlikely

    loc_0x8031c5d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031c5e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8031c5ec: // orphan
         at = halfword [0 + 0x18]
         if                       // likely
         if                       // likely

    loc_0x8031c5fc: // orphan
         if                       // likely
         at = halfword [0 + 0x48]

    loc_0x8031c604: // orphan
         if                       // likely
         if                       // fcn.80339168-0x1c9ac // likely

    loc_0x8031c610: // orphan
         if                       // fcn.80339168-0x1c914 // likely
         if                       // fcn.80339168-0x1c8f0 // likely

    loc_0x8031c61c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c628: // orphan
         if                       // likely
         at = halfword [0 + 0xd8]

    loc_0x8031c630: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c63c: // orphan
         if                       // fcn.80339168-0x1c728 // likely

    loc_0x8031c640: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c648: // orphan
         at = halfword [0 + 0x11c]

    loc_0x8031c64c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c658: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c664: // orphan
         if                       // likely
         at = halfword [0 + 0x174]

    loc_0x8031c66c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c678: // orphan
         if                       // fcn.80339168-0x1c49c // likely
         if                       // likely

    loc_0x8031c684: // orphan
         if                       // fcn.80339168-0x1c430 // likely
         if                       // fcn.80339168-0x1c41c // likely

    loc_0x8031c688: // orphan
         if                       // fcn.80339168-0x1c430 // likely
         if                       // fcn.80339168-0x1c41c // likely

    loc_0x8031c690: // orphan
         if                       // fcn.80339168-0x1c3a4 // likely
         if                       // likely

    loc_0x8031c69c: // orphan
         if                       // fcn.80338964-0x1bb34 // likely
         if                       // fcn.80339168-0x1c324 // likely

    loc_0x8031c6a8: // orphan
         if                       // fcn.80338964-0x1bac8 // likely
         if                       // fcn.80339168-0x1c2b8 // likely

    loc_0x8031c6b4: // orphan
         if                       // fcn.80339168-0x1c260 // likely
         if                       // likely

    loc_0x8031c6c0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c6cc: // orphan
         if                       // likely
         if                       // fcn.80339168-0x1c094 // likely

    loc_0x8031c6d4: // orphan
           // CALL XREFS from fcn.81618fa8 @ +0x57c, +0x5a4
         if                       // likely
         if                       // fcn.80339168-0x1bfbc // likely

    loc_0x8031c6e0: // orphan
         if                       // fcn.80339168-0x1be84 // likely
         at = halfword [0 + 0x340]

    loc_0x8031c6e8: // orphan
         at = halfword [0 + 0x394]
         at = halfword [0 + 0x3dc]
         at = halfword [0 + 0x414]
         if                       // likely
         if                       // likely

    loc_0x8031c700: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c70c: // orphan
         at = halfword [s0 + 0x474]
         at = halfword [t0 + 0x484]
         at = halfword [s0 + 0x488]

    loc_0x8031c8c4: // orphan
         if                       // fcn.80339168-0x19e60 // likely
         if                       // likely

    loc_0x8031c8d0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c8dc: // orphan
         if                       // fcn.80339030-0x19ba0 // likely
         if                       // likely

    loc_0x8031c8e8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c8f4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c930: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c93c: // orphan
         if                       // fcn.8031fda0+0x30 // likely
         at = halfword [0 + 0xd30]

    loc_0x8031c944: // orphan
         if                       // fcn.8031fe1c+0x1c // likely
         if                       // likely

    loc_0x8031c94c: // orphan
         at = halfword [0 + 0xd48]

    loc_0x8031c950: // orphan
         if                       // fcn.80339168-0x192c4 // likely
         if                       // likely

    loc_0x8031c95c: // orphan
         if                       // fcn.80339168-0x19258 // likely
         if                       // likely

    loc_0x8031c968: // orphan
         if                       // fcn.80339168-0x191fc // likely
         if                       // likely

    loc_0x8031c974: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c980: // orphan
         if                       // fcn.80339168-0x19184 // likely
         if                       // fcn.80339168-0x19170 // likely

    loc_0x8031c98c: // orphan
         if                       // fcn.80339168-0x19148 // likely
         if                       // fcn.80339168-0x19134 // likely

    loc_0x8031c998: // orphan
         at = halfword [0 + 0xdb8]
         if                       // likely
         if                       // likely

    loc_0x8031c9a8: // orphan
         if                       // fcn.80339168-0x1905c // likely
         if                       // likely

    loc_0x8031c9b4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031c9c0: // orphan
         if                       // fcn.80339168-0x18f84 // likely
         if                       // likely

    loc_0x8031c9c8: // orphan
         at = halfword [0 + 0xe18]

    loc_0x8031c9cc: // orphan
         if                       // fcn.80339168-0x18f18 // likely
         if                       // likely

    loc_0x8031c9d8: // orphan
         if                       // fcn.80339168-0x18e9c // likely
         if                       // likely

    loc_0x8031ca74: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031ca80: // orphan
         at = halfword [0 + 0xf8c]
         if                       // fcn.80339168-0x18890 // likely

    loc_0x8031ca88: // orphan
         if                       // fcn.80339168-0x1886c // likely
         at = halfword [0 + 0xfa4]

    loc_0x8031cb14: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cba0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cbac: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cbb8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cbc4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cbd0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cbdc: // orphan
         if                       // likely

    loc_0x8031cbf4: // orphan
         if                       // fcn.80339168-0x17c80 // likely

    loc_0x8031cc00: // orphan
         if                       // likely

    loc_0x8031cc08: // orphan
         if                       // fcn.8031c6d4+0x4e44 // likely
         if                       // likely

    loc_0x8031cc0c: // orphan
         if                       // likely
         if                       // fcn.80339168-0x17bd8 // likely

    loc_0x8031cc14: // orphan
         if                       // fcn.8031c6d4+0x4ed0 // likely
         if                       // likely

    loc_0x8031cc18: // orphan
         if                       // likely
         if                       // fcn.80339168-0x17bac // likely

    loc_0x8031cc20: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc24: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc2c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc30: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc38: // orphan
         if                       // fcn.8031c6d4+0x4f94 // likely
         if                       // likely

    loc_0x8031cc3c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc44: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc48: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc50: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc54: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc5c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc60: // orphan
         if                       // likely
         if                       // fcn.80339030-0x178cc // likely

    loc_0x8031cc68: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cc6c: // orphan
         if                       // likely
         if                       // fcn.80339168-0x179b8 // likely

    loc_0x8031cc78: // orphan
         if                       // likely

    loc_0x8031cc84: // orphan
         if                       // likely

    loc_0x8031cc90: // orphan
         if                       // likely

    loc_0x8031cce0: // orphan
         if                       // fcn.80339030-0x16fdc // likely

    loc_0x8031ccec: // orphan
         if                       // fcn.80339168-0x170b8 // likely

    loc_0x8031ccf8: // orphan
         if                       // fcn.80339168-0x1702c // likely
         if                       // likely

    loc_0x8031cd04: // orphan
         if                       // likely
         if                       // fcn.80339168-0x16fac // likely

    loc_0x8031cd6c: // orphan
         if                       // likely

    loc_0x8031cd78: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cd84: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cd90: // orphan
         if                       // fcn.80339168-0x16b18 // likely
         if                       // fcn.80339030-0x169cc // likely

    loc_0x8031cd9c: // orphan
         if                       // fcn.80339030-0x16954 // likely
         if                       // fcn.80339030-0x16910 // likely

    loc_0x8031cda8: // orphan
         if                       // likely
         if                       // fcn.80339030-0x168e4 // likely

    loc_0x8031cdb4: // orphan
         if                       // likely
         if                       // fcn.80339168-0x16990 // likely

    loc_0x8031cdc0: // orphan
         if                       // likely
         if                       // fcn.80339168-0x16914 // likely

    loc_0x8031cdcc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cdd8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cde4: // orphan
         if                       // fcn.80339168-0x167e4 // likely
         if                       // likely

    loc_0x8031cdf0: // orphan
         if                       // fcn.80339030-0x16640 // likely
         if                       // fcn.80339030-0x165cc // likely

    loc_0x8031cdfc: // orphan
         if                       // fcn.80339030-0x16594 // likely
         if                       // fcn.80339168-0x166a8 // likely

    loc_0x8031ce08: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cebc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031cf1c: // orphan
         if                       // fcn.80339168-0x15c1c // likely
         if                       // fcn.80339168-0x15c08 // likely

    loc_0x8031cf28: // orphan
         if                       // fcn.80339168-0x15be0 // likely
         if                       // fcn.80339168-0x15b9c // likely

    loc_0x8031cf88: // orphan
         if                       // fcn.80339030-0x156a8 // likely
         if                       // likely

    loc_0x8031d0e0: // orphan
         if                       // likely

    loc_0x8031d0ec: // orphan
         if                       // fcn.8031d0b8+0x74c8 // likely

    loc_0x8031d0f8: // orphan
         if                       // fcn.80339168-0x14b7c // likely

    loc_0x8031d104: // orphan
         if                       // fcn.8031d0b8+0x7560 // likely

    loc_0x8031d110: // orphan
         if                       // fcn.8031d0b8+0x755c // likely

    loc_0x8031d274: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d280: // orphan
         if                       // fcn.80339168-0x13994 // likely

    loc_0x8031d28c: // orphan
         if                       // likely

    loc_0x8031d298: // orphan
         if                       // fcn.80339168-0x1380c // likely

    loc_0x8031d2a4: // orphan
         if                       // likely

    loc_0x8031d2b0: // orphan
         if                       // likely

    loc_0x8031d2bc: // orphan
         if                       // fcn.80339168-0x136f8 // likely

    loc_0x8031d2c8: // orphan
         if                       // likely

    loc_0x8031d2d4: // orphan
         if                       // likely

    loc_0x8031d2e0: // orphan
         if                       // fcn.80325bfc+0x48 // likely

    loc_0x8031d2ec: // orphan
         if                       // fcn.80325bfc+0x24 // likely

    loc_0x8031d2f8: // orphan
         if                       // fcn.80339168-0x1342c // likely

    loc_0x8031d304: // orphan
         if                       // fcn.80339168-0x13400 // likely

    loc_0x8031d310: // orphan
         if                       // likely

    loc_0x8031d31c: // orphan
         if                       // fcn.80339168-0x132a8 // likely

    loc_0x8031d340: // orphan
         if                       // fcn.80339168-0x130d4 // likely

    loc_0x8031d34c: // orphan
         if                       // fcn.80339168-0x130f8 // likely
         if                       // fcn.80339168-0x13044 // likely

    loc_0x8031d358: // orphan
         at = halfword [0 + 0x23a8]
         if                       // fcn.80339168-0x12f08 // likely
         if                       // fcn.80339168-0x12ee4 // likely

    loc_0x8031d368: // orphan
         if                       // fcn.80339168-0x12ebc // likely
         if                       // fcn.80339168-0x12b38 // likely

    loc_0x8031d374: // orphan
         if                       // fcn.80339168-0x12ab0 // likely
         if                       // fcn.80339168-0x12a4c // likely

    loc_0x8031d380: // orphan
         if                       // fcn.80339168-0x12a14 // likely
         if                       // fcn.80339168-0x12a80 // likely

    loc_0x8031d38c: // orphan
         at = halfword [0 + 0x24f0]
         at = halfword [0 + 0x24fc]
         if                       // fcn.80339168-0x129c0 // likely
         if                       // fcn.80339168-0x1298c // likely

    loc_0x8031d3a0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d4dc: // orphan
         if                       // fcn.80339168-0x117c8 // likely

    loc_0x8031d4e8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d4f4: // orphan
         if                       // fcn.8031c6d4+0xb270 // likely
         if                       // likely

    loc_0x8031d500: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d504: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d50c: // orphan
         if                       // fcn.8031c6d4+0xb648 // likely
         if                       // likely

    loc_0x8031d510: // orphan
         if                       // likely
         if                       // fcn.80339168-0x112d4 // likely

    loc_0x8031d518: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d51c: // orphan
         if                       // likely
         at = halfword [0 + 0x2aa4]

    loc_0x8031d528: // orphan
         at = halfword [0 + 0x2ab4]

    loc_0x8031d560: // orphan
         if                       // likely
         if                       // fcn.80339168-0x10d50 // likely

    loc_0x8031d584: // orphan
         if                       // fcn.80339168-0x10cf0 // likely

    loc_0x8031d87c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d888: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d894: // orphan
         if                       // likely
         if                       // fcn.80339168-0xe7cc // likely

    loc_0x8031d8a0: // orphan
         at = halfword [0 + 0x344c]
         if                       // fcn.80339168-0xe770 // likely
         if                       // fcn.80339168-0xe75c // likely

    loc_0x8031d8a8: // orphan
         at = halfword [0 + 0x344c]
         if                       // fcn.80339168-0xe770 // likely
         if                       // fcn.80339168-0xe75c // likely

    loc_0x8031d8b0: // orphan
         if                       // likely
         if                       // fcn.80339168-0xe730 // likely

    loc_0x8031d8b4: // orphan
         if                       // likely
         if                       // fcn.80339168-0xe730 // likely

    loc_0x8031d8bc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d8c0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d8c8: // orphan
         if                       // likely
         if                       // fcn.80339168-0xe5c8 // likely

    loc_0x8031d8cc: // orphan
         if                       // likely
         if                       // fcn.80339168-0xe5c8 // likely

    loc_0x8031d8d8: // orphan
           // CALL XREF from fcn.80ba7438 @ +0x8a8
         if                       // likely
         if                       // likely

    loc_0x8031d8e4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d8f0: // orphan
         if                       // fcn.80339168-0xe4b8 // likely
         if                       // likely

    loc_0x8031d8fc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d908: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d914: // orphan
         if                       // likely
         if                       // fcn.8032aed8 // fcn.8032aed8 // likely

    loc_0x8031d920: // orphan
         if                       // fcn.8031c6d4+0xe84c // likely
         if                       // likely

    loc_0x8031d92c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d938: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031d944: // orphan
         if                       // fcn.8031c6d4+0xe970 // likely
         if                       // likely

    loc_0x8031da40: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031da4c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e03c: // orphan
         if                       // fcn.80339168-0x80f8 // likely

    loc_0x8031e048: // orphan
         if                       // fcn.80339168-0x803c // likely

    loc_0x8031e054: // orphan
         if                       // fcn.80331194+0xa4 // likely

    loc_0x8031e060: // orphan
         if                       // fcn.8031e020+0x13274 // likely

    loc_0x8031e068: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e06c: // orphan
         if                       // fcn.80339168-0x7e98 // likely

    loc_0x8031e074: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e078: // orphan
         if                       // fcn.80339168-0x7e0c // likely

    loc_0x8031e084: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e450: // orphan
         if                       // fcn.80339168-0x28d4 // likely

    loc_0x8031e45c: // orphan
         if                       // fcn.80339168-0x2898 // likely

    loc_0x8031e468: // orphan
         if                       // fcn.80339168-0x284c // likely

    loc_0x8031e474: // orphan
         if                       // fcn.80339168-0x2780 // likely

    loc_0x8031e480: // orphan
         if                       // fcn.80339168-0x2754 // likely

    loc_0x8031e48c: // orphan
         if                       // fcn.80339168-0x26b8 // likely

    loc_0x8031e498: // orphan
         if                       // fcn.80339168-0x261c // likely

    loc_0x8031e4a4: // orphan
         if                       // fcn.80339168-0x2570 // likely

    loc_0x8031e4b0: // orphan
         if                       // fcn.80339168-0x24e4 // likely

    loc_0x8031e4bc: // orphan
         if                       // likely

    loc_0x8031e4c8: // orphan
         if                       // fcn.80339168-0x23cc // likely

    loc_0x8031e4d4: // orphan
         if                       // fcn.80339168-0x22c0 // likely

    loc_0x8031e4e0: // orphan
         if                       // fcn.80339168-0x2244 // likely

    loc_0x8031e4f4: // orphan
         if                       // likely
         if                       // fcn.80336f28 // fcn.80336f28 // likely

    loc_0x8031e4f8: // orphan
         if                       // likely

    loc_0x8031e500: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e504: // orphan
         if                       // likely

    loc_0x8031e50c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e510: // orphan
         if                       // likely

    loc_0x8031e518: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e51c: // orphan
         if                       // likely

    loc_0x8031e524: // orphan
         if                       // fcn.8031c6d4+0x1aa50 // likely
         if                       // likely

    loc_0x8031e528: // orphan
         if                       // fcn.80339168-0x1ffc // likely

    loc_0x8031e530: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e534: // orphan
         if                       // likely

    loc_0x8031e53c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e540: // orphan
         if                       // fcn.80339168-0x1e14 // likely

    loc_0x8031e548: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e54c: // orphan
         if                       // fcn.80339168-0x23f8 // likely

    loc_0x8031e554: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e558: // orphan
         if                       // fcn.80339168-0x1d3c // likely

    loc_0x8031e560: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e564: // orphan
         if                       // likely

    loc_0x8031e56c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e570: // orphan
         if                       // fcn.80339168-0x1c44 // likely

    loc_0x8031e578: // orphan
         if                       // fcn.80339030-0x1af8 // likely
         if                       // likely

    loc_0x8031e57c: // orphan
         if                       // fcn.80339168-0x1ad8 // likely

    loc_0x8031e584: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e588: // orphan
         if                       // fcn.80339168-0x1aac // likely

    loc_0x8031e590: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e594: // orphan
         if                       // likely

    loc_0x8031e59c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5a0: // orphan
         if                       // fcn.80339168-0x19c4 // likely

    loc_0x8031e5a8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5ac: // orphan
         if                       // fcn.80339168-0x1908 // likely

    loc_0x8031e5b4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5b8: // orphan
         if                       // fcn.80339168-0x189c // likely

    loc_0x8031e5c0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5c4: // orphan
         if                       // fcn.80339168-0x1780 // likely

    loc_0x8031e5cc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5d0: // orphan
         if                       // fcn.80339168-0x1794 // likely
         if                       // fcn.80339168-0x1780 // likely

    loc_0x8031e5d8: // orphan
         if                       // fcn.80339168-0x17bc // likely

    loc_0x8031e5dc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5e4: // orphan
         if                       // fcn.80339168-0x16f0 // likely

    loc_0x8031e5e8: // orphan
         if                       // fcn.80339168-0x169c // likely
         if                       // likely

    loc_0x8031e5f0: // orphan
         if                       // fcn.80339168-0x1634 // likely

    loc_0x8031e5f4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e5fc: // orphan
         if                       // fcn.80339168-0x1588 // likely

    loc_0x8031e600: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031e608: // orphan
         if                       // fcn.80339168-0x14fc // likely

    loc_0x8031e60c: // orphan
         if                       // fcn.80339168-0x14e8 // likely
         if                       // likely

    loc_0x8031e620: // orphan
         if                       // fcn.80339168-0x12b4 // likely

    loc_0x8031e62c: // orphan
         if                       // fcn.80339168-0x1178 // likely

    loc_0x8031e638: // orphan
         if                       // fcn.80339168-0x10fc // likely

    loc_0x8031ec54: // orphan
         if                       // fcn.80339168+0x47b0 // likely

    loc_0x8031ec60: // orphan
         if                       // fcn.80339168+0x484c // likely

    loc_0x8031edd8: // orphan
         if                       // likely

    loc_0x8031ede4: // orphan
         if                       // fcn.80339168+0x58f0 // likely

    loc_0x8031edf0: // orphan
         if                       // fcn.80339168+0x594c // likely

    loc_0x8031edfc: // orphan
         if                       // fcn.80339168+0x5a28 // likely

    loc_0x8031ee08: // orphan
         if                       // fcn.80339168+0x5aa4 // likely

    loc_0x8031ee14: // orphan
         if                       // fcn.80339168+0x5b20 // likely

    loc_0x8031ee20: // orphan
         if                       // fcn.80339168+0x5b9c // likely

    loc_0x8031ee2c: // orphan
         if                       // fcn.80339168+0x5c48 // likely

    loc_0x8031ee38: // orphan
         if                       // likely

    loc_0x8031ee44: // orphan
         if                       // fcn.80339168+0x5cb0 // likely

    loc_0x8031ee50: // orphan
         if                       // fcn.80339168-0x3a1b4 // likely

    loc_0x8031ee5c: // orphan
         if                       // fcn.80339168-0x3a168 // likely

    loc_0x8031ee68: // orphan
         if                       // fcn.80339168-0x3a08c // likely

    loc_0x8031ee74: // orphan
         if                       // fcn.80339168-0x3a100 // likely

    loc_0x8031ee80: // orphan
         if                       // likely

    loc_0x8031ee8c: // orphan
         if                       // fcn.80339168-0x39ef8 // likely

    loc_0x8031ee98: // orphan
         if                       // fcn.80339168-0x39eac // likely

    loc_0x8031eea4: // orphan
         if                       // fcn.80339168-0x39e70 // likely

    loc_0x8031eeb0: // orphan
         if                       // fcn.80339168-0x39e34 // likely

    loc_0x8031eebc: // orphan
         if                       // likely

    loc_0x8031eec8: // orphan
         if                       // fcn.80339168-0x39ddc // likely

    loc_0x8031eed4: // orphan
         if                       // fcn.80339168-0x39d80 // likely

    loc_0x8031eee0: // orphan
         if                       // fcn.80339168-0x39bb4 // likely

    loc_0x8031eef4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031eef8: // orphan
         at = halfword [0 - 0x7e00]

    loc_0x8031efc0: // orphan
         if                       // fcn.802fff44+0x2c // likely
         if                       // likely

    loc_0x8031f224: // orphan
         if                       // fcn.80339168-0x379e0 // likely

    loc_0x8031f230: // orphan
         if                       // fcn.80301818+0x1c // likely

    loc_0x8031f23c: // orphan
         if                       // fcn.80301860+0x30 // likely
         if                       // fcn.803018a0+0x14 // likely

    loc_0x8031f248: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f254: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f340: // orphan
         if                       // fcn.803021a8+0x58 // likely
         if                       // fcn.803021a8+0x9c // likely

    loc_0x8031f34c: // orphan
         if                       // fcn.8031c6d4-0x1a448 // likely
         if                       // likely

    loc_0x8031f358: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f35c: // orphan
         if                       // fcn.80339030-0x36cd0 // likely

    loc_0x8031f364: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f368: // orphan
         if                       // likely
         if                       // fcn.8030241c+0x4 // likely

    loc_0x8031f374: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f380: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f458: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f464: // orphan
         if                       // fcn.80302d7c+0x18 // likely
         if                       // fcn.80302d7c+0x3c // likely

    loc_0x8031f470: // orphan
         if                       // likely
         if                       // fcn.80339168-0x36344 // likely

    loc_0x8031f4ac: // orphan
         if                       // fcn.80303030 // fcn.80303030 // likely

    loc_0x8031f4b8: // orphan
         if                       // fcn.8030302c // fcn.8030302c // likely

    loc_0x8031f4c0: // orphan
         if                       // fcn.80303074+0x1c // likely
         if                       // fcn.80303098+0xc // likely

    loc_0x8031f4c4: // orphan
         if                       // fcn.80303098+0xc // likely
         if                       // likely

    loc_0x8031f4e4: // orphan
         if                       // likely
         if                       // fcn.803031bc // fcn.803031bc // likely

    loc_0x8031f4f0: // orphan
         if                       // fcn.803031bc+0x28 // likely
         if                       // fcn.803031b0+0xb8 // likely

    loc_0x8031f724: // orphan
         if                       // fcn.80304850+0x38 // likely
         if                       // likely

    loc_0x8031f730: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f73c: // orphan
         if                       // likely
         if                       // fcn.80317ed0-0x1346c // likely

    loc_0x8031f798: // orphan
         if                       // fcn.80339168-0x341dc // likely

    loc_0x8031f7a4: // orphan
         if                       // fcn.80305008 // fcn.80305008 // likely

    loc_0x8031f7b0: // orphan
         if                       // fcn.80339168-0x340d4 // likely

    loc_0x8031f7bc: // orphan
         if                       // fcn.80339168-0x34038 // likely

    loc_0x8031f7c8: // orphan
         if                       // fcn.80339168-0x33fbc // likely
         if                       // likely

    loc_0x8031f7d4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031f7e0: // orphan
         if                       // fcn.80305200+0x4 // likely
         if                       // likely

    loc_0x8031f7ec: // orphan
         if                       // fcn.80305474+0x8 // likely
         if                       // likely

    loc_0x8031f7f8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fa20: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fd88: // orphan
         at = halfword [0 - 0x5450]
         if                       // likely
         if                       // likely

    loc_0x8031fd98: // orphan
         if                       // likely
         at = halfword [0 - 0x5418]

    loc_0x8031fe4c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fe58: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031fe64: // orphan
         if                       // fcn.80339168-0x2db30 // likely
         if                       // likely

    loc_0x8031fe70: // orphan
         at = halfword [0 - 0x51ec]
         if                       // fcn.80339168-0x2da20 // likely
         if                       // fcn.80339168-0x2d9fc // likely

    loc_0x8031fe80: // orphan
         if                       // fcn.80339168-0x2d9e4 // likely
         at = halfword [0 - 0x51b0]

    loc_0x8031fe88: // orphan
         if                       // fcn.8030b7bc+0x30 // likely
         if                       // fcn.80339168-0x2d968 // likely

    loc_0x8031fe94: // orphan
         if                       // fcn.80339168-0x2d910 // likely
         if                       // likely

    loc_0x8031fea0: // orphan
         if                       // likely

    loc_0x8031feac: // orphan
         if                       // likely
         if                       // fcn.80339168-0x2d864 // likely

    loc_0x8031feb8: // orphan
         if                       // fcn.80339168-0x2d89c // likely
         if                       // fcn.80339168-0x2d818 // likely

    loc_0x8031fec4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8031ff18: // orphan
         if                       // fcn.80339168-0x2d29c // likely

    loc_0x8031ff24: // orphan
         if                       // fcn.80339168-0x2d230 // likely

    loc_0x8031ff30: // orphan
         if                       // fcn.80339168-0x2d1d4 // likely

    loc_0x8031ff80: // orphan
         if                       // fcn.80339168-0x2ce94 // likely

    loc_0x8031ff8c: // orphan
         if                       // fcn.80339168-0x2ce68 // likely
         at = halfword [0 - 0x4f20]

    loc_0x8031ffbc: // orphan
         if                       // fcn.8030c3a8+0x114 // likely
         if                       // fcn.8030c3a8+0x158 // likely

    loc_0x8031ffc8: // orphan
         if                       // fcn.8030c3a8+0x140 // likely
         at = halfword [0 - 0x4eb4]

    loc_0x80320090: // orphan
         at = halfword [0 - 0x4bf8]
         if                       // fcn.8030d070+0x70 // likely
         if                       // likely

    loc_0x803200c4: // orphan
         if                       // fcn.8030d230+0x8 // likely

    loc_0x803200d0: // orphan
         if                       // fcn.8030d070+0x104 // likely

    loc_0x803200dc: // orphan
         if                       // likely
         at = halfword [0 - 0x4b68]

    loc_0x80320128: // orphan
         if                       // fcn.80339168-0x2bacc // likely

    loc_0x80320130: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320134: // orphan
         if                       // fcn.80339168-0x2b930 // likely

    loc_0x80320140: // orphan
         if                       // likely
         if                       // likely

    loc_0x8032014c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8032019c: // orphan
         if                       // fcn.80339168-0x2b568 // likely
         if                       // fcn.80339168-0x2b534 // likely

    loc_0x803201a8: // orphan
         if                       // fcn.80339168-0x2b51c // likely
         at = halfword [0 - 0x4950]

    loc_0x80320208: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320274: // orphan
         if                       // fcn.803217dc-0x13294 // likely
         if                       // likely

    loc_0x80320280: // orphan
         if                       // fcn.803217dc-0x132f8 // likely
         if                       // fcn.803217dc-0x132d4 // likely

    loc_0x80320300: // orphan
         if                       // likely
         if                       // fcn.8030ece4 // fcn.8030ece4 // likely

    loc_0x803204c0: // orphan
         if                       // fcn.80339168-0x292c4 // likely

    loc_0x803204ec: // orphan
         if                       // fcn.80339168-0x29058 // likely

    loc_0x803204f8: // orphan
         if                       // fcn.80339168-0x2905c // likely
         at = halfword [0 - 0x40c0]

    loc_0x803204fc: // orphan
         if                       // fcn.80339168-0x2905c // likely
         at = halfword [0 - 0x40c0]

    loc_0x803205c8: // orphan
         at = halfword [0 - 0x3e98]

    loc_0x80320654: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320660: // orphan
         if                       // fcn.80339168-0x28064 // likely
         if                       // likely

    loc_0x8032066c: // orphan
         if                       // likely
         if                       // fcn.80339168-0x27fd4 // likely

    loc_0x80320678: // orphan
         if                       // fcn.80321804-0x10628 // likely
         if                       // likely

    loc_0x80320680: // orphan
         if                       // likely
         at = halfword [0 - 0x3d1c]

    loc_0x80320684: // orphan
         at = halfword [0 - 0x3d1c]

    loc_0x80320688: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320694: // orphan
         at = halfword [0 - 0x3cd0]
         at = halfword [0 - 0x3cbc]
         at = halfword [0 - 0x3cb4]

    loc_0x803206ac: // orphan
         if                       // likely
         at = halfword [0 - 0x3c9c]

    loc_0x80320714: // orphan
         if                       // fcn.80311c34+0x20 // likely
         if                       // likely

    loc_0x8032075c: // orphan
         if                       // likely
         if                       // fcn.80339168-0x27214 // likely

    loc_0x80320768: // orphan
         if                       // fcn.80339168-0x271ec // likely
         if                       // likely

    loc_0x80320774: // orphan
         if                       // likely
         if                       // fcn.80339168-0x2718c // likely

    loc_0x80320780: // orphan
         if                       // likely
         if                       // likely

    loc_0x8032078c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320798: // orphan
         if                       // likely
         if                       // fcn.80339168-0x26e78 // likely

    loc_0x803207a4: // orphan
         if                       // fcn.80339168-0x26e60 // likely
         if                       // likely

    loc_0x803207b0: // orphan
         if                       // likely
         if                       // likely

    loc_0x803207bc: // orphan
         if                       // likely
         if                       // fcn.80338964-0x26550 // likely

    loc_0x803207c8: // orphan
         if                       // fcn.80338964-0x26508 // likely
         if                       // fcn.80338964-0x26454 // likely

    loc_0x803207d4: // orphan
         if                       // fcn.80338964-0x263fc // likely
         if                       // likely

    loc_0x803207dc: // orphan
         if                       // fcn.80338964-0x263a4 // likely

    loc_0x803207e0: // orphan
         if                       // fcn.80338964-0x26470 // likely
         if                       // likely

    loc_0x803207ec: // orphan
         if                       // fcn.80318454-0x5df4 // likely
         if                       // fcn.80339030-0x2698c // likely

    loc_0x803207f8: // orphan
         if                       // fcn.80338964-0x2648c // likely
         if                       // likely

    loc_0x80320804: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320810: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320884: // orphan
         if                       // fcn.80339168-0x265d0 // likely
         if                       // fcn.80339168-0x265bc // likely

    loc_0x80320890: // orphan
         if                       // fcn.80339168-0x26594 // likely
         if                       // fcn.80339168-0x26570 // likely

    loc_0x8032089c: // orphan
         if                       // fcn.80339168-0x26528 // likely
         if                       // fcn.80339168-0x26504 // likely

    loc_0x803208a0: // orphan
         if                       // fcn.80339168-0x26528 // likely
         if                       // fcn.80339168-0x26504 // likely

    loc_0x803208a8: // orphan
         if                       // fcn.80339168-0x264bc // likely
         if                       // fcn.80339168-0x26498 // likely

    loc_0x803208b4: // orphan
         if                       // fcn.80339168-0x26450 // likely
         if                       // fcn.80339168-0x2642c // likely

    loc_0x803208c0: // orphan
         if                       // fcn.80339168-0x263e4 // likely
         if                       // fcn.80339168-0x263c0 // likely

    loc_0x803208c4: // orphan
         if                       // fcn.80339168-0x263e4 // likely
         if                       // fcn.80339168-0x263c0 // likely

    loc_0x803208cc: // orphan
         if                       // fcn.80339168-0x26378 // likely
         if                       // fcn.80339168-0x26354 // likely

    loc_0x803209fc: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a08: // orphan
         if                       // likely
         at = halfword [0 - 0x340c]

    loc_0x80320a10: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a1c: // orphan
         if                       // likely
         at = halfword [0 - 0x33f4]

    loc_0x80320a24: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a30: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a3c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a48: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a54: // orphan
         if                       // likely

    loc_0x80320a60: // orphan
         if                       // likely

    loc_0x80320a6c: // orphan
         if                       // likely

    loc_0x80320a78: // orphan
         if                       // likely

    loc_0x80320a84: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320a90: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320af8: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b04: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b10: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b1c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b28: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b34: // orphan
         if                       // likely
         if                       // fcn.80339168-0x24a8c // likely

    loc_0x80320b40: // orphan
         if                       // fcn.80339168-0x24a24 // likely
         if                       // likely

    loc_0x80320b4c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b58: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320b64: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320cf0: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320cfc: // orphan
         if                       // likely
         if                       // likely

    loc_0x80320d08: // orphan
         if                       // likely
         if                       // likely

    loc_0x803210d8: // orphan
         if                       // fcn.80318030+0x3c // likely
         if                       // likely

    loc_0x803210e4: // orphan
         if                       // fcn.80339168-0x21080 // likely

    loc_0x803210f0: // orphan
         if                       // likely

    loc_0x80321204: // orphan
         if                       // fcn.80339168-0x1fd50 // likely
         // CODE XREF from fcn.80339168 @ 0x80321964
         if                       // likely

    loc_0x80321210: // orphan
         if                       // likely
         if                       // fcn.80339168-0x1fc60 // likely

    loc_0x8032121c: // orphan
         if                       // fcn.80339168-0x1fc78 // likely
         if                       // likely

    loc_0x80321228: // orphan
         if                       // likely

    loc_0x80321234: // orphan
         if                       // likely

    loc_0x80321240: // orphan
         if                       // likely

    loc_0x8032124c: // orphan
         at = halfword [0 - 0x1e64]

    loc_0x8032143c: // orphan
         if                       // fcn.80338964-0x1d024 // likely
         at = halfword [0 - 0x16c4]

    loc_0x80321444: // orphan
         if                       // fcn.80338964-0x1cffc // likely
         if                       // likely

    loc_0x80321450: // orphan
         if                       // fcn.8031b9b8+0xc // likely
         if                       // likely

    loc_0x80321458: // orphan
         at = halfword [0 - 0x16a0]

    loc_0x8032145c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321468: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321474: // orphan
         if                       // likely
         if                       // fcn.80318030+0x3b8c // likely

    loc_0x80321518: // orphan
         at = halfword [0 - 0x13e4]
         if                       // likely
         if                       // likely

    loc_0x80321528: // orphan
         if                       // likely

    loc_0x8032152c: // orphan
         if                       // likely
         at = halfword [0 - 0x13b4]

    loc_0x80321530: // orphan
         at = halfword [0 - 0x13b4]

    loc_0x80321534: // orphan
         at = halfword [0 - 0x1398]
         if                       // likely
         if                       // likely

    loc_0x803215a4: // orphan
         if                       // fcn.80338964-0x1ba6c // likely

    loc_0x803215b0: // orphan
         if                       // fcn.80339168-0x1c2a4 // likely
         at = halfword [0 - 0x1184]

    loc_0x803215d0: // orphan
         if                       // fcn.80339168-0x1bf84 // likely

    loc_0x803215dc: // orphan
         if                       // likely

    loc_0x803215e8: // orphan
         if                       // fcn.80339168-0x1be8c // likely

    loc_0x803215fc: // orphan
         if                       // fcn.8031c6d4+0xe08 // likely
         if                       // likely

    loc_0x80321600: // orphan
         if                       // likely

    loc_0x80321608: // orphan
         if                       // fcn.8031c6d4+0xe54 // likely
         // CODE XREF from fcn.80339168 @ 0x803219d4
         if                       // likely

    loc_0x8032160c: // orphan
         if                       // likely

    loc_0x80321614: // orphan
         if                       // fcn.8031c6d4+0xeb0 // likely
         if                       // likely

    loc_0x80321618: // orphan
         at = halfword [0 - 0x101c]

    loc_0x80321634: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321650: // orphan
         at = halfword [0 - 0xf60]

    loc_0x80321664: // orphan
         at = halfword [0 - 0xf3c]
         if                       // likely
         if                       // fcn.8031d9c8 // fcn.8031d9c8 // likely

    loc_0x80321668: // orphan
         at = halfword [0 - 0xf24]

    loc_0x80321698: // orphan
         if                       // likely

    loc_0x803216ec: // orphan
         if                       // likely
         if                       // likely

    loc_0x803216f8: // orphan
         if                       // likely
         // CODE XREF from fcn.80339168 @ 0x803219f4
         if                       // likely

    loc_0x80321704: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321708: // orphan
         if                       // fcn.80339168-0x1a14c // likely

    loc_0x80321714: // orphan
         at = halfword [0 - 0x9b0]

    loc_0x8032172c: // orphan
         if                       // fcn.80339168-0x19f58 // likely

    loc_0x80321738: // orphan
         if                       // fcn.80339030-0x19d78 // likely
         if                       // likely

    loc_0x80321744: // orphan
         if                       // fcn.80339030-0x19c0c // likely
         if                       // likely

    loc_0x8032175c: // orphan
         if                       // fcn.80339030-0x19944 // likely
         if                       // likely

    loc_0x80321778: // orphan
         if                       // likely
         at = halfword [0 - 0x7d8]

    loc_0x80321790: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321794: // orphan
         if                       // likely
         if                       // fcn.80339168-0x196b0 // likely

    loc_0x803217a0: // orphan
         if                       // likely
         if                       // likely

    loc_0x803217c4: // orphan
         if                       // fcn.8031fda0+0x54 // likely
         if                       // fcn.8031fe08 // fcn.8031fe08 // likely

    loc_0x8032180c: // orphan
         if                       // likely
         if                       // fcn.80339168-0x18d64 // likely

    loc_0x80321818: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321824: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321830: // orphan
         if                       // likely
         if                       // likely

    loc_0x8032183c: // orphan
         if                       // fcn.80321804-0x11e8 // likely
         if                       // likely

    loc_0x80321848: // orphan
         if                       // fcn.80321804-0x119c // likely
         if                       // likely

    loc_0x8032184c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321854: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321858: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321860: // orphan
         if                       // fcn.8031c6d4+0x40dc // likely
         if                       // likely

    loc_0x8032186c: // orphan
         if                       // fcn.8031c6d4+0x41c8 // likely
         if                       // likely

    loc_0x80321870: // orphan
         if                       // likely
         // CODE XREF from fcn.80339168 @ 0x80321a0c
         if                       // likely

    loc_0x80321878: // orphan
         if                       // likely
         if                       // likely

    loc_0x8032187c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80321888: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321a10
         if                       // likely
         if                       // likely

    loc_0x80321b10: // orphan
         bltzl s0, 0x803224d0     // unlikely
         bltzl t0, 0x80322344     // unlikely

    loc_0x80321b1c: // orphan
         bltzl t0, 0x8032235c     // unlikely
         bltzl s0, 0x80322560     // unlikely

    loc_0x80321b28: // orphan
         bltzl s0, 0x803225b8     // unlikely
         // CODE XREF from fcn.80321804 @ +0x240
         bltzl t0, 0x80321f1c     // unlikely

    loc_0x80321b34: // orphan
         bltzl s0, 0x80322678     // fcn.80339168-0x16af0 // unlikely
         bltzl t0, 0x8032261c     // unlikely

    loc_0x80321b40: // orphan
         bltzl s0, 0x80322700     // unlikely
         bltzl t0, 0x80322644     // fcn.80339168-0x16b24 // unlikely

    loc_0x80321b4c: // orphan
         bltzl t0, 0x8032265c     // fcn.80339168-0x16b0c // unlikely
         bltzl s0, 0x803227b0     // unlikely

    loc_0x80321b58: // orphan
         bltzl s0, 0x803227f8     // unlikely
         bltzl t0, 0x803226bc     // fcn.80339168-0x16aac // unlikely

    loc_0x80321ba4: // orphan
         bltzl s0, 0x80322b68     // fcn.80339168-0x16600 // unlikely

    loc_0x80321bbc: // orphan
         bltzl t0, 0x80322abc     // fcn.80339168-0x166ac // unlikely
         bltzl s0, 0x80322c40     // unlikely

    loc_0x80321bc8: // orphan
         bltzl s0, 0x80322c88     // unlikely
         bltzl t0, 0x80322afc     // fcn.80339168-0x1666c // unlikely

    loc_0x80321bd4: // orphan
         bltzl t0, 0x80322b44     // fcn.80339168-0x16624 // unlikely
         bltzl s0, 0x80322d18     // unlikely

    loc_0x80321be0: // orphan
         bltzl s0, 0x80322d60     // fcn.80339168-0x16408 // unlikely
         bltzl t0, 0x80322d74     // unlikely

    loc_0x80321c20: // orphan
         bltzl t0, 0x80323314     // fcn.80339168-0x15e54 // unlikely

    loc_0x80321c2c: // orphan
         bltzl s0, 0x80323360     // fcn.80339168-0x15e08 // unlikely

    loc_0x80321c38: // orphan
         bltzl s0, 0x803233bc     // fcn.80339168-0x15dac // unlikely
         v0 = halfword [0 + 0x5f0]

    loc_0x80321c40: // orphan
         bltzl t0, 0x80323424     // fcn.80339030-0x15c0c // unlikely

    loc_0x80321c4c: // orphan
         bltzl s0, 0x80323480     // fcn.80339168-0x15ce8 // unlikely

    loc_0x80321c58: // orphan
         bltzl t0, 0x803235ac     // unlikely

    loc_0x80321c6c: // orphan
         bltzl 0, 0x8032391c      // fcn.80338964-0x15048 // unlikely
         bltzl 0, 0x80323940      // unlikely

    loc_0x80321c78: // orphan
         bltzl s0, 0x803239b8     // fcn.80323968+0x50 // unlikely
         bltzl t0, 0x8032397c     // unlikely

    loc_0x80321c84: // orphan
         bltzl 0, 0x803239d4      // fcn.8031c6d4+0x7300 // unlikely
         bltzl 0, 0x80323a18      // unlikely

    loc_0x80321c88: // orphan
         bltzl t0, 0x80323abc     // fcn.80339168-0x156ac // unlikely

    loc_0x80321c90: // orphan
         bltzl s0, 0x80323ad0     // unlikely
         // CODE XREF from fcn.80321804 @ +0x258
         bltzl 0, 0x80323b24      // unlikely

    loc_0x80321c94: // orphan
         bltzl t0, 0x80323b78     // unlikely

    loc_0x80321c9c: // orphan
         bltzl s0, 0x80323bac     // fcn.8031c6d4+0x74d8 // unlikely
         bltzl 0, 0x80323c10      // unlikely

    loc_0x80321ca0: // orphan
         bltzl 0, 0x80323c34      // unlikely

    loc_0x80321ca8: // orphan
         bltzl t0, 0x80323bc8     // fcn.8031c6d4+0x74f4 // unlikely
         bltzl s0, 0x80323c8c     // fcn.8031c6d4+0x75b8 // unlikely

    loc_0x80321cb4: // orphan
         bltzl 0, 0x80323d88      // unlikely

    loc_0x80321cc0: // orphan
         bltzl 0, 0x80323dd4      // unlikely

    loc_0x80321ccc: // orphan
         bltzl t0, 0x80323e80     // unlikely

    loc_0x80321cd8: // orphan
         bltzl 0, 0x80323ebc      // unlikely

    loc_0x80321ce4: // orphan
         bltzl s0, 0x80323f04     // unlikely
         v0 = halfword [0 + 0x88c]

    loc_0x80321d38: // orphan
         bltzl s0, 0x803241ac     // unlikely
         v0 = halfword [0 + 0x920]

    loc_0x80321d40: // orphan
         bltzl t0, 0x803241f4     // unlikely
         bltzl s0, 0x80324218     // unlikely

    loc_0x80321d4c: // orphan
         v0 = halfword [0 + 0x978]
         v0 = halfword [0 + 0x9b8]
         bltzl 0, 0x80324458      // unlikely
         v0 = halfword [0 + 0x9c8]

    loc_0x80321d5c: // orphan
         v0 = halfword [0 + 0xaa0]
         bltzl 0, 0x80324af4      // fcn.80339168-0x14674 // unlikely
         bltzl t0, 0x80324b78     // unlikely

    loc_0x80321d6c: // orphan
         v0 = halfword [0 + 0xb88]
         bltzl 0, 0x80324bb4      // fcn.80339168-0x145b4 // unlikely
         bltzl 0, 0x80324bd8      // fcn.80339168-0x14590 // unlikely

    loc_0x80321d7c: // orphan
         v0 = halfword [0 + 0xbb4]
         bltzl t0, 0x80324c74     // unlikely
         bltzl s0, 0x80324c88     // unlikely

    loc_0x80321d8c: // orphan
         bltzl s0, 0x80324ce0     // fcn.80339168-0x14488 // unlikely
         bltzl t0, 0x80324cc4     // fcn.80339168-0x144a4 // unlikely

    loc_0x80321d98: // orphan
         v0 = halfword [0 + 0xbd8]
         // CODE XREF from fcn.80321804 @ +0x264
         bltzl t0, 0x80324d40     // fcn.80324c0c+0x134 // unlikely
         bltzl s0, 0x80324d54     // fcn.80324c0c+0x148 // unlikely

    loc_0x80321dfc: // orphan
         v0 = halfword [0 + 0xc90]
         v0 = halfword [0 + 0xca0]
         bltzl t0, 0x8032521c     // unlikely
         bltzl s0, 0x80325240     // unlikely

    loc_0x80321e30: // orphan
         bltzl s0, 0x80325424     // unlikely
         v0 = halfword [0 + 0xd88]

    loc_0x80321e38: // orphan
         bltzl t0, 0x803254fc     // fcn.80339168-0x13c6c // unlikely
         bltzl s0, 0x80325510     // fcn.80339168-0x13c58 // unlikely

    loc_0x80321e44: // orphan
         bltzl t0, 0x80325598     // unlikely
         bltzl s0, 0x803255ac     // fcn.80339168-0x13bbc // unlikely

    loc_0x80321e50: // orphan
         bltzl t0, 0x80325654     // fcn.80339168-0x13b14 // unlikely

    loc_0x80321f04: // orphan
         bltzl t0, 0x80326458     // unlikely
         bltzl s0, 0x8032648c     // fcn.80339168-0x12cdc // unlikely

    loc_0x80321f10: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321a88
         bltzl 0, 0x803264b0      // unlikely
         bltzl t0, 0x803264d4     // unlikely

    loc_0x80321f38: // orphan
         bltzl t0, 0x8032665c     // fcn.80339168-0x12b0c // unlikely
         bltzl s0, 0x80326670     // fcn.80339168-0x12af8 // unlikely

    loc_0x80321f44: // orphan
         bltzl s0, 0x803266d8     // fcn.80339168-0x12a90 // unlikely
         bltzl t0, 0x8032669c     // fcn.80339168-0x12acc // unlikely

    loc_0x80321f50: // orphan
         bltzl 0, 0x803266f4      // fcn.80339168-0x12a74 // unlikely
         bltzl t0, 0x80326718     // fcn.80339168-0x12a50 // unlikely

    loc_0x8032208c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321aa4
         bltzl t0, 0x8032726c     // unlikely
         bltzl s0, 0x80327290     // unlikely

    loc_0x80322180: // orphan
         bltzl t0, 0x80327a50     // unlikely
         bltzl s0, 0x80327cc4     // unlikely

    loc_0x8032218c: // orphan
         bltzl t0, 0x80327d0c     // fcn.8031c6d4+0xb638 // unlikely
         bltzl s0, 0x80327d50     // unlikely

    loc_0x80322198: // orphan
         bltzl s0, 0x80327d48     // unlikely
         v0 = halfword [0 + 0x16f4]

    loc_0x803222fc: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321b08
         v0 = halfword [t0 + 0x1a70]
         // CODE XREF from fcn.80339168 @ 0x80321adc
         v0 = halfword [s0 + 0x1a74]
         v0 = halfword [0 + 0x1af0]
         bltzl t0, 0x80328f0c     // unlikely
         bltzl s0, 0x80328f20     // fcn.80339168-0x10248 // unlikely

    loc_0x80322314: // orphan
         bltzl s0, 0x80328f08     // unlikely
         bltzl t0, 0x80328f8c     // fcn.80339168-0x101dc // unlikely

    loc_0x803223b8: // orphan
         bltzl s0, 0x80329c08     // unlikely
         bltzl t0, 0x80329c6c     // unlikely

    loc_0x80322490: // orphan
         bltzl t0, 0x8032aa24     // fcn.80339168-0xe744 // unlikely

    loc_0x8032249c: // orphan
         bltzl 0, 0x8032aa70      // fcn.80339168-0xe6f8 // unlikely

    loc_0x803224a8: // orphan
         bltzl t0, 0x8032aadc     // fcn.80322400+0x86dc // unlikely
         bltzl s0, 0x8032aaf0     // unlikely

    loc_0x803224b4: // orphan
         bltzl t0, 0x8032ab04     // fcn.8031c6d4+0xe430 // unlikely
         bltzl s0, 0x8032ab18     // unlikely

    loc_0x803224c0: // orphan
         bltzl 0, 0x8032ab50      // fcn.8031c6d4+0xe47c // unlikely
         bltzl t0, 0x8032abd4     // unlikely

    loc_0x803224cc: // orphan
         bltzl s0, 0x8032ac20     // fcn.80339168-0xe548 // unlikely

    loc_0x803224d8: // orphan
         bltzl t0, 0x8032ac9c     // unlikely
         bltzl s0, 0x8032ad40     // fcn.80339168-0xe428 // unlikely

    loc_0x803224e4: // orphan
         bltzl s0, 0x8032ad78     // fcn.80339168-0xe3f0 // unlikely
         bltzl t0, 0x8032af1c     // unlikely

    loc_0x80322518: // orphan
         bltzl s0, 0x8032b5c8     // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321b14
         bltzl t0, 0x8032b5ec     // unlikely

    loc_0x80322524: // orphan
         bltzl t0, 0x8032b634     // unlikely
         bltzl s0, 0x8032b668     // unlikely

    loc_0x80322530: // orphan
         bltzl s0, 0x8032b660     // unlikely
         v0 = halfword [0 + 0x245c]

    loc_0x80322580: // orphan
         bltzl t0, 0x8032bf24     // fcn.80339168-0xd244 // unlikely

    loc_0x8032258c: // orphan
         bltzl t0, 0x8032bfa0     // fcn.80339168-0xd1c8 // unlikely

    loc_0x80322598: // orphan
         bltzl s0, 0x8032c03c     // fcn.8032c034+0x8 // unlikely

    loc_0x803225a4: // orphan
         bltzl t0, 0x8032c008     // fcn.80339030-0xd028 // unlikely

    loc_0x803225d0: // orphan
         bltzl s0, 0x8032c304     // fcn.8032c300+0x4 // unlikely

    loc_0x803225d4: // orphan
         bltzl t0, 0x8032c108     // fcn.80339168-0xd060 // unlikely
         bltzl s0, 0x8032c34c     // unlikely

    loc_0x803225dc: // orphan
         bltzl t0, 0x8032c120     // fcn.80339168-0xd048 // unlikely

    loc_0x803225e8: // orphan
         bltzl s0, 0x8032c3dc     // fcn.80339168-0xcd8c // unlikely

    loc_0x803225f0: // orphan
         bltzl t0, 0x8032c160     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321b2c
         bltzl s0, 0x8032c424     // unlikely

    loc_0x803225f4: // orphan
         bltzl t0, 0x8032c1a8     // fcn.8032c034+0x174 // unlikely

    loc_0x803225fc: // orphan
         bltzl s0, 0x8032c46c     // fcn.8032c400+0x6c // unlikely
         bltzl t0, 0x8032c1c0     // unlikely

    loc_0x80322600: // orphan
         bltzl s0, 0x8032c4b4     // fcn.80339168-0xccb4 // unlikely
         // CODE XREF from fcn.80321804 @ +0x32c
         bltzl t0, 0x8032c1e8     // unlikely

    loc_0x80322608: // orphan
         bltzl s0, 0x8032c4fc     // fcn.80339168-0xcc6c // unlikely

    loc_0x8032260c: // orphan
         bltzl t0, 0x8032c200     // unlikely
         bltzl s0, 0x8032c544     // fcn.80339168-0xcc24 // unlikely

    loc_0x80322614: // orphan
         bltzl t0, 0x8032c248     // fcn.8032c244+0x4 // unlikely

    loc_0x80322618: // orphan
         bltzl s0, 0x8032c58c     // fcn.80339168-0xcbdc // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321b38
         bltzl t0, 0x8032c5e0     // fcn.80339168-0xcb88 // unlikely

    loc_0x8032261c: // orphan
         bltzl s0, 0x8032c58c     // fcn.80339168-0xcbdc // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321b38
         bltzl t0, 0x8032c5e0     // fcn.80339168-0xcb88 // unlikely

    loc_0x80322624: // orphan
         bltzl t0, 0x8032c608     // fcn.80339168-0xcb60 // unlikely

    loc_0x80322630: // orphan
         bltzl s0, 0x8032c704     // fcn.80339168-0xca64 // unlikely

    loc_0x8032263c: // orphan
         bltzl t0, 0x8032c660     // fcn.80339168-0xcb08 // unlikely

    loc_0x80322648: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b40
         bltzl t0, 0x8032c6a8     // unlikely
         bltzl s0, 0x8032c83c     // unlikely

    loc_0x80322790: // orphan
         bltzl t0, 0x8032d2d4     // unlikely

    loc_0x8032279c: // orphan
         bltzl s0, 0x8032d660     // fcn.80339168-0xbb08 // unlikely
         v0 = halfword [0 + 0x2bac]

    loc_0x803228d4: // orphan
         // CODE XREF from fcn.80339030 @ 0x80321b6c
         bltzl s0, 0x8032e354     // fcn.80338964-0xa610 // unlikely
         bltzl 0, 0x8032e388      // unlikely

    loc_0x803228e0: // orphan
         bltzl t0, 0x8032e3f4     // fcn.80339168-0xad74 // unlikely

    loc_0x803228ec: // orphan
         bltzl s0, 0x8032e4f0     // fcn.80339168-0xac78 // unlikely

    loc_0x80322950: // orphan
         bltzl t0, 0x8032e5e4     // fcn.80339168-0xab84 // unlikely
         bltzl s0, 0x8032e978     // fcn.80339168-0xa7f0 // unlikely

    loc_0x8032295c: // orphan
         bltzl t0, 0x8032e5fc     // unlikely
         bltzl s0, 0x8032e9c0     // fcn.80339168-0xa7a8 // unlikely

    loc_0x80322968: // orphan
         bltzl s0, 0x8032ea08     // unlikely
         bltzl t0, 0x8032e63c     // fcn.80339168-0xab2c // unlikely

    loc_0x80322974: // orphan
         bltzl t0, 0x8032e684     // unlikely
         // CODE XREF from fcn.80321804 @ +0x37c
         bltzl s0, 0x8032ea98     // fcn.80339168-0xa6d0 // unlikely

    loc_0x80322b5c: // orphan
         bltzl t0, 0x8033005c     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321bd8
         bltzl s0, 0x80330080     // unlikely

    loc_0x80322bf8: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321bb4
         v0 = halfword [0 + 0x366c]

    loc_0x80322cd0: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321bcc
         v0 = halfword [0 + 0x3894]

    loc_0x803232ec: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c18
         bltzl t0, 0x80335440     // fcn.80339168-0x3d28 // unlikely

    loc_0x80323384: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c30
         v0 = halfword [0 + 0x49b8]

    loc_0x80323438: // orphan
         bltzl t0, 0x80336418     // unlikely
         // CODE XREF from fcn.80339030 @ 0x80321c44
         bltzl s0, 0x8033642c     // unlikely

    loc_0x80323444: // orphan
         bltzl s0, 0x803364d4     // fcn.80339030-0x2b5c // unlikely
         bltzl t0, 0x80336548     // unlikely

    loc_0x80323574: // orphan
         bltzl 0, 0x80337848      // fcn.80339168-0x1920 // unlikely

    loc_0x803239d4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c80
         bltzl 0, 0x8033a228      // unlikely

    loc_0x803239e0: // orphan
         bltzl 0, 0x8033a2f4      // unlikely

    loc_0x803239ec: // orphan
         bltzl s0, 0x8033a3a0     // unlikely
         bltzl t0, 0x8033a374     // fcn.80339168+0x120c // unlikely

    loc_0x803239f8: // orphan
         v0 = halfword [0 + 0x5a68]
         bltzl t0, 0x8033a410     // fcn.80339168+0x12a8 // unlikely
         bltzl s0, 0x8033a444     // fcn.8031cf8c+0x1d4b8 // unlikely

    loc_0x80323a08: // orphan
         bltzl t0, 0x8033a428     // fcn.80339168+0x12c0 // unlikely
         bltzl s0, 0x8033a43c     // unlikely

    loc_0x80323ac8: // orphan
         bltzl 0, 0x8033b21c      // fcn.80339168+0x20b4 // unlikely

    loc_0x80323ad0: // orphan
         bltzl t0, 0x8033b290     // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321c8c
         bltzl s0, 0x8033b2a4     // unlikely

    loc_0x80323ad4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c8c
         bltzl s0, 0x8033b2a4     // unlikely
         bltzl t0, 0x8033b318     // unlikely

    loc_0x80323adc: // orphan
         bltzl s0, 0x8033b33c     // unlikely
         bltzl t0, 0x8033b3c0     // unlikely

    loc_0x80323ae0: // orphan
         bltzl t0, 0x8033b3c0     // unlikely
         bltzl s0, 0x8033b3d4     // unlikely

    loc_0x80323ae8: // orphan
         bltzl t0, 0x8033b3e8     // unlikely
         bltzl s0, 0x8033b42c     // unlikely

    loc_0x80323aec: // orphan
         bltzl s0, 0x8033b42c     // unlikely
         bltzl t0, 0x8033b480     // unlikely

    loc_0x80323af4: // orphan
         bltzl s0, 0x8033b494     // unlikely
         bltzl 0, 0x8033b4a8      // unlikely

    loc_0x80323af8: // orphan
         bltzl t0, 0x8033b4ec     // unlikely
         bltzl s0, 0x8033b500     // unlikely

    loc_0x80323b04: // orphan
         bltzl t0, 0x8033b4d4     // unlikely
         bltzl s0, 0x8033b4e8     // unlikely

    loc_0x80323b10: // orphan
         bltzl s0, 0x8033b5a0     // unlikely
         bltzl t0, 0x8033b624     // unlikely

    loc_0x80323b1c: // orphan
         bltzl t0, 0x8033b65c     // unlikely
         bltzl s0, 0x8033b6b0     // unlikely

    loc_0x80323b78: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321c94
         bltzl t0, 0x8033b9fc     // unlikely
         bltzl s0, 0x8033ba60     // unlikely

    loc_0x80323b84: // orphan
         bltzl s0, 0x8033bb98     // fcn.80339168+0x2a30 // unlikely
         bltzl t0, 0x8033bbac     // fcn.80339168+0x2a44 // unlikely

    loc_0x80323b90: // orphan
         bltzl t0, 0x8033bc24     // fcn.80339168+0x2abc // unlikely
         bltzl s0, 0x8033bc68     // fcn.80339168+0x2b00 // unlikely

    loc_0x80323b9c: // orphan
         bltzl s0, 0x8033bca0     // fcn.80339168+0x2b38 // unlikely
         v0 = halfword [0 + 0x603c]

    loc_0x80323ba4: // orphan
         bltzl 0, 0x8033bcb8      // fcn.80339168+0x2b50 // unlikely
         bltzl t0, 0x8033bd3c     // fcn.8033bd10+0x2c // unlikely

    loc_0x80323bac: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c98
         bltzl s0, 0x8033bd60     // fcn.8033bd10+0x50 // unlikely
         bltzl t0, 0x8033bd04     // fcn.80339168+0x2b9c // unlikely

    loc_0x80323bb0: // orphan
         // CODE XREF from fcn.80339168 @ 0x80321c98
         bltzl s0, 0x8033bd60     // fcn.8033bd10+0x50 // unlikely
         bltzl t0, 0x8033bd04     // fcn.80339168+0x2b9c // unlikely

    loc_0x80323bb8: // orphan
         bltzl t0, 0x8033bd7c     // fcn.8033bd10+0x6c // unlikely
         bltzl s0, 0x8033bde0     // fcn.80339168+0x2c78 // unlikely

    loc_0x80323bbc: // orphan
         bltzl t0, 0x8033bd7c     // fcn.8033bd10+0x6c // unlikely
         bltzl s0, 0x8033bde0     // fcn.80339168+0x2c78 // unlikely

    loc_0x80323bc4: // orphan
         bltzl s0, 0x8033be38     // fcn.80339168+0x2cd0 // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321ca4
         v0 = halfword [0 + 0x60d8]

    loc_0x80323bc8: // orphan
         bltzl s0, 0x8033be38     // fcn.80339168+0x2cd0 // unlikely
         // CODE XREF from fcn.80339168 @ 0x80321ca4
         v0 = halfword [0 + 0x60d8]

    loc_0x80323bd8: // orphan
         bltzl t0, 0x8033c00c     // fcn.8033bffc+0x10 // unlikely
         bltzl s0, 0x8033c020     // fcn.80339168+0x2eb8 // unlikely

    loc_0x80323c34: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321ca0
         bltzl s0, 0x8033c518     // fcn.8033c4a8+0x70 // unlikely
         bltzl t0, 0x8033c59c     // unlikely

    loc_0x80323c40: // orphan
         bltzl t0, 0x8033c5d4     // fcn.80339168+0x346c // unlikely
         bltzl s0, 0x8033c648     // fcn.80339168+0x34e0 // unlikely

    loc_0x80323c4c: // orphan
         bltzl s0, 0x8033c6b0     // unlikely
         bltzl 0, 0x8033c6a4      // unlikely

    loc_0x80323c58: // orphan
         bltzl s0, 0x8033c71c     // fcn.80339168+0x35b4 // unlikely
         bltzl t0, 0x8033c7a0     // unlikely

    loc_0x80323c64: // orphan
         bltzl t0, 0x8033c7d8     // unlikely
         bltzl s0, 0x8033c84c     // unlikely

    loc_0x80323c70: // orphan
         bltzl s0, 0x8033c8b4     // unlikely
         bltzl 0, 0x8033c8a8      // fcn.80339168+0x3740 // unlikely

    loc_0x80323c7c: // orphan
         bltzl s0, 0x8033c920     // unlikely
         bltzl t0, 0x8033c994     // unlikely

    loc_0x80323c88: // orphan
         bltzl t0, 0x8033c9ec     // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x80321ca8
         bltzl s0, 0x8033ca30     // fcn.80339168+0x38c8 // unlikely

    loc_0x80323c94: // orphan
         bltzl s0, 0x8033caf8     // fcn.80339168+0x3990 // unlikely
         bltzl 0, 0x8033caec      // unlikely

    loc_0x80324218: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321d44
         teq s0, v0, 0x259

    loc_0x80324594: // orphan
         v1 = at << 0x14

    loc_0x803245b0: // orphan
         v0 = 0 + 2
         byte [t6 + 4] = a0
         t7 = [v1 + 0]            // t9
         a1 = 0 + 0xa
         byte [t7 + 5] = a0

    loc_0x80324b78: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321d64
         a1 = 0 + 1               // lo
         call 0x8004c990          // 0x8004c990(-1, 0x1, 0x8, -1)
         [t6 + 0] = t9
         ra = [sp + 0x14]
         at = 0x8ab1 << 16
         [at + 0x6508] = v0
         ret
         sp += 0x18

    loc_0x80324c74: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321d80
         v0 = 0x8ab1 << 16
         a2 = 0x8ab1 << 16
         a3 = 0x8ab1 << 16
         a3 += 0x6540
         a2 += 0x653f

    loc_0x80324c88: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80321d84
         v0 += 0x653e
         t9 = 0 + 0x9b

    loc_0x80325424: // orphan
         s1 = , signed  s1 >> 0x10
         a0 = 0 + 0x118
         [v1 + 0] = t9
         call 0x8004c990          // 0x8004c990(0x118, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t7
         call 0x8004d1fc          // "&." // 0x8004d1fc(0x118, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         // CODE XREF from fcn.8031c6d4 @ 0x80321e30
         t6 = s1 + 0x18

    loc_0x803259ac: // orphan
         t7 += 0x6548
         t6 <<= 4
         v0 = t6 + t7
         t9 = halfword [v0 + 0xc]
         t8 = 0 + 1               // lo
         t0 = 0 - 0xf
         halfword [v0 + 8] = t8
         halfword [v0 + 0x14] = t0
         ret                      // ra
         halfword [v0 + 0x10] = t9

    loc_0x80325a48: // orphan
         t8 = a0 << 3
         v1 = 0x8ab1 << 16
         v1 = halfword [v1 + 0x269c]
         t8 += a0
         t8 <<= 2

    loc_0x80325cd4: // orphan
         t9 = halfword [v0 + 0]   // t3
         // CODE XREF from fcn.803393f0 @ +0xd4
         at = , t9 < 0x29
         bnel at, 0, 0x80325d00   // unlikely
         ra = [sp + 0x14]

    loc_0x80325ce4: // orphan
         call 0x80026098          // 0x80026098(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.80339168 @ 0x803394c8
         if                       // likely
         a0 = 0x8ab1 << 16

    loc_0x80325cf4: // orphan
         call 0x8ab016e4          // 0x8ab016e4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [a0 + 0x678a] // s4

    loc_0x80325cfc: // orphan
         ra = [sp + 0x14]

    loc_0x80325d00: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x80325dfc: // orphan
         t6 = , unsigned  halfword [s0 + 2]
         t7 = t6 & 0xfffd
         goto 0x80325f24          // fcn.80339168-0x13244
         halfword [s0 + 2] = t7

    loc_0x80325e98: // orphan
         a0 = 0 + 0x20            // k0

    loc_0x80325ef4: // orphan
         goto 0x80325f0c
         // CODE XREF from fcn.80339168 @ 0x803394f0
         v0 = 0

    loc_0x803272d0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033961c
         
         a1 = v0 & 0xffff         // s4
         v0 = 0x8ab1 << 16
         v1 = 0x8ab1 << 16
         v1 = , unsigned  halfword [v1 + 0x269e]
         goto 0x803273e0          // fcn.80339168-0x11d88
         v0 += 0x2696

    loc_0x80327914: // orphan
         sp -= 0xc8
         [sp + 0x3c] = ra
         // CODE XREF from fcn.80339168 @ 0x80322108
         [sp + 0x38] = fp
         [sp + 0x34] = s7
         // CODE XREF from fcn.80339168 @ 0x80339690
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         // CODE XREF from fcn.80339168 @ 0x80339694
         [sp + 0x1c] = s1
         call 0x8ab00430          // 0x8ab00430(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = s0
         call 0x8ab02ef8          // 0x8ab02ef8(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80327b00: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032213c
         s0 += 2
         if                       // unlikely
         t6 = v0 << 2

    loc_0x80327b0c: // orphan
         t7 = s4 + t6
         t8 = [t7 + 0]            // t9
         // CODE XREF from fcn.80339168 @ 0x80322140
         call 0x8ab03194          // 0x8ab03194(-1, 0x442f71dcfe116408, 0x8, -1)
         [s3 + 0] = t8
         // CODE XREF from fcn.80322040 @ +0xf8
         at = 0x8ab1 << 16
         halfword [at + 0x466a] = v0

    loc_0x80327b24: // orphan
         t9 = 0 + 3
         at = 0x8ab1 << 16
         goto 0x803279bc          // fcn.80339168-0x117ac
         halfword [at + 0x4678] = t9

    loc_0x80327ce8: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80322184
         v0 = , unsigned  halfword [s0 + 0]
         t6 = , unsigned  halfword [s0 + 0]
         at = 0x8ab1 << 16
         t7 = 0x8ab1 << 16
         halfword [at + 0x4652] = t6
         t8 = , unsigned  halfword [t7 + 0x4652]
         t0 = 0x8ab1 << 16
         t0 += 0x4d08
         t9 = t8 << 2
         // CODE XREF from fcn.80339168 @ 0x80322188
         v0 = t9 + t0
         t1 = 0 | 0xfffe
         t2 = 0 | 0xfffe
         s0 += 2

    loc_0x80327d1c: // orphan
         halfword [v0 + 0] = t1
         goto 0x803279bc          // fcn.80339168-0x117ac
         // CODE XREF from fcn.8031c6d4 @ 0x80322190
         halfword [v0 + 2] = t2

    loc_0x80327d24: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80322190
         halfword [v0 + 2] = t2
         t3 = , unsigned  halfword [s0 + 0]
         t7 = 0x8ab1 << 16
         v1 = 0x8ab1 << 16
         t5 = t3 & 0xffff
         t6 = t5 << 2
         t7 += 0x54d8
         v1 += 0x4652
         a0 = 0 | 0xfffe

    loc_0x80329bf4: // orphan
         call 0x8ab00020          // 0x8ab00020(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80339168 @ 0x803223b0
         

    loc_0x8032a8f4: // orphan
         call 0x8ab072ec          // 0x8ab072ec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x8032a980          // fcn.80339168-0xe7e8
         a2 = v0                  // s4

    loc_0x8032a950: // orphan
         // CODE XREF from fcn.80339168 @ 0x803399d0
         call 0x8ab07c34          // 0x8ab07c34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x8032a980
         a2 = v0                  // s4

    loc_0x8032aa9c: // orphan
         a0 = 0 + 2               // arg1
         goto 0x8032aba4          // fcn.80339168-0xe5c4
         ra = [sp + 0x14]

    loc_0x8032aab4: // orphan
         // CODE XREF from fcn.80339168 @ 0x803224a0
         ra = [sp + 0x14]
         call 0x8ab06718          // 0x8ab06718(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         goto 0x8032aba4          // fcn.80339168-0xe5c4
         ra = [sp + 0x14]

    loc_0x8032aaf0: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803224ac
         goto 0x8032aba4          // fcn.80339168-0xe5c4
         ra = [sp + 0x14]

    loc_0x8032ab04: // orphan
         // CODE XREF from fcn.80339168 @ 0x803224b0
         ra = [sp + 0x14]
         // CODE XREF from fcn.80339168 @ 0x803399d4
         call 0x8ab07128          // 0x8ab07128(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         goto 0x8032aba4          // fcn.80339168-0xe5c4
         ra = [sp + 0x14]

    loc_0x8032ab48: // orphan
         call 0x8ab07538          // 0x8ab07538(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         // CODE XREF from fcn.80339168 @ 0x803224bc
         goto 0x8032aba4          // fcn.80339168-0xe5c4
         ra = [sp + 0x14]

    loc_0x8032abe8: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803224c4
         

    loc_0x8032ac10: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032abe4
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         // CODE XREF from fcn.80322400 @ +0xc8
         // CODE XREF from fcn.80339168 @ 0x803399f8
         if                       // likely
         v1 = [sp + 0x1c]

    loc_0x8032ac44: // orphan
         // CODE XREF from fcn.80339168 @ 0x803224d0
         at = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x8032ac50: // orphan
         goto 0x8032ac88          // fcn.8031d8d4+0xd3b4
         ra = [sp + 0x14]

    loc_0x8032ac6c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032ac48
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         at = 0 + 1               // lo

    loc_0x8032ac9c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803224d8
         t6 = 0 + 4
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x1c] = t6

    loc_0x8032acc0: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032aca4
         a0 = 0x8ab1 << 16
         a0 += 0x26a8             // arg1
         a1 = 0 + 0x100           // arg2
         a2 = 0 + 0x39            // arg3

    loc_0x8032acd0: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339a0c
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80322400 @ +0xe0
         a3 = 0 + 0x169
         v1 = 0x8ab1 << 16
         v1 = [v1 + 0x1d00]       // t9
         a0 = 0x8ab1 << 16
         a1 = 0x8ab1 << 16

    loc_0x8032acfc: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339a14
         t7 = , unsigned  halfword [v1 + 2]
         a0 += 0x68d8             // arg1
         t8 = t7 | 1
         halfword [v1 + 2] = t8
         call 0x8ac06400          // 0x8ac06400(0x1000068d7, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80338964 @ 0x80339a18
         a1 = [a1 + 0x68d0]       // t9
         a0 = 0x8ab1 << 16

    loc_0x8032aeec: // orphan
         // CODE XREF from fcn.8032ad88 @ +0xfc
         // CODE XREF from fcn.80339168 @ 0x80339a48
         call 0x8ab0699c          // 0x8ab0699c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         goto loc.8032af08        // loc.8032af08(0x0, 0x442f71dcfe116408)
         [sp + 0x1c] = v0

    loc_0x8032af1c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803224e8
         sp -= 0x20
         t6 = 0 + 6
         // CODE XREF from fcn.803393f0 @ +0x660
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x1c] = t6

    loc_0x8032af30: // orphan
         // CODE XREF from fcn.80322400 @ +0xec
         at = 0 + 1               // lo
         if                       // unlikely
         v0 = 0x8ab1 << 16

    loc_0x8032af3c: // orphan
         goto 0x8032b058          // fcn.8032b054+0x4
         ra = [sp + 0x14]

    loc_0x8032af44: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032af28
         a0 = 1 << 16
         // CODE XREF from fcn.80339168 @ 0x80339a54
         a0 |= 6
         // CODE XREF from fcn.80322400 @ +0xf8
         a1 = 0
         call 0x8ab00ba4          // 0x8ab00ba4(0x10006, 0x0, 0x8, -1)
         a2 = 0

    loc_0x8032b024: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032af34
         v0 = halfword [v0 + 0x6a1c]
         at = 0x8ab1 << 16
         v0 += 1

    loc_0x8032b030: // orphan
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // s4
         halfword [at + 0x6a1c] = v0
         at = , v0 < 0x2d
         // CODE XREF from fcn.80339168 @ 0x80339a6c
         bnel at, 0, 0x8032b058   // fcn.8032b054+0x4 // unlikely
         ra = [sp + 0x14]

    loc_0x8032b048: // orphan
         call 0x8ab06ae8          // 0x8ab06ae8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         [sp + 0x1c] = v0

    loc_0x8032b884: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339af0
         at = 0 + 1               // lo
         if                       // unlikely
         t6 = 0x8ab1 << 16

    loc_0x8032b890: // orphan
         goto 0x8032b960          // fcn.80339168-0xd808
         ra = [sp + 0x1c]         // s4

    loc_0x8032b8ac: // orphan
         t6 = halfword [t6 + 0x6a2a]
         at = 0x8ab1 << 16
         t7 = t6 + 1

    loc_0x8032b97c: // orphan
         // CODE XREF from fcn.80339030 @ 0x80339b08
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x18] = t6

    loc_0x8032b988: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         t6 = 0x8ab1 << 16

    loc_0x8032b994: // orphan
         goto 0x8032baa8          // fcn.80339168-0xd6c0
         ra = [sp + 0x14]

    loc_0x8032b99c: // orphan
         v0 = 0x8ab1 << 16
         v0 = [v0 + 0x1d00]       // t9
         at = 0x8ab1 << 16
         halfword [at + 0x6a2c] = 0
         t7 = , unsigned  halfword [v0 + 2]

    loc_0x8032ba70: // orphan
         t6 = halfword [t6 + 0x6a2c]

    loc_0x8032bb5c: // orphan
         at = 0x8ab1 << 16
         goto 0x8032bb7c
         halfword [at + 0x69a6] = t7

    loc_0x8032bb7c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032bb60
         t9 = halfword [s1 + 2]
         v0 = 0x8ab1 << 16
         v0 += 0x1d0c
         at = , t9 < 8
         if                       // unlikely
         t3 = 0x8ab1 << 16

    loc_0x8032bb94: // orphan
         v0 = 0x8ab1 << 16
         v0 += 0x1d0c
         t0 = [v0 + 0]            // t9
         v1 = 0 - 1               // s2
         s0 = 0 + 2
         // CODE XREF from fcn.80339168 @ 0x80322534
         byte [t0 + 4] = v1
         t1 = [v0 + 0]            // t9
         byte [t1 + 5] = v1

    loc_0x8032bbf4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322540
         v1 = [v0 + 0]
         t1 = 0x8ab1 << 16
         s4 = 0 + 1               // lo
         t0 = , unsigned  byte [v1 + 3] // s4
         // CODE XREF from fcn.8031c6d4 @ 0x80339b10
         s1 = 0x8ab1 << 16

    loc_0x8032bc08: // orphan
         s1 += 0x1210
         byte [v1 + 0x16] = t0
         t1 = halfword [t1 + 0x1210]
         s0 = 0 + 2
         s2 = 0 + 6

    loc_0x8032be3c: // orphan
         at = , v1 < 0xa
         if                       // likely
         // CODE XREF from fcn.80339030 @ 0x80339b38
         s3 = 0 + 0xa

    loc_0x8032bed4: // orphan
         t2 = halfword [s1 + 2]
         at = , t2 < 8
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x80339b50
         

    loc_0x8032bfb4: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322590
         sp -= 0x30
         t6 = 0 + 0xe
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x2c] = t6

    loc_0x8032bfe8: // orphan
         a0 = 0x8ab1 << 16
         at = 0x8ab1 << 16
         halfword [at + 0x6a32] = 0

    loc_0x8032c1e8: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80322604
         a0 = 0 + 2
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x8032c1f8: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5

    loc_0x8032c200: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8032260c
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x8032c20c: // orphan
         goto 0x8032c264          // fcn.8032c244+0x20
         a3 = 0 + 0xe

    loc_0x8032c214: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         at = 0 + 1               // lo
         if                       // likely
         

    loc_0x8032c228: // orphan
         goto 0x8032c264          // fcn.8032c244+0x20
         // CODE XREF from fcn.80322400 @ +0x1b8
         a3 = 0 + 0xd

    loc_0x8032c230: // orphan
         call 0x8005453c          // 0x8005453c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         at = 0 + 1               // lo
         bnel v0, at, 0x8032c264  // fcn.8032c244+0x20 // likely
         a3 = 0 + 0xb

    loc_0x8032c34c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x803225d8
         [sp + 0x14] = ra
         if                       // unlikely
         [sp + 0x1c] = t6

    loc_0x8032c36c: // orphan
         at = 0x8ab1 << 16

    loc_0x8032cfbc: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339cb8
         a1 = v0                  // s4
         call 0x8ab09fbc          // 0x8ab09fbc(-1, 0xff, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x8032d00c          // fcn.80339168-0xc15c
         a1 = v0                  // s4

    loc_0x8032cff8: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339cc4
         goto 0x8032d00c          // fcn.80339168-0xc15c
         // CODE XREF from fcn.80339168 @ 0x80322708
         a1 = v0                  // s4

    loc_0x8032e624: // orphan
         // CODE XREF from fcn.80339168 @ 0x80322960
         at = 0x8ab1 << 16
         halfword [at + 0x6cdc] = 0
         t7 = , unsigned  halfword [v0 + 2] // s4

    loc_0x8032e820: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032292c
         halfword [v1 + 2] = t5
         call 0x8ab00b98          // 0x8ab00b98(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x6b94]       // t9
         goto 0x8032e84c
         // CODE XREF from fcn.80339168 @ 0x80339f1c
         ra = [sp + 0x14]

    loc_0x8032e89c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80339f28
         halfword [a3 + 0] = 0
         // CODE XREF from fcn.80322400 @ +0x53c
         v0 = 0x8ab1 << 16
         v0 = [v0 + 0x6a58]       // t9
         t0 = 0x8ab1 << 16
         v1 = 0 - 2               // hi
         t8 = , unsigned  halfword [v0 + 2]
         t9 = t8 & 0xfffe
         halfword [v0 + 2] = t9
         t0 = [t0 + 0x6cc0]       // t9
         v0 = 0x8ab1 << 16
         // CODE XREF from fcn.8031c6d4 @ 0x80339f30
         if                       // fcn.80339168-0xa888 // likely
         

    loc_0x8032e8cc: // orphan
         v0 = [v0 + 0x1d00]       // t9
         t1 = , unsigned  halfword [v0 + 2]
         t2 = t1 & v1

    loc_0x8033254c: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a398
         at = , unsigned  , t6 < 0xc
         s2 = a0                  // t9
         [sp + 0x24] = ra
         [sp + 0x1c] = s1
         if                       // fcn.80339168-0x6b30 // likely
         [sp + 0x18] = s0

    loc_0x80332564: // orphan
         t6 <<= 2
         at = 0x8ab1 << 16
         at += t6
         t6 = [at + 0x1c2c]       // t9
         goto t6                  // t9
         

    loc_0x803336e4: // orphan
         t2 = t1 - 1
         // CODE XREF from fcn.80339168 @ 0x80323064
         halfword [v0 + 0] = t2
         t3 = halfword [v0 + 0]
         if                       // fcn.80339168-0x5a44 // likely
         

    loc_0x803336f8: // orphan
         halfword [v0 + 0] = 0
         // CODE XREF from fcn.80322c00 @ +0x468
         t4 = halfword [t4 + 0x7230]
         a0 = 0 + 0x65
         a1 = 0
         bnel t4, 0, 0x8033371c   // fcn.80339168-0x5a4c // likely
         t5 = 0 + 1               // lo

    loc_0x80333710: // orphan
         call 0x8ab00ba4          // "$\r" // 0x8ab00ba4(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80322c00 @ +0x470
         a2 = 0

    loc_0x80333830: // orphan
         t0 = a1 << 2
         v0 = 0x8ab1 << 16
         t8 = t7 - 1              // s2
         halfword [a0 + 0x10] = t8
         t9 = halfword [a0 + 0x10]
         v0 += t0
         if                       // likely
         

    loc_0x80333850: // orphan
         halfword [a0 + 0x10] = 0
         [a0 + 0xc] = 0
         v0 = [v0 + 0x7190]       // t9
         t1 = , unsigned  halfword [v0 + 2]
         t2 = t1 & 0xfffd
         halfword [v0 + 2] = t2

    loc_0x80333868: // orphan
         ret                      // ra
         

    loc_0x80333938: // orphan
         goto 0x803339e8
         [at + 0x7224] = t9

    loc_0x80333a30: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a4fc
         call 0x8ab01fbc          // 0x8ab01fbc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v1
         goto 0x80333a84
         v1 = [sp + 0x1c]

    loc_0x80333a84: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80333a38
         ra = [sp + 0x14]
         sp += 0x20

    loc_0x80333abc: // orphan
         ra = [sp + 0x14]
         v0 = 0x8ab1 << 16
         // CODE XREF from fcn.80339168 @ 0x803230e0
         v0 = [v0 + 0x1d00]       // t9
         at = 0x8ab1 << 16
         halfword [at + 0x7248] = 0
         // CODE XREF from fcn.80339ffc @ +0x510
         t7 = , unsigned  halfword [v0 + 2]
         a0 = 0x8ab1 << 16
         a0 += 0x26a8
         t8 = t7 | 1
         a1 = 0 + 0x100
         // CODE XREF from fcn.80339ffc @ +0x514
         a2 = 0 + 0x39
         a3 = 0 + 0x185
         call 0x8004c8a0          // 0x8004c8a0(0x8ab126a8, 0x100, 0x39, 0x185)
         halfword [v0 + 2] = t8
         v1 = 0x8ab1 << 16
         v1 = [v1 + 0x6fc8]       // t9
         a0 = 0 + 0x66
         a1 = 0
         t9 = , unsigned  halfword [v1 + 2]
         a2 = 0
         t0 = t9 & 0xfffe
         call 0x8ab00ba4          // 0x8ab00ba4(0x66, 0x0, 0x0, 0x185)
         halfword [v1 + 2] = t0

    loc_0x80333c84: // orphan
         t4 = halfword [t4 + 0x724a]
         at = 0x8ab1 << 16

    loc_0x80333cf0: // orphan
         if                       // fcn.80339168-0x5438 // unlikely
         t0 = 0x8ab1 << 16

    loc_0x80333cf8: // orphan
         goto 0x80333dec          // fcn.80339168-0x537c
         // CODE XREF from fcn.80339168 @ 0x80323108
         ra = [sp + 0x1c]         // v1

    loc_0x80334548: // orphan
         a0 = 0 + 2
         goto 0x803345d0
         ra = [sp + 0x14]

    loc_0x803345d0: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033454c
         sp += 0x18

    loc_0x803345d4: // orphan
         ret                      // ra
         

    loc_0x803354dc: // orphan
         // CODE XREFS from fcn.80339168 @ 0x803232f8, 0x8033a6e8
         halfword [v0 + 2] = t8
         t9 = halfword [t9 + 0x2cb4]
         a0 = 0x8ab1 << 16
         a0 += 0x26a8
         if                       // likely
         // CODE XREF from fcn.80339168 @ 0x803232fc
         a1 = 0 + 0x100

    loc_0x803354f4: // orphan
         a0 = 0x8ab1 << 16
         a0 += 0x26a8
         a1 = 0 + 0x100
         a2 = 0 + 0x39
         // CODE XREF from fcn.80339168 @ 0x80323300
         call 0x8004c8a0          // 0x8004c8a0(0x8ab126a8, 0x100, 0x39, -1)
         a3 = 0 + 0x10
         goto 0x80335520
         

    loc_0x80335514: // orphan
         a2 = 0 + 0x39
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x442f71dcfe116408, 0x39, -1)
         a3 = 0 + 0x11

    loc_0x80335520: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033550c
         v0 = 0x8ab1 << 16
         v0 = [v0 + 0x1d00]       // t9
         t0 = , unsigned  halfword [v0 + 2]
         t1 = t0 | 1

    loc_0x80335588: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a6f4
         v1 = 0x8ab1 << 16
         v1 += 0x7380
         t5 = , unsigned  halfword [t4 + 8]
         t6 = t5 & 0x8000
         beql t6, 0, 0x803355c8   // fcn.80339168-0x3ba0 // unlikely
         ra = [sp + 0x14]

    loc_0x80335e3c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033a738
         ldl at, 0x6974, k1       // s2
         ldr s5, 0x5f72, k1
         ldl s2, 0x656b, t3
         ldl k1, 0x2564, t2       // s2
         bgtzl t1, 0x803452d0     // likely
         a0 = t3 + 0xa00

    loc_0x80335e54: // orphan
         beql s2, a1, 0x8034abac  // fcn.8034ab1c+0x90 // unlikely

    loc_0x80335ec4: // orphan
         ldr a1, 0x6172, v1
         at = t1 + 0x210a
         
         beql t2, s5, 0x8034843c  // fcn.8034841c+0x20 // unlikely

    loc_0x80335f08: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033a744
         lwl s0, 0x6334, s5       // t9
         lwl s0, 0x6344, s5       // t9
         lwl s0, 0x6354, s5       // t9

    loc_0x80335f14: // orphan
         lwl s0, 0x6364, s5       // t9
         lwl s0, 0x6384, s5       // t9
         lwl s0, 0x6374, s5       // t9
         lwl s0, 0x6394, s5       // t9
         lwl s0, 0x63a4, s5       // t9
         lwl s0, 0x63b4, s5       // t9

    loc_0x80335f2c: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033a748
         lwl s0, 0x63c4, s5       // t9
         lwl s0, 0x63d4, s5       // t9
         lwl s0, 0x63e4, s5       // t9
         lwl s0, 0x63f4, s5       // t9
         lwl s0, 0x6518, s5       // t9
         lwl s0, 0x6528, s5       // t9
         lwl s0, 0x6538, s5       // t9
         lwl s0, 0x6548, s5       // t9
         lwl s0, 0x6558, s5       // t9
         lwl s0, 0x6568, s5       // t9
         lwl s0, 0x6578, s5       // t9
         lwl s0, 0x6588, s5       // t9
         lwl s0, 0x65a8, s5       // t9
         lwl s0, 0x6598, s5       // t9
         lwl s0, 0x65b8, s5       // t9
         lwl s0, 0x65c8, s5       // t9
         lwl s0, 0x65d8, s5       // t9
         lwl s0, 0x65e8, s5       // t9

    loc_0x80336010: // orphan
         lwl s0, -0x4d50, s5      // t9
         lwl s0, -0x4d40, s5      // t9
         lwl s0, -0x4d30, s5      // t9
         lwl s0, -0x4d20, s5      // t9
         lwl s0, -0x4d10, s5      // t9
         lwl s0, -0x4d00, s5      // t9
         lwl s0, -0x4ce0, s5      // t9
         lwl s0, -0x4cf0, s5      // t9
         lwl s0, -0x4cd0, s5      // t9
         lwl s0, -0x4cc0, s5      // t9
         lwl s0, -0x4cb0, s5      // t9
         lwl s0, -0x4ca0, s5      // t9

    loc_0x80336198: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8033a754
         ldr t1, 0x7373, t3

    loc_0x80336388: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x8033a774
         if                       // unlikely

    loc_0x80336394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803363a0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339ffc @ +0x770
         if                       // unlikely

    loc_0x803363ac: // orphan
         if                       // unlikely
         

    loc_0x803364a0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x8032343c
         if                       // unlikely

    loc_0x8033652c: // orphan
         if                       // fcn.8031c6d4+0x1bb28 // unlikely
         if                       // unlikely

    loc_0x80336530: // orphan
         if                       // fcn.80339168-0xf34 // unlikely

    loc_0x80336538: // orphan
         if                       // fcn.8031c6d4+0x1bb84 // unlikely
         if                       // unlikely

    loc_0x8033653c: // orphan
         if                       // fcn.80339168-0xec8 // unlikely

    loc_0x80336544: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033655c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339030 @ 0x80323448
         if                       // unlikely

    loc_0x80336568: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336574: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8031c6d4 @ 0x8033a780
         if                       // unlikely

    loc_0x80336580: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033658c: // orphan
         if                       // unlikely
         

    loc_0x803365a4: // orphan
         

    loc_0x80336688: // orphan
         if                       // fcn.80338964+0x2848 // unlikely

    loc_0x80336694: // orphan
         if                       // unlikely

    loc_0x803366cc: // orphan
         if                       // fcn.80339168+0x2708 // unlikely

    loc_0x803366e4: // orphan
         if                       // fcn.80339168+0x2960 // unlikely

    loc_0x803366fc: // orphan
         

    loc_0x8033687c: // orphan
         if                       // fcn.80339168+0x5578 // unlikely
         

    loc_0x8033690c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b04: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x9520 // unlikely

    loc_0x80336b10: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x95dc // unlikely

    loc_0x80336b1c: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x9688 // unlikely

    loc_0x80336b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336b34: // orphan
         if                       // unlikely
         

    loc_0x80336b50: // orphan
         

    loc_0x80336c74: // orphan
         if                       // fcn.80339168+0xb210 // unlikely

    loc_0x80336c80: // orphan
         if                       // fcn.80339168+0xb2ac // unlikely

    loc_0x80336c8c: // orphan
         if                       // unlikely

    loc_0x80336c98: // orphan
         if                       // fcn.80339168+0xb614 // unlikely

    loc_0x80336ca4: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0xb610 // unlikely

    loc_0x80336cb0: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0xb6ac // unlikely

    loc_0x80336d74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336d80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336dd0: // orphan
         if                       // fcn.80339030+0xc560 // unlikely
         if                       // unlikely

    loc_0x80336dfc: // orphan
         if                       // fcn.803547f0-0xf124 // unlikely
         if                       // unlikely

    loc_0x80336e08: // orphan
         if                       // fcn.803547f0-0xf0c8 // unlikely
         if                       // unlikely

    loc_0x80336e14: // orphan
         if                       // fcn.803547f0-0xf01c // unlikely
         if                       // unlikely

    loc_0x80336e20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336e2c: // orphan
         if                       // fcn.803547f0-0xef54 // unlikely
         if                       // unlikely

    loc_0x80336e48: // orphan
         if                       // unlikely

    loc_0x80336e54: // orphan
         if                       // unlikely

    loc_0x80336e7c: // orphan
         if                       // fcn.80339168+0xcd48 // unlikely
         

    loc_0x80336eec: // orphan
         if                       // fcn.80346404+0x68 // unlikely
         if                       // fcn.80346224+0x27c // unlikely

    loc_0x80336ef8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f10: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a85c
         if                       // fcn.80339168+0xd6ac // unlikely
         if                       // unlikely

    loc_0x80336f20: // orphan
         if                       // fcn.80339168+0xd92c // unlikely

    loc_0x80336f2c: // orphan
           // CALL XREF from fcn.8120ee44 @ +0x9b0
         if                       // fcn.80339168+0xd954 // unlikely
         if                       // fcn.80339168+0xd988 // unlikely

    loc_0x80336f58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336f7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80336fac: // orphan
         if                       // fcn.80339168+0xe128 // unlikely

    loc_0x80336fb8: // orphan
         if                       // fcn.80339030+0xe35c // unlikely

    loc_0x80336fe0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80336fec: // orphan
         if                       // unlikely
         

    loc_0x80337008: // orphan
         if                       // unlikely
         

    loc_0x8033701c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337028: // orphan
         if                       // fcn.80347c80+0x38 // unlikely
         if                       // unlikely

    loc_0x80337054: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803370d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337124: // orphan
         

    loc_0x80337180: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803371ec: // orphan
         if                       // fcn.80339168+0xfe28 // unlikely
         

    loc_0x803371f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803372a8: // orphan
         if                       // fcn.80339168+0x10444 // unlikely

    loc_0x803372b4: // orphan
         // CODE XREFS from fcn.80339168 @ 0x8032350c, 0x8033a89c
         if                       // unlikely
         if                       // unlikely

    loc_0x8033735c: // orphan
         if                       // fcn.80339168+0x10a48 // unlikely

    loc_0x80337368: // orphan
         if                       // fcn.80339168+0x109c4 // unlikely

    loc_0x80337374: // orphan
         // CODE XREF from fcn.80339ffc @ +0x8a4
         if                       // fcn.80339168+0x10b00 // unlikely

    loc_0x80337380: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323518
         if                       // unlikely
         if                       // unlikely

    loc_0x8033738c: // orphan
         if                       // fcn.803547f0-0xabb4 // unlikely
         if                       // unlikely

    loc_0x80337398: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803373a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803373b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803373bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803374a0: // orphan
         if                       // fcn.80353f78-0x8c18 // unlikely
         if                       // unlikely

    loc_0x803374ac: // orphan
         if                       // unlikely
         if                       // fcn.80353f78-0x8bb8 // unlikely

    loc_0x803374b8: // orphan
         // CODE XREF from fcn.80339030 @ 0x80323530
         if                       // fcn.80353f78-0x8ba0 // unlikely
         if                       // unlikely

    loc_0x803374c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803374dc: // orphan
         if                       // fcn.80339168+0x12578 // unlikely

    loc_0x803374e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803374f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337500: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323538
         if                       // unlikely
         if                       // unlikely

    loc_0x8033750c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337518: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337538: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x129a4 // unlikely

    loc_0x80337544: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8031e8f4 @ 0x8033a8e0
         

    loc_0x80337574: // orphan
         // CODE XREF from fcn.80339030 @ 0x8032353c
         if                       // unlikely
         if                       // unlikely

    loc_0x80337580: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033758c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803376f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803376fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337708: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337714: // orphan
         if                       // fcn.8031c6d4+0x30ef0 // unlikely
         if                       // unlikely

    loc_0x80337768: // orphan
         
         

    loc_0x803379d0: // orphan
         

    loc_0x80337a54: // orphan
         if                       // fcn.80339168+0x16b40 // unlikely

    loc_0x80337ae0: // orphan
         if                       // fcn.803501d0+0x84 // unlikely

    loc_0x80337aec: // orphan
         if                       // fcn.803501d0+0xcc // unlikely
         if                       // unlikely

    loc_0x80337af8: // orphan
         if                       // unlikely
         if                       // fcn.803501d0+0x15c // unlikely

    loc_0x80337b04: // orphan
         if                       // unlikely
         if                       // fcn.803501d0+0x1e8 // unlikely

    loc_0x80337b10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337b1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337b78: // orphan
         if                       // fcn.80339168+0x179a4 // unlikely

    loc_0x80337b8c: // orphan
         
         if                       // fcn.80350b90+0xfc // unlikely
         // CODE XREF from fcn.80323274 @ +0x354
         if                       // fcn.80350b90+0x120 // unlikely

    loc_0x80337c30: // orphan
         if                       // unlikely
         

    loc_0x80337c54: // orphan
         if                       // fcn.80339168+0x18870 // unlikely

    loc_0x80337c5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337c60: // orphan
         if                       // fcn.80339168+0x188ec // unlikely
         // CODE XREF from fcn.80339168 @ 0x803235e0
         

    loc_0x80337c88: // orphan
         if                       // fcn.80339168+0x189e4 // unlikely

    loc_0x80337c94: // orphan
         // CODE XREF from fcn.80339ffc @ +0x934
         

    loc_0x80337cb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337cbc: // orphan
         if                       // fcn.80339168+0x18d08 // unlikely

    loc_0x80337cc4: // orphan
         if                       // fcn.80351e84 // unlikely
         

    loc_0x80337d08: // orphan
         if                       // fcn.80339168+0x190a4 // unlikely

    loc_0x80337d24: // orphan
         if                       // fcn.80339168+0x191d0 // unlikely
         

    loc_0x80337d74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337d80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337d8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337d98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337d9c: // orphan
         if                       // fcn.803547f0-0x1dc0 // unlikely

    loc_0x80337da4: // orphan
         if                       // fcn.803547f0-0x1d9c // unlikely
         if                       // fcn.803547f0-0x1d88 // unlikely

    loc_0x80337de8: // orphan
           // CALL XREF from fcn.815fd620 @ +0x1198
           // CALL XREF from fcn.816413f4 @ +0x1904
         if                       // fcn.80337dd8+0x1ae00 // unlikely
         if                       // unlikely

    loc_0x80337df4: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032360c
         if                       // unlikely
         if                       // unlikely

    loc_0x80337e00: // orphan
         if                       // fcn.80337de0+0x1afb0 // unlikely
         if                       // unlikely

    loc_0x80337e0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337e84: // orphan
         // CODE XREF from fcn.80339168 @ 0x8032361c
         if                       // unlikely
         if                       // unlikely

    loc_0x80337e88: // orphan
         if                       // unlikely

    loc_0x80337e90: // orphan
         if                       // fcn.8031c6d4+0x36ecc // unlikely
         if                       // unlikely

    loc_0x80337e94: // orphan
         if                       // unlikely

    loc_0x80337e9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337ea0: // orphan
         if                       // unlikely

    loc_0x80337ea8: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a950
         if                       // fcn.8031c6d4+0x36f24 // unlikely
         if                       // unlikely

    loc_0x80337eac: // orphan
         if                       // unlikely
         

    loc_0x80337ef4: // orphan
         if                       // fcn.80339168+0x1a900 // unlikely

    loc_0x80337f00: // orphan
         if                       // unlikely

    loc_0x80337f0c: // orphan
         if                       // unlikely

    loc_0x80337f18: // orphan
         if                       // fcn.80339168+0x1ab14 // unlikely

    loc_0x80337f24: // orphan
         if                       // fcn.80353c80+0x78 // unlikely
         if                       // fcn.80353c80+0x9c // unlikely

    loc_0x80337f30: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a95c
         
         // CODE XREF from fcn.80339168 @ 0x80323630
         if                       // fcn.80353c80+0x108 // unlikely
         if                       // unlikely

    loc_0x80337f40: // orphan
         if                       // fcn.80353c80+0x254 // unlikely

    loc_0x80337f4c: // orphan
         if                       // fcn.80353c80+0x290 // unlikely

    loc_0x80337f58: // orphan
         

    loc_0x80337f70: // orphan
         if                       // unlikely

    loc_0x80337f7c: // orphan
         if                       // fcn.80339168+0x1b238 // unlikely

    loc_0x80337f88: // orphan
         if                       // unlikely

    loc_0x80337f94: // orphan
         if                       // fcn.80339168+0x1b3d0 // unlikely

    loc_0x80337fa0: // orphan
         if                       // unlikely

    loc_0x80337fac: // orphan
         if                       // unlikely

    loc_0x80337fb8: // orphan
         if                       // fcn.80339168+0x1b654 // unlikely

    loc_0x80337fc4: // orphan
         if                       // unlikely

    loc_0x80337fd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80337fe8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338090: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338094: // orphan
         if                       // fcn.80339168+0x1c190 // unlikely

    loc_0x8033809c: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323664
         // CODE XREF from fcn.80339ffc @ +0x988
         if                       // unlikely
         if                       // unlikely

    loc_0x803380a0: // orphan
         if                       // unlikely

    loc_0x803380a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803380ac: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a988
         if                       // unlikely

    loc_0x803380b4: // orphan
         // CODE XREF from fcn.80323274 @ +0x3f8
         if                       // unlikely
         

    loc_0x803380d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803380e0: // orphan
         // CODE XREF from fcn.80339168 @ 0x80323668
         if                       // unlikely
         if                       // unlikely

    loc_0x803380ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803380f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803381a8: // orphan
         if                       // fcn.80339168+0x1d824 // unlikely

    loc_0x803381b4: // orphan
         if                       // fcn.80339168+0x1da20 // unlikely

    loc_0x803381bc: // orphan
         if                       // fcn.8031c6d4+0x3a498 // unlikely
         if                       // unlikely

    loc_0x803381c0: // orphan
         

    loc_0x803381fc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80338964 @ 0x8032369c
         

    loc_0x80338218: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80339168 @ 0x8033a998
         

    loc_0x80338258: // orphan
         if                       // unlikely

    loc_0x803382f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338358: // orphan
         if                       // fcn.80339168+0x1ef14 // unlikely
         // CODE XREF from fcn.80339ffc @ +0x9bc
         if                       // fcn.80339168+0x1ef58 // unlikely

    loc_0x80338364: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338370: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338374: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x1f0f0 // unlikely

    loc_0x8033837c: // orphan
         if                       // fcn.8035825c+0x10 // unlikely
         if                       // fcn.8035825c+0x24 // unlikely

    loc_0x80338394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803383a0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80338964 @ 0x803236c0
         if                       // unlikely

    loc_0x803383ac: // orphan
         if                       // unlikely
         

    loc_0x803383f0: // orphan
         

    loc_0x8033843c: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033a9c0
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8033850c: // orphan
         if                       // unlikely
         

    loc_0x80338558: // orphan
         if                       // unlikely
         

    loc_0x803385a4: // orphan
         

    loc_0x803385f0: // orphan
         

    loc_0x8033862c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338638: // orphan
         // CODE XREF from fcn.80338964 @ 0x80323710
         if                       // unlikely
         

    loc_0x80338dcc: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1b8
         if                       // unlikely
         if                       // unlikely

    loc_0x80338dd8: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1b4
         if                       // fcn.80339168-0x1803c // unlikely
         

    loc_0x80338de0: // orphan
         if                       // fcn.80339168-0x17f04 // unlikely
         if                       // fcn.80339168-0x17ef0 // unlikely

    loc_0x80338e4c: // orphan
         if                       // fcn.80339168-0x17ad8 // unlikely

    loc_0x80338e58: // orphan
         if                       // fcn.80339168-0x179ec // unlikely

    loc_0x80338e64: // orphan
         if                       // unlikely

    loc_0x80338e70: // orphan
         if                       // unlikely

    loc_0x80338e7c: // orphan
         if                       // unlikely

    loc_0x80338e88: // orphan
         // CODE XREF from fcn.80339168 @ 0x803237e0
         if                       // unlikely
         if                       // unlikely

    loc_0x80338e94: // orphan
         if                       // fcn.80339168-0x17710 // unlikely

    loc_0x80338ea0: // orphan
         // CODE XREF from fcn.803199d0 @ +0x1bc
         if                       // fcn.80339168-0x17664 // unlikely

    loc_0x80338eac: // orphan
         if                       // unlikely

    loc_0x80338eb8: // orphan
         if                       // fcn.80339030-0x17444 // unlikely

    loc_0x80338ec4: // orphan
         if                       // unlikely

    loc_0x80338ed0: // orphan
         if                       // unlikely

    loc_0x80338edc: // orphan
         if                       // unlikely

    loc_0x80338ee8: // orphan
         if                       // fcn.80339168-0x1745c // unlikely

    loc_0x80338ef4: // orphan
         // CODE XREF from fcn.80339168 @ 0x803237ec
         if                       // unlikely
         if                       // unlikely

    loc_0x80338f00: // orphan
         if                       // fcn.80339168-0x17288 // unlikely
         if                       // unlikely

    loc_0x80338f0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338f18: // orphan
         if                       // fcn.80339168-0x17190 // unlikely
         if                       // unlikely

    loc_0x80338f24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80338f30: // orphan
         if                       // fcn.80339168-0x170a8 // unlikely
         

    loc_0x8033901c: // orphan
         if                       // fcn.80338964-0x15fb4 // unlikely

    loc_0x80339028: // orphan
         if                       // unlikely

    loc_0x803394ec: // orphan
         if                       // fcn.80339168-0x132a8 // unlikely

    loc_0x803394f8: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0x131a8 // unlikely

    loc_0x80339504: // orphan
         if                       // fcn.80339168-0x13120 // unlikely
         if                       // fcn.80339168-0x130dc // unlikely

    loc_0x80339624: // orphan
         if                       // unlikely
         

    loc_0x80339a14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339a20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339a38: // orphan
         if                       // unlikely
         

    loc_0x80339aec: // orphan
         if                       // unlikely

    loc_0x80339af8: // orphan
         if                       // fcn.80339168-0xd86c // unlikely

    loc_0x80339b04: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033abec
         if                       // unlikely
         if                       // unlikely

    loc_0x80339b10: // orphan
         if                       // unlikely

    loc_0x80339b1c: // orphan
         if                       // fcn.80339168-0xd4f8 // unlikely

    loc_0x80339b28: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033abf4
         if                       // fcn.80339168-0xd3fc // unlikely

    loc_0x80339b34: // orphan
         if                       // fcn.80339168-0xd3a4 // unlikely
         if                       // fcn.80339168-0xd340 // unlikely

    loc_0x80339b40: // orphan
         if                       // fcn.80339168-0xd318 // unlikely
         if                       // unlikely

    loc_0x80339b4c: // orphan
         if                       // fcn.80339168-0xd2bc // unlikely
         if                       // unlikely

    loc_0x80339b58: // orphan
         if                       // fcn.80339168-0xd200 // unlikely
         if                       // unlikely

    loc_0x80339b64: // orphan
         if                       // unlikely
         if                       // fcn.80339030-0xd008 // unlikely

    loc_0x80339ca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339cb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80339cc0: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0xc314 // unlikely

    loc_0x80339ccc: // orphan
         if                       // unlikely
         if                       // fcn.80339168-0xc0e8 // unlikely

    loc_0x80339f18: // orphan
         if                       // fcn.80339168-0xa95c // unlikely

    loc_0x80339f24: // orphan
         if                       // fcn.80339168-0xa960 // unlikely

    loc_0x80339f30: // orphan
         if                       // unlikely

    loc_0x80339fbc: // orphan
         if                       // fcn.80339168-0x9d98 // unlikely

    loc_0x80339fc8: // orphan
         if                       // fcn.80339168-0x9bec // unlikely

    loc_0x8033a26c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a338: // orphan
         if                       // fcn.80339168-0x71ec // unlikely
         if                       // fcn.80339168-0x71d8 // unlikely

    loc_0x8033a344: // orphan
         if                       // fcn.80339168-0x7170 // unlikely
         if                       // fcn.80339168-0x711c // unlikely

    loc_0x8033a350: // orphan
         if                       // fcn.80339168-0x70c4 // unlikely
         // CODE XREF from fcn.8033aba4 @ +0x11c
         if                       // fcn.80339168-0x7080 // unlikely

    loc_0x8033a37c: // orphan
         if                       // fcn.80339168-0x6df8 // unlikely

    loc_0x8033a388: // orphan
         if                       // fcn.80339168-0x6d2c // unlikely

    loc_0x8033a394: // orphan
         if                       // fcn.80339168-0x6c60 // unlikely

    loc_0x8033a3a0: // orphan
         if                       // unlikely

    loc_0x8033a3ac: // orphan
         if                       // unlikely

    loc_0x8033a6e4: // orphan
         if                       // unlikely

    loc_0x8033a6f0: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033acfc
         if                       // fcn.80339168-0x3c04 // unlikely

    loc_0x8033a6fc: // orphan
         if                       // unlikely

    loc_0x8033a708: // orphan
         if                       // unlikely

    loc_0x8033a714: // orphan
         if                       // unlikely

    loc_0x8033a720: // orphan
         if                       // unlikely

    loc_0x8033a72c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a734: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033ad00
         if                       // unlikely

    loc_0x8033a738: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a740: // orphan
         if                       // unlikely

    loc_0x8033a744: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a74c: // orphan
         if                       // fcn.80339168-0x30e8 // unlikely

    loc_0x8033a750: // orphan
         if                       // fcn.80339168-0x30b4 // unlikely
         if                       // unlikely

    loc_0x8033a758: // orphan
         if                       // fcn.80339168-0x2fac // unlikely

    loc_0x8033a764: // orphan
         if                       // fcn.80339168-0x2e60 // unlikely
         if                       // fcn.80339030-0x2ca4 // unlikely

    loc_0x8033a770: // orphan
         if                       // fcn.80339168-0x2df4 // unlikely
         if                       // unlikely

    loc_0x8033a77c: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033ad04
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a788: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a794: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8033a7a0: // orphan
         if                       // unlikely
         

    loc_0x8033ad08: // orphan
         if                       // fcn.80339168+0x1654 // unlikely

    loc_0x8033ad14: // orphan
         if                       // unlikely

    loc_0x8033b1d4: // orphan
         at = halfword [0 + 0xf98]

    loc_0x8033b2dc: // orphan
         teq s0, at, 0x5b

    loc_0x8033b49c: // orphan
         teq s0, at, 0x68

    loc_0x8033ba10: // orphan
         t6 = sp + 0x24
         [sp + 0x10] = t6
         a2 = sp + 0x28
         a3 = sp + 0x26
         a0 = v0 + 0xb4

    loc_0x8033ba60: // orphan
         a0 = 0x8ae1 << 16
         a0 = [a0 - 0x7b44]       // t9
         sp -= 0x28
         [sp + 0x24] = ra
         v0 = a0 + 0xb4
         v1 = a0 + 0xa8
         lwc1 f4
         a1 = [v1 + 0]            // t9
         a2 = [v1 + 4]            // t9
         a3 = [v1 + 8]            // t9
         swc1 f4, 0x10, sp
         lwc1 f6, 4, v0
         swc1 f6, 0x14, sp
         lwc1 f8, 8, v0
         [sp + 0x1c] = 0
         call 0x80038e14          // 0x80038e14(-1, -1, -1, -1)
         swc1 f8, 0x18, sp
         a0 = 0x8ae1 << 16
         a0 = [a0 - 0x7b44]       // t9
         a1 = 0x41f0 << 16
         // CODE XREF from fcn.80339168 @ 0x8033ae2c
         a2 = 0x42c8 << 16
         call 0x80038dc8          // 0x80038dc8(-1, 0x41f00000, 0x42c80000, -1)
         a3 = 0x4648 << 16
         ra = [sp + 0x24]

    loc_0x8033badc: // orphan
         [sp + 0x14] = ra
         a0 = 0 + 0xc80
         call 0x80002984          // 0x80002984(0xc80, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8033aba4 @ +0x290
         a1 = 0
         v1 = 0x8ae1 << 16
         v1 -= 0x5e9c
         [v1 + 0] = v0
         a1 = 0x8ae1 << 16
         a1 = halfword [a1 - 0x5ea2]
         a0 = v0                  // s4
         call 0x8004d878          // 0x8004d878(0xff, 0xffff, 0x8, -1)
         a2 = 0
         // CODE XREF from fcn.80339168 @ 0x8033ae38
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8033c59c: // orphan
         ret                      // ra
         // CODE XREF from fcn.8033aba4 @ +0x374
         v0 = v1

    loc_0x8033c65c: // orphan
         ret                      // ra
         

    loc_0x8033c6a4: // orphan
         sp -= 0x28
         [sp + 0x1c] = s2
         [sp + 0x14] = s0
         s0 = a0                  // t9
         [sp + 0x24] = ra
         // CODE XREF from fcn.8033aba4 @ +0x380
         [sp + 0x20] = s3
         [sp + 0x18] = s1
         a2 = a1                  // t0
         if                       // likely
         s2 = 0

    loc_0x8033c6cc: // orphan
         goto 0x8033c828          // fcn.80339168+0x36c0
         v0 = 0

    loc_0x8033c6d4: // orphan
         s3 = 0x8ae1 << 16
         s3 -= 0x5ea4
         s1 = 0 + 1               // lo

    loc_0x8033c7a0: // orphan
         lwl t5
         lwr t5, 3, v0
         s2 = s1
         a2 = v0 + 5              // s0
         swl t5, 0x11, s0
         swr t5, 0x14, s0
         t5 = , unsigned  byte [v0 + 4]
         goto 0x8033c6e0          // fcn.80339168+0x3578
         byte [s0 + 0x15] = t5

    loc_0x8033c84c: // orphan
         ret                      // ra
         v0 = 0

    loc_0x8033c994: // orphan
         if                       // likely
         v1 = 0

    loc_0x8033c99c: // orphan
         ret                      // ra
         v0 = 0

    loc_0x8033c9a4: // orphan
         t0 = 0x8ae1 << 16
         v0 = 0
         t0 -= 0x5ea4
         t1 = 0 + 3
         a3 = 0 + 0xff            // s4

    loc_0x8033caec: // orphan
         // CODE XREF from fcn.80339168 @ 0x8033af78
         fp = 0 + 6

    loc_0x8033e9b0: // orphan
         sp -= 0x20
         t6 = hi
         t8 = 0x8ae1 << 16
         [sp + 0x20] = a0
         t8 -= 0x64a0
         t7 = t6 << 8
         [sp + 0x14] = ra
         a0 = t7 + t8
         [sp + 0x18] = a0
         call 0x80075630          // 0x80075630(0x8ae09960, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x100

    loc_0x8033eb78: // orphan
         t2 = [sp + 0x238]
         a0 = , unsigned  byte [t2 + 2] // s4
         if                       // likely
         

    loc_0x8033f470: // orphan
         
         sp -= 0x58
         [sp + 0x1c] = ra
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = s0
         call 0x80049668          // 0x80049668(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         a0 = 0 + 1               // lo
         call 0x800496a4          // 0x800496a4(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         v0 = 0x8ae1 << 16
         v0 -= 0x6188
         t7 = 0x8ae1 << 16
         t7 = halfword [t7 - 0x614a]
         t6 = halfword [v0 + 0xe]
         a1 = halfword [v0 + 0x10]
         a3 = 0x8ae1 << 16
         a0 = t6 + t7
         a0 += 0x10
         if                       // likely
         at = a0

    loc_0x8033f4c4: // orphan
         at = a0 + 1

    loc_0x8033f4c8: // orphan
         a0 = , signed  at >> 1
         a3 -= 0x66b0
         a2 = 0 + 1               // lo
         call 0x800495f8          // 0x800495f8(0x0, 0x442f71dcfe116408, 0x1, 0xffffffffffff994f)
         a1 += 5
         v0 = 0x8ae1 << 16
         v0 = halfword [v0 - 0x6750]
         s0 = 0x8ae1 << 16
         a0 = 0 + 1               // lo
         if                       // unlikely
         a1 = 0

    loc_0x8033f4f4: // orphan
         at = 0 + 1               // lo
         if                       // unlikely
         s0 = 0x8ae1 << 16

    loc_0x8033f500: // orphan
         at = 0 + 2
         if                       // unlikely
         

    loc_0x8033f50c: // orphan
         s0 = 0x8ae1 << 16
         goto 0x8033f524
         s0 -= 0x7bf4

    loc_0x8033f518: // orphan
         goto 0x8033f524
         s0 = [s0 - 0x6504]       // t9

    loc_0x8033f520: // orphan
         s0 = [s0 - 0x6500]       // t9

    loc_0x8033f524: // orphan
         // CODE XREFS from fcn.8031c6d4 @ 0x8033f510, 0x8033f518
         call 0x80049148          // 0x80049148(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = s0
         v1 = 0x8ae1 << 16
         at = 0x8ae1 << 16
         halfword [at - 0x64fc] = v0
         v1 -= 0x6128
         t9 = 0x8ae1 << 16
         t9 = halfword [t9 - 0x60ea]
         t8 = halfword [v1 + 0xe]
         a1 = halfword [v1 + 0x10]

    loc_0x80342910: // orphan
         ldc1 f0, 2, t8

    loc_0x80343fe4: // orphan
         if                       // fcn.80339168+0x10450 // unlikely

    loc_0x803440fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80344108: // orphan
           // CALL XREF from fcn.82c78594 @ +0x6f8
         if                       // fcn.80353f78-0x82c0 // unlikely
         if                       // unlikely

    loc_0x80344114: // orphan
         if                       // unlikely
         if                       // fcn.80353f78-0x816c // unlikely

    loc_0x80344120: // orphan
         if                       // fcn.80339168+0x12dac // unlikely
         if                       // unlikely

    loc_0x8034412c: // orphan
         if                       // fcn.80339168+0x12de8 // unlikely
         if                       // unlikely

    loc_0x80344138: // orphan
         if                       // unlikely
         

    loc_0x80344140: // orphan
         if                       // fcn.80339168+0x12e5c // unlikely
         if                       // unlikely

    loc_0x80344310: // orphan
         if                       // fcn.80339168+0x141bc // unlikely
         if                       // fcn.80339168+0x141e0 // unlikely

    loc_0x803444dc: // orphan
         if                       // fcn.803444d4+0xa64c // unlikely
         if                       // unlikely

    loc_0x803444e8: // orphan
         if                       // fcn.803444d4+0xa6a8 // unlikely
         if                       // unlikely

    loc_0x803444f4: // orphan
         if                       // unlikely
         

    loc_0x80344604: // orphan
         if                       // fcn.80339168+0x162ac // unlikely
         

    loc_0x8034482c: // orphan
         
         if                       // fcn.803501d0+0x12c // unlikely
         if                       // fcn.803501d0+0x140 // unlikely

    loc_0x803452d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803452dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803455c8: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0x23fd4 // unlikely

    loc_0x803455d4: // orphan
         if                       // fcn.80339168+0x2403c // unlikely
         if                       // fcn.80339168+0x24050 // unlikely

    loc_0x80345698: // orphan
         if                       // unlikely
         

    loc_0x803456a8: // orphan
         
         

    loc_0x80345780: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80345878: // orphan
         

    loc_0x80345d0c: // orphan
         if                       // likely
         ldc1 f20, -0x2b08, at

    loc_0x80345d14: // orphan
         bnel a2, 0, 0x80345d28   // likely
         t6 = [s2 + 0x1828]       // t9

    loc_0x80345d1c: // orphan
         goto 0x80345dc8          // fcn.80345d44+0x84
         v0 = 0

    loc_0x80345d24: // orphan
         t6 = [s2 + 0x1828]       // t9

    loc_0x80345d28: // orphan
         s4 = 0 + 3
         s1 = 0
         if                       // unlikely
         ldc1 f22, 0x58, sp

    loc_0x80345d38: // orphan
         goto 0x80345dc8          // fcn.80345d44+0x84
         v0 = 0

    loc_0x80345d40: // orphan
         s5 = 0 + 0x6660

    loc_0x80345f9c: // orphan
         ldc1 f8, 0x6890, t7
         mtc1 at, f5
         mtc1 0, f4
         div.d f18, f8, f16
         a0 = sp + 0x28
         a1 = sp + 0x58
         mul.d f6, f18, f4
         mfc1 a3, f6
         mfc1 a2, f7
         call 0x87c002a8          // 0x87c002a8(0x178028, 0x178058, 0x8, -1)
         
         a0 = s0
         a1 = s0
         call 0x87c00160          // 0x87c00160(0x104, 0x104, 0x8, -1)
         a2 = v0                  // s4
         call 0x87c00664          // "\u01e2" // 0x87c00664(0x104, 0x104, 0xff, -1)
         a0 = s0
         lwc1 f2, 0x88, sp
         mul.s f10, f2, f2
         cvt.d.s f8, f10

    loc_0x80346898: // orphan
         [t3 + 0] = t9
         [a0 + 0] = t6
         lwc1 f10, 8, t1
         at = 0x4f00 << 16
         t9 = 0xfa00 << 16
         a1 = 0
         trunc.w.s f8, f6
         cfc1 t7, 31
         ctc1 t8, 31
         mfc1 a3, f8
         cvt.w.s f4, f10
         t5 = a3 << 0x10
         t5 = , signed  t5 >> 0x10 // t9

    loc_0x803468cc: // orphan
         cfc1 t8, 31
         
         t8 &= 0x78
         beql t8, 0, 0x80346928   // unlikely
         mfc1 t8, f4

    loc_0x803468e0: // orphan
         mtc1 at, f4
         t8 = 0 + 1               // lo
         sub.s f4, f10, f4
         ctc1 t8, 31
         
         cvt.w.s f4, f4
         cfc1 t8, 31
         
         t8 &= 0x78
         if                       // unlikely
         

    loc_0x8034690c: // orphan
         mfc1 t8, f4
         at = 0x8000 << 16
         goto 0x80346934
         t8 |= at                 // t9

    loc_0x8034691c: // orphan
         goto 0x80346934
         t8 = 0 - 1               // s2

    loc_0x80346928: // orphan
         
         if                       // unlikely
         

    loc_0x80346934: // orphan
         // CODE XREFS from fcn.8031c6d4 @ 0x80346914, 0x8034691c
         ctc1 t7, 31
         t6 = t8 & 0x7fff
         t7 = t6 << 0x10
         [a0 + 4] = t7
         v1 = [t3 + 0]            // t9
         t9 |= 0xffff
         mtc1 s0, f6
         t8 = v1 + 8
         [t3 + 0] = t8
         [v1 + 0] = t9
         t6 = [t1 + 0xc]          // t9
         t8 = 0x8601 << 16
         t8 -= 0x2e60
         t7 = t6 << 3
         v0 = t7 + t8
         t8 = , unsigned  byte [v0 + 8] // s4
         t6 = , unsigned  byte [v0 + 0xb] // s4
         cvt.s.w f8, f6
         t9 = t8 << 0x18
         t7 = t6 | t9
         t6 = , unsigned  byte [v0 + 9] // s4
         at = 0x4120 << 16
         mtc1 at, f10
         t9 = t6 << 0x10
         t8 = t7 | t9
         div.s f4, f8, f10
         t7 = , unsigned  byte [v0 + 0xa] // s4
         at = 0x4f80 << 16
         t9 = t7 << 8
         t6 = t8 | t9
         [v1 + 4] = t6
         a2 = [t3 + 0]
         t8 = 0xfb00 << 16
         t7 = a2 + 8
         [t3 + 0] = t7
         [a2 + 0] = t8
         t9 = [t1 + 0xc]
         t7 = 0x8601 << 16
         t7 -= 0x2e60
         t6 = t9 << 3
         v0 = t6 + t7
         t8 = , unsigned  byte [v0 + 0xf] // s4
         mtc1 t8, f8
         sub.s f6, f18, f4
         if                       // likely
         cvt.s.w f10, f8

    loc_0x803469ec: // orphan
         mtc1 at, f4
         
         add.s f10, f10, f4

    loc_0x803469f8: // orphan
         mul.s f8, f10, f6
         lwc1 f4, 0x14, t1
         t6 = 0 + 1               // lo

    loc_0x80346b08: // orphan
         trunc.w.s f6, f10
         mfc1 t2, f6
         
         t2 <<= 0x10
         t2 = , signed  t2 >> 0x10 // s4
         if                       // unlikely
         

    loc_0x80347090: // orphan
         trunc.w.s f10, f4
         mfc1 v1, f10
         
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // fcn.80339168+0xdf4c // unlikely
         

    loc_0x80347148: // orphan
         goto 0x8034714c
         v1 = v0                  // s4

    loc_0x8034b4d4: // orphan
         swc1 f2                  // arg3
         mtc1 0, f8
         at = 0xc280 << 16
         mtc1 at, f10
         swc1 f8                  // arg2
         ret                      // ra
         swc1 f10                 // arg3

    loc_0x8034b5ac: // orphan
         cvt.s.d f6, f4
         t2 += a2
         t9 <<= 5
         t0 = a0 + t9
         t2 <<= 3

    loc_0x8034bd50: // orphan
         s1 = a0 + 0x75c8
         s2 = 0 + 0xb60

    loc_0x8034bd58: // orphan
         call 0x86001afc          // 0x86001afc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         s0 += 0x2d8
         if                       // likely
         s1 += 0x2d8

    loc_0x8034bd6c: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // v1
         s2 = [sp + 0x20]
         ret                      // ra
         sp += 0x28

    loc_0x8034becc: // orphan
         a1 = 0 + 1               // lo
         goto 0x8034beec
         

    loc_0x8034beec: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8034bed0
         s3 = 0x8601 << 16
         s3 -= 0x21d0
         s0 = [s3 + 0]            // t9

    loc_0x8034bf38: // orphan
         ldc1 f4, 0x6890, s2
         a0 = s2
         cvt.d.w f8, f6
         div.d f10, f4, f8
         mfc1 a3, f10
         mfc1 a2, f11
         call 0x860057d0          // 0x860057d0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = [s3 + 0]            // t9
         s1 += 1
         at = , s1 < s0
         bnel at, 0, 0x8034bf08   // unlikely
         mtc1 s0, f6

    loc_0x8034bf7c: // orphan
         a0 = s2
         call 0x800084a0          // 0x800084a0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8034bfe8: // orphan
         mtc1 s0, f6
         ldc1 f4, 0x6890, s2
         a0 = s2
         cvt.d.w f8, f6
         div.d f10, f4, f8
         mfc1 a3, f10
         mfc1 a2, f11
         call 0x860057d0          // 0x860057d0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s0 = [s3 + 0]            // t9
         s1 += 1
         at = , s1 < s0
         bnel at, 0, 0x8034bfb8   // unlikely
         mtc1 s0, f6

    loc_0x8034d524: // orphan
         sp -= 0x18
         [sp + 0x14] = ra

    loc_0x8034d5a0: // orphan
         mtc1 0, f18
         mul.d f6, f4, f12
         at = 0x4014 << 16
         a0 += 0x60
         div.d f4, f16, f18
         sdc1 f6, 0x70, a0
         ldc1 f8, 0x60, v0
         mul.d f10, f12, f8
         sdc1 f10, 0x78, a0
         mtc1 0, f10
         mtc1 at, f11
         mul.d f6, f4, f12
         
         mul.d f8, f6, f12
         
         mul.d f0, f8, f10
         mfc1 a3, f0
         mfc1 a2, f1
         sdc1 f0, 0x10, sp
         call 0x87c00120          // 0x87c00120(0x10000005f, 0x442f71dcfe116408, 0x8, -1)
         sdc1 f0, 0x18, sp
         ra = [sp + 0x24]

    loc_0x8034d60c: // orphan
         mtc1 0, f20

    loc_0x8034eb34: // orphan
         a2 = [v0 + 8]
         a3 = [v0 + 0xc]          // t9
         call 0x86009ef8          // 0x86009ef8(-1, 0x442f71dcfe116408, 0xfdffffff, -1)
         sdc1 f16, 0x68, sp
         mtc1 0, f19

    loc_0x8034ebf0: // orphan
         at = 0x3ff0 << 16
         mtc1 at, f1
         mtc1 0, f0
         

    loc_0x803502e4: // orphan
         goto 0x803502e8
         a2 = t0

    loc_0x80352b90: // orphan
         
         
         

    loc_0x80352b9c: // orphan
         
         
         

    loc_0x803533e0: // orphan
         
         sd s1
         
         sd s1

    loc_0x803535a0: // orphan
         bnel v0, t1, 0x803672dc  // likely
         s2 = v0 + 0x4550

    loc_0x803535f8: // orphan
         beql k0, s4, 0x80365b08  // unlikely

    loc_0x80353624: // orphan
         

    loc_0x803536c0: // orphan
         beql v0, t7, 0x80365bfc  // unlikely
         bnel 0, 0, 0x803536c8    // unlikely

    loc_0x803536cc: // orphan
         bz.w w5, 0x8035b820      // fcn.8035b800+0x20 // unlikely

    loc_0x803539f0: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353abc: // orphan
         if                       // unlikely
         

    loc_0x80353be4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80353bf4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353c00: // orphan
         if                       // fcn.80339168+0x2514c // unlikely
         if                       // unlikely

    loc_0x80353c0c: // orphan
         if                       // unlikely
         

    loc_0x80353c14: // orphan
         
         if                       // fcn.80353c1c+0xaa80 // unlikely
         // CALL XREF from fcn.82268600 @ +0x1f14
         if                       // unlikely

    loc_0x80353c24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353c30: // orphan
         

    loc_0x80353c34: // orphan
         

    loc_0x80353d9c: // orphan
         if                       // fcn.803547f0+0xc88c // unlikely
         if                       // unlikely

    loc_0x80353da8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353db4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80353dc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8035422c: // orphan
         if                       // fcn.803649bc+0x4f40 // unlikely
         if                       // unlikely

    loc_0x80354238: // orphan
         if                       // fcn.8031c6d4+0x4d424 // unlikely
         if                       // fcn.8031c6d4+0x4d458 // unlikely

    loc_0x80354244: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354250: // orphan
         if                       // fcn.8031c6d4+0x4d56c // unlikely
         if                       // fcn.80369c70+0xa4 // unlikely

    loc_0x803543c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803543d0: // orphan
         
         if                       // unlikely
         

    loc_0x803543dc: // orphan
         
         if                       // unlikely
         if                       // fcn.803747c4-0x691c // unlikely

    loc_0x803543ec: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803543fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035440c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80354420: // orphan
         if                       // unlikely
         

    loc_0x80354428: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8035443c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354448: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803544e0: // orphan
         
         
         if                       // unlikely
         

    loc_0x803544f0: // orphan
         

    loc_0x80354624: // orphan
         if                       // unlikely
         

    loc_0x8035462c: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x80354644: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x80354658: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354664: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80354670: // orphan
         if                       // unlikely
         

    loc_0x80354678: // orphan
         
         if                       // unlikely
         

    loc_0x80354684: // orphan
         
         

    loc_0x80354850: // orphan
         

    loc_0x80354fa0: // orphan
         
         if                       // fcn.80345c60+0x38 // unlikely
         if                       // unlikely

    loc_0x80354fb0: // orphan
         if                       // fcn.80345c60+0x14 // unlikely
         

    loc_0x80354fb8: // orphan
         if                       // fcn.80339168+0xccc4 // unlikely
         if                       // fcn.80339168+0xcd38 // unlikely

    loc_0x80354fc4: // orphan
         if                       // fcn.80339168+0xcca0 // unlikely
         

    loc_0x80354fcc: // orphan
         if                       // unlikely
         if                       // fcn.80339168+0xcecc // unlikely

    loc_0x80354fd8: // orphan
         if                       // unlikely
         

    loc_0x80354fe0: // orphan
         if                       // fcn.80339168+0xd02c // unlikely
         if                       // fcn.80339168+0xd0a0 // unlikely

    loc_0x8035523c: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80355294: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803552a0: // orphan
         if                       // unlikely
         

    loc_0x803555dc: // orphan
         mul.d f8, f4, f6

    loc_0x80356b6c: // orphan
         ra = [sp + 0x14]

    loc_0x80356f20: // orphan
         v1 = v0                  // s4
         bnel t4, 0, 0x80356f5c   // likely
         mtc1 v1, f4

    loc_0x80356f2c: // orphan
         call 0x87c018c8          // 0x87c018c8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = v0
         lwc1 f4, 0xc, s0
         at = 0x3f00 << 16
         mtc1 at, f8
         mul.s f6, f4, f0
         lwc1 f10, 0x10, s0
         v1 = [sp + 0x20]         // s4
         mul.s f16, f6, f8
         add.s f18, f10, f16
         swc1 f18, 0x10, s0
         mtc1 v1, f4

    loc_0x80356f5c: // orphan
         lwc1 f0, 0x10, s0
         cvt.s.w f2, f4
         c.le.s f2, f0
         
         bc1fl 0x80356f88
         [s0 + 0x1c] = 0
         sub.s f6, f0, f2
         a0 = s0
         call 0x87c01910          // 0x87c01910(0x104, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x10, s0
         [s0 + 0x1c] = 0
         a0 = s0
         call 0x87c01fe0          // 0x87c01fe0(0x104, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s0 + 0x14]
         mtc1 v0, f10
         lwc1 f8, 8, s0
         t5 = 0 + 1               // lo
         cvt.s.w f16, f10
         a0 = s0
         c.le.s f16, f8
         
         bc1fl 0x803570ac
         ra = [sp + 0x1c]         // v1
         [s0 + 0x18] = t5
         a1 = halfword [s0 + 0x14]
         call 0x87c02040          // 0x87c02040(0x104, 0xff02, 0x8, -1)
         [sp + 0x24] = v0
         if                       // unlikely
         v1 = [sp + 0x24]         // s4

    loc_0x80356fd0: // orphan
         t6 = [s0 + 4]            // t9
         a0 = s0
         beql t6, 0, 0x80357020   // unlikely
         mtc1 v1, f16

    loc_0x80356fe0: // orphan
         call 0x87c019dc          // 0x87c019dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v1
         at = 0 + 1               // lo
         if                       // fcn.80339168+0x1df40 // likely
         v1 = [sp + 0x24]

    loc_0x80356ff4: // orphan
         mtc1 v1, f4
         lwc1 f18, 8, s0
         a0 = s0
         cvt.s.w f6, f4
         a1 = halfword [s0 + 0x14]
         sub.s f10, f18, f6
         call 0x87c019b0          // 0x87c019b0(0x104, 0xff02, 0x8, -1)
         swc1 f10, 8, s0
         goto 0x803570ac          // fcn.80339168+0x1df44
         ra = [sp + 0x1c]         // v1

    loc_0x80357020: // orphan
         lwc1 f8, 8, s0
         a0 = s0
         cvt.s.w f4, f16
         a1 = halfword [s0 + 0x14]
         sub.s f18, f8, f4
         call 0x87c019b0          // 0x87c019b0(0x104, 0xff02, 0x8, -1)
         swc1 f18, 8, s0
         goto 0x803570ac          // fcn.80339168+0x1df44
         ra = [sp + 0x1c]         // v1

    loc_0x80357044: // orphan
         t7 = [s0 + 4]            // t9
         a0 = s0
         if                       // unlikely
         

    loc_0x80357054: // orphan
         call 0x87c019dc          // 0x87c019dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         if                       // fcn.80339168+0x1df40 // likely
         a0 = s0

    loc_0x80357088: // orphan
         call 0x87c01fe0          // 0x87c01fe0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s0 + 0x14]
         t1 = v0 - 1              // t3
         mtc1 t1, f16
         t0 = 0 + 1               // lo
         [s0 + 0x1c] = t0
         cvt.s.w f8, f16
         swc1 f8, 8, s0

    loc_0x803571cc: // orphan
         beql a1, t6, 0x803571e4  // unlikely
         a1 = a3 << 0x10

    loc_0x803571d4: // orphan
         mtc1 0, f4
         
         swc1 f4, 8, a0
         a1 = a3 << 0x10

    loc_0x803571e4: // orphan
         a1 = , signed  a1 >> 0x10
         [sp + 0x18] = a0
         call 0x87c019b0          // 0x87c019b0(-1, 0xfffffe11, 0x8, -1)
         [sp + 0x1c] = a3
         a3 = [sp + 0x1c]         // t9
         a0 = [sp + 0x18]         // t9
         t7 = 0 + 1               // lo
         if                       // likely
         [a0 + 4] = 0

    loc_0x80357208: // orphan
         goto 0x80357214
         [a0 + 0x1c] = t7

    loc_0x80357210: // orphan
         [a0 + 0x1c] = 0

    loc_0x80357214: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80357208
         [a0 + 0x18] = 0
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8035822c: // orphan
         [sp + 0x40] = s7
         [sp + 0x3c] = s6
         [sp + 0x38] = s5
         [sp + 0x34] = s4
         [sp + 0x30] = s3
         [sp + 0x2c] = s2

    loc_0x8035bab0: // orphan
         lwc1 f12
         v0 = [v1 + 0]            // t9
         lwc1 f16, 0x10, v0
         add.s f18, f16, f12
         swc1 f18, 0x10, v0
         t9 = [a2 + 0]
         lwc1 f0
         t0 = t9 + a3
         lwc1 f2, 0x1784, t0
         add.s f14, f2, f2
         c.lt.s f14, f0
         
         bc1fl 0x8035bb04
         at = 0x3e80 << 16
         swc1 f14
         t1 = [t1 - 0x52e0]       // t9
         at = 1 << 16
         lwc1 f0
         at += t1
         lwc1 f2, -0x687c, at
         at = 0x3e80 << 16
         mtc1 at, f6
         neg.s f4, f2
         mul.s f12, f4, f6
         c.lt.s f0, f12
         
         bc1fl 0x8035bb2c
         v0 = [v1 + 0]            // t9
         swc1 f12
         lwc1 f0
         v0 = [v1 + 0]            // t9
         lwc1 f8, 0x14, v0
         add.s f10, f8, f0
         goto 0x8035bc00
         swc1 f10, 0x14, v0

    loc_0x8035bc00: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8035bb34
         v1 = 0 + 1               // lo
         ra = [sp + 0x14]
         sp += 0x20
         v0 = v1                  // lo
         ret                      // ra
         

    loc_0x8035d20c: // orphan
         [t2 + 0xc4] = t9

    loc_0x8035d210: // orphan
         halfword [t0 + 0x20] = t3
         t4 = [a2 + 0]            // arg3
         v1 = 0 + 0xff            // s4
         byte [t4 + 0xc4] = v1
         t5 = [a2 + 0]            // arg3
         byte [t5 + 0xc5] = v1
         t7 = [a2 + 0]            // arg3
         byte [t7 + 0xc6] = v1
         v0 = [a2 + 0]            // arg3
         t6 = , unsigned  byte [v0 + 0xc7] // s4
         t8 = t6 - 0x2f
         byte [v0 + 0xc7] = t8
         [sp + 0x44] = t0
         call 0x86103384          // 0x86103384(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x4a] = a3
         a2 = 0x87f1 << 16
         a2 += 0x19dc
         a3 = , unsigned  halfword [sp + 0x4a]
         t0 = [sp + 0x44]

    loc_0x8035d25c: // orphan
         // CODE XREF from fcn.8035d1e4 @ 0x8035d208
         v0 = [a2 + 0]
         goto 0x8035d560
         a1 = a3                  // s2

    loc_0x8035d560: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x8035d260
         lwc1 f18, 0x24, t0
         // CODE XREF from fcn.80358e2c @ +0x904
         lwc1 f4, 0x10, v0
         lwc1 f8, 0x28, t0
         add.s f6, f18, f4
         lwc1 f4, 0x2c, t0

    loc_0x8035df50: // orphan
         sp += 0x60
         ret                      // ra
         

    loc_0x8035e05c: // orphan
         a1 = sp + 0x44
         a2 = sp + 0x40
         call 0x86102b30          // "\u01ec" // 0x86102b30(-1, 0x178044, 0x178040, -1)
         swc1 f12, 0x50, t7
         lwc1 f12, 0x44, sp
         lwc1 f14, 0x40, sp
         call 0x86101e04          // 0x86101e04(-1, 0x178044, 0x178040, -1)
         a2 = 0
         call 0x861023d4          // 0x861023d4(-1, 0x178044, 0x0, -1)
         
         call 0x86103b74          // 0x86103b74(-1, 0x178044, 0x0, -1)
         
         v0 = 0x87f1 << 16
         v0 = [v0 + 0x19dc]       // t9
         at = 0x42b4 << 16
         mtc1 at, f2

    loc_0x8035e3b8: // orphan
         sp -= 0x28
         [sp + 0x14] = s0
         s0 = 0x8611 << 16
         s0 = [s0 - 0x52e0]       // t9
         [sp + 0x20] = s3
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         at = 0 | 0x8de0
         [sp + 0x24] = ra
         s1 = 0
         s2 = 0x200 << 16
         s3 = 0 + 4
         s0 += at

    loc_0x8035e410: // orphan
         if                       // likely
         s0 += 0x2c

    loc_0x8035e62c: // orphan
         at = 0x8611 << 16
         lwc1 f18, -0x53ec, at
         mtc1 0, f4
         
         swc1 f4, 0x20, v1
         mul.s f10, f8, f6
         add.s f16, f10, f18
         swc1 f16, 0x1c, v1
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8035e6b0: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x18, t6
         mtc1 v0, f10
         v1 = [sp + 0x18]         // t9
         if                       // likely
         cvt.s.w f16, f10

    loc_0x8035e6c8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f18
         
         add.s f16, f16, f18

    loc_0x8035e6d8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f4
         at = 0x8611 << 16

    loc_0x8035e6e4: // orphan
         lwc1 f6, -0x53e0, at
         div.s f8, f16, f4
         at = 0x8611 << 16
         lwc1 f18, -0x53dc, at
         mtc1 0, f4
         
         swc1 f4, 0x20, v1
         mul.s f10, f8, f6
         add.s f16, f10, f18
         swc1 f16, 0x1c, v1
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x803672dc: // orphan
         a1 = [a1 + 0x19dc]       // t9
         call 0x87f026e8          // 0x87f026e8(-1, -1, 0x8, -1)
         a0 = [a0 + 0x19d8]       // t9
         ra = [sp + 0x14]

    loc_0x80369a94: // orphan
         
         sp -= 0x30
         [sp + 0x2c] = ra
         [sp + 0x28] = s5
         [sp + 0x24] = s4
         [sp + 0x20] = s3
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         call 0x86203ba8          // 0x86203ba8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s0
         s0 = 0x8621 << 16
         s0 -= 0x1e68
         v0 = [s0 + 0]            // t9
         s4 = 7 << 16
         s4 |= 0x1d9c
         t6 = [v0 + 0x3c]         // t9
         s1 = 0
         s5 = 7 << 16
         if                       // unlikely
         s3 = 0 | 0xed88

    loc_0x80369ae4: // orphan
         s2 = 7 << 16
         s2 |= 0x2264

    loc_0x80369aec: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80369b5c
         call 0x87f0277c          // 0x87f0277c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + s2             // t3
         a0 = [s0 + 0]
         call 0x87f0277c          // 0x87f0277c(0x6fffd, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x174
         t7 = [s0 + 0]
         call 0x87f0277c          // 0x87f0277c(0x70171, 0x442f71dcfe116408, 0x8, -1)
         a0 = t7 + s3
         t8 = [s0 + 0]
         call 0x87f0277c          // 0x87f0277c(0x10006fffc, 0x442f71dcfe116408, 0x8, -1)
         a0 = t8 + s4
         t9 = [s0 + 0]
         t0 = t9 + s5
         t1 = [t0 + 0x3bac]       // t9
         if                       // unlikely
         

    loc_0x80369b2c: // orphan
         call 0x86205a7c          // 0x86205a7c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80369b34: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80369b24
         call 0x86202574          // 0x86202574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x862025e0          // 0x862025e0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86203b08          // 0x86203b08(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = [s0 + 0]
         s1 += 1
         t2 = [v0 + 0x3c]         // t9
         at = , s1 < t2
         if                       // unlikely
         

    loc_0x80369b60: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80369b24
         call 0x86202574          // 0x86202574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x862025e0          // 0x862025e0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86203b08          // 0x86203b08(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = [s0 + 0]
         s1 += 1
         t2 = [v0 + 0x3c]         // t9
         at = , s1 < t2
         if                       // unlikely
         

    loc_0x80369b64: // orphan
         // CODE XREF from fcn.8031c6d4 @ 0x80369adc
         call 0x86203bec          // 0x86203bec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x2c]         // t9
         s0 = [sp + 0x14]         // ra
         s1 = [sp + 0x18]         // t9
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]         // s4
         s4 = [sp + 0x24]         // v1
         s5 = [sp + 0x28]         // t9
         ret                      // t9
         sp += 0x30

    loc_0x80369c2c: // orphan
         a1 = [a1 - 0x1e68]       // t9
         at = 7 << 16
         v0 = 0
         v1 = 0
         a2 = 0
         t1 = 0x100 << 16
         t0 = 0x4000 << 16
         a3 = a1 + at

    loc_0x80369d58: // orphan
         [v0 + 0xe8] = t8
         call 0x86200020          // 0x86200020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         goto 0x80369d70
         

    loc_0x80369d70: // orphan
         // CODE XREFS from fcn.8031c6d4 @ 0xc8, 0xe4, 0x80369d64
         call 0x86203de8          // 0x86203de8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x86203c58          // 0x86203c58(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8036d9cc: // orphan
         v0 = v1
         mul.s f6, f0, f10
         
         mul.s f8, f4, f2
         sub.s f10, f6, f8
         c.le.s f10, f16
         
         bc1f 0x8036d9f4
         
         v1 = 0 + 1               // lo
         v0 = v1                  // lo
         ret                      // ra
         sp += 0x40

    loc_0x8036dde8: // orphan
         a0 = s0
         c.le.s f0, f10
         
         bc1f 0x8036de54
         
         v1 = 0 + 1               // lo
         call 0x80035a10          // 0x80035a10(0x104, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = v1

    loc_0x8036e238: // orphan
         cfc1 t5, 24
         cfc1 t5, 8

    loc_0x8036e4b4: // orphan
         mfc1 s5, f8
         mfc1 t5, f16

    loc_0x8036e9f8: // orphan
         
         
         
         bnel s2, s7, 0x8037fa08  // fcn.803742ac+0xb75c // likely
         

    loc_0x8036ea0c: // orphan
         
         
         

    loc_0x8037044c: // orphan
         lwr sp, -0x6c03, ra
         k1 = , unsigned  byte [ra - 0x5bc1]
         halfword [at - 0x63c3] = ra
         s5 = , unsigned  halfword [at - 0x6bd1]
         a1 = , unsigned  halfword [a1 - 0x6b1b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x631b]
         lwu t1, -0x31c9, a3      // t9
         cache 0x1b, -0x5341, t1
         k1 = , unsigned  byte [sp - 0x6401] // s4
         lwl k1, -0x7445, sp      // t9
         lwl k1, -0x7445, sp      // t9
         k1 = , unsigned  byte [sp - 0x6c45] // s4
         sp = , unsigned  byte [sp - 0x7485] // s4
         t7 = byte [sp - 0x739b]  // s4
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6b5b]
         a1 = , unsigned  halfword [a1 - 0x6319]
         lwc1 f23, -0x42c3, s1

    loc_0x803733c8: // orphan
         mfc1 t3, f24

    loc_0x80373b04: // orphan
         
         at = a3 << 0             // s2
         
         
         
         
         goto 0x84282c00
         

    loc_0x80373b70: // orphan
           // CALL XREF from fcn.80a2ebd0 @ +0x88c
         goto 0x8c484c00
         

    loc_0x80373b88: // orphan
         
         
         
         call 0x885c3000          // 0x885c3000(-1, 0x442f71dcfe116408, 0x8, -1)
         
         
         
         
         call 0x88346000          // 0x88346000(-1, 0x442f71dcfe116408, 0x8, -1)
         
         
         
         
         if                       // unlikely
         

    loc_0x80373bc4: // orphan
         
         
         

    loc_0x80373c2c: // orphan
         
         
         a0 = t9 + 0x2500
         
         
         
         
         at = s1 + 0x2600
         
         
         
         
         t0 = t9 + 0x2900
         
         
         
         
         t3 = , s1 < 0x2c00
         
         
         
         
         t5 = , t1 < 0x2700
         
         
         
         
         t6 = at + 0x2f00
         
         
         
         
         s0 = s1 + 0x2200
         
         
         
         
         t4 = t1 & 0x2b00
         
         
         
         
         s2 = at & 0x3300
         
         
         
         
         s5 = at | 0x3600
         
         
         // CALL XREF from fcn.814a2be4 @ +0x1f40
         
         
         s7 = at | 0x3800
         

    loc_0x80373d04: // orphan
         
         
         
         s7 = s1 | 0x3400
         
         
         
         
         v1 = at + 0x3900
         
         
         
         
         s5 = at ^ 0x3400
         
         
         
         
         k1 = s1 ^ 0x3700
         
         
         
         

    loc_0x803777c0: // orphan
         a0 = v0 + 0x7c
         t0 = , unsigned  byte [a1 + 0x2180] // s4
         bnel t0, at, 0x803777e8  // likely
         [sp + 0x10] = 0

    loc_0x803777d0: // orphan
         call 0x87f0c930          // 0x87f0c930(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x38
         v0 = 0x8630 << 16
         goto 0x803777fc          // fcn.80353f78+0x23884
         v0 = [v0 + 0x75d8]       // t9

    loc_0x803777e8: // orphan
         [sp + 0x14] = 0
         call 0x87f0a098          // 0x87f0a098(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = 0

}
