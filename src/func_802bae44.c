/*
 * Function: 0x802bae44
 * ROM Offset: 0x001bbe44
 * Category: general
 * Auto-decompiled
 */

// Decompiled C code
int fcn.802bae44 (int esi, int edx) {
// do {
if            // likely
// } while (?);
// } while (?);
}
return eax;
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
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
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
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
}

/*
// Full analysis output
int fcn.802bae44 (int esi, int edx) {
    loc_0x8029b004:
        t2 = [s4 + 0]
        s1 = s0 << 2
        a0 = 0 + 8    // arg1
        t4 = t2 + s1
        a2 = [t4 + 0x58]
        call 0x80049290 // 0x80049290(0x8, 0x0, -1, 0x0)
        a1 = 0 + 1
        v1 = [s4 + 0]
        a1 = 0 + 1
        a0 = , unsigned  halfword [v1 + 0x60]
        t3 = v1 + s1
        at = , v0 < a0
        beql at, 0, 0x8029b048 // unlikely
        a0 = 0 + 8
            
    loc_0x8029b048:
        call 0x80049290 // 0x80049290(0x0, 0x0, 0x0, 0x0)
        a2 = [t3 + 0x58]
        t5 = [s4 + 0]
        halfword [t5 + 0x60] = v0
         // do {
    loc_0x8029b058:
        s2 += 1
        s2 &= 0xff
        at = , s2 < 2
        if            // likely
        s0 = s2
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x8029b06c: // orphan
             ra = [sp + 0x6c]
             s0 = [sp + 0x48]
             s1 = [sp + 0x4c]
             s2 = [sp + 0x50]
             s3 = [sp + 0x54]
             s4 = [sp + 0x58]
             s5 = [sp + 0x5c]
             s6 = [sp + 0x60]
             s7 = [sp + 0x64]
             fp = [sp + 0x68]
             ret
             sp += 0x98

    loc_0x802bae44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae50: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae68: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae84: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802bae98: // orphan
         if                       // unlikely
         

    loc_0x802baea0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802baeb8: // orphan
         
         
         if                       // unlikely
         

    loc_0x802baec8: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x802baee0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x802baeec: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely

    loc_0x802d9dcc: // orphan
         s5 = [sp + 0x2c]
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret
         sp += 0x48

    loc_0x802da138: // orphan
         t7 = , unsigned  byte [a0 + 0] // arg1
         beql t7, 0, 0x802da16c   // unlikely
         v0 += 1

    loc_0x802da144: // orphan
         t8 = , unsigned  byte [a3 + 3] // arg4
         t0 = a1 + v0             // arg2
         v1 += 2
         t9 = t8 + 1

    loc_0x802da154: // orphan
         byte [a3 + 3] = t9       // arg4
         t1 = , unsigned  byte [t0 + 0]
         byte [v1 - 2] = t1
         t2 = , unsigned  byte [a0 + 0] // arg1
         byte [v1 - 1] = t2
         v0 += 1

    loc_0x802da16c: // orphan
         at = , unsigned  , v0 < 0x39
         if                       // likely
         a0 += 1                  // arg1

    loc_0x802da178: // orphan
         a1 = , unsigned  byte [a3 + 7] // arg4
         t3 = , unsigned  byte [a3 + 3] // arg4
         v0 = 0
         a0 = s0 + 0x64           // arg1
         t4 = t3 + a1             // arg2
         byte [a3 + 8] = t4       // arg4
         t5 = , unsigned  byte [s0 + 0x63]
         t6 = t4 & 0xff
         t7 = t6 << 1
         v1 = a3 + t7             // arg4
         t8 = t5 & 0xff
         v1 += 9
         if                       // unlikely
         byte [a3 + 4] = t5       // arg4

    loc_0x802da1b0: // orphan
         a1 = 0 + 1               // arg2
         t9 = , unsigned  byte [a0 + 0] // arg1

    loc_0x802da1b8: // orphan
         byte [v1 + 1] = a1
         v0 += 1
         byte [v1 + 0] = t9
         t0 = , unsigned  byte [a3 + 4] // arg4
         a0 += 1                  // arg1
         v1 += 2
         at = , unsigned  , v0 < t0
         bnel at, 0, 0x802da1b8   // likely
         t9 = , unsigned  byte [a0 + 0] // arg1

    loc_0x802da1dc: // orphan
         t2 = , unsigned  byte [a3 + 1] // arg4
         t5 = , unsigned  byte [a3 + 2] // arg4
         t8 = , unsigned  byte [a3 + 3] // arg4
         t4 = 0 + t2
         t1 = , unsigned  byte [a3 + 4] // arg4
         byte [a3 + 0] = 0        // arg4
         t7 = t4 + t5
         byte [a3 + 0] = t4       // arg4
         t0 = t7 + t8
         byte [a3 + 0] = t7       // arg4
         byte [a3 + 0] = t0       // arg4
         t2 = t0 + t1
         byte [a3 + 0] = t2       // arg4
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x802da430: // orphan
         s2 += 0x1c60
         [s2 + 0] = v0
         a0 = s0
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         a1 = 0 + 0x114
         s3 = 0x88a0 << 16
         s3 += 0x1c64
         [s3 + 0] = v0
         a0 = s0
         v1 = s1
         a1 = s1 << 1
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x38] = s1
         t6 = [s2 + 0]
         a0 = s0
         [t6 + 0x9c] = v0
         a1 = [sp + 0x38]
         a1 <<= 1
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         a1 += 2
         t7 = [s3 + 0]
         a0 = s0
         [t7 + 0xf0] = v0
         v1 = , unsigned  halfword [sp + 0x3c]
         s1 = v1 << 1
         a1 = s1
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         [sp + 0x34] = v1
         t8 = [s2 + 0]
         a0 = s0
         [t8 + 0xa4] = v0
         a1 = [sp + 0x34]
         a1 <<= 1
         a1 += 2
         call 0x80002eb8          // 0x80002eb8(0x0, 0x2, 0x0, 0x0)
         [sp + 0x2c] = a1
         t9 = [s3 + 0]
         a0 = s0
         a1 = s1
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         [t9 + 0xf8] = v0
         t0 = [s2 + 0]
         a0 = s0
         [t0 + 0xac] = v0
         call 0x80002eb8          // 0x80002eb8(0x0, 0x0, 0x0, 0x0)
         a1 = [sp + 0x2c]
         t1 = [s3 + 0]
         s1 = 0x8800 << 16
         s1 += 0x6868
         [t1 + 0x100] = v0
         a1 = byte [s1 + 0]
         a0 = 0 + 0x23
         a2 = 0
         call 0x8006218c          // 0x8006218c(0x23, 0xff, 0x0, 0x0)
         a3 = 0
         s0 = v0
         a0 = [s2 + 0]
         a1 = 0 + 1
         call 0x80062390          // 0x80062390(0x0, 0x1, 0x0, 0x0)
         a2 = v0
         call 0x8006229c          // 0x8006229c(0x0, 0x1, 0x0, 0x0)
         a0 = s0
         a0 = [s2 + 0]
         call 0x88a00978          // 0x88a00978(0x0, 0x1, 0x0, 0x0)
         a1 = [s3 + 0]

    loc_0x802da534: // orphan
         a0 = 0 + 0x22
         a1 = byte [s1 + 0]
         a2 = 0
         call 0x8006218c          // 0x8006218c(0x22, 0xfe, 0x0, 0x0)
         a3 = 0
         t2 = [s2 + 0]
         s0 = v0
         a1 = [sp + 0x38]
         a2 = v0
         call 0x80062390          // 0x80062390(0x22, 0x0, 0x0, 0x0)
         a0 = [t2 + 0x9c]
         t3 = [s2 + 0]
         a0 = s0
         call 0x8006229c          // 0x8006229c(0x0, 0x0, 0x0, 0x0)
         byte [t3 + 0x98] = v0
         v1 = [s2 + 0]
         t4 = [s3 + 0]
         a2 = , unsigned  byte [v1 + 0x98]
         a0 = [v1 + 0x9c]
         a1 = [t4 + 0xf0]
         call 0x8007dfb0          // 0x8007dfb0(-1, -1, 0x0, 0x0)
         a2 <<= 1
         t5 = [s2 + 0]
         t7 = [s3 + 0]
         a0 = 0 + 0x12
         t6 = , unsigned  byte [t5 + 0x98]
         a1 = 0
         a2 = 0
         a3 = 0
         call 0x8006218c          // 0x8006218c(0x12, 0x0, 0x0, 0x0)
         byte [t7 + 0xef] = t6
         t8 = [s2 + 0]
         s0 = v0
         a1 = [sp + 0x34]

    loc_0x802da5bc: // orphan
         a2 = v0
         call 0x80062390          // 0x80062390(0x0, 0x0, 0x0, 0x0)
         a0 = [t8 + 0xa4]
         t9 = [s2 + 0]
         a0 = s0
         call 0x8006229c          // 0x8006229c(0x0, 0x0, 0x0, 0x0)
         byte [t9 + 0xa0] = v0
         v1 = [s2 + 0]
         t0 = [s3 + 0]
         a2 = , unsigned  byte [v1 + 0xa0]
         a0 = [v1 + 0xa4]
         a1 = [t0 + 0xf8]
         call 0x8007dfb0          // 0x8007dfb0(-1, -1, 0x0, 0x0)
         a2 <<= 1
         t1 = [s2 + 0]
         t3 = [s3 + 0]
         a0 = 0 + 0x12
         t2 = , unsigned  byte [t1 + 0xa0]
         a1 = 0
         a2 = 0 + 1
         a3 = 0
         call 0x8006218c          // 0x8006218c(0x12, 0x0, 0x1, 0x0)
         byte [t3 + 0xf4] = t2
         t4 = [s2 + 0]
         s0 = v0
         a1 = [sp + 0x34]
         a2 = v0
         call 0x80062390          // 0x80062390(0x12, 0x0, 0x0, 0x0)
         a0 = [t4 + 0xac]
         t5 = [s2 + 0]
         a0 = s0
         call 0x8006229c          // 0x8006229c(0x0, 0x0, 0x0, 0x0)
         byte [t5 + 0xa8] = v0
         v1 = [s2 + 0]
         t6 = [s3 + 0]
         a2 = , unsigned  byte [v1 + 0xa8]
         a0 = [v1 + 0xac]
         a1 = [t6 + 0x100]
         call 0x8007dfb0          // 0x8007dfb0(-1, -1, 0x0, 0x0)
         a2 <<= 1
         t7 = [s2 + 0]
         t9 = [s3 + 0]
         s2 = 0 + 4
         t8 = , unsigned  byte [t7 + 0xa8]
         s0 = 0
         s1 = 0
         byte [t9 + 0xfc] = t8

    loc_0x802da678: // orphan
         t0 = [s3 + 0]
         a0 = s0
         t1 = t0 + s1
         call 0x88a015a0          // 0x88a015a0(0x0, 0x0, 0x0, 0x0)
         [t1 + 0x104] = 0
         s0 += 1
         if                       // likely
         s1 += 4

    loc_0x802da698: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         ret
         sp += 0x48

    loc_0x802da784: // orphan
         if                       // unlikely
         a0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da78c: // orphan
         call 0x8006378c          // 0x8006378c(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x22] = a3
         call 0x88a00fd4          // 0x88a00fd4(0x0, 0x0, 0x0, 0x0)
         a0 = v0 & 0xff
         if                       // likely
         a3 = , unsigned  halfword [sp + 0x22]

    loc_0x802da7a4: // orphan
         at = 0 + 1
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7b0: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7bc: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0x88a0 << 16

    loc_0x802da7c8: // orphan
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da7dc: // orphan
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]
         t6 = 0 + 0x14
         halfword [sp + 0x20] = t6
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da7f8: // orphan
         a0 = [a0 + 0x1c64]
         t7 = 0 + 0xc
         halfword [sp + 0x20] = t7
         a1 = a0 + v0
         goto 0x802da840
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da810: // orphan
         a0 = [a0 + 0x1c64]
         t8 = 0 + 1
         a1 = a0 + v0
         v1 = , unsigned  byte [a1 + 1]
         byte [sp + 0x1f] = t8
         goto 0x802da840
         halfword [sp + 0x20] = v1

    loc_0x802da82c: // orphan
         a0 = [a0 + 0x1c64]
         t9 = 0 + 0x19
         halfword [sp + 0x20] = t9
         a1 = a0 + v0
         v1 = , unsigned  byte [a1 + 1]

    loc_0x802da840: // orphan
         t2 = , unsigned  halfword [sp + 0x20]
         at = , v1 < t2
         if                       // likely
         

    loc_0x802da850: // orphan
         t3 = , unsigned  byte [a1 + 5]
         a3 = 0
         t4 = t3 << 1
         v1 = a0 + t4
         v1 += 9
         [sp + 0x24] = v1

    loc_0x802da868: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da870: // orphan
         if                       // likely
         a0 = 0x88a0 << 16

    loc_0x802da878: // orphan
         at = 0 + 1
         if                       // unlikely
         a0 = 0 + 0x22            // arg1

    loc_0x802da884: // orphan
         at = 0 + 2
         if                       // unlikely
         a0 = 0 + 0x12            // arg1

    loc_0x802da890: // orphan
         at = 0 + 3
         if                       // unlikely
         a0 = 0 + 0x12            // arg1

    loc_0x802da89c: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da8a4: // orphan
         a0 = [a0 + 0x1c64]       // arg1
         t5 = 0 + 0x14
         halfword [sp + 0x20] = t5
         t6 = , unsigned  byte [a0 + 0] // arg1
         v1 = a0 + 9              // arg1
         at = , t6 < 0x14
         if                       // unlikely
         

    loc_0x802da8c4: // orphan
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da8cc: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da8d4: // orphan
         call 0x8005caa4          // 0x8005caa4(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]
         halfword [sp + 0x20] = v0
         t8 = v0 & 0xffff
         t7 = , unsigned  byte [a0 + 0xef]
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t7 < t8
         if                       // unlikely
         

    loc_0x802da900: // orphan
         v1 = [a0 + 0xf0]
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da90c: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da914: // orphan
         call 0x80053230          // 0x80053230(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]
         halfword [sp + 0x20] = v0
         t2 = v0 & 0xffff
         t9 = , unsigned  byte [a0 + 0xf4]
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t9 < t2
         if                       // unlikely
         

    loc_0x802da940: // orphan
         v1 = [a0 + 0xf8]

    loc_0x802da944: // orphan
         a3 = 0
         [sp + 0x24] = v1

    loc_0x802da94c: // orphan
         goto 0x802da990
         v1 = [sp + 0x24]

    loc_0x802da954: // orphan
         call 0x80053230          // 0x80053230(0x0, 0x0, 0x0, 0x0)
         halfword [sp + 0x22] = a3
         a0 = 0x88a0 << 16
         a0 = [a0 + 0x1c64]
         halfword [sp + 0x20] = v0
         t4 = v0 & 0xffff
         t3 = , unsigned  byte [a0 + 0xfc]
         a3 = , unsigned  halfword [sp + 0x22]
         at = , t3 < t4
         bnel at, 0, 0x802da990   // unlikely
         v1 = [sp + 0x24]

    loc_0x802da980: // orphan
         v1 = [a0 + 0x100]
         a3 = 0
         [sp + 0x24] = v1
         v1 = [sp + 0x24]

    loc_0x802da990: // orphan
         if                       // unlikely
         ra = [sp + 0x14]

    loc_0x802da998: // orphan
         t0 = , unsigned  halfword [sp + 0x20]
         a1 = 0
         a0 = 0
         if                       // likely
         t1 = t0 & 3

    loc_0x802da9ac: // orphan
         if                       // unlikely
         a2 = t1

    loc_0x802da9b4: // orphan
         v0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da9b8: // orphan
         t5 = , unsigned  byte [v1 + 0]
         a0 += 1                  // arg1
         if                       // likely
         

    loc_0x802da9c8: // orphan
         t6 = , unsigned  byte [v1 + 1]
         a1 = 0 + 1               // arg2
         a3 -= t6                 // arg4
         a3 += 0x63               // arg4
         a3 &= 0xffff             // arg4

    loc_0x802da9dc: // orphan
         if                       // unlikely
         v1 += 2

    loc_0x802da9e4: // orphan
         if                       // unlikely
         

    loc_0x802da9ec: // orphan
         v0 = , unsigned  byte [sp + 0x2b]

    loc_0x802da9f0: // orphan
         t7 = , unsigned  byte [v1 + 0]
         a0 += 4                  // arg1
         bnel v0, t7, 0x802daa18  // likely
         t9 = , unsigned  byte [v1 + 2]

    loc_0x802daa00: // orphan
         t8 = , unsigned  byte [v1 + 1]
         a1 = 0 + 1               // arg2
         a3 -= t8                 // arg4
         a3 += 0x63               // arg4
         a3 &= 0xffff             // arg4
         t9 = , unsigned  byte [v1 + 2]

    loc_0x802daa18: // orphan
         v1 += 2
         bnel v0, t9, 0x802daa3c  // unlikely
         t3 = , unsigned  byte [v1 + 2]

    loc_0x802daa24: // orphan
         t2 = , unsigned  byte [v1 + 1]
         a1 = 0 + 1               // arg2
         a3 -= t2                 // arg4
         a3 += 0x63               // arg4
         a3 &= 0xffff             // arg4
         t3 = , unsigned  byte [v1 + 2]

    loc_0x802daa3c: // orphan
         v1 += 2
         bnel v0, t3, 0x802daa60  // unlikely
         t5 = , unsigned  byte [v1 + 2]

    loc_0x802daa48: // orphan
         t4 = , unsigned  byte [v1 + 1]
         a1 = 0 + 1               // arg2
         a3 -= t4                 // arg4
         a3 += 0x63               // arg4
         a3 &= 0xffff             // arg4
         t5 = , unsigned  byte [v1 + 2]

    loc_0x802daa60: // orphan
         v1 += 2
         if                       // unlikely
         

    loc_0x802daa6c: // orphan
         t6 = , unsigned  byte [v1 + 1]
         a1 = 0 + 1               // arg2
         a3 -= t6                 // arg4
         a3 += 0x63               // arg4
         a3 &= 0xffff             // arg4

    loc_0x802daa80: // orphan
         if                       // likely
         v1 += 2

    loc_0x802daa88: // orphan
         if                       // unlikely
         v1 = , unsigned  byte [sp + 0x2f]

    loc_0x802daa90: // orphan
         t7 = , unsigned  byte [sp + 0x1f]
         beql t7, 0, 0x802daac0   // unlikely
         v0 = a3 & 0xff           // arg4

    loc_0x802daa9c: // orphan
         goto 0x802daabc
         a3 = , unsigned  byte [sp + 0x2f]

    loc_0x802daaa4: // orphan
         at = , v1 < a3
         if                       // likely
         v0 = a3

    loc_0x802daab0: // orphan
         goto 0x802daabc
         a3 = v1 & 0xffff         // arg4

    loc_0x802daab8: // orphan
         a3 = v0 & 0xffff         // arg4

    loc_0x802daabc: // orphan
         v0 = a3 & 0xff           // arg4

    loc_0x802daac0: // orphan
         ret
         sp += 0x28

    loc_0x802dab48: // orphan
         t5 = [t0 + 0]
         v0 = t5 + a2             // arg3
         t6 = , unsigned  byte [v0 + 5]
         t7 = t6 + a1             // arg2
         byte [v0 + 5] = t7
         t8 = [t0 + 0]
         v0 = t8 + a2             // arg3
         t9 = , unsigned  byte [v0 + 6]
         t1 = t9 + a1             // arg2
         byte [v0 + 6] = t1
         t2 = [t0 + 0]
         v0 = t2 + a2             // arg3
         t3 = , unsigned  byte [v0 + 7]
         t4 = t3 + a1             // arg2
         byte [v0 + 7] = t4
         t5 = [t0 + 0]
         v0 = t5 + a2             // arg3

    loc_0x802dab8c: // orphan
         t6 = , unsigned  byte [v0 + 8]
         a2 += 4                  // arg3
         t7 = t6 + a1             // arg2
         if                       // likely
         byte [v0 + 8] = t7

    loc_0x802daba0: // orphan
         ret
         

}

*/
