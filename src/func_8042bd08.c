/*
 * Function: 0x8042bd08
 * Category: math
 */

// Decompiled C code
int fcn.80433834 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.80433834 (int esi, int edx) {
    loc_0x8042bc50:
        lwc1 f0, 4, s0
        mtc1 0, f14
        at = 0x3f00 << 16
        c.le.s f12, f0
        t8 = [sp + 0x3c]
        t9 = 0 + 0x400
        t2 = 0 + 0x400
        bc1fl 0x8042bc9c
        sub.s f10, f0, f12
        sub.s f4, f0, f12
        at = 0x3f00 << 16
        mtc1 at, f2
        0x8042bc80
        add.s f6, f4, f2
        trunc.w.s f8, f6
        mfc1 t1, f8
        goto 0x8042bcb8
        lwc1 f0, 8, s0
         // do {
    loc_0x8042bcb8:
        // CODE XREF from fcn.80433834 @ 0x8042bc90
        a0 = t1 << 0x10
        a0 = , signed  a0 >> 0x10
        c.le.s f14, f0
        0x8042bcc4
        bc1fl 0x8042bce8
        sub.s f8, f0, f2
        add.s f4, f0, f2
        trunc.w.s f6, f4
        mfc1 t0, f6
        goto 0x8042bcf8
        lwc1 f16, 0xc, s0
         // } while (?);
        }
        return eax;
    loc_0x8042bcf8: // orphan
             // CODE XREF from fcn.80433834 @ 0x8042bcdc
             a1 = t0 << 0x10
             a1 = , signed  a1 >> 0x10
             add.s f0, f16, f12
             c.le.s f14, f0
             
             bc1fl 0x8042bd2c
             sub.s f6, f0, f2
             add.s f18, f0, f2
             trunc.w.s f4, f18
             mfc1 v1, f4
             goto 0x8042bd3c
             a3 = halfword [t8 + 2]

    loc_0x8042bd3c: // orphan
         // CODE XREF from fcn.80433834 @ 0x8042bd20
         a2 = v1 << 0x10
         a2 = , signed  a2 >> 0x10 // v1
         [sp + 0x20] = 0
         [sp + 0x1c] = t2
         [sp + 0x18] = t9
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x220, -1)
         [sp + 0x10] = 0
         mtc1 0, f14
         lwc1 f0, 4, s0
         at = 0x3f00 << 16
         mtc1 at, f2
         c.le.s f14, f0
         t9 = [sp + 0x3c]
         t4 = 0 - 0x400
         t5 = 0 + 0x400
         bc1fl 0x8042bd9c
         sub.s f18, f0, f2
         add.s f10, f0, f2
         trunc.w.s f16, f10
         mfc1 t1, f16
         goto 0x8042bdac
         lwc1 f0, 0xc, s0

    loc_0x8042bdac: // orphan
         // CODE XREF from fcn.80433834 @ 0x8042bd90
         c.le.s f14, f0
         
         bc1fl 0x8042bdd4
         sub.s f10, f0, f2
         add.s f6, f0, f2
         trunc.w.s f8, f6
         mfc1 t0, f8
         goto 0x8042bde4
         lwc1 f0, 8, s0

    loc_0x8042bde4: // orphan
         // CODE XREF from fcn.80433834 @ 0x8042bdc8
         a0 = t0 + t1
         a0 <<= 0x10
         c.le.s f14, f0
         a0 = , signed  a0 >> 0x10
         bc1fl 0x8042be14
         sub.s f6, f0, f2
         add.s f18, f0, f2
         trunc.w.s f4, f18
         mfc1 v1, f4
         goto 0x8042be24
         v0 = , unsigned  halfword [t9 + 0]

    loc_0x8042be24: // orphan
         // CODE XREF from fcn.80433834 @ 0x8042be08
         a3 = halfword [t9 + 2]
         a1 = v1 << 0x10
         t2 = v0 - 1              // t3
         t3 = t2 << 5
         a2 = v0 << 0x10
         a2 = , signed  a2 >> 0x10 // s4
         [sp + 0x10] = t3
         a1 = , signed  a1 >> 0x10 // v1
         [sp + 0x20] = 0
         [sp + 0x1c] = t5
         [sp + 0x18] = t4
         call 0x80044270          // 0x80044270(-1, 0x220, 0xff, 0xffff)
         [sp + 0x14] = 0
         v1 = [s1 + 0]            // t9
         t7 = 0xe700 << 16
         t9 = 0xfcff << 16
         t6 = v1 + 8
         [s1 + 0] = t6
         [v1 + 4] = 0
         [v1 + 0] = t7
         v1 = [s1 + 0]
         t2 = 0xff2c << 16
         t2 |= 0xfe7f
         t8 = v1 + 8
         [s1 + 0] = t8
         t9 |= 0x97ff
         [v1 + 0] = t9
         [v1 + 4] = t2

    loc_0x8042cf44: // orphan
         if                       // unlikely
         [sp + 0x24] = v0

    loc_0x8042cf4c: // orphan
         v1 = [v0 + 0x38]         // t9
         t7 = [sp + 0x30]
         a0 = , unsigned  halfword [sp + 0x36]
         a1 = , unsigned  halfword [sp + 0x3a]
         a2 = 0
         a3 = 0 + 2
         [sp + 0x20] = v1
         call 0x87f08e7c          // 0x87f08e7c(0x0, 0x0, 0x0, 0x2)
         [sp + 0x10] = t7
         v1 = [sp + 0x20]         // t9
         a0 = 0
         a1 = 0 + 2
         [v1 + 0] = v0
         [sp + 0x10] = 0
         a3 = [sp + 0x38]
         call 0x800071a4          // 0x800071a4(0x0, 0x2, 0x0, 0x0)
         a2 = [sp + 0x34]
         v1 = [sp + 0x20]         // t9
         [v1 + 4] = v0
         t8 = [sp + 0x3c]
         [v1 + 8] = t8
         t9 = [sp + 0x40]
         [v1 + 0xc] = t9

    loc_0x8042cfa8: // orphan
         ra = [sp + 0x1c]         // t9
         v0 = [sp + 0x24]         // s4
         sp += 0x28
         ret                      // t9
         

    loc_0x80433834: // orphan
           // XREFS: CALL 0x821f8f44  CALL 0x833c84b0  CALL 0x833d387c  
           // XREFS: CALL 0x83b53078  CALL 0x83de1e30  CALL 0x83f7189c  
           // XREFS: CALL 0x83fdc350  CALL 0x83ff79f4  
         if                       // unlikely
         if                       // unlikely

    loc_0x80433840: // orphan
         if                       // fcn.80433e80+0x44 // unlikely
         if                       // unlikely

    loc_0x8043384c: // orphan
         if                       // fcn.80433800+0x750 // unlikely
         if                       // unlikely

    loc_0x80433858: // orphan
         if                       // fcn.80433800+0x81c // unlikely
         if                       // unlikely

    loc_0x80433864: // orphan
         
         if                       // fcn.80434068+0x1b4 // unlikely
         if                       // unlikely

    loc_0x80433874: // orphan
         if                       // fcn.80434408 // unlikely
         if                       // fcn.80434440+0x2c // unlikely

    loc_0x80433880: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80433894: // orphan
         if                       // fcn.80434844+0x154 // unlikely
         

    loc_0x8043389c: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804338c0: // orphan
         if                       // fcn.80434e04+0x30 // unlikely
         if                       // fcn.80434e04+0x44 // unlikely

    loc_0x804338cc: // orphan
         if                       // fcn.80434e04+0x6c // unlikely
         if                       // unlikely

    loc_0x804338d8: // orphan
         
         if                       // fcn.80434e04+0x13c // unlikely
         if                       // fcn.80434e04+0x150 // unlikely

    loc_0x804338e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804338f4: // orphan
         if                       // fcn.84085904-0x3c505bc // unlikely
         if                       // unlikely

    loc_0x80433900: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043390c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433918: // orphan
         if                       // fcn.8045664c-0x20bb0 // unlikely
         

    loc_0x80433920: // orphan
         
         if                       // fcn.8045664c-0x20aa4 // unlikely
         if                       // unlikely

    loc_0x80433930: // orphan
         if                       // fcn.84085904-0x3c4fc80 // unlikely
         if                       // fcn.84085904-0x3c4fc6c // unlikely

    loc_0x8043393c: // orphan
         if                       // fcn.80435c38+0xe8 // unlikely
         

    loc_0x80433944: // orphan
         if                       // fcn.84085904-0x3c4fc1c // unlikely
         if                       // fcn.80435c38+0x164 // unlikely

    loc_0x80433950: // orphan
         if                       // fcn.80435c38+0x1dc // unlikely
         if                       // fcn.80435c38+0x1f0 // unlikely

    loc_0x8043395c: // orphan
         
         
         
         
         if                       // unlikely
         if                       // fcn.8043603c+0x48 // unlikely

    loc_0x80433978: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433984: // orphan
         if                       // unlikely
         if                       // fcn.8045664c-0x20460 // unlikely

    loc_0x80433990: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043399c: // orphan
         
         
         if                       // fcn.80437900+0xf8 // unlikely
         if                       // fcn.80437900+0x11c // unlikely

    loc_0x804339b0: // orphan
         
         
         
         
         
         if                       // fcn.80454ed8-0x1d060 // unlikely
         if                       // unlikely

    loc_0x804339d0: // orphan
         // CODE XREF from fcn.8041e80c @ 0x8041f3dc
         if                       // fcn.80434844+0x3cb0 // unlikely
         if                       // fcn.80438644-0xdc // unlikely

    loc_0x804339dc: // orphan
         if                       // fcn.80454ed8-0x1c168 // unlikely
         if                       // fcn.80454ed8-0x1c144 // unlikely

    loc_0x804339e8: // orphan
         
         
         
         
         if                       // fcn.8043903c // unlikely
         if                       // fcn.80439040+0x10 // unlikely

    loc_0x80433a04: // orphan
         if                       // fcn.804550cc-0x1bfb4 // unlikely
         if                       // fcn.804550cc-0x1bf30 // unlikely

    loc_0x80433a10: // orphan
         if                       // fcn.804550cc-0x1bee8 // unlikely
         if                       // fcn.804390bc+0x18c // unlikely

    loc_0x80433a1c: // orphan
         if                       // unlikely
         if                       // fcn.804550cc-0x1bd38 // unlikely

    loc_0x80433a28: // orphan
         if                       // fcn.804550cc-0x1bcf0 // unlikely
         if                       // fcn.804393ec+0x34 // unlikely

    loc_0x80433a34: // orphan
         if                       // fcn.80439440+0x28 // unlikely
         if                       // fcn.80439440+0x6c // unlikely

    loc_0x80433a40: // orphan
         if                       // fcn.80439440+0xb4 // unlikely
         if                       // unlikely

    loc_0x80433a4c: // orphan
         if                       // fcn.804550cc-0x1bb1c // unlikely
         if                       // fcn.804550cc-0x1ba98 // unlikely

    loc_0x80433a58: // orphan
         if                       // unlikely
         if                       // fcn.804550cc-0x1b9ec // unlikely

    loc_0x80433a64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433a70: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433a7c: // orphan
         if                       // fcn.804550cc-0x1b7fc // unlikely
         if                       // unlikely

    loc_0x80433a88: // orphan
         if                       // fcn.804550cc-0x1b710 // unlikely
         if                       // fcn.804550cc-0x1b6dc // unlikely

    loc_0x80433a94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433aa0: // orphan
         if                       // fcn.804550cc-0x1b568 // unlikely
         if                       // unlikely

    loc_0x80433aac: // orphan
         if                       // fcn.8045664c-0x1ca5c // unlikely
         if                       // fcn.8045664c-0x1ca48 // unlikely

    loc_0x80433ab8: // orphan
         if                       // fcn.8045664c-0x1c9b0 // unlikely
         if                       // fcn.8045664c-0x1c9bc // unlikely

    loc_0x80433ac4: // orphan
         if                       // fcn.804550cc-0x1b314 // unlikely
         if                       // fcn.804550cc-0x1b2f0 // unlikely

    loc_0x80433ad0: // orphan
         if                       // fcn.8045664c-0x1c788 // unlikely
         if                       // fcn.8045664c-0x1c734 // unlikely

    loc_0x80433adc: // orphan
         
         
         if                       // fcn.8045664c-0x1c634 // unlikely
         if                       // unlikely

    loc_0x80433af0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433afc: // orphan
         
         
         
         
         if                       // fcn.8043a318-0x8 // unlikely
         if                       // fcn.8043a318+0xc // unlikely

    loc_0x80433b18: // orphan
         
         if                       // fcn.8043a318+0x118 // unlikely
         if                       // fcn.8043a318+0x12c // unlikely

    loc_0x80433b28: // orphan
         

    loc_0x80433b2c: // orphan
         if                       // fcn.8043a318+0x1a8 // unlikely
         if                       // unlikely

    loc_0x80433b38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433b44: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80433b54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433b60: // orphan
         if                       // fcn.8043ae58+0x7c // unlikely
         if                       // unlikely

    loc_0x80433b6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433b78: // orphan
         if                       // fcn.8043b044+0x58 // unlikely
         if                       // unlikely

    loc_0x80433b84: // orphan
         if                       // unlikely
         

    loc_0x80433b8c: // orphan
         if                       // fcn.8043b044+0x38c // unlikely
         if                       // unlikely

    loc_0x80433b98: // orphan
         if                       // fcn.8043b448+0x4 // unlikely
         if                       // fcn.8043b044+0x36c // unlikely

    loc_0x80433da4: // orphan
         if                       // fcn.8045664c-0x16ac4 // unlikely
         if                       // fcn.8045664c-0x16aa0 // unlikely

    loc_0x80433db0: // orphan
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80433dd8: // orphan
         
         if                       // fcn.80440848+0x38 // unlikely
         if                       // fcn.80440848+0x8c // unlikely

    loc_0x80433de8: // orphan
         
         
         
         if                       // fcn.80440bf4+0x4 // unlikely
         

    loc_0x80433dfc: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80433e18: // orphan
         

    loc_0x80433e1c: // orphan
         if                       // fcn.8044110c+0x64 // unlikely
         

    loc_0x80433e24: // orphan
         
         
         
         if                       // fcn.8045664c-0x15298 // unlikely
         if                       // fcn.8045664c-0x15284 // unlikely

    loc_0x80433e3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80433e48: // orphan
         
         
         
         if                       // fcn.804414f4+0x14 // unlikely
         

    loc_0x80433e5c: // orphan
         
         if                       // fcn.8045664c-0x14b88 // unlikely
         

    loc_0x80433e68: // orphan
         
         if                       // fcn.8045664c-0x1492c // unlikely
         

    loc_0x80433e74: // orphan
         
         
         

    loc_0x80434090: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043409c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340b4: // orphan
         if                       // fcn.80433834+0x12e00 // unlikely
         if                       // unlikely

    loc_0x804340c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804340fc: // orphan
         if                       // fcn.80446c58+0x34 // unlikely
         if                       // unlikely

    loc_0x80434108: // orphan
         if                       // fcn.80433834+0x13594 // unlikely
         if                       // unlikely

    loc_0x80434114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434120: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043412c: // orphan
         if                       // fcn.80447058+0x4 // unlikely
         if                       // unlikely

    loc_0x80434138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80434230: // orphan
         if                       // fcn.8043b044+0x10f6c // unlikely
         if                       // unlikely

    loc_0x8043423c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804348d0: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x80434d9c: // orphan
         
         
         if                       // fcn.8042b428+0x100 // unlikely
         

    loc_0x80434dac: // orphan
         
         
         
         
         
         
         
         
         if                       // fcn.8042b984+0x1cc // unlikely
         

    loc_0x80434dd4: // orphan
         
         if                       // fcn.8042bc30+0xc // unlikely
         if                       // unlikely

    loc_0x80434de4: // orphan
         if                       // fcn.8042c180+0x58 // unlikely
         if                       // fcn.8042c180+0x6c // unlikely

    loc_0x80434df0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80434e84: // orphan
         

    loc_0x804353ac: // orphan
         call 0x8007e9c0          // "\u01ee" // 0x8007e9c0(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x2c, sp
         lwc1 f14, 0x38, sp
         lwc1 f18, 0x40, sp
         mov.s f12, f0
         mul.s f6, f14, f14
         swc1 f12, 0x28, sp
         a0 = s0
         mul.s f8, f18, f18
         add.s f0, f6, f8
         sqrt.s f16, f0
         call 0x80035c90          // 0x80035c90(0x104, 0x442f71dcfe116408, 0x8, -1)
         swc1 f16, 0x24, sp
         mtc1 0, f14
         lwc1 f16, 0x24, sp
         lwc1 f2, 0x2c, sp
         lwc1 f12, 0x28, sp
         c.eq.s f16, f14
         at = 0x3f80 << 16
         lwc1 f4, 0x3c, sp
         bc1tl 0x80435504
         ra = [sp + 0x1c]         // t9
         mtc1 at, f10

    loc_0x80435408: // orphan
         mul.s f6, f2, f4
         lwc1 f8, 0x38, sp
         lwc1 f4, 0x40, sp
         div.s f0, f10, f16
         mul.s f10, f6, f8
         neg.s f6, f4
         mul.s f8, f6, f12
         sub.s f4, f8, f10
         mul.s f6, f4, f0

    loc_0x80435a24: // orphan
         v0 = 0

    loc_0x80435a28: // orphan
         // CODE XREF from fcn.8041e80c @ 0x8041f4a4
         t7 = [a1 + 0x20]         // t9
         t6 = halfword [a1 + 8]
         at = fcn.82e00000 << 16
         t8 = t7 << 2
         at += t8
         [at + 0x7620] = t6
         t4 = [a1 + 0x20]         // t9
         t9 = halfword [a1 + 0xa]
         at = fcn.82e00000 << 16
         t5 = t4 << 2
         at += t5
         [at + 0x77b0] = t9
         t8 = [a1 + 0x20]         // t9
         t7 = , unsigned  byte [a1 + 0x28] // s4
         at = fcn.82e00000 << 16
         t4 = t8 << 2
         at += t4
         t6 = t7 - 0x80
         [at + 0x7940] = t6
         t8 = [a1 + 0x20]         // t9
         t9 = , unsigned  byte [a1 + 0x29] // s4
         at = fcn.82e00000 << 16
         t5 = 0 + 0x80
         t6 = t8 << 2

    loc_0x80435bbc: // orphan
         unsigned , hi
         t7 = lo
         v1 = t0 + t7
         t4 = [v1 + 0x10]         // t9
         unsigned , hi
         t5 = lo
         
         
         div 0, t5, t2
         t9 = lo
         [v1 + 0x10] = t9
         if                       // likely
         

    loc_0x80436168: // orphan
         t5 = [t5 + 0x5650]       // t9
         bnel t5, 0, 0x80436198   // likely
         t9 = , unsigned  halfword [a1 + 2]

    loc_0x80436174: // orphan
         t6 = [v0 + 0]            // t9
         at = 0 + 6
         t7 = t6 << 2
         t7 += t6
         div 0, t7, at
         t8 = lo

    loc_0x8043618c: // orphan
         [v0 + 0] = t8
         
         t9 = , unsigned  halfword [a1 + 2]

    loc_0x80436198: // orphan
         v0 = 0
         t0 = t9 & 0xfffe

    loc_0x804361a0: // orphan
         ret                      // ra
         halfword [a1 + 2] = t0

    loc_0x80437efc: // orphan
         [sp + 0x1c] = ra
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 0x3c
         if                       // likely
         t6 = 0 + 1               // lo

    loc_0x80437f14: // orphan
         at = fcn.82e00000 << 16
         goto 0x80437f28
         [at + 0x5650] = t6

    loc_0x80437f20: // orphan
         // CODE XREF from fcn.80433834 @ 0x80437f0c
         at = fcn.82e00000 << 16
         [at + 0x5650] = 0

    loc_0x80437f28: // orphan
         // CODE XREF from fcn.80433834 @ 0x80437f18
         call 0x80002b24          // 0x80002b24(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = fcn.82e00000 << 16
         [sp + 0x24] = v0
         a1 += 0x4eb0
         call 0x80040e80          // 0x80040e80(0xff, 0x82e04eb0, 0x8, -1)
         a0 = v0                  // s4
         at = fcn.82e00000 << 16
         a1 = fcn.82e00000 << 16
         [at + 0x5654] = v0
         a1 += 0x4f1c
         call 0x80040e80          // 0x80040e80(0xff, 0x82e04f1c, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         at = fcn.82e00000 << 16
         a1 = fcn.82e00000 << 16
         [at + 0x5658] = v0
         a1 += 0x4f50
         call 0x80040e80          // 0x80040e80(0xff, 0x82e04f50, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         at = fcn.82e00000 << 16
         [at + 0x565c] = v0
         call 0x80003120          // 0x80003120(0xff, 0x82e04f50, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         a0 = 0
         a1 = 0 + 2
         a2 = 0 + 0x140
         a3 = 0 + 0xf0
         call 0x800071a4          // 0x800071a4(0x0, 0x2, 0x140, 0xf0)
         [sp + 0x10] = 0
         at = fcn.82e00000 << 16
         [at + 0x7600] = v0
         a0 = 0
         a1 = 0 + 2
         a2 = 0 + 0x140
         a3 = 0 + 0xf0
         call 0x800071a4          // 0x800071a4(0x0, 0x2, 0x140, 0xf0)
         [sp + 0x10] = 0
         at = fcn.82e00000 << 16
         [at + 0x7604] = v0
         a0 = 0
         a1 = 0 + 2
         a2 = 0 + 0x140
         a3 = 0 + 0xf0
         call 0x800071a4          // 0x800071a4(0x0, 0x2, 0x140, 0xf0)
         [sp + 0x10] = 0
         at = fcn.82e00000 << 16
         call 0x8003efe0          // 0x8003efe0(0x0, 0x2, 0x140, 0xf0)
         [at + 0x7608] = v0
         a0 = fcn.82e00000 << 16
         call 0x8003f018          // 0x8003f018(0x82e00000, 0x2, 0x140, 0xf0)
         a0 += 0x5660

    loc_0x80439548: // orphan
         mfc1 t8, f6
         ret                      // ra
         [v0 + 0x28] = t8

    loc_0x804397dc: // orphan
         mtc1 at, f2
         
         sub.s f16, f0, f2
         trunc.w.s f8, f16
         mfc1 v1, f8
         
         at = 0x437f << 16
         // CODE XREF from loc.80439514 @ +0x2c0
         t7 = v1 & 0xffff

    loc_0x80439868: // orphan
         t6 = v1 - a0
         mtc1 t6, f4
         t7 = [t4 + 0x10]         // t9
         at = 0x4334 << 16
         cvt.s.w f10, f4
         mtc1 at, f18
         mtc1 t7, f16
         at = 0x42b4 << 16
         cvt.s.w f8, f16
         mul.s f6, f10, f18
         mtc1 at, f10
         at = fcn.82e00000 << 16
         lwc1 f16, 0x55e8, at
         at = 0x3f00 << 16
         div.s f4, f6, f8
         mtc1 0, f6
         sub.s f18, f4, f10
         mul.s f0, f18, f16
         c.le.s f6, f0
         

    loc_0x804398e4: // orphan
         
         sub.s f10, f0, f2
         trunc.w.s f18, f10
         mfc1 v1, f18
         
         at = 0x437f << 16

    loc_0x80439aec: // orphan
         [sp + 0x18] = v0
         call 0x8004d690          // 0x8004d690(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x25
         at = fcn.82e00000 << 16
         [at + 0x75f4] = v0
         call 0x8004dc6c          // 0x8004dc6c(0x25, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xd0
         goto 0x80439bdc          // fcn.8045664c-0x1ca70
         [sp + 0x18] = v0

    loc_0x80439b78: // orphan
         at = fcn.82e00000 << 16

    loc_0x8043a04c: // orphan
         a1 |= 0x696f
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe116d6f, 0x8, -1)
         a0 = [fp + 0]
         a1 = fcn.82e00000 << 16
         a1 += 0x868
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e00868, 0x8, -1)
         a2 = 0
         a1 = 0x7469 << 16
         a1 |= 0x746c
         call 0x8005049c          // 0x8005049c(0xff, 0x7469746c, 0x0, -1)
         a0 = [fp + 0]
         s0 = fcn.82e00000 << 16
         s0 += 0x2378
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e02378, 0x0, -1)
         a2 = 0
         a1 = 0x615f << 16
         a1 |= 0x6231
         call 0x8005049c          // 0x8005049c(0xff, 0x615f6231, 0x0, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82e02378, 0x0, -1)
         a2 = 0 + 1               // lo
         a1 = 0x615f << 16
         a1 |= 0x6232
         call 0x8005049c          // 0x8005049c(0xff, 0x615f6232, 0x1, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82e02378, 0x1, -1)
         a2 = 0 + 2
         a1 = 0x615f << 16
         a1 |= 0x6233
         call 0x8005049c          // 0x8005049c(0xff, 0x615f6233, 0x2, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x82e02378, 0x2, -1)
         a2 = 0 + 3

    loc_0x8043a144: // orphan
         a2 = [v1 + 0x24]         // t9
         a3 = [v1 + 0x38]         // t9
         t0 = [v1 + 0x4c]         // t9
         v0 = [v1 + 0x10]         // t9
         v1 += 0x50
         t7 = a2 - a1
         t8 = a3 - a1
         t9 = t0 - a1
         t6 = v0 - a1
         [v1 - 0xc] = t9
         [v1 - 0x20] = t8
         [v1 - 0x34] = t7
         [v1 - 0x3c] = 0
         [v1 - 0x38] = a0
         [v1 - 0x28] = 0
         [v1 - 0x24] = a0
         [v1 - 0x14] = 0
         [v1 - 0x10] = a0
         [v1 - 0x50] = 0
         [v1 - 0x4c] = a0
         [v1 - 0x48] = t6

    loc_0x8043a198: // orphan
         [v1 - 0x30] = a2
         [v1 - 0x1c] = a3
         [v1 - 8] = t0
         if                       // likely
         [v1 - 0x44] = v0

    loc_0x8043a1ac: // orphan
         ret                      // ra
         

    loc_0x8043a4d4: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         if                       // fcn.8045664c-0x1c148 // unlikely
         [sp + 0x1c] = a1

    loc_0x8043af18: // orphan
         sc 0, 0x1001, t8
         
         sc 0, 0x1e01, s0
         
         sd ra, -1, a3
         sd fp, -0x483, ra
         sc 0, 0x1c, s0

    loc_0x8043b004: // orphan
         
         

    loc_0x8043b100: // orphan
         

    loc_0x8043b114: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b120: // orphan
         if                       // fcn.80433c00+0x9414 // unlikely
         if                       // fcn.80433c00+0x9428 // unlikely

    loc_0x8043b138: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b144: // orphan
         if                       // fcn.8043d3cc+0xc // unlikely
         if                       // unlikely

    loc_0x8043b3e4: // orphan
         if                       // fcn.804414cc+0x1c // unlikely
         if                       // fcn.804414f4+0x18 // unlikely

    loc_0x8043cecc: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8043d200: // orphan
         [sp + 0x1c] = ra
         if                       // unlikely
         t7 = , signed  t6 >> 1

    loc_0x80440534: // orphan
         at = a1                  // t0

    loc_0x80441098: // orphan
         a0 += 0x24               // arg1

    loc_0x80441424: // orphan
         a2 = 0x8292 << 16
         if                       // fcn.8044143c // fcn.8044143c // likely
         a2 -= 0x63f0             // arg3

    loc_0x80441430: // orphan
         a1 = 0 + 1               // arg2 // lo
         [a2 + 0] = a1            // arg3

    loc_0x80446610: // orphan
         t8 = 0x8292 << 16
         [sp + 0x18] = s0
         t8 -= 0x5840
         t7 <<= 2
         s0 = t7 + t8
         t2 = [s0 + 0]
         [sp + 0x1c] = ra
         [sp + 0x30] = a0
         [sp + 0x34] = a1
         t3 = [t2 + 0x38]         // t9
         t9 = [sp + 0x34]
         t1 = 0x8291 << 16
         t4 = [t3 + 8]
         t1 += 0x37a8

    loc_0x80446ad8: // orphan
         [sp + 0x14] = ra
         v0 = t6 + t7
         t8 = 0 + 1               // lo
         byte [v0 + 0x1a2] = t8
         [sp + 0x1c] = v0
         call fcn.8290a3c4
         [sp + 0x20] = a0
         call fcn.8290a208
         a0 = [sp + 0x20]         // t9
         v0 = [sp + 0x1c]
         v1 = 0x8292 << 16
         v1 -= 0x5840
         t9 = , unsigned  byte [v0 + 6] // s4
         ra = [sp + 0x14]
         t0 = t9 | 0x10           // s4

    loc_0x80446db4: // orphan
         a0 = 0 + 8               // arg1 // a2
         call fcn.8290a5b0        // fcn.8290a5b0(0x8)
         a0 = 0 + 2
         t7 = 0x8292 << 16
         t7 = [t7 - 0x47a8]
         ra = [sp + 0x14]

}

*/
