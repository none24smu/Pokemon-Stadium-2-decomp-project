/*
 * Function: 0x8021f4ac
 * ROM Offset: 0x001204ac
 * Category: general
 * Auto-decompiled
 */

// Decompiled C code
int fcn.8021f4ac (int esi, int edx) {
if            // likely
if            // unlikely
// } else {
// } else {
// } else {
}
return eax;
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
int fcn.8021f4ac (int esi, int edx) {
    loc_0x80214f04:
        if            // likely
        0x80214f08
            
    loc_0x80214f1c:
        if            // unlikely
        0x80214f20
            
    loc_0x80214f38:
        beql v1, 0, 0x80214f58 // likely
        t8 = , unsigned  halfword [a1 + 2]
            
    loc_0x80214f58:
        t9 = t8 & 0xfffd
        halfword [a1 + 2] = t9 // arg2
        ret
        v0 = 0
         // } else {
    loc_0x80214f40:
        t6 = , unsigned  halfword [a1 + 2]
        v0 = 0
        t7 = t6 | 2
        ret
        halfword [a1 + 2] = t7 // arg2
         // } else {
         // } else {
        }
        return eax;
        goto loc_0x80214f0c
    loc_0x80214f14:
        goto 0x80214f38
        0x80214f18
    loc_0x80214f2c: // orphan
             if                       // unlikely
             

    loc_0x80214f34: // orphan
         v1 = 0 + 1

    loc_0x80214fa0: // orphan
         if                       // likely
         t4 = 0x8221 << 16

    loc_0x80214fa8: // orphan
         goto 0x802150b4
         ra = [sp + 0x14]

    loc_0x80214fe0: // orphan
         t4 = [t4 - 0x13c8]
         t6 = 0 + 1
         t7 = t6 << v1
         if                       // likely
         t5 = v0 & 0xff

    loc_0x80214ff4: // orphan
         t8 = t5 & t7
         t9 = , unsigned  , 0 < t8
         if                       // likely
         a2 = 0 + 1               // arg3

    loc_0x80215004: // orphan
         t0 = 0x8221 << 16
         t0 = [t0 - 0x25f8]
         t6 = 0x8221 << 16
         t6 += 0x678
         t1 = [t0 + 0x20]
         v0 = v1 << 2
         t5 = v0 + t6
         t2 = halfword [t1 + 2]
         t9 = 0x8221 << 16
         bnel v1, t2, 0x80215054  // likely
         t8 = [t5 + 0]

    loc_0x80215030: // orphan
         v1 = 0 + 0xff
         byte [a1 + 0x28] = v1    // arg2
         byte [a1 + 0x29] = v1    // arg2
         byte [a1 + 0x2a] = 0     // arg2
         byte [a1 + 0x2b] = v1    // arg2
         t4 = [a1 + 0x28]         // arg2
         goto 0x8021508c
         [a1 + 0x2c] = t4         // arg2

    loc_0x80215054: // orphan
         t9 += 0x680
         t0 = v0 + t9
         [a1 + 0x28] = t8         // arg2
         t2 = [t0 + 0]
         goto 0x8021508c
         [a1 + 0x2c] = t2         // arg2

    loc_0x8021506c: // orphan
         v0 = 0 + 0x80
         v1 = 0 + 0xff
         byte [a1 + 0x28] = v0    // arg2
         byte [a1 + 0x29] = v0    // arg2
         byte [a1 + 0x2a] = v0    // arg2
         byte [a1 + 0x2b] = v1    // arg2
         t4 = [a1 + 0x28]         // arg2
         [a1 + 0x2c] = t4         // arg2

    loc_0x8021508c: // orphan
         beql a2, 0, 0x802150a8   // likely
         t7 = , unsigned  halfword [a1 + 2]

    loc_0x80215094: // orphan
         t6 = , unsigned  halfword [a1 + 2]
         t5 = t6 | 2
         goto 0x802150b0
         halfword [a1 + 2] = t5   // arg2

    loc_0x802150a8: // orphan
         t8 = t7 & 0xfffd
         halfword [a1 + 2] = t8   // arg2

    loc_0x802150b0: // orphan
         ra = [sp + 0x14]

    loc_0x802150b4: // orphan
         sp += 0x28
         v0 = 0
         ret
         

    loc_0x8021f4ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8021f4b8: // orphan
         if                       // unlikely
         if                       // unlikely

}

*/
