int fcn.804010fc (int esi, int edx) {
    loc_0x804010fc:
        // CALL XREF from fcn.80654a8c @ +0x260
        0x804010fc
        if            // unlikely
        if            // unlikely
        // chop
    loc_0x8040110c: // orphan
             
             if                       // unlikely
             if                       // unlikely

    loc_0x8040111c: // orphan
         if                       // unlikely
         

    loc_0x80401124: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401130: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8040113c: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x6f8
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80401150: // orphan
         if                       // unlikely
         

    loc_0x80401158: // orphan
         if                       // fcn.8040d818+0x14 // unlikely
         if                       // unlikely

    loc_0x80401164: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401170: // orphan
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8040118c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401198: // orphan
         if                       // unlikely
         if                       // fcn.80401194+0xca5c // unlikely

    loc_0x8040d458: // orphan
         a0 = s0
         goto 0x8040d484
         ra = [sp + 0x1c]

    loc_0x8040d484: // orphan
         // CODE XREF from fcn.8040d3f0 @ 0x8040d3fc
         // CODE XREF from fcn.804010fc @ 0x8040d45c
         v0 = [s0 + 0]            // t9
         s0 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x8040d4e0: // orphan
         
         call 0x87e17d40          // 0x87e17d40(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 + 0x7bc
         goto 0x8040d500
         ra = [sp + 0x1c]

    loc_0x8040d500: // orphan
         // CODE XREF from fcn.804010fc @ 0x8040d4ec
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // ra
         

    loc_0x8040d57c: // orphan
         call 0x87e0f124          // 0x87e0f124(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x8c
         call 0x87e00590          // 0x87e00590(0x10000008b, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = [sp + 0x18]
         call 0x87e15678          // 0x87e15678(0x0, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0x644
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040d608: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040d72c: // orphan
         ra = [sp + 0x14]
         call 0x87e0a8e0          // 0x87e0a8e0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = a1                  // t0
         goto 0x8040d75c
         ra = [sp + 0x14]

    loc_0x8040d75c: // orphan
         // CODE XREF from fcn.804010fc @ 0x8040d738
         sp += 0x18
         ret                      // ra
         

    loc_0x8040d7b4: // orphan
         a0 = 0 - 1               // s2
         call 0x87e10f2c          // 0x87e10f2c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 - 1               // s2
         goto 0x8040d7f0
         ra = [sp + 0x14]

    loc_0x8040d7f0: // orphan
         // CODE XREF from fcn.804010fc @ 0x8040d7c0
         sp += 0x20
         ret                      // ra
         

    loc_0x8040d850: // orphan
         
         sp -= 0x18
         at = 0 + 5
         [sp + 0x14] = ra
         if                       // likely
         [sp + 0x1c] = a1

    loc_0x8040d868: // orphan
         v1 = 0x800d << 16
         v1 += 0x510
         v0 = [v1 + 0]            // t9
         t7 = 0xe700 << 16
         t9 = 0xfcff << 16
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t1 = 0xfffc << 16
         t1 |= 0xf238
         t8 = v0 + 8
         [v1 + 0] = t8
         t9 |= 0xffff
         t2 = 0x8009 << 16
         [v0 + 0] = t9
         [v0 + 4] = t1
         t2 = [t2 + 0x491c]       // t9
         v0 = [v1 + 0]
         t4 = 0xdb06 << 16
         a2 = [t2 + 0x14]         // t9
         t3 = v0 + 8
         [v1 + 0] = t3
         t4 |= 0x3c
         [v0 + 0] = t4
         t5 = [a2 + 4]
         t8 = 0xde00 << 16
         t6 = [t5 + 8]            // t9

    loc_0x8040d8dc: // orphan
         [v0 + 4] = t6
         v0 = [v1 + 0]            // t9
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         t9 = [a2 + 0]
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         [v0 + 4] = t9

    loc_0x8040d8fc: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040da48: // orphan
         if                       // unlikely
         a0 = v0 + 0x24

    loc_0x8040da50: // orphan
         [sp + 0x34] = v0
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = a0
         t0 = [sp + 0x38]
         a0 = [sp + 0x2c]         // t9
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [t0 + 0x18]         // t9
         v0 = 0x87e2 << 16
         v0 -= 0x5dcc
         v1 = [sp + 0x34]         // s4
         lwc1 f4
         t1 = 0 - 0x4000
         a3 = v1 + 0x42
         swc1 f4, 0x48, v1
         lwc1 f6, 4, v0
         halfword [v1 + 0x42] = t1
         a1 = v1 + 0x48
         swc1 f6, 0x4c, v1
         [sp + 0x2c] = a3
         a0 = [sp + 0x30]
         call 0x87f0afd0          // 0x87f0afd0(0x0, 0x147, -1, 0x141)
         a2 = v1 + 0x54
         mtc1 0, f0
         t3 = 1 << 16
         t3 |= 0x4000
         t2 = 0 + 0xf
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x14] = t2
         [sp + 0x18] = t3
         a0 = [sp + 0x30]
         a1 = [sp + 0x2c]
         call 0x87f0b2f4          // 0x87f0b2f4(0x0, 0x141, 0x153, 0x141)
         swc1 f0, 0x10, sp

    loc_0x8040dae0: // orphan
         a0 = 0 + 3
         a1 = 0 + 0x8c
         call 0x87e0168c          // 0x87e0168c(0x3, 0x8c, 0x8, -1)
         a2 = 0 + 0xe
         call 0x87e134c0          // 0x87e134c0(0x3, 0x8c, 0xe, -1)
         
         call 0x87e13490          // 0x87e13490(0x3, 0x8c, 0xe, -1)
         
         call 0x87e13480          // 0x87e13480(0x3, 0x8c, 0xe, -1)
         a0 = 0
         ra = [sp + 0x24]
         sp += 0x38
         ret
         

    loc_0x8040db44: // orphan
         t7 = [a2 + 0]            // t9
         t8 = t7 << 5
         mtc1 t8, f4
         
         cvt.s.w f6, f4
         call 0x87e0ab9c          // 0x87e0ab9c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x14, a0
         call 0x87e0abbc          // 0x87e0abbc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         call 0x87e0ac0c          // 0x87e0ac0c(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         call 0x87f061d0          // 0x87f061d0(0x104, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = [s0 + 8]
         call 0x87e11c38          // 0x87e11c38(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t9 + 0]
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

}
