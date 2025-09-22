int fcn.80388084 (int esi, int edx) {
    loc_0x80388084:
        // CALL XREF from fcn.8144ecd0 @ +0xd4
        0x80388084
        0x80388088
        0x8038808c
        if            // fcn.803a002c+0x16d8 // unlikely
        if            // unlikely
            
    loc_0x803a1718:
        if            // unlikely
        if            // unlikely
            
    loc_0x803ba9c0:
        // CODE XREF from fcn.80388084 @ 0x803a171c
        tge s0, 0, 0x1eb
        teq s0, 0, 0x1eb
         // } else {
    loc_0x803a1724:
        if            // unlikely
        0x803a1728
         // } else {
        }
        return eax;
        goto loc_0x8038809c
    loc_0x803880a8:
        0x803880a8
         // do {
    loc_0x803880ac:
        if            // unlikely
        if            // unlikely
         // } while (?);
        }
        return eax;
    loc_0x803880b8:
        if            // unlikely
        if            // unlikely
        // chop
    loc_0x803880c4: // orphan
             
             
             if                       // unlikely
             if                       // unlikely

    loc_0x803880d8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803880e8: // orphan
         

    loc_0x803880ec: // orphan
         if                       // fcn.803a002c+0x1bb4 // unlikely
         if                       // unlikely

    loc_0x803880f8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80388108: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x803a172c: // orphan
         if                       // unlikely
         

    loc_0x803a1734: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803a1750: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x803a1760: // orphan
         syscall                  // 255 = unknown ()
         tge s0, 0, 0x199

    loc_0x803a1814: // orphan
         tge s0, 0, 0x1c2
         // CODE XREF from fcn.803a002c @ +0x58
         teq s0, 0, 0x1c2

    loc_0x803a19c4: // orphan
         v1 = [a2 + 0]            // t9
         t7 = 0xe700 << 16
         t9 = 0xdb06 << 16
         t6 = v1 + 8
         [a2 + 0] = t6
         [v1 + 0] = t7
         [v1 + 4] = 0
         v1 = [a2 + 0]
         t9 |= 0x3c
         a0 = 0 + 0x3e
         t8 = v1 + 8
         [a2 + 0] = t8
         [v1 + 0] = t9
         a1 = 0 + 1               // lo
         call 0x8004c990          // 0x8004c990(0x3e, 0x1, 0x8, -1)

    loc_0x803a1a00: // orphan
         // CODE XREF from fcn.803a002c @ 0x803a00bc
         [sp + 0x18] = v1
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = v0                  // s4
         t0 = [sp + 0x18]         // v1
         a2 = 0x800d << 16
         a2 += 0x510
         [t0 + 4] = v0

    loc_0x803a1a1c: // orphan
         v1 = [a2 + 0]
         t2 = 0xfb00 << 16
         t3 = 0 | 0xffff
         t1 = v1 + 8
         [a2 + 0] = t1
         [v1 + 4] = t3
         [v1 + 0] = t2
         v1 = [a2 + 0]
         t6 = 0x8671 << 16
         t6 -= 0x49a0
         t4 = v1 + 8
         [a2 + 0] = t4
         t5 = 0xde00 << 16
         [v1 + 0] = t5
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v1 + 4] = t6
         // CODE XREF from syscall.1.2 @ +0x254
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x803a1a74: // orphan
         [sp + 0x3c] = a1
         if                       // likely
         a2 = a0                  // t9

    loc_0x803a1a80: // orphan
         a0 = 0 + 0xcd
         a1 = 0
         call 0x8004c990          // 0x8004c990(0xcd, 0x0, 0x8, -1)
         [sp + 0x38] = a2
         a2 = [sp + 0x38]

    loc_0x803a1a94: // orphan
         // CODE XREF from fcn.80388084 @ 0x803a1a78
         at = 0 + 5
         if                       // likely
         t0 = 0x8009 << 16

    loc_0x803a1aa0: // orphan
         t0 = [t0 + 0x491c]       // t9
         t6 = 0x8671 << 16
         v0 = [t0 + 0x14]         // t9
         at = , unsigned  , v0 < 0x48
         bnel at, 0, 0x803a1ac4   // unlikely
         at = 0 + 3

    loc_0x803a1be8: // orphan
         // CODE XREF from fcn.80388084 @ 0x803a1a98
         ra = [sp + 0x14]

    loc_0x803a1bec: // orphan
         // CODE XREF from fcn.803a002c @ 0x803a1bd4
         sp += 0x38
         ret                      // ra
         

    loc_0x803a1c04: // orphan
         if                       // likely
         a2 = a0                  // t9

    loc_0x803a1c0c: // orphan
         a0 = 0 + 0xe3
         a1 = 0
         call 0x8004c990          // 0x8004c990(0xe3, 0x0, 0x8, -1)
         [sp + 0x28] = a2
         at = 0x8671 << 16
         [at - 0x3690] = v0
         a2 = [sp + 0x28]

    loc_0x803a1c28: // orphan
         // CODE XREF from fcn.80388084 @ 0x803a1c04
         at = 0 + 5
         if                       // likely
         a0 = 0 + 0xe3

    loc_0x803a1c64: // orphan
         [v1 + 0] = t7
         [v1 + 4] = 0
         // CODE XREF from fcn.803747c4 @ 0x803a00d8
         v1 = [a1 + 0]            // t9
         t9 = 0xfcff << 16
         t2 = 0xfffc << 16
         t8 = v1 + 8
         [a1 + 0] = t8

    loc_0x803a1c80: // orphan
         // CODE XREF from fcn.803a002c @ 0x803a00dc
         t2 |= 0xf238
         t9 |= 0xffff
         [v1 + 0] = t9
         [v1 + 4] = t2
         v1 = [a1 + 0]
         t4 = 0xdb06 << 16
         t4 |= 0x3c
         t3 = v1 + 8

    loc_0x803a1ca0: // orphan
         [a1 + 0] = t3
         [v1 + 0] = t4
         a0 = [t1 + 0]            // t9
         call 0x8004ca60          // 0x8004ca60(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = v1
         t0 = [sp + 0x18]         // v1
         a1 = 0x800d << 16
         a1 += 0x510
         [t0 + 4] = v0
         v1 = [a1 + 0]            // t9
         t6 = 0xde00 << 16
         t7 = 0x8671 << 16
         t5 = v1 + 8
         [a1 + 0] = t5
         [v1 + 0] = t6
         t7 = [t7 - 0x3694]       // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x800d0510, 0x8, -1)
         [v1 + 4] = t7
         // CODE XREF from fcn.80388084 @ 0x803a1c2c
         ra = [sp + 0x14]
         sp += 0x28
         ret
         

}
