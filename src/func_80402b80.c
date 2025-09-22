int fcn.82f64ad4 (int esi, int edx) {
    loc_0x804003dc:
        // CODE XREF from fcn.82f64ad4 @ 0x82f64aec
        0x804003dc
         // do {
    loc_0x804003e0:
        // CODE XREF from fcn.82eb3a4c @ +0x1e0
        if            // fcn.804003c8+0x16c // unlikely
        if            // unlikely
         // } while (?);
        }
        return eax;
    loc_0x804003ec:
        if            // fcn.80400480+0x100 // unlikely
        if            // unlikely
        // chop
            
    loc_0x8040058c:
        0x8040058c
        if            // fcn.80401828+0x15dc // unlikely
        // CODE XREF from fcn.82f64ad4 @ 0x804003f0
        if            // fcn.80401828+0x15f0 // unlikely
        // chop
            
    loc_0x80402e18:
        // CODE XREF from fcn.80400480 @ 0x80400594
        call 0x87e03594 // 0x87e03594(-1, 0x442f71dcfe116408, 0x8, -1)
        a1 = [v0 + 0] // t9
        v0 = 0x87e2 << 16
        v0 = [v0 - 0x45e0] // t9
        a0 = v0 + 0x4b8
        call 0x87e0520c // 0x87e0520c(0x1000004b7, -1, 0x8, -1)
        a1 = [v0 + 0] // t9
        ra = [sp + 0x14]
        sp += 0x18
        ret
        0x80402e40
         // } else {
    loc_0x8040059c:
        if            // unlikely
        if            // unlikely
         // } while (?);
        }
        return eax;
        goto loc_0x804003f8
    loc_0x80400400:
        // CODE XREF from fcn.839e17b4 @ +0x90
        if            // unlikely
        // CALL XREF from fcn.814f5664 @ +0x130
        if            // fcn.80400480+0x288 // unlikely
        // chop
            
    loc_0x80400708:
        // CODE XREF from fcn.82f64ad4 @ 0x80400404
        0x80400708
        // chop
         // do {
    loc_0x8040070c:
        0x8040070c
        0x80400710
        0x80400714
        0x80400718
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8040040c
    loc_0x80400414:
        0x80400414
        0x80400418
        // chop
         // do {
    loc_0x8040041c:
        // CALL XREF from fcn.82f9a8b4 @ +0xe0c
        0x8040041c
        0x80400420
         // } while (?);
        }
        return eax;
    loc_0x80400548: // orphan
             if                       // fcn.804003c8+0x2730 // unlikely
             // CODE XREF from fcn.82f64ad4 @ 0x804003e4
             if                       // unlikely

    loc_0x80400594: // orphan
         
         if                       // fcn.80401828+0x15dc // unlikely
         // CODE XREF from fcn.82f64ad4 @ 0x804003f0
         if                       // fcn.80401828+0x15f0 // unlikely

    loc_0x80402b10: // orphan
         // CODE XREF from fcn.82f64ad4 @ 0x8040054c
         [sp + 0x10] = t6
         a0 = 0
         a1 = 0 + 1               // lo
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x0, 0x1, 0x2, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x0, 0x1, 0x2, 0x0)
         // CODE XREF from fcn.8041f2b0 @ +0x82c
         a0 = 0 + 0x107
         call 0x8004c4b0          // 0x8004c4b0(0x107, 0x1, 0x2, 0x0)
         a0 = 0 + 0x35
         a0 = 0 + 0x3f
         call 0x80047588          // 0x80047588(0x3f, 0x1, 0x2, 0x0)
         a1 = 0
         at = 0x86c0 << 16
         [at + 0x36c] = v0
         a0 = 0x100 << 16
         // CODE XREF from fcn.8041f2b0 @ +0x830
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00
         a1 += 0x6e30
         a0 >>= 0x18              // lo
         call 0x80004638          // 0x80004638(0x1, 0x446e30, 0x447d00, 0x0)
         a3 = 0
         call 0x86c00020          // 0x86c00020(0x1, 0x446e30, 0x447d00, 0x0)
         
         call 0x80008514          // 0x80008514(0x1, 0x446e30, 0x447d00, 0x0)
         a0 = [sp + 0x24]         // s4
         call 0x86c00148          // 0x86c00148(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80008574          // 0x80008574(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80047610          // 0x80047610(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x8004c398          // 0x8004c398(0xff, 0x446e30, 0x447d00, 0x0)
         
         call 0x80006d3c          // 0x80006d3c(0xff, 0x446e30, 0x447d00, 0x0)
         
         a0 = 0x4742 << 16
         call 0x80002bf8          // 0x80002bf8(0x47420000, 0x446e30, 0x447d00, 0x0)
         a0 |= 0x4552
         ra = [sp + 0x1c]
         sp += 0x28
         // CODE XREF from fcn.80400480 @ 0x80400554
         v0 = 0
         ret
         

    loc_0x82f64ad4: // orphan
           // CALL XREF from fcn.80b85078 @ +0x2d4
         t1 = halfword [0 + 0x40a4]
         goto 0x8d030c34
         if                       // unlikely

    loc_0x82f64ae4: // orphan
         if                       // unlikely
         s0 = t0 + 0x10d1

    loc_0x82f64aec: // orphan
         goto 0x804003dc
         call 0x8b438434          // 0x8b438434(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x82f685a0: // orphan
         t8 = byte [a0 + 0x680]   // arg1 // s4

    loc_0x82f68b2c: // orphan
         s6 = , unsigned  , t6 < -0x2263 // lo
         ld fp, 0xde4, t6         // s2
         ld t6, 0x3e1, s7         // s2

}
