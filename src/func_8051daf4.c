/*
 * Function: 0x8051daf4
 * Category: math
 */

// Decompiled C code
int fcn.80507018 (int esi, int edx) {
}

/*
// Full radare2 output
int fcn.80507018 (int esi, int edx) {
    loc_0x80507018:
        // CALL XREF from fcn.82b37898 @ +0xf80
        // CALL XREF from fcn.82cd4924 @ 0x82cd4934
        bgezl s0, 0x8051c77c // likely
        bgezl 0, 0x8051c7c0 // likely
        // chop
    loc_0x80507024: // orphan
             bgezl s0, 0x8051c828     // likely
             bgezl t0, 0x8051c7fc     // likely

    loc_0x80507030: // orphan
         bgezl 0, 0x8051c854      // likely
         bgezl t0, 0x8051c878     // likely

    loc_0x8050703c: // orphan
         bgezl t0, 0x8051c890     // likely
         bgezl s0, 0x8051c8a4     // likely

    loc_0x80507048: // orphan
         bgezl t0, 0x8051c90c     // likely
         bgezl s0, 0x8051c950     // likely

    loc_0x80507054: // orphan
         bgezl s0, 0x8051c938     // likely
         bgezl t0, 0x8051c96c     // likely

    loc_0x80507060: // orphan
         bgezl 0, 0x8051c9f4      // likely

    loc_0x80507064: // orphan
         bgezl t0, 0x8051ca18     // likely
         bgezl s0, 0x8051ca5c     // likely

    loc_0x80507070: // orphan
         bgezl s0, 0x8051ca44     // likely
         bgezl t0, syscall.65535.128 // likely

    loc_0x8050707c: // orphan
         bgezl 0, 0x8051cb00      // fcn.805059b0+0x17150 // likely
         bgezl t0, 0x8051cb24     // likely

    loc_0x80507088: // orphan
           // CALL XREF from fcn.806306a0 @ +0x53c
         bgezl s0, 0x8051cb58     // likely
         bgezl t0, 0x8051cb3c     // likely

    loc_0x80507094: // orphan
         bgezl t0, 0x8051cbc4     // fcn.80507050+0x15b74 // likely
         bgezl s0, 0x8051cbd8     // fcn.80508710+0x144c8 // likely

    loc_0x805070a0: // orphan
         bgezl s0, 0x8051cc30     // fcn.80507018+0x15c18 // likely
         bgezl t0, 0x8051cc64     // likely

    loc_0x805070ac: // orphan
         bgezl t0, 0x8051ccac     // fcn.80507050+0x15c5c // likely
         bgezl s0, 0x8051ccc0     // likely

    loc_0x805070b8: // orphan
         bgezl s0, 0x8051cdb8     // fcn.80507018+0x15da0 // likely
         bgezl t0, 0x8051cddc     // fcn.80508710+0x146cc // likely

    loc_0x805070c4: // orphan
         bgezl t0, 0x8051cea4     // fcn.80507050+0x15e54 // likely
         bgezl s0, 0x8051ceb8     // likely

    loc_0x805070d0: // orphan
         bgezl s0, 0x8051cf30     // fcn.805059b0+0x17580 // likely
         bgezl 0, 0x8051cfe4      // fcn.80508710+0x148d4 // likely

    loc_0x805070dc: // orphan
         bgezl t0, 0x8051d17c     // fcn.828fd354-0x23e01d8 // likely
         bgezl s0, 0x8051d1a0     // likely

    loc_0x805070e8: // orphan
         bgezl s0, 0x8051d1e8     // fcn.80508710+0x14ad8 // likely
         v1 = halfword [0 + 0x5858]

    loc_0x805070ec: // orphan
         bgezl 0, 0x8051d2c0      // fcn.805059b0+0x17910 // likely
         bgezl 0, 0x8051d334      // likely

    loc_0x805070f8: // orphan
         bgezl s0, 0x8051d38c     // fcn.80508710+0x14c7c // likely
         bgezl t0, 0x8051d3c0     // likely

    loc_0x80507104: // orphan
         bgezl t0, 0x8051d448     // fcn.80508710+0x14d38 // likely
         bgezl s0, 0x8051d45c     // fcn.80508710+0x14d4c // likely

    loc_0x80507110: // orphan
         bgezl t0, fcn.8051d504   // likely
         bgezl s0, 0x8051d528     // likely

    loc_0x8050711c: // orphan
         bgezl t0, 0x8051d450     // fcn.80508710+0x14d40 // likely
         bgezl s0, 0x8051d594     // likely

    loc_0x80507128: // orphan
         bgezl t0, 0x8051d69c     // likely
         bgezl s0, 0x8051d6b0     // likely

    loc_0x80507134: // orphan
         bgezl s0, 0x8051d748     // fcn.828fd354-0x23dfc0c // likely
         bgezl 0, 0x8051d7bc      // likely

    loc_0x80507140: // orphan
         bgezl t0, 0x8051d824     // fcn.805380bc-0x1a898 // likely
         bgezl s0, 0x8051d838     // likely

    loc_0x8050714c: // orphan
         bgezl s0, 0x8051d8a0     // fcn.80508710+0x15190 // likely
         bgezl 0, 0x8051d964      // likely

    loc_0x80507158: // orphan
         v1 = halfword [0 + 0x5a54]

    loc_0x8050715c: // orphan
         v1 = halfword [0 + 0x5a5c]
         v1 = halfword [0 + 0x5ab0]
         bgezl t0, 0x8051dd68     // fcn.80508710+0x15658 // likely
         bgezl s0, 0x8051dd7c     // fcn.80508710+0x1566c // likely

    loc_0x80507170: // orphan
         bgezl t0, 0x8051de74     // fcn.80508710+0x15764 // likely
         bgezl s0, 0x8051de88     // fcn.80508710+0x15778 // likely

    loc_0x8050717c: // orphan
         bgezl t0, 0x8051e040     // fcn.80502c0c+0x1b434 // likely
         bgezl s0, 0x8051e064     // likely

    loc_0x80507188: // orphan
         bgezl t0, 0x8051e12c     // fcn.80508710+0x15a1c // likely
         bgezl s0, 0x8051e170     // likely

    loc_0x80507194: // orphan
         v1 = halfword [0 + 0x5c30]
         bgezl t0, 0x8051e38c     // fcn.828fd354-0x23defc8 // likely
         bgezl s0, 0x8051e3a0     // likely

    loc_0x805071a4: // orphan
         bgezl t0, 0x8051e4f8     // fcn.80508710+0x15de8 // likely
         bgezl s0, 0x8051e50c     // fcn.80508710+0x15dfc // likely

    loc_0x805071b0: // orphan
         v1 = halfword [0 + 0x5db0]
         bgezl t0, 0x8051eb18     // fcn.80508710+0x16408 // likely
         bgezl s0, 0x8051eb3c     // fcn.80508710+0x1642c // likely

    loc_0x805071c0: // orphan
         bgezl 0, 0x8051ee34      // likely
         v1 = halfword [0 + 0x5fe8]

    loc_0x805071c8: // orphan
         bgezl t0, 0x8051f24c     // likely
         bgezl s0, 0x8051f290     // likely

    loc_0x805071d4: // orphan
         bgezl 0, 0x8051f3b8      // fcn.80508710+0x16ca8 // likely
         bgezl 0, 0x8051f45c      // likely

    loc_0x805071e0: // orphan
         bgezl s0, 0x8051f504     // fcn.80508710+0x16df4 // likely
         bgezl 0, 0x8051f618      // likely

    loc_0x805071ec: // orphan
         bgezl s0, 0x8051f690     // likely
         bgezl 0, 0x8051f7e4      // likely

    loc_0x805071f8: // orphan
         bgezl s0, 0x8051f98c     // fcn.80508710+0x1727c // likely
         bgezl 0, 0x8051fa00      // likely

    loc_0x80507204: // orphan
         bgezl s0, 0x8051fab8     // likely
         bgezl t0, 0x8051fb5c     // likely

    loc_0x80507210: // orphan
         bgezl t0, 0x8051fc94     // fcn.80508710+0x17584 // likely
         bgezl s0, 0x8051fcb8     // likely

    loc_0x8051ca5c: // orphan
         tge s0, 0, 0xe0

    loc_0x8051ca60: // orphan
         teq s0, 0, 0xe0

    loc_0x8051ca78: // orphan
         syscall                  // 255 = unknown ()

    loc_0x8051cb50: // orphan
         goto 0x84300020
         

    loc_0x8051cc1c: // orphan
         [sp + 0x18] = a0
         a0 &= 0xff               // s4
         at = , unsigned  , a0 < 0x1c
         [sp + 0x14] = ra
         if                       // fcn.80508710+0x145f8 // likely
         v1 = 0

    loc_0x8051cc34: // orphan
         t6 = a0 << 2
         at = 0x8430 << 16
         at += t6
         t6 = [at + 0x2c04]       // t9
         goto t6                  // t9
         

    loc_0x8051cc78: // orphan
         goto 0x8051cd08          // fcn.80508710+0x145f8
         v1 = 0 + 0x4d

    loc_0x8051cda4: // orphan
         at = 0x41f0 << 16
         mtc1 at, f9
         mtc1 0, f8
         
         add.d f6, f6, f8

    loc_0x8051cdb8: // orphan
         // CODE XREF from fcn.8051cc4c @ +0x150
         at = 0x41f0 << 16
         mtc1 at, f11
         mtc1 v1, f4
         at = 0x4f80 << 16
         div.d f16, f6, f10
         ra = [sp + 0x14]
         cvt.s.w f8, f4
         if                       // fcn.80508710+0x146d8 // likely
         cvt.s.d f18, f16

    loc_0x8051d048: // orphan
         // CODE XREF from fcn.80508710 @ 0x8051d020
         a0 = 0x8430 << 16
         a0 += 0x2ca2             // arg1
         blezl t8, 0x8051d0f8     // unlikely
         ra = [sp + 0x1c]

    loc_0x8051d334: // orphan
         // CODE XREF from fcn.8051cc4c @ +0x6d8
         call 0x843006b0          // 0x843006b0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a2
         if                       // unlikely
         a2 = [sp + 0x1c]

    loc_0x8051d344: // orphan
         goto 0x8051d398          // fcn.80508710+0x14c88
         v0 = 0 + 1               // lo

    loc_0x8051d34c: // orphan
         // CODE XREF from fcn.80507018 @ 0x8051d33c
         a0 = 0x8430 << 16
         a0 = , unsigned  byte [a0 + 0x2c88] // s4
         v0 = 0x8430 << 16
         v0 = [v0 + 0x2c80]       // t9
         if                       // fcn.80508710+0x14c84 // unlikely
         v1 = 0

    loc_0x8051d3c0: // orphan
         if                       // unlikely
         v1 = 0

    loc_0x8051d3c8: // orphan
         // CODE XREF from fcn.80507018 @ 0x8051d3ec
         a0 = , unsigned  byte [v0 + 0] // s4
         v1 += 1
         at = , v1 < a1           // lo

    loc_0x8051d3d4: // orphan
         if                       // unlikely
         

    loc_0x8051d3dc: // orphan
         if                       // likely
         

    loc_0x8051d3e4: // orphan
         ret                      // ra
         v0 = 0

    loc_0x8051d3ec: // orphan
         // CODE XREFS from fcn.80507018 @ 0x8051d3d4, 0x8051d3dc
         if                       // likely
         v0 += 0x58

    loc_0x8051d3f4: // orphan
         // CODE XREF from fcn.80507018 @ 0x8051d3c0
         v0 = 0 + 1               // lo
         ret                      // ra
         

    loc_0x8051d528: // orphan
         a0 = 0x8430 << 16
         v1 = , unsigned  halfword [a2 + 0xe]
         t7 = t6 << 3
         t7 += t6
         t7 <<= 2
         t7 += t6
         t7 <<= 2

    loc_0x8051d544: // orphan
         a0 += t7                 // arg1 // t9
         a0 = , unsigned  halfword [a0 + 0x2566]
         a1 = , unsigned  byte [sp + 0x1b] // s4
         at = , a0 < v1
         if                       // fcn.80508710+0x14e50 // likely
         at = , v0 < v1           // lo

    loc_0x8051d594: // orphan
         // CODE XREFS from fcn.80508710 @ 0x8051d564, 0x8051d570
         call 0x84300200          // 0x84300200(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x3108
         // CODE XREF from fcn.8051cc4c @ +0x8b4
         // CODE XREF from fcn.8051d504 @ 0x8051d50c
         ra = [sp + 0x14]

    loc_0x8051d6b0: // orphan
         s3 = 0 + 0xff            // s4
         s4 = 0 + 0x12
         t6 = [s1 + 0x14]         // t9

    loc_0x8051d7bc: // orphan
         t6 = [v1 + 0x10]         // t9
         t7 = 0 + 1               // lo
         t8 = t7 << v0

    loc_0x8051d7c8: // orphan
         t9 = t6 | t8             // s2
         [v1 + 0x10] = t9
         call 0x800639c0          // 0x800639c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 & 0xff
         call 0x800630f0          // 0x800630f0(0x4, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0 & 0xff           // s4
         v1 = 0x8430 << 16
         v1 += 0x2c88
         t0 = [v1 + 0x10]         // t9
         t1 = 0 + 1               // lo
         t2 = t1 << v0
         t3 = t0 | t2             // t9
         [v1 + 0x10] = t3
         ra = [sp + 0x1c]         // a2

    loc_0x8051d800: // orphan
         v0 = s0
         s0 = [sp + 0x18]         // t9
         ret                      // ra
         sp += 0x20

    loc_0x8051d838: // orphan
         
         t6 = v0 & 1              // lo
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d848: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2d06
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d06
         call 0x84300350          // 0x84300350(0x84302d06, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2e46
         call 0x84300350          // 0x84300350(0x84302e46, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d87c: // orphan
         a0 = 0x8430 << 16
         call 0x84300348          // 0x84300348(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2d56
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d890: // orphan
         a0 = 0x8430 << 16

    loc_0x8051d8c8: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2d06
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d8d8: // orphan
         // CODE XREF from fcn.8051b384 @ +0xf80
         a0 = 0x8430 << 16
         call 0x8430022c          // 0x8430022c(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2d06
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d06
         call 0x84300350          // 0x84300350(0x84302d06, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8051d8f4: // orphan
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2e46
         call 0x84300350          // 0x84300350(0x84302e46, 0xff, 0x8, -1)
         a1 = s0 & 0xff
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d910: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e46
         if                       // unlikely
         

    loc_0x8051d920: // orphan
         call 0x8003570c          // "0O" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t7 = v0 & 1              // lo
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d934: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e46
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d06
         call 0x84300350          // 0x84300350(0x84302d06, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2e46
         call 0x84300350          // 0x84300350(0x84302e46, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d964: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e46
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d06
         call 0x84300350          // 0x84300350(0x84302d06, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2e46
         call 0x84300350          // 0x84300350(0x84302e46, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d968: // orphan
         a0 = 0x8430 << 16
         call 0x84300348          // 0x84300348(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2ea0
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d97c: // orphan
         a0 = 0x8430 << 16
         call 0x8430022c          // 0x8430022c(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2ea0
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d56
         call 0x84300350          // 0x84300350(0x84302d56, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2ea0
         call 0x84300350          // 0x84300350(0x84302ea0, 0xff, 0x8, -1)

    loc_0x8051d9a8: // orphan
         a1 = s0 & 0xff
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d9b4: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e46
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051d9c4: // orphan
         a0 = 0x8430 << 16
         call 0x8430022c          // 0x8430022c(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2e46

    loc_0x8051d9d0: // orphan
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2d06
         call 0x84300350          // 0x84300350(0x84302d06, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2e46
         call 0x84300350          // 0x84300350(0x84302e46, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051d9fc: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2da6
         if                       // unlikely
         

    loc_0x8051da0c: // orphan
         call 0x8003570c          // "0X" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t8 = v0 & 1              // lo
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051da20: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2da6
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2da6
         call 0x84300350          // 0x84300350(0x84302da6, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2efa

    loc_0x8051da54: // orphan
         a0 = 0x8430 << 16
         call 0x84300348          // 0x84300348(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2df6
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051da68: // orphan
         a0 = 0x8430 << 16
         call 0x8430022c          // 0x8430022c(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2df6
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         // CODE XREF from fcn.80508710 @ 0x8051c308
         a0 += 0x2df6
         call 0x84300350          // 0x84300350(0x84302df6, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2f54
         call 0x84300350          // 0x84300350(0x84302f54, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051daa0: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2da6
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051dae8: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2efa
         if                       // unlikely
         

    loc_0x8051daf8: // orphan
         call 0x8003570c          // "0Y" // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = v0 & 1              // lo
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051db0c: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2efa
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2da6
         call 0x84300350          // 0x84300350(0x84302da6, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2efa
         call 0x84300350          // 0x84300350(0x84302efa, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051db40: // orphan
         a0 = 0x8430 << 16
         call 0x84300348          // 0x84300348(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2f54
         if                       // unlikely
         a0 = 0x8430 << 16

    loc_0x8051db54: // orphan
         a0 = 0x8430 << 16
         call 0x8430022c          // 0x8430022c(0x84300000, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2f54
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2df6
         call 0x84300350          // 0x84300350(0x84302df6, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2f54
         call 0x84300350          // 0x84300350(0x84302f54, 0xff, 0x8, -1)
         a1 = s0 & 0xff           // s4

    loc_0x8051db84: // orphan
         goto 0x8051dbc8          // fcn.80508710+0x154b8
         

    loc_0x8051db8c: // orphan
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8051db90: // orphan
         a0 += 0x2efa
         if                       // fcn.80508710+0x154b8 // unlikely
         a0 = 0x8430 << 16

    loc_0x8051db9c: // orphan
         call 0x8430022c          // 0x8430022c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2efa
         a0 = 0x8430 << 16
         s0 = v0 & 0xff           // s4
         a0 += 0x2da6
         call 0x84300350          // 0x84300350(0x84302da6, 0x442f71dcfe116408, 0x8, -1)
         a1 = v0 & 0xff           // s4
         a0 = 0x8430 << 16
         a0 += 0x2efa

    loc_0x8051e064: // orphan
         a0 = 0x8430 << 16

    loc_0x8051e068: // orphan
         a0 += 0x2efa             // arg1
         call 0x84300348          // 0x84300348(0x100002ef9, 0x442f71dcfe116408, 0x8, -1)
         s1 = 0 + 1               // lo
         if                       // unlikely
         t7 = 0x8430 << 16

    loc_0x8051e07c: // orphan
         t7 += 0x2ca0
         s0 = s1 + t7
         s3 = , unsigned  byte [sp + 0x147]
         s5 = sp + 0x44
         s2 = , unsigned  byte [s0 + 0x25a] // s4

    loc_0x8051e090: // orphan
         call 0x80062d98          // 0x80062d98(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         

    loc_0x8051e0a0: // orphan
         if                       // likely
         a0 = s5                  // t9

    loc_0x8051e0a8: // orphan
         call 0x84300200          // 0x84300200(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s2 & 0xff           // s4

    loc_0x8051e0b0: // orphan
         a0 = 0x8430 << 16
         a0 += 0x2efa
         s1 += 1
         call 0x84300348          // 0x84300348(0x84302efa, 0x442f71dcfe116408, 0x8, -1)
         s0 += 1
         at = , v0 < s1           // lo
         beql at, 0, 0x8051e090   // unlikely
         s2 = , unsigned  byte [s0 + 0x25a] // s4

    loc_0x8051e0d0: // orphan
         byte [sp + 0x149] = s2

    loc_0x8051e0d4: // orphan
         t8 = , unsigned  byte [sp + 0x144]
         t9 = [sp + 0x40]
         s2 = , unsigned  byte [sp + 0x149] // s4
         s5 = sp + 0x44
         at = , t8 < t9
         if                       // likely
         a0 = 0x8430 << 16

    loc_0x8051e0f0: // orphan
         // CODE XREF from fcn.8051b384 @ +0xf98
         call 0x84300348          // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x2efa
         if                       // fcn.80508710+0x15a54 // likely
         a0 = 0x8430 << 16

    loc_0x8051e0fc: // orphan
         a0 = 0x8430 << 16

    loc_0x8051e100: // orphan
         a0 += 0x2f54
         call 0x84300348          // 0x84300348(0x100002f53, 0x442f71dcfe116408, 0x8, -1)
         s1 = 0 + 1               // lo
         if                       // fcn.80508710+0x15a54 // unlikely
         t0 = 0x8430 << 16

    loc_0x8051e114: // orphan
         t0 += 0x2ca0
         s0 = s1 + t0
         s3 = , unsigned  byte [sp + 0x147]
         s2 = , unsigned  byte [s0 + 0x2b4] // s4

    loc_0x8051e170: // orphan
         call 0x84300348          // "X@" // 0x84300348(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s5                  // t9
         blezl v0, 0x8051e198     // unlikely
         t2 = , unsigned  byte [sp + 0x14a]

    loc_0x8051e3a0: // orphan
         a2 &= 0xff               // arg3
         a1 &= 0xff               // arg2 // a2

    loc_0x8051f290: // orphan
         goto 0x80000000
         s0 = halfword [at + 0x250c]

    loc_0x8051f298: // orphan
         s0 = halfword [at + 0x2514]

    loc_0x8051f29c: // orphan
         if                       // unlikely
         s0 = halfword [at + 0x251c]

    loc_0x8051f2a0: // orphan
         s0 = halfword [at + 0x251c]

    loc_0x8051f2a4: // orphan
         if                       // unlikely
         s0 = halfword [at + 0x2524]

    loc_0x8051f2a8: // orphan
         if                       // unlikely
         s0 = halfword [at + 0x2524]

    loc_0x8051f45c: // orphan
         s0 = halfword [at + 0x27f4]
         s0 = halfword [at + 0x27fc]

    loc_0x8051f618: // orphan
         goto 0x88000000
         beql k1, a1, 0x8053c778  // unlikely

    loc_0x8051f7e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f7f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051f7fc: // orphan
         if                       // fcn.80508710+0x18290 // unlikely
         if                       // unlikely

    loc_0x8051f808: // orphan
         if                       // unlikely

    loc_0x8051fa00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa30: // orphan
         if                       // fcn.828fd354-0x23da150 // unlikely
         if                       // unlikely

    loc_0x8051fa3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fa78: // orphan
         if                       // fcn.80508710+0x1ad0c // unlikely
         if                       // fcn.80508710+0x1ad00 // unlikely

    loc_0x8051fa84: // orphan
         if                       // fcn.80508710+0x1ad68 // unlikely
         if                       // fcn.80508710+0x1ad5c // unlikely

    loc_0x8051fa90: // orphan
         if                       // fcn.80508710+0x1ada4 // unlikely
         if                       // fcn.80508710+0x1adb8 // unlikely

    loc_0x8051fa9c: // orphan
         if                       // fcn.80508710+0x1adf0 // unlikely
         if                       // fcn.80508710+0x1ae04 // unlikely

    loc_0x8051faa8: // orphan
         if                       // fcn.80508710+0x1ae5c // unlikely
         if                       // fcn.80508710+0x1ae50 // unlikely

    loc_0x8051fab4: // orphan
         if                       // fcn.80508710+0x1aef8 // unlikely
         if                       // fcn.80508710+0x1aeec // unlikely

    loc_0x8051fac0: // orphan
         if                       // fcn.80508710+0x1af34 // unlikely
         if                       // fcn.80508710+0x1af48 // unlikely

    loc_0x8051facc: // orphan
         if                       // fcn.80508710+0x1af80 // unlikely
         // CODE XREF from fcn.80508710 @ 0x8051c3dc
         if                       // fcn.80508710+0x1af94 // unlikely

    loc_0x8051fad8: // orphan
         if                       // fcn.80508710+0x1affc // unlikely
         if                       // fcn.80508710+0x1aff0 // unlikely

    loc_0x8051fae4: // orphan
         if                       // fcn.80508710+0x1b058 // unlikely
         if                       // fcn.80508710+0x1b04c // unlikely

    loc_0x8051faf0: // orphan
         if                       // fcn.80508710+0x1b094 // unlikely
         if                       // fcn.80508710+0x1b0a8 // unlikely

    loc_0x8051fafc: // orphan
         if                       // fcn.80508710+0x1b0e0 // unlikely
         if                       // fcn.80508710+0x1b0f4 // unlikely

    loc_0x8051fb08: // orphan
         if                       // fcn.8052385c // unlikely
         if                       // unlikely

    loc_0x8051fb14: // orphan
         if                       // fcn.80508710+0x1b1a8 // unlikely
         if                       // fcn.80508710+0x1b19c // unlikely

    loc_0x8051fb20: // orphan
         if                       // fcn.80508710+0x1b1e4 // unlikely
         if                       // fcn.80508710+0x1b1f8 // unlikely

    loc_0x8051fb2c: // orphan
         if                       // fcn.80508710+0x1b230 // unlikely
         if                       // fcn.80508710+0x1b244 // unlikely

    loc_0x8051fb38: // orphan
         if                       // fcn.80508710+0x1b29c // unlikely
         if                       // fcn.80508710+0x1b290 // unlikely

    loc_0x8051fb44: // orphan
         if                       // fcn.80508710+0x1b338 // unlikely
         if                       // fcn.80508710+0x1b32c // unlikely

    loc_0x8051fb50: // orphan
         if                       // fcn.80508710+0x1b374 // unlikely
         if                       // fcn.80508710+0x1b388 // unlikely

    loc_0x8051fb5c: // orphan
         if                       // fcn.80508710+0x1b3c0 // unlikely

    loc_0x8051fb8c: // orphan
         if                       // fcn.80508710+0x1b520 // unlikely

    loc_0x8051fcb8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fcc4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051fcd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8051ffc8: // orphan
         tge s0, 0, 0x98

    loc_0x80520a94: // orphan
         t7 += t6
         t7 <<= 2
         a0 = v0 + t7
         call 0x8000b580          // 0x8000b580(0xfffffffffffe2b83, 0x442f71dcfe116408, 0x8, -1)
         a0 += 8

    loc_0x80523218: // orphan
         [sp + 0x4c] = a1
         if                       // likely
         [sp + 0x50] = a2

    loc_0x80523224: // orphan
         at = , a3 < 0x30         // lo
         if                       // likely
         a0 = 0 + 0x7c

    loc_0x80523230: // orphan
         a1 = 0
         call 0x82d02d20          // 0x82d02d20(-1, 0x0, 0x8, -1)
         [sp + 0x40] = a3
         a3 = [sp + 0x40]         // t9
         t6 = 0 + 0x400
         t7 = 0 + 0x400
         a3 -= 0x18
         a3 <<= 0x10
         a3 = , signed  a3 >> 0x10
         [sp + 0x3c] = a3
         [sp + 0x1c] = t7
         [sp + 0x18] = t6
         a0 = halfword [sp + 0x4a]

    loc_0x80523264: // orphan
         a1 = halfword [sp + 0x4e]
         a2 = 0 + 0x18
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x6408, 0x18, -1)
         [sp + 0x20] = 0
         at = , s0 < 0x31
         if                       // unlikely
         a0 = halfword [sp + 0x4a]

    loc_0x80523288: // orphan
         a0 += 0x18
         a2 = s0 - 0x30
         a2 <<= 0x10
         a0 <<= 0x10
         t8 = 0 + 0x2e0
         t9 = 0 + 0x400
         [sp + 0x1c] = t9
         [sp + 0x10] = t8
         a0 = , signed  a0 >> 0x10
         a2 = , signed  a2 >> 0x10
         a1 = halfword [sp + 0x4e]
         a3 = halfword [sp + 0x3e]
         [sp + 0x14] = 0
         [sp + 0x18] = 0

    loc_0x805232c0: // orphan
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0

    loc_0x805232c8: // orphan
         a0 = 0 + 0x7c
         call 0x82d02d20          // 0x82d02d20(0x7c, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 1               // lo
         t0 = halfword [sp + 0x4a]
         t1 = 0 + 0x400
         t2 = 0 + 0x400
         a0 = t0 + s0
         a0 -= 0x18
         a0 <<= 0x10
         a0 = , signed  a0 >> 0x10
         [sp + 0x38] = a0
         [sp + 0x1c] = t2
         [sp + 0x18] = t1
         a1 = halfword [sp + 0x4e]
         a2 = 0 + 0x18
         a3 = halfword [sp + 0x3e]
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xec, 0x6408, 0x18, 0xffe7)
         [sp + 0x20] = 0
         a0 = 0 + 0x7c

    loc_0x8052331c: // orphan
         call 0x82d02d20          // 0x82d02d20(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         t3 = halfword [sp + 0x4e]
         t4 = [sp + 0x40]         // t9
         a2 = s0 - 0x18
         a2 <<= 0x10
         a1 = t3 + t4
         a1 -= 0x18
         a1 <<= 0x10
         a1 = , signed  a1 >> 0x10
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         [sp + 0x1c] = t6
         [sp + 0x18] = t5
         [sp + 0x3c] = a1
         a2 = , signed  a2 >> 0x10
         a0 = halfword [sp + 0x4a]
         a3 = 0 + 0x18

    loc_0x80523364: // orphan
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = 0
         a0 = 0 + 0x7c

    loc_0x80523378: // orphan
         call 0x82d02d20          // 0x82d02d20(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         t7 = 0 + 0x400
         t8 = 0 + 0x400
         [sp + 0x1c] = t8
         [sp + 0x18] = t7
         a0 = halfword [sp + 0x3a]
         a1 = halfword [sp + 0x3e]
         a2 = 0 + 0x18
         a3 = 0 + 0x18
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0xec, 0x63ef, 0x18, 0x18)
         [sp + 0x20] = 0

    loc_0x805233b0: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x30]
         sp += 0x48
         ret
         

    loc_0x805233c4: // orphan
         sp -= 0x48
         [sp + 0x50] = a2
         a2 &= 0xffff

    loc_0x80523850: // orphan
         [sp + 0x44] = a2
         call 0x82d02d20          // fcn.8052385c // 0x82d02d20(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x40] = a3

    loc_0x805249d0: // orphan
         [sp + 0x1c] = 0
         a0 = s1 + 0xa
         a2 = 0 + 0xb2
         call 0x8004b2cc          // 0x8004b2cc(0x442f71dcfe117dc7, 0x442f71dcfe116408, 0xb2, -1)
         a3 = 0 + 0x20            // k0
         goto 0x80524c0c          // fcn.80508710+0x1c4fc
         ra = [sp + 0x34]

}

*/
