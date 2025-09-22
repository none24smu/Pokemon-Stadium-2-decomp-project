/*
 * Function: 0x801e44a4
 * ROM Offset: 0x000e54a4
 * Category: general
 * Auto-decompiled
 */

// Decompiled C code
int fcn.801e44a4 (int esi, int edx) {
if            // unlikely
if            // likely
// do {
if            // likely
// } while (?);
// } while (?);
// } while (?);
}
return eax;
if            // unlikely
if            // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
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
}

/*
// Full analysis output
int fcn.801e44a4 (int esi, int edx) {
    loc_0x801d15c4:
        at = 0 + 0x100
        a1 = [sp + 0x28]
        a2 = [sp + 0x30]
        if            // unlikely
        a3 = [sp + 0x20]
            
    loc_0x801d163c:
        t2 = halfword [a1 + 8]
        t5 = 0x8008 << 16
        t3 = t2 - 1
        halfword [a1 + 8] = t3 // arg2
        t4 = halfword [a1 + 8]
        if            // likely
        0x801d1654
            
    loc_0x801d165c:
        t5 = [t5 + 0x7200]
        goto 0x801d16dc
        v0 = , unsigned  halfword [t5 + 0xc]
         // do {
    loc_0x801d16dc:
        t9 = v0 & 0x8000
        if            // likely
        t2 = v0 & 0x4000
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x801d15d8
    loc_0x801d15e4:
        at = 0 + 0x400
        if            // unlikely
        t8 = 0x8008 << 16
            
    loc_0x801d16a4:
        t2 = halfword [a1 + 8]
        t7 = 0 + 9
        v0 = a1 + t2  // arg2
        t3 = byte [v0 + 0xc]
        t4 = t3 - 1
        byte [v0 + 0xc] = t4
        t5 = halfword [a1 + 8]
        v0 = a1 + t5  // arg2
        t6 = byte [v0 + 0xc]
        if            // likely
        0x801d16cc
            
    loc_0x801d16d4:
        t8 = [t8 + 0x7200]
        v0 = , unsigned  halfword [t8 + 0xc]
    loc_0x801d15f0: // orphan
             at = 0 + 0x800
             if                       // unlikely
             t1 = 0x8008 << 16

    loc_0x801d15fc: // orphan
         t7 = 0x8008 << 16
         t7 = [t7 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t7 + 0xc]

    loc_0x801d160c: // orphan
         t8 = halfword [a1 + 8]
         v0 = , unsigned  halfword [a1 + 0xa]
         t9 = t8 + 1
         halfword [a1 + 8] = t9   // arg2
         t0 = halfword [a1 + 8]
         at = , v0 < t0
         if                       // likely
         

    loc_0x801d162c: // orphan
         halfword [a1 + 8] = v0   // arg2

    loc_0x801d1630: // orphan
         t1 = [t1 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t1 + 0xc]

    loc_0x801d1668: // orphan
         t6 = halfword [a1 + 8]
         v0 = a1 + t6             // arg2
         t7 = byte [v0 + 0xc]
         t8 = t7 + 1
         byte [v0 + 0xc] = t8
         t9 = halfword [a1 + 8]
         v0 = a1 + t9             // arg2
         t0 = byte [v0 + 0xc]
         at = , t0 < 0xa
         if                       // unlikely
         

    loc_0x801d1694: // orphan
         byte [v0 + 0xc] = 0

    loc_0x801d1698: // orphan
         t1 = [t1 + 0x7200]
         goto 0x801d16dc
         v0 = , unsigned  halfword [t1 + 0xc]

    loc_0x801d16d0: // orphan
         byte [v0 + 0xc] = t7

    loc_0x801d16e8: // orphan
         v0 = , unsigned  halfword [a1 + 0xa]
         a0 = 0
         a3 = 0 + 1               // arg4
         if                       // unlikely
         v1 = a1 + v0             // arg2

    loc_0x801d16fc: // orphan
         unsigned , hi
         t0 = byte [v1 + 0xc]
         v0 -= 1
         v1 -= 1
         t1 = lo
         a0 = t0 + t1             // arg1
         if                       // unlikely
         

    loc_0x801d171c: // orphan
         goto 0x801d1730
         [a1 + 0x14] = a0         // arg2

    loc_0x801d1724: // orphan
         beql t2, 0, 0x801d1734   // likely
         ra = [sp + 0x14]

    loc_0x801d172c: // orphan
         a3 = 0 + 2               // arg4

    loc_0x801d1730: // orphan
         ra = [sp + 0x14]

    loc_0x801d1734: // orphan
         sp += 0x28
         v0 = a3
         ret
         

    loc_0x801d17b0: // orphan
         s0 = , unsigned  halfword [s2 + 0xa]
         s3 = 0 + 0x14
         if                       // unlikely
         s1 = s2 + s0

    loc_0x801d17c0: // orphan
         t9 = , unsigned  halfword [s2 + 0xa]
         t8 = , unsigned  halfword [s2 + 0]
         a2 = byte [s1 + 0xc]
         t0 = t9 - s0
         unsigned , hi
         a1 = , unsigned  halfword [s2 + 2]
         a2 += 0x30               // arg3
         t1 = lo
         a0 = t8 + t1             // arg1
         call 0x80049628          // 0x80049628(0xffff, 0xffff, 0x30, 0x0)
         
         s0 -= 1
         if                       // unlikely
         s1 -= 1

    loc_0x801d17f8: // orphan
         call 0x800499ec          // 0x800499ec(0x0, 0x0, 0x0, 0x0)
         s3 = 0 + 0x14
         t2 = , unsigned  halfword [s2 + 0xa]
         t3 = halfword [s2 + 8]
         t6 = , unsigned  halfword [s2 + 0]
         a1 = , unsigned  halfword [s2 + 2]
         t4 = t2 - t3
         unsigned , hi
         a2 = s3
         a1 += 0x12
         t5 = lo
         a0 = t6 + t5
         call 0x8fb00020          // 0x8fb00020(0x14ffeb, 0x10011, 0x14, 0x0)
         
         ra = [sp + 0x2c]
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x801d1a60: // orphan
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x1e0

    loc_0x801d1a8c: // orphan
         [sp + 0x34] = s5
         [sp + 0x30] = s4
         [sp + 0x2c] = s3
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         [sp + 0x20] = s0
         [sp + 0x380] = a0
         s7 = 0
         call 0x80055a74          // 0x80055a74(0x0, 0x0, 0x0, 0x0)
         a0 = [a0 + 0x34]
         t7 = [sp + 0x380]
         [sp + 0x60] = 0
         s6 = sp + 0x368
         t8 = t7 + 0x4c
         [sp + 0x58] = t8
         s5 = 0 + 0x210
         s4 = 0 + 0x3c
         s3 = sp + 0x1f0
         [sp + 0x5c] = t7
         [sp + 0x54] = t7

    loc_0x801d1adc: // orphan
         t9 = [sp + 0x5c]
         s2 = 0
         fp = [sp + 0x58]
         t0 = byte [t9 + 0x4c]
         a0 = 0 + 0x2a
         bnel t0, 0, 0x801d1b08   // likely
         a0 = s3

    loc_0x801d1af8: // orphan
         call 0x8004c874          // 0x8004c874(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x56
         fp = v0
         a0 = s3

    loc_0x801d1b08: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x180
         s1 = 0
         s0 = [sp + 0x54]

    loc_0x801d1b18: // orphan
         t1 = , unsigned  byte [s0 + 0x5c]
         beql t1, 0, 0x801d1b44   // unlikely
         s1 += 0x58

    loc_0x801d1b24: // orphan
         unsigned , hi
         s2 += 1
         a0 = s0 + 0x5c
         t2 = lo
         a1 = s3 + t2
         call 0x80051864          // "&1" // 0x80051864(0x5c, 0x0, 0x0, 0x0)
         a1 += 0x10
         s1 += 0x58

    loc_0x801d1b44: // orphan
         if                       // unlikely
         s0 += 0x58

    loc_0x801d1b4c: // orphan
         if                       // likely
         at = , s2 < 6

    loc_0x801d1b54: // orphan
         if                       // likely
         t3 = [sp + 0x380]

    loc_0x801d1b5c: // orphan
         t4 = [t3 + 0x34]
         at = , s2 < 6
         t5 = t4 << 2
         t6 = t3 + t5
         t8 = [t6 + 0x18]
         bnel t8, 0, 0x801d1bec   // likely
         t1 = [sp + 0x60]

    loc_0x801d1b78: // orphan
         if                       // likely
         t7 = s2 << 4

    loc_0x801d1b80: // orphan
         t7 -= s2
         t7 <<= 2
         s0 = s3 + t7
         s0 += 0x10
         a0 = s0

    loc_0x801d1b94: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = s4
         s0 += 0x3c
         at = , unsigned  , s0 < s6
         bnel at, 0, 0x801d1b94   // unlikely
         a0 = s0

    loc_0x801d1bac: // orphan
         a0 = s3
         call 0x80055b14          // 0x80055b14(0x0, 0x0, 0x0, 0x0)
         a1 = s7
         t9 = [sp + 0x5c]
         a0 = 0 + 0x10
         a1 = s7
         t0 = , unsigned  halfword [t9 + 0x58]
         a2 = fp
         a3 = fp
         call 0x800535d4          // 0x800535d4(0x10, 0x0, 0x178000, 0x178000)
         [sp + 0x10] = t0
         a0 = 0 + 0x10
         call 0x80051d64          // 0x80051d64(0x10, 0x0, 0x178000, 0x178000)
         a1 = s7
         s7 += 1

    loc_0x801d1be8: // orphan
         t1 = [sp + 0x60]

    loc_0x801d1bec: // orphan
         t4 = [sp + 0x5c]
         t5 = [sp + 0x58]
         t8 = [sp + 0x54]
         t2 = t1 + 0x220
         at = , t2 < 0x1540
         t3 = t4 + 0x220
         t6 = t5 + 0x220
         t7 = t8 + 0x220
         [sp + 0x54] = t7
         [sp + 0x58] = t6
         [sp + 0x5c] = t3
         if                       // unlikely
         [sp + 0x60] = t2

    loc_0x801d1c20: // orphan
         at = , s7 < 0xa
         if                       // unlikely
         s0 = sp + 0x64

    loc_0x801d1c2c: // orphan
         a0 = s0

    loc_0x801d1c30: // orphan
         call 0x80075630          // 0x80075630(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x180
         a0 = s0
         call 0x80055b14          // 0x80055b14(0x0, 0x180, 0x0, 0x0)
         a1 = s7
         a0 = 0 + 0x10
         call 0x80051d64          // 0x80051d64(0x10, 0x0, 0x0, 0x0)
         a1 = s7
         s7 += 1
         at = , s7 < 0xa
         bnel at, 0, 0x801d1c30   // likely
         a0 = s0

    loc_0x801d1c60: // orphan
         call 0x80055028          // 0x80055028(0x0, 0x0, 0x0, 0x0)
         
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
         sp += 0x380

    loc_0x801d1db4: // orphan
         t5 = t4 << 3
         t1 <<= 3
         t0 = a0 + t9             // arg1
         t5 += t4
         t2 = t0 + t1
         t5 <<= 2
         t3 = t2 + 0x5c
         t7 = t5 + t6
         [a0 + 0x48] = t3         // arg1
         ret
         [a0 + 0x44] = t7         // arg1

    loc_0x801d1f30: // orphan
         s0 = a0
         t7 = v0 & 0x8000
         if                       // likely
         t1 = v0 & 0x4000

    loc_0x801d1f40: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 2
         call 0x8fb02608          // 0x8fb02608(0x2, 0x0, 0x0, 0x0)
         a0 = s0
         if                       // likely
         t8 = 0 + 1

    loc_0x801d1f58: // orphan
         goto 0x801d20e4
         [s0 + 0x40] = t8

    loc_0x801d1f60: // orphan
         t9 = [s0 + 0x44]
         at = 0 + 2
         t0 = 0 + 2
         v0 = , unsigned  halfword [t9 + 0]
         if                       // unlikely
         

    loc_0x801d1f78: // orphan
         bnel v0, at, 0x801d20e8  // unlikely
         ra = [sp + 0x1c]

    loc_0x801d1f80: // orphan
         call 0x8fb021f8          // 0x8fb021f8(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         call 0x8fb02108          // 0x8fb02108(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         [s0 + 0x3c] = 0
         [s0 + 0x38] = 0
         call 0x8fb024bc          // 0x8fb024bc(0x0, 0x0, 0x0, 0x0)
         a0 = s0
         goto 0x801d20e8
         ra = [sp + 0x1c]

    loc_0x801d1fa8: // orphan
         goto 0x801d20e4
         [s0 + 0x40] = t0

    loc_0x801d1fb0: // orphan
         if                       // unlikely
         at = 0 + 0x800

    loc_0x801d1fb8: // orphan
         call 0x800226c0          // "$\n" // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 3
         t2 = 0 + 2
         goto 0x801d20e4
         [s0 + 0x30] = t2

    loc_0x801d1fcc: // orphan
         bnel v0, at, 0x801d2004  // unlikely
         at = 0 + 0x400

    loc_0x801d1fd4: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t3 = [s0 + 0x30]
         t5 = 0x8fb0 << 16
         t4 = t3 << 3
         t4 += t3
         t4 <<= 2
         t5 += t4
         t5 = , unsigned  byte [t5 + 0x34ae]
         goto 0x801d20e4
         [s0 + 0x30] = t5

    loc_0x801d2004: // orphan
         bnel v0, at, 0x801d203c  // unlikely
         at = 0 + 0x200

    loc_0x801d200c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t6 = [s0 + 0x30]
         t8 = 0x8fb0 << 16
         t7 = t6 << 3
         t7 += t6
         t7 <<= 2
         t8 += t7
         t8 = , unsigned  byte [t8 + 0x34af]
         goto 0x801d20e4
         [s0 + 0x30] = t8

    loc_0x801d203c: // orphan
         bnel v0, at, 0x801d2074  // unlikely
         at = 0 + 0x100

    loc_0x801d2044: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t9 = [s0 + 0x30]
         t1 = 0x8fb0 << 16
         t0 = t9 << 3
         t0 += t9
         t0 <<= 2
         t1 += t0
         t1 = , unsigned  byte [t1 + 0x34b0]
         goto 0x801d20e4
         [s0 + 0x30] = t1

    loc_0x801d2074: // orphan
         if                       // unlikely
         t5 = v0 & 8

    loc_0x801d207c: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t2 = [s0 + 0x30]
         t4 = 0x8fb0 << 16
         t3 = t2 << 3
         t3 += t2
         t3 <<= 2
         t4 += t3
         t4 = , unsigned  byte [t4 + 0x34b1]
         goto 0x801d20e4
         [s0 + 0x30] = t4

    loc_0x801d20a8: // orphan
         if                       // likely
         t8 = v0 & 4

    loc_0x801d20b0: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t6 = [s0 + 0x3c]
         t7 = t6 - 1
         goto 0x801d20e4
         [s0 + 0x3c] = t7

    loc_0x801d20c8: // orphan
         beql t8, 0, 0x801d20e8   // likely
         ra = [sp + 0x1c]

    loc_0x801d20d0: // orphan
         call 0x800226c0          // 0x800226c0(0x0, 0x0, 0x0, 0x0)
         a0 = 0 + 1
         t9 = [s0 + 0x3c]
         t0 = t9 + 1
         [s0 + 0x3c] = t0

    loc_0x801d20e4: // orphan
         ra = [sp + 0x1c]

    loc_0x801d20e8: // orphan
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x801d2840: // orphan
         t0 = t7 + t9
         a3 = , unsigned  halfword [t0 - 0x10]
         a2 += 0x3af0             // arg3
         a0 = , unsigned  halfword [s0 + 4]
         call 0x800495bc          // 0x800495bc(0xffff, 0x0, 0x3af0, 0xffff)
         a1 = , unsigned  halfword [s0 + 6]
         goto 0x801d29d4
         ra = [sp + 0x24]

    loc_0x801d29d4: // orphan
         s0 = [sp + 0x20]
         sp += 0x50
         ret
         

    loc_0x801e44a4: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44c4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e44f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4504: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801e4524: // orphan
         

}

*/
