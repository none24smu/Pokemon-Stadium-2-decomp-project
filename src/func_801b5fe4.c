/*
 * Function: 0x801b5fe4
 * Category: math
 */

// Decompiled C code
int fcn.801ac154 (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.801ac154 (int esi, int edx) {
    loc_0x801ac154:
        // CALL XREF from fcn.83289850 @ +0xb7c
        if            // unlikely
        if            // unlikely
            
    loc_0x801b5fac:
        v0 = , unsigned  byte [s0 + 0x43] // s4
        if            // unlikely
        t8 = v0 - 1   // t3
            
    loc_0x801b5fcc:
        at = , a0 < 0xa // arg1
         // do {
    loc_0x801b5fd0:
        if            // likely
        0x801b5fd4
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x801ac164: // orphan
             // CODE XREF from fcn.801965a4 @ +0xe6c
             if                       // unlikely
             if                       // unlikely

    loc_0x801ac170: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801b5fd8: // orphan
         t9 = , unsigned  halfword [s0 + 0x16]
         t0 = t9 & 0x400
         if                       // unlikely
         

    loc_0x801b5fe8: // orphan
         v0 = , unsigned  byte [s0 + 0x43] // s4
         t1 = , unsigned  byte [s0 + 0xcb] // s4
         a0 = 0 + 1               // arg1 // lo
         t2 = v0 + 0xa
         at = , t1 < t2           // lo
         if                       // likely
         t3 = v0 + 1

    loc_0x801b6004: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [s0 + 0x43] = t3
         v1 = 0 + 1               // lo

    loc_0x801b6010: // orphan
         // CODE XREF from fcn.801ac154 @ 0x801b5fc4
         if                       // likely
         a0 = [sp + 0x30]

    loc_0x801b6018: // orphan
         call 0x81805524          // 0x81805524(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         v1 = v0                  // s4

    loc_0x801b6024: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x30
         ret
         v0 = v1

    loc_0x801b605c: // orphan
         v0 = 0
         t7 = a1 - v0             // arg2 // t0
         // CODE XREF from fcn.8019eefc @ +0x1000
         t8 = t7 + 1
         byte [a0 + 0x43] = v0    // arg1
         ret                      // ra
         byte [a0 + 0x40] = t8    // arg1

    loc_0x801b6098: // orphan
         ra = [sp + 0x1c]
         t6 = halfword [s0 + 0x66]
         t7 = t6 - 1
         halfword [s0 + 0x66] = t7
         v0 = halfword [s0 + 0x66]
         at = , v0 < 0xb
         if                       // unlikely
         t8 = v0 & 1

    loc_0x801b60b8: // orphan
         if                       // likely
         

    loc_0x801b60c0: // orphan
         call 0x8000b524          // 0x8000b524(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = , unsigned  byte [s0 + 0xcb] // s4
         a0 = s0
         div 0, v0, t9
         a1 = hi
         a1 += 1                  // s2
         if                       // likely
         

    loc_0x801b60e4: // orphan
         break 7

    loc_0x801b60e8: // orphan
         // CODE XREF from fcn.801ac154 @ 0x801b60dc
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801b60f4: // orphan
         if                       // likely
         

    loc_0x801b60fc: // orphan
         break 6

    loc_0x801b6100: // orphan
         // CODE XREFS from fcn.801ac154 @ 0x801b60ec, 0x801b60f4
         call fcn.83100e98
         
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         goto 0x801b6134
         ra = [sp + 0x1c]

    loc_0x801b6118: // orphan
         // CODE XREFS from fcn.801ac154 @ 0x801b60b0, 0x801b60b8
         if                       // likely
         a0 = s0

    loc_0x801b6120: // orphan
         call fcn.8310065c
         a1 = 0
         call 0x800226c0          // 0x800226c0(-1, 0x0, 0x8, -1)
         a0 = 0 + 0x8d

    loc_0x801b6130: // orphan
         // CODE XREF from fcn.801ac154 @ 0x801b6118
         ra = [sp + 0x1c]

    loc_0x801b6134: // orphan
         // CODE XREFS from fcn.801ac154 @ 0xb0, 0x801b6110
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         // CODE XREF from fcn.80197b34 @ +0x204
         v0 = 0 + 1               // lo

    loc_0x801b6168: // orphan
         if                       // unlikely
         a0 = [sp + 0x30]

    loc_0x801b6170: // orphan
         t6 = , unsigned  halfword [s0 + 0x14]
         t7 = t6 & 0x10
         if                       // unlikely
         

    loc_0x801b6180: // orphan
         v0 = , unsigned  byte [s0 + 0x3e] // s4
         t8 = 0 + 1               // lo
         at = , v0 < 6
         if                       // likely
         

    loc_0x801b6194: // orphan
         a0 = 0x8310 << 16
         a0 += v0
         [sp + 0x24] = t8
         call 0x800718b8          // 0x800718b8(0x831000ff, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [a0 + 0x38ff]
         a0 = s0
         call fcn.831005f0
         a1 = v0                  // s4
         goto 0x801b61cc          // fcn.801ac184+0xa048
         ra = [sp + 0x1c]

    loc_0x801b61bc: // orphan
         // CODE XREFS from fcn.801ac154 @ 0x801b6168, 0x801b6178, 0x801b618c
         call 0x81805524          // 0x81805524(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s0
         [sp + 0x24] = v0
         ra = [sp + 0x1c]

}

*/
