/*
 * Function: 0x8043644c
 * Category: math
 */

// Decompiled C code
int fcn.8045664c (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.8045664c (int esi, int edx) {
    loc_0x80435698:
        mul.s f6, f14, f4
        sub.s f8, f18, f6
        mul.s f4, f20, f10
        sub.s f18, f8, f4
        mul.s f0, f18, f2
        0x804356ac
        mul.s f12, f12, f2
        0x804356b4
        mul.s f14, f14, f2
        0x804356bc
        mul.s f20, f20, f2
        mtc1 0, f2
        mul.s f6, f12, f22
        swc1 f2, 0x2c, a0 // arg1
        swc1 f2, 0x1c, a0 // arg1
        mul.s f8, f12, f24
        swc1 f2, 0xc, a0 // arg1
        mul.s f4, f12, f26
        add.s f10, f6, f16
        mul.s f18, f14, f22
        swc1 f8, 4, a0 // arg1
        mul.s f6, f14, f24
        swc1 f4, 8, a0 // arg1
        swc1 f10      // arg1
        mul.s f8, f14, f26
        swc1 f18, 0x10, a0 // arg1
        mul.s f4, f20, f22
        add.s f10, f6, f16
        mul.s f18, f20, f24
        swc1 f8, 0x18, a0 // arg1
        mul.s f6, f20, f26
        swc1 f4, 0x20, a0 // arg1
        swc1 f10, 0x14, a0 // arg1
        mul.s f8, f0, f22
        swc1 f18, 0x24, a0 // arg1
        mul.s f4, f0, f24
        add.s f10, f6, f16
        mul.s f18, f0, f26
        swc1 f8, 0x30, a0 // arg1
        swc1 f10, 0x28, a0 // arg1
        swc1 f4, 0x34, a0 // arg1
        swc1 f18, 0x38, a0 // arg1
         // do {
    loc_0x80435740:
        // CODE XREF from fcn.84085904 @ 0x80435664
        ra = [sp + 0x34]
        ldc1 f20, 0x10, sp
        ldc1 f22, 0x18, sp
        ldc1 f24, 0x20, sp
        ldc1 f26, 0x28, sp
        ret
        sp += 0x38
         // } while (?);
        }
        return eax;
    loc_0x80435824: // orphan
             sub.s f4, f16, f18
             ret                      // ra
             swc1 f4, 4, a0           // arg1

    loc_0x8043586c: // orphan
         lwc1 f4, 4, a3           // arg4
         lwc1 f6, 4, a0           // arg1
         sub.s f16, f8, f10
         t7 = [sp + 0x14]
         v1 = 0 + 1               // lo
         sub.s f8, f4, f6
         mul.s f18, f2, f16
         sub.s f4, f0, f12
         mul.s f10, f14, f8
         add.s f16, f18, f10
         div.s f6, f16, f4
         swc1 f6
         lwc1 f18, 4, a3          // arg4
         lwc1 f8, 4, a0           // arg1
         t8 = [sp + 0x10]
         lwc1 f6                  // arg4
         sub.s f10, f8, f18
         lwc1 f8                  // arg1
         lwc1 f16
         sub.s f18, f6, f8
         mul.s f4, f16, f10
         lwc1 f16, 4, t8
         sub.s f8, f12, f0
         mul.s f10, f16, f18
         add.s f6, f4, f10
         div.s f16, f6, f8
         swc1 f16                 // arg3
         ret                      // ra
         v0 = v1                  // lo

    loc_0x80435a88: // orphan
         at += t6
         t7 = t5 - t9
         [at + 0x7ad0] = t7
         t7 = [a1 + 0x20]         // arg2 // t9
         a3 = 0 + 0xc             // arg4

    loc_0x80435a9c: // orphan
         t4 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         unsigned , hi
         t9 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         a2 = fcn.82e00000 << 16
         t5 = t4 << 8
         a2 += 0x7130             // arg3
         t8 = t5 + t9
         t1 = 0 + 0x14
         t0 = fcn.82e00000 << 16
         t0 += 0x5968
         t6 = lo
         t4 = a2 + t6             // arg3
         [t4 + 8] = t8
         t8 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t5 = , unsigned  byte [a1 + 0x2e] // arg2 // s4
         t7 = , unsigned  byte [a1 + 0x2f] // arg2 // s4
         t4 = t8 << 8
         t8 = [a1 + 0x20]         // arg2 // t9
         t9 = t5 << 8
         t6 = t9 + t7
         unsigned , hi
         t9 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t5 = t6 - t4             // s4
         t7 = t5 - t9
         t6 = lo
         t4 = t0 + t6
         [t4 + 0x10] = t7
         t5 = [a1 + 0x20]         // arg2 // t9
         t6 = fcn.82e00000 << 16
         unsigned , hi            // lo // lo // t9 // s2
         t9 = lo
         t8 = a2 + t9             // arg3
         [t8 + 4] = a1
         t6 = [t6 + 0x5650]
         bnel t6, 0, 0x80435be0   // likely
         t8 = , unsigned  halfword [a1 + 2]

    loc_0x80435b2c: // orphan
         t7 = [a1 + 0x20]         // arg2 // t9
         t3 = 0 + 5
         t2 = 0 + 6
         unsigned , hi            // lo // lo // t9 // s2
         t4 = lo
         v0 = a2 + t4             // arg3
         t5 = [v0 + 8]            // t9
         unsigned , hi
         t9 = lo
         
         
         div 0, t9, t2
         t8 = lo
         [v0 + 8] = t8
         t6 = [a1 + 0x20]         // arg2 // t9
         if                       // likely
         

    loc_0x80435b70: // orphan
         break 7

    loc_0x80435b74: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80435b80: // orphan
         if                       // likely
         

    loc_0x80435b88: // orphan
         break 6

    loc_0x80435b8c: // orphan
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
         

    loc_0x80435bc0: // orphan
         break 7

    loc_0x80435bc4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80435bd0: // orphan
         if                       // likely
         

    loc_0x80435bd8: // orphan
         break 6

    loc_0x80435bdc: // orphan
         t8 = , unsigned  halfword [a1 + 2]

    loc_0x80435be0: // orphan
         v0 = 0
         t6 = t8 & 0xfffe
         ret                      // ra
         halfword [a1 + 2] = t6   // arg2

    loc_0x80435c50: // orphan
         if                       // fcn.80435c38+0xe8 // unlikely
         

    loc_0x80435c58: // orphan
         v1 = v0 << 2
         t7 += v1
         t7 = [t7 + 0x7940]       // t9
         a2 = 0 + 0xa             // arg3
         t6 = fcn.82e00000 << 16

    loc_0x80435eb4: // orphan
         t1 += 0x5968
         t9 = [t8 + 8]
         t6 = [a3 + 0]            // t9
         a0 = t0 + t1
         a2 = [a0 + 4]            // t9
         v0 = t6 - t9
         at = , v0 < a2           // lo
         beql at, 0, 0x80435fa8   // unlikely
         v1 = [a0 + 8]            // t9

    loc_0x80435ed8: // orphan
         mtc1 v0, f6
         t2 = [a0 + 0]            // t9
         at = 0x4334 << 16
         cvt.s.w f8, f6
         mtc1 at, f4
         t3 = a2 - t2
         mtc1 t3, f16
         at = 0x42b4 << 16
         mul.s f10, f4, f8
         mtc1 at, f4
         at = fcn.82e00000 << 16
         cvt.s.w f18, f16
         lwc1 f16, 0x55ac, at
         at = 0x3f00 << 16
         div.s f6, f10, f18
         mtc1 0, f10
         sub.s f8, f6, f4
         mul.s f0, f8, f16
         c.le.s f10, f0
         
         bc1fl 0x80435f54
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         
         add.s f18, f0, f2
         trunc.w.s f6, f18
         mfc1 v0, f6
         goto 0x80435f6c
         at = 0x437f << 16

    loc_0x80435f6c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80435f48
         t7 = v0 & 0xffff         // s4
         mtc1 at, f0
         t8 = , signed  t7 >> 4
         t6 = t8 << 2
         at = 0x8008 << 16
         at += t6
         lwc1 f16, 0x7e50, at
         mul.s f10, f16, f2
         add.s f18, f10, f2
         mul.s f6, f18, f0
         trunc.w.s f4, f6
         mfc1 v1, f4
         goto 0x804360b0          // fcn.8043603c+0x74
         v0 = , unsigned  byte [a1 + 0] // s4

    loc_0x80435fa8: // orphan
         at = , v0 < v1           // lo
         beql at, 0, 0x80435fc0   // unlikely
         a2 = [a0 + 0xc]          // t9

    loc_0x80435fb4: // orphan
         goto 0x804360ac
         v1 = 0 + 0xff            // s4

    loc_0x80435fc0: // orphan
         t0 = v0 - v1
         at = , v0 < a2
         beql at, 0, 0x804360a0   // likely
         t6 = , unsigned  halfword [a1 + 2]

    loc_0x80435fd0: // orphan
         mtc1 t0, f16
         at = 0x4334 << 16
         mtc1 at, f8
         cvt.s.w f10, f16
         t1 = a2 - v1
         mtc1 t1, f6
         at = 0x42b4 << 16
         cvt.s.w f4, f6
         mul.s f18, f8, f10
         mtc1 at, f8
         at = fcn.82e00000 << 16
         lwc1 f6, 0x55b0, at
         at = 0x3f00 << 16
         div.s f16, f18, f4
         mtc1 0, f18
         sub.s f10, f16, f8
         mul.s f0, f10, f6
         c.le.s f18, f0
         
         bc1fl 0x80436048
         mtc1 at, f2
         at = 0x3f00 << 16

    loc_0x80436028: // orphan
         mtc1 at, f2
         
         add.s f4, f0, f2
         trunc.w.s f16, f4

    loc_0x804360a0: // orphan
         v1 = 0
         t9 = t6 & 0xfffe
         halfword [a1 + 2] = t9

    loc_0x804360ac: // orphan
         // CODE XREF from fcn.8045664c @ 0x80435fb4
         v0 = , unsigned  byte [a1 + 0] // s4

    loc_0x804361e8: // orphan
         at = 0 + 1               // lo

    loc_0x804361ec: // orphan
         if                       // unlikely
         

    loc_0x804361f4: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80436250: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80436314: // orphan
         if                       // likely
         

    loc_0x8043631c: // orphan
         break 7

    loc_0x80436320: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8043632c: // orphan
         if                       // likely
         

    loc_0x80436334: // orphan
         break 6

    loc_0x80436338: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436324, 0x8043632c
         t2 = lo
         at = fcn.82e00000 << 16
         [at + 0x593c] = t2
         t3 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t5 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t9 = , unsigned  byte [a1 + 0x29] // arg2 // s4
         t4 = t3 << 8
         t6 = t4 + t5
         unsigned , hi
         t7 = lo
         
         
         div 0, t7, v1
         t8 = lo
         if                       // likely
         

    loc_0x80436378: // orphan
         break 7

    loc_0x8043637c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436370
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436388: // orphan
         if                       // likely
         

    loc_0x80436390: // orphan
         break 6

    loc_0x80436394: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436380, 0x80436388
         unsigned , hi            // t3 // t3
         t0 = lo
         
         
         div 0, t0, v1
         if                       // likely
         

    loc_0x804363ac: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436380, 0x80436388
         unsigned , hi            // t3 // t3
         t0 = lo
         
         
         div 0, t0, v1
         if                       // likely
         

    loc_0x804363b0: // orphan
         break 7

    loc_0x804363b4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804363a8
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x804363c0: // orphan
         if                       // likely
         

    loc_0x804363c8: // orphan
         break 6

    loc_0x804363cc: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804363b8, 0x804363c0
         t1 = lo
         t2 = t8 - t1
         at = fcn.82e00000 << 16
         [at + 0x5940] = t2
         t3 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t5 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t4 = t3 << 8
         t6 = t4 + t5
         unsigned , hi
         t7 = lo
         
         
         div 0, t7, v1
         if                       // likely
         

    loc_0x80436408: // orphan
         break 7

    loc_0x8043640c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436400
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436418: // orphan
         if                       // likely
         

    loc_0x80436420: // orphan
         break 6

    loc_0x80436424: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436410, 0x80436418
         t9 = lo
         at = fcn.82e00000 << 16
         [at + 0x5944] = t9
         t0 = , unsigned  byte [a1 + 0x28] // arg2 // s4
         unsigned , hi
         t8 = lo
         // CALL XREF from fcn.838658a0 @ +0x338
         
         
         div 0, t8, v1
         if                       // likely
         

    loc_0x80436450: // orphan
         break 7

    loc_0x80436454: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436448
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436460: // orphan
         if                       // likely
         

    loc_0x80436468: // orphan
         break 6

    loc_0x8043646c: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436458, 0x80436460
         t1 = lo
         at = fcn.82e00000 << 16
         [at + 0x5948] = t1
         t2 = , unsigned  byte [a1 + 0x29] // arg2 // s4
         unsigned , hi
         t3 = lo
         
         
         div 0, t3, v1
         if                       // likely
         

    loc_0x80436498: // orphan
         break 7

    loc_0x8043649c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436490
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x804364a8: // orphan
         if                       // likely
         

    loc_0x804364b0: // orphan
         break 6

    loc_0x804364b4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804364a0, 0x804364a8
         at = fcn.82e00000 << 16
         t4 = lo
         [at + 0x594c] = t4
         goto fcn.8043683c        // fcn.8043683c(-1)
         t4 = , unsigned  halfword [a1 + 2]

    loc_0x80436540: // orphan
         at = fcn.82e00000 << 16
         t3 = t2 << 8

    loc_0x80436548: // orphan
         t5 = t3 + t4
         [at + 0x6150] = t5
         t6 = , unsigned  byte [a1 + 0x2e] // arg2 // s4
         t9 = , unsigned  byte [a1 + 0x2f] // arg2 // s4
         t8 = fcn.82e00000 << 16
         t8 = [t8 + 0x5650]
         t7 = t6 << 8
         t0 = t7 + t9
         if                       // likely
         [at + 0x6154] = t0

    loc_0x80436570: // orphan
         t1 = , unsigned  byte [a1 + 0x28] // arg2 // s4
         v0 = 0 + 5

    loc_0x80436578: // orphan
         v1 = 0 + 6
         unsigned , hi            // s4 // s4
         t2 = lo
         
         
         div 0, t2, v1
         if                       // likely
         

    loc_0x80436598: // orphan
         break 7

    loc_0x8043659c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436590
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x804365a8: // orphan
         if                       // likely
         

    loc_0x804365b0: // orphan
         break 6

    loc_0x804365b4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804365a0, 0x804365a8
         t3 = lo
         at = fcn.82e00000 << 16
         [at + 0x5954] = t3
         t4 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t6 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t8 = , unsigned  byte [a1 + 0x29] // arg2 // s4
         t5 = t4 << 8
         t7 = t5 + t6
         unsigned , hi
         t9 = lo
         
         
         div 0, t9, v1
         t0 = lo
         if                       // likely
         

    loc_0x804365f4: // orphan
         break 7

    loc_0x804365f8: // orphan
         // CODE XREF from fcn.8045664c @ 0x804365ec
         at = 0 - 1               // s2

    loc_0x804365fc: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436604: // orphan
         if                       // likely
         

    loc_0x8043660c: // orphan
         break 6

    loc_0x80436610: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804365fc, 0x80436604
         unsigned , hi            // t3 // t3
         t1 = lo
         
         
         div 0, t1, v1
         if                       // likely
         

    loc_0x8043662c: // orphan
         break 7

    loc_0x80436630: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436624
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8043663c: // orphan
         if                       // likely
         

    loc_0x80436644: // orphan
         break 6

    loc_0x80436648: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436634, 0x8043663c
         t2 = lo
         t3 = t0 - t2
         at = fcn.82e00000 << 16
         [at + 0x5958] = t3
         t4 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t6 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t5 = t4 << 8
         t7 = t5 + t6
         unsigned , hi
         t9 = lo
         
         
         div 0, t9, v1
         if                       // likely
         

    loc_0x80436684: // orphan
         break 7

    loc_0x80436688: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043667c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436694: // orphan
         if                       // likely
         

    loc_0x8043669c: // orphan
         break 6

    loc_0x804366a0: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8043668c, 0x80436694
         t8 = lo
         at = fcn.82e00000 << 16
         [at + 0x595c] = t8
         t1 = , unsigned  byte [a1 + 0x28] // arg2 // s4
         unsigned , hi
         t0 = lo
         
         
         div 0, t0, v1
         if                       // likely
         

    loc_0x804366cc: // orphan
         break 7

    loc_0x804366d0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804366c4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x804366dc: // orphan
         if                       // likely
         

    loc_0x804366e4: // orphan
         break 6

    loc_0x804366e8: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804366d4, 0x804366dc
         t2 = lo
         at = fcn.82e00000 << 16
         [at + 0x5960] = t2
         t3 = , unsigned  byte [a1 + 0x29] // arg2 // s4
         unsigned , hi
         t4 = lo

    loc_0x80436700: // orphan
         
         
         div 0, t4, v1
         if                       // likely
         

    loc_0x80436714: // orphan
         break 7

    loc_0x80436718: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043670c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436724: // orphan
         if                       // likely
         

    loc_0x8043672c: // orphan
         break 6

    loc_0x80436730: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8043671c, 0x80436724
         t5 = lo
         at = fcn.82e00000 << 16
         [at + 0x5964] = t5
         t6 = , unsigned  byte [a1 + 0x2a] // arg2 // s4
         t9 = , unsigned  byte [a1 + 0x2b] // arg2 // s4
         t7 = t6 << 8
         t8 = t7 + t9
         unsigned , hi
         t1 = lo
         
         
         div 0, t1, v1
         if                       // likely
         

    loc_0x80436768: // orphan
         break 7

    loc_0x8043676c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436760
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436778: // orphan
         if                       // likely
         

    loc_0x80436780: // orphan
         break 6

    loc_0x80436784: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436770, 0x80436778
         t0 = lo
         at = fcn.82e00000 << 16
         [at + 0x6144] = t0
         t2 = , unsigned  byte [a1 + 0x2c] // arg2 // s4
         t4 = , unsigned  byte [a1 + 0x2d] // arg2 // s4
         t3 = t2 << 8
         t5 = t3 + t4
         unsigned , hi
         t6 = lo
         
         
         div 0, t6, v1
         if                       // likely
         

    loc_0x804367bc: // orphan
         break 7

    loc_0x804367c0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804367b4
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x804367cc: // orphan
         if                       // likely
         

    loc_0x804367d4: // orphan
         break 6

    loc_0x804367d8: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804367c4, 0x804367cc
         t7 = lo
         at = fcn.82e00000 << 16
         [at + 0x6150] = t7
         t9 = , unsigned  byte [a1 + 0x2e] // arg2 // s4
         t1 = , unsigned  byte [a1 + 0x2f] // arg2 // s4
         t8 = t9 << 8
         t0 = t8 + t1
         unsigned , hi
         t2 = lo

    loc_0x804367fc: // orphan
         
         
         div 0, t2, v1
         if                       // likely
         

    loc_0x80436810: // orphan
         break 7

    loc_0x80436814: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436808
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80436820: // orphan
         if                       // likely
         

    loc_0x80436828: // orphan
         break 6

    loc_0x8043682c: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80436818, 0x80436820
         t3 = lo
         at = fcn.82e00000 << 16
         [at + 0x6154] = t3

    loc_0x80436838: // orphan
         // CODE XREF from fcn.8045664c @ 0x80436568
         t4 = , unsigned  halfword [a1 + 2]

    loc_0x804368c8: // orphan
         t4 = , unsigned  byte [a2 + 0x2a] // arg3 // s4
         at = fcn.82e00000 << 16
         t7 = t5 << 2
         at += t7
         [at + 0x7f80] = t4
         t8 = [a2 + 0x20]         // arg3 // t9
         t6 = , unsigned  byte [a2 + 0x2b] // arg3 // s4
         at = 0x82e1 << 16
         t2 = t8 << 2
         at += t2
         [at - 0x7ef0] = t6
         t9 = , unsigned  byte [a2 + 0x2c] // arg3 // s4
         t8 = [a2 + 0x20]         // arg3 // t9

    loc_0x804368fc: // orphan
         // CODE XREF from fcn.80434844 @ 0x8041f4f8
         t5 = , unsigned  byte [a2 + 0x2d] // arg3 // s4
         a0 = 0x82e1 << 16
         t3 = t9 << 8
         a0 -= 0x7d60             // arg1
         t6 = t8 << 2
         t4 = t3 + t5
         t7 = t4 - 1
         t2 = a0 + t6             // arg1
         [t2 + 0] = t7
         t9 = , unsigned  byte [a2 + 0x2e] // arg3 // s4
         t6 = [a2 + 0x20]         // arg3 // t9
         t5 = , unsigned  byte [a2 + 0x2f] // arg3 // s4
         s5 = 0x82e1 << 16
         t3 = t9 << 8
         s5 -= 0x7bd0
         t7 = t6 << 2
         t4 = t3 + t5
         t8 = t4 - 1
         t2 = s5 + t7
         [t2 + 0] = t8
         t3 = [a2 + 0x20]         // arg3 // t9
         at = 0x82e1 << 16
         t9 = 0 + 1               // lo
         t5 = t3 << 2
         at += t5
         [at - 0x7720] = t9
         v1 = [a2 + 0x20]         // arg3 // t9
         t2 = fcn.82e00000 << 16
         t2 += 0x6168
         s3 = v1 << 2

    loc_0x80436974: // orphan
         t4 = a0 + s3             // arg1
         s1 = [t4 + 0]            // t9
         t6 = s5 + s3
         t7 = [t6 + 0]            // t9
         t8 = s1 << 2
         s0 = t8 + t2
         at = , t7 < s1
         if                       // fcn.804369c4+0x14 // unlikely
         

    loc_0x80436998: // orphan
         [sp + 0x5c] = a2
         a0 = 0 + 0x35            // arg1

    loc_0x80436ab0: // orphan
         goto 0x80436ad4
         s3 <<= 2

    loc_0x80436ad4: // orphan
         // CODE XREFS from fcn.8045664c @ 0xcc, 0x80436ab0
         a1 = fcn.82e00000 << 16
         a2 = fcn.82e00000 << 16
         a3 = fcn.82e00000 << 16
         a3 += s3                 // arg4
         a2 += s3                 // arg3
         a1 += s3                 // arg2
         t4 = 0 + 0xff            // s4
         [sp + 0x10] = t4
         a1 = [a1 + 0x7c60]       // arg2 // t9
         a2 = [a2 + 0x7df0]       // arg3 // t9
         a3 = [a3 + 0x7f80]       // arg4 // t9
         call 0x80049770          // 0x80049770(-1, -1, -1, -1)
         a0 = 0
         t6 = 0 + 0xff            // s4
         [sp + 0x10] = t6
         a0 = 0
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x80049828          // 0x80049828(0x0, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         t0 = [sp + 0x5c]         // a2
         a0 = 0x82e1 << 16
         s5 = 0x82e1 << 16
         v1 = [t0 + 0x20]         // t9
         s5 -= 0x7bd0
         a0 -= 0x7d60

    loc_0x80436b3c: // orphan
         s3 = v1 << 2
         t7 = a0 + s3
         t8 = s5 + s3
         t2 = [t8 + 0]            // t9
         s1 = [t7 + 0]            // t9
         s4 = 0
         s2 = 0
         at = , t2 < s1
         if                       // fcn.80436c2c+0x84 // unlikely
         t3 = s1 << 2

    loc_0x80436b64: // orphan
         s0 = s6 + t3
         fp = 0 + 0x1e0
         s7 = 0 + 0xa

    loc_0x80439a80: // orphan
         at += t6
         t6 = [at + 0x55f0]       // t9

    loc_0x80439a88: // orphan
         goto t6
         

    loc_0x80439b1c: // orphan
         [at + 0x75f4] = v0
         call 0x8004dc6c          // 0x8004dc6c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xcf
         goto 0x80439bdc
         [sp + 0x18] = v0

    loc_0x80439b68: // orphan
         goto 0x80439bdc
         [sp + 0x18] = v0

    loc_0x80439bdc: // orphan
         // CODE XREF from fcn.804550cc @ 0x80439ac8
         // CODE XREF from fcn.80433834 @ 0x80439b08
         // CODE XREFS from fcn.8045664c @ 0x80439b28, 0x80439b68
         // CODE XREF from fcn.804550cc @ 0x80439b88
         a0 = [sp + 0x18]         // s4
         call 0x8004dcfc          // 0x8004dcfc(0xff, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x80002b24          // 0x80002b24(0xff, 0x0, 0x8, -1)
         
         a0 = v0                  // s4
         call 0x800030d0          // 0x800030d0(0xff, 0x0, 0x8, -1)
         a1 = 0
         [sp + 0x1c] = v0
         a0 = v0                  // s4

    loc_0x80439c04: // orphan
         call 0x8004eb58          // 0x8004eb58(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0x18]         // s4
         at = fcn.82e00000 << 16
         [at + 0x760c] = v0
         call 0x80003120          // 0x80003120(-1, 0xff, 0x8, -1)

    loc_0x80439c18: // orphan
         a0 = [sp + 0x1c]         // s4
         call fcn.82e0424c        // fcn.82e0424c(0xff, 0x442f71dcfe116408)
         a0 = [sp + 0x20]
         call 0x82e04734          // 0x82e04734(0x0, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80439c7c: // orphan
         t9 = [t7 + 0]

    loc_0x80439c80: // orphan
         t7 += 0xc
         t6 += 0xc
         [t6 - 0xc] = t9
         t8 = [t7 - 8]            // t9

    loc_0x80439c90: // orphan
         [t6 - 8] = t8
         t9 = [t7 - 4]
         if                       // likely
         [t6 - 4] = t9

    loc_0x80439ca0: // orphan
         t9 = [t7 + 0]
         t8 = [t7 + 4]            // t9
         at = , unsigned  , a0 < 0xb // arg1

    loc_0x80439cac: // orphan
         [t6 + 0] = t9
         if                       // unlikely
         [t6 + 4] = t8

    loc_0x80439cb8: // orphan
         t1 = a0 << 2             // arg1
         at = fcn.82e00000 << 16
         at += t1
         t1 = [at + 0x561c]       // t9
         goto t1                  // t9
         

    loc_0x80439e80: // orphan
         s3 = [sp + 0x48]
         at = 0x675f << 16
         at |= 0x3030
         s0 = 0
         s1 = [sp + 0x40]
         s3 += at

    loc_0x80439e98: // orphan
         a0 = [fp + 0]
         call 0x8005049c          // 0x8005049c(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = s3 + s0
         a0 = v0                  // s4

    loc_0x80439ea8: // orphan
         a1 = s2
         call 0x8004e308          // 0x8004e308(-1, -1, 0x8, -1)
         a2 = s1
         s0 += 1
         if                       // likely
         s1 += 1

    loc_0x80439ec0: // orphan
         t0 = [sp + 0x48]
         t6 = [sp + 0x40]
         t7 = t0 + 0x100
         t8 = t6 + 0xa
         [sp + 0x40] = t8

    loc_0x80439ed4: // orphan
         if                       // unlikely
         [sp + 0x48] = t7

    loc_0x80439edc: // orphan
         a1 = 0x706f << 16
         a1 |= 0x5f31             // arg2
         call 0x8005049c          // 0x8005049c(-1, 0x706f5f31, 0x8, -1)
         a0 = [fp + 0]
         s0 = fcn.82e00000 << 16
         s0 += 0x17e0
         a1 = s0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e017e0, 0x8, -1)
         a2 = 0
         a1 = 0x706f << 16
         a1 |= 0x5f32
         call 0x8005049c          // 0x8005049c(0xff, 0x706f5f32, 0x0, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4

    loc_0x80439f18: // orphan
         a1 = s0
         call 0x8004e308          // 0x8004e308(-1, 0x104, 0x8, -1)
         a2 = 0 + 1               // lo
         a1 = 0x706f << 16

    loc_0x80439f28: // orphan
         a1 |= 0x5f33
         call 0x8005049c          // 0x8005049c(-1, 0x442f71dcfe117f3b, 0x8, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x104, 0x8, -1)

    loc_0x80439f40: // orphan
         a2 = 0 + 2
         a1 = 0x3230 << 16
         a1 |= 0x666f
         call 0x8005049c          // 0x8005049c(-1, 0x3230666f, 0x2, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x104, 0x2, -1)
         a2 = 0 + 3
         a1 = 0x3234 << 16
         a1 |= 0x666f
         call 0x8005049c          // 0x8005049c(0xff, 0x3234666f, 0x3, -1)
         a0 = [fp + 0]
         a0 = v0                  // s4
         a1 = s0
         call 0x8004e308          // 0x8004e308(0xff, 0x104, 0x3, -1)
         a2 = 0 + 4
         a1 = 0x696d << 16
         a1 |= 0x6731
         call 0x8005049c          // 0x8005049c(0xff, 0x696d6731, 0x4, -1)
         a0 = [fp + 0]
         a1 = fcn.82e00000 << 16
         a1 += 0x1898
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e01898, 0x4, -1)
         a2 = 0
         a1 = 0x655f << 16
         a1 |= 0x696f
         call 0x8005049c          // 0x8005049c(0xff, 0x655f696f, 0x0, -1)

    loc_0x80439fb4: // orphan
         a0 = [fp + 0]
         a1 = fcn.82e00000 << 16
         a1 += 0x1a00
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e01a00, 0x8, -1)
         a2 = 0
         a1 = 0x655f << 16
         a1 |= 0x7370
         call 0x8005049c          // 0x8005049c(0xff, 0x655f7370, 0x0, -1)
         a0 = [fp + 0]
         a1 = fcn.82e00000 << 16
         a1 += 0x248c
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e0248c, 0x0, -1)
         a2 = 0
         a1 = 0x656e << 16
         a1 |= 0x6467
         call 0x8005049c          // 0x8005049c(0xff, 0x656e6467, 0x0, -1)
         a0 = [fp + 0]
         a1 = fcn.82e00000 << 16
         a1 += 0x19b0
         a0 = v0                  // s4
         call 0x8004e308          // 0x8004e308(0xff, 0x82e019b0, 0x0, -1)
         a2 = 0
         goto 0x8043a0f8
         ra = [sp + 0x3c]

    loc_0x8043a0f4: // orphan
         ra = [sp + 0x3c]

    loc_0x8043a0f8: // orphan
         // CODE XREF from fcn.804550cc @ 0x80439e58
         // CODE XREF from fcn.8045664c @ 0x8043a014
         s0 = [sp + 0x18]         // s4
         s1 = [sp + 0x1c]         // s4
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         s5 = [sp + 0x2c]

    loc_0x8043a110: // orphan
         s6 = [sp + 0x30]
         s7 = [sp + 0x34]
         fp = [sp + 0x38]
         ret                      // ra
         sp += 0x60

    loc_0x8043a23c: // orphan
         [s0 + 0] = t9
         t6 = t5 | at             // t9
         t4 = 0xfb00 << 16
         fp = 0xf510 << 16
         fp |= 0xa000
         s5 = 0
         s6 = s2
         [v0 + 0] = t4
         [v0 + 4] = t6

    loc_0x8043a4e0: // orphan
         [sp + 0x1c] = a1

    loc_0x8043a4e4: // orphan
         at = 0 + 5
         if                       // likely
         t6 = fcn.82e00000 << 16

    loc_0x8043a4f0: // orphan
         t6 = [t6 + 0x7600]       // t9
         call 0x82e047c4          // 0x82e047c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [t6 + 8]            // t9
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x8043a504: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         v0 = 0
         ret
         

    loc_0x8043a9bc: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         

    loc_0x8043aa20: // orphan
         
         
         
         
         
         
         
         
         
         
         

    loc_0x8043aa4c: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8041f2b0 @ +0x4bc
         
         
         
         
         
         
         
         
         

    loc_0x8043d160: // orphan
         if                       // fcn.80433c00+0x95bc // unlikely
         

    loc_0x8043d168: // orphan
         a0 = [s0 + 0]            // t9
         a1 = 0 + 0xff            // s4
         call 0x8003f3bc          // 0x8003f3bc(-1, 0xff, 0x8, -1)
         a0 += 4
         goto 0x8043d1bc          // fcn.80433c00+0x95bc
         

    loc_0x8043d25c: // orphan
         swc1 f2, 0x24, sp
         mfc1 a1, f0
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 0x28, sp
         v0 = 0x8292 << 16
         v0 -= 0x7798
         t3 = halfword [v0 + 0x26]
         a0 = 0x8292 << 16
         a1 = 0x8292 << 16
         a1 -= 0x7720
         a0 -= 0x7730
         a2 = [v0 + 0x2c]
         a3 = halfword [v0 + 0x24]
         call 0x800371b4          // 0x800371b4(0x829188d0, 0x829188e0, 0x23c6b500, 0xcdfd)
         [sp + 0x10] = t3
         v1 = 0x8292 << 16
         v1 -= 0x7720
         lwc1 f0
         lwc1 f8, 0x28, sp
         lwc1 f2, 8, v1
         lwc1 f18, 0x24, sp
         sub.s f10, f8, f0
         at = 0x4000 << 16
         mtc1 at, f12
         sub.s f4, f18, f2
         v0 = 0x8292 << 16
         mul.s f16, f10, f12
         v0 -= 0x7798
         mtc1 0, f14
         mul.s f6, f4, f12
         ra = [sp + 0x1c]
         sp += 0x30
         swc1 f0
         swc1 f16, 0x18, v0
         swc1 f2, 8, v0
         swc1 f14, 4, v0
         swc1 f6, 0x20, v0
         ret
         swc1 f14, 0x1c, v0

    loc_0x8043d368: // orphan
         t0 = 0x8292 << 16
         cvt.s.w f4, f4
         t0 = halfword [t0 - 0x7756]
         a3 = 0x8292 << 16
         a3 = halfword [a3 - 0x7758]
         a0 = v0 + 0xb4
         a1 = v0 + 0xa8
         mfc1 a2, f4
         call 0x800371b4          // 0x800371b4(0x1b3, 0x1a7, 0x8, 0xf62)
         [sp + 0x10] = t0
         v1 = 0x8292 << 16
         v1 -= 0x7760
         at = 0x4220 << 16
         mtc1 at, f6
         t1 = [v1 + 0]
         at = 0x45c8 << 16
         mtc1 at, f8
         swc1 f6, 0x34, t1
         t2 = [v1 + 0]
         at = 0x4234 << 16
         mtc1 at, f10
         swc1 f8, 0x38, t2
         t3 = [v1 + 0]
         call fcn.82900d78        // fcn.8043d3cc
         swc1 f10, 0x2c, t3

    loc_0x8043d454: // orphan
         sp -= 0x30
         [sp + 0x24] = ra
         [sp + 0x30] = a0
         [sp + 0x34] = a1
         [sp + 0x38] = a2
         [sp + 0x3c] = a3
         a1 = 0
         call 0x8004c990          // 0x8004c990(-1, 0x0, 0x8, -1)
         a0 = 0 + 0x158
         call 0x829000a0          // 0x829000a0(0x158, 0x0, 0x8, -1)
         [sp + 0x2c] = v0
         t0 = 0x800d << 16
         t0 += 0x510
         v1 = [t0 + 0]            // t9
         t7 = 0xfcff << 16
         t8 = 0xfffd << 16
         t6 = v1 + 8
         [t0 + 0] = t6
         t8 |= 0xf2f9
         t7 |= 0xffff
         a0 = 0
         a1 = 0
         a2 = 0
         a3 = 0 + 0xff            // s4
         [v1 + 0] = t7
         call 0x829000f8          // 0x829000f8(0x0, 0x0, 0x0, 0xff)
         [v1 + 4] = t8
         t9 = [sp + 0x2c]         // s4
         a0 = halfword [sp + 0x32]
         a1 = halfword [sp + 0x36]
         a2 = , unsigned  halfword [sp + 0x3a]
         a3 = , unsigned  halfword [sp + 0x3e]
         call 0x82900afc          // 0x82900afc(0xffff, 0x6408, 0x8, 0xffff)
         [sp + 0x10] = t9
         v0 = 0x8292 << 16
         v0 -= 0x7750
         t1 = halfword [v0 + 6]
         t2 = halfword [v0 + 8]
         t3 = halfword [v0 + 2]
         t4 = halfword [v0 + 4]
         a0 = halfword [sp + 0x32]
         a1 = halfword [sp + 0x36]
         a2 = , unsigned  halfword [sp + 0x3a]
         a3 = , unsigned  halfword [sp + 0x3e]
         [sp + 0x10] = t1
         [sp + 0x14] = t2
         [sp + 0x18] = t3
         call 0x82900254          // 0x82900254(0xffff, 0x6408, 0x8, 0xffff)
         [sp + 0x1c] = t4
         ra = [sp + 0x24]
         sp += 0x30               // fp
         ret                      // ra
         

    loc_0x8043dc38: // orphan
         c.eq.s f6, f8
         // CODE XREF from fcn.8041f2b0 @ +0x5b8
         
         bc1f 0x8043dcbc
         
         goto 0x8043dcbc
         byte [v0 + 0x32] = t8

    loc_0x8043dcbc: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043dc48
         call fcn.829012e4
         

    loc_0x8043dcc4: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8043de1c: // orphan
         t9 = halfword [s1 + 0xc]
         t0 = 0 + 5
         mtc1 t8, f8
         mtc1 t9, f16
         byte [s0 + 0x32] = t0
         cvt.s.w f10, f8
         cvt.s.w f4, f16
         swc1 f10, 4, s0
         goto 0x8043df10
         swc1 f4, 0x10, s0

    loc_0x8043df10: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043de3c
         ra = [sp + 0x1c]

    loc_0x8043df14: // orphan
         // CODE XREF from fcn.80421810 @ 0x8043dd1c
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s4
         ret                      // ra
         sp += 0x20

    loc_0x8043e010: // orphan
         t3 = , signed  at >> 2

    loc_0x8043e014: // orphan
         mtc1 t3, f16
         
         cvt.s.w f2, f16
         mfc1 a2, f2
         mfc1 a3, f2

    loc_0x8043e028: // orphan
         call 0x8003730c          // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t4 = halfword [s1 + 0xa]

    loc_0x8043e034: // orphan
         lwc1 f18, 4, s0
         swc1 f0, 0x10, s0
         mtc1 t4, f4
         t5 = 0 + 3
         cvt.s.w f6, f4

    loc_0x8043e1b0: // orphan
         call fcn.82901dd4        // fcn.82901dd4(-1)
         
         goto 0x8043e1dc
         ra = [sp + 0x14]

    loc_0x8043e1dc: // orphan
         // CODE XREFS from fcn.8045664c @ 0x150, 0x160, 0x8043e1b8
         // CODE XREF from fcn.8043e048 @ +0x180
         sp += 0x18
         ret                      // ra
         

    loc_0x8043e25c: // orphan
         call 0x8290102c          // 0x8290102c(-1, 0x442f71dcfe116408, 0x8, -1)
         byte [a0 + 0x32] = t0
         v0 = [sp + 0x18]         // s4
         call 0x8002596c          // 0x8002596c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 4]            // t9
         goto 0x8043e448          // fcn.80433cf4+0xa754
         ra = [sp + 0x14]

    loc_0x8043e388: // orphan
         t1 = , unsigned  byte [v0 + 0x11] // s4
         t8 = , unsigned  byte [a0 + 0x32] // arg1 // a2
         bnel t8, t1, 0x8043e448  // fcn.80433cf4+0xa754 // likely
         ra = [sp + 0x14]

    loc_0x8043e398: // orphan
         call 0x80025acc          // 0x80025acc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 4]            // t9
         v0 = 0x8292 << 16
         v0 -= 0x7714
         t3 = [v0 + 0]
         v1 = 0x8291 << 16
         v1 += 0x77f0

    loc_0x8043e690: // orphan
         call 0x800030d0          // 0x800030d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a1 = 0x8291 << 16
         [sp + 0x1c] = v0
         a1 += 0x1db0

    loc_0x8043e8f8: // orphan
         t0 = 0x8292 << 16
         t0 -= 0x7680
         t2 = [v1 + 0]            // t9
         t4 = , unsigned  byte [v0 + 4] // s4
         at = 0x8292 << 16
         [t0 + 0] = t2
         t3 = [v1 + 4]            // t9
         t5 = 0x8292 << 16
         t5 -= 0x769c
         [t0 + 4] = t3
         byte [at - 0x76a0] = t4

    loc_0x8043e924: // orphan
         lwl t7, 5, v0            // t9
         lwr t7, 8, v0            // t9
         t8 = 0x8292 << 16
         t8 -= 0x7698
         [t5 + 0] = t7
         lwl t1, 9, v0            // t9
         lwr t1, 0xc, v0          // t9
         at = 0x8292 << 16
         [t8 + 0] = t1
         t2 = byte [v0 + 0xd]     // s4
         byte [at - 0x7694] = t2
         t3 = byte [v0 + 0xe]     // s4
         at = 0x8292 << 16
         byte [at - 0x7693] = t3
         t4 = byte [v0 + 0xf]     // s4
         at = 0x8292 << 16
         byte [at - 0x7692] = t4
         t5 = byte [v0 + 0x10]    // s4
         at = 0x8292 << 16
         byte [at - 0x7691] = t5
         t6 = byte [v0 + 0x11]    // s4
         at = 0x8292 << 16
         byte [at - 0x7690] = t6
         t7 = byte [v0 + 0x12]    // s4
         at = 0x8292 << 16
         byte [at - 0x768f] = t7
         t8 = byte [v0 + 0x13]    // s4
         at = 0x8292 << 16
         byte [at - 0x768e] = t8
         t9 = byte [v0 + 0x14]    // s4
         at = 0x8292 << 16
         byte [at - 0x768d] = t9
         lwc1 f4, 0x18, v0
         at = 0x8292 << 16
         swc1 f4, -0x768c, at
         lwc1 f6, 0x1c, v0
         at = 0x8292 << 16

    loc_0x8043e9b8: // orphan
         ret                      // ra
         swc1 f6, -0x7688, at

    loc_0x8043ea80: // orphan
         // CODE XREF from fcn.8043e820 @ +0x228
         v0 = [t0 + 0]
         t8 = 0x45fd << 16
         t8 |= 0x7f78
         t6 = v0 + 8
         [t0 + 0] = t6
         t7 |= 0x6660
         [v0 + 0] = t7
         [v0 + 4] = t8
         // CODE XREF from fcn.8043e820 @ +0x258
         v0 = [t0 + 0]
         // CODE XREF from fcn.8043e820 @ +0x230
         t5 = 0x8292 << 16
         at = 0xfa00 << 16
         t9 = v0 + 8
         [t0 + 0] = t9
         t5 = , unsigned  byte [t5 - 0x76a0] // s4
         a2 = 0x8292 << 16
         a2 -= 0x769c
         t6 = t5 & 0xff           // s4
         t7 = t6 | at
         [v0 + 0] = t7
         t7 = , unsigned  byte [a2 + 1]
         t9 = , unsigned  byte [a2 + 0]
         t6 = 0xfb00 << 16
         t8 = t7 << 0x10
         t7 = , unsigned  byte [a2 + 2]
         t5 = t9 << 0x18
         t9 = t5 | t8
         t5 = t7 << 8
         t7 = , unsigned  byte [a2 + 3]
         t8 = t9 | t5
         t1 -= 0x7710
         t9 = t8 | t7
         [v0 + 4] = t9
         v0 = [t0 + 0]
         t2 = 0x8292 << 16
         t2 -= 0x770f
         t5 = v0 + 8
         [t0 + 0] = t5
         [v0 + 0] = t6
         t6 = , unsigned  byte [a3 + 1] // s4
         t7 = , unsigned  byte [a3 + 0] // s4
         t5 = 0x8292 << 16

    loc_0x8043eb24: // orphan
         t8 = t6 << 0x10
         t6 = , unsigned  byte [a3 + 2] // arg4 // s4
         t9 = t7 << 0x18
         t7 = t9 | t8
         t9 = t6 << 8
         t6 = , unsigned  byte [a3 + 3] // arg4 // s4

    loc_0x8043eb3c: // orphan
         t8 = t7 | t9
         t3 = 0x8292 << 16
         t7 = t8 | t6             // s2
         [v0 + 4] = t7
         t9 = byte [t1 + 0]       // s4
         // CODE XREF from fcn.8041f2b0 @ +0x63c
         t5 = byte [t5 - 0x7694]  // s4
         t7 = 0x8292 << 16
         t6 = byte [t2 + 0]
         t8 = t9 + t5
         byte [t1 + 0] = t8
         t7 = byte [t7 - 0x7693]  // s4
         t3 -= 0x770e
         t8 = 0x8292 << 16
         t9 = t6 + t7
         byte [t2 + 0] = t9
         t8 = byte [t8 - 0x7692]  // s4
         t5 = byte [t3 + 0]
         t4 = 0x8292 << 16
         t4 -= 0x770d
         t6 = t5 + t8
         byte [t3 + 0] = t6
         t9 = 0x8292 << 16
         t9 = byte [t9 - 0x7691]  // s4
         t7 = byte [t4 + 0]
         a1 = 0x8291 << 16
         a1 += 0x1e40             // arg2
         t5 = t7 + t9
         byte [t4 + 0] = t5
         a0 = 0
         t8 = a0 << 2             // arg1
         // CODE XREF from fcn.8045664c @ 0x8043ebec
         t6 = a1 + t8             // arg2
         v1 = [t6 + 0]
         a0 += 1                  // arg1 // lo
         a0 &= 0xff               // arg1 // lo
         v0 = byte [v1 + 0]       // s4
         if                       // likely
         at = , v0 < 0x80

    loc_0x8043ebd0: // orphan
         t7 = v0 + 0x80
         // CODE XREF from fcn.8041f2b0 @ +0x640
         goto 0x8043ebe8
         byte [v1 + 0] = t7

    loc_0x8043ebdc: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043ebc8
         if                       // likely
         t9 = v0 - 0x80

    loc_0x8043ebe4: // orphan
         byte [v1 + 0] = t9

    loc_0x8043ebe8: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8043ebd4, 0x8043ebdc
         at = , a0 < 4            // arg1
         bnel at, 0, 0x8043ebb4   // unlikely
         t8 = a0 << 2             // arg1

    loc_0x8043ec28: // orphan
         t5 = byte [t5 - 0x768f]  // s4
         t8 = 0 + 1               // lo
         t6 = 0 + 5
         t7 = 0 + 5
         [sp + 0x28] = t7
         [sp + 0x24] = t6
         [sp + 0x14] = t8
         [sp + 0x20] = 0
         [sp + 0x1c] = 0
         [sp + 0x18] = 0
         a0 = v0                  // s4
         [sp + 0x2c] = t9
         call 0x800459ac          // 0x800459ac(0xff, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x30] = t5
         a0 = 0x8292 << 16
         call 0x8004ca60          // 0x8004ca60(0x82920000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x767c]       // t9
         v1 = 0x8292 << 16
         v1 = [v1 - 0x767c]       // t9
         t9 = 0 + 1               // lo
         t5 = 0 + 5
         t8 = , unsigned  byte [v1 + 5]
         a3 = , unsigned  byte [v1 + 4] // s4
         a0 = v0                  // s4
         [sp + 0x10] = t8
         t6 = , unsigned  halfword [v1 + 0]
         t8 = 0 + 5
         a1 = 0 + 0x100
         [sp + 0x14] = t6
         t7 = , unsigned  halfword [v1 + 2]
         t6 = 0x8292 << 16
         t6 = byte [t6 - 0x768e]  // s4
         [sp + 0x18] = t7
         t7 = 0x8292 << 16
         t7 = byte [t7 - 0x768d]  // s4
         // CODE XREF from fcn.8041f2b0 @ +0x650
         [sp + 0x30] = t8
         [sp + 0x2c] = t5
         [sp + 0x28] = 0
         [sp + 0x24] = 0
         [sp + 0x20] = 0
         [sp + 0x1c] = t9
         a2 = 0 + 1               // lo
         [sp + 0x34] = t6
         call 0x80045db4          // 0x80045db4(0xff, 0x100, 0x1, 0xff)
         [sp + 0x38] = t7
         t0 = 0x800d << 16
         t0 += 0x510
         v0 = [t0 + 0]
         a2 = 0x8292 << 16
         a2 -= 0x7710
         t5 = byte [a2 + 0]
         a3 = 0x8292 << 16
         // CODE XREF from fcn.8041f2b0 @ +0x654
         t9 = v0 + 8
         a3 -= 0x770f
         [t0 + 0] = t9
         t9 = byte [a3 + 0]

    loc_0x8043f5c8: // orphan
         mtc1 at, f0
         mtc1 0, f2
         t0 -= 0x6508
         v1 -= 0x6578
         a1 = byte [a1 + 0x1fe0]  // arg2 // s4
         a0 = sp + 0x10           // arg1
         a3 = 0 + 0x64            // arg4
         a2 = 0 + 0xff            // arg3 // s4
         [sp + 0x10] = t6

    loc_0x8043f6e4: // orphan
         a0 = [sp + 0x18]
         call fcn.8290367c
         
         call fcn.829034d8
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8043f710: // orphan
         [sp + 0x38] = s2
         [sp + 0x34] = s1
         [sp + 0x30] = s0
         [sp + 0x90] = a0
         [sp + 0x94] = a1
         [sp + 0x98] = a2
         call 0x8000731c          // 0x8000731c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x9c] = a3
         s1 = v0                  // s4
         call 0x80006dec          // 0x80006dec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x40
         s2 = v0                  // s4
         call 0x80006dec          // 0x80006dec(0x40, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x40
         [sp + 0x84] = v0
         call 0x80006dec          // 0x80006dec(0x40, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         [sp + 0x80] = v0
         a2 = halfword [s1 + 6]
         a1 = halfword [s1 + 4]
         call 0x80046930          // 0x80046930(0x10, 0xffff, 0xffff, -1)
         a0 = v0                  // s4
         s0 = 0x800d << 16
         s0 += 0x510
         v0 = [s0 + 0]
         t7 = 0xdc08 << 16
         t7 |= 8
         t6 = v0 + 8
         [s0 + 0] = t6
         at = 0x3f00 << 16
         [v0 + 0] = t7
         mtc1 at, f0

    loc_0x8043fb84: // orphan
         [v0 + 0] = t9
         [v0 + 4] = t3
         [sp + 0x18] = 0
         [sp + 0x14] = 0
         [sp + 0x10] = 0
         a0 = 0
         a1 = 0
         a2 = 0 + 0x140           // arg3
         call 0x800445e8          // 0x800445e8(0x0, 0x0, 0x140, -1)
         a3 = 0 + 0x1e

    loc_0x8043fbac: // orphan
         a0 = 0
         a1 = 0 + 0xd2            // arg2
         a2 = 0 + 0x140           // arg3
         a3 = 0 + 0x1e            // arg4
         [sp + 0x10] = 0
         [sp + 0x14] = 0

    loc_0x8043fbc4: // orphan
         call 0x800445e8          // 0x800445e8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = 0
         ra = [sp + 0x24]
         sp += 0x28
         ret
         

    loc_0x8043fd24: // orphan
         a2 = 0 + 0xff            // s4
         call 0x829000f8          // 0x829000f8(-1, 0x442f71dcfe116408, 0xff, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0xff            // s4
         a1 = 0
         a2 = 0
         call 0x829001e4          // 0x829001e4(0xff, 0x0, 0x0, 0xff)
         a3 = 0 + 0xff            // s4
         a2 = 0x8292 << 16
         a2 = [a2 - 0x62e8]
         a0 = 0 + 0x1a
         a1 = 0 + 9

    loc_0x8043fd54: // orphan
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, 0x0)
         [sp + 0x10] = 0
         ra = [sp + 0x1c]         // lo
         // CODE XREF from fcn.8043fc54 @ +0x80
         sp += 0x20
         ret                      // lo
         

    loc_0x8043fe80: // orphan
         at = 0x8292 << 16
         call fcn.829000cc        // fcn.829000cc(-1)
         [at - 0x62e8] = v0
         a0 = , unsigned  byte [s0 + 1]
         a1 = , unsigned  byte [s0 + 3] // s4
         a2 = , unsigned  byte [s0 + 5] // s4
         call 0x829000f8          // 0x829000f8(0x0, 0xff, 0xff, -1)
         a3 = , unsigned  byte [s0 + 0x19] // s4
         a0 = , unsigned  byte [s0 + 7] // s4
         a1 = , unsigned  byte [s0 + 9] // s4
         a2 = , unsigned  byte [s0 + 0xb] // s4
         call 0x829001e4          // 0x829001e4(0xff, 0xff, 0xff, 0xff)
         a3 = , unsigned  byte [s0 + 0x19] // s4
         t8 = 0x8292 << 16
         t8 = [t8 - 0x63ec]
         at = 0 + 2
         t9 = , unsigned  halfword [t8 + 0]
         bnel t9, at, 0x8043ff1c  // likely
         lwc1 f8, 0xc, s0

    loc_0x8043fecc: // orphan
         lwc1 f4, 0xc, s0
         a2 = 0x8292 << 16
         a2 = [a2 - 0x62e8]       // s4
         trunc.w.s f6, f4
         a1 = 0 + 0x9e
         t4 = , unsigned  halfword [a2 + 0]
         [sp + 0x10] = 0
         mfc1 t1, f6
         a3 = 0
         t2 = t1 << 0x10
         t3 = , signed  t2 >> 0x10
         if                       // likely
         t5 = , signed  t4 >> 1

    loc_0x8043ff00: // orphan
         at = t4 + 1
         t5 = , signed  at >> 1

    loc_0x8043ff08: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043fef8
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t3 - t5
         goto 0x8043ff60
         ra = [sp + 0x24]

    loc_0x8043ff1c: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043fec4
         a2 = 0x8292 << 16
         a2 = [a2 - 0x62e8]       // s4
         trunc.w.s f10, f8
         a1 = 0 + 0xac
         t0 = , unsigned  halfword [a2 + 0]
         [sp + 0x10] = 0
         mfc1 t7, f10
         a3 = 0
         t8 = t7 << 0x10
         t9 = , signed  t8 >> 0x10
         if                       // likely
         t1 = , signed  t0 >> 1

    loc_0x8043ff4c: // orphan
         at = t0 + 1
         t1 = , signed  at >> 1

    loc_0x8043ff54: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043ff44
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t9 - t1
         ra = [sp + 0x24]

    loc_0x8043ff60: // orphan
         // CODE XREF from fcn.80421810 @ 0x8043fe70
         // CODE XREF from fcn.8045664c @ 0x8043ff10
         s0 = [sp + 0x20]
         sp += 0x28
         ret                      // ra
         

    loc_0x8043ff8c: // orphan
         if                       // fcn.80440044+0xc // likely
         a1 = 0x8292 << 16

    loc_0x8043ff94: // orphan
         call 0x8004c594          // 0x8004c594(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [a1 - 0x62f0] // s4
         a0 = sp + 0x30
         a1 = 0 + 0x40
         a2 = 0 + 0x33
         call 0x8004c8a0          // 0x8004c8a0(0x178030, 0x40, 0x33, -1)
         a3 = 0
         a0 = 0 + 1               // lo
         a1 = 0

    loc_0x8043ffb8: // orphan
         call 0x80049148          // "$F" // 0x80049148(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = v0                  // s4
         a2 = v0 + 0xa
         if                       // likely
         t8 = , signed  a2 >> 1

    loc_0x8043ffcc: // orphan
         // CODE XREF from fcn.83286dbc @ +0x1fe8
         at = a2 + 1
         t8 = , signed  at >> 1

    loc_0x8043ffd4: // orphan
         // CODE XREF from fcn.8045664c @ 0x8043ffc4
         t9 = 0 + 0xa0
         t0 = 0 + 0x32
         [sp + 0x10] = t0
         a0 = t9 - t8
         a1 = 0 + 0xd0
         call 0x82903808          // 0x82903808(0xffffffff000000a1, 0xd0, 0x8, -1)
         a3 = 0 + 0x10
         call 0x800498c4          // 0x800498c4(0xffffffff000000a1, 0xd0, 0x8, 0x10)
         
         a0 = 0 + 1               // lo

    loc_0x80440114: // orphan
         
         call fcn.829060bc        // fcn.829060bc(-1, 0x442f71dcfe116408)

    loc_0x8044011c: // orphan
         
         call 0x8003c970          // 0x8003c970(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = 0x8292 << 16
         t6 = , unsigned  halfword [t6 - 0x6608]
         at = , unsigned  , t6 < 0xb
         if                       // likely
         t6 <<= 2

    loc_0x8044013c: // orphan
         at = 0x8291 << 16
         at += t6
         t6 = [at + 0x744c]
         goto t6
         

    loc_0x8044018c: // orphan
         call 0x80008648          // 0x80008648(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80440260: // orphan
         t7 = , unsigned  byte [a0 + 0x1070] // arg1 // s4
         lwc1 f6, -0x631c, at

    loc_0x804402dc: // orphan
         lwc1 f0, 0xac, v0
         a2 = 0x3ca3 << 16
         a2 |= 0xd70a             // arg3
         c.le.s f20, f0
         a0 = v0 + 0x2c           // arg1
         bc1fl 0x80440304
         swc1 f20, 0x40, sp
         goto 0x80440304
         swc1 f0, 0x40, sp

    loc_0x80440304: // orphan
         // CODE XREF from fcn.8045664c @ 0x804402f8
         call fcn.829042a4        // fcn.829042a4(-1)
         a1 = [s0 + 0x88]         // t9
         lwc1 f0, 0x48, s0

    loc_0x80440310: // orphan
         lwc1 f12, 0x44, s0
         lwc1 f14, 0x4c, s0
         mfc1 a2, f0
         mfc1 a3, f0
         call 0x8003730c          // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t6 = halfword [s0 + 0x3e]
         a0 = 0x8292 << 16
         swc1 f0, 0x44, s0
         a0 -= 0x6378
         a1 = sp + 0x5c
         a2 = [s0 + 0x40]         // t9
         a3 = halfword [s0 + 0x3c]
         call 0x800371b4          // 0x800371b4(0x82919c88, 0x17805c, -1, 0xffff)
         [sp + 0x10] = t6
         v0 = [s0 + 0]
         a0 = sp + 0x50
         a1 = [v0 + 0xa8]         // t9

    loc_0x80440358: // orphan
         a2 = [v0 + 0xac]         // t9
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, -1, -1)
         a3 = [v0 + 0xb0]         // t9
         t7 = sp + 0x4a
         [sp + 0x10] = t7
         a0 = sp + 0x50
         a1 = sp + 0x5c
         a2 = sp + 0x4c
         call 0x80037120          // "\u01e4" // 0x80037120(0x178050, 0x17805c, 0x17804c, -1)
         a3 = sp + 0x48
         lwc1 f4, 0x4c, sp
         lwc1 f6, 0x44, s0
         at = 0x8291 << 16
         lwc1 f10, 0x7488, at
         mul.s f8, f4, f6
         a1 = [s0 + 0]
         t8 = halfword [sp + 0x4a]
         a0 = sp + 0x50
         a3 = halfword [sp + 0x48]
         a1 += 0xa8
         [sp + 0x10] = t8
         mul.s f16, f8, f10
         mfc1 a2, f16
         call 0x800371b4          // 0x800371b4(0x178050, 0xffa7, 0x17804c, 0x0)
         
         v0 = [s0 + 0]
         lwc1 f18, 0x40, sp
         at = 0x8291 << 16
         lwc1 f0, 0xac, v0
         c.le.s f0, f20
         
         bc1fl 0x80440400
         at = 0x40e0 << 16
         sub.s f4, f18, f20
         lwc1 f6, 0x748c, at
         mul.s f8, f4, f6
         add.s f10, f8, f20
         swc1 f10, 0xac, v0
         v0 = 0x8292 << 16
         v0 = [v0 - 0x63c8]
         lwc1 f0, 0xac, v0
         at = 0x40e0 << 16
         mtc1 at, f16
         
         c.le.s f0, f16
         
         bc1fl fcn.80440444
         ra = [sp + 0x2c]
         c.lt.s f20, f0
         lwc1 f18, 0x40, sp
         at = 0x8291 << 16
         bc1fl fcn.80440444
         ra = [sp + 0x2c]
         sub.s f4, f18, f20
         lwc1 f6, 0x7490, at
         mul.s f8, f4, f6
         add.s f10, f8, f20
         swc1 f10, 0xac, v0

    loc_0x80440518: // orphan
         at = , a3 < -0x149       // arg4
         if                       // fcn.8044053c+0xc // likely
         at = 1 << 16

    loc_0x80440524: // orphan
         a1 = v1 + at             // arg2
         a1 <<= 0x10              // arg2
         a1 = , signed  a1 >> 0x10 // arg2
         if                       // fcn.8044053c // fcn.8044053c // likely
         at = a1

    loc_0x80440538: // orphan
         at = a1 + 3              // arg2

    loc_0x80440720: // orphan
         
         sp -= 0x18
         [sp + 0x14] = ra
         t6 = , unsigned  byte [a0 + 5] // arg1
         v0 = 0x8292 << 16
         t7 = t6 & 0xfffe
         byte [a0 + 5] = t7       // arg1
         v0 = [v0 - 0x65f8]
         t8 = , unsigned  byte [v0 + 1] // s4
         t9 = t8 | 1              // s4
         byte [v0 + 1] = t9
         call fcn.829046a8        // fcn.829046a8(-1, 0x442f71dcfe116408, 0x8)
         [sp + 0x18] = a0
         call fcn.82904794        // fcn.82904794(-1)
         
         t0 = 0x8292 << 16
         t0 = [t0 - 0x65f8]
         mtc1 0, f4
         t1 = 0 + 8               // a2
         lwc1 f6, 0x28, t0
         t2 = [sp + 0x18]         // t9
         a0 = 0 + 0x7b
         c.eq.s f4, f6
         
         bc1fl 0x80440794
         ra = [sp + 0x14]

    loc_0x80440d84: // orphan
         call fcn.82904ac8
         [sp + 0x14] = 0
         ra = [sp + 0x2c]

    loc_0x80440d90: // orphan
         // CODE XREF from fcn.80440d40 @ 0x80440d54
         sp += 0x30
         ret                      // ra
         

    loc_0x80440dd0: // orphan
         if                       // unlikely
         byte [a1 + 0x1072] = t7  // arg2

    loc_0x80440dd8: // orphan
         t0 = , unsigned  byte [a1 + 0x1070] // arg2 // s4
         t9 = 0 + 0xe
         halfword [a1 + 0x1068] = t8 // arg2
         if                       // likely
         byte [a1 + 0x1072] = t9  // arg2

    loc_0x80440dec: // orphan
         a0 = 0 | 0xffff          // arg1
         [sp + 0x20] = a1
         call 0x800088a4          // 0x800088a4(0xffff, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80440df8: // orphan
         halfword [sp + 0x1e] = a2
         a1 = [sp + 0x20]
         goto 0x80440e20
         a2 = halfword [sp + 0x1e]

    loc_0x80440e08: // orphan
         a0 = 0 + 1               // arg1 // lo
         [sp + 0x20] = a1
         call 0x800088a4          // 0x800088a4(0x1, 0x442f71dcfe116408, 0x8, -1)
         halfword [sp + 0x1e] = a2
         a1 = [sp + 0x20]
         a2 = halfword [sp + 0x1e]

    loc_0x80440e20: // orphan
         // CODE XREF from fcn.8045664c @ 0x80440e00
         a0 = 0 + 0xc
         [sp + 0x20] = a1
         call 0x80007b34          // 0x80007b34(0xc, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80440e2c: // orphan
         halfword [sp + 0x1e] = a2
         a1 = [sp + 0x20]

    loc_0x80440e34: // orphan
         a2 = halfword [sp + 0x1e]

    loc_0x80440e38: // orphan
         at = 0 + 3
         div 0, a2, at            // arg3
         t1 = , unsigned  byte [a1 + 0x1072] // arg2
         t2 = lo
         at = , t1 < t2
         if                       // unlikely
         

    loc_0x80440e54: // orphan
         call fcn.82907188
         [sp + 0x20] = a1
         a1 = [sp + 0x20]

    loc_0x80440e60: // orphan
         call fcn.829043b4        // fcn.829043b4(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80440e64: // orphan
         a0 = a1                  // t0
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x80440e78: // orphan
         sp -= 0x20
         [sp + 0x1c] = ra
         [sp + 0x18] = s0
         v0 = , unsigned  byte [a0 + 0x1072] // arg1 // s4
         s0 = a0                  // t9

    loc_0x80440e8c: // orphan
         v1 = , unsigned  , 0 < v0 // lo

    loc_0x80440e90: // orphan
         beql v1, 0, 0x80440eac   // unlikely
         t6 = v0 - 1              // t3

    loc_0x80440e98: // orphan
         call fcn.829043b4        // fcn.829043b4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = , unsigned  byte [s0 + 0x1072] // s4
         v1 = , unsigned  , 0 < v0 // lo
         t6 = v0 - 1              // t3

    loc_0x80440eac: // orphan
         if                       // likely
         byte [s0 + 0x1072] = t6

    loc_0x80440eb4: // orphan
         t7 = , unsigned  byte [s0 + 0x1070] // s4
         at = 0 + 6
         t8 = t7 + 1
         t9 = t8 & 0xff
         if                       // likely
         byte [s0 + 0x1070] = t8

    loc_0x80440ecc: // orphan
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 | 0xffff
         goto 0x80440ee8
         t0 = , unsigned  byte [s0 + 0x1070]

    loc_0x80440edc: // orphan
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         t0 = , unsigned  byte [s0 + 0x1070]

    loc_0x80440ee8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80440ed4
         at = 0 + 6
         v0 = 0x8292 << 16
         if                       // likely
         v0 -= 0x62b8

    loc_0x80440ef8: // orphan
         t1 = 0 + 0xc

    loc_0x80440efc: // orphan
         t2 = 0 + 7
         byte [s0 + 0x1072] = t1
         halfword [s0 + 0x1068] = t2
         a0 = 0x8292 << 16
         a0 = [a0 - 0x65f8]
         call fcn.82906680        // fcn.82906680(0xb5a4e5e4)
         a0 += 0x24
         call fcn.8290351c
         
         goto 0x80440f5c
         

    loc_0x80440f28: // orphan
         mtc1 0, f0
         byte [v0 + 0] = 0
         a0 = s0
         swc1 f0, 4, v0
         call fcn.82903298        // fcn.82903298(0x104, 0x442f71dcfe116408, 0x8)
         swc1 f0, 8, v0
         a0 = s0
         call fcn.82903058        // fcn.82902fe0+0x78
         a1 = 0
         t3 = 0 + 0xc
         t4 = 0 + 2
         byte [s0 + 0x1072] = t3
         halfword [s0 + 0x1068] = t4

    loc_0x80440f5c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80440f20
         call 0x80007aec          // 0x80007aec(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0xc

    loc_0x80440f64: // orphan
         ra = [sp + 0x1c]         // a2
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // a2
         

    loc_0x80440f78: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         t6 = , unsigned  byte [a0 + 0x1070] // arg1 // s4

    loc_0x80440f84: // orphan
         at = , t6 < 6            // lo
         beql at, 0, 0x80440fa0   // unlikely
         v0 = , unsigned  byte [a0 + 0x1072] // arg1 // s4

    loc_0x80440f90: // orphan
         call fcn.829043b4        // fcn.829043b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         a0 = [sp + 0x18]         // t9
         v0 = , unsigned  byte [a0 + 0x1072] // s4

    loc_0x80440fa0: // orphan
         v1 = , unsigned  , 0 < v0 // lo
         t7 = v0 - 1              // t3
         if                       // likely
         byte [a0 + 0x1072] = t7  // arg1

    loc_0x80440fb0: // orphan
         byte [a0 + 0x1072] = 0   // arg1
         halfword [a0 + 0x1068] = 0 // arg1

    loc_0x80440fb8: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80440fc4: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80440fe0: // orphan
         at = 0x8291 << 16
         at += t6
         t6 = [at + 0x7498]
         goto t6
         

    loc_0x8044106c: // orphan
         a0 = 0x8292 << 16
         a0 = [a0 - 0x65f8]       // arg1
         call fcn.82906748

    loc_0x80441078: // orphan
         a0 += 0x24
         goto 0x804410a0          // fcn.80441030+0x70
         ra = [sp + 0x14]

    loc_0x8044109c: // orphan
         ra = [sp + 0x14]

    loc_0x804410f0: // orphan
         a0 = 0x8292 << 16
         goto fcn.8044110c        // fcn.8044110c(0x82920000, 0x442f71dcfe116408, 0x8, -1, -1)
         a0 -= 0x63e0             // arg1

    loc_0x80441328: // orphan
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.829050c8        // fcn.829050c8(-1)
         a0 = s1

    loc_0x80441334: // orphan
         a0 = s1
         t6 = [s2 + 0]            // t9
         t7 = , unsigned  halfword [t6 + 8]
         t8 = t7 & 0xd000
         if                       // unlikely
         

    loc_0x8044134c: // orphan
         t9 = halfword [s1 + 0x1068]
         if                       // likely
         

    loc_0x80441358: // orphan
         s0 = 0

    loc_0x8044135c: // orphan
         .qword 0x0ca4108200000000
         if                       // likely
         

    loc_0x8044136c: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         s2 = [sp + 0x1c]         // a2
         s3 = [sp + 0x20]

    loc_0x80441380: // orphan
         ret                      // ra
         sp += 0x28

    loc_0x8044139c: // orphan
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x20            // k0
         call 0x800225c4          // 0x800225c4(0x20, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x20            // k0
         s1 = 0x8292 << 16
         s1 -= 0x7670
         s0 = 0
         s2 = 0 + 0x20            // k0

    loc_0x804413bc: // orphan
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call fcn.829050c8        // fcn.829050c8(-1)

    loc_0x804413c8: // orphan
         a0 = s1
         .qword 0x0ca4108200000000
         s0 += 1
         if                       // likely
         

    loc_0x804413e0: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]         // a2
         s2 = [sp + 0x20]
         ret
         sp += 0x28

    loc_0x8044146c: // orphan
         a3 = 0 + 2               // arg4
         if                       // fcn.8045664c-0x151d4 // likely
         t7 = 0 + 5

    loc_0x80441470: // orphan
         [a2 + 0] = a0            // arg3
         v0 = halfword [v1 + 2]

    loc_0x80441478: // orphan
         if                       // likely
         

    loc_0x80441480: // orphan
         [a2 + 0] = t6            // arg3
         v0 = halfword [v1 + 2]

    loc_0x80441488: // orphan
         bnel v0, at, 0x80441498  // likely
         t8 = , unsigned  halfword [v1 + 0]

    loc_0x80441490: // orphan
         [a2 + 0] = t7            // arg3
         t8 = , unsigned  halfword [v1 + 0]

    loc_0x80441498: // orphan
         a3 = 0 + 2               // arg4
         bnel a3, t8, 0x804414f0  // fcn.804414cc+0x24 // likely
         t3 = [a2 + 0]            // arg3

    loc_0x804414a4: // orphan
         v0 = halfword [v1 + 2]
         t9 = 0 + 6
         t0 = 0 + 7
         if                       // likely
         at = 0 + 4

    loc_0x804414b8: // orphan
         [a2 + 0] = t9            // arg3
         v0 = halfword [v1 + 2]

    loc_0x804414c0: // orphan
         if                       // fcn.804414cc+0x4 // likely
         t1 = 0 + 8               // a2

    loc_0x804414c8: // orphan
         [a2 + 0] = t0            // arg3

    loc_0x8044167c: // orphan
         a3 = 0
         call fcn.829054f8
         
         call 0x80008514          // 0x80008514(-1, 0x442f71dcfe116408, 0x8, 0x0)
         a0 = [sp + 0x24]
         call fcn.829051ac        // "a?"
         
         call fcn.829053f8
         
         call 0x82905488          // 0x82905488(0x0, 0x442f71dcfe116408, 0x8, 0x0)
         
         call 0x80008574          // 0x80008574(0x0, 0x442f71dcfe116408, 0x8, 0x0)
         
         call 0x80047610          // 0x80047610(0x0, 0x442f71dcfe116408, 0x8, 0x0)
         
         call 0x8004c398          // 0x8004c398(0x0, 0x442f71dcfe116408, 0x8, 0x0)
         
         call 0x80006d3c          // 0x80006d3c(0x0, 0x442f71dcfe116408, 0x8, 0x0)
         
         a0 = 0x43 << 16
         call 0x80002bf8          // 0x80002bf8(0x430000, 0x442f71dcfe116408, 0x8, 0x0)
         a0 |= 0x4150
         ra = [sp + 0x1c]         // a2
         sp += 0x28
         v0 = 0
         ret                      // a2
         

    loc_0x80441704: // orphan
         byte [a1 + 0x1a] = v0    // arg2
         t6 = 0x8292 << 16
         t6 = halfword [t6 - 0x62d2]

    loc_0x80441710: // orphan
         t8 = 0x8292 << 16
         t7 = t6 + 0x2000
         halfword [a1 + 0x1c] = t7 // arg2
         t8 = halfword [t8 - 0x62d0]
         t9 = t8 + 0x2000
         halfword [a1 + 0x1e] = t9 // arg2

    loc_0x80441728: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80441814: // orphan
         byte [s0 + 0x19] = t9
         t0 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t1 = lo
         t2 = v0 + t1
         t3 = , unsigned  byte [t2 + 2] // s4
         goto 0x80441938
         byte [s0 + 0x1a] = t3

    loc_0x804418e0: // orphan
         

    loc_0x804418e4: // orphan
         break 6

    loc_0x80441938: // orphan
         // CODE XREF from fcn.8045664c @ 0x8044182c
         v0 = 0x8009 << 16

    loc_0x8044193c: // orphan
         v0 = [v0 + 0x4908]       // t9
         t4 = sp + 0x2c
         [sp + 0x10] = t4
         a2 = sp + 0x30           // arg3
         a3 = sp + 0x2e           // arg4
         a0 = v0 + 0xb4           // arg1
         call 0x80037120          // 0x80037120(0x1000000b3, 0x442f71dcfe116408, 0x178030, 0x17802e)
         a1 = v0 + 0xa8
         t5 = halfword [sp + 0x2e]
         t6 = t5 + 0x2000
         halfword [s0 + 0x1c] = t6
         t7 = halfword [sp + 0x2c]
         t8 = t7 - 0x2000
         halfword [s0 + 0x1e] = t8

    loc_0x80441974: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x38
         ret
         v0 = 0

    loc_0x8044198c: // orphan
         [sp + 0x20] = s0
         s0 = a1                  // t0
         [sp + 0x24] = ra
         if                       // likely
         a2 = a0                  // t9

    loc_0x804419a0: // orphan
         v1 = 0x8292 << 16
         v1 -= 0x62dc
         t6 = [v1 + 0]
         a0 = 0 + 0xc             // arg1
         v0 = 0x8291 << 16

    loc_0x804419b4: // orphan
         unsigned , hi            // t6
         v0 += 0x20c0
         t7 = lo
         t8 = v0 + t7
         t9 = , unsigned  byte [t8 + 4] // s4
         byte [a1 + 0x18] = t9    // arg2
         t0 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t1 = lo
         t2 = v0 + t1
         t3 = , unsigned  byte [t2 + 5] // s4
         byte [a1 + 0x19] = t3    // arg2
         t4 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t5 = lo
         t6 = v0 + t5
         t7 = , unsigned  byte [t6 + 6] // s4
         byte [a1 + 0x1a] = t7    // arg2

    loc_0x804419fc: // orphan
         v0 = 0x8291 << 16
         v1 = 0x8292 << 16
         at = 0 + 2
         v1 -= 0x62dc
         v0 += 0x20c0
         if                       // fcn.80441b9c+0x34 // likely
         a0 = 0 + 0xc             // arg1

    loc_0x80441a18: // orphan
         a1 = 0x8292 << 16
         a1 -= 0x6230             // arg2
         a2 = , unsigned  byte [a1 + 4] // arg2
         t8 = , unsigned  byte [a1 + 5] // arg2
         t0 = , unsigned  byte [a1 + 6] // arg2
         a3 = 0 + 0xff            // arg4 // s4
         t9 = a2 & t8             // arg3
         t1 = t9 & t0
         bnel a3, t1, 0x80441a90  // likely
         t4 = [v1 + 0]            // t9

    loc_0x80441a40: // orphan
         t2 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t3 = lo
         t4 = v0 + t3
         t5 = , unsigned  byte [t4 + 4]
         byte [s0 + 0x18] = t5
         t6 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t7 = lo
         t8 = v0 + t7
         t9 = , unsigned  byte [t8 + 5]
         byte [s0 + 0x19] = t9
         t0 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t1 = lo
         t2 = v0 + t1
         t3 = , unsigned  byte [t2 + 6]
         goto 0x80441b90
         byte [s0 + 0x1a] = t3

    loc_0x80441a90: // orphan
         unsigned , hi            // lo // lo

    loc_0x80441a94: // orphan
         t5 = lo
         t6 = v0 + t5
         t7 = , unsigned  byte [t6 + 4]
         unsigned , hi
         t8 = lo
         
         
         div 0, t8, a3            // arg4
         t9 = lo
         byte [s0 + 0x18] = t9
         t0 = [v1 + 0]            // t9
         t4 = , unsigned  byte [a1 + 5] // arg2 // s4

    loc_0x80441ac4: // orphan
         if                       // likely
         

    loc_0x80441acc: // orphan
         break 7

    loc_0x80441ad0: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80441adc: // orphan
         if                       // likely
         

    loc_0x80441ae4: // orphan
         break 6

    loc_0x80441ae8: // orphan
         unsigned , hi

    loc_0x80441aec: // orphan
         t1 = lo
         t2 = v0 + t1
         t3 = , unsigned  byte [t2 + 5]
         unsigned , hi
         t5 = lo
         
         
         div 0, t5, a3            // arg4
         t6 = lo
         byte [s0 + 0x19] = t6
         t7 = [v1 + 0]            // t9
         t1 = , unsigned  byte [a1 + 6] // arg2 // s4
         if                       // likely
         

    loc_0x80441b24: // orphan
         break 7

    loc_0x80441b28: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80441b34: // orphan
         if                       // likely
         

    loc_0x80441b3c: // orphan
         break 6

    loc_0x80441b40: // orphan
         unsigned , hi
         t8 = lo

    loc_0x80441b48: // orphan
         t9 = v0 + t8
         t0 = , unsigned  byte [t9 + 6] // s4
         unsigned , hi            // s4 // s4
         t2 = lo
         
         
         div 0, t2, a3            // arg4
         t3 = lo

    loc_0x80441b68: // orphan
         byte [s0 + 0x1a] = t3
         if                       // likely
         

    loc_0x80441b74: // orphan
         break 7

    loc_0x80441b78: // orphan
         at = 0 - 1               // s2
         if                       // unlikely
         at = 0x8000 << 16

    loc_0x80441b84: // orphan
         if                       // likely
         

    loc_0x80441b8c: // orphan
         break 6

    loc_0x80441b90: // orphan
         // CODE XREF from fcn.8045664c @ 0x80441a84
         v0 = 0x8009 << 16
         v0 = [v0 + 0x4908]       // t9
         t4 = sp + 0x2c

    loc_0x80441c1c: // orphan
         unsigned , hi
         t2 = lo
         t3 = v1 + t2
         t4 = , unsigned  byte [t3 + 9] // s4
         byte [a1 + 0x19] = t4    // arg2
         t5 = [a2 + 0]            // arg3
         unsigned , hi            // t9 // s2
         t6 = lo
         t7 = v1 + t6
         t8 = , unsigned  byte [t7 + 0xa] // s4
         byte [a1 + 0x1a] = t8    // arg2

    loc_0x80441c48: // orphan
         v1 = 0x8291 << 16
         // CODE XREF from fcn.837fdefc @ +0xd5c
         a2 = 0x8292 << 16
         a2 -= 0x62dc             // arg3
         v1 += 0x20c0

    loc_0x80441c58: // orphan
         if                       // likely
         a3 = 0 + 0xc             // arg4

    loc_0x80441c60: // orphan
         t0 = 0x8292 << 16
         t0 -= 0x6230
         v0 = , unsigned  byte [t0 + 8]
         t9 = , unsigned  byte [t0 + 9]
         t2 = , unsigned  byte [t0 + 0xa] // a2
         a0 = 0 + 0xff            // arg1 // s4
         t1 = v0 & t9
         t3 = t1 & t2
         bnel a0, t3, 0x80441cdc  // likely
         t7 = [a2 + 0]            // arg3

    loc_0x80441c88: // orphan
         t4 = [a2 + 0]            // arg3
         v0 = 0
         unsigned , hi            // t9 // s2
         t5 = lo
         t6 = v1 + t5
         t7 = , unsigned  byte [t6 + 8] // s4
         byte [a1 + 0x18] = t7    // arg2
         t8 = [a2 + 0]            // arg3
         unsigned , hi            // t9 // s2
         t9 = lo
         t1 = v1 + t9
         t2 = , unsigned  byte [t1 + 9] // s4
         byte [a1 + 0x19] = t2    // arg2
         t3 = [a2 + 0]            // arg3
         unsigned , hi            // t9 // s2
         t4 = lo
         t5 = v1 + t4
         t6 = , unsigned  byte [t5 + 0xa] // s4
         ret                      // ra
         byte [a1 + 0x1a] = t6    // arg2

    loc_0x80441cdc: // orphan
         unsigned , hi
         t8 = lo
         t9 = v1 + t8
         t1 = , unsigned  byte [t9 + 8] // s4
         unsigned , hi
         t2 = lo

    loc_0x80441cf4: // orphan
         
         
         div 0, t2, a0            // arg1
         t3 = lo
         byte [a1 + 0x18] = t3    // arg2
         t4 = [a2 + 0]            // arg3
         t8 = , unsigned  byte [t0 + 9] // s4
         if                       // likely
         

    loc_0x80441d18: // orphan
         break 7

    loc_0x80441d1c: // orphan
         at = 0 - 1               // s2

    loc_0x80441d20: // orphan
         if                       // likely
         at = 0x8000 << 16

    loc_0x80441d28: // orphan
         if                       // likely
         

    loc_0x80441d30: // orphan
         break 6

    loc_0x80441d34: // orphan
         unsigned , hi            // lo // lo // t9 // s2
         t5 = lo
         t6 = v1 + t5

    loc_0x80441d40: // orphan
         t7 = , unsigned  byte [t6 + 9] // s4
         unsigned , hi            // t3 // t3
         t9 = lo
         
         
         div 0, t9, a0            // arg1
         t1 = lo

    loc_0x80441d5c: // orphan
         byte [a1 + 0x19] = t1    // arg2
         t2 = [a2 + 0]            // arg3
         t6 = , unsigned  byte [t0 + 0xa] // s4
         if                       // likely
         

    loc_0x80441d70: // orphan
         break 7

    loc_0x80441d74: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80441d80: // orphan
         if                       // likely
         

    loc_0x80441d88: // orphan
         break 6

    loc_0x80441d8c: // orphan
         unsigned , hi            // t9 // s2
         t3 = lo
         t4 = v1 + t3
         t5 = , unsigned  byte [t4 + 0xa] // s4
         unsigned , hi            // t9 // s2
         t7 = lo

    loc_0x80441da4: // orphan
         

    loc_0x80441da8: // orphan
         
         div 0, t7, a0            // arg1
         t8 = lo
         byte [a1 + 0x1a] = t8    // arg2
         if                       // likely
         

    loc_0x80441dc0: // orphan
         break 7

    loc_0x80441dc4: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80441dd0: // orphan
         if                       // likely
         

    loc_0x80441dd8: // orphan
         break 6

    loc_0x80441ddc: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80441e3c: // orphan
         ret                      // ra
         v0 = 0

    loc_0x80441e78: // orphan
         t4 = 0 + 0xff            // s4
         t6 = a1 << 3             // arg2
         t7 = , signed  a1 >> 2   // arg2
         t8 = t6 + t7
         a0 = t4 - t2             // arg1
         unsigned , hi
         t5 = , unsigned  byte [t3 + 0] // s4
         t8 = a3 << 3             // arg4

    loc_0x80441e98: // orphan
         v0 = t2                  // s4
         t9 = lo

    loc_0x80441ea0: // orphan
         
         
         unsigned , hi            // t3 // t3
         t5 = , signed  a3 >> 2   // arg4 // t9
         t6 = lo
         t7 = t9 + t6
         t9 = t8 + t5
         div 0, t7, t4
         v1 = lo
         v1 = , signed  v1 >> 3
         if                       // likely
         

    loc_0x80441ed0: // orphan
         break 7

    loc_0x80441ed4: // orphan
         at = 0 - 1               // s2
         if                       // fcn.80441eec // fcn.80441eec // likely
         at = 0x8000 << 16

    loc_0x80441ee0: // orphan
         if                       // fcn.80441eec // fcn.80441eec // likely
         

    loc_0x80441ee8: // orphan
         // CALL XREF from fcn.805c3158 @ +0x114
         break 6

    loc_0x80441f9c: // orphan
         t6 = v1 << 0xb
         t5 = a2 << 6             // arg3
         t8 = t6 | t5
         t9 = t0 << 1
         v0 = t8 | t9
         v0 |= 1

    loc_0x80441fb4: // orphan
         ret                      // ra
         v0 &= 0xffff             // s4

    loc_0x80442060: // orphan
         // CODE XREF from fcn.80433e80 @ 0x80441ff4
         // CODE XREF from fcn.80442008 @ 0x80442010
         // CODE XREF from fcn.80442030 @ 0x80442040
         sp += 0x20
         ret                      // ra
         

    loc_0x804420f8: // orphan
         a3 = 0
         at = 0x3f80 << 16
         mtc1 at, f12
         call fcn.82906164
         

    loc_0x8044210c: // orphan
         t9 = [sp + 0x20]         // s0
         a0 = 0
         a1 = 0
         call t9                  // s0 // s0(0x0, 0x0, 0x8, -1)
         
         at = 0x8292 << 16
         a1 = 0x8291 << 16
         [at - 0x6240] = v0
         a1 += 0x2228             // arg2
         call 0x80040e80          // 0x80040e80(0x0, 0x82912228, 0x8, -1)
         // CODE XREF from fcn.81b4a48c @ 0x81b59bf0
         a0 = [sp + 0x1c]         // a2
         t9 = [sp + 0x20]         // s0
         at = 0x8292 << 16
         [at - 0x623c] = v0
         a0 = 0 + 1               // lo
         call t9                  // s0 // s0(0x1, 0x82912228, 0x8, -1)
         a1 = 0
         ra = [sp + 0x14]
         at = 0x8292 << 16
         [at - 0x6238] = v0
         ret
         sp += 0x18

    loc_0x804421d4: // orphan
         t8 += t7                 // t9
         t8 <<= 2
         a1 = t8 + t9             // arg2
         t4 = , unsigned  halfword [a1 + 0x14]
         t0 = halfword [a1 + 0x16]
         t1 = halfword [a1 + 0x18]
         t6 = 0 - 0x4000
         halfword [sp + 0xb6] = t6
         t5 = , signed  t4 >> 4
         t6 = t5 << 2
         at = 0x8009 << 16
         t2 = t0 + t1
         halfword [a1 + 0x16] = t2 // arg2
         at += t6
         lwc1 f4, -0x71b0, at
         lwc1 f6, 0xc, a1         // arg2
         t3 = halfword [a1 + 0x16]
         [sp + 0x30] = v0
         mul.s f0, f4, f6
         halfword [sp + 0xb4] = 0
         a0 = sp + 0x74           // arg1
         a2 = sp + 0xb4           // arg3
         halfword [sp + 0xb8] = t3
         swc1 f0, 0xbc, sp
         swc1 f0, 0xc0, sp
         call 0x8003614c          // 0x8003614c(0x178074, 0x4fffffffb, 0x1780b4, -1)
         swc1 f0, 0xc4, sp
         a0 = sp + 0x34
         a1 = sp + 0x74
         call 0x80036c6c          // 0x80036c6c(0x178034, 0x178074, 0x1780b4, -1)
         a2 = sp + 0xbc
         a0 = [sp + 0x30]         // s4
         call 0x80036f0c          // 0x80036f0c(0xff, 0x178074, 0x1780bc, -1)
         a1 = sp + 0x34
         v1 = 0x800d << 16

    loc_0x80442260: // orphan
         v1 += 0x510

    loc_0x80442264: // orphan
         v0 = [v1 + 0]            // t9
         t8 = 0xda38 << 16
         t8 |= 2
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         t9 = [sp + 0x30]         // s4
         at = 0x1fff << 16
         at |= 0xffff
         t0 = t9 & at             // s4
         [v0 + 4] = t0
         v0 = [v1 + 0]
         t2 = 0x100 << 16
         t3 = 0x8291 << 16
         t1 = v0 + 8
         [v1 + 0] = t1
         t3 += 0x2328
         t2 |= 0x4008
         [v0 + 0] = t2
         [v0 + 4] = t3
         v0 = [v1 + 0]
         t5 = 0x600 << 16
         t5 |= 0x204
         t4 = v0 + 8
         [v1 + 0] = t4
         t6 = 0 + 0x406
         [v0 + 4] = t6
         [v0 + 0] = t5
         ra = [sp + 0x14]
         sp += 0xc8

    loc_0x804422dc: // orphan
         ret                      // ra
         

    loc_0x80442358: // orphan
         
         v0 &= 0x78
         beql v0, 0, 0x804423b4   // unlikely
         mfc1 v0, f10

    loc_0x80442368: // orphan
         mtc1 at, f11
         mtc1 0, f10

    loc_0x80442370: // orphan
         v0 = 0 + 1               // lo
         sub.d f10, f6, f10
         ctc1 v0, 31
         
         cvt.w.d f10, f10
         cfc1 v0, 31
         
         v0 &= 0x78
         if                       // unlikely
         

    loc_0x80442398: // orphan
         mfc1 v0, f10
         at = 0x8000 << 16
         goto 0x804423c0
         v0 |= at

    loc_0x804423a8: // orphan
         goto 0x804423c0
         v0 = 0 - 1               // s2

    loc_0x804423b4: // orphan
         
         if                       // unlikely
         

    loc_0x804423c0: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804423a0, 0x804423a8
         ctc1 t7, 31
         v0 &= 0xffff             // s4
         ret                      // ra
         sp += 0x18

    loc_0x804425cc: // orphan
         

    loc_0x804425d0: // orphan
         break 7

    loc_0x8044267c: // orphan
         a0 = halfword [s0 + 0x12]
         a1 = halfword [s0 + 0x10]
         a2 = 0 + 0xb6
         call 0x800372cc          // 0x800372cc(0xffff, 0xffff, 0xb6, -1)
         a3 = 0 + 0xb6
         halfword [s0 + 0x12] = v0

    loc_0x80442694: // orphan
         a3 = halfword [s0 + 0x12] // s4

    loc_0x80442698: // orphan
         a0 = halfword [s0 + 0x14]

    loc_0x8044269c: // orphan
         a1 = s3                  // t9
         call 0x800372cc          // 0x800372cc(-1, -1, 0x8, -1)
         a2 = ~a3                 // lo
         halfword [s0 + 0x14] = v0
         a0 = , unsigned  byte [s0 + 0x20] // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xa

    loc_0x804426b8: // orphan
         call 0x800372cc          // 0x800372cc(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xa

    loc_0x804426c0: // orphan
         t6 = halfword [s0 + 0x14] // s4
         byte [s0 + 0x20] = v0
         a0 = s1
         bnel s3, t6, 0x804426e0  // likely
         s1 += 1

    loc_0x804426d4: // orphan
         call fcn.829064d0        // "&1"
         a1 = s2
         s1 += 1

    loc_0x804426e0: // orphan
         if                       // likely
         s0 += 0x24

    loc_0x804426e8: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]         // a2
         s2 = [sp + 0x20]         // s0
         s3 = [sp + 0x24]         // ra
         s4 = [sp + 0x28]
         ret
         sp += 0x30

    loc_0x80442794: // orphan
         [v0 + 0] = t8
         v0 = [v1 + 0]
         t7 = 0xe600 << 16
         t9 = 0xf300 << 16
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t6 = 0x71f << 16
         t6 |= 0xf000
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t6
         [v0 + 0] = t9

    loc_0x804427d0: // orphan
         v0 = [v1 + 0]
         ra = 0xe700 << 16
         t9 = 0xf568 << 16
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = 0
         [v0 + 0] = ra
         v0 = [v1 + 0]
         t9 |= 0x800
         t6 = 0 + 0x100
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = t6
         [v0 + 0] = t9
         v0 = [v1 + 0]
         t9 = 7 << 16
         t9 |= 0xc07c
         t7 = v0 + 8
         [v1 + 0] = t7
         t8 = 0xf200 << 16
         [v0 + 0] = t8
         [v0 + 4] = t9
         v0 = [v1 + 0]
         t8 = 0xe300 << 16
         t8 |= 0xa01
         t6 = v0 + 8
         [v1 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = ra
         v0 = [v1 + 0]
         t9 = 0x10 << 16
         a0 = 0 + 0xff            // arg1 // s4
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = t9
         [v0 + 0] = t8
         v0 = [v1 + 0]
         t8 = 0xc18 << 16
         t7 = 0xe200 << 16
         t6 = v0 + 8

    loc_0x80442870: // orphan
         [v1 + 0] = t6
         t7 |= 0x1c
         t8 |= 0x4240             // t9
         [v0 + 4] = t8
         [v0 + 0] = t7
         v0 = [v1 + 0]
         t7 = 0x5ffe << 16
         t6 = 0xfc30 << 16
         t9 = v0 + 8
         [v1 + 0] = t9
         t6 |= 0x97ff
         t7 |= 0xfe38
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0 + 0xff            // arg3 // s4
         a3 = 0 + 0xff            // arg4 // s4
         [v0 + 4] = t7
         call 0x829000f8          // 0x829000f8(-1, 0xff, 0xff, 0xff)
         [v0 + 0] = t6
         s1 = 0x8292 << 16
         s1 -= 0x6220

    loc_0x804428c0: // orphan
         s0 = 0
         s2 = 0 + 0x28

    loc_0x804428c8: // orphan
         a0 = 0 + 0xff            // s4
         a1 = , unsigned  byte [s1 + 0x21] // s4

    loc_0x804428d0: // orphan
         a2 = 0
         call 0x829001e4          // 0x829001e4(-1, 0x442f71dcfe116408, 0x0, -1)
         a3 = 0 + 0xff            // s4
         call fcn.829062b0
         a0 = s0
         s0 += 1
         if                       // likely
         s1 += 0x24

    loc_0x804428f0: // orphan
         ra = [sp + 0x24]
         s0 = [sp + 0x18]         // t9
         s1 = [sp + 0x1c]         // a2
         s2 = [sp + 0x20]         // s0
         ret                      // ra
         sp += 0x28

    loc_0x8044298c: // orphan
         at = 0xbf80 << 16
         sub.s f6, f10, f4
         lwc1 f10, 8, a2          // arg3
         div.s f2, f8, f0
         lwc1 f8, 8, a1           // arg2

    loc_0x804429a0: // orphan
         sub.s f4, f8, f10
         div.s f16, f6, f0
         c.lt.s f2, f12
         
         bc1f 0x804429c8
         div.s f18, f4, f0
         mtc1 at, f0
         
         mul.s f2, f2, f0
         
         c.lt.s f16, f12
         at = 0xbf80 << 16
         mtc1 at, f0

    loc_0x804429d4: // orphan
         mfc1 a2, f2
         bc1fl 0x804429ec
         c.lt.s f18, f12

    loc_0x804429e0: // orphan
         mul.s f16, f16, f0
         

    loc_0x804429e8: // orphan
         c.lt.s f18, f12
         mfc1 a3, f2
         bc1fl 0x80442a04
         lwc1 f12
         mul.s f18, f18, f0
         
         lwc1 f12
         swc1 f18, 0x24, sp
         swc1 f16, 0x28, sp
         call 0x8003730c          // "\u01f0" // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x34] = a1
         lwc1 f16, 0x28, sp
         a1 = [sp + 0x34]
         swc1 f0
         mfc1 a2, f16
         mfc1 a3, f16
         lwc1 f12, 4, s0
         call 0x8003730c          // "\u01f2" // 0x8003730c(-1, 0xfe116408, 0x8, -1)
         lwc1 f14, 4, a1
         lwc1 f18, 0x24, sp

    loc_0x80442a38: // orphan
         a1 = [sp + 0x34]
         swc1 f0, 4, s0
         mfc1 a2, f18
         mfc1 a3, f18
         lwc1 f12, 8, s0
         call 0x8003730c          // 0x8003730c(-1, 0xfe116408, 0x8, -1)
         lwc1 f14, 8, a1
         swc1 f0, 8, s0
         ra = [sp + 0x1c]         // a2
         s0 = [sp + 0x18]         // t9
         sp += 0x30
         ret                      // a2
         

    loc_0x80442bac: // orphan
         swc1 f0, 0xc, s0
         ra = [sp + 0x24]
         s1 = [sp + 0x20]         // s0
         s0 = [sp + 0x1c]         // a2

    loc_0x80442bbc: // orphan
         ldc1 f20, 0x10, sp
         ret                      // ra
         sp += 0x38

    loc_0x80442be4: // orphan
         a1 += 0x2370             // arg2
         call 0x82906a10          // 0x82906a10(-1, 0x442f71dcfe118778, 0x8, -1)
         a0 -= 0x629c

    loc_0x80442bf0: // orphan
         at = , s0 < 4
         if                       // unlikely
         at = , s0 < 0xc

    loc_0x80442bfc: // orphan
         if                       // unlikely
         a0 = 0x8292 << 16

    loc_0x80442c04: // orphan
         a1 = 0x8291 << 16

    loc_0x80442c08: // orphan
         a2 = 0x8291 << 16
         a2 += 0x2370             // arg3
         a1 += 0x237c             // arg2
         a0 -= 0x629c             // arg1
         call fcn.82906a50
         a3 = 0 + 7

    loc_0x80442c20: // orphan
         at = , s0 < 0xc
         if                       // unlikely
         at = , s0 < 0x28

    loc_0x80442c2c: // orphan
         if                       // unlikely
         a0 = 0x8292 << 16

    loc_0x80442c34: // orphan
         a1 = 0x8291 << 16
         a2 = 0x8291 << 16

    loc_0x80442c3c: // orphan
         a2 += 0x237c             // arg3
         a1 += 0x2388             // arg2
         a0 -= 0x629c             // arg1
         call fcn.82906a50
         a3 = 0 + 0x1b

    loc_0x80442c50: // orphan
         ra = [sp + 0x1c]         // a2
         s0 = [sp + 0x18]         // t9
         sp += 0x20
         ret                      // a2
         

    loc_0x80443070: // orphan
         call fcn.82906b6c
         a3 = 0 + 0x1a

    loc_0x80443078: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x80443098: // orphan
         v0 = , unsigned  byte [s0 + 0] // s4
         [sp + 0x1c] = ra
         t6 = 0 + 1               // lo
         if                       // unlikely
         a0 = 0 & 0xff            // arg1

    loc_0x804430ec: // orphan
         call fcn.82906f8c
         a0 = , unsigned  byte [s0 + 2] // s4
         call fcn.8290711c
         a0 = , unsigned  byte [s0 + 2] // s4
         goto 0x80443164
         ra = [sp + 0x1c]

    loc_0x80443164: // orphan
         // CODE XREF from fcn.8045664c @ 0x804430fc
         s0 = [sp + 0x18]         // t9
         sp += 0x20

    loc_0x8044316c: // orphan
         ret                      // ra
         

    loc_0x80444a98: // orphan
         v1 += 0x100
         byte [v1 - 0xc0] = 0
         byte [v1 - 0xbe] = 0
         swc1 f0, -0xbc, v1

    loc_0x80444aa8: // orphan
         byte [v1 - 0x80] = 0
         byte [v1 - 0x7e] = 0
         swc1 f0, -0x7c, v1
         // CODE XREF from fcn.80ac9244 @ +0xc7c
         byte [v1 - 0x40] = 0
         byte [v1 - 0x3e] = 0
         swc1 f0, -0x3c, v1
         byte [v1 - 0x100] = 0
         byte [v1 - 0xfe] = 0
         if                       // likely
         swc1 f0, -0xfc, v1

    loc_0x80444ad0: // orphan
         ret                      // ra
         

    loc_0x80444ea4: // orphan
         a1 += 0x6af8             // arg2

    loc_0x80444ea8: // orphan
         call fcn.82908e6c
         a0 = t9 + t0
         goto 0x80444f94
         ra = [sp + 0x14]

    loc_0x80444ed8: // orphan
         a1 += 0x6b08             // arg2
         a0 = t3 + t4             // arg1
         call fcn.82908cf4        // fcn.82908cf4(0x1000000fd)
         a3 = 0 + 5
         goto 0x80444f94
         ra = [sp + 0x14]

    loc_0x80444f94: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80444eb0, 0x80444ee8
         // CODE XREF from fcn.8043b5a4 @ 0x80444f58
         sp += 0x18
         ret                      // ra
         

    loc_0x80444fec: // orphan
         a0 = t9 + t0             // arg1
         goto fcn.80445064
         ra = [sp + 0x14]

    loc_0x804456b8: // orphan
         mfc1 t8, f10

    loc_0x80446264: // orphan
         t6 += a0                 // arg1
         t6 <<= 3
         t6 += a0                 // arg1
         t7 = 0x8292 << 16
         sp -= 0x20
         t7 -= 0x5840
         t6 <<= 2
         [sp + 0x14] = ra
         v0 = t6 + t7
         [sp + 0x24] = a1
         a0 = v0 + 4              // arg1
         call 0x8003f1dc          // 0x8003f1dc(0x248282fbc0, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v0
         t8 = 0x8291 << 16
         v0 = [sp + 0x1c]
         a2 = [t8 + 0x2f10]
         a1 = , unsigned  halfword [sp + 0x26]
         a0 = [v0 + 0]
         call 0x80041fa0          // 0x80041fa0(0x1df021f, 0x6408, 0xb4f1b37c, -1)
         [sp + 8] = a2
         ra = [sp + 0x14]
         sp += 0x20               // fp
         ret                      // ra
         

    loc_0x80446b14: // orphan
         byte [v0 + 6] = t0
         t1 = , unsigned  byte [v1 + 0x1071] // s4
         sp += 0x20
         t2 = t1 + 1
         ret                      // ra
         byte [v1 + 0x1071] = t2

    loc_0x80446dcc: // orphan
         t6 = 0x8291 << 16
         t6 = [t6 + 0x2f80]
         at = 0x8292 << 16
         t8 = t7 << 2
         at += t8
         sp += 0x18
         ret                      // ra
         [at - 0x47c8] = t6

    loc_0x80446e10: // orphan
         byte [at - 0x567b] = 0
         at = 0x8292 << 16

    loc_0x80446e18: // orphan
         t7 = 0x8292 << 16
         t7 = [t7 - 0x47a8]
         byte [at - 0x54d7] = 0
         at = 0x8292 << 16
         ra = [sp + 0x14]
         byte [at - 0x5333] = 0
         t6 = 0x8291 << 16
         t6 = [t6 + 0x2f80]
         at = 0x8292 << 16
         t8 = t7 << 2
         at += t8
         sp += 0x18
         ret
         [at - 0x47c8] = t6

    loc_0x80447424: // orphan
         byte [s0 + 5] = t4
         v1 = , unsigned  halfword [s3 + 0x1a0]
         at = , s1 < v1
         // CODE XREF from fcn.80447330 @ +0xc0
         beql at, 0, 0x80447460   // likely
         t0 = s2

    loc_0x80447438: // orphan
         unsigned , hi
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0 + 0x28            // arg3
         a3 = 0 + 0x28            // arg4
         t5 = lo
         s0 = s3 + t5
         call 0x800372cc          // 0x800372cc(-1, 0xff, 0x28, 0x28)
         a0 = , unsigned  byte [s0 + 0x21] // s4
         byte [s0 + 0x21] = v0
         t0 = s2

    loc_0x80447460: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447430
         s1 += fp
         if                       // likely
         s2 += 1

    loc_0x804474f0: // orphan
         s3 = 0x8291 << 16
         [sp + 0x4c] = ra
         s3 += 0x3210
         s2 -= 0x5840
         s0 -= 0x5840
         lwc1 f20, 0x76b0, at
         s1 = 0

    loc_0x8044777c: // orphan
         call fcn.8290b3bc        // "T@" // fcn.8290b3bc(-1)
         
         bnel v0, 0, 0x804477ec   // fcn.80447790+0x5c // likely
         s1 += 1

    loc_0x8044778c: // orphan
         t8 = halfword [s2 + 0x1068]

    loc_0x80447e30: // orphan
         t6 = , unsigned  byte [s0 + 0x1a2] // s4
         at = 0 + 1               // lo
         bnel t6, at, 0x80447fbc  // likely
         s2 += 1

    loc_0x80447e40: // orphan
         t7 = halfword [s3 + 0]
         s1 = s0 + 4
         a0 = s1
         if                       // likely
         

    loc_0x80447e54: // orphan
         call 0x8290bc84          // 0x8290bc84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x2a

    loc_0x80447e5c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447e4c
         call 0x80001ff0          // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x80447e60: // orphan
         
         at = 0 + 0x32
         bnel v0, at, 0x80447eb0  // likely
         v0 = halfword [s3 + 0]

    loc_0x80447e70: // orphan
         v0 = halfword [s3 + 0]
         t8 = s2 & 1              // lo
         at = , v0 < 0x22
         beql at, 0, 0x80447ee8   // likely
         at = 0 + 0x29

    loc_0x80447e84: // orphan
         bnel t8, 0, 0x80447ea0   // likely
         lwc1 f8, 0x16c, s0

    loc_0x80447e8c: // orphan
         lwc1 f4, 0x16c, s0
         add.s f6, f4, f20
         goto 0x80447ee4
         swc1 f6, 0x16c, s0

    loc_0x80447ea0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447e84
         sub.s f10, f8, f20
         goto 0x80447ee4
         swc1 f10, 0x16c, s0

    loc_0x80447eb0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447e68
         t9 = s2 & 1              // lo
         at = , v0 < 0x29
         beql at, 0, 0x80447ee8   // likely
         at = 0 + 0x29

    loc_0x80447ec0: // orphan
         bnel t9, 0, 0x80447edc   // likely
         lwc1 f4, 0x16c, s0

    loc_0x80447ec8: // orphan
         lwc1 f16, 0x16c, s0
         add.s f18, f16, f22
         goto 0x80447ee4
         swc1 f18, 0x16c, s0

    loc_0x80447edc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447ec0
         sub.s f6, f4, f22
         swc1 f6, 0x16c, s0

    loc_0x80447ee4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80447e94, 0x80447ea4, 0x80447ed0
         at = 0 + 0x29

    loc_0x80447ee8: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80447e7c, 0x80447eb8
         if                       // likely
         

    loc_0x80447ef0: // orphan
         v1 = halfword [s0 + 0x1e]
         at = 0 + 0x9a
         a1 = s1
         if                       // likely
         a2 = 0 + 2               // arg3

    loc_0x80447f04: // orphan
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         v1 = halfword [s0 + 0x1e]

    loc_0x80447f10: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447efc
         at = 0 + 0x9d
         if                       // likely
         a1 = s1

    loc_0x80447f1c: // orphan
         a0 = [s0 + 0]
         call 0x8003f2c4          // 0x8003f2c4(0xff08ffff, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 2
         v1 = halfword [s0 + 0x1e]

    loc_0x80447f2c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447f14
         at = 0 + 0xa0
         if                       // likely
         a1 = s1

    loc_0x80447f38: // orphan
         a0 = [s0 + 0]

    loc_0x80447f3c: // orphan
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 2
         v1 = halfword [s0 + 0x1e]

    loc_0x80447f48: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447f30
         at = 0 + 0xf3
         if                       // likely
         a1 = s1

    loc_0x80447f54: // orphan
         a0 = [s0 + 0]
         call 0x8003f2c4          // 0x8003f2c4(0xff08ffff, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 2
         v1 = halfword [s0 + 0x1e]

    loc_0x80447f64: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447f4c
         at = 0 + 0xf4
         if                       // likely
         a1 = s1

    loc_0x80447f70: // orphan
         a0 = [s0 + 0]
         call 0x8003f2c4          // 0x8003f2c4(0xff08ffff, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 2
         v1 = halfword [s0 + 0x1e]

    loc_0x80447f80: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447f68
         at = 0 + 0xf5
         if                       // likely
         a1 = s1

    loc_0x80447f8c: // orphan
         a0 = [s0 + 0]
         call 0x8003f2c4          // 0x8003f2c4(0xff08ffff, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 2

    loc_0x80447f98: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80447ee8, 0x80447f84
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         if                       // unlikely
         a0 = s1

    loc_0x80447fa8: // orphan
         call 0x8003eb84          // 0x8003eb84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0

    loc_0x80447fb0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447fa0
         call fcn.8290a208        // "&R"
         a0 = s2
         s2 += 1

    loc_0x80447fbc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80447e38
         at = 0 + 4
         if                       // likely
         s0 += 0x1a4

    loc_0x80447fc8: // orphan
         call fcn.8290b264        // fcn.8290b264(-1, 0x442f71dcfe116408)
         
         ra = [sp + 0x34]
         ldc1 f20, 0x10, sp
         ldc1 f22, 0x18, sp
         s0 = [sp + 0x24]         // ra
         s1 = [sp + 0x28]
         s2 = [sp + 0x2c]
         s3 = [sp + 0x30]         // s4
         ret
         sp += 0x38

    loc_0x80448134: // orphan
         a1 = , unsigned  halfword [t2 + 0]
         goto 0x80448164
         s1 += 1

    loc_0x80448884: // orphan
         t6 = , unsigned  byte [s0 + 0x1a2] // s4
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0 + 0x28            // arg3
         if                       // likely
         a3 = 0 + 0x28            // arg4

    loc_0x80448898: // orphan
         t7 = , unsigned  byte [s0 + 6] // s4
         a0 = , unsigned  byte [s0 + 0x21] // s4
         s1 = s0 + 0x16c
         t8 = t7 & s7             // s4
         call 0x800372cc          // 0x800372cc(0xff, 0x442f71dcfe116408, 0x8, -1)
         byte [s0 + 6] = t8
         call 0x80001ff0          // 0x80001ff0(0xff, 0x442f71dcfe116408, 0x8, -1)
         byte [s0 + 0x21] = v0
         if                       // likely
         a0 = s1

    loc_0x804488c0: // orphan
         t9 = halfword [s0 + 0x192]
         mfc1 a2, f20
         a0 = s1
         a1 = s4
         a3 = halfword [s0 + 0x190]
         call 0x800371b4          // 0x800371b4(0x442f71dcfe117dbd, 0xff, 0x8, 0xffff)
         [sp + 0x10] = t9
         goto 0x80448900
         a0 = s1

    loc_0x804488e4: // orphan
         t0 = halfword [s0 + 0x192]
         mfc1 a2, f24
         a1 = s4
         a3 = halfword [s0 + 0x190]
         call 0x800371b4          // 0x800371b4(-1, 0xff, 0x8, 0xffff)
         [sp + 0x10] = t0
         a0 = s1

    loc_0x80448900: // orphan
         // CODE XREF from fcn.8045664c @ 0x804488dc
         a1 = [sp + 0x6c]

    loc_0x80448904: // orphan
         a2 = [sp + 0x70]
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, 0x0, -1)
         a3 = [sp + 0x74]
         t1 = halfword [s0 + 0x194]
         a0 = s2
         t2 = t1 - 0x71c
         call fcn.8290a208
         halfword [s0 + 0x194] = t2
         lwc1 f4, 0x174, s0
         c.le.s f22, f4
         
         bc1fl 0x804489dc
         s2 += 1
         byte [s0 + 0x1a2] = 0

    loc_0x8044893c: // orphan
         t3 = halfword [s3 + 0x1068]
         t6 = , unsigned  byte [s3 + 0x1071] // s4
         t4 = t3 << 4
         t4 += t3
         t4 <<= 1
         t5 = s5 + t4             // t9
         t7 = t6 << 1
         t8 = t5 + t7
         t9 = , unsigned  halfword [t8 + 0]
         beql t9, 0, 0x804489dc   // unlikely
         s2 += 1

    loc_0x80448968: // orphan
         call fcn.8290b3bc        // "T@" // fcn.8290b3bc(-1)
         
         bnel v0, 0, 0x804489dc   // likely
         s2 += 1

    loc_0x80448978: // orphan
         t0 = halfword [s3 + 0x1068]
         t3 = , unsigned  byte [s3 + 0x1071] // s4
         a0 = s2
         t1 = t0 << 4
         t1 += t0

    loc_0x8044898c: // orphan
         t1 <<= 1
         t2 = s5 + t1
         t4 = t3 << 1
         t6 = t2 + t4
         call fcn.8290a358        // fcn.828f2530+0x17e28
         a1 = , unsigned  halfword [t6 + 0]

    loc_0x804489a4: // orphan
         goto 0x804489dc
         s2 += 1

    loc_0x804489ac: // orphan
         call 0x800427b8          // "P@" // 0x800427b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]

    loc_0x804489b0: // orphan
         a0 = [s0 + 0]
         beql v0, 0, 0x804489dc   // unlikely
         s2 += 1

    loc_0x804489bc: // orphan
         call fcn.8290b40c        // fcn.8290b40c(-1)
         
         if                       // unlikely
         a0 = s2

    loc_0x804489cc: // orphan
         call fcn.8290abb0
         a1 = , unsigned  byte [s3 + 0x1071] // s4
         byte [s0 + 0x21] = 0

    loc_0x804489d8: // orphan
         s2 += 1

    loc_0x804489dc: // orphan
         // CODE XREF from fcn.8045664c @ 0x804489a4
         at = 0 + 4
         if                       // likely
         s0 += 0x1a4

    loc_0x804489e8: // orphan
         call fcn.8290b264        // fcn.8290b264(-1, 0x442f71dcfe116408)
         
         ra = [sp + 0x5c]         // a2
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         s0 = [sp + 0x38]         // t9
         s1 = [sp + 0x3c]
         s2 = [sp + 0x40]
         s3 = [sp + 0x44]
         s4 = [sp + 0x48]
         s5 = [sp + 0x4c]         // ra
         s6 = [sp + 0x50]
         s7 = [sp + 0x54]
         fp = [sp + 0x58]
         ret                      // a2
         sp += 0x78

    loc_0x8044904c: // orphan
         [sp + 0x28] = s2
         [sp + 0x24] = s1
         if                       // likely
         [sp + 0x20] = s0

    loc_0x8044905c: // orphan
         t6 = 0x8291 << 16
         t6 += 0x31ec
         [sp + 0x50] = t6

    loc_0x80449068: // orphan
         at = 0 + 0x25
         if                       // likely
         t9 = 0 + 1               // lo

    loc_0x80449074: // orphan
         t7 = 0x8291 << 16
         t7 += 0x31f8
         [sp + 0x50] = t7

    loc_0x80449080: // orphan
         at = 0 + 0x26
         if                       // likely
         t8 = 0x8291 << 16

    loc_0x8044908c: // orphan
         t8 += 0x3204
         [sp + 0x50] = t8

    loc_0x80449094: // orphan
         at = 0x8292 << 16
         halfword [at - 0x4786] = t9
         t0 = , unsigned  halfword [s6 + 0x1a0]
         t3 = [sp + 0x50]
         s0 = 0x8292 << 16
         t1 = t0 + 1
         halfword [s6 + 0x1a0] = t1
         t4 = halfword [t3 + 0xa]
         t2 = t1 & 0xffff
         s0 -= 0x478c

    loc_0x804490bc: // orphan
         at = , t2 < t4           // lo
         if                       // likely
         a1 = 0x8292 << 16

    loc_0x804490c8: // orphan
         a0 = halfword [s0 + 0]
         a1 = halfword [a1 - 0x4788]
         a2 = 0 + 0x28            // arg3
         call 0x800372cc          // 0x800372cc(0xff08, 0xffff, 0x28, -1)
         a3 = 0 + 0x28
         halfword [s0 + 0] = v0

    loc_0x804490e0: // orphan
         v1 = , unsigned  byte [s6 + 0x1071] // s4
         s2 = 0

    loc_0x804490e8: // orphan
         s0 = 0x8292 << 16
         if                       // unlikely
         v0 = v1

    loc_0x804490f4: // orphan
         s0 -= 0x5840
         s3 = 0 - 2               // hi

    loc_0x804490fc: // orphan
         a0 = , unsigned  byte [s0 + 0x21]
         a1 = 0
         a2 = 0 + 0x2d            // arg3
         call 0x800372cc          // "0M" // 0x800372cc(0x0, 0x0, 0x2d, -1)
         a3 = 0 + 0x2d
         t5 = v0 & 0xff           // s4

    loc_0x80449114: // orphan
         if                       // likely
         byte [s0 + 0x21] = v0

    loc_0x8044911c: // orphan
         t6 = , unsigned  byte [s0 + 5] // s4
         t7 = t6 & s3             // s4
         byte [s0 + 5] = t7

    loc_0x80449128: // orphan
         v1 = , unsigned  byte [s6 + 0x1071] // s4
         s2 += 1
         s0 += 0x1a4
         at = , s2 < v1           // lo
         if                       // likely
         v0 = v1                  // s4

    loc_0x80449140: // orphan
         s2 = 0

    loc_0x80449144: // orphan
         t8 = , unsigned  halfword [s6 + 0x1a0]
         at = 0 + 5
         s3 = 0 - 2               // hi
         div 0, t8, at
         t9 = hi
         at = , v0 < 5
         if                       // likely
         

    loc_0x80449164: // orphan
         if                       // unlikely
         a2 = 0 + 0x1a4           // arg3

    loc_0x8044916c: // orphan
         unsigned , hi
         t0 = lo
         v0 = s6 + t0
         t1 = , unsigned  byte [v0 + 6] // s4
         t3 = t1 & 0xffdf
         byte [v0 + 6] = t3
         t2 = , unsigned  byte [s6 + 0x1071] // s4
         t3 = [sp + 0x50]
         t4 = t2 + 1
         t5 = t4 & 0xff
         unsigned , hi
         byte [s6 + 0x1071] = t4
         t6 = lo
         v0 = s6 + t6
         t7 = , unsigned  byte [v0 + 5] // s4

    loc_0x804491a8: // orphan
         t8 = t7 | 1              // lo
         byte [v0 + 5] = t8
         t9 = , unsigned  byte [s6 + 0x1071]
         t1 = , unsigned  halfword [s6 + 0x1a0]
         t2 = , unsigned  byte [t3 + 1]
         unsigned , hi
         a1 = t1 + t2             // arg2
         a1 <<= 0x10              // arg2

    loc_0x804491c8: // orphan
         a1 = , signed  a1 >> 0x10 // arg2
         t0 = lo
         a0 = s6 + t0             // arg1
         call 0x8003eb84          // 0x8003eb84(0x442f71dcfe111003, 0xfffffe11, 0x8, -1)
         a0 += 4

    loc_0x804491dc: // orphan
         s0 = 0x8292 << 16
         s1 = 0x8292 << 16
         s4 = 0x8292 << 16
         s4 -= 0x5c80
         s1 -= 0x56d4
         s0 -= 0x5840
         s5 = sp + 0x54

    loc_0x804491f8: // orphan
         a1 = [s4 + 0]
         a0 = s1
         a2 = sp + 0x58           // arg3
         a3 = sp + 0x56           // arg4
         [sp + 0x10] = s5
         call 0x80037120          // 0x80037120(0x442f71dcfe117dbd, 0x1c, 0x178058, 0x178056)
         a1 += 0xa8

    loc_0x80449214: // orphan
         t4 = halfword [sp + 0x54]
         a0 = s2
         call fcn.8290a208        // "&R"
         halfword [s0 + 0x192] = t4
         s2 += 1
         at = , s2 < 6            // lo

    loc_0x8044922c: // orphan
         s0 += 0x1a4
         if                       // likely
         s1 += 0x1a4

    loc_0x80449238: // orphan
         t5 = [sp + 0x50]
         v1 = , unsigned  halfword [s6 + 0x1a0]
         a0 = , unsigned  halfword [t5 + 2]
         bnel a0, v1, 0x80449268  // likely
         t7 = a0 + 6

    loc_0x8044924c: // orphan
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x80449250: // orphan
         a0 = 0 + 5
         t6 = [sp + 0x50]
         v1 = 0x8292 << 16
         v1 = , unsigned  halfword [v1 - 0x56a0]
         a0 = , unsigned  halfword [t6 + 2]
         t7 = a0 + 6

    loc_0x80449268: // orphan
         if                       // likely
         t8 = 0x8292 << 16

    loc_0x80449270: // orphan
         t8 = , unsigned  byte [t8 - 0x583b] // s4
         at = 0x8292 << 16
         t0 = 0x8292 << 16
         t9 = t8 & s3             // s4
         byte [at - 0x583b] = t9
         at = 0x8292 << 16
         byte [at - 0x569e] = 0
         t0 = , unsigned  byte [t0 - 0x5697]
         at = 0x8292 << 16
         s0 = 0x8292 << 16
         t3 = t0 & s3
         byte [at - 0x5697] = t3
         at = 0x8292 << 16
         v0 = 0x8292 << 16
         v0 -= 0x47d8
         byte [at - 0x54fa] = 0
         s0 -= 0x54f8

    loc_0x804492b4: // orphan
         t4 = , unsigned  byte [s0 + 0x1a9] // s4
         t6 = , unsigned  byte [s0 + 0x34d] // s4
         t8 = , unsigned  byte [s0 + 0x4f1] // s4

    loc_0x804492c0: // orphan
         t1 = , unsigned  byte [s0 + 5] // s4

    loc_0x804492c4: // orphan
         s0 += 0x690
         t5 = t4 & s3             // t9
         t7 = t6 & s3
         t9 = t8 & s3
         t2 = t1 & s3
         byte [s0 - 0x19f] = t9
         byte [s0 - 0x343] = t7
         byte [s0 - 0x4e7] = t5
         byte [s0 - 0x34a] = 0
         byte [s0 - 0x1a6] = 0
         byte [s0 - 2] = 0
         byte [s0 - 0x68b] = t2
         if                       // likely
         byte [s0 - 0x4ee] = 0

    loc_0x804492fc: // orphan
         call fcn.8290b264        // fcn.8290b264(-1, 0x442f71dcfe116408)
         
         ra = [sp + 0x3c]
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]         // t9
         s3 = [sp + 0x2c]
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]
         s6 = [sp + 0x38]         // t9
         ret
         sp += 0x60

    loc_0x80449340: // orphan
         [sp + 0x38] = s4
         [sp + 0x34] = s3
         [sp + 0x30] = s2

    loc_0x8044934c: // orphan
         [sp + 0x28] = s0
         mtc1 at, f22
         [sp + 0x2c] = s1
         sdc1 f20, 0x18, sp
         at = 0x8291 << 16
         s0 = 0x8292 << 16
         s2 = 0x8292 << 16
         s3 = 0x8291 << 16
         s4 = 0x8008 << 16
         s5 = 0x8291 << 16
         s6 = 0x8009 << 16
         [sp + 0x44] = ra
         s6 -= 0x71b0
         s5 += 0x37e0
         s4 += 0x7e50

    loc_0x80449388: // orphan
         s3 += 0x37a8
         s2 -= 0x5840
         s0 -= 0x5840
         lwc1 f20, 0x76e4, at
         s1 = 0

    loc_0x8044958c: // orphan
         c.le.s f16, f18
         
         bc1fl 0x804495e8
         s1 += 1
         call fcn.8290b3e4        // "T@"
         byte [s0 + 0x1a2] = 0
         bnel v0, 0, 0x804495e8   // fcn.804495e4+0x4 // likely
         s1 += 1

    loc_0x804495ac: // orphan
         t1 = , unsigned  byte [s2 + 0x1071] // s4
         a0 = s1

    loc_0x804495b4: // orphan
         t2 = t1 << 1
         t3 = s3 + t2
         call fcn.8290a358        // fcn.828f2530+0x17e28
         a1 = , unsigned  halfword [t3 + 0]
         goto 0x804495e8          // fcn.804495e4+0x4
         s1 += 1

    loc_0x80449658: // orphan
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 0xb4
         t1 = 0x8292 << 16
         t1 -= 0x47a0
         t6 = 0 + 0xbe
         halfword [t1 + 0] = t6
         t7 = halfword [t1 + 0]
         v1 = 0x8292 << 16
         t0 = 0x8292 << 16
         mtc1 t7, f4
         t0 -= 0x47a2
         v1 -= 0x47a4
         cvt.s.w f4, f4
         halfword [v1 + 0] = 0
         halfword [t0 + 0] = 0
         v0 = 0x8292 << 16
         v0 = [v0 - 0x5c80]
         t8 = halfword [t0 + 0]
         mfc1 a2, f4
         a3 = halfword [v1 + 0]
         a0 = v0 + 0xb4
         a1 = v0 + 0xa8

    loc_0x804496b0: // orphan
         call 0x800371b4          // 0x800371b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t8
         ra = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         

    loc_0x80449c94: // orphan
         [sp + 0x1c] = ra

    loc_0x80449c98: // orphan
         at = 0 + 0x25
         if                       // unlikely
         a0 = 0x8292 << 16

    loc_0x80449ca4: // orphan
         at = 0 + 0x26
         if                       // unlikely
         a0 = 0x8292 << 16

    loc_0x80449cb0: // orphan
         goto 0x80449d84
         

    loc_0x80449d00: // orphan
         mtc1 0, f0
         a0 = [a0 - 0x5c80]       // arg1 // t9
         a2 = 0x41f0 << 16
         mfc1 a1, f0
         mfc1 a3, f0
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, 0x41f00000, -1)
         a0 += 0xb4
         t9 = 0 - 0x800
         at = 0x8292 << 16
         halfword [at - 0x47a4] = t9
         at = 0x8292 << 16
         t0 = 0 + 0x4500
         halfword [at - 0x47a2] = t0
         at = 0x8292 << 16
         t1 = 0 + 0x96
         goto 0x80449d84
         halfword [at - 0x47a0] = t1

    loc_0x80449d44: // orphan
         mtc1 0, f0
         a0 = [a0 - 0x5c80]       // arg1 // t9
         a2 = 0x41f0 << 16
         mfc1 a1, f0
         mfc1 a3, f0
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, 0x41f00000, -1)
         a0 += 0xb4
         t2 = 0 - 0x400
         at = 0x8292 << 16
         halfword [at - 0x47a4] = t2
         at = 0x8292 << 16
         t3 = 0 + 0x3700
         halfword [at - 0x47a2] = t3
         at = 0x8292 << 16
         t4 = 0 + 0x96
         halfword [at - 0x47a0] = t4

    loc_0x80449d84: // orphan
         // CODE XREF from fcn.8045664c @ 0x80449cb0
         // CODE XREF from fcn.80434154 @ 0x80449cf8
         // CODE XREF from fcn.8045664c @ 0x80449d3c
         t5 = 0x8292 << 16

    loc_0x80449dac: // orphan
         a0 = v0 + 0xb4           // arg1
         a1 = v0 + 0xa8           // arg2
         [sp + 0x10] = t6
         mfc1 a2, f4
         call 0x800371b4          // 0x800371b4(0x1b3, 0x1a7, 0x8, -1)
         
         ra = [sp + 0x1c]
         sp += 0x20
         ret                      // ra
         

    loc_0x80449ec4: // orphan
         t7 = t0 + 8
         [t1 + 0] = v0
         [t2 + 0] = t7
         t9 = 0x8009 << 16
         t9 += 0x4e38
         t8 = 0xde00 << 16

    loc_0x8044a148: // orphan
         add.s f8, f4, f18
         mul.s f6, f10, f14
         mtc1 at, f4
         swc1 f8, 4, a0           // arg1
         mul.s f8, f4, f2
         mtc1 at, f4
         at = 0x8291 << 16
         add.s f10, f6, f8
         mul.s f6, f4, f12
         lwc1 f4, 0x773c, at
         at = 0x40c0 << 16
         add.s f8, f10, f6
         mtc1 at, f6
         at = 0x8292 << 16
         add.s f10, f8, f4
         div.s f8, f14, f6
         swc1 f10, 8, a0          // arg1
         swc1 f8, 0xc, a0         // arg1
         swc1 f0, -0x43cc, at
         at = 0x8292 << 16
         swc1 f2, -0x43d0, at
         at = 0x8292 << 16
         ret                      // ra
         swc1 f14, -0x43d4, at

    loc_0x8044a224: // orphan
         t6 -= a2                 // arg3
         t6 <<= 2
         v1 = v0 + t6
         lwc1 f6
         lwc1 f4                  // arg1
         lwc1 f16, 0xc, v1
         lwc1 f10, 4, a0          // arg1
         mul.s f8, f4, f6
         lwc1 f6, 8, a0           // arg1
         t9 = a3 << 1             // arg4 // hi
         mul.s f18, f10, f16
         lwc1 f10, 0x18, v1
         t0 = 0x8292 << 16
         t0 += t9
         mul.s f16, f6, f10
         lwc1 f6, 0xc, a0         // arg1
         at = 0x3f80 << 16
         t8 = 0x8292 << 16
         t8 -= 0x43f8
         add.s f4, f8, f18
         lwc1 f18, 0x24, v1
         t7 = a3 << 2             // arg4
         v0 = t7 + t8
         mul.s f10, f18, f6
         add.s f8, f4, f16
         add.s f4, f10, f8
         swc1 f4                  // arg2
         lwc1 f16                 // arg1
         lwc1 f18, 4, v1
         lwc1 f10, 4, a0          // arg1
         lwc1 f8, 0x10, v1
         mul.s f6, f16, f18
         lwc1 f18, 8, a0          // arg1
         mul.s f4, f10, f8
         lwc1 f10, 0x1c, v1
         mul.s f8, f18, f10
         lwc1 f18, 0xc, a0        // arg1
         add.s f16, f6, f4
         lwc1 f4, 0x28, v1
         mul.s f10, f4, f18
         add.s f6, f16, f8
         add.s f16, f10, f6
         swc1 f16, 4, a1          // arg2

    loc_0x8044a2d0: // orphan
         lwc1 f4, 8, v1
         lwc1 f8                  // arg1
         lwc1 f6, 0x14, v1
         lwc1 f10, 4, a0          // arg1
         mul.s f18, f8, f4
         lwc1 f4, 8, a0           // arg1
         mul.s f16, f10, f6
         lwc1 f10, 0x20, v1
         mul.s f6, f4, f10
         lwc1 f4, 0xc, a0         // arg1
         add.s f8, f18, f16
         lwc1 f16, 0x2c, v1
         mul.s f10, f16, f4
         add.s f18, f8, f6
         mtc1 at, f6
         add.s f8, f10, f18
         swc1 f8, 8, a1           // arg2
         t0 = halfword [t0 - 0x4400]
         lwc1 f18

    loc_0x8044a31c: // orphan
         mtc1 t0, f16
         
         cvt.s.w f4, f16
         div.s f10, f6, f4
         add.s f8, f10, f18
         ret                      // ra
         swc1 f8

    loc_0x8044a3d8: // orphan
         call fcn.8290e1d8        // fcn.8290e1d8(-1, 0x442f71dcfe116408)
         a1 = [s0 + 0]
         v0 = halfword [s1 + 0]
         at = , v0 < 3
         if                       // unlikely
         a0 = sp + 0x30

    loc_0x8044a3f0: // orphan
         call fcn.8290e040
         a1 = [s0 + 0]
         v0 = halfword [s1 + 0]

    loc_0x8044a3fc: // orphan
         a2 = v0 - 1              // t3
         a2 <<= 0x10
         a2 = , signed  a2 >> 0x10 // t3
         a0 = sp + 0x30
         a1 = [sp + 0x40]
         call fcn.8290e2fc        // fcn.8290e2fc(0x178030, 0xa)
         a3 = [sp + 0x44]         // ra
         at = 0x3f80 << 16
         mtc1 at, f6
         lwc1 f4
         c.le.s f6, f4
         

    loc_0x8044a42c: // orphan
         bc1fl 0x8044a4d4
         v0 = 0
         t7 = halfword [s1 + 0]
         mtc1 0, f8
         t9 = [sp + 0x2c]
         t8 = t7 + 1
         halfword [s1 + 0] = t8
         v0 = halfword [s1 + 0]
         swc1 f8
         t0 = halfword [t9 + 0]
         t1 = v0 + 3
         at = , t0 < t1
         beql at, 0, 0x8044a470   // likely
         at = 0 + 1               // lo

    loc_0x8044a464: // orphan
         goto 0x8044a4d4
         v0 = 0 + 1               // lo

    loc_0x8044a470: // orphan
         if                       // likely
         a0 = sp + 0x30           // arg1

    loc_0x8044a478: // orphan
         call fcn.8290e0fc
         a1 = [s0 + 0]
         v0 = halfword [s1 + 0]

    loc_0x8044a484: // orphan
         at = 0 + 2
         if                       // likely
         a0 = sp + 0x30           // arg1

    loc_0x8044a490: // orphan
         call fcn.8290e1d8        // fcn.8290e1d8(-1, 0x442f71dcfe116408)
         a1 = [s0 + 0]
         v0 = halfword [s1 + 0]

    loc_0x8044a49c: // orphan
         at = , v0 < 3
         if                       // unlikely
         a0 = sp + 0x30           // arg1

    loc_0x8044a4a8: // orphan
         call fcn.8290e040
         a1 = [s0 + 0]
         v0 = halfword [s1 + 0]

    loc_0x8044a4b4: // orphan
         a2 = v0 - 1              // arg3 // t3
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3 // t3
         a0 = sp + 0x30           // arg1
         a1 = [sp + 0x40]
         call fcn.8290e2fc        // fcn.8290e2fc(0x178030, 0xa)
         a3 = [sp + 0x44]         // ra
         v0 = 0

    loc_0x8044a4d4: // orphan
         // CODE XREF from fcn.8045664c @ 0x8044a464
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // t9
         ret                      // ra
         sp += 0x40

    loc_0x8044a884: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455cf0
         at = 0 + 0xb8
         if                       // likely
         halfword [v1 + 0] = v0

    loc_0x8044a890: // orphan
         t0 = halfword [v1 + 0]   // s4
         at = 0 + 0x52
         // CODE XREF from fcn.80455b3c @ +0x1b8
         t1 = 0 + 2
         if                       // likely
         

    loc_0x8044a8a4: // orphan
         halfword [s0 + 8] = t1

    loc_0x8044a8a8: // orphan
         goto 0x8044a9ac
         halfword [s0 + 4] = 0

    loc_0x8044a970: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455cfc
         if                       // likely
         byte [v1 + 0] = t2

    loc_0x8044a978: // orphan
         byte [v1 + 0] = 0

    loc_0x8044a97c: // orphan
         t4 = [t4 + 0x7200]       // t9
         at = 0x8292 << 16
         t7 = 0 + 1               // lo
         t5 = , unsigned  halfword [t4 + 8]
         a0 = 0 + 0x8c            // arg1
         t6 = t5 & 0x8000
         beql t6, 0, 0x8044a9b0   // unlikely
         ra = [sp + 0x1c]

    loc_0x8044a99c: // orphan
         [at - 0x43c0] = 0
         at = 0x8292 << 16
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x43bc] = t7

    loc_0x8044a9ac: // orphan
         // CODE XREF from fcn.8045664c @ 0x8044a8a8
         ra = [sp + 0x1c]

    loc_0x8044a9b0: // orphan
         s0 = [sp + 0x18]         // t9
         sp += 0x20
         ret                      // ra
         

    loc_0x8044aa7c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d08
         if                       // likely
         v1 = 0x800d << 16

    loc_0x8044aa84: // orphan
         at = , a2 < 0x1e1        // arg3 // lo
         if                       // likely
         t7 = 0 + 0x1e0

    loc_0x8044aa90: // orphan
         a2 = 0 + 0x1e0           // arg3

    loc_0x8044aa94: // orphan
         v0 = t7 - a2             // arg3
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10
         a0 = v0 + a2             // arg3 // u"8\x02"

    loc_0x8044aaa4: // orphan
         v1 += 0x510
         v0 = [v1 + 0]            // t9
         ra = 0xe700 << 16
         mtc1 s0, f4
         t8 = v0 + 8
         [v1 + 0] = t8
         [v0 + 4] = 0
         // CODE XREF from fcn.80455b3c @ +0x1d0
         [v0 + 0] = ra
         v0 = [v1 + 0]
         t6 = 0xe300 << 16
         cvt.s.w f6, f4
         t9 = v0 + 8
         // CODE XREF from fcn.8045664c @ 0x80455d10
         [v1 + 0] = t9
         t6 |= 0xa01
         [v0 + 0] = t6
         [v0 + 4] = 0
         v0 = [v1 + 0]

    loc_0x8044aae8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d14
         mtc1 a2, f16
         at = 0x4080 << 16
         mtc1 at, f0
         cvt.s.w f18, f16
         t7 = v0 + 8
         mul.s f8, f6, f0
         [v1 + 0] = t7
         t9 = 0xf0a << 16
         // CODE XREF from fcn.80455b3c @ +0x1e8
         t8 = 0xe200 << 16
         t8 |= 0x1c
         t9 |= 0x4000
         [v0 + 4] = t9
         [v0 + 0] = t8
         // CODE XREF from fcn.80455b3c @ +0x1dc
         v0 = [v1 + 0]
         mul.s f4, f18, f0
         trunc.w.s f10, f8
         t6 = v0 + 8
         [v1 + 0] = t6
         // CODE XREF from fcn.8045664c @ 0x80455d1c
         t7 = 0xe300 << 16
         t7 |= 0xc00
         [v0 + 0] = t7
         [v0 + 4] = 0
         v0 = [v1 + 0]

    loc_0x8044ab44: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d20
         mtc1 s6, f8
         mfc1 t6, f10
         trunc.w.s f6, f4
         t8 = v0 + 8
         mtc1 a0, f4
         cvt.s.w f10, f8
         // CODE XREF from fcn.8045664c @ 0x80455d28
         [v1 + 0] = t8
         t7 = t6 & 0xfff
         t8 = t7 << 0xc
         mfc1 t7, f6
         cvt.s.w f6, f4

    loc_0x8044ab70: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d2c
         mul.s f16, f10, f0
         at = 0xed00 << 16
         t9 = t8 | at
         t8 = t7 & 0xfff
         t6 = t9 | t8
         mul.s f8, f6, f0
         [v0 + 0] = t6
         at = , a2 < a0           // lo
         // CODE XREF from fcn.80455b3c @ +0x200
         fp = s6
         t5 = a0                  // t9
         s7 = 0 + 0x20            // k0
         trunc.w.s f18, f16
         trunc.w.s f10, f8
         // CODE XREF from fcn.80455b3c @ +0x1f4
         mfc1 t9, f18
         
         t8 = t9 & 0xfff
         mfc1 t9, f10
         t6 = t8 << 0xc
         // CODE XREF from fcn.8045664c @ 0x80455d34
         t8 = t9 & 0xfff
         t7 = t6 | t8
         [v0 + 4] = t7
         v0 = [v1 + 0]
         t8 = 0xfffc << 16
         t6 = 0xfcff << 16
         t9 = v0 + 8
         [v1 + 0] = t9

    loc_0x8044abd8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d44
         t6 |= 0xffff             // s2
         t8 |= 0xf87c             // t9
         [v0 + 4] = t8
         [v0 + 0] = t6
         v0 = [v1 + 0]

    loc_0x8044abec: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455d38
         // CODE XREF from fcn.80455b3c @ +0x20c
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 4] = 0
         if                       // fcn.8044ae30+0x20 // unlikely
         [v0 + 0] = ra

    loc_0x8044c724: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455ec0
         [t0 + 0] = t8
         [v1 + 0] = t9
         t8 = , unsigned  byte [s0 + 0x13] // s4
         t5 = , unsigned  byte [s0 + 0x12]
         t7 = , unsigned  byte [s0 + 0x14]
         t9 = t8 << 0x10
         t6 = t5 << 0x18
         t4 = t6 | t9
         t8 = t7 << 8
         t6 = t4 | t8
         t9 = t6 | 0xff
         [v1 + 4] = t9
         v1 = [t0 + 0]            // t9
         t7 = 0xfb00 << 16
         s5 = , signed  s5 >> 0x10 // t9
         t5 = v1 + 8
         [t0 + 0] = t5
         [v1 + 0] = t7
         t5 = , unsigned  byte [s0 + 0x16] // s4
         t8 = , unsigned  byte [s0 + 0x15] // s4
         t9 = , unsigned  byte [s0 + 0x17] // s4
         t7 = t5 << 0x10
         t6 = t8 << 0x18
         t4 = t6 | t7
         t5 = t9 << 8
         t6 = t4 | t5
         t7 = t6 | 0xff           // t9
         [v1 + 4] = t7
         s2 = halfword [sp + 0xaa]
         s1 = halfword [sp + 0xa6]
         s4 = , signed  s4 >> 0x10
         a2 = s4 << 0x10          // arg3
         t9 = 0 + 0x400
         t8 = 0 + 0x400
         a3 = s5 << 0x10          // arg4
         a1 = s2 << 0x10          // arg2
         a0 = s1 << 0x10          // arg1
         a0 = , signed  a0 >> 0x10 // arg1

    loc_0x8044c7bc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455ed8
         a1 = , signed  a1 >> 0x10 // arg2
         a3 = , signed  a3 >> 0x10 // arg4 // t9
         [sp + 0x18] = t8
         [sp + 0x1c] = t9
         a2 = , signed  a2 >> 0x10 // arg3
         // CODE XREF from fcn.80455b3c @ +0x3a0
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0xfffffe11, 0x0, -1)
         [sp + 0x10] = 0

    loc_0x8044ca3c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455f08
         [sp + 0x44] = s6
         [sp + 0x40] = s5
         [sp + 0x3c] = s4
         [sp + 0x38] = s3
         [sp + 0x34] = s2
         // CODE XREF from fcn.80455b3c @ +0x3d0
         [sp + 0x30] = s1
         [sp + 0x2c] = s0
         a0 = 0 + 0x51            // arg1
         call 0x8004c990          // 0x8004c990(0x51, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         s1 = 0x8292 << 16
         s1 -= 0x4180
         t6 = halfword [s1 + 0xc]
         s3 = 0x8291 << 16
         s3 += 0x72d8
         t7 = t6 << 4
         // CODE XREF from fcn.8045664c @ 0x80455ef8
         t7 += t6
         t7 <<= 2
         t0 = s3 + t7
         s4 = , unsigned  halfword [v0 + 0]
         t8 = halfword [t0 + 8]
         t9 = halfword [s1 + 0]
         // CODE XREF from fcn.80455b3c @ +0x3c4
         t3 = halfword [t0 + 0xa]
         t4 = halfword [s1 + 2]
         s5 = t8 + t9
         a2 = halfword [t0 + 4]
         s6 = t3 + t4
         a3 = halfword [t0 + 6]
         s7 = , unsigned  halfword [v0 + 2]
         s5 <<= 0x10
         s6 <<= 0x10
         // CODE XREF from fcn.8045664c @ 0x80455f04
         s5 = , signed  s5 >> 0x10
         s6 = , signed  s6 >> 0x10

    loc_0x8044cac0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455efc
         s2 = v0                  // s4
         if                       // likely
         at = s4

    loc_0x8044cacc: // orphan
         at = s4 + 3

    loc_0x8044cad0: // orphan
         s4 = , signed  at >> 2
         a1 = s6
         a0 = s5                  // t9
         [sp + 0x10] = 0
         [sp + 0x94] = a2
         call 0x8004ac24          // 0x8004ac24(-1, 0x442f71dcfe111002, 0x8, -1)
         [sp + 0x90] = a3
         s0 = 0x800d << 16
         s0 += 0x510
         v1 = [s0 + 0]
         t7 = 0x8009 << 16
         t7 += 0x4e38
         t5 = v1 + 8
         [s0 + 0] = t5
         t6 = 0xde00 << 16
         [v1 + 0] = t6
         [v1 + 4] = t7
         t8 = halfword [s1 + 0xc]
         t9 = t8 << 4
         t9 += t8
         t9 <<= 2
         t0 = s3 + t9
         a0 = [t0 + 0x18]         // t9
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe111002, 0x8, -1)
         a1 = [t0 + 0x1c]         // t9
         // CODE XREF from fcn.8045664c @ 0x80455f10
         a0 = halfword [s1 + 0]
         a1 = halfword [s1 + 2]
         a2 = v0                  // s4
         a3 = 0
         [sp + 0x10] = 0

    loc_0x8044cb48: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455f14
         a0 += 0x20
         call 0x8004d19c          // 0x8004d19c(0x10000001f, 0x442f71dcfe116408, 0x8, -1)
         a1 += 0x26

    loc_0x8044d2a8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455fa4
         a2 = , signed  a2 >> 0x10 // arg3
         a1 = , signed  a1 >> 0x10 // arg2
         a0 = halfword [sp + 0x52]
         [sp + 0x10] = s1
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(0x3203, 0xfffffe11, 0x0, -1)
         [sp + 0x20] = 0
         a2 = s3 << 0x10
         t5 = 0 + 0x400
         [sp + 0x18] = t5
         a2 = , signed  a2 >> 0x10 // t9
         a0 = halfword [sp + 0x52]
         a1 = halfword [sp + 0x56]
         a3 = halfword [sp + 0x4e]
         [sp + 0x10] = s1
         [sp + 0x14] = 0
         [sp + 0x1c] = 0
         call 0x80044270          // 0x80044270(0x3203, 0x0, -1, 0x210)
         [sp + 0x20] = 0

    loc_0x8044d394: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455fb0
         a0 = 0 + 0x33
         call 0x8004c990          // 0x8004c990(0x33, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 5
         a0 = 0 + 3
         a1 = v0                  // s4
         a2 = 0

    loc_0x8044d518: // orphan
         // CODE XREF from fcn.8045664c @ 0x80455fd4
         t7 = 0xde00 << 16
         [v0 + 0] = t7
         [v0 + 4] = t1
         [sp + 0x2c] = t1
         a0 = 0 + 0x12f
         call 0x8004c990          // 0x8004c990(0x12f, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0 + 0x191
         a1 = 0 + 0x111

    loc_0x8044d7c4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456000
         s1 = [sp + 0x18]
         [at - 0x4190] = t6
         ret                      // ra
         sp += 0x20

    loc_0x8044d8ac: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456018
         [sp + 0x2c] = a1
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4244             // t9
         a0 = 1 << 16
         call 0x80006cd0          // 0x80006cd0(0x10000, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.80455b3c @ +0x4e0
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         // CODE XREF from fcn.8045664c @ 0x80456020
         a3 = 0
         [sp + 0x24] = v0
         a0 = 0 + 0xc
         call 0x80047588          // 0x80047588(0xc, 0x0, 0x2, 0x0)
         a1 = 0

    loc_0x8044d8f8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456024
         call 0x8004c09c          // 0x8004c09c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 7
         call 0x8004d690          // 0x8004d690(0x7, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         at = 0x8292 << 16
         [at - 0x418c] = v0

    loc_0x8044e4bc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456108
         dmfc0 0, 0, 0

    loc_0x8044e7c8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456114
         mfc0 0, 0, 0

    loc_0x8044eb98: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456144
         bc0f cc2, 0x8044eb9c

    loc_0x8044eda8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456174
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x8044eda8
         if                       // unlikely

    loc_0x8044edb0: // orphan
         // CODE XREF from fcn.8045664c @ 0x8044edac
         unsigned , hi            // t9 // s2

    loc_0x8044edb4: // orphan
         sd ra, -0xd8, ra
         goto 0x80000000
         s0 = byte [s4 - 0x7d90]

    loc_0x8044edf4: // orphan
         // CODE XREF from fcn.8044e060 @ +0xd90
         // CODE XREF from fcn.8045664c @ 0x80456180
         goto 0x88000000
         s2 = byte [0 + 0x6420]   // s4

    loc_0x8044eee0: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045618c
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5230]
         s0 = byte [s4 - 0x4114]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5230]
         s0 = byte [s4 - 0x3f0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5230]
         s0 = byte [s4 - 0x3d58]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5230]
         s0 = byte [s4 - 0x3ba4]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5158]
         // CODE XREF from fcn.80455b3c @ +0x648
         s0 = byte [s4 - 0x3930]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5114]
         s0 = byte [s4 - 0x36f8]
         // CODE XREF from fcn.8045664c @ 0x80456188
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x50b0]
         s0 = byte [s4 - 0x34d4]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x4ffc]
         s0 = byte [s4 - 0x32ac]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5230]
         s0 = byte [s4 - 0x3028]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x4f68]
         s0 = byte [s4 - 0x2edc]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x4de0]
         s0 = byte [s4 - 0x2bd4]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x28d4]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x5d0c]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2838]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]

    loc_0x8044efb8: // orphan
         s0 = byte [s4 - 0x27a8]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2714]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2680]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x25f0]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x255c]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x24c4]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2430]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x23a0]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2310]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x2280]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x28c8]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x212c]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         s0 = byte [s4 - 0x7910]
         movf 0, 0, fcc0
         syscall                  // 255 = unknown ()
         ,hi,lo = 0 * t7
         dmult 0, s5
         dsrav 0, v0, 0
         
         srav 0, s3, 0
         unsigned , hi
         dsrlv 0, sp, 0

    loc_0x8044f2dc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456198
         
         
         
                                  // a2
         teq a3, s3, 3

    loc_0x8044f580: // orphan
         // CODE XREF from fcn.8045664c @ 0x804561bc
         
         
         

    loc_0x8044f998: // orphan
         // CODE XREF from fcn.8045664c @ 0x804561d4
         
         
         
         
         
         // CODE XREF from fcn.80455b3c @ +0x69c
         
         
         
         
         
         // CODE XREF from fcn.8045664c @ 0x804561dc
         
         
         
         
         

    loc_0x8044f9d4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804561e0
         
         
         
         
         
         
         
         

    loc_0x8044fae0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804561ec
         
         
         // CODE XREF from fcn.80455b3c @ +0x6a8
         
         
         ll t9, -0x6666, at
         ll a2, 0x6666, v1        // t9
         ll a2, 0x6666, v1        // t9
         ll gp, -0x3333, a0       // t9
         ll 0
         ll 0
         
         
         
         
         
         
         
         
         ll 0
         
         
         ll s0
         
         // CODE XREF from fcn.8045664c @ 0x804561e8
         
         ll 0
         
         
         ll t0
         ll 0
         // CODE XREF from fcn.80455b3c @ +0x6b4
         
         ll 0

    loc_0x8044fbbc: // orphan
         // CODE XREF from fcn.8045664c @ 0x804561f8
         
         
         
         
         
         // CODE XREF from fcn.80455b3c @ +0x6c0
         

    loc_0x8044fc04: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456210
         if                       // likely
         // CODE XREF from fcn.8045664c @ 0x8044fc04
         

    loc_0x8044fc08: // orphan
         // CODE XREF from fcn.8045664c @ 0x8044fc04
         

    loc_0x8044fc0c: // orphan
         
         
         
         // CODE XREF from fcn.80455b3c @ +0x6d8
         
         
         // CODE XREF from fcn.8045664c @ 0x8045620c
         
         // CODE XREF from fcn.8045664c @ 0x80456200
         cache 8, -0xa3d, t9
         cache 0x13, 0x3333, sp
         ll a2, 0x6666, v1        // t9
         ll t4, -0x3333, at       // t9
         ll v1, 0x3333, t0        // t9

    loc_0x8044fc38: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456204
         ll 0
         
         
         
         
         
         
         
         

    loc_0x8044fd04: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456220
         

    loc_0x8044fd90: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045622c
         ll t4
         
         
         ll s0
         
         
         ll t2
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.80455b3c @ +0x6f4
         
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8045664c @ 0x80456234
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9
         ll 0
         ll 0
         ll 0
         
         
         
         
         
         
         
         
         ll t4
         
         
         ll s0
         

    loc_0x8044fed8: // orphan
         
         ll t2
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         ll 0
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         // CALL XREF from fcn.81df4488 @ +0xd80
         
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9

    loc_0x804502d0: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045624c
         
         
         
         
         

    loc_0x804502e4: // orphan
         
         
         
         
         
         
         
         
         
         
         

    loc_0x80450310: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9
         ll s3, 0x3333, at        // t9
         ll 0
         ll 0
         ll 0
         
         
         
         
         
         

    loc_0x8045038c: // orphan
         
         

    loc_0x80450658: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456264
         

    loc_0x804536b0: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045636c
         s0 = byte [s4 - 0x97c]
         s0 = byte [s4 - 0x9ec]
         s0 = byte [s4 - 0x9b0]
         
         s3 = t3 + 0
         s3 = t3 + 0
         s3 = t3 + 0
         s1 = byte [s4 + 0x28c]
         s1 = byte [s4 + 0x2cc]
         s1 = byte [s4 + 0x374]
         s1 = byte [s4 + 0x408]
         s1 = byte [s4 + 0x458]
         s1 = byte [s4 + 0x4e0]
         
         
         

    loc_0x8045373c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456378
         
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80453764: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453774: // orphan
         if                       // unlikely
         

    loc_0x8045377c: // orphan
         
         // CODE XREF from fcn.80456244 @ +0x138
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804537a0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456380
         if                       // unlikely

    loc_0x804537a4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456380
         if                       // unlikely

    loc_0x804537ac: // orphan
         if                       // fcn.80456444+0x2dc // unlikely
         if                       // unlikely

    loc_0x804537b0: // orphan
         if                       // fcn.80456444+0x2dc // unlikely
         if                       // unlikely

    loc_0x804537b8: // orphan
         

    loc_0x804537bc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804537d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804537dc: // orphan
         if                       // unlikely
         

    loc_0x804537e4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804537f4: // orphan
         if                       // unlikely
         

    loc_0x804537fc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045380c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456388
         if                       // unlikely
         

    loc_0x80453814: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453820: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045638c
         if                       // unlikely
         

    loc_0x80453828: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453834: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453840: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045384c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453858: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453864: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453870: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045387c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045388c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804538a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804538b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804538bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804538c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453900: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045639c
         if                       // unlikely
         if                       // unlikely

    loc_0x8045390c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453918: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453924: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453930: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045394c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453970: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453980: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045398c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045399c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804539a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804539b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804539c0: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804539d8: // orphan
         if                       // unlikely
         

    loc_0x804539e0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804539f0: // orphan
         
         if                       // fcn.80458474+0x74 // unlikely
         if                       // fcn.80458474+0x88 // unlikely

    loc_0x80453a00: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80456244 @ +0x16c
         if                       // unlikely

    loc_0x80453a0c: // orphan
         
         if                       // fcn.804587b8+0xc // unlikely
         if                       // unlikely

    loc_0x80453a18: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563b4
         if                       // unlikely

    loc_0x80453a1c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x804563ac
         if                       // unlikely

    loc_0x80453a20: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x804563ac
         if                       // unlikely

    loc_0x80453a28: // orphan
         

    loc_0x80453a2c: // orphan
         if                       // fcn.80458890+0xa0 // unlikely
         if                       // unlikely

    loc_0x80453a38: // orphan
         if                       // fcn.80458890+0x1c // unlikely
         if                       // unlikely

    loc_0x80453a44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453a50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b00: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563cc
         
         

    loc_0x80453b08: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563c4
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b50: // orphan
         if                       // fcn.8045a468+0x2c // unlikely
         if                       // unlikely

    loc_0x80453b5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b74: // orphan
         if                       // unlikely
         

    loc_0x80453b7c: // orphan
         
         
         
         // CODE XREF from fcn.8045664c @ 0x804563d4
         if                       // unlikely
         if                       // unlikely

    loc_0x80453b94: // orphan
         
         

    loc_0x80453b9c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563d8
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453bb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453bbc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453bcc: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453be0: // orphan
         // CODE XREF from fcn.80456244 @ +0x198
         
         
         
         
         
         
         
         if                       // fcn.8045ad7c+0x24 // unlikely
         if                       // unlikely

    loc_0x80453c04: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563e0
         if                       // unlikely
         

    loc_0x80453c0c: // orphan
         if                       // fcn.8045ae3c+0x34 // unlikely
         if                       // fcn.8045ae3c+0x48 // unlikely

    loc_0x80453c18: // orphan
         if                       // fcn.8045b044+0x48 // unlikely
         if                       // fcn.8045af44+0x15c // unlikely

    loc_0x80453c24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453d80: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563fc
         if                       // unlikely
         if                       // unlikely

    loc_0x80453d8c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453d98: // orphan
         
         
         
         if                       // unlikely
         if                       // fcn.80453c4c+0x9bd0 // unlikely

    loc_0x80453db0: // orphan
         
         
         
         if                       // fcn.80453c4c+0x9c84 // unlikely
         if                       // fcn.80453c4c+0x9ca8 // unlikely

    loc_0x80453dc8: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453ddc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453df4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453e00: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453e10: // orphan
         if                       // fcn.80453c4c+0xa138 // unlikely
         if                       // fcn.80453c4c+0xa12c // unlikely

    loc_0x80453e1c: // orphan
         if                       // fcn.80453c4c+0xa174 // unlikely
         if                       // fcn.80453c4c+0xa168 // unlikely

    loc_0x80453e28: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456408
         if                       // unlikely

    loc_0x80453e2c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456408
         if                       // unlikely

    loc_0x80453e34: // orphan
         
         
         
         
         
         if                       // unlikely
         

    loc_0x80453e78: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456414
         if                       // unlikely
         if                       // unlikely

    loc_0x80453e84: // orphan
         
         
         // CODE XREF from fcn.80456444 @ 0x80456418
         
         

    loc_0x80453e94: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456410
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453ea4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453eb0: // orphan
         if                       // fcn.8045e038+0x40c // unlikely
         if                       // fcn.8045e038+0x420 // unlikely

    loc_0x80453ebc: // orphan
         if                       // unlikely
         if                       // fcn.8045be94+0x2630 // unlikely

    loc_0x80453ec8: // orphan
         if                       // fcn.8045be94+0x26b8 // unlikely
         if                       // fcn.8045be94+0x26ec // unlikely

    loc_0x80453f20: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045641c
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f5c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80453f70: // orphan
         if                       // unlikely
         if                       // fcn.8045ec60+0x1f8 // unlikely

    loc_0x80453f7c: // orphan
         if                       // unlikely
         if                       // fcn.8045ec60+0x4 // unlikely

    loc_0x80453f88: // orphan
         if                       // fcn.8045ec60+0x2fc // unlikely
         if                       // fcn.8045ec60+0x340 // unlikely

    loc_0x80454078: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456434
         if                       // fcn.8045ec60+0x159c // unlikely
         if                       // fcn.80460208+0x18 // unlikely

    loc_0x80454084: // orphan
         if                       // fcn.80460208+0xd0 // unlikely
         if                       // fcn.80460208+0xe4 // unlikely

    loc_0x80454090: // orphan
         if                       // fcn.80460344+0x70 // unlikely
         if                       // fcn.80460344+0x94 // unlikely

    loc_0x8045409c: // orphan
         if                       // fcn.80460344+0xbc // unlikely
         

    loc_0x804540a4: // orphan
         if                       // fcn.8046048c+0xc // unlikely
         if                       // fcn.8046048c+0x20 // unlikely

    loc_0x804540b0: // orphan
         if                       // fcn.8046048c+0x48 // unlikely
         

    loc_0x804540b8: // orphan
         
         if                       // unlikely
         if                       // fcn.8045ec60+0x1974 // unlikely

    loc_0x804540c8: // orphan
         if                       // fcn.804606bc // unlikely
         

    loc_0x804540d0: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045643c
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456440
         if                       // unlikely

    loc_0x804540e4: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045643c
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456440
         if                       // unlikely

    loc_0x804540ec: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454104: // orphan
         if                       // fcn.8045ec60+0x1f68 // unlikely
         

    loc_0x8045410c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045411c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454128: // orphan
         
         
         
         if                       // fcn.80460f7c-0xf4 // unlikely
         if                       // fcn.80460f7c-0xe0 // unlikely

    loc_0x80454140: // orphan
         
         

    loc_0x80454148: // orphan
         // CODE XREF from fcn.80456444 @ 0x80456444
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454158: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454164: // orphan
         if                       // fcn.80453c4c+0xd58c // unlikely
         

    loc_0x8045416c: // orphan
         if                       // fcn.80453c4c+0xd684 // unlikely
         if                       // unlikely

    loc_0x80454178: // orphan
         if                       // fcn.80453c4c+0xd6b0 // unlikely
         

    loc_0x80454180: // orphan
         
         
         if                       // fcn.80453c4c+0xd740 // unlikely
         if                       // fcn.80453c4c+0xd764 // unlikely

    loc_0x80454194: // orphan
         
         if                       // fcn.80453c4c+0xd900 // unlikely
         if                       // fcn.80453c4c+0xd914 // unlikely

    loc_0x804541a4: // orphan
         if                       // fcn.80453c4c+0xd8cc // unlikely
         if                       // fcn.80453c4c+0xd930 // unlikely

    loc_0x804541b0: // orphan
         if                       // fcn.80453c4c+0xd968 // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456450
         if                       // fcn.80453c4c+0xd97c // unlikely

    loc_0x804541b4: // orphan
         if                       // fcn.80453c4c+0xd968 // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456450
         if                       // fcn.80453c4c+0xd97c // unlikely

    loc_0x804541bc: // orphan
         if                       // fcn.8045ec60+0x29e0 // unlikely
         if                       // fcn.80453c4c+0xda28 // unlikely

    loc_0x804541c0: // orphan
         if                       // fcn.8045ec60+0x29e0 // unlikely
         if                       // fcn.80453c4c+0xda28 // unlikely

    loc_0x804541c8: // orphan
         if                       // fcn.80453c4c+0xda40 // unlikely
         if                       // fcn.80453c4c+0xda74 // unlikely

    loc_0x804541cc: // orphan
         if                       // fcn.80453c4c+0xda40 // unlikely
         if                       // fcn.80453c4c+0xda74 // unlikely

    loc_0x804541d4: // orphan
         if                       // fcn.80453c4c+0xda6c // unlikely
         

    loc_0x804541d8: // orphan
         if                       // fcn.80453c4c+0xda6c // unlikely
         

    loc_0x804541dc: // orphan
         if                       // fcn.80453c4c+0xdb84 // unlikely
         if                       // unlikely

    loc_0x804541e0: // orphan
         if                       // fcn.80453c4c+0xdb84 // unlikely
         if                       // unlikely

    loc_0x804541e8: // orphan
         if                       // fcn.80453c4c+0xdbd0 // unlikely
         if                       // fcn.80453c4c+0xdb24 // unlikely

    loc_0x804541ec: // orphan
         if                       // fcn.80453c4c+0xdbd0 // unlikely
         if                       // fcn.80453c4c+0xdb24 // unlikely

    loc_0x804541f4: // orphan
         if                       // fcn.80453c4c+0xdadc // unlikely
         if                       // unlikely

    loc_0x804541f8: // orphan
         if                       // fcn.80453c4c+0xdadc // unlikely
         if                       // unlikely

    loc_0x80454200: // orphan
         if                       // fcn.80453c4c+0xdce8 // unlikely
         if                       // fcn.80453c4c+0xdcfc // unlikely

    loc_0x8045420c: // orphan
         if                       // unlikely
         if                       // fcn.80453c4c+0xdd78 // unlikely

    loc_0x80454218: // orphan
         // CODE XREF from fcn.80456444 @ +0x10
         if                       // fcn.80453c4c+0xddd0 // unlikely
         if                       // fcn.80453c4c+0xdde4 // unlikely

    loc_0x80454224: // orphan
         if                       // fcn.80453c4c+0xde8c // unlikely
         

    loc_0x8045422c: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045423c: // orphan
         if                       // fcn.80453c4c+0xe144 // unlikely
         if                       // fcn.80453c4c+0xdfe8 // unlikely

    loc_0x80454248: // orphan
         if                       // fcn.80453c4c+0xe0e0 // unlikely
         if                       // fcn.80453c4c+0xe164 // unlikely

    loc_0x80454254: // orphan
         if                       // fcn.80453c4c+0xe09c // unlikely
         if                       // fcn.80453c4c+0xe120 // unlikely

    loc_0x80454260: // orphan
         if                       // fcn.80453c4c+0xe448 // unlikely
         if                       // unlikely

    loc_0x8045426c: // orphan
         if                       // fcn.80453c4c+0xe4f4 // unlikely
         // CODE XREF from fcn.8045664c @ 0x8045645c
         if                       // fcn.80453c4c+0xe518 // unlikely

    loc_0x80454278: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454284: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456460
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // fcn.80453c4c+0xfa64 // unlikely
         if                       // unlikely

    loc_0x804542f8: // orphan
         if                       // unlikely
         if                       // fcn.8045c474+0x72ac // unlikely

    loc_0x80454304: // orphan
         
         if                       // fcn.8045c474+0x7368 // unlikely
         if                       // fcn.8045c474+0x738c // unlikely

    loc_0x80454314: // orphan
         if                       // fcn.80456444+0xd404 // unlikely
         if                       // fcn.8045c474+0x7428 // unlikely

    loc_0x80454320: // orphan
         if                       // fcn.8045c474+0x7470 // unlikely
         

    loc_0x80454328: // orphan
         if                       // fcn.8045c474+0x75e8 // unlikely
         if                       // fcn.8045c474+0x762c // unlikely

    loc_0x80454334: // orphan
         if                       // fcn.8045c474+0x76a4 // unlikely
         if                       // fcn.8045c474+0x7658 // unlikely

    loc_0x80454340: // orphan
         
         if                       // fcn.8045c474+0x7714 // unlikely
         if                       // fcn.8045c474+0x7738 // unlikely

    loc_0x80454350: // orphan
         if                       // fcn.8045c474+0x7780 // unlikely
         if                       // fcn.8045c474+0x77d4 // unlikely

    loc_0x8045435c: // orphan
         if                       // unlikely
         

    loc_0x80454364: // orphan
         if                       // fcn.80453c4c+0x1012c // unlikely
         if                       // fcn.8045c4b0+0x790c // unlikely

    loc_0x80454370: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045437c: // orphan
         
         if                       // fcn.8045c4b0+0x79f4 // unlikely
         if                       // fcn.8045c4b0+0x7a18 // unlikely

    loc_0x8045438c: // orphan
         if                       // fcn.8045c4b0+0x7a60 // unlikely
         if                       // fcn.8045c4b0+0x7ab4 // unlikely

    loc_0x80454398: // orphan
         if                       // unlikely
         

    loc_0x804543a0: // orphan
         
         if                       // fcn.8045c4b0+0x7cf8 // unlikely
         if                       // fcn.8045c4b0+0x7d1c // unlikely

    loc_0x804543b0: // orphan
         if                       // fcn.8045c4b0+0x7d64 // unlikely
         if                       // fcn.8045c4b0+0x7db8 // unlikely

    loc_0x804543bc: // orphan
         if                       // fcn.8045c4b0+0x7df0 // unlikely
         if                       // fcn.8045c4b0+0x7e54 // unlikely

    loc_0x804543c8: // orphan
         

    loc_0x804543cc: // orphan
         if                       // fcn.8045c4b0+0x7f90 // unlikely
         if                       // fcn.8045c4b0+0x7fa4 // unlikely

    loc_0x804543d8: // orphan
         if                       // fcn.8045c4b0+0x80ec // unlikely
         if                       // fcn.8045c4b0+0x8100 // unlikely

    loc_0x804543e4: // orphan
         if                       // fcn.8045c4b0+0x8198 // unlikely
         

    loc_0x804543ec: // orphan
         
         
         if                       // fcn.8045c474+0x8324 // unlikely
         

    loc_0x804543fc: // orphan
         
         
         
         if                       // fcn.8046489c+0x10 // unlikely
         if                       // fcn.8045c474+0x846c // unlikely

    loc_0x80454500: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045648c
         if                       // fcn.8045c474+0x92c0 // unlikely
         

    loc_0x80454508: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456484
         if                       // fcn.8045c410+0x940c // unlikely
         if                       // fcn.8045c474+0x941c // unlikely

    loc_0x80454514: // orphan
         if                       // fcn.8045c474+0x9474 // unlikely
         if                       // fcn.80456444+0xf558 // unlikely

    loc_0x80454520: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045452c: // orphan
         if                       // unlikely
         if                       // fcn.8045c474+0x9d50 // unlikely

    loc_0x80454538: // orphan
         
         
         if                       // fcn.80466464 // unlikely
         if                       // unlikely

    loc_0x8045454c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454558: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454564: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454570: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045457c: // orphan
         if                       // fcn.8045c474+0xa27c // unlikely
         if                       // fcn.8045c474+0xa290 // unlikely

    loc_0x80454588: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454594: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804545a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804545ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804545b8: // orphan
         
         
         
         
         
         
         

    loc_0x80454694: // orphan
         // CODE XREF from fcn.8045664c @ 0x804564b0
         if                       // unlikely

    loc_0x80454868: // orphan
         // CODE XREF from fcn.8045664c @ 0x804564e4
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045487c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454888: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80456444 @ +0xa4
         if                       // unlikely

    loc_0x80454894: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804548a0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804564ec
         if                       // unlikely
         if                       // fcn.8046abb4+0x4 // unlikely

    loc_0x804548ac: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804548c0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804548cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804548d8: // orphan
         if                       // unlikely
         

    loc_0x804548e0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804548f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454900: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045490c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454918: // orphan
         
         
         if                       // fcn.80456444+0x167d0 // unlikely
         if                       // unlikely

    loc_0x8045492c: // orphan
         
         
         
         

    loc_0x8045493c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804564f8
         
         if                       // unlikely
         

    loc_0x80454948: // orphan
         
         
         
         
         
         
         // CODE XREF from fcn.80456444 @ +0xb8
         
         
         
         if                       // fcn.80456444+0x16aec // unlikely
         if                       // unlikely

    loc_0x80454978: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454984: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454990: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456500
         

    loc_0x80454994: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456500
         

    loc_0x80454998: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804549a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804549b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804549bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804549c8: // orphan
         
         
         
         
         
         
         if                       // fcn.80456444+0x17400 // unlikely
         if                       // unlikely

    loc_0x804549ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804549f8: // orphan
         if                       // fcn.8046dc08+0x254 // unlikely
         if                       // unlikely

    loc_0x80454a04: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a20: // orphan
         if                       // fcn.80456444+0x17f40 // unlikely
         if                       // unlikely

    loc_0x80454a2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a44: // orphan
         if                       // unlikely
         

    loc_0x80454a4c: // orphan
         
         
         if                       // fcn.80467040+0x7968 // unlikely
         

    loc_0x80454a5c: // orphan
         
         // CODE XREF from fcn.8045664c @ 0x8045650c
         if                       // unlikely
         

    loc_0x80454a68: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a74: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456510
         if                       // unlikely

    loc_0x80454a78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454a84: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454aa8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ab4: // orphan
         if                       // fcn.8046fe74+0x94 // unlikely
         if                       // fcn.8046fe74+0x58 // unlikely

    loc_0x80454ac0: // orphan
         if                       // fcn.8046fe74+0x70 // unlikely
         if                       // fcn.8046fe74+0x84 // unlikely

    loc_0x80454acc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ad8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454af0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454afc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454b08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454b14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454b20: // orphan
         if                       // fcn.80470254 // unlikely
         if                       // unlikely

    loc_0x80454b2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454b38: // orphan
         if                       // fcn.80470314+0x58 // unlikely
         

    loc_0x80454b40: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045651c
         if                       // fcn.804703fc+0x8 // unlikely
         if                       // fcn.8047041c+0xc // unlikely

    loc_0x80454b4c: // orphan
         if                       // fcn.8047041c+0x64 // unlikely
         if                       // fcn.8047041c+0x38 // unlikely

    loc_0x80454b54: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456520
         if                       // fcn.8047041c+0x4c // unlikely

    loc_0x80454b58: // orphan
         if                       // fcn.8047041c+0x60 // unlikely
         if                       // unlikely

    loc_0x80454b64: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454b70: // orphan
         if                       // fcn.80456444+0x1a0e0 // unlikely
         if                       // unlikely

    loc_0x80454c34: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456530
         if                       // unlikely

    loc_0x80454c38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c74: // orphan
         if                       // fcn.80470eb0+0x38 // unlikely
         if                       // unlikely

    loc_0x80454c80: // orphan
         if                       // fcn.80470eb0+0x14 // unlikely
         if                       // fcn.80470eb0+0x28 // unlikely

    loc_0x80454d84: // orphan
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456540
         if                       // unlikely

    loc_0x80454d8c: // orphan
         if                       // fcn.81be13c4-0x176d564 // unlikely
         if                       // unlikely

    loc_0x80454d98: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454db0: // orphan
         if                       // fcn.80474100+0x24 // unlikely
         

    loc_0x80454db8: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ddc: // orphan
         
         
         if                       // fcn.80435838+0x10 // unlikely
         if                       // unlikely

    loc_0x80454df0: // orphan
         if                       // unlikely
         

    loc_0x80454df8: // orphan
         
         
         if                       // fcn.80433834+0x2230 // unlikely
         if                       // unlikely

    loc_0x80454e0c: // orphan
         if                       // fcn.80433834+0x220c // unlikely
         if                       // fcn.84085904-0x3c4fc90 // unlikely

    loc_0x80454e18: // orphan
         if                       // fcn.80435c38+0x4 // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456548
         if                       // unlikely

    loc_0x80454e24: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80454e38: // orphan
         if                       // fcn.80435c38+0x234 // unlikely
         if                       // fcn.8043603c+0x24 // unlikely

    loc_0x80454e40: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045654c
         if                       // fcn.8043603c+0x48 // unlikely

    loc_0x80454e44: // orphan
         if                       // unlikely
         if                       // fcn.8043603c // unlikely

    loc_0x80454e50: // orphan
         if                       // fcn.80456444-0x20210 // unlikely
         if                       // unlikely

    loc_0x80454e5c: // orphan
         if                       // fcn.80456444-0x20144 // unlikely
         if                       // unlikely

    loc_0x80454e68: // orphan
         if                       // unlikely
         

    loc_0x80454e70: // orphan
         if                       // fcn.838a7534-0x3471020 // unlikely
         if                       // unlikely

    loc_0x80454e7c: // orphan
         if                       // unlikely
         

    loc_0x80454e84: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454e90: // orphan
         if                       // unlikely
         

    loc_0x80454e98: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456554
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ea4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454eb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ebc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ec8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454fac: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456568
         if                       // fcn.80454ed8-0x1d858 // unlikely

    loc_0x80455218: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456584
         if                       // unlikely
         if                       // unlikely

    loc_0x80455224: // orphan
         if                       // fcn.80433834+0x62d4 // unlikely
         if                       // unlikely

    loc_0x80455230: // orphan
         if                       // fcn.804550cc-0x1b548 // unlikely
         if                       // unlikely

    loc_0x8045523c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455248: // orphan
         if                       // fcn.80439c44+0x8 // unlikely
         if                       // unlikely

    loc_0x80455254: // orphan
         if                       // fcn.804550cc-0x1b454 // unlikely
         if                       // unlikely

    loc_0x80455260: // orphan
         if                       // fcn.804550cc-0x1b388 // unlikely
         if                       // unlikely

    loc_0x8045526c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455278: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455284: // orphan
         

    loc_0x80455288: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455294: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804552a0: // orphan
         if                       // fcn.8043a318+0xc // unlikely
         if                       // fcn.8043a318+0x40 // unlikely

    loc_0x804552ac: // orphan
         if                       // fcn.8043a318+0xa8 // unlikely
         if                       // fcn.8043a318+0x12c // unlikely

    loc_0x804552b8: // orphan
         if                       // fcn.8043a318+0x194 // unlikely
         if                       // unlikely

    loc_0x804552c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804552d0: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804552e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804552f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804552fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455308: // orphan
         
         
         
         
         if                       // fcn.80433800+0x864c // unlikely
         if                       // fcn.80433800+0x8670 // unlikely

    loc_0x80455324: // orphan
         if                       // fcn.8043ae58+0x10 // unlikely
         

    loc_0x8045532c: // orphan
         
         
         
         if                       // fcn.80433c00+0x953c // unlikely
         if                       // unlikely

    loc_0x80455344: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455350: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045535c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455368: // orphan
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045538c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455398: // orphan
         if                       // unlikely
         

    loc_0x804553a0: // orphan
         
         
         
         if                       // fcn.8043df28+0xc8 // unlikely
         if                       // unlikely

    loc_0x804553b8: // orphan
         if                       // fcn.8043e048+0x4 // unlikely
         if                       // unlikely

    loc_0x804553c4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804553d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804553e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804553ec: // orphan
         if                       // fcn.80433cf4+0xa80c // unlikely
         

    loc_0x804553f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455404: // orphan
         if                       // fcn.8043b044+0x36e4 // unlikely
         if                       // fcn.80433cf4+0xaaf8 // unlikely

    loc_0x80455410: // orphan
         if                       // fcn.8043e820+0x64 // unlikely
         if                       // unlikely

    loc_0x8045541c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455428: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455434: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455440: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045544c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804554c0: // orphan
         if                       // fcn.8043f604+0x40 // unlikely
         if                       // unlikely

    loc_0x804554cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804554d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804554e4: // orphan
         
         if                       // fcn.80421810+0x1dfcc // unlikely
         if                       // fcn.80421810+0x1dff0 // unlikely

    loc_0x804554f4: // orphan
         if                       // fcn.8043f84c+0x1bc // unlikely
         

    loc_0x804554fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455508: // orphan
         // CODE XREF from fcn.8045664c @ 0x804565a4
         
         if                       // fcn.8043fc30 // unlikely
         if                       // unlikely

    loc_0x80455518: // orphan
         if                       // unlikely

    loc_0x8045551c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804565a8
         if                       // unlikely
         

    loc_0x80455524: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455530: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045553c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455548: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455554: // orphan
         if                       // fcn.80421810+0x1eaa8 // unlikely
         if                       // unlikely

    loc_0x80455560: // orphan
         if                       // fcn.80440480+0x24 // unlikely
         if                       // unlikely

    loc_0x8045556c: // orphan
         if                       // fcn.8044053c+0x34 // unlikely
         if                       // fcn.8044053c+0x48 // unlikely

    loc_0x80455578: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455584: // orphan
         if                       // unlikely
         if                       // fcn.80440788+0x4 // unlikely

    loc_0x80455590: // orphan
         if                       // fcn.8044094c+0x78 // unlikely
         if                       // fcn.80440848+0xd0 // unlikely

    loc_0x8045559c: // orphan
         if                       // fcn.80440848+0xc8 // unlikely
         if                       // fcn.8044094c+0x68 // unlikely

    loc_0x804555a8: // orphan
         if                       // unlikely
         if                       // fcn.8044094c+0x4 // unlikely

    loc_0x804555b4: // orphan
         if                       // fcn.80440848+0x100 // unlikely
         if                       // fcn.8044094c+0x60 // unlikely

    loc_0x804555c0: // orphan
         
         
         
         
         
         
         
         if                       // fcn.80440c78+0xe8 // unlikely
         if                       // unlikely

    loc_0x804555e4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804565c0
         if                       // fcn.8043b044+0x5d64 // unlikely

    loc_0x804555e8: // orphan
         if                       // fcn.80456444-0x15688 // unlikely
         if                       // unlikely

    loc_0x804555f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455600: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045560c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455618: // orphan
         if                       // unlikely
         

    loc_0x80455620: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045562c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455638: // orphan
         if                       // unlikely
         if                       // fcn.80441020 // unlikely

    loc_0x80455644: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455650: // orphan
         if                       // unlikely
         if                       // fcn.80441024+0x4 // unlikely

    loc_0x8045565c: // orphan
         if                       // unlikely
         

    loc_0x80455664: // orphan
         if                       // fcn.8044110c+0x3c // unlikely
         if                       // fcn.8044110c+0x90 // unlikely

    loc_0x80455670: // orphan
         if                       // fcn.8044110c+0x68 // unlikely
         if                       // fcn.8044110c+0x7c // unlikely

    loc_0x8045567c: // orphan
         if                       // fcn.8044110c+0x114 // unlikely
         

    loc_0x80455684: // orphan
         if                       // fcn.8044110c+0x16c // unlikely
         if                       // fcn.8044110c+0x190 // unlikely

    loc_0x80455690: // orphan
         if                       // fcn.8044110c+0x1b8 // unlikely
         if                       // fcn.8044110c+0x1cc // unlikely

    loc_0x8045569c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804556a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804556b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804556c0: // orphan
         
         if                       // fcn.8044143c+0xc // unlikely
         if                       // unlikely

    loc_0x804556d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804556dc: // orphan
         if                       // fcn.804414f4+0x4c // unlikely
         if                       // fcn.804414f4+0x60 // unlikely

    loc_0x804556e8: // orphan
         if                       // fcn.8043b044+0x65a8 // unlikely
         if                       // fcn.804414f4+0x4c // unlikely

    loc_0x804556f4: // orphan
         if                       // fcn.80421810+0x1fe58 // unlikely
         // CODE XREF from fcn.8045664c @ 0x804565e4
         if                       // unlikely

    loc_0x80455700: // orphan
         if                       // unlikely
         

    loc_0x80455708: // orphan
         if                       // fcn.8043b044+0x6718 // unlikely
         if                       // fcn.8043b044+0x673c // unlikely

    loc_0x8045571c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804565e8
         if                       // fcn.8043b044+0x67bc // unlikely
         if                       // unlikely

    loc_0x80455728: // orphan
         if                       // fcn.804418c0+0x5c // unlikely
         if                       // unlikely

    loc_0x80455734: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455740: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045574c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80456444 @ +0x1a8
         if                       // unlikely

    loc_0x80455758: // orphan
         if                       // unlikely
         

    loc_0x80455760: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045576c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455778: // orphan
         if                       // fcn.80441b9c+0x20 // unlikely
         if                       // fcn.80441b9c+0x34 // unlikely

    loc_0x80455784: // orphan
         if                       // fcn.8043b044+0x6bc4 // unlikely
         if                       // unlikely

    loc_0x80455790: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045579c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804557a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804557b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804557c0: // orphan
         
         if                       // fcn.8043b448+0x69d0 // unlikely
         if                       // unlikely

    loc_0x804557d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804557dc: // orphan
         if                       // fcn.80433e80+0xe170 // unlikely
         if                       // unlikely

    loc_0x804557e8: // orphan
         if                       // fcn.80442008+0x4 // unlikely
         if                       // unlikely

    loc_0x804557f4: // orphan
         if                       // fcn.8043b440+0x6c78 // unlikely
         if                       // unlikely

    loc_0x80455800: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045580c: // orphan
         if                       // fcn.80433e80+0xe310 // unlikely
         if                       // unlikely

    loc_0x80455818: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455824: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045582c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804565f8
         if                       // unlikely

    loc_0x80455830: // orphan
         if                       // fcn.80456444-0x14130 // unlikely
         if                       // unlikely

    loc_0x8045583c: // orphan
         if                       // unlikely
         // CODE XREF from fcn.80456444 @ +0x1b8
         if                       // unlikely

    loc_0x80455848: // orphan
         

    loc_0x8045584c: // orphan
         if                       // fcn.80442450 // unlikely
         if                       // fcn.80442450+0x14 // unlikely

    loc_0x80455858: // orphan
         if                       // fcn.80442450+0xcc // unlikely
         if                       // fcn.80442450+0xe0 // unlikely

    loc_0x80455864: // orphan
         if                       // fcn.80442450+0x128 // unlikely
         if                       // unlikely

    loc_0x80455870: // orphan
         if                       // fcn.80455854-0x131f0 // unlikely
         if                       // unlikely

    loc_0x8045587c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455888: // orphan
         

    loc_0x8045588c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804558a4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456604
         if                       // unlikely

    loc_0x804558a8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456604
         if                       // unlikely

    loc_0x804558b0: // orphan
         

    loc_0x804558b4: // orphan
         if                       // fcn.8043b440+0x7748 // unlikely
         if                       // unlikely

    loc_0x804558c0: // orphan
         if                       // unlikely
         

    loc_0x804558c8: // orphan
         if                       // fcn.8043b440+0x7a3c // unlikely
         if                       // unlikely

    loc_0x804558d4: // orphan
         if                       // fcn.80433e80+0xf1e8 // unlikely
         if                       // unlikely

    loc_0x804558e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804558ec: // orphan
         
         if                       // fcn.8043b448+0x7e4c // unlikely
         if                       // fcn.8044332c+0x9c // unlikely

    loc_0x804559c8: // orphan
         if                       // fcn.804449c4+0x18 // unlikely
         

    loc_0x804559d0: // orphan
         if                       // fcn.80444a64 // unlikely
         if                       // unlikely

    loc_0x804559dc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804559ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804559f8: // orphan
         if                       // unlikely
         

    loc_0x80455a00: // orphan
         
         
         
         
         
         
         if                       // fcn.80445468+0x14 // unlikely
         if                       // fcn.8043b784+0x9d4c // unlikely

    loc_0x80455a24: // orphan
         if                       // unlikely
         if                       // fcn.8043b784+0x9ed8 // unlikely

    loc_0x80455a30: // orphan
         if                       // fcn.8043b784+0x9f00 // unlikely
         if                       // unlikely

    loc_0x80455a3c: // orphan
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // fcn.80434038+0x11d50 // unlikely

    loc_0x80455a6c: // orphan
         if                       // fcn.80434038+0x11f68 // unlikely
         if                       // fcn.80434038+0x11efc // unlikely

    loc_0x80455a78: // orphan
         if                       // fcn.80434038+0x11f34 // unlikely
         if                       // fcn.80434038+0x11f58 // unlikely

    loc_0x80455a84: // orphan
         if                       // fcn.80434038+0x11f70 // unlikely
         

    loc_0x80455a8c: // orphan
         if                       // fcn.80433800+0x12930 // unlikely
         if                       // unlikely

    loc_0x80455a98: // orphan
         
         if                       // fcn.80434080+0x12340 // unlikely
         if                       // fcn.80434080+0x12384 // unlikely

    loc_0x80455aa8: // orphan
         if                       // fcn.80434080+0x125cc // unlikely
         if                       // fcn.80434080+0x12630 // unlikely

    loc_0x80455ab4: // orphan
         if                       // fcn.80434080+0x12648 // unlikely
         if                       // fcn.80434080+0x125fc // unlikely

    loc_0x80455ac0: // orphan
         if                       // fcn.80434080+0x125f4 // unlikely
         if                       // fcn.80434080+0x12638 // unlikely

    loc_0x80455acc: // orphan
         if                       // fcn.80434080+0x127c0 // unlikely
         if                       // fcn.80434080+0x128f4 // unlikely

    loc_0x80455ad8: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455ae8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455af4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455b00: // orphan
         if                       // fcn.80433834+0x13590 // unlikely
         if                       // unlikely

    loc_0x80455b0c: // orphan
         if                       // fcn.80434080+0x12fa0 // unlikely
         

    loc_0x80455b14: // orphan
         
         
         if                       // fcn.80447330+0x20 // unlikely
         // CALL XREF from fcn.82232870 @ +0x1a6c
         // CALL XREF from fcn.822e107c @ +0x118
         if                       // unlikely

    loc_0x80455b28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455b34: // orphan
         if                       // fcn.80447790-0x88 // unlikely
         if                       // unlikely

    loc_0x80455b68: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456634
         
         if                       // unlikely
         if                       // fcn.80447c5c+0x138 // unlikely

    loc_0x80455b78: // orphan
         if                       // fcn.80447df0+0x2c // unlikely
         if                       // unlikely

    loc_0x80455b84: // orphan
         if                       // fcn.80448114-0x5c // unlikely
         if                       // fcn.80448114+0x18 // unlikely

    loc_0x80455b90: // orphan
         if                       // fcn.80448114+0x30 // unlikely
         if                       // fcn.80448114-0x2c // unlikely

    loc_0x80455b9c: // orphan
         if                       // fcn.80448114-0x34 // unlikely
         if                       // unlikely

    loc_0x80455ba8: // orphan
         
         
         
         
         if                       // fcn.80448460-0x34 // unlikely
         if                       // fcn.80448460+0x100 // unlikely

    loc_0x80455bc4: // orphan
         
         if                       // fcn.804486b4+0x8 // unlikely
         if                       // fcn.804486b4+0x4c // unlikely

    loc_0x80455bd4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455be4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455bf0: // orphan
         
         
         
         
         
         if                       // fcn.80448c88+0xe0 // unlikely
         if                       // fcn.80448dd8+0xd4 // unlikely

    loc_0x80455c10: // orphan
         
         if                       // fcn.80434068+0x14fa0 // unlikely
         if                       // unlikely

    loc_0x80455c20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455c2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455c38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455c44: // orphan
         if                       // unlikely
         

    loc_0x80455c4c: // orphan
         
         
         
         if                       // unlikely
         

    loc_0x80455c60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455c6c: // orphan
         if                       // fcn.80434068+0x15be8 // unlikely
         if                       // unlikely

    loc_0x80455c78: // orphan
         if                       // unlikely
         

    loc_0x80455c80: // orphan
         if                       // unlikely
         

    loc_0x80455c88: // orphan
         
         
         if                       // fcn.8043b044+0xf000 // unlikely
         if                       // unlikely

    loc_0x80455c9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455ca8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455cb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455cc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455ccc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455cdc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455cec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455cf8: // orphan
         
         if                       // unlikely
         

    loc_0x80455d04: // orphan
         if                       // fcn.8043b044+0xfa24 // unlikely
         if                       // unlikely

    loc_0x80455d10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455d1c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455d28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455d34: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455d40: // orphan
         if                       // fcn.8044ae30-0x22c // unlikely
         if                       // unlikely

    loc_0x80455d4c: // orphan
         if                       // fcn.8044ac54+0xec // unlikely
         if                       // unlikely

    loc_0x80455eb8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456664
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80455ec8: // orphan
         if                       // fcn.8044c7f8+0x4 // unlikely
         if                       // fcn.80433800+0x19060 // unlikely

    loc_0x80455ed4: // orphan
         if                       // fcn.80433800+0x19048 // unlikely
         if                       // unlikely

    loc_0x80455ee0: // orphan
         if                       // fcn.80433800+0x190a4 // unlikely
         if                       // fcn.80433800+0x190b8 // unlikely

    loc_0x80455eec: // orphan
         if                       // fcn.8044c918+0x78 // unlikely
         if                       // fcn.8044c918+0x8c // unlikely

    loc_0x80455ef8: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456678
         if                       // unlikely

    loc_0x80455f04: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456670
         if                       // unlikely
         if                       // unlikely

    loc_0x80455f10: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455f1c: // orphan
         if                       // fcn.80433800+0x19420 // unlikely
         if                       // fcn.80433800+0x19434 // unlikely

    loc_0x80455f28: // orphan
         if                       // fcn.80433800+0x1950c // unlikely
         if                       // fcn.80433800+0x19550 // unlikely

    loc_0x80455f34: // orphan
         if                       // fcn.80433800+0x19548 // unlikely
         if                       // fcn.80433800+0x194cc // unlikely

    loc_0x80455f40: // orphan
         if                       // fcn.80433800+0x195b4 // unlikely
         if                       // fcn.80433800+0x195c8 // unlikely

    loc_0x80455f4c: // orphan
         if                       // fcn.80433800+0x196a0 // unlikely
         // CODE XREF from fcn.8045664c @ 0x8045667c
         if                       // fcn.80433800+0x196b4 // unlikely

    loc_0x80455f50: // orphan
         if                       // fcn.80433800+0x196a0 // unlikely
         // CODE XREF from fcn.8045664c @ 0x8045667c
         if                       // fcn.80433800+0x196b4 // unlikely

    loc_0x80455f58: // orphan
         // CODE XREF from fcn.8045664c @ +0x28
         if                       // fcn.80433800+0x1978c // unlikely
         if                       // fcn.80433800+0x197d0 // unlikely

    loc_0x80455f64: // orphan
         if                       // fcn.80433800+0x197c8 // unlikely
         if                       // fcn.80433800+0x1974c // unlikely

    loc_0x80455f70: // orphan
         if                       // fcn.8044d000+0x24 // unlikely
         if                       // fcn.8044d000+0x38 // unlikely

    loc_0x80455f7c: // orphan
         if                       // fcn.8044d000+0x110 // unlikely
         if                       // fcn.8044d000+0x124 // unlikely

    loc_0x80455f88: // orphan
         if                       // fcn.8044d14c+0xb0 // unlikely
         if                       // fcn.8044d14c+0xf4 // unlikely

    loc_0x80455f94: // orphan
         if                       // fcn.8044d14c+0xec // unlikely
         if                       // fcn.8044d14c+0x70 // unlikely

    loc_0x80455fa0: // orphan
         if                       // fcn.8044d284+0x10 // unlikely
         if                       // unlikely

    loc_0x80455fac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455fb8: // orphan
         if                       // fcn.80433800+0x19c6c // unlikely
         if                       // fcn.80433800+0x19cb0 // unlikely

    loc_0x80455fc4: // orphan
         if                       // fcn.80433800+0x19ca8 // unlikely
         if                       // fcn.80433800+0x19c2c // unlikely

    loc_0x80455fd0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80455fdc: // orphan
         if                       // fcn.80433800+0x19de0 // unlikely
         if                       // fcn.80433800+0x19df4 // unlikely

    loc_0x80455fe8: // orphan
         if                       // fcn.80433800+0x19eec // unlikely
         

    loc_0x80455ff0: // orphan
         if                       // fcn.80433800+0x19f64 // unlikely
         if                       // fcn.80433800+0x19f78 // unlikely

    loc_0x80455ffc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456008: // orphan
         if                       // fcn.80433800+0x19e8c // unlikely
         if                       // fcn.80433800+0x1a020 // unlikely

    loc_0x80456014: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456020: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045602c: // orphan
         // CODE XREF from fcn.8045664c @ +0x1c
         if                       // fcn.80433800+0x19ee0 // unlikely
         if                       // fcn.8044d910+0x44 // unlikely

    loc_0x80456038: // orphan
         if                       // fcn.8044d910+0xbc // unlikely
         if                       // fcn.8044d910+0xd0 // unlikely

    loc_0x80456044: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456050: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804560f8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456684
         if                       // unlikely
         if                       // unlikely

    loc_0x80456104: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456110: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045611c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456128: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456134: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456140: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045614c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456158: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456164: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456170: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045617c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456188: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456194: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804561f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456200: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045620c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456218: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456234: // orphan
         if                       // unlikely
         if                       // fcn.8044ffcc+0x20 // unlikely

    loc_0x80456240: // orphan
         if                       // fcn.8044ffcc+0xb8 // unlikely
         // CALL XREF from fcn.80edd98c @ +0x744
         if                       // fcn.8044ffcc+0xdc // unlikely

    loc_0x8045624c: // orphan
         if                       // unlikely
         

    loc_0x80456254: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456260: // orphan
         if                       // fcn.80434154+0x1c4a0 // unlikely
         if                       // unlikely

    loc_0x8045626c: // orphan
         
         
         
         if                       // fcn.8043441c+0x1c3e0 // unlikely
         if                       // fcn.8043441c+0x1c3f4 // unlikely

    loc_0x80456354: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456690
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456380: // orphan
         if                       // unlikely
         

    loc_0x80456388: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456394: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804563a4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804563b4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456694
         

    loc_0x804563bc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804563cc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456698
         if                       // unlikely
         

    loc_0x804563d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804563e0: // orphan
         if                       // unlikely
         

    loc_0x804563e8: // orphan
         if                       // fcn.80453c4c+0x20 // unlikely
         if                       // fcn.80453c4c+0x34 // unlikely

    loc_0x804563f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456404: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456410: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8045641c: // orphan
         if                       // unlikely
         

    loc_0x80456424: // orphan
         
         
         if                       // unlikely

    loc_0x80456430: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045669c
         if                       // fcn.80456444-0x2420 // unlikely
         if                       // unlikely

    loc_0x8045643c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456448: // orphan
           // CALL XREF from fcn.8086cbd4 @ +0xaac
         if                       // fcn.8045664c-0x2504 // unlikely
         

    loc_0x8045644c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456458: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456468: // orphan
         
         
         
         
         
         
         if                       // fcn.80454478+0xc // unlikely
         if                       // unlikely

    loc_0x8045648c: // orphan
         if                       // unlikely
         

    loc_0x80456494: // orphan
         
         // CODE XREF from fcn.8045664c @ 0x804566a4
         
         
         
         
         

    loc_0x804564ac: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566a8
         if                       // fcn.804545d4+0xac // unlikely
         if                       // unlikely

    loc_0x804564b8: // orphan
         if                       // fcn.804545d4+0xf8 // unlikely
         if                       // fcn.804545d4+0x10c // unlikely

    loc_0x804564c4: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804564ec: // orphan
         if                       // unlikely
         

    loc_0x804564f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456500: // orphan
         if                       // unlikely
         

    loc_0x80456508: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456518: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456524: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566b0
         

    loc_0x80456528: // orphan
         
         if                       // fcn.80456444-0x1824 // unlikely
         if                       // unlikely

    loc_0x80456538: // orphan
         
         
         if                       // unlikely
         

    loc_0x80456548: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456554: // orphan
         if                       // unlikely
         

    loc_0x8045655c: // orphan
         if                       // fcn.80454ed8+0x18 // unlikely
         

    loc_0x80456564: // orphan
         if                       // fcn.80454ed8+0xa0 // unlikely
         if                       // unlikely

    loc_0x80456570: // orphan
         if                       // fcn.80454ed8+0x14c // unlikely
         if                       // fcn.80454ed8+0x170 // unlikely

    loc_0x8045657c: // orphan
         
         if                       // fcn.804550cc+0x88 // unlikely
         if                       // unlikely

    loc_0x8045658c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566b8
         
         
         
         
         

    loc_0x804565a0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566bc
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804565b0: // orphan
         
         // CODE XREF from fcn.8045664c @ +0x74
         
         
         
         if                       // unlikely
         

    loc_0x804565c8: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804565f0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80456600: // orphan
         if                       // fcn.80455854 // unlikely
         if                       // unlikely

    loc_0x8045660c: // orphan
         
         
         

    loc_0x80456618: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566c4
         
         
         
         
         
         
         
         if                       // unlikely
         

    loc_0x8045663c: // orphan
         
         
         
         

    loc_0x8045664c: // orphan
           // CALL XREF from fcn.80b29a30 @ +0x15f8
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8045666c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456678: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456684: // orphan
         if                       // unlikely
         

    loc_0x8045668c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80456694: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566d0
         if                       // unlikely

    loc_0x80456698: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804566a4: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ +0x88
         if                       // unlikely

    loc_0x804566b0: // orphan
         if                       // unlikely
         

    loc_0x804566b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804566c4: // orphan
         if                       // unlikely
         

    loc_0x804566cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804566d8: // orphan
         if                       // likely
         at = halfword [0 + 0x18]

    loc_0x804566e0: // orphan
         if                       // likely
         if                       // likely

    loc_0x804566ec: // orphan
         if                       // likely
         at = halfword [0 + 0x50]

    loc_0x804566f4: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456700: // orphan
         if                       // likely
         at = halfword [0 + 0x88]

    loc_0x80456708: // orphan
         if                       // likely

    loc_0x8045670c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566d8
         if                       // likely
         if                       // likely

    loc_0x80456718: // orphan
         if                       // fcn.80456444-0x38 // unlikely
         if                       // likely

    loc_0x80456724: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456730: // orphan
         if                       // likely
         if                       // likely

    loc_0x8045673c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456744: // orphan
         at = halfword [0 + 0x184]

    loc_0x80456748: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456754: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456760: // orphan
         if                       // likely
         if                       // likely

    loc_0x8045676c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456778: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456784: // orphan
         at = halfword [0 + 0x2b4]

    loc_0x80456788: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566e4
         at = halfword [0 + 0x2bc]
         if                       // likely
         if                       // likely

    loc_0x80456798: // orphan
         if                       // likely
         // CODE XREF from fcn.8045664c @ +0x9c
         if                       // likely

    loc_0x804567a4: // orphan
         if                       // likely
         at = halfword [0 + 0x2fc]

    loc_0x804567ac: // orphan
         if                       // likely
         if                       // likely

    loc_0x804567b8: // orphan
         if                       // likely
         if                       // likely

    loc_0x804567c4: // orphan
         if                       // likely
         if                       // likely

    loc_0x804567d0: // orphan
         if                       // likely
         at = halfword [0 + 0x35c]

    loc_0x80456800: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566ec
         at = halfword [0 + 0x3b8]
         if                       // likely
         if                       // likely

    loc_0x80456810: // orphan
         if                       // likely
         if                       // likely

    loc_0x8045681c: // orphan
         at = halfword [t0 + 0x40c]
         at = halfword [s0 + 0x424]
         at = halfword [0 + 0x440]
         at = halfword [0 + 0x448]
         if                       // likely
         if                       // likely

    loc_0x80456838: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456844: // orphan
         if                       // likely
         at = halfword [0 + 0x488]

    loc_0x8045684c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456858: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456864: // orphan
         if                       // likely
         // CODE XREF from fcn.8045664c @ 0x804566f4
         if                       // likely

    loc_0x80456870: // orphan
         at = halfword [t0 + 0x5a0]
         at = halfword [s0 + 0x5a4]
         at = halfword [t0 + 0x5ac]

    loc_0x8045687c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804566f8
         at = halfword [s0 + 0x5b0]
         at = halfword [0 + 0x5ec]
         at = halfword [t0 + 0x5f4]
         at = halfword [s0 + 0x5f8]
         at = halfword [0 + 0x724]
         // CODE XREF from fcn.8045664c @ +0xb0
         at = halfword [0 + 0x778]
         at = halfword [t0 + 0x7a0]
         at = halfword [s0 + 0x7a4]
         at = halfword [t0 + 0x7ac]
         at = halfword [s0 + 0x7b0]
         at = halfword [0 + 0x7e8]
         at = halfword [t0 + 0x7f0]
         at = halfword [s0 + 0x7f4]
         at = halfword [0 + 0x8d8]
         at = halfword [0 + 0x93c]
         at = halfword [0 + 0x990]
         at = halfword [0 + 0x9f4]
         at = halfword [0 + 0xa48]
         at = halfword [0 + 0xa94]
         at = halfword [0 + 0xad0]
         at = halfword [0 + 0xb00]
         at = halfword [0 + 0xb5c]
         if                       // likely
         if                       // likely

    loc_0x804568e0: // orphan
         if                       // likely
         at = halfword [0 + 0xbe4]

    loc_0x804568e8: // orphan
         at = halfword [t0 + 0xbec]
         at = halfword [s0 + 0xbf0]
         at = halfword [t0 + 0xbf8]

    loc_0x804568f4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456700
         at = halfword [s0 + 0xbfc]
         at = halfword [0 + 0xc2c]

    loc_0x804568fc: // orphan
         at = halfword [0 + 0xc4c]
         at = halfword [t0 + 0xc60]
         at = halfword [s0 + 0xc64]
         at = halfword [0 + 0xc9c]
         at = halfword [0 + 0xd7c]
         at = halfword [0 + 0xddc]
         at = halfword [0 + 0xe2c]
         at = halfword [0 + 0xe8c]
         at = halfword [0 + 0xee0]
         at = halfword [0 + 0xf28]
         at = halfword [0 + 0xf64]
         at = halfword [0 + 0xf94]
         at = halfword [0 + 0xfec]
         if                       // likely
         if                       // likely

    loc_0x8045693c: // orphan
         if                       // likely
         at = halfword [0 + 0x1074]

    loc_0x80456944: // orphan
         at = halfword [t0 + 0x1080]
         at = halfword [s0 + 0x1084]
         at = halfword [t0 + 0x108c]
         at = halfword [s0 + 0x1090]
         at = halfword [0 + 0x10cc]
         at = halfword [t0 + 0x10d4]
         // CODE XREF from fcn.8045664c @ 0x80456708
         at = halfword [s0 + 0x10d8]
         if                       // fcn.8045acc4+0x30 // likely
         if                       // likely

    loc_0x8045696c: // orphan
         at = halfword [0 + 0x1224]

    loc_0x80456970: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045670c
         at = halfword [0 + 0x1278]
         at = halfword [0 + 0x12e0]
         at = halfword [0 + 0x1334]
         at = halfword [0 + 0x1380]
         at = halfword [0 + 0x13bc]

    loc_0x80456984: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456710
         at = halfword [0 + 0x13ec]

    loc_0x80456988: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456994: // orphan
         at = halfword [0 + 0x1438]
         // CODE XREF from fcn.80456444 @ 0x80456714
         at = halfword [0 + 0x144c]
         at = halfword [0 + 0x1458]
         at = halfword [0 + 0x146c]
         at = halfword [0 + 0x1478]
         at = halfword [0 + 0x148c]
         at = halfword [0 + 0x1498]
         at = halfword [0 + 0x14ac]
         at = halfword [0 + 0x14b4]
         at = halfword [0 + 0x14c0]
         at = halfword [0 + 0x14d4]
         if                       // fcn.80453c4c+0x80e8 // likely
         if                       // fcn.80453c4c+0x80fc // likely

    loc_0x804569cc: // orphan
         if                       // likely
         at = halfword [0 + 0x1500]

    loc_0x804569d4: // orphan
         if                       // fcn.80453c4c+0x81ac // likely
         if                       // fcn.80453c4c+0x81c0 // likely

    loc_0x804569e0: // orphan
         if                       // likely
         at = halfword [0 + 0x152c]

    loc_0x804569e8: // orphan
         if                       // fcn.8045be94+0x38 // likely
         if                       // likely

    loc_0x804569f4: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a00: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a0c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a10: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a18: // orphan
         at = halfword [0 + 0x15c4]
         if                       // likely
         if                       // likely

    loc_0x80456a28: // orphan
         at = halfword [t0 + 0x15fc]
         at = halfword [s0 + 0x1600]
         at = halfword [t0 + 0x1608]
         at = halfword [s0 + 0x160c]
         at = halfword [0 + 0x162c]
         at = halfword [0 + 0x1644]
         at = halfword [t0 + 0x1654]
         at = halfword [s0 + 0x1658]
         if                       // likely
         if                       // likely

    loc_0x80456a54: // orphan
         if                       // fcn.8045c410+0x28 // likely
         if                       // fcn.8045c474+0x8 // likely

    loc_0x80456a60: // orphan
         at = halfword [0 + 0x16a4]
         at = halfword [0 + 0x16bc]
         if                       // fcn.8045c4b0+0xec // likely
         if                       // fcn.8045c4b0+0x100 // likely

    loc_0x80456a74: // orphan
         if                       // likely
         at = halfword [0 + 0x171c]

    loc_0x80456a7c: // orphan
         at = halfword [0 + 0x1734]
         if                       // likely
         if                       // likely

    loc_0x80456a8c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a90: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456a9c: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456aa8: // orphan
         if                       // likely
         if                       // fcn.80453c4c+0x8d54 // likely

    loc_0x80456ab4: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456ac0: // orphan
         if                       // likely
         if                       // fcn.8045cb4c+0x2c // likely

    loc_0x80456acc: // orphan
         at = halfword [0 + 0x1858]
         if                       // fcn.8045cb4c+0x108 // likely
         at = halfword [0 + 0x1868]

    loc_0x80456ad8: // orphan
         at = halfword [0 + 0x1890]
         if                       // fcn.8045cb4c+0x214 // likely
         if                       // fcn.8045cb4c+0x288 // likely

    loc_0x80456ae8: // orphan
         if                       // likely
         if                       // likely

    loc_0x80456af4: // orphan
         if                       // fcn.8045ceac+0x3c // likely
         if                       // likely

    loc_0x80456b00: // orphan
         if                       // fcn.8045cfd8+0x5c // likely
         if                       // likely

    loc_0x80456b0c: // orphan
         at = halfword [0 + 0x19bc]
         at = halfword [0 + 0x19e0]
         at = halfword [0 + 0x19f0]

    loc_0x80456b18: // orphan
         at = halfword [0 + 0x19f8]
         at = halfword [0 + 0x1a00]
         if                       // likely
         if                       // likely

    loc_0x80456b2c: // orphan
         at = halfword [0 + 0x1a18]
         at = halfword [0 + 0x1a20]
         at = halfword [0 + 0x1a28]
         at = halfword [0 + 0x1a30]
         at = halfword [0 + 0x1a38]
         at = halfword [0 + 0x1a40]
         at = halfword [0 + 0x1a48]
         at = halfword [0 + 0x1a50]
         at = halfword [0 + 0x1a58]
         at = halfword [0 + 0x1a60]
         at = halfword [t0 + 0x1a68]
         at = halfword [s0 + 0x1a6c]
         at = halfword [t0 + 0x1a78]
         at = halfword [s0 + 0x1a84]
         at = halfword [t0 + 0x1a7c]
         at = halfword [s0 + 0x1a80]
         at = halfword [0 + 0x1a8c]
         if                       // likely
         at = halfword [0 + 0x1a9c]

    loc_0x80456b78: // orphan
         if                       // fcn.80453c4c+0x99c0 // likely
         if                       // fcn.80453c4c+0x99e4 // likely

    loc_0x80456b84: // orphan
         at = halfword [0 + 0x1abc]
         at = halfword [0 + 0x1ac4]
         at = halfword [0 + 0x1acc]
         at = halfword [0 + 0x1ad4]
         at = halfword [0 + 0x1ae0]

    loc_0x80456c90: // orphan
         syscall                  // 255 = unknown ()

    loc_0x80456ca8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456734
         a2 = s0 & at

    loc_0x80456ee8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456764
         tge s0, at, 0x1d4
         teq s0, at, 0x1d4

    loc_0x80456f6c: // orphan
         teq s0, at, 0x1d6

    loc_0x804570b8: // orphan
         teq s0, at, 0x1dd

    loc_0x80457180: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045677c
         a1 = 0x8f00 << 16
         t7 = t6 & 0xfeff
         halfword [v0 + 0] = t7
         at = 0x8f00 << 16
         a1 += 0x920              // arg2
         [at + 0x92c] = 0
         if                       // unlikely
         [a1 + 0] = 0             // arg2

    loc_0x804571a0: // orphan
         t8 = a2 - 1              // arg3
         [a1 + 0] = t8            // arg2

    loc_0x804571a8: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457198
         ra = [sp + 0x14]         // lo
         sp += 0x20
         ret                      // lo
         

    loc_0x80457204: // orphan
         [at + 0x914] = t0
         // CODE XREF from fcn.8045664c @ +0xba4
         call 0x800498c4          // 0x800498c4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0 + 0x10
         call 0x800496a4          // 0x800496a4(0x10, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         call 0x80049b48          // 0x80049b48(0x10, 0x0, 0x8, -1)
         
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         a0 = 0
         a1 = 0
         a2 = 0 + 0xff            // s4
         call 0x800497e4          // 0x800497e4(0x0, 0x0, 0xff, 0xff)
         a3 = 0 + 0xff            // s4

    loc_0x80457248: // orphan
         a3 = 0 + 0xff            // s4
         a0 = 0 + 0x42
         call 0x8004c874          // 0x8004c874(0x42, 0x442f71dcfe116408, 0x8, 0xff)
         a1 = 0
         a0 = 0 + 0x140
         a1 = 0 + 0x28
         a2 = 0 + 1               // lo
         call 0x800495f8          // 0x800495f8(0x140, 0x28, 0x1, 0xff)
         a3 = v0                  // s4
         call 0x80049b9c          // 0x80049b9c(0x140, 0x28, 0x1, 0xff)
         
         s1 = 0x8f00 << 16
         s4 = 0x8f00 << 16
         s4 += 0x920
         s1 += 0x8f0
         s0 = 0
         s7 = 0 + 0x10
         s6 = 0 + 0x1a
         s5 = 0 + 0x140
         s3 = 0 + 0xa

    loc_0x80457298: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457368
         a0 = 0 + 0x42
         call 0x8004c874          // 0x8004c874(0x42, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [s1 + 0]
         t1 = [s4 + 0]
         s2 = v0                  // s4
         a0 = 0 + 0xff            // s4
         if                       // likely
         a1 = 0 + 0xff            // s4

    loc_0x804572b8: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         // CODE XREF from fcn.8045664c @ 0x8045678c
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x804572e0
         

    loc_0x804572d4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80456790, 0x804572b0
         a2 = 0 + 0xff            // arg3 // s4
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0xff, -1)
         a3 = 0 + 0xff            // s4

    loc_0x804572e0: // orphan
         // CODE XREF from fcn.8045664c @ 0x804572cc
         div 0, s0, s3
         t2 = lo
         a2 = 0 + 1               // lo
         if                       // likely
         

    loc_0x804572f4: // orphan
         break 7

    loc_0x804572f8: // orphan
         // CODE XREF from fcn.8045664c @ 0x804572ec
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80457304: // orphan
         if                       // likely
         

    loc_0x8045730c: // orphan
         break 6

    loc_0x80457310: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804572fc, 0x80457304
         unsigned , hi            // t3 // t3
         a3 = s2
         a0 = lo
         a0 += 0xa0
         
         div 0, s0, s3
         t3 = hi

    loc_0x8045732c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456798
         if                       // likely
         

    loc_0x80457334: // orphan
         break 7

    loc_0x80457338: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045732c
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x80457344: // orphan
         // CODE XREF from fcn.8045664c @ +0x154
         if                       // likely
         

    loc_0x8045734c: // orphan
         break 6

    loc_0x80457350: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8045679c, 0x8045733c, 0x80457344
         unsigned , hi
         a1 = lo
         a1 += 0x46
         call 0x80049064          // 0x80049064(-1, 0x14ede242, 0x8, -1)
         
         s0 += 1

    loc_0x80457368: // orphan
         // CODE XREF from fcn.8045664c @ 0x804567a4
         if                       // likely
         s1 += 2

    loc_0x80457370: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x34]         // t9
         s0 = [sp + 0x14]         // lo
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]
         s4 = [sp + 0x24]

    loc_0x80457390: // orphan
         s5 = [sp + 0x28]         // s0
         s6 = [sp + 0x2c]
         s7 = [sp + 0x30]
         ret                      // ra
         sp += 0x38

    loc_0x80457404: // orphan
         // CODE XREF from fcn.8045664c @ 0x804567b0
         s4 = 0
         s5 = 0xfd10 << 16
         s7 = 0xf510 << 16
         [v0 + 0] = t7
         [v0 + 4] = t8
         // CODE XREF from fcn.8045664c @ 0x8045756c
         s2 = 0
         s1 = 0

    loc_0x80457420: // orphan
         // CODE XREFS from fcn.8045664c @ 0x804567bc, 0x8045754c, 0x8045755c
         if                       // likely
         v1 = 0x8f00 << 16

    loc_0x80457428: // orphan
         if                       // likely
         

    loc_0x80457430: // orphan
         v0 = [s0 + 0]
         t2 = s3 << 0xc
         t7 = 0xe600 << 16
         t9 = v0 + 8
         [s0 + 0] = t9
         // CODE XREF from fcn.8045664c @ +0x174
         [v0 + 0] = s5
         t3 = [s6 + 0]            // t9
         t9 = 0xf300 << 16
         t4 = t2 + t3
         [v0 + 4] = t4
         v0 = [s0 + 0]
         t2 = 0x77f << 16
         t2 |= 0xf040
         t5 = v0 + 8
         [s0 + 0] = t5
         [v0 + 4] = fp
         [v0 + 0] = s7
         v0 = [s0 + 0]
         t4 = 0xe700 << 16
         t6 = v0 + 8
         [s0 + 0] = t6
         [v0 + 4] = 0
         [v0 + 0] = t7
         v0 = [s0 + 0]
         t6 = 0xf510 << 16
         t6 |= 0x4000
         t8 = v0 + 8
         [s0 + 0] = t8
         [v0 + 4] = t2
         [v0 + 0] = t9
         v0 = [s0 + 0]
         t7 = 0 + 0x70
         t2 = 0x1f << 16
         t3 = v0 + 8

    loc_0x804574b8: // orphan
         [s0 + 0] = t3
         [v0 + 4] = 0
         [v0 + 0] = t4
         v0 = [s0 + 0]            // t3
         t2 |= 0xc03c
         t9 = 0xf200 << 16
         t5 = v0 + 8
         [s0 + 0] = t5
         [v0 + 4] = t7
         [v0 + 0] = t6
         v0 = [s0 + 0]
         t8 = v0 + 8
         // CODE XREF from fcn.8045664c @ 0x804567c4
         [s0 + 0] = t8
         [v0 + 4] = t2
         [v0 + 0] = t9

    loc_0x804574f4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80457420, 0x80457428
         v0 = 0x8f00 << 16
         v0 = [v0 + 0x91c]        // t9
         v1 = [v1 + 0x918]        // t9
         a0 = s1 << 0x10          // arg1
         t3 = s2 + v0
         a1 = t3 + s4             // arg2

    loc_0x8045750c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804567c8
         a1 <<= 0x10              // arg2
         t5 = 0 + 0x400
         t6 = 0 + 0x400
         t4 = v1 << 5
         [sp + 0x10] = t4
         [sp + 0x1c] = t6
         // CODE XREF from fcn.8045664c @ 0x804567d0
         [sp + 0x18] = t5
         a1 = , signed  a1 >> 0x10 // arg2
         a0 = , signed  a0 >> 0x10 // arg1 // t9
         // CODE XREF from fcn.8045664c @ +0x180
         a2 = 0 + 0x80            // arg3
         a3 = 0 + 0x10            // arg4
         [sp + 0x14] = 0
         call 0x80044270          // "&1" // 0x80044270(-1, 0xffff6408, 0x80, 0x10)
         [sp + 0x20] = 0
         s1 += 0x80
         at = 0 + 0x280
         if                       // likely
         

    loc_0x80457554: // orphan
         s2 += 0x80
         at = 0 + 0x280
         bnel s2, at, 0x80457420  // likely
         s1 = 0

    loc_0x80457564: // orphan
         s3 += 1
         at = 0 + 8               // a2
         // CODE XREF from fcn.8045664c @ +0x18c
         if                       // likely
         s4 += 0x10

    loc_0x8045771c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456808
         // CODE XREF from fcn.8045664c @ +0x10ac
         t5 = 0 + 1               // lo
         a0 = 0 + 2               // arg1
         t4 = v0 & 0x8000
         if                       // likely
         t6 = v0 & 0x4000

    loc_0x80457730: // orphan
         // CODE XREF from fcn.8045664c @ +0x1c0
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = t5
         goto 0x80457760
         t9 = [sp + 0x1c]

    loc_0x80457740: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457728
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80456810
         t7 = 0 - 1               // s2

    loc_0x80457748: // orphan
         t8 = 0 + 1               // lo
         [a1 + 0] = t7            // arg2
         [sp + 0x1c] = t8
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8045664c @ 0x80456814
         a0 = 0 + 3               // arg1

    loc_0x80457758: // orphan
         t8 = 0 + 1               // lo
         [a1 + 0] = t7            // arg2
         [sp + 0x1c] = t8
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8045664c @ 0x80456814
         a0 = 0 + 3               // arg1

    loc_0x8045775c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457740
         t9 = [sp + 0x1c]         // lo

    loc_0x80457760: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457738
         t0 = 0 + 2
         a0 = 0 + 5               // arg1
         beql t9, 0, 0x8045779c   // unlikely
         ra = [sp + 0x14]

    loc_0x80457770: // orphan
         call 0x80007b34          // 0x80007b34(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x24] = t0
         goto 0x8045779c
         ra = [sp + 0x14]

    loc_0x8045779c: // orphan
         // CODE XREFS from fcn.8045664c @ 0x1034, 0x80457768, 0x80457778
         v0 = [sp + 0x24]
         sp += 0x28
         ret                      // ra
         

    loc_0x80457948: // orphan
         a2 = 0 + 2               // arg3
         call 0x800082e0          // 0x800082e0(-1, 0x442f71dcfe116408, 0x2, -1)
         a3 = 0
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(-1, 0x442f71dcfe116408, 0x2, 0x0)
         a0 = 0 + 3
         call 0x8004c4b0          // 0x8004c4b0(0x3, 0x442f71dcfe116408, 0x2, 0x0)
         a0 = 0 + 0x42
         a0 = 0 + 0x1b
         call 0x80047588          // 0x80047588(0x1b, 0x442f71dcfe116408, 0x2, 0x0)
         a1 = 0
         a0 = 0x100 << 16
         a0 += 0
         at = 0xf00 << 16
         a0 &= at
         a1 = 0x44 << 16
         a2 = 0x44 << 16
         a2 += 0x7d00
         // CODE XREF from fcn.8045664c @ 0x8045682c
         a1 += 0x6e30
         a0 >>= 0x18              // lo
         call 0x80004638          // 0x80004638(0x1, 0x446e30, 0x447d00, 0x0)
         a3 = 0
         a0 = 0x8008 << 16

    loc_0x804579a4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456830
         call 0x80006148          // 0x80006148(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x7200]       // t9
         call 0x8f000020          // 0x8f000020(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x28]         // s0
         call 0x80008514          // 0x80008514(0x104, 0x442f71dcfe116408, 0x8, -1)
         a0 = [sp + 0x24]         // s4
         call 0x8f00068c          // 0x8f00068c(0xff, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x804579c4: // orphan
         call 0x80008574          // 0x80008574(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006158          // 0x80006158(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80047610          // 0x80047610(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x8004c398          // 0x8004c398(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x80006d3c          // 0x80006d3c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = 0x4442 << 16
         call 0x80002bf8          // 0x80002bf8(0x44420000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x534c
         call 0x8f0007c8          // 0x8f0007c8(0x4442534c, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8045664c @ 0x80456838
         
         ra = [sp + 0x1c]         // lo
         sp += 0x28
         ret                      // lo
         

    loc_0x80457a20: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045683c
         if
         syscall                  // 255 = unknown ()

    loc_0x80457a38: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456844
         
         
         dsll 0, 0, 1
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80457a44
         

    loc_0x80457a48: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456844
         
         
         dsll 0, 0, 1
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80457a44
         

    loc_0x80457a4c: // orphan
         

    loc_0x80457a50: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457a60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80457a6c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457a80: // orphan
         if                       // unlikely
         

    loc_0x80457a88: // orphan
         
         
         // CODE XREF from fcn.8045664c @ 0x8045684c
         
         
         
         
         
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ +0x208
         if                       // unlikely

    loc_0x80457ab0: // orphan
         if                       // unlikely
         

    loc_0x80457ab8: // orphan
         

    loc_0x80457abc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456858
         
         

    loc_0x80457ac4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456850
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457ae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80457af0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b10: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045685c
         if                       // fcn.80458d44-0x30 // unlikely
         if                       // fcn.80458d44-0x1c // unlikely

    loc_0x80457b1c: // orphan
         if                       // fcn.80458d44+0x3c // unlikely
         if                       // fcn.80458d8c+0x8 // unlikely

    loc_0x80457b28: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b48: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b60: // orphan
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b88: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457a54
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b94: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80457b9c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457a58
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80457bb8: // orphan
         if                       // unlikely
         

    loc_0x80457bc0: // orphan
         
         
         
         
         
         
         
         
         // CODE XREF from fcn.8045664c @ +0x1410
         
         
         
         
         
         
         // CODE XREF from fcn.8045664c @ 0x80456864
         
         if                       // unlikely
         

    loc_0x80457c04: // orphan
         if                       // unlikely
         

    loc_0x80457c0c: // orphan
         
         
         

    loc_0x80457c18: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457a64
         
         
         if                       // unlikely
         // CODE XREF from fcn.8045664c @ 0x80457a60
         

    loc_0x80457c28: // orphan
         
         
         goto 0x8f1037c4
         

    loc_0x80457c5c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456868
         t6 = [t6 + 0x7200]       // t9
         t9 = 0x8f10 << 16
         t1 = 0x8f10 << 16
         t7 = , unsigned  halfword [t6 + 8]
         t8 = t7 & 0x2000
         if                       // unlikely
         

    loc_0x80457c78: // orphan
         t9 = [t9 + 0x3a50]

    loc_0x80457c7c: // orphan
         at = 0x8f10 << 16
         t0 = t9 ^ 1
         [at + 0x3a50] = t0

    loc_0x80457c88: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457c70
         t1 = [t1 + 0x3a50]       // t9
         beql t1, 0, 0x80457cac   // unlikely
         t4 = , unsigned  byte [a1 + 2] // arg2

    loc_0x80457c94: // orphan
         t2 = , unsigned  byte [a1 + 2] // arg2
         v0 = 0
         t3 = t2 | 0x40
         ret                      // ra
         byte [a1 + 2] = t3       // arg2

    loc_0x80457cac: // orphan
         t5 = t4 & 0xffbf
         byte [a1 + 2] = t5       // arg2
         // CODE XREF from fcn.8045664c @ +0x1608
         ret                      // ra
         v0 = 0

    loc_0x80457cb8: // orphan
         t5 = t4 & 0xffbf
         byte [a1 + 2] = t5       // arg2
         // CODE XREF from fcn.8045664c @ +0x1608
         ret                      // ra
         v0 = 0

    loc_0x80457cd0: // orphan
         v0 = 0x8009 << 16
         v0 = [v0 + 0x4908]       // t9
         t6 = sp + 0x24
         [sp + 0x10] = t6
         a2 = sp + 0x28           // arg3
         a3 = sp + 0x26           // arg4
         a0 = v0 + 0xb4           // arg1
         call 0x80037120          // 0x80037120(0x1000000b3, 0x442f71dcfe116408, 0x178028, 0x178026)
         a1 = v0 + 0xa8
         t7 = halfword [sp + 0x26] // s4
         v0 = [sp + 0x34]         // t9
         t8 = t7 + 0x2000
         halfword [v0 + 0x1c] = t8
         t9 = halfword [sp + 0x24]
         t0 = t9 - 0x2000
         halfword [v0 + 0x1e] = t0

    loc_0x80457d10: // orphan
         ra = [sp + 0x1c]         // lo
         sp += 0x30
         v0 = 0
         ret                      // lo
         

    loc_0x80457d74: // orphan
         t1 = t0 + 0x6000
         halfword [v0 + 0x1e] = t1
         ra = [sp + 0x1c]         // lo
         sp += 0x30
         v0 = 0
         ret                      // lo
         

    loc_0x80457ddc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457a78
         a1 = halfword [v0 + 0]
         beql a1, 0, 0x80457df4   // unlikely
         halfword [v0 + 0] = t8

    loc_0x80457de8: // orphan
         if                       // likely
         

    loc_0x80457df0: // orphan
         // CODE XREF from fcn.8045664c @ +0x1430
         halfword [v0 + 0] = t8

    loc_0x80457df4: // orphan
         v1 = 0 + 1               // lo

    loc_0x80457df8: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80457e00: // orphan
         t6 = a0 << 2             // arg1
         t6 -= a0                 // arg1
         t7 = 0x8f1e << 16
         t7 -= 0xd90
         t6 <<= 1

    loc_0x80457e14: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457a80
         v0 = t6 + t7
         a1 = halfword [v0 + 0]
         at = 0 + 3
         v1 = 0
         if                       // unlikely
         t8 = 0 + 5

    loc_0x80457e2c: // orphan
         at = 0 + 4
         if                       // likely
         

    loc_0x80457e38: // orphan
         halfword [v0 + 0] = t8
         v1 = 0 + 1               // lo

    loc_0x80457e40: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80457e4c: // orphan
         
         t6 = a0 << 2             // arg1
         t6 -= a0                 // arg1
         t7 = 0x8f1e << 16
         t7 -= 0xd90
         t6 <<= 1
         v0 = t6 + t7
         a1 = halfword [v0 + 0]
         at = 0 + 3
         v1 = 0 - 2               // hi
         if                       // unlikely
         at = 0 + 4

    loc_0x80457e7c: // orphan
         beql a1, at, 0x80457e9c  // unlikely
         v1 = 0 - 1               // s2

    loc_0x80457e84: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80457e8c: // orphan
         v1 = halfword [v0 + 4]
         ret                      // ra
         v0 = v1

    loc_0x80457e9c: // orphan
         ret                      // ra
         v0 = v1

    loc_0x80457edc: // orphan
         if                       // likely
         

    loc_0x80457ee4: // orphan
         halfword [a0 + 0] = t9   // arg1
         halfword [a0 + 2] = t0   // arg1

    loc_0x80457eec: // orphan
         ret                      // ra
         

    loc_0x80457f28: // orphan
         t6 = [v1 + 0]            // t9
         t7 = , unsigned  halfword [t6 + 0xc]
         t8 = t7 & 0x800
         beql t8, 0, 0x80457f8c   // likely
         t8 = [v1 + 0]            // t9

    loc_0x80457f3c: // orphan
         t9 = halfword [a0 + 4]
         t2 = 0x8f1e << 16
         t2 -= 0xd90
         t0 = t9 - 1
         halfword [a0 + 4] = t0   // arg1
         t1 = halfword [a0 + 4]
         t3 = a0 - t2             // arg1
         at = 0 + 6
         if                       // likely
         t6 = 0x8f10 << 16

    loc_0x80457f64: // orphan
         div 0, t3, at
         t4 = lo
         t5 = t4 << 2
         t5 += t4
         t5 <<= 1
         t6 += t5
         t6 = halfword [t6 + 0x39d0]
         t7 = t6 - 1
         halfword [a0 + 4] = t7   // arg1

    loc_0x80457f88: // orphan
         t8 = [v1 + 0]            // t9

    loc_0x80457f8c: // orphan
         t4 = 0x8f1e << 16
         t4 -= 0xd90
         t9 = , unsigned  halfword [t8 + 0xc]

    loc_0x80457f98: // orphan
         t8 = 0x8f10 << 16
         t5 = a0 - t4             // arg1
         t0 = t9 & 0x400
         if                       // unlikely
         at = 0 + 6

    loc_0x80457fac: // orphan
         div 0, t5, at
         t1 = halfword [a0 + 4]
         t6 = lo
         t7 = t6 << 2
         t7 += t6
         t2 = t1 + 1
         halfword [a0 + 4] = t2   // arg1
         t7 <<= 1
         t8 += t7
         t8 = halfword [t8 + 0x39d0]
         t3 = halfword [a0 + 4]
         at = , t3 < t8
         bnel at, 0, 0x80457fec   // unlikely
         t9 = [v1 + 0]

    loc_0x80457fe4: // orphan
         halfword [a0 + 4] = 0    // arg1

    loc_0x80457fe8: // orphan
         t9 = [v1 + 0]

    loc_0x80457fec: // orphan
         t1 = 0 + 3
         v0 = , unsigned  halfword [t9 + 0xc]
         t0 = v0 & 0x8000
         // CODE XREF from fcn.8045664c @ 0x80457aa4
         if                       // likely
         t2 = v0 & 0x4000

    loc_0x80458000: // orphan
         ret                      // ra
         halfword [a0 + 0] = t1   // arg1

    loc_0x80458008: // orphan
         if                       // unlikely
         t4 = 0 + 4

    loc_0x80458010: // orphan
         // CODE XREF from fcn.8045664c @ +0x1460
         halfword [a0 + 0] = t4   // arg1

    loc_0x80458014: // orphan
         ret                      // ra
         

    loc_0x80458024: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457ab0
         [sp + 0x18] = s0
         [sp + 0x24] = s3

    loc_0x8045802c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457aa8
         [sp + 0x20] = s2

    loc_0x80458030: // orphan
         [sp + 0x1c] = s1

    loc_0x80458034: // orphan
         s0 = 0x8f1e << 16
         s4 = 0x8f1e << 16
         [sp + 0x2c] = ra
         s4 -= 0xd7e
         s0 -= 0xd90
         s1 = 0 + 1               // lo
         s2 = 0 + 2
         s3 = 0 + 5
         v0 = halfword [s0 + 0]

    loc_0x80458058: // orphan
         if                       // unlikely
         

    loc_0x80458060: // orphan
         if                       // unlikely
         

    loc_0x80458068: // orphan
         if                       // unlikely
         

    loc_0x80458070: // orphan
         goto 0x804580a4
         s0 += 6

    loc_0x80458078: // orphan
         call 0x8f100290          // 0x8f100290(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         goto 0x804580a4
         s0 += 6

    loc_0x80458088: // orphan
         call 0x8f1002f0          // 0x8f1002f0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         goto 0x804580a4
         s0 += 6

    loc_0x80458098: // orphan
         call 0x8f1002c4          // 0x8f1002c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 6

    loc_0x804580a4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80458070, 0x80458080, 0x80458090
         bnel s0, s4, 0x80458058  // likely
         v0 = halfword [s0 + 0]

    loc_0x804580ac: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]         // t9
         s3 = [sp + 0x24]         // t9
         s4 = [sp + 0x28]         // s0
         ret                      // ra
         sp += 0x30

    loc_0x8045811c: // orphan
         t6 = a0                  // t9
         t4 = halfword [v0 + 2]
         t2 = sp + 0x24
         t3 = sp + 0x20
         a2 = lo
         if                       // likely
         at = a2                  // lo

    loc_0x80458138: // orphan
         at = a2 + 7              // arg3

    loc_0x8045813c: // orphan
         a2 = , signed  at >> 3   // arg3
         unsigned , hi
         t8 = v1 - a2             // arg3
         a3 = lo
         if                       // fcn.80458154+0x4 // unlikely
         at = a3

    loc_0x80458284: // orphan
         a1 = halfword [s3 + 2]
         a0 += 0xa                // arg1
         call 0x800495bc          // 0x800495bc(0x100000009, 0x6408, 0x8, -1)
         a1 += 4
         call 0x80049b9c          // 0x80049b9c(0x100000009, 0x640c, 0x8, -1)
         
         s6 = 0x8f10 << 16
         s4 = 0x8f10 << 16
         s4 += 0x3a20
         s6 += 0x3a28
         // CODE XREF from fcn.81dcd2cc @ +0x94
         s0 = 0
         s1 = 0
         s2 = 0
         s5 = 0 + 2

    loc_0x804582bc: // orphan
         t1 = halfword [s7 + 4]
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         if                       // likely
         a2 = 0 + 0xff            // s4

    loc_0x804582d0: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x804582f4
         

    loc_0x804582ec: // orphan
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4

    loc_0x804582f4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804582e4
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         

    loc_0x804582fc: // orphan
         if                       // likely
         t3 = s6 + s1

    loc_0x80458304: // orphan
         t2 = s4 + s1
         goto 0x80458314
         a2 = [t2 + 0]            // t9

    loc_0x80458310: // orphan
         a2 = [t3 + 0]

    loc_0x80458314: // orphan
         // CODE XREF from fcn.8045664c @ 0x80458308
         t4 = halfword [s3 + 2]
         a0 = halfword [s3 + 0]
         a1 = t4 + s2
         a1 += 0x28
         call 0x800495bc          // 0x800495bc(0xffff, 0x642f, 0x8, -1)
         a0 += 0xa
         s0 += 1
         s1 += 4
         if                       // likely
         s2 += 0xe

    loc_0x8045833c: // orphan
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x34]         // t9
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]         // t9
         s5 = [sp + 0x28]         // s0
         s6 = [sp + 0x2c]         // ra
         s7 = [sp + 0x30]
         ret                      // t9
         sp += 0x38

    loc_0x804583fc: // orphan
         a2 += 0x3a48             // arg3
         t6 -= 0xd90
         t7 = s7 - t6
         at = 0 + 6
         div 0, t7, at
         t8 = lo
         t9 = t8 << 2
         t9 += t8
         t0 = 0x8f10 << 16
         t0 += 0x39c8
         t9 <<= 1

    loc_0x80458650: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457adc
         s1 = t5 + s2
         a0 = 0 + 0xff            // arg1 // s4
         a1 = 0 + 0xff            // arg2 // s4
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x80458680
         

    loc_0x80458680: // orphan
         // CODE XREF from fcn.8045664c @ 0x80458668
         t7 = 0x8f1e << 16
         t7 = [t7 - 0x11e8]       // t9
         if                       // likely
         

    loc_0x804586fc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457ae8
         if                       // likely
         s3 += 0xe

    loc_0x80458718: // orphan
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         a2 = 0x8f10 << 16

    loc_0x80458728: // orphan
         a2 = 0x8f10 << 16
         goto 0x80458738
         a2 += 0x3b38

    loc_0x80458734: // orphan
         a2 += 0x3b50

    loc_0x80458738: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045872c
         a0 = halfword [s4 + 0]
         a1 = halfword [s4 + 2]
         a0 += 0xa
         call 0x800495bc          // 0x800495bc(0x10009, 0xa100, 0x8, -1)
         a1 += 0xa0
         call 0x800499ec          // 0x800499ec(0x10009, 0xa1a0, 0x8, -1)
         
         ra = [sp + 0x44]
         s0 = [sp + 0x20]         // t9
         s1 = [sp + 0x24]         // t9
         s2 = [sp + 0x28]         // s0
         s3 = [sp + 0x2c]         // ra
         s4 = [sp + 0x30]
         s5 = [sp + 0x34]         // t9
         s6 = [sp + 0x38]         // t9
         s7 = [sp + 0x3c]         // s4
         fp = [sp + 0x40]         // t9
         ret
         sp += 0x48

    loc_0x804587cc: // orphan
         blezl t6, 0x80458868     // likely
         s0 += 6

    loc_0x804587d4: // orphan
         call 0x8f10049c          // 0x8f10049c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0

    loc_0x804587d8: // orphan
         a0 = s0
         t7 = halfword [s0 + 2]
         t8 = s0 - s1
         at = , t7 < 8
         bnel at, 0, 0x80458868   // unlikely
         s0 += 6

    loc_0x804587f0: // orphan
         div 0, t8, s2
         v0 = lo
         if                       // likely
         

    loc_0x80458814: // orphan
         
         break 6

    loc_0x80458828: // orphan
         
         if                       // likely
         

    loc_0x80458834: // orphan
         goto 0x80458868
         s0 += 6

    loc_0x8045885c: // orphan
         call 0x8f100740          // 0x8f100740(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         s0 += 6

    loc_0x80458868: // orphan
         // CODE XREF from fcn.8045664c @ 0x80458834
         bnel s0, s5, 0x804587cc  // likely
         t6 = halfword [s0 + 2]

    loc_0x80458870: // orphan
         ra = [sp + 0x2c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]         // s0
         s2 = [sp + 0x1c]
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]         // t9
         s5 = [sp + 0x28]         // s0
         ret                      // ra
         // CALL XREF from fcn.8066c6fc @ +0x74c
         sp += 0x30

    loc_0x80458954: // orphan
         t8 = 0x8f1e << 16
         t8 = [t8 - 0x135c]       // t9
         a1 = 0x41f0 << 16
         a0 = [t8 + 0xc]          // s4
         div.s f4, f18, f0
         mfc1 a2, f16
         mfc1 a3, f4
         call 0x80038dc8          // 0x80038dc8(0xff, 0x41f00000, 0x8, -1)
         
         ra = [sp + 0x24]         // t9
         sp += 0x40
         ret                      // t9
         

    loc_0x80458a3c: // orphan
         a2 = , unsigned  halfword [v0 + 0]
         a3 = , unsigned  halfword [v0 + 2]
         t0 = 0 + 0x800
         // CODE XREF from fcn.8045664c @ 0x80457ae4
         if                       // likely
         at = a2

    loc_0x80458a70: // orphan
         at = a3 + 1              // arg4
         a3 = , signed  at >> 1   // arg4
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         [sp + 0x18] = t0
         [sp + 0x20] = 0
         [sp + 0x14] = 0
         call 0x80044270          // 0x80044270(-1, 0x442f71dcfe116408, 0x8, 0x0)
         [sp + 0x10] = 0
         ra = [sp + 0x34]         // t9
         s0 = [sp + 0x30]
         sp += 0x40
         ret                      // t9
         

    loc_0x80458f48: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457b34
         sp -= 0x50
         [sp + 0x24] = ra
         a0 = 0x8f1e << 16
         [sp + 0x20] = s0
         a0 = [a0 - 0x11dc]       // arg1 // t9
         call 0x8004b920          // 0x8004b920(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         a0 = 0x8f1e << 16
         halfword [sp + 0x42] = v0
         a0 = [a0 - 0x11dc]       // t9
         call 0x8004b920          // 0x8004b920(-1, 0x0, 0x8, -1)
         a1 = 0 + 1               // lo
         v1 = 0x8f1e << 16
         v1 = [v1 - 0x134c]       // t9
         halfword [sp + 0x40] = v0
         a0 = 0
         t9 = [v1 + 0x2c]
         a1 = 0
         call t9                  // t9(0x0, 0x0, 0x8, -1)
         
         a1 = 0x8f1e << 16
         [sp + 0x38] = v0
         a1 = [a1 - 0x11dc]       // t9
         call 0x8004b9e0          // 0x8004b9e0(0x0, -1, 0x8, -1)
         a0 = sp + 0x34
         call 0x800498c4          // 0x800498c4(0x177fe4, -1, 0x8, -1)
         
         call 0x8004989c          // 0x8004989c(0x177fe4, -1, 0x8, -1)
         a0 = 0 + 0xe
         a0 = 0 + 0x20            // k0
         call 0x800496a4          // 0x800496a4(0x20, -1, 0x8, -1)
         a1 = 0
         call 0x80049b48          // 0x80049b48(0x20, 0x0, 0x8, -1)
         
         // CODE XREF from fcn.8045664c @ 0x80457b3c
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4

    loc_0x80458fe4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457b40
         a0 = 0
         a1 = 0
         a2 = 0 + 0xff            // s4
         call 0x800497e4          // 0x800497e4(0x0, 0x0, 0xff, -1)
         a3 = 0 + 0xff            // s4
         call 0x8003514c          // 0x8003514c(0x0, 0x0, 0xff, 0xff)
         
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x80459008: // orphan
         t6 = 0x8f1e << 16
         t6 = [t6 - 0x11a8]       // t9
         s0 = 0x8f10 << 16
         t7 = t6 << 2
         s0 += t7
         goto 0x8045903c
         s0 = [s0 + 0x3a6c]       // t9

    loc_0x80459024: // orphan
         t8 = 0x8f1e << 16
         t8 = [t8 - 0x11a8]       // t9
         s0 = 0x8f10 << 16
         t0 = t8 << 2
         s0 += t0
         s0 = [s0 + 0x3a9c]       // t9

    loc_0x8045903c: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045901c
         a1 = 0 + 0x1e
         call 0x800495bc          // 0x800495bc(-1, 0x1e, 0x8, -1)
         a2 = s0
         call 0x80049b9c          // 0x80049b9c(-1, 0x1e, 0x104, -1)
         
         t1 = 0x8f1e << 16
         t1 = [t1 - 0x11a8]       // t9
         at = , unsigned  , t1 < 0xc
         if                       // likely
         t1 <<= 2

    loc_0x80459064: // orphan
         at = 0x8f10 << 16
         at += t1
         t1 = [at + 0x4014]       // t9
         goto t1                  // t9
         

    loc_0x8045932c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457b58
         
         a0 = 0x8f10 << 16
         call 0x8004b7a4          // 0x8004b7a4(0x8f100000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x39a4]       // t9
         if                       // likely
         s0 = v0                  // s4

    loc_0x80459344: // orphan
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         s0 = 0x8f10 << 16

    loc_0x80459354: // orphan
         s0 = 0x8f10 << 16
         goto 0x80459364
         s0 += 0x398c

    loc_0x80459360: // orphan
         s0 += 0x3998

    loc_0x80459364: // orphan
         // CODE XREF from fcn.8045664c @ 0x80459358
         t0 = 0x8f10 << 16
         t0 = [t0 + 0x39b0]       // t9
         a2 = 0x8f10 << 16
         a3 = 0x8f10 << 16
         t1 = t0 + 0x3ff
         t2 = t1 >> 0xa
         [sp + 0x14] = t2
         a3 = [a3 + 0x39a4]       // t9
         a2 += 0x3dc0
         a0 = 0 + 0x14
         a1 = 0 + 0x32
         call 0x800495bc          // 0x800495bc(0x14, 0x32, 0x8f103dc0, -1)
         [sp + 0x10] = s0
         a0 = 0x8f10 << 16
         call 0x8004b7a4          // 0x8004b7a4(0x8f100000, 0x32, 0x8f103dc0, -1)
         a0 = [a0 + 0x39b4]       // t9
         if                       // likely
         s0 = v0                  // s4

    loc_0x804593ac: // orphan
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         s0 = 0x8f10 << 16

    loc_0x804593cc: // orphan
         t3 = 0x8f10 << 16
         t3 = [t3 + 0x39bc]       // t9
         a2 = 0x8f10 << 16
         a3 = 0x8f10 << 16
         t4 = t3 + 0x3ff
         t5 = t4 >> 0xa
         [sp + 0x14] = t5
         a3 = [a3 + 0x39b4]       // t9
         a2 += 0x3dd4
         a0 = 0 + 0x14
         a1 = 0 + 0x46
         call 0x800495bc          // 0x800495bc(0x14, 0x46, 0x8f103dd4, -1)
         [sp + 0x10] = s0
         a0 = 0x8f10 << 16
         call 0x8004b7a4          // 0x8004b7a4(0x8f100000, 0x46, 0x8f103dd4, -1)
         a0 = [a0 + 0x39b8]       // t9
         if                       // likely
         s0 = v0                  // s4

    loc_0x804595b0: // orphan
         t0 = 0x8f1e << 16
         t0 = [t0 - 0x11a0]       // t9
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         if                       // likely
         a2 = 0 + 0xff            // s4

    loc_0x804595c8: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0x0, -1)
         a3 = 0 + 0xff            // s4
         goto 0x804595ec
         

    loc_0x804595e0: // orphan
         

    loc_0x804595e4: // orphan
         call 0x8004972c          // 0x8004972c(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 0xff            // s4

    loc_0x804595ec: // orphan
         // CODE XREF from fcn.8045664c @ 0x804595dc
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x804595f4: // orphan
         a1 = s0 << 3
         t1 = 0x8009 << 16
         t1 = [t1 + 0x4bb0]       // t9
         a1 -= s0
         a1 <<= 1
         a2 = 0x8f10 << 16
         a2 += 0x3eb4
         a1 += 0x32
         a0 = 0 + 0x1e
         call 0x800495bc          // 0x800495bc(0x1e, 0xe6a, 0x8f103eb4, -1)
         a3 = halfword [t1 + 0x1a]
         goto 0x80459648
         s0 += 1

    loc_0x80459628: // orphan
         t2 = 0x8009 << 16
         t2 = [t2 + 0x4bb0]       // t9
         a2 = 0x8f10 << 16
         a2 += 0x3ebc
         a1 = 0 + 0x40
         call 0x800495bc          // 0x800495bc(-1, 0x40, 0x8f103ebc, -1)
         a3 = halfword [t2 + 0x1c]
         s0 += 1

    loc_0x80459648: // orphan
         // CODE XREF from fcn.8045664c @ 0x80459620
         at = 0 + 2
         if                       // likely
         

    loc_0x80459654: // orphan
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         a2 = 0 + 0xff            // s4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, -1)
         a3 = 0 + 0xff            // s4
         // CODE XREF from fcn.8045664c @ 0x804568d4
         call 0x8003514c          // 0x8003514c(0xff, 0xff, 0xff, 0xff)
         
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x80459678: // orphan
         s0 = 0x8f10 << 16

    loc_0x8045967c: // orphan
         // CODE XREF from fcn.8045664c @ 0x804568d8
         goto 0x8045968c
         s0 += 0x3ec4

    loc_0x80459684: // orphan
         s0 = 0x8f10 << 16
         s0 += 0x3edc

    loc_0x8045968c: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045967c
         a1 = 0 + 0x4e            // arg2
         call 0x800495bc          // 0x800495bc(-1, 0x4e, 0x8, -1)
         a2 = s0
         call 0x8003514c          // 0x8003514c(-1, 0x4e, 0x104, -1)
         
         // CODE XREFS from fcn.8045664c @ 0x290, 0x80457b7c
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x804596a8: // orphan
         s0 = 0x8f10 << 16
         goto 0x804596bc
         s0 += 0x3ef0

    loc_0x804596b4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804568e0
         s0 = 0x8f10 << 16
         // CODE XREF from fcn.8045664c @ +0x1538
         s0 += 0x3f14

    loc_0x804596bc: // orphan
         // CODE XREF from fcn.8045664c @ 0x804596ac
         a1 = 0 + 0x5c
         call 0x800495bc          // 0x800495bc(-1, 0x5c, 0x8, -1)
         a2 = s0
         goto 0x804597dc
         

    loc_0x804596d0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457b8c
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x80459714: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457b80
         a2 += 0x3f5c             // arg3
         a0 = 0 + 0x14            // arg1
         call 0x800495bc          // 0x800495bc(0x14, 0x442f71dcfe116408, 0x3f64, -1)
         a1 = 0 + 0x32
         goto 0x804597dc
         

    loc_0x804597dc: // orphan
         // CODE XREF from fcn.80459470 @ 0x80459550
         // CODE XREFS from fcn.8045664c @ 0x804596c8, 0x80459724
         s0 = 0x8f1e << 16
         s0 -= 0x1360
         v0 = [s0 + 0]            // t9
         a0 = 0 + 0xff            // s4
         a1 = 0 + 0xff            // s4
         t3 = [v0 + 0x2c]         // t9
         t4 = [v0 + 0x34]         // t9
         a2 = 0 + 0xff            // s4
         a3 = 0 + 0xff            // s4
         t5 = t3 + t4
         call 0x8004972c          // 0x8004972c(0xff, 0xff, 0xff, 0xff)
         [sp + 0x44] = t5
         t9 = [s0 + 0]
         a2 = 0x8f10 << 16
         a2 += 0x3f84
         a3 = [t9 + 0x2c]
         a0 = 0 + 0x1e
         a1 = 0 + 0xb4
         a3 += 0x3ff
         call 0x800495bc          // 0x800495bc(0x1e, 0xb4, 0x8f103f84, 0x1000003fe)
         a3 >>= 0xa
         t6 = [s0 + 0]            // t9
         a2 = 0x8f10 << 16
         a2 += 0x3f90
         a3 = [t6 + 0x34]         // t9
         a0 = 0 + 0x1e
         a1 = 0 + 0xc0
         a3 += 0x3ff
         call 0x800495bc          // 0x800495bc(0x1e, 0xc0, 0x8f103f90, 0x1000003fe)
         a3 >>= 0xa
         v0 = [sp + 0x44]
         at = 2 << 16
         at |= 0x6001
         at = , unsigned  , v0 < at
         if                       // unlikely
         a0 = 0 + 0x1e

    loc_0x8045986c: // orphan
         a2 = 0x8f10 << 16
         a3 = v0 + 0x3ff
         t7 = 0 + 0x98
         [sp + 0x10] = t7
         a3 >>= 0xa               // lo
         a2 += 0x3f9c
         a0 = 0 + 0x1e
         call 0x800495bc          // 0x800495bc(0x1e, 0x442f71dcfe116408, 0x8f103f9c, 0x1)
         a1 = 0 + 0xcc
         goto 0x804598c0
         

    loc_0x80459898: // orphan
         t8 = [s0 + 0]
         a2 = 0x8f10 << 16
         a3 = v0 + 0x3ff
         t0 = [t8 + 0x20]         // t9
         a3 >>= 0xa               // lo
         a2 += 0x3fcc
         t1 = t0 >> 0xa
         [sp + 0x10] = t1
         call 0x800495bc          // 0x800495bc(-1, 0x442f71dcfe116408, 0x8f103fcc, 0x1)
         a1 = 0 + 0xcc

    loc_0x804598c0: // orphan
         // CODE XREF from fcn.8045664c @ 0x80459890
         call 0x8003514c          // 0x8003514c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // likely
         a0 = 0 + 0x1e

    loc_0x804598d0: // orphan
         s0 = 0x8f10 << 16
         goto 0x804598e4
         s0 += 0x3fdc

    loc_0x804598dc: // orphan
         s0 = 0x8f10 << 16
         s0 += 0x3ff8

    loc_0x804598e4: // orphan
         // CODE XREF from fcn.8045664c @ 0x804598d4
         a1 = 0 + 0xd8
         call 0x800495bc          // 0x800495bc(-1, 0xd8, 0x8, -1)
         a2 = s0
         call 0x800499ec          // 0x800499ec(-1, 0xd8, 0x104, -1)
         
         ra = [sp + 0x24]         // t9
         s0 = [sp + 0x20]
         sp += 0x50
         ret                      // t9
         

    loc_0x804599e4: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457bb0
         v0 = 0x8f1e << 16
         v0 -= 0x11b4
         t7 = t6 & 4
         if                       // likely
         at = 0x8f10 << 16

    loc_0x804599f8: // orphan
         lwc1 f0, 0x4044, at
         lwc1 f4
         sub.s f6, f4, f0
         swc1 f6
         lwc1 f8
         c.lt.s f8, f0
         
         bc1fl 0x80459a24
         t8 = , unsigned  halfword [v1 + 6] // s4
         swc1 f0

    loc_0x80459a20: // orphan
         t8 = , unsigned  halfword [v1 + 6] // s4
         v0 = 0x8f1e << 16
         v0 -= 0x11b4
         at = 0x8f10 << 16
         t9 = t8 & 8              // a2
         lwc1 f0, 0x4048, at
         if                       // unlikely
         lwc1 f12

    loc_0x80459a40: // orphan
         add.s f10, f12, f0
         at = 0x42c8 << 16
         mtc1 at, f2
         swc1 f10
         lwc1 f12
         c.lt.s f2, f12
         
         bc1fl 0x80459a70
         mtc1 0, f2
         swc1 f2
         lwc1 f12

    loc_0x80459a6c: // orphan
         mtc1 0, f2
         lwc1 f0, 0x18, v1
         at = 0x4200 << 16
         c.eq.s f2, f0
         
         bc1tl 0x80459ab4
         lwc1 f0, 0x1c, v1
         mtc1 at, f16
         a1 = 0x8f1e << 16
         a1 -= 0x11b0             // arg2
         mul.s f18, f0, f16
         t0 = halfword [a1 + 2]
         trunc.w.s f4, f18
         mfc1 t4, f4
         
         t5 = t0 - t4
         halfword [a1 + 2] = t5   // arg2
         lwc1 f0, 0x1c, v1
         a1 = 0x8f1e << 16
         a1 -= 0x11b0             // arg2
         c.eq.s f2, f0
         at = 0x4200 << 16
         bc1t 0x80459b1c
         
         mtc1 at, f6
         t6 = halfword [a1 + 0]
         t3 = 0 + 0x3f00
         // CODE XREF from fcn.8045664c @ +0x1568
         mul.s f8, f0, f6
         t0 = 0 - 0x3f00
         trunc.w.s f10, f8
         mfc1 t1, f10
         

    loc_0x80459aec: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457bb8
         t2 = t6 + t1
         halfword [a1 + 0] = t2   // arg2
         v0 = halfword [a1 + 0]
         at = , v0 < 0x3f01
         bnel at, 0, 0x80459b10   // unlikely
         at = , v0 < -0x3f00

    loc_0x80459b04: // orphan
         halfword [a1 + 0] = t3   // arg2
         v0 = halfword [a1 + 0]   // t3
         at = , v0 < -0x3f00

    loc_0x80459b10: // orphan
         if                       // unlikely
         

    loc_0x80459b18: // orphan
         halfword [a1 + 0] = t0   // arg2

    loc_0x80459b1c: // orphan
         call 0x8f100c64          // 0x8f100c64(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v1 = 0x8008 << 16
         v1 = [v1 + 0x7200]       // t9
         a1 = 0x8f1e << 16
         t5 = 0x8f1e << 16
         v0 = , unsigned  halfword [v1 + 8]
         at = 0x8f1e << 16
         a1 -= 0x1358
         t4 = v0 & 0x20           // k0
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x80459b4c: // orphan
         t5 = [t5 - 0x11d4]       // t9
         a0 = [a0 - 0x1360]       // t9
         a2 = 0 - 1               // s2
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x442f71dcfe116408, -1, -1)
         [at - 0x11d8] = t5
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9
         t7 = 0x8f1e << 16
         t7 = [t7 - 0x11c4]       // t9
         at = 0x8f1e << 16
         a0 = 0x8f1e << 16
         a0 -= 0x1358
         a1 = 0 - 1               // s2
         call 0x8003f3bc          // 0x8003f3bc(0x8f1deca8, -1, -1, -1)
         [at - 0x11c8] = t7
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a1 = [a1 - 0x11c8]       // t9
         call 0x8003f3bc          // 0x8003f3bc(0x8f1e0000, -1, -1, -1)
         a0 -= 0x1358
         v1 = 0x8008 << 16
         v1 = [v1 + 0x7200]       // t9
         v0 = , unsigned  halfword [v1 + 8]

    loc_0x80459bbc: // orphan
         t8 = v0 & 0x1000
         if                       // likely
         a0 = 0x8f10 << 16

    loc_0x80459bc8: // orphan
         a0 += 0x3988
         t9 = [a0 + 0]
         v0 = 0 - 1               // s2
         bnel v0, t9, 0x80459be8  // likely
         [a0 + 0] = v0

    loc_0x80459be8: // orphan
         a0 = 0x8f10 << 16
         a0 += 0x3988
         v0 = [a0 + 0]            // t9
         bnel v0, 0, 0x80459c18   // likely
         ra = [sp + 0x14]

    loc_0x80459e30: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457bfc
         [at - 0x11cc] = t8
         t0 = [a3 + 0]            // arg4 // t9
         at = 0x8f1e << 16
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a1 -= 0x1358             // arg2
         a0 = [a0 - 0x1360]       // arg1 // t9
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x8f1deca8, -1, -1)
         [at - 0x11d8] = t0
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9
         goto 0x80459ecc
         // CODE XREF from fcn.8045664c @ 0x80457c04
         

    loc_0x80459e78: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457bfc
         [at - 0x11cc] = t8
         t0 = [a3 + 0]            // arg4 // t9
         at = 0x8f1e << 16
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a1 -= 0x1358             // arg2
         a0 = [a0 - 0x1360]       // arg1 // t9
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x8f1deca8, -1, -1)
         [at - 0x11d8] = t0
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9
         goto 0x80459ecc
         // CODE XREF from fcn.8045664c @ 0x80457c04
         

    loc_0x80459e84: // orphan
         at = 0x8f1e << 16
         [at - 0x11cc] = t2
         t3 = [a3 + 0]            // arg4 // t9
         at = 0x8f1e << 16
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a1 -= 0x1358             // arg2
         a0 = [a0 - 0x1360]       // arg1 // t9
         a2 = 0 - 1               // arg3 // s2
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x8f1deca8, -1, -1)
         [at - 0x11d8] = t3
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9

    loc_0x80459ecc: // orphan
         // CODE XREF from fcn.8045664c @ 0x80459e74
         t4 = 0x8f1e << 16
         t4 = [t4 - 0x11d8]       // t9
         at = 0 - 1               // s2
         v0 = 0x8f1e << 16
         beql t4, at, 0x80459fb8  // unlikely
         ra = [sp + 0x1c]

    loc_0x80459ee4: // orphan
         v0 = [v0 - 0x11cc]       // t9
         at = 0 + 1               // lo
         a0 = 0x8f1e << 16
         if                       // unlikely
         at = 0 + 2

    loc_0x80459ef8: // orphan
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x80459f00: // orphan
         goto 0x80459fb8
         ra = [sp + 0x1c]

    loc_0x80459f08: // orphan
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x1358
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x80459f18: // orphan
         a1 = 0x8f1e << 16
         a1 -= 0x1358
         a0 = [a0 - 0x1360]       // t9
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x8f1deca8, 0x8, -1)
         a2 = 0 - 1               // s2
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9
         goto 0x80459fb8
         ra = [sp + 0x1c]

    loc_0x80459f50: // orphan
         call 0x8003ec34          // 0x8003ec34(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x1358
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x80459f84: // orphan
         // CODE XREF from fcn.8045664c @ 0x80457c20
         t9 = 0x8f1e << 16
         t9 = [t9 - 0x11d4]
         [v0 + 0] = t9
         call 0x8003f2c4          // 0x8003f2c4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 - 0x1360]       // t9
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16
         a2 = 0x8f1e << 16
         a2 = [a2 - 0x11d8]       // t9
         a1 -= 0x1358
         call 0x8003f2c4          // 0x8003f2c4(0x8f1e0000, 0x8f1deca8, -1, -1)
         a0 = [a0 - 0x1360]       // t9

    loc_0x80459fb4: // orphan
         ra = [sp + 0x1c]

    loc_0x80459fb8: // orphan
         // CODE XREFS from fcn.8045664c @ 0x80459f00, 0x80459f48
         sp += 0x20
         ret                      // ra
         

    loc_0x8045a07c: // orphan
         if                       // fcn.8045a09c+0xc // unlikely
         a0 -= 0x1358             // arg1

    loc_0x8045a084: // orphan
         t6 = [a2 + 0]            // arg3
         a1 = 0 - 1               // arg2 // s2
         call 0x8003f3bc          // 0x8003f3bc(-1, -1, 0x8, -1)
         [at - 0x11c8] = t6
         a0 = 0x8f1e << 16
         a1 = 0x8f1e << 16

    loc_0x8045a178: // orphan
         a2 = , signed  a2 >> 0x10 // arg3
         v0 = 0x8008 << 16
         v0 = [v0 + 0x7200]       // t9
         v1 = , unsigned  halfword [v0 + 8]
         t9 = v1 & 1              // lo
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x8045a194: // orphan
         a2 = halfword [s0 + 0]
         a0 = [a0 - 0x11dc]       // arg1 // t9
         a1 = 0 + 1               // arg2 // lo
         a2 = , signed  a2 >> 6   // arg3
         a2 <<= 0x10              // arg3
         call 0x8004bdb0          // 0x8004bdb0(-1, 0x1, 0x0, -1)
         a2 = , signed  a2 >> 0x10
         v0 = 0x8008 << 16
         v0 = [v0 + 0x7200]       // t9

    loc_0x8045a1b8: // orphan
         t0 = , unsigned  halfword [v0 + 8]
         a0 = 0x8f1e << 16
         t1 = t0 & 0x8000
         if                       // likely
         

    loc_0x8045a1cc: // orphan
         a1 = [s0 + 0]
         a0 = [a0 - 0x11dc]       // arg1 // t9
         call 0x8004be18          // 0x8004be18(-1, 0xf200, 0x8, -1)
         [sp + 4] = a1

    loc_0x8045a1dc: // orphan
         t4 = 0x8f1e << 16
         t4 = [t4 - 0x11bc]       // t9
         t5 = [s0 + 0]
         at = 0x8f1e << 16
         a0 = 0x8f1e << 16
         if                       // unlikely
         a1 = 0x8f1e << 16

    loc_0x8045a1f8: // orphan
         [at - 0x11a4] = 0
         a2 = [s0 + 0]
         a0 = [a0 - 0x1360]       // arg1 // t9
         a1 = , unsigned  halfword [a1 - 0x11da]
         a3 = 0
         call 0x80041fd0          // 0x80041fd0(-1, 0xffff, 0xf200, 0x0)
         [sp + 8] = a2
         if                       // unlikely
         at = 0x8f1e << 16

    loc_0x8045a21c: // orphan
         t8 = [s0 + 0]
         t9 = 0x8f1e << 16
         t9 = [t9 - 0x1310]
         [at - 0x11bc] = t8
         at = 0x8f1e << 16
         [at - 0x11d0] = t9

    loc_0x8045a234: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x8045a254: // orphan
         [sp + 0x14] = ra
         t6 = , unsigned  halfword [v0 + 0xc]
         v1 = 0x8f1e << 16
         v1 -= 0x11b8
         t7 = t6 & 0x200
         if                       // likely
         a0 = 0x8f1e << 16

    loc_0x8045a270: // orphan
         t8 = byte [v1 + 3]       // s4
         t1 = 0 + 8               // a2
         t9 = t8 - 1              // t3
         byte [v1 + 3] = t9
         t0 = byte [v1 + 3]       // t3
         at = , t0 < -8
         beql at, 0, 0x8045a298   // likely
         t2 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a290: // orphan
         byte [v1 + 3] = t1

    loc_0x8045a294: // orphan
         t2 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a298: // orphan
         v1 = 0x8f1e << 16
         v1 -= 0x11b8
         t3 = t2 & 0x100
         if                       // likely
         t8 = 0x8f1e << 16

    loc_0x8045a2ac: // orphan
         t4 = byte [v1 + 3]
         t7 = 0 - 8
         t5 = t4 + 1
         byte [v1 + 3] = t5
         t6 = byte [v1 + 3]
         at = , t6 < 9
         if                       // unlikely
         

    loc_0x8045a2cc: // orphan
         byte [v1 + 3] = t7

    loc_0x8045a2d0: // orphan
         t8 = [t8 - 0x11bc]       // t9
         t9 = [v1 + 0]
         at = 0x8f1e << 16
         a1 = 0x8f1e << 16
         if                       // unlikely
         a3 = 0

    loc_0x8045a2e8: // orphan
         [at - 0x11a4] = 0
         a2 = [v1 + 0]
         a0 = [a0 - 0x1360]       // arg1 // t9
         a1 = , unsigned  halfword [a1 - 0x11da]
         call 0x80041fd0          // 0x80041fd0(-1, 0xffff, 0xffffff00, -1)
         [sp + 8] = a2
         v1 = 0x8f1e << 16
         if                       // unlikely
         v1 -= 0x11b8

    loc_0x8045a30c: // orphan
         t2 = [v1 + 0]
         t3 = 0x8f1e << 16
         t3 = [t3 - 0x1310]       // t9
         at = 0x8f1e << 16
         [at - 0x11bc] = t2
         at = 0x8f1e << 16
         [at - 0x11d0] = t3

    loc_0x8045a328: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8045a350: // orphan
         v1 -= 0x11b8
         t7 = t6 & 0x200
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x8045a360: // orphan
         t8 = byte [v1 + 2]       // s4
         t1 = 0 + 8               // a2
         t9 = t8 - 1              // t3
         byte [v1 + 2] = t9
         t0 = byte [v1 + 2]       // t3
         at = , t0 < -8
         beql at, 0, 0x8045a388   // likely
         t2 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a37c: // orphan
         t8 = byte [v1 + 2]       // t3
         t1 = 0 + 8               // a2
         t9 = t8 - 1
         byte [v1 + 2] = t9
         t0 = byte [v1 + 2]
         at = , t0 < -8
         beql at, 0, 0x8045a388   // likely
         t2 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a380: // orphan
         byte [v1 + 2] = t1

    loc_0x8045a384: // orphan
         t2 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a388: // orphan
         v1 = 0x8f1e << 16
         v1 -= 0x11b8
         t3 = t2 & 0x100
         if                       // likely
         t8 = 0x8f1e << 16

    loc_0x8045a39c: // orphan
         t4 = byte [v1 + 2]
         t7 = 0 - 8
         t5 = t4 + 1
         byte [v1 + 2] = t5
         t6 = byte [v1 + 2]
         at = , t6 < 9
         if                       // unlikely
         

    loc_0x8045a3bc: // orphan
         byte [v1 + 2] = t7

    loc_0x8045a3c0: // orphan
         t8 = [t8 - 0x11bc]       // t9
         t9 = [v1 + 0]
         at = 0x8f1e << 16
         a1 = 0x8f1e << 16
         if                       // unlikely
         a3 = 0

    loc_0x8045a3d8: // orphan
         [at - 0x11a4] = 0
         a2 = [v1 + 0]
         a0 = [a0 - 0x1360]       // arg1 // t9
         a1 = , unsigned  halfword [a1 - 0x11da]
         call 0x80041fd0          // 0x80041fd0(-1, 0xffff, 0xffff0000, -1)
         [sp + 8] = a2
         v1 = 0x8f1e << 16
         if                       // unlikely
         v1 -= 0x11b8

    loc_0x8045a3fc: // orphan
         t2 = [v1 + 0]
         t3 = 0x8f1e << 16
         t3 = [t3 - 0x1310]       // t9
         at = 0x8f1e << 16
         [at - 0x11bc] = t2
         at = 0x8f1e << 16
         [at - 0x11d0] = t3

    loc_0x8045a418: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8045a508: // orphan
         halfword [v0 + 4] = 0
         t0 = [a1 + 0]            // arg2

    loc_0x8045a510: // orphan
         t1 = , unsigned  halfword [t0 + 0xc]
         t2 = t1 & 0x100
         beql t2, 0, 0x8045a5b0   // unlikely
         t9 = [a1 + 0]            // arg2

    loc_0x8045a520: // orphan
         t3 = halfword [v0 + 4]
         t6 = 0 + 0xfa0
         t4 = t3 + 0xa
         halfword [v0 + 4] = t4
         t5 = halfword [v0 + 4]
         at = , t5 < 0xfa1        // lo
         bnel at, 0, 0x8045a5b0   // likely
         t9 = [a1 + 0]            // arg2

    loc_0x8045a540: // orphan
         goto 0x8045a5ac
         halfword [v0 + 4] = t6

    loc_0x8045a5ac: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045a540
         t9 = [a1 + 0]            // arg2

    loc_0x8045a5b0: // orphan
         t0 = , unsigned  halfword [t9 + 8]
         t1 = t0 & 0x8000
         beql t1, 0, 0x8045a5d8   // unlikely
         t2 = halfword [v0 + 4]

    loc_0x8045a5c0: // orphan
         call 0x8f1027f8          // 0x8f1027f8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = v0
         a2 = 0x8009 << 16
         a2 += 0x4bb0
         v0 = [sp + 0x1c]         // s4
         t2 = halfword [v0 + 4]

    loc_0x8045a5d8: // orphan
         t3 = [a2 + 0]            // arg3
         halfword [t3 + 0x1a] = t2
         t5 = [a2 + 0]            // arg3
         t4 = halfword [v0 + 6]
         halfword [t5 + 0x1c] = t4

    loc_0x8045a5ec: // orphan
         ra = [sp + 0x14]
         sp += 0x20

    loc_0x8045a5f4: // orphan
         ret                      // ra
         

    loc_0x8045a660: // orphan
         t6 = , unsigned  halfword [v0 + 0xc]
         t7 = t6 & 0x200
         beql t7, 0, 0x8045a68c   // likely
         t1 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a670: // orphan
         t8 = , unsigned  byte [v1 + 0x1c] // s4
         t9 = t8 - 1              // t3
         t0 = t9 & 0xff           // t3
         if                       // likely
         byte [v1 + 0x1c] = t9

    loc_0x8045a684: // orphan
         byte [v1 + 0x1c] = 0

    loc_0x8045a688: // orphan
         t1 = , unsigned  halfword [v0 + 0xc]

    loc_0x8045a68c: // orphan
         v1 = 0x8f1e << 16
         v1 -= 0x1358
         t2 = t1 & 0x100
         if                       // likely
         

    loc_0x8045a6a0: // orphan
         t3 = , unsigned  byte [v1 + 0x1c]
         t6 = 0 + 2

    loc_0x8045a6a8: // orphan
         t4 = t3 + 1              // s4
         t5 = t4 & 0xff           // s4
         at = , t5 < 3
         if                       // unlikely
         byte [v1 + 0x1c] = t4

    loc_0x8045a6bc: // orphan
         byte [v1 + 0x1c] = t6

    loc_0x8045a6c0: // orphan
         ret                      // ra
         

    loc_0x8045a7f0: // orphan
         ret                      // ra
         

    loc_0x8045a918: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456934
         goto 0x8045a96c
         v0 = [v0 + 0x7200]       // t9

    loc_0x8045a93c: // orphan
         // CODE XREF from fcn.8045664c @ +0x2ec
         v0 = 0x8008 << 16
         goto 0x8045a96c
         v0 = [v0 + 0x7200]       // t9

    loc_0x8045a950: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045693c
         v0 = 0x8008 << 16
         goto 0x8045a96c
         v0 = [v0 + 0x7200]       // t9

    loc_0x8045a96c: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8045a918, 0x8045a940, 0x8045a954
         v1 = , unsigned  halfword [v0 + 8]
         t6 = v1 & 0x8000
         beql t6, 0, 0x8045a9a8   // likely
         t1 = v1 & 0x4000

    loc_0x8045a97c: // orphan
         t7 = , unsigned  halfword [v0 + 6]
         t9 = 0 + 3
         t0 = 0 + 2
         t8 = t7 & 0x2000
         if                       // likely
         

    loc_0x8045a994: // orphan
         goto 0x8045a9b4
         [sp + 0x1c] = t9

    loc_0x8045a99c: // orphan
         goto 0x8045a9b4
         [sp + 0x1c] = t0

    loc_0x8045a9a8: // orphan
         if                       // unlikely
         t2 = 0 + 1               // lo

    loc_0x8045a9b0: // orphan
         [sp + 0x1c] = t2

    loc_0x8045a9b4: // orphan
         // CODE XREFS from fcn.8045664c @ 0x8045a994, 0x8045a99c
         ra = [sp + 0x14]
         v0 = [sp + 0x1c]         // s4
         sp += 0x20
         ret                      // ra
         

    loc_0x8045a9e8: // orphan
         a1 = [a1 + 0x7200]       // arg2 // t9
         [sp + 0x18] = v0
         a2 = 0x8f1e << 16
         t7 = , unsigned  halfword [a1 + 8]
         a3 = 0x8f1e << 16
         a2 -= 0x11dc             // arg3
         t8 = t7 & 1              // lo
         if                       // unlikely
         a3 -= 0x11e8             // arg4

    loc_0x8045aa0c: // orphan
         t9 = [a3 + 0]            // arg4
         t0 = t9 ^ 1
         [a3 + 0] = t0            // arg4

    loc_0x8045aa18: // orphan
         v1 = , unsigned  halfword [a1 + 0xc]
         a3 = 0x8f1e << 16
         a3 -= 0x11e8             // arg4
         t1 = v1 & 0x200
         if                       // unlikely
         a0 = 0x8f1e << 16

    loc_0x8045aa30: // orphan
         a0 -= 0x11e4             // arg1
         t2 = [a0 + 0]            // arg1 // t9
         t3 = t2 - 0xa
         [a0 + 0] = t3            // arg1
         v1 = , unsigned  halfword [a1 + 0xc]

    loc_0x8045aa44: // orphan
         a0 = 0x8f1e << 16
         t4 = v1 & 0x100
         if                       // likely
         a0 -= 0x11e4             // arg1

    loc_0x8045aab8: // orphan
         if                       // likely
         [v1 + 0] = t6

    loc_0x8045aac0: // orphan
         t9 = [a0 + 0]            // arg1
         t8 = 0 + 9
         [v1 + 0] = t8
         t0 = t9 + 1
         [a0 + 0] = t0            // arg1

    loc_0x8045aad4: // orphan
         v1 = [a0 + 0]            // arg1
         bgezl v1, 0x8045aaec     // likely
         at = , v1 < 0x110

    loc_0x8045abdc: // orphan
         ret                      // ra
         

    loc_0x8045ad68: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456964
         t6 = halfword [v1 + 0x1a]
         halfword [v0 + 4] = t6
         t7 = [a1 + 0]            // arg2
         t8 = halfword [t7 + 0x1c]
         goto 0x8045adb4          // fcn.8045ad3c+0x78

}

*/
