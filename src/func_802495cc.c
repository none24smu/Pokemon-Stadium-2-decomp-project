/*
 * Function: 0x802495cc
 * ROM Offset: 0x0014a5cc
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.802495cc (int esi, int edx) {
if            // likely
// do {
if            // likely
// } while (?);
// } while (?);
}
return eax;
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
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
int fcn.802495cc (int esi, int edx) {
    loc_0x80229890:
        a0 = fp
        call fcn.8260166c // "("
        a1 = 0
        call 0x82601bb0 // 0x82601bb0(0x178000, 0x0, 0x0, 0x0)
        a0 = fp
        at = 0 + 2
        if            // likely
        t2 = [sp + 0x4c]
            
    loc_0x802298d0:
        goto 0x80229968
        t5 = [fp + 0xc]
         // do {
    loc_0x80229968:
        if            // likely
        0x8022996c
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x80229970: // orphan
             call fcn.82601968
             a0 = fp
             a0 = fp
             call fcn.82601f90
             a1 = [fp + 0xc]

    loc_0x80229984: // orphan
         call 0x80041e2c          // 0x80041e2c(0x0, 0x0, 0x0, 0x0)
         
         s7 = 0
         s6 = 0
         s0 = fp + 0xb0
         s5 = 0 + 0x420
         s4 = 0 + 0x210
         s1 = 0 + 0x58

    loc_0x802299a4: // orphan
         t6 = [sp + 0x4c]
         t7 = s7 << 5
         t7 += s7
         t7 <<= 4
         v1 = 0
         a2 = 0
         a0 = s0
         a3 = t6 + t7

    loc_0x802299c4: // orphan
         byte [a0 + 4] = 0
         a1 = 0

    loc_0x802299cc: // orphan
         v0 = a3

    loc_0x802299d0: // orphan
         t8 = , unsigned  byte [v0 + 0x90]
         a1 += 0xb0
         beql t8, 0, 0x80229a38   // unlikely
         t8 = , unsigned  byte [v0 + 0xe8]

    loc_0x802299e0: // orphan
         unsigned , hi
         t9 = byte [a0 + 4]
         t6 = v0
         t7 = v0 + 0x54
         t1 = t9 + 1
         byte [a0 + 4] = t1
         t2 = lo
         t3 = s0 + t2
         

    loc_0x80229a04: // orphan
         t5 = [t6 + 0x90]
         t6 += 0xc
         t3 += 0xc
         [t3 - 4] = t5
         t4 = [t6 + 0x88]
         [t3 + 0] = t4
         t5 = [t6 + 0x8c]
         if                       // likely
         [t3 + 4] = t5

    loc_0x80229a28: // orphan
         t5 = [t6 + 0x90]
         v1 += 1
         [t3 + 8] = t5
         t8 = , unsigned  byte [v0 + 0xe8]

    loc_0x80229a38: // orphan
         if                       // likely
         

    loc_0x80229a40: // orphan
         unsigned , hi
         t9 = byte [a0 + 4]
         t4 = v0
         t5 = v0 + 0x54
         t1 = t9 + 1
         byte [a0 + 4] = t1
         t2 = lo
         t7 = s0 + t2
         

    loc_0x80229a64: // orphan
         t3 = [t4 + 0xe8]
         t4 += 0xc
         t7 += 0xc
         [t7 - 4] = t3
         t6 = [t4 + 0xe0]
         [t7 + 0] = t6
         t3 = [t4 + 0xe4]
         if                       // likely
         [t7 + 4] = t3

    loc_0x80229a88: // orphan
         t3 = [t4 + 0xe8]
         v1 += 1
         [t7 + 8] = t3

    loc_0x80229a94: // orphan
         if                       // unlikely
         v0 += 0xb0

    loc_0x80229a9c: // orphan
         a2 += 1
         at = , a2 < 2
         a0 += 1
         if                       // likely
         a3 += 0x210

    loc_0x80229ab0: // orphan
         at = , v1 < 0xc
         if                       // unlikely
         s2 = v1 << 2

    loc_0x80229abc: // orphan
         s2 -= v1
         s2 <<= 2
         s2 -= v1
         s2 <<= 3
         s3 = s0 + s2
         s3 += 8

    loc_0x80229ad4: // orphan
         a0 = s3
         call 0x80075630          // "&R" // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = s1
         s2 += 0x58
         if                       // likely
         s3 += 0x58

    loc_0x80229aec: // orphan
         s6 += 0x428
         at = , s6 < 0x850
         s7 += 2
         if                       // likely
         s0 += 0x428

    loc_0x80229b00: // orphan
         halfword [fp + 0x12] = 0
         s6 = 0
         v0 = fp
         a0 = 0 + 1
         v1 = 0 + 0x850

    loc_0x80229b14: // orphan
         t8 = halfword [v0 + 0xb0]
         s6 += 0x428
         at = , t8 < 2
         if                       // unlikely
         

    loc_0x80229b28: // orphan
         halfword [fp + 0x12] = a0

    loc_0x80229b2c: // orphan
         if                       // unlikely
         v0 += 0x428

    loc_0x80229b34: // orphan
         t9 = halfword [fp + 0x12]
         a1 = 0 + 0xc
         a2 = 0 + 0x76
         if                       // likely
         a3 = 0 + 0x4e

    loc_0x80229b48: // orphan
         a1 = 0 + 0x18
         a2 = 0 + 0x59
         goto 0x80229b58
         a3 = 0 + 0x31

    loc_0x80229b58: // orphan
         call 0x800437b4          // 0x800437b4(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x5c]
         [fp + 4] = v0
         t1 = , unsigned  halfword [v0 + 0]
         a0 = 0
         t2 = t1 | 4
         call 0x8004ba70          // 0x8004ba70(0x0, 0x0, 0x0, 0x0)
         halfword [v0 + 0] = t2
         [fp + 8] = v0
         a0 = fp
         call 0x82610c84          // 0x82610c84(0x178000, 0x0, 0x0, 0x0)
         a1 = 0
         ra = [sp + 0x44]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]
         s7 = [sp + 0x3c]
         fp = [sp + 0x40]
         ret
         sp += 0x60

    loc_0x80229f98: // orphan
         [sp + 0x30] = s6
         [sp + 0x2c] = s5
         [sp + 0x28] = s4
         [sp + 0x24] = s3
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         s2 = [a0 + 0]            // arg1
         v1 = [a0 + 0xc]          // arg1
         s0 = 0
         v0 = halfword [s2 + 0x88]
         s4 = 0 - 1
         s5 = 0 + 0xc
         t6 = v0 << 1
         t7 = a0 + t6             // arg1
         t8 = halfword [t7 + 0x18]
         s6 = 0 + 4
         s1 = s2
         t9 = t8 << 2
         t9 += t8
         t9 <<= 2
         t9 -= t8
         t9 <<= 3
         s3 = v1 + t9
         s3 += 4

    loc_0x80229ffc: // orphan
         t0 = byte [s1 + 0]
         bnel s4, t0, 0x8022a03c  // likely
         s0 += 1

    loc_0x8022a008: // orphan
         a1 = , unsigned  byte [s3 + 1]
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x0, 0x0)
         a1 -= 1
         if                       // likely
         a0 = v0

    loc_0x8022a020: // orphan
         unsigned , hi
         a2 = s5
         t1 = lo
         a1 = s2 + t1
         call 0x8007dfb0          // 0x8007dfb0(0x0, 0x0, 0x0, 0x0)
         a1 += 0x8d0

    loc_0x8022a038: // orphan
         s0 += 1

    loc_0x8022a03c: // orphan
         if                       // unlikely
         s1 += 1

    loc_0x8022a044: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x8022a0b0: // orphan
         s4 = a1
         s0 = 0
         t9 = t8 + 0x9c
         [sp + 0x60] = t9
         t0 = [a0 + 0xc]          // arg1
         s5 = 0 - 2
         s6 = 0 - 1
         t1 = t0 + 0x134
         [sp + 0x50] = t1
         t2 = [a0 + 0xc]          // arg1
         s7 = sp + 0x5c
         fp = 0 + 0xc
         t3 = t2 + 0x1cc
         [sp + 0x54] = t3
         t4 = [a0 + 0xc]          // arg1
         s1 = s3
         t5 = t4 + 0x264
         [sp + 0x58] = t5

    loc_0x8022a0f8: // orphan
         v0 = byte [s1 + 0]
         a0 = 0
         if                       // unlikely
         

    loc_0x8022a108: // orphan
         if                       // unlikely
         

    loc_0x8022a110: // orphan
         t6 = [s2 + 0]
         t7 = halfword [t6 + 0xc]
         t8 = t7 << 2
         v0 = sp + t8
         goto 0x8022a148
         v0 = [v0 + 0x50]

    loc_0x8022a128: // orphan
         goto 0x8022a148
         v0 = 0

    loc_0x8022a130: // orphan
         if                       // likely
         v0 = 0

    loc_0x8022a138: // orphan
         t9 = s0 << 2
         t0 = s7 + t9
         goto 0x8022a148
         v0 = [t0 + 0]

    loc_0x8022a148: // orphan
         if                       // likely
         

    loc_0x8022a150: // orphan
         a1 = , unsigned  byte [v0 + 1]
         a0 = 0 + 0x2a            // arg1
         call 0x8004c874          // 0x8004c874(0x2a, 0xff, 0x0, 0x0)
         a1 -= 1
         a0 = v0

    loc_0x8022a164: // orphan
         beql a0, 0, 0x8022a188   // likely
         s0 += 1

    loc_0x8022a16c: // orphan
         unsigned , hi
         a2 = fp
         t1 = lo
         a1 = s3 + t1             // arg2
         call 0x8007dfb0          // 0x8007dfb0(0x0, 0x0, 0x178000, 0x0)
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
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x70

    loc_0x8022aa50: // orphan
         a1 = 0 + 2               // arg2

    loc_0x8022aa54: // orphan
         a0 = 0
         v0 = 0
         v1 = a2

    loc_0x8022aa60: // orphan
         t6 = byte [v1 + 4]
         v0 += 1
         v1 += 1
         if                       // likely
         a0 += t6                 // arg1

    loc_0x8022aa74: // orphan
         at = , a0 < 4            // arg1
         if                       // likely
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
         call 0x800437b4          // 0x800437b4(0x0, 0x0, 0x0, 0x0)
         a2 = 0 + 0x76
         [s7 + 4] = v0
         t4 = , unsigned  halfword [v0 + 0]
         a0 = 0
         t5 = t4 | 4
         call 0x8004ba70          // 0x8004ba70(0x0, 0x0, 0x76, 0x0)
         halfword [v0 + 0] = t5
         [s7 + 8] = v0
         halfword [s7 + 0x10] = 0
         t2 = [sp + 0x40]
         bnel t2, 0, 0x8022ab1c   // unlikely
         a0 = s7

    loc_0x8022aae0: // orphan
         call 0x826058cc          // "T@" // 0x826058cc(0x0, 0x0, 0x0, 0x0)
         a0 = , unsigned  byte [fp + 7]
         bnel v0, 0, 0x8022ab1c   // unlikely
         a0 = s7

    loc_0x8022aaf0: // orphan
         call fcn.82602fe8
         a0 = s7 + 0xb0
         if                       // likely
         t3 = 0 + 1

    loc_0x8022ab00: // orphan
         halfword [s7 + 0x10] = t3
         v0 = halfword [fp + 0x8c]
         at = , v0 < 0x63
         if                       // unlikely
         t8 = v0 + 1

    loc_0x8022ab14: // orphan
         halfword [fp + 0x8c] = t8

    loc_0x8022ab18: // orphan
         a0 = s7

    loc_0x8022ab1c: // orphan
         call 0x82610c84          // 0x82610c84(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 1
         ra = [sp + 0x3c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0xa0

    loc_0x8022ab68: // orphan
         call 0x80043e70          // 0x80043e70(0x0, 0x0, 0x0, 0x0)
         a0 = [t6 + 4]
         call 0x800088dc          // 0x800088dc(0x0, 0x0, 0x0, 0x0)
         
         a0 = 0x8261 << 16
         call 0x82602710          // 0x82602710(0x82610000, 0x0, 0x0, 0x0)
         a0 = [a0 + 0x5370]
         call 0x826042a0          // 0x826042a0(0xa7e77f8d, 0x0, 0x0, 0x0)
         
         call fcn.82614bd0
         
         call 0x80008648          // 0x80008648(0xa7e77f8d, 0x0, 0x0, 0x0)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8022acac: // orphan
         call 0x8006cba0          // 0x8006cba0(0x0, 0x0, 0x0, 0x0)
         a1 = halfword [a2 + 0x8a]
         if                       // likely
         a0 = 0x8261 << 16

    loc_0x8022acbc: // orphan
         a0 += 0x63c0
         t6 = 0 + 1
         byte [a0 + 0xa] = t6
         a1 = 0x8261 << 16
         call 0x80055f6c          // 0x80055f6c(0x63c0, 0x82610000, 0x0, 0x0)
         a1 = [a1 + 0x5374]

    loc_0x8022acd4: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8022ade0: // orphan
         if                       // likely
         

    loc_0x8022ade8: // orphan
         call 0x800355e4          // 0x800355e4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x4e
         goto 0x8022ae60
         ra = [sp + 0x14]

    loc_0x8022adf8: // orphan
         call 0x800355e4          // 0x800355e4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 0x27
         goto 0x8022ae60
         ra = [sp + 0x14]

    loc_0x8022ae4c: // orphan
         at = 0 + 1
         if                       // likely
         t3 = 0 + 4

    loc_0x8022ae58: // orphan
         [sp + 0x18] = t3

    loc_0x8022ae5c: // orphan
         ra = [sp + 0x14]

    loc_0x8022ae60: // orphan
         v0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x8022aea8: // orphan
         s1 = 0 + 4
         call 0x800086a4          // 0x800086a4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2
         call 0x80007aec          // 0x80007aec(0x2, 0x0, 0x0, 0x0)
         a0 = 0 + 5
         s1 = 0 + 4

    loc_0x8022aec0: // orphan
         call 0x80064d28          // 0x80064d28(0x0, 0x0, 0x0, 0x0)
         
         call fcn.82604170
         
         call fcn.82613814
         
         call fcn.82603684
         
         call fcn.82603870
         a0 = s0
         if                       // unlikely
         s0 = v0

    loc_0x8022aef0: // orphan
         call 0x800086a4          // 0x800086a4(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2
         t9 = [sp + 0x28]
         call 0x826058cc          // "T@" // 0x826058cc(0x2, 0x0, 0x0, 0x0)
         a0 = , unsigned  byte [t9 + 7]
         bnel v0, 0, 0x8022af48   // unlikely
         ra = [sp + 0x1c]

    loc_0x8022af0c: // orphan
         v0 = , unsigned  halfword [sp + 0x26]
         at = 0 + 0x300
         if                       // unlikely
         at = 0 + 0x600

    loc_0x8022af1c: // orphan
         if                       // likely
         

    loc_0x8022af24: // orphan
         goto 0x8022af48
         ra = [sp + 0x1c]

    loc_0x8022af2c: // orphan
         call fcn.826036dc
         a0 = [sp + 0x28]
         goto 0x8022af48
         ra = [sp + 0x1c]

    loc_0x8022af3c: // orphan
         call 0x826037bc          // 0x826037bc(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x28]
         ra = [sp + 0x1c]

    loc_0x8022af44: // orphan
         call 0x826037bc          // 0x826037bc(0x0, 0x0, 0x0, 0x0)
         a0 = [sp + 0x28]
         ra = [sp + 0x1c]

    loc_0x8022af48: // orphan
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret
         sp += 0x30

    loc_0x8022af80: // orphan
         t6 = halfword [a2 + 0]
         v0 += 1
         if                       // likely
         

    loc_0x8022af90: // orphan
         ret
         v0 = a2

    loc_0x8022af98: // orphan
         if                       // unlikely
         a2 += 0x814              // arg3

    loc_0x8022afa0: // orphan
         ret
         v0 = v1

    loc_0x8022affc: // orphan
         if                       // unlikely
         t7 = v0 << 3

    loc_0x8022b004: // orphan
         t8 = a0 + t7             // arg1
         t2 = [t8 + 0x14]
         t6 = sp + 0x14
         v1 = 0
         [t6 + 0] = t2
         t9 = [t8 + 0x18]
         v0 = a1 & 1              // arg2
         if                       // likely
         [t6 + 4] = t9

    loc_0x8022b028: // orphan
         if                       // likely
         t4 = 0 + 1

    loc_0x8022b030: // orphan
         lwc1 f6, 0xc, a0         // arg1
         lwc1 f8, 8, a0           // arg1
         mtc1 t4, f4
         v0 = halfword [a0 + 0]
         mul.s f10, f6, f8
         lwc1 f18, 0x14, sp
         v0 += 1
         if                       // likely
         v0 &= 0xff

    loc_0x8022b054: // orphan
         if                       // likely
         

    loc_0x8022b05c: // orphan
         v0 -= 0x100

    loc_0x8022b060: // orphan
         cvt.s.w f0, f4
         t3 = v0 << 3
         a2 = a0 + t3             // arg3
         v1 = 0 + 1
         mul.s f16, f10, f0
         add.s f4, f16, f18
         swc1 f4, 0x14, a2        // arg3
         lwc1 f8, 8, a0           // arg1
         lwc1 f6, 0x10, a0        // arg1
         lwc1 f18, 0x18, sp
         mul.s f10, f6, f8
         
         mul.s f16, f10, f0
         add.s f4, f16, f18
         swc1 f4, 0x18, a2        // arg3
         a3 = halfword [a0 + 4]
         at = , a3 < 0x100        // arg4
         if                       // unlikely
         t5 = a3 + 1              // arg4

    loc_0x8022b0ac: // orphan
         halfword [a0 + 4] = t5   // arg1

    loc_0x8022b0b0: // orphan
         beql v1, a1, 0x8022b1cc  // likely
         t5 = halfword [a0 + 0]

    loc_0x8022b0b8: // orphan
         lwc1 f8, 0xc, a0         // arg1
         lwc1 f10, 8, a0          // arg1
         t8 = v1 + 1
         mtc1 t8, f6
         mul.s f16, f8, f10
         t7 = halfword [a0 + 0]
         lwc1 f4, 0x14, sp
         v0 = t7 + v1
         v0 += 1
         cvt.s.w f0, f6
         if                       // likely
         v0 &= 0xff

    loc_0x8022b0e8: // orphan
         if                       // likely
         

    loc_0x8022b0f0: // orphan
         v0 -= 0x100

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
         if                       // unlikely
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
         v0 &= 0xff

    loc_0x8022b16c: // orphan
         if                       // likely
         

    loc_0x8022b174: // orphan
         v0 -= 0x100

    loc_0x8022b178: // orphan
         mul.s f4, f18, f0
         t3 = v0 << 3
         a2 = a0 + t3             // arg3
         add.s f8, f4, f6
         swc1 f8, 0x14, a2        // arg3
         lwc1 f16, 8, a0          // arg1
         lwc1 f10, 0x10, a0       // arg1
         lwc1 f6, 0x18, sp
         mul.s f18, f10, f16
         
         mul.s f4, f18, f0
         add.s f8, f4, f6
         swc1 f8, 0x18, a2        // arg3
         a3 = halfword [a0 + 4]
         at = , a3 < 0x100        // arg4
         if                       // unlikely
         t4 = a3 + 1              // arg4

    loc_0x8022b1bc: // orphan
         halfword [a0 + 4] = t4   // arg1

    loc_0x8022b1c0: // orphan
         if                       // likely
         v1 = t0

    loc_0x8022b1c8: // orphan
         t5 = halfword [a0 + 0]

    loc_0x8022b1cc: // orphan
         at = 0xc420 << 16
         mtc1 at, f10
         t7 = t5 + a1             // arg2
         if                       // likely
         t6 = t7 & 0xff

    loc_0x8022b1e0: // orphan
         if                       // likely
         

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
         ret
         sp += 0x20

    loc_0x802495cc: // orphan
         if                       // unlikely
         

    loc_0x802495d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802495e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802495ec: // orphan
         if                       // unlikely
         

    loc_0x802495f4: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80249614: // orphan
         if                       // unlikely
         

    loc_0x8024961c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80249630: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80249644: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80249650: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8024965c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80249668: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80249674: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80249680: // orphan
         if                       // unlikely

}

*/
