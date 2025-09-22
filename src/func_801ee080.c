/*
 * Function: 0x801ee080
 * Category: math
 */

// Decompiled C code
int fcn.801f7004 (int esi, int edx) {
// } else {
// } else {
// } else {
}
return eax;
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.801f7004 (int esi, int edx) {
    loc_0x801eae3c:
        bnel at, 0, 0x801eaed8 // likely
        a0 = [sp + 0x54]
            
    loc_0x801eaed8:
        call fcn.81600da8
        a1 = s0
        if            // unlikely
        a0 = s0
            
    loc_0x801eaf30:
        t1 = byte [s0 + 9] // s4
        a0 = [sp + 0x54]
        at = , t1 < 2
        beql at, 0, 0x801eb130 // likely
        ra = [sp + 0x24]
            
    loc_0x801eb130:
        // CODE XREF from fcn.801f7004 @ 0x801eafd4
        s0 = [sp + 0x20]
        sp += 0x50
        ret           // ra
        0x801eb13c
         // } else {
    loc_0x801eaf44:
        call fcn.81600da8
        a1 = s0 + 1
        if            // unlikely
        a0 = s0
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x801eae44
    loc_0x801eae54:
        a1 = sp + 0x48
        call 0x8140487c // 0x8140487c(-1, 0x178048, 0x8, -1)
        a2 = 0 + 1    // lo
        call fcn.81602d70
        a0 = , unsigned  byte [s0 + 7] // s4
        t7 = fcn.81400000 << 16
        t7 += 0x78b8
        [sp + 0x14] = t7
        a0 = halfword [sp + 0x48]
        a1 = halfword [sp + 0x4a]
        a2 = halfword [sp + 0x4c]
        a3 = halfword [sp + 0x4e]
        call fcn.81604944
         // do {
    loc_0x801eae88:
        [sp + 0x10] = v0
        v0 = byte [s0 + 0x10] // s4
        a0 = halfword [sp + 0x48]
        a1 = halfword [sp + 0x4a]
        t8 = v0 << 2
        t9 = v0 << 2
        t9 -= v0
        t8 -= v0
        t8 <<= 2
        t9 <<= 3
        t9 += v0
        t8 -= v0
        t8 <<= 3
        t9 <<= 7
        a3 = s0 + t9
        a2 = s0 + t8
        a2 += 0x4b40
        call fcn.814057cc
        a3 += 0x40
         // } while (?);
        }
        return eax;
    loc_0x801eaed4: // orphan
             a0 = [sp + 0x54]

    loc_0x801eaf54: // orphan
         a1 = sp + 0x38
         call 0x8140487c          // 0x8140487c(-1, 0x178038, 0x8, -1)
         a2 = 0 + 1               // lo
         call fcn.81602d70
         a0 = , unsigned  byte [s0 + 7] // s4
         // CODE XREF from fcn.81b5c3b4 @ +0x320
         t2 = fcn.81400000 << 16
         t2 += 0x78b8
         [sp + 0x14] = t2
         a0 = halfword [sp + 0x38]
         a1 = halfword [sp + 0x3a]
         a2 = halfword [sp + 0x3c]
         a3 = halfword [sp + 0x3e]
         call fcn.81604944
         [sp + 0x10] = v0
         v0 = byte [s0 + 0x10]    // s4
         a0 = halfword [sp + 0x38]
         a1 = halfword [sp + 0x3a]
         t3 = v0 << 2
         t4 = v0 << 2
         t4 -= v0
         t3 -= v0
         t3 <<= 2
         t4 <<= 3
         t4 += v0
         t3 -= v0
         t3 <<= 3
         t4 <<= 7
         a3 = s0 + t4
         a2 = s0 + t3
         a2 += 0x4b40
         call fcn.814057cc
         a3 += 0x40
         goto 0x801eb130
         ra = [sp + 0x24]

    loc_0x801eb12c: // orphan
         ra = [sp + 0x24]

    loc_0x801eb770: // orphan
         t8 = [s1 + 0xf48]        // t9
         beql t8, 0, 0x801eb7b0   // unlikely
         s0 += 1

    loc_0x801eb77c: // orphan
         unsigned , hi
         a1 = s7                  // t9
         t9 = lo
         s2 = s5 + t9

    loc_0x801eb78c: // orphan
         s2 += 0x1990
         call fcn.81405514
         a0 = s2
         call fcn.81406a74        // "T@" // fcn.81406a74(0x198f)
         a0 = s2
         bnel v0, 0, 0x801eb7b0   // likely
         s0 += 1

    loc_0x801eb7a8: // orphan
         s6 = 0
         s0 += 1

    loc_0x801eb7b0: // orphan
         if                       // likely
         s1 += 4

    loc_0x801eb7b8: // orphan
         if                       // unlikely
         t0 = [sp + 0x3c]

    loc_0x801eb7c0: // orphan
         t1 = [t0 + 0xf58]        // t9
         bnel t1, 0, 0x801eb7e8   // likely
         a0 = s5                  // t9

    loc_0x801eb7cc: // orphan
         call 0x800225c4          // 0x800225c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         at = 2 << 16
         at += s5
         t2 = 0 + 1               // lo
         [at - 0x70a8] = t2

    loc_0x801eb7e4: // orphan
         a0 = s5                  // t9

    loc_0x801eb7e8: // orphan
         call fcn.81403b7c
         a1 = s7                  // t9
         a0 = s5 + 0xcc8
         call fcn.81403b7c
         a1 = s7                  // t9
         ra = [sp + 0x34]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         s6 = [sp + 0x2c]
         s7 = [sp + 0x30]
         ret
         sp += 0x48

    loc_0x801ec4d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec4dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec4e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec4f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec500: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec50c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec518: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ec530: // orphan
         if                       // unlikely

    loc_0x801eda1c: // orphan
         at = 0x3f80 << 16
         beql t6, 0, 0x801eda38   // unlikely
         mtc1 0, f0

    loc_0x801eda28: // orphan
         mtc1 at, f0
         goto 0x801eda40
         swc1 f0, 0x30, a1        // arg2

    loc_0x801eda38: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801eda20
         
         swc1 f0, 0x30, a1        // arg2

    loc_0x801eda40: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801eda2c
         swc1 f0, 0x34, a1        // arg2
         swc1 f0, 0x38, a1        // arg2
         t7 = , unsigned  byte [v0 + 0x53] // s4
         byte [a1 + 0x1d] = t7    // arg2
         // CODE XREF from fcn.801ed2dc @ +0x72c
         ret                      // ra
         

    loc_0x801edac4: // orphan
         at = 0 + 0x2a
         beql v1, at, 0x801edae8  // unlikely
         a2 = [v0 + 0x1f4]        // t9

    loc_0x801edad0: // orphan
         goto 0x801edafc
         [sp + 0x2c] = a1

    loc_0x801edae8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801edac8
         goto 0x801edaf8
         a2 += 5                  // arg3

    loc_0x801edaf8: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x800, 0x801edae8
         [sp + 0x2c] = a1

    loc_0x801edafc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801edad0
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a2
         a2 = [sp + 0x18]
         a1 = 0x8241 << 16
         a0 = 0x8241 << 16
         t5 = a2 << 1
         a1 += t5
         a1 = , unsigned  halfword [a1 - 0x7120]
         call 0x80071adc          // 0x80071adc(0x82410000, 0x7311, 0x8, -1)

    loc_0x801edb20: // orphan
         a0 -= 0x6040             // arg1
         a0 = [sp + 0x2c]
         a1 = 0
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f114          // 0x8003f114(0xfe116408, 0x0, -1, -1)
         a3 = v0                  // s4
         // CODE XREF from fcn.801ed2dc @ +0x7b4
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

    loc_0x801eddc8: // orphan
         beql v0, 0, 0x801ede1c   // unlikely
         ra = [sp + 0x14]

    loc_0x801eddd0: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x11
         at = 0x8241 << 16
         goto 0x801ede18
         [at - 0x6d50] = 0

    loc_0x801ede18: // orphan
         // CODE XREFS from fcn.801ec368 @ 0x801edd88, 0x801edd90
         // CODE XREFS from fcn.801f7004 @ 0x204, 0x801edddc
         // CODE XREF from fcn.801edba0 @ +0x26c
         ra = [sp + 0x14]

    loc_0x801ede1c: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x1c8, 0x801eddc8
         // CODE XREF from fcn.801edba0 @ +0x258
         v0 = [sp + 0x1c]
         sp += 0x20

    loc_0x801ede24: // orphan
         ret                      // ra
         

    loc_0x801ede80: // orphan
         s5 -= 0x6040
         s6 = 0 + 3
         s4 = 0 - 1               // s2

    loc_0x801ede8c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801edeec
         t6 = [s0 + 0x254]        // t9
         if                       // likely
         

    loc_0x801ede98: // orphan
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x801edea0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801ede90
         call fcn.816018cc
         a0 = 0
         call fcn.81600954
         a0 = [s1 + 0]            // t9
         a0 = s0
         call fcn.82406a78
         a1 = [s1 + 0]            // t9
         call fcn.81600b30        // fcn.81600b30(0x104)
         a0 = [s1 + 0]            // t9
         call fcn.82400438
         a0 = s2
         a0 = s0
         a1 = s2
         call fcn.82407228
         a2 = s5                  // t9

    loc_0x801ededc: // orphan
         call fcn.82400880
         
         call fcn.824008c4
         a0 = s3                  // t9
         if                       // likely
         s3 = v0                  // s4

    loc_0x801edef4: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x18]         // a2
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x801edf38: // orphan
         a0 = 3 << 16
         a0 |= 0x1000             // arg1
         call 0x80006cd0          // 0x80006cd0(0x31000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0
         a1 = 0
         a2 = 0 + 3
         call 0x800082e0          // 0x800082e0(0x0, 0x0, 0x3, -1)
         a3 = 0 + 1               // lo
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x0, 0x0, 0x3, 0x1)
         a0 = 0 + 0x23
         a0 = 0x8241 << 16
         a0 -= 0x6f60
         call 0x80075630          // 0x80075630(0x824090a0, 0x0, 0x3, 0x1)
         a1 = 0 + 0x268

    loc_0x801edf88: // orphan
         a0 = 0x8241 << 16
         call 0x81a00020          // 0x81a00020(0x82410000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x6d14

    loc_0x801edf94: // orphan
         a0 = 0 + 0xf
         call 0x80047588          // 0x80047588(0xf, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call fcn.82401000
         
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00
         a1 += 0x6e30
         a0 >>= 0x18              // lo
         call 0x80004638          // 0x80004638(0x1, 0x446e30, 0x447d00, -1)
         a3 = 0
         a0 = , unsigned  byte [sp + 0x2b]
         call 0x80057908          // 0x80057908(0x0, 0x446e30, 0x447d00, 0x0)
         [sp + 0x20] = a0
         call fcn.82400704
         a0 = [sp + 0x28]
         call 0x80008514          // 0x80008514(0x0, 0x446e30, 0x447d00, 0x0)
         a0 = [sp + 0x24]         // s4

    loc_0x801edff0: // orphan
         call fcn.824009ac        // fcn.824009ac(-1)
         
         call 0x80008574          // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80047610          // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8004c398          // 0x8004c398(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x6d52 << 16
         call 0x80002bf8          // 0x80002bf8(0x6d520000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4f4d
         call 0x80006158          // 0x80006158(0x6d524f4d, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80057944          // 0x80057944(0x6d524f4d, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [sp + 0x23]
         ra = [sp + 0x1c]
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x801ee04c: // orphan
         
         [sp + 8] = a2
         lwc1 f4, 8, sp
         mtc1 0, f6
         [sp + 0xc] = a3
         lwc1 f8, 0xc, sp
         c.lt.s f4, f6
         
         bc1t 0x801ee478
         
         mtc1 0, f10
         at = 0x43a0 << 16
         c.lt.s f8, f10
         
         bc1t 0x801ee478
         
         mtc1 at, f4
         at = 0x4370 << 16
         c.lt.s f4, f12
         
         bc1t 0x801ee478
         
         mtc1 at, f6

    loc_0x801eee4c: // orphan
         t2 = 0 + 8               // a2
         t3 = 0 + 8               // a2
         lwc1 f14, 0x44, sp
         [sp + 0x14] = t3
         [sp + 0x10] = t2
         lwc1 f12, 0x40, sp
         swc1 f22, 0x18, sp
         call fcn.82400bd0        // fcn.82400bd0(-1)
         swc1 f22, 0x1c, sp
         v0 = [s0 + 0]            // t9
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = v0 + 8
         [s0 + 0] = t4
         t5 = 0xde00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t6
         // CODE XREFS from fcn.801ee408 @ +0x8c0, +0x8cc
         ra = [sp + 0x3c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         s0 = [sp + 0x38]
         ret
         sp += 0x60

    loc_0x801ef45c: // orphan
         // CODE XREF from fcn.801e35dc @ 0x801ef424
         mfc1 a3, f16
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         swc1 f0, 0x18, sp
         call fcn.82400bd0        // fcn.82400bd0(-1)
         swc1 f0, 0x1c, sp
         ra = [sp + 0x24]         // s4
         sp += 0x28
         ret                      // s4
         

    loc_0x801f0d38: // orphan
         t3 = [sp + 0x60]
         lwc1 f10, 0xc4, sp

    loc_0x801f0d40: // orphan
         s4 = t2
         at = , t2 < t3
         beql at, 0, 0x801f0e28   // likely
         s5 += 1

    loc_0x801f0d50: // orphan
         trunc.w.s f18, f10
         t5 = t2 << 2
         t5 += t2
         s1 = t5 + s5
         mfc1 s6, f18
         
         s6 += 2

    loc_0x801f0d6c: // orphan
         if                       // unlikely
         t6 = [sp + 0x68]

    loc_0x801f0d74: // orphan
         t7 = halfword [t6 + 0x100]
         at = , t7 < s1           // lo
         bnel at, 0, 0x801f0e1c   // likely
         s4 += 1

    loc_0x801f0d84: // orphan
         mtc1 s4, f8
         t8 = [sp + 0x70]
         cvt.s.w f16, f8
         mtc1 t8, f4
         
         cvt.s.w f6, f4
         sub.s f10, f16, f22
         mul.s f18, f20, f10
         add.s f4, f6, f18
         trunc.w.s f8, f4
         mfc1 s0, f8
         
         at = , s0 < 0xf1
         beql at, 0, 0x801f0e1c   // likely
         s4 += 1

    loc_0x801f0dc0: // orphan
         unsigned , hi
         a1 = s0
         a2 = 0 + 0x28            // arg3
         a3 = 0 + 0x28            // arg4
         a0 = lo
         a0 += 0x35               // arg1
         call fcn.82401570        // fcn.82401570(0xffffffffffe88035, 0x104)
         s3 = a0 + 2
         a0 = [sp + 0x8c]
         a1 = s7                  // t9
         call fcn.82404990
         a2 = s1
         s2 = v0                  // s4
         a0 = [sp + 0xe4]
         call fcn.824048a0
         a1 = s1
         a0 = s3
         a1 = s0 + 2
         a2 = s7                  // t9
         a3 = s2                  // s4
         call 0x82403c84          // 0x82403c84(0xffffffffffe88037, 0x106, -1, 0xff)
         [sp + 0x10] = v0

    loc_0x801f0e18: // orphan
         s4 += 1

    loc_0x801f0e1c: // orphan
         if                       // likely
         s1 += 5

    loc_0x801f0e24: // orphan
         s5 += 1

    loc_0x801f0e28: // orphan
         at = 0 + 5
         bnel s5, at, 0x801f0d38  // likely
         t2 = [sp + 0x64]

    loc_0x801f0e34: // orphan
         v0 = [sp + 0xf4]
         at = 0 + 5
         t2 = [sp + 0xf0]
         div 0, v0, at
         v0 = hi
         lwc1 f6, 0xf8, sp
         mtc1 v0, f4
         div 0, t2, at
         t3 = hi
         t4 = t3 - v0
         mtc1 t4, f16
         cvt.s.w f8, f4
         at = 0x4230 << 16
         a1 = [sp + 0x70]
         a2 = 0 + 0x28            // arg3
         a3 = 0 + 0x28            // arg4
         cvt.s.w f10, f16
         mul.s f18, f10, f6
         mtc1 at, f10
         at = 0x4254 << 16
         mtc1 at, f4
         add.s f16, f18, f8
         mul.s f6, f16, f10
         add.s f18, f6, f4
         trunc.w.s f8, f18
         mfc1 a0, f8
         call fcn.8240182c
         
         a0 = 0x800d << 16
         t6 = 0 + 0xf0
         [sp + 0x10] = t6
         a0 += 0x510
         a1 = 0
         a2 = 0
         call 0x80006f70          // 0x80006f70(0x800d0510, 0x0, 0x0, 0x28)
         a3 = 0 + 0x140
         t0 = 0x800d << 16
         t0 += 0x510

    loc_0x801f11fc: // orphan
         s2 = 0 + 8               // a2
         a0 = [s0 + 0]
         a1 = s5 >> 3
         call 0x8004d27c          // 0x8004d27c(0x7, 0x1fffffff, 0x8, -1)
         a2 = s3                  // t9

    loc_0x801f1210: // orphan
         call 0x8004ca4c          // 0x8004ca4c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x801f1220: // orphan
         if                       // unlikely
         

    loc_0x801f1228: // orphan
         if                       // likely
         at = 0 + 3

    loc_0x801f1230: // orphan
         beql v0, at, 0x801f1254  // unlikely
         s2 = 0 + 0x20            // k0

    loc_0x801f1238: // orphan
         goto 0x801f1254
         

    loc_0x801f1240: // orphan
         goto 0x801f1254
         s2 = 0 + 4

    loc_0x801f1248: // orphan
         goto 0x801f1254
         s2 = 0 + 0x10

    loc_0x801f1254: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x801f1238, 0x801f1240, 0x801f1248
         call 0x8004ca24          // 0x8004ca24(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         s1 = v0                  // s4
         call 0x8004ca10          // 0x8004ca10(0x7, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         unsigned , hi            // t9 // s2
         s3 += 1
         s0 += 4
         t7 = lo
         
         
         unsigned , hi            // t9 // s2
         t8 = lo
         if                       // unlikely
         t9 = , signed  t8 >> 3

    loc_0x801f1290: // orphan
         at = t8 + 7
         t9 = , signed  at >> 3

    loc_0x801f1298: // orphan
         if                       // likely
         s5 += t9

    loc_0x801f12a0: // orphan
         s0 = 0x800d << 16
         s0 += 0x510
         v0 = [s0 + 0]            // t9
         t1 = 0x8009 << 16
         s2 = 0xde00 << 16
         t0 = v0 + 8
         [s0 + 0] = t0
         t1 += 0x4ec0
         [v0 + 4] = t1
         [v0 + 0] = s2
         t2 = [sp + 0x80]
         if                       // likely
         

    loc_0x801f12d4: // orphan
         v0 = [s0 + 0]
         t4 = 0xfb00 << 16
         t5 = 0 - 0x9c
         t3 = v0 + 8
         [s0 + 0] = t3
         [v0 + 4] = t5
         [v0 + 0] = t4

    loc_0x801f12f0: // orphan
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x64]
         s1 = v0                  // s4
         call 0x8004ca24          // 0x8004ca24(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x64]
         mtc1 s1, f18
         mtc1 v0, f16
         t6 = [sp + 0x70]
         cvt.s.w f18, f18
         t7 = [sp + 0x74]
         mtc1 t6, f10
         at = 0x3f80 << 16
         mtc1 at, f8
         cvt.s.w f16, f16
         mtc1 t7, f6
         mfc1 a2, f18
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         cvt.s.w f12, f10
         mfc1 a3, f16
         swc1 f8, 0x18, sp
         swc1 f8, 0x1c, sp
         call fcn.82400bd0        // fcn.82400bd0(0x0)
         cvt.s.w f14, f6
         v0 = [s0 + 0]
         t9 = 0x8009 << 16
         t9 += 0x4f50
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = t9
         [v0 + 0] = s2
         ra = [sp + 0x3c]
         s0 = [sp + 0x24]         // s4
         s1 = [sp + 0x28]
         s2 = [sp + 0x2c]
         s3 = [sp + 0x30]
         s4 = [sp + 0x34]
         s5 = [sp + 0x38]
         ret
         sp += 0x70

    loc_0x801f13dc: // orphan
         t1 += 0x510
         v0 = [t1 + 0]            // t9
         sp -= 0x20
         [sp + 0x1c] = ra
         t6 = v0 + 8
         [t1 + 0] = t6
         t8 = 0x8009 << 16
         t8 += 0x4e38
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t8
         v0 = [t1 + 0]
         t2 = 0xe200 << 16
         t3 = 0xf0a << 16
         t9 = v0 + 8
         [t1 + 0] = t9
         t3 |= 0x4000
         t2 |= 0x1c
         a2 = fcn.82400000 << 16
         [v0 + 0] = t2
         [v0 + 4] = t3
         [sp + 0x10] = 0
         a2 = [a2 + 0x785c]       // arg3
         a0 = 0
         a1 = 0
         call 0x8004d19c          // 0x8004d19c(0x0, 0x0, 0x10001, -1)
         a3 = 0
         t1 = 0x800d << 16
         t1 += 0x510
         v0 = [t1 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = v0 + 8
         [t1 + 0] = t4
         t5 = 0xde00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t6
         ra = [sp + 0x1c]
         sp += 0x20               // fp
         ret                      // ra
         

    loc_0x801f1640: // orphan
         t1 = 0x800d << 16
         t1 += 0x510
         v0 = [t1 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = v0 + 8
         [t1 + 0] = t4
         t5 = 0xde00 << 16
         [v0 + 0] = t5
         [v0 + 4] = t6
         ra = [sp + 0x1c]
         sp += 0x20
         ret
         

    loc_0x801f177c: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         [s0 + 0x14] = v0
         a0 = 0 + 0x12
         call 0x8004c990          // 0x8004c990(0x12, 0x3, 0x8, -1)
         a1 = 0 + 2
         mtc1 0, f4
         t6 = 0 + 0xaf
         t7 = 0 + 0x4c
         t8 = 0 + 0x48
         t9 = 0 + 0x40
         t0 = 0 - 1               // s2
         [s0 + 0x18] = v0
         halfword [s0 + 4] = t6
         halfword [s0 + 6] = t7
         halfword [s0 + 0] = t8
         halfword [s0 + 2] = t9
         byte [s0 + 0x21] = 0
         byte [s0 + 0x20] = t0
         swc1 f4, 0x1c, s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]         // a2
         sp += 0x20
         ret
         

    loc_0x801f1a14: // orphan
         byte [a1 + 0x21] = t6    // arg2
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa9
         v0 = 0 - 1               // s2
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x801f22bc: // orphan
         sub.s f10, f8, f14
         mul.s f16, f10, f12
         add.s f18, f16, f14
         ret                      // ra
         swc1 f18, 8, a0          // arg1

    loc_0x801f2c08: // orphan
         add.s f10, f8, f18
         at = , v1 < 0x16
         if                       // unlikely
         div.s f12, f10, f0

    loc_0x801f2c18: // orphan
         v1 -= 0x18

    loc_0x801f2c1c: // orphan
         a0 = [a1 + 0x110]        // arg2 // t9
         if                       // unlikely
         

    loc_0x801f2c28: // orphan
         t6 = [a1 + 0x30]         // arg2 // t9
         if                       // likely
         

    loc_0x801f2c34: // orphan
         if                       // likely
         

    loc_0x801f2c3c: // orphan
         if                       // likely
         

    loc_0x801f2c44: // orphan
         trunc.w.s f16, f2
         at = 0 + 0x14
         t2 = [sp + 0x18]         // a2
         mfc1 t8, f16
         
         div 0, t8, at
         t9 = lo
         if                       // likely
         t1 = t9 & 1              // lo

    loc_0x801f2c68: // orphan
         if                       // unlikely
         

    loc_0x801f2c70: // orphan
         t1 -= 2

    loc_0x801f2c74: // orphan
         if                       // unlikely
         

    loc_0x801f2c7c: // orphan
         if                       // likely
         v0 = 0 + 4

    loc_0x801f2c84: // orphan
         goto 0x801f2c8c
         v0 = 0 + 3

    loc_0x801f2c8c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f2c84
         t3 = v0 << 3
         t3 -= v0
         t3 <<= 3
         t4 = a1 + t3             // arg2
         t7 = t4 + 0x30

    loc_0x801f2ca0: // orphan
         t6 = [t4 + 0]

    loc_0x801f2ca4: // orphan
         t4 += 0xc                // t1
         t2 += 0xc
         [t2 - 0xc] = t6
         t5 = [t4 - 8]
         [t2 - 8] = t5
         t6 = [t4 - 4]            // t9
         if                       // likely
         [t2 - 4] = t6

    loc_0x801f2ccc: // orphan
         a2 = 0x8241 << 16
         a1 = 0x8241 << 16
         a0 = 0x8241 << 16
         a0 -= 0x7088             // arg1
         a1 -= 0x6fa8             // arg2
         a2 -= 0x70c0             // arg3
         v0 = [a2 + 0x30]         // arg3

    loc_0x801f2ce8: // orphan
         at = , v1 < v0
         bnel at, 0, 0x801f2d40   // unlikely
         at = , unsigned  , a2 < a0 // lo

    loc_0x801f2cf4: // orphan
         t8 = [a2 + 0x34]         // arg3 // t9
         at = , v1 < t8           // lo
         beql at, 0, 0x801f2d40   // unlikely
         at = , unsigned  , a2 < a0 // lo

    loc_0x801f2d04: // orphan
         t9 = [sp + 0x18]         // a2
         t7 = a2
         t4 = a2 + 0x30           // arg3

    loc_0x801f2d10: // orphan
         t3 = [t7 + 0]            // t9
         t7 += 0xc
         t9 += 0xc                // t1
         [t9 - 0xc] = t3
         t1 = [t7 - 8]
         [t9 - 8] = t1
         t3 = [t7 - 4]
         if                       // likely
         [t9 - 4] = t3

    loc_0x801f2d34: // orphan
         goto 0x801f2da8          // fcn.801ec534+0x6874
         ra = [sp + 0x14]

    loc_0x801f2d40: // orphan
         if                       // likely
         at = , v1 < v0

    loc_0x801f2d48: // orphan
         beql at, 0, 0x801f2d9c   // unlikely
         a2 += 0x38               // arg3

    loc_0x801f2d50: // orphan
         mtc1 v1, f4
         t0 = [a2 - 4]            // arg3
         a0 = [sp + 0x18]         // a2
         cvt.s.w f6, f4
         mtc1 t0, f18
         t2 = v0 - t0
         mtc1 t2, f4
         a1 = a2 - 0x38           // arg3
         cvt.s.w f10, f18
         add.s f8, f6, f12
         cvt.s.w f6, f4
         sub.s f16, f8, f10
         div.s f0, f16, f6
         mfc1 a3, f0
         call fcn.824054e4
         
         goto 0x801f2da8          // fcn.801ec534+0x6874
         ra = [sp + 0x14]

    loc_0x801f2d98: // orphan
         a2 += 0x38               // arg3

    loc_0x801f2d9c: // orphan
         bnel a2, a1, 0x801f2ce8  // likely
         v0 = [a2 + 0x30]         // arg3 // t9

    loc_0x801f2da4: // orphan
         ra = [sp + 0x14]

    loc_0x801f32ac: // orphan
         swc1 f4, 0x1fc, s0
         t6 = [sp + 0x5c]
         [s0 + 0x1e8] = v1
         t8 = 0 - 1               // s2
         [s0 + 0x18c] = t6
         t7 = [sp + 0x58]
         [s0 + 0x1f0] = t8
         [s0 + 0x1f4] = 0
         v1 = 0
         [s0 + 0x214] = t7
         v1 += 1                  // lo

    loc_0x801f32d8: // orphan
         at = , v1 < 8
         bnel at, 0, 0x801f32d8   // unlikely
         v1 += 1

    loc_0x801f32e4: // orphan
         call fcn.82404b6c
         a0 = s0
         call 0x80006158          // 0x80006158(0x104, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x801f3368: // orphan
         [sp + 0x28] = a0
         [sp + 0x2c] = a1
         if                       // likely
         v0 = [a1 + 0x14]         // arg2 // t9

    loc_0x801f3378: // orphan
         goto 0x801f33fc
         v0 = 0 + 1               // lo

    loc_0x801f3380: // orphan
         lwc1 f4, 0x180, v0
         a1 = [v0 + 0x174]        // t9
         a2 = [v0 + 0x178]        // t9
         a3 = [v0 + 0x17c]        // t9
         swc1 f4, 0x10, sp
         lwc1 f6, 0x184, v0
         a0 = [sp + 0x2c]
         swc1 f6, 0x14, sp
         lwc1 f8, 0x188, v0
         [sp + 0x1c] = 0
         call 0x80038e14          // 0x80038e14(0xfe116408, -1, -1, -1)
         swc1 f8, 0x18, sp
         a1 = 0x41b8 << 16
         a3 = 0x461c << 16
         a3 |= 0x4000
         a1 |= 0xcccd
         a0 = [sp + 0x2c]
         call 0x80038dc8          // 0x80038dc8(0xfe116408, 0x41b8cccd, -1, 0x461c4000)
         a2 = 0x4280 << 16
         t8 = [sp + 0x28]         // t9
         at = 0 + 5
         a0 = 0x800d << 16
         if                       // likely
         a0 += 0x510

    loc_0x801f33e0: // orphan
         t9 = 0 + 0xa1
         [sp + 0x10] = t9
         a1 = 0 + 0xd
         a2 = 0 + 0x27
         call 0x80006f70          // 0x80006f70(-1, 0xd, 0x27, -1)
         a3 = 0 + 0x126

    loc_0x801f33f8: // orphan
         v0 = 0 + 1               // lo

    loc_0x801f33fc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f3378
         ra = [sp + 0x24]         // s4
         sp += 0x28
         ret                      // s4
         

    loc_0x801f3464: // orphan
         bc1t 0x801f347c
         sqrt.s f0, f0
         c.lt.s f0, f20
         
         bc1fl 0x801f34a0
         div.s f8, f2, f0
         t7 = [a1 + 0]            // arg2 // t9
         v0 = 0
         [a0 + 0] = t7            // arg1
         t6 = [a1 + 4]            // arg2 // t9
         [a0 + 4] = t6            // arg1
         t7 = [a1 + 8]            // arg2 // t9
         goto 0x801f34d4
         [a0 + 8] = t7            // arg1

    loc_0x801f34d4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f3494
         ldc1 f20, 8, sp
         ret                      // ra
         sp += 0x30

    loc_0x801f35c0: // orphan
         [a3 + 0x20c] = 0         // arg4
         [a3 + 0x1e4] = t4        // arg4
         call 0x80006148          // 0x80006148(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x7200]       // t9
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         mtc1 0, f14
         a3 = [sp + 0x60]

    loc_0x801f3a7c: // orphan
         at = 0x40c0 << 16
         mtc1 at, f10
         add.s f6, f4, f0
         swc1 f6, 0x208, s0
         lwc1 f8, 0x208, s0
         c.le.s f10, f8
         
         bc1f 0x801f3ce4
         
         mtc1 0, f16
         t2 = [s0 + 0x1d4]        // t9
         swc1 f16, 0x208, s0
         goto 0x801f3ce4
         [s0 + 0x1d8] = t2

    loc_0x801f3c84: // orphan
         a0 = 0x8008 << 16
         call 0x80006148          // 0x80006148(0x80080000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x7200]       // t9
         goto 0x801f3ce4
         

    loc_0x801f3ce4: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x801f3aac, 0x801f3c90
         call 0x82404e50          // 0x82404e50(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]         // a2
         sp += 0x20
         ret
         

    loc_0x801f3ee0: // orphan
         a1 = s0 + 0x54           // arg2
         ra = [sp + 0x2c]
         s0 = [sp + 0x28]         // t9
         sp += 0x38
         ret
         

    loc_0x801f4614: // orphan
         lwc1 f4, 8, a2           // arg3

    loc_0x801f4618: // orphan
         lwc1 f6                  // arg3
         sub.s f2, f0, f4
         sub.s f14, f12, f6
         mul.s f8, f2, f2
         
         mul.s f10, f14, f14
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 a3, f18
         
         at = , a3 < v0           // lo
         if                       // unlikely
         

    loc_0x801f464c: // orphan
         v0 = a3                  // s2
         v1 = a1                  // t0

    loc_0x801f4654: // orphan
         lwc1 f4, 0x44, a2        // arg3
         lwc1 f6, 0x3c, a2        // arg3
         sub.s f2, f0, f4
         sub.s f14, f12, f6
         mul.s f8, f2, f2
         
         mul.s f10, f14, f14
         add.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 a0, f18
         
         at = , a0 < v0
         if                       // likely
         

    loc_0x801f468c: // orphan
         v0 = a0                  // t9
         v1 = a1 + 1              // arg2

    loc_0x801f4694: // orphan
         a1 += 2                  // arg2
         if                       // likely
         a2 += 0x78               // arg3

    loc_0x801f46a0: // orphan
         ret                      // ra
         v0 = v1

    loc_0x801f4a34: // orphan
         if                       // unlikely
         daddu 0, at, t5

    loc_0x801f4a38: // orphan
         if                       // unlikely
         daddu 0, at, t5

    loc_0x801f4a3c: // orphan
         sd ra, -0x100, ra
         goto 0x80000000
         

    loc_0x801f5350: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f5358: // orphan
                                  // lo

    loc_0x801f535c: // orphan
                                  // lo
                                  // lo
         if                       // unlikely

    loc_0x801f53c0: // orphan
         s0 = at & 0x2f30
         s0 = , unsigned  , t9 < 0x2f2f
         s0 = , unsigned  , t9 < 0x2f30
         t7 = at & 0x2f2f         // lo

    loc_0x801f7004: // orphan
           // CALL XREF from fcn.82508670 @ +0x26f8
         

    loc_0x801f7008: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x801f7020: // orphan
         
         if                       // fcn.8021edac-0x14204 // unlikely
         if                       // fcn.8021edac-0x141f0 // unlikely

    loc_0x801f7030: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f703c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f7048: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0x13f3c // unlikely

    loc_0x801f7054: // orphan
         if                       // fcn.8021edac-0x13ef4 // unlikely
         if                       // unlikely

    loc_0x801f7060: // orphan
         
         
         if                       // fcn.8020b33c // unlikely
         if                       // fcn.8021edac-0x127fc // unlikely

    loc_0x801f7074: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f7080: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f708c: // orphan
         if                       // fcn.8021edac-0x11f7c // unlikely
         if                       // unlikely

    loc_0x801f7098: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f70a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f70b0: // orphan
         
         if                       // unlikely
         

    loc_0x801f70bc: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0x11108 // unlikely

    loc_0x801f70c8: // orphan
         if                       // fcn.8021edac-0x10ef0 // unlikely
         if                       // fcn.8021edac-0x10edc // unlikely

    loc_0x801f70d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f70e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f70ec: // orphan
         if                       // fcn.8020e300 // unlikely
         if                       // fcn.8020e300+0x14 // unlikely

    loc_0x801f70f8: // orphan
         if                       // fcn.8021edac-0x10a10 // unlikely
         if                       // fcn.8021edac-0x109ac // unlikely

    loc_0x801f7104: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801f7110: // orphan
         if                       // fcn.8020a180+0x4504 // unlikely
         if                       // unlikely

    loc_0x801f711c: // orphan
         if                       // fcn.8021edac-0x106bc // unlikely
         if                       // unlikely

    loc_0x801f7128: // orphan
         
         
         if                       // unlikely

    loc_0x801f713c: // orphan
         if                       // fcn.8020a1a0+0x4930 // unlikely
         

    loc_0x8020a9dc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7018
         
         if                       // fcn.8021edac+0x18 // unlikely
         if                       // fcn.8021edac+0x3c // unlikely

    loc_0x8020a9ec: // orphan
         if                       // fcn.8021edac+0xb4 // unlikely
         if                       // fcn.8021edac+0xf8 // unlikely

    loc_0x8020a9f8: // orphan
         if                       // fcn.8021edac+0x180 // unlikely
         if                       // unlikely

    loc_0x8020aa04: // orphan
         if                       // unlikely
         

    loc_0x8020acc8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7034
         
         
         
         if                       // fcn.8021d4ec+0x9e2c // unlikely
         if                       // unlikely

    loc_0x8020ace0: // orphan
         if                       // fcn.8023e660-0x16fec // unlikely
         if                       // fcn.8023e660-0x16fc8 // unlikely

    loc_0x8020acec: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020acfc: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020ad0c: // orphan
         
         if                       // unlikely
         

    loc_0x8020ad18: // orphan
         
         if                       // unlikely
         

    loc_0x8020ad24: // orphan
         if                       // unlikely
         

    loc_0x8020ad2c: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8020ad58: // orphan
         
         // CODE XREF from fcn.801f7004 @ +0x34
         
         if                       // fcn.8023e660-0x152ec // unlikely
         

    loc_0x8020ad68: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x8020ad80: // orphan
         
         if                       // fcn.8023e660-0x14588 // unlikely
         if                       // unlikely

    loc_0x8020ad90: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020ada0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020adac: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020adc0: // orphan
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.801f7004 @ 0x801f703c
         
         
         
         
         

    loc_0x8020adf4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7040
         
         
         
         
         
         if                       // unlikely
         if                       // fcn.801ec200 // unlikely

    loc_0x8020ae14: // orphan
         
         
         
         
         
         // CODE XREF from fcn.801f7004 @ +0x40
         if                       // fcn.801ec368+0x154 // unlikely
         if                       // unlikely

    loc_0x8020ae34: // orphan
         
         
         // CODE XREF from fcn.801f7004 @ 0x801f7048
         
         
         
         
         

    loc_0x8020aecc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7058
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020aee0: // orphan
         if                       // unlikely
         

    loc_0x8020aee8: // orphan
         
         
         if                       // fcn.801ec368+0x1a2c // unlikely
         if                       // unlikely

    loc_0x8020aefc: // orphan
         
         
         if                       // unlikely
         if                       // fcn.801ec534+0x1c58 // unlikely

    loc_0x8020af10: // orphan
         if                       // unlikely
         if                       // fcn.801ec534+0x2154 // unlikely

    loc_0x8020af1c: // orphan
         if                       // fcn.801ec534+0x223c // unlikely
         if                       // fcn.801ec534+0x2360 // unlikely

    loc_0x8020af28: // orphan
         if                       // fcn.801ec534+0x2488 // unlikely
         if                       // fcn.801ec534+0x259c // unlikely

    loc_0x8020af34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020af40: // orphan
         
         if                       // unlikely
         if                       // fcn.801ec534+0x2bc8 // unlikely

    loc_0x8020af50: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020af60: // orphan
         
         if                       // fcn.801e35dc+0xc19c // unlikely
         

    loc_0x8020af6c: // orphan
         if                       // fcn.801e35dc+0xc544 // unlikely
         

    loc_0x8020af74: // orphan
         if                       // fcn.801efc04+0x64 // unlikely
         

    loc_0x8020af7c: // orphan
         if                       // fcn.801e35dc+0xcaa4 // unlikely
         if                       // fcn.801f0170+0x34 // unlikely

    loc_0x8020af88: // orphan
         
         if                       // fcn.801f0670+0x110 // unlikely
         

    loc_0x8020af94: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020afa4: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020afb4: // orphan
         
         if                       // unlikely
         

    loc_0x8020afc0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020afd4: // orphan
         if                       // fcn.801ec534+0x51d4 // unlikely
         if                       // unlikely

    loc_0x8020afe0: // orphan
         if                       // unlikely
         if                       // fcn.801ec534+0x5374 // unlikely

    loc_0x8020afec: // orphan
         if                       // fcn.801e35dc+0xe3b4 // unlikely
         // CODE XREF from fcn.817c1ffc @ +0x57c
         if                       // unlikely

    loc_0x8020aff8: // orphan
         
         
         
         if                       // fcn.801e35dc+0xe8ec // unlikely
         if                       // fcn.801e35dc+0xe960 // unlikely

    loc_0x8020b010: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b020: // orphan
         
         
         if                       // fcn.801e35dc+0xf560 // unlikely
         if                       // fcn.801e35dc+0xf5a4 // unlikely

    loc_0x8020b034: // orphan
         if                       // unlikely
         

    loc_0x8020b03c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b048: // orphan
         if                       // fcn.801ec534+0x6a08 // unlikely
         

    loc_0x8020b050: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b060: // orphan
         if                       // fcn.801e35dc+0xfd48 // unlikely
         if                       // unlikely

    loc_0x8020b06c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b078: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b084: // orphan
         
         
         
         if                       // fcn.801f36f4+0x1a0 // unlikely
         

    loc_0x8020b098: // orphan
         if                       // unlikely
         

    loc_0x8020b0a0: // orphan
         if                       // unlikely
         

    loc_0x8020b0a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b0b4: // orphan
         
         

    loc_0x8020b0bc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b0cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b0d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b0e4: // orphan
         
         
         if                       // unlikely
         

    loc_0x8020b0f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020b104: // orphan
         
         

    loc_0x8020c76c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7078
         
         dsll32 0, 0, 0
         if                       // unlikely
         if                       // unlikely

    loc_0x8020c780: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020c7bc: // orphan
         if                       // fcn.8021edac-0x120dc // unlikely
         

    loc_0x8020c7c4: // orphan
         
         
         
         if                       // fcn.8021edac-0x11ed8 // unlikely
         if                       // unlikely

    loc_0x8020c7dc: // orphan
         if                       // fcn.8021edac-0x11d2c // unlikely

    loc_0x8020c7e8: // orphan
         
         if                       // unlikely
         

    loc_0x8020c7f4: // orphan
         
         

    loc_0x8020c7fc: // orphan
         // CODE XREF from fcn.8262aae0 @ +0x2a1c
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020c814: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8020c84c: // orphan
         if                       // unlikely
         

    loc_0x8020c854: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7080
         
         
         
         
         
         
         
         goto 0x82001adc
         

    loc_0x8020c8c8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7084
         halfword [at + 0x1d5e] = v0
         call 0x8004d690          // 0x8004d690(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0
         at = fcn.82000000 << 16
         [at + 0x1d60] = v0
         call 0x8004d690          // 0x8004d690(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         at = fcn.82000000 << 16
         [at + 0x1d64] = v0
         call 0x8004d690          // 0x8004d690(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x1c
         ra = [sp + 0x14]
         at = fcn.82000000 << 16
         [at + 0x1d68] = v0
         ret
         sp += 0x18

    loc_0x8020ccd8: // orphan
         if                       // likely
         t9 = , signed  a0 >> 5   // arg1

    loc_0x8020cfe8: // orphan
         at = fcn.82000000 << 16
         t0 = t9 | 1
         halfword [at + 0x1ea2] = t0
         // CODE XREF from fcn.8020c420 @ +0xbbc
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8020d0f0: // orphan
         a2 &= 0x3f
         if                       // unlikely
         

    loc_0x8020d0fc: // orphan
         a2 -= 0x40

    loc_0x8020d100: // orphan
         // CODE XREFS from fcn.801f7004 @ 0xccc, 0x8020d0f4
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10
         at = , a2 < v1           // lo
         if                       // unlikely
         a0 = 0 + 0xff            // s4

    loc_0x8020d114: // orphan
         unsigned , hi
         t5 = lo
         
         
         div 0, t5, v1
         if                       // likely
         

    loc_0x8020d130: // orphan
         break 7

    loc_0x8020d134: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d128
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020d140: // orphan
         if                       // likely
         

    loc_0x8020d148: // orphan
         break 6

    loc_0x8020d14c: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d138, 0x8020d140
         at = fcn.82000000 << 16
         t6 = lo
         halfword [at + 0x1ea6] = t6
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea4] = a2

    loc_0x8020d160: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d10c
         a1 = fcn.82000000 << 16
         a1 = [a1 + 0x1cdc]
         a3 = fcn.82000000 << 16
         v0 = v1 + a1
         at = , a2 < v0           // lo
         if                       // unlikely
         at = fcn.82000000 << 16

    loc_0x8020d17c: // orphan
         t7 = 0 + 0xff            // s4
         halfword [at + 0x1ea4] = a2
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea6] = t7

    loc_0x8020d18c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d174
         a3 = [a3 + 0x1ce0]       // t9
         t9 = a2 - v1
         a0 = 0 + 0xff            // s4
         t8 = v0 + a3
         at = , a2 < t8           // lo
         if                       // unlikely
         v0 = t9 - a1

    loc_0x8020d1a8: // orphan
         unsigned , hi            // t3 // t3
         t2 = lo
         
         
         div 0, t2, a3
         if                       // likely
         

    loc_0x8020d1c4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7090
         break 7

    loc_0x8020d1c8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d1bc
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x8020d1d4: // orphan
         if                       // likely
         

    loc_0x8020d1dc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7098
         break 6

    loc_0x8020d1e0: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d1cc, 0x8020d1d4
         t3 = lo
         t4 = a0 - t3
         at = fcn.82000000 << 16
         halfword [at + 0x1ea6] = t4
         goto 0x8020d460          // fcn.8021edac-0x1194c
         // CODE XREF from fcn.801f7004 @ +0x9c
         halfword [at + 0x1ea4] = a2

    loc_0x8020d1f8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d1a0
         at = fcn.82000000 << 16
         halfword [at + 0x1ea4] = a2
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea6] = 0

    loc_0x8020d210: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f709c
         t5 = [t5 + 0x1d50]       // t9
         a2 += 1                  // arg3
         // CODE XREF from fcn.801f7004 @ +0x90
         a2 <<= 0x10              // arg3
         if                       // unlikely
         a2 = , signed  a2 >> 0x10 // arg3

    loc_0x8020d224: // orphan
         at = fcn.82000000 << 16
         halfword [at + 0x1ea4] = a2
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a3
         v1 = v0 << 2
         v1 -= v0
         at = 0 + 5
         div 0, v1, at
         v1 = lo
         t1 = fcn.82000000 << 16
         t0 = fcn.82000000 << 16
         a2 = fcn.82000000 << 16
         a1 = fcn.82000000 << 16
         a1 = [a1 + 0x1ce4]
         a2 = halfword [a2 + 0x1ea4]
         t0 = [t0 + 0x1ce8]
         t1 = [t1 + 0x1cec]
         goto 0x8020d274
         a3 = [sp + 0x1c]         // t9

    loc_0x8020d270: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d21c
         v1 = 0 + 0xa

    loc_0x8020d274: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d268
         at = , a2 < v1           // lo
         if                       // likely
         

    loc_0x8020d280: // orphan
         t6 = fcn.82000000 << 16
         t6 = halfword [t6 + 0x1ea6]
         a0 = 0 + 0xff            // arg1 // s4
         if                       // likely
         

    loc_0x8020d294: // orphan
         at = fcn.82000000 << 16
         t7 = 0 + 4
         t8 = 0 + 0xff            // s4
         halfword [at + 0x1ea0] = t7
         halfword [at + 0x1ea6] = t8
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea4] = 0

    loc_0x8020d2b0: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d278, 0x8020d28c
         div 0, a2, a3            // arg4
         v0 = hi
         a0 = 0 + 0xff            // arg1 // s4
         if                       // likely
         

    loc_0x8020d2c4: // orphan
         // CODE XREF from fcn.808c0944 @ +0x34
         break 7

    loc_0x8020d2c8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d2bc
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x8020d2d4: // orphan
         if                       // likely
         

    loc_0x8020d2dc: // orphan
         break 6

    loc_0x8020d2e0: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d2cc, 0x8020d2d4
         at = fcn.82000000 << 16
         halfword [at + 0x1ea4] = a2
         at = , v0 < a1           // lo
         beql at, 0, 0x8020d344   // unlikely
         v1 = a1 + t0             // arg2

    loc_0x8020d2f4: // orphan
         unsigned , hi            // t3 // t3
         t9 = lo
         
         
         div 0, t9, a1            // arg2
         if                       // likely
         

    loc_0x8020d310: // orphan
         break 7

    loc_0x8020d314: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d308
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020d320: // orphan
         if                       // likely
         

    loc_0x8020d328: // orphan
         break 6

    loc_0x8020d32c: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d318, 0x8020d320
         at = fcn.82000000 << 16
         t2 = lo
         halfword [at + 0x1ea6] = t2
         goto 0x8020d464          // fcn.8021edac-0x11948
         ra = [sp + 0x14]

    loc_0x8020d344: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d2ec
         at = , v0 < v1           // lo
         if                       // unlikely
         t4 = v1 + t1

    loc_0x8020d350: // orphan
         t3 = 0 + 0xff            // s4
         at = fcn.82000000 << 16
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea6] = t3

    loc_0x8020d360: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d348
         at = , v0 < t4           // lo
         if                       // unlikely
         t5 = v0 - a1             // arg2

    loc_0x8020d36c: // orphan
         t6 = t5 - t0
         unsigned , hi
         t7 = lo
         
         
         div 0, t7, t1
         if                       // likely
         

    loc_0x8020d38c: // orphan
         break 7

    loc_0x8020d390: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d384
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8020d39c: // orphan
         if                       // likely
         

    loc_0x8020d3a4: // orphan
         break 6

    loc_0x8020d3a8: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x8020d394, 0x8020d39c
         t8 = lo
         t9 = a0 - t8             // arg1
         at = fcn.82000000 << 16
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea6] = t9

    loc_0x8020d3bc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d364
         at = fcn.82000000 << 16
         goto 0x8020d460          // fcn.8021edac-0x1194c
         halfword [at + 0x1ea6] = 0

    loc_0x8020d4cc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70a8
         [v0 + 0] = t2
         t3 = halfword [t3 + 0x1ea6]
         at = 0 - 0x100
         a0 = 0 + 0x13d           // arg1
         t4 = t3 & 0xff           // s4
         t5 = t4 | at             // s2
         a1 = 0
         call 0x8004c990          // 0x8004c990(0x13d, 0x0, 0x8, -1)
         [v0 + 4] = t5
         a0 = fcn.82000000 << 16
         a1 = fcn.82000000 << 16
         a1 = halfword [a1 + 0x1eaa]
         a0 = halfword [a0 + 0x1ea8]
         a2 = v0                  // s4
         a3 = 0 + 1               // lo
         call 0x8004d19c          // 0x8004d19c(0x7d68, 0x99f3, 0xff, 0x1)
         [sp + 0x10] = 0
         // CODE XREFS from fcn.8020d434 @ +0x4c, +0x60
         ra = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // t9
         

    loc_0x8020d678: // orphan
         [at + 0x1ec4] = 0
         at = fcn.82000000 << 16
         [at + 0x1ec8] = 0
         at = fcn.82000000 << 16
         [at + 0x1eac] = 0
         at = fcn.82000000 << 16
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x1eb0] = 0
         v1 = fcn.82000000 << 16
         v1 += 0x1eb8
         a1 = fcn.82000000 << 16
         a1 += 0x1ebe
         if                       // likely
         t6 = , signed  v0 >> 1

    loc_0x8020d6b0: // orphan
         at = v0 + 1
         t6 = , signed  at >> 1

    loc_0x8020d6b8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d6a8
         at = fcn.82000000 << 16
         t7 = t6 + 0xa

    loc_0x8020d6c0: // orphan
         [at + 0x1d50] = t7
         halfword [v1 + 2] = 0
         t8 = halfword [v1 + 2]
         halfword [a1 + 0] = 0
         t9 = halfword [a1 + 0]
         at = fcn.82000000 << 16
         halfword [v1 + 0] = t8
         halfword [at + 0x1ebc] = t9
         at = fcn.82000000 << 16
         t0 = 0 + 0x170
         halfword [at + 0x1ec0] = t0
         at = fcn.82000000 << 16
         [at + 0x1cd0] = 0
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xa1
         if                       // unlikely
         a0 = v0                  // s4

    loc_0x8020d704: // orphan
         a1 = 0
         call 0x8004dcfc          // 0x8004dcfc(-1, 0x0, 0x8, -1)
         [sp + 0x20] = v0
         call 0x80002b24          // 0x80002b24(-1, 0x0, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x0, 0x8, -1)
         a1 = 0
         [sp + 0x1c] = v0
         a0 = v0                  // s4
         call 0x8004eb58          // 0x8004eb58(0xff, 0x0, 0x8, -1)
         a1 = [sp + 0x20]         // s4
         at = fcn.82000000 << 16
         [at + 0x1cd0] = v0
         call 0x80003120          // 0x80003120(0xff, 0xff, 0x8, -1)
         a0 = [sp + 0x1c]         // s4
         a0 = fcn.82000000 << 16
         a1 = 0x7469 << 16
         a1 |= 0x746c
         call 0x8005049c          // 0x8005049c(0x82000000, 0x7469746c, 0x8, -1)
         a0 = [a0 + 0x1cd0]       // s4
         a1 = fcn.82000000 << 16
         a1 += 0xd10
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82000d10, 0x8, -1)
         a2 = 0
         a0 = fcn.82000000 << 16
         a1 = 0x6b75 << 16
         a1 |= 0x726f
         call 0x8005049c          // 0x8005049c(0x82000000, 0x6b75726f, 0x0, -1)
         a0 = [a0 + 0x1cd0]       // s4
         a1 = fcn.82000000 << 16
         a1 += 0xd24
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82000d24, 0x0, -1)
         a2 = 0
         a0 = fcn.82000000 << 16

    loc_0x8020d798: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70b4
         a1 = 0x6d6f << 16
         // CODE XREF from fcn.801f5158 @ +0x88c
         a1 |= 0x6a69
         call 0x8005049c          // 0x8005049c(-1, 0x6d6f6a69, 0x8, -1)
         a0 = [a0 + 0x1cd0]       // t9
         a1 = fcn.82000000 << 16
         a1 += 0xd64
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82000d64, 0x8, -1)
         a2 = 0
         a0 = fcn.82000000 << 16
         a1 = 0x4558 << 16
         a1 |= 0x5041
         call 0x8005049c          // 0x8005049c(0x82000000, 0x45585041, 0x0, -1)
         a0 = [a0 + 0x1cd0]       // s4
         a1 = fcn.82000000 << 16
         a1 += 0xd80
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82000d80, 0x0, -1)
         a2 = 0

    loc_0x8020d7e4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020d6fc
         call fcn.8200070c
         
         call 0x800356cc          // 0x800356cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         a0 = v0                  // s4
         a1 = 0
         a2 = 0 + 1               // lo
         call 0x8000484c          // 0x8000484c(0xff, 0x0, 0x1, -1)
         a3 = 0 + 1               // lo
         ra = [sp + 0x14]
         t1 = [v0 + 0xc]
         at = fcn.82000000 << 16
         sp += 0x28

    loc_0x8020e138: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70e4
         v1 = 0 + 1               // lo
         if                       // likely
         t7 = fcn.82000000 << 16

    loc_0x8020e144: // orphan
         t7 = [t7 + 0x1eac]       // t9
         t9 = fcn.82000000 << 16
         t9 += 0x1c38
         t8 = t7 << 3
         v0 = t8 + t9
         s0 = [v0 + 4]            // t9
         at = 0 + 4
         if                       // unlikely
         at = 0 + 5

    loc_0x8020e168: // orphan
         bnel s0, at, 0x8020e24c  // likely
         ra = [sp + 0x1c]         // s4

    loc_0x8020e170: // orphan
         call fcn.82000ce0
         s0 = 0 + 3
         goto 0x8020e24c
         ra = [sp + 0x1c]         // s4

    loc_0x8020e180: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e160
         at = fcn.82000000 << 16
         goto 0x8020e248
         [at + 0x1ec8] = v1

    loc_0x8020e19c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f70d8
         call 0x80035424          // 0x80035424(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xf
         goto 0x8020e24c
         ra = [sp + 0x1c]         // s4

    loc_0x8020e248: // orphan
         // XREFS: CODE 0x8020e0ac  CODE 0x8020e0ec  CODE 0x8020e13c  
         // XREFS: CODE 0x8020e184  CODE 0x8020e1e4  CODE 0x8020e1f0  
         ra = [sp + 0x1c]         // s4

    loc_0x8020e24c: // orphan
         // XREFS: CODE 0x801f7108  CODE 0x8020e0d4  CODE 0x8020e0fc  
         // XREFS: CODE 0x8020e10c  CODE 0x8020e11c  CODE 0x8020e168  
         // XREFS: CODE 0x8020e178  CODE 0x8020e1a4  CODE 0x8020e1dc  
         // XREFS: CODE 0x8020e208  CODE 0x8020e228  CODE 0x8020e23c  
         v0 = s0
         s0 = [sp + 0x18]         // a2
         ret                      // ra
         sp += 0x20

    loc_0x8020e6b8: // orphan
         if                       // fcn.80210220+0x8 // unlikely
         // CODE XREF from fcn.801f7004 @ 0x801f7114
         if                       // unlikely

    loc_0x8020e6c4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x2e0
         if                       // unlikely

    loc_0x8020e6d0: // orphan
         if                       // unlikely
         

    loc_0x8020e714: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7120
         if                       // fcn.8021edac-0xe844 // unlikely
         if                       // unlikely

    loc_0x8020e720: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0xe7d4 // unlikely

    loc_0x8020e72c: // orphan
         // CODE XREF from fcn.8020e300 @ +0x2e8
         if                       // fcn.8021edac-0xe7ec // unlikely
         if                       // fcn.8021edac-0xe7d8 // unlikely

    loc_0x8020e738: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e744: // orphan
         // CODE XREF from fcn.8020e300 @ +0x2f0
         
         if                       // unlikely
         if                       // fcn.8021edac-0xe5bc // unlikely

    loc_0x8020e754: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x2f4
         if                       // fcn.8021edac-0xe550 // unlikely

    loc_0x8020e760: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0xe514 // unlikely

    loc_0x8020e76c: // orphan
         if                       // fcn.8021edac-0xe4bc // unlikely
         if                       // fcn.8021edac-0xe498 // unlikely

    loc_0x8020e778: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e784: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e790: // orphan
         // CODE XREF from fcn.8020e300 @ +0x2fc
         if                       // fcn.8021edac-0xe258 // unlikely
         if                       // fcn.8021edac-0xe244 // unlikely

    loc_0x8020e79c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e7a8: // orphan
         if                       // fcn.80210c18+0x4 // unlikely
         if                       // unlikely

    loc_0x8020e7b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e7c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e7cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e7d8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8020a180 @ 0x8020e608
         

    loc_0x8020e7e0: // orphan
         if                       // fcn.80210f30+0x14 // unlikely
         if                       // fcn.80210f30+0x88 // unlikely

    loc_0x8020e7ec: // orphan
         if                       // fcn.80210f30+0x80 // unlikely
         // CODE XREF from fcn.8020a180 @ 0x8020e60c
         if                       // fcn.80210f30+0x44 // unlikely

    loc_0x8020e7f8: // orphan
         if                       // fcn.80210f30+0x5c // unlikely
         if                       // fcn.80210f30+0x70 // unlikely

    loc_0x8020e804: // orphan
         if                       // fcn.80210f30+0x128 // unlikely
         if                       // fcn.80210f30+0x16c // unlikely

    loc_0x8020e810: // orphan
         if                       // fcn.80210f30+0x1b4 // unlikely
         if                       // fcn.80210f30+0x1d8 // unlikely

    loc_0x8020e81c: // orphan
         if                       // fcn.8020a180+0x7070 // unlikely
         if                       // unlikely

    loc_0x8020e828: // orphan
         if                       // fcn.801f6c00+0x1a7bc // unlikely
         if                       // unlikely

    loc_0x8020e834: // orphan
         if                       // fcn.8020a180+0x73d8 // unlikely
         // CODE XREF from fcn.8020a180 @ 0x8020e614
         if                       // unlikely

    loc_0x8020e840: // orphan
         

    loc_0x8020e844: // orphan
         if                       // fcn.801f6c00+0x1a9f8 // unlikely
         if                       // unlikely

    loc_0x8020e850: // orphan
         if                       // fcn.8021edac-0xd618 // unlikely
         if                       // fcn.8021edac-0xd604 // unlikely

    loc_0x8020e85c: // orphan
         if                       // fcn.8021edac-0xd5bc // unlikely
         if                       // unlikely

    loc_0x8020e868: // orphan
         if                       // fcn.8020a180+0x76ec // unlikely
         if                       // unlikely

    loc_0x8020e874: // orphan
         if                       // fcn.8021edac-0xd4d4 // unlikely
         

    loc_0x8020e87c: // orphan
         
         // CODE XREF from fcn.8020e300 @ +0x31c
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e894: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e620
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e8a0: // orphan
         if                       // unlikely
         

    loc_0x8020e8a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e8b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e8c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8020e8cc: // orphan
         if                       // fcn.8021edac-0xd0ec // unlikely
         if                       // fcn.8021edac-0xd0d8 // unlikely

    loc_0x8020e8d8: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0xcffc // unlikely

    loc_0x8020e8e4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x801f7130
         if                       // fcn.8021edac-0xcf94 // unlikely
         if                       // fcn.8021edac-0xcf70 // unlikely

    loc_0x8020e8f0: // orphan
         if                       // unlikely
         if                       // fcn.8021edac-0xcee4 // unlikely

    loc_0x8020e8fc: // orphan
         if                       // fcn.8021edac-0xccec // unlikely
         if                       // fcn.8021edac-0xccc8 // unlikely

    loc_0x8020e938: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f7134
         if                       // fcn.8021edac-0xcbb0 // unlikely

    loc_0x8020e944: // orphan
         if                       // fcn.8021edac-0xcb24 // unlikely

    loc_0x8020e950: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e62c
         if                       // fcn.8021edac-0xca98 // unlikely

    loc_0x8020e95c: // orphan
         // CODE XREF from fcn.801f7134 @ 0x801f7138
         if                       // fcn.8021edac-0xca4c // unlikely
         

    loc_0x8021031c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e6c8
         bnel t9, at, 0x80210330  // fcn.8021edac-0xea7c // likely
         t0 = , unsigned  byte [a0 + 4] // arg1 // s4

    loc_0x80210324: // orphan
         ret                      // ra
         v0 = 0 + 5

    loc_0x8021059c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e718
         mul.s f8, f4, f6
         t7 = halfword [a0 + 0x10]
         t8 = halfword [a0 + 0x1a]
         t4 = halfword [a0 + 0x1c]
         v0 = t6 - t7
         v1 = t8 - a1             // arg2
         cvt.s.w f16, f10

    loc_0x802106d0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e77c
         t5 = lo
         mtc1 t5, f8
         t1 = t9 - t0
         mtc1 t1, f18
         cvt.s.w f2, f8
         sub.s f8, f16, f6
         cvt.s.w f4, f18
         div.s f10, f8, f2

    loc_0x80210740: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e73c
         t2 = 0 + 2
         at = , v0 < t8           // lo

    loc_0x80210748: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7c4
         if                       // unlikely
         t3 = 0 + 1               // lo

    loc_0x80210750: // orphan
         t9 -= 0x1c88
         t0 = a0 - t9             // arg1
         // CODE XREF from fcn.801f7134 @ 0x801f7244
         at = 0 + 0x3c
         div 0, t0, at
         mtc1 v0, f8
         t1 = lo
         at = , t1 < 2            // lo
         if                       // likely
         cvt.s.w f12, f8

    loc_0x80210774: // orphan
         at = 0x8221 << 16
         lwc1 f6, -0x2884, at
         mtc1 0, f4
         goto 0x80210790
         sub.s f0, f4, f6

    loc_0x80210788: // orphan
         at = 0x8221 << 16
         lwc1 f0, -0x2884, at

    loc_0x80210790: // orphan
         // CODE XREF from fcn.801f7004 @ 0x80210780
         lwc1 f10, 8, a0          // arg1
         // CODE XREF from fcn.8020e300 @ +0x440
         lwc1 f6, 0xc, a0         // arg1
         t2 = halfword [a0 + 0x28]
         mul.s f4, f10, f12
         at = 0x8221 << 16
         lwc1 f10, -0x2880, at
         mul.s f8, f6, f12
         t3 = halfword [a0 + 0x2a]
         at = 0xbf00 << 16
         t1 = 0 + 1               // lo
         add.s f2, f4, f0
         mtc1 t2, f4
         add.s f14, f8, f10
         mul.s f8, f2, f12
         mtc1 t3, f10
         cvt.s.w f6, f4
         cvt.s.w f4, f10
         add.s f16, f6, f8
         mtc1 0, f8
         // CODE XREF from fcn.801f7004 @ 0x8020e748
         mul.s f6, f14, f12
         c.lt.s f8, f16
         

    loc_0x80210880: // orphan
         lwl t5, 0x2c, a0         // arg1 // t9
         // CODE XREF from fcn.801f7004 @ 0x8020e760
         lwr t5, 0x2f, a0         // arg1 // t9
         halfword [a0 + 0] = t2   // arg1
         halfword [a0 + 6] = t3   // arg1
         swl t5, 0x20, a0         // arg1
         swr t5, 0x23, a0         // arg1

    loc_0x80210b1c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e788
         if                       // fcn.8021edac-0xe27c // unlikely
         a1 = t9 - t1             // arg2

    loc_0x80210c04: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7a0
         t7 = v0 + t6
         halfword [a0 + 0xa] = t7 // arg1
         t8 = halfword [a0 + 0xa]
         v0 = 0 + 1               // lo
         t9 = t8 - a1             // arg2

    loc_0x80210d90: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7ac
         [sp + 0x90] = a0
         [sp + 0x94] = a1
         [sp + 0x98] = a2
         call 0x8000731c          // 0x8000731c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x9c] = a3
         // CODE XREF from fcn.8020e300 @ +0x4b0
         s1 = v0                  // s4
         call 0x80006dec          // 0x80006dec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x40
         s2 = v0                  // s4
         call 0x80006dec          // 0x80006dec(0x40, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x40
         [sp + 0x84] = v0
         call 0x80006dec          // 0x80006dec(0x40, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         // CODE XREF from fcn.801f7004 @ 0x8020e7b4
         [sp + 0x80] = v0
         a2 = halfword [s1 + 6]
         a1 = halfword [s1 + 4]
         call 0x80046930          // 0x80046930(0x10, 0xffff, 0xffff, -1)
         a0 = v0                  // s4

    loc_0x80210ddc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7b8
         s0 = 0x800d << 16
         s0 += 0x510
         v1 = [s0 + 0]
         t7 = 0xdc08 << 16
         t7 |= 8
         // CODE XREF from fcn.8020e300 @ +0x4bc
         t6 = v1 + 8
         [s0 + 0] = t6
         at = 0x3f00 << 16
         [v1 + 0] = t7
         mtc1 at, f0
         t8 = [sp + 0x80]         // s4
         at = 0x1fff << 16
         at |= 0xffff
         t9 = t8 & at             // s4
         // CODE XREF from fcn.801f7004 @ 0x8020e7c0
         [v1 + 4] = t9
         t6 = , unsigned  halfword [s1 + 4]
         mfc1 a1, f0
         a0 = [sp + 0x84]         // s4
         mtc1 t6, f4
         at = 0x4f80 << 16

    loc_0x80210e2c: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e7c8
         if                       // unlikely
         cvt.s.w f6, f4

    loc_0x80210e34: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80210e40: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7cc
         sub.s f10, f6, f0
         t7 = , unsigned  halfword [s1 + 6]
         at = 0x4f80 << 16
         mtc1 t7, f16
         mfc1 a2, f10

    loc_0x80210e54: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7d0
         if                       // likely
         cvt.s.w f18, f16

    loc_0x80210e5c: // orphan
         mtc1 at, f4
         
         add.s f18, f18, f4

    loc_0x80210e68: // orphan
         at = 0xc000 << 16
         mtc1 at, f6
         sub.s f8, f18, f0
         at = 0x4000 << 16
         mtc1 at, f10
         at = 0x3f80 << 16
         mtc1 at, f16
         mfc1 a3, f8
         swc1 f0, 0x10, sp
         swc1 f6, 0x14, sp
         swc1 f10, 0x18, sp
         call 0x8007e474          // 0x8007e474(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f16, 0x1c, sp
         a1 = [sp + 0x90]         // t9
         s1 = halfword [sp + 0x96]
         t8 = 0 + 0x800

    loc_0x80210ea8: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e7d4
         [sp + 0x14] = t8
         a1 -= 3
         a1 <<= 0x10
         t8 = 0 + 0xff            // s4
         t9 = 0 + 0xff            // s4

    loc_0x80210ebc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e7d8
         t6 = 0 + 0xff            // s4
         t7 = 0 + 0xff            // s4
         a2 = s1 << 0x10
         a2 = , signed  a2 >> 0x10
         [sp + 0x20] = t7
         [sp + 0x1c] = t6
         [sp + 0x18] = t9
         [sp + 0x24] = t8
         a1 = , signed  a1 >> 0x10
         a0 = s2
         a3 = 0 - 1               // s2
         call 0x800468c8          // 0x800468c8(-1, 0xfffffe11, 0xffff7dbd, -1)
         [sp + 0x10] = 0
         a1 = [sp + 0x98]         // a2
         a2 = halfword [sp + 0x9e]
         t9 = 0 + 0xff            // s4
         a1 -= 3
         a1 <<= 0x10
         t6 = 0 + 0xff            // s4
         t7 = 0 + 0xff            // s4
         t8 = 0 + 0xff            // s4
         [sp + 0x24] = t8
         [sp + 0x20] = t7
         [sp + 0x1c] = t6
         a1 = , signed  a1 >> 0x10
         [sp + 0x18] = t9
         a0 = s2 + 0x10
         a3 = 0 - 1               // s2
         [sp + 0x10] = 0

    loc_0x80211314: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e820
         t8 = halfword [a1 + 8]
         t6 -= v0
         t7 = 0x8221 << 16
         t7 -= 0x1c88
         t6 <<= 2
         v1 = t6 + t7
         halfword [v1 + 0x24] = t8
         t9 = halfword [a1 + 0xa]
         v0 = 0

    loc_0x80211338: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e824
         ret                      // ra
         halfword [v1 + 0x26] = t9

    loc_0x802113e0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e82c
         ret                      // ra
         v0 = 0

    loc_0x8021156c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e838
         t8 -= t0
         t9 = 0x8221 << 16
         t9 -= 0x1c88
         t8 <<= 2
         v1 = t8 + t9
         halfword [v1 + 0x18] = t1
         t2 = halfword [s0 + 0xa]
         halfword [v1 + 0x1a] = t2
         lwl t4, 0x18, v1

    loc_0x80211590: // orphan
         // CODE XREF from fcn.8020a180 @ 0x8020e83c
         lwr t4, 0x1b, v1         // t9
         swl t4, 0x20, v1

    loc_0x8021160c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e848
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x50] = a2
         t0 = [sp + 0x60]
         t3 = 0x8221 << 16
         t3 -= 0x1c88
         t2 = t0 << 4
         t2 -= t0
         t2 <<= 2
         [sp + 0x44] = v0
         v1 = t2 + t3
         t4 = halfword [v1 + 0x38]
         t5 = halfword [v1 + 0x20]
         a2 = [sp + 0x50]
         t6 = t4 + t5
         halfword [s0 + 8] = t6
         t8 = halfword [v1 + 0x22]
         t7 = halfword [v1 + 0x3a]
         t9 = t7 + t8
         if                       // unlikely
         halfword [s0 + 0xa] = t9

    loc_0x8021165c: // orphan
         t1 = halfword [v1 + 6]
         beql t1, 0, 0x8021167c   // unlikely
         t4 = , unsigned  halfword [s0 + 2]

    loc_0x80211668: // orphan
         t2 = , unsigned  halfword [s0 + 2]
         t3 = t2 & 0xfffd
         goto 0x802116b0
         halfword [s0 + 2] = t3

    loc_0x8021167c: // orphan
         t5 = t4 | 2              // t9
         goto 0x802116b0
         halfword [s0 + 2] = t5

    loc_0x80211688: // orphan
         t6 = halfword [v1 + 6]
         bnel t6, 0, 0x802116a8   // likely
         t9 = , unsigned  halfword [s0 + 2]

    loc_0x80211694: // orphan
         t7 = , unsigned  halfword [s0 + 2]
         // CODE XREF from fcn.801f7134 @ 0x801f72a4
         t8 = t7 & 0xfffd
         goto 0x802116b0
         halfword [s0 + 2] = t8

    loc_0x802116a8: // orphan
         t1 = t9 | 2
         halfword [s0 + 2] = t1

    loc_0x802116b0: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x80211670, 0x80211680, 0x8021169c
         t2 = 0x8221 << 16
         t2 = [t2 - 0x287c]
         t3 = t0 << 2
         t3 -= t0
         if                       // unlikely
         t3 <<= 3

    loc_0x802116c8: // orphan
         t5 = [sp + 0x2c]
         t3 += t0
         t3 <<= 2
         t3 -= t0
         t4 = 0x8221 << 16
         t4 -= 0x1b20
         t3 <<= 2
         a1 = , unsigned  byte [t5 + 1] // s4
         [sp + 0x60] = t0
         call 0x82200d8c          // 0x82200d8c(-1, 0xff, 0x8, -1)
         a0 = t3 + t4
         t0 = [sp + 0x60]

    loc_0x802116f8: // orphan
         t6 = , unsigned  halfword [s0 + 2]
         t8 = t0 << 2
         t8 -= t0
         t7 = t6 & 2
         if                       // fcn.8021edac-0xd57c // unlikely
         t8 <<= 3

    loc_0x80211710: // orphan
         t8 += t0
         t1 = [sp + 0x2c]
         t8 <<= 2
         t8 -= t0
         t9 = 0x8221 << 16
         t2 = [sp + 0x44]         // s4
         t9 -= 0x1b20
         t8 <<= 2
         a0 = t8 + t9
         a1 = halfword [s0 + 8]
         a2 = halfword [s0 + 0xa]
         a3 = , unsigned  byte [t1 + 1] // s4
         [sp + 0x28] = a0
         call 0x82200e04          // 0x82200e04(0x3239566c6af19530, 0x4d55, 0x655a, 0xff)
         [sp + 0x10] = t2
         a0 = [sp + 0x28]
         call fcn.82201460
         [sp + 0x40] = v0
         a2 = [sp + 0x40]         // s4
         a1 = 0x800d << 16
         // CODE XREF from fcn.8020a180 @ 0x8020e84c
         a1 += 0x510

    loc_0x80211804: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e860
         t5 = , unsigned  halfword [s0 + 2]
         t7 += t0
         t7 <<= 2
         t7 -= t0
         t8 = 0x8221 << 16
         // CODE XREF from fcn.8020a180 @ 0x8020e864
         t8 -= 0x1b20

    loc_0x80211880: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e86c
         t8 -= v1

    loc_0x80211884: // orphan
         t9 = 0x8221 << 16
         t9 -= 0x1c88
         t8 <<= 2
         v0 = t8 + t9
         a0 = v0 + 0x30           // arg1
         [sp + 0x1c] = v0
         [sp + 0x30] = v1
         call 0x800504bc          // 0x800504bc(0x48220e3a4, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x3c] = a1
         v0 = [sp + 0x1c]
         a1 = [sp + 0x3c]

    loc_0x80211a10: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e88c
         v0 = hi
         at = , v0 < 0x1e         // lo
         if                       // unlikely
         a2 = v0 - 0x1e           // arg3

    loc_0x80211a20: // orphan
         t0 = 0x8221 << 16
         t1 = 0x8221 << 16
         a2 = v0                  // s4
         a3 = 0 + 0x1e            // arg4
         t0 -= 0x286c
         goto 0x80211a4c
         // CODE XREF from fcn.801f7134 @ 0x801f72b4
         t1 -= 0x2869

    loc_0x80211a3c: // orphan
         t0 = 0x8221 << 16
         t1 = 0x8221 << 16
         t0 -= 0x2869
         t1 -= 0x286c

    loc_0x80211a4c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x80211a34
         v0 = , unsigned  byte [t0 + 0]
         t8 = , unsigned  byte [t1 + 0] // s4
         t9 = t8 - v0             // s4
         unsigned , hi
         t3 = lo
         
         
         div 0, t3, a3            // arg4
         t4 = lo
         t5 = t4 + v0
         byte [a1 + 0x44] = t5    // arg2
         t6 = , unsigned  byte [t1 + 1] // s4
         v1 = , unsigned  byte [t0 + 1]
         if                       // likely
         

    loc_0x80211a88: // orphan
         break 7

    loc_0x80211a8c: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80211a98: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e894
         if                       // likely
         

    loc_0x80211aa0: // orphan
         break 6

    loc_0x80211aa4: // orphan
         t7 = t6 - v1
         unsigned , hi            // t9 // s2
         t8 = lo
         // CODE XREF from fcn.8020e300 @ +0x59c
         
         
         div 0, t8, a3            // arg4
         t9 = lo
         t3 = t9 + v1

    loc_0x80211ac4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8a0
         byte [a1 + 0x45] = t3    // arg2
         t4 = , unsigned  byte [t1 + 2] // s4

    loc_0x80211acc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e898
         a0 = , unsigned  byte [t0 + 2] // s4
         if                       // likely
         

    loc_0x80211ad8: // orphan
         break 7

    loc_0x80211adc: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80211ae8: // orphan
         if                       // likely
         

    loc_0x80211af0: // orphan
         break 6

    loc_0x80211af4: // orphan
         t5 = t4 - a0             // arg1
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, a3            // arg4
         t7 = lo
         t8 = t7 + a0             // arg1 // t9
         byte [a1 + 0x46] = t8    // arg2
         if                       // likely
         // CODE XREF from fcn.801f7134 @ +0x184
         

    loc_0x80211b20: // orphan
         break 7

    loc_0x80211b24: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80211b30: // orphan
         if                       // likely
         

    loc_0x80211b3c: // orphan
         t9 = t2 << 2
         // CODE XREF from fcn.801f7134 @ 0x801f72bc
         t9 += t2
         t3 = 0x8221 << 16
         t3 -= 0x1b98
         t9 <<= 3
         a0 = t9 + t3             // arg1
         [sp + 0x18] = a0
         call fcn.82201d30
         [sp + 0x44] = a1
         a0 = [sp + 0x18]
         if                       // unlikely
         a1 = [sp + 0x44]

    loc_0x80211b6c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8a8
         t4 = , unsigned  halfword [a1 + 2]
         t5 = t4 | 2
         halfword [a1 + 2] = t5
         t6 = halfword [a0 + 4]
         halfword [a1 + 8] = t6

    loc_0x80211b80: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8ac
         t7 = halfword [a0 + 6]   // t3
         halfword [a1 + 0xa] = t7
         t8 = halfword [a0 + 8]
         halfword [a1 + 0xc] = t8
         t9 = halfword [a0 + 0xa]
         halfword [a1 + 0xe] = t9
         t3 = halfword [a0 + 0x1c]
         halfword [a1 + 0x28] = t3
         t4 = halfword [a0 + 0x1e]
         // CODE XREF from fcn.8020e300 @ +0x5b0
         goto 0x80211bb8
         halfword [a1 + 0x2a] = t4

    loc_0x80211bac: // orphan
         t5 = , unsigned  halfword [a1 + 2]
         t6 = t5 & 0xfffd
         halfword [a1 + 2] = t6

    loc_0x80211bb8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x80211ba4
         ra = [sp + 0x14]         // t9

    loc_0x80211bfc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8b8
         at = 0x8221 << 16
         [at - 0x27bc] = v0
         v1 = hi
         at = , v1 < 0x1e         // lo
         if                       // unlikely
         // CODE XREF from fcn.8020e300 @ +0x5bc
         v0 = v1 - 0x1e

    loc_0x80211c14: // orphan
         a2 = 0x8221 << 16
         a3 = 0x8221 << 16
         v0 = v1
         a0 = 0 + 0x1e            // arg1
         a2 -= 0x286c             // arg3
         goto 0x80211c40
         a3 -= 0x2869             // arg4

    loc_0x80211c30: // orphan
         a2 = 0x8221 << 16
         // CODE XREF from fcn.801f7134 @ 0x801f72c0
         a3 = 0x8221 << 16
         a2 -= 0x2869             // arg3
         a3 -= 0x286c             // arg4

    loc_0x80211c40: // orphan
         // CODE XREF from fcn.801f7004 @ 0x80211c28
         v1 = , unsigned  byte [a2 + 0] // arg3
         // CODE XREF from fcn.801f7004 @ 0x8020e8c0
         t6 = , unsigned  byte [a3 + 0] // arg4 // s4
         t2 = 0 + 1               // lo
         t7 = t6 - v1             // s4
         unsigned , hi
         t8 = lo

    loc_0x80211c58: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8020e8c4
         
         
         div 0, t8, a0            // arg1
         t9 = lo
         t3 = t9 + v1
         byte [a1 + 0x28] = t3    // arg2
         t4 = , unsigned  byte [a3 + 1] // arg4 // s4
         t0 = , unsigned  byte [a2 + 1] // arg3
         if                       // fcn.8021edac-0xd128 // likely
         // CODE XREF from fcn.8020e300 @ +0x5c8
         

    loc_0x80211c80: // orphan
         break 7

    loc_0x8021dbb0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e454 @ 0x8023da3c
         if                       // unlikely

    loc_0x8021dbbc: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da34
         if                       // unlikely
         if                       // unlikely

    loc_0x8021dbc8: // orphan
         if                       // unlikely
         if                       // fcn.8023e660-0xf944 // unlikely

    loc_0x8021dc1c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8023da48
         if                       // fcn.8023e660-0xecd0 // unlikely

    loc_0x8021dc28: // orphan
         

    loc_0x8021e07c: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8023da78
         

    loc_0x8021e268: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8021e454 @ 0x8023da84
         

    loc_0x8021e4d0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da9c
         

    loc_0x8021ef70: // orphan
         if                       // unlikely

    loc_0x8022732c: // orphan
         

    loc_0x80227330: // orphan
         if                       // fcn.8023c1d0+0xf4 // unlikely
         if                       // fcn.8023c1d0+0x108 // unlikely

    loc_0x8022733c: // orphan
         
         
         if                       // fcn.8023c1d0+0x178 // unlikely
         if                       // fcn.8023c368+0x4 // unlikely

    loc_0x80227350: // orphan
         if                       // fcn.8023c1d0+0x1d4 // unlikely
         if                       // fcn.8023c1d0+0x1f8 // unlikely

    loc_0x8022735c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227368: // orphan
         
         if                       // unlikely
         if                       // fcn.8023e660-0x211c // unlikely

    loc_0x80227378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227384: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80227390: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022739c: // orphan
         
         
         
         
         
         
         
         // CODE XREF from fcn.8021d4ec @ +0x8
         if                       // unlikely
         if                       // fcn.8023e660-0x1d30 // unlikely

    loc_0x802273c4: // orphan
         if                       // unlikely
         

    loc_0x802273cc: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d4f8
         if                       // unlikely
         if                       // unlikely

    loc_0x802273d8: // orphan
         
         
         if                       // fcn.8023e660-0x1bdc // unlikely
         if                       // unlikely

    loc_0x802273ec: // orphan
         if                       // fcn.8023e660-0x1a00 // unlikely
         

    loc_0x802273f4: // orphan
         if                       // fcn.8023e660-0x1588 // unlikely
         if                       // unlikely

    loc_0x80227400: // orphan
         
         if                       // fcn.8021e454+0x1f404 // unlikely
         if                       // unlikely

    loc_0x80227410: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8022741c: // orphan
         if                       // fcn.8023e660-0xb80 // unlikely
         if                       // fcn.8023e660-0xb6c // unlikely

    loc_0x80227428: // orphan
         if                       // fcn.8023e660-0xb34 // unlikely
         if                       // fcn.8023e660-0xb20 // unlikely

    loc_0x80227434: // orphan
         if                       // fcn.8023e660-0xae8 // unlikely
         if                       // fcn.8023e660-0xad4 // unlikely

    loc_0x80227440: // orphan
         if                       // fcn.8023e660-0xa5c // unlikely
         if                       // fcn.8023e660-0xa48 // unlikely

    loc_0x8022744c: // orphan
         if                       // fcn.8023e660-0x9d0 // unlikely
         if                       // fcn.8023e660-0x96c // unlikely

    loc_0x80227458: // orphan
         if                       // fcn.8023e660-0x8d4 // unlikely
         if                       // unlikely

    loc_0x80227968: // orphan
         a0 = 0 + 0xc             // arg1
         call 0x80047588          // 0x80047588(0xc, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16

    loc_0x80227988: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d524
         a2 = 0x44 << 16
         a2 += 0x7d00
         a1 += 0x6e30
         a0 >>= 0x18              // s4
         call 0x80004638          // 0x80004638(0xff, 0x442f71dcfe11d238, 0x447d00, -1)
         // CODE XREF from fcn.8021d4ec @ +0x3c
         a3 = 0
         call 0x80055948          // 0x80055948(0xff, 0x442f71dcfe11d238, 0x447d00, 0x0)
         a0 = 0 + 3
         s1 = 0x8261 << 16
         s1 += 0x5a80
         call 0x82600020          // 0x82600020(0x3, 0x442f71dcfe11d238, 0x447d00, 0x0)
         a0 = s1
         call 0x80008514          // 0x80008514(0x82615a80, 0x442f71dcfe11d238, 0x447d00, 0x0)
         a0 = s2
         s2 = 0x6d70 << 16
         s2 |= 0x7263

    loc_0x802279c8: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         if                       // unlikely
         at = 0 + 1               // lo

    loc_0x802279d8: // orphan
         if                       // unlikely
         a0 = s1

    loc_0x802279e0: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d52c
         at = 0 + 2
         if                       // unlikely
         a0 = s1

    loc_0x802279ec: // orphan
         goto 0x80227a44
         

    loc_0x802279f4: // orphan
         t9 = [s1 + 0xc]
         s0 = 0 + 1               // lo
         if                       // unlikely
         

    loc_0x80227a04: // orphan
         call fcn.826005f0
         a0 = s1
         call fcn.826009a0
         
         goto 0x80227a44
         

    loc_0x80227a1c: // orphan
         call 0x826020c0          // 0x826020c0(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = 0 + 3
         .qword 0x0c980a8300000000
         goto 0x80227a44
         

    loc_0x80227a34: // orphan
         call 0x826030e4          // "Yay0" // 0x826030e4(-1, 0x442f71dcfe116408, 0x8, -1)
         s0 = 0 + 3
         call fcn.826039a0
         

    loc_0x80227a44: // orphan
         // CODE XREFS from fcn.801f7004 @ 0x802279ec, 0x80227a14, 0x80227a2c
         call 0x80002bf8          // 0x80002bf8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s2
         at = 0 + 3
         if                       // likely
         

    loc_0x80227a58: // orphan
         call fcn.826002bc
         a0 = s1
         call 0x80008574          // 0x80008574(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0 + 0x14
         call 0x80051d64          // 0x80051d64(0x14, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x80054e48          // 0x80054e48(0x14, 0x0, 0x8, -1)
         a0 = 0 + 3
         call 0x80047610          // 0x80047610(0x3, 0x0, 0x8, -1)
         
         call 0x8004c398          // 0x8004c398(0x3, 0x0, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(0x3, 0x0, 0x8, -1)
         // CODE XREF from fcn.8023e660 @ 0x8023dd0c
         
         a0 = 0x4559 << 16
         call 0x80002bf8          // 0x80002bf8(0x45590000, 0x0, 0x8, -1)
         a0 |= 0x4543
         ra = [sp + 0x2c]

    loc_0x80227b98: // orphan
         // CODE XREF from fcn.8023d410 @ +0x904
         s3 = 0
         if                       // fcn.8023e660-0x169e0 // unlikely
         s4 = 0 + 0xdc

    loc_0x80227ba4: // orphan
         s6 = 0x8261 << 16
         s6 += 0x57d0

    loc_0x80227d44: // orphan
         // CODE XREF from fcn.8021d4ec @ +0x64
         a1 += 0x5330             // arg2
         v0 = [a1 + 0]            // arg2 // t9
         at = 0 + 0x500
         a3 = 0x8008 << 16
         t6 = [v0 + 0]

    loc_0x80227d58: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d554
         a3 += 0x7200             // arg4
         v1 = 0x8008 << 16
         t7 = , unsigned  halfword [t6 + 8]
         beql t7, at, 0x80227dfc  // unlikely
         v1 = [a3 + 0]            // arg4 // t9

    loc_0x80227d6c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x802262d8
         a3 = 0x8008 << 16
         a3 += 0x7200             // arg4
         t8 = [a3 + 0]            // arg4 // t9
         t9 = , unsigned  halfword [t8 + 0xc]
         t0 = t9 & 0x800
         beql t0, 0, 0x80227db4   // unlikely
         t6 = [a3 + 0]            // arg4 // t9

    loc_0x80227d88: // orphan
         t1 = halfword [v0 + 0x16]
         t2 = t1 - 1
         halfword [v0 + 0x16] = t2
         v0 = [a1 + 0]            // arg2
         t3 = halfword [v0 + 0x16]
         bgezl t3, 0x80227db4     // likely
         t6 = [a3 + 0]            // arg4 // t9

    loc_0x80227da4: // orphan
         t4 = halfword [v0 + 0x14]
         t5 = t4 - 1
         halfword [v0 + 0x16] = t5
         t6 = [a3 + 0]            // arg4 // t9

    loc_0x80227db4: // orphan
         t7 = , unsigned  halfword [t6 + 0xc]
         t8 = t7 & 0x400
         if                       // fcn.8023e660-0x16870 // unlikely
         

    loc_0x80227dc4: // orphan
         v0 = [a1 + 0]            // arg2
         t9 = halfword [v0 + 0x16]
         t0 = t9 + 1

    loc_0x80227dfc: // orphan
         a0 = , unsigned  halfword [v1 + 0xc]
         t3 = a0 & 0x800          // arg1
         beql t3, 0, 0x80227e28   // unlikely
         t6 = a0 & 0x400          // arg1

    loc_0x80227e0c: // orphan
         t4 = [v0 + 0x98]         // t9
         v1 = 0x8008 << 16
         t5 = t4 + 1
         [v0 + 0x98] = t5
         v1 = [v1 + 0x7200]       // t9
         a0 = , unsigned  halfword [v1 + 0xc]
         t6 = a0 & 0x400          // arg1

    loc_0x80227e28: // orphan
         beql t6, 0, 0x80227e4c   // fcn.8023e660-0x16814 // unlikely
         t9 = , unsigned  halfword [v1 + 8]

    loc_0x80227e30: // orphan
         v0 = [a1 + 0]            // arg2
         v1 = 0x8008 << 16
         t7 = [v0 + 0x98]         // t9
         t8 = t7 - 1
         [v0 + 0x98] = t8
         v1 = [v1 + 0x7200]       // t9

    loc_0x80227f44: // orphan
         [v1 + 0] = v0
         v0 += 1
         at = , v0 < s0           // lo

    loc_0x80227f50: // orphan
         if                       // likely
         v1 += 4

    loc_0x80227f58: // orphan
         if                       // unlikely
         s1 = a0                  // t9

    loc_0x80227f60: // orphan
         t6 = s5 << 2
         s3 = 0x8261 << 16
         s3 += 0x5340
         s2 = t6 + a0             // arg1
         s4 = sp + 0x58

    loc_0x80227f74: // orphan
         t7 = [s3 + 0]
         t8 = [t7 + 0x98]         // t9
         if                       // likely
         

    loc_0x80227f84: // orphan
         call 0x8007afa0          // 0x8007afa0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80227f9c
         

    loc_0x80227f94: // orphan
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80227f9c: // orphan
         // CODE XREF from fcn.801f7004 @ 0x80227f8c
         divu 0, v0, s0
         a1 = hi
         t9 = a1 << 2
         t0 = s4 + t9
         t1 = [t0 + 0]            // t9
         a3 = s0 - 1
         if                       // likely
         

    loc_0x80227fbc: // orphan
         break 7

    loc_0x80227fc0: // orphan
         at = , a1 < a3
         v1 = a1                  // t0
         if                       // likely
         [s1 + 0] = t1

    loc_0x80227fd0: // orphan
         a2 = s0 - a1
         a2 -= 1
         a2 &= 3
         if                       // unlikely
         a0 = a2 + a1

    loc_0x80227fe4: // orphan
         t2 = a1 << 2
         v0 = s4 + t2

    loc_0x80227fec: // orphan
         t3 = [v0 + 4]            // t9
         v1 += 1
         v0 += 4
         if                       // likely
         [v0 - 4] = t3

    loc_0x80228000: // orphan
         if                       // unlikely
         t4 = v1 << 2

    loc_0x80228004: // orphan
         t4 = v1 << 2

    loc_0x80228008: // orphan
         t5 = a3 << 2
         // CODE XREF from fcn.8021d4ec @ 0x8021d568
         t6 = sp + 0x58
         a0 = t5 + t6
         v0 = s4 + t4

    loc_0x80228018: // orphan
         t8 = [v0 + 8]            // t9
         t9 = [v0 + 0xc]
         t0 = [v0 + 0x10]
         t7 = [v0 + 4]            // t9
         v0 += 0x10
         [v0 - 0xc] = t8

    loc_0x80228030: // orphan
         // CODE XREF from fcn.8021d4ec @ 0x8021d56c
         [v0 - 8] = t9
         [v0 - 4] = t0
         if                       // likely
         [v0 - 0x10] = t7

    loc_0x80228040: // orphan
         s1 += 4
         if                       // likely
         s0 = a3                  // s2

    loc_0x8022804c: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x14]         // t9
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // s4
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         ret
         sp += 0xe0

    loc_0x8022809c: // orphan
         t0 = a0 + 1              // arg1
         at = , t0 < s0
         a1 = a0                  // t9
         if                       // likely
         v1 = t0

    loc_0x802280b0: // orphan
         a2 = s0 - t0             // arg3
         a2 &= 3                  // arg3
         if                       // likely
         v0 = a2 + t0             // arg3

    loc_0x802280c0: // orphan
         t6 = v1 << 2
         a0 = a3 + t6             // arg4

    loc_0x802280c8: // orphan
         t8 = a1 << 2             // arg2
         t9 = a3 + t8             // arg4
         t3 = [t9 + 0]
         t7 = [a0 + 0]            // arg1
         at = , t7 < t3           // lo
         beql at, 0, 0x802280ec   // unlikely
         v1 += 1

    loc_0x802280e4: // orphan
         a1 = v1
         v1 += 1

    loc_0x802280ec: // orphan
         if                       // likely
         a0 += 4                  // arg1

    loc_0x802280f4: // orphan
         if                       // unlikely
         t4 = v1 << 2

    loc_0x802280f8: // orphan
         t4 = v1 << 2

    loc_0x802280fc: // orphan
         a0 = a3 + t4             // arg4

    loc_0x80228100: // orphan
         t5 = a1 << 2             // arg2
         t6 = a3 + t5             // arg4
         v0 = [t6 + 0]            // t9
         t8 = [a0 + 0]            // arg1
         t9 = v1 << 2
         t7 = a3 + t9             // arg4
         at = , t8 < v0           // lo
         beql at, 0, 0x80228130   // unlikely
         t3 = [a0 + 4]            // arg1

    loc_0x80228124: // orphan
         a1 = v1
         v0 = [t7 + 0]            // t9
         t3 = [a0 + 4]            // arg1

    loc_0x80228130: // orphan
         at = , t3 < v0           // lo
         beql at, 0, 0x80228150   // unlikely
         t6 = [a0 + 8]            // arg1

    loc_0x8022813c: // orphan
         a1 = v1 + 1              // arg2
         t4 = a1 << 2             // arg2
         t5 = a3 + t4             // arg4
         v0 = [t5 + 0]            // t9
         t6 = [a0 + 8]            // arg1

    loc_0x80228150: // orphan
         at = , t6 < v0           // lo
         beql at, 0, 0x80228170   // unlikely
         t7 = [a0 + 0xc]          // arg1 // t9

    loc_0x8022815c: // orphan
         a1 = v1 + 2              // arg2
         t8 = a1 << 2             // arg2
         t9 = a3 + t8             // arg4
         v0 = [t9 + 0]
         t7 = [a0 + 0xc]          // arg1 // t9

    loc_0x80228170: // orphan
         at = , t7 < v0           // lo
         beql at, 0, 0x80228184   // unlikely
         v1 += 4

    loc_0x8022817c: // orphan
         a1 = v1 + 3              // arg2
         v1 += 4

    loc_0x80228184: // orphan
         if                       // likely
         a0 += 0x10               // arg1

    loc_0x8022818c: // orphan
         t3 = a1 << 2             // arg2
         t4 = [t1 + 0]            // t9
         v0 = a3 + t3             // arg4

    loc_0x80228198: // orphan
         v1 = [v0 + 0]            // t9
         [v0 + 0] = t4
         a0 = t0
         t1 += 4
         if                       // likely
         [t1 - 4] = v1

    loc_0x802281b0: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x80228e24: // orphan
         s2 = [sp + 0x20]         // s4
         s3 = [sp + 0x24]         // s4
         s4 = [sp + 0x28]
         // CODE XREF from fcn.80225940 @ +0xaac
         ret                      // ra
         sp += 0x48

    loc_0x8022980c: // orphan
         call fcn.82601d2c
         a0 = fp
         goto 0x80229968          // fcn.8023e660-0x14cf8
         t5 = [fp + 0xc]          // t9

    loc_0x8022ac3c: // orphan
         halfword [a0 + 0] = t7   // arg1

    loc_0x8022ac40: // orphan
         a0 += 0x63c0             // arg1
         t8 = , unsigned  halfword [a0 + 4]
         v0 = v1
         t9 = t8 | v1
         goto 0x8022ac6c
         halfword [a0 + 4] = t9   // arg1

    loc_0x8022ac6c: // orphan
         // CODE XREFS from fcn.8021d4ec @ 0x8021d758, 0x8022ac1c, 0x8022ac38
         // CODE XREF from fcn.801f7004 @ 0x8022ac50
         if                       // unlikely
         a1 = 0x8261 << 16

    loc_0x8022ac74: // orphan
         call 0x80055f6c          // 0x80055f6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [a1 + 0x5374]       // t9

    loc_0x8022ac7c: // orphan
         ra = [sp + 0x14]         // t9
         sp += 0x28
         ret                      // t9
         

    loc_0x8023c424: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e260
         v0 = 0 - 1               // s2
         at = 0 + 0x300
         if                       // unlikely
         // CODE XREF from fcn.8023e660 @ 0x8023e41c
         t6 = a3 - 5              // arg4

    loc_0x8023c488: // orphan
         at = , unsigned  , t6 < 0x14
         if                       // fcn.8023e660-0x211c // likely
         t6 <<= 2

    loc_0x8023c494: // orphan
         at = 0x8261 << 16
         at += t6
         t6 = [at + 0x5a30]
         goto t6
         

    loc_0x8023c4c0: // orphan
         goto 0x8023c544          // fcn.8023e660-0x211c
         v0 = 0 + 0x3c

    loc_0x8023c508: // orphan
         goto 0x8023c544          // fcn.8023e660-0x211c
         v0 = 0 + 0x48

    loc_0x8023c52c: // orphan
         v0 = 0 + 0x43
         goto 0x8023c544          // fcn.8023e660-0x211c
         v0 = 0 + 0x49

    loc_0x8023c958: // orphan
         
         movf 0, 0, fcc0
                                  // s4
         
         movf 0, 0, fcc0
         srav 0, s2, 0
         
                                  // lo
         
         
                                  // lo
                                  // t9

    loc_0x8023c9a4: // orphan
                                  // lo
         
         
                                  // lo
                                  // t9

    loc_0x8023cb28: // orphan
         sd at
         sd ra, -0x100, ra
         sd ra, -0x9c, ra
         

    loc_0x8023d11c: // orphan
         if                       // fcn.8023e660+0x1510 // unlikely

    loc_0x8023d86c: // orphan
         if                       // unlikely
         

    loc_0x8023d9d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d9e4: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e57c
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d9f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023d9fc: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8021e484
         if                       // fcn.8023e3c0+0x1eccc // unlikely
         if                       // unlikely

    loc_0x8023da08: // orphan
         if                       // fcn.801f7004+0x66334 // unlikely
         if                       // unlikely

    loc_0x8023da14: // orphan
         if                       // fcn.8021e454+0x3ef60 // unlikely
         if                       // unlikely

    loc_0x8023da20: // orphan
         if                       // fcn.8021e454+0x3f2ac // unlikely
         if                       // unlikely

    loc_0x8023da2c: // orphan
         if                       // fcn.8021e454+0x3f228 // unlikely
         if                       // unlikely

    loc_0x8023da38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da5c: // orphan
         if                       // fcn.8021e454-0x6b8 // unlikely
         if                       // unlikely

    loc_0x8023da68: // orphan
         if                       // fcn.8021e454-0x4ac // unlikely
         if                       // unlikely

    loc_0x8023da74: // orphan
         if                       // fcn.8021e454-0x690 // unlikely
         // CODE XREF from fcn.8023e3c0 @ 0x8023e590
         if                       // unlikely

    loc_0x8023da80: // orphan
         if                       // fcn.8021e030+0xd0 // unlikely
         if                       // unlikely

    loc_0x8023da8c: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023e594
         if                       // unlikely
         if                       // unlikely

    loc_0x8023da98: // orphan
         if                       // fcn.8021e454+0x14 // unlikely
         if                       // unlikely

    loc_0x8023daa4: // orphan
         // CODE XREF from fcn.8023e3c0 @ 0x8023e59c
         if                       // fcn.8021e454+0x150 // unlikely
         if                       // unlikely

    loc_0x8023dab0: // orphan
         if                       // fcn.8021e69c+0x4 // unlikely
         // CODE XREF from syscall.0.83 @ +0x4e4
         if                       // unlikely

    loc_0x8023dda0: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8021e4cc
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8025cbb0: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8023d9dc
         
         
         
         
         
         
         
         beql k0, s4, 0x8026dd04  // unlikely

    loc_0x8025cddc: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8023d9e8
         movf 0, 0, fcc0
         s0 = byte [s0 + 0x3ff4]  // s4
         
         

    loc_0x8025cfb8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8023d9f4
         
         

    loc_0x8025d324: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8023da00
         beql k1, s4, 0x802758b8  // unlikely
         ldl s5, 0x6d00, t3       // s2

    loc_0x8025d32c: // orphan
         bz.w w2, 0x802654b8      // unlikely
         jalx 0x85a5b190          // 0x85a5b190(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8025d334: // orphan
         ldl t6, 0x6700, t3       // s2

    loc_0x8025d338: // orphan
         // CODE XREF from fcn.8023e660 @ 0x8023da04
         beql k1, v1, 0x802774f8  // unlikely
         ldr t4

    loc_0x8025d340: // orphan
         bz.d w25, 0x802787c4     // unlikely
         ldr a1, 0x6164, v1

    loc_0x8025d348: // orphan
         daddiu s2, t3, 0x7300

    loc_0x8025d3cc: // orphan
         // CODE XREF from fcn.8021e454 @ 0x8023da18
         jalx fcn.81b19400
         t5 = , unsigned  , t1 < 0x2d00 // lo
         beql k1, s4, 0x80275968  // unlikely
         ldl s5, 0x6d00, t3       // s2

    loc_0x8025d3dc: // orphan
         bz.w w2, 0x80265568      // unlikely
         jalx 0x85a5b190          // 0x85a5b190(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8025d3e4: // orphan
         ldl t6, 0x6700, t3       // s2
         beql k1, v1, 0x802775a8  // unlikely
         ldr t4

    loc_0x8025d3f0: // orphan
         bz.d w25, 0x80278874     // unlikely
         ldr a1, 0x6164, v1

    loc_0x8025d3f8: // orphan
         daddiu s2, t3, 0x7300

    loc_0x8025d848: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.8021e454 @ 0x8023da24
         if                       // unlikely

    loc_0x802654b8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8025d32c
         ret                      // ra
         

    loc_0x80265568: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8025d3dc
         
         bc1fl 0x80265588
         // CODE XREF from fcn.8025d43c @ +0x590
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x80265590
         add.s f4, f2, f0

    loc_0x80265590: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8026557c
         t4 = , unsigned  byte [a0 + 0xa]
         t2 = , unsigned  byte [a0 + 0xb]
         trunc.w.s f8, f4
         t1 = a3 + t4
         mfc1 t9, f8
         
         t3 = t9 + a1
         goto 0x802656a4
         halfword [a0 + 2] = t3

    loc_0x802774f8: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8025d338
         t9 = 0x8821 << 16
         t4 = 0 + 4
         t9 += 0x3530
         [v1 + 0x24] = t4
         [v1 + 0x1c] = t9

    loc_0x802787c4: // orphan
         // CODE XREF from fcn.801f7004 @ 0x8025d340
         t4 = [s0 + 0]            // t9
         t3 = halfword [sp + 0xaa]
         halfword [t4 + 0x3e] = t3
         t6 = [s0 + 0]            // t9
         t5 = halfword [sp + 0xae]
         halfword [t6 + 0x40] = t5
         t8 = [s0 + 0]            // t9
         t7 = halfword [sp + 0xb2]
         halfword [t8 + 0x42] = t7
         t1 = [s0 + 0]            // t9
         t9 = halfword [sp + 0xb6]
         halfword [t1 + 0x44] = t9
         t3 = [s0 + 0]            // t9
         t2 = halfword [sp + 0xba]
         halfword [t3 + 0x46] = t2
         t5 = [s0 + 0]            // t9
         t4 = halfword [sp + 0xbe]
         halfword [t5 + 0x48] = t4
         t7 = [s0 + 0]            // t9
         t6 = halfword [sp + 0xc2]
         halfword [t7 + 0x4a] = t6
         t9 = [s0 + 0]
         t8 = halfword [sp + 0xc6]
         halfword [t9 + 0x4c] = t8

}

*/
