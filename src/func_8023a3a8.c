int fcn.8023e660 (int esi, int edx) {
    loc_0x801bfc20:
        // CODE XREF from fcn.80247734 @ +0x5f0
        at = , t4 < 2
        if            // unlikely
        a0 = 0 + 5    // arg1
            
    loc_0x801bfc44:
        // CODE XREF from fcn.8023e660 @ 0x801bfc24
        call 0x800226c0 // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
        byte [a2 + 0x1e] = t6
        goto 0x801bfdbc
        ra = [sp + 0x14]
         // do {
    loc_0x801bfdbc:
        // XREFS(28)
        sp += 0x18
        ret           // ra
        0x801bfdc4
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x801fe910: // orphan
             // CODE XREF from fcn.8023e660 @ 0x8021e5bc
             if                       // unlikely
             a1 -= 0x20               // arg2

    loc_0x801fe918: // orphan
         a0 = [sp + 0x40]
         a2 = , unsigned  halfword [v1 + 0x37d8]
         a3 = , unsigned  byte [v1 + 0x37fb] // s4
         call fcn.81606b5c
         a0 += 0x30
         goto 0x801fe964
         a1 = 0x4c5f << 16

    loc_0x801fe934: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fe910
         // CODE XREF from fcn.8021e454 @ +0x16c
         call 0x81306f20          // 0x81306f20(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.801f5158 @ +0x18bc
         [sp + 0x2c] = v1
         t1 = [sp + 0x44]
         v1 = [sp + 0x2c]
         a0 = [sp + 0x40]
         a1 = v0 + t1             // s4
         a1 -= 0x20
         a2 = , unsigned  halfword [v1 + 0x37d8]
         a3 = , unsigned  byte [v1 + 0x37fb] // s4
         call fcn.816068c0        // fcn.816068c0(0x0)
         a0 += 0x57
         // CODE XREF from fcn.8020b33c @ 0x801fe8f8
         a1 = 0x4c5f << 16

    loc_0x801fe964: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fe92c
         a1 |= 0x4254
         call fcn.81600da8
         a0 = [sp + 0x3c]
         if                       // unlikely
         at = 1 << 16

    loc_0x801fe978: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e5c4
         v1 = s0 + at
         t2 = [v1 + 0x37e8]       // t9
         a0 = s0
         a2 = 0 + 0x2e
         if                       // unlikely
         

    loc_0x801fe990: // orphan
         goto 0x801fe998
         a2 = 0 + 7

    loc_0x801fe998: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801fe988, 0x801fe990
         [sp + 0x2c] = v1
         call 0x81306f20          // 0x81306f20(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a2
         a2 = [sp + 0x30]
         t3 = [sp + 0x40]
         v1 = [sp + 0x2c]
         t6 = [sp + 0x44]
         t4 = a2 + t3
         mtc1 t4, f4
         lwc1 f8, 0x37c0, v1
         a1 = v0 + t6             // s4
         cvt.s.w f6, f4
         a1 -= 0x23
         sub.s f10, f6, f8
         // CODE XREF from fcn.8023e660 @ 0x8021e5cc
         trunc.w.s f16, f10
         mfc1 a0, f16
         call fcn.8160710c
         

    loc_0x801fe9e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fe970
         a1 = 0x525f << 16
         a1 |= 0x4254
         call fcn.81600da8
         a0 = [sp + 0x3c]
         if                       // unlikely
         at = 1 << 16

    loc_0x801fe9f8: // orphan
         v1 = s0 + at
         t7 = [v1 + 0x37e8]       // t9
         a0 = s0
         a2 = 0 + 0x1d4
         if                       // unlikely
         

    loc_0x801fea10: // orphan
         goto 0x801fea18
         a2 = 0 + 0x1f9

    loc_0x801fea18: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801fea08, 0x801fea10
         [sp + 0x2c] = v1
         call 0x81306f20          // 0x81306f20(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = a2
         a2 = [sp + 0x30]
         t8 = [sp + 0x40]
         v1 = [sp + 0x2c]
         t1 = [sp + 0x44]
         t9 = a2 + t8
         mtc1 t9, f18
         lwc1 f6, 0x37c8, v1
         a1 = v0 + t1             // s4
         cvt.s.w f4, f18
         a1 -= 0x23
         add.s f8, f4, f6
         trunc.w.s f10, f8
         // CODE XREF from fcn.801f5158 @ +0x18c8
         mfc1 a0, f10
         call 0x816071ac          // 0x816071ac(-1, 0xdc, 0x8, -1)
         

    loc_0x801fea60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fe9f0
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x38
         ret
         

    loc_0x801fea84: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e5d0
         [sp + 0x2c] = a3
         v1 = a0 + at             // arg1
         t6 = [v1 + 0x37e8]       // t9
         v0 = 0 + 0x57
         if                       // unlikely
         // CODE XREF from fcn.801f5158 @ +0x18cc
         

    loc_0x801fea9c: // orphan
         goto 0x801feaa4
         v0 = 0 + 0x30

    loc_0x801feaa4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801fea94, 0x801fea9c
         a2 += v0                 // arg3
         // CODE XREF from fcn.8021e454 @ +0x180
         [sp + 0x28] = a2
         call 0x81306f20          // 0x81306f20(-1, 0x442f71dcfe116408, 0x107, -1)
         // CODE XREF from fcn.801f5158 @ +0x18d4
         [sp + 0x18] = v1
         t7 = [sp + 0x2c]         // t9
         a1 = 0x494e << 16
         a1 |= 0x4449
         t8 = t7 + v0
         // CODE XREF from fcn.801f5158 @ +0x18d8
         t9 = t8 - 0x20
         [sp + 0x2c] = t9
         call fcn.81600da8
         a0 = [sp + 0x24]
         if                       // unlikely
         v1 = [sp + 0x18]

    loc_0x801feadc: // orphan
         a0 = [sp + 0x28]
         a1 = [sp + 0x2c]
         a2 = [v1 + 0x37bc]       // t9
         call fcn.81606f88
         a3 = [v1 + 0x37e8]       // t9

    loc_0x801feaf0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fead4
         ra = [sp + 0x14]

    loc_0x801feafc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e5d8
         
         sp -= 0x20
         at = 1 << 16
         [sp + 0x14] = ra
         [sp + 0x20] = a0
         [sp + 0x24] = a1
         v1 = a0 + at             // arg1
         t6 = [v1 + 0x37e8]       // t9
         at = 0x4180 << 16
         mtc1 at, f6
         if                       // unlikely
         v0 = 0 + 0x57

    loc_0x801feb2c: // orphan
         goto 0x801feb34
         v0 = 0 + 0x30

    loc_0x801feb34: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801feb24, 0x801feb2c
         lwc1 f4, 0x37d0, v1
         a2 += v0                 // arg3
         a3 -= 0x20               // arg4
         c.lt.s f4, f6
         // CODE XREF from fcn.8023e660 @ 0x8021e5e0
         a0 = [sp + 0x24]
         a1 = [sp + 0x20]
         bc1tl 0x801feb84

    loc_0x801febf8: // orphan
         // CODE XREF from fcn.801feb50 @ +0x94
         // CODE XREF from fcn.8023e660 @ 0x8021e5e4
         [sp + 0x4c] = t9
         // CODE XREF from fcn.801feb50 @ +0xa0
         if                       // unlikely
         a2 = 0

    loc_0x801fec04: // orphan
         goto 0x801fec0c
         a2 = s3 - 1              // arg3

    loc_0x801fec0c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801febfc, 0x801fec04
         a0 = byte [s2 + 0x37f8]  // s4
         at = , a0 < 4            // arg1
         if                       // likely
         

    loc_0x801fec1c: // orphan
         // CODE XREF from fcn.8021e454 @ +0x194
         if                       // unlikely
         a1 = 0 + 0x21            // arg2

    loc_0x801fec24: // orphan
         call 0x8005cb38          // 0x8005cb38(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x48] = a2
         at = , v0 < s3           // lo
         if                       // likely
         a2 = [sp + 0x48]

    loc_0x801fec38: // orphan
         a0 = [sp + 0x4c]         // t9
         a1 = byte [s2 + 0x37f8]  // s4
         call 0x8006218c          // 0x8006218c(-1, 0xff, 0x8, -1)
         a3 = 0
         if                       // unlikely
         s3 = v0                  // s4

    loc_0x801fec50: // orphan
         a0 = sp + 0x58
         a1 = 0 + 1               // lo
         call 0x80062390          // 0x80062390(0x178058, 0x1, 0x8, -1)
         a2 = v0                  // s4

    loc_0x801fec60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e5ec
         if                       // unlikely
         

    loc_0x801fed5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e5f8
         byte [s1 + 0] = t2
         v1 = s1 + 4
         t5 = [s2 + 0x37b0]       // t9

    loc_0x801fed68: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fedbc
         t7 = [s1 + 4]            // t9
         t6 = t5 + a0             // arg1
         // CODE XREF from fcn.801f5158 @ +0x18e4
         t4 = , unsigned  byte [t6 + 5] // s4
         t8 = t7 + v0
         a0 += 0x18               // arg1
         byte [t8 + 0] = t4
         // CODE XREF from fcn.8021e454 @ +0x1a8
         t9 = [v1 + 4]

    loc_0x801fed84: // orphan
         t0 = t9 + v0
         byte [t0 + 0] = v0
         t1 = [v1 + 8]            // t9
         t2 = t1 + v0
         byte [t2 + 0] = v0
         t3 = [v1 + 0xc]          // t9
         t5 = t3 + v0
         byte [t5 + 0] = v0
         t6 = [v1 + 0x10]         // t9
         t7 = t6 + v0
         byte [t7 + 0] = v0
         t4 = , unsigned  byte [a2 + 0] // arg3 // s4
         v0 += 1
         at = , v0 < t4
         bnel at, 0, 0x801fed68   // unlikely
         t5 = [s2 + 0x37b0]       // t9

    loc_0x801fedc4: // orphan
         // XREFS: CODE 0x801fec14  CODE 0x801fec1c  CODE 0x801fec30  
         // XREFS: CODE 0x801fec48  CODE 0x801fed2c  CODE 0x801fed34  
         // XREFS: CODE 0x801fed40  CODE 0x801fed58  CODE 0x8021e600  
         call fcn.8130a88c
         a0 = s1
         ra = [sp + 0x24]
         v0 = , unsigned  byte [s1 + 0] // s4
         s1 = [sp + 0x18]         // v1
         s0 = [sp + 0x14]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0xb0

    loc_0x801fee70: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e60c
         at = , v0 < v1           // lo
         if                       // unlikely
         t0 -= v0

    loc_0x801fee7c: // orphan
         a0 = byte [s4 + 0x37f8]
         t0 <<= 3
         s7 = fp + t0
         at = , a0 < 4            // arg1
         if                       // likely
         s7 += 8

    loc_0x801fef90: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e61c
         call 0x800619e8          // 0x800619e8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0

    loc_0x801fef98: // orphan
         // CODE XREF from fcn.8020b33c @ 0x801fef88
         call 0x80061f44          // "&R" // 0x80061f44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0

    loc_0x801fefa0: // orphan
         // CODE XREF from fcn.8020b33c @ 0x801fef40
         s2 += 1
         // CODE XREF from fcn.801feb50 @ +0x3bc
         s3 += 1
         bnel s3, s6, 0x801fef00  // likely
         t1 = , unsigned  byte [s7 + 0] // s4

    loc_0x801fefc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801fee74
         t1 = [s4 + 0x37b0]       // t9
         t2 = v1 << 2
         t2 -= v1
         if                       // unlikely
         t2 <<= 3

    loc_0x801ff09c: // orphan
         // XREFS: CODE 0x801fee8c  CODE 0x801fee94  CODE 0x801feeac  
         // XREFS: CODE 0x801feeec  CODE 0x801fefb8  CODE 0x801fefcc  
         if                       // unlikely
         s0 = [sp + 0x84]

    loc_0x801ff0a4: // orphan
         s1 = sp + 0x68
         s6 = s5 + s1
         s2 = s0 + 0x60
         s3 = 0 + 5

    loc_0x801ff0b4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff10c
         a0 = s2
         a1 = 0
         call 0x8004d878          // 0x8004d878(-1, 0x0, 0x8, -1)
         a2 = s0
         // CODE XREF from fcn.8021e454 @ +0x1dc
         t2 = , unsigned  byte [s4 + 0x37f4]
         t3 = , unsigned  byte [s4 + 0x37fb]
         s2 += 0xce8
         at = , t2 < t3
         bnel at, 0, 0x801ff0e8   // unlikely
         t4 = byte [s4 + 0x37f8]

    loc_0x801ff0dc: // orphan
         goto 0x801ff0f0
         byte [s0 + 0x58] = s3

    loc_0x801ff0e8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff0d4
         t5 = t4 + 1
         byte [s0 + 0x58] = t5

    loc_0x801ff0f0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff0dc
         t7 = , unsigned  byte [s1 + 0] // s4
         t8 = , unsigned  byte [s0 + 0] // s4
         s1 += 1
         byte [s0 + 0x5a] = t7
         t6 = , unsigned  byte [s4 + 0x37f4]
         s0 += 0xce8
         byte [s0 - 0xc8d] = t8

    loc_0x801ff10c: // orphan
         if                       // likely
         byte [s0 - 0xc8f] = t6

    loc_0x801ff114: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff09c
         t9 = [s4 + 0x37ac]
         t0 = 2 << 16
         t0 += t9
         t0 = [t0 - 0x5eb8]       // t9
         t1 = [t0 + 0x940]        // t9
         t2 = [t1 + 0x40]         // t9
         t4 = t2 << 5
         bltzl t4, 0x801ff1f4     // unlikely
         ra = [sp + 0x3c]

    loc_0x801ff138: // orphan
         if                       // unlikely
         s2 = 0

    loc_0x801ff140: // orphan
         v1 = s5 & 3
         if                       // unlikely
         v0 = v1

    loc_0x801ff14c: // orphan
         t7 = 0 << 2
         t7 -= 0
         t7 <<= 2
         t7 <<= 3
         t5 = [sp + 0x84]
         t7 -= 0
         t7 <<= 2
         t7 <<= 3
         s0 = t5 + t7

    loc_0x801ff170: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff178
         s2 += 1
         byte [s0 + 1] = 0
         if                       // likely
         // CODE XREF from fcn.8021e454 @ +0x1e4
         s0 += 0xce8

    loc_0x801ff180: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x801ff144
         t8 = s2 << 2

    loc_0x801ff184: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff144
         t8 = s2 << 2

    loc_0x801ff188: // orphan
         t9 = s5 << 2
         t9 -= s5
         t8 -= s2
         t8 <<= 2
         t9 <<= 2
         t9 += s5
         // CODE XREF from fcn.801f5158 @ +0x1934
         // CODE XREF from fcn.8021e454 @ +0x1e8
         t8 += s2
         t8 <<= 3
         t9 <<= 3
         t6 = [sp + 0x84]
         t9 -= s5
         t8 -= s2
         t8 <<= 2
         t9 <<= 2
         t9 += s5
         t8 += s2
         t8 <<= 3
         t9 <<= 3
         v0 = t9 + t6
         s0 = t6 + t8

    loc_0x801ff1d8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff1e8
         s0 += 0x33a0
         byte [s0 - 0x26b7] = 0
         byte [s0 - 0x19cf] = 0
         // CODE XREF from fcn.8021e454 @ +0x1ec
         byte [s0 - 0xce7] = 0

    loc_0x801ff1e8: // orphan
         if                       // likely
         byte [s0 - 0x339f] = 0

    loc_0x801ff1f0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x801ff138, 0x801ff180
         ra = [sp + 0x3c]

    loc_0x801ff1f4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff130
         v0 = s5                  // t9
         s5 = [sp + 0x2c]
         s0 = [sp + 0x18]         // v1
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x80

    loc_0x801ff430: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e66c
         at += a0                 // arg1
         swc1 f0, 0x37cc, at
         at = 1 << 16
         at += a0                 // arg1
         halfword [at + 0x37d8] = 0
         at = 1 << 16
         at += a0                 // arg1
         byte [at + 0x37fa] = 0
         at = 1 << 16
         // CODE XREF from fcn.8021e454 @ +0x21c
         at += a0                 // arg1
         [at + 0x37e8] = v0
         at = 1 << 16
         s2 = a0 + at             // arg1
         t9 = [s2 + 0x37e8]       // s4
         s1 = a0                  // t9
         v1 = s1                  // t9
         if                       // unlikely
         s0 = 0

    loc_0x801ff478: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e674
         at = 1 << 16
         at += a0                 // arg1
         t0 = 0 + 0xf
         goto 0x801ff49c
         byte [at + 0x37fb] = t0

    loc_0x801ff48c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e678
         at = 1 << 16
         at += s1
         t1 = 0 + 0xa
         byte [at + 0x37fb] = t1

    loc_0x801ff49c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff484
         a1 = 0 + 0x33b0          // arg2
         a0 = 0 + 6               // arg1

    loc_0x801ff4a4: // orphan
         v0 = s0 + 1
         div 0, v0, a0            // arg1
         t2 = hi
         // CODE XREF from fcn.8021e454 @ +0x228
         t6 = s0 + 5
         if                       // likely
         

    loc_0x801ff4bc: // orphan
         break 7

    loc_0x801ff4c0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801ff4cc: // orphan
         if                       // likely
         

    loc_0x801ff4d4: // orphan
         break 6

    loc_0x801ff4d8: // orphan
         unsigned , hi
         s0 = v0                  // s4
         v1 += 0x33b0
         t3 = lo
         t4 = s1 + t3
         t5 = t4 + 0x188
         div 0, t6, a0            // arg1
         t7 = hi
         [v1 + 0x178] = t5
         if                       // likely
         

    loc_0x801ff504: // orphan
         break 7

    loc_0x801ff508: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801ff514: // orphan
         if                       // likely
         

    loc_0x801ff51c: // orphan
         break 6

    loc_0x801ff520: // orphan
         unsigned , hi
         // CODE XREF from fcn.801f5158 @ +0x1978
         at = , v0 < 6
         t8 = lo
         t9 = s1 + t8
         t0 = t9 + 0x188
         if                       // unlikely
         [v1 + 0x17c] = t0

    loc_0x801ff53c: // orphan
         call fcn.81307d08
         a0 = s1
         s0 = 0 + 0xf
         a0 = s1

    loc_0x801ff54c: // orphan
         call fcn.81307600
         a1 = s0
         if                       // unlikely
         at = 1 << 16

    loc_0x801ff55c: // orphan
         at += s1
         byte [at + 0x37f4] = s0
         t1 = , unsigned  halfword [s2 + 0x37d8]
         t2 = 0 + 1               // lo
         t3 = t2 << s0
         at = 1 << 16
         at += s1
         t4 = t1 | t3
         halfword [at + 0x37d8] = t4

    loc_0x801ff580: // orphan
         s0 -= 1
         bgezl s0, 0x801ff54c     // likely
         a0 = s1

    loc_0x801ff58c: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]         // v1
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x801ff5c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e684
         at = 0x8131 << 16
         v0 = 0
         c.lt.s f12, f2
         
         bc1f 0x801ff5f4
         
         sub.s f2, f2, f12
         at = 0x8131 << 16
         v0 = 0 + 1               // lo
         goto 0x801ff5f8
         swc1 f2, 0x1f80, at

    loc_0x801ff5f8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x801ff5ec
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8021db9c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da38
         if                       // fcn.8021da68+0x11138 // unlikely
         if                       // unlikely

    loc_0x8021dba8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dbb4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023da34
         if                       // unlikely

    loc_0x8021dbc0: // orphan
         if                       // fcn.8021e454+0x10840 // unlikely
         if                       // unlikely

    loc_0x8021dbcc: // orphan
         

    loc_0x8021dbd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dbdc: // orphan
         if                       // unlikely
         

    loc_0x8021dbe4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da40
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dbf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dbfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc34: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da50
         

    loc_0x8021dc38: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc54: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da60
         // CODE XREF from fcn.81e32c04 @ +0x1b8
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc60: // orphan
         if                       // unlikely
         

    loc_0x8021dc68: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dc78: // orphan
         if                       // fcn.80230030+0x5c // unlikely
         if                       // fcn.80230030+0x70 // unlikely

    loc_0x8021dc84: // orphan
         
         // CODE XREF from fcn.8021cbcc @ +0x578
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dca0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dcac: // orphan
         if                       // unlikely
         

    loc_0x8021dcb4: // orphan
         
         
         

    loc_0x8021dcc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da4c
         
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023da44
         if                       // unlikely

    loc_0x8021dcc8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da44
         if                       // unlikely
         

    loc_0x8021dcd0: // orphan
         
         if                       // fcn.80233798+0x90 // unlikely
         if                       // unlikely

    loc_0x8021dce0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dcec: // orphan
         if                       // unlikely
         

    loc_0x8021dcf4: // orphan
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8021cbcc @ +0x584
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd28: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x588
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd40: // orphan
         if                       // fcn.80226e38+0xdbbc // unlikely
         if                       // unlikely

    loc_0x8021dd4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd58: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dd94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dda0: // orphan
         if                       // fcn.8021e454+0x16c20 // unlikely
         // CODE XREF from fcn.8021cbcc @ +0x594
         if                       // fcn.8021e454+0x16c34 // unlikely

    loc_0x8021de30: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da5c
         if                       // fcn.80226e38+0xeb4c // unlikely
         if                       // unlikely

    loc_0x8021de3c: // orphan
         if                       // fcn.8021e454+0x1781c // unlikely
         if                       // unlikely

    loc_0x8021de48: // orphan
         if                       // fcn.80226e38+0xed54 // unlikely
         if                       // unlikely

    loc_0x8021de54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021de60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021de6c: // orphan
         

    loc_0x8021de70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021de7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021de88: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021de94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dea0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021deac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021deb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dec4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021ded0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dedc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dee8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021def4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df0c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da68
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df18: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df2c: // orphan
         
         

    loc_0x8021df34: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da80
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df4c: // orphan
         if                       // fcn.80238000 // unlikely
         if                       // unlikely

    loc_0x8021df58: // orphan
         if                       // fcn.80238000+0x5c // unlikely
         if                       // fcn.80238000+0x50 // unlikely

    loc_0x8021df64: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021cbcc @ +0x5b8
         

    loc_0x8021df6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021df84: // orphan
         if                       // fcn.802381e8+0x20 // unlikely
         if                       // fcn.802381e8+0x44 // unlikely

    loc_0x8021df90: // orphan
         if                       // unlikely
         if                       // fcn.802382a8-0x30 // unlikely

    loc_0x8021df9c: // orphan
         

    loc_0x8021dfa0: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8023da6c
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dfac: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dfbc: // orphan
         if                       // unlikely
         

    loc_0x8021dfc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dfd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dfdc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e108: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da74
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e120: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e130: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e13c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e148: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e158: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e168: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e174: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e184: // orphan
         if                       // unlikely
         

    loc_0x8021e18c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e19c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1b4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1c4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1dc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da88
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e1f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e200: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e20c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e218: // orphan
         
         if                       // fcn.8023c168+0x18 // unlikely
         if                       // fcn.8023c1d0+0x4 // unlikely

    loc_0x8021e228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e234: // orphan
         
         
         if                       // fcn.8023c1d0+0xe0 // unlikely
         if                       // fcn.8023c1d0+0x114 // unlikely

    loc_0x8021e248: // orphan
         if                       // fcn.8023c1d0+0x10c // unlikely
         

    loc_0x8021e250: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e260: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da8c
         if                       // fcn.801f7004+0x45420 // unlikely

    loc_0x8021e264: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e454 @ 0x8023da84
         

    loc_0x8021e26c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e280: // orphan
         if                       // unlikely
         

    loc_0x8021e288: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e29c: // orphan
         if                       // unlikely
         

    loc_0x8021e2a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2b0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2e4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e2f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e304: // orphan
         if                       // unlikely
         

    loc_0x8021e30c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e318: // orphan
         if                       // unlikely
         

    loc_0x8021e320: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e32c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e338: // orphan
         if                       // unlikely
         

    loc_0x8021e340: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e350: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e35c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e368: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e380: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e49c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da98
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e4a8: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e4c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e4d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e4e0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e4f4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e50c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e520: // orphan
         if                       // fcn.8023e3c0-0x2bc // unlikely
         if                       // unlikely

    loc_0x8021e52c: // orphan
         
         // CODE XREF from fcn.8021cbcc @ +0x5e0
         
         
         if                       // fcn.8023e3c0-0x1a4 // unlikely
         if                       // unlikely

    loc_0x8021e544: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x5e4
         
         
         
         if                       // fcn.8023e3c0-0x8c // unlikely
         if                       // unlikely

    loc_0x8021e55c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e56c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e5b8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023daa4
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e5c4: // orphan
         if                       // unlikely
         

    loc_0x8021e5cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e5d8: // orphan
         if                       // unlikely
         

    loc_0x8021e5e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e5ec: // orphan
         if                       // unlikely
         

    loc_0x8021e5f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e600: // orphan
         if                       // unlikely
         

    loc_0x8021e608: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e614: // orphan
         
         if                       // fcn.8020b33c-0xc3d0 // unlikely
         if                       // unlikely

    loc_0x8021e624: // orphan
         
         if                       // fcn.801ff044+0x18 // unlikely
         if                       // fcn.801ff044+0x3c // unlikely

    loc_0x8021e664: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dab0
         
         if                       // fcn.801ff3c8+0x44 // unlikely
         if                       // unlikely

    loc_0x8021e674: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e680: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021e68c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8023daa8
         
         
         
         

    loc_0x8021f2d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dad0
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x802205b8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023db14
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8022108c: // orphan
         t0 = fcn.82300000 << 16
         t0 = halfword [t0 + 0x5eb6]
         t9 = halfword [s1 + 0xc]
         t1 = fcn.82300000 << 16
         t1 += 0x5e68
         at = , t9 < t0
         if                       // likely
         v1 = s2 << 1             // hi

    loc_0x802210ac: // orphan
         s0 = v1 + t1
         v0 = halfword [s0 + 0x5a]
         at = , v0 < a0           // lo
         if                       // unlikely
         

    loc_0x802210c0: // orphan
         t2 = v0 + 1
         halfword [s0 + 0x5a] = t2
         v0 = halfword [s0 + 0x5a]

    loc_0x802210cc: // orphan
         bnel v0, 0, 0x80221128   // likely
         at = , v0 < a0           // lo

    loc_0x802210d4: // orphan
         t3 = fcn.82300000 << 16
         t3 += v1
         t3 = halfword [t3 + 0x5eba]
         if                       // likely
         

    loc_0x802210e8: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa5
         a1 = fcn.82300000 << 16
         a0 = fcn.82300000 << 16
         a0 = [a0 + 0x5b88]
         a1 = [a1 + 0x5b90]
         goto 0x80221124
         v0 = halfword [s0 + 0x5a]

    loc_0x80221108: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa6
         a1 = fcn.82300000 << 16
         a0 = fcn.82300000 << 16
         a0 = [a0 + 0x5b88]
         a1 = [a1 + 0x5b90]
         v0 = halfword [s0 + 0x5a]

    loc_0x80221124: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80221100
         at = , v0 < a0           // lo

    loc_0x80221128: // orphan
         beql at, 0, 0x80221184   // unlikely
         v0 = halfword [s0 + 0x6a]

    loc_0x80221130: // orphan
         v1 = halfword [s1 + 0xe]
         unsigned , hi
         t4 = lo
         
         
         div 0, t4, a0            // arg1
         t5 = lo
         t7 = v1 - t5
         if                       // likely
         

    loc_0x80221158: // orphan
         break 7

    loc_0x8022115c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80221168: // orphan
         if                       // likely
         

    loc_0x80221170: // orphan
         break 6

    loc_0x80221174: // orphan
         halfword [s0 + 0x52] = t7
         goto 0x802211fc
         s2 += 1

    loc_0x80221184: // orphan
         halfword [s0 + 0x52] = 0
         at = , v0 < a1           // lo
         beql at, 0, 0x802211a4   // unlikely
         at = , v0 < a1           // lo

    loc_0x80221194: // orphan
         t6 = v0 + 1

    loc_0x80221198: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023db44
         halfword [s0 + 0x6a] = t6
         v0 = halfword [s0 + 0x6a]
         at = , v0 < a1           // lo

    loc_0x802211a4: // orphan
         beql at, 0, 0x802211f8   // unlikely
         halfword [s0 + 0x62] = s3

    loc_0x802211ac: // orphan
         unsigned , hi            // t3 // t3
         t8 = lo
         
         
         div 0, t8, a1            // arg2
         t9 = lo
         halfword [s0 + 0x62] = t9
         if                       // likely
         

    loc_0x802211d0: // orphan
         break 7

    loc_0x802211d4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802211f8: // orphan
         s2 += 1

    loc_0x802211fc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80221178
         at = , s2 < 4            // lo
         if                       // likely
         s1 += 0x24

    loc_0x80221208: // orphan
         t0 = fcn.82300000 << 16
         t0 = halfword [t0 + 0x5eca]
         a1 = 0 + 1               // arg2 // lo
         t1 = fcn.82300000 << 16
         at = , t0 < 0xff
         if                       // likely
         t2 = fcn.82300000 << 16

    loc_0x80221224: // orphan
         a1 = 0

    loc_0x80221228: // orphan
         t1 = halfword [t1 + 0x5ecc]
         t3 = fcn.82300000 << 16
         t4 = 0 + 2
         at = , t1 < 0xff
         if                       // likely
         

    loc_0x80221240: // orphan
         a1 = 0

    loc_0x80221244: // orphan
         t2 = halfword [t2 + 0x5ece]
         at = , t2 < 0xff
         if                       // likely
         

    loc_0x80221254: // orphan
         a1 = 0

    loc_0x80221258: // orphan
         t3 = halfword [t3 + 0x5ed0]
         at = , t3 < 0xff
         if                       // likely
         

    loc_0x80221268: // orphan
         a1 = 0

    loc_0x8022126c: // orphan
         if                       // unlikely
         at = fcn.82300000 << 16

    loc_0x80221274: // orphan
         goto 0x802213c4
         halfword [at + 0x5eb4] = t4

    loc_0x802213c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80221274
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // v1
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x80221958: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023db64
         ret                      // ra
         halfword [a1 + 2] = t0   // arg2

    loc_0x802222b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023db8c
         t6 = , unsigned  halfword [v0 + 0]
         a2 = [sp + 0x54]
         a1 = v1 - 0x10           // arg2
         mtc1 a1, f4
         mtc1 t6, f8
         a2 -= 0x10               // arg3
         cvt.s.w f6, f4
         if                       // likely
         cvt.s.w f10, f8

    loc_0x802222d4: // orphan
         at = 0x4f80 << 16
         mtc1 at, f16
         
         add.s f10, f10, f16

    loc_0x802222e4: // orphan
         div.s f0, f6, f10
         mtc1 0, f18
         
         c.lt.s f18, f0
         
         bc1fl 0x802223c4
         ra = [sp + 0x2c]
         blezl a1, 0x802223c4     // unlikely
         ra = [sp + 0x2c]

    loc_0x80222308: // orphan
         blezl a2, 0x802223c4     // unlikely
         ra = [sp + 0x2c]

    loc_0x80222310: // orphan
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x30, sp
         at = 0x4480 << 16
         lwc1 f0, 0x30, sp
         mtc1 at, f4
         mtc1 0, f8
         a0 = [sp + 0x48]         // a2
         div.s f2, f4, f0
         a1 = [sp + 0x4c]         // t9
         a2 = [sp + 0x50]
         a3 = [sp + 0x54]

    loc_0x8022233c: // orphan
         a0 += 8                  // arg1
         a1 += 8                  // arg2
         a2 -= 0x10               // arg3
         a2 <<= 0x10              // arg3
         a1 <<= 0x10              // arg2
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         a1 = , signed  a1 >> 0x10 // arg2
         a2 = , signed  a2 >> 0x10 // arg3
         at = 0xbf00 << 16
         a3 -= 0x10               // arg4
         c.lt.s f8, f2
         
         bc1fl 0x8022238c
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80222394
         add.s f16, f0, f2

    loc_0x80222394: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80222380
         a3 <<= 0x10              // arg4
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         trunc.w.s f6, f16
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         mfc1 t8, f6
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = t8
         ra = [sp + 0x2c]

    loc_0x802223c4: // orphan
         sp += 0x48
         ret                      // ra
         

    loc_0x80222be8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dbb4
         a1 = 0x695f << 16
         a1 |= 0x7769             // arg2
         call 0x8005049c          // 0x8005049c(-1, 0x695f7769, 0x8, -1)
         a0 = [a0 + 0x5ea0]       // t9
         a1 = fcn.82300000 << 16
         a1 += 0x1c80
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82301c80, 0x8, -1)
         a2 = 0
         a0 = fcn.82300000 << 16
         a1 = 0x7769 << 16
         a1 |= 0x5f63
         call 0x8005049c          // 0x8005049c(0x82300000, 0x77695f63, 0x0, -1)
         a0 = [a0 + 0x5ea0]
         // CODE XREF from fcn.8023e660 @ 0x8023dbbc
         a1 = fcn.82300000 << 16
         a1 += 0x1d78
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82301d78, 0x0, -1)
         a2 = 0
         a0 = fcn.82300000 << 16
         a1 = 0x735f << 16
         a1 |= 0x7769
         call 0x8005049c          // 0x8005049c(0x82300000, 0x735f7769, 0x0, -1)
         a0 = [a0 + 0x5ea0]
         a1 = fcn.82300000 << 16
         a1 += 0x1ef0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82301ef0, 0x0, -1)
         a2 = 0
         a0 = fcn.82300000 << 16
         a1 = 0x736c << 16
         a1 |= 0x6966
         call 0x8005049c          // 0x8005049c(0x82300000, 0x736c6966, 0x0, -1)
         a0 = [a0 + 0x5ea0]
         a1 = fcn.82300000 << 16

    loc_0x80222c74: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dbc0
         a1 += 0x1638
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x442f71dcfe117a40, 0x8, -1)
         a2 = 0
         a0 = fcn.82300000 << 16
         a1 = 0x6e61 << 16
         a1 |= 0x6d30
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6e616d30, 0x0, -1)
         a0 = [a0 + 0x5ea0]
         s1 = fcn.82300000 << 16
         s1 += 0x16b4
         a1 = s1
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x823016b4, 0x0, -1)
         a2 = 0
         a0 = fcn.82300000 << 16
         a1 = 0x6c76 << 16
         a1 |= 0x5f30
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6c765f30, 0x0, -1)
         a0 = [a0 + 0x5ea0]
         s0 = fcn.82300000 << 16
         s0 += 0x1814
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82301814, 0x0, -1)
         a2 = 0 + 1               // lo
         a0 = fcn.82300000 << 16
         a1 = 0x6e61 << 16
         a1 |= 0x6d31
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6e616d31, 0x1, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x823016b4, 0x1, -1)
         // CODE XREF from fcn.8021cbcc @ +0x77c
         a2 = 0 + 2
         a0 = fcn.82300000 << 16
         a1 = 0x6c76 << 16
         a1 |= 0x5f31
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6c765f31, 0x2, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82301814, 0x2, -1)
         a2 = 0 + 3
         a0 = fcn.82300000 << 16
         a1 = 0x6e61 << 16
         a1 |= 0x6d32
         // CODE XREF from fcn.8021cbcc @ +0x780
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6e616d32, 0x3, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x823016b4, 0x3, -1)
         a2 = 0 + 4
         a0 = fcn.82300000 << 16
         a1 = 0x6c76 << 16
         a1 |= 0x5f32
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6c765f32, 0x4, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82301814, 0x4, -1)
         a2 = 0 + 5
         a0 = fcn.82300000 << 16
         a1 = 0x6e61 << 16
         a1 |= 0x6d33
         call 0x8005049c          // 0x8005049c(0x82300000, 0x6e616d33, 0x5, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x823016b4, 0x5, -1)
         a2 = 0 + 6
         s1 = fcn.82300000 << 16
         s1 += 0x19f4
         s0 = 0
         at = 0x7465 << 16

    loc_0x80222da0: // orphan
         at |= 0x5f30
         a0 = fcn.82300000 << 16
         a0 = [a0 + 0x5ea0]
         call 0x8005049c          // 0x8005049c(0xbbbdb5a8, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + at
         a0 = v0                  // s4
         a1 = s1
         call 0x8004e308          // 0x8004e308(0xff, 0x442f71dcfe117dbd, 0x8, -1)
         a2 = s0
         s0 += 1
         at = , s0 < 4
         bnel at, 0, 0x80222da0   // unlikely
         at = 0x7465 << 16

    loc_0x80222dd4: // orphan
         s0 = fcn.82300000 << 16
         s0 += 0x5e68
         call fcn.823020ec
         a0 = s0
         call fcn.82302258
         a0 = s0
         s0 = fcn.82300000 << 16
         s0 += 0x6850
         t3 = fcn.82300000 << 16
         halfword [s0 + 0] = 0
         halfword [s0 + 2] = 0
         t3 += 0x5e8c
         at = fcn.82300000 << 16
         a0 = fcn.82300000 << 16
         a1 = 0x625f << 16
         [at + 0x6854] = t3
         a1 |= 0x6370
         call 0x8005049c          // 0x8005049c(0x82300000, 0x625f6370, 0x8, -1)
         a0 = [a0 + 0x5ea0]
         a1 = fcn.82300000 << 16
         a1 += 0x1b2c
         [sp + 0x34] = a1
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82301b2c, 0x8, -1)
         a2 = s0
         s1 = fcn.82300000 << 16
         s1 += 0x6860
         s0 = 0

    loc_0x80222e44: // orphan
         t5 = fcn.82300000 << 16
         t4 = 0 + 1               // lo
         t5 += 0x5e8e
         at = 0x6e69 << 16
         halfword [s1 + 0] = t4
         halfword [s1 + 2] = s0
         [s1 + 4] = t5
         at |= 0x5f30
         a0 = fcn.82300000 << 16
         a0 = [a0 + 0x5ea0]
         call 0x8005049c          // 0x8005049c(0xbbbdb5a8, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + at
         a0 = v0                  // s4
         a1 = [sp + 0x34]
         call 0x8004e308          // 0x8004e308(0xff, 0x82301b2c, 0x8, -1)
         a2 = s1
         s0 += 1
         at = , s0 < 4
         if                       // unlikely
         s1 += 0x10

    loc_0x80222e94: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x784
         s0 = fcn.82300000 << 16
         s0 += 0x68a0
         t6 = 0 + 2
         t7 = fcn.82300000 << 16
         halfword [s0 + 0] = t6
         // CODE XREF from fcn.8021cbcc @ +0x788
         halfword [s0 + 2] = 0
         t7 += 0x5e90
         at = fcn.82300000 << 16
         a0 = fcn.82300000 << 16
         a1 = 0x755f << 16
         [at + 0x68a4] = t7
         a1 |= 0x6370
         call 0x8005049c          // 0x8005049c(0x82300000, 0x755f6370, 0x8, -1)
         a0 = [a0 + 0x5ea0]
         a0 = v0                  // s4
         a1 = [sp + 0x34]
         call 0x8004e308          // 0x8004e308(0xff, 0x82301b2c, 0x8, -1)
         a2 = s0
         s1 = fcn.82300000 << 16
         s1 += 0x68b0
         s0 = 0

    loc_0x80222ee8: // orphan
         t9 = fcn.82300000 << 16
         // CODE XREF from fcn.8021cbcc @ +0x78c
         t8 = 0 + 3
         t9 += 0x5e92
         at = 0x6368 << 16
         halfword [s1 + 0] = t8
         halfword [s1 + 2] = s0
         // CODE XREF from fcn.8021cbcc @ +0x790
         [s1 + 4] = t9
         at |= 0x5f30
         a0 = fcn.82300000 << 16
         a0 = [a0 + 0x5ea0]
         call 0x8005049c          // 0x8005049c(0xbbbdb5a8, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0 + at
         a0 = v0                  // s4
         a1 = [sp + 0x34]
         call 0x8004e308          // 0x8004e308(0xff, 0x82301b2c, 0x8, -1)
         a2 = s1
         // CODE XREF from fcn.8023d410 @ +0x7b4
         s0 += 1
         at = 0 + 4
         if                       // likely
         s1 += 0x10

    loc_0x80222f38: // orphan
         call 0x8003efe0          // 0x8003efe0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x823053a8          // 0x823053a8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.8230009c        // fcn.8230009c(-1)
         
         call fcn.817000a4
         
         a0 = fcn.82300000 << 16
         a1 = 0x6261 << 16
         a1 |= 0x7230
         call 0x8005049c          // 0x8005049c(0x82300000, 0x62617230, 0x8, -1)
         a0 = [a0 + 0x5ea0]

    loc_0x80222f6c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dbc8
         s0 = v0                  // s4
         a0 = 0 + 0x2e
         call 0x8004c874          // 0x8004c874(0x2e, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xd
         a2 = halfword [s0 + 0xa]
         t2 = fcn.82300000 << 16
         t2 = [t2 + 0x5a70]
         t0 = sp + 0x4c
         t1 = sp + 0x48
         [sp + 0x18] = t1
         [sp + 0x14] = t0
         [sp + 0x10] = v0
         t3 = halfword [t2 + 0]
         a0 = 0
         // CODE XREF from fcn.8021cbcc @ +0x794
         a1 = 0
         a3 = 0 + 0x10
         call fcn.81700974
         [sp + 0x1c] = t3
         a0 = fcn.82300000 << 16
         // CODE XREF from fcn.8021cbcc @ +0x798
         a1 = 0x6261 << 16
         a1 |= 0x7231
         call 0x8005049c          // 0x8005049c(0x82300000, 0x62617231, 0xffff, 0x10)
         a0 = [a0 + 0x5ea0]
         a2 = halfword [v0 + 0xa]
         t4 = sp + 0x4c
         t5 = sp + 0x48
         [sp + 0x18] = t5
         [sp + 0x14] = t4
         [sp + 0x1c] = 0
         [sp + 0x10] = 0
         a0 = 0 + 2
         a1 = 0
         // CODE XREF from fcn.8021cbcc @ +0x79c
         call fcn.81700974
         a3 = 0 + 8               // a2
         t6 = [sp + 0x64]
         if                       // unlikely
         

    loc_0x80223000: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x7a0
         call fcn.81700c70
         // CODE XREF from fcn.81b23550 @ +0x23d4
         a0 = 0

    loc_0x80223008: // orphan
         call fcn.82300f00        // fcn.82300f00(-1)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x24]
         s1 = [sp + 0x28]
         ret
         sp += 0x60

    loc_0x802232ec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dbd8
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         a2 = , signed  a2 >> 0x10 // arg3
         a3 = s2 << 0x10          // arg4
         t1 = 0 + 0x400
         [sp + 0x1c] = t1
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         [sp + 0x50] = a2
         [sp + 0x58] = a0
         [sp + 0x10] = v0
         [sp + 0x4c] = v0
         [sp + 0x54] = v1
         a1 = halfword [sp + 0x66]
         [sp + 0x14] = 0
         // CODE XREF from fcn.8023e3c0 @ 0x8023dbdc
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, 0x0, 0x0, -1)

    loc_0x80223334: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dbe0
         v0 = [sp + 0x4c]         // s4
         a2 = s1 << 0x10          // arg3
         t4 = t2 + t3
         a0 = t4 - s0             // arg1
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         a3 = s2 << 0x10          // arg4
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         [sp + 0x48] = a0
         a2 = , signed  a2 >> 0x10 // arg3
         a1 = halfword [sp + 0x66]
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xf9, 0x0, 0xffff7dbd, -1)
         [sp + 0x10] = v0
         t7 = [sp + 0x7c]
         t8 = [sp + 0x84]
         v0 = [sp + 0x54]         // v1
         t9 = s3 << 1
         a1 = t7 + s3             // t9
         a3 = t8 - t9
         v0 <<= 5
         v0 <<= 0x10
         a3 <<= 0x10
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10 // t9
         a3 = , signed  a3 >> 0x10
         v0 = , signed  v0 >> 0x10
         a2 = s1 << 0x10
         t0 = 0 + 0x400
         [sp + 0x18] = t0
         a2 = , signed  a2 >> 0x10
         [sp + 0x10] = v0
         [sp + 0x44] = v0
         [sp + 0x4c] = a3
         [sp + 0x64] = a1
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x0, -1, 0xffff7dbd, 0xffff0002)
         [sp + 0x20] = 0
         t1 = [sp + 0x7c]
         t2 = [sp + 0x84]
         v0 = [sp + 0x44]
         a2 = s1 << 0x10
         t3 = t1 + t2
         a1 = t3 - s3
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 = s2 << 0x10
         t4 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x54] = a1
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x6a]
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0x0, 0xffff0001, 0xffff7dbd, -1)
         [sp + 0x10] = v0
         v0 = s0 << 2
         s3 = [sp + 0x54]
         v0 -= s0
         v0 <<= 5
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a3 = s2 << 0x10
         t6 = 0 + 0x400
         a1 = s3 << 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x1c] = t6
         a3 = , signed  a3 >> 0x10 // t9
         [sp + 0x10] = v0
         [sp + 0x68] = v0
         a0 = halfword [sp + 0x5a]
         a2 = halfword [sp + 0x52]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0xffff, 0xffff0001, 0x0, -1)
         [sp + 0x20] = 0
         s0 = [sp + 0x68]

    loc_0x80223c88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc04
         call fcn.82305988
         a0 = , unsigned  halfword [v1 + 0]
         call fcn.823059d4        // fcn.823059d4(0xffff)
         
         call 0x82300a78          // 0x82300a78(0xffff, 0x442f71dcfe116408, 0x8, -1)
         
         t5 = fcn.82300000 << 16
         t5 = , unsigned  halfword [t5 + 0x5e72]
         at = fcn.82300000 << 16
         t6 = t5 & 0xfffe
         call fcn.82300f34
         halfword [at + 0x5e72] = t6
         goto 0x80223ed4
         ra = [sp + 0x14]

    loc_0x80223ed4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80223cb8
         // CODE XREF from fcn.8021edac @ 0x80223d10
         v0 = [sp + 0x24]
         sp += 0x28
         ret                      // ra
         

    loc_0x80224020: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc1c
         ra = [sp + 0x24]
         v0 = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         ret
         // CODE XREF from fcn.8023e660 @ 0x8023dc24
         sp += 0x30

    loc_0x80225290: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc6c
         byte [sp + 0x2d] = t6
         t7 = , unsigned  byte [v1 + 2] // s4
         t2 = , unsigned  byte [t4 + 2] // s4
         if                       // likely
         

    loc_0x802252a4: // orphan
         // CODE XREF from fcn.8023d410 @ +0x860
         break 7

    loc_0x802252a8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022529c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802252b4: // orphan
         if                       // likely
         

    loc_0x802252bc: // orphan
         break 6

    loc_0x802252c0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802252ac, 0x802252b4
         t8 = t7 - t2
         unsigned , hi            // t9 // s2
         t9 = lo
         
         
         div 0, t9, v0
         t5 = lo
         t6 = t5 + t2
         byte [sp + 0x2e] = t6
         t7 = , unsigned  byte [v1 + 3] // s4
         if                       // likely
         

    loc_0x802252f0: // orphan
         break 7

    loc_0x802252f4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802252e8
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80225300: // orphan
         if                       // likely
         

    loc_0x80225308: // orphan
         break 6

    loc_0x8022530c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802252f8, 0x80225300
         unsigned , hi
         t8 = lo
         
         
         div 0, t8, v0
         t9 = lo
         byte [sp + 0x28] = t9
         t5 = , unsigned  byte [v1 + 4] // s4
         if                       // likely
         

    loc_0x80225334: // orphan
         break 7

    loc_0x80225338: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022532c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80225344: // orphan
         if                       // likely
         

    loc_0x8022534c: // orphan
         break 6

    loc_0x80225350: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022533c, 0x80225344
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, v0
         t7 = lo
         byte [sp + 0x29] = t7
         t8 = , unsigned  byte [v1 + 5] // s4
         if                       // likely
         

    loc_0x80225378: // orphan
         break 7

    loc_0x8022537c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80225370
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80225388: // orphan
         if                       // likely
         

    loc_0x80225390: // orphan
         break 6

    loc_0x80225394: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80225380, 0x80225388
         unsigned , hi
         t7 = 0x8009 << 16
         t7 = [t7 + 0x491c]       // t9
         // CODE XREF from fcn.8023d410 @ +0x86c
         t6 = sp + 0x28
         t9 = lo
         
         
         div 0, t9, v0
         t5 = lo
         byte [sp + 0x2a] = t5
         if                       // likely
         

    loc_0x802253c4: // orphan
         break 7

    loc_0x802253c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802253bc
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802253d4: // orphan
         if                       // likely
         

    loc_0x802253dc: // orphan
         break 6

    loc_0x802253e0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802253cc, 0x802253d4
         a1 = , unsigned  halfword [a2 + 2]

    loc_0x802253e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc80
         a0 = , unsigned  halfword [a2 + 0]
         [sp + 0x10] = t6
         t8 = , unsigned  byte [t7 + 0x1d] // s4
         if                       // likely
         at = a0

    loc_0x802253f8: // orphan
         at = a0 + 1              // arg1

    loc_0x802253fc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802253f0
         a0 = , signed  at >> 1   // arg1
         a0 = ~a0
         if                       // likely
         at = a1                  // t0

    loc_0x8022540c: // orphan
         at = a1 + 1              // arg2

    loc_0x80225410: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80225404
         a1 = , signed  at >> 1   // arg2
         a1 -= 7                  // arg2
         // CODE XREF from fcn.8023e660 @ 0x8023dc74
         call fcn.82304608        // "2(',,,/5AED@@DG>4+(*1'+2>C<-&#+47641/150,*/1&(/+&#&-791&*#(-(%\""
         [sp + 0x14] = t8
         call 0x8003cd84          // 0x8003cd84(-1, 0xfffffffffffffff9, 0x8, -1)
         
         // CODE XREFS from fcn.80224e18 @ +0x358, +0x364
         ra = [sp + 0x1c]

    loc_0x8022542c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc78
         sp += 0x50
         v0 = 0
         ret                      // ra
         

    loc_0x80225ad0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dc9c
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         t6 = halfword [a0 + 6]
         t9 = fcn.82300000 << 16
         fp = a0                  // t9

    loc_0x80225af4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dca0
         t7 = t6 + 1
         halfword [a0 + 6] = t7   // arg1
         t9 = [t9 + 0x5c60]
         t8 = halfword [a0 + 6]
         s6 = 0 + 1               // lo
         s0 = fp + 8
         div 0, t8, t9
         s2 = lo
         t0 = s2 << 2
         t0 -= s2
         t0 <<= 4
         t0 -= s2
         t0 <<= 4
         s3 = t0 + fp
         s3 += 8
         s1 = 0
         s4 = 0 + 1               // lo
         s5 = 0 + 0xbc0
         s7 = 0 + 2
         v0 = 0
         if                       // likely
         

    loc_0x80225b4c: // orphan
         break 7

    loc_0x80225b50: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80225b44
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80225b5c: // orphan
         if                       // likely
         

    loc_0x80225b64: // orphan
         break 6

    loc_0x80225b68: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80225b54, 0x80225b5c, 0x80225ba4
         at = , unsigned  , s3 < s0
         bnel at, 0, 0x80225b94   // unlikely
         t2 = halfword [s0 + 0x2d4]

    loc_0x80225b74: // orphan
         t1 = halfword [s0 + 0x2d4]
         a0 = 0 + 0xaf            // arg1
         bnel t1, 0, 0x80225b94   // likely
         t2 = halfword [s0 + 0x2d4]

    loc_0x80225b84: // orphan
         halfword [s0 + 0x2d4] = s4
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s0 + 0x2d6] = 0
         t2 = halfword [s0 + 0x2d4] // s4

    loc_0x80225b94: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80225b6c, 0x80225b7c
         s1 += 0x2f0
         if                       // unlikely
         

    loc_0x80225ba0: // orphan
         s6 = 0

    loc_0x80225ba4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80225b98
         if                       // likely
         s0 += 0x2f0

    loc_0x80225bac: // orphan
         beql s6, 0, 0x80225bc0   // unlikely
         ra = [sp + 0x3c]

    loc_0x80225bb4: // orphan
         halfword [fp + 2] = s7
         halfword [fp + 6] = 0
         ra = [sp + 0x3c]

    loc_0x80225bc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80225bac
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x40

    loc_0x80225e30: // orphan
         // CODE XREF from fcn.80225940 @ +0x4d0
         // CODE XREF from fcn.8023e660 @ 0x8023dcac
         call fcn.823055dc
         
         goto 0x80225e5c
         ra = [sp + 0x14]         // t9

    loc_0x80225e5c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x4e8, 0x80225e38
         // CODE XREF from fcn.80225940 @ +0x508
         sp += 0x18
         ret                      // ra
         

    loc_0x80226260: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dcbc
         if                       // unlikely
         if                       // unlikely

    loc_0x8022626c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226278: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226284: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226290: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022629c: // orphan
         if                       // fcn.80226660+0x30 // unlikely
         if                       // unlikely

    loc_0x802262a8: // orphan
         if                       // fcn.80226e38+0x214 // unlikely
         if                       // unlikely

    loc_0x802262b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802262c0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802262d4: // orphan
         
         if                       // fcn.801f7004+0x30d68 // unlikely
         // CODE XREF from fcn.80225940 @ +0x918
         if                       // unlikely

    loc_0x802262e4: // orphan
         if                       // fcn.8021d4ec+0xb13c // unlikely
         if                       // unlikely

    loc_0x802262f0: // orphan
         // CODE XREF from fcn.80225940 @ +0x91c
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80226300: // orphan
         if                       // unlikely
         

    loc_0x80226308: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226314: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226320: // orphan
         if                       // unlikely
         

    loc_0x80226328: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226334: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226340: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023d410 @ +0x8b0
         if                       // unlikely

    loc_0x8022634c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226358: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dcc4
         if                       // unlikely
         if                       // unlikely

    loc_0x80226364: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226370: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022637c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226388: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802263a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802263ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802263b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802263c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226408: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226264
         if                       // unlikely
         if                       // unlikely

    loc_0x80226414: // orphan
         if                       // fcn.82c4ba00-0x2a22a88 // unlikely
         if                       // unlikely

    loc_0x80226420: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022642c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226438: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226444: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226450: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022645c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226468: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226474: // orphan
         if                       // fcn.802294a0+0x18 // unlikely
         if                       // unlikely

    loc_0x80226480: // orphan
         if                       // unlikely
         

    loc_0x80226488: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226494: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802264dc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021cbcc @ +0x8c0
         if                       // unlikely

    loc_0x802264e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226270
         if                       // unlikely

    loc_0x802264e8: // orphan
         if                       // fcn.8022a05c // unlikely
         if                       // unlikely

    loc_0x802264f4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80225940 @ +0x934
         if                       // unlikely

    loc_0x80226500: // orphan
         if                       // fcn.8023e3c0-0x141ec // unlikely
         if                       // unlikely

    loc_0x8022650c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226518: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226524: // orphan
         if                       // fcn.8023e3c0-0x14028 // unlikely
         if                       // unlikely

    loc_0x80226530: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022653c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226278
         if                       // unlikely
         if                       // unlikely

    loc_0x80226548: // orphan
         if                       // fcn.8023e3c0-0x13e74 // unlikely
         if                       // unlikely

    loc_0x80226554: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226570: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022627c
         if                       // fcn.8023e3c0-0x13cac // unlikely

    loc_0x80226574: // orphan
         if                       // fcn.8023e3c0-0x13c98 // unlikely
         if                       // unlikely

    loc_0x80226580: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80225940 @ +0x940
         if                       // unlikely

    loc_0x8022658c: // orphan
         if                       // unlikely
         

    loc_0x80226594: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226284
         if                       // unlikely

    loc_0x802265a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802265ac: // orphan
         
         
         
         

    loc_0x802265bc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226288
         
         
         // CODE XREF from fcn.8021cbcc @ +0x8c4
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802265d4: // orphan
         
         // CODE XREF from fcn.8021cbcc @ +0x8c8
         if                       // unlikely
         if                       // unlikely

    loc_0x802265e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802265f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802265fc: // orphan
         if                       // fcn.8022b6bc+0x4 // unlikely
         if                       // unlikely

    loc_0x80226608: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dce4
         if                       // unlikely
         if                       // unlikely

    loc_0x80226614: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80226630: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226290
         if                       // unlikely

    loc_0x8022663c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226648: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226294
         if                       // unlikely
         if                       // unlikely

    loc_0x80226654: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802267d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262a0
         if                       // fcn.8021da68+0x110b0 // unlikely
         if                       // unlikely

    loc_0x802267e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802267ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802267f8: // orphan
         // CODE XREF from fcn.80225940 @ +0x964
         if                       // unlikely
         if                       // unlikely

    loc_0x80226804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226810: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022681c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226828: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226834: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226840: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022684c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226858: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226864: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226870: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022687c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80226888: // orphan
         if                       // unlikely
         

    loc_0x80226890: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022689c: // orphan
         if                       // unlikely
         

    loc_0x802268a4: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802268d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802268dc: // orphan
         if                       // unlikely
         

    loc_0x802268e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802268f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802268fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227060: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262ac
         

    loc_0x80227064: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80227084: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227090: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802270a4: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802270bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802270c8: // orphan
         // CODE XREF from fcn.8021cbcc @ +0x918
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802270f4: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8022711c: // orphan
         
         
         
         

    loc_0x8022712c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262b8
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x802262b4
         if                       // fcn.80237acc+0x110 // unlikely
         if                       // unlikely

    loc_0x80227144: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227150: // orphan
         if                       // fcn.80237acc+0x258 // unlikely
         if                       // unlikely

    loc_0x8022715c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227168: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227174: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227180: // orphan
         if                       // unlikely
         if                       // fcn.802381e8+0x30 // unlikely

    loc_0x8022718c: // orphan
         if                       // fcn.802382a8-0x38 // unlikely
         if                       // fcn.802382a8+0xc // unlikely

    loc_0x80227198: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802271a8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802271b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802271c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802271d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802271dc: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80227200: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80227224: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802274f0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262cc
         sp -= 0x30
         [sp + 0x18] = s0
         s0 = a0                  // t9
         [sp + 0x1c] = ra
         call 0x800356cc          // 0x800356cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xb
         a0 = v0                  // s4
         a1 = 0
         a2 = 0 + 1               // lo
         call 0x8000484c          // 0x8000484c(0xff, 0x0, 0x1, -1)
         a3 = 0
         [sp + 0x2c] = v0
         [sp + 0x24] = 0
         a0 = s0                  // t9
         call 0x80075630          // 0x80075630(-1, 0x0, 0x1, 0x0)
         a1 = 0 + 0x920
         t1 = 0x8261 << 16
         t1 += 0x5324
         t6 = [t1 + 0]
         a1 = halfword [t6 + 4]
         bltzl a1, 0x80227564     // unlikely
         [s0 + 0xc] = 0

    loc_0x80227548: // orphan
         call 0x80004b4c          // 0x80004b4c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x2c]         // t9
         t1 = 0x8261 << 16
         t1 += 0x5324
         // CODE XREF from fcn.8021d4ec @ 0x8021d504
         goto 0x80227564
         [s0 + 0xc] = v0

    loc_0x80227564: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80227558
         [s0 + 0xac] = 0
         a0 = [t1 + 0]

    loc_0x8022756c: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d508
         at = 0 + 0x700
         a1 = 0 + 5
         t7 = , unsigned  halfword [a0 + 8]
         t8 = t7 & 0xff00
         bnel t8, at, 0x802275a0  // likely
         t5 = [sp + 0x24]         // t9

    loc_0x80227584: // orphan
         t9 = , unsigned  byte [a0 + 0x7c] // s4
         at = 0 + 3
         t4 = 0 + 1               // lo
         bnel t9, at, 0x802275a0  // likely
         t5 = [sp + 0x24]         // t9

    loc_0x80227598: // orphan
         [sp + 0x24] = t4
         t5 = [sp + 0x24]         // t9

    loc_0x802275a0: // orphan
         beql t5, 0, 0x802275c4   // unlikely
         [s0 + 0] = a0

    loc_0x802275a8: // orphan
         call 0x80004b4c          // 0x80004b4c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x2c]         // t9
         t1 = 0x8261 << 16
         t1 += 0x5324
         [s0 + 0xac] = v0
         a0 = [t1 + 0]
         // CODE XREF from fcn.8021d4ec @ +0x20
         [s0 + 0] = a0

    loc_0x802275c4: // orphan
         t6 = [t1 + 0]
         t8 = [s0 + 0xc]          // s4
         t7 = halfword [t6 + 0x88]
         if                       // unlikely
         halfword [s0 + 0x16] = t7

    loc_0x802275d8: // orphan
         t9 = [t1 + 0]
         call 0x8006afb4          // 0x8006afb4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = halfword [t9 + 4]
         t1 = 0x8261 << 16
         t3 = 0 + 1               // lo
         if                       // likely
         t1 += 0x5324

    loc_0x802275f4: // orphan
         t4 = [s0 + 0xc]          // s4
         t0 = 0
         v0 = s0
         t5 = , unsigned  byte [t4 + 0] // s4
         v1 = 0 + 1               // lo
         if                       // likely
         t6 = , signed  t5 >> 1

    loc_0x80227610: // orphan
         at = t5 + 1
         t6 = , signed  at >> 1

    loc_0x80227618: // orphan
         halfword [s0 + 0x14] = t6
         t7 = halfword [s0 + 0x14]
         blezl t7, 0x8022768c     // unlikely
         t3 = 0 + 1               // lo

    loc_0x80227628: // orphan
         halfword [v0 + 0x18] = v1
         t8 = halfword [s0 + 0x14]
         t0 += 1
         v1 += 2
         at = , t0 < t8
         if                       // unlikely
         v0 += 2

    loc_0x80227644: // orphan
         goto 0x8022768c
         t3 = 0 + 1               // lo

    loc_0x8022764c: // orphan
         t9 = [s0 + 0xc]          // s4
         t0 = 0
         v0 = s0
         t4 = , unsigned  byte [t9 + 0] // s4
         halfword [s0 + 0x14] = t4
         t5 = halfword [s0 + 0x14] // s4
         blezl t5, 0x8022768c     // unlikely
         t3 = 0 + 1               // lo

    loc_0x8022766c: // orphan
         halfword [v0 + 0x18] = t0

    loc_0x80227670: // orphan
         t6 = halfword [s0 + 0x14]
         t0 += 1
         // CODE XREF from fcn.8021d4ec @ 0x8021d514
         v0 += 2
         at = , t0 < t6
         bnel at, 0, 0x80227670   // unlikely
         halfword [v0 + 0x18] = t0

    loc_0x80227688: // orphan
         t3 = 0 + 1               // lo

    loc_0x8022768c: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d518
         // CODE XREF from fcn.8023e660 @ 0x80227644
         [s0 + 0x9c] = 0
         t0 = 0
         a1 = s0 + 0xb0

    loc_0x80227698: // orphan
         t2 = 0 + 2
         a3 = 0 - 2               // hi

    loc_0x802276a0: // orphan
         a0 = [t1 + 0]
         v1 = 0
         a2 = t0
         t7 = byte [a0 + 6]       // s4
         v0 = a1                  // t0
         beql t7, 0, 0x802276e4   // unlikely
         halfword [a1 + 0] = t3

    loc_0x802276bc: // orphan
         a2 = t0 << 1
         t8 = a0 + a2
         t9 = byte [t8 + 1]       // s4
         if                       // unlikely
         

    loc_0x802276d0: // orphan
         goto 0x802276e4
         halfword [a1 + 0] = t2

    loc_0x802276d8: // orphan
         goto 0x802276e4
         halfword [a1 + 0] = t3

    loc_0x802276e4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802276d0, 0x802276d8
         v1 += 1
         at = , v1 < 2
         byte [v0 + 2] = a3
         if                       // unlikely
         v0 += 1

    loc_0x802276f8: // orphan
         a0 = halfword [a1 + 0]   // t3
         t0 += 1
         v1 = 0
         if                       // unlikely
         v0 = a1                  // t0

    loc_0x8022770c: // orphan
         t4 = [t1 + 0]

    loc_0x80227710: // orphan
         v0 += 1
         t5 = t4 + a2
         t6 = t5 + v1
         t7 = byte [t6 + 0]       // s4
         v1 += 1
         byte [v0 + 1] = t7
         a0 = halfword [a1 + 0]   // t3
         at = , v1 < a0
         bnel at, 0, 0x80227710   // unlikely
         t4 = [t1 + 0]

    loc_0x80227738: // orphan
         if                       // likely
         

    loc_0x80227740: // orphan
         t8 = [t1 + 0]
         t4 = 0 + 1               // lo
         t5 = t4 << a2
         t9 = , unsigned  byte [t8 + 0x7e] // s4
         t6 = t9 & t5
         t7 = , unsigned  , 0 < t6
         byte [a1 + 6] = t7

    loc_0x8022775c: // orphan
         if                       // likely
         a1 += 0x428

    loc_0x80227764: // orphan
         a0 = s0 + 0x900
         call 0x80054cc4          // 0x80054cc4(0xa04, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call fcn.826040d8
         
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x30
         ret
         

    loc_0x80227aa4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dd10
         v0 = [s1 + 0x9c]         // t9
         s1 = [sp + 0x24]         // t9
         s0 = [sp + 0x20]         // t9
         s2 = [sp + 0x28]         // s4

    loc_0x80227ab4: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d530
         ret                      // ra
         sp += 0x30

    loc_0x80227bac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dd18
         s5 = 0 + 0x98
         t6 = v0 + s3

    loc_0x80227bb4: // orphan
         t7 = halfword [t6 + 0x18]
         t5 = [v0 + 0xc]          // t9
         t9 = halfword [v0 + 0x16]
         unsigned , hi
         v1 = 0
         a3 = 0 + 0xff            // arg4 // s4
         a0 = 0 + 0xff            // arg1 // s4
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0
         t8 = lo
         s1 = t5 + t8
         if                       // likely
         s1 += 4

    loc_0x80227be8: // orphan
         v1 = 0 + 1               // lo

    loc_0x80227bec: // orphan
         if                       // fcn.80227c0c // fcn.80227c0c // likely
         

    loc_0x80227bf4: // orphan
         a0 = 0 + 0xff            // arg1 // s4
         a1 = 0 + 0xff            // arg2 // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x8, -1)
         a2 = 0 + 0xff            // s4
         goto 0x80227c18
         a1 = , unsigned  byte [s1 + 0]

    loc_0x80227c18: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80227c04
         a0 = 0 + 0x29
         call 0x8004c874          // 0x8004c874(0x29, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80227c20: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d54c
         a1 -= 1
         a1 = , unsigned  byte [s1 + 1]
         s2 = v0                  // s4
         a0 = 0 + 0x2a
         call 0x8004c874          // 0x8004c874(0x2a, 0x3, 0x8, -1)
         a1 -= 1
         a0 = 0 + 0x78
         a1 = s4
         a2 = s6
         a3 = s2                  // s4
         call 0x800495bc          // 0x800495bc(0x78, 0xff, 0x442f71dcfe111002, 0xff)
         [sp + 0x10] = v0
         v0 = [s7 + 0]            // t9
         s0 += 1
         s3 += 2
         t0 = halfword [v0 + 0x14]
         s4 += 0x14
         at = , s0 < t0           // lo
         bnel at, 0, 0x80227bb4   // likely
         t6 = v0 + s3

    loc_0x80227c70: // orphan
         goto 0x80227c80
         

    loc_0x80227c80: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80227c70
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x3c]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]         // t9
         s2 = [sp + 0x24]         // t9
         s3 = [sp + 0x28]         // s4
         s4 = [sp + 0x2c]         // t9
         s5 = [sp + 0x30]         // a2
         s6 = [sp + 0x34]
         s7 = [sp + 0x38]
         ret
         sp += 0x68

    loc_0x80227dd0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262dc
         halfword [v0 + 0x16] = t0
         v0 = [a1 + 0]            // arg2
         t1 = halfword [v0 + 0x16]
         t2 = halfword [v0 + 0x14]
         at = , t1 < t2
         if                       // unlikely
         

    loc_0x80227dec: // orphan
         halfword [v0 + 0x16] = 0

    loc_0x80227df0: // orphan
         goto 0x80227e48
         v1 = [v1 + 0x7200]       // t9

    loc_0x80227e48: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80227df0
         t9 = , unsigned  halfword [v1 + 8]

    loc_0x80227e4c: // orphan
         t0 = t9 & 0x8000
         beql t0, 0, 0x80227e60   // unlikely
         ra = [sp + 0x14]         // t9

    loc_0x80227e58: // orphan
         a2 = 0 + 3               // arg3

    loc_0x80227e5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dd38
         // CODE XREF from fcn.824f6c74 @ +0x1b64
         ra = [sp + 0x14]         // t9

    loc_0x80227e60: // orphan
         sp += 0x20
         v0 = a2
         ret                      // ra
         

    loc_0x80228650: // orphan
         at = 0 - 2               // hi
         t3 = t0 + s3
         v0 = byte [t3 + 0]       // s4
         if                       // unlikely
         at = 0 - 1               // s2

    loc_0x80228664: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5a0
         beql v0, at, 0x80228678  // unlikely
         t4 = halfword [t0 + 0x88]

    loc_0x8022866c: // orphan
         goto 0x8022868c
         v0 = 0 - 1               // s2

    loc_0x80228678: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5a4
         t5 = t4 << 1
         t6 = s5 + t5
         goto 0x8022868c
         v0 = halfword [t6 + 0x18]

    loc_0x80228688: // orphan
         v0 = 0 - 1               // s2

    loc_0x8022868c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022866c, 0x80228680
         bltzl v0, 0x80228734     // unlikely
         s3 += 1

    loc_0x80228694: // orphan
         v1 = [s5 + 0xc]
         t8 = v0 << 2
         t8 += v0
         t7 = , unsigned  byte [v1 + 0] // s4
         t8 <<= 2
         t8 -= v0
         at = , v0 < t7
         if                       // likely
         t8 <<= 3

    loc_0x802286b8: // orphan
         t9 = s3 << 5
         t9 += s3
         s6 = v1 + t8
         t9 <<= 4
         s6 += 4
         // CODE XREF from fcn.8021d4ec @ +0xbc
         a0 = t0 + t9
         a0 += 0x90
         call 0x80071bb8          // "*!" // 0x80071bb8(0x442f73ecfe116288, 0x442f71dcfe116408, 0x8, -1)
         a1 = s6
         at = , s1 < 0x33
         // CODE XREF from fcn.8021d4ec @ 0x8021d5ac
         if                       // unlikely
         s0 = 0

    loc_0x802286e8: // orphan
         goto 0x802286f4
         s2 = s1

    loc_0x802286f0: // orphan
         s2 = 0 + 0x32

    loc_0x802286f4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802286e8
         t2 = [s5 + 0]            // t9

    loc_0x802286f8: // orphan
         t3 = s3 << 5

    loc_0x802286fc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262e8
         t3 += s3
         t3 <<= 4
         t4 = t2 + t3
         a0 = t4 + s0             // arg1
         a0 += 0x90               // arg1
         // CODE XREF from fcn.80225940 @ +0x9ac
         call 0x82600cf4          // 0x82600cf4(0x1000001263, 0x442f71dcfe116408, 0x8, -1)
         byte [a0 + 0x1d] = s2
         s0 += 0x58
         bnel s0, s4, 0x802286f8  // likely
         t2 = [s5 + 0]            // t9

    loc_0x80228724: // orphan
         a0 = s3                  // t9
         call 0x8006aed4          // "&s" // 0x8006aed4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s6
         s3 += 1

    loc_0x80228730: // orphan
         s3 += 1

    loc_0x80228734: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5b0
         at = 0 + 2
         bnel s3, at, 0x80228650  // likely
         t0 = [s5 + 0]            // t9

    loc_0x80228740: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         // CODE XREF from fcn.8021d4ec @ 0x8021d5b8
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // a2
         ret
         sp += 0x38

    loc_0x8022878c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262f8
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         if                       // unlikely
         // CODE XREF from fcn.8021d4ec @ 0x8021d5bc
         // CODE XREF from fcn.80225940 @ +0x9bc
         [sp + 0x90] = a2

    loc_0x802287a4: // orphan
         t6 = a0 + 0xb0           // arg1
         [sp + 0x50] = t6
         [sp + 0x84] = 0
         fp = 0 + 1               // lo

    loc_0x802287b4: // orphan
         // CODE XREF from fcn.8021d4ec @ +0xd4
         t8 = [sp + 0x84]
         t7 = [sp + 0x50]
         [sp + 0x7c] = 0
         if                       // unlikely
         [sp + 0x74] = t7

    loc_0x802287c8: // orphan
         goto 0x802287d4
         // CODE XREF from fcn.8021d4ec @ 0x8021d5c8
         s7 = 0 + 0x46

    loc_0x802287d0: // orphan
         s7 = 0 + 0x47

    loc_0x802287d4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80226300, 0x802287c8
         t9 = [sp + 0x50]
         // CODE XREF from fcn.8021d4ec @ 0x8021d5c4
         t0 = halfword [t9 + 0]
         blezl t0, 0x80228af0     // unlikely
         t5 = [sp + 0x84]

    loc_0x802287e4: // orphan
         [sp + 0x40] = t9

    loc_0x802287e8: // orphan
         a3 = [s6 + 0]            // t9
         t2 = [sp + 0x84]
         // CODE XREF from fcn.8021d4ec @ +0xe0
         t4 = [sp + 0x7c]
         t1 = byte [a3 + 6]       // arg4
         s5 = [sp + 0x84]
         t5 = [sp + 0x40]         // t9
         if                       // unlikely
         t7 = [sp + 0x90]         // a2

    loc_0x80228814: // orphan
         // CODE XREF from fcn.80228808 @ 0x8022880c
         t6 = byte [t5 + 2]       // s4
         at = 0 - 1               // s2
         s3 = 0
         if                       // likely
         

    loc_0x80228828: // orphan
         goto 0x80228830
         // CODE XREF from fcn.8023e660 @ 0x80226308
         s3 = fp

    loc_0x80228830: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80228828
         if                       // likely
         s0 = s3                  // t9

    loc_0x80228838: // orphan
         goto 0x80228840
         s0 = 0

    loc_0x80228840: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022630c, 0x80228838
         if                       // likely
         

    loc_0x80228848: // orphan
         t8 = halfword [a3 + 0x88]
         t0 = [sp + 0x74]
         if                       // unlikely
         // CODE XREF from fcn.80225940 @ +0x9d0
         

    loc_0x80228858: // orphan
         goto 0x80228acc
         v0 = halfword [t0 + 0]   // t3

    loc_0x80228860: // orphan
         if                       // likely
         t2 = [sp + 0x98]

    loc_0x80228868: // orphan
         t9 = , unsigned  byte [a3 + 0x7d] // arg4 // s4
         t1 = [sp + 0x74]
         if                       // unlikely
         

    loc_0x80228878: // orphan
         goto 0x80228acc
         v0 = halfword [t1 + 0]

    loc_0x80228880: // orphan
         beql t2, 0, 0x802288fc   // unlikely
         t6 = s5 << 5

    loc_0x80228888: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226314
         if                       // likely
         t3 = [sp + 0x7c]

    loc_0x80228890: // orphan
         bnel t3, 0, 0x802288fc   // likely
         t6 = s5 << 5

    loc_0x80228898: // orphan
         v0 = halfword [a3 + 0xa]

    loc_0x8022889c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226318
         v0 -= 1                  // t3

    loc_0x802288a0: // orphan
         if                       // unlikely
         at = , v0 < 4

    loc_0x802288a8: // orphan
         if                       // unlikely
         t4 = 0x8261 << 16

    loc_0x802288b0: // orphan
         t4 += 0x63a0
         v1 = v0 + t4
         a2 = , unsigned  byte [v1 + 0x10] // s4
         a0 = 0x8261 << 16
         a0 += 0x63a0             // arg1
         at = , a2 < 0xfa         // arg3
         if                       // likely
         t5 = a2 + 1              // arg3

    loc_0x802288d0: // orphan
         byte [v1 + 0x10] = t5
         a1 = 0x8261 << 16
         call 0x80055f6c          // 0x80055f6c(-1, 0x82610000, 0x8, -1)
         a1 = [a1 + 0x5344]
         a0 = 0 + 0x14
         call 0x80051d64          // 0x80051d64(0x14, 0x7fafe751, 0x8, -1)
         a1 = 0
         call 0x80054e48          // 0x80054e48(0x14, 0x0, 0x8, -1)
         a0 = 0 + 3
         a3 = [s6 + 0]            // t9

    loc_0x802288f8: // orphan
         t6 = s5 << 5

    loc_0x802288fc: // orphan
         t6 += s5
         // CODE XREF from fcn.80225940 @ +0x9dc
         t6 <<= 4
         a0 = a3 + t6             // arg4
         a0 += 0x90               // arg1
         a1 = , unsigned  byte [a3 + 0x89] // arg4 // s4
         call 0x84302148          // 0x84302148(0xffff8aa8f, 0xff, 0x8, -1)
         a2 = s0
         s2 = 0
         t7 = [s6 + 0]            // t9

    loc_0x80228920: // orphan
         t8 = s5 << 5

    loc_0x80228924: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226320
         t8 += s5
         t8 <<= 4
         t0 = t7 + t8
         s0 = t0 + s2
         v0 = , unsigned  byte [s0 + 0x90] // s4
         s0 += 0x90
         if                       // unlikely
         

    loc_0x80228944: // orphan
         at = , v0 < 0xfe
         if                       // likely
         

    loc_0x80228950: // orphan
         s1 = s0 + 0x34
         a0 = s1
         call 0x80075630          // 0x80075630(0x138, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xc
         a1 = , unsigned  byte [s0 + 0]
         a0 = s7                  // t9
         call 0x8004c874          // 0x8004c874(-1, 0xae, 0x8, -1)
         a1 -= 1
         a0 = s1
         call 0x8000b580          // "R`" // 0x8000b580(0x138, 0xad, 0x8, -1)
         a1 = v0                  // s4

    loc_0x8022897c: // orphan
         beql s3, 0, 0x80228ab8   // unlikely
         s2 += 0x58

    loc_0x80228984: // orphan
         if                       // unlikely
         

    loc_0x8022898c: // orphan
         if                       // unlikely
         v1 = 0 + 2

    loc_0x80228994: // orphan
         goto 0x802289a4
         v1 = 0 + 1               // lo

    loc_0x8022899c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226328
         goto 0x802289a4
         v1 = 0 + 4

    loc_0x802289a4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80228994, 0x8022899c
         t9 = , unsigned  halfword [s0 + 0xc]
         v0 = v1
         t2 = , unsigned  halfword [s0 + 0xe] // s4

    loc_0x802289b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022632c
         div 0, t9, v1
         t1 = lo
         t4 = , unsigned  halfword [s0 + 0x10]
         t6 = , unsigned  halfword [s0 + 0x12]
         div 0, t2, v0
         t3 = lo
         t8 = , unsigned  halfword [s0 + 0x14]
         if                       // likely
         

    loc_0x802289d4: // orphan
         // CODE XREF from fcn.80225940 @ +0x9f0
         break 7

    loc_0x802289d8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802289e4: // orphan
         if                       // likely
         

    loc_0x802289ec: // orphan
         break 6

    loc_0x802289f0: // orphan
         div 0, t4, v0
         t5 = lo
         halfword [s0 + 0xc] = t1
         if                       // likely
         

    loc_0x80228a04: // orphan
         break 7

    loc_0x80228a08: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80228a14: // orphan
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x80226344
         

    loc_0x80228a18: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226344
         

    loc_0x80228a1c: // orphan
         break 6

    loc_0x80228a20: // orphan
         div 0, t6, v0
         t7 = lo
         // CODE XREF from fcn.8023e660 @ 0x80226334
         halfword [s0 + 0xe] = t3
         // CODE XREF from fcn.80225940 @ +0xa08
         if                       // likely
         

    loc_0x80228a34: // orphan
         break 7

    loc_0x80228a38: // orphan
         at = 0 - 1               // s2

    loc_0x80228a3c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226338
         if                       // likely
         at = 0x8000 << 16

    loc_0x80228a44: // orphan
         if                       // likely
         

    loc_0x80228a4c: // orphan
         break 6

    loc_0x80228a50: // orphan
         // CODE XREF from fcn.80225940 @ +0x9fc
         div 0, t8, v0
         t0 = lo
         halfword [s0 + 0x10] = t5
         if                       // likely
         

    loc_0x80228a64: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226340
         break 7

    loc_0x80228a68: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80228a74: // orphan
         if                       // likely
         

    loc_0x80228a7c: // orphan
         break 6

    loc_0x80228a80: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022634c
         halfword [s0 + 0x12] = t7
         if                       // likely
         

    loc_0x80228a8c: // orphan
         break 7

    loc_0x80228a90: // orphan
         at = 0 - 1               // s2

    loc_0x80228a94: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226350
         if                       // likely
         at = 0x8000 << 16

    loc_0x80228a9c: // orphan
         if                       // likely
         

    loc_0x80228aa4: // orphan
         break 6

    loc_0x80228aa8: // orphan
         halfword [s0 + 0x14] = t0
         call 0x82600cf4          // "&R" // 0x82600cf4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s2 += 0x58

    loc_0x80228ab8: // orphan
         // CODE XREF from fcn.80225940 @ +0xa14
         at = 0 + 0x210
         bnel s2, at, 0x80228920  // likely
         t7 = [s6 + 0]            // t9

    loc_0x80228ac4: // orphan
         t9 = [sp + 0x74]
         v0 = halfword [t9 + 0]

    loc_0x80228acc: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80226358, 0x80228858, 0x80228878
         t1 = [sp + 0x7c]
         t3 = [sp + 0x40]         // t9
         t2 = t1 + 1              // lo
         at = , t2 < v0           // lo
         t4 = t3 + 1
         [sp + 0x40] = t4
         if                       // likely
         [sp + 0x7c] = t2

    loc_0x80228aec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226368
         t5 = [sp + 0x84]

    loc_0x80228af0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022635c
         t7 = [sp + 0x50]
         at = 0 + 2
         t6 = t5 + 1
         t8 = t7 + 0x428
         [sp + 0x50] = t8
         if                       // likely
         [sp + 0x84] = t6

    loc_0x80228b0c: // orphan
         ra = [sp + 0x3c]
         // CODE XREF from fcn.80225940 @ +0xa2c
         s0 = [sp + 0x18]
         // CODE XREF from fcn.80225940 @ +0xa20
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         // CODE XREF from fcn.8023e660 @ 0x80226364
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x88

    loc_0x80228b58: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226374
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         t6 = [a0 + 0xc]          // arg1
         // CODE XREF from fcn.80225940 @ +0xa38
         s3 = a0                  // t9
         s4 = a1                  // t0
         if                       // likely
         s2 = 0

    loc_0x80228b7c: // orphan
         fp = 0 + 1               // lo
         s7 = 0 + 0x400
         s6 = 0 - 1               // s2
         s5 = 0 - 2               // hi
         s0 = [s3 + 0]            // t9

    loc_0x80228b90: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022637c
         t7 = s0 + s2
         v0 = byte [t7 + 0]       // s4
         if                       // unlikely
         

    loc_0x80228ba0: // orphan
         beql v0, s6, 0x80228bbc  // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226380
         t8 = halfword [s0 + 0x88]

    loc_0x80228ba4: // orphan
         beql v0, s6, 0x80228bbc  // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226380
         t8 = halfword [s0 + 0x88]

    loc_0x80228ba8: // orphan
         v0 = , unsigned  halfword [s0 + 8]
         at = , s2 < 2            // lo
         goto 0x80228bd4
         v0 &= 0xff00

    loc_0x80228bbc: // orphan
         t9 = t8 << 1
         t0 = s3 + t9
         goto 0x80228c10
         v0 = halfword [t0 + 0x18]

    loc_0x80228bcc: // orphan
         goto 0x80228c10
         v0 = s6

    loc_0x80228bd4: // orphan
         // CODE XREF from fcn.80225940 @ +0xa50
         // CODE XREF from fcn.8023e660 @ 0x80228bb0
         bnel s7, v0, 0x80228c10  // likely
         v0 = s6

    loc_0x80228bdc: // orphan
         if                       // unlikely
         

    loc_0x80228be4: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5d0
         t1 = halfword [s0 + 0x88]
         // CODE XREF from fcn.8023e660 @ 0x80226394
         t5 = s2 & 1              // lo
         // CODE XREF from fcn.8023e660 @ 0x80226388
         t6 = fp - t5
         t2 = t1 << 1
         t3 = s3 + t2

    loc_0x80228bf8: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5d4
         t4 = halfword [t3 + 0x18]
         goto 0x80228c10
         // CODE XREF from fcn.8023e660 @ 0x8022638c
         v0 = t4 - t6

    loc_0x80228c00: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5d4
         t4 = halfword [t3 + 0x18]
         goto 0x80228c10
         // CODE XREF from fcn.8023e660 @ 0x8022638c
         v0 = t4 - t6

    loc_0x80228c04: // orphan
         goto 0x80228c10
         v0 = s6

    loc_0x80228c10: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80228bc4, 0x80228bcc, 0x80228bfc, 0x80228c04
         bltzl v0, 0x80228cb8     // unlikely
         s2 += 1

    loc_0x80228c18: // orphan
         v1 = [s3 + 0xc]

    loc_0x80228c1c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226398
         t8 = v0 << 2
         t8 += v0
         t7 = , unsigned  byte [v1 + 0] // s4
         t8 <<= 2
         t8 -= v0
         // CODE XREF from fcn.80225940 @ +0xa5c
         at = , v0 < t7
         if                       // likely
         t8 <<= 3

    loc_0x80228c3c: // orphan
         // CODE XREF from fcn.8021d4ec @ +0xec
         s1 = v1 + t8
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x802263a0
         s1 += 4

    loc_0x80228c48: // orphan
         t9 = s2 << 5
         t9 += s2
         t9 <<= 4
         a0 = s0 + t9             // arg1
         a0 += 0x90               // arg1
         call 0x80071bb8          // 0x80071bb8(0xffffffffffffff84, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         s0 = [s3 + 0]            // t9

    loc_0x80228c68: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802263a4
         t0 = byte [s0 + 6]       // s4
         at = , s2 < 2            // lo
         if                       // likely
         

    loc_0x80228cb4: // orphan
         s2 += 1

    loc_0x80228cb8: // orphan
         at = 0 + 4
         bnel s2, at, 0x80228b90  // likely
         // CODE XREF from fcn.8023e660 @ 0x802263bc
         s0 = [s3 + 0]            // t9

    loc_0x80228cc0: // orphan
         at = 0 + 4
         bnel s2, at, 0x80228b90  // likely
         // CODE XREF from fcn.8023e660 @ 0x802263bc
         s0 = [s3 + 0]            // t9

    loc_0x80228cc4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802263b0
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         // CODE XREF from fcn.80225940 @ +0xa74
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x40

    loc_0x80228eb0: // orphan
         t1 = byte [s6 + 0]       // s4
         s0 = 0
         bnel s7, t1, 0x80228f1c  // likely
         s1 += 1

    loc_0x80228ec0: // orphan
         a0 = , unsigned  byte [s3 + 3] // s4

    loc_0x80228ec4: // orphan
         a1 = s0 + 0x21
         call 0x8004c874          // 0x8004c874(-1, 0x125, 0x8, -1)
         a0 += 0x4c
         if                       // unlikely
         a0 = v0                  // s4

    loc_0x80228ed8: // orphan
         // CODE XREF from fcn.8021d4ec @ +0xf8
         t2 = byte [v0 + 0]       // s4
         // CODE XREF from fcn.8023e660 @ 0x80226408
         beql t2, 0, 0x80228f10   // unlikely
         s0 += 1

    loc_0x80228ee4: // orphan
         unsigned , hi
         t3 = s1 << 5
         // CODE XREF from fcn.8021d4ec @ 0x8021d5e8
         t3 += s1

    loc_0x80228ef0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022640c
         t3 <<= 4
         t4 = s2 + t3
         a2 = 0 + 0xc             // arg3
         t5 = lo
         a1 = t4 + t5             // arg2
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfe0, 0xc, -1)
         a1 += 0xc4

    loc_0x80228f0c: // orphan
         s0 += 1

    loc_0x80228f10: // orphan
         bnel s0, s5, 0x80228ec4  // likely
         a0 = , unsigned  byte [s3 + 3] // s4

    loc_0x80228f18: // orphan
         s1 += 1

    loc_0x80228f1c: // orphan
         if                       // likely
         s6 += 1

    loc_0x80228f24: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9

    loc_0x80228f40: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d5ec
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x40

    loc_0x80228fcc: // orphan
         v0 = byte [s1 + 0]
         if                       // unlikely
         

    loc_0x80228fd8: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d604
         if                       // unlikely
         a0 = 0 + 0x2a            // arg1

    loc_0x80228fe0: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021d4ec @ 0x8021d600
         a1 = 0 + 0x57
         if                       // unlikely
         a0 = v0                  // s4

    loc_0x80228ff0: // orphan
         unsigned , hi            // t9 // s2
         a2 = s2
         t0 = lo
         // CODE XREF from fcn.8021d4ec @ +0x11c
         a1 = s3 + t0
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffefb, -1, -1)
         a1 += 0x8d0
         goto 0x8022904c
         // CODE XREF from fcn.8023e660 @ 0x80226418
         s0 += 1

    loc_0x8022900c: // orphan
         unsigned , hi            // t9 // s2
         a2 = s2
         t0 = lo
         // CODE XREF from fcn.8021d4ec @ +0x11c
         a1 = s3 + t0
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffefb, -1, -1)
         a1 += 0x8d0
         goto 0x8022904c
         // CODE XREF from fcn.8023e660 @ 0x80226418
         s0 += 1

    loc_0x80229010: // orphan
         bnel s5, v0, 0x8022904c  // likely
         s0 += 1

    loc_0x80229018: // orphan
         a1 = , unsigned  byte [s6 + 1] // s4
         a0 = 0 + 0x2a            // arg1
         // CODE XREF from fcn.80225940 @ +0xadc
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         if                       // unlikely
         a0 = v0                  // s4

    loc_0x80229030: // orphan
         unsigned , hi            // t9 // s2
         a2 = s2
         t1 = lo
         a1 = s3 + t1
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffefb, -1, -1)
         a1 += 0x8d0

    loc_0x80229048: // orphan
         s0 += 1

    loc_0x8022904c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80229008
         if                       // likely
         s1 += 1

    loc_0x80229054: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x14]         // t9
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]         // t9
         s5 = [sp + 0x28]         // s4
         s6 = [sp + 0x2c]         // t9
         s7 = [sp + 0x30]         // a2
         ret
         sp += 0x38

    loc_0x802290f0: // orphan
         t0 = halfword [s4 + 0xb0]
         t3 = s1 << 2
         t3 -= s1
         at = , t0 < 2
         if                       // likely
         a0 = 0 + 1               // lo

    loc_0x80229108: // orphan
         v0 = byte [s2 + 2]       // s4
         a0 = 0 + 1               // lo
         t1 = s1 << 2
         if                       // unlikely
         a1 = v0 + 1

    loc_0x8022911c: // orphan
         t1 -= s1
         t1 <<= 2
         s0 = s3 + t1
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 += 0x8d0
         a0 = s0
         // CODE XREF from fcn.8023e660 @ 0x80226420
         a1 = s7                  // t9
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0xef42389107ba1207, -1, 0x12, -1)
         a3 = 0 + 0x1d
         goto 0x802291c4
         // CODE XREF from fcn.8023e660 @ 0x80226424
         s1 += 1

    loc_0x80229148: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226424
         s1 += 1

    loc_0x8022914c: // orphan
         a1 = , unsigned  byte [s5 + 1] // s4
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         if                       // unlikely
         a0 = v0                  // s4

    loc_0x80229164: // orphan
         unsigned , hi
         a2 = s7                  // t9
         t2 = lo
         a1 = s3 + t2
         // CODE XREF from fcn.80225940 @ +0xb00
         call 0x8007dfb0          // 0x8007dfb0(-1, 0x101ee8242, -1, -1)
         a1 += 0x8d0
         goto 0x802291c4
         s1 += 1

    loc_0x80229184: // orphan
         a1 = byte [s2 + 2]       // s4
         // CODE XREF from fcn.8023e660 @ 0x80226444
         t3 <<= 2
         s0 = s3 + t3
         s0 += 0x8d0
         call 0x8004c594          // 0x8004c594(-1, 0xff, 0x8, -1)
         a1 += 1
         a1 = byte [s2 + 3]       // s4
         a0 = s6
         call 0x8004c594          // 0x8004c594(0x442f71dcfe111002, 0xff, 0x8, -1)
         a1 += 1
         // CODE XREF from fcn.80225940 @ +0xae8
         a0 = s0
         a1 = s7                  // t9
         a2 = 0 + 0x12
         call 0x8004c8a0          // "&1" // 0x8004c8a0(0x100000cc7, -1, 0x12, -1)
         a3 = 0 + 0x1c

    loc_0x802291c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022642c
         s1 += 1

    loc_0x802291c4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80229144, 0x8022917c
         s4 += 0x428
         if                       // likely
         s2 += 0x428

    loc_0x802291d0: // orphan
         ra = [sp + 0x34]

    loc_0x802291d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226430
         s0 = [sp + 0x14]         // t9
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]         // t9
         s5 = [sp + 0x28]         // s4
         s6 = [sp + 0x2c]         // t9
         s7 = [sp + 0x30]         // a2
         ret                      // ra
         sp += 0x38

    loc_0x80229288: // orphan
         v0 = byte [s1 + 0]
         a0 = 0
         beql v0, s4, 0x802292c8  // unlikely
         v0 = 0

    loc_0x80229298: // orphan
         if                       // unlikely
         t6 = s0 << 2

    loc_0x802292a0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022643c
         t7 = s6 + t6
         goto 0x802292c8
         v0 = [t7 + 0]            // t9

    loc_0x802292ac: // orphan
         t8 = [s2 + 0]            // t9
         t9 = halfword [t8 + 0xc]
         t0 = t9 << 2
         v0 = sp + t0             // fp

    loc_0x802292bc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226448
         goto 0x802292c8
         v0 = [v0 + 0x50]         // t9

    loc_0x802292c8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802292a4, 0x802292bc
         if                       // unlikely
         

    loc_0x802292d0: // orphan
         a1 = , unsigned  byte [v0 + 1] // s4
         // CODE XREF from fcn.8023e660 @ 0x80226450
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         a0 = v0                  // s4

    loc_0x802292e4: // orphan
         beql a0, 0, 0x80229308   // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226454
         s0 += 1

    loc_0x802292e8: // orphan
         beql a0, 0, 0x80229308   // unlikely
         // CODE XREF from fcn.8023e660 @ 0x80226454
         s0 += 1

    loc_0x802292ec: // orphan
         unsigned , hi
         // CODE XREF from fcn.80225940 @ +0xb0c
         a2 = s7                  // t9
         t1 = lo
         a1 = s3 + t1             // arg2
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffefb, -1, -1)
         a1 += 0x8d0
         s0 += 1

    loc_0x80229308: // orphan
         if                       // likely
         // CODE XREF from fcn.80225940 @ +0xb18
         s1 += 1

    loc_0x80229310: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         // CODE XREF from fcn.8023e660 @ 0x8022645c
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]         // a2
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x70

    loc_0x80229344: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226460
         [sp + 0x3c] = ra
         [sp + 0x38] = fp
         [sp + 0x34] = s7
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         // CODE XREF from fcn.80225940 @ +0xb24
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         s2 = [a0 + 0]            // arg1 // t9
         v0 = [a0 + 0xc]          // arg1

    loc_0x80229374: // orphan
         s0 = 0
         v1 = halfword [s2 + 0x88]
         s5 = 0 - 2               // hi
         s6 = 0 - 1               // s2
         t6 = v1 << 1
         t7 = a0 + t6             // arg1
         t8 = halfword [t7 + 0x18]
         s7 = 0 + 0xc
         fp = 0 + 2
         t9 = t8 << 2
         t9 += t8
         t9 <<= 2
         t9 -= t8
         t9 <<= 3
         s4 = v0 + t9
         s4 += 4
         s1 = s2
         s3 = v0 + 4

    loc_0x802293bc: // orphan
         v0 = byte [s1 + 0]
         a0 = 0
         beql v0, s5, 0x802293e8  // unlikely
         v0 = 0

    loc_0x802293cc: // orphan
         if                       // unlikely
         

    loc_0x802293d4: // orphan
         goto 0x802293e8
         v0 = s3                  // t9

    loc_0x802293dc: // orphan
         goto 0x802293e8
         v0 = s4

    loc_0x802293e8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802293d4, 0x802293dc
         if                       // unlikely
         

    loc_0x802293f0: // orphan
         a1 = , unsigned  byte [v0 + 1] // s4
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         a0 = v0                  // s4

    loc_0x80229404: // orphan
         beql a0, 0, 0x80229428   // unlikely
         s0 += 1

    loc_0x8022940c: // orphan
         unsigned , hi
         a2 = s7                  // t9
         t0 = lo
         a1 = s2 + t0             // arg2
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffffffffffefb, -1, -1)
         a1 += 0x8d0
         s0 += 1

    loc_0x80229428: // orphan
         if                       // likely
         // CODE XREF from fcn.83f18344 @ +0x8ec
         s1 += 1

    loc_0x80229430: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         // CODE XREF from fcn.8023e660 @ 0x80226468
         s2 = [sp + 0x20]         // t9
         // CODE XREF from fcn.8021d4ec @ 0x8021d60c
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9

    loc_0x80229454: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d610
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x40

    loc_0x80229460: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022646c
         sp -= 0x68
         [sp + 0x3c] = ra
         [sp + 0x38] = fp
         [sp + 0x34] = s7
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         [sp + 0x6c] = a1
         t6 = halfword [a0 + 0x14]
         s4 = a0                  // t9
         s2 = 0
         if                       // unlikely
         // CALL XREF from fcn.80ab0f70 @ +0x44
         s3 = a0                  // t9

    loc_0x802294bc: // orphan
         t0 = [s4 + 0]            // t9
         t7 = [sp + 0x6c]
         unsigned , hi            // lo // lo
         t1 = halfword [t0 + 0x88]
         at = , s2 < t1           // lo
         // CODE XREF from fcn.80225940 @ +0xb3c
         t9 = lo
         s1 = t7 + t9             // lo
         if                       // unlikely
         s1 += 4

    loc_0x802294e0: // orphan
         goto 0x80229508
         // CODE XREF from fcn.8023e660 @ 0x80226480
         s0 = 0 + 0x27

    loc_0x802294e4: // orphan
         goto 0x80229508
         // CODE XREF from fcn.8023e660 @ 0x80226480
         s0 = 0 + 0x27

    loc_0x802294e8: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x802294ec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226478
         
         at = 0 + 3
         divu 0, v0, at
         t2 = hi
         t3 = t2 << 2
         t4 = fp + t3
         s0 = [t4 + 0]

    loc_0x80229508: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802294e0
         a0 = , unsigned  byte [s1 + 3]
         a1 = s0
         call 0x8004c874          // 0x8004c874(0x4, 0x104, 0x8, -1)
         a0 += 0x4c
         if                       // unlikely
         a2 = v0                  // s4

    loc_0x80229520: // orphan
         t5 = s2 << 2
         halfword [s3 + 0x38] = s0
         s1 = s4 + t5
         a0 = s6
         call 0x80049c70          // 0x80049c70(0x442f71dcfe111002, 0x442f71dcfe116408, 0x8, -1)
         a1 = s7                  // t9
         t6 = [sp + 0x60]
         halfword [s1 + 0x58] = t6
         t8 = [sp + 0x5c]
         halfword [s1 + 0x5a] = t8

    loc_0x80229548: // orphan
         t7 = halfword [s4 + 0x14]
         // CODE XREF from fcn.8023e660 @ 0x80226488
         s2 += 1
         s3 += 2
         at = , s2 < t7           // lo
         bnel at, 0, 0x802294bc   // likely
         t8 = halfword [s3 + 0x18]

    loc_0x80229560: // orphan
         ra = [sp + 0x3c]
         // CODE XREF from fcn.80225940 @ +0xb50
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         // CODE XREF from fcn.8023e660 @ 0x80226494
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]

    loc_0x80229580: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022648c
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x68

    loc_0x8022993c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226498
         a3 = 0 - 1               // arg4 // s2
         call fcn.82601298        // fcn.82601298(-1)
         a1 = , unsigned  , s0 < 1
         goto 0x80229968
         t5 = [fp + 0xc]

    loc_0x80229968: // orphan
         // XREFS: CODE 0x80229814  CODE 0x8022984c  CODE 0x80229864  
         // XREFS: CODE 0x80229880  CODE 0x802298d0  CODE 0x802298f4  
         // XREFS: CODE 0x80229948  
         if                       // unlikely
         

    loc_0x80229970: // orphan
         call fcn.82601968
         // CODE XREF from fcn.8023e660 @ 0x802264a0
         a0 = fp
         a0 = fp
         call fcn.82601f90
         a1 = [fp + 0xc]

    loc_0x80229984: // orphan
         call 0x80041e2c          // 0x80041e2c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         s7 = 0
         s6 = 0
         s0 = fp + 0xb0
         s5 = 0 + 0x420
         s4 = 0 + 0x210
         s1 = 0 + 0x58

    loc_0x802299a4: // orphan
         t6 = [sp + 0x4c]
         t7 = s7 << 5
         // CODE XREF from fcn.80225940 @ +0xb68
         t7 += s7
         t7 <<= 4
         v1 = 0
         a2 = 0
         a0 = s0
         // CODE XREF from fcn.8021d4ec @ +0x140
         a3 = t6 + t7

    loc_0x802299c4: // orphan
         byte [a0 + 4] = 0

    loc_0x802299c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264a4
         a1 = 0
         v0 = a3                  // s2

    loc_0x802299d0: // orphan
         t8 = , unsigned  byte [v0 + 0x90] // s4
         // CODE XREF from fcn.8021d4ec @ 0x8021d630
         a1 += 0xb0
         beql t8, 0, 0x80229a38   // unlikely
         t8 = , unsigned  byte [v0 + 0xe8] // s4

    loc_0x802299e0: // orphan
         unsigned , hi

    loc_0x802299e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264b0
         t9 = byte [a0 + 4]
         t6 = v0                  // s4
         t7 = v0 + 0x54
         t1 = t9 + 1              // lo
         byte [a0 + 4] = t1
         t2 = lo
         t3 = s0 + t2
         

    loc_0x80229a04: // orphan
         t5 = [t6 + 0x90]         // t9
         t6 += 0xc
         t3 += 0xc
         [t3 - 4] = t5
         t4 = [t6 + 0x88]         // t9

    loc_0x80229a18: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d634
         [t3 + 0] = t4
         t5 = [t6 + 0x8c]         // t9
         if                       // likely
         [t3 + 4] = t5

    loc_0x80229a28: // orphan
         t5 = [t6 + 0x90]         // t9
         v1 += 1
         [t3 + 8] = t5
         t8 = , unsigned  byte [v0 + 0xe8] // s4

    loc_0x80229a38: // orphan
         if                       // unlikely
         

    loc_0x80229a40: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264ac
         unsigned , hi
         t9 = byte [a0 + 4]       // lo
         t4 = v0                  // s4
         // CODE XREF from fcn.8021d4ec @ +0x14c
         t5 = v0 + 0x54
         t1 = t9 + 1
         byte [a0 + 4] = t1
         t2 = lo
         t7 = s0 + t2
         

    loc_0x80229a64: // orphan
         t3 = [t4 + 0xe8]         // t9
         t4 += 0xc                // t1
         t7 += 0xc
         [t7 - 4] = t3
         t6 = [t4 + 0xe0]         // t9
         [t7 + 0] = t6
         t3 = [t4 + 0xe4]         // t9
         if                       // likely
         [t7 + 4] = t3

    loc_0x80229a88: // orphan
         t3 = [t4 + 0xe8]         // t9
         v1 += 1
         [t7 + 8] = t3

    loc_0x80229a94: // orphan
         if                       // likely
         // CODE XREF from fcn.80225940 @ +0xb74
         v0 += 0xb0

    loc_0x80229a9c: // orphan
         a2 += 1
         at = , a2 < 2
         a0 += 1
         if                       // unlikely
         a3 += 0x210

    loc_0x80229ab0: // orphan
         at = , v1 < 0xc
         if                       // likely
         s2 = v1 << 2

    loc_0x80229abc: // orphan
         s2 -= v1
         s2 <<= 2
         s2 -= v1
         s2 <<= 3
         s3 = s0 + s2
         s3 += 8

    loc_0x80229ad4: // orphan
         a0 = s3                  // t9
         call 0x80075630          // "&R" // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         s2 += 0x58
         if                       // likely
         s3 += 0x58

    loc_0x80229aec: // orphan
         s6 += 0x428
         // CODE XREF from fcn.8021d4ec @ 0x8021d63c
         at = , s6 < 0x850
         s7 += 2
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x802264b8
         s0 += 0x428

    loc_0x80229b00: // orphan
         halfword [fp + 0x12] = 0
         s6 = 0
         v0 = fp
         a0 = 0 + 1               // lo
         v1 = 0 + 0x850

    loc_0x80229b14: // orphan
         t8 = halfword [v0 + 0xb0]
         s6 += 0x428
         at = , t8 < 2

    loc_0x80229b20: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264bc
         if                       // likely
         

    loc_0x80229b28: // orphan
         halfword [fp + 0x12] = a0

    loc_0x80229b2c: // orphan
         if                       // likely
         v0 += 0x428

    loc_0x80229b34: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d640
         // CODE XREF from fcn.80225940 @ +0xb80
         t9 = halfword [fp + 0x12]
         a1 = 0 + 0xc
         a2 = 0 + 0x76
         if                       // unlikely
         a3 = 0 + 0x4e

    loc_0x80229b48: // orphan
         a1 = 0 + 0x18

    loc_0x80229b4c: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d648
         // CODE XREF from fcn.8023e660 @ 0x802264c8
         a2 = 0 + 0x59
         goto 0x80229b58
         a3 = 0 + 0x31

    loc_0x80229b58: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80229b50
         call 0x800437b4          // 0x800437b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x5c]
         [fp + 4] = v0
         // CODE XREF from fcn.8023e660 @ 0x802264d0
         t1 = , unsigned  halfword [v0 + 0]
         a0 = 0
         t2 = t1 | 4
         call 0x8004ba70          // 0x8004ba70(0x0, 0x442f71dcfe116408, 0x8, -1)
         halfword [v0 + 0] = t2
         [fp + 8] = v0
         // CODE XREF from fcn.80225940 @ +0xb98
         a0 = fp

    loc_0x80229b80: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d64c
         call 0x82610c84          // 0x82610c84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         ra = [sp + 0x44]
         s0 = [sp + 0x20]         // t9
         s1 = [sp + 0x24]         // t9

    loc_0x80229b94: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264e0
         s2 = [sp + 0x28]         // s4
         s3 = [sp + 0x2c]         // t9
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]         // t9
         s6 = [sp + 0x38]         // fp
         // CODE XREF from fcn.8023e660 @ 0x802264e4
         s7 = [sp + 0x3c]         // ra
         fp = [sp + 0x40]
         // CODE XREF from fcn.8023e660 @ 0x802264dc
         ret                      // ra
         sp += 0x60

    loc_0x80229bb8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264d4
         t6 = 0 + 1               // lo
         halfword [a0 + 0xa0] = t6 // arg1
         // CODE XREF from fcn.80225940 @ +0xb8c
         halfword [a0 + 0xa4] = a1 // arg1
         halfword [a0 + 0xa6] = a2 // arg1
         // CODE XREF from fcn.8023e660 @ 0x802264c4
         halfword [a0 + 0xa8] = a3 // arg1
         t7 = [sp + 0x10]
         ret                      // ra
         halfword [a0 + 0xaa] = t7 // arg1

    loc_0x80229e80: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dd9c
         
         if                       // unlikely
         t9 = 0 + 3

    loc_0x80229e8c: // orphan
         [sp + 0x1c] = t9
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80007b34          // 0x80007b34(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         call 0x800226c0          // 0x800226c0(0x5, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x65
         goto 0x80229ecc
         ra = [sp + 0x14]         // t9

    loc_0x80229ec8: // orphan
         ra = [sp + 0x14]         // t9

    loc_0x80229ecc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80229ea8
         v0 = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // ra
         

    loc_0x8022a06c: // orphan
         sp -= 0x70

    loc_0x8022a070: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264ec
         [sp + 0x3c] = ra
         [sp + 0x38] = fp
         [sp + 0x34] = s7
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         t6 = [a0 + 0xc]          // arg1
         s3 = [a0 + 0]            // arg1 // t9
         s2 = a0                  // t9
         t7 = t6 + 4
         [sp + 0x5c] = t7
         // CODE XREF from fcn.8021d4ec @ +0x18c
         t8 = [a0 + 0xc]          // arg1
         s4 = a1                  // t0
         s0 = 0
         t9 = t8 + 0x9c
         [sp + 0x60] = t9
         t0 = [a0 + 0xc]          // arg1
         s5 = 0 - 2               // hi
         s6 = 0 - 1               // s2
         t1 = t0 + 0x134
         // CODE XREF from fcn.8021d4ec @ 0x8021d67c
         [sp + 0x50] = t1
         t2 = [a0 + 0xc]          // arg1
         s7 = sp + 0x5c
         fp = 0 + 0xc
         t3 = t2 + 0x1cc
         [sp + 0x54] = t3
         t4 = [a0 + 0xc]          // arg1
         s1 = s3                  // t9
         t5 = t4 + 0x264
         // CODE XREF from fcn.8023e3c0 @ 0x802264f0
         [sp + 0x58] = t5

    loc_0x8022a0f8: // orphan
         v0 = byte [s1 + 0]
         a0 = 0
         if                       // unlikely
         

    loc_0x8022a108: // orphan
         if                       // likely
         

    loc_0x8022a110: // orphan
         t6 = [s2 + 0]            // t9
         t7 = halfword [t6 + 0xc]

    loc_0x8022a118: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264f4
         t8 = t7 << 2
         v0 = sp + t8             // fp
         goto 0x8022a148
         v0 = [v0 + 0x50]

    loc_0x8022a128: // orphan
         goto 0x8022a148
         v0 = 0

    loc_0x8022a130: // orphan
         if                       // unlikely
         v0 = 0

    loc_0x8022a138: // orphan
         t9 = s0 << 2
         t0 = s7 + t9
         goto 0x8022a148
         v0 = [t0 + 0]            // t9

    loc_0x8022a148: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022a120, 0x8022a128, 0x8022a140
         if                       // unlikely
         

    loc_0x8022a150: // orphan
         a1 = , unsigned  byte [v0 + 1] // s4
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         a0 = v0                  // s4

    loc_0x8022a164: // orphan
         beql a0, 0, 0x8022a188   // unlikely
         s0 += 1

    loc_0x8022a16c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802264f8
         unsigned , hi
         a2 = fp
         t1 = lo
         a1 = s3 + t1             // arg2
         call 0x8007dfb0          // 0x8007dfb0(-1, 0x117ddffff, 0x178000, -1)
         // CODE XREF from fcn.8023e3c0 @ 0x802264fc
         a1 += 0x8d0
         s0 += 1

    loc_0x8022a188: // orphan
         at = 0 + 2
         if                       // likely
         s1 += 1

    loc_0x8022a194: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9

    loc_0x8022a1a4: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d680
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         // CODE XREF from fcn.8021d4ec @ +0x198
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x70

    loc_0x8022a1e8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226504
         [sp + 0x1c] = s1
         // CODE XREF from fcn.8021d4ec @ 0x8021d688
         [sp + 0x18] = s0
         s2 = [a0 + 0]            // arg1 // t9
         v0 = [a0 + 0xc]          // arg1
         s0 = 0
         v1 = halfword [s2 + 0x88]

    loc_0x8022a200: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d68c
         s5 = 0 - 2               // hi
         s6 = 0 - 1               // s2
         t6 = v1 << 1
         t7 = a0 + t6             // arg1
         t8 = halfword [t7 + 0x18]
         s7 = 0 + 0xc
         fp = 0 + 2
         t9 = t8 << 2
         t9 += t8
         t9 <<= 2
         t9 -= t8
         t9 <<= 3
         s4 = v0 + t9
         // CODE XREF from fcn.8021d4ec @ +0x1a4
         s4 += 4
         s1 = s2
         // CODE XREF from fcn.8023e3c0 @ 0x80226508
         s3 = v0 + 4

    loc_0x8022a240: // orphan
         v0 = byte [s1 + 0]
         a0 = 0
         beql v0, s5, 0x8022a26c  // unlikely
         v0 = 0

    loc_0x8022a250: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022650c
         if                       // unlikely
         

    loc_0x8022a258: // orphan
         goto 0x8022a26c
         v0 = s3                  // t9

    loc_0x8022a260: // orphan
         goto 0x8022a26c
         v0 = s4

    loc_0x8022a26c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022a258, 0x8022a260
         if                       // unlikely
         

    loc_0x8022a274: // orphan
         a1 = , unsigned  byte [v0 + 1] // s4
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x8, -1)
         a1 -= 1                  // t3
         a0 = v0                  // s4

    loc_0x8022a288: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d694
         beql a0, 0, 0x8022a2ac   // unlikely
         s0 += 1

    loc_0x8022a290: // orphan
         unsigned , hi
         a2 = s7                  // t9
         t0 = lo
         a1 = s2 + t0             // arg2
         call 0x8007dfb0          // 0x8007dfb0(-1, 0xfffffffffffffefb, -1, -1)
         a1 += 0x8d0
         s0 += 1

    loc_0x8022a2ac: // orphan
         if                       // likely
         s1 += 1

    loc_0x8022a2b4: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9

    loc_0x8022a2c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226510
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         // CODE XREF from fcn.8023e3c0 @ 0x80226514
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x40

    loc_0x8022a33c: // orphan
         t9 = [s5 + 0]
         unsigned , hi
         v0 = halfword [t9 + 0x88]
         at = , s2 < v0           // lo
         t8 = lo
         s1 = s7 + t8             // t9
         if                       // likely
         s1 += 4

    loc_0x8022a35c: // orphan
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x8022a39c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80226518, 0x80226558
         s0 += t1
         if                       // likely
         

    loc_0x8022a3a8: // orphan
         break 7

    loc_0x8022a3ac: // orphan
         s0 = [s0 + 0x5390]       // t9

    loc_0x8022a3b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022651c
         goto 0x8022a434
         a0 = , unsigned  byte [s1 + 3]

    loc_0x8022a3f4: // orphan
         if                       // unlikely
         

    loc_0x8022a434: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022a3b0
         a1 = s0
         call 0x8004c874          // 0x8004c874(-1, 0x104, 0x8, -1)
         a0 += 0x4c
         if                       // unlikely
         a2 = v0                  // s4

    loc_0x8022a448: // orphan
         t6 = s2 << 2

    loc_0x8022a44c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226528
         halfword [s4 + 0x38] = s0
         s1 = s5 + t6
         a0 = sp + 0x64
         call 0x80049c70          // 0x80049c70(0x178064, 0x442f71dcfe116408, 0x8, -1)
         a1 = sp + 0x60
         t7 = [sp + 0x64]         // t9
         halfword [s1 + 0x58] = t7
         t8 = [sp + 0x60]
         halfword [s1 + 0x5a] = t8

    loc_0x8022a470: // orphan
         t9 = halfword [s5 + 0x14]
         s2 += 1
         s4 += 2
         at = , s2 < t9           // lo
         bnel at, 0, 0x8022a33c   // likely
         t7 = halfword [s4 + 0x18]

    loc_0x8022a488: // orphan
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         // CODE XREF from fcn.8023e3c0 @ 0x8022652c
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9

    loc_0x8022a4a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226530
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x78

    loc_0x8022a4c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226534
         v0 = 0
         a1 = a3 + a2             // arg4

    loc_0x8022a4d0: // orphan
         t6 = byte [a0 + 4]       // arg1
         a0 += 1                  // arg1
         at = , unsigned  , a0 < a1 // lo
         // CODE XREF from fcn.8023e3c0 @ 0x80226538
         if                       // likely
         v0 += t6

    loc_0x8022a4e4: // orphan
         if                       // unlikely
         a0 = 0

    loc_0x8022a4ec: // orphan
         t0 = v0 & 3

    loc_0x8022a4f0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022653c
         if                       // unlikely
         a3 = t0

    loc_0x8022a510: // orphan
         t8 = , unsigned  halfword [a1 + 0x2e]
         a0 += 1                  // arg1
         if                       // likely
         

    loc_0x8022a524: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226540
         if                       // likely
         a1 += 0x58               // arg2

    loc_0x8022a52c: // orphan
         if                       // unlikely
         t9 = a0 << 2             // arg1

    loc_0x8022a564: // orphan
         bnel t2, 0, 0x8022a574   // likely
         t3 = , unsigned  halfword [a1 + 0x86]

    loc_0x8022a56c: // orphan
         v1 = 0

    loc_0x8022a570: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022654c
         t3 = , unsigned  halfword [a1 + 0x86]

    loc_0x8022a574: // orphan
         bnel t3, 0, 0x8022a584   // likely
         t4 = , unsigned  halfword [a1 + 0xde]

    loc_0x8022a57c: // orphan
         v1 = 0
         t4 = , unsigned  halfword [a1 + 0xde]

    loc_0x8022a584: // orphan
         bnel t4, 0, 0x8022a594   // likely
         t5 = , unsigned  halfword [a1 + 0x136]

    loc_0x8022a58c: // orphan
         v1 = 0
         // CODE XREF from fcn.8023e3c0 @ 0x8022655c
         t5 = , unsigned  halfword [a1 + 0x136]

    loc_0x8022a594: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x80226550
         a1 += 0x160              // arg2
         if                       // likely
         

    loc_0x8022a5a0: // orphan
         v1 = 0

    loc_0x8022a5a4: // orphan
         bnel a1, a3, 0x8022a564  // likely
         // CODE XREF from fcn.8023e660 @ 0x80226554
         t2 = , unsigned  halfword [a1 + 0x2e]

    loc_0x8022a5ac: // orphan
         ret                      // ra
         v0 = v1

    loc_0x8022a73c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226578
         t7 = s7 + t6
         t8 = halfword [t7 + 0x1c]
         halfword [s7 + 0x18] = t8
         t9 = halfword [v0 + 0xc]
         t2 = t9 << 1
         // CODE XREF from fcn.8023e3c0 @ 0x8022657c
         t3 = s7 + t2
         t4 = halfword [t3 + 0x3c]
         halfword [s7 + 0x38] = t4
         t5 = halfword [v0 + 0xc]
         t6 = t5 << 2

    loc_0x8022a764: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226580
         t7 = s7 + t6
         lwl t9, 0x60, t7
         lwr t9, 0x63, t7
         swl t9, 0x58, s7
         swr t9, 0x5b, s7

    loc_0x8022a778: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226584
         halfword [fp + 0x88] = 0

    loc_0x8022a77c: // orphan
         // CODE XREFS from fcn.8023e3c0 @ 0x8022a6c0, 0x8022a720
         t2 = halfword [s7 + 0x14]

    loc_0x8022a780: // orphan
         a0 = , unsigned  byte [fp + 7] // s4
         halfword [fp + 0x8a] = t2
         // CODE XREF from fcn.8021d4ec @ 0x8021d6d4
         call 0x826058cc          // 0x826058cc(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x40] = v1
         if                       // unlikely
         at = , v0 < 2

    loc_0x8022a798: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021d4ec @ 0x8021d6d8
         t3 = v0 << 1

    loc_0x8022a7a0: // orphan
         v1 = fp + t3
         a0 = halfword [v1 + 0x900]
         at = , a0 < 0x63         // lo
         if                       // unlikely
         t4 = a0 + 1              // lo

    loc_0x8022a7b4: // orphan
         halfword [v1 + 0x900] = t4

    loc_0x8022a7b8: // orphan
         t5 = halfword [s7 + 0x14]
         s6 = 0
         if                       // unlikely
         s0 = s7                  // t9

    loc_0x8022a7c8: // orphan
         s1 = 0 + 0x98
         // CODE XREF from fcn.8023e3c0 @ 0x80226588
         t6 = halfword [s0 + 0x18]

    loc_0x8022a7d0: // orphan
         unsigned , hi
         t7 = lo
         v0 = s2 + t7
         a0 = , unsigned  byte [v0 + 7] // s4

    loc_0x8022a7e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022658c
         v0 += 4
         call 0x8004c4b0          // 0x8004c4b0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x4c
         t8 = halfword [s7 + 0x14]
         s6 += 1
         // CODE XREF from fcn.8021d4ec @ 0x8021d6e0
         s0 += 2
         at = , s6 < t8
         bnel at, 0, 0x8022a7d0   // unlikely
         t6 = halfword [s0 + 0x18]

    loc_0x8022a804: // orphan
         s6 = 0

    loc_0x8022a808: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d6e4
         t9 = [s7 + 0]
         v0 = , unsigned  halfword [t9 + 8]
         v0 &= 0xff00
         if                       // unlikely
         at = 0 + 0x400

    loc_0x8022a81c: // orphan
         if                       // unlikely
         at = 0 + 0x500

    loc_0x8022a824: // orphan
         if                       // likely
         a0 = s7                  // t9

    loc_0x8022a82c: // orphan
         call 0x82602b9c          // 0x82602b9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         goto 0x8022a874
         v0 = [s7 + 0xc]

    loc_0x8022a83c: // orphan
         call 0x82601bb0          // 0x82601bb0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s7                  // t9
         goto 0x8022a874
         v0 = [s7 + 0xc]

    loc_0x8022a84c: // orphan
         call 0x82602cf4          // 0x82602cf4(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021d4ec @ 0x8021d6ec
         a0 = s7                  // t9
         goto 0x8022a874
         // CODE XREF from fcn.8023e660 @ 0x80226594
         v0 = [s7 + 0xc]

    loc_0x8022a85c: // orphan
         v0 = [s7 + 0xc]
         if                       // likely
         // CODE XREF from fcn.8021d4ec @ 0x8021d6f0
         

    loc_0x8022a868: // orphan
         call fcn.82602ac0        // fcn.82602ac0(-1, 0x442f71dcfe116408)
         a0 = s7                  // t9
         // CODE XREF from fcn.80225940 @ +0xc5c
         v0 = [s7 + 0xc]

    loc_0x8022a874: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022a834, 0x8022a844, 0x8022a854
         if                       // unlikely
         

    loc_0x8022a87c: // orphan
         call fcn.82602e14
         a0 = s7                  // t9

    loc_0x8022a884: // orphan
         call 0x80041e2c          // 0x80041e2c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021d4ec @ +0x208
         
         t2 = byte [fp + 6]
         s5 = 0 + 0x420
         // CODE XREF from fcn.8023e660 @ 0x802265a0
         s1 = 0 + 0x210
         if                       // likely
         // CODE XREF from fcn.8021d4ec @ 0x8021d6f8
         // CODE XREF from fcn.8023e660 @ 0x80226598
         s0 = 0 + 0x58

    loc_0x8022a89c: // orphan
         call 0x80041e2c          // 0x80041e2c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021d4ec @ +0x208
         
         t2 = byte [fp + 6]
         s5 = 0 + 0x420
         // CODE XREF from fcn.8023e660 @ 0x802265a0
         s1 = 0 + 0x210
         if                       // likely
         // CODE XREF from fcn.8021d4ec @ 0x8021d6f8
         // CODE XREF from fcn.8023e660 @ 0x80226598
         s0 = 0 + 0x58

    loc_0x8022a8a0: // orphan
         goto 0x8022a8ac
         s4 = 0 + 2

    loc_0x8022a8a8: // orphan
         s4 = 0 + 1               // lo

    loc_0x8022a8ac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022a8a0
         v1 = 0

    loc_0x8022a8b0: // orphan
         if                       // unlikely
         t1 = 0

    loc_0x8022a8b8: // orphan
         unsigned , hi
         t3 = s6 << 5
         t3 += s6
         t3 <<= 2
         t3 += s6
         t3 <<= 3
         a2 = s7 + t3             // arg3
         a2 += 0xb0               // arg3
         a0 = a2
         t4 = lo
         t5 = t4 << 5
         // CODE XREF from fcn.8021d4ec @ 0x8021d700
         t5 += t4
         t5 <<= 4
         a3 = fp + t5             // arg4

    loc_0x8022a8f0: // orphan
         byte [a0 + 4] = 0        // arg1
         a1 = 0

    loc_0x8022a8f8: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d704
         v0 = a3                  // s2

    loc_0x8022a8fc: // orphan
         t6 = , unsigned  byte [v0 + 0x90] // s4
         a1 += 0xb0               // arg2
         beql t6, 0, 0x8022a964   // unlikely
         t7 = , unsigned  byte [v0 + 0xe8] // s4

    loc_0x8022a90c: // orphan
         unsigned , hi
         t7 = byte [a0 + 4]       // arg1
         t5 = v0                  // s4
         t6 = v0 + 0x54
         t8 = t7 + 1              // lo
         byte [a0 + 4] = t8       // arg1
         t9 = lo
         t2 = a2 + t9             // arg3
         

    loc_0x8022a930: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d70c
         t4 = [t5 + 0x90]         // t9
         t5 += 0xc                // t1
         t2 += 0xc
         [t2 - 4] = t4
         t3 = [t5 + 0x88]         // t9
         [t2 + 0] = t3
         t4 = [t5 + 0x8c]         // t9
         if                       // likely
         [t2 + 4] = t4

    loc_0x8022a954: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d710
         t4 = [t5 + 0x90]         // t9
         v1 += 1
         [t2 + 8] = t4
         t7 = , unsigned  byte [v0 + 0xe8] // s4

    loc_0x8022a964: // orphan
         if                       // likely
         // CODE XREF from fcn.8021d4ec @ +0x228
         

    loc_0x8022a96c: // orphan
         unsigned , hi
         t8 = byte [a0 + 4]       // arg1 // lo
         t4 = v0                  // s4
         t7 = v0 + 0x54
         t9 = t8 + 1
         byte [a0 + 4] = t9       // arg1

    loc_0x8022a990: // orphan
         t3 = [t4 + 0xe8]         // t9
         t4 += 0xc                // t1

    loc_0x8022a998: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802265a4
         t5 += 0xc                // t1
         [t5 - 4] = t3
         t2 = [t4 + 0xe0]         // t9
         [t5 + 0] = t2
         t3 = [t4 + 0xe4]         // t9
         if                       // likely
         [t5 + 4] = t3

    loc_0x8022a9b4: // orphan
         t3 = [t4 + 0xe8]         // t9
         v1 += 1
         [t5 + 8] = t3

    loc_0x8022a9c0: // orphan
         if                       // likely
         v0 += 0xb0

    loc_0x8022a9c8: // orphan
         t1 += 1
         a0 += 1                  // arg1
         if                       // likely
         a3 += 0x210              // arg4

    loc_0x8022a9d8: // orphan
         at = , v1 < 0xc
         if                       // likely
         s2 = v1 << 2

    loc_0x8022a9e4: // orphan
         t8 = s6 << 5
         t8 += s6
         t8 <<= 2
         s2 -= v1
         s2 <<= 2
         t8 += s6
         t8 <<= 3
         s2 -= v1
         s2 <<= 3
         t9 = s7 + t8
         s3 = t9 + s2
         s3 += 0xb8

    loc_0x8022aa14: // orphan
         a0 = s3                  // t9
         call 0x80075630          // "&R" // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         s2 += 0x58
         if                       // likely
         s3 += 0x58

    loc_0x8022aa2c: // orphan
         s6 += 1
         // CODE XREF from fcn.8021d4ec @ 0x8021d71c
         at = , s6 < 2
         bnel at, 0, 0x8022a8b0   // unlikely
         v1 = 0

    loc_0x8022aa3c: // orphan
         halfword [s7 + 0x12] = 0
         a3 = 0

    loc_0x8022aa44: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d720
         a2 = s7 + 0xb0           // arg3
         t1 = 0 + 1               // lo
         t0 = 0 + 0x850

    loc_0x8022aa50: // orphan
         a1 = 0 + 2               // arg2

    loc_0x8022aa54: // orphan
         a0 = 0
         v0 = 0
         v1 = a2

    loc_0x8022aa60: // orphan
         t6 = byte [v1 + 4]       // s4
         v0 += 1
         v1 += 1
         if                       // likely
         a0 += t6                 // arg1

    loc_0x8022aa74: // orphan
         at = , a0 < 4            // arg1
         if                       // unlikely
         a3 += 0x428              // arg4

    loc_0x8022aa80: // orphan
         halfword [s7 + 0x12] = t1

    loc_0x8022aa84: // orphan
         if                       // likely
         a2 += 0x428              // arg3

    loc_0x8022aa8c: // orphan
         t7 = halfword [s7 + 0x12]
         a1 = 0 + 6               // arg2
         a3 = 0 + 0x90            // arg4
         if                       // unlikely
         a0 = [sp + 0x9c]

    loc_0x8022aaa0: // orphan
         a1 = 0 + 0xc             // arg2
         goto 0x8022aaac
         a3 = 0 + 0x4e            // arg4

    loc_0x8022aaac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022aaa4
         call 0x800437b4          // 0x800437b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 0x76
         [s7 + 4] = v0
         t4 = , unsigned  halfword [v0 + 0]
         a0 = 0
         t5 = t4 | 4
         call 0x8004ba70          // 0x8004ba70(0x0, 0x442f71dcfe116408, 0x76, -1)
         halfword [v0 + 0] = t5
         [s7 + 8] = v0
         halfword [s7 + 0x10] = 0
         t2 = [sp + 0x40]         // v1
         bnel t2, 0, 0x8022ab1c   // likely
         a0 = s7                  // t9

    loc_0x8022aae0: // orphan
         call 0x826058cc          // "T@" // 0x826058cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [fp + 7] // s4
         bnel v0, 0, 0x8022ab1c   // likely
         a0 = s7                  // t9

    loc_0x8022aaf0: // orphan
         call fcn.82602fe8        // fcn.82602fe8(-1)
         a0 = s7 + 0xb0
         if                       // unlikely
         t3 = 0 + 1               // lo

    loc_0x8022ab00: // orphan
         halfword [s7 + 0x10] = t3
         v0 = halfword [fp + 0x8c]
         at = , v0 < 0x63         // lo
         if                       // unlikely
         t8 = v0 + 1              // lo

    loc_0x8022ab14: // orphan
         halfword [fp + 0x8c] = t8

    loc_0x8022ab18: // orphan
         a0 = s7                  // t9

    loc_0x8022ab1c: // orphan
         call 0x82610c84          // 0x82610c84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]         // t9
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0xa0

    loc_0x8022ab68: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d734
         call 0x80043e70          // 0x80043e70(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t6 + 4]            // t9
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x8261 << 16
         call 0x82602710          // 0x82602710(0x82610000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x5370]
         call 0x826042a0          // 0x826042a0(0xa7e77f8d, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8022ab8c: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d738
         call fcn.82614bd0
         
         call 0x80008648          // 0x80008648(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]         // t9
         sp += 0x18
         ret                      // t9
         

    loc_0x8022acac: // orphan
         call 0x8006cba0          // 0x8006cba0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [a2 + 0x8a]
         if                       // unlikely
         // CODE XREF from fcn.8021d4ec @ 0x8021d774
         a0 = 0x8261 << 16

    loc_0x8022acbc: // orphan
         a0 += 0x63c0

    loc_0x8022acc0: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d75c
         // CODE XREF from fcn.8021d4ec @ +0x280
         t6 = 0 + 1               // lo
         byte [a0 + 0xa] = t6
         a1 = 0x8261 << 16
         call 0x80055f6c          // 0x80055f6c(-1, 0x82610000, 0x8, -1)
         a1 = [a1 + 0x5374]

    loc_0x8022acd4: // orphan
         // CODE XREF from fcn.8021d4ec @ +0x274
         ra = [sp + 0x14]         // t9
         sp += 0x18
         ret                      // t9
         

    loc_0x8022ade0: // orphan
         if                       // unlikely
         

    loc_0x8022ade8: // orphan
         call 0x800355e4          // 0x800355e4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x4e
         goto 0x8022ae60
         ra = [sp + 0x14]         // t9

    loc_0x8022adf8: // orphan
         call 0x800355e4          // 0x800355e4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x27
         goto 0x8022ae60
         ra = [sp + 0x14]         // t9

    loc_0x8022ae4c: // orphan
         at = 0 + 1               // lo
         if                       // likely
         t3 = 0 + 4

    loc_0x8022ae58: // orphan
         [sp + 0x18] = t3

    loc_0x8022ae5c: // orphan
         ra = [sp + 0x14]         // t9

    loc_0x8022ae60: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022adf0, 0x8022ae00
         v0 = [sp + 0x18]         // t3
         sp += 0x20
         ret                      // ra
         

    loc_0x8022aea8: // orphan
         s1 = 0 + 4
         call 0x800086a4          // 0x800086a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         // CODE XREF from fcn.81a102b8 @ +0x70c
         call 0x80007aec          // 0x80007aec(0x2, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 5
         s1 = 0 + 4

    loc_0x8022aec0: // orphan
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.82604170
         
         call fcn.82613814
         
         call fcn.82603684
         
         call fcn.82603870
         a0 = s0
         if                       // likely
         s0 = v0                  // s4

    loc_0x8022aef0: // orphan
         call 0x800086a4          // 0x800086a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         t9 = [sp + 0x28]         // s4
         call 0x826058cc          // "T@" // 0x826058cc(0x2, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t9 + 7] // s4
         bnel v0, 0, 0x8022af48   // likely
         ra = [sp + 0x1c]

    loc_0x8022af0c: // orphan
         v0 = , unsigned  halfword [sp + 0x26]
         at = 0 + 0x300
         if                       // unlikely
         at = 0 + 0x600

    loc_0x8022af1c: // orphan
         if                       // unlikely
         

    loc_0x8022af24: // orphan
         goto 0x8022af48
         ra = [sp + 0x1c]

    loc_0x8022af2c: // orphan
         call fcn.826036dc        // fcn.826036dc(-1, 0x442f71dcfe116408)
         a0 = [sp + 0x28]         // s4
         goto 0x8022af48
         ra = [sp + 0x1c]

    loc_0x8022af3c: // orphan
         call 0x826037bc          // 0x826037bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x28]         // s4
         ra = [sp + 0x1c]

    loc_0x8022af44: // orphan
         ra = [sp + 0x1c]

    loc_0x8022af48: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022af24, 0x8022af34
         s0 = [sp + 0x14]         // t9
         s1 = [sp + 0x18]         // t3
         ret                      // ra
         sp += 0x30

    loc_0x8022af80: // orphan
         t6 = halfword [a2 + 0]
         v0 += 1
         if                       // likely
         

    loc_0x8022af90: // orphan
         ret                      // ra
         v0 = a2

    loc_0x8022af98: // orphan
         if                       // likely
         a2 += 0x814

    loc_0x8022afa0: // orphan
         ret                      // ra
         v0 = v1

    loc_0x8022affc: // orphan
         if                       // unlikely
         t7 = v0 << 3

    loc_0x8022b004: // orphan
         t8 = a0 + t7             // t9
         t2 = [t8 + 0x14]         // t9
         t6 = sp + 0x14
         v1 = 0
         [t6 + 0] = t2
         t9 = [t8 + 0x18]
         v0 = a1 & 1
         if                       // unlikely
         [t6 + 4] = t9

    loc_0x8022b028: // orphan
         if                       // unlikely
         t4 = 0 + 1               // lo

    loc_0x8022b030: // orphan
         lwc1 f6, 0xc, a0
         lwc1 f8, 8, a0
         mtc1 t4, f4
         v0 = halfword [a0 + 0]
         mul.s f10, f6, f8
         lwc1 f18, 0x14, sp
         v0 += 1
         if                       // likely
         v0 &= 0xff

    loc_0x8022b054: // orphan
         if                       // unlikely
         

    loc_0x8022b05c: // orphan
         v0 -= 0x100              // s2

    loc_0x8022b060: // orphan
         cvt.s.w f0, f4
         t3 = v0 << 3
         a2 = a0 + t3
         v1 = 0 + 1               // lo
         mul.s f16, f10, f0
         add.s f4, f16, f18
         swc1 f4, 0x14, a2
         lwc1 f8, 8, a0
         lwc1 f6, 0x10, a0
         lwc1 f18, 0x18, sp
         mul.s f10, f6, f8
         
         mul.s f16, f10, f0
         add.s f4, f16, f18
         swc1 f4, 0x18, a2
         a3 = halfword [a0 + 4]
         at = , a3 < 0x100        // lo
         if                       // unlikely
         t5 = a3 + 1              // lo

    loc_0x8022b0ac: // orphan
         halfword [a0 + 4] = t5

    loc_0x8022b0b0: // orphan
         beql v1, a1, 0x8022b1cc  // unlikely
         t5 = halfword [a0 + 0]

    loc_0x8022b0b8: // orphan
         lwc1 f8, 0xc, a0         // arg1
         lwc1 f10, 8, a0          // arg1
         t8 = v1 + 1
         mtc1 t8, f6
         // CODE XREF from fcn.8021d4ec @ 0x8021d7a4
         mul.s f16, f8, f10
         t7 = halfword [a0 + 0]
         lwc1 f4, 0x14, sp
         v0 = t7 + v1
         v0 += 1

    loc_0x8022b0dc: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d7a8
         cvt.s.w f0, f6
         if                       // likely
         v0 &= 0xff               // s4

    loc_0x8022b0e8: // orphan
         if                       // unlikely
         

    loc_0x8022b0f0: // orphan
         v0 -= 0x100              // s2

    loc_0x8022b0f4: // orphan
         mul.s f18, f16, f0
         t6 = v0 << 3
         a2 = a0 + t6             // arg3
         add.s f6, f18, f4
         swc1 f6, 0x14, a2        // arg3
         lwc1 f10, 8, a0          // arg1
         lwc1 f8, 0x10, a0        // arg1
         lwc1 f4, 0x18, sp
         mul.s f16, f8, f10
         
         mul.s f18, f16, f0
         add.s f6, f18, f4
         swc1 f6, 0x18, a2        // arg3
         a3 = halfword [a0 + 4]
         at = , a3 < 0x100        // arg4
         if                       // likely
         t9 = a3 + 1              // arg4

    loc_0x8022b138: // orphan
         halfword [a0 + 4] = t9   // arg1

    loc_0x8022b13c: // orphan
         lwc1 f10, 0xc, a0        // arg1
         lwc1 f16, 8, a0          // arg1
         t0 = v1 + 2
         mtc1 t0, f8
         mul.s f18, f10, f16
         t2 = halfword [a0 + 0]
         lwc1 f6, 0x14, sp
         v0 = t2 + v1
         v0 += 2
         cvt.s.w f0, f8
         if                       // likely
         // CODE XREF from fcn.8021d4ec @ 0x8021d7b4
         v0 &= 0xff

    loc_0x8022b16c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802265c8
         if                       // unlikely
         

    loc_0x8022b174: // orphan
         v0 -= 0x100              // s2

    loc_0x8022b178: // orphan
         mul.s f4, f18, f0

    loc_0x8022b17c: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d7b8
         t3 = v0 << 3
         a2 = a0 + t3             // arg3
         add.s f8, f4, f6
         swc1 f8, 0x14, a2        // arg3
         lwc1 f16, 8, a0          // arg1
         lwc1 f10, 0x10, a0       // arg1
         lwc1 f6, 0x18, sp
         mul.s f18, f10, f16
         // CODE XREF from fcn.8023e660 @ 0x802265d8
         
         mul.s f4, f18, f0
         add.s f8, f4, f6
         swc1 f8, 0x18, a2        // arg3
         a3 = halfword [a0 + 4]
         at = , a3 < 0x100        // arg4
         if                       // likely
         t4 = a3 + 1              // arg4

    loc_0x8022b1bc: // orphan
         halfword [a0 + 4] = t4   // arg1

    loc_0x8022b1c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802265dc
         if                       // unlikely
         v1 = t0

    loc_0x8022b1c8: // orphan
         t5 = halfword [a0 + 0]

    loc_0x8022b1cc: // orphan
         at = 0xc420 << 16

    loc_0x8022b1d0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802265cc
         mtc1 at, f10
         t7 = t5 + a1             // arg2
         if                       // likely
         t6 = t7 & 0xff

    loc_0x8022b1e0: // orphan
         if                       // unlikely
         

    loc_0x8022b1e8: // orphan
         t6 -= 0x100

    loc_0x8022b1ec: // orphan
         halfword [a0 + 0] = t6   // arg1
         t8 = halfword [a0 + 0]
         at = 0x44a0 << 16
         t9 = t8 << 3
         t2 = a0 + t9             // arg1
         lwc1 f0, 0x14, t2
         c.lt.s f0, f10
         
         bc1fl 0x8022b220
         mtc1 at, f16
         goto 0x8022b238
         halfword [a0 + 0] = t1   // arg1

    loc_0x8022b238: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022b214
         ret                      // ra
         sp += 0x20

    loc_0x8022b294: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dde0
         s3 = a0                  // t9
         beql a3, at, 0x8022b564  // unlikely
         ra = [sp + 0x84]

    loc_0x8022b2a0: // orphan
         v1 = halfword [a0 + 4]
         // CODE XREF from fcn.8021d4ec @ 0x8021d7e0
         at = 0x3f80 << 16
         fp = 0 | 0xffff
         v0 = a3 - v1             // arg4
         v0 += 1
         if                       // unlikely
         // CODE XREF from fcn.8021d4ec @ 0x8021d7e4
         s7 = 0xfa00 << 16

    loc_0x8022b2bc: // orphan
         v0 += 0x100

    loc_0x8022b2c0: // orphan
         // CODE XREF from fcn.8021d4ec @ +0x2f0
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x802265f0
         s1 = 0

    loc_0x8022b2c8: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d7d4
         mtc1 at, f30
         at = 0x437f << 16

    loc_0x8022b2d0: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d7cc
         mtc1 at, f28
         at = 0x4480 << 16
         mtc1 at, f26
         at = 0xbf00 << 16
         mtc1 at, f24
         at = 0x3f00 << 16
         s0 = 0x800d << 16
         mtc1 at, f20
         mtc1 0, f22
         s0 += 0x510
         s2 = v0                  // s4
         s6 = 0 - 0x100
         s5 = 0xfb00 << 16
         s4 = 0 + 0xff

    loc_0x8022b308: // orphan
         t6 = halfword [s3 + 0]
         if                       // unlikely
         a0 = s2 & 0xff           // arg1 // s4

    loc_0x8022b314: // orphan
         if                       // unlikely
         

    loc_0x8022b320: // orphan
         mtc1 v1, f4
         v0 = t6 - a0             // arg1
         v0 += 1
         if                       // unlikely
         cvt.s.w f16, f4

    loc_0x8022b3ec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802265e8
         mov.s f0, f24
         add.s f10, f0, f12
         v0 = s3 + t9
         v0 += 0x14
         lwc1 f2
         trunc.w.s f4, f10
         a2 = t3 << 0x10          // arg3
         a2 = , signed  a2 >> 0x10 // arg3 // t3
         c.lt.s f22, f2
         mfc1 t1, f4
         bc1f 0x8022b424
         a3 = t1 << 0x10          // arg4
         goto 0x8022b428
         mov.s f0, f20

    loc_0x8022b428: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022b41c
         add.s f6, f0, f2
         lwc1 f12, 4, v0
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         trunc.w.s f8, f6
         c.lt.s f22, f12
         mfc1 t7, f8
         if                       // likely
         t8 = , signed  t3 >> 1

    loc_0x8022b448: // orphan
         at = t3 + 1              // s4
         t8 = , signed  at >> 1

    loc_0x8022b450: // orphan
         bc1f 0x8022b460
         ra = t7 - t8
         goto 0x8022b464
         mov.s f0, f20

    loc_0x8022b464: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022b458
         mtc1 t3, f6
         add.s f10, f0, f12
         a0 = ra << 0x10          // arg1
         a0 = , signed  a0 >> 0x10 // arg1
         cvt.s.w f8, f6
         trunc.w.s f4, f10
         div.s f10, f8, f16
         mfc1 t6, f4
         if                       // likely
         t7 = , signed  t1 >> 1

    loc_0x8022b48c: // orphan
         at = t1 + 1
         t7 = , signed  at >> 1

    loc_0x8022b494: // orphan
         t4 = t6 - t7
         t6 = t5 & 0xff           // s4
         t7 = t6 | s6
         div.s f2, f26, f10
         c.lt.s f22, f2
         
         bc1fl 0x8022b4c0
         mov.s f0, f24
         goto 0x8022b4c0
         mov.s f0, f20

    loc_0x8022b4c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022b4b4
         mtc1 t1, f8
         add.s f4, f0, f2
         cvt.s.w f10, f8
         trunc.w.s f6, f4
         div.s f4, f10, f18
         mfc1 t2, f6
         div.s f12, f26, f4
         c.lt.s f22, f12
         
         bc1fl 0x8022b4f8
         mov.s f0, f24
         goto 0x8022b4f8
         mov.s f0, f20

    loc_0x8022b4f8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x802265f4, 0x8022b4ec
         v0 = [s0 + 0]            // t9
         add.s f6, f0, f12
         a1 = t4 << 0x10          // arg2
         t9 = v0 + 8
         [s0 + 0] = t9
         [v0 + 4] = t7
         [v0 + 0] = s5
         v0 = [s0 + 0]
         trunc.w.s f8, f6
         a1 = , signed  a1 >> 0x10 // arg2 // t9
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = fp
         [v0 + 0] = s7
         mfc1 t6, f8
         [sp + 0x20] = 0
         [sp + 0x18] = t2
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(-1, -1, 0x8, -1)
         [sp + 0x1c] = t6
         v1 = halfword [s3 + 4]
         s1 += 1
         at = , s1 < v1
         if                       // unlikely
         s2 += 1

    loc_0x8022b560: // orphan
         ra = [sp + 0x84]

    loc_0x8022b564: // orphan
         ldc1 f20, 0x30, sp
         ldc1 f22, 0x38, sp
         ldc1 f24, 0x40, sp
         ldc1 f26, 0x48, sp
         ldc1 f28, 0x50, sp
         ldc1 f30, 0x58, sp
         s0 = [sp + 0x60]
         s1 = [sp + 0x64]         // t9
         s2 = [sp + 0x68]
         s3 = [sp + 0x6c]
         s4 = [sp + 0x70]
         s5 = [sp + 0x74]
         s6 = [sp + 0x78]
         s7 = [sp + 0x7c]         // lo
         fp = [sp + 0x80]
         ret                      // ra
         sp += 0x88

    loc_0x8022b714: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226600
         call fcn.82603ad8
         swc1 f8, 0x34, sp

    loc_0x8022b71c: // orphan
         s0 = 0x8261 << 16
         s1 = 0x8262 << 16
         s1 -= 0x5b78
         s0 += 0x63e8
         a0 = s0

    loc_0x8022b730: // orphan
         call 0x82603b20          // 0x82603b20(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s2 + 2]
         s0 += 0x814
         bnel s0, s1, 0x8022b730  // likely
         a0 = s0

    loc_0x8022b744: // orphan
         v1 = 0x8261 << 16
         v1 = , unsigned  halfword [v1 + 0x63e0]
         v1 &= 1                  // lo
         v1 = , unsigned  , 0 < v1 // lo

    loc_0x8022b754: // orphan
         ra = [sp + 0x24]         // t9
         s0 = [sp + 0x18]         // s4
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         sp += 0x48
         ret                      // t9
         v0 = v1

    loc_0x8022b8c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022660c
         ret                      // ra
         

    loc_0x8022bc5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226628
         a1 = halfword [sp + 0x18]
         call 0x8004c990          // 0x8004c990(-1, 0x0, 0x8, -1)
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]
         t0 = [sp + 0x20]
         t1 = v1 << 2
         t2 = t0 + t1
         [t2 + 0] = v0
         v1 += 1
         ra = [sp + 0x14]
         sp += 0x20

    loc_0x8022bc88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226634
         v0 = v1
         ret                      // ra
         

    loc_0x8022be24: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226640
         [v1 + 0] = v0
         t9 = [sp + 0x38]         // fp
         v1 += 4
         t0 += 1
         t1 = t9 << 1
         a1 += t1                 // arg2
         a1 = halfword [a1 + 0x5532]
         [sp + 0x2c] = t0
         call 0x8004c990          // 0x8004c990(-1, 0xffff, 0x8, -1)
         [sp + 0x24] = v1
         v1 = [sp + 0x24]
         t0 = [sp + 0x2c]
         [v1 + 0] = v0
         t0 += 1
         ra = [sp + 0x1c]         // v1
         s0 = [sp + 0x18]         // s4
         sp += 0x30
         // CODE XREF from fcn.80225940 @ +0xd04
         ret                      // v1
         v0 = t0

    loc_0x8022bf50: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022664c
         at = 0 + 0xb
         s0 = a0                  // t9
         [sp + 0x1c] = ra
         if                       // unlikely
         v1 = 0

    loc_0x8022cfd4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023de40
         [sp + 0x24] = a2
         call 0x826058cc          // 0x826058cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x48]
         a2 = [sp + 0x24]
         t0 = [sp + 0x54]
         t2 = [sp + 0x50]
         t3 = [sp + 0x40]         // v1
         halfword [a2 + 0xc] = v0
         halfword [a2 + 0xe] = 0
         halfword [a2 + 0x10] = 0
         halfword [a2 + 0x12] = 0
         halfword [a2 + 0x14] = 0
         t5 = halfword [s0 + 2]
         t6 = [sp + 0x58]
         a1 = 0 + 0x1e0
         if                       // likely
         a0 = a2 + 0x20

    loc_0x8022d018: // orphan
         t7 = , unsigned  halfword [t6 + 4]
         t9 = 0 + 1               // lo
         t8 = t7 & 2
         beql t8, 0, 0x8022d038   // unlikely
         halfword [a2 + 0x16] = 0

    loc_0x8022d02c: // orphan
         goto 0x8022d038
         halfword [a2 + 0x16] = t9

    loc_0x8022d034: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022d010
         halfword [a2 + 0x16] = 0

    loc_0x8022d038: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022d024, 0x8022d02c
         halfword [a2 + 0x18] = 0
         halfword [a2 + 0x1a] = 0
         halfword [a2 + 0x1c] = 0
         halfword [a2 + 0x1e] = 0
         [sp + 0x40] = t3
         [sp + 0x50] = t2
         [sp + 0x54] = t0
         call 0x80075630          // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = a2
         t5 = [sp + 0x38]         // fp
         a2 = [sp + 0x24]
         a3 = 0 - 1               // s2
         t6 = byte [t5 + 0]       // s4
         t0 = [sp + 0x54]
         t2 = [sp + 0x50]         // s4
         if                       // likely
         t3 = [sp + 0x40]

    loc_0x8022d07c: // orphan
         // CODE XREF from fcn.80226660 @ +0xc8
         t7 = [sp + 0x58]
         t8 = , unsigned  halfword [t7 + 4]
         t9 = t8 & 0x400
         if                       // likely
         

    loc_0x8022d090: // orphan
         t5 = halfword [s0 + 2]
         a0 = 0 + 0x48
         a1 = 0 + 0x29
         t6 = t2 + t5
         t7 = byte [t6 + 0]       // s4
         if                       // unlikely
         

    loc_0x8022d13c: // orphan
         // CODE XREF from fcn.80226660 @ 0x80226738
         // CODE XREF from fcn.8023e660 @ 0x8022d088
         goto 0x8022d168
         // CODE XREF from fcn.8021d4ec @ +0x4d0
         [a2 + 0x200] = 0

    loc_0x8022d144: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022d074
         t8 = halfword [s0 + 2]
         t9 = t8 << 2
         t9 -= t8
         t9 <<= 2
         // CODE XREF from fcn.8021d4ec @ +0x4d4
         t9 -= t8
         t9 <<= 1
         t5 = t2 + t9
         t6 = t5 + 0x1c
         // CODE XREF from fcn.80226660 @ +0xe0
         [a2 + 0x200] = t6

    loc_0x8022d168: // orphan
         // CODE XREFS from fcn.80226660 @ 0x9ac, 0x8022d108, 0x8022d134
         // CODE XREF from fcn.8023e660 @ 0x8022d13c
         t7 = halfword [s0 + 2]
         a1 = halfword [a2 + 6]   // s4
         a0 = 0
         t8 = t7 << 2
         // CODE XREF from fcn.8021d4ec @ +0x4d8
         t8 -= t7
         t8 <<= 2
         t9 = t2 + t8
         t5 = t9 + 0x8d0
         if                       // unlikely
         [a2 + 0x204] = t5

    loc_0x8022d190: // orphan
         v0 = a2
         v1 = 0 + 0xff            // s4
         halfword [v0 + 0x208] = v1
         // CODE XREF from fcn.8023e660 @ 0x8022d1b4
         halfword [v0 + 0x214] = a3
         halfword [v0 + 0x22c] = 0
         a1 = halfword [a2 + 6]   // s4
         a0 += 1
         v0 += 2
         at = , a0 < a1
         bnel at, 0, 0x8022d19c   // unlikely
         halfword [v0 + 0x208] = v1

    loc_0x8022d1c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022d188
         at = 0 + 6
         if                       // likely
         

    loc_0x8022d324: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023de50
         t9 = 0 - 0x1e0
         t0 = 0 + 0x29
         halfword [a1 + 0x12] = t9 // arg2
         goto 0x8022d340
         halfword [a1 + 0x16] = t0 // arg2

    loc_0x8022d340: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022d330
         lwl t4, 0x10, a1         // arg2
         t6 = halfword [a1 + 0]   // t3
         lwr t4, 0x13, a1         // arg2
         v0 = halfword [a1 + 2]
         t8 = 0x8261 << 16
         t7 = t6 << 1
         swl t4, 0x18, a1         // arg2
         halfword [a1 + 0x24] = t5 // arg2
         t8 += t7
         swr t4, 0x1b, a1         // arg2
         t8 = halfword [t8 + 0x5504]
         at = , v0 < a2
         if                       // likely
         halfword [a1 + 0x26] = t8 // arg2

    loc_0x8022d378: // orphan
         v0 = a1 + 0x30           // arg2
         t9 = 0 + 4
         t0 = 0 - 1               // s2
         halfword [v0 + 0] = t9
         ret                      // ra
         halfword [v0 + 2] = t0

    loc_0x8022d390: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022d370
         at = , a2 < v0           // lo
         if                       // unlikely
         // CODE XREF from fcn.80226660 @ 0x80226754
         v0 = a1 + 0x30           // arg2

    loc_0x8022dbbc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023de88
         a0 = s1
         call fcn.82605e04
         a1 = s0
         goto 0x8022dc1c
         ra = [sp + 0x1c]

    loc_0x8022dc1c: // orphan
         // XREFS: CODE 0x8022db50  CODE 0x8022db64  CODE 0x8022db78  
         // XREFS: CODE 0x8022db8c  CODE 0x8022dba0  CODE 0x8022dbb4  
         // XREFS: CODE 0x8022dbc8  CODE 0x8022dbdc  CODE 0x8022dbf0  
         // XREFS: CODE 0x8022dc04  
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s4
         ret                      // ra
         sp += 0x28

    loc_0x8022dc44: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023de90
         halfword [a0 + 6] = t7   // arg1
         halfword [a0 + 8] = 0    // arg1
         // CODE XREFS from fcn.8022daa0 @ +0x18c, +0x19c
         ret                      // ra
         

    loc_0x8022e408: // orphan
         // CODE XREF from fcn.80226660 @ 0x802267a4
         // CODE XREF from fcn.8023e660 @ 0x8023dec4
         bnel t9, 0, 0x8022e57c   // likely
         t2 = , unsigned  halfword [fp + 4]

    loc_0x8022e410: // orphan
         t0 = , unsigned  halfword [fp + 4]
         t2 = 0 + 1               // lo
         t1 = t0 & 2
         // CODE XREF from fcn.8023d410 @ +0xab8
         if                       // likely
         

    loc_0x8022e424: // orphan
         [sp + 0x84] = t2
         v0 = halfword [fp + 8]
         s6 = 0 + 0xff            // s4

    loc_0x8022e430: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023decc
         at = , v0 < 0x800        // lo
         beql at, 0, 0x8022e448   // unlikely
         t4 = halfword [s5 + 6]

    loc_0x8022e43c: // orphan
         t3 = v0 + 1
         halfword [fp + 8] = t3
         t4 = halfword [s5 + 6]

    loc_0x8022e448: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e434
         s1 = 0
         blezl t4, 0x8022e55c     // unlikely
         t9 = [sp + 0x84]         // s4

    loc_0x8022e454: // orphan
         t5 = s3 << 8
         t5 -= s3
         [sp + 0x40] = t5
         s4 = 0
         s0 = s5                  // t9

    loc_0x8022e468: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e550
         t7 = halfword [s0 + v1]
         t6 = halfword [fp + 8]
         t8 = t7 << 1
         v1 = s5 + t8
         v0 = t6 - s4             // lo
         if                       // likely
         a0 = halfword [v1 + 0x208]

    loc_0x8022e484: // orphan
         goto 0x8022e49c
         v0 = 0

    loc_0x8022e48c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e47c
         at = , s3 < v0
         if                       // likely
         

    loc_0x8022e498: // orphan
         v0 = s3                  // t9

    loc_0x8022e49c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e484, 0x8022e490
         unsigned , hi
         // CODE XREF from fcn.82b887f8 @ +0xc94
         s2 = lo
         
         // CODE XREF from fcn.8021da68 @ +0x7c
         
         div 0, s2, s3
         t9 = lo
         t0 = s6 - t9
         if                       // likely
         // CODE XREF from fcn.8021da68 @ 0x8021dae8
         

    loc_0x8022e4c0: // orphan
         break 7

    loc_0x8022e4c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e4b8
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e4d0: // orphan
         if                       // likely
         

    loc_0x8022e4d8: // orphan
         break 6

    loc_0x8022e4dc: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e4c8, 0x8022e4d0
         halfword [v1 + 0x208] = t0
         bnel a0, s6, 0x8022e52c  // likely
         t6 = [sp + 0x40]

    loc_0x8022e4e8: // orphan
         t1 = halfword [s0 + v1]
         t2 = t1 << 1

    loc_0x8022e4f0: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021daec
         t3 = s5 + t2
         t4 = halfword [t3 + 0x208]
         at = , t4 < a0           // lo
         beql at, 0, 0x8022e52c   // unlikely
         t6 = [sp + 0x40]

    loc_0x8022e504: // orphan
         // CODE XREF from fcn.8021da68 @ +0x88
         t5 = halfword [s5 + 6]
         if                       // unlikely
         

    loc_0x8022e510: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x67
         // CODE XREF from fcn.8021da68 @ 0x8021daf4
         goto 0x8022e52c
         t6 = [sp + 0x40]

    loc_0x8022e520: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e508
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x68
         t6 = [sp + 0x40]

    loc_0x8022e52c: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021daf8
         // CODE XREFS from fcn.8023e660 @ 0x8022e4e0, 0x8022e4fc, 0x8022e518
         s1 += 1
         at = , s2 < t6
         beql at, 0, 0x8022e544   // likely
         t8 = halfword [s7 + 6]

    loc_0x8022e53c: // orphan
         [sp + 0x84] = 0
         t8 = halfword [s7 + 6]

    loc_0x8022e544: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e534
         t7 = [sp + 0x90]         // a2
         s0 += 2
         at = , s1 < t8
         // CODE XREF from fcn.8021da68 @ +0x94
         if                       // unlikely
         s4 += t7

    loc_0x8022e558: // orphan
         t9 = [sp + 0x84]

    loc_0x8022e55c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e44c
         if                       // unlikely
         

    loc_0x8022e564: // orphan
         t0 = , unsigned  halfword [fp + 4]
         t1 = t0 & 0xfffd
         halfword [fp + 4] = t1

    loc_0x8022e570: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e41c, 0x8022e55c
         goto 0x8022e644
         // CODE XREF from fcn.8021da68 @ 0x8021db00
         v0 = halfword [s5 + 0x18]

    loc_0x8022e57c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e408
         t3 = t2 & 4
         beql t3, 0, 0x8022e644   // unlikely
         v0 = halfword [s5 + 0x18]

    loc_0x8022e588: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db04
         t4 = halfword [s5 + 6]
         a2 = 0 + 1               // arg3 // lo
         s1 = 0
         if                       // likely
         a0 = 0

    loc_0x8022e59c: // orphan
         // CODE XREF from fcn.8021da68 @ +0xa0
         s0 = s5                  // t9
         s6 = 0 + 0xff            // s4

    loc_0x8022e5a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e620
         v0 = halfword [s0 + 0x214]
         a0 += 2                  // arg1
         if                       // unlikely
         at = , v0 < s3           // lo

    loc_0x8022e5b4: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db10
         if                       // unlikely
         

    loc_0x8022e5bc: // orphan
         t5 = v0 + 1
         halfword [s0 + 0x214] = t5
         v0 = halfword [s0 + 0x214]

    loc_0x8022e5c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e5b4
         unsigned , hi
         t6 = lo
         // CODE XREF from fcn.8021da68 @ 0x8021db0c
         
         
         div 0, t6, s3
         t7 = lo
         halfword [s0 + 0x208] = t7
         if                       // likely
         // CODE XREF from fcn.8021da68 @ +0xac
         

    loc_0x8022e5ec: // orphan
         break 7

    loc_0x8022e5f0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e5e4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e5fc: // orphan
         if                       // likely
         

    loc_0x8022e604: // orphan
         // CODE XREF from fcn.8021da68 @ +0xb8
         break 6

    loc_0x8022e608: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e5ac, 0x8022e5f4, 0x8022e5fc
         v1 = halfword [s7 + 6]
         at = , v0 < s3           // lo

    loc_0x8022e610: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db1c
         if                       // unlikely
         a1 = v1 << 1             // arg2

    loc_0x8022e618: // orphan
         a2 = 0

    loc_0x8022e61c: // orphan
         // CODE XREF from fcn.80226660 @ 0x802267b8
         // CODE XREF from fcn.8023e660 @ 0x8022e610
         at = , a0 < a1           // lo
         if                       // likely
         s0 += 2

    loc_0x8022e628: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e594
         beql a2, 0, 0x8022e644   // unlikely
         v0 = halfword [s5 + 0x18]

    loc_0x8022e630: // orphan
         t8 = , unsigned  halfword [fp + 4]
         at = 0 - 5
         t9 = t8 & at
         // CODE XREF from fcn.8021da68 @ 0x8021db18
         halfword [fp + 4] = t9
         v0 = halfword [s5 + 0x18]

    loc_0x8022e644: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e570, 0x8022e580, 0x8022e628
         s6 = 0 + 0xff            // s4
         at = 0 + 1               // lo
         beql v0, 0, 0x8022e9cc   // unlikely
         ra = [sp + 0x3c]

    loc_0x8022e654: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021da68 @ 0x8021db24
         v1 = 0 + 2

    loc_0x8022e65c: // orphan
         beql v0, v1, 0x8022e8c8  // unlikely
         t2 = halfword [s5 + 0x1a]

    loc_0x8022e664: // orphan
         goto 0x8022e9cc
         ra = [sp + 0x3c]

    loc_0x8022e66c: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db28
         // CODE XREF from fcn.8023e660 @ 0x8022e654
         t0 = halfword [s5 + 0x1a]
         v1 = 0x8261 << 16
         v1 = [v1 + 0x55e8]
         t1 = t0 + 1
         halfword [s5 + 0x1a] = t1

    loc_0x8022e680: // orphan
         // CODE XREF from fcn.80226660 @ 0x802267bc
         v0 = halfword [s5 + 0x1a]
         s1 = 0
         a0 = 0 + 0x64            // arg1
         at = , v0 < v1           // lo
         beql at, 0, 0x8022e80c   // unlikely
         s3 = 0 + 1               // lo

    loc_0x8022e698: // orphan
         unsigned , hi            // t3 // t3
         t4 = v0 << 0xe
         s0 = 0 + 4
         halfword [s5 + 0x1c] = 0
         s4 = s5 + 0x20
         t2 = lo
         
         

    loc_0x8022e6b8: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db64
         div 0, t2, v1
         t3 = lo
         s2 = a0 - t3             // arg1
         if                       // likely
         

    loc_0x8022e6cc: // orphan
         break 7

    loc_0x8022e6d0: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db6c
         // CODE XREF from fcn.8023e660 @ 0x8022e6c4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e6dc: // orphan
         if                       // likely
         

    loc_0x8022e6e4: // orphan
         break 6

    loc_0x8022e6e8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e6d4, 0x8022e6dc
         div 0, t4, v1
         s3 = lo
         s3 <<= 0x10
         if                       // likely
         

    loc_0x8022e6fc: // orphan
         break 7

    loc_0x8022e700: // orphan
         // CODE XREF from fcn.8021da68 @ +0xc4
         // CODE XREF from fcn.8023e660 @ 0x8022e6f4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e70c: // orphan
         if                       // likely
         

    loc_0x8022e714: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db30
         break 6

    loc_0x8022e718: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e704, 0x8022e70c
         unsigned , hi
         s3 = , signed  s3 >> 0x10 // t9
         t5 = lo
         

    loc_0x8022e728: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db34
         
         div 0, t5, v1
         t6 = lo
         halfword [s5 + 0x1e] = t6

    loc_0x8022e738: // orphan
         // CODE XREF from fcn.8021db70 @ 0x8021db74
         if                       // likely
         // CODE XREF from fcn.8021da68 @ +0xd0
         

    loc_0x8022e740: // orphan
         break 7

    loc_0x8022e744: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e738
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e750: // orphan
         if                       // likely
         

    loc_0x8022e758: // orphan
         break 6

    loc_0x8022e75c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e748, 0x8022e750, 0x8022e800
         call 0x82606e90          // 0x82606e90(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s4
         if                       // unlikely
         t7 = 0 + 1               // lo

    loc_0x8022e76c: // orphan
         mtc1 s2, f4
         t8 = 0 + 0x40
         t0 = s1 << 0xe
         halfword [v0 + 6] = t8
         v1 = s3 + t0
         // CODE XREF from fcn.8021da68 @ 0x8021db3c
         t9 = halfword [v0 + 6]
         v1 &= 0xffff
         cvt.s.w f0, f4
         v1 = , signed  v1 >> 4
         v1 <<= 2

    loc_0x8022e794: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db40
         at = 0x8008 << 16
         halfword [v0 + 0] = t7
         halfword [v0 + 2] = 0
         at += v1
         halfword [v0 + 4] = t9
         // CODE XREF from fcn.8021da68 @ +0xdc
         lwc1 f6, 0x7e50, at
         at = 0x4294 << 16
         mtc1 at, f10
         mul.s f8, f6, f0
         at = 0x8009 << 16
         // CODE XREF from fcn.8021da68 @ 0x8021db48
         at += v1
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 t2, f18
         
         halfword [v0 + 8] = t2
         lwc1 f4, -0x71b0, at
         at = 0x4310 << 16
         mtc1 at, f8
         mul.s f6, f4, f0
         add.s f10, f6, f8
         trunc.w.s f16, f10
         mfc1 t4, f16
         
         halfword [v0 + 0xa] = t4

    loc_0x8022e7f8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e764
         s1 += 1
         at = , s1 < s0
         if                       // unlikely
         

    loc_0x8022e808: // orphan
         s3 = 0 + 1               // lo

    loc_0x8022e80c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e690
         s1 = 0
         s0 = s5                  // t9
         a0 = s5 + 0x20           // arg1
         s2 = 0 + 0x1e0

    loc_0x8022e81c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e894
         t5 = halfword [s0 + 0x20]
         beql t5, 0, 0x8022e880   // unlikely
         t1 = halfword [a0 + 0]

    loc_0x8022e828: // orphan
         t6 = halfword [a0 + 2]
         a1 = 0 + 0xc             // arg2
         t7 = t6 + 1
         halfword [a0 + 2] = t7   // arg1
         v1 = halfword [a0 + 2]
         at = , v1 < 8            // lo
         if                       // unlikely
         

    loc_0x8022e848: // orphan
         v0 = halfword [a0 + 6]
         unsigned , hi

    loc_0x8022e850: // orphan
         // CODE XREF from fcn.8021da68 @ 0x8021db4c
         t8 = lo
         if                       // likely
         t9 = , signed  t8 >> 3

    loc_0x8022e85c: // orphan
         at = t8 + 7
         t9 = , signed  at >> 3

    loc_0x8022e864: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e854
         t0 = v0 - t9
         goto 0x8022e87c
         halfword [a0 + 4] = t0   // arg1

    loc_0x8022e870: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e840
         call 0x80075630          // 0x80075630(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021da68 @ +0xe8
         [sp + 0x40] = a0
         a0 = [sp + 0x40]         // t9

    loc_0x8022e87c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e868
         t1 = halfword [a0 + 0]

    loc_0x8022e880: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e820
         s1 += 0xc
         s0 += 0xc
         if                       // unlikely
         

    loc_0x8022e890: // orphan
         s3 = 0

    loc_0x8022e894: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e888
         if                       // likely
         a0 += 0xc                // arg1 // t1

    loc_0x8022e89c: // orphan
         if                       // unlikely
         v1 = 0 + 2

    loc_0x8022e8a4: // orphan
         halfword [s5 + 0x18] = v1
         halfword [s5 + 0x1a] = 0
         halfword [s5 + 0x1c] = 0
         halfword [s5 + 0x1e] = s6
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xe
         goto 0x8022e9cc
         ra = [sp + 0x3c]

    loc_0x8022e8c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022e65c
         a0 = 0x8261 << 16
         a0 = [a0 + 0x55ec]       // arg1
         t3 = t2 + 1
         halfword [s5 + 0x1a] = t3
         v0 = halfword [s5 + 0x1a]
         a1 = 0x8261 << 16
         at = , v0 < a0           // lo
         if                       // unlikely
         // CODE XREF from fcn.8021da68 @ 0x8021db54
         at = , v0 < 0x10

    loc_0x8022e8ec: // orphan
         if                       // unlikely
         halfword [s5 + 0x18] = v1

    loc_0x8022e8f4: // orphan
         at = , v0 < 8
         if                       // likely
         t6 = v0 - 8

    loc_0x8022e900: // orphan
         unsigned , hi
         t4 = lo
         if                       // likely
         // CODE XREF from fcn.8021da68 @ 0x8021db58
         t5 = , signed  t4 >> 3

    loc_0x8022e910: // orphan
         at = t4 + 7
         t5 = , signed  at >> 3

    loc_0x8022e918: // orphan
         goto 0x8022e948
         halfword [s5 + 0x1c] = t5

    loc_0x8022e920: // orphan
         unsigned , hi
         t7 = lo
         if                       // unlikely
         t8 = , signed  t7 >> 3

    loc_0x8022e930: // orphan
         at = t7 + 7
         t8 = , signed  at >> 3

    loc_0x8022e938: // orphan
         t9 = s6 - t8
         goto 0x8022e948
         halfword [s5 + 0x1c] = t9

    loc_0x8022e944: // orphan
         halfword [s5 + 0x1c] = 0

    loc_0x8022e948: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e918, 0x8022e93c
         goto 0x8022e9c8
         halfword [s5 + 0x1e] = s6

    loc_0x8022e950: // orphan
         a1 = [a1 + 0x55f0]       // arg2 // t9
         v1 = v0 - a0             // arg1
         t0 = a0 + a1             // arg2
         at = , v0 < t0           // lo
         beql at, 0, 0x8022e9bc   // unlikely
         // CODE XREF from fcn.80226660 @ +0x160
         t4 = 0 + 3

    loc_0x8022e968: // orphan
         unsigned , hi
         halfword [s5 + 0x1c] = 0
         t1 = lo
         
         
         div 0, t1, a1            // arg2
         t2 = lo
         t3 = s6 - t2
         if                       // likely
         

    loc_0x8022e990: // orphan
         break 7

    loc_0x8022e994: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022e9a0: // orphan
         if                       // likely
         

    loc_0x8022e9a8: // orphan
         break 6

    loc_0x8022e9ac: // orphan
         halfword [s5 + 0x1e] = t3
         goto 0x8022e9cc
         ra = [sp + 0x3c]

    loc_0x8022e9bc: // orphan
         halfword [s5 + 0x18] = t4
         halfword [s5 + 0x1c] = 0
         halfword [s5 + 0x1e] = 0

    loc_0x8022e9c8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e89c, 0x8022e948
         ra = [sp + 0x3c]

    loc_0x8022e9cc: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022e64c, 0x8022e664, 0x8022e8bc, 0x8022e9b0
         s0 = [sp + 0x18]         // s4
         s1 = [sp + 0x1c]         // ra
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]         // a2
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0xa0

    loc_0x8022ebac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802267d8
         t0 = lo
         t1 = a2 - t0             // arg3

    loc_0x8022ebb4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021dba0, 0x8023def0
         halfword [a0 + 0xc] = t1 // arg1

    loc_0x8022ebb8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dee4
         if                       // likely
         

    loc_0x8022ebc0: // orphan
         break 7

    loc_0x8022ebc4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802267e0
         at = 0 - 1               // s2
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x8021dba8
         at = 0x8000 << 16

    loc_0x8022ebd0: // orphan
         if                       // likely
         

    loc_0x8022ebd8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802267e4
         // CODE XREF from fcn.8023d410 @ +0xae4
         break 6

    loc_0x8022ebdc: // orphan
         // CODE XREF from fcn.8023d410 @ +0xad8
         t2 = [sp + 0x1c]         // ra

    loc_0x8022ebe0: // orphan
         // CODE XREF from fcn.80226660 @ +0x17c
         // CODE XREF from fcn.8021da68 @ 0x8022eb84
         bnel t2, v0, 0x8022ebf8  // unlikely
         ra = [sp + 0x14]

    loc_0x8022ebe8: // orphan
         // CODE XREF from fcn.8021db70 @ 0x8021dba4
         t3 = , unsigned  halfword [a0 + 4]
         t4 = t3 & 0xfffe
         // CODE XREF from fcn.8023e660 @ 0x8023deec
         halfword [a0 + 4] = t4   // arg1
         ra = [sp + 0x14]

    loc_0x8022ebf8: // orphan
         sp += 0x28
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x8021dbac
         

    loc_0x8022ec00: // orphan
         sp += 0x28
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x8021dbac
         

    loc_0x8022ec18: // orphan
         t1 = halfword [a0 + 0x26]

    loc_0x8022ec1c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbb8
         lwl t9, 0x14, a0         // arg1
         lwr t9, 0x17, a0         // arg1
         t3 = t2 - t1

    loc_0x8022ec28: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbb4
         t0 = halfword [a0 + 0x14]
         swl t9, 0x1c, a0         // arg1
         halfword [a0 + 6] = t7   // arg1
         halfword [a0 + 8] = 0    // arg1
         swr t9, 0x1f, a0         // arg1
         halfword [a0 + 0x20] = t0 // arg1
         if                       // likely
         // CODE XREF from fcn.8021db70 @ 0x8021dbb0
         t4 = , signed  t3 >> 1

    loc_0x8022ec48: // orphan
         at = t3 + 1              // s4
         t4 = , signed  at >> 1

    loc_0x8022ec50: // orphan
         t5 = t4 - a1             // arg2
         halfword [a0 + 0x22] = t5 // arg1

    loc_0x8022ec58: // orphan
         ret                      // ra
         

    loc_0x8022ecf8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbc4
         
         div 0, t5, a2            // arg3
         t6 = lo
         t7 = t6 + v1
         // CODE XREF from fcn.8023e660 @ 0x8023df04
         if                       // likely
         

    loc_0x8022ed10: // orphan
         break 7

    loc_0x8022ed14: // orphan
         at = 0 - 1               // s2
         if                       // likely
         // CODE XREF from fcn.8021e454 @ 0x8021dbc8
         // CODE XREF from fcn.8023e660 @ 0x8023df08
         at = 0x8000 << 16

    loc_0x8022ed1c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         // CODE XREF from fcn.8021e454 @ 0x8021dbc8
         // CODE XREF from fcn.8023e660 @ 0x8023df08
         at = 0x8000 << 16

    loc_0x8022ed20: // orphan
         if                       // likely
         

    loc_0x8022ed28: // orphan
         break 6

    loc_0x8022ed2c: // orphan
         halfword [a0 + 0x16] = t7 // arg1
         goto 0x8022ed78
         // CODE XREF from fcn.8023e660 @ 0x8021dbd0
         ra = [sp + 0x14]

    loc_0x8022ed48: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbd4
         swl t0, 0x14, a0         // arg1
         halfword [a0 + 6] = t8   // arg1
         halfword [a0 + 8] = 0    // arg1
         if                       // likely
         swr t0, 0x17, a0         // arg1

    loc_0x8022ed5c: // orphan
         t2 = halfword [a0 + 0x32]
         at = 0 - 1               // s2
         beql t2, at, 0x8022ed78  // unlikely
         ra = [sp + 0x14]

    loc_0x8022ed6c: // orphan
         // CODE XREF from fcn.8021db70 @ +0x68
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x6c

    loc_0x8022ed74: // orphan
         ra = [sp + 0x14]

    loc_0x8022ed78: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022ed30
         sp += 0x18
         ret                      // ra
         

    loc_0x8022edb0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbdc
         t8 = 0 + 4
         halfword [a0 + 6] = t8   // arg1
         t0 = t9 - 1
         at = , unsigned  , t0 < 0xb
         if                       // likely
         halfword [a0 + 8] = 0    // arg1

    loc_0x8022edc8: // orphan
         t0 <<= 2
         at = 0x8261 << 16
         at += t0
         t0 = [at + 0x5900]       // t9
         goto t0                  // t9
         

    loc_0x8022ee6c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbe8
         t5 = 0 + 0x280
         t3 = t2 & 1              // lo
         bnel t3, 0, 0x8022ee88   // likely
         halfword [a0 + 0x18] = t5 // arg1

    loc_0x8022ee7c: // orphan
         goto 0x8022ee88
         halfword [a0 + 0x18] = t4 // arg1

    loc_0x8022ee88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022ee7c
         ret                      // ra
         halfword [a0 + 0x1a] = 0 // arg1

    loc_0x8022ef68: // orphan
         ret                      // ra
         

    loc_0x8022ef98: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbf4
         t1 = halfword [a0 + 0x1a]
         unsigned , hi            // t3 // t3
         t9 = lo
         
         
         // CODE XREF from fcn.8021db70 @ +0x88
         div 0, t9, v1
         t0 = lo
         halfword [a0 + 0x10] = t0 // arg1
         if                       // likely
         

    loc_0x8022efc0: // orphan
         break 7

    loc_0x8022efc4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022efd0: // orphan
         if                       // likely
         

    loc_0x8022efd8: // orphan
         break 6

    loc_0x8022efdc: // orphan
         unsigned , hi            // s4 // s4
         t2 = lo
         
         
         div 0, t2, v1
         t3 = lo
         halfword [a0 + 0x12] = t3 // arg1
         if                       // likely
         

    loc_0x8022f000: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dbfc
         break 7

    loc_0x8022f004: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f010: // orphan
         if                       // likely
         

    loc_0x8022f018: // orphan
         break 6

    loc_0x8022f01c: // orphan
         ret                      // ra
         

    loc_0x8022f048: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023df14
         [sp + 0x14] = ra
         v0 = halfword [a0 + 6]
         at = 0 + 1               // lo
         if                       // unlikely
         at = 0 + 2

    loc_0x8022f0c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc00
         at = 0 + 0xb
         if                       // likely
         t7 = 0x8261 << 16

    loc_0x8022f0d0: // orphan
         v1 = 0x8261 << 16
         v0 = 0x8261 << 16
         v1 += 0x5618
         goto 0x8022f110
         // CODE XREF from fcn.8023e660 @ 0x8021dc0c
         v0 += 0x561c

    loc_0x8022f0e0: // orphan
         v1 = 0x8261 << 16
         v0 = 0x8261 << 16
         v1 += 0x5618
         goto 0x8022f110
         // CODE XREF from fcn.8023e660 @ 0x8021dc0c
         v0 += 0x561c

    loc_0x8022f0e4: // orphan
         t6 = [sp + 0x10]
         v1 = 0x8261 << 16
         v1 += 0x5608
         if                       // likely
         v0 = 0x8261 << 16

    loc_0x8022f0f8: // orphan
         v1 = 0x8261 << 16
         v0 = 0x8261 << 16
         v1 += 0x5610
         goto 0x8022f110
         v0 += 0x5614

    loc_0x8022f10c: // orphan
         v0 += 0x560c

    loc_0x8022f110: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8022f0dc, 0x8022f104
         a0 = , unsigned  byte [v1 + 0]
         t7 = , unsigned  byte [t7 + 0x5620] // s4
         t3 = 0 + 0xff            // s4
         t6 = 0x8261 << 16
         t8 = t7 - a0             // arg1 // s4
         unsigned , hi            // t9 // s2
         t9 = lo
         
         
         div 0, t9, t3
         t4 = lo
         t5 = t4 + a0             // arg1
         byte [a1 + 0] = t5       // arg2
         t6 = , unsigned  byte [t6 + 0x5621]
         // CODE XREF from fcn.8021db70 @ +0x94
         t0 = , unsigned  byte [v1 + 1]
         // CODE XREF from fcn.80226660 @ +0x188
         if                       // likely
         

    loc_0x8022f154: // orphan
         break 7

    loc_0x8022f158: // orphan
         at = 0 - 1               // s2
         // CODE XREF from fcn.8023e660 @ 0x8021dc08
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x802267ec
         at = 0x8000 << 16

    loc_0x8022f164: // orphan
         if                       // likely
         

    loc_0x8022f16c: // orphan
         break 6

    loc_0x8022f170: // orphan
         t7 = t6 - t0
         unsigned , hi
         t5 = 0x8261 << 16
         t8 = lo
         
         
         div 0, t8, t3
         t9 = lo
         t4 = t9 + t0
         // CODE XREF from fcn.8021db70 @ +0xa0
         byte [a1 + 1] = t4       // arg2
         t5 = , unsigned  byte [t5 + 0x5622]
         t1 = , unsigned  byte [v1 + 2]
         if                       // likely
         

    loc_0x8022f1a8: // orphan
         break 7

    loc_0x8022f1ac: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f1b8: // orphan
         if                       // likely
         

    loc_0x8022f1c0: // orphan
         break 6

    loc_0x8022f1c4: // orphan
         t6 = t5 - t1
         unsigned , hi
         t4 = 0x8261 << 16
         t7 = lo
         
         
         div 0, t7, t3
         t8 = lo
         t9 = t8 + t1
         byte [a1 + 2] = t9       // arg2
         t4 = , unsigned  byte [t4 + 0x5624]
         t2 = , unsigned  byte [v0 + 0]
         if                       // likely
         

    loc_0x8022f1fc: // orphan
         break 7

    loc_0x8022f200: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f20c: // orphan
         if                       // likely
         

    loc_0x8022f214: // orphan
         break 6

    loc_0x8022f218: // orphan
         t5 = t4 - t2
         unsigned , hi            // t9 // s2
         t9 = 0x8261 << 16
         t6 = lo
         
         
         div 0, t6, t3
         t7 = lo
         t8 = t7 + t2
         byte [a2 + 0] = t8       // arg3
         t9 = , unsigned  byte [t9 + 0x5625]
         v1 = , unsigned  byte [v0 + 1]
         if                       // likely
         

    loc_0x8022f250: // orphan
         break 7

    loc_0x8022f254: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f260: // orphan
         if                       // likely
         

    loc_0x8022f268: // orphan
         break 6

    loc_0x8022f26c: // orphan
         t4 = t9 - v1
         unsigned , hi            // t9 // s2
         t8 = 0x8261 << 16
         t5 = lo
         
         
         div 0, t5, t3
         t6 = lo
         t7 = t6 + v1
         byte [a2 + 1] = t7       // arg3
         t8 = , unsigned  byte [t8 + 0x5626]
         a0 = , unsigned  byte [v0 + 2]
         if                       // likely
         

    loc_0x8022f2a4: // orphan
         break 7

    loc_0x8022f2a8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f2b4: // orphan
         if                       // likely
         

    loc_0x8022f2bc: // orphan
         break 6

    loc_0x8022f2c0: // orphan
         t9 = t8 - a0             // arg1
         unsigned , hi
         t4 = lo
         
         
         div 0, t4, t3
         t5 = lo
         t6 = t5 + a0             // arg1 // t9
         if                       // likely
         

    loc_0x8022f2e8: // orphan
         break 7

    loc_0x8022f2ec: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f2f8: // orphan
         if                       // likely
         

    loc_0x8022f300: // orphan
         break 6

    loc_0x8022f304: // orphan
         byte [a2 + 2] = t6       // arg3
         ret                      // ra
         

    loc_0x8022f484: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802267f0
         unsigned , hi            // t9 // s2
         t7 = lo
         
         
         div 0, t7, t2
         t8 = lo
         t9 = t8 + v0
         byte [a1 + 1] = t9       // arg2
         t3 = , unsigned  byte [a3 + 2] // arg4 // s4
         v1 = , unsigned  byte [v1 + 0x562e] // s4
         if                       // likely
         

    loc_0x8022f4b4: // orphan
         break 7

    loc_0x8022f4b8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f4c4: // orphan
         if                       // likely
         

    loc_0x8022f4cc: // orphan
         break 6

    loc_0x8022f4d0: // orphan
         t4 = t3 - v1
         unsigned , hi            // t9 // s2
         // CODE XREF from fcn.80226660 @ +0x194
         t5 = lo
         
         
         div 0, t5, t2
         t6 = lo
         t7 = t6 + v1
         byte [a1 + 2] = t7       // arg2
         if                       // likely
         

    loc_0x8022f4fc: // orphan
         break 7

    loc_0x8022f500: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f50c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802267f8
         if                       // likely
         

    loc_0x8022f514: // orphan
         break 6

    loc_0x8022f518: // orphan
         s0 = [sp + 4]            // s4
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x802267fc
         sp += 8

    loc_0x8022f520: // orphan
         s0 = [sp + 4]            // s4
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x802267fc
         sp += 8

    loc_0x8022f57c: // orphan
         break 7

    loc_0x8022f580: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f58c: // orphan
         if                       // likely
         

    loc_0x8022f594: // orphan
         break 6

    loc_0x8022f598: // orphan
         t4 = t3 - v1
         unsigned , hi            // t9 // s2
         t8 = 0x8261 << 16
         v0 = 0x8261 << 16
         t5 = lo
         
         
         div 0, t5, t1
         t6 = lo
         t7 = t6 + v1
         byte [a0 + 1] = t7       // arg1
         t8 = , unsigned  byte [t8 + 0x563a]
         a3 = , unsigned  byte [a3 + 0x5632] // arg4 // s4
         if                       // likely
         

    loc_0x8022f5d4: // orphan
         break 7

    loc_0x8022f5d8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f5e4: // orphan
         if                       // likely
         

    loc_0x8022f5ec: // orphan
         break 6

    loc_0x8022f5f0: // orphan
         t9 = t8 - a3             // arg4
         unsigned , hi            // a2 // a2
         t5 = 0x8261 << 16
         v1 = 0x8261 << 16
         t2 = lo
         
         
         div 0, t2, t1
         t3 = lo
         t4 = t3 + a3             // arg4 // s2
         byte [a0 + 2] = t4       // arg1
         t5 = , unsigned  byte [t5 + 0x563c]
         t0 = , unsigned  byte [t0 + 0x5634] // s4
         if                       // likely
         

    loc_0x8022f62c: // orphan
         break 7

    loc_0x8022f630: // orphan
         at = 0 - 1               // s2
         // CODE XREF from fcn.80226660 @ +0x1a0
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f63c: // orphan
         if                       // likely
         

    loc_0x8022f644: // orphan
         break 6

    loc_0x8022f648: // orphan
         t6 = t5 - t0
         unsigned , hi
         t2 = 0x8261 << 16
         t7 = lo
         // CODE XREF from fcn.8023e660 @ 0x80226804
         
         
         div 0, t7, t1
         t8 = lo
         t9 = t8 + t0

    loc_0x8022f66c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226808
         byte [a1 + 0] = t9       // arg2
         t2 = , unsigned  byte [t2 + 0x563d] // s4
         v0 = , unsigned  byte [v0 + 0x5635] // s4
         if                       // likely
         

    loc_0x8022f680: // orphan
         break 7

    loc_0x8022f684: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f690: // orphan
         // CODE XREF from fcn.80226660 @ +0x1ac
         if                       // likely
         

    loc_0x8022f698: // orphan
         break 6

    loc_0x8022f69c: // orphan
         t3 = t2 - v0
         unsigned , hi
         // CODE XREF from fcn.8023e660 @ 0x80226810
         t7 = 0x8261 << 16
         t4 = lo
         
         
         div 0, t4, t1
         t5 = lo
         t6 = t5 + v0             // s4
         byte [a1 + 1] = t6       // arg2
         t7 = , unsigned  byte [t7 + 0x563e]

    loc_0x8022f6c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226814
         v1 = , unsigned  byte [v1 + 0x5636] // s4
         if                       // likely
         

    loc_0x8022f6d4: // orphan
         break 7

    loc_0x8022f6d8: // orphan
         at = 0 - 1               // s2
         // CODE XREF from fcn.80226660 @ +0x1b8
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f6e4: // orphan
         if                       // likely
         

    loc_0x8022f6ec: // orphan
         break 6

    loc_0x8022f6f0: // orphan
         t8 = t7 - v1
         unsigned , hi            // t9 // s2
         t9 = lo
         
         // CODE XREF from fcn.8023e660 @ 0x8022681c
         
         div 0, t9, t1
         t2 = lo
         t3 = t2 + v1
         // DATA XREF from fcn.82d740b4 @ 0x82d60888
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x80226820
         

    loc_0x8022f714: // orphan
         t8 = t7 - v1
         unsigned , hi            // t9 // s2
         t9 = lo
         
         // CODE XREF from fcn.8023e660 @ 0x8022681c
         
         div 0, t9, t1
         t2 = lo
         t3 = t2 + v1
         // DATA XREF from fcn.82d740b4 @ 0x82d60888
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x80226820
         

    loc_0x8022f718: // orphan
         break 7

    loc_0x8022f71c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f728: // orphan
         // CODE XREF from fcn.80226660 @ +0x1c4
         if                       // likely
         

    loc_0x8022f730: // orphan
         break 6

    loc_0x8022f734: // orphan
         byte [a1 + 2] = t3       // arg2
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x80226828
         

    loc_0x8022f760: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022682c
         t9 -= a2                 // arg3
         byte [a0 + 1] = t7       // arg1
         t8 = , unsigned  byte [t6 + 2] // s4
         t1 = t9 + t0
         byte [a0 + 2] = t8       // arg1
         // CODE XREF from fcn.80226660 @ +0x1d0
         t3 = , unsigned  byte [t1 + 0] // s4
         byte [a1 + 0] = t3       // arg2
         t2 = , unsigned  byte [t1 + 1] // s4
         byte [a1 + 1] = t2       // arg2
         t3 = , unsigned  byte [t1 + 2] // s4
         // CODE XREF from fcn.8023e660 @ 0x80226834
         ret                      // ra
         byte [a1 + 2] = t3       // arg2

    loc_0x8022f7ac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226838
         t9 = a2 << 3             // arg3
         // CODE XREF from fcn.8230f754 @ +0x48
         t5 += a2                 // arg3
         byte [a0 + 1] = t7       // arg1
         t8 = , unsigned  byte [t6 + 2] // s4
         // CODE XREF from fcn.81b259a0 @ +0xe0
         t6 = 0x8261 << 16
         // CODE XREF from fcn.80226660 @ +0x1dc
         if                       // unlikely
         byte [a0 + 2] = t8       // arg1

    loc_0x8022f7c8: // orphan
         t3 = 0x8261 << 16
         t3 += 0x5660
         t9 += a2                 // arg3
         // CODE XREF from fcn.8023e660 @ 0x80226840
         v0 = t9 + t3
         v1 = , unsigned  byte [v0 + 0] // s4
         t4 = , unsigned  byte [v0 + 3] // s4
         t1 = 0 + 3
         t5 = t4 - v1
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, t1
         t7 = lo
         t8 = v1 + t7             // s4
         byte [a1 + 0] = t8       // arg2

    loc_0x8022f808: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226844
         t9 = , unsigned  byte [v0 + 4] // s4
         a0 = , unsigned  byte [v0 + 1]
         if                       // likely
         

    loc_0x8022f818: // orphan
         break 7

    loc_0x8022f81c: // orphan
         // CODE XREF from fcn.80226660 @ +0x1e8
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f828: // orphan
         if                       // likely
         

    loc_0x8022f830: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022684c
         break 6

    loc_0x8022f834: // orphan
         t3 = t9 - a0             // arg1
         unsigned , hi
         t4 = lo
         

    loc_0x8022f844: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226850
         
         div 0, t4, t1
         t5 = lo
         t6 = a0 + t5             // arg1
         byte [a1 + 1] = t6       // arg2
         // CODE XREF from fcn.80226660 @ +0x1f4
         t7 = , unsigned  byte [v0 + 5] // s4
         t0 = , unsigned  byte [v0 + 2]
         if                       // likely
         

    loc_0x8022f868: // orphan
         break 7

    loc_0x8022f86c: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f878: // orphan
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x80226858
         

    loc_0x8022f880: // orphan
         break 6

    loc_0x8022f884: // orphan
         t8 = t7 - t0
         unsigned , hi
         t9 = lo

    loc_0x8022f890: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022685c
         
         
         div 0, t9, t1
         t3 = lo
         t4 = t0 + t3
         // CODE XREF from fcn.80226660 @ +0x200
         if                       // likely
         

    loc_0x8022f8ac: // orphan
         break 7

    loc_0x8022f8b0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f8bc: // orphan
         if                       // likely
         

    loc_0x8022f8c4: // orphan
         break 6

    loc_0x8022f8c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226864
         byte [a1 + 2] = t4       // arg2
         ret                      // ra
         

    loc_0x8022f8d4: // orphan
         t6 += 0x5660
         v0 = t5 + t6
         v1 = , unsigned  byte [v0 + 3] // s4
         t7 = , unsigned  byte [v0 + 6] // s4
         t1 = a3 - 3              // arg4
         t2 = 0 + 6
         t8 = t7 - v1
         unsigned , hi
         t9 = lo
         
         // CODE XREF from fcn.80226660 @ +0x218
         
         div 0, t9, t2
         t3 = lo
         t4 = v1 + t3             // s4

    loc_0x8022f90c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226868
         byte [a1 + 0] = t4       // arg2
         // CODE XREF from fcn.8023e660 @ 0x8022687c
         t5 = , unsigned  byte [v0 + 7]
         a0 = , unsigned  byte [v0 + 4] // s4
         if                       // likely
         

    loc_0x8022f920: // orphan
         break 7

    loc_0x8022f924: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226870
         at = 0 - 1               // s2
         // CODE XREF from fcn.8023e660 @ 0x8021dc14
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f930: // orphan
         if                       // likely
         

    loc_0x8022f938: // orphan
         break 6

    loc_0x8022f93c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc18
         t6 = t5 - a0             // arg1
         unsigned , hi

    loc_0x8022f944: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226880
         t7 = lo
         
         
         div 0, t7, t2
         t8 = lo

    loc_0x8022f958: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226874
         // CODE XREF from fcn.80226660 @ +0x224
         t9 = a0 + t8             // arg1
         byte [a1 + 1] = t9       // arg2
         // CODE XREF from fcn.80226660 @ +0x20c
         t3 = , unsigned  byte [v0 + 8]
         t0 = , unsigned  byte [v0 + 5] // s4
         if                       // likely
         

    loc_0x8022f970: // orphan
         break 7

    loc_0x8022f974: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f980: // orphan
         if                       // likely
         

    loc_0x8022f988: // orphan
         break 6

    loc_0x8022f98c: // orphan
         t4 = t3 - t0
         // CODE XREF from fcn.801f7004 @ 0x8021dc1c
         unsigned , hi
         t5 = lo
         
         
         div 0, t5, t2

    loc_0x8022f9a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc20
         t6 = lo
         t7 = t0 + t6
         byte [a1 + 2] = t7       // arg2
         if                       // likely
         

    loc_0x8022f9b8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc24
         break 7

    loc_0x8022f9bc: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8022f9c8: // orphan
         if                       // likely
         

    loc_0x8022f9d0: // orphan
         break 6

    loc_0x8022f9d4: // orphan
         ret                      // ra
         

    loc_0x8022fa2c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226888
         s3 = , signed  at >> 2
         beql v0, 0, 0x8022fe48   // unlikely
         ra = [sp + 0x4c]

    loc_0x8022fa38: // orphan
         if                       // unlikely
         v1 = 0x800d << 16

    loc_0x8022fa40: // orphan
         v1 += 0x510
         v0 = [v1 + 0]            // t9
         t8 = 0x8009 << 16
         t8 += 0x4e78
         t6 = v0 + 8
         [v1 + 0] = t6
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t8
         v0 = [v1 + 0]
         t3 = 0xe200 << 16
         t4 = 0xf0a << 16
         t9 = v0 + 8
         // CODE XREF from fcn.8023e660 @ 0x80226890
         [v1 + 0] = t9
         t4 |= 0x4000
         t3 |= 0x1c
         [v0 + 0] = t3
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 4] = t4

    loc_0x8022fa8c: // orphan
         t5 = halfword [s0 + 0x10]
         t6 = halfword [s0 + 0x14]
         t7 = halfword [s0 + 0x12]

    loc_0x8022fa98: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80226894
         t8 = halfword [s0 + 0x16]
         t9 = , unsigned  halfword [s0 + 4]
         s1 = t5 + t6
         s2 = t7 + t8
         t3 = t9 & 8              // a2
         // CODE XREF from fcn.80226660 @ +0x238
         s1 <<= 0x10
         s2 <<= 0x10
         t4 = , unsigned  , 0 < t3 // lo
         a0 = halfword [s0 + 0]
         a3 = halfword [s0 + 0xc]

    loc_0x8022fac0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8022689c
         s1 = , signed  s1 >> 0x10
         s2 = , signed  s2 >> 0x10 // t9
         [sp + 0x10] = t4
         a1 = sp + 0x84           // arg2
         call fcn.82607bf4
         a2 = sp + 0x80
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]            // t9
         t6 = 0xe700 << 16
         t8 = 0xfb00 << 16
         t5 = v0 + 8
         [v1 + 0] = t5
         [v0 + 4] = 0
         [v0 + 0] = t6
         v0 = [v1 + 0]
         t9 = 0xfa00 << 16
         s4 = s3 << 0x10
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         t3 = , unsigned  byte [sp + 0x84]
         t6 = , unsigned  byte [sp + 0x85]
         s5 = s6 << 0x10
         t4 = t3 << 0x18
         t3 = , unsigned  byte [sp + 0x86]
         t7 = t6 << 0x10
         t8 = t4 | t7
         t5 = t3 << 8
         t6 = t8 | t5
         t4 = t6 | 0xff           // s4
         [v0 + 4] = t4
         v0 = [v1 + 0]
         s5 = , signed  s5 >> 0x10
         s4 = , signed  s4 >> 0x10 // t9
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t9
         t8 = , unsigned  byte [sp + 0x80]
         t4 = , unsigned  byte [sp + 0x81]
         a2 = s4 << 0x10
         t5 = t8 << 0x18
         t8 = , unsigned  byte [sp + 0x82]
         t7 = t4 << 0x10
         t9 = t5 | t7
         t6 = t8 << 8
         t4 = t9 | t6
         t5 = t4 | 0xff           // s4
         [v0 + 4] = t5
         t7 = 0 + 0x400
         a3 = s5 << 0x10
         t3 = 0 + 0x400
         a0 = s1 << 0x10
         a1 = s2 << 0x10
         a1 = , signed  a1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10
         [sp + 0x1c] = t3
         a3 = , signed  a3 >> 0x10
         [sp + 0x18] = t7
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         call 0x80044270          // 0x80044270(0xfffffe11, -1, 0xffffffff0000, 0xffff1002)
         a2 = , signed  a2 >> 0x10 // t9
         t8 = halfword [s0 + 0x24]
         a0 = s1 + s3
         v1 = s3 << 1
         v0 = s3                  // t9
         v0 <<= 0x15
         a0 <<= 0x10
         a2 = t8 - v1
         a2 <<= 0x10
         a0 = , signed  a0 >> 0x10
         v0 = , signed  v0 >> 0x10
         a1 = s2 << 0x10
         a3 = s5 << 0x10
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         a3 = , signed  a3 >> 0x10
         a1 = , signed  a1 >> 0x10 // t9
         [sp + 0x10] = v0
         [sp + 0x58] = v0
         [sp + 0x60] = a0
         a2 = , signed  a2 >> 0x10
         [sp + 0x5c] = v1
         [sp + 0x20] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0xfffffe10, -1, 0xffff0001, 0xffff1002)
         // CODE XREF from fcn.82132e80 @ +0x19e8
         [sp + 0x14] = 0
         t6 = halfword [s0 + 0x24]
         // CODE XREF from fcn.8023e660 @ 0x802268c4
         v0 = [sp + 0x58]
         a1 = s2 << 0x10
         t4 = s1 + t6
         a0 = t4 - s3
         a0 <<= 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t5 = 0 + 0x400
         t7 = 0 + 0x400

    loc_0x8022fc4c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802268c8
         [sp + 0x1c] = t7
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = v0
         t3 = halfword [s0 + 0x26]
         v0 = [sp + 0x5c]
         a1 = s2 + s6
         v1 = s6 << 1
         // CODE XREF from fcn.8023e660 @ 0x802268d0
         v0 <<= 5
         v0 <<= 0x10
         a1 <<= 0x10
         a3 = t3 - v1
         a3 <<= 0x10
         a1 = , signed  a1 >> 0x10
         // CODE XREF from fcn.80226660 @ +0x278
         v0 = , signed  v0 >> 0x10
         // CODE XREF from fcn.8023e660 @ 0x8021dc2c
         a0 = s1 << 0x10
         a2 = s4 << 0x10

    loc_0x8022fca8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802268d4
         t8 = 0 + 0x400
         [sp + 0x18] = t8
         a2 = , signed  a2 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x10] = v0
         [sp + 0x50] = v0

    loc_0x8022fcc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802268dc
         [sp + 0x58] = a1

    loc_0x8022fcc4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc30
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         [sp + 0x54] = v1
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = 0
         t9 = halfword [s0 + 0x26]
         v0 = [sp + 0x50]         // s4
         a0 = s1 << 0x10
         t6 = s2 + t9
         a1 = t6 - s6
         a1 <<= 0x10
         a2 = s4 << 0x10
         // CODE XREF from fcn.8023e660 @ 0x802268e4
         a3 = s5 << 0x10
         t4 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t4

    loc_0x8022fd0c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802268e8
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = v0
         t7 = halfword [s0 + 0x26]
         t8 = halfword [s0 + 0x24]
         t9 = [sp + 0x5c]
         v0 = s3 << 2
         v0 -= s3
         v0 <<= 5
         // CODE XREF from fcn.8023e660 @ 0x802268f0
         t3 = s2 + t7
         a1 = t3 - s6
         v0 <<= 0x10
         a2 = t8 - t9
         a2 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a1 <<= 0x10
         a3 = s5 << 0x10
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         a3 = , signed  a3 >> 0x10 // t9
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = v0
         [sp + 0x50] = v0
         a2 = , signed  a2 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x18] = 0

    loc_0x8022fd88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802268f4
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = halfword [sp + 0x62]
         t4 = halfword [s0 + 0x24]
         t7 = halfword [s0 + 0x26]
         t8 = [sp + 0x50]
         // CODE XREF from fcn.8023e660 @ 0x802268fc
         t5 = s1 + t4
         t3 = s2 + t7
         a1 = t3 - s6
         a0 = t5 - s3
         // CODE XREF from fcn.8023e660 @ 0x8021dc3c
         a0 <<= 0x10
         // CODE XREF from fcn.8023e660 @ 0x80226900
         a1 <<= 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t9 = 0 + 0x400

    loc_0x8022fdc4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc40
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t9
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = t8
         t4 = halfword [s0 + 0x24]
         t7 = halfword [s0 + 0x26]
         t3 = [sp + 0x54]         // v1
         t5 = s1 + t4
         t8 = [sp + 0x50]
         a0 = t5 - s3
         a3 = t7 - t3
         // CODE XREF from fcn.80226660 @ +0x2a8
         a3 <<= 0x10
         a0 <<= 0x10
         a2 = s4 << 0x10
         t9 = 0 + 0x400
         [sp + 0x18] = t9
         a2 = , signed  a2 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x14] = 0
         a1 = halfword [sp + 0x5a]
         call 0x80044270          // 0x80044270(0xffff7dbd, 0x6408, 0xff, 0xfffffddf)
         [sp + 0x10] = t8
         ra = [sp + 0x4c]

    loc_0x8022fe48: // orphan
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]         // t9
         // CODE XREF from fcn.80226660 @ +0x2ac
         s2 = [sp + 0x38]         // fp
         s3 = [sp + 0x3c]         // ra
         s4 = [sp + 0x40]         // t9
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         ret                      // ra
         sp += 0x98

    loc_0x8022fef0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc4c
         // CODE XREF from fcn.80226660 @ +0x2bc
         if                       // fcn.802300ac+0x2c // unlikely
         t7 = [sp + 0x84]

    loc_0x8022fef8: // orphan
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x8021dc48
         v1 = 0x800d << 16

    loc_0x8022ff00: // orphan
         v1 += 0x510
         v0 = [v1 + 0]
         t2 = 0x8009 << 16
         t2 += 0x4e78
         t8 = v0 + 8
         [v1 + 0] = t8
         t9 = 0xde00 << 16
         [v0 + 0] = t9
         [v0 + 4] = t2
         // CODE XREF from fcn.8021dc44 @ 0x8021dc50
         v0 = [v1 + 0]
         t4 = 0xe200 << 16
         t5 = 0xf0a << 16
         t3 = v0 + 8
         [v1 + 0] = t3

    loc_0x8022ff38: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc54
         t5 |= 0x4000             // t9
         t4 |= 0x1c               // t9
         [v0 + 0] = t4
         [v0 + 4] = t5
         swc1 f2, 0x54, sp
         // CODE XREF from fcn.80226660 @ +0x2c8
         call 0x8004d1fc          // "\u01e2" // 0x8004d1fc(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021dc44 @ 0x8021dc5c
         a0 = a3                  // s2
         lwc1 f2, 0x54, sp

    loc_0x8022ff58: // orphan
         t6 = , unsigned  halfword [s0 + 4]

    loc_0x8022ff5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc58
         a0 = halfword [s0 + 0]
         a3 = halfword [s0 + 0xc]
         t7 = t6 & 8
         t8 = , unsigned  , 0 < t7
         [sp + 0x10] = t8
         swc1 f2, 0x54, sp

    loc_0x8022ff74: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc60
         a1 = sp + 0x64           // arg2
         call fcn.82607bf4
         a2 = sp + 0x60
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]
         lwc1 f2, 0x54, sp
         // CODE XREF from fcn.80226660 @ +0x2cc
         t2 = 0xe700 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t2
         v0 = [v1 + 0]
         // CODE XREF from fcn.80226660 @ +0x2d4
         t4 = 0xfb00 << 16
         at = 0x4480 << 16
         // CODE XREF from fcn.8023e660 @ 0x8021dc6c
         t3 = v0 + 8
         [v1 + 0] = t3
         [v0 + 0] = t4
         // CODE XREF from fcn.80226660 @ +0x2d8
         t6 = , unsigned  byte [sp + 0x64] // s4
         t9 = , unsigned  byte [sp + 0x65] // s4

    loc_0x8022ffc4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc70
         t5 = , unsigned  byte [sp + 0x66] // s4
         mtc1 at, f4
         t7 = t6 << 0x18
         t2 = t9 << 0x10
         div.s f0, f4, f2
         t3 = t7 | t2
         t6 = t5 << 8
         t8 = t3 | t6
         t9 = t8 | 0xff           // s2
         [v0 + 4] = t9
         v0 = [v1 + 0]            // s4
         t2 = 0xfa00 << 16
         mtc1 0, f8
         t7 = v0 + 8
         [v1 + 0] = t7
         // UNKNOWN XREF from fcn.805b4598 @ +0x2360
         // UNKNOWN XREF from fcn.805bc5a0 @ +0xa8
         // UNKNOWN XREF from fcn.819ddde0 @ +0x590
         // UNKNOWN XREF from fcn.836d295c @ +0x4b8
         [v0 + 0] = t2
         t5 = , unsigned  byte [sp + 0x60] // s4
         t8 = , unsigned  byte [sp + 0x61] // s4
         t4 = , unsigned  byte [sp + 0x62] // t3
         t3 = t5 << 0x18
         // CODE XREF from fcn.80226660 @ +0x2e0
         t9 = t8 << 0x10
         t7 = t3 | t9
         t5 = t4 << 8
         t6 = t7 | t5
         t8 = t6 | 0xff
         [v0 + 4] = t8
         t9 = halfword [s0 + 0x14]

    loc_0x80231e70: // orphan
         t1 = 0 + 3
         t4 = [sp + 0x118]
         div 0, t0, t1
         t6 = halfword [t4 + 2]
         t3 = [sp + 0xf4]
         t4 = hi
         t9 = t6 << 1
         t7 = t3 + t9
         t9 = lo
         t3 = [sp + 0xe4]
         t8 = halfword [t7 + 0]
         t2 = halfword [sp + 0x100]
         unsigned , hi
         t7 = [sp + 0xa4]
         t6 = t4 << 4
         t6 += t4
         t6 <<= 3
         t5 = t8 + t2
         t6 -= t4
         t8 = [sp + 0x94]
         v0 = t5 + t6
         a0 = v0 << 0x10
         v1 = lo
         s3 = t7 + v1
         s4 = s3 << 0x10
         s4 = , signed  s4 >> 0x10
         a1 = s4 << 0x10
         t4 = 0 + 0x400
         t2 = 0 + 0x400
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         if                       // likely
         

    loc_0x80231ef4: // orphan
         break 7

    loc_0x80231ef8: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80231f04: // orphan
         if                       // likely
         

    loc_0x80231f0c: // orphan
         break 6

    loc_0x80231f10: // orphan
         s2 = v0                  // s4
         [sp + 0xac] = v0
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10
         [sp + 0x18] = t2
         [sp + 0x1c] = t4
         a1 = , signed  a1 >> 0x10
         [sp + 0x68] = v1
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = t8
         t5 = [sp + 0x10c]
         t6 = [sp + 0x88]         // s4
         a1 = s4 << 0x10
         s5 = s2 + t5             // s4
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10 // s4
         a0 = s5 << 0x10
         a3 = s1 << 0x10
         t3 = 0 + 0x400
         [sp + 0x1c] = t3
         a3 = , signed  a3 >> 0x10
         a0 = , signed  a0 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10 // s4
         a2 = halfword [sp + 0x8e]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0xff, 0x0, 0xffff7dbd)
         [sp + 0x10] = t6
         // CODE XREF from fcn.8023d410 @ +0xbbc
         t9 = [sp + 0xe0]
         t8 = [sp + 0x10c]
         t2 = [sp + 0x88]         // s4
         t7 = s2 + t9             // s4
         s7 = t7 - t8             // s4
         // CODE XREF from fcn.8023d410 @ +0xbc0
         s7 <<= 0x10
         s7 = , signed  s7 >> 0x10 // s4
         a0 = s7 << 0x10
         a1 = s4 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t4 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10 // s4
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0xff, 0x104, 0xffff7dbd)
         [sp + 0x10] = t2
         t6 = [sp + 0x108]
         s4 = s2 << 0x10
         t3 = [sp + 0x78]
         s6 = s3 + t6             // t9
         s6 <<= 0x10
         s6 = , signed  s6 >> 0x10 // t9
         s4 = , signed  s4 >> 0x10
         a0 = s4 << 0x10
         a1 = s6 << 0x10
         a2 = s0 << 0x10
         t9 = 0 + 0x400
         [sp + 0x18] = t9
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10 // s4
         a3 = halfword [sp + 0x7e] // lo
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, -1, 0x104, 0x1)
         [sp + 0x10] = t3
         t7 = [sp + 0xdc]
         t2 = [sp + 0x108]
         t4 = [sp + 0x78]
         t8 = s3 + t7             // t9
         s2 = t8 - t2             // t9
         s2 <<= 0x10
         s2 = , signed  s2 >> 0x10 // t9
         a1 = s2 << 0x10
         a0 = s4 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10 // t9
         // CODE XREF from fcn.8023e660 @ 0x8023dfd8
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, -1, 0x104, 0xffff7dbd)
         [sp + 0x10] = t4
         a0 = s5 << 0x10

    loc_0x802320a0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dfdc
         a1 = s2 << 0x10
         a3 = s1 << 0x10
         t3 = 0 + 0x400
         [sp + 0x1c] = t3
         a3 = , signed  a3 >> 0x10
         a1 = , signed  a1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10 // t9
         a2 = halfword [sp + 0x8e]
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, -1, 0x0, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = s7 << 0x10
         a1 = s2 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t9 = 0 + 0x400
         t7 = 0 + 0x400
         [sp + 0x1c] = t7
         [sp + 0x18] = t9
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, -1, 0x104, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = s7 << 0x10
         // CODE XREF from fcn.8023e660 @ 0x8021dc94
         a1 = s6 << 0x10
         a2 = s0 << 0x10
         t8 = 0 + 0x400
         [sp + 0x18] = t8
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a3 = halfword [sp + 0x7e] // lo
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(-1, 0xffff1002, 0x104, 0x1)
         [sp + 0x20] = 0

    loc_0x8023214c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dc98
         t2 = [sp + 0xa0]
         t4 = [sp + 0x68]         // v1
         s2 = halfword [sp + 0xae] // s4
         t5 = [sp + 0x94]
         s3 = t2 + t4             // v1
         s4 = s3 << 0x10
         s4 = , signed  s4 >> 0x10 // v1
         a1 = s4 << 0x10          // arg2
         a2 = s0 << 0x10          // arg3
         a3 = s1 << 0x10          // arg4
         t6 = 0 + 0x400
         t3 = 0 + 0x400
         a0 = s2 << 0x10          // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // s4
         [sp + 0x1c] = t3
         [sp + 0x18] = t6
         a3 = , signed  a3 >> 0x10 // arg4
         a2 = , signed  a2 >> 0x10 // arg3 // s0
         a1 = , signed  a1 >> 0x10 // arg2 // v1
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0x104, 0xffff7dbd)
         [sp + 0x10] = t5
         t9 = [sp + 0xac]         // s4
         t7 = [sp + 0x10c]
         t8 = [sp + 0x88]         // s4
         a1 = s4 << 0x10
         s5 = t9 + t7             // s4
         s5 <<= 0x10
         s5 = , signed  s5 >> 0x10 // s4
         a0 = s5 << 0x10
         a3 = s1 << 0x10
         t2 = 0 + 0x400
         [sp + 0x1c] = t2
         a3 = , signed  a3 >> 0x10
         a0 = , signed  a0 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10 // v1
         a2 = halfword [sp + 0x72]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0x0, 0xffff7dbd)
         [sp + 0x10] = t8
         t4 = [sp + 0xac]         // s4
         t5 = [sp + 0xd8]
         t3 = [sp + 0x10c]
         t9 = [sp + 0x88]         // s4
         t6 = t4 + t5             // s4
         s7 = t6 - t3             // s4
         s7 <<= 0x10
         s7 = , signed  s7 >> 0x10 // s4
         a0 = s7 << 0x10
         a1 = s4 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t7 = 0 + 0x400
         t8 = 0 + 0x400
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // v1
         a0 = , signed  a0 >> 0x10 // s4
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0x104, 0xffff7dbd)
         [sp + 0x10] = t9
         t2 = [sp + 0x108]
         t4 = [sp + 0x78]
         a0 = s2 << 0x10
         s6 = s3 + t2             // v1
         s6 <<= 0x10
         s6 = , signed  s6 >> 0x10 // v1
         a1 = s6 << 0x10
         a2 = s0 << 0x10
         t5 = 0 + 0x400
         [sp + 0x18] = t5
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // v1
         a0 = , signed  a0 >> 0x10 // s4
         a3 = halfword [sp + 0x6e]
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0x104, 0x0)
         [sp + 0x10] = t4
         t6 = [sp + 0xd4]
         t9 = [sp + 0x108]
         t7 = [sp + 0x78]
         t3 = s3 + t6             // v1
         s4 = t3 - t9             // v1
         s4 <<= 0x10
         s4 = , signed  s4 >> 0x10 // v1
         a1 = s4 << 0x10
         // CODE XREF from fcn.8023e660 @ 0x8021dca0
         a0 = s2 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t8 = 0 + 0x400
         t2 = 0 + 0x400
         [sp + 0x1c] = t2
         [sp + 0x18] = t8
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10 // v1
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0x104, 0xffff7dbd)
         [sp + 0x10] = t7
         a0 = s5 << 0x10
         a1 = s4 << 0x10
         a3 = s1 << 0x10
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         a3 = , signed  a3 >> 0x10

    loc_0x80232318: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dca4
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a2 = halfword [sp + 0x72]
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x20] = 0
         a0 = s7 << 0x10
         a1 = s4 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10 // t9
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xff, 0x104, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = s7 << 0x10
         a1 = s6 << 0x10

    loc_0x80232380: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dcac
         a2 = s0 << 0x10
         t3 = 0 + 0x400
         [sp + 0x18] = t3
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10
         a0 = , signed  a0 >> 0x10 // t9
         a3 = halfword [sp + 0x6e]
         [sp + 0x10] = fp
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x104, 0x0)
         [sp + 0x20] = 0
         v0 = [sp + s0]
         t9 = [sp + 0x114]
         v0 += 1                  // lo
         [sp + s0] = v0
         t7 = halfword [t9 + 6]
         at = , v0 < t7           // lo

    loc_0x802323c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023dff4
         bnel at, 0, 0x80231e70   // likely
         t0 = [sp + s0]           // lo

    loc_0x802323d0: // orphan
         ra = [sp + 0x54]         // v1
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]         // t9
         s2 = [sp + 0x38]         // fp
         s3 = [sp + 0x3c]         // ra
         s4 = [sp + 0x40]         // t9
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]
         ret                      // v1
         sp += 0x118

    loc_0x802325cc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dcc8
         t6 = , signed  t8 >> 0x10 // t9
         [sp + 0x88] = t7
         t7 = s3 + 0x93
         [sp + 0x80] = t6
         t8 = 0 + 0x7e
         [sp + 0x84] = t2
         t4 = 0 + 0x2a
         t9 = t1 << 1
         t2 = t4 - t9
         t6 = t8 - a3             // arg4
         [sp + 0x74] = t7
         t7 = t6 << 0x10
         t3 = t2 << 0x10
         t5 = , signed  t3 >> 0x10
         t4 = , signed  t7 >> 0x10
         s4 = v1 << 0x10
         s5 = t1 << 0x10
         s5 = , signed  s5 >> 0x10
         s4 = , signed  s4 >> 0x10 // v1
         [sp + 0x60] = t4
         [sp + 0x6c] = t5
         [sp + 0x7c] = t0
         [sp + 0x90] = 0
         fp = 0
         t0 = [sp + 0x7c]

    loc_0x80232630: // orphan
         if                       // likely
         t9 = fp & 3

    loc_0x80232638: // orphan
         if                       // unlikely
         

    loc_0x80232640: // orphan
         t9 -= 4

    loc_0x80232644: // orphan
         t2 = t9 << 4
         t2 += t9
         s1 = [sp + 0x74]
         t2 <<= 3
         t2 -= t9
         s0 = t0 + t2
         s2 = s0 << 0x10
         s3 = s1 << 0x10
         t3 = [sp + 0x90]
         s3 = , signed  s3 >> 0x10
         s2 = , signed  s2 >> 0x10
         a0 = s2 << 0x10          // arg1
         a1 = s3 << 0x10          // arg2
         a2 = s4 << 0x10          // arg3
         a3 = s5 << 0x10          // arg4
         t5 = 0 + 0x400
         t8 = 0 + 0x400
         [sp + 0x1c] = t8
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         a2 = , signed  a2 >> 0x10 // arg3 // s4
         a1 = , signed  a1 >> 0x10 // arg2
         a0 = , signed  a0 >> 0x10 // arg1
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff6381, 0x92, 0xff, -1)
         [sp + 0x10] = t3
         t6 = [sp + 0xec]
         t7 = [sp + 0x88]
         a1 = s3 << 0x10
         s6 = s0 + t6
         s6 <<= 0x10
         s6 = , signed  s6 >> 0x10
         a0 = s6 << 0x10
         a3 = s5 << 0x10
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         a3 = , signed  a3 >> 0x10 // t9
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         a2 = halfword [sp + 0x62]
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff6381, 0x92, 0x7f, -1)
         [sp + 0x10] = t7
         t9 = [sp + 0xec]
         t2 = [sp + 0x88]
         a1 = s3 << 0x10
         s7 = s0 - t9
         s7 += 0x7e
         s7 <<= 0x10
         s7 = , signed  s7 >> 0x10
         a0 = s7 << 0x10
         a2 = s4 << 0x10
         a3 = s5 << 0x10
         t3 = 0 + 0x400
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         [sp + 0x18] = t3
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10 // s4
         a0 = , signed  a0 >> 0x10
         a1 = , signed  a1 >> 0x10
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xffff63ff, 0x92, 0xff, -1)
         [sp + 0x10] = t2
         t8 = [sp + 0xe8]
         t6 = [sp + 0x84]         // s4
         a0 = s2 << 0x10

    loc_0x802332e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e040
         s2 = [sp + 0x2c]
         s3 = [sp + 0x30]
         ret                      // ra
         sp += 0x38

    loc_0x8023335c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e048
         a1 <<= 0x10              // arg2
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         [sp + 0x28] = a0
         a1 = , signed  a1 >> 0x10 // arg2
         a2 = 0 + 0x124           // arg3
         a3 = 0 + 0x59            // arg4
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x800445e8          // 0x800445e8(-1, 0xffff6408, 0x124, 0x59)
         halfword [sp + 0x32] = t0
         t0 = halfword [sp + 0x32]
         a0 = [sp + 0x28]         // t9
         a2 = 0 + 0x124
         a1 = t0 + 0xb0
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         a3 = 0 + 0x4a
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x800445e8          // 0x800445e8(-1, 0x64b8, 0x124, 0x4a)
         [sp + 0x18] = 0
         ra = [sp + 0x24]         // a2
         sp += 0x38
         ret                      // a2
         

    loc_0x8023386c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dcd8
         v0 = 0 + 0xff            // s4
         unsigned , hi
         t8 = lo
         
         
         div 0, t8, s3
         a0 = lo
         if                       // likely
         

    loc_0x80233890: // orphan
         break 7

    loc_0x80233894: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802338a0: // orphan
         if                       // likely
         

    loc_0x802338a8: // orphan
         break 6

    loc_0x802338ac: // orphan
         goto 0x80233904
         v1 = [s2 + 0]            // t9

    loc_0x80233904: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802338ac
         at = 0xff << 16
         at |= 0xff00

    loc_0x8023390c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e068
         t6 = v1 + 8
         [s2 + 0] = t6
         t8 = a0 & 0xff           // arg1 // s4
         t3 = t8 | at             // s4
         t9 = 0x8261 << 16
         [v1 + 4] = t3
         [v1 + 0] = t7
         t9 = [t9 + 0x56fc]
         at = 0x8261 << 16
         t4 = t9 + 1
         [at + 0x56fc] = t4

    loc_0x80233938: // orphan
         t5 = halfword [s1 + 0x10]
         t6 = halfword [s1 + 0x14]
         v0 = [sp + 0x90]
         v1 = 0
         t7 = t5 + t6
         halfword [sp + 0xb8] = t7
         t3 = halfword [s1 + 0x16]
         t8 = halfword [s1 + 0x12]
         t9 = t8 + t3
         halfword [sp + 0xba] = t9
         t4 = halfword [v0 + 4]
         blezl t4, 0x80233c78     // unlikely
         ra = [sp + 0x54]         // v1

    loc_0x8023396c: // orphan
         t5 = halfword [v0 + 0]

    loc_0x80233970: // orphan
         t6 = v1 << 1
         t7 = v0 + t6
         beql t5, 0, 0x80233c60   // unlikely
         t8 = [sp + 0xcc]

    loc_0x80233980: // orphan
         t8 = halfword [t7 + 0xa]
         at = , t8 < 0xff         // lo
         beql at, 0, 0x80233c60   // unlikely
         t8 = [sp + 0xcc]

    loc_0x80233990: // orphan
         t3 = halfword [v0 + 2]
         t5 = v1 << 4
         t5 += v1
         if                       // likely
         t5 <<= 2

    loc_0x802339a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dce0
         t9 = halfword [sp + 0xb8]
         t5 -= v1
         t1 = [sp + 0xc4]
         [sp + 0xbc] = v1
         t5 <<= 1
         t2 = [sp + 0xc0]
         v1 = halfword [sp + 0xba]
         v0 = t9 + t5
         v0 += 7
         t6 = 0 + 0x400
         t7 = 0 + 0x400
         t8 = v0 - t1
         t3 = t8 + 0x88
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         v1 += 5
         t7 = 0 + 0x88
         t4 = v1 + t2
         t6 = t2 << 1
         t8 = t7 - t6
         t9 = t4 << 0x10

    loc_0x802339f8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dce4
         [sp + 0x6c] = t3
         t3 = t8 << 0x10
         t5 = , signed  t9 >> 0x10
         t4 = , signed  t3 >> 0x10 // t9
         [sp + 0x68] = t5
         t8 = 0 + 0x88
         t0 = t1 << 1
         s7 = t1 << 2
         t9 = v1 - t2
         // CODE XREF from fcn.8021dc44 @ +0xa4
         t5 = t9 + 0x88
         t3 = t8 - t0
         [sp + 0x64] = t4
         s3 = v1 << 0x10
         s2 = v0 << 0x10
         s7 -= t1
         s0 = t1 << 0x10
         s1 = t2 << 0x10
         s1 = , signed  s1 >> 0x10 // s4
         s0 = , signed  s0 >> 0x10
         s7 <<= 5
         s2 = , signed  s2 >> 0x10 // s4
         s3 = , signed  s3 >> 0x10 // v1
         t4 = t3 << 0x10
         t7 = t5 << 0x10
         s5 = t0
         s4 = t1
         s4 <<= 0x15
         s5 <<= 0x15
         t6 = , signed  t7 >> 0x10
         t9 = , signed  t4 >> 0x10
         a1 = s3 << 0x10          // arg2
         a0 = s2 << 0x10          // arg1
         s7 <<= 0x10
         a2 = s0 << 0x10          // arg3
         a3 = s1 << 0x10          // arg4
         a3 = , signed  a3 >> 0x10 // arg4 // s4
         a2 = , signed  a2 >> 0x10 // arg3
         s7 = , signed  s7 >> 0x10
         a0 = , signed  a0 >> 0x10 // arg1 // s4
         a1 = , signed  a1 >> 0x10 // arg2 // v1
         [sp + 0x58] = t9
         [sp + 0x60] = t6
         s5 = , signed  s5 >> 0x10
         s4 = , signed  s4 >> 0x10
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         call 0x80044270          // 0x80044270(0xff, 0x220, 0xffff000b, 0xff)
         fp = v0 + t1
         s6 = fp << 0x10
         s6 = , signed  s6 >> 0x10
         a0 = s6 << 0x10
         a1 = s3 << 0x10
         a3 = s1 << 0x10
         t5 = 0 + 0x400
         [sp + 0x1c] = t5
         a3 = , signed  a3 >> 0x10 // s4
         a1 = , signed  a1 >> 0x10 // v1
         a0 = , signed  a0 >> 0x10
         a2 = halfword [sp + 0x5a]
         [sp + 0x10] = s4
         [sp + 0x14] = 0

    loc_0x80233af0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dcec
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         fp = halfword [sp + 0x6e] // t3
         a1 = s3 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t7 = 0 + 0x400
         t6 = 0 + 0x400
         a0 = fp << 0x10
         a0 = , signed  a0 >> 0x10 // t3
         [sp + 0x1c] = t6
         [sp + 0x18] = t7
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a1 = , signed  a1 >> 0x10 // t9
         [sp + 0x10] = s4
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xfe, -1, 0x104, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = s2 << 0x10
         a2 = s0 << 0x10
         t8 = 0 + 0x400
         [sp + 0x18] = t8
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // t9
         a1 = halfword [sp + 0x6a]
         a3 = halfword [sp + 0x66]
         [sp + 0x10] = s5
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(-1, 0xffff, 0x104, 0xffff)
         [sp + 0x20] = 0
         a0 = s2 << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t3 = 0 + 0x400
         t4 = 0 + 0x400
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // t9
         a1 = halfword [sp + 0x62]
         [sp + 0x10] = s5
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x1a9, 0x104, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = s6 << 0x10
         a3 = s1 << 0x10
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         a3 = , signed  a3 >> 0x10
         a0 = , signed  a0 >> 0x10
         a1 = halfword [sp + 0x62]
         a2 = halfword [sp + 0x5a]
         [sp + 0x10] = s7
         [sp + 0x14] = 0
         [sp + 0x18] = 0
         call 0x80044270          // 0x80044270(0xffff1002, 0x1a9, 0x72, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = fp << 0x10
         a2 = s0 << 0x10
         a3 = s1 << 0x10
         t5 = 0 + 0x400
         t7 = 0 + 0x400
         [sp + 0x1c] = t7
         [sp + 0x18] = t5
         a3 = , signed  a3 >> 0x10
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // t3
         a1 = halfword [sp + 0x62]
         [sp + 0x10] = s7
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xfe, 0x1a9, 0x104, 0xffff7dbd)
         [sp + 0x20] = 0
         a0 = fp << 0x10
         a2 = s0 << 0x10
         t6 = 0 + 0x400
         [sp + 0x18] = t6
         a2 = , signed  a2 >> 0x10 // s0
         a0 = , signed  a0 >> 0x10 // t3
         a1 = halfword [sp + 0x6a]
         a3 = halfword [sp + 0x66]
         [sp + 0x10] = s7
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0xfe, 0xffff, 0x104, 0xffff)
         [sp + 0x20] = 0
         v1 = [sp + 0xbc]
         v0 = [sp + 0x90]

    loc_0x80233c5c: // orphan
         t8 = [sp + 0xcc]

    loc_0x80233c60: // orphan
         v1 += 1
         t3 = halfword [t8 + 4]
         at = , v1 < t3
         bnel at, 0, 0x80233970   // unlikely
         t5 = halfword [v0 + 0]

    loc_0x80233c74: // orphan
         ra = [sp + 0x54]         // v1

    loc_0x80233c78: // orphan
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]         // t9
         s2 = [sp + 0x38]         // fp
         s3 = [sp + 0x3c]         // ra
         s4 = [sp + 0x40]         // t9
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]
         ret                      // ra
         sp += 0xd0

    loc_0x802345e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd20
         [s0 + 0] = t9
         [v0 + 4] = 0
         [v0 + 0] = t2
         v1 = v0                  // s4
         v0 = [s0 + 0]            // s4
         t4 = 0xfb00 << 16
         s1 = 0
         t3 = v0 + 8
         [s0 + 0] = t3
         [v0 + 0] = t4
         t6 = , unsigned  byte [sp + 0xac]
         t9 = , unsigned  byte [sp + 0xad]
         t5 = , unsigned  byte [sp + 0xae]
         t7 = t6 << 0x18
         t2 = t9 << 0x10
         t3 = t7 | t2
         t6 = t5 << 8
         t8 = t3 | t6
         t9 = t8 | 0xff           // s4
         [v0 + 4] = t9
         a0 = v0                  // s4
         v0 = [s0 + 0]
         t2 = 0xfa00 << 16
         s5 = a2
         t7 = v0 + 8
         [s0 + 0] = t7
         [v0 + 0] = t2
         t5 = , unsigned  byte [sp + 0xa8]
         t8 = , unsigned  byte [sp + 0xa9]
         t4 = , unsigned  byte [sp + 0xaa]
         t3 = t5 << 0x18
         t9 = t8 << 0x10
         t7 = t3 | t9
         t5 = t4 << 8
         t6 = t7 | t5
         t8 = t6 | 0xff           // s4
         [v0 + 4] = t8
         // CODE XREF from fcn.8021dc44 @ +0xe0
         t3 = halfword [a2 + 6]
         blezl t3, 0x80234870     // unlikely
         t3 = [sp + 0xb4]

    loc_0x80234684: // orphan
         fp = 0 + 6
         t2 = [sp + 0xc8]

    loc_0x8023468c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021dd28, 0x8023485c
         a2 = [sp + 0x60]
         t9 = [sp + 0xa0]
         t4 = halfword [t2 + 2]
         t3 = halfword [a2 + 4]
         t8 = halfword [sp + 0xb0]
         t7 = t4 << 1
         t5 = t9 + t7
         t6 = halfword [t5 + 0]
         s0 = 0x800d << 16
         s0 += 0x510
         t0 = , unsigned  halfword [s7 + 2]
         if                       // unlikely
         a1 = t6 + t8             // arg2

    loc_0x802346c0: // orphan
         div 0, s1, fp
         if                       // likely
         

    loc_0x802346cc: // orphan
         break 7

    loc_0x802346d0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x802346dc: // orphan
         if                       // likely
         

    loc_0x802346e4: // orphan
         break 6

    loc_0x802346e8: // orphan
         s3 = hi
         t2 = lo
         t4 = t2 << 1
         if                       // likely
         t9 = s1 & 1              // lo

    loc_0x802346fc: // orphan
         if                       // unlikely
         

    loc_0x80234704: // orphan
         t9 -= 2

    loc_0x80234708: // orphan
         a0 = t4 + t9             // arg1
         if                       // likely
         at = s3                  // t9

    loc_0x80234714: // orphan
         at = s3 + 1

    loc_0x80234718: // orphan
         s3 = , signed  at >> 1
         goto 0x8023475c
         v1 = halfword [s5 + 0x14]

    loc_0x80234724: // orphan
         v0 = [sp + 0x98]
         div 0, s1, v0
         a0 = hi
         s3 = lo
         if                       // unlikely
         

    loc_0x8023473c: // orphan
         break 7

    loc_0x80234740: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8023474c: // orphan
         if                       // likely
         

    loc_0x80234754: // orphan
         break 6

    loc_0x80234758: // orphan
         v1 = halfword [s5 + 0x14]

    loc_0x8023475c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023471c
         at = 0 + 0xff            // s4
         t7 = [sp + 0x94]
         unsigned , hi
         t6 = halfword [sp + 0xb2]
         t8 = halfword [sp + 0x9e]
         v0 = lo
         
         
         div 0, v0, at
         v0 = lo
         s6 = t0 - v0
         at = , v1 < 0xff
         unsigned , hi

    loc_0x80234790: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd2c
         t5 = lo
         s4 = a1 + t5             // arg2
         blezl v1, 0x8023484c     // unlikely
         t6 = [sp + 0xc4]

    loc_0x802347a0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021dc44 @ +0xec
         s2 = t6 + t8

    loc_0x802347a8: // orphan
         t2 = [sp + 0x90]
         t3 = 0 + 1               // lo
         [sp + 0xb4] = t3
         unsigned , hi
         a3 = halfword [s7 + 0]
         a0 = 0x800d << 16
         a1 = s4 << 0x10          // arg2
         a1 = , signed  a1 >> 0x10 // arg2 // s4
         a0 += 0x510              // arg1
         [sp + 0x10] = t0
         t4 = lo
         s0 = s2 + t4
         a2 = s0 << 0x10          // arg3
         call 0x80006f70          // 0x80006f70(0x800d0510, 0xff, 0xffffffffffff0000, 0xe700)
         a2 = , signed  a2 >> 0x10 // t9
         goto 0x8023482c
         // CODE XREF from fcn.8023e660 @ 0x8021dd34
         a0 = s4

    loc_0x802347ec: // orphan
         v0 = [sp + 0xb8]
         [sp + 0xb4] = 0
         a0 = 0x800d << 16
         t9 = halfword [v0 + 2]
         a3 = halfword [v0 + 0]
         a0 += 0x510              // arg1
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x0, 0x0, 0xffff)
         [sp + 0x10] = t9
         t7 = [sp + 0x90]
         unsigned , hi
         t5 = lo
         s0 = s2 + t5
         
         a0 = s4

    loc_0x8023482c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021dd38, 0x802347e4
         a1 = s0 - s6
         a2 = 0 + 0xa
         a3 = 0
         [sp + 0x10] = s7
         [sp + 0x14] = 0
         call 0x8004d1c4          // 0x8004d1c4(-1, 0xbbd08e2301eef102, 0xa, 0x0)
         [sp + 0x18] = 0
         t6 = [sp + 0xc4]

    loc_0x8023484c: // orphan
         s1 += 1
         s5 += 2
         t8 = halfword [t6 + 6]
         at = , s1 < t8
         bnel at, 0, 0x8023468c   // unlikely
         t2 = [sp + 0xc8]

    loc_0x80234864: // orphan
         s0 = 0x800d << 16
         s0 += 0x510
         t3 = [sp + 0xb4]

    loc_0x80234870: // orphan
         v0 = [sp + 0xb8]
         a0 = s0
         if                       // unlikely
         a1 = 0

    loc_0x80234880: // orphan
         t2 = halfword [v0 + 2]
         a3 = halfword [v0 + 0]
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x442f71dcfe116408, 0x0, 0xfb00)
         [sp + 0x10] = t2

    loc_0x80234894: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234878
         ra = [sp + 0x4c]
         s0 = [sp + 0x28]         // t9
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]         // t9
         s4 = [sp + 0x38]         // fp
         s5 = [sp + 0x3c]         // ra
         s6 = [sp + 0x40]         // t9
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret
         sp += 0xc8

    loc_0x80234a78: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd44
         t6 = , unsigned  byte [sp + 0xa8]
         t4 = , unsigned  byte [sp + 0xaa]
         t1 = t9 << 0x10
         t7 = t6 << 0x18
         t2 = t7 | t1
         t5 = t4 << 8
         t6 = t2 | t5
         t8 = t6 | 0xff
         [v0 + 4] = t8
         // CODE XREF from fcn.8021dc44 @ +0x104
         v0 = [s7 + 0]
         t7 = 0xfa00 << 16
         s5 = v1
         t9 = v0 + 8
         [s7 + 0] = t9

    loc_0x80234ab0: // orphan
         [v0 + 0] = t7
         t5 = , unsigned  byte [sp + 0xa5]
         t3 = , unsigned  byte [sp + 0xa4]
         t7 = , unsigned  byte [sp + 0xa6]
         t6 = t5 << 0x10
         t4 = t3 << 0x18
         t8 = t4 | t6
         t1 = t7 << 8
         // CODE XREF from fcn.8023e660 @ 0x8021dd4c
         t3 = t8 | t1
         t2 = t3 | 0xff           // s4
         [v0 + 4] = t2
         t5 = halfword [v1 + 6]   // s4
         blezl t5, 0x80234c9c     // unlikely
         t1 = [sp + 0xb0]

    loc_0x80234ae8: // orphan
         fp = 0 + 3
         v1 = [sp + 0x5c]

    loc_0x80234af0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234c90
         a2 = s1
         a0 = halfword [v1 + 4]
         call fcn.8260d3f4
         a1 = halfword [v1 + 0xe]
         a1 = halfword [s5 + 0x208]
         v1 = , unsigned  halfword [v0 + 2]
         at = 0 + 0xff            // s4
         t6 = [sp + 0xc0]
         unsigned , hi
         t4 = [sp + 0xa0]
         t9 = halfword [t6 + 2]
         t3 = halfword [sp + 0xac]
         s3 = v0                  // s4
         t7 = t9 << 1
         t8 = t4 + t7
         t1 = halfword [t8 + 0]
         t4 = halfword [sp + 0x9e]
         t9 = halfword [sp + 0xae] // s4
         a0 = lo
         t2 = t1 + t3
         

    loc_0x80234b44: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd50
         div 0, a0, at
         a0 = lo
         s6 = v1 - a0
         
         div 0, s1, fp
         // CODE XREF from fcn.8021dc44 @ +0x110
         t5 = hi

    loc_0x80234b5c: // orphan
         t6 = t5 << 4
         if                       // likely
         

    loc_0x80234b68: // orphan
         break 7

    loc_0x80234b6c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234b60
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80234b78: // orphan
         if                       // likely
         

    loc_0x80234b80: // orphan
         break 6

    loc_0x80234b84: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80234b70, 0x80234b78
         t6 += t5
         t6 <<= 3
         t6 -= t5
         s4 = t2 + t6
         if                       // unlikely
         at = , a1 < 0xff

    loc_0x80234b9c: // orphan
         if                       // unlikely
         s2 = t9 + t4

    loc_0x80234ba4: // orphan
         div 0, s1, fp
         t1 = lo
         t8 = [sp + 0x90]
         t7 = 0 + 1               // lo
         [sp + 0xb0] = t7
         unsigned , hi
         t5 = , unsigned  halfword [s3 + 2] // a2
         a3 = halfword [s3 + 0]
         a1 = s4 << 0x10
         a1 = , signed  a1 >> 0x10 // s4
         a0 = s7                  // t9
         if                       // likely
         

    loc_0x80234bd8: // orphan
         break 7

    loc_0x80234bdc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234bd0
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80234be8: // orphan
         if                       // likely
         

    loc_0x80234bf4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80234be0, 0x80234be8
         t3 = lo
         s0 = s2 + t3
         a2 = s0 << 0x10
         a2 = , signed  a2 >> 0x10
         call 0x80006f70          // 0x80006f70(-1, 0x442f71dcfe116408, 0x0, -1)

    loc_0x80234c08: // orphan
         [sp + 0x10] = t5
         goto 0x80234c60
         a0 = s4

    loc_0x80234c14: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234b9c
         v0 = [sp + 0xb4]
         [sp + 0xb0] = 0
         a0 = s7                  // t9
         t2 = halfword [v0 + 2]
         a3 = halfword [v0 + 0]
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x0, 0x0, 0xffff)
         [sp + 0x10] = t2
         at = 0 + 3
         // CODE XREF from fcn.8023e660 @ 0x8021dd58
         div 0, s1, at
         t9 = lo
         t6 = [sp + 0x90]
         
         unsigned , hi
         t4 = lo
         s0 = s2 + t4
         
         a0 = s4

    loc_0x80234c60: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021dd5c, 0x80234c0c
         a1 = s0 - s6
         a2 = 0 + 0xa
         a3 = 0
         [sp + 0x10] = s3
         [sp + 0x14] = 0
         call 0x8004d1c4          // 0x8004d1c4(-1, 0xbbd08e2301eef102, 0xa, 0x0)
         [sp + 0x18] = 0

    loc_0x80234c7c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234b94
         t7 = [sp + 0xbc]         // v1
         s1 += 1
         s5 += 2
         t8 = halfword [t7 + 6]   // s4
         at = , s1 < t8
         bnel at, 0, 0x80234af0   // unlikely
         // CODE XREF from fcn.8021dc44 @ +0x11c
         v1 = [sp + 0x5c]

    loc_0x80234c98: // orphan
         t1 = [sp + 0xb0]

    loc_0x80234c9c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234ae0
         v0 = [sp + 0xb4]
         a0 = s7                  // t9
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021dd64
         a1 = 0

    loc_0x80234cac: // orphan
         t3 = halfword [v0 + 2]
         a3 = halfword [v0 + 0]
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x442f71dcfe116408, 0x0, 0x0)
         [sp + 0x10] = t3

    loc_0x80234cc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234ca4
         ra = [sp + 0x4c]
         s0 = [sp + 0x28]         // t9
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]         // t9
         s4 = [sp + 0x38]         // fp
         s5 = [sp + 0x3c]         // ra
         s6 = [sp + 0x40]         // t9
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret
         sp += 0xc0

    loc_0x80234e3c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd68
         t3 = , unsigned  byte [sp + 0x8d] // s4
         t1 = , unsigned  byte [sp + 0x8c] // s4
         t5 = , unsigned  byte [sp + 0x8e]
         t4 = t3 << 0x10
         t2 = t1 << 0x18
         // CODE XREF from fcn.8021dc44 @ +0x128
         t6 = t2 | t4
         t8 = t5 << 8
         t1 = t6 | t8
         t9 = t1 | 0xff
         [v0 + 4] = t9
         t3 = halfword [a3 + 4]
         blezl t3, 0x80235010     // unlikely
         t5 = [sp + 0x98]

    loc_0x80234e70: // orphan
         [sp + 0x5c] = 0
         // CODE XREF from fcn.8023e660 @ 0x8021dd70
         fp = s1
         t2 = [sp + 0xa8]
         // CODE XREF from fcn.8023e660 @ 0x80235004
         a2 = halfword [s6 + 0xa]
         at = 0 + 0xff            // s4
         v0 = , unsigned  halfword [t2 + 2]

    loc_0x80234e88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd74
         a0 = halfword [s6 + 0x1a]
         a3 = [sp + 0x60]
         unsigned , hi
         t4 = s7 << 3
         v1 = 0
         s1 = 0
         t5 = 0 + 0x80
         s0 = a3 + t4             // arg4
         a1 = lo

    loc_0x80234eac: // orphan
         // CODE XREF from fcn.8021dc44 @ +0x134
         
         
         div 0, a1, at            // arg2
         a1 = lo
         s2 = v0 - a1             // arg2 // t3
         // CODE XREF from fcn.8023e660 @ 0x8021dd7c
         blezl a0, 0x80234ee8     // unlikely
         t6 = t5 - v1

    loc_0x80234ec8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234edc
         v0 = [s0 + 0x34]
         s1 += 1
         at = , s1 < a0
         t7 = , unsigned  halfword [v0 + 0]
         s0 += 4
         if                       // unlikely
         v1 += t7

    loc_0x80234ee4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd80
         t6 = t5 - v1

    loc_0x80234ee8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234ec0
         if                       // unlikely
         t8 = , signed  t6 >> 1

    loc_0x80234ef0: // orphan
         at = t6 + 1
         t8 = , signed  at >> 1

    loc_0x80234ef8: // orphan
         // CODE XREF from fcn.8021dc44 @ +0x140
         // CODE XREF from fcn.8023e660 @ 0x80234ee8
         s3 = fp + t8
         if                       // unlikely
         s3 += 0xb

    loc_0x80234f04: // orphan
         at = , a2 < 0xff         // arg3 // lo
         if                       // unlikely
         s1 = 0

    loc_0x80234f50: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd8c
         t2 = halfword [s6 + 0x1a]
         // CODE XREF from fcn.8023e660 @ 0x80234f08
         v0 = [sp + 0x9c]
         [sp + 0x98] = 0
         a0 = 0x800d << 16
         t3 = halfword [v0 + 2]

    loc_0x80234f64: // orphan
         a3 = halfword [v0 + 0]
         a0 += 0x510              // arg1
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x10000050f, 0x0, 0x0, 0x0)
         [sp + 0x10] = t3
         t2 = halfword [s6 + 0x1a]
         // CODE XREF from fcn.8023429c @ +0xcb0
         t4 = [sp + 0xac]         // s4
         t7 = [sp + 0x5c]
         if                       // unlikely
         t5 = halfword [sp + 0x96]

    loc_0x80234f90: // orphan
         t6 = [sp + 0x60]
         s5 = t5 - s2
         t8 = s7 << 3

    loc_0x80234f9c: // orphan
         s5 += 0x67
         s4 = t4 + t7             // t9
         s0 = t6 + t8
         // CODE XREF from fcn.8023e660 @ 0x80234fd8
         s2 = [s0 + 0x34]         // t9
         [sp + 0x10] = 0
         a0 = s3                  // t9
         // CODE XREF from fcn.8021dc44 @ +0x14c
         a1 = s5
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(-1, 0x100000066, 0x8, 0x0)
         a2 = s2                  // t9
         t9 = halfword [s4 + 0x1a]
         // CODE XREF from fcn.8023e660 @ 0x8021dd94
         t1 = , unsigned  halfword [s2 + 0]
         s1 += 1
         at = , s1 < t9
         s0 += 4
         if                       // unlikely
         s3 += t1

    loc_0x80234fe0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80234efc, 0x80234f88
         t3 = [sp + 0x5c]
         t4 = [sp + 0xac]         // s4
         s7 += 1
         t2 = t3 + 2
         [sp + 0x5c] = t2
         t7 = halfword [t4 + 4]
         fp += 0x86
         s6 += 2
         at = , s7 < t7
         bnel at, 0, 0x80234e7c   // unlikely
         t2 = [sp + 0xa8]

    loc_0x8023500c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dd98
         t5 = [sp + 0x98]

    loc_0x80235010: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80234e68
         a0 = 0x800d << 16
         a0 += 0x510              // arg1
         if                       // unlikely
         v0 = [sp + 0x9c]

    loc_0x80235020: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021dd9c
         t6 = halfword [v0 + 2]
         a3 = halfword [v0 + 0]
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(-1, 0x0, 0x0, 0x0)
         [sp + 0x10] = t6

    loc_0x80235038: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235018
         ra = [sp + 0x44]
         // CODE XREF from fcn.8021e454 @ 0x8021dda8
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]         // a2
         s2 = [sp + 0x28]         // t9

    loc_0x80235048: // orphan
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]         // t9
         // CODE XREF from fcn.8021dc44 @ +0x16c
         s6 = [sp + 0x38]         // fp
         s7 = [sp + 0x3c]         // ra
         fp = [sp + 0x40]         // t9

    loc_0x80235060: // orphan
         ret                      // ra
         sp += 0xb0

    loc_0x802355e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e11c
         t4 <<= 3
         t4 += t3
         a1 = t2 + t4             // arg2
         a1 <<= 0x10              // arg2
         a0 <<= 0x10              // arg1
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         call 0x8004b010          // 0x8004b010(-1, 0x8000001f50000, 0x8, -1)

    loc_0x802355fc: // orphan
         a1 = , signed  a1 >> 0x10
         ra = [sp + 0x14]
         // CODE XREF from fcn.8023e3c0 @ 0x8023e110
         sp += 0x18
         ret
         

    loc_0x80235998: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de34
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         [sp + 0xf4] = a1
         t7 = halfword [a0 + 0x14]

    loc_0x802359ac: // orphan
         t6 = halfword [a0 + 0x10]
         t9 = halfword [a0 + 0x16]
         t8 = halfword [a0 + 0x12]
         s7 = t6 + t7
         s7 <<= 0x10
         fp = t8 + t9
         fp <<= 0x10
         s4 = a0                  // t9
         s7 = , signed  s7 >> 0x10
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         fp = , signed  fp >> 0x10
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0xff, 0xff, 0xff)
         a1 = 0 + 8               // a2
         a0 = s7 + 0x96
         a1 = fp + 0xd
         a2 = 0 + 1               // lo
         call 0x800495f8          // 0x800495f8(0xffffff97, 0x7000, 0x1, 0xff)
         a3 = v0                  // s4
         s2 = s4 + 0x30
         s5 = s7 + 0x35
         s0 = fp + 0x3f
         s6 = s7 + 0xfc
         s7 = 0 - 1               // s2
         fp = 0 + 0x8e
         s1 = s2
         s4 = sp + 0x64
         s3 = 0

    loc_0x80235a3c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235b14
         v0 = halfword [s1 + 4]
         a0 = 0 + 0x12
         bnel s7, v0, 0x80235a60  // likely
         t0 = halfword [s2 + 0]

    loc_0x80235a4c: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xb
         goto 0x80235ac4
         a3 = v0                  // s4

    loc_0x80235a60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235a44
         at = 0 + 1               // lo
         a1 = v0 + 1
         if                       // likely
         a0 = 0 + 1               // lo

    loc_0x80235a70: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         a0 = s4
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0xff, 0x80, 0x12, -1)
         a3 = 0 + 9
         goto 0x80235ac4
         a3 = v0                  // s4

    loc_0x80235a94: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235a68
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 + 1
         a1 = halfword [s1 + 6]
         a0 = 0 + 2
         call 0x8004c594          // 0x8004c594(0x2, 0x5e92, 0x8, -1)
         a1 += 1
         a0 = s4
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0xff, 0x80, 0x12, -1)
         a3 = 0 + 0xa
         a3 = v0                  // s4

    loc_0x80235ac4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80235a54, 0x80235a8c
         a0 = s5                  // t9
         a1 = s0
         call 0x800495f8          // 0x800495f8(-1, 0x104, 0x8, -1)
         a2 = 0
         a0 = 0 + 2
         call 0x8004c594          // 0x8004c594(0x2, 0x104, 0x0, -1)
         a1 = halfword [s2 + 0xc]
         a0 = s4
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0xff, 0x80, 0x12, -1)
         a3 = 0 + 0xc
         a0 = s6
         a1 = s0
         a2 = 0 + 2
         call 0x800495f8          // "&s" // 0x800495f8(0x442f71dcfe111002, 0x104, 0x2, 0xc)
         a3 = v0                  // s4
         s3 += 0x47
         s0 += 0x47
         s1 += 4

    loc_0x80235b14: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e140
         if                       // likely
         s2 += 2                  // lo

    loc_0x80235b1c: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80235b20: // orphan
         
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // a2
         s4 = [sp + 0x28]         // t9
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]         // t9
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0xf0

    loc_0x80235c64: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de40
         goto 0x80235c8c
         t0 = 0 + 0x32

    loc_0x80235c8c: // orphan
         // XREFS: CODE 0x80235bc4  CODE 0x80235be4  CODE 0x80235c00  
         // XREFS: CODE 0x80235c1c  CODE 0x80235c48  CODE 0x80235c64  
         // XREFS: CODE 0x80235c70  CODE 0x80235c7c  
         [sp + 0xfc] = v1
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0xf8] = t0
         // CODE XREF from fcn.8021e454 @ 0x8021de44
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         v1 = [sp + 0xfc]
         if                       // unlikely
         t0 = [sp + 0xf8]

    loc_0x80235cb0: // orphan
         a0 = 0 + 0x80
         a1 = 0 + 0x80
         a2 = 0 + 0x80
         a3 = 0 + 0x80
         [sp + 0xfc] = v1
         call 0x8004972c          // 0x8004972c(0x80, 0x80, 0x80, 0x80)
         [sp + 0xf8] = t0
         t3 = halfword [s0 + 0x24]
         t2 = halfword [sp + 0x64]
         a1 = halfword [sp + 0x66]
         v1 = [sp + 0xfc]
         t0 = [sp + 0xf8]
         if                       // likely
         t4 = , signed  t3 >> 1

    loc_0x80235ce8: // orphan
         at = t3 + 1              // s4
         t4 = , signed  at >> 1

    loc_0x80235cf0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235ce0
         a0 = t2 + t4
         a0 += 2
         a2 = 0 + 1               // lo
         a3 = s1
         call 0x800495f8          // 0x800495f8(0x100000100, 0x442f71dcfe116408, 0x1, 0x442f71dcfe117dbd)
         a1 += 0xe
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x442f71dcfe117dbd)
         a3 = 0 + 0xff            // s4
         t6 = halfword [s0 + 0x24]
         t5 = halfword [sp + 0x64]
         a1 = halfword [sp + 0x66]
         v1 = [sp + 0xfc]
         t0 = [sp + 0xf8]
         if                       // likely
         t7 = , signed  t6 >> 1

    loc_0x80235d38: // orphan
         at = t6 + 1
         t7 = , signed  at >> 1

    loc_0x80235d40: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235d30
         a2 = 0 + 1               // lo
         a3 = s1
         a0 = t5 + t7             // t9
         call 0x800495f8          // 0x800495f8(-1, 0x442f71dcfe116408, 0x1, 0x442f71dcfe117dbd)
         a1 += 0xc
         v1 = [sp + 0xfc]
         t0 = [sp + 0xf8]

    loc_0x80235d5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235ca8
         t8 = halfword [s4 + 4]
         t9 = halfword [sp + 0x64]
         s1 = 0
         if                       // unlikely
         v0 = t9 + v1

    loc_0x80235d70: // orphan
         t1 = halfword [sp + 0x66]
         t3 = v0 + 2
         [sp + 0x34] = t3
         s2 = t1 + t0

    loc_0x80235d80: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de4c
         s3 = s2 + 2              // lo
         s0 = [sp + 0xec]
         [sp + 0x3c] = v0
         a0 = 0 + 0x80

    loc_0x80235d90: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235e58
         a1 = 0 + 0x80
         a2 = 0 + 0x80
         call 0x8004972c          // 0x8004972c(-1, 0x80, 0x80, -1)
         a3 = 0 + 0x80

    loc_0x80235da0: // orphan
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s0 + 4]
         a0 = [sp + 0x34]
         a1 = s3                  // t9
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x101, -1, 0x0, -1)
         a3 = v0                  // s4
         t2 = halfword [s4 + 2]
         // CODE XREF from fcn.8021e454 @ 0x8021de50
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         if                       // likely
         a2 = 0

    loc_0x80235dd4: // orphan
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4
         goto 0x80235e20
         a0 = 0 + 0x12

    loc_0x80235de4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235dcc
         t4 = halfword [s0 + 0]
         a0 = 0 + 0x80
         a1 = 0 + 0x80
         if                       // unlikely
         a2 = 0 + 0x80

    loc_0x80235df8: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         goto 0x80235e20
         a0 = 0 + 0x12

    loc_0x80235e14: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235df0
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0x12

    loc_0x80235e20: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80235ddc, 0x80235e0c
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s0 + 4]

    loc_0x80235e28: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de54
         a0 = [sp + 0x3c]         // s4
         a1 = s2
         a2 = 0
         call 0x800495f8          // 0x800495f8(0xff, -1, 0x0, -1)
         a3 = v0                  // s4

    loc_0x80235e3c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de58
         t6 = [sp + s0]           // lo
         s1 += 1
         s0 += 0xc
         t5 = halfword [t6 + 4]
         s2 += 0x19
         s3 += 0x19
         at = , s1 < t5
         bnel at, 0, 0x80235d90   // unlikely
         a0 = 0 + 0x80

    loc_0x80235e60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235d68
         t7 = halfword [s4 + 6]
         t8 = 0x8262 << 16
         if                       // unlikely
         

    loc_0x80235e70: // orphan
         t8 = [t8 - 0x5a60]       // t9
         a0 = 0 + 2
         v0 = [t8 + 0]
         call 0x8004c594          // 0x8004c594(0x2, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [v0 + 0x8c]
         a0 = sp + 0x68
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0x178068, 0x80, 0x12, -1)
         a3 = 0 + 0x13
         if                       // unlikely
         s0 = v0

    loc_0x80235ea0: // orphan
         a0 = 0 + 0x80
         a1 = 0 + 0x80
         a2 = 0 + 0x80

    loc_0x80235eac: // orphan
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0x80
         t9 = halfword [sp + 0x64]
         t1 = [sp + 0xf4]
         t3 = halfword [sp + 0x66]
         t2 = [sp + 0xf0]
         s1 = t9 + t1
         a0 = s1 + 2
         s2 = t3 + t2
         a1 = s2 + 2
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0xfe126409, 0x10001, 0x2, 0x80)
         a3 = s0
         // CODE XREF from fcn.8021e454 @ 0x8021de5c
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x104)
         a3 = 0 + 0xff            // s4

    loc_0x80235ef4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de60
         a0 = s1
         a1 = s2
         a2 = 0 + 2
         call 0x800495f8          // 0x800495f8(0x442f71dcfe117dbd, -1, 0x2, -1)
         a3 = s0

    loc_0x80235f08: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80235e68, 0x80235e98
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // a2
         s4 = [sp + 0x28]         // t9
         ret
         sp += 0x108

    loc_0x80235f88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de64
         t3 = halfword [a2 + 0x14]
         t9 = halfword [a2 + 0x10]
         a1 = sp + 0xcc           // arg2
         t4 = t9 + t3
         halfword [sp + 0xd0] = t4

    loc_0x80235f9c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021de68
         t6 = halfword [a2 + 0x16]
         t5 = halfword [a2 + 0x12]
         t7 = t5 + t6
         halfword [sp + 0xd2] = t7
         t8 = byte [s0 + 0xf]     // t3
         beql t8, 0, 0x80235fd8   // unlikely
         a2 = , unsigned  halfword [s0 + 8]

    loc_0x80235fb8: // orphan
         t9 = , unsigned  halfword [v0 + 0]
         t3 = t9 + 4
         if                       // likely
         t4 = , signed  t3 >> 1

    loc_0x80235fc8: // orphan
         at = t3 + 1              // s4
         t4 = , signed  at >> 1

    loc_0x80235fd0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235fc0
         [sp + 0xd4] = t4
         a2 = , unsigned  halfword [s0 + 8]

    loc_0x80235fd8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235fb0
         call fcn.82614f40
         a3 = halfword [s0 + 0xa]
         a0 = halfword [sp + 0xce]
         call 0x8004c874          // 0x8004c874(0x0, 0x442f71dcfe116408, 0x8, 0xffff)
         a1 = halfword [sp + 0xcc]
         if                       // unlikely
         [sp + 0xc8] = v0

    loc_0x80235ff4: // orphan
         t5 = byte [s0 + 0xf]     // t3
         a0 = 0 + 8               // a2
         a1 = 0
         beql t5, 0, 0x802360b0   // unlikely
         t6 = halfword [sp + 0xd0]

    loc_0x80236008: // orphan
         call 0x80049148          // 0x80049148(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = v0                  // s4
         t2 = 0x800d << 16
         t2 += 0x510
         t0 = [t2 + 0]
         a2 = [sp + 0x40]         // t9
         t8 = 0x8009 << 16
         t6 = t0 + 8
         [t2 + 0] = t6
         t8 += 0x4e38
         t7 = 0xde00 << 16
         [t0 + 0] = t7
         [t0 + 4] = t8
         v1 = [t2 + 0]
         t3 = 0xe200 << 16
         t3 |= 0x1c
         t9 = v1 + 8
         [t2 + 0] = t9
         t4 = 0xf0a << 16
         t4 |= 0x7008
         [v1 + 0] = t3
         [v1 + 4] = t4
         t6 = [sp + 0xe8]
         t5 = halfword [sp + 0xd0]
         t8 = [sp + 0xd4]         // t9
         a1 = halfword [sp + 0xd2]
         t7 = t5 + t6
         // CODE XREF from fcn.8023e660 @ 0x8021de70
         t5 = , unsigned  halfword [a2 + 0]
         t9 = t7 + t8
         [sp + 0x10] = 0
         a3 = 0
         t1 = v1
         if                       // likely
         t3 = , signed  v0 >> 1

    loc_0x80236090: // orphan
         at = v0 + 1
         t3 = , signed  at >> 1

    loc_0x80236098: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236088
         t4 = t9 - t3
         a0 = t4 - t5
         a0 -= 4
         call 0x8004d19c          // 0x8004d19c(0xfffffffffffffefe, 0x442f71dcfe116408, 0x8, -1)
         a1 += 0x12

    loc_0x802360ac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80235fec
         t6 = halfword [sp + 0xd0]

    loc_0x802360b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236000
         t7 = [sp + 0xe8]
         t8 = t6 + t7
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = t8
         a0 = 0 + 8               // a2
         call 0x800496a4          // 0x800496a4(0x8, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t9 = [sp + 0xc8]         // s4
         a0 = 0 + 0x80
         a1 = 0 + 0x80
         if                       // unlikely
         a2 = 0 + 0x80

    loc_0x802360e0: // orphan
         t3 = [sp + 0x30]
         t4 = [sp + 0xd4]         // t9
         t6 = halfword [sp + 0xd2]
         a3 = 0 + 0x80
         t5 = t3 + t4
         t7 = t6 + 0x14
         [sp + 0x28] = t7
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, 0x80)
         [sp + 0x2c] = t5
         t8 = [sp + 0x30]
         t9 = [sp + 0xd4]
         a1 = [sp + 0x28]
         a2 = 0 + 1               // lo
         a0 = t8 + t9
         a0 += 2
         a3 = [sp + 0xc8]         // s4
         call 0x800495f8          // 0x800495f8(0x1ffff8aa2, 0x10f, 0x1, 0xff)
         a1 += 2

    loc_0x80236128: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de74
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         a0 = [sp + 0x2c]
         a1 = [sp + 0x28]
         a2 = 0 + 1               // lo
         call 0x800495f8          // 0x800495f8(0xffff8aa0, 0x10f, 0x1, 0xff)
         a3 = [sp + 0xc8]         // s4

    loc_0x80236150: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802360d8
         t3 = [sp + 0x30]
         a0 = sp + 0x44
         a1 = 0 + 0x80
         t4 = t3 + 2
         call 0x80075630          // 0x80075630(0x178044, 0x80, 0x8, -1)
         [sp + 0x28] = t4
         t5 = halfword [s0 + 0x88]
         // CODE XREF from fcn.8021dc44 @ +0x234
         t6 = 0x8262 << 16
         t6 = [t6 - 0x5a60]
         a2 = , unsigned  halfword [s0 + 8]
         a3 = halfword [s0 + 0xa]
         [sp + 0x10] = t5

    loc_0x80236180: // orphan
         t7 = halfword [t6 + 0x14]
         a0 = sp + 0x44           // arg1
         a1 = 0 + 0x80            // arg2
         call fcn.826150a4
         [sp + 0x14] = t7
         s0 = sp + 0x44
         a0 = 0 + 0x80
         a1 = 0 + 0x80
         // CODE XREF from fcn.8023e660 @ 0x8021de7c
         a2 = 0 + 0x80
         call 0x8004972c          // 0x8004972c(0x80, 0x80, 0x80, -1)
         a3 = 0 + 0x80
         v0 = halfword [sp + 0xd2]
         a0 = [sp + 0x28]
         a2 = 0 + 1               // lo
         v0 += 0x30
         a1 = v0 + 2
         [sp + 0x2c] = v0
         call 0x800495f8          // 0x800495f8(0xffff8aa3, 0x12d, 0x1, 0x80)
         a3 = s0
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x178044)
         a3 = 0 + 0xff            // s4
         a0 = [sp + 0x30]

    loc_0x802361e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de80
         a1 = [sp + 0x2c]
         a2 = 0 + 1               // lo
         call 0x800495f8          // 0x800495f8(-1, 0x12b, 0x1, -1)
         a3 = s0
         call 0x800499ec          // 0x800499ec(-1, 0x12b, 0x1, 0x104)
         
         ra = [sp + 0x24]         // a2
         s0 = [sp + 0x20]         // t9
         sp += 0xf8
         ret                      // a2
         

    loc_0x802362f0: // orphan
         a3 = 0 + 0xff            // arg4 // s4
         a0 = 0 + 0x12            // arg1
         call 0x8004c874          // 0x8004c874(0x12, 0x442f71dcfe116408, 0x8, 0xff)
         a1 = 0 + 0x33
         s0 = halfword [sp + 0xd0]
         a1 = halfword [sp + 0xd2]
         a2 = 0
         s0 += 0x36
         a0 = s0
         a3 = v0                  // s4
         call 0x800495f8          // 0x800495f8(0x36, 0xfb, 0x0, 0xff)
         a1 += 0xa
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0x105, 0x0, 0xff)
         a1 = 0 + 0x34
         a1 = halfword [sp + 0xd2]
         a0 = s0
         a2 = 0
         a3 = v0                  // s4
         call 0x800495f8          // 0x800495f8(0x36, 0xfb, 0x0, 0xff)
         a1 += 0x92
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0x18d, 0x0, 0xff)
         a1 = 0 + 0x37
         t0 = halfword [s1 + 0x24]
         t9 = halfword [sp + 0xd0]
         a1 = halfword [sp + 0xd2]

    loc_0x8023635c: // orphan
         if                       // likely
         t1 = , signed  t0 >> 1

    loc_0x80236364: // orphan
         at = t0 + 1
         t1 = , signed  at >> 1

    loc_0x8023636c: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021de88, 0x8023635c
         a2 = 0 + 1               // lo
         a3 = v0                  // s4
         a0 = t9 + t1
         call 0x800495f8          // 0x800495f8(0x20000000a, 0x442f71dcfe116408, 0x1, 0xff)
         a1 += 0x105

    loc_0x80236380: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021de8c, 0x8023e14c
         t2 = halfword [sp + 0xd0]
         s2 = halfword [sp + 0xd2]
         s1 = 0x8261 << 16
         t3 = t2 + 0x66
         [sp + 0x38] = t3
         s1 += 0x552c
         s0 = 0
         s2 += 0xbc

    loc_0x802363a0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236408
         t6 = 0x8262 << 16

    loc_0x802363a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e150
         t6 = halfword [t6 - 0x5b52]
         a0 = 0 + 0xff            // arg1 // s4
         a1 = 0 + 0xff            // arg2 // s4
         if                       // likely
         a2 = 0 + 0xff            // arg3 // s4

    loc_0x802363b8: // orphan
         a0 = 0 + 0xff            // arg1 // s4
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x802363e0
         a0 = 0 + 0x12

    loc_0x802363d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802363b0
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0x12

    loc_0x802363e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802363cc
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s1 + 0]
         a0 = [sp + 0x38]
         a1 = s2
         a2 = 0
         call 0x800495f8          // 0x800495f8(0x66, -1, 0x0, -1)
         a3 = v0                  // s4
         s0 += 1
         at = 0 + 2
         s1 += 2
         if                       // likely
         s2 += 0x1f

    loc_0x80236410: // orphan
         a0 = 0 + 0xd2
         a1 = 0
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xd2, 0x0, 0x0, -1)
         a3 = 0 + 0xff            // s4
         t4 = [sp + 0xd4]         // t9
         call 0x8006cee8          // 0x8006cee8(0xd2, 0x0, 0x0, 0xff)
         a0 = , unsigned  halfword [t4 + 0]
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0x0, 0x0, 0xff)
         a1 = v0                  // s4
         s0 = halfword [sp + 0xd0]

    loc_0x80236440: // orphan
         a1 = halfword [sp + 0xd2]
         a2 = 0
         s0 += 0x5c
         a0 = s0
         a3 = v0                  // s4
         call 0x800495f8          // 0x800495f8(0x160, 0xfb, 0x0, 0xff)
         a1 += 0x2a
         t5 = [sp + 0xd4]         // t9
         call 0x8006cf70          // 0x8006cf70(0x160, 0x125, 0x0, 0xff)
         a0 = halfword [t5 + 2]   // a2
         a0 = 0 + 0x12
         call 0x8004c874          // 0x8004c874(0x12, 0x125, 0x0, 0xff)
         a1 = v0                  // s4
         a1 = halfword [sp + 0xd2]
         a0 = s0
         a2 = 0
         a3 = v0                  // s4
         call 0x800495f8          // 0x800495f8(0x160, 0xfb, 0x0, 0xff)
         a1 += 0x40
         v0 = [sp + 0xd4]         // t9
         s1 = sp + 0x4c
         a0 = s1
         t7 = , unsigned  byte [v0 + 5]
         a2 = , unsigned  halfword [v0 + 0]
         a3 = halfword [v0 + 2]   // a2
         [sp + 0x10] = t7
         t8 = , unsigned  byte [v0 + 7]
         a1 = 0 + 0x80
         call 0x8006d068          // 0x8006d068(0x17804c, 0x80, 0xe700, 0x8)
         [sp + 0x14] = t8
         a1 = halfword [sp + 0xd2]
         a0 = s0
         a2 = 0
         a3 = s1
         call 0x800495f8          // 0x800495f8(0x160, 0xfb, 0x0, 0x17804c)
         a1 += 0x56
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0x17804c)
         a3 = 0 + 0xff            // s4
         t0 = [sp + 0xd4]         // t9
         a0 = 0 + 1               // lo
         t9 = , unsigned  halfword [t0 + 0]
         t1 = t9 & 0xff00
         if                       // likely
         

    loc_0x802364fc: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [t0 + 6]
         a0 = s1
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0x442f71dcfe117dbd, 0x80, 0x12, -1)
         a3 = 0 + 0x32
         a0 = halfword [sp + 0xd0]
         a1 = halfword [sp + 0xd2]
         a2 = 0 + 2
         a3 = s1
         a0 += 0x139
         call 0x800495f8          // 0x800495f8(0x139, 0xfb, 0x2, 0x442f71dcfe117dbd)
         a1 += 0x6c

    loc_0x80236534: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802364f4
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x20]         // t9
         s1 = [sp + 0x24]         // a2
         s2 = [sp + 0x28]
         ret
         sp += 0xe0

    loc_0x80236638: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dea4
         
         
         div 0, t9, v1
         if                       // likely
         

    loc_0x8023664c: // orphan
         break 7

    loc_0x80236650: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236644
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8023665c: // orphan
         if                       // likely
         

    loc_0x80236664: // orphan
         break 6

    loc_0x80236668: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021de94, 0x80236654, 0x8023665c
         t0 = lo
         at = , v0 < v1           // lo
         if                       // likely
         halfword [s0 + 2] = t0

    loc_0x80236678: // orphan
         halfword [s0 + 0] = t1

    loc_0x8023667c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021de98
         goto 0x80236920
         halfword [s0 + 4] = 0

    loc_0x802367d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021deb0
         if                       // likely
         

    loc_0x802367dc: // orphan
         break 7

    loc_0x802367e0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         // CODE XREF from fcn.8021dc44 @ +0x270
         at = 0x8000 << 16

    loc_0x802367ec: // orphan
         if                       // likely
         

    loc_0x802367f4: // orphan
         break 6

    loc_0x802367f8: // orphan
         t9 = lo
         // CODE XREF from fcn.8023e660 @ 0x8021deb8
         at = , v0 < a1           // lo
         t0 = t9 + a0             // arg1
         if                       // likely
         halfword [s0 + 0x16] = t0

    loc_0x8023680c: // orphan
         halfword [s0 + 0] = t1
         halfword [s0 + 4] = 0
         halfword [s0 + 0x14] = a2
         goto 0x80236920
         halfword [s0 + 0x16] = a3

    loc_0x80236850: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021debc
         [s0 + 0x10] = v1
         v0 = [s0 + 0xc]
         t4 = halfword [s0 + 4]
         t7 = 0x8261 << 16
         v0 >>= 0x10
         t5 = t4 + 1              // lo
         if                       // likely
         halfword [s0 + 4] = t5

    loc_0x80236870: // orphan
         t6 = halfword [s0 + 4]   // lo
         t7 = [t7 + 0x53cc]       // t9
         t8 = 0 + 5
         t9 = 0 + 1               // lo
         at = , t6 < t7           // lo
         if                       // likely
         a0 = 0 + 0x79            // arg1

    loc_0x8023688c: // orphan
         halfword [s0 + 0] = t8
         halfword [s0 + 4] = 0
         [s0 + 0x10] = 0
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [s0 + 8] = t9
         goto 0x80236924
         t6 = [s0 + 0xc]

    loc_0x80236920: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x104c, 0x80236670, 0x8023667c
         // CODE XREFS from fcn.8023e660 @ 0x1198, 0x80236818
         t6 = [s0 + 0xc]

    loc_0x80236924: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x1100, 0x802368a0
         t7 = [s0 + 0x10]
         v1 = 0xa << 16
         t8 = t6 + t7
         at = , unsigned  , t8 < v1
         if                       // unlikely
         [s0 + 0xc] = t8

    loc_0x8023693c: // orphan
         t0 = halfword [s0 + 8]
         t9 = t8 - v1
         [s0 + 0xc] = t9
         bnel t0, 0, 0x8023695c   // likely
         ra = [sp + 0x1c]

    loc_0x80236950: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x78

    loc_0x80236958: // orphan
         // CODE XREF from fcn.802355a8 @ +0x1044
         ra = [sp + 0x1c]

    loc_0x8023695c: // orphan
         s0 = [sp + 0x18]
         sp += 0x28
         ret                      // ra
         

    loc_0x80236998: // orphan
         a2 = halfword [v0 + 0x5a]
         v1 = v0                  // s4
         ra = [sp + 0x14]
         sp += 0x18
         v0 = v1                  // s4
         ret
         

    loc_0x80236a14: // orphan
         div.s f0, f6, f10
         mtc1 0, f18
         t3 = 0x8009 << 16
         a1 += 0x510              // arg2
         t3 += 0x4e78
         t2 = 0xde00 << 16
         t5 = 0xe200 << 16
         c.lt.s f18, f0
         
         bc1fl 0x80236b8c
         ra = [sp + 0x14]
         v1 = [a1 + 0]            // arg2 // t9
         t6 = 0xf0a << 16
         t6 |= 0x4000
         t1 = v1 + 8
         // CODE XREF from fcn.8023d410 @ +0xd6c
         [a1 + 0] = t1            // arg2
         [v1 + 4] = t3
         [v1 + 0] = t2
         v1 = [a1 + 0]            // arg2
         t5 |= 0x1c
         t9 = 0x9b9b << 16
         t4 = v1 + 8
         [a1 + 0] = t4            // arg2
         [v1 + 4] = t6
         [v1 + 0] = t5
         v1 = [a1 + 0]            // arg2
         t9 |= 0xffff
         t8 = 0xfb00 << 16
         t7 = v1 + 8
         [a1 + 0] = t7            // arg2
         [v1 + 4] = t9
         [v1 + 0] = t8
         v1 = [a1 + 0]            // arg2
         t2 = 0xfa00 << 16
         t3 = 0 + 0xff            // s4
         t1 = v1 + 8
         // CODE XREF from fcn.8023d410 @ +0xd70
         [a1 + 0] = t1            // arg2
         [v1 + 4] = t3
         // CODE XREF from fcn.8023d410 @ +0xd68
         [v1 + 0] = t2
         call 0x8004d1fc          // 0x8004d1fc(-1, 0x442f71dcfe116918, 0x8, -1)
         swc1 f0, 0x18, sp
         t5 = [sp + 0x2c]
         at = 0xe500 << 16
         lwc1 f0, 0x18, sp
         t6 = t5 - 1
         t7 = t6 << 2
         t8 = t7 & 0xfff
         t9 = t8 << 0xc
         t1 = t9 | at
         at = 0x4480 << 16
         mtc1 at, f4
         a1 = 0x800d << 16
         a1 += 0x510
         div.s f2, f4, f0
         v1 = [a1 + 0]
         t2 = [sp + 0x28]
         mtc1 0, f8
         t4 = v1 + 8
         [a1 + 0] = t4
         t3 = t2 - 1
         t4 = t3 << 2
         t5 = t4 & 0xfff
         t6 = t1 | t5
         [v1 + 0] = t6
         [v1 + 4] = 0
         v1 = [a1 + 0]
         t8 = 0xe100 << 16
         t2 = 0xf100 << 16
         t7 = v1 + 8
         [a1 + 0] = t7
         [v1 + 4] = 0
         [v1 + 0] = t8
         a3 = [a1 + 0]

    loc_0x80236b38: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021ded4
         at = 0xbf00 << 16
         t9 = a3 + 8              // arg4
         // CODE XREF from fcn.8023d410 @ +0xd7c
         c.lt.s f8, f2
         [a1 + 0] = t9            // arg2
         [a3 + 0] = t2            // arg4
         bc1fl 0x80236b68
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f0
         goto 0x80236b70
         add.s f16, f0, f2

    loc_0x80236b70: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236b5c
         trunc.w.s f6, f16
         mfc1 t1, f6
         

    loc_0x80236b7c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dec8
         t5 = t1 << 0x10
         t6 = t5 | 0x400
         [a3 + 4] = t6            // arg4
         ra = [sp + 0x14]
         sp += 0x30
         ret
         

    loc_0x80236c94: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dee0
         at = 0 - 1               // s2
         if                       // likely
         v1 = 0

    loc_0x80236ca0: // orphan
         v0 = a1 + 3              // arg2
         if                       // likely
         // CODE XREF from fcn.8021dc44 @ +0x2a0
         at = v0

    loc_0x80236cc4: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80236d20: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021deec
         a0 = 0 + 0x52            // arg1
         if                       // unlikely
         

    loc_0x80236f24: // orphan
         div 0, s1, v1
         t8 = hi
         // CODE XREF from fcn.82927258 @ +0x1b08
         t9 = t8 << 2
         t5 = lo
         t4 = [sp + 0x78]
         t6 = t5 << 5             // k0
         t9 -= t8
         t9 <<= 2
         t6 += t5
         t6 <<= 4
         t9 -= t8
         t9 <<= 3
         t7 = t4 + t6
         v0 = t7 + t9
         halfword [s3 + 0x38] = s1
         s0 = v0 + 0x90
         [s2 + 0x68] = s0
         t0 = , unsigned  byte [v0 + 0x90] // s4
         if                       // likely
         

    loc_0x80236f74: // orphan
         break 7

    loc_0x80236f78: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80236f84: // orphan
         if                       // likely
         

    loc_0x80236f8c: // orphan
         break 6

    loc_0x80236f90: // orphan
         beql t0, 0, 0x80237024   // unlikely
         t6 = [sp + 0x7c]

    loc_0x80236f98: // orphan
         a1 = 0x8262 << 16
         a1 -= 0x5b08             // arg2
         a0 = s0
         call fcn.8260f6c8
         a2 = s1 - 1
         at = 0 - 1               // s2
         if                       // unlikely
         v1 = 0 + 6

    loc_0x80236fb8: // orphan
         goto 0x80237020
         halfword [s3 + 0x38] = v0

    loc_0x80236fc0: // orphan
         t1 = 0x8262 << 16
         t1 = [t1 - 0x5a60]
         t2 = 0x8261 << 16
         t2 -= 0xb1c

    loc_0x80236fd0: // orphan
         a0 = [t1 + 4]
         [sp + 0x30] = t2
         a1 = s1
         call 0x80043a30          // 0x80043a30(0xff010af5, 0x442f71dcfe117dbd, 0x8, -1)
         a2 = s0
         t3 = 0x8262 << 16
         t3 = [t3 - 0x5a60]
         // CODE XREF from fcn.8023e660 @ 0x8021def8
         t5 = [sp + 0x88]
         a1 = s1
         a3 = , unsigned  byte [s0 + 0] // s4
         a0 = [t3 + 4]            // t9
         call 0x8004418c          // 0x8004418c(-1, 0x442f71dcfe117dbd, 0x104, 0xff)
         // CODE XREF from fcn.8023e660 @ 0x8021defc
         a2 = [t5 + 8]
         t4 = 0x8262 << 16
         t4 = [t4 - 0x5a60]
         a1 = s1
         a2 = [sp + 0x30]         // s4
         // CODE XREF from fcn.8021dc44 @ +0x2bc
         call 0x80043bd4          // 0x80043bd4(-1, 0x442f71dcfe117dbd, 0xff, 0xff)
         a0 = [t4 + 4]            // t9
         v1 = 0 + 6

    loc_0x80237020: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80236fb8
         t6 = [sp + 0x7c]

    loc_0x80237024: // orphan
         s1 += 1
         s2 += 4
         t8 = [t6 + 0x110]        // t9
         s3 += 2
         t7 = [t8 + 4]
         t9 = halfword [t7 + 2]
         at = , s1 < t9
         if                       // unlikely
         

    loc_0x80237048: // orphan
         // CODE XREF from fcn.8021dc44 @ +0x2c0
         if                       // unlikely
         s0 = 0

    loc_0x80237050: // orphan
         at = 0x8262 << 16
         halfword [at - 0x5b6e] = 0
         t0 = 0x8262 << 16
         t0 = , unsigned  halfword [t0 - 0x5b6c]
         t2 = [sp + 0x78]
         a0 = 0x8262 << 16
         t1 = t0 | 1
         halfword [at - 0x5b6c] = t1
         a0 -= 0x25b4             // arg1
         s1 = 0
         call fcn.8260f084
         a1 = halfword [t2 + 0x88]
         t5 = 0x8262 << 16
         t5 = [t5 - 0x5a60]
         t3 = [sp + 0x78]
         a1 = halfword [t5 + 0x14]
         call fcn.8260f7c4        // fcn.8260f7c4(0x8261da4c, 0xffff)
         a0 = byte [t3 + 1]       // s4
         t4 = [sp + 0x78]
         at = 0x8262 << 16
         halfword [at - 0x5b5e] = v0
         v1 = , unsigned  halfword [t4 + 8]
         at = 0 + 0x200
         a0 = 0x8261 << 16
         v1 &= 0xff00
         if                       // unlikely
         a0 += 0x5504

    loc_0x802370bc: // orphan
         at = 0 + 0x300
         if                       // unlikely
         t7 = 0x8262 << 16

    loc_0x802370c8: // orphan
         at = 0 + 0x400
         if                       // unlikely
         t0 = 0x8262 << 16

    loc_0x802370d4: // orphan
         at = 0 + 0x500
         if                       // unlikely
         t5 = 0x8262 << 16

    loc_0x802370e0: // orphan
         at = 0 + 0x600
         if                       // unlikely
         t2 = 0x8262 << 16

    loc_0x802370ec: // orphan
         t6 = 0x8262 << 16
         t6 = , unsigned  halfword [t6 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0 + 1               // lo
         t8 = t6 | 0x80
         goto 0x80237180
         halfword [at - 0x5b6c] = t8

    loc_0x80237108: // orphan
         t7 = , unsigned  halfword [t7 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0 + 1               // lo
         t9 = t7 & 0xff7f
         goto 0x80237180
         halfword [at - 0x5b6c] = t9

    loc_0x80237120: // orphan
         t0 = , unsigned  halfword [t0 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0
         t1 = t0 & 0xff7f

    loc_0x80237138: // orphan
         t2 = , unsigned  halfword [t2 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0
         t3 = t2 | 0x80
         goto 0x80237180
         halfword [at - 0x5b6c] = t3

    loc_0x80237150: // orphan
         t5 = , unsigned  halfword [t5 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0
         t4 = t5 | 0x80
         goto 0x80237180
         halfword [at - 0x5b6c] = t4

    loc_0x80237168: // orphan
         t6 = 0x8262 << 16
         t6 = , unsigned  halfword [t6 - 0x5b6c]
         at = 0x8262 << 16
         s2 = 0 + 1               // lo
         t8 = t6 | 0x80
         halfword [at - 0x5b6c] = t8

    loc_0x80237180: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80237100, 0x80237118
         // CODE XREF from fcn.80237130 @ 0x80237130
         // CODE XREFS from fcn.8023e660 @ 0x80237148, 0x80237160
         at = 0x8262 << 16
         halfword [at - 0x5b5c] = 0
         t7 = 0x8262 << 16
         t7 = halfword [t7 - 0x5b5e] // s4
         t4 = 0 + 2
         t6 = 0x8262 << 16
         if                       // unlikely
         v1 = 0

    loc_0x802371a0: // orphan
         a2 = 0x8262 << 16
         a2 -= 0x5b70             // arg3
         t9 = 0 + 1               // lo
         halfword [a2 + 0x3544] = t9 // arg3
         t0 = 0x8262 << 16
         t0 = halfword [t0 - 0x5b5c]
         t3 = 0x8262 << 16
         at = 0x8262 << 16
         t1 = t0 << 2
         t1 -= t0
         t1 <<= 1
         t2 = a2 + t1             // arg3
         halfword [t2 + 0x3546] = 0
         t3 = halfword [t3 - 0x5b5c]
         // CODE XREF from fcn.8023d410 @ +0xdb4
         s0 = 0 + 1               // lo
         t5 = t3 + 1              // lo
         halfword [at - 0x5b5c] = t5

    loc_0x802371e4: // orphan
         t6 = halfword [t6 - 0x5b5c]
         a2 = 0x8262 << 16
         // CODE XREF from fcn.8023d410 @ +0xdb8
         a2 -= 0x5b70             // arg3
         t8 = t6 << 2
         t8 -= t6
         t8 <<= 1
         t7 = a2 + t8             // arg3
         halfword [t7 + 0x3544] = t4
         t9 = 0x8262 << 16
         t9 = halfword [t9 - 0x5b5c] // lo
         t2 = 0x8262 << 16
         at = 0x8262 << 16
         t0 = t9 << 2
         t0 -= t9
         t0 <<= 1
         t1 = a2 + t0             // arg3
         halfword [t1 + 0x3546] = 0
         t2 = halfword [t2 - 0x5b5c] // lo
         t5 = 0 + 3
         t9 = 0x8262 << 16
         t3 = t2 + 1
         if                       // unlikely
         halfword [at - 0x5b5c] = t3

    loc_0x80237240: // orphan
         t6 = t3 << 0x10
         t8 = , signed  t6 >> 0x10 // t3
         t4 = t8 << 2
         t4 -= t8
         t4 <<= 1
         t7 = a2 + t4             // arg3
         halfword [t7 + 0x3544] = t5
         t9 = halfword [t9 - 0x5b5c]
         t2 = 0x8262 << 16
         at = 0x8262 << 16
         t0 = t9 << 2
         t0 -= t9
         t0 <<= 1
         t1 = a2 + t0             // arg3
         halfword [t1 + 0x3546] = 0
         t2 = halfword [t2 - 0x5b5c]
         t3 = t2 + 1
         halfword [at - 0x5b5c] = t3

    loc_0x80237288: // orphan
         t6 = 0x8262 << 16
         t6 = halfword [t6 - 0x5b5e] // s4
         v0 = 0x8262 << 16
         t4 = 0x8262 << 16
         at = , s0 < t6
         if                       // likely
         v0 -= 0x5b70

    loc_0x802372a4: // orphan
         t4 = halfword [t4 - 0x5b5c]
         t8 = 0 + 1               // lo
         t9 = 0x8262 << 16
         t5 = t4 << 2
         t5 -= t4
         t5 <<= 1
         t7 = a2 + t5             // arg3
         halfword [t7 + 0x3544] = t8
         t9 = halfword [t9 - 0x5b5c]
         t2 = 0x8262 << 16
         at = 0x8262 << 16
         t0 = t9 << 2             // "\n@"
         t0 -= t9
         t0 <<= 1
         t1 = a2 + t0             // arg3
         halfword [t1 + 0x3546] = s0
         t2 = halfword [t2 - 0x5b5c]
         t3 = t2 + 1
         // CODE XREF from fcn.8021dc44 @ +0x2c4
         halfword [at - 0x5b5c] = t3

    loc_0x802372f0: // orphan
         t4 = halfword [a0 + 2]
         t6 = halfword [a0 + 6]
         t9 = 0x8262 << 16
         t9 = halfword [t9 - 0x5b5c]
         t7 = halfword [a0 + 4]
         t5 = t4 << 1
         t8 = t6 + t5
         if                       // unlikely
         a1 = t8 + t7             // arg2

    loc_0x80237314: // orphan
         t0 = halfword [v0 + 0x3544]
         t4 = 0x8262 << 16
         halfword [v0 + 0x3548] = v1
         t4 = halfword [t4 - 0x5b5c]
         t1 = t0 << 1
         t2 = a0 + t1             // arg1
         t3 = halfword [t2 + 0]
         s1 += 1
         at = , s1 < t4
         v0 += 6
         if                       // unlikely
         v1 += t3

    loc_0x80237344: // orphan
         s1 = 0

    loc_0x80237348: // orphan
         t6 = a1 - v1             // arg2
         if                       // likely
         t5 = , signed  t6 >> 1

    loc_0x80237354: // orphan
         at = t6 + 1
         t5 = , signed  at >> 1

    loc_0x8023735c: // orphan
         at = 0x8262 << 16
         // CODE XREF from fcn.8023e660 @ 0x8021df0c
         halfword [at - 0x5b5a] = t5
         t8 = 0x8262 << 16
         t8 = halfword [t8 - 0x5b5e] // s4
         s0 = 0x8262 << 16
         s0 -= 0x5a5c
         if                       // unlikely
         a0 = s0

    loc_0x8023737c: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14

    loc_0x80237384: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df10
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x8023738c: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70             // arg1
         a2 = 0 + 1               // arg3 // lo
         call fcn.826065b0
         a3 = s1

    loc_0x802373a0: // orphan
         t7 = [sp + 0x7c]
         s1 += 1
         t9 = halfword [t7 + 0x12]
         at = , s1 < t9
         bnel at, 0, 0x8023737c   // unlikely
         a0 = s0

    loc_0x802373b8: // orphan
         // CODE XREF from fcn.8021dc44 @ +0x2d0
         s1 = 0

    loc_0x802373bc: // orphan
         s0 = 0x8262 << 16
         s0 -= 0x5a5c
         a0 = s0
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x802373d8: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 2
         call fcn.826065b0
         a3 = 0

    loc_0x802373ec: // orphan
         if                       // unlikely
         a0 = s0

    loc_0x802373f4: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x80237418: // orphan
         a0 = s0

    loc_0x8023741c: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // fcn.80237430+0x10 // unlikely
         a1 = v0                  // s4

    loc_0x80237488: // orphan
         v0 = 0x8262 << 16
         v0 = , unsigned  halfword [v0 - 0x5b6c]
         ra = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // a2
         s4 = [sp + 0x28]
         v0 &= 1                  // lo
         v0 = , unsigned  , 0 < v0 // lo
         ret
         sp += 0x88

    loc_0x80237524: // orphan
         v1 += 0x10

    loc_0x80237528: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df24
         [v1 - 0x10] = 0
         [v1 - 0xc] = 0
         [v1 - 8] = 0
         if                       // likely
         [v1 - 4] = 0

    loc_0x8023753c: // orphan
         a3 = 0
         a1 = 0
         t0 = a2

    loc_0x80237548: // orphan
         v1 = , unsigned  byte [t0 + 0x10] // s4
         a3 += 1                  // arg4
         at = , a3 < 0xc          // arg4 // lo
         if                       // unlikely
         t9 = [sp + 0x64]

    loc_0x8023755c: // orphan
         t7 = , signed  v1 >> 4
         t8 = t7 & 0xf
         unsigned , hi            // lo // lo
         t4 = v1
         t6 = t4 & 0xf
         t7 = a1 << 1             // arg2
         t8 = a0 + t7             // arg1
         a1 += 1                  // arg2
         t5 = lo                  // hi
         v1 = t5 + t6             // hi
         t9 = v1 << 2
         halfword [t8 + 0x20] = v1
         t4 = t2 + t9
         goto 0x802375a0
         [t4 + 0] = t3

    loc_0x80237598: // orphan
         goto 0x802375ac
         a3 = 0

    loc_0x802375a0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80237590
         if                       // likely
         t0 += 1

    loc_0x802375a8: // orphan
         a3 = 0

    loc_0x802375ac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80237598
         if                       // unlikely
         halfword [a0 + 0x1c] = a1 // arg1

    loc_0x802375b4: // orphan
         t0 = v0 & 3
         if                       // unlikely
         a2 = t0

    loc_0x802375c0: // orphan
         t5 = a3 << 2             // arg4
         t6 = sp + 0x20
         v1 = t5 + t6

    loc_0x802375cc: // orphan
         t7 = [v1 + 0]
         t8 = a1 << 1             // arg2
         t9 = a0 + t8             // arg1
         bnel t7, 0, 0x802375ec   // unlikely
         a3 += 1                  // arg4

    loc_0x802375e0: // orphan
         halfword [t9 + 0x20] = a3
         a1 += 1                  // arg2
         a3 += 1                  // arg4

    loc_0x802375ec: // orphan
         if                       // likely
         v1 += 4

    loc_0x802375f4: // orphan
         if                       // unlikely
         t4 = a3 << 2             // arg4

    loc_0x802375f8: // orphan
         t4 = a3 << 2             // arg4

    loc_0x802375fc: // orphan
         t5 = sp + 0x20
         v1 = t4 + t5

    loc_0x80237604: // orphan
         t6 = [v1 + 0]
         t7 = a1 << 1             // arg2
         t4 = a3 + 1              // arg4
         if                       // unlikely
         t8 = a0 + t7             // arg1

    loc_0x80237618: // orphan
         halfword [t8 + 0x20] = a3
         a1 += 1                  // arg2

    loc_0x80237620: // orphan
         t9 = [v1 + 4]            // s4
         t5 = a1 << 1             // arg2
         t6 = a0 + t5             // arg1
         if                       // likely
         t8 = a3 + 2              // arg4 // lo

    loc_0x80237634: // orphan
         halfword [t6 + 0x20] = t4
         a1 += 1                  // arg2

    loc_0x8023763c: // orphan
         t7 = [v1 + 8]            // t9
         t9 = a1 << 1             // arg2
         t5 = a0 + t9             // arg1
         if                       // likely
         t6 = a3 + 3              // arg4

    loc_0x80237650: // orphan
         halfword [t5 + 0x20] = t8
         a1 += 1                  // arg2

    loc_0x80237658: // orphan
         t4 = [v1 + 0xc]          // t9
         t7 = a1 << 1             // arg2
         t9 = a0 + t7             // arg1
         if                       // likely
         a3 += 4                  // arg4

    loc_0x8023766c: // orphan
         halfword [t9 + 0x20] = t6
         a1 += 1                  // arg2

    loc_0x80237674: // orphan
         if                       // likely
         v1 += 0x10

    loc_0x8023767c: // orphan
         ret                      // ra
         sp += 0x60

    loc_0x80237c10: // orphan
         v1 = 0x8262 << 16
         t9 = halfword [t8 + 0x10]
         if                       // unlikely
         

    loc_0x80237c20: // orphan
         v1 = 0x8262 << 16
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         at = 0x8262 << 16
         v1 |= 2
         goto 0x80237c48
         halfword [at - 0x5b6c] = v1

    loc_0x80237c38: // orphan
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         at = 0x8262 << 16
         v1 &= 0xfffd
         halfword [at - 0x5b6c] = v1

    loc_0x80237c48: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80237c30
         t1 = , unsigned  halfword [t1 - 0x5b6c]
         at = 0x8262 << 16
         t7 = [sp + 0x68]         // t9
         t4 = t1 & 0xffdf
         halfword [at - 0x5b6c] = t4
         t6 = t4 | 0x40
         halfword [at - 0x5b6c] = t6
         at = 0x8262 << 16
         t3 = t6 & 0xfeff
         halfword [at - 0x5b6c] = t3
         call 0x826058cc          // 0x826058cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t7 + 7]
         if                       // likely
         t8 = [sp + 0x68]         // t9

    loc_0x80237c80: // orphan
         a0 = halfword [t8 + 0x88]
         call 0x8006cba0          // 0x8006cba0(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [t8 + 0x8a]
         if                       // unlikely
         v1 = 0x8262 << 16

    loc_0x80237c94: // orphan
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         at = 0x8262 << 16
         v1 &= 0xffef
         goto 0x80237e84
         halfword [at - 0x5b6c] = v1

    loc_0x80237ca8: // orphan
         v1 = 0x8262 << 16

    loc_0x80237cac: // orphan
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         at = 0x8262 << 16
         v1 |= 0x10
         goto 0x80237e84
         halfword [at - 0x5b6c] = v1

    loc_0x80237db8: // orphan
         halfword [at - 0x5b6c] = v1

    loc_0x80237dbc: // orphan
         v1 = 0x8262 << 16
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         at = 0x8262 << 16
         t7 = v1 & 0x200
         if                       // likely
         v1 |= 0x10

    loc_0x80237dd4: // orphan
         goto 0x80237e84
         halfword [at - 0x5b6c] = v1

    loc_0x80237e84: // orphan
         // XREFS: CODE 0x8021df40  CODE 0x80237bc4  CODE 0x80237ca0  
         // XREFS: CODE 0x80237cb8  CODE 0x80237cd8  CODE 0x80237d2c  
         // XREFS: CODE 0x80237d50  CODE 0x80237dd4  CODE 0x80237df4  
         // XREFS: CODE 0x80237e30  
         t9 = [sp + 0x68]
         a0 = 0x8262 << 16
         a0 -= 0x25b4
         call fcn.8260f084
         a1 = halfword [t9 + 0x88]

    loc_0x80237e98: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df44
         v1 = 0x8262 << 16
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         t7 = v1 & 0x100
         if                       // unlikely
         t2 = 0x8262 << 16

    loc_0x80237eac: // orphan
         t2 = [t2 - 0x5a60]       // t9
         t1 = [sp + 0x68]         // t9
         a1 = halfword [t2 + 0x14]
         call fcn.8260f7c4        // fcn.8260f7c4(-1, 0xfe11)
         a0 = byte [t1 + 1]
         at = 0x8262 << 16
         goto 0x80237ed4
         halfword [at - 0x5b5e] = v0

    loc_0x80237ecc: // orphan
         at = 0x8262 << 16
         halfword [at - 0x5b5e] = 0

    loc_0x80237ed4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80237ec4
         at = 0x8262 << 16
         halfword [at - 0x5b5c] = 0
         halfword [at - 0x5b5a] = 0
         at = 0x8262 << 16
         a0 = 0x8262 << 16
         halfword [at - 0x5b56] = 0
         halfword [at - 0x5b54] = 0
         a0 -= 0x5b70             // arg1
         call fcn.8260ffe8        // fcn.8260ffe8(0x8261a490, 0x442f71dcfe116408)
         a1 = [sp + 0x5c]
         t4 = 0x8262 << 16
         t4 = halfword [t4 - 0x5b5e]
         s0 = 0x8262 << 16
         s0 -= 0x5a5c
         if                       // likely
         a0 = s0

    loc_0x80237f14: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x80237f24: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 1               // lo
         call fcn.826065b0
         a3 = s1

    loc_0x80237f38: // orphan
         t6 = [sp + 0x6c]         // t3
         s1 += 1
         t3 = halfword [t6 + 0x12]
         at = , s1 < t3
         bnel at, 0, 0x80237f14   // unlikely
         a0 = s0

    loc_0x80237f50: // orphan
         s1 = 0

    loc_0x80237f54: // orphan
         v1 = 0x8262 << 16
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         s0 = 0x8262 << 16
         s0 -= 0x5a5c
         t5 = v1 & 0x200
         if                       // unlikely
         a0 = s0

    loc_0x80237f70: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x80237f80: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 2
         call fcn.826065b0
         a3 = 0

    loc_0x80237f94: // orphan
         a0 = s0
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x80237fa8: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 3
         call fcn.826065b0
         a3 = 0

    loc_0x80237fbc: // orphan
         a0 = s0

    loc_0x80237fc0: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // unlikely
         a1 = v0                  // s4

    loc_0x80237fd0: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 6
         // CODE XREF from fcn.8021dc44 @ +0x304
         call fcn.826065b0        // "&1"
         a3 = s1

    loc_0x80237fe0: // orphan
         a0 = 0x8262 << 16
         a0 -= 0x5b70
         a2 = 0 + 6
         // CODE XREF from fcn.8021dc44 @ +0x304
         call fcn.826065b0        // "&1"
         a3 = s1

    loc_0x80237fe4: // orphan
         s1 += 1
         at = , s1 < 2
         bnel at, 0, 0x80237fc0   // unlikely
         a0 = s0

    loc_0x80237ff4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df50
         t8 = [sp + 0x78]
         a0 = s0
         t9 = [t8 + 0xc]

    loc_0x80238118: // orphan
         call fcn.82604c08
         a1 = 0 + 0x14
         if                       // fcn.8023e660-0x6530 // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021df64
         a1 = v0                  // s4

    loc_0x80238130: // orphan
         v1 = 0x8262 << 16
         v1 = , unsigned  halfword [v1 - 0x5b6c]
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         v0 = v1 & 1              // lo
         v0 = , unsigned  , 0 < v0 // lo
         ret
         sp += 0x78

    loc_0x8023819c: // orphan
         halfword [at - 0x5b70] = a0
         at = 0 + 1               // lo

    loc_0x802381a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df70
         if                       // unlikely
         

    loc_0x802381ac: // orphan
         goto 0x802381d4
         ra = [sp + 0x14]

    loc_0x802381c4: // orphan
         call fcn.826101b4
         a0 = a2
         v1 = v0                  // s4
         ra = [sp + 0x14]

    loc_0x802381d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802381ac
         sp += 0x20
         v0 = v1
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x8021df7c
         

    loc_0x802381e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021df7c
         
         a1 = 0x8262 << 16

    loc_0x80238330: // orphan
         a1 = s1
         a2 = s3                  // t9
         a3 = 0 + 0x14            // arg4
         call fcn.82604c40
         v0 = 0
         // CODE XREF from fcn.8023e660 @ 0x8021dfa0
         t6 = halfword [v0 + 0x36]
         s1 += 1
         a2 = v0 + 0x30
         if                       // unlikely
         

    loc_0x80238358: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dfa4
         a1 = halfword [a2 + 6]
         v0 = 0
         v1 = a2
         a0 = a1 << 1             // arg2

    loc_0x80238368: // orphan
         t7 = halfword [v1 + 0x208]
         v0 += 2
         at = , v0 < a0           // lo
         if                       // unlikely
         

    loc_0x8023837c: // orphan
         s0 = 0

    loc_0x80238380: // orphan
         if                       // likely
         v1 += 2

    loc_0x80238388: // orphan
         beql s0, 0, 0x8023839c   // unlikely
         ra = [sp + 0x24]         // a2

    loc_0x80238390: // orphan
         bnel s1, s2, 0x80238330  // likely
         a0 = 0 + 6               // arg1

    loc_0x80238398: // orphan
         ra = [sp + 0x24]         // a2

    loc_0x8023839c: // orphan
         v0 = s0
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // ra
         // CODE XREF from fcn.8023e660 @ 0x8021dfb0
         sp += 0x28

    loc_0x802383c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dfb4
         s0 = a0                  // t9
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = v0
         mtc1 v0, f6
         at = 0x3f00 << 16
         // CODE XREF from fcn.8021dc44 @ +0x374
         mtc1 at, f2
         cvt.s.w f8, f6
         v1 = [sp + 0x24]         // s4
         at = 0x3fc0 << 16
         mtc1 at, f12
         mtc1 v1, f18
         mtc1 0, f4
         mul.s f10, f8, f2
         at = 0xbf00 << 16
         cvt.s.w f6, f18
         mul.s f16, f10, f12
         c.lt.s f4, f16
         mul.s f8, f6, f2

    loc_0x80238410: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dfbc
         
         mul.s f10, f8, f12
         bc1f 0x80238428
         
         goto 0x80238430
         mov.s f0, f2

    loc_0x80238430: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80238420
         add.s f4, f0, f10
         v1 = halfword [s0 + 0]
         at = 0 + 1               // lo
         trunc.w.s f16, f4
         mfc1 a1, f16
         // CODE XREF from fcn.8023e660 @ 0x8021dfd0
         beql v1, 0, 0x80238460   // unlikely
         t7 = halfword [s0 + 6]

    loc_0x8023844c: // orphan
         if                       // unlikely
         

    loc_0x80238454: // orphan
         goto 0x802384b8
         // CODE XREF from fcn.8023e660 @ 0x8021dfc4
         ra = [sp + 0x1c]

    loc_0x80238460: // orphan
         a0 = s0
         t8 = t7 + 1              // lo
         halfword [s0 + 6] = t8
         call fcn.82610d6c
         [sp + 0x2c] = a1
         if                       // unlikely
         a1 = [sp + 0x2c]

    loc_0x8023847c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dfc8
         t9 = halfword [s0 + 6]   // lo
         t0 = 0 + 2
         at = , t9 < a1           // lo
         bnel at, 0, 0x802384b8   // likely
         ra = [sp + 0x1c]

    loc_0x8023849c: // orphan
         call 0x82610e34          // 0x82610e34(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021dc44 @ +0x388
         a0 = s0
         if                       // unlikely
         t1 = 0 + 7

    loc_0x802384b4: // orphan
         ra = [sp + 0x1c]

    loc_0x802384b8: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8021dfd4, 0x80238454
         s0 = [sp + 0x18]
         sp += 0x30
         ret                      // ra
         

    loc_0x80238504: // orphan
         beql at, 0, 0x8023863c   // unlikely
         ra = [sp + 0x24]         // s4

    loc_0x8023850c: // orphan
         t0 = halfword [a0 + 0x12]
         t1 = 0 + 3
         t2 = 0 + 5
         if                       // unlikely
         s3 = s2 + 0x114

    loc_0x80238520: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021dfdc
         goto 0x8023852c
         halfword [a0 + 2] = t1   // arg1

    loc_0x80238528: // orphan
         halfword [s2 + 2] = t2

    loc_0x8023852c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80238520
         t3 = halfword [s2 + 0x12]
         halfword [s2 + 6] = 0
         // CODE XREF from fcn.8023e660 @ 0x8021dfe0
         halfword [s2 + 8] = 0
         if                       // likely
         halfword [s2 + 0x18] = 0

    loc_0x80238540: // orphan
         s0 = 0 - 1               // s2
         a0 = 0 + 1               // arg1 // lo

    loc_0x80238548: // orphan
         a1 = s1
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t4 = halfword [v0 + 0x32]
         bnel s0, t4, 0x80238584  // likely
         t0 = halfword [s2 + 0x12]

    loc_0x80238564: // orphan
         t5 = halfword [s2 + 0x18]
         t6 = t5 << 2
         t7 = s2 + t6
         [t7 + 0x34f4] = v0
         t8 = halfword [s2 + 0x18]
         t9 = t8 + 1              // lo
         halfword [s2 + 0x18] = t9
         t0 = halfword [s2 + 0x12]

    loc_0x80238584: // orphan
         s1 += 1
         at = , s1 < t0
         bnel at, 0, 0x80238548   // unlikely
         a0 = 0 + 1               // lo

    loc_0x80238594: // orphan
         s1 = 0

    loc_0x80238598: // orphan
         s3 = s2 + 0x114
         a2 = s3
         a0 = 0 + 2               // arg1
         a1 = 0
         call fcn.82604c40
         a3 = 0 + 0x14
         t1 = halfword [s2 + 0x18] // lo
         a0 = 0 + 3
         a1 = 0
         t2 = t1 << 2
         t3 = s2 + t2
         [t3 + 0x34f4] = v0
         t4 = halfword [s2 + 0x18] // lo
         a2 = s3
         a3 = 0 + 0x14

    loc_0x8023863c: // orphan
         s0 = [sp + 0x14]
         // CODE XREF from fcn.8021dc44 @ +0x3a8
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x802386f0: // orphan
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t0 = halfword [v0 + 0x32]
         s1 = v0                  // s4
         if                       // unlikely
         a0 = 0 + 1               // lo

    loc_0x80238710: // orphan
         a1 = s0
         a2 = s3                  // t9
         // CODE XREF from fcn.8021dc44 @ +0x3c0
         call fcn.82604c40
         a3 = 0 + 0x14
         t1 = halfword [s4 + 0x18]

    loc_0x80238724: // orphan
         a0 = s1
         t2 = t1 << 2
         // CODE XREF from fcn.8021dc44 @ +0x3c4
         t3 = s4 + t2
         [t3 + 0x34f4] = v0
         t4 = halfword [s4 + 0x18]
         t5 = t4 + 1              // lo
         halfword [s4 + 0x18] = t5
         t6 = [sp + 0x34]
         a1 = halfword [t6 + 0x26]
         if                       // likely
         at = a1

    loc_0x80238750: // orphan
         at = a1 + 1              // arg2

    loc_0x80238754: // orphan
         a1 = , signed  at >> 1   // arg2
         call 0x82607734          // 0x82607734(-1, 0x0, 0x8, -1)
         
         goto 0x80238780
         ra = [sp + 0x2c]

    loc_0x80238768: // orphan
         t7 = halfword [s4 + 0x12]
         s0 += 1

    loc_0x80238770: // orphan
         at = , s0 < t7
         bnel at, 0, 0x802386f0   // unlikely
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023877c: // orphan
         ra = [sp + 0x2c]

    loc_0x80238780: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80238760
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]
         ret                      // ra
         sp += 0x40

    loc_0x802387bc: // orphan
         a2 = s1
         a0 = 0 + 5               // arg1
         a1 = 0
         call fcn.82604c40
         a3 = 0 + 0x14
         [sp + 0x28] = v0
         t6 = halfword [s2 + 0x12]
         t0 = 0
         v1 = 0
         if                       // likely
         s0 = 0

    loc_0x802387e8: // orphan
         s3 = 0 - 1               // s2
         a0 = 0 + 1               // lo

    loc_0x802387f0: // orphan
         a1 = s0
         // CODE XREF from fcn.8021dc44 @ +0x3cc
         a2 = s1
         call fcn.82604c40
         a3 = 0 + 0x14
         t7 = halfword [v0 + 0x32]
         t0 = v0                  // s4
         v1 = v0 + 0x30
         bnel s3, t7, 0x8023882c  // likely
         t9 = [sp + 0x28]         // s4

    loc_0x80238814: // orphan
         t8 = halfword [s2 + 0x12]
         // CODE XREF from fcn.8021dc44 @ +0x3d0
         s0 += 1
         at = , s0 < t8
         bnel at, 0, 0x802387f0   // unlikely
         a0 = 0 + 1               // lo

    loc_0x80238828: // orphan
         t9 = [sp + 0x28]         // s4

    loc_0x8023882c: // orphan
         s3 = 0 - 1               // s2
         at = 0 + 2
         v0 = halfword [t9 + 6]
         beql v0, 0, 0x80238854   // unlikely
         t1 = halfword [v1 + 2]

    loc_0x80238840: // orphan
         beql v0, at, 0x802388cc  // unlikely
         t4 = halfword [s2 + 6]

    loc_0x80238848: // orphan
         goto 0x80238994
         ra = [sp + 0x24]         // s4

    loc_0x80238854: // orphan
         beql s3, t1, 0x80238994  // unlikely
         ra = [sp + 0x24]         // s4

    loc_0x8023885c: // orphan
         // CODE XREF from fcn.8021dc44 @ +0x3d4
         t2 = halfword [t0 + 6]   // s4
         t3 = [sp + 0x28]         // s4
         at = 0 + 2
         if                       // likely
         a0 = t3                  // s4

    loc_0x802388cc: // orphan
         t6 = 0x8261 << 16
         t7 = 0x8008 << 16
         // CODE XREF from fcn.8021dc44 @ +0x3dc
         t3 = t4 + 1
         halfword [s2 + 6] = t3
         t6 = [t6 + 0x53c4]
         t5 = halfword [s2 + 6]
         t2 = 0 + 5
         // CODE XREF from fcn.8021dc44 @ +0x3e0
         at = , t5 < t6           // lo

    loc_0x802388ec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e268
         beql at, 0, 0x8023890c   // unlikely
         halfword [s2 + 0x18] = 0

    loc_0x80238938: // orphan
         halfword [s2 + 0x18] = t7
         t9 = halfword [s2 + 0x18]
         t8 = [sp + 0x28]         // s4
         t2 = t9 << 2
         t4 = s2 + t2
         [t4 + 0x34f4] = t8
         t3 = halfword [s2 + 0x18]
         t5 = t3 + 1              // lo
         halfword [s2 + 0x18] = t5
         t6 = halfword [s2 + 0x18] // lo
         if                       // unlikely
         

    loc_0x80238968: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]       // t9
         t7 = halfword [s2 + 0x18] // lo
         s0 += 1
         s1 += 4
         at = , s0 < t7
         if                       // unlikely
         

    loc_0x80238988: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         ra = [sp + 0x24]         // s4

    loc_0x80238994: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80238848
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x30

    loc_0x80238c70: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e28c
         t7 = 0x8261 << 16
         t7 = [t7 + 0x5778]
         t6 = lo
         
         
         div 0, t6, t7
         t8 = lo
         t9 = v0 - t8             // t3
         halfword [s3 + 0xc] = t9
         if                       // likely
         

    loc_0x80238cac: // orphan
         if                       // likely
         

    loc_0x80238cb4: // orphan
         break 6

    loc_0x80238cb8: // orphan
         s0 = 0
         a0 = 0 + 4               // arg1

    loc_0x80238cc0: // orphan
         a1 = s0
         a2 = s5                  // t9
         a3 = 0 + 0x14            // arg4
         call fcn.82604c40
         v0 = 0
         t1 = halfword [v0 + 0x36]
         s0 += 1
         a2 = v0 + 0x30
         if                       // unlikely
         

    loc_0x80238ce8: // orphan
         a1 = halfword [a2 + 6]
         // CODE XREF from fcn.8021e030 @ 0x8021e058
         v0 = 0
         v1 = a2
         a0 = a1 << 1

    loc_0x80238cf8: // orphan
         t2 = halfword [v1 + 0x14]
         v0 += 2

    loc_0x80238d00: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e05c
         at = , v0 < a0           // lo
         if                       // unlikely
         

    loc_0x80238d0c: // orphan
         s2 = 0

    loc_0x80238d10: // orphan
         if                       // likely
         // CODE XREF from fcn.8021e030 @ +0x30
         v1 += 2

    loc_0x80238d18: // orphan
         if                       // unlikely
         at = , s0 < 2

    loc_0x80238d20: // orphan
         bnel at, 0, 0x80238cc0   // likely
         a0 = 0 + 4               // arg1

    loc_0x80238d28: // orphan
         beql s2, 0, 0x80238dd8   // unlikely
         t2 = [sp + 0x38]

    loc_0x80238d30: // orphan
         t3 = halfword [s3 + 0xc]
         t4 = 0 + 0x13
         s0 = 0
         bnel t3, 0, 0x80238dd8   // likely
         t2 = [sp + 0x38]

    loc_0x80238d44: // orphan
         halfword [s3 + 2] = t4
         halfword [s3 + 6] = 0
         halfword [s3 + 0x18] = 0

    loc_0x80238d50: // orphan
         a0 = 0 + 4               // arg1
         a1 = s0
         a2 = s5                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t5 = halfword [s3 + 0x18]

    loc_0x80238d68: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e064
         s0 += 1
         at = , s0 < 2
         t6 = t5 << 2
         t7 = s3 + t6
         [t7 + 0x34f4] = v0
         t8 = halfword [s3 + 0x18]
         t9 = t8 + 1              // lo
         if                       // unlikely
         halfword [s3 + 0x18] = t9

    loc_0x80238d8c: // orphan
         v0 = halfword [s3 + 0x18] // lo
         s0 = 0
         s1 = s3                  // t9
         blezl v0, 0x80238dd8     // unlikely
         t2 = [sp + 0x38]

    loc_0x80238da0: // orphan
         a0 = [s1 + 0x34f4]       // t9
         t1 = halfword [a0 + 6]
         bnel s4, t1, 0x80238dc8  // likely
         s0 += 1

    loc_0x80238db0: // orphan
         call fcn.826078b4
         
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         v0 = halfword [s3 + 0x18] // lo
         s0 += 1

    loc_0x80238dc8: // orphan
         at = , s0 < v0
         if                       // unlikely
         s1 += 4

    loc_0x80238dd4: // orphan
         t2 = [sp + 0x38]

    loc_0x80238dd8: // orphan
         a0 = 0 + 4               // arg1
         a1 = 0
         if                       // unlikely
         a2 = s5                  // t9

    loc_0x80238de8: // orphan
         t3 = halfword [s3 + 2]
         at = 0 + 5
         beql t3, at, 0x80238e00  // unlikely
         t4 = [sp + 0x38]

    loc_0x80238df8: // orphan
         [sp + 0x38] = 0

    loc_0x80238dfc: // orphan
         t4 = [sp + 0x38]

    loc_0x80238e00: // orphan
         if                       // unlikely
         

    loc_0x80238e08: // orphan
         call fcn.82604c40
         a3 = 0 + 0x14
         t9 = halfword [v0 + 0x26]
         t5 = halfword [v0 + 0x10]
         t6 = halfword [v0 + 0x14]
         t7 = halfword [v0 + 0x12]
         t8 = halfword [v0 + 0x16]
         a0 = [s3 + 0x110]        // t9
         a3 = halfword [v0 + 0x24]
         t1 = t9 << 1
         [sp + 0x10] = t1
         a1 = t5 + t6
         call fcn.826026e8        // fcn.826026e8(-1)
         a2 = t7 + t8
         goto 0x80238e54
         ra = [sp + 0x34]

    loc_0x80238e48: // orphan
         call fcn.82602708
         a0 = [s3 + 0x110]        // t9
         ra = [sp + 0x34]

    loc_0x80238e54: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80238e40
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]         // t9
         s2 = [sp + 0x24]         // s4
         s3 = [sp + 0x28]         // s4
         s4 = [sp + 0x2c]
         s5 = [sp + 0x30]         // s4
         ret                      // ra
         sp += 0x40

    loc_0x80239200: // orphan
         s6 = [sp + 0x38]
         s7 = [sp + 0x3c]         // s4
         fp = [sp + 0x40]         // t9
         ret                      // ra
         sp += 0x80

    loc_0x802393d8: // orphan
         t2 = [t2 + 0x5780]       // t9
         t1 = halfword [v1 + 0x12]
         at = , t1 < t2           // lo
         beql at, 0, 0x802393f8   // unlikely
         halfword [v1 + 0x10] = t3

    loc_0x802393ec: // orphan
         goto fcn.80239588        // fcn.80239588(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1, -1, -1, -1, 0x0, 0x0)
         halfword [v1 + 0x14] = s2

    loc_0x802393f8: // orphan
         halfword [v1 + 0x12] = 0
         goto fcn.80239588        // fcn.80239588(-1, 0x442f71dcfe116408, 0x8, -1, -1, -1, -1, -1, -1, -1, 0x0, 0x0)
         halfword [v1 + 0x14] = s2

    loc_0x80239468: // orphan
         break 6

    loc_0x802399c0: // orphan
         
         t5 = a0 - v1             // arg1
         unsigned , hi            // t3 // t3
         t6 = lo
         
         
         div 0, t6, v1
         t7 = lo
         halfword [s2 + 0xe] = t7
         if                       // likely
         

    loc_0x80239c60: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x80239d3c: // orphan
         t7 = 0x8008 << 16
         t4 = t3 + 1              // s4
         halfword [s2 + 6] = t4
         t6 = [t6 + 0x53c4]       // t9
         t5 = halfword [s2 + 6]   // s4
         at = , t5 < t6           // lo
         beql at, 0, 0x80239d74   // unlikely
         v1 = , unsigned  halfword [s2 + 4]

    loc_0x80239d5c: // orphan
         t7 = [t7 + 0x7200]       // t9
         t8 = , unsigned  halfword [t7 + 8]
         t9 = t8 & 0x8000
         beql t9, 0, 0x80239e68   // likely
         ra = [sp + 0x24]         // s4

    loc_0x80239d70: // orphan
         v1 = , unsigned  halfword [s2 + 4]

    loc_0x80239d74: // orphan
         t1 = 0 + 0x11
         t0 = v1 & 0x200
         if                       // unlikely
         t2 = v1 & 4

    loc_0x80239d84: // orphan
         halfword [s2 + 2] = t1
         goto 0x80239dec
         halfword [s2 + 6] = 0

    loc_0x80239d90: // orphan
         if                       // unlikely
         t4 = v1 & 0x100

    loc_0x80239d98: // orphan
         t3 = 0 + 0xc
         halfword [s2 + 2] = t3
         goto 0x80239dec
         halfword [s2 + 6] = 0

    loc_0x80239da8: // orphan
         if                       // unlikely
         t6 = v1 & 0x10

    loc_0x80239db0: // orphan
         t5 = 0 + 0xd
         halfword [s2 + 2] = t5
         goto 0x80239dec
         halfword [s2 + 6] = 0

    loc_0x80239dc0: // orphan
         if                       // unlikely
         t8 = 0 + 0x13

    loc_0x80239dc8: // orphan
         t7 = 0 + 0xe
         halfword [s2 + 2] = t7
         goto 0x80239dec
         halfword [s2 + 6] = 0

    loc_0x80239dd8: // orphan
         t0 = [s2 + 0x110]
         halfword [s2 + 2] = t8
         halfword [s2 + 6] = 0
         t9 = 0 + 2
         [t0 + 0x9c] = t9

    loc_0x80239dec: // orphan
         halfword [s2 + 0x18] = 0
         t1 = halfword [s2 + 0x18]
         s0 = 0
         t2 = t1 << 2
         t3 = s2 + t2
         [t3 + 0x34f4] = v0
         t4 = halfword [s2 + 0x18]
         t5 = t4 + 1              // lo
         halfword [s2 + 0x18] = t5
         t6 = halfword [s2 + 0x18] // lo
         t7 = t6 << 2
         t8 = s2 + t7
         [t8 + 0x34f4] = s1
         // CODE XREF from fcn.8023e3c0 @ 0x8023e33c
         t9 = halfword [s2 + 0x18] // lo
         s1 = s2
         t0 = t9 + 1
         halfword [s2 + 0x18] = t0
         t1 = halfword [s2 + 0x18]
         if                       // unlikely
         

    loc_0x80239e3c: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]       // t9
         t2 = halfword [s2 + 0x18]
         s0 += 1
         s1 += 4
         at = , s0 < t2

    loc_0x80239e54: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e340
         if                       // likely
         

    loc_0x80239e5c: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         ra = [sp + 0x24]         // s4

    loc_0x80239e68: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x80239e9c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e348
         [sp + 0x14] = s0
         a2 = s3                  // t9
         [sp + 0x34] = t0
         a0 = 0 + 7               // arg1
         a1 = 0
         call fcn.82604c40
         a3 = 0 + 0x14
         t6 = [s2 + 0x110]
         t0 = [sp + 0x34]
         s0 = 0
         t7 = [t6 + 0]
         s1 = s2
         [sp + 0x28] = t7
         v1 = halfword [s2 + 0x18]
         if                       // unlikely
         

    loc_0x80239edc: // orphan
         t8 = [s1 + 0x34f4]       // t9
         s0 += 1
         at = , s0 < v1           // lo
         t9 = halfword [t8 + 6]
         if                       // likely
         

    loc_0x80239ef4: // orphan
         goto 0x80239f04
         t0 = 0

    loc_0x80239efc: // orphan
         if                       // likely
         s1 += 4

    loc_0x80239f04: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80239ef4
         beql t0, 0, 0x8023a088   // unlikely
         ra = [sp + 0x24]         // s4

    loc_0x80239f0c: // orphan
         v1 = halfword [v0 + 6]
         s0 = 0
         s1 = 0 + 2
         if                       // unlikely
         

    loc_0x80239f20: // orphan
         s1 = 0 + 2
         beql v1, s1, 0x80239f84  // unlikely
         v1 = halfword [s2 + 0x35bc]

    loc_0x80239f2c: // orphan
         goto 0x8023a088
         ra = [sp + 0x24]         // s4

    loc_0x80239f34: // orphan
         a0 = 0 + 7

    loc_0x80239f38: // orphan
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         call fcn.8260675c
         a0 = v0                  // s4
         s0 += 1
         bnel s0, s1, 0x80239f38  // likely
         a0 = 0 + 7

    loc_0x80239f5c: // orphan
         t1 = [sp + 0x28]
         at = 0 + 7
         t2 = halfword [t1 + 0x88]
         bnel t2, at, 0x8023a088  // likely
         ra = [sp + 0x24]         // s4

    loc_0x80239f70: // orphan
         call 0x80021ed8          // 0x80021ed8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x60
         goto 0x8023a088
         ra = [sp + 0x24]         // s4

    loc_0x80239f84: // orphan
         at = 0 + 6
         if                       // unlikely
         

    loc_0x80239f90: // orphan
         beql v1, at, 0x80239fb4  // unlikely
         t3 = halfword [s2 + 8]

    loc_0x80239f98: // orphan
         goto 0x8023a088
         ra = [sp + 0x24]         // s4

    loc_0x80239fa0: // orphan
         call 0x8260f0dc          // 0x8260f0dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2 + 0x35bc
         goto 0x8023a084
         halfword [s2 + 8] = 0

    loc_0x80239fb4: // orphan
         t6 = 0x8261 << 16
         t4 = t3 + 1              // s4
         halfword [s2 + 8] = t4
         t6 = [t6 + 0x53d0]
         t5 = halfword [s2 + 8]   // s4
         at = , t5 < t6           // lo
         bnel at, 0, 0x8023a088   // likely
         // CODE XREF from fcn.8021e030 @ 0x8021e0ac
         ra = [sp + 0x24]         // s4

    loc_0x80239fd4: // orphan
         t7 = , unsigned  halfword [s2 + 4]
         s0 = 0
         t9 = 0 + 0xe
         t8 = t7 & 0x10
         if                       // likely
         t1 = 0 + 0x13

    loc_0x80239fec: // orphan
         goto 0x8023a004
         halfword [s2 + 2] = t9

    loc_0x80239ff4: // orphan
         t3 = [s2 + 0x110]
         halfword [s2 + 2] = t1
         t2 = 0 + 2
         [t3 + 0x9c] = t2

    loc_0x8023a004: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80239fec
         halfword [s2 + 6] = 0
         halfword [s2 + 0x18] = 0

    loc_0x8023a00c: // orphan
         a0 = 0 + 7
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t4 = halfword [s2 + 0x18]

    loc_0x8023a024: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0b0
         s0 += 1
         at = , s0 < 2
         t5 = t4 << 2
         t6 = s2 + t5
         [t6 + 0x34f4] = v0
         t7 = halfword [s2 + 0x18]
         t8 = t7 + 1              // lo
         if                       // unlikely
         halfword [s2 + 0x18] = t8

    loc_0x8023a048: // orphan
         t9 = halfword [s2 + 0x18] // lo
         s0 = 0

    loc_0x8023a084: // orphan
         // CODE XREF from fcn.8023e660 @ 0x80239fa8
         ra = [sp + 0x24]         // s4

    loc_0x8023a088: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x80239f2c, 0x80239f78, 0x80239f98
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9

    loc_0x8023a098: // orphan
         ret                      // ra
         sp += 0x38

    loc_0x8023a270: // orphan
         a1 = s0
         a2 = s3                  // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t6 = halfword [v0 + 0x32]
         v1 = v0 + 0x30
         beql s1, t6, 0x8023a2c0  // unlikely
         t4 = halfword [s2 + 0x12]

    loc_0x8023a290: // orphan
         t7 = halfword [v1 + 2]

    loc_0x8023a294: // orphan
         t0 = 0 + 1               // lo
         a0 = 0 + 0x77
         t8 = t7 << 1
         t9 = v1 + t8
         halfword [t9 + 0x12] = 0
         t1 = halfword [v1 + 2]
         t2 = t1 << 1
         t3 = v1 + t2
         call 0x800226c0          // 0x800226c0(0x77, 0x442f71dcfe116408, 0x8, -1)
         halfword [t3 + 0x54] = t0
         t4 = halfword [s2 + 0x12]

    loc_0x8023a2c0: // orphan
         s0 += 1
         at = , s0 < t4           // lo
         bnel at, 0, 0x8023a270   // likely
         a0 = 0 + 1               // lo

    loc_0x8023a2d0: // orphan
         ra = [sp + 0x24]         // s4

    loc_0x8023a2d4: // orphan
         // CODE XREFS from fcn.8021e030 @ 0x8023a110, 0x8023a154
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x8023a330: // orphan
         a0 = 0 + 0xa
         a1 = 0
         a2 = [sp + 0x20]         // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         [sp + 0x44] = v0
         t6 = [s0 + 0x110]
         t7 = [t6 + 0]
         [sp + 0x38] = 0
         call 0x82610d14          // 0x82610d14(0xa, 0x0, -1, 0x14)
         [sp + 0x3c] = t7
         if                       // unlikely
         t8 = [sp + 0x48]

    loc_0x8023a364: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0d0
         v0 = halfword [t8 + 6]

    loc_0x8023a368: // orphan
         at = 0 + 2
         beql v0, 0, 0x8023a388   // unlikely
         v0 = , unsigned  halfword [s0 + 4]

    loc_0x8023a374: // orphan
         if                       // unlikely
         a3 = 0x8008 << 16

    loc_0x8023a37c: // orphan
         goto 0x8023a57c
         t7 = [sp + 0x38]

    loc_0x8023a388: // orphan
         t9 = v0 & 8              // a2
         beql t9, 0, 0x8023a3a4   // unlikely
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
         a0 = [sp + 0x44]         // s4

    loc_0x8023a3b4: // orphan
         call fcn.8260675c
         a0 = [sp + 0x48]
         goto 0x8023a57c
         t7 = [sp + 0x38]

    loc_0x8023a3c4: // orphan
         a3 += 0x7200
         t2 = [a3 + 0]            // t9
         v0 = [sp + 0x48]
         t0 = 0 + 0xc
         t3 = , unsigned  halfword [t2 + 0xc]
         v1 = halfword [v0 + 0x32]
         v0 += 0x30
         t4 = t3 & 0x800
         if                       // likely
         a1 = v1

    loc_0x8023a3ec: // orphan
         t5 = v1 - 1
         halfword [v0 + 2] = t5
         v1 = halfword [v0 + 2]
         bgezl v1, 0x8023a40c     // likely
         t6 = [a3 + 0]            // t9

    loc_0x8023a400: // orphan
         halfword [v0 + 2] = 0
         v1 = halfword [v0 + 2]

    loc_0x8023a408: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0d4
         t6 = [a3 + 0]            // arg4 // t9

    loc_0x8023a40c: // orphan
         t9 = v1 + 1
         t7 = , unsigned  halfword [t6 + 0xc]
         t8 = t7 & 0x400
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0xa8
         

    loc_0x8023a420: // orphan
         a0 = halfword [v0 + 4]
         halfword [v0 + 2] = t9
         v1 = halfword [v0 + 2]
         a0 -= 1                  // arg1
         at = , a0 < v1           // lo
         if                       // unlikely
         

    loc_0x8023a43c: // orphan
         halfword [v0 + 2] = a0
         v1 = halfword [v0 + 2]

    loc_0x8023a444: // orphan
         unsigned , hi
         a0 = [v0 + 8]
         t1 = lo
         a2 = a0 + t1             // arg3
         t2 = halfword [a2 + 0]
         if                       // likely
         

    loc_0x8023a460: // orphan
         halfword [v0 + 2] = a1
         v1 = halfword [v0 + 2]
         unsigned , hi
         t3 = lo
         a2 = a0 + t3             // arg3
         

    loc_0x8023a478: // orphan
         if                       // unlikely
         a0 = 0 + 1               // arg1 // lo

    loc_0x8023a480: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x28] = a2
         a3 = 0x8008 << 16
         a3 += 0x7200
         a2 = [sp + 0x28]

    loc_0x8023a494: // orphan
         t4 = [a3 + 0]            // arg4 // t9
         t7 = 0 + 1               // lo
         t5 = , unsigned  halfword [t4 + 8]

    loc_0x8023a4a0: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0dc
         t6 = t5 & 0x8000
         beql t6, 0, 0x8023a57c   // unlikely
         t7 = [sp + 0x38]

    loc_0x8023a4ac: // orphan
         [sp + 0x38] = t7

    loc_0x8023a57c: // orphan
         t8 = 0 + 0xf
         a0 = 0 + 8               // arg1 // a2
         if                       // likely
         a1 = 0

    loc_0x8023a58c: // orphan
         halfword [s0 + 2] = t8
         halfword [s0 + 6] = 0

    loc_0x8023a594: // orphan
         halfword [s0 + 0x18] = 0
         a2 = [sp + 0x20]         // t9
         call fcn.82604c40
         a3 = 0 + 0x14
         t9 = halfword [s0 + 0x18]
         a0 = 0 + 0xa

    loc_0x8023a5ac: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8021e0f8
         a1 = 0
         t1 = t9 << 2
         t2 = s0 + t1
         [t2 + 0x34f4] = v0
         t3 = halfword [s0 + 0x18]
         a3 = 0 + 0x14
         t4 = t3 + 1              // lo
         halfword [s0 + 0x18] = t4
         call fcn.82604c40
         a2 = [sp + 0x20]         // t9
         t6 = halfword [s0 + 0x18] // lo
         a0 = 0 + 9
         a1 = 0
         t5 = t6 << 2
         t7 = s0 + t5
         [t7 + 0x34f4] = v0
         t8 = halfword [s0 + 0x18] // lo
         a3 = 0 + 0x14
         t9 = t8 + 1
         halfword [s0 + 0x18] = t9
         call fcn.82604c40
         a2 = [sp + 0x20]         // t9
         t1 = halfword [s0 + 0x18]
         v1 = 0
         a0 = s0
         t2 = t1 << 2             // a2
         t3 = s0 + t2
         [t3 + 0x34f4] = v0
         t4 = halfword [s0 + 0x18]
         t6 = t4 + 1
         halfword [s0 + 0x18] = t6
         a1 = halfword [s0 + 0x18]

    loc_0x8023a62c: // orphan
         blezl a1, 0x8023a664     // unlikely
         ra = [sp + 0x1c]

    loc_0x8023a634: // orphan
         v0 = [a0 + 0x34f4]       // t9
         v1 += 1
         beql v0, 0, 0x8023a658   // unlikely
         at = , v1 < a1           // lo

    loc_0x8023a644: // orphan
         t5 = , unsigned  halfword [v0 + 4]
         t7 = t5 | 1
         halfword [v0 + 4] = t7
         a1 = halfword [s0 + 0x18]
         at = , v1 < a1

    loc_0x8023a658: // orphan
         if                       // likely
         a0 += 4

    loc_0x8023a660: // orphan
         ra = [sp + 0x1c]

    loc_0x8023a664: // orphan
         s0 = [sp + 0x18]
         sp += 0x50
         ret                      // ra
         

    loc_0x8023a680: // orphan
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         t6 = halfword [a0 + 6]
         v1 = halfword [a0 + 0x18] // lo
         s2 = a0                  // t9
         t7 = t6 + 1              // lo
         a1 = 0 + 1               // lo
         halfword [a0 + 6] = t7
         if                       // unlikely
         s1 = 0

    loc_0x8023a6a8: // orphan
         s0 = a0                  // t9

    loc_0x8023a6ac: // orphan
         v0 = [s0 + 0x34f4]       // t9
         s1 += 1
         at = , s1 < v1
         if                       // unlikely
         

    loc_0x8023a6c0: // orphan
         t8 = halfword [v0 + 0xc] // s4
         if                       // unlikely
         

    loc_0x8023a6c8: // orphan
         

    loc_0x8023a6cc: // orphan
         goto 0x8023a6dc
         a1 = 0

    loc_0x8023a6d4: // orphan
         if                       // likely
         s0 += 4

    loc_0x8023a6dc: // orphan
         t0 = 0x8261 << 16
         t0 = halfword [t0 + 0x57b0]
         t9 = halfword [s2 + 6]
         at = , t9 < t0           // lo

    loc_0x8023a6ec: // orphan
         bnel at, 0, 0x8023a794   // likely
         ra = [sp + 0x24]         // s4

    loc_0x8023a6f4: // orphan
         beql a1, 0, 0x8023a794   // unlikely
         ra = [sp + 0x24]         // s4

    loc_0x8023a6fc: // orphan
         v0 = [s2 + 0x110]
         at = 0 + 7
         s1 = 0
         t1 = [v0 + 0x9c]
         bnel t1, at, 0x8023a738  // likely
         v0 = 0

    loc_0x8023a714: // orphan
         call 0x80054e10          // 0x80054e10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 + 0x900
         if                       // unlikely
         

    loc_0x8023a724: // orphan
         goto 0x8023a738
         v0 = 0 + 1               // lo

    loc_0x8023a72c: // orphan
         goto 0x8023a738
         v0 = 0

    loc_0x8023a738: // orphan
         if                       // unlikely
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
         t4 = halfword [s2 + 0x18] // lo
         s0 = s2
         if                       // unlikely
         

    loc_0x8023a768: // orphan
         call fcn.826078b4
         a0 = [s0 + 0x34f4]       // t9
         t5 = halfword [s2 + 0x18] // lo
         s1 += 1
         s0 += 4
         at = , s1 < t5
         if                       // unlikely
         

    loc_0x8023a788: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         ra = [sp + 0x24]         // s4

    loc_0x8023a794: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x28

    loc_0x8023a870: // orphan
         // CODE XREF from fcn.8021e030 @ 0x8023a830
         // CODE XREF from fcn.8023e660 @ 0x8023e39c
         call 0x82610d14          // "P@" // 0x82610d14(-1, 0x442f71dcfe116408, 0x8, -1)
         
         beql v0, 0, 0x8023a998   // unlikely
         ra = [sp + 0x24]         // s4

    loc_0x8023a880: // orphan
         v0 = halfword [s1 + 6]
         at = 0 + 2
         if                       // unlikely
         

    loc_0x8023a890: // orphan
         beql v0, at, 0x8023a8e8  // unlikely
         t1 = halfword [s2 + 6]

    loc_0x8023a898: // orphan
         goto 0x8023a998
         ra = [sp + 0x24]         // s4

    loc_0x8023a8a0: // orphan
         call fcn.8260675c
         a0 = s1
         call fcn.8260675c
         a0 = [sp + 0x28]         // a2
         t9 = [s2 + 0x110]
         // CODE XREF from fcn.8023d410 @ +0xf90
         at = 0 + 0x300
         t0 = [t9 + 0]
         v0 = , unsigned  halfword [t0 + 8]
         v0 &= 0xff00
         if                       // unlikely
         // CODE XREF from fcn.8023d410 @ +0xf94
         at = 0 + 0x600

    loc_0x8023a8cc: // orphan
         bnel v0, at, 0x8023a998  // likely
         ra = [sp + 0x24]         // s4

    loc_0x8023a8d4: // orphan
         call 0x800355e4          // 0x800355e4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x53
         goto 0x8023a998
         ra = [sp + 0x24]         // s4

    loc_0x8023a8e8: // orphan
         t4 = 0 + 0x13
         t2 = t1 + 1
         halfword [s2 + 6] = t2
         t3 = halfword [s2 + 6]
         at = , t3 < s0           // lo
         bnel at, 0, 0x8023a998   // likely
         ra = [sp + 0x24]         // s4

    loc_0x8023a904: // orphan
         halfword [s2 + 0x18] = 0
         t5 = halfword [s2 + 0x18]
         halfword [s2 + 2] = t4
         halfword [s2 + 6] = 0
         t6 = t5 << 2
         t7 = s2 + t6
         [t7 + 0x34f4] = s1
         t8 = halfword [s2 + 0x18]
         s1 = s2
         s0 = 0
         t9 = t8 + 1              // lo
         halfword [s2 + 0x18] = t9
         t1 = halfword [s2 + 0x18] // lo
         // CODE XREF from fcn.8023e660 @ 0x8021e114
         t0 = [sp + 0x28]         // a2
         t2 = t1 << 2
         t3 = s2 + t2
         [t3 + 0x34f4] = t0
         t4 = halfword [s2 + 0x18] // lo
         t5 = t4 + 1
         halfword [s2 + 0x18] = t5
         t6 = halfword [s2 + 0x18]
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e108
         

    loc_0x8023a960: // orphan
         call fcn.826078b4
         a0 = [s1 + 0x34f4]       // t9
         t7 = halfword [s2 + 0x18]
         s0 += 1

    loc_0x8023a970: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e10c
         s1 += 4
         at = , s0 < t7
         if                       // unlikely
         

    loc_0x8023a980: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x69
         t9 = [s2 + 0x110]
         t8 = 0 + 2
         [t9 + 0x9c] = t8
         ra = [sp + 0x24]         // s4

    loc_0x8023a998: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023a898, 0x8023a8dc
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         ret                      // ra
         sp += 0x30

    loc_0x8023aafc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e118
         t8 = 0 + 1               // lo
         t7 = , unsigned  halfword [t6 + 8]
         t9 = t7 & 0x8000
         beql t9, 0, 0x8023ab90   // unlikely
         t9 = [sp + 0x30]         // s4

    loc_0x8023ab10: // orphan
         [sp + 0x30] = t8
         call 0x826058cc          // 0x826058cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [s0 + 7]
         if                       // likely
         a0 = 0

    loc_0x8023ab24: // orphan
         goto 0x8023ab2c
         a0 = 0 + 1               // lo

    loc_0x8023ab2c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023ab24
         t0 = halfword [s1 + 0x1e]
         t1 = [sp + 0x24]         // s4
         t4 = [sp + 0x34]
         bnel t0, 0, 0x8023ab78   // likely
         t5 = [t4 + 8]            // t9

    loc_0x8023ab40: // orphan
         t2 = halfword [t1 + 2]
         if                       // unlikely
         // CODE XREF from fcn.8023d410 @ +0xfa4
         

    loc_0x8023ab4c: // orphan
         v0 = halfword [s0 + 0x8c]
         if                       // unlikely
         t3 = v0 - 1

    loc_0x8023ab58: // orphan
         halfword [s0 + 0x8c] = t3

    loc_0x8023ab5c: // orphan
         call 0x8006cc18          // 0x8006cc18(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s0 + 0x8c] // t3
         call 0x800226c0          // 0x800226c0(-1, 0xfe, 0x8, -1)
         a0 = 0 + 0x83
         goto 0x8023ab90
         t9 = [sp + 0x30]

    loc_0x8023ab78: // orphan
         t7 = [s1 + 0x110]        // t9
         a0 = 0 + 0x93
         t6 = , unsigned  halfword [t5 + 6] // lo
         call 0x800226c0          // 0x800226c0(0x93, 0x442f71dcfe116408, 0x8, -1)
         [t7 + 0x9c] = t6
         t9 = [sp + 0x30]

    loc_0x8023ab90: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023ab6c
         beql t9, 0, 0x8023ac24   // unlikely
         ra = [sp + 0x1c]

    loc_0x8023ab98: // orphan
         t8 = halfword [s1 + 0x1e]
         t0 = 0 + 0x13
         t1 = 0 + 0x12
         if                       // likely
         s0 = s1

    loc_0x8023abac: // orphan
         goto 0x8023abb8
         halfword [s1 + 2] = t0

    loc_0x8023abb4: // orphan
         halfword [s1 + 2] = t1

    loc_0x8023abb8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023abac
         halfword [s1 + 0x18] = 0
         t3 = halfword [s1 + 0x18]
         halfword [s1 + 6] = 0
         t2 = [sp + 0x3c]
         t4 = t3 << 2
         t5 = s1 + t4
         [t5 + 0x34f4] = t2
         t6 = halfword [s1 + 0x18]
         v0 = 0
         t7 = t6 + 1              // lo
         halfword [s1 + 0x18] = t7
         t9 = halfword [s1 + 0x18] // lo
         if                       // unlikely
         

    loc_0x8023abf0: // orphan
         a0 = [s0 + 0x34f4]       // t9

    loc_0x8023abf4: // orphan
         call fcn.826078b4
         [sp + 0x2c] = v0
         // CODE XREF from fcn.8023d410 @ +0xfa8
         v0 = [sp + 0x2c]         // s4
         t8 = halfword [s1 + 0x18] // lo
         s0 += 4
         v0 += 1
         at = , v0 < t8
         bnel at, 0, 0x8023abf4   // unlikely
         a0 = [s0 + 0x34f4]       // s4

    loc_0x8023ac18: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa7
         ra = [sp + 0x1c]

    loc_0x8023ac24: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         ret                      // ra
         sp += 0x40

    loc_0x8023ad0c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e128
         t9 = t8 - 1
         at = , unsigned  , t9 < 0x13
         if                       // likely
         t9 <<= 2

    loc_0x8023ad1c: // orphan
         at = 0x8261 << 16
         at += t9
         t9 = [at + 0x59a4]
         goto t9
         

    loc_0x8023adc8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e134
         goto 0x8023ae48
         

    loc_0x8023ae48: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023adc8
         s0 = 0x8262 << 16
         s0 -= 0x5b70
         t0 = halfword [s0 + 0x114]

    loc_0x8023ae54: // orphan
         if                       // unlikely
         

    loc_0x8023ae5c: // orphan
         call fcn.82607b74
         a0 = s0 + 0x114

    loc_0x8023ae64: // orphan
         t1 = 0x8262 << 16
         t1 -= 0x2790
         // CODE XREF from fcn.8021e030 @ +0x108
         s0 += 0x298
         bnel s0, t1, 0x8023ae54  // likely
         t0 = halfword [s0 + 0x114]

    loc_0x8023ae78: // orphan
         a0 = 0x8262 << 16
         call fcn.8260f108
         a0 -= 0x25b4
         v0 = 0x8262 << 16
         v0 = , unsigned  halfword [v0 - 0x5b6c]
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         v0 &= 1                  // lo
         v0 = , unsigned  , 0 < v0 // lo
         ret
         sp += 0x20

    loc_0x8023af44: // orphan
         t6 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         beql t6, 0, 0x8023af70   // likely
         s1 += 0x298

    loc_0x8023af54: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e140
         t7 = halfword [a0 + 6]   // lo
         a1 = s2
         beql t7, 0, 0x8023af70   // unlikely
         s1 += 0x298

    loc_0x8023af64: // orphan
         call 0x8260899c          // 0x8260899c(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8021e030 @ +0x114
         s2 = 0
         s1 += 0x298

    loc_0x8023af70: // orphan
         if                       // likely
         s0 += 0x298

    loc_0x8023af78: // orphan
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // s4
         sp += 0x28

    loc_0x8023b004: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e150
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]         // a2
         ret                      // ra
         sp += 0x30

    loc_0x8023b268: // orphan
         v0 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         beql v0, s3, 0x8023b28c  // fcn.8021e030+0x1d25c // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e160
         t6 = halfword [a0 + 6]

    loc_0x8023b274: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e160
         t6 = halfword [a0 + 6]   // lo

    loc_0x8023b278: // orphan
         if                       // likely
         a0 = s0 + 0x114          // arg1

    loc_0x8023b280: // orphan
         goto 0x8023b2c4
         s2 += 0x298

    loc_0x8023b2a8: // orphan
         t7 = halfword [a0 + 6]   // lo
         a1 = s1
         beql t7, 0, 0x8023b2c4   // unlikely
         s2 += 0x298

    loc_0x8023b2b8: // orphan
         call 0x82609d84          // 0x82609d84(-1, 0x442f71dcfe116408, 0x8, -1)
         s1 = 0
         s2 += 0x298

    loc_0x8023b2c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023b280
         // CODE XREF from fcn.8021e030 @ 0x8023b2a0
         if                       // likely
         s0 += 0x298

    loc_0x8023b2cc: // orphan
         ra = [sp + 0x2c]         // s4
         s0 = [sp + 0x14]

    loc_0x8023b45c: // orphan
         t6 = halfword [s1 + 0x114]
         t7 = t6 - 4
         at = , unsigned  , t7 < 8
         if                       // likely
         t7 <<= 2

    loc_0x8023b470: // orphan
         at = 0x8261 << 16
         at += t7
         t7 = [at + 0x59f0]
         goto t7
         

    loc_0x8023b4b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e16c
         a1 = s0
         beql t9, 0, 0x8023b534   // unlikely
         s2 += 0x298

    loc_0x8023b4bc: // orphan
         call 0x8260a6b4          // 0x8260a6b4(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = 0
         goto 0x8023b534
         s2 += 0x298

    loc_0x8023b530: // orphan
         s2 += 0x298

    loc_0x8023b534: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023b4c4
         if                       // likely
         s1 += 0x298

    loc_0x8023b53c: // orphan
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         ret                      // s4
         sp += 0x28

    loc_0x8023b698: // orphan
         v0 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         beql v0, s3, 0x8023b6bc  // unlikely
         t6 = halfword [a0 + 6]

    loc_0x8023b6a8: // orphan
         if                       // likely
         a0 = s0 + 0x114          // arg1

    loc_0x8023b6b0: // orphan
         goto 0x8023b6f4
         s2 += 0x298

    loc_0x8023b6bc: // orphan
         a1 = s1

    loc_0x8023b6c0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e17c
         beql t6, 0, 0x8023b6f4   // unlikely
         s2 += 0x298

    loc_0x8023b6c8: // orphan
         call fcn.8260c7d4
         s1 = 0
         goto 0x8023b6f4
         s2 += 0x298

    loc_0x8023b6d8: // orphan
         t7 = halfword [a0 + 6]   // lo
         a1 = s1
         beql t7, 0, 0x8023b6f4   // unlikely
         s2 += 0x298

    loc_0x8023b6e8: // orphan
         call fcn.8260c988
         s1 = 0
         s2 += 0x298

    loc_0x8023b6f4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023b6b0, 0x8023b6d0
         if                       // likely
         s0 += 0x298

    loc_0x8023b6fc: // orphan
         ra = [sp + 0x2c]         // s4
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]         // a2
         ret                      // s4
         sp += 0x30

    loc_0x8023b750: // orphan
         t6 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         bnel s3, t6, 0x8023b780  // likely
         s1 += 0x298

    loc_0x8023b760: // orphan
         t7 = halfword [a0 + 6]   // lo
         a1 = 0

    loc_0x8023b768: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e184
         a2 = s2
         beql t7, 0, 0x8023b780   // likely
         s1 += 0x298

    loc_0x8023b774: // orphan
         call fcn.8260cc24
         s2 = 0
         s1 += 0x298

    loc_0x8023b780: // orphan
         at = , s1 < 0x33e0
         if                       // unlikely
         s0 += 0x298

    loc_0x8023b78c: // orphan
         s0 = s4
         s2 = 0 + 1               // lo
         s4 = 0 + 0x33e0
         s1 = 0

    loc_0x8023b79c: // orphan
         t8 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         bnel s3, t8, 0x8023b7cc  // likely
         s1 += 0x298

    loc_0x8023b7ac: // orphan
         t9 = halfword [a0 + 6]   // lo
         a1 = s3                  // t9
         a2 = s2
         beql t9, 0, 0x8023b7cc   // unlikely
         s1 += 0x298

    loc_0x8023b7c0: // orphan
         call fcn.8260cc24
         s2 = 0
         s1 += 0x298

    loc_0x8023b7cc: // orphan
         if                       // likely
         s0 += 0x298

    loc_0x8023b7d4: // orphan
         ra = [sp + 0x2c]         // s4
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]         // a2
         ret                      // s4
         sp += 0x30

    loc_0x8023b968: // orphan
         t6 = halfword [s0 + 0x114]
         a0 = s0 + 0x114          // arg1
         bnel s3, t6, 0x8023b994  // likely
         s1 += 0x298

    loc_0x8023b978: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e194
         t7 = halfword [a0 + 6]   // lo
         a1 = s2
         beql t7, 0, 0x8023b994   // unlikely
         s1 += 0x298

    loc_0x8023b988: // orphan
         call fcn.8260db98
         s2 = 0
         s1 += 0x298

    loc_0x8023b994: // orphan
         if                       // likely
         s0 += 0x298

    loc_0x8023b99c: // orphan
         ra = [sp + 0x2c]         // s4
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]         // a2
         ret                      // s4
         sp += 0x30

    loc_0x8023ba34: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1a0
         s4 = [sp + 0x28]         // a2
         ret                      // ra
         sp += 0x30

    loc_0x8023bbc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1ac
         t8 = 0xfb00 << 16
         a3 = 0
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         // CODE XREF from fcn.8021e030 @ +0x180
         t7 = , unsigned  byte [sp + 0x49]
         t4 = , unsigned  byte [sp + 0x48]
         t6 = , unsigned  byte [sp + 0x4a]
         t8 = t7 << 0x10
         t5 = t4 << 0x18
         t9 = t5 | t8
         t8 = halfword [s0 + 2]
         t7 = t6 << 8
         t5 = t9 | t7
         t4 = t8 & 0xff           // s4
         t6 = t5 | t4             // s4
         [v0 + 4] = t6
         v0 = [v1 + 0]
         t7 = 0xfa00 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 0] = t7
         t9 = , unsigned  byte [sp + 0x45]
         t5 = , unsigned  byte [sp + 0x44]
         t6 = , unsigned  byte [sp + 0x46]
         t7 = t9 << 0x10
         t4 = t5 << 0x18
         t8 = t4 | t7
         t9 = t6 << 8
         t4 = t8 | t9
         t7 = t4 | 0xff           // s4
         [v0 + 4] = t7
         a1 = halfword [s0 + 0x16]
         a0 = halfword [s0 + 0x14]
         [sp + 0x14] = 0
         a2 = [sp + 0x4c]
         call 0x8004d150          // 0x8004d150(0x108, 0xffff, 0xffff0002, 0x0)
         [sp + 0x10] = t3
         ra = [sp + 0x24]         // s4
         // CODE XREF from fcn.8023e660 @ 0x8021e1b8
         s0 = [sp + 0x20]         // t9
         sp += 0x50
         ret                      // s4
         

    loc_0x8023bc70: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1bc
         [sp + 0x1c] = ra
         [sp + 0x40] = a0
         a0 = 0 + 0x53            // arg1
         call 0x8004c990          // 0x8004c990(0x53, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]
         [sp + 0x3c] = v0
         t8 = 0x8009 << 16
         t6 = v1 + 8
         [t0 + 0] = t6
         t8 += 0x4e78
         t7 = 0xde00 << 16
         [v1 + 0] = t7
         [v1 + 4] = t8
         t9 = [sp + 0x40]
         a2 = 0x8261 << 16
         a3 = 0x8261 << 16
         t3 = halfword [t9 + 0xa]
         a3 += 0x5520
         a2 += 0x551c
         a0 = sp + 0x38
         a1 = sp + 0x34
         call fcn.82607e40
         [sp + 0x10] = t3
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]
         t5 = 0xe700 << 16
         t7 = 0xfb00 << 16
         t4 = v1 + 8
         [t0 + 0] = t4
         [v1 + 4] = 0
         [v1 + 0] = t5
         v1 = [t0 + 0]
         a0 = 0 + 0x141
         a1 = 0 + 0xd0
         t6 = v1 + 8
         [t0 + 0] = t6
         [v1 + 0] = t7
         t5 = , unsigned  byte [sp + 0x39]
         t9 = , unsigned  byte [sp + 0x38]
         a3 = 0 + 1               // lo
         t6 = t5 << 0x10
         t3 = t9 << 0x18
         t7 = t3 | t6
         t3 = [sp + 0x40]         // t9
         t9 = , unsigned  byte [sp + 0x3a]
         t6 = halfword [t3 + 0xc]
         t4 = t9 << 8
         t5 = t7 | t4
         t8 = t6 & 0xff           // t3
         t9 = t5 | t8             // t3
         [v1 + 4] = t9
         v1 = [t0 + 0]
         t4 = 0xfa00 << 16
         t7 = v1 + 8
         [t0 + 0] = t7
         [v1 + 0] = t4
         t6 = , unsigned  byte [sp + 0x34] // t3
         t9 = , unsigned  byte [sp + 0x35]
         t5 = t6 << 0x18
         t6 = , unsigned  byte [sp + 0x36]
         t7 = t9 << 0x10
         // CODE XREF from fcn.8021e030 @ +0x190
         t4 = t5 | t7
         t8 = t6 << 8
         t9 = t4 | t8
         t5 = t9 | 0xff
         [v1 + 4] = t5
         [sp + 0x10] = 0
         call 0x8004d19c          // 0x8004d19c(0x141, 0xd0, 0x8261551c, 0x1)
         a2 = [sp + 0x3c]         // s4
         ra = [sp + 0x1c]
         sp += 0x40
         ret                      // ra
         

    loc_0x8023bf08: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1d4
         s4 = 0 + 0xff

    loc_0x8023bf0c: // orphan
         t6 = halfword [s1 + 0x114]
         t7 = t6 - 4
         at = , unsigned  , t7 < 8
         if                       // likely
         t7 <<= 2

    loc_0x8023bf70: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1ec
         a1 = s0
         v0 = s1 + 0x144
         beql t9, 0, 0x8023c078   // unlikely
         s2 += 0x298

    loc_0x8023bf80: // orphan
         t0 = halfword [v0 + 0x1e]

    loc_0x8023bf84: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1e0
         a2 = [v0 + 0x200]        // t9
         // CODE XREF from fcn.8023e660 @ 0x8021e1f4
         a3 = [v0 + 0x204]        // t9
         t1 = s4 - t0
         [sp + 0x10] = t1
         call fcn.8260e1b4
         s0 = 0
         goto 0x8023c078
         s2 += 0x298

    loc_0x8023bfac: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e1f8
         a1 = s0
         beql t2, 0, 0x8023c078   // unlikely
         // CODE XREF from fcn.8021e030 @ +0x1c0
         s2 += 0x298

    loc_0x8023bfb8: // orphan
         call fcn.8260e2c4
         // CODE XREF from fcn.8023e660 @ 0x8021e1e8
         s0 = 0
         goto 0x8023c078
         s2 += 0x298

    loc_0x8023c074: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e200
         s2 += 0x298

    loc_0x8023c078: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023bf9c, 0x8023bfc0
         // CODE XREF from fcn.8021d4ec @ 0x8023c050
         if                       // likely
         s1 += 0x298

    loc_0x8023c080: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x20]         // t9
         s1 = [sp + 0x24]         // s4
         // CODE XREF from fcn.8021e030 @ +0x1d8
         s2 = [sp + 0x28]         // a2
         s3 = [sp + 0x2c]         // s4
         s4 = [sp + 0x30]         // t9
         ret
         sp += 0x38

    loc_0x8023c0a4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e210
         [sp + 0x18] = s0
         s0 = 0x8262 << 16
         s0 -= 0x5b70
         t6 = , unsigned  halfword [s0 + 4]
         [sp + 0x1c] = ra
         // CODE XREF from fcn.8021e030 @ +0x1e4
         t7 = t6 & 1              // lo
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e20c
         

    loc_0x8023c0c4: // orphan
         call fcn.82613a4c        // fcn.82613a4c(-1)
         // CODE XREF from fcn.8023e660 @ 0x8021e204
         a0 = s0

    loc_0x8023c0c8: // orphan
         call fcn.82613a4c        // fcn.82613a4c(-1)
         // CODE XREF from fcn.8023e660 @ 0x8021e204
         a0 = s0

    loc_0x8023c190: // orphan
         v0 = 0x8262 << 16
         v0 = , unsigned  halfword [v0 - 0x5b6c]
         // CODE XREF from fcn.8021e030 @ +0x1f4
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         v0 &= 1                  // lo
         v0 = , unsigned  , 0 < v0 // lo
         ret                      // ra
         sp += 0x20

    loc_0x8023c1b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e22c
         sp -= 0x30
         [sp + 0x24] = s3
         s3 = 0x8262 << 16
         s3 -= 0x5b70
         t6 = , unsigned  halfword [s3 + 4]
         // CODE XREF from fcn.8021e030 @ +0x200
         [sp + 0x28] = s4
         [sp + 0x2c] = ra
         // CODE XREF from fcn.8023e660 @ 0x8021e228
         t7 = t6 & 1              // lo

    loc_0x8023c430: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e260
         v0 = 0 - 1               // s2
         at = 0 + 0x300
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e41c
         t6 = a3 - 5              // arg4

    loc_0x8023c434: // orphan
         goto 0x8023c548
         // CODE XREF from fcn.8023e660 @ 0x8021e264
         t7 = [sp + 0]            // t9

    loc_0x8023c438: // orphan
         goto 0x8023c548
         // CODE XREF from fcn.8023e660 @ 0x8021e264
         t7 = [sp + 0]            // t9

    loc_0x8023c440: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e25c
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x8023c448: // orphan
         if                       // unlikely
         at = 0 + 2

    loc_0x8023c450: // orphan
         if                       // unlikely
         at = 0 + 3

    loc_0x8023c458: // orphan
         if                       // unlikely
         

    loc_0x8023c460: // orphan
         goto 0x8023c548
         t7 = [sp + 0]            // t9

    loc_0x8023c468: // orphan
         goto 0x8023c544
         v0 = 0 + 0x55

    loc_0x8023c470: // orphan
         goto 0x8023c544
         v0 = 0 + 0x53

    loc_0x8023c478: // orphan
         goto 0x8023c544
         v0 = 0 + 0x54

    loc_0x8023c480: // orphan
         goto 0x8023c544
         v0 = 0 + 0x56

    loc_0x8023c544: // orphan
         // XREFS: CODE 0x8023c468  CODE 0x8023c470  CODE 0x8023c478  
         // XREFS: CODE 0x8023c480  CODE 0x8023c4c0  CODE 0x8023c508  
         // XREFS: CODE 0x8023c530  
         t7 = [sp + 0]            // t9

    loc_0x8023c548: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023c434, 0x8023c460
         at = 0 - 1               // s2
         if                       // likely
         

    loc_0x8023c554: // orphan
         if                       // unlikely
         t8 = 0 + 0x12

    loc_0x8023c55c: // orphan
         halfword [t7 + 0] = t8

    loc_0x8023c560: // orphan
         if                       // unlikely
         

    loc_0x8023c568: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e274
         halfword [a1 + 0] = v0   // arg2

    loc_0x8023c56c: // orphan
         ret                      // ra
         

    loc_0x8023c594: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e280
         halfword [sp + 0xac] = t6
         at = 0 + 0x300

    loc_0x8023c59c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e278
         beql v0, at, 0x8023c6e8  // unlikely
         at = 0 + 0xb

    loc_0x8023c5a4: // orphan
         goto 0x8023c7e4
         ra = [sp + 0x14]

    loc_0x8023c620: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e42c
         t1 = a2 + 2              // arg3
         a0 = 0 + 0x12            // arg1
         call 0x8004c874          // 0x8004c874(0x12, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x57
         goto 0x8023c670
         a2 = v0                  // s4

    loc_0x8023c670: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c630
         // CODE XREF from fcn.8023c368 @ +0x2e0
         a1 = [sp + 0xa8]
         if                       // likely
         

    loc_0x8023c67c: // orphan
         if                       // unlikely
         a0 = 0 + 0xa

    loc_0x8023c684: // orphan
         call 0x8004c54c          // 0x8004c54c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0xa4] = a2
         a1 = [sp + 0xa4]         // a2
         call 0x8004c54c          // 0x8004c54c(-1, 0x8, 0x8, -1)
         a0 = 0 + 0xb
         a0 = [sp + 0xb0]
         a1 = [sp + 0xb4]
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0x0, 0x0, 0x12, -1)
         a3 = 0 + 0x38
         goto 0x8023c7e4
         ra = [sp + 0x14]

    loc_0x8023c6b4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023c674, 0x8023c67c
         if                       // unlikely
         

    loc_0x8023c6bc: // orphan
         call 0x8000b580          // 0x8000b580(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0xb0]
         goto 0x8023c7e4
         ra = [sp + 0x14]

    loc_0x8023c6cc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c6b4
         if                       // unlikely
         a0 = [sp + 0xb0]

    loc_0x8023c6d4: // orphan
         call 0x8000b580          // 0x8000b580(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2
         goto 0x8023c7e4
         ra = [sp + 0x14]

    loc_0x8023c6e8: // orphan
         if                       // unlikely
         a2 = [sp + 0xc0]

    loc_0x8023c6f0: // orphan
         at = 0 + 0xe
         if                       // unlikely
         a2 = [sp + 0xc0]

    loc_0x8023c6fc: // orphan
         at = 0 + 0xf
         if                       // unlikely
         a0 = 0 + 0x12            // arg1

    loc_0x8023c708: // orphan
         at = 0 + 0x18
         if                       // unlikely
         a0 = 0 + 0x12            // arg1

    loc_0x8023c714: // orphan
         goto 0x8023c78c
         a2 = [sp + 0xc0]

    loc_0x8023c71c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c700
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x50
         goto 0x8023c7d0
         [sp + 0xa8] = v0

    loc_0x8023c72c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c6e8
         a0 = 0 + 1               // arg1 // lo
         call 0x8004c594          // 0x8004c594(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2 + 1
         a0 = sp + 0x24

    loc_0x8023c73c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e438
         a1 = 0 + 0x80            // arg2
         a2 = 0 + 0x12            // arg3
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x80, 0x12, -1)
         a3 = 0 + 0x4b
         goto 0x8023c7d0
         [sp + 0xa8] = v0

    loc_0x8023c754: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c6f4
         a0 = 0 + 1               // arg1 // lo
         call 0x8004c594          // 0x8004c594(0x1, 0x442f71dcfe116408, 0x8, -1)
         a1 = a2 + 1
         a0 = sp + 0x24
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0x178024, 0x80, 0x12, -1)
         a3 = 0 + 0x4e
         goto 0x8023c7d0
         [sp + 0xa8] = v0

    loc_0x8023c77c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c70c
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x51
         goto 0x8023c7d0
         [sp + 0xa8] = v0

    loc_0x8023c78c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c714
         v1 = [sp + 0xc4]
         a1 = a2 + 1              // arg3
         a0 = 0 + 0x12            // arg1
         if                       // likely
         

    loc_0x8023c7a0: // orphan
         call 0x8004c874          // 0x8004c874(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x4d
         goto 0x8023c7d0
         [sp + 0xa8] = v0

    loc_0x8023c7b0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023c798
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         a0 = sp + 0x24
         a1 = 0 + 0x80
         a2 = 0 + 0x12
         call 0x8004c8a0          // 0x8004c8a0(0x178024, 0x80, 0x12, -1)
         a3 = 0 + 0x4c
         [sp + 0xa8] = v0

    loc_0x8023c7d0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023c724, 0x8023c74c, 0x8023c774, 0x8023c784, 0x8023c7a8
         if                       // unlikely
         a0 = [sp + 0xb0]

    loc_0x8023c7d8: // orphan
         call 0x8000b580          // 0x8000b580(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0xa8]         // s4

    loc_0x8023c7e0: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023c6cc, 0x8023c7d0
         ra = [sp + 0x14]

    loc_0x8023c7e4: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023c5a4, 0x8023c6ac, 0x8023c6c4, 0x8023c6dc
         sp += 0xb0
         ret                      // ra
         

    loc_0x8023c838: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e294
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e448
         movf 0, 0, fcc0

    loc_0x8023c850: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e29c
         
         unsigned , hi
         div 0, 0, 0
         divu 0, 0, 0

    loc_0x8023c860: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e44c
         dmult 0, 0
         dmultu 0, 0
         ddiv 0, 0, 0
         
         
         
         
         
         bc0f 0x8023c884
         
         ll s0

    loc_0x8023c8cc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2a8
                                  // arg3 // a2
         
                                  // arg3 // a2
         
         lsa 0, 0, a2
         // CODE XREF from fcn.8021e030 @ +0x27c
         movf 0, 0, fcc0
         dsra32 ra, t0, 0x1f
         movf 0, 0, fcc0
         dsra32 ra, a3, 0x1f
                                  // lo
         movt 0, 0, fcc3

    loc_0x8023c92c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2b8
         movf 0, 0, fcc0

    loc_0x8023c930: // orphan
                                  // s4
         
         movf 0, 0, fcc0
         srav 0, s2, 0
         
                                  // lo
                                  // t9

    loc_0x8023c9d8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2c4
         tne at, s6

    loc_0x8023ca64: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2d0
                                  // lo
         movf 0, 0, fcc0
         lsa 0, 0, v0
                                  // arg1 // t9
                                  // arg2 // t0
                                  // v1
         // CODE XREF from fcn.8023e660 @ 0x8021e2d8
                                  // lo
         goto 0
         

    loc_0x8023ca90: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2dc
         
         
         // CODE XREF from fcn.8021e030 @ +0x2a4
         
         
         
         
         
         
         
         
         syscall                  // 255 = unknown ()

    loc_0x8023cc34: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2f0
                                  // s4
         
         dsllv 0, 0, 0
         sync
         ddiv 0, 0, 0
         sync
         if
         dsllv 0, 0, 0
         if
         if
         teq 0, 0, 2

    loc_0x8023cc60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e46c
         sync
         sync

    loc_0x8023cca8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e304
         beql s2, at, 0x802505bc  // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e2f8
         a1 = at + 0x6400         // arg2

    loc_0x8023ccb0: // orphan
         
         
         
         

    loc_0x8023ccc0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e2fc
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8023e3c0 @ +0xb0
         
         // CODE XREF from fcn.8021e030 @ +0x2e4
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e474
         

    loc_0x8023cd2c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e318
         
         // CODE XREF from fcn.8023e660 @ 0x8021e30c
         
         
         

    loc_0x8023cd3c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e478
         
         

    loc_0x8023cd44: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e310
         
         
         
         // CODE XREF from fcn.8023e3c0 @ +0xbc
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e320
         
         
         
         
         

    loc_0x8023cda8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e324
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e32c
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x8023ce24: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e330
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8021e030 @ +0x304
         
         
         
         at = byte [s3 + 0x1e50]  // s4
         at = byte [s3 + 0x1e74]  // s4

    loc_0x8023ce5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e338
         at = byte [s3 + 0x1ef4]  // s4
         at = byte [s3 + 0x1f34]  // s4
         at = byte [s3 + 0x1fbc]  // s4
         at = byte [s3 + 0x2008]  // s4
         at = byte [s3 + 0x208c]  // s4
         at = byte [s3 + 0x20b8]  // s4
         at = byte [s3 + 0x3860]  // s4
         at = byte [s3 + 0x3870]  // s4
         at = byte [s3 + 0x3880]  // s4
         at = byte [s3 + 0x3890]  // s4
         at = byte [s3 + 0x38a0]  // s4
         at = byte [s3 + 0x3978]  // s4
         at = byte [s3 + 0x38b0]  // s4
         at = byte [s3 + 0x38c0]  // s4
         at = byte [s3 + 0x38d0]  // s4
         at = byte [s3 + 0x38e0]  // s4
         at = byte [s3 + 0x38f0]  // s4
         at = byte [s3 + 0x3900]  // s4
         at = byte [s3 + 0x3910]  // s4
         at = byte [s3 + 0x3920]  // s4
         at = byte [s3 + 0x3930]  // s4
         at = byte [s3 + 0x3940]  // s4
         at = byte [s3 + 0x3950]  // s4
         at = byte [s3 + 0x3960]  // s4
         at = byte [s3 + 0x3970]  // s4
         at = byte [s3 + 0x3fb4]  // s4
         at = byte [s3 + 0x4060]  // s4
         at = byte [s3 + 0x3fd8]  // s4
         at = byte [s3 + 0x3ffc]  // s4
         at = byte [s3 + 0x4020]  // s4
         at = byte [s3 + 0x4060]  // s4
         at = byte [s3 + 0x4060]  // s4
         at = byte [s3 + 0x4044]  // s4
         at = byte [s3 + 0x4a64]  // s4
         at = byte [s3 + 0x4ad4]  // s4
         at = byte [s3 + 0x4a98]  // s4
         at = byte [s3 + 0x4af8]  // s4
         at = byte [s3 + 0x4b1c]  // s4
         at = byte [s3 + 0x4b40]  // s4
         at = byte [s3 + 0x4b64]  // s4
         at = byte [s3 + 0x4b88]  // s4
         at = byte [s3 + 0x4fd8]  // s4
         at = byte [s3 + 0x4fe0]  // s4
         at = byte [s3 + 0x4fe8]  // s4
         at = byte [s3 + 0x4ff0]  // s4
         at = byte [s3 + 0x4ff8]  // s4
         at = byte [s3 + 0x5000]  // s4
         // CODE XREF from fcn.8023e660 @ 0x8021e344
         at = byte [s3 + 0x5008]  // s4
         at = byte [s3 + 0x5010]  // s4
         at = byte [s3 + 0x5018]  // s4
         at = byte [s3 + 0x5020]  // s4
         at = byte [s3 + 0x5028]  // s4
         at = byte [s3 + 0x5030]  // s4
         at = byte [s3 + 0x5038]  // s4
         at = byte [s3 + 0x5040]  // s4
         at = byte [s3 + 0x5048]  // s4
         at = byte [s3 + 0x5050]  // s4
         at = byte [s3 + 0x5058]  // s4
         at = byte [s3 + 0x5060]  // s4
         at = byte [s3 + 0x5068]  // s4
         at = byte [s3 + 0x5070]  // s4

    loc_0x8023cf5c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e348
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023cf70: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e350
         if                       // unlikely

    loc_0x8023cf7c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023cf88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e354
         if                       // unlikely
         if                       // fcn.8023d410 // unlikely

    loc_0x8023cf94: // orphan
         if                       // fcn.8021e454+0x1f5c4 // unlikely
         if                       // unlikely

    loc_0x8023cfb8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e484
         
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e35c
         
         
         
         // CODE XREF from fcn.8023e3c0 @ +0xc8
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d004: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d014: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e360
         if                       // fcn.8023e3c0+0x188 // unlikely
         if                       // unlikely

    loc_0x8023d018: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e360
         if                       // fcn.8023e3c0+0x188 // unlikely
         if                       // unlikely

    loc_0x8023d020: // orphan
         if                       // unlikely
         

    loc_0x8023d024: // orphan
         if                       // unlikely
         

    loc_0x8023d028: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8021e368
         

    loc_0x8023d030: // orphan
         
         
         
         

    loc_0x8023d040: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e36c
         
         
         if                       // fcn.8023e7fc+0x10 // unlikely
         if                       // unlikely

    loc_0x8023d054: // orphan
         if                       // unlikely
         if                       // fcn.8023e7fc+0x130 // unlikely

    loc_0x8023d064: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e490
         
         
         
         if                       // fcn.8023e7fc+0x2b8 // unlikely
         if                       // unlikely

    loc_0x8023d07c: // orphan
         if                       // unlikely
         

    loc_0x8023d084: // orphan
         
         // CODE XREF from fcn.8023e660 @ 0x8021e374
         

    loc_0x8023d08c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e498
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d0a0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d0b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d0c0: // orphan
         if                       // unlikely
         

    loc_0x8023d0c8: // orphan
         

    loc_0x8023d0cc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e378
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d0d8: // orphan
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e380
         
         // CODE XREF from fcn.8023e660 @ 0x8023cf64
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e4a0
         
         // CODE XREF from fcn.8023e660 @ 0x8021e384
         

    loc_0x8023d0fc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023cf68
         
         
         

    loc_0x8023d108: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4a4
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d120: // orphan
         if                       // unlikely
         

    loc_0x8023d128: // orphan
         
         if                       // unlikely
         

    loc_0x8023d188: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023cf74
         
         
         

    loc_0x8023d194: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4b0
         
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x368
         

    loc_0x8023d1a0: // orphan
         
         
         
         
         // CODE XREF from fcn.8021e030 @ +0x36c
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d200: // orphan
         
         
         // CODE XREF from fcn.8021e030 @ +0x374
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d2d0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4bc
         
         if                       // fcn.802474d0+0x28 // unlikely
         if                       // fcn.802474d0+0x3c // unlikely

    loc_0x8023d2e0: // orphan
         
         // CODE XREF from fcn.8023e3c0 @ +0x100
         if                       // fcn.802474d0+0xc8 // unlikely
         if                       // fcn.802474d0+0xec // unlikely

    loc_0x8023d2f0: // orphan
         if                       // fcn.802474d0+0x104 // unlikely
         if                       // unlikely

    loc_0x8023d2fc: // orphan
         
         // CODE XREF from fcn.8023e660 @ 0x8023cf7c
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d314: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023cf80
         

    loc_0x8023d318: // orphan
         if                       // unlikely
         

    loc_0x8023d320: // orphan
         // CODE XREF from fcn.8023e3c0 @ +0x10c
         if                       // unlikely
         // CODE XREF from fcn.8230eb18 @ +0x8e4
         

    loc_0x8023d33c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4c8
         
         
         
         // CODE XREF from fcn.8021e030 @ +0x394
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d358: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d364: // orphan
         
         
         
         
         

    loc_0x8023d378: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4d4
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d388: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x398
         if                       // unlikely

    loc_0x8023d394: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d3a0: // orphan
         
         // CODE XREF from fcn.8021e030 @ +0x3a0
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d3b4: // orphan
         if                       // unlikely

    loc_0x8023d3e4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e4e0
         if                       // unlikely

    loc_0x8023d3ec: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d404: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d560: // orphan
         // CODE XREFS from fcn.8023e660 @ 0x8023e4ec, 0x8023e52c
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d56c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d578: // orphan
         
         

    loc_0x8023d580: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e51c
         
         if                       // fcn.802482c8+0x5bd0 // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e4f4
         if                       // unlikely

    loc_0x8023d590: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x3d0
         if                       // unlikely

    loc_0x8023d59c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d5a8: // orphan
         if                       // fcn.802482c8+0x5d74 // unlikely
         // CODE XREF from fcn.8021e030 @ +0x3d8
         

    loc_0x8023d5b0: // orphan
         
         
         
         
         // CODE XREF from fcn.8021e030 @ +0x3dc
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d5cc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e4f8
         if                       // unlikely

    loc_0x8023d5d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d5dc: // orphan
         
         

    loc_0x8023d5e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e500
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d5fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d60c: // orphan
         
         if                       // fcn.8024f30c+0x28 // unlikely
         

    loc_0x8023d618: // orphan
         
         if                       // unlikely
         

    loc_0x8023d624: // orphan
         
         
         
         
         
         

    loc_0x8023d63c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e508
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d64c: // orphan
         // CODE XREF from fcn.8021e030 @ +0x3e8
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d658: // orphan
         
         
         
         // CODE XREF from fcn.8021e030 @ +0x3f0
         

    loc_0x8023d668: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e514
         
         
         
         if                       // fcn.802482c8+0x7f50 // unlikely
         // CODE XREF from fcn.8021e030 @ +0x3f4
         if                       // unlikely

    loc_0x8023d680: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d690: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d6a8: // orphan
         if                       // fcn.802482c8+0x87e4 // unlikely
         // CODE XREF from fcn.8023e3c0 @ 0x8023e518
         if                       // unlikely

    loc_0x8023d6b4: // orphan
         if                       // fcn.802482c8+0x9030 // unlikely
         if                       // unlikely

    loc_0x8023d6c0: // orphan
         // CODE XREF from fcn.8021e030 @ +0x3fc
         

    loc_0x8023d6c4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e520
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d6d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d6dc: // orphan
         if                       // unlikely
         

    loc_0x8023d6e4: // orphan
         if                       // fcn.80252390+0x88 // unlikely
         if                       // unlikely

    loc_0x8023d6f0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x400
         if                       // unlikely

    loc_0x8023d6fc: // orphan
         
         
         if                       // fcn.80248744+0xaa44 // unlikely
         if                       // fcn.80248744+0xaa78 // unlikely

    loc_0x8023d710: // orphan
         if                       // fcn.80248744+0xaa70 // unlikely
         if                       // fcn.80248744+0xac24 // unlikely

    loc_0x8023d71c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e528
         if                       // fcn.80248744+0xac3c // unlikely
         if                       // fcn.80248744+0xac50 // unlikely

    loc_0x8023d728: // orphan
         
         
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x410
         // CODE XREF from fcn.8023e3c0 @ 0x8023e530
         if                       // unlikely

    loc_0x8023d73c: // orphan
         

    loc_0x8023d740: // orphan
         
         

    loc_0x8023d748: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e534
         
         if                       // fcn.80254b48+0x18 // unlikely
         if                       // unlikely

    loc_0x8023d758: // orphan
         if                       // fcn.80254b48+0x44 // unlikely
         if                       // unlikely

    loc_0x8023d764: // orphan
         if                       // fcn.8024d00c+0x844c // unlikely
         if                       // unlikely

    loc_0x8023d770: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d77c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d788: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e538
         if                       // unlikely

    loc_0x8023d78c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e538
         if                       // unlikely

    loc_0x8023d794: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d798: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d7a0: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e53c
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x420
         if                       // unlikely

    loc_0x8023d7a4: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e53c
         if                       // unlikely
         // CODE XREF from fcn.8021e030 @ +0x420
         if                       // unlikely

    loc_0x8023d7ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d7b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d7b8: // orphan
         if                       // unlikely
         

    loc_0x8023d7bc: // orphan
         if                       // unlikely
         

    loc_0x8023d7c0: // orphan
         if                       // unlikely
         

    loc_0x8023d7c8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e544
         
         
         if                       // unlikely
         

    loc_0x8023d7d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d7e4: // orphan
         if                       // unlikely
         

    loc_0x8023d7ec: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e458
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d7f8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e3c0 @ 0x8023e548
         if                       // unlikely

    loc_0x8023d804: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d810: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e54c
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d81c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d824: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e550
         

    loc_0x8023d828: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d834: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e45c
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d840: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d84c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e464
         if                       // fcn.8023e3c0+0x19bcc // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e558
         if                       // unlikely

    loc_0x8023d858: // orphan
         if                       // unlikely
         

    loc_0x8023d85c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e468
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d868: // orphan
         if                       // unlikely
         

    loc_0x8023d870: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d87c: // orphan
         if                       // unlikely
         

    loc_0x8023d884: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d890: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d89c: // orphan
         if                       // fcn.8021e454+0x3a8fc // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e55c
         if                       // unlikely

    loc_0x8023d8a0: // orphan
         if                       // fcn.8021e454+0x3a8fc // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e55c
         if                       // unlikely

    loc_0x8023d8a8: // orphan
         if                       // fcn.8021e454+0x3a968 // unlikely
         if                       // unlikely

    loc_0x8023d8ac: // orphan
         if                       // fcn.8021e454+0x3a968 // unlikely
         if                       // unlikely

    loc_0x8023d8b4: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e560
         

    loc_0x8023d8b8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d8c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d8d4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e454 @ 0x8021e474
         if                       // unlikely

    loc_0x8023d8e0: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e564
         if                       // unlikely

    loc_0x8023d8f0: // orphan
         

    loc_0x8023d8f4: // orphan
         
         

    loc_0x8023d8fc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e568
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d914: // orphan
         if                       // fcn.8023e3c0+0x1c758 // unlikely
         if                       // unlikely

    loc_0x8023d920: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d928: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e574
         if                       // fcn.8025af1c // unlikely

    loc_0x8023d92c: // orphan
         if                       // fcn.8023e3c0+0x1cb80 // unlikely
         if                       // unlikely

    loc_0x8023d938: // orphan
         if                       // fcn.8023e3c0+0x1cbfc // unlikely
         if                       // fcn.8023e3c0+0x1cc10 // unlikely

    loc_0x8023d944: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d950: // orphan
         if                       // fcn.8023e3c0+0x1cd54 // unlikely
         if                       // unlikely

    loc_0x8023d95c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d968: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d974: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d980: // orphan
         if                       // unlikely

    loc_0x8023d984: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e570
         if                       // fcn.8021e454+0x3dde4 // unlikely
         if                       // unlikely

    loc_0x8023d9e0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e57c
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d9ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d9f4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e580
         if                       // fcn.801f7004+0x65fb4 // unlikely

    loc_0x8023d9f8: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e484
         if                       // fcn.8023e3c0+0x1eccc // unlikely
         if                       // unlikely

    loc_0x8023da04: // orphan
         if                       // fcn.801f7004+0x66334 // unlikely
         if                       // unlikely

    loc_0x8023da10: // orphan
         if                       // fcn.8021e454+0x3ef60 // unlikely
         if                       // unlikely

    loc_0x8023da1c: // orphan
         if                       // fcn.8021e454+0x3f2ac // unlikely
         if                       // unlikely

    loc_0x8023da28: // orphan
         if                       // fcn.8021e454+0x3f228 // unlikely
         if                       // unlikely

    loc_0x8023da34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da40: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da4c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da58: // orphan
         if                       // fcn.8021e454-0x6b8 // unlikely
         if                       // unlikely

    loc_0x8023da60: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e58c
         if                       // unlikely

    loc_0x8023da64: // orphan
         if                       // fcn.8021e454-0x4ac // unlikely
         if                       // unlikely

    loc_0x8023da70: // orphan
         if                       // fcn.8021e454-0x690 // unlikely
         // CODE XREF from fcn.8023e3c0 @ 0x8023e590
         if                       // unlikely

    loc_0x8023da7c: // orphan
         if                       // fcn.8021e030+0xd0 // unlikely
         if                       // unlikely

    loc_0x8023da88: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e594
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da94: // orphan
         if                       // fcn.8021e454+0x14 // unlikely
         if                       // unlikely

    loc_0x8023da9c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023cf98
         if                       // fcn.801f7004+0x274cc // unlikely

    loc_0x8023daa0: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e59c
         if                       // fcn.8021e454+0x150 // unlikely
         if                       // unlikely

    loc_0x8023daac: // orphan
         if                       // fcn.8021e69c+0x4 // unlikely
         // CODE XREF from syscall.0.83 @ +0x4e4
         if                       // unlikely

    loc_0x8023dab8: // orphan
         

    loc_0x8023dabc: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dad8: // orphan
         
         
         
         
         
         
         

    loc_0x8023daf4: // orphan
         
         

    loc_0x8023dafc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e598
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023db1c: // orphan
         
         
         

    loc_0x8023db28: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e5a4
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e49c
         
         
         
         

    loc_0x8023db40: // orphan
         

    loc_0x8023db44: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4a0
         if                       // unlikely
         

    loc_0x8023db4c: // orphan
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e5a0
         
         
         
         
         if                       // unlikely
         

    loc_0x8023db6c: // orphan
         
         
         
         
         
         
         
         

    loc_0x8023db8c: // orphan
         if                       // unlikely
         

    loc_0x8023db94: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dbbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dbc8: // orphan
         if                       // unlikely
         

    loc_0x8023dbd0: // orphan
         
         if                       // fcn.80223268+0x70 // unlikely
         if                       // unlikely

    loc_0x8023dbe0: // orphan
         if                       // unlikely
         

    loc_0x8023dbe8: // orphan
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e5ac
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e5b4
         

    loc_0x8023dc08: // orphan
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023e5ac
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e5b4
         

    loc_0x8023dc0c: // orphan
         
         
         

    loc_0x8023dc18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dc24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dc64: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e5b0
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dc74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dc80: // orphan
         if                       // unlikely
         

    loc_0x8023dc88: // orphan
         
         // CODE XREF from fcn.8023e660 @ 0x8023e5b8
         
         
         
         if                       // fcn.80225940+0x16c // unlikely
         if                       // unlikely

    loc_0x8023dca0: // orphan
         if                       // unlikely
         

    loc_0x8023dca4: // orphan
         

    loc_0x8023dca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dcb4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dcc4: // orphan
         if                       // unlikely
         

    loc_0x8023dccc: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dcec: // orphan
         
         // CODE XREF from fcn.8023e660 @ 0x8021e4bc
         

    loc_0x8023dcf4: // orphan
         
         
         
         

    loc_0x8023dd04: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4c0
         
         
         if                       // fcn.801f7004+0x30a8c // unlikely
         if                       // unlikely

    loc_0x8023dd18: // orphan
         if                       // unlikely
         

    loc_0x8023dd1c: // orphan
         if                       // unlikely
         

    loc_0x8023dd20: // orphan
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dd40: // orphan
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e4c8
         
         
         
         
         

    loc_0x8023dd80: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4cc
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dda4: // orphan
         
         
         
         
         

    loc_0x8023ddb8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4d4
         
         
         
         
         

    loc_0x8023ddcc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4d8
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dde8: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023de48: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023de58: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023de90: // orphan
         if                       // unlikely
         

    loc_0x8023de98: // orphan
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e4e8
         
         
         
         if                       // fcn.8021da68+0x10944 // unlikely
         if                       // fcn.8021da68+0x10968 // unlikely

    loc_0x8023dec0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4ec
         if                       // fcn.8021da68+0x1097c // unlikely
         if                       // unlikely

    loc_0x8023decc: // orphan
         if                       // unlikely
         

    loc_0x8023ded4: // orphan
         
         
         
         if                       // fcn.8021da68+0x1112c // unlikely
         if                       // unlikely

    loc_0x8023deec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023def8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023df10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023df1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dfd8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e504
         if                       // unlikely
         if                       // unlikely

    loc_0x8023dfe4: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x8023dffc: // orphan
         
         
         
         
         
         
         
         // CODE XREF from fcn.8252e18c @ +0x1618
         
         
         
         
         
         
         
         

    loc_0x8023e038: // orphan
         
         if                       // fcn.802332b8+0x18 // unlikely
         if                       // unlikely

    loc_0x8023e048: // orphan
         if                       // unlikely
         

    loc_0x8023e050: // orphan
         
         
         
         
         
         if                       // fcn.8023348c+0x17c // unlikely
         if                       // unlikely

    loc_0x8023e070: // orphan
         

    loc_0x8023e074: // orphan
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e514
         
         
         
         
         

    loc_0x8023e09c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e518
         if                       // fcn.8023429c+0x1a4 // unlikely
         

    loc_0x8023e118: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e524
         if                       // fcn.80226e38+0xe794 // unlikely
         if                       // unlikely

    loc_0x8023e124: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8023e148: // orphan
         

    loc_0x8023e14c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e158: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e230: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e53c
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e270: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e294: // orphan
         if                       // unlikely
         

    loc_0x8023e348: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e554
         if                       // unlikely
         

    loc_0x8023e350: // orphan
         

    loc_0x8023e354: // orphan
         
         
         // CODE XREF from fcn.8023e660 @ 0x8023cff8
         
         
         
         
         

    loc_0x8023e370: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023cffc
         
         
         
         
         
         // CODE XREF from syscall.0.83 @ +0x548
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e3e0: // orphan
         
         
         
         
         
         // CODE XREF from fcn.8023e660 @ 0x8021e570
         
         
         
         
         
         // CODE XREF from fcn.8021e454 @ +0x120
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e424: // orphan
         

    loc_0x8023e428: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e564
         
         if                       // unlikely
         

    loc_0x8023e434: // orphan
         
         if                       // unlikely
         

    loc_0x8023e440: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e454: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e468: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e474: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e480: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e48c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e498: // orphan
         if                       // unlikely
         

    loc_0x8023e4a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4dc: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023d00c
         if                       // unlikely

    loc_0x8023e4e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e4fc: // orphan
         if                       // unlikely

    loc_0x8023e500: // orphan
         if                       // unlikely

    loc_0x8023e504: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d010
         if                       // fcn.8023e3c0-0xdc8 // unlikely
         if                       // unlikely

    loc_0x8023e510: // orphan
         if                       // fcn.8023e3c0-0xd6c // unlikely
         if                       // unlikely

    loc_0x8023e51c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e528: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e534: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e540: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e54c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e558: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e564: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e56c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d018
         if                       // fcn.8023e3c0-0xab0 // unlikely
         if                       // unlikely

    loc_0x8023e570: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d018
         if                       // fcn.8023e3c0-0xab0 // unlikely
         if                       // unlikely

    loc_0x8023e578: // orphan
         if                       // fcn.8021e454+0x1f568 // unlikely
         if                       // unlikely

    loc_0x8023e57c: // orphan
         if                       // fcn.8021e454+0x1f568 // unlikely
         if                       // unlikely

    loc_0x8023e588: // orphan
         if                       // fcn.801f7004+0x469d8 // unlikely
         if                       // unlikely

    loc_0x8023e594: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5ac: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023d01c
         if                       // unlikely

    loc_0x8023e5b0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023d01c
         if                       // unlikely

    loc_0x8023e5b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e5d0: // orphan
         if                       // unlikely

    loc_0x8023e5d4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d020
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e64c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023d028
         if                       // unlikely

    loc_0x8023e658: // orphan
         if                       // fcn.8023e660-0x2d8 // unlikely
         if                       // unlikely

    loc_0x8023e660: // orphan
           // CALL XREF from fcn.82b20778 @ +0x550
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e664: // orphan
           // CALL XREF from fcn.82b20778 @ +0x550
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e66c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e670: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023e678: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x8023e67c: // orphan
         if                       // unlikely
         if                       // likely

    loc_0x8023e684: // orphan
         at = halfword [0 + 0x1e8]

    loc_0x8023e688: // orphan
         at = halfword [0 + 0x1fc]
         at = halfword [0 + 0x210]
         at = halfword [0 + 0x224]
         at = halfword [0 + 0x238]
         at = halfword [0 + 0x24c]
         at = halfword [0 + 0x260]
         at = halfword [0 + 0x274] // lo
         at = halfword [0 + 0x288]
         at = halfword [0 + 0x29c]
         at = halfword [0 + 0x2b0]
         at = halfword [0 + 0x2c4]
         at = halfword [0 + 0x2d8]
         at = halfword [0 + 0x2ec]
         at = halfword [0 + 0x300]
         if                       // likely
         at = halfword [0 + 0x330]

    loc_0x8023e6c8: // orphan
         at = halfword [0 + 0x344]
         at = halfword [0 + 0x354]
         if                       // likely
         if                       // likely

    loc_0x8023e6dc: // orphan
         at = halfword [0 + 0x3f4]
         at = halfword [0 + 0x410]
         if                       // likely
         if                       // likely

    loc_0x8023e6f0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e6fc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e708: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e714: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e720: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e72c: // orphan
         at = halfword [0 + 0x5e4]
         if                       // fcn.8023febc+0x28 // likely
         if                       // likely

    loc_0x8023e73c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e748: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e754: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e760: // orphan
         if                       // fcn.80240290+0xb4 // likely
         if                       // likely

    loc_0x8023e76c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e778: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e784: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e790: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e79c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023e7a8: // orphan
         if                       // likely
         if                       // fcn.80240578+0x18 // likely

    loc_0x8023e830: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d04c
         if                       // fcn.8023e7fc+0x2248 // likely
         if                       // fcn.80240290+0x58 // likely

    loc_0x8023eac8: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d074
         if                       // fcn.8023e7fc+0x59e0 // likely
         at = halfword [0 + 0x1718]

    loc_0x8023ead0: // orphan
         at = halfword [t0 + 0x1730]
         at = halfword [s0 + 0x1734]
         if                       // fcn.80244824+0x8 // likely
         if                       // fcn.8023e7fc+0x6044 // likely

    loc_0x8023eae4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eaf0: // orphan
         if                       // likely
         at = halfword [0 + 0x18e8]

    loc_0x8023eaf8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb04: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb10: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb1c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb28: // orphan
         at = halfword [0 + 0x1bf8]
         if                       // likely
         if                       // likely

    loc_0x8023eb38: // orphan
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x8023d098
         at = halfword [0 + 0x1dd8]

    loc_0x8023eb3c: // orphan
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x8023d098
         at = halfword [0 + 0x1dd8]

    loc_0x8023eb40: // orphan
         if                       // fcn.802462b4+0x60 // likely
         if                       // likely

    loc_0x8023eb4c: // orphan
         if                       // fcn.80246400+0x40 // likely
         if                       // likely

    loc_0x8023eb58: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb64: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb70: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eb7c: // orphan
         at = halfword [s0 + 0x1fd4]
         if                       // fcn.80246c7c-0xc8 // likely
         if                       // likely

    loc_0x8023eb8c: // orphan
         if                       // fcn.80246c7c+0x184 // likely
         if                       // likely

    loc_0x8023eb98: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eba4: // orphan
         at = halfword [0 + 0x225c]
         if                       // fcn.802474d0+0xac // likely
         if                       // likely

    loc_0x8023ebb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ebc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ebcc: // orphan
         // CODE XREF from syscall.0.83 @ +0x5c0
         if                       // likely
         at = halfword [0 + 0x2550]

    loc_0x8023ebd4: // orphan
         at = halfword [t0 + 0x257c]
         at = halfword [s0 + 0x2580]
         if                       // fcn.802482c8+0x288 // likely
         // CODE XREF from fcn.8023e660 @ 0x8023d07c
         if                       // likely

    loc_0x8023ebe0: // orphan
         at = halfword [t0 + 0x257c]
         at = halfword [s0 + 0x2580]
         if                       // fcn.802482c8+0x288 // likely
         // CODE XREF from fcn.8023e660 @ 0x8023d07c
         if                       // likely

    loc_0x8023ebe8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ebec: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ebf4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec00: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec0c: // orphan
         at = halfword [t0 + 0x286c]
         at = halfword [s0 + 0x288c]
         if                       // likely
         at = halfword [0 + 0x298c]

    loc_0x8023ec1c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec28: // orphan
         at = halfword [0 + 0x2aa0]
         if                       // likely
         if                       // likely

    loc_0x8023ec38: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec44: // orphan
         if                       // fcn.80249c14+0x24 // likely
         if                       // likely

    loc_0x8023ec50: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec5c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec68: // orphan
         if                       // likely
         if                       // fcn.8023d3b8+0xcdf8 // likely

    loc_0x8023ec74: // orphan
         if                       // fcn.8023d3b8+0xcb80 // likely
         if                       // likely

    loc_0x8023ec80: // orphan
         at = halfword [0 + 0x2de4]
         if                       // fcn.8024a554+0x24 // likely
         if                       // likely

    loc_0x8023ec90: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ec9c: // orphan
         if                       // likely
         at = halfword [t0 + 0x2ea8]

    loc_0x8023eca4: // orphan
         at = halfword [s0 + 0x2ef4]
         at = halfword [0 + 0x2fb0]
         at = halfword [t0 + 0x2fb8]
         at = halfword [s0 + 0x2fbc]
         if                       // likely
         at = halfword [0 + 0x3014]

    loc_0x8023ecbc: // orphan
         if                       // likely
         at = halfword [0 + 0x3070]

    loc_0x8023ecc4: // orphan
         at = halfword [0 + 0x30a0]
         if                       // likely
         if                       // likely

    loc_0x8023ecd4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ece0: // orphan
         if                       // fcn.8024b744 // fcn.8024b744 // likely
         at = halfword [0 + 0x32b8]

    loc_0x8023ece8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ecf4: // orphan
         at = halfword [0 + 0x3368]
         if                       // likely
         if                       // likely

    loc_0x8023ed04: // orphan
         at = halfword [0 + 0x3404]
         if                       // likely
         at = halfword [0 + 0x34b0]

    loc_0x8023ed10: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ed1c: // orphan
         if                       // fcn.8024c2d0+0x60 // likely
         at = halfword [0 + 0x358c]

    loc_0x8023ed24: // orphan
         at = halfword [t0 + 0x3578]
         at = halfword [s0 + 0x359c]
         at = halfword [0 + 0x3618]
         at = halfword [t0 + 0x3620]
         at = halfword [s0 + 0x3624]
         if                       // likely
         at = halfword [0 + 0x368c]

    loc_0x8023ed40: // orphan
         at = halfword [0 + 0x3694]
         at = halfword [0 + 0x36b4]
         if                       // likely
         at = halfword [0 + 0x3748]

    loc_0x8023ed50: // orphan
         if                       // likely
         if                       // fcn.802482c8+0x4ae0 // likely

    loc_0x8023ed60: // orphan
         if                       // fcn.802482c8+0x4b7c // likely
         if                       // likely

    loc_0x8023ed6c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ed78: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ed84: // orphan
         if                       // fcn.8024d00c+0x7c // likely
         if                       // likely

    loc_0x8023ed90: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ed9c: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023eda8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023edb4: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023edc0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023edcc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023edd8: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ede4: // orphan
         if                       // fcn.802482c8+0x5770 // likely
         if                       // likely

    loc_0x8023edf0: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023edfc: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ee08: // orphan
         if                       // likely
         if                       // fcn.802482c8+0x67f8 // likely

    loc_0x8023ee14: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023ee20: // orphan
         if                       // fcn.802482c8+0x6b9c // likely
         if                       // likely

    loc_0x8023ee2c: // orphan
         if                       // likely
         if                       // fcn.8024f30c+0x98 // likely

    loc_0x8023ee38: // orphan
         if                       // likely
         if                       // likely

    loc_0x8023f0a0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d0ac
         at = halfword [0 + 0x51c0]
         at = halfword [0 + 0x51d4]
         at = halfword [0 + 0x51ec]
         at = halfword [0 + 0x5204]
         at = halfword [0 + 0x524c]
         at = halfword [0 + 0x5260]
         // CODE XREF from fcn.8023e660 @ 0x8023d0b4
         at = halfword [0 + 0x5274]
         at = halfword [0 + 0x5288]
         at = halfword [0 + 0x529c]
         at = halfword [0 + 0x52ac]
         at = halfword [0 + 0x52d0]
         at = halfword [0 + 0x52e0]
         at = halfword [0 + 0x52f4]
         at = halfword [0 + 0x5308]

    loc_0x8023f124: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d0c0
         dadd t3, s0, at
         tge s0, at, 0x160
         teq s0, at, 0x160

    loc_0x8023f458: // orphan
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x8023f478
         add.s f10, f2, f0

    loc_0x8023f478: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023f464
         t9 = v0 + 0x100
         at = 0x8251 << 16
         trunc.w.s f16, f10
         mfc1 v1, f16
         
         byte [a1 + 0x33] = v1
         byte [a1 + 0x2f] = v1
         halfword [at - 0x7870] = t9
         ret                      // ra
         v0 = 0

    loc_0x8023f7ec: // orphan
         mtc1 t3, f16
         mtc1 a3, f4
         at = 0x3f80 << 16
         cvt.s.w f18, f16
         mtc1 at, f10
         cvt.s.w f8, f4
         div.s f6, f18, f8
         sub.s f2, f10, f6
         ret                      // ra
         mov.s f0, f2

    loc_0x8023f870: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d10c
         
         add.s f6, f6, f8
         mul.s f2, f6, f14
         at = 0xbf00 << 16
         t0 = [sp + 0x54]         // v1
         t7 = 0xde00 << 16
         a3 = 0
         c.lt.s f16, f2
         
         // CODE XREF from syscall.0.83 @ +0x658
         bc1fl 0x8023f8b0
         mtc1 at, f0
         at = 0x3f00 << 16
         mtc1 at, f18
         goto 0x8023f8bc
         mov.s f0, f18

    loc_0x8023f8b8: // orphan
         

    loc_0x8023f8bc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023f8a4
         add.s f10, f0, f2
         t1 = , unsigned  halfword [t8 + 2]
         at = 0x4f80 << 16
         trunc.w.s f4, f10
         mtc1 t1, f8
         mfc1 t3, f4
         if                       // likely
         // CODE XREF from fcn.8023e660 @ 0x8023d114
         cvt.s.w f6, f8

    loc_0x8023f8dc: // orphan
         mtc1 at, f10
         
         add.s f6, f6, f10

    loc_0x8023f8e8: // orphan
         mul.s f12, f6, f14

    loc_0x8023f8ec: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d118
         at = 0xbf00 << 16
         c.lt.s f16, f12
         
         bc1fl 0x8023f90c
         mtc1 at, f0
         goto 0x8023f910
         mov.s f0, f18

    loc_0x8023f984: // orphan
         t8 = t7 | t6
         [v0 + 4] = t8
         v0 = [v1 + 0]
         t7 = 0xfa00 << 16
         ra = t1 - t4
         t9 = v0 + 8
         [v1 + 0] = t9
         [v0 + 0] = t7
         t8 = , unsigned  byte [t0 + 0]
         t6 = , unsigned  byte [t0 + 1] // s4
         if                       // likely
         at = ra

    loc_0x8023f9b4: // orphan
         at = ra + 1

    loc_0x8023f9b8: // orphan
         ra = , signed  at >> 1
         t9 = t8 << 0x18
         t8 = t6 << 0x10
         t7 = t9 | t8
         t9 = , unsigned  byte [t0 + 2]
         t8 = t9 << 8
         t6 = t7 | t8
         t7 = , unsigned  byte [t0 + 3]
         t8 = t6 | t7
         [v0 + 4] = t8
         t9 = [sp + 0x58]
         a2 = [sp + 0x48]
         a1 = [sp + 0x44]         // s4
         if                       // unlikely
         a0 = [sp + 0x40]         // t9

    loc_0x8023f9f4: // orphan
         [sp + 0x30] = ra
         a0 = [sp + 0x48]
         [sp + 0x3c] = t3
         [sp + 0x38] = t4
         [sp + 0x34] = t5
         call 0x8004d1fc          // 0x8004d1fc(0xf9, 0x442f71dcfe116408, 0x8, -1)
         swc1 f14, 0x4c, sp
         at = 0x3f00 << 16
         mtc1 at, f18
         at = 0x4480 << 16
         lwc1 f14, 0x4c, sp
         mtc1 at, f10
         mtc1 0, f16
         t5 = [sp + 0x34]         // t9
         div.s f2, f10, f14
         t6 = [sp + 0x40]         // t9
         ra = [sp + 0x30]
         t7 = [sp + 0x44]         // s4
         a0 = t6 + t5
         a0 <<= 0x10
         a1 = t7 + ra
         t3 = [sp + 0x3c]
         t4 = [sp + 0x38]         // t9
         a1 <<= 0x10
         a0 = , signed  a0 >> 0x10
         at = 0xbf00 << 16
         c.lt.s f16, f2
         
         bc1fl 0x8023fa78
         mtc1 at, f12
         goto 0x8023fa7c
         mov.s f12, f18

    loc_0x8023fa7c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fa6c
         c.lt.s f16, f2
         at = 0xbf00 << 16
         add.s f6, f12, f2
         bc1fl 0x8023fa9c
         mtc1 at, f0
         goto 0x8023faa0
         mov.s f0, f18

    loc_0x8023faa0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fa90
         add.s f8, f0, f2
         a2 = t3 << 0x10
         a3 = t4 << 0x10
         trunc.w.s f4, f6
         a3 = , signed  a3 >> 0x10 // t9
         a2 = , signed  a2 >> 0x10 // t3
         trunc.w.s f10, f8
         mfc1 t9, f4
         a1 = , signed  a1 >> 0x10
         [sp + 0x10] = 0
         mfc1 t7, f10
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         [sp + 0x18] = t9
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0xfe, -1)
         [sp + 0x1c] = t7
         goto 0x8023faf4
         ra = [sp + 0x2c]         // s4

    loc_0x8023fae8: // orphan
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         ra = [sp + 0x2c]         // s4

    loc_0x8023faf4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fae0
         sp += 0x40
         ret                      // ra
         

    loc_0x8023fb30: // orphan
         a1 = , unsigned  halfword [a1 + 0x26]
         v1 = v0 & 0xff           // s4
         call 0x8004c990          // 0x8004c990(-1, 0xa6ae, 0x8, -1)
         [sp + 0x70] = v1
         a1 = [sp + 0x78]
         mtc1 0, f2
         v1 = [sp + 0x70]         // s4
         [sp + 0x5c] = v0
         if                       // likely
         [sp + 0x48] = 0

    loc_0x8023fb58: // orphan
         a0 = 0 + 1               // lo
         if                       // unlikely
         t8 = v1 << 4

    loc_0x8023fb64: // orphan
         goto 0x8023ff30
         ra = [sp + 0x2c]         // s4

    loc_0x8023fb6c: // orphan
         a0 = [sp + 0x6c]         // t3
         // CODE XREF from fcn.801f7004 @ 0x8023d11c
         t8 = 0 + 2
         byte [s0 + 0x28] = t8
         at = , a0 < 2
         if                       // likely
         t9 = v1 << 4

    loc_0x8023fb84: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023d120
         t9 -= v1
         t4 = halfword [s0 + 8]
         t9 <<= 2
         t1 = a0 << 2             // arg1
         t3 = 0x8251 << 16
         t3 -= 0x72f0
         t2 = t9 + t1
         v0 = t2 + t3
         halfword [v0 + 0x14] = t4
         t5 = halfword [s0 + 0xa]
         halfword [v0 + 0x16] = t5

    loc_0x8023fbb0: // orphan
         t6 = , unsigned  halfword [s0 + 2]
         t7 = t6 & 0xfffd
         goto 0x8023ff2c
         halfword [s0 + 2] = t7

    loc_0x8023fbc0: // orphan
         t8 -= v1
         t9 = 0x8251 << 16
         t9 -= 0x72f0
         t8 <<= 2
         t1 = t8 + t9
         [sp + 0x3c] = t1
         v0 = [t1 + 4]            // t9
         at = 0 + 2
         beql v0, 0, 0x8023fc04   // unlikely
         t8 = [sp + 0x60]

    loc_0x8023fbe8: // orphan
         t3 = [v0 + 0x28]         // t9
         [s0 + 0x2c] = t3
         t4 = [sp + 0x3c]
         t5 = [t4 + 4]
         t7 = [t5 + 0x2c]         // t9
         [s0 + 0x30] = t7
         t8 = [sp + 0x60]

    loc_0x8023fc04: // orphan
         t6 = [sp + 0x3c]
         v0 = halfword [t8 + 0xe]
         beql v0, a0, 0x8023fc90  // unlikely
         t7 = halfword [t6 + 2]

    loc_0x8023fc14: // orphan
         if                       // likely
         t5 = [sp + 0x3c]

    loc_0x8023fc1c: // orphan
         t9 = [sp + 0x3c]
         t3 = v1 << 2
         t3 += v1
         t1 = halfword [t9 + 2]
         v0 = 0 + 1               // lo
         t3 <<= 1
         if                       // unlikely
         t2 = 0x8251 << 16

    loc_0x8023fc3c: // orphan
         t4 = 0x8251 << 16
         t4 = [t4 - 0x7858]
         t2 = [t2 - 0x7868]       // t9
         a1 = 0x8251 << 16
         a2 = 0x8251 << 16
         // CODE XREF from fcn.81dd21d0 @ 0x81dd21d0
         a3 = 0x8251 << 16
         t5 = sp + 0x48
         [sp + 0x14] = t5
         // CODE XREF from fcn.82a85764 @ +0x14c
         a3 = [a3 - 0x785c]
         a2 = [a2 - 0x7860]
         a1 = [a1 - 0x7864]
         [sp + 0x58] = v0
         [sp + 0x10] = t4
         call fcn.825003dc        // fcn.825003dc(-1)
         a0 = t2 - t3
         v0 = [sp + 0x58]         // s4
         goto 0x8023fe30
         // CALL XREF from fcn.81e2ad64 @ +0x1384
         mov.s f2, f0

    loc_0x8023fc84: // orphan
         goto 0x8023fe30
         v0 = 0

    loc_0x8023fc90: // orphan
         t8 = 0x8251 << 16
         t2 = 0x8251 << 16
         if                       // likely
         

    loc_0x8023fca0: // orphan
         t8 = halfword [t8 - 0x7096]
         v0 = 0 + 1               // lo
         a0 = 0x8251 << 16
         if                       // unlikely
         a1 = 0x8251 << 16

    loc_0x8023fcb4: // orphan
         at = 0x3f80 << 16
         mtc1 at, f2
         goto 0x8023fe30
         

    loc_0x8023fcc4: // orphan
         t9 = 0x8251 << 16
         t9 = [t9 - 0x7848]
         a2 = 0x8251 << 16
         a3 = 0x8251 << 16
         t1 = sp + 0x48
         [sp + 0x14] = t1
         a3 = [a3 - 0x784c]
         a2 = [a2 - 0x7850]
         a0 = [a0 - 0x7868]       // t9
         a1 = [a1 - 0x7854]       // t9
         [sp + 0x58] = v0
         call fcn.825003dc        // fcn.825003dc(-1)
         [sp + 0x10] = t9
         v0 = [sp + 0x58]         // s4
         goto 0x8023fe30
         mov.s f2, f0

    loc_0x8023fd04: // orphan
         t2 = halfword [t2 - 0x7096]
         a0 = 0x8251 << 16
         a1 = 0x8251 << 16
         if                       // unlikely
         a2 = 0x8251 << 16

    loc_0x8023fd18: // orphan
         goto 0x8023fe30
         v0 = 0

    loc_0x8023fd20: // orphan
         t3 = 0x8251 << 16
         t3 = [t3 - 0x7848]
         a3 = 0x8251 << 16
         t4 = sp + 0x48
         [sp + 0x14] = t4
         a3 = [a3 - 0x784c]
         a0 = [a0 - 0x7868]       // t9
         a1 = [a1 - 0x7854]       // t9
         a2 = [a2 - 0x7850]       // t9
         call fcn.825003dc        // "F" // fcn.825003dc(-1)
         [sp + 0x10] = t3
         mov.s f2, f0
         goto 0x8023fe30
         v0 = 0 + 1               // lo

    loc_0x8023fd58: // orphan
         t6 = halfword [t5 + 2]
         t7 = 0x8251 << 16
         v0 = 0
         if                       // unlikely
         

    loc_0x8023fd6c: // orphan
         t7 = halfword [t7 - 0x7096]
         v0 = 0 + 1               // lo
         a0 = 0x8251 << 16
         if                       // unlikely
         a1 = 0x8251 << 16

    loc_0x8023fd80: // orphan
         at = 0x3f80 << 16
         mtc1 at, f2
         goto 0x8023fe30
         

    loc_0x8023fd90: // orphan
         t8 = 0x8251 << 16
         t8 = [t8 - 0x7848]
         a2 = 0x8251 << 16
         a3 = 0x8251 << 16
         t9 = sp + 0x48
         [sp + 0x14] = t9
         a3 = [a3 - 0x784c]
         a2 = [a2 - 0x7850]
         a0 = [a0 - 0x7868]       // t9
         a1 = [a1 - 0x7854]       // t9
         [sp + 0x58] = v0

    loc_0x8023fdbc: // orphan
         call fcn.825003dc        // fcn.825003dc(-1)
         [sp + 0x10] = t8
         t1 = 0x8251 << 16
         t1 = halfword [t1 - 0x7086]
         v0 = [sp + 0x58]         // s4
         mov.s f2, f0
         if                       // unlikely
         t2 = [sp + 0x48]

    loc_0x8023fddc: // orphan
         if                       // unlikely
         v1 = 0x8251 << 16

    loc_0x8023fde4: // orphan
         v1 = halfword [v1 - 0x7084]
         a0 = 0 + 1               // lo
         at = , v1 < 4
         if                       // likely
         

    loc_0x8023fdf8: // orphan
         v1 += 1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10

    loc_0x8023fe04: // orphan
         at = 0x8251 << 16
         halfword [at - 0x7084] = v1
         at = 0 + 2
         if                       // likely
         

    loc_0x8023fe18: // orphan
         [sp + 0x58] = v0
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x4c, sp
         v0 = [sp + 0x58]         // s4
         goto 0x8023fe30
         lwc1 f2, 0x4c, sp

    loc_0x8023fe30: // orphan
         // XREFS: CODE 0x8023fc7c  CODE 0x8023fc84  CODE 0x8023fcbc  
         // XREFS: CODE 0x8023fcfc  CODE 0x8023fd18  CODE 0x8023fd50  
         // XREFS: CODE 0x8023fd88  CODE 0x8023fe28  
         if                       // unlikely
         at = 0x437f << 16

    loc_0x8023fe38: // orphan
         mtc1 at, f4
         mtc1 0, f6
         at = 0xbf00 << 16
         mul.s f0, f4, f2
         v1 = s0 + 0x2c
         t0 = s0 + 0x30
         c.lt.s f6, f0
         

    loc_0x8023fe58: // orphan
         bc1fl 0x8023fe74
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x8023fe7c
         add.s f8, f2, f0

    loc_0x8023fe7c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fe68
         a3 = 0x3f80 << 16
         trunc.w.s f10, f8
         mfc1 t4, f10
         
         byte [s0 + 0x2f] = t4
         t6 = [sp + 0x6c]         // t3
         t5 = [sp + 0x3c]
         t7 = t6 << 2
         v0 = t5 + t7
         t8 = halfword [v0 + 0x14]
         halfword [s0 + 8] = t8
         t9 = halfword [v0 + 0x16]
         a0 = halfword [s0 + 8]
         halfword [s0 + 0xa] = t9
         t1 = [sp + 0x60]
         a1 = halfword [s0 + 0xa]

    loc_0x8023fef8: // orphan
         t6 = [sp + 0x3c]

    loc_0x8023fefc: // orphan
         t5 = 0x8251 << 16
         t5 -= 0x72f0
         if                       // likely
         t7 = 0x8251 << 16

    loc_0x8023ff0c: // orphan
         t7 = halfword [t7 - 0x7090]
         t8 = 0x8251 << 16
         bnel t7, 0, 0x8023ff30   // likely
         ra = [sp + 0x2c]         // s4

    loc_0x8023ff1c: // orphan
         t8 = [t8 - 0x7868]       // t9
         at = 0x8251 << 16
         t9 = t8 + 1
         [at - 0x7868] = t9

    loc_0x8023ff2c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fbb8
         ra = [sp + 0x2c]         // s4

    loc_0x8023ff30: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023fb64
         s0 = [sp + 0x28]         // a2
         sp += 0x78
         ret                      // ra
         v0 = 0

    loc_0x8023ff94: // orphan
         t1 = halfword [t1 - 0x7082]
         t2 = 0x8251 << 16
         beql t1, 0, 0x80240024   // unlikely
         t3 = , unsigned  halfword [a1 + 2]

    loc_0x8023ffa4: // orphan
         t2 = halfword [t2 - 0x7096]
         t8 = v0 << 4
         a0 = 0x8251 << 16
         if                       // unlikely
         t8 -= v0

    loc_0x8023ffb8: // orphan
         t3 = , unsigned  halfword [a1 + 2]
         a0 = 0x8251 << 16
         t4 = t3 & 0xfffd
         halfword [a1 + 2] = t4

    loc_0x8023ffc8: // orphan
         goto 0x80240034
         a0 = halfword [a0 - 0x7844]

    loc_0x8023ffd0: // orphan
         a0 = halfword [a0 - 0x7844]
         t5 = , unsigned  halfword [a1 + 2]
         t8 <<= 2
         at = , a0 < 6
         t6 = t5 | 2
         if                       // likely
         halfword [a1 + 2] = t6

    loc_0x8023ffec: // orphan
         goto 0x8023fffc
         // CODE XREF from fcn.8023e660 @ 0x8023d12c
         a2 = a0                  // t9

    loc_0x8023fff4: // orphan
         t7 = 0 + 0xc
         a2 = t7 - a0

    loc_0x8023fffc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023ffec
         t9 = 0x8251 << 16

    loc_0x80240024: // orphan
         a0 = 0x8251 << 16
         t4 = t3 & 0xfffd
         halfword [a1 + 2] = t4   // arg2
         a0 = halfword [a0 - 0x7844]

    loc_0x80240034: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023ffc8
         // CODE XREF from fcn.80240014 @ 0x80240018
         if                       // fcn.80240040+0x28 // likely
         t5 = 0x8251 << 16

    loc_0x8024003c: // orphan
         t5 = halfword [t5 - 0x7090]

    loc_0x802400f0: // orphan
         [sp + 0x30] = s0
         a2 = a1                  // t0
         if                       // unlikely
         v1 = [a1 + 0x20]         // t9

    loc_0x80240100: // orphan
         at = 0 + 1               // lo
         beql a0, at, 0x80240128  // unlikely
         a0 = , unsigned  halfword [a2 + 0x24]

    loc_0x8024010c: // orphan
         goto 0x80240264          // fcn.80240260+0x4
         ra = [sp + 0x34]         // t9

    loc_0x80240114: // orphan
         t6 = , unsigned  halfword [a2 + 2]
         t7 = t6 & 0xfffd
         goto fcn.80240260        // fcn.80240260(-1)
         // CALL XREF from fcn.82bf2bf0 @ +0x7c8
         halfword [a2 + 2] = t7   // arg3

    loc_0x80240128: // orphan
         a1 = , unsigned  halfword [a2 + 0x26]
         call 0x8004c990          // 0x8004c990(-1, 0x38e2, 0x8, -1)
         [sp + 0x70] = v1
         v1 = [sp + 0x70]
         if                       // fcn.80240260 // unlikely
         [sp + 0x64] = v0

    loc_0x80240140: // orphan
         t8 = v1 << 2
         s0 = 0x8251 << 16
         s0 += t8

    loc_0x8024014c: // orphan
         s0 = [s0 - 0x7054]       // t9
         beql s0, 0, 0x80240264   // fcn.80240260+0x4 // unlikely
         ra = [sp + 0x34]         // t9

    loc_0x80240158: // orphan
         a0 = , unsigned  halfword [s0 + 0x24]
         call 0x8004c990          // 0x8004c990(0xffff, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [s0 + 0x26]
         a3 = 0x800d << 16
         a3 += 0x510
         v1 = [a3 + 0]
         [sp + 0x5c] = v0
         t3 = 0x8009 << 16
         t9 = v1 + 8
         [a3 + 0] = t9

    loc_0x80240368: // orphan
         t5 = , unsigned  byte [t8 + 3] // s4
         t9 = t6 | t5
         [v0 + 4] = t9
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = 0
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t8 = v0 + 8
         [v1 + 0] = t8
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t6
         ra = [sp + 0x1c]

    loc_0x802403d4: // orphan
         t9 = a2 << 2             // k0
         goto 0x80240468
         ra = [sp + 0x24]         // s4

    loc_0x802404cc: // orphan
         halfword [a2 + 0x38] = t1
         t2 = halfword [a1 + 0x28]
         halfword [a2 + 0x3c] = t2
         t3 = halfword [a1 + 0x2a]
         ret                      // ra
         halfword [a2 + 0x40] = t3

    loc_0x80240528: // orphan
         halfword [a1 + 0xe] = t9
         t2 = halfword [a2 + 0x34]
         t1 = halfword [a1 + 0xc]
         t5 = halfword [a2 + 0x3c]
         t4 = halfword [a2 + 0x38]
         v1 = t1 - t2
         t6 = t5 + v1
         halfword [a1 + 0x28] = t6
         t7 = halfword [a1 + 0x28]
         t3 = halfword [a1 + 0xe]
         t5 = v0 << 2

    loc_0x80240554: // orphan
         if                       // likely
         a0 = t3 - t4

    loc_0x8024055c: // orphan
         halfword [a1 + 0x28] = 0

    loc_0x80240560: // orphan
         t8 = halfword [a2 + 0x40]
         t6 = a3 + t5
         t9 = t8 + a0
         halfword [a1 + 0x2a] = t9
         t0 = halfword [a1 + 0x2a]
         bgezl t0, 0x80240584     // fcn.80240578+0xc // likely

}
