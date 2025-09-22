/*
 * Function: 0x80478074
 * Category: math
 */

// Decompiled C code
int fcn.80456444 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.80456444 (int esi, int edx) {
    loc_0x80436234:
        div 0, t2, at
        t3 = lo
        [v0 + 0x4b4] = t3
        0x80436240
        t4 = , unsigned  halfword [a1 + 2]
        t5 = t4 & 0xfffe
        halfword [a1 + 2] = t5
        // chop
         // do {
    loc_0x80436250:
        ret           // ra
        v0 = 0
         // } while (?);
        }
        return eax;
    loc_0x80436300: // orphan
             unsigned , hi
             t1 = lo
             
             
             div 0, t1, v1

    loc_0x80437814: // orphan
         at = 0x42b4 << 16
         mtc1 at, f12
         at = fcn.82e00000 << 16
         cvt.s.w f4, f10
         mul.s f8, f6, f2
         lwc1 f14, 0x55c8, at
         mtc1 0, f16
         at = 0x3f00 << 16
         div.s f6, f8, f4

    loc_0x80437870: // orphan
         mtc1 at, f18
         
         sub.s f6, f0, f18
         trunc.w.s f10, f6
         mfc1 a2, f10
         
         t3 = a2 & 0xffff

    loc_0x80440dbc: // orphan
         v0 = , unsigned  byte [a1 + 0x1072] // arg2 // s4
         t8 = 0 + 1               // lo
         v1 = a2 ^ v0             // arg3
         v1 = , unsigned  , v1 < 1
         t7 = v0 + 1

    loc_0x80442314: // orphan
         
         add.s f6, f6, f8

    loc_0x8044231c: // orphan
         at = 0x8291 << 16
         ldc1 f16, 0x74d0, at
         cvt.d.s f10, f6
         t6 = [sp + 0x18]
         div.d f18, f10, f16
         v0 = 0 + 1               // lo
         mtc1 t6, f4
         at = 0x41e0 << 16
         cvt.d.w f8, f4
         mul.d f6, f18, f8
         cfc1 t7, 31
         ctc1 v0, 31
         
         cvt.w.d f10, f6
         cfc1 v0, 31

    loc_0x804423f8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80442408: // orphan
         at = 0x42c8 << 16
         mtc1 at, f10
         a0 = 0 + 0x78            // arg1
         sub.s f16, f6, f10
         call fcn.829063ec        // fcn.829063ec(0x78)
         swc1 f16, 0x24, sp
         v1 = [sp + 0x2c]
         t6 = [sp + 0x28]
         lwc1 f4, 0x24, sp
         lwc1 f18, 8, v1
         t7 = t6 << 3
         t8 = 0x8292 << 16
         add.s f8, f18, f4
         t7 += t6
         mtc1 v0, f6
         t7 <<= 2
         t8 -= 0x6220
         s0 = t7 + t8

    loc_0x80453a24: // orphan
         // CODE XREF from fcn.8045664c @ 0x804563ac
         if                       // unlikely
         if                       // unlikely

    loc_0x80454024: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456430
         if                       // unlikely
         if                       // unlikely

    loc_0x80454030: // orphan
         if                       // unlikely
         

    loc_0x80454038: // orphan
         
         if                       // fcn.8045ec60+0xc90 // unlikely
         if                       // unlikely

    loc_0x80454048: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454054: // orphan
         if                       // fcn.8045ec60+0xfc8 // unlikely
         if                       // unlikely

    loc_0x80454060: // orphan
         
         
         
         
         
         if                       // fcn.8045ec60+0x1588 // unlikely

    loc_0x80454080: // orphan
         if                       // fcn.80460208+0x2c // unlikely

    loc_0x8045408c: // orphan
         if                       // fcn.80460344+0x1c // unlikely

    loc_0x804546a0: // orphan
         if                       // unlikely

    loc_0x804546ac: // orphan
         if                       // unlikely

    loc_0x804546b8: // orphan
         // CODE XREF from fcn.80456444 @ +0x70
         if                       // unlikely

    loc_0x804546c4: // orphan
         if                       // unlikely

    loc_0x804546d0: // orphan
         if                       // unlikely

    loc_0x804546dc: // orphan
         if                       // unlikely

    loc_0x80454a80: // orphan
         

    loc_0x80454b60: // orphan
         if                       // unlikely

    loc_0x80454b6c: // orphan
         if                       // fcn.804704d0+0x40 // unlikely

    loc_0x80454b78: // orphan
         if                       // fcn.804705b8+0x4 // unlikely
         if                       // fcn.80470570+0xa0 // unlikely

    loc_0x80454b84: // orphan
         if                       // fcn.80470570+0x98 // unlikely
         if                       // unlikely

    loc_0x80454b90: // orphan
         if                       // fcn.80470570+0xc4 // unlikely
         if                       // unlikely

    loc_0x80454b9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454ba8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454bb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454bc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454bcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454bd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454be4: // orphan
         if                       // fcn.80470930+0x68 // unlikely
         if                       // unlikely

    loc_0x80454bf0: // orphan
         if                       // unlikely
         if                       // fcn.80470930+0x58 // unlikely

    loc_0x80454bfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c20: // orphan
         // CODE XREF from fcn.8045664c @ 0x8045652c
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80454c40: // orphan
         if                       // unlikely

    loc_0x80454c4c: // orphan
         if                       // unlikely

    loc_0x80454c58: // orphan
         if                       // unlikely

    loc_0x80454c64: // orphan
         if                       // unlikely

    loc_0x80454c70: // orphan
         if                       // unlikely

    loc_0x80454c7c: // orphan
         if                       // fcn.80470eb0+0x30 // unlikely

    loc_0x80454c94: // orphan
         if                       // fcn.80470eb0+0xd8 // unlikely

    loc_0x80454ca0: // orphan
         if                       // unlikely

    loc_0x80454cac: // orphan
         if                       // unlikely

    loc_0x80454cb8: // orphan
         if                       // unlikely

    loc_0x80454cc4: // orphan
         if                       // unlikely

    loc_0x80454cd0: // orphan
         if                       // unlikely

    loc_0x80454cdc: // orphan
         if                       // unlikely

    loc_0x80454ce8: // orphan
         if                       // unlikely

    loc_0x80454cf4: // orphan
         if                       // unlikely

    loc_0x80454d00: // orphan
         if                       // unlikely

    loc_0x80454d0c: // orphan
         if                       // unlikely

    loc_0x80454d30: // orphan
         if                       // unlikely

    loc_0x80454d3c: // orphan
         

    loc_0x80454e4c: // orphan
         if                       // unlikely

    loc_0x80454e58: // orphan
         if                       // unlikely

    loc_0x80454e64: // orphan
         // CODE XREF from fcn.80456444 @ +0x10c
         if                       // fcn.8045664c-0x202b4 // unlikely

    loc_0x80454fb8: // orphan
         if                       // fcn.80454ed8-0x1d80c // unlikely

    loc_0x80454fc4: // orphan
         if                       // fcn.80454ed8-0x1d780 // unlikely

    loc_0x80454fd0: // orphan
         if                       // fcn.80454ed8-0x1d744 // unlikely

    loc_0x80454fdc: // orphan
         if                       // unlikely

    loc_0x80454fe8: // orphan
         if                       // fcn.8043783c+0x20 // unlikely

    loc_0x80454ff4: // orphan
         if                       // fcn.8043783c+0xbc // unlikely

    loc_0x804555f0: // orphan
         if                       // fcn.8045664c-0x15868 // unlikely

    loc_0x804555fc: // orphan
         if                       // fcn.8045664c-0x1580c // unlikely

    loc_0x80455608: // orphan
         if                       // fcn.8045664c-0x157c0 // unlikely

    loc_0x80455614: // orphan
         if                       // fcn.8045664c-0x157a4 // unlikely

    loc_0x80455838: // orphan
         if                       // unlikely

    loc_0x80455844: // orphan
         if                       // unlikely
         

    loc_0x8045640c: // orphan
         // CODE XREF from fcn.8045664c @ 0x80456718
         if                       // unlikely

    loc_0x80456418: // orphan
         if                       // fcn.8045664c-0x27c0 // unlikely

    loc_0x80456438: // orphan
         

    loc_0x80456444: // orphan
           // CALL XREF from fcn.8086cbd4 @ +0xaac
         if                       // fcn.8045664c-0x2504 // unlikely
         

    loc_0x804566a0: // orphan
         

    loc_0x80456714: // orphan
         if                       // fcn.8045664c+0x34c // likely

    loc_0x80456720: // orphan
         at = halfword [0 + 0x130]

    loc_0x80458830: // orphan
         
         if                       // likely
         

    loc_0x8045f7dc: // orphan
         call 0x8004bae8          // 0x8004bae8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [a1 + 0x20c2]
         a3 = 0x8008 << 16
         a3 += 0x7200
         t4 = [a3 + 0]            // t9
         mov.s f2, f0
         at = 0x3f80 << 16
         v1 = , unsigned  halfword [t4 + 0xc]
         a0 = 0x8f40 << 16
         a1 = 0x8f40 << 16
         t5 = v1 & 0x200
         if                       // unlikely
         t6 = v1 & 0x100

    loc_0x8045f810: // orphan
         mtc1 at, f4
         
         sub.s f2, f0, f4

    loc_0x8045f81c: // orphan
         // CODE XREF from fcn.80456444 @ 0x8045f808
         if                       // unlikely
         at = 0x3f80 << 16

    loc_0x8045f824: // orphan
         mtc1 at, f6
         
         add.s f2, f2, f6

    loc_0x8045f830: // orphan
         // CODE XREF from fcn.80456444 @ 0x8045f81c
         mfc1 a2, f2
         a0 = [a0 + 0x20e4]       // t9
         call 0x8004be84          // 0x8004be84(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [a1 + 0x20c2]
         goto 0x8045fa28          // fcn.8045f39c+0x68c
         ra = [sp + 0x14]

    loc_0x8045f984: // orphan
         a2 = , signed  a2 >> 0x10 // arg3
         t1 = v1 & 0x200
         if                       // unlikely
         a0 = halfword [t9 + 0xa]

    loc_0x8045f994: // orphan
         blezl v0, 0x8045f9ac     // unlikely
         t2 = v1 & 0x100

    loc_0x8045f99c: // orphan
         a2 = v0 - 1              // arg3 // t3
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3 // t3

    loc_0x8045f9a8: // orphan
         // CODE XREF from fcn.80456444 @ 0x8045f98c
         t2 = v1 & 0x100

    loc_0x8045f9ac: // orphan
         // CODE XREF from fcn.80456444 @ 0x8045f994
         if                       // unlikely
         t3 = a0 - 1              // arg1

    loc_0x8045f9b4: // orphan
         at = , a2 < t3           // lo
         if                       // unlikely
         

    loc_0x8045f9c0: // orphan
         a2 += 1                  // arg3
         a2 <<= 0x10              // arg3
         a2 = , signed  a2 >> 0x10 // arg3

    loc_0x8045f9cc: // orphan
         // CODE XREFS from fcn.80456444 @ 0x8045f9ac, 0x8045f9b8
         a0 = 0x8f40 << 16
         a1 = a2 << 0x10          // arg3
         a1 = , signed  a1 >> 0x10 // arg2 // a2
         call 0x8004bd78          // 0x8004bd78(0x8f400000, 0x8, 0x8, -1)
         a0 = halfword [a0 + 0x20c2]
         goto 0x8045fa28          // fcn.8045f39c+0x68c
         ra = [sp + 0x14]

    loc_0x8045fd5c: // orphan
         a0 = , signed  a0 >> 0x18 // t9
         t7 = 0 + 1               // lo
         at = 0x8f40 << 16
         halfword [at + 0x20fe] = t7
         at = 0x8f40 << 16
         goto 0x8045fe68
         halfword [at + 0x2106] = 0

    loc_0x8045fe68: // orphan
         // CODE XREF from fcn.80456444 @ 0x8045fd70
         // CODE XREF from fcn.8045ec60 @ 0x8045fdb8
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x804611a4: // orphan
         if                       // fcn.80453c4c+0xd88c // unlikely

    loc_0x80461748: // orphan
         if                       // unlikely
         

    loc_0x80461830: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046183c: // orphan
         if                       // unlikely
         

    loc_0x80461844: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80461850: // orphan
         if                       // unlikely

    loc_0x8046185c: // orphan
         // CODE XREF from fcn.8045ec60 @ 0x8045eeb8
         if                       // unlikely

    loc_0x80461868: // orphan
         

    loc_0x804620fc: // orphan
         t0 = halfword [t0 + 0x9aa]
         at = 0x8f50 << 16

    loc_0x80463700: // orphan
         if                       // fcn.8045c474+0x8830 // unlikely

    loc_0x8046370c: // orphan
         if                       // fcn.8045c4b0+0x8850 // unlikely

    loc_0x80463718: // orphan
         if                       // unlikely
         

    loc_0x8046380c: // orphan
         if                       // fcn.8045c474+0x942c // unlikely

    loc_0x80463818: // orphan
         if                       // fcn.8045c410+0x94dc // unlikely

    loc_0x80463824: // orphan
         if                       // fcn.8045c410+0x9568 // unlikely

    loc_0x80463830: // orphan
         if                       // unlikely

    loc_0x8046383c: // orphan
         if                       // fcn.8045c474+0x967c // unlikely

    loc_0x80463848: // orphan
         if                       // fcn.8045c410+0x974c // unlikely
         if                       // fcn.8045c474+0x970c // unlikely

    loc_0x80463854: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80463860: // orphan
         if                       // fcn.8045c410+0x9844 // unlikely
         if                       // fcn.80465c88 // unlikely

    loc_0x80464d8c: // orphan
         t5 = , unsigned  halfword [s1 + 4]

    loc_0x80464d90: // orphan
         a0 = s0 + 0xc
         srav a1, t5, s0
         a1 &= 1
         call 0x80054488          // 0x80054488(0x110, 0x0, 0x8, -1)
         a1 &= 0xff

    loc_0x80464da4: // orphan
         s0 += 1
         at = 0 + 4
         bnel s0, at, 0x80464d90  // likely
         t5 = , unsigned  halfword [s1 + 4]

    loc_0x80464db4: // orphan
         t6 = , unsigned  halfword [s1 + 4]
         at = 0 + 0xf
         a1 = 0 + 1               // lo

    loc_0x80464de0: // orphan
         call 0x800545b4          // 0x800545b4(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         // CODE XREF from fcn.8046489c @ +0x534
         call 0x8fa00380          // 0x8fa00380(-1, 0x0, 0x8, -1)
         

    loc_0x80465760: // orphan
         if                       // fcn.8045c410+0xaea4 // unlikely
         

    loc_0x80465838: // orphan
         if                       // fcn.8045cb4c+0xb2c0 // unlikely
         if                       // fcn.8045cb4c+0xb254 // unlikely

    loc_0x80465844: // orphan
         if                       // fcn.8045cb4c+0xb26c // unlikely
         if                       // fcn.8045cb4c+0xb2b0 // unlikely

    loc_0x80465850: // orphan
         if                       // fcn.8045cb4c+0xb284 // unlikely
         if                       // fcn.8045cb4c+0xb2a8 // unlikely

    loc_0x80465864: // orphan
         

    loc_0x80465900: // orphan
         

    loc_0x80465904: // orphan
         if                       // fcn.80468aa8 // unlikely
         if                       // fcn.80468aa8+0x14 // unlikely

    loc_0x80465910: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046591c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046598c: // orphan
         
         
         
         if                       // unlikely
         if                       // fcn.80469384+0x6c // unlikely

    loc_0x804659a4: // orphan
         if                       // fcn.80469384+0x64 // unlikely
         if                       // unlikely

    loc_0x804659b0: // orphan
         if                       // fcn.80469384 // unlikely
         if                       // fcn.80469384+0x54 // unlikely

    loc_0x804659bc: // orphan
         if                       // fcn.80469384+0x4c // unlikely
         if                       // fcn.80469384+0x30 // unlikely

    loc_0x804659c8: // orphan
         

    loc_0x80465a18: // orphan
         if                       // unlikely

    loc_0x80465a24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80465a30: // orphan
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80465a68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80465a74: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80465a88: // orphan
         

    loc_0x80465a8c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80465aa0: // orphan
         
         
         
         if                       // fcn.8046abb4+0x3c // unlikely
         if                       // fcn.8046abb4+0x80 // unlikely

    loc_0x80465b00: // orphan
         if                       // fcn.8046b30c+0x4 // unlikely
         if                       // unlikely

    loc_0x80465b0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80465b24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80465b30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804662ac: // orphan
         t5 = t4 + v0
         ret                      // ra
         [a1 + 0] = t5

    loc_0x80466310: // orphan
         
         v0 = [a2 + 4]            // t9
         at = , a1 < v0
         beql at, 0, 0x8046632c   // likely
         v0 = [a2 + 8]            // t9

    loc_0x80466324: // orphan
         a1 = v0                  // s4

    loc_0x80466328: // orphan
         v0 = [a2 + 8]            // t9

    loc_0x8046632c: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046631c
         at = , v0 < a1           // lo
         beql at, 0, 0x80466340   // unlikely
         t8 = [a2 + 0x2c]         // t9

    loc_0x80466338: // orphan
         a1 = v0                  // s4
         t8 = [a2 + 0x2c]         // t9

    loc_0x80466340: // orphan
         // CODE XREF from fcn.80456444 @ 0x80466330
         at = 0x8f70 << 16
         a0 = a1 & 0xff           // a2
         byte [t8 + 0] = a1
         call 0x8f700538          // 0x8f700538(0x8, 0x442f71dcfe116408, 0x8, -1)
         byte [at + 0x2361] = a1
         goto 0x8046639c
         ra = [sp + 0x14]

    loc_0x8046639c: // orphan
         // CODE XREF from fcn.80456444 @ 0x80466354
         sp += 0x18
         ret                      // ra
         

    loc_0x80466454: // orphan
         t6 = v0 & 0x200
         if                       // likely
         t7 = 0 + 0xb

    loc_0x80466460: // orphan
         halfword [v1 + 0] = t7

    loc_0x80467f80: // orphan
         if                       // fcn.8045cb4c+0xb768 // unlikely

    loc_0x80467f8c: // orphan
         if                       // unlikely

    loc_0x80467fdc: // orphan
         if                       // fcn.8045c410+0xc420 // unlikely

    loc_0x80468090: // orphan
         if                       // unlikely

    loc_0x8046809c: // orphan
         if                       // unlikely

    loc_0x804680a8: // orphan
         if                       // unlikely

    loc_0x804680b4: // orphan
         if                       // unlikely

    loc_0x804680c0: // orphan
         if                       // unlikely

    loc_0x804680cc: // orphan
         if                       // unlikely

    loc_0x804680d8: // orphan
         if                       // unlikely

    loc_0x804680e4: // orphan
         if                       // unlikely

    loc_0x804680f0: // orphan
         if                       // unlikely

    loc_0x804680fc: // orphan
         if                       // unlikely

    loc_0x80468108: // orphan
         if                       // unlikely

    loc_0x80468114: // orphan
         if                       // unlikely

    loc_0x80468120: // orphan
         if                       // unlikely

    loc_0x8046812c: // orphan
         if                       // unlikely

    loc_0x80468138: // orphan
         if                       // unlikely

    loc_0x80468144: // orphan
         if                       // unlikely

    loc_0x80468150: // orphan
         if                       // unlikely

    loc_0x8046815c: // orphan
         if                       // fcn.8046abb4+0x3c // unlikely

    loc_0x80468168: // orphan
         if                       // unlikely

    loc_0x80468180: // orphan
         if                       // unlikely

    loc_0x8046818c: // orphan
         if                       // unlikely

    loc_0x80468198: // orphan
         if                       // unlikely

    loc_0x804681a4: // orphan
         if                       // unlikely

    loc_0x804681b0: // orphan
         if                       // unlikely

    loc_0x804681bc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804681c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804681d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804681e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804681ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804681f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468204: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468210: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046821c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468234: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468240: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046824c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80468258: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046827c: // orphan
         if                       // unlikely

    loc_0x80468288: // orphan
         if                       // unlikely

    loc_0x80468b38: // orphan
         a2 = 0 + 2
         a3 = 0x8f81 << 16
         a3 = [a3 - 0x6050]       // t9
         a2 = 0x8f80 << 16
         a2 += 0x392c
         a0 = , unsigned  halfword [s0 + 2]
         a1 = , unsigned  halfword [s0 + 4]
         call 0x800495bc          // 0x800495bc(0xffff, 0xffff, 0x8f80392c, -1)
         a3 += 0x40

    loc_0x80468b84: // orphan
         [sp + 0x38] = s7
         [sp + 0x34] = s6
         [sp + 0x30] = s5
         [sp + 0x2c] = s4
         [sp + 0x24] = s2
         [sp + 0x20] = s1
         [sp + 0x1c] = s0
         a3 = , unsigned  halfword [s3 + 6]
         a2 = , unsigned  halfword [s3 + 4]
         a1 = , unsigned  halfword [s3 + 2]
         a0 = , unsigned  halfword [s3 + 0]

    loc_0x8046936c: // orphan
         

    loc_0x804695a8: // orphan
         [sp + 0x34] = ra
         [sp + 0x30] = s3
         [sp + 0x2c] = s2
         [sp + 0x28] = s1
         call 0x800088dc          // 0x800088dc(-1, 0x442f71dcfe116408, 0x8, -1)
         // CODE XREF from fcn.8045c410 @ 0x80467578
         [sp + 0x24] = s0

    loc_0x804697f4: // orphan
         a1 = 0x8f81 << 16

    loc_0x80469afc: // orphan
         // CODE XREF from fcn.80456444 @ 0x80465a28
         t4 = [t4 - 0x6050]       // t9
         call 0x80073450          // 0x80073450(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = , unsigned  byte [t4 + 0] // a2
         a1 = 0x8f81 << 16
         a1 -= 0x6040
         a0 = , unsigned  halfword [a1 + 0xc]
         halfword [a1 + 8] = v0
         t5 = halfword [a1 + 8]   // s4
         if                       // likely
         t6 = , signed  a0 >> 1

    loc_0x80469b24: // orphan
         at = a0 + 1
         t6 = , signed  at >> 1

    loc_0x80469b2c: // orphan
         t7 = t5 - t6
         halfword [a1 + 0xa] = t7
         v1 = halfword [a1 + 0xa]

    loc_0x80469d1c: // orphan
         goto 0x80469e38
         [a1 + 0x14] = t5

    loc_0x8046a024: // orphan
         s0 = 0x8f81 << 16
         s0 -= 0x6050
         v0 -= 0x6040
         t5 = [v0 + 0x14]         // t9

    loc_0x8046a0ec: // orphan
         s0 = 0x8f81 << 16
         s0 -= 0x6050
         v1 = [s0 + 0]            // t9
         a2 = 0x8f81 << 16
         a2 = , unsigned  halfword [a2 - 0x602a]
         t5 = , unsigned  halfword [v1 + 0x16]
         a1 = , unsigned  byte [v1 + 0] // a2
         a3 = , unsigned  byte [v1 + 0x1d] // s4
         a0 = 0
         call 0x80061adc          // 0x80061adc(0x0, 0x8, 0xffff, 0xff)
         [sp + 0x10] = t5
         t8 = [s0 + 0]            // t9

    loc_0x8046a204: // orphan
         goto loc.8046a3f0        // loc.8046a3f0(-1)
         halfword [t8 + 0x2c] = v0

    loc_0x8046a650: // orphan
         a3 = a0 - a2

    loc_0x8046a6cc: // orphan
         at = 0 + 2

    loc_0x8046a6d0: // orphan
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 2
         t6 = 0x8f81 << 16
         t6 = [t6 - 0x604c]       // t9
         t8 = 0x8f80 << 16
         a1 = 0x8f81 << 16
         t7 = t6 << 4
         t7 += t6
         t7 <<= 1
         t8 += 0x34cc
         a1 -= 0x6040
         v1 = t7 + t8
         a0 = , unsigned  halfword [v1 + 6]
         v0 = halfword [a1 + 8]   // s4
         at = , v0 < a0           // lo
         beql at, 0, 0x8046a720   // unlikely
         a0 = , unsigned  halfword [v1 + 8]

    loc_0x8046a714: // orphan
         halfword [a1 + 8] = a0
         v0 = halfword [a1 + 8]
         a0 = , unsigned  halfword [v1 + 8]

    loc_0x8046a720: // orphan
         at = , a0 < v0
         if                       // likely
         

    loc_0x8046a72c: // orphan
         halfword [a1 + 8] = a0

    loc_0x8046a730: // orphan
         call 0x8f801988          // 0x8f801988(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x8f81 << 16
         goto 0x8046a760
         [at - 0x6048] = 0

    loc_0x8046a760: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046a73c
         ra = [sp + 0x14]

    loc_0x8046a764: // orphan
         sp += 0x20
         v0 = 0 + 1               // lo
         ret                      // ra
         

    loc_0x8046a798: // orphan
         // CODE XREF from fcn.80456444 @ 0x80465a84
         halfword [v0 + 6] = t9
         t0 = 0x8f81 << 16
         t0 = [t0 - 0x604c]       // t9
         t2 = 0x8f80 << 16
         sp -= 0x18
         t1 = t0 << 4
         t1 += t0
         t1 <<= 1
         t2 += t1
         t2 = , unsigned  halfword [t2 + 0x34d6]
         [sp + 0x14] = ra
         halfword [v0 + 8] = 0
         halfword [v0 + 0xa] = 0
         call 0x8f8015a8          // 0x8f8015a8(-1, 0x442f71dcfe116408, 0x8, -1)
         halfword [v0 + 0x20] = t2
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x8046aeac: // orphan
         a1 -= 0x6040
         v1 = t7 + t8             // t9
         a0 = , unsigned  halfword [v1 + 6]
         v0 = [a1 + 0x14]         // t9
         at = , v0 < a0
         beql at, 0, 0x8046aed4   // likely
         a0 = , unsigned  halfword [v1 + 8]

    loc_0x8046aec8: // orphan
         [a1 + 0x14] = a0
         v0 = a0                  // t9
         a0 = , unsigned  halfword [v1 + 8]

    loc_0x8046aed4: // orphan
         at = , a0 < v0
         if                       // likely
         

    loc_0x8046aee0: // orphan
         [a1 + 0x14] = a0

    loc_0x8046aee4: // orphan
         call 0x8f801988          // 0x8f801988(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0x8f81 << 16
         goto 0x8046af14
         [at - 0x6048] = 0

    loc_0x8046af14: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046aef0
         ra = [sp + 0x14]
         sp += 0x20
         v0 = 0 + 1               // lo
         ret
         

    loc_0x8046b034: // orphan
         at = 0 + 0x100
         a1 = [sp + 0x20]
         if                       // unlikely
         at = 0 + 0x200

    loc_0x8046b044: // orphan
         if                       // unlikely
         a2 = 0x8f81 << 16

    loc_0x8046b04c: // orphan
         at = 0 + 0x400
         if                       // unlikely
         t1 = 0x8f81 << 16

    loc_0x8046b058: // orphan
         at = 0 + 0x800
         if                       // unlikely
         t6 = 0x8f81 << 16

    loc_0x8046b064: // orphan
         goto 0x8046b148
         

    loc_0x8046b06c: // orphan
         v1 = 0x8f81 << 16
         v1 = halfword [v1 - 0x6038] // s4
         a2 = , unsigned  halfword [a2 - 0x6036]
         at = 0x8f81 << 16
         v1 += 1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         halfword [at - 0x6038] = v1
         at = , a2 < v1
         if                       // likely
         at = 0x8f81 << 16

    loc_0x8046b098: // orphan
         goto 0x8046b148
         halfword [at - 0x6038] = a2

    loc_0x8046b0a0: // orphan
         v1 = 0x8f81 << 16
         v1 = halfword [v1 - 0x6038]
         at = 0x8f81 << 16
         v1 -= 1                  // s4
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10 // s4
         if                       // likely
         halfword [at - 0x6038] = v1

    loc_0x8046b0c0: // orphan
         at = 0x8f81 << 16
         goto 0x8046b148
         halfword [at - 0x6038] = 0

    loc_0x8046b0cc: // orphan
         t6 = halfword [t6 - 0x6038]
         v1 = 0x8f81 << 16
         v1 -= 0x6040

    loc_0x8046b10c: // orphan
         t1 = halfword [t1 - 0x6038]
         v1 = 0x8f81 << 16
         v1 -= 0x6040
         v0 = v1 + t1
         t2 = byte [v0 + 0xc]     // s4
         t4 = 0x8f81 << 16
         t6 = 0 + 0xf
         t3 = t2 - 1
         byte [v0 + 0xc] = t3
         t4 = halfword [t4 - 0x6038]
         v0 = v1 + t4
         t5 = byte [v0 + 0xc]     // s4
         if                       // likely
         

    loc_0x8046b144: // orphan
         byte [v0 + 0xc] = t6

    loc_0x8046b188: // orphan
         t0 = byte [v0 + 0xc]
         v0 -= 1                  // t3

    loc_0x8046b190: // orphan
         at = , unsigned  , v0 < a0 // lo
         t1 = v1 << 4
         if                       // unlikely
         v1 = t0 + t1

    loc_0x8046b258: // orphan
         // CODE XREF from fcn.8045c410 @ 0x80465af4
         
         at = 0x8f81 << 16
         goto 0x8046b284
         [at - 0x6048] = 0

    loc_0x8046b284: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046b260
         ra = [sp + 0x14]
         sp += 0x20
         v0 = 0 + 1               // lo
         ret
         

    loc_0x8046b328: // orphan
         // CODE XREF from fcn.8045c474 @ 0x80465b04
         at = 0x8f81 << 16
         goto 0x8046b378
         [at - 0x6048] = t1

    loc_0x8046b448: // orphan
         v0 -= 0x604c
         t3 = [v0 + 0]            // t9
         t5 = 0x8f80 << 16
         t4 = t3 << 4
         t4 += t3

    loc_0x8046b45c: // orphan
         t4 <<= 1
         t5 += t4
         t5 = , unsigned  byte [t5 + 0x34d9] // s4

    loc_0x8046b468: // orphan
         goto 0x8046b5dc
         [v0 + 0] = t5

    loc_0x8046b650: // orphan
         goto 0x8046b694
         s0 = v0                  // s4

    loc_0x8046b67c: // orphan
         
         goto 0x8046b694
         s0 = v0                  // s4

    loc_0x8046b984: // orphan
         bnel v0, at, 0x8047e988  // likely
         

    loc_0x8046ba80: // orphan
         dsra 0, 0, 3

    loc_0x8046bd28: // orphan
         
         bnel k1, a1, 0x80484ee8  // likely
         daddiu s3, t3, 0x6461

    loc_0x8046bd34: // orphan
         ori.b w0, w0, 0
         bnel v1, t0, 0x80489304  // likely

    loc_0x8046be04: // orphan
         s3 = t1 + 0x643a
         
         s3 = t1 + 0x643a
         // CODE XREF from fcn.8045c474 @ 0x80465b7c
         
         beql v1, t7, 0x80486bac  // unlikely
         madd.s f24, f11, f13

    loc_0x8046c0d8: // orphan
         if                       // unlikely

    loc_0x8046c0e4: // orphan
         if                       // unlikely

    loc_0x8046c0f0: // orphan
         if                       // unlikely

    loc_0x8046c0fc: // orphan
         if                       // unlikely

    loc_0x8046c108: // orphan
         if                       // unlikely

    loc_0x8046c114: // orphan
         if                       // unlikely

    loc_0x8046c120: // orphan
         if                       // unlikely

    loc_0x8046c12c: // orphan
         if                       // unlikely

    loc_0x8046c138: // orphan
         if                       // unlikely

    loc_0x8046c144: // orphan
         if                       // unlikely

    loc_0x8046c150: // orphan
         if                       // unlikely

    loc_0x8046c15c: // orphan
         if                       // unlikely

    loc_0x8046c168: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c174: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c180: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c18c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c198: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c1a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c1b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c1c4: // orphan
         if                       // unlikely

    loc_0x8046c1d0: // orphan
         if                       // unlikely

    loc_0x8046c1dc: // orphan
         if                       // unlikely

    loc_0x8046c1e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c1f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c200: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c20c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c218: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c224: // orphan
         if                       // fcn.8046dc08+0x40 // unlikely
         if                       // fcn.8046dc08+0x14 // unlikely

    loc_0x8046c230: // orphan
         if                       // fcn.8046dc08+0x10c // unlikely
         if                       // unlikely

    loc_0x8046c23c: // orphan
         if                       // fcn.8046dc08+0x228 // unlikely
         if                       // fcn.8046dc08+0x20c // unlikely

    loc_0x8046c250: // orphan
         if                       // fcn.8046df54+0x10 // unlikely

    loc_0x8046c25c: // orphan
         if                       // unlikely

    loc_0x8046c268: // orphan
         if                       // unlikely

    loc_0x8046c274: // orphan
         if                       // unlikely

    loc_0x8046c280: // orphan
         if                       // unlikely

    loc_0x8046c28c: // orphan
         if                       // unlikely

    loc_0x8046c298: // orphan
         if                       // unlikely

    loc_0x8046c2a4: // orphan
         if                       // unlikely

    loc_0x8046c2b0: // orphan
         if                       // unlikely

    loc_0x8046c2bc: // orphan
         if                       // unlikely

    loc_0x8046c2c8: // orphan
         if                       // unlikely

    loc_0x8046c2d4: // orphan
         if                       // unlikely

    loc_0x8046c2e0: // orphan
         if                       // fcn.80467040+0x7954 // unlikely

    loc_0x8046c2ec: // orphan
         if                       // unlikely

    loc_0x8046c2f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c304: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c310: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c31c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c328: // orphan
         if                       // fcn.8046ea80+0x12c // unlikely
         if                       // unlikely

    loc_0x8046c33c: // orphan
         if                       // fcn.8046ea80+0x130 // unlikely

    loc_0x8046c348: // orphan
         if                       // fcn.8046ef20+0x6c // unlikely

    loc_0x8046c354: // orphan
         if                       // fcn.8046ef20+0x8 // unlikely

    loc_0x8046c360: // orphan
         if                       // unlikely

    loc_0x8046c36c: // orphan
         if                       // unlikely

    loc_0x8046c378: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c384: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c390: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c39c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c3a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c3b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c424: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c680: // orphan
         if                       // fcn.80471b4c+0x308 // unlikely

    loc_0x8046c684: // orphan
         if                       // fcn.80471b4c+0x31c // unlikely

    loc_0x8046c68c: // orphan
         if                       // unlikely

    loc_0x8046c690: // orphan
         if                       // unlikely

    loc_0x8046c698: // orphan
         if                       // unlikely

    loc_0x8046c69c: // orphan
         if                       // unlikely

    loc_0x8046c6a4: // orphan
         if                       // unlikely

    loc_0x8046c6a8: // orphan
         if                       // unlikely

    loc_0x8046c6b0: // orphan
         if                       // unlikely

    loc_0x8046c6b4: // orphan
         if                       // unlikely

    loc_0x8046c6bc: // orphan
         if                       // unlikely

    loc_0x8046c6c0: // orphan
         if                       // unlikely

    loc_0x8046c6c8: // orphan
         if                       // unlikely

    loc_0x8046c6cc: // orphan
         if                       // unlikely

    loc_0x8046c6d4: // orphan
         if                       // unlikely

    loc_0x8046c6d8: // orphan
         if                       // unlikely

    loc_0x8046c6e0: // orphan
         if                       // unlikely

    loc_0x8046c6e4: // orphan
         if                       // unlikely

    loc_0x8046c6ec: // orphan
         if                       // unlikely

    loc_0x8046c6f0: // orphan
         if                       // unlikely

    loc_0x8046c6f8: // orphan
         if                       // unlikely

    loc_0x8046c6fc: // orphan
         if                       // unlikely

    loc_0x8046c704: // orphan
         if                       // unlikely

    loc_0x8046c708: // orphan
         if                       // unlikely

    loc_0x8046c710: // orphan
         if                       // unlikely

    loc_0x8046c714: // orphan
         if                       // unlikely

    loc_0x8046c71c: // orphan
         if                       // unlikely

    loc_0x8046c720: // orphan
         if                       // unlikely

    loc_0x8046c728: // orphan
         if                       // unlikely

    loc_0x8046c72c: // orphan
         if                       // unlikely

    loc_0x8046c734: // orphan
         if                       // unlikely

    loc_0x8046c738: // orphan
         if                       // unlikely

    loc_0x8046c740: // orphan
         if                       // unlikely

    loc_0x8046c750: // orphan
         if                       // unlikely

    loc_0x8046c75c: // orphan
         if                       // unlikely

    loc_0x8046c768: // orphan
         if                       // unlikely

    loc_0x8046c774: // orphan
         if                       // unlikely

    loc_0x8046c780: // orphan
         if                       // unlikely

    loc_0x8046c78c: // orphan
         if                       // unlikely

    loc_0x8046c798: // orphan
         if                       // fcn.80472bc4+0x8 // unlikely

    loc_0x8046c7a4: // orphan
         if                       // unlikely

    loc_0x8046c7b0: // orphan
         if                       // unlikely

    loc_0x8046c7bc: // orphan
         if                       // unlikely

    loc_0x8046c7c4: // orphan
         if                       // unlikely
         if                       // fcn.80472d60+0x1c // unlikely

    loc_0x8046c7c8: // orphan
         if                       // fcn.80472d60+0x1c // unlikely

    loc_0x8046c7d0: // orphan
         if                       // fcn.80472d60+0x4 // unlikely
         if                       // fcn.80472d60+0x18 // unlikely

    loc_0x8046c7d4: // orphan
         if                       // fcn.80472d60+0x18 // unlikely
         if                       // unlikely

    loc_0x8046c7dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c7e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c7ec: // orphan
         if                       // unlikely
         if                       // fcn.80472f4c+0x8 // unlikely

    loc_0x8046c7f8: // orphan
         if                       // fcn.80472f4c+0x20 // unlikely
         if                       // fcn.80472f4c+0x64 // unlikely

    loc_0x8046c85c: // orphan
         if                       // unlikely

    loc_0x8046c868: // orphan
         if                       // unlikely

    loc_0x8046c874: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c880: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c88c: // orphan
         if                       // unlikely
         if                       // fcn.80473748+0x2c // unlikely

    loc_0x8046c898: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c8a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c8b0: // orphan
         if                       // fcn.80473800+0xd4 // unlikely
         if                       // fcn.80473800+0x168 // unlikely

    loc_0x8046c8bc: // orphan
         if                       // fcn.80473800+0x1a0 // unlikely
         if                       // unlikely

    loc_0x8046c8c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c8d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c8e0: // orphan
         if                       // unlikely
         if                       // fcn.81be13c4-0x176d5ac // unlikely

    loc_0x8046c8ec: // orphan
         if                       // fcn.81be13c4-0x176d574 // unlikely
         if                       // unlikely

    loc_0x8046c8f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c904: // orphan
         if                       // fcn.80474100+0x38 // unlikely
         if                       // fcn.80474100+0x4c // unlikely

    loc_0x8046c910: // orphan
         if                       // fcn.80474174+0x10 // unlikely
         if                       // unlikely

    loc_0x8046c924: // orphan
         if                       // unlikely

    loc_0x8046c930: // orphan
         if                       // unlikely

    loc_0x8046c93c: // orphan
         if                       // unlikely

    loc_0x8046c948: // orphan
         if                       // fcn.80474554+0x18 // unlikely

    loc_0x8046c954: // orphan
         if                       // unlikely

    loc_0x8046c960: // orphan
         if                       // unlikely

    loc_0x8046c96c: // orphan
         if                       // fcn.80474644+0x3c // unlikely

    loc_0x8046c978: // orphan
         if                       // unlikely

    loc_0x8046c984: // orphan
         if                       // unlikely

    loc_0x8046c990: // orphan
         if                       // unlikely

    loc_0x8046c99c: // orphan
         if                       // unlikely

    loc_0x8046c9a8: // orphan
         if                       // unlikely

    loc_0x8046c9b4: // orphan
         if                       // unlikely

    loc_0x8046c9c0: // orphan
         if                       // unlikely

    loc_0x8046c9cc: // orphan
         if                       // unlikely

    loc_0x8046c9d8: // orphan
         if                       // unlikely

    loc_0x8046c9e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c9f0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046c9fc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca30: // orphan
         if                       // unlikely

    loc_0x8046ca38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca3c: // orphan
         if                       // unlikely

    loc_0x8046ca44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca48: // orphan
         if                       // unlikely

    loc_0x8046ca50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca60: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ca6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cb8c: // orphan
         if                       // fcn.8047635c+0xe4 // unlikely
         if                       // unlikely

    loc_0x8046cb98: // orphan
         if                       // fcn.8047635c+0x110 // unlikely
         if                       // unlikely

    loc_0x8046cb9c: // orphan
         if                       // unlikely

    loc_0x8046cba4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cba8: // orphan
         if                       // unlikely

    loc_0x8046cbb0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbc0: // orphan
         if                       // unlikely

    loc_0x8046cbc8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbcc: // orphan
         if                       // unlikely

    loc_0x8046cbd4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbd8: // orphan
         if                       // unlikely

    loc_0x8046cbe0: // orphan
         if                       // fcn.804768c4+0x50 // unlikely
         if                       // unlikely

    loc_0x8046cbe4: // orphan
         if                       // fcn.804768c4+0x50 // unlikely
         if                       // unlikely

    loc_0x8046cbec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cbfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cc08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cc14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cc18: // orphan
         if                       // unlikely

    loc_0x8046cc20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cc24: // orphan
         if                       // unlikely

    loc_0x8046cc2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cc30: // orphan
         if                       // unlikely

    loc_0x8046cc38: // orphan
         if                       // unlikely
         if                       // fcn.80476f54+0x3c // unlikely

    loc_0x8046cc3c: // orphan
         if                       // fcn.80476f54+0x3c // unlikely

    loc_0x8046cc44: // orphan
         if                       // unlikely
         if                       // fcn.80476f54+0x38 // unlikely

    loc_0x8046cc48: // orphan
         if                       // fcn.80476f54+0x38 // unlikely

    loc_0x8046cc50: // orphan
         if                       // unlikely

    loc_0x8046ccd8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cce4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ccf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ccfc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd20: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd38: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd68: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd74: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cd8c: // orphan
         if                       // fcn.80478478+0x18 // unlikely
         if                       // unlikely

    loc_0x8046cd98: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cda4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cdb0: // orphan
         if                       // fcn.804786a4+0x20 // unlikely
         if                       // unlikely

    loc_0x8046cdbc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cef4: // orphan
         if                       // fcn.8047980c+0x1cc // unlikely

    loc_0x8046cf00: // orphan
         if                       // fcn.8047980c+0x1a8 // unlikely

    loc_0x8046cf0c: // orphan
           // CALL XREF from fcn.8070a0fc @ +0x1e4
         if                       // fcn.8047980c+0x170 // unlikely
         if                       // fcn.8047980c+0x184 // unlikely

    loc_0x8046cf18: // orphan
         if                       // fcn.8047980c+0x23c // unlikely
         if                       // fcn.8047980c+0x250 // unlikely

    loc_0x8046cf24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cf30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046cf74: // orphan
         syscall                  // 255 = unknown ()

    loc_0x8046d318: // orphan
         t4 = t3 << 4
         a1 = 0x8f91 << 16
         a1 = , unsigned  halfword [a1 + 0x1652]
         a2 = v0 + 0x37
         call 0x80049628          // 0x80049628(-1, 0xffff, 0x136, -1)
         a0 = t2 + t4

    loc_0x8046d32c: // orphan
         a0 = t2 + t4
         s0 -= 1

    loc_0x8046d334: // orphan
         // CODE XREF from fcn.8046cf08 @ +0x400
         if                       // likely
         s1 -= 1

    loc_0x8046d834: // orphan
         a0 = [sp + 0x18]
         at = 0 + 0x100
         if                       // unlikely
         v1 = 0x8f91 << 16

    loc_0x8046d844: // orphan
         at = 0 + 0x200
         if                       // unlikely
         v1 = 0x8f91 << 16

    loc_0x8046d850: // orphan
         at = 0 + 0x400
         if                       // unlikely
         t1 = 0x8f91 << 16

    loc_0x8046d870: // orphan
         v1 = halfword [v1 + 0x1658]
         a1 = 0x8f91 << 16

    loc_0x8046d8a4: // orphan
         v1 = halfword [v1 + 0x1658]
         at = 0x8f91 << 16
         v1 -= 1
         v1 <<= 0x10
         v1 = , signed  v1 >> 0x10
         if                       // likely
         halfword [at + 0x1658] = v1

    loc_0x8046d8c0: // orphan
         at = 0x8f91 << 16
         goto 0x8046d948
         halfword [at + 0x1658] = 0

    loc_0x8046d90c: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046d854
         t1 = halfword [t1 + 0x1658]
         v1 = 0x8f91 << 16
         v1 += 0x1650
         v0 = v1 + t1

    loc_0x8046d91c: // orphan
         t2 = byte [v0 + 0xc]
         t4 = 0x8f91 << 16
         t6 = 0 + 0xf
         t3 = t2 - 1
         byte [v0 + 0xc] = t3
         t4 = halfword [t4 + 0x1658]
         v0 = v1 + t4
         t5 = byte [v0 + 0xc]     // s4
         if                       // likely
         

    loc_0x8046d944: // orphan
         byte [v0 + 0xc] = t6

    loc_0x8046dbe0: // orphan
         [sp + 0x1c] = v1
         v1 = [sp + 0x1c]

    loc_0x8046dbe8: // orphan
         // CODE XREF from fcn.8046cf08 @ +0xcc0
         // CODE XREF from fcn.8046dbd4 @ 0x8046dbd4
         ra = [sp + 0x14]

    loc_0x8046dbec: // orphan
         // CODE XREF from fcn.8046cf08 @ +0xcb8
         sp += 0x20
         v0 = v1
         ret                      // ra
         

    loc_0x8046dd28: // orphan
         // CODE XREF from fcn.8046dc08 @ 0x8046dcf4
         t4 = v0 & 0x1000
         if                       // likely
         a1 = 0x8f90 << 16

    loc_0x8046df0c: // orphan
         halfword [a1 + 0] = v1

    loc_0x8046dfb4: // orphan
         t5 = v0 & 0x10

    loc_0x8046e374: // orphan
         t1 = [a1 + 0]
         t2 = t1 - 1
         if                       // likely
         [a1 + 0] = t2

    loc_0x8046e384: // orphan
         t4 = 0 + 7

    loc_0x8046e3e0: // orphan
         t2 = t1 + 0x80
         [v1 + 0] = t2
         v0 = [v0 + 0x1640]       // t9
         at = , unsigned  , v0 < t2
         if                       // likely
         

    loc_0x8046e3f8: // orphan
         goto 0x8046e474
         [v1 + 0] = v0

    loc_0x8046e508: // orphan
         

    loc_0x8046e780: // orphan
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x1220]       // [0x1220:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12e4]       // [0x12e4:4]=-1 // t9
         s0 = [gp + 0x12c0]       // [0x12c0:4]=-1 // t9
         
         

    loc_0x8046e9b4: // orphan
         if                       // unlikely

    loc_0x8046ea50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046eb84: // orphan
         if                       // unlikely

    loc_0x8046eb90: // orphan
         if                       // unlikely

    loc_0x8046eb9c: // orphan
         if                       // unlikely

    loc_0x8046eba8: // orphan
         if                       // unlikely

    loc_0x8046ebb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ebc0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ebcc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ebd8: // orphan
         if                       // fcn.80473748+0x64 // unlikely
         if                       // unlikely

    loc_0x8046ebe4: // orphan
         if                       // fcn.804737b4+0x14 // unlikely
         if                       // unlikely

    loc_0x8046ebf0: // orphan
         if                       // fcn.804737b4+0xb0 // unlikely
         if                       // fcn.80473800+0xf8 // unlikely

    loc_0x8046ebfc: // orphan
         if                       // fcn.80473800+0x180 // unlikely
         if                       // unlikely

    loc_0x8046ec08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ec14: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8046ec44: // orphan
         if                       // unlikely

    loc_0x8046ece0: // orphan
         [a0 + 0x14] = t7
         t6 = [a0 + 0x14]
         // CODE XREF from fcn.8046e6b0 @ +0x124
         v1 = 0
         t7 = t6 & a1
         if                       // likely
         

    loc_0x8046ecf8: // orphan
         v1 = 0 + 1               // lo

    loc_0x8046ecfc: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ecf0
         ret                      // ra
         v0 = v1

    loc_0x8046ed08: // orphan
         v1 = 0
         t7 = t6 & a1
         if                       // likely
         

    loc_0x8046ed18: // orphan
         v1 = 0 + 1               // lo

    loc_0x8046ed1c: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ed10
         ret                      // ra
         v0 = v1

    loc_0x8046ee04: // orphan
         mtc1 0, f2
         v1 = 0 + 0xff            // s4
         halfword [a0 + 0x6e] = 0
         swc1 f2, 0x4c, a0
         lwc1 f0, 0x4c, a0
         v0 = halfword [a0 + 0x6e]
         halfword [a0 + 0x74] = 0
         at = 0x3f80 << 16
         // CODE XREF from fcn.8046e6b0 @ +0x140
         swc1 f0, 0x48, a0

    loc_0x8046ef5c: // orphan
         t7 = byte [a0 + 0x98]    // arg1 // s4

    loc_0x8046efc0: // orphan
         call 0x84100260          // 0x84100260(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8046f204: // orphan
         v0 = [v0 - 0x36b0]       // t9
         a0 = 0
         a1 = 0 + 0x12c

    loc_0x8046f210: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f260
         t6 = byte [v0 + 0x98]    // s4
         a0 += 4
         beql t6, 0, 0x8046f228   // unlikely
         t7 = byte [v0 + 0x134]   // s4

    loc_0x8046f220: // orphan
         v1 += 1
         t7 = byte [v0 + 0x134]   // s4

    loc_0x8046f228: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f218
         v0 += 0x9c
         beql t7, 0, 0x8046f23c   // likely
         t8 = byte [v0 + 0x134]   // s4

    loc_0x8046f234: // orphan
         v1 += 1
         t8 = byte [v0 + 0x134]   // s4

    loc_0x8046f23c: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f22c
         v0 += 0x9c
         beql t8, 0, 0x8046f250   // unlikely
         t9 = byte [v0 + 0x134]   // s4

    loc_0x8046f248: // orphan
         v1 += 1
         t9 = byte [v0 + 0x134]   // s4

    loc_0x8046f250: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f240
         v0 += 0x9c
         if                       // unlikely
         

    loc_0x8046f25c: // orphan
         v1 += 1

    loc_0x8046f260: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f254
         if                       // likely
         v0 += 0x9c

    loc_0x8046f268: // orphan
         ret                      // ra
         v0 = v1

    loc_0x8046f2d0: // orphan
         mtc1 a3, f10
         mtc1 a1, f4
         cvt.s.w f0, f8
         cvt.s.w f16, f10
         cvt.s.w f6, f4
         sub.s f18, f16, f0
         sub.s f8, f6, f2
         sub.s f16, f12, f2
         div.s f10, f18, f8
         mul.s f4, f10, f16
         add.s f6, f4, f0
         trunc.w.s f18, f6
         mfc1 v0, f18
         
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // s4
         ret                      // ra
         

    loc_0x8046f49c: // orphan
         a0 = halfword [s1 + 0]
         s0 = t7 + s4
         a2 = , unsigned  byte [s0 + 2] // s4
         a3 = , unsigned  byte [s0 + 6] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0x442f71dcfe116408, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 2] = v0
         // CODE XREF from fcn.8046e6b0 @ +0x184
         t8 = [s2 + 4]            // t9
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t8 + s4
         a2 = , unsigned  byte [s0 + 3] // s4
         a3 = , unsigned  byte [s0 + 7] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 3] = v0
         // CODE XREF from fcn.8046ef20 @ +0x518
         ra = [sp + 0x34]
         v0 = s3                  // t9
         s3 = [sp + 0x28]
         s0 = [sp + 0x1c]         // v1
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]         // s0
         s4 = [sp + 0x2c]         // t9
         s5 = [sp + 0x30]         // t9

    loc_0x8046f5a8: // orphan
         s4 = t0 << 2
         s1 = t4 + t1
         s0 = t5 + s4
         s5 = halfword [sp + 0x42]
         a2 = , unsigned  byte [s0 + 0] // s4
         a3 = , unsigned  byte [s0 + 4] // s4
         a0 = halfword [s1 + 0]
         a1 = halfword [s1 + 2]
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 0] = v0
         t6 = [s2 + 4]            // t9
         a1 = halfword [s1 + 2]
         // CODE XREF from fcn.8046e6b0 @ +0x198
         a0 = halfword [s1 + 0]
         s0 = t6 + s4
         a2 = , unsigned  byte [s0 + 1] // s4
         a3 = , unsigned  byte [s0 + 5] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         // CODE XREF from fcn.8046e6b0 @ +0x19c
         [sp + 0x10] = s5
         byte [s3 + 1] = v0
         t7 = [s2 + 4]            // t9
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t7 + s4
         a2 = , unsigned  byte [s0 + 2] // s4
         a3 = , unsigned  byte [s0 + 6] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 2] = v0
         t8 = [s2 + 4]            // t9
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t8 + s4
         a2 = , unsigned  byte [s0 + 3] // s4
         a3 = , unsigned  byte [s0 + 7] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 3] = v0
         // CODE XREF from fcn.8046f4fc @ +0xa0
         ra = [sp + 0x34]
         v0 = s3                  // t9
         s3 = [sp + 0x28]
         s0 = [sp + 0x1c]         // v1
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]         // s0
         s4 = [sp + 0x2c]         // t9
         s5 = [sp + 0x30]         // t9
         ret                      // ra
         sp += 0x38

    loc_0x8046f6e4: // orphan
         t6 = [s2 + 8]            // t9
         t7 = t6 + v1
         t8 = , unsigned  byte [t7 + 2] // s4
         byte [s3 + 2] = t8
         t9 = [s2 + 8]
         t2 = t9 + v1
         t3 = , unsigned  byte [t2 + 3] // s4
         goto 0x8046f7a4
         // CODE XREF from fcn.8046e6b0 @ +0x1a0
         byte [s3 + 3] = t3

    loc_0x8046f730: // orphan
         // CODE XREF from fcn.8046e6b0 @ +0x1ac
         [sp + 0x10] = s5
         byte [s3 + 0] = v0
         // CODE XREF from fcn.8046e6b0 @ +0x1a4
         t6 = [s2 + 8]            // t9
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t6 + s4
         a2 = , unsigned  byte [s0 + 1] // s4
         a3 = , unsigned  byte [s0 + 5] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 1] = v0
         t7 = [s2 + 8]            // t9
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t7 + s4
         a2 = , unsigned  byte [s0 + 2] // s4
         a3 = , unsigned  byte [s0 + 6] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 2] = v0
         t8 = [s2 + 8]            // t9
         // CODE XREF from fcn.8046e6b0 @ +0x1b0
         a1 = halfword [s1 + 2]
         a0 = halfword [s1 + 0]
         s0 = t8 + s4
         a2 = , unsigned  byte [s0 + 3] // s4
         a3 = , unsigned  byte [s0 + 7] // s4
         call 0x841005e0          // 0x841005e0(0xffff, 0xffff, 0xff, 0xff)
         [sp + 0x10] = s5
         byte [s3 + 3] = v0

    loc_0x8046f7a4: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f700
         ra = [sp + 0x34]
         // CODE XREF from fcn.8046e6b0 @ +0x1b4
         v0 = s3                  // t9
         s3 = [sp + 0x28]
         s0 = [sp + 0x1c]         // v1
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]         // s0
         s4 = [sp + 0x2c]         // t9
         s5 = [sp + 0x30]         // t9
         ret                      // ra
         sp += 0x38

    loc_0x8046f7cc: // orphan
         sp -= 0x40
         [sp + 0x14] = ra
         t6 = [a0 + 0x10]         // t9
         a2 = , unsigned  byte [a0 + 0x7f] // s4
         a3 = a0                  // t9
         v0 = [t6 + 4]            // t9
         v1 = 0
         t1 = a2                  // s4
         beql v0, 0, 0x8046f8ec   // unlikely
         ra = [sp + 0x14]

    loc_0x8046f7f4: // orphan
         a0 = [v0 + 0]            // t9
         a1 = v0                  // s4
         beql a0, 0, 0x8046f894   // unlikely
         v1 = [a1 + 4]            // t9

    loc_0x8046f804: // orphan
         v0 = , unsigned  byte [a0 + 2] // s4
         t0 = , unsigned  byte [a0 + 0] // s4
         // CODE XREF from fcn.8046e6b0 @ +0x1b8
         a0 = a3                  // s2
         divu 0, a2, v0
         t7 = hi
         [sp + 0x28] = t7
         t2 = t0                  // s4
         if                       // likely
         

    loc_0x8046f828: // orphan
         break 7

    loc_0x8046f82c: // orphan
         bnel v0, a2, 0x8046f850  // likely
         v0 = [a1 + 4]            // t9

    loc_0x8046f834: // orphan
         [sp + 0x38] = v1
         call 0x84100094          // 0x84100094(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x40] = a3
         // CODE XREF from fcn.8046e6b0 @ +0x1bc
         v1 = [sp + 0x38]
         goto 0x8046f894
         a3 = [sp + 0x40]         // t9

    loc_0x8046f850: // orphan
         if                       // unlikely
         

    loc_0x8046f858: // orphan
         if                       // likely
         at = 0 + 1               // lo

    loc_0x8046f860: // orphan
         t8 = [sp + 0x28]
         t9 = t8 << 2
         goto 0x8046f894
         v1 = v0 + t9

    loc_0x8046f870: // orphan
         if                       // likely
         a0 = sp + 0x34

    loc_0x8046f878: // orphan
         a2 = [sp + 0x28]
         call 0x84100710          // 0x84100710(-1, 0x442f71dcfe116408, 0xfffffffe, -1)
         [sp + 0x40] = a3
         // CODE XREF from fcn.8046e6b0 @ +0x1c0
         a3 = [sp + 0x40]         // t9
         goto 0x8046f894
         v1 = v0                  // s4

    loc_0x8046f894: // orphan
         // CODE XREFS from fcn.80456444 @ 0x8046f844, 0x8046f868, 0x8046f888
         beql v1, 0, 0x8046f8ec   // unlikely
         // CODE XREF from fcn.8046e6b0 @ +0x1c4
         ra = [sp + 0x14]

    loc_0x8046f89c: // orphan
         t3 = , unsigned  byte [a3 + 0x7c] // s4
         at = 0 + 2
         bnel t3, at, 0x8046f8cc  // likely
         t4 = , unsigned  byte [v1 + 0]

    loc_0x8046f8ac: // orphan
         a0 = , unsigned  byte [v1 + 0]
         a1 = , unsigned  byte [v1 + 1]
         a2 = , unsigned  byte [v1 + 2]
         call 0x8410a4f8          // 0x8410a4f8(0x0, 0x0, 0x0, -1)
         a3 = , unsigned  byte [v1 + 3] // s4
         goto 0x8046f8ec
         ra = [sp + 0x14]

    loc_0x8046f8cc: // orphan
         byte [a3 + 0x8b] = t4
         t5 = , unsigned  byte [v1 + 1]
         byte [a3 + 0x8c] = t5
         t6 = , unsigned  byte [v1 + 2]
         byte [a3 + 0x8d] = t6
         t7 = , unsigned  byte [v1 + 3] // s4
         byte [a3 + 0x8e] = t7
         ra = [sp + 0x14]

    loc_0x8046f8ec: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046f8c0
         sp += 0x40
         ret                      // ra
         

    loc_0x80470524: // orphan
         [sp + 0x14] = s0
         [sp + 0x30] = a2

    loc_0x804706f8: // orphan
         t8 = halfword [a1 + 0xa]
         mtc1 t8, f6
         

    loc_0x80470868: // orphan
         swc1 f16, 0x24, sp

    loc_0x804708b4: // orphan
         call 0x84100688          // 0x84100688(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s0 + 0x7f] // s4
         v1 = [s1 + 0]            // t9
         t2 = v0 << 0x10

    loc_0x80470b5c: // orphan
         a2 = [sp + 0xa8]

    loc_0x80470be8: // orphan
         cvt.s.w f10, f8

    loc_0x80470c90: // orphan
         // CODE XREF from fcn.8046e990 @ +0x1c
         a1 = [v0 + 4]            // t9

    loc_0x80470c94: // orphan
         call 0x84101a08          // 0x84101a08(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = , unsigned  byte [s0 + 0x7f] // s4
         v0 = [sp + 0x88]
         a1 = [v0 + 4]            // t9

    loc_0x80470ca4: // orphan
         a0 = s0 + 0x48
         beql a1, 0, 0x80470cc0   // unlikely
         a1 = [v0 + 8]

    loc_0x80470cb0: // orphan
         call 0x84101a08          // 0x84101a08(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = , unsigned  byte [s0 + 0x7f] // s4
         v0 = [sp + 0x88]
         a1 = [v0 + 8]            // t9

    loc_0x80470cc0: // orphan
         a0 = s0 + 0x4c
         beql a1, 0, 0x80470cd8   // unlikely
         t3 = [sp + 0x84]

    loc_0x80470ccc: // orphan
         call 0x84101a08          // 0x84101a08(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = , unsigned  byte [s0 + 0x7f] // s4
         t3 = [sp + 0x84]

    loc_0x804715ec: // orphan
         beql t7, 0, 0x80471660   // likely
         ra = [sp + 0x14]         // s0

    loc_0x804715f4: // orphan
         [sp + 0x18] = a0
         call fcn.81100074
         [sp + 0x20] = a2
         a0 = [sp + 0x18]         // t9
         if                       // unlikely
         a2 = [sp + 0x20]

    loc_0x8047160c: // orphan
         a1 = 0 + 0x4000

    loc_0x8047165c: // orphan
         ra = [sp + 0x14]         // s0

    loc_0x80471728: // orphan
         
         call 0x84100b3c          // 0x84100b3c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         goto 0x80471784
         // CODE XREF from fcn.8046e990 @ +0xb4
         

    loc_0x80471808: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ea54
         a1 = [s0 + 0x24]         // t9
         a0 = [sp + 0]
         [sp + 4] = a1
         a2 = [s0 + 0x28]         // t9
         [sp + 8] = a2

    loc_0x8047181c: // orphan
         // CODE XREF from fcn.8046e990 @ +0xc8
         lwl t0, 0x6a, s0         // t9
         lwr t0, 0x6d, s0         // t9

    loc_0x80471ebc: // orphan
         ra = [sp + 0x34]

    loc_0x80471ec0: // orphan
         v1 = halfword [v0 + 0]
         v0 = 0x8419 << 16
         if                       // unlikely
         t6 = v1 << 2

    loc_0x8047214c: // orphan
         s1 += 1

    loc_0x804721f0: // orphan
         if                       // unlikely
         t7 = v0 << 2

    loc_0x804721f8: // orphan
         t6 = [a0 + 4]            // t9

    loc_0x804721fc: // orphan
         t8 = v1 + t7
         a0 += 8
         [t8 + 0] = t6

    loc_0x80472208: // orphan
         t9 = byte [a0 + 0]       // s4
         bnel t9, 0, 0x804721f0   // likely
         v0 = halfword [a0 + 2]

    loc_0x80472384: // orphan
         a1 = , signed  a1 >> 0x10
         [sp + 0x18] = a0
         [sp + 0x14] = ra
         a0 = a1 << 0x10
         call 0x841035dc          // 0x841035dc(0xfffffe110000, 0xfffffe11, 0x8, -1)
         a0 = , signed  a0 >> 0x10

    loc_0x80472398: // orphan
         a0 = , signed  a0 >> 0x10 // t9
         a1 = 0x8419 << 16
         a2 = 0x8419 << 16
         a2 -= 0x2da0
         a1 -= 0x2dc0
         call 0x8003f84c          // 0x8003f84c(-1, 0x8418d240, 0x8418d260, -1)
         a0 = [sp + 0x18]         // t9
         call 0x8003f874          // 0x8003f874(-1, 0x8418d240, 0x8418d260, -1)
         a0 = [sp + 0x18]         // t9
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x80472444: // orphan
         at = , v0 < 0x16c        // lo
         if                       // unlikely
         a1 = a0                  // t9

    loc_0x80472450: // orphan
         t6 = 0x8419 << 16
         t6 = [t6 + 0x74]         // t9

    loc_0x80472654: // orphan
         a3 = halfword [sp + 0x6a]
         a2 = halfword [sp + 0x66]
         a1 = halfword [sp + 0x62]
         a0 = sp + 0x20
         call 0x8410383c          // 0x8410383c(0x178020, 0x0, 0x0, 0x0)
         swc1 f12, 0x10, sp

    loc_0x80472668: // orphan
         swc1 f12, 0x10, sp

    loc_0x8047266c: // orphan
         call 0x841037a0          // 0x841037a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x20
         ra = [sp + 0x1c]         // v1
         sp += 0x60
         ret                      // v1
         

    loc_0x804726d4: // orphan
         v1 = , unsigned  halfword [sp + 0x4a]
         [sp + 0x40] = a2
         a2 = 0x8008 << 16
         a2 += 0x7e50
         v0 = , signed  v0 >> 4

    loc_0x804729d4: // orphan
         v0 = , signed  v0 >> 4
         v1 = , signed  v1 >> 4
         v0 <<= 2
         v1 <<= 2
         t6 = a2 + v0

    loc_0x80472ca8: // orphan
         at += v0
         mul.s f6, f4, f0
         lwc1 f2, -0x71b0, at
         lwc1 f8
         lwc1 f12, 0x14, sp
         mtc1 0, f16
         mul.s f10, f8, f2
         neg.s f14, f0
         at = 0x3f80 << 16
         add.s f18, f6, f10
         mul.s f4, f18, f12
         swc1 f4
         lwc1 f8, 0x14, a1
         lwc1 f10, 0x10, a1
         mul.s f6, f8, f0

    loc_0x80472ce4: // orphan
         
         mul.s f18, f10, f2
         add.s f4, f6, f18
         mul.s f8, f4, f12
         swc1 f8, 4, a0

    loc_0x80473200: // orphan
         // CODE XREF from fcn.8046ea80 @ 0x8046eb7c
         call 0x84103ea8          // 0x84103ea8(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t8
         call 0x841037a0          // 0x841037a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = sp + 0x20
         ra = [sp + 0x1c]         // v1

    loc_0x8047328c: // orphan
         // CODE XREF from fcn.8046ea80 @ 0x8046eb88
         
         sp -= 0x60
         [sp + 0x1c] = ra
         [sp + 0x60] = a0
         [sp + 0x64] = a1
         [sp + 0x68] = a2
         [sp + 0x6c] = a3

    loc_0x804732a8: // orphan
         t6 = sp + 0x64
         t8 = [t6 + 0]
         a1 = [sp + 0x60]
         lwc1 f4, 0x70, sp
         [sp + 8] = t8
         a3 = [t6 + 4]
         a2 = [sp + 8]
         a0 = sp + 0x20
         [sp + 0xc] = a3

    loc_0x804734e0: // orphan
         // CODE XREF from fcn.8046ea80 @ 0x8046ebac
         a0 = 0x8419 << 16

    loc_0x804734e4: // orphan
         a0 -= 0x73f0
         call 0x84105ca0          // 0x84105ca0(0xffff8c0f, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a1
         a1 = [sp + 0x18]

    loc_0x804734f4: // orphan
         t7 = , unsigned  byte [a1 + 2]
         [a1 + 0x168] = 0
         a0 = a1                  // t0
         t8 = t7 & 0xfffd
         call 0x8003f1dc          // 0x8003f1dc(0x442f71dcfe116408, 0x442f71dcfe116408, 0x8, -1)
         byte [a1 + 2] = t8
         ra = [sp + 0x14]
         sp += 0x20

    loc_0x80473514: // orphan
         // CODE XREF from fcn.8046ea80 @ 0x8046ebb0
         ret                      // ra
         

    loc_0x80473534: // orphan
         a0 = a1                  // t0
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804736e4: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ebd0
         t9 = v1 + t8
         lwc1 f4
         swc1 f4, 0x38, s0
         t0 = [a2 + 0x10]         // t9
         t1 = [t0 + 0x10]         // t9
         t2 = halfword [t1 + 2]
         unsigned , hi
         t3 = lo
         t4 = v1 + t3
         lwc1 f6, 4, t4
         swc1 f6, 0x3c, s0
         t5 = [a2 + 0x10]         // t9
         t6 = [t5 + 0x10]         // t9
         t7 = halfword [t6 + 2]
         unsigned , hi
         t8 = lo
         t9 = v1 + t8
         lwc1 f8, 8, t9
         goto 0x804739a4          // fcn.80473800+0x1a4
         swc1 f8, 0x40, s0

    loc_0x80473738: // orphan
         [sp + 0x28] = a0
         a1 = 0x100 << 16
         call fcn.81100054        // "P@" fcn.80473748 // fcn.81100054(-1)
         [sp + 0x34] = a2

    loc_0x80473770: // orphan
         call fcn.81100054        // fcn.81100054(-1)
         // CODE XREF from fcn.80456444 @ 0x8046ebdc
         a1 = 0x400 << 16

    loc_0x8047389c: // orphan
         a0 = [s0 + 8]            // t9
         swc1 f0, 0x3c, s0

    loc_0x804739b4: // orphan
         s0 = [sp + 0x18]
         sp += 0x38
         ret                      // ra
         

    loc_0x804739f4: // orphan
         [v0 + 0x14] = s0
         [s0 + 0xc] = v0
         t8 = [sp + 0x48]
         a0 = s2 + 4
         a1 = 0 + 1               // lo
         byte [s0 + 0x7e] = t8
         call fcn.81100054        // fcn.81100054(0x3)
         [sp + 0x30] = a0
         if                       // unlikely
         

    loc_0x80473a1c: // orphan
         t9 = [s2 + 0x14]
         a0 = s0 + 0x38
         t0 = halfword [t9 + 6]
         mtc1 t0, f4
         
         cvt.s.w f4, f4

    loc_0x80473a34: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ec00
         mfc1 a1, f4
         call 0x84105930          // 0x84105930(-1, 0x442f71dcfe116408, 0x8, -1)
         
         goto 0x80473a54
         lwc1 f6, 0x38, s0

    loc_0x80473a48: // orphan
         call 0x84104a00          // 0x84104a00(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         lwc1 f6, 0x38, s0

    loc_0x80473a54: // orphan
         // CODE XREF from fcn.80456444 @ 0x80473a40
         lwc1 f8, 0x2c, s0
         lwc1 f16, 0x44, s0
         lwc1 f4, 0x50, s0
         add.s f10, f6, f8
         a0 = s2 + 8
         a1 = 0 + 0x10
         add.s f18, f10, f16
         add.s f6, f18, f4
         swc1 f6, 0x24, s1

    loc_0x80473a78: // orphan
         // CODE XREF from fcn.8046ea80 @ 0x8046ec04
         lwc1 f10, 0x30, s0
         lwc1 f8, 0x3c, s0
         lwc1 f18, 0x48, s0
         lwc1 f6, 0x54, s0
         add.s f16, f8, f10
         add.s f4, f16, f18
         add.s f8, f4, f6
         swc1 f8, 0x28, s1
         lwc1 f16, 0x34, s0
         lwc1 f10, 0x40, s0
         lwc1 f4, 0x4c, s0
         lwc1 f8, 0x58, s0
         add.s f18, f10, f16
         add.s f6, f18, f4
         add.s f10, f6, f8
         swc1 f10, 0x2c, s1
         call fcn.81100054        // fcn.81100054(-1)
         // CODE XREF from fcn.80456444 @ 0x8046ec08
         [sp + 0x2c] = a0
         if                       // unlikely
         a1 = s2

    loc_0x80473ac8: // orphan
         lwc1 f16, 0x38, s0
         lwc1 f18, 0x2c, s0
         v0 = 0x8419 << 16
         v0 += 0x20
         add.s f4, f16, f18
         swc1 f4
         lwc1 f8, 0x30, s0
         lwc1 f6, 0x3c, s0
         add.s f10, f6, f8
         swc1 f10, 4, v0
         lwc1 f18, 0x34, s0
         lwc1 f16, 0x40, s0

    loc_0x80473af8: // orphan
         add.s f4, f16, f18
         swc1 f4, 8, v0

    loc_0x80473b00: // orphan
         call 0x84102750          // 0x84102750(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0xc]          // s4
         t1 = [s2 + 0x14]         // t9

    loc_0x80473ba0: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ec0c
         a1 = halfword [t1 + 2]
         a0 = [sp + 0x30]

    loc_0x80473ba8: // orphan
         // CODE XREF from fcn.80473944 @ +0x248
         call fcn.81100054        // "P@" // fcn.81100054(-1)
         a1 = 0 | 0x8000
         beql v0, 0, 0x80473bc4   // unlikely
         // CODE XREF from fcn.8046ea80 @ 0x8046ec10
         t2 = , unsigned  byte [s0 + 0x87] // s4

    loc_0x80473bc8: // orphan
         // CODE XREF from fcn.80456444 @ 0x8046ec14
         ra = [sp + 0x24]         // s0
         v0 = s1
         s1 = [sp + 0x1c]         // v1
         s0 = [sp + 0x18]
         s2 = [sp + 0x20]         // a2
         // CODE XREF from fcn.80456444 @ 0x8046ec18
         ret                      // s0
         sp += 0x40

    loc_0x80473e64: // orphan
         
         sp -= 0x18
         [sp + 0x18] = a0
         a0 &= 0xffff

    loc_0x804742c8: // orphan
         at = , unsigned  , a1 < 5
         [sp + 0x2c] = ra
         [sp + 0x28] = s1
         [sp + 0x24] = s0
         [sp + 0x58] = a0

    loc_0x804742dc: // orphan
         if                       // unlikely
         a3 = [a3 + 0x4908]       // t9

    loc_0x804742e4: // orphan
         t6 = a1 << 2
         at = 0x8419 << 16
         at += t6
         t6 = [at - 0x73d0]       // t9
         goto t6                  // t9
         

    loc_0x80474300: // orphan
         a0 = 0 + 0x5be0
         at = 0x8419 << 16
         [at + 0x74] = v0
         at = 0x8419 << 16
         goto 0x80474488
         [at + 0x70] = 0

    loc_0x804744b4: // orphan
         at = 0 + 5

    loc_0x804745ec: // orphan
         lwc1 f16, 0x44, v0
         mul.s f6, f12, f18
         add.s f4, f16, f6
         swc1 f4, 4, a0
         v0 = [v1 + 0]

    loc_0x80474694: // orphan
         ret                      // ra
         

    loc_0x80474708: // orphan
         lwc1 f10, 0xac, v0
         sub.s f2, f4, f6
         lwc1 f4, 0xb0, v0
         lwc1 f8, 0xb8, v0
         sub.s f16, f18, f4
         mul.s f6, f2, f2
         swc1 f2, 0x24, sp
         sub.s f14, f8, f10
         mul.s f8, f16, f16
         swc1 f16, 0x1c, sp
         add.s f0, f6, f8
         call 0x8000b3b0          // 0x8000b3b0(-1, 0x442f71dcfe116408, 0x8, -1)
         sqrt.s f12, f0
         t6 = [sp + 0x28]
         halfword [t6 + 0] = v0
         lwc1 f14, 0x24, sp
         call 0x8000b3b0          // 0x8000b3b0(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x1c, sp

    loc_0x804747d0: // orphan
         halfword [a1 + 0] = t9
         t6 = 0x8419 << 16
         t6 = [t6 + 0x114]        // t9
         t7 = halfword [t6 + 0x78]
         ret                      // ra
         halfword [a0 + 0] = t7

    loc_0x804749cc: // orphan
         sp += 0x18
         a2 = 0x8419 << 16

    loc_0x80474a78: // orphan
         t6 = 0 + 1               // lo
         byte [v0 + 8] = 0

    loc_0x80474b14: // orphan
         ra = [sp + 0x24]         // s0
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]         // v1
         s2 = [sp + 0x20]         // a2
         ret                      // s0
         sp += 0x28

    loc_0x80474e90: // orphan
         t2 = , unsigned  halfword [sp + 0x2a]
         a2 = 0x8008 << 16
         a0 = , unsigned  halfword [v1 + 0x6c]
         a1 = , unsigned  halfword [v1 + 0x6a]
         t3 = v0 + t2

    loc_0x80474ea4: // orphan
         mtc1 t3, f4
         a3 = 0x8009 << 16
         a0 = , signed  a0 >> 4   // t9
         a1 = , signed  a1 >> 4
         a3 -= 0x71b0

    loc_0x80474fc8: // orphan
         at = 0 + 5
         bnel a1, at, 0x80475058  // loc.80475054+0x4 // likely
         ra = [sp + 0x1c]         // v1

    loc_0x80474fd4: // orphan
         call fcn.81100094
         a0 = , unsigned  halfword [sp + 0x28]
         t8 = , unsigned  halfword [sp + 0x2a]
         a2 = 0x8008 << 16
         a3 = 0x8009 << 16
         t9 = v0 + t8
         mtc1 t9, f4
         a3 -= 0x71b0
         a2 += 0x7e50
         v1 = [sp + 0x30]
         if                       // likely
         cvt.s.w f0, f4

    loc_0x80475000: // orphan
         cvt.s.w f0, f4

    loc_0x80475004: // orphan
         at = 0x4f80 << 16
         mtc1 at, f16
         
         add.s f0, f0, f16

    loc_0x80475014: // orphan
         t0 = , unsigned  halfword [v1 + 0x6a]
         mtc1 0, f4

    loc_0x804750c0: // orphan
         halfword [s0 + 2] = t9
         call 0x84105e9c          // 0x84105e9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [sp + 0x2c]
         t0 = halfword [s0 + 4]
         t1 = t0 + v0             // s4
         goto 0x804751bc
         halfword [s0 + 4] = t1

    loc_0x804750e8: // orphan
         call 0x84105e9c          // 0x84105e9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  halfword [sp + 0x28]
         t2 = halfword [s0 + 0]
         a0 = 0 + 1               // lo
         t3 = t2 + v0
         halfword [s0 + 0] = t3
         call 0x84105e9c          // 0x84105e9c(0x1, 0xfe11, 0x8, -1)
         a1 = , unsigned  halfword [sp + 0x2a]
         t4 = halfword [s0 + 2]
         a0 = 0 + 1               // lo
         t5 = t4 + v0
         halfword [s0 + 2] = t5
         call 0x84105e9c          // 0x84105e9c(0x1, 0x7dbd, 0x8, -1)
         a1 = , unsigned  halfword [sp + 0x2c]
         t6 = halfword [s0 + 4]   // s4
         t7 = t6 + v0
         goto 0x804751bc
         halfword [s0 + 4] = t7

    loc_0x804751bc: // orphan
         // CODE XREFS from fcn.80456444 @ 0x804750d4, 0x80475128
         ra = [sp + 0x1c]         // v1
         s0 = [sp + 0x18]
         sp += 0x20
         ret                      // v1
         

    loc_0x8047521c: // orphan
         v1 <<= 0x10
         ret                      // ra
         v0 = , signed  v1 >> 0x10

    loc_0x80475348: // orphan
         s5 = 0
         s1 = 0
         s3 = 0x40 << 16
         s4 = 0 + 0x12c

    loc_0x80475358: // orphan
         t6 = byte [s0 + 0x98]    // s4
         beql t6, 0, 0x804753c8   // unlikely
         s1 += 1

    loc_0x80475364: // orphan
         v1 = [s0 + 0x10]
         if                       // unlikely
         a0 = v1 + 4

    loc_0x80475370: // orphan
         call fcn.81100054        // fcn.81100054(-1)
         a1 = s3                  // t9
         if                       // unlikely
         a0 = s0

    loc_0x80475380: // orphan
         call 0x84100054          // 0x84100054(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         if                       // unlikely
         a0 = s2

    loc_0x80475390: // orphan
         a0 = s2
         call 0x84100054          // "P@" // 0x84100054(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         beql v0, 0, 0x804753c8   // unlikely
         s1 += 1

    loc_0x804753a4: // orphan
         goto 0x804753d0
         s5 = s0

    loc_0x804753ac: // orphan
         call 0x84100074          // "P@" // 0x84100074(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 2
         beql v0, 0, 0x804753c8   // unlikely
         s1 += 1

    loc_0x804753bc: // orphan
         goto 0x804753d0
         s5 = s0

    loc_0x804753c4: // orphan
         s1 += 1

    loc_0x804753c8: // orphan
         if                       // likely
         s0 += 0x9c

    loc_0x804753d0: // orphan
         // CODE XREFS from fcn.80456444 @ 0x804753a4, 0x804753bc
         beql s5, 0, 0x8047540c   // unlikely
         ra = [sp + 0x2c]

    loc_0x804753d8: // orphan
         lwc1 f4, 0x2c, s2
         lwc1 f6, 0x20, s5
         lwc1 f10, 0x30, s2
         add.s f8, f4, f6
         lwc1 f4, 0x34, s2
         swc1 f8, 0x2c, s2
         lwc1 f16, 0x24, s5
         add.s f18, f10, f16
         swc1 f18, 0x30, s2
         lwc1 f6, 0x28, s5
         add.s f8, f4, f6
         swc1 f8, 0x34, s2
         ra = [sp + 0x2c]

    loc_0x8047540c: // orphan
         s0 = [sp + 0x14]         // ra
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // v1
         s3 = [sp + 0x20]         // a2
         s4 = [sp + 0x24]         // s0
         s5 = [sp + 0x28]
         ret                      // ra
         sp += 0x30

    loc_0x80476474: // orphan
         s3 = [sp + 0x38]         // v1
         ret                      // ra
         sp += 0x40

    loc_0x8047648c: // orphan
         call 0x84100328          // 0x84100328(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = a0
         if                       // likely
         a0 = [sp + 0x18]         // t9

    loc_0x8047649c: // orphan
         goto 0x804764b8
         v0 = 0

    loc_0x804764a4: // orphan
         // CODE XREF from fcn.80456444 @ 0x80476494
         t7 = , unsigned  byte [a0 + 9] // s4
         byte [v0 + 0x7c] = t7
         t8 = [a0 + 0]            // t9
         [v0 + 0x10] = t8
         v0 = 0

    loc_0x804764b8: // orphan
         // CODE XREFS from fcn.80456444 @ 0x80476484, 0x8047649c
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804764f0: // orphan
         goto 0x80476538
         v0 = 0 - 1               // s2

    loc_0x80476504: // orphan
         call 0x81100020          // 0x81100020(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x1c] = a2
         a0 = [sp + 0x18]         // t9
         call 0x81100020          // 0x81100020(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0x20            // k0
         v0 = [sp + 0x20]         // a2
         a0 = [sp + 0x1c]         // a2
         t8 = [v0 + 0]            // t9
         [a0 + 0x10] = t8
         t9 = , unsigned  byte [v0 + 9] // s4
         call 0x84104f54          // 0x84104f54(0x8, 0x20, 0x8, -1)
         byte [a0 + 0x7c] = t9
         v0 = 0

    loc_0x80476538: // orphan
         // CODE XREFS from fcn.80456444 @ 0x17c, 0x804764f0
         ra = [sp + 0x14]
         sp += 0x20
         ret                      // ra
         

    loc_0x80476610: // orphan
         [v0 + 0x10] = t8
         v0 = 0
         // CODE XREFS from fcn.8047635c @ +0x288, +0x2a0
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804766bc: // orphan
         call 0x841072bc          // 0x841072bc(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0 + 1               // lo
         goto 0x804767e4
         ra = [sp + 0x24]         // s0

    loc_0x804767c4: // orphan
         [sp + 0x28] = a3
         v0 = [sp + 0x2c]         // ra
         v1 = halfword [sp + 0x32]
         a3 = [sp + 0x28]         // t9

    loc_0x804767d4: // orphan
         // CODE XREF from fcn.8047635c @ +0x450
         v0 += 0x10

    loc_0x804768dc: // orphan
         a0 = s0
         goto 0x804768f4          // fcn.804768c4+0x30
         v0 = byte [s0 + 7]

    loc_0x80476900: // orphan
         t1 = byte [s0 + 6]

    loc_0x80476968: // orphan
         
         
         at = 0x8419 << 16
         ret                      // ra
         [at + 0x170] = 0

    loc_0x8047697c: // orphan
         v0 = 0x8419 << 16
         at = 0x8419 << 16
         v0 += 0x170
         [at + 0x178] = 0
         t6 = [v0 + 0]
         t7 = t6 + 4
         ret                      // ra
         [v0 + 0] = t7

    loc_0x80476c28: // orphan
         t3 = [v1 + 0]
         byte [t3 + 9] = t2
         t5 = [v1 + 0]
         t4 = halfword [t4 - 0x5dec]
         halfword [t5 + 0xa] = t4
         // CODE XREF from fcn.804768c4 @ +0x324
         t6 = [v0 + 0]            // t9
         ra = [sp + 0x14]
         sp += 0x20
         t7 = t6 + 8
         ret                      // ra
         [v0 + 0] = t7

    loc_0x80476d34: // orphan
         [v0 + 0] = 0

    loc_0x80476e1c: // orphan
         [v0 + 0] = t4
         v0 = 0x8419 << 16
         v0 = [v0 + 0x170]
         sp -= 0x20
         [sp + 0x14] = ra

    loc_0x80476e30: // orphan
         call 0x80003240          // 0x80003240(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 4]
         call 0x84105dd0          // 0x84105dd0(0xff00fe00, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = v0
         v1 = 0x8419 << 16
         v1 += 0x174
         [v1 + 0] = v0
         a0 = [sp + 0x18]         // s4
         if                       // likely
         a1 = v0                  // s4

    loc_0x80476e68: // orphan
         // CODE XREF from fcn.80456444 @ 0x80476e50
         [a1 + 0] = a0
         t7 = [v1 + 0]
         t6 = [a0 + 0]            // t9

    loc_0x80476e74: // orphan
         t9 = 0 + 1               // lo

    loc_0x80476e78: // orphan
         t1 = 0 + 8               // a2
         byte [t7 + 4] = t6
         t8 = [v1 + 0]
         v0 = 0x8419 << 16
         v0 += 0x170

    loc_0x80476e8c: // orphan
         byte [t8 + 5] = 0
         t0 = [v1 + 0]
         byte [t0 + 7] = t9

    loc_0x80476ec8: // orphan
         call 0x80003240          // 0x80003240(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 4]
         call 0x84105dd0          // 0x84105dd0(0xff00fe00, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x18] = v0
         v1 = 0x8419 << 16
         v1 += 0x174
         [v1 + 0] = v0
         a0 = [sp + 0x18]         // s4
         if                       // likely
         a1 = v0                  // s4

    loc_0x80476ef0: // orphan
         v0 = 0x8419 << 16
         v0 += 0x170
         goto 0x80476f38
         [v0 + 0] = 0

    loc_0x80477cf4: // orphan
         

    loc_0x80477e64: // orphan
         a0 = 0x8419 << 16

    loc_0x80477e68: // orphan
         v0 = 0x8419 << 16
         byte [at + 0x1b4] = 0
         v0 += 0x200
         a0 += 0x1e0
         v1 += 0x1c0

    loc_0x80477f80: // orphan
         v0 = [s0 + 0]
         beql v0, 0, 0x80477fa8   // unlikely
         s0 += 4

    loc_0x80477f8c: // orphan
         call v0                  // s4 // s4(-1, 0x442f71dcfe116408, 0x8, -1)
         
         if                       // unlikely
         t6 = s2 + s1

    loc_0x80477f9c: // orphan
         [s0 + 0] = 0
         [t6 + 0] = 0

    loc_0x80477fa4: // orphan
         s0 += 4

    loc_0x80477fa8: // orphan
         if                       // likely
         s1 += 4

    loc_0x80477fb0: // orphan
         ra = [sp + 0x24]         // s0
         s0 = [sp + 0x14]         // ra
         s1 = [sp + 0x18]         // s4
         s2 = [sp + 0x1c]         // a2
         s3 = [sp + 0x20]         // a2
         ret                      // s0
         sp += 0x28

    loc_0x8047802c: // orphan
         a0 = 0x8419 << 16
         v0 = 0x8419 << 16
         byte [at + 0x1b4] = 0
         v0 += 0x200
         a0 += 0x1e0

    loc_0x80478040: // orphan
         v1 += 0x1c0

    loc_0x80478044: // orphan
         a0 += 0x10
         [v1 + 4] = 0
         [a0 - 0xc] = 0
         [v1 + 8] = 0

    loc_0x80478054: // orphan
         [a0 - 8] = 0
         [v1 + 0xc] = 0
         [a0 - 4] = 0
         v1 += 0x10
         [v1 - 0x10] = 0
         if                       // likely
         [a0 - 0x10] = 0

    loc_0x80478070: // orphan
         ret                      // ra
         

    loc_0x804780d8: // orphan
         call 0x84156820          // 0x84156820(-1, 0x442f71dcfe116408, 0x8, -1)
         [at + 0x1b0] = 0
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804781d4: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         a0 = 0x8419 << 16
         call 0x8411ee54          // 0x8411ee54(0x84190000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x198]        // t9
         mtc1 v0, f4
         at = 0x4f80 << 16
         if                       // likely
         cvt.s.w f6, f4

    loc_0x804781f8: // orphan
         mtc1 at, f8
         
         add.s f6, f6, f8

    loc_0x80478204: // orphan
         at = 0x8419 << 16
         lwc1 f10, -0x71dc, at
         ra = [sp + 0x14]
         sp += 0x18
         mul.s f0, f6, f10
         ret                      // ra
         

    loc_0x80478260: // orphan
         mul.s f0, f6, f10
         ret                      // ra
         

    loc_0x804782dc: // orphan
         t7 = , signed  t6 >> 0x18 // t9
         mtc1 t7, f4
         a0 = [sp + 0x40]         // a2
         cvt.s.w f6, f4
         call 0x8411ee64          // 0x8411ee64(0x8, 0x442f71dcfe116408, 0x8, -1)
         swc1 f6, 0x34, sp
         t8 = v0 << 0x18
         t9 = , signed  t8 >> 0x18
         mtc1 t9, f8
         a0 = [sp + 0x40]         // a2
         cvt.s.w f10, f8
         call 0x8411ee6c          // 0x8411ee6c(0x8, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10, 0x38, sp
         t0 = v0 << 0x18
         t1 = , signed  t0 >> 0x18 // t9
         mtc1 t1, f16
         t2 = sp + 0x34
         t5 = [sp + 0x40]         // a2
         cvt.s.w f18, f16
         a0 = sp + 0x28
         swc1 f18, 0x3c, sp
         t4 = [t2 + 0]            // a2
         [sp + 4] = t4
         a2 = [t2 + 4]            // v1
         a1 = [sp + 4]            // a2

    loc_0x80478418: // orphan
         [sp + 0x14] = ra
         a0 = 0x8419 << 16
         call 0x8411e21c          // 0x8411e21c(0x84190000, 0x442f71dcfe116408, 0x8, -1)
         a0 = [a0 + 0x198]        // t9
         a0 = 0x8419 << 16
         a1 = v0 << 0x10
         a1 = , signed  a1 >> 0x10 // s4
         a0 = [a0 + 0x198]        // t9
         call 0x8003c9b8          // 0x8003c9b8(-1, 0xff, 0x8, -1)
         a2 = [sp + 0x18]         // s4
         if                       // likely
         a0 = 0x8419 << 16

    loc_0x80478448: // orphan
         a0 = [a0 + 0x198]        // t9
         call 0x8411dccc          // 0x8411dccc(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0x18]         // s4

    loc_0x80478454: // orphan
         a0 = 0x8419 << 16
         a0 = [a0 + 0x198]        // t9
         call 0x84109630          // 0x84109630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0x18]         // s4
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x804784f4: // orphan
         a0 = 0x8419 << 16
         a0 = [a0 + 0x194]        // t9
         call 0x84109630          // 0x84109630(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = [sp + 0x18]         // s4
         ra = [sp + 0x14]

    loc_0x80478508: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x80478580: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x8047866c: // orphan
         mtc1 at, f2
         goto 0x80478694
         swc1 f2, 4, s1

    loc_0x80478694: // orphan
         // CODE XREF from fcn.80456444 @ 0x80478670
         ra = [sp + 0x1c]         // a2
         s0 = [sp + 0x14]         // ra
         s1 = [sp + 0x18]         // s4

    loc_0x804786a0: // orphan
         ret                      // ra

}

*/
