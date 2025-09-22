/*
 * Function: 0x801b200c
 * Category: math
 */

// Decompiled C code
int fcn.801c9fec (int esi, int edx) {
}

/*
// Full radare2 output
int fcn.801c9fec (int esi, int edx) {
    loc_0x801af0f0:
        ret           // ra
        mov.d f0, f2
         // (break)
    loc_0x801af25c: // orphan
             t7 = halfword [a2 + 0]
             t8 = t6 - t7
             halfword [a0 + 0] = t8   // arg1
             t0 = halfword [a2 + 2]
             t9 = halfword [a1 + 2]
             t1 = t9 - t0
             ret                      // ra
             halfword [a0 + 2] = t1   // arg1

    loc_0x801af648: // orphan
         a2 = halfword [a1 + 2]
         t1 = v0 + t0
         v1 = , t1 < a2
         if                       // unlikely
         

    loc_0x801af65c: // orphan
         t2 = halfword [a1 + 6]
         t3 = a2 + t2             // arg3
         v1 = , t3 < v0

    loc_0x801af668: // orphan
         // CODE XREFS from fcn.801c9fec @ 0x2b8, 0x2cc, 0x801af654
         ret                      // ra
         v0 = v1

    loc_0x801af794: // orphan
         [sp + 0x10] = 0
         a0 = 0x8180 << 16
         a0 += 0x5fe0             // arg1
         a1 = 0
         a2 = 0
         a3 = 0
         call 0x81801a10          // 0x81801a10(0x81805fe0, 0x0, 0x0, 0x0)
         [sp + 0x10] = 0
         goto 0x801af808
         ra = [sp + 0x2c]

    loc_0x801af808: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801af7b4
         s0 = [sp + 0x20]
         s1 = [sp + 0x24]
         s2 = [sp + 0x28]
         ret                      // ra
         sp += 0x40

    loc_0x801afa20: // orphan
         a0 = [s4 + 0]            // t9
         t0 = 0xe200 << 16
         t1 = 0xf0a << 16
         t9 = a0 + 8              // arg1
         [s4 + 0] = t9
         t1 |= 0x4000
         t0 |= 0x1c
         [a0 + 0] = t0            // arg1
         [a0 + 4] = t1            // arg1
         a0 = [s4 + 0]
         t3 = 0xfb00 << 16
         t5 = s0 << 0x18
         t2 = a0 + 8              // arg1
         [s4 + 0] = t2
         [a0 + 0] = t3            // arg1
         t7 = , unsigned  byte [sp + 0x43]
         t1 = , unsigned  byte [sp + 0x47]
         s3 = 0x8180 << 16
         t8 = t7 << 0x10
         t9 = t5 | t8
         t2 = t1 << 8
         t3 = t9 | t2
         t4 = t3 | 0xff
         s3 += 0x5930
         [a0 + 4] = t4            // arg1
         v1 = [s3 + 0]            // t9
         s1 = v0                  // s4
         s2 = halfword [v1 + 0]
         t6 = halfword [v1 + 4]
         at = , s2 < t6
         beql at, 0, 0x801afb0c   // likely
         a0 = [s4 + 0]

    loc_0x801afaa0: // orphan
         s0 = halfword [v1 + 2]

    loc_0x801afaa4: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801afb00
         t7 = halfword [v1 + 6]
         at = , s0 < t7           // lo
         if                       // unlikely
         a0 = s2

    loc_0x801afab4: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801afae0
         a1 = s0
         a2 = s1
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(-1, 0x104, 0x442f71dcfe117dbd, 0x0)
         [sp + 0x10] = 0
         call 0x8004ca24          // 0x8004ca24(-1, 0x104, 0x442f71dcfe117dbd, 0x0)
         a0 = s1
         t5 = [s3 + 0]
         s0 += v0
         t8 = halfword [t5 + 6]
         at = , s0 < t8           // lo
         bnel at, 0, 0x801afab4   // likely
         a0 = s2

    loc_0x801afae8: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801afaac
         call 0x8004ca10          // 0x8004ca10(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         v1 = [s3 + 0]
         s2 += v0                 // t3
         t0 = halfword [v1 + 4]
         at = , s2 < t0           // lo
         bnel at, 0, 0x801afaa4   // likely
         s0 = halfword [v1 + 2]

    loc_0x801afb08: // orphan
         a0 = [s4 + 0]

    loc_0x801afb0c: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801afa98
         t2 = 0x8009 << 16
         t2 += 0x4f50
         t1 = a0 + 8              // arg1
         [s4 + 0] = t1
         t9 = 0xde00 << 16
         [a0 + 0] = t9            // arg1
         [a0 + 4] = t2            // arg1
         ra = [sp + 0x34]
         s4 = [sp + 0x30]
         s3 = [sp + 0x2c]
         s2 = [sp + 0x28]
         s1 = [sp + 0x24]
         s0 = [sp + 0x20]
         ret
         sp += 0x38

    loc_0x801afba0: // orphan
         v1 = 0x8180 << 16
         v1 += 0x5d44
         if                       // unlikely
         

    loc_0x801afbb0: // orphan
         a3 = halfword [a0 + 2]
         a0 = 0x8180 << 16
         a0 += 0x5ff0             // arg1
         if                       // unlikely
         

    loc_0x801afbc4: // orphan
         call 0x8004c8a0          // 0x8004c8a0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 0xff            // s4
         goto 0x801afbd4
         v1 = v0                  // s4

    loc_0x801afbd4: // orphan
         // CODE XREFS from fcn.801c9fec @ 0x801afba8, 0x801afbbc, 0x801afbcc
         ra = [sp + 0x14]
         sp += 0x18
         v0 = v1
         ret
         

    loc_0x801afe10: // orphan
         // CODE XREF from fcn.801af36c @ +0x988
         ret                      // ra
         

    loc_0x801aff1c: // orphan
         
         t0 &= 0x78               // a2
         if                       // likely
         

    loc_0x801aff2c: // orphan
         mfc1 t0, f16
         at = 0x8000 << 16
         goto 0x801aff54
         t0 |= at

    loc_0x801aff3c: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801aff24
         // CODE XREF from fcn.801afecc @ 0x801aff4c
         goto 0x801aff54
         t0 = 0 - 1               // s2

    loc_0x801aff54: // orphan
         // CODE XREFS from fcn.801c9fec @ 0x801aff34, 0x801aff3c
         t3 = , unsigned  byte [a0 + 4] // arg1
         t7 = , unsigned  byte [a0 + 5] // arg1
         t2 = , unsigned  byte [a0 + 6] // arg1
         t1 = t0 & 0xff           // a2
         t4 = t3 << 0x18
         ctc1 t9, 31
         t5 = t1 | t4

    loc_0x801b0028: // orphan
         // CODE XREFS from fcn.801aff70 @ 0x801b000c, 0x801b0034
         goto 0x801b003c
         t8 = 0 - 1               // s2

    loc_0x801b00e4: // orphan
         mtc1 t9, f4
         a2 = , unsigned  byte [s0 + 5] // s4
         a3 = , unsigned  byte [s0 + 6] // s4
         if                       // likely
         cvt.s.w f8, f4

    loc_0x801b00f8: // orphan
         at = 0x4f80 << 16
         mtc1 at, f6
         
         add.s f8, f8, f6

    loc_0x801b0108: // orphan
         // CODE XREF from fcn.801c9fec @ 0x801b00f0
         lwc1 f10, 0x2c, sp
         mul.s f16, f8, f10
         trunc.w.s f18, f16
         mfc1 t1, f18
         call 0x80049828          // 0x80049828(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t1
         ra = [sp + 0x24]
         s0 = [sp + 0x20]
         sp += 0x28
         ret
         

    loc_0x801b0f98: // orphan
         t2 = hi
         t3 = t2 << 2
         t4 = s0 + t3
         t0 = s0 + t9
         mfc1 a2, f12
         a0 = [t0 + 0x14]         // t9
         if                       // likely
         

    loc_0x801b0fb8: // orphan
         break 7

    loc_0x801b0fbc: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801b0fc8: // orphan
         if                       // likely
         

    loc_0x801b0fd0: // orphan
         break 6

    loc_0x801b0fd4: // orphan
         a1 = [t4 + 0x14]         // t9
         call 0x81802754          // 0x81802754(-1, -1, 0x8, -1)
         
         goto 0x801b0ffc
         

    loc_0x801b0ffc: // orphan
         call 0x8180351c          // 0x8180351c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0 + 8
         call 0x818021b4          // 0x818021b4(0x10c, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         t7 = [sp + 0x24]
         t9 = halfword [s0 + 4]
         t1 = halfword [s0 + 6]
         t8 = halfword [t7 + 0]
         t0 = halfword [t7 + 2]
         a2 = [s0 + 8]            // t9
         a3 = v0                  // s4
         a0 = t8 + t9
         call 0x800495f8          // 0x800495f8(0x1fffe, 0x442f71dcfe116408, -1, 0xff)
         a1 = t0 + t1
         ra = [sp + 0x1c]
         s0 = [sp + 0x18]
         sp += 0x20
         ret
         

    loc_0x801b12b8: // orphan
         div 0, t2, v1
         t3 = lo
         mtc1 t3, f4
         cvt.s.w f10, f10
         mfc1 a2, f8
         cvt.s.w f14, f6
         mfc1 a3, f10
         if                       // likely
         

    loc_0x801b12dc: // orphan
         break 7

    loc_0x801b12e0: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801b12ec: // orphan
         if                       // likely
         

    loc_0x801b12f4: // orphan
         break 6

    loc_0x801b12f8: // orphan
         cvt.s.w f6, f4
         if                       // likely
         

    loc_0x801b1304: // orphan
         break 7

    loc_0x801b1308: // orphan
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x801b1314: // orphan
         if                       // likely
         

    loc_0x801b131c: // orphan
         break 6

    loc_0x801b1320: // orphan
         swc1 f6, 0x1c, sp
         call 0x81800020          // 0x81800020(-1, 0x442f71dcfe116408, 0x8, -1)
         
         ra = [sp + 0x24]
         sp += 0x28
         ret
         

    loc_0x801b1484: // orphan
         mfc1 a2, f20

    loc_0x801b1868: // orphan
         t4 = 0x8180 << 16
         t4 += 0x5d48
         t5 = [t4 + 0]            // t9
         t3 = [t4 + 4]            // t9
         t2 = sp + 0x78
         [t2 + 0] = t5
         [t2 + 4] = t3
         t3 = [t4 + 0xc]          // t9
         t5 = [t4 + 8]            // t9
         t9 = s1 + 0x1f
         [t2 + 0xc] = t3
         [t2 + 8] = t5
         t6 = [s7 + 0]
         t7 = [sp + 0xb4]
         t8 = 0 + 1               // lo
         v0 = t6 + s3
         if                       // unlikely
         v0 -= 0x18

    loc_0x801b18b0: // orphan
         t1 = t8 << t9
         t2 = t1 & fp
         if                       // unlikely
         a0 = v0 + 6

    loc_0x801b18c0: // orphan
         t4 = [sp + 0xb8]
         t5 = sp + 0x78
         a1 = s5                  // t9
         t3 = t4 << 2
         call 0x81801ec0          // 0x81801ec0(-1, -1, 0x8, -1)
         s0 = t3 + t5
         a0 = s2
         a1 = s5                  // t9
         call 0x81801878          // 0x81801878(-1, -1, 0x8, -1)
         a2 = sp + 0xa4
         call 0x81801748          // 0x81801748(-1, -1, 0x1780a4, -1)
         a0 = s2
         lwc1 f12
         call 0x81803d44          // 0x81803d44(-1, -1, 0x1780a4, -1)
         mov.s f14, f0
         mtc1 0, f4
         
         c.lt.s f4, f0
         
         bc1f 0x801b1930
         
         call 0x81801748          // 0x81801748(-1, -1, 0x1780a4, -1)
         a0 = s2
         lwc1 f12
         call 0x81803d44          // 0x81803d44(-1, -1, 0x1780a4, -1)
         mov.s f14, f0
         goto 0x801b1948
         mov.s f2, f0

    loc_0x801b1948: // orphan
         c.lt.s f20, f2
         at = 0x8180 << 16
         a0 = s2
         bc1fl 0x801b1968
         sub.s f0, f2, f20
         goto 0x801b196c
         sub.s f0, f2, f20

    loc_0x801b196c: // orphan
         lwc1 f6, 0x5f7c, at
         c.lt.s f0, f6
         
         bc1fl 0x801b19ac
         c.lt.s f2, f20
         call 0x8180181c          // 0x8180181c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f2, 0x88, sp
         c.lt.s f0, f22
         lwc1 f2, 0x88, sp
         bc1fl 0x801b19cc
         t6 = , unsigned  byte [s7 + 4]
         mov.s f22, f0
         mov.s f20, f2
         goto 0x801b19c8
         s6 = s1

    loc_0x801b19b0: // orphan
         bc1fl 0x801b19cc
         t6 = , unsigned  byte [s7 + 4]
         mov.s f20, f2
         call 0x8180181c          // "F" // 0x8180181c(-1, 0x442f71dcfe116408, 0x8, -1)
         s6 = s1
         mov.s f22, f0

    loc_0x801b19c8: // orphan
         t6 = , unsigned  byte [s7 + 4]
         s1 += 1
         s3 += 0x18
         at = , t6 < s1           // lo
         if                       // unlikely
         

    loc_0x801b19e0: // orphan
         at = 0x8180 << 16
         lwc1 f8, 0x5f80, at
         c.lt.s f20, f8
         
         bc1fl 0x801b1a00
         t7 = [s7 + 0x10]         // t9
         s4 = s6
         t7 = [s7 + 0x10]         // t9
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         t9 = t7 << 2
         if                       // likely
         s0 = [sp + 0x28]

    loc_0x801b1a14: // orphan
         t1 = s4 + 0x1f
         t2 = 0 + 1               // lo
         t4 = t2 << t1
         t3 = t4 & fp
         beql t3, 0, 0x801b1a38   // unlikely
         v1 = s4

    loc_0x801b1a2c: // orphan
         goto 0x801b1a38
         v1 = [sp + 0xb4]

    loc_0x801b1a34: // orphan
         v1 = s4

    loc_0x801b1a38: // orphan
         ra = [sp + 0x4c]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         s5 = [sp + 0x3c]
         s6 = [sp + 0x40]
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         sp += 0xb0
         ret
         v0 = v1

    loc_0x801b1bf0: // orphan
         v0 = , unsigned  halfword [sp + 0x32]
         a1 = , unsigned  byte [t0 + 0] // s4
         a0 = [sp + 0x38]
         t5 = v0 & 0x800
         if                       // likely
         t4 = v0 & 0x400

    loc_0x801b1c08: // orphan
         goto 0x801b1c3c
         a2 = 0

    loc_0x801b1c10: // orphan
         if                       // unlikely
         t6 = v0 & 0x200

    loc_0x801b1c18: // orphan
         goto 0x801b1c3c
         a2 = 0 + 1               // arg3 // lo

    loc_0x801b1c20: // orphan
         if                       // unlikely
         t8 = v0 & 0x100

    loc_0x801b1c28: // orphan
         goto 0x801b1c3c
         a2 = 0 + 2               // arg3

    loc_0x801b1c30: // orphan
         if                       // unlikely
         

    loc_0x801b1c38: // orphan
         a2 = 0 + 3               // arg3

    loc_0x801b1c3c: // orphan
         if                       // unlikely
         a3 = [sp + 0x28]

    loc_0x801b1c44: // orphan
         call 0x81803d80          // 0x81803d80(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = t0
         t0 = [sp + 0x20]
         a0 = 0 + 1               // lo
         t7 = , unsigned  byte [t0 + 0] // s4
         if                       // likely
         

    loc_0x801b1c60: // orphan
         [sp + 0x1c] = v0
         call 0x800226c0          // 0x800226c0(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = t0
         v1 = [sp + 0x1c]         // s4
         t0 = [sp + 0x20]
         byte [t0 + 0] = v1

    loc_0x801b1c78: // orphan
         goto 0x801b1cb4
         v0 = 0

    loc_0x801b1cb4: // orphan
         ra = [sp + 0x14]
         sp += 0x38
         ret
         

    loc_0x801b1ed8: // orphan
         mfc1 a2, f20
         call 0x81803668          // 0x81803668(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = 0 + 1               // lo
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x8, 0x1)
         
         ra = [sp + 0x34]
         ldc1 f20, 0x10, sp
         s0 = [sp + 0x1c]         // s4
         s1 = [sp + 0x20]
         s2 = [sp + 0x24]
         s3 = [sp + 0x28]
         s4 = [sp + 0x2c]
         s5 = [sp + 0x30]
         ret
         sp += 0x38

    loc_0x801b1fc4: // orphan
         at = 0x4f00 << 16
         mul.s f8, f4, f6
         cfc1 t6, 31
         ctc1 t7, 31
         
         cvt.w.s f10, f8
         cfc1 t7, 31
         
         t7 &= 0x78
         beql t7, 0, 0x801b2038   // likely
         mfc1 t7, f10

    loc_0x801b1ff0: // orphan
         mtc1 at, f10
         t7 = 0 + 1               // lo
         sub.s f10, f8, f10
         ctc1 t7, 31
         
         cvt.w.s f10, f10
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // unlikely
         

    loc_0x801b201c: // orphan
         mfc1 t7, f10
         at = 0x8000 << 16

    loc_0x801b2024: // orphan
         goto 0x801b2044
         t7 |= at                 // lo

    loc_0x801b202c: // orphan
         goto 0x801b2044
         t7 = 0 - 1               // s2

    loc_0x801b2038: // orphan
         
         if                       // unlikely
         

    loc_0x801b2044: // orphan
         t8 = t7 & 0xff
         at = 0 - 0x100
         t9 = t8 | at
         [a0 + 4] = t9            // arg1
         t0 = [a3 + 0x10]         // arg4 // t9
         ctc1 t6, 31
         t2 = [sp + 0x50]
         t1 = t0 >> 0x1f          // lo
         if                       // unlikely
         t3 = [sp + 0x50]

    loc_0x801b206c: // orphan
         if                       // unlikely
         a0 = halfword [sp + 0x38]

    loc_0x801b2074: // orphan
         a0 = halfword [sp + 0x38]
         call 0x8004b010          // 0x8004b010(0x0, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [sp + 0x3a]
         goto 0x801b20ec
         ra = [sp + 0x24]

    loc_0x801b2088: // orphan
         call 0x8004af18          // 0x8004af18(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = halfword [sp + 0x3a]
         goto 0x801b20ec
         ra = [sp + 0x24]

    loc_0x801b2098: // orphan
         if                       // unlikely
         a0 = halfword [sp + 0x38]

    loc_0x801b20a0: // orphan
         a0 = halfword [sp + 0x38]
         a1 = halfword [sp + 0x3a]
         a2 = halfword [sp + 0x3c]
         call 0x8004b314          // 0x8004b314(0x0, 0x0, 0x0, -1)
         a3 = halfword [sp + 0x3e]
         goto 0x801b20ec
         ra = [sp + 0x24]

    loc_0x801b20bc: // orphan
         t4 = 0 + 0x96
         t5 = 0 + 0x96
         t6 = 0 + 0x5a
         [sp + 0x18] = t6
         [sp + 0x14] = t5
         [sp + 0x10] = t4
         a1 = halfword [sp + 0x3a]
         a2 = halfword [sp + 0x3c]
         a3 = halfword [sp + 0x3e]
         call 0x8004b2cc          // 0x8004b2cc(-1, 0x0, 0x0, 0x0)
         [sp + 0x1c] = 0
         ra = [sp + 0x24]

    loc_0x801b20ec: // orphan
         // CODE XREF from fcn.801965a4 @ +0xdb0
         sp += 0x40
         ret                      // ra
         

    loc_0x801b2a30: // orphan
         goto t1
         

    loc_0x801b2afc: // orphan
         
         at = 0x3f80 << 16
         mtc1 at, f16
         t6 = , unsigned  byte [s3 + 0x1c] // s4
         swc1 f0, 0x2c, s3
         swc1 f16, 0x28, s3
         goto 0x801b2bac
         byte [s3 + 0x1f] = t6

    loc_0x801b2bac: // orphan
         call 0x81804ae8          // 0x81804ae8(-1, 0x442f71dcfe116408, 0x8, -1)
         lwc1 f12, 0x2c, s3
         s4 = [s3 + 4]
         swc1 f0, 0x2c, s3
         s1 = [s3 + 0]
         beql s4, 0, 0x801b2bd4   // unlikely
         a0 = [s1 + 0]            // t9

    loc_0x801b2bc8: // orphan
         call fcn.81600954
         a0 = s4
         a0 = [s1 + 0]            // t9

    loc_0x801b2bd4: // orphan
         if                       // unlikely
         s2 = 0

    loc_0x801b2bdc: // orphan
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s3 + 0x1f] // s4
         t1 = [v0 + 4]            // t9
         s0 = v0                  // s4
         beql t1, 0, 0x801b2c10   // unlikely
         t9 = [s0 + 0xc]

    loc_0x801b2bf4: // orphan
         t9 = [v0 + 4]
         a0 = [s1 + 0]            // t9
         a1 = s3                  // t9
         call t9                  // t9(-1, -1, 0x8, -1)
         
         s2 = v0                  // s4
         t9 = [s0 + 0xc]

    loc_0x801b2c10: // orphan
         a0 = [s1 + 0]            // t9
         a1 = s3                  // t9
         call t9                  // t9(-1, -1, 0x8, -1)
         a2 = sp + 0x60
         if                       // unlikely
         a0 = s4

    loc_0x801b2c28: // orphan
         t2 = halfword [sp + 0x62]
         t3 = halfword [sp + 0x64]
         t4 = halfword [sp + 0x66]
         a1 = [s1 + 0]            // t9
         a2 = s2
         a3 = halfword [sp + 0x60]
         [sp + 0x10] = t2
         [sp + 0x14] = t3
         call 0x81600a34          // 0x81600a34(-1, -1, -1, 0x0)
         [sp + 0x18] = t4

    loc_0x801b2c50: // orphan
         a0 = [s1 + 4]            // t9
         s1 += 4
         bnel a0, 0, 0x801b2bdc   // likely
         s2 = 0

    loc_0x801b2c60: // orphan
         v0 = , unsigned  byte [s3 + 0x1d] // s4
         v1 = , unsigned  byte [s3 + 0x1e] // s4

    loc_0x801b2c68: // orphan
         beql v0, v1, 0x801b2ccc  // unlikely
         ra = [sp + 0x3c]

    loc_0x801b2c70: // orphan
         s0 = [s3 + 0]
         byte [s3 + 0x21] = v0
         byte [s3 + 0x1d] = v1
         a0 = [s0 + 0]            // t9
         if                       // unlikely
         

    loc_0x801b2c88: // orphan
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s3 + 0x1e] // s4
         t5 = [v0 + 0]
         beql t5, 0, 0x801b2cb4   // unlikely
         a0 = [s0 + 4]            // t9

    loc_0x801b2c9c: // orphan
         t9 = [v0 + 0]
         a0 = [s0 + 0]            // t9
         a1 = s3                  // t9
         call t9                  // 0x7(-1, -1, 0x8, -1)
         
         a0 = [s0 + 4]            // t9

    loc_0x801b2cb4: // orphan
         s0 += 4
         if                       // likely
         

    loc_0x801b2cc0: // orphan
         call 0x81804bc8          // 0x81804bc8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s3                  // t9
         ra = [sp + 0x3c]

    loc_0x801b2ccc: // orphan
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]
         ret                      // ra
         sp += 0x78

    loc_0x801b2ce8: // orphan
         sp -= 0x48
         [sp + 0x2c] = ra
         [sp + 0x24] = s3
         [sp + 0x28] = s4
         [sp + 0x20] = s2
         [sp + 0x1c] = s1
         [sp + 0x18] = s0
         s3 = a0                  // t9
         s1 = [a0 + 0]            // arg1
         call 0x81801420          // "R " // 0x81801420(-1, 0x442f71dcfe116408, 0x8, -1)
         s4 = [a0 + 4]
         beql s1, 0, 0x801b2dec   // unlikely
         ra = [sp + 0x2c]

    loc_0x801b2d1c: // orphan
         if                       // unlikely
         

    loc_0x801b2d24: // orphan
         call fcn.81600b30        // fcn.81600b30(-1)
         a0 = s4

    loc_0x801b2d2c: // orphan
         call 0x81800a90          // 0x81800a90(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = [s1 + 0]            // t9
         s2 = sp + 0x34
         beql a0, 0, 0x801b2dec   // unlikely
         ra = [sp + 0x2c]

    loc_0x801b2d40: // orphan
         call 0x81800a90          // 0x81800a90(-1, 0x442f71dcfe116408, 0x8, -1)
         
         a0 = [s1 + 0]            // t9
         s2 = sp + 0x34
         beql a0, 0, 0x801b2dec   // unlikely
         ra = [sp + 0x2c]

    loc_0x801b2d44: // orphan
         call 0x818054d0          // 0x818054d0(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = , unsigned  byte [s3 + 0x1f] // s4
         t6 = [v0 + 8]            // t9
         s0 = v0                  // s4
         beql t6, 0, 0x801b2ddc   // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2d5c: // orphan
         t9 = [v0 + 0xc]
         a0 = [s1 + 0]            // t9
         a1 = s3                  // t9
         call t9                  // t9(-1, -1, 0x8, -1)
         a2 = s2
         call 0x81801c90          // "P@" // 0x81801c90(-1, -1, -1, -1)
         a0 = s2
         beql v0, 0, 0x801b2ddc   // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2d80: // orphan
         t7 = [s0 + 0x1c]         // t9
         t8 = halfword [sp + 0x38]
         t0 = halfword [sp + 0x3a]
         if                       // unlikely
         

    loc_0x801b2d94: // orphan
         unsigned , hi
         t1 = lo
         blezl t1, 0x801b2ddc     // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2da4: // orphan
         if                       // unlikely
         a0 = s4

    loc_0x801b2dac: // orphan
         call fcn.81600da8        // "P@"
         a1 = [s1 + 0]            // t9
         beql v0, 0, 0x801b2ddc   // unlikely
         a0 = [s1 + 4]            // t9

    loc_0x801b2dbc: // orphan
         call 0x818017a8          // 0x818017a8(-1, 0x442f71dcfe116408, 0x8, -1)
         
         t9 = [s0 + 8]
         a0 = [s1 + 0]            // t9
         a1 = s3                  // t9
         call t9                  // t9(-1, -1, 0x8, -1)
         a2 = s2
         a0 = [s1 + 4]            // t9

    loc_0x801b2ddc: // orphan
         s1 += 4
         if                       // likely
         

    loc_0x801b2de8: // orphan
         ra = [sp + 0x2c]

    loc_0x801b2dec: // orphan
         s0 = [sp + 0x18]
         s1 = [sp + 0x1c]
         s2 = [sp + 0x20]
         s3 = [sp + 0x24]
         s4 = [sp + 0x28]
         ret                      // ra
         sp += 0x48

    loc_0x801b2e20: // orphan
         beql v1, 0, 0x801b2e48   // unlikely
         ra = [sp + 0x14]

    loc_0x801b2e28: // orphan
         t7 = [v1 + 0x10]         // t9
         a1 = [sp + 0x1c]
         t9 = t7 << 1
         bgezl t9, 0x801b2e48     // likely
         ra = [sp + 0x14]

    loc_0x801b2e3c: // orphan
         call 0x81803c9c          // 0x81803c9c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [v0 + 0x20]         // t9
         ra = [sp + 0x14]

    loc_0x801b2e48: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x801b2ecc: // orphan
         v0 = a2
         bltzl a1, 0x801b2efc     // unlikely
         v0 = a0 + 4              // arg1

    loc_0x801b2ed8: // orphan
         bnel v0, a1, 0x801b2eec  // likely
         a1 = halfword [v1 + 8]

    loc_0x801b2ee0: // orphan
         ret                      // ra
         v0 = [v1 + 4]            // t9

    loc_0x801b2eec: // orphan
         v1 += 8
         if                       // likely
         

    loc_0x801b2ef8: // orphan
         v0 = a0 + 4              // arg1

    loc_0x801b2efc: // orphan
         ret                      // ra
         

    loc_0x801b2f78: // orphan
         [sp + 4] = a1
         ret                      // ra
         v0 = 0 + 1               // lo

    loc_0x801b30e4: // orphan
         swc1 f2, 0x40, sp
         a0 = [s0 + 0x20]         // t9
         at = 0x8180 << 16
         lwc1 f8, 0x40, sp
         t6 = [a0 + 0]            // arg1
         beql t6, 0, 0x801b31a0   // unlikely
         ra = [sp + 0x24]

    loc_0x801b3100: // orphan
         lwc1 f6, 0x5fd0, at
         c.lt.s f6, f8
         
         bc1fl 0x801b31a0
         ra = [sp + 0x24]
         call 0x81803be8          // 0x81803be8(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s1
         [sp + 0x3c] = v0
         a0 = [s0 + 0x20]         // t9
         call 0x81803bb8          // 0x81803bb8(-1, 0x442f71dcfe117dbd, 0x8, -1)
         a1 = s1
         a0 = [s0 + 0x20]         // t9
         a1 = , unsigned  byte [v0 + 0]
         t3 = [sp + 0x3c]         // s4
         t7 = [a0 + 0x10]         // t9
         t0 = a1 + 0x1f
         t9 = t7 << 2
         if                       // likely
         t1 = 0 + 1               // lo

    loc_0x801b314c: // orphan
         t2 = t1 << t0
         t4 = t2 & t3
         bnel t4, 0, 0x801b31a0   // likely
         ra = [sp + 0x24]

    loc_0x801b315c: // orphan
         v1 = [s0 + 0x18]         // t9

    loc_0x801b3160: // orphan
         a2 = a1                  // t0
         v1 += 2
         v1 = , unsigned  , 0 < v1 // lo
         beql v1, 0, 0x801b3190   // unlikely
         a1 = [sp + 0x50]

    loc_0x801b3174: // orphan
         a0 = s1
         call 0x81804a20          // 0x81804a20(0x442f71dcfe117dbd, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x2c] = a1
         a2 = [sp + 0x2c]
         v1 = , unsigned  , 0 < v0 // lo
         a0 = [s0 + 0x20]         // t9
         a1 = [sp + 0x50]

    loc_0x801b3190: // orphan
         a3 = [sp + 0x40]
         call 0x81804534          // 0x81804534(-1, 0x442f71dcfe116408, 0x8, 0x0)
         [sp + 0x10] = v1
         ra = [sp + 0x24]

    loc_0x801b31a0: // orphan
         s0 = [sp + 0x1c]
         s1 = [sp + 0x20]
         ret                      // ra
         sp += 0x48

    loc_0x801b3318: // orphan
         
         
         swc1 f0
         
         sc 0, 0xa01, t8
         
         sc 0, 0xc00, t8
         
         ld 0
         
         swc1 f0
         
         sc 0, 0xa01, t8
         
         sc 0, 0xc00, t8
         
         ld 0
         

    loc_0x801b3490: // orphan
         

    loc_0x801b34e0: // orphan
         

    loc_0x801b362c: // orphan
         
         
         
         
         

    loc_0x801c9fec: // orphan
           // CALL XREF from fcn.81c7c3bc @ +0x314
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca004: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca010: // orphan
         
         if                       // unlikely
         

    loc_0x801ca01c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca028: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca034: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca044: // orphan
         
         
         
         

    loc_0x801ca054: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca064: // orphan
         if                       // fcn.801afecc+0x2c // unlikely
         if                       // unlikely

    loc_0x801ca070: // orphan
         if                       // fcn.801aff70+0x44 // unlikely
         if                       // unlikely

    loc_0x801ca07c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca088: // orphan
         if                       // fcn.801b0174+0x8 // unlikely
         if                       // fcn.801b0198+0x8 // unlikely

    loc_0x801ca094: // orphan
         
         
         
         if                       // unlikely
         if                       // fcn.801b05fc+0x1c // unlikely

    loc_0x801ca0ac: // orphan
         if                       // fcn.801b0630+0x10 // unlikely
         

    loc_0x801ca0b4: // orphan
         
         
         
         
         if                       // unlikely
         

    loc_0x801ca0cc: // orphan
         
         
         
         
         
         
         
         
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca10c: // orphan
         
         if                       // unlikely
         

    loc_0x801ca118: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca128: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca134: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca154: // orphan
         if                       // unlikely
         

    loc_0x801ca15c: // orphan
         
         if                       // unlikely
         

    loc_0x801ca168: // orphan
         
         if                       // unlikely
         

    loc_0x801ca174: // orphan
         
         
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca194: // orphan
         
         

    loc_0x801ca19c: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca1b0: // orphan
         
         
         
         

    loc_0x801ca1c0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca1d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca1dc: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca1ec: // orphan
         if                       // unlikely
         

    loc_0x801ca1f4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca204: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca210: // orphan
         if                       // fcn.801c9dc4-0x16e60 // unlikely
         if                       // unlikely

    loc_0x801ca21c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca228: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca234: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca24c: // orphan
         if                       // unlikely
         

    loc_0x801ca254: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca268: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca274: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca284: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x801ca290: // orphan
         
         
         
         
         

}

*/
