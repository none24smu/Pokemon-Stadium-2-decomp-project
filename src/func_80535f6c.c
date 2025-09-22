/*
 * Function: 0x80535f6c
 * ROM Offset: 0x00436f6c
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80535f6c (int esi, int edx) {
// do {
if            // likely
// } while (?);
}
return eax;
// do {
if            // unlikely
// } while (?);
}
return eax;
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
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
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
}

/*
// Full analysis output
int fcn.80535f6c (int esi, int edx) {
    loc_0x8051a45c:
        s1 = , unsigned  byte [s6 + 2]
        a1 = fp
        call 0x842016bc // 0x842016bc(0x0, 0x178000, 0x0, 0x0)
        a0 = s1
        t3 = , unsigned  byte [sp + 0x4e]
        v0 = 0
         // do {
    loc_0x8051a474:
        if            // likely
        0x8051a478
         // } while (?);
        }
        return eax;
    loc_0x8051a47c:
        call 0x8420168c // 0x8420168c(0x0, 0x0, 0x0, 0x0)
        a0 = fp
        goto 0x8051a48c
        v0 = [sp + 0x58]
         // do {
    loc_0x8051a48c:
        t4 = [sp + 0x6c]
        a0 = v0 & 0xffff // arg1
        call 0x842000ec // "0R" // 0x842000ec(0x0, 0x0, 0x0, 0x0)
        a1 = , unsigned  halfword [t4 + 0x26]
        s2 = v0 & 0xff
        call 0x84200970 // 0x84200970(0x0, 0xffff, 0x0, 0x0)
        a0 = fp
        call 0x84203440 // 0x84203440(0x178000, 0xffff, 0x0, 0x0)
        s3 = [sp + 0x5c]
        v1 = , unsigned  byte [sp + 0x50]
        t7 = , unsigned  byte [s7 + 8]
        t0 = , unsigned  byte [s7 + 0xa]
        unsigned , hi
        a0 = s1 & 0xff
        t5 = lo
        0x8051a4c8
        0x8051a4cc
        unsigned , hi
        t6 = lo
        0x8051a4d8
        0x8051a4dc
        unsigned , hi
        t8 = lo
        0x8051a4e8
        0x8051a4ec
        div 0, t8, s4
        s0 = lo
        if            // unlikely
        0x8051a4fc
         // } while (?);
        }
        return eax;
    loc_0x8051a500:
        break 7
         // (break)
    loc_0x8051a504: // orphan
             at = 0 - 1
             if                       // likely
             at = 0x8000 << 16

    loc_0x8051a510: // orphan
         if                       // unlikely
         

    loc_0x8051a518: // orphan
         break 6

    loc_0x8051a51c: // orphan
         unsigned , hi
         t9 = lo
         
         
         unsigned , hi
         t1 = lo
         
         
         div 0, t1, s4
         t2 = lo
         s0 += t2
         if                       // unlikely
         

    loc_0x8051a550: // orphan
         break 7

    loc_0x8051a554: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x8051a560: // orphan
         if                       // likely
         

    loc_0x8051a568: // orphan
         break 6

    loc_0x8051a56c: // orphan
         call 0x80062d20          // 0x80062d20(0x0, 0x0, 0x0, 0x0)
         
         at = 0 + 7
         if                       // likely
         s1 = , unsigned  byte [sp + 0x8a]

    loc_0x8051a580: // orphan
         goto 0x8051a588
         s1 = 0 + 0xff

    loc_0x8051a588: // orphan
         call 0x8420344c          // 0x8420344c(0x0, 0x0, 0x0, 0x0)
         
         unsigned , hi
         t4 = , unsigned  byte [s7 + 9]
         a0 = , unsigned  byte [sp + 0x4c]
         t3 = lo
         
         
         unsigned , hi
         t5 = lo
         
         
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, s4
         t7 = lo
         s0 -= t7
         if                       // unlikely
         

    loc_0x8051a5dc: // orphan
         break 7

    loc_0x8051a5e0: // orphan
         at = 0 - 1
         if                       // likely
         at = 0x8000 << 16

    loc_0x8051a5ec: // orphan
         if                       // unlikely
         

    loc_0x8051a5f4: // orphan
         break 6

    loc_0x8051a5f8: // orphan
         call 0x80062ce0          // 0x80062ce0(0x0, 0x0, 0x0, 0x0)
         
         a0 = v0
         call 0x842034b0          // 0x842034b0(0x0, 0x0, 0x0, 0x0)
         a1 = 0
         v1 = [sp + 0x78]
         s5 += 1
         at = 0 + 4
         v1 += s0
         [sp + 0x78] = v1
         if                       // likely
         s6 += 1

    loc_0x8051a628: // orphan
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
         sp += 0x90
         ret
         v0 = v1

    loc_0x80535f6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535f78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535f84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535f90: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535f9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535fe4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80535ff0: // orphan
         if                       // unlikely
         tge s0, 0, 0x42

    loc_0x80535ff8: // orphan
         teq s0, 0, 0x42

    loc_0x80538994: // orphan
         at = , unsigned  , t5 < -0x3ff1
         ld at, 0xd0d, s7
         s0 = , unsigned  , t1 < -0x7721
         ra = , s3 < 0x68f0
         if                       // likely

    loc_0x80538aa0: // orphan
         swl s0, 0x1f1f, s2
         lld ra, 0x203, a3
         if                       // unlikely
         if                       // likely

    loc_0x80539138: // orphan
         goto 0x8ffeeffc

    loc_0x80539534: // orphan
         if                       // likely

    loc_0x805397ec: // orphan
         sd t4, -0x1021, k0

    loc_0x80539c10: // orphan
         if                       // unlikely
         pref 0x10, -0x45cf, t9

    loc_0x80539c18: // orphan
         k1 = t9 ^ 0x344f

    loc_0x80539d0c: // orphan
         sd ra, 0x3e3f, sp
         lwu t7, 0x363f, k0

    loc_0x80539e44: // orphan
         ra = s5 | 0x3c8f
         pref 0xf, 0x333f, ra

    loc_0x80540f50: // orphan
         call 0x85fc2cfc          // 0x85fc2cfc(0x0, 0x0, 0x0, 0x0)
         bnz.w w31, 0x8053fc54    // unlikely

    loc_0x80540f5c: // orphan
         bbit032 t1, 0x10, 0x8054711c

}

*/
