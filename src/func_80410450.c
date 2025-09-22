/*
 * Function: 0x80410450
 * Category: math
 */

// Decompiled C code
int fcn.80400424 (int esi, int edx) {
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
// do {
// } while (?);
// } while (?);
// } while (?);
}
return eax;
}

/*
// Full radare2 output
int fcn.80400424 (int esi, int edx) {
    loc_0x80400424:
        // CALL XREF from fcn.824b6be0 @ +0x1f8
        0x80400424
        0x80400428
        if            // fcn.80400480+0x6d0 // unlikely
        if            // unlikely
            
    loc_0x80400b64:
        // CODE XREF from fcn.80400424 @ 0x80400430
        0x80400b64
        if            // unlikely
        if            // unlikely
            
    loc_0x80407660:
        // CODE XREF from fcn.80400424 @ 0x80400b6c
        byte [s0 + 0x25] = t5
         // do {
    loc_0x80407664:
        // CODE XREFS from fcn.80400424 @ 0x80407648, 0x80407650
        t6 = v1 << 2
        t6 -= v1
        t7 = 0x87e2 << 16
        t7 -= 0x662c
        // CODE XREF from fcn.8041f2b0 @ +0xb50
        t6 <<= 2
        // CODE XREF from fcn.80400424 @ 0x80400b74
        v0 = t6 + t7
        lwc1 f10, 8, v0
        t8 = 0 + 0x5000
        [sp + 0x18] = t8
        a2 = [v0 + 0] // t9
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80400438
    loc_0x80400440:
        0x80400440
        0x80400444
        0x80400448
        if            // fcn.80400e3c+0x4 // unlikely
        if            // fcn.80400e3c+0x78 // unlikely
        // chop
            
    loc_0x80400eb4:
        // CODE XREF from fcn.80400424 @ 0x80400450
        0x80400eb4
        if            // fcn.80400480+0x9e9c // unlikely
        if            // unlikely
        // chop
            
    loc_0x8040a330:
        0x8040a330
        bc1fl 0x8040a348
        [sp + 0x50] = t8
        goto 0x8040a348
        [sp + 0x50] = v0
        // chop
         // do {
    loc_0x8040a348:
        // CODE XREF from fcn.80400e3c @ 0x8040a33c
        t9 = [a0 + 0xc] // arg1
        t0 = , unsigned  byte [a1 + 3] // arg2 // s4
        v0 = t9 - t0
        mtc1 v0, f4
        t1 = ~v0
        cvt.s.w f6, f4
        c.lt.s f0, f6
        0x8040a364
        bc1fl 0x8040a37c
        [sp + 0x54] = t1
        goto 0x8040a37c
        [sp + 0x54] = v0
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x80400458
    loc_0x80400464:
        if            // fcn.80400e3c+0x13c // unlikely
        if            // unlikely
        // chop
            
    loc_0x80400f84:
        0x80400f84
        if            // unlikely
        // CODE XREF from fcn.80400424 @ 0x80400468
        if            // unlikely
        // chop
            
    loc_0x8040b1e0:
        t9 = [a2 + 0x2188] // arg3
        t0 = v0 + 1
        at = , t9 < 7
        bnel at, 0, 0x8040b26c // unlikely
        t4 = , 0 < v1 // lo
        // chop
            
    loc_0x8040b26c:
        [sp + 0x14] = t4
        a0 = fp
        a1 = s7       // t9
        a2 = s3       // t9
        a3 = s4
        call 0x87e155e8 // "&s" // 0x87e155e8(0x178000, -1, -1, 0xff)
        [sp + 0x10] = s2
        s3 += 1
        at = 0 + 0x12
        s1 += 1
        s0 += 0x5c
        if            // likely
        s4 += 0x5c
        // chop
            
    loc_0x8040b1b0:
        v1 = , unsigned  byte [s1 + 4] // s4
        s2 = 0
        blezl v1, 0x8040b26c // unlikely
        t4 = , 0 < v1 // lo
        // chop
    loc_0x8040b1c0:
        t8 = byte [s0 + 0x30] // s4
        beql t8, 0, 0x8040b26c // unlikely
        t4 = , 0 < v1 // lo
        // chop
    loc_0x8040b1cc:
        v0 = , unsigned  byte [s0 + 0x50] // s4
        a2 = [s6 + 0x20] // t9
        at = , v0 < 0xc8
        if            // likely
        0x8040b1dc
        // chop
            
    loc_0x8040b208:
        call 0x87e016d8 // 0x87e016d8(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = a2
        at = 0 + 1    // lo
        bnel v0, at, 0x8040b268 // likely
        v1 = , unsigned  byte [s1 + 4] // s4
        // chop
            
    loc_0x8040b268:
        // CODE XREFS from fcn.80400e3c @ 0x8040b200, 0x8040b25c
        t4 = , 0 < v1 // lo
        // chop
    loc_0x80400470: // orphan
             if                       // fcn.804011c4+0xb0 // unlikely
             if                       // unlikely

    loc_0x8040047c: // orphan
         if                       // fcn.804018c0+0x60 // unlikely

    loc_0x80400b80: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400b8c: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0ee8
         
         if                       // fcn.80407788+0xc // unlikely
         if                       // unlikely

    loc_0x80400b9c: // orphan
         if                       // unlikely
         

    loc_0x80400ba4: // orphan
         
         if                       // fcn.804078bc+0x20 // unlikely
         if                       // fcn.804078bc+0x34 // unlikely

    loc_0x80400bb4: // orphan
         if                       // fcn.804078bc+0xbc // unlikely
         

    loc_0x80400d3c: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400438
         if                       // unlikely
         

    loc_0x80400d44: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400d50: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400d5c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80400d68: // orphan
         if                       // unlikely
         

    loc_0x80400f60: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040045c
         

    loc_0x80400f8c: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400424 @ 0x80400468
         if                       // unlikely

    loc_0x80401288: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400474
         if                       // fcn.804011c4+0xd248 // unlikely
         if                       // unlikely

    loc_0x80401294: // orphan
         if                       // unlikely
         

    loc_0x8040129c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012a8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012b4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012c0: // orphan
         if                       // unlikely
         // CODE XREF from fcn.8041f2b0 @ +0x700
         if                       // unlikely

    loc_0x804012cc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012d8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012e4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804012f0: // orphan
         if                       // unlikely
         // CALL XREF from fcn.82887568 @ +0x69c
         // CALL XREF from fcn.8289f6c8 @ +0x90
         if                       // unlikely

    loc_0x804012fc: // orphan
         if                       // unlikely
         

    loc_0x80401304: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80401318: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0f14
         if                       // unlikely
         if                       // unlikely

    loc_0x80401324: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.80400480 @ 0x803f0f18
         

    loc_0x80401330: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80401340: // orphan
         if                       // fcn.80400480+0xe914 // unlikely
         if                       // unlikely

    loc_0x8040134c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401358: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0f24
         if                       // unlikely
         if                       // unlikely

    loc_0x80401364: // orphan
         
         if                       // fcn.80400480+0xefec // unlikely
         if                       // unlikely

    loc_0x80401374: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80401380: // orphan
         // CODE XREF from fcn.803f0e00 @ +0x11c
         
         
         // CODE XREF from fcn.803f0e00 @ +0x134
         if                       // unlikely
         if                       // unlikely

    loc_0x80401394: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0f20
         
         
         if                       // unlikely
         

    loc_0x804013a4: // orphan
         
         if                       // unlikely
         

    loc_0x804013b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x804013bc: // orphan
         if                       // fcn.804103e8-0xd8 // unlikely
         if                       // fcn.804103e8-0x94 // unlikely

    loc_0x804013c8: // orphan
         if                       // fcn.804103f8+0x14 // unlikely
         if                       // unlikely

    loc_0x804013d4: // orphan
         
         if                       // unlikely
         // CODE XREF from fcn.803f0e00 @ +0x128
         if                       // unlikely

    loc_0x804013e4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x804013f4: // orphan
         if                       // unlikely
         // CALL XREF from fcn.8159e474 @ +0x250
         

    loc_0x804013fc: // orphan
         

    loc_0x80401400: // orphan
         // CODE XREF from fcn.80400480 @ 0x803f0f3c
         
         if                       // fcn.80410a4c+0x6c // unlikely
         // CALL XREF from fcn.82b9e4c8 @ +0x80c
         if                       // unlikely

    loc_0x80407558: // orphan
         // CODE XREF from fcn.80400424 @ 0x804076c8
         call 0x87f025b8          // 0x87f025b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = fp
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80407568: // orphan
         t6 = s3 << 2
         t6 -= s3
         t7 = 0x87e2 << 16
         s6 = s3 << 2
         s6 += s3

    loc_0x8040757c: // orphan
         t7 -= 0x665c
         t6 <<= 2
         s2 = v0 + 0x24
         s5 = [v0 + 0x20]         // t9
         a0 = s2

    loc_0x80407590: // orphan
         s1 = t6 + t7
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         s6 += 5
         a0 = s2
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [s7 + 0x26c]        // t9
         [s0 + 0x38] = s0
         lwc1 f4
         s2 = s0 + 0x48
         a1 = s2
         swc1 f4, 0x48, s0
         lwc1 f6, 4, s1
         a2 = s0 + 0x54
         s4 = s0 + 0x42
         swc1 f6, 0x4c, s0
         lwc1 f8, 8, s1
         s1 = s5 + 0xc            // t1
         a0 = s1                  // t1
         swc1 f8, 0x50, s0
         if                       // likely
         t8 = s3 & 1              // lo

    loc_0x804075ec: // orphan
         if                       // unlikely
         

    loc_0x804075f4: // orphan
         t8 -= 2

    loc_0x804075f8: // orphan
         // CODE XREFS from fcn.80400424 @ 0x804075e4, 0x804075ec
         if                       // unlikely
         t9 = 0 + 0x4000

    loc_0x80407600: // orphan
         goto 0x80407610
         halfword [s0 + 0x46] = t9

    loc_0x80407608: // orphan
         // CODE XREF from fcn.80400424 @ 0x804075f8
         t0 = 0 - 0x4000
         halfword [s0 + 0x46] = t0

    loc_0x80407610: // orphan
         // CODE XREF from fcn.80400424 @ 0x80407600
         t1 = [s7 + 4]            // t9
         t3 = 0xc8c8 << 16
         t2 = 0 - 1               // s2
         if                       // unlikely
         t3 |= 0xc8ff

    loc_0x80407624: // orphan
         goto 0x80407630
         [s0 + 0x60] = t2

    loc_0x8040762c: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040761c
         [s0 + 0x60] = t3

    loc_0x80407630: // orphan
         // CODE XREF from fcn.80400424 @ 0x80407624
         call 0x87f0afd0          // 0x87f0afd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = s4
         call 0x87e043f0          // 0x87e043f0(-1, 0x442f71dcfe116408, 0x8, 0xff)
         // CODE XREF from fcn.80400424 @ 0x80400b68
         a0 = s7                  // t9
         if                       // unlikely
         a0 = s1

    loc_0x80407648: // orphan
         goto 0x80407664
         v1 = s3                  // t9

    loc_0x80407650: // orphan
         // CODE XREF from fcn.80400424 @ 0x80407640
         if                       // likely
         v1 = s3 + 4

    loc_0x80407658: // orphan
         t4 = , unsigned  byte [s0 + 0x25] // s4
         t5 = t4 & 0xfffe         // t3

    loc_0x8040768c: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400b78
         a3 = [v0 + 4]            // t9
         a1 = s2
         [sp + 0x14] = s6
         // CODE XREF from fcn.8041f2b0 @ +0xb54
         call 0x87f0b1a4          // 0x87f0b1a4(-1, -1, 0x8, -1)
         swc1 f10, 0x10, sp
         mfc1 a2, f20
         mfc1 a3, f20
         a0 = s1
         a1 = s4
         swc1 f20, 0x10, sp
         [sp + 0x14] = s6
         call 0x87f0b2f4          // "&s" // 0x87f0b2f4(0x442f71dcfe117dbd, 0xff, 0x8, -1)
         [sp + 0x18] = 0

    loc_0x804076c0: // orphan
         // CODE XREF from fcn.80400424 @ 0x80407560
         s3 += 1
         at = 0 + 4
         bnel s3, at, 0x80407558  // likely
         a1 = [sp + 0x5c]

    loc_0x804076d0: // orphan
         a0 = 0 + 3
         a1 = 0 + 0x8c
         call 0x87e0168c          // 0x87e0168c(0x3, 0x8c, 0x8, -1)
         a2 = 0 + 0x13
         // CODE XREF from fcn.80400848 @ +0x334
         ra = [sp + 0x54]
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]

    loc_0x804076ec: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0xb58
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         // CODE XREF from fcn.80400424 @ 0x80400b80
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]         // s4
         ret                      // ra
         sp += 0x78

    loc_0x80407738: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400b84
         t8 = a3 + 0x144          // arg4
         t9 = a3 + 0x1d8          // arg4
         // CODE XREF from fcn.8041f2b0 @ +0xb5c
         t6 = a3 + 0x1c           // arg4
         [v0 + 0x4c4] = t9
         [v0 + 0x338] = t8
         // CODE XREF from fcn.80400848 @ +0x340
         [v0 + 0x1ac] = t7
         [v0 + 0x20] = t6
         [sp + 0x1c] = v0
         call 0x87f024cc          // 0x87f024cc(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x20] = a3
         a3 = [sp + 0x20]         // t9
         // CODE XREF from fcn.8041f2b0 @ +0xb60
         a1 = [sp + 0x1c]         // s4
         a2 = 0 + 4
         call 0x87f024f4          // 0x87f024f4(-1, 0xff, 0x4, -1)
         a0 = a3 + 8
         ra = [sp + 0x14]
         sp += 0x20
         ret
         

    loc_0x804077a8: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400b94
         t8 = 0 + 2

    loc_0x804077ac: // orphan
         at = 0 + 2
         if                       // unlikely
         at = 0 + 3

    loc_0x804077b8: // orphan
         beql v0, at, 0x804077e4  // unlikely
         [a0 + 4] = 0             // arg1

    loc_0x804077c0: // orphan
         goto 0x804077e4
         

    loc_0x804077d8: // orphan
         // CODE XREF from fcn.80400424 @ 0x804077b0
         // CODE XREF from fcn.8041f2b0 @ +0xb64
         goto 0x804077e4
         [a0 + 4] = v1            // arg1

    loc_0x804077e4: // orphan
         // CODE XREFS from fcn.80400424 @ 0x804077b8, 0x804077c0
         // CODE XREFS from fcn.80407788 @ 0x804077c8, 0x804077d0
         // CODE XREF from fcn.80400424 @ 0x804077d8
         call 0x87e04790          // 0x87e04790(-1, 0x442f71dcfe116408, 0x8, -1)
         [a0 + 0] = 0
         call 0x87e134c0          // 0x87e134c0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         call 0x87e13490          // 0x87e13490(-1, 0x442f71dcfe116408, 0x8, -1)
         
         // CODE XREF from fcn.8041f2b0 @ +0xb68
         call 0x87e13480          // fcn.80407804 // 0x87e13480(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0

    loc_0x80407890: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400b9c
         sdc1 f26, 0x40, sp
         sdc1 f24, 0x38, sp
         // CODE XREF from fcn.8041f2b0 @ +0xb74
         sdc1 f22, 0x30, sp
         sdc1 f20, 0x28, sp
         s0 = [a0 + 0x14]         // arg1 // t9
         s4 = a0                  // t9

    loc_0x8040912c: // orphan
         t9 = [fp + 0x150]
         a1 = [sp + 0x6c]
         a0 = s7                  // t9
         // CODE XREF from fcn.80400bf4 @ +0x140
         call 0x87f025b8          // 0x87f025b8(-1, 0x0, 0x8, -1)
         s3 = t9 + s6
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80409148: // orphan
         s1 = v0 + 0x24
         v0 = s5 << 2
         v0 -= s5
         t0 = 0x87e2 << 16
         t1 = 0x87e2 << 16
         t1 -= 0x5fac
         t0 -= 0x603c
         v0 <<= 2
         s2 = v0 + t0
         // CODE XREF from fcn.80400bf4 @ +0x144
         s4 = v0 + t1
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         a0 = s1
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x123, 0x0, -1, -1)
         a3 = [fp + 0x164]
         t2 = [s0 + 0xc]          // t9
         at = 0x2000 << 16
         [s0 + 0x38] = s0
         t3 = t2 | at             // t9
         [s0 + 0xc] = t3
         [s0 + 0x20] = s3
         lwc1 f4
         t6 = 0xc8c8 << 16
         s1 = s0 + 0x48

    loc_0x804091b0: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400d3c
         swc1 f4, 0x48, s0
         lwc1 f6, 4, s2
         t5 = 0 - 1               // s2
         t6 |= 0xc8ff
         swc1 f6, 0x4c, s0
         lwc1 f8, 8, s2
         swc1 f20, 0x54, s0
         swc1 f20, 0x58, s0
         swc1 f20, 0x5c, s0
         swc1 f8, 0x50, s0
         t4 = [fp + 8]
         a1 = s1
         a0 = s3                  // t9
         if                       // likely
         a2 = s0 + 0x54           // arg3

    loc_0x804091ec: // orphan
         goto 0x804091f8
         [s0 + 0x60] = t5

    loc_0x804091f4: // orphan
         [s0 + 0x60] = t6

    loc_0x804091f8: // orphan
         // CODE XREFS from fcn.80400424 @ 0x80400d44, 0x804091ec
         call 0x87f0afd0          // "\u018a" // 0x87f0afd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = s0 + 0x42
         lwc1 f10, 8, s4
         t7 = 0 + 0x14
         [sp + 0x14] = t7
         a0 = s3                  // t9
         a1 = s1
         a2 = [s4 + 0]            // t9
         a3 = [s4 + 4]            // t9

    loc_0x8040921c: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400d48
         [sp + 0x18] = 0
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f10, 0x10, sp

    loc_0x80409228: // orphan
         s5 += 1
         at = , s5 < 0xc
         if                       // unlikely
         // CODE XREF from fcn.80400424 @ 0x80400d50
         s6 += 0x9c

    loc_0x80409238: // orphan
         a1 = 0x87e0 << 16
         a1 += 0x5d74
         s5 = 0x87e2 << 16
         s5 -= 0x609c

    loc_0x80409248: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400d54
         [sp + 0x64] = a1
         s6 = 0
         s7 = 0

    loc_0x80409254: // orphan
         t9 = [fp + 8]
         t8 = [fp + 0x154]
         a1 = [sp + 0x64]
         t0 = t9 << 3
         t1 = s5 + t0             // t9
         t2 = t1 + s7
         s2 = [t2 + 0]            // t9
         a0 = [sp + 0x78]
         call 0x87f025b8          // 0x87f025b8(0x0, 0xfe116408, 0x8, -1)
         s4 = t8 + s6
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80409284: // orphan
         t3 = [fp + 8]
         s1 = v0 + 0x24
         a0 = s1
         // CODE XREF from fcn.80400424 @ 0x80400d5c
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x442f71dcfe116408, 0x8, -1)
         [s4 + 0] = t3
         t4 = [fp + 0x154]
         t6 = [s0 + 0xc]          // t9
         at = 0x4000 << 16

    loc_0x804092a4: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400d60
         t5 = t4 + s6
         t7 = t6 | at
         [s0 + 0x20] = t5
         if                       // unlikely
         [s0 + 0xc] = t7

    loc_0x804092b8: // orphan
         t8 = [s2 + 0x18]         // t9
         a0 = [s4 + 0x90]         // t9
         a1 = [s2 + 0]            // t9
         a3 = [s2 + 4]            // t9
         // CODE XREF from fcn.80400bf4 @ +0x170
         a2 = s1
         // DATA XREF from fcn.81a611bc @ 0x81a611c0
         call 0x87e05ce4          // 0x87e05ce4(-1, -1, 0x442f71dcfe117dbd, -1)
         [sp + 0x10] = t8
         t0 = [s2 + 0x38]         // t9
         [s0 + 0x48] = t0
         t9 = [s2 + 0x3c]
         [s0 + 0x4c] = t9
         t0 = [s2 + 0x40]         // t9
         [s0 + 0x50] = t0

    loc_0x804092ec: // orphan
         // CODE XREF from fcn.80400424 @ 0x80400d68
         lwl t2, 0x30, s2         // t9
         lwr t2, 0x33, s2         // t9
         swl t2, 0x42, s0
         swr t2, 0x45, s0
         t2 = , unsigned  halfword [s2 + 0x34]
         swc1 f22, 0x54, s0
         swc1 f22, 0x58, s0
         swc1 f22, 0x5c, s0
         halfword [s0 + 0x46] = t2

    loc_0x80409310: // orphan
         s3 = s4 + 8
         s1 = s0 + 0x54
         a2 = s1
         a0 = s3
         a1 = s0 + 0x48
         call 0x87f0afd0          // 0x87f0afd0(0x107, 0x14c, 0x158, -1)
         a3 = s0 + 0x42
         if                       // unlikely
         a0 = s3

    loc_0x80409334: // orphan
         lwc1 f0, 0x2c, s2
         t3 = 0 + 0x14
         [sp + 0x14] = t3
         mfc1 a2, f0
         mfc1 a3, f0
         [sp + 0x18] = 0
         a1 = s1
         call 0x87f0b24c          // 0x87f0b24c(-1, 0x442f71dcfe117dbd, 0x8, -1)
         swc1 f0, 0x10, sp
         goto 0x80409370
         s7 += 4

    loc_0x80409360: // orphan
         t4 = , unsigned  byte [s0 + 0x25] // s4
         t5 = t4 & 0xfffe         // t3
         byte [s0 + 0x25] = t5

    loc_0x8040936c: // orphan
         s7 += 4

    loc_0x80409370: // orphan
         // CODE XREF from fcn.80400424 @ 0x80409358
         at = 0 + 8               // a2
         if                       // likely
         s6 += 0x94

    loc_0x8040937c: // orphan
         call 0x87e06100          // 0x87e06100(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = fp
         ra = [sp + 0x5c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         s0 = [sp + 0x38]
         s1 = [sp + 0x3c]
         s2 = [sp + 0x40]
         s3 = [sp + 0x44]
         s4 = [sp + 0x48]
         s5 = [sp + 0x4c]
         s6 = [sp + 0x50]         // s4
         s7 = [sp + 0x54]
         fp = [sp + 0x58]
         ret
         sp += 0x98

    loc_0x8040e430: // orphan
         s0 = [sp + 0x38]
         s1 = [sp + 0x3c]
         s2 = [sp + 0x40]
         ret                      // ra
         sp += 0x48

    loc_0x8040e458: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x8040e4a4: // orphan
         ret                      // ra
         

    loc_0x8040e500: // orphan
         [v0 + 0] = t9
         [v0 + 4] = t1
         t2 = [t2 + 0x491c]       // t9
         v0 = [v1 + 0]            // t9
         t4 = 0xdb06 << 16
         a2 = [t2 + 0x14]         // t9
         t3 = v0 + 8
         [v1 + 0] = t3
         t4 |= 0x3c
         [v0 + 0] = t4
         t5 = [a2 + 4]            // arg3 // v1
         t8 = 0xde00 << 16
         t6 = [t5 + 8]            // t9
         [v0 + 4] = t6
         v0 = [v1 + 0]
         // CODE XREF from fcn.80420050 @ +0x198
         t7 = v0 + 8
         [v1 + 0] = t7
         [v0 + 0] = t8
         t9 = [a2 + 0]            // arg3

    loc_0x8040e54c: // orphan
         call 0x8003cd84          // 0x8003cd84(-1, 0x442f71dcfe116408, 0x8, -1)

    loc_0x8040e550: // orphan
         // CODE XREF from fcn.80420050 @ 0x804201ec
         [v0 + 4] = t9
         // CODE XREF from fcn.80420050 @ 0x804201e0
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040e588: // orphan
         a0 = 0 + 0x162           // arg1
         call 0x8004c8c0          // 0x8004c8c0(0x162, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x163
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040e644: // orphan
         v0 = 0x87e1 << 16
         v0 -= 0x3934
         fp = 0x87e1 << 16
         fp -= 0x4900
         [sp + 0x50] = v0
         s3 = 0
         s4 = s0

    loc_0x8040e660: // orphan
         v0 = [sp + 0x50]
         t6 = 0 + 0x1c
         [sp + 0x10] = t6
         a0 = s6

    loc_0x8040e670: // orphan
         a1 = fp
         a2 = 0xf00 << 16
         a3 = 0 + 0x7c            // arg4
         [sp + 0x18] = s4
         call 0x87f0aec0          // 0x87f0aec0(-1, 0x178000, 0xf000000, 0x7c)
         [sp + 0x14] = v0
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x8040e690: // orphan
         t7 = s3 << 2
         t7 -= s3
         // CODE XREF from fcn.80420050 @ +0x1a4
         t8 = 0x87e2 << 16
         t8 -= 0x5c4c
         t7 <<= 2
         s2 = v0 + 0x24
         a0 = s2

    loc_0x8040e6ac: // orphan
         // CODE XREF from fcn.80420050 @ +0x1a8
         s1 = t7 + t8             // t9
         call 0x8003f1dc          // 0x8003f1dc(-1, 0x442f71dcfe116408, 0x8, -1)
         s5 = s4 + 0x14
         a0 = s2
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(-1, 0x0, -1, -1)
         a3 = [s7 + 8]            // t9
         lwc1 f4
         at = , s3 < 3
         t0 = 0 + 0x4000
         swc1 f4, 0x48, s0
         lwc1 f6, 4, s1
         a0 = s5
         a1 = s0 + 0x48
         swc1 f6, 0x4c, s0

    loc_0x8040e6ec: // orphan
         lwc1 f8, 8, s1
         a2 = s0 + 0x54
         if                       // unlikely
         swc1 f8, 0x50, s0

    loc_0x8040e6fc: // orphan
         t9 = 0 - 0x4000
         goto 0x8040e70c
         halfword [s0 + 0x44] = t9

    loc_0x8040e708: // orphan
         halfword [s0 + 0x44] = t0

    loc_0x8040e70c: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040e700
         call 0x87f0afd0          // 0x87f0afd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a3 = s0 + 0x42
         t1 = , unsigned  byte [s0 + 0x25] // t3
         t2 = t1 & 0xfffe         // t3

    loc_0x8040e71c: // orphan
         byte [s0 + 0x25] = t2

    loc_0x8040e720: // orphan
         s3 += 1
         at = 0 + 6
         if                       // likely
         s4 += 0x9c

    loc_0x8040e730: // orphan
         ra = [sp + 0x4c]
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         s3 = [sp + 0x34]
         s4 = [sp + 0x38]

    loc_0x8040e748: // orphan
         s5 = [sp + 0x3c]
         s6 = [sp + 0x40]
         s7 = [sp + 0x44]
         fp = [sp + 0x48]
         ret                      // ra
         sp += 0x68

    loc_0x8040e770: // orphan
         [sp + 0x24] = s4
         [sp + 0x20] = s3
         [sp + 0x1c] = s2
         [sp + 0x18] = s1
         s5 = a0                  // t9
         [sp + 0x34] = ra
         [sp + 0x14] = s0
         s1 = 0
         s2 = 0
         s3 = 0
         s4 = 0 + 1               // lo
         s6 = 0 + 2
         s7 = 0 + 6

    loc_0x8040e7a4: // orphan
         t6 = [s5 + 0x20]         // t9
         t8 = [s5 + 0x24]         // t9
         a0 = 0 + 0x162           // arg1
         t7 = t6 + s2
         s0 = [t7 + 0xc]          // t9
         t9 = t8 + s3
         a1 = s1
         call 0x8004c990          // 0x8004c990(0x162, 0x442f71dcfe117dbd, 0x8, -1)
         [s0 + 0] = t9
         a0 = [s0 + 0]
         [s0 + 8] = v0
         a1 = s4
         v1 = byte [a0 + 1]       // s4
         if                       // unlikely
         

    loc_0x8040e7e0: // orphan
         if                       // unlikely
         a1 = 0

    loc_0x8040e7e8: // orphan
         if                       // unlikely
         a1 = s6

    loc_0x8040e7f0: // orphan
         goto 0x8040e858
         v1 = byte [a0 + 2]       // s4

    loc_0x8040e7f8: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x15e
         // CODE XREF from fcn.83b4500c @ +0xf8
         [s0 + 4] = v0
         [s0 + 0xc] = 0
         goto 0x8040e854
         a0 = [s0 + 0]            // t9

    loc_0x8040e810: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x15e
         [s0 + 4] = v0
         a0 = 0 + 0x15f
         call 0x8004c990          // 0x8004c990(0x15f, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         [s0 + 0xc] = v0
         goto 0x8040e854
         a0 = [s0 + 0]            // t9

    loc_0x8040e834: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x15e
         [s0 + 4] = v0
         a0 = 0 + 0x15f
         call 0x8004c990          // 0x8004c990(0x15f, 0x442f71dcfe116408, 0x8, -1)
         a1 = s4
         [s0 + 0xc] = v0
         a0 = [s0 + 0]            // t9

    loc_0x8040e854: // orphan
         // CODE XREFS from fcn.80400424 @ 0x8040e808, 0x8040e82c
         v1 = byte [a0 + 2]       // s4

    loc_0x8040e858: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040e7f0
         a0 = 0 + 0x163
         if                       // unlikely
         

    loc_0x8040e864: // orphan
         if                       // unlikely
         a0 = 0 + 0x163

    loc_0x8040e86c: // orphan
         goto 0x8040e894
         s1 += 1

    loc_0x8040e874: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         goto 0x8040e890
         [s0 + 0x10] = v0

    loc_0x8040e884: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s4
         [s0 + 0x10] = v0

    loc_0x8040e890: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040e87c
         s1 += 1

    loc_0x8040e894: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040e86c
         s2 += 0x10
         if                       // likely
         s3 += 3

    loc_0x8040e8a0: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         s2 = [sp + 0x1c]         // t9
         s3 = [sp + 0x20]         // t9
         s4 = [sp + 0x24]
         s5 = [sp + 0x28]
         s6 = [sp + 0x2c]
         s7 = [sp + 0x30]
         ret                      // ra
         sp += 0x38

    loc_0x8040e910: // orphan
         if                       // unlikely
         a2 = 0

    loc_0x8040e918: // orphan
         v1 = t0 & 3
         if                       // likely
         a3 = v1

    loc_0x8040e924: // orphan
         t9 = 0 << 2
         t3 = sp + 0x48
         v0 = t9 + t3

    loc_0x8040e930: // orphan
         a0 = [v0 + 0]            // t9
         a1 = [v0 + 4]            // t9
         a2 += 1                  // arg3
         at = , a0 < a1
         if                       // likely
         

    loc_0x8040e948: // orphan
         [v0 + 0] = a1
         [v0 + 4] = a0

    loc_0x8040e950: // orphan
         if                       // likely
         v0 += 4

    loc_0x8040e958: // orphan
         if                       // unlikely
         t5 = sp + 0x48

    loc_0x8040e95c: // orphan
         t5 = sp + 0x48

    loc_0x8040e960: // orphan
         t4 = a2 << 2             // arg3 // k0
         t6 = t0 << 2
         a3 = t6 + t5             // arg4
         v0 = t4 + t5
         a0 = [v0 + 0]            // t9

    loc_0x8040e974: // orphan
         a1 = [v0 + 4]            // t9
         at = , a0 < a1
         beql at, 0, 0x8040e994   // likely
         a0 = [v0 + 8]

    loc_0x8040e984: // orphan
         [v0 + 0] = a1
         a1 = a0                  // t9
         [v0 + 4] = a0
         a0 = [v0 + 8]

    loc_0x8040e994: // orphan
         at = , a1 < a0
         beql at, 0, 0x8040e9b0   // likely
         a1 = [v0 + 0xc]          // t9

    loc_0x8040e9a0: // orphan
         [v0 + 4] = a0
         a0 = a1                  // t0
         [v0 + 8] = a1
         a1 = [v0 + 0xc]          // t9

    loc_0x8040e9b0: // orphan
         at = , a0 < a1           // lo
         beql at, 0, 0x8040e9cc   // unlikely
         a0 = [v0 + 0x10]

    loc_0x8040e9bc: // orphan
         [v0 + 8] = a1
         a1 = a0                  // t9
         [v0 + 0xc] = a0
         a0 = [v0 + 0x10]

    loc_0x8040e9cc: // orphan
         at = , a1 < a0
         beql at, 0, 0x8040e9e4   // likely
         v0 += 0x10

    loc_0x8040e9d8: // orphan
         [v0 + 0xc] = a0
         [v0 + 0x10] = a1
         v0 += 0x10

    loc_0x8040e9e4: // orphan
         bnel v0, a3, 0x8040e974  // likely
         a0 = [v0 + 0]

    loc_0x8040e9ec: // orphan
         t1 += 1
         at = , t1 < 4
         bnel at, 0, 0x8040e910   // unlikely
         t0 = t2 - t1

    loc_0x8040e9fc: // orphan
         t1 = 0
         t1 += 1                  // lo

    loc_0x8040ea04: // orphan
         at = , t1 < 4
         bnel at, 0, 0x8040ea04   // unlikely
         t1 += 1

    loc_0x8040ea10: // orphan
         a0 = [s0 + 4]
         t3 = [sp + 0x48]
         t4 = [sp + 0x4c]
         t7 = , unsigned  byte [a0 + 0x21f6] // arg1 // s4
         t8 = 0x87e2 << 16
         t8 -= 0x5ca8
         at = , t7 < 2
         if                       // unlikely
         t6 = t3 - t4

    loc_0x8040ea34: // orphan
         t9 = 0 + 0x10
         [s0 + 0x24] = t8
         goto 0x8040eb7c
         [s0 + 0x28] = t9

    loc_0x8040ea44: // orphan
         t5 = [a0 + 0x2188]       // arg1 // t9
         mtc1 t6, f4
         at = 0x87e2 << 16
         mtc1 t5, f8
         cvt.s.w f6, f4
         lwc1 f16, -0x4960, at
         t7 = 0x87e2 << 16
         t7 -= 0x5cd0
         t8 = 0 + 0xe
         cvt.s.w f10, f8
         div.s f0, f6, f10
         c.le.s f16, f0
         
         bc1f 0x8040ea8c

    loc_0x8040ea7c: // orphan
         
         [s0 + 0x24] = t7
         goto 0x8040eb7c
         [s0 + 0x28] = t8

    loc_0x8040eb5c: // orphan
         t8 -= 0x5ce4
         bc1f 0x8040eb74
         t9 = 0 + 0xd
         [s0 + 0x24] = t5
         goto 0x8040eb7c
         [s0 + 0x28] = t7

    loc_0x8040eb7c: // orphan
         // CODE XREFS from fcn.80400424 @ 0x8040ea3c, 0x8040ea84
         // CODE XREFS from fcn.80400480 @ 0x8040eaec, 0x8040eb3c
         // CODE XREF from fcn.80400424 @ 0x8040eb6c
         call 0x87e0b9f0          // 0x87e0b9f0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s0
         ra = [sp + 0x1c]         // t9
         s0 = [sp + 0x18]
         sp += 0x60
         ret                      // t9
         

    loc_0x8040edf4: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040efb0
         t5 = s3 << 2
         if                       // likely
         v1 = [t6 + 0xc]          // t9

    loc_0x8040ee00: // orphan
         if                       // likely
         s0 = v1 + 0x14

    loc_0x8040ee08: // orphan
         at = 0x4316 << 16
         mtc1 at, f4
         s0 = v1 + 0x14
         mfc1 a2, f28
         mfc1 a3, f30
         t7 = 0 + 0xc
         t8 = 0 + 0x5000
         [sp + 0x18] = t8
         [sp + 0x14] = t7
         a0 = s0
         a1 = s1 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(0x234, 0x442f71dcfe117e05, 0x8, -1)
         swc1 f4, 0x10, sp
         at = 0x43b4 << 16
         mtc1 at, f6
         mfc1 a2, f22
         mfc1 a3, f22
         t9 = 0 + 0xc
         t0 = 0 | 0x8000
         [sp + 0x18] = t0
         [sp + 0x14] = t9
         a0 = s0
         a1 = s1 + 0x42
         call 0x87f0b2f4          // 0x87f0b2f4(0x234, 0x442f71dcfe117dff, 0x8, -1)
         swc1 f6, 0x10, sp
         goto 0x8040efac
         s1 = [s1 + 4]            // t9

    loc_0x8040ee74: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040ee00
         mfc1 a2, f26
         mfc1 a3, f26
         t1 = 0 + 0xf
         t2 = 0 + 0x2000
         [sp + 0x18] = t2
         [sp + 0x14] = t1
         a0 = s0
         a1 = s1 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(0x104, 0x442f71dcfe117e05, 0x8, -1)
         swc1 f22, 0x10, sp
         mfc1 a2, f22
         mfc1 a3, f22
         t3 = 0 + 0xf
         [sp + 0x14] = t3
         a0 = s0
         a1 = s1 + 0x42
         swc1 f22, 0x10, sp
         call 0x87f0b2f4          // 0x87f0b2f4(0x104, 0x442f71dcfe117dff, 0x8, -1)
         [sp + 0x18] = 0
         mfc1 a2, f24
         mfc1 a3, f24
         t4 = 0 + 0xf
         [sp + 0x14] = t4
         a0 = s0
         a1 = s1 + 0x54
         swc1 f24, 0x10, sp
         call 0x87f0b24c          // 0x87f0b24c(0x104, 0x442f71dcfe117e11, 0x8, -1)
         [sp + 0x18] = 0
         goto 0x8040efac
         s1 = [s1 + 4]            // t9

    loc_0x8040eeec: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040edf8
         t5 -= s3
         t6 = 0x87e2 << 16
         t6 -= 0x5c4c
         t5 <<= 2
         at = , s3 < 3
         if                       // likely
         v0 = t5 + t6

    loc_0x8040ef08: // orphan
         at = 0xc2b4 << 16
         mtc1 at, f20
         goto 0x8040ef24
         

    loc_0x8040ef18: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040ef00
         at = 0x42b4 << 16
         mtc1 at, f20
         

    loc_0x8040ef24: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040ef10
         div 0, s3, s7
         t7 = hi
         lwc1 f8, 8, v0
         a2 = [v0 + 0]
         unsigned , hi            // t9 // s2
         a3 = [v0 + 4]            // t9
         s0 = v1 + 0x14
         t8 = 0 + 0x2000
         [sp + 0x18] = t8
         a0 = s0
         a1 = s1 + 0x48           // arg2
         swc1 f8, 0x10, sp
         if                       // likely
         

    loc_0x8040ef5c: // orphan
         break 7

    loc_0x8040ef60: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040ef54
         at = 0 - 1               // s2
         if                       // likely
         at = 0x8000 << 16

    loc_0x8040ef6c: // orphan
         if                       // likely
         

    loc_0x8040ef74: // orphan
         break 6

    loc_0x8040ef78: // orphan
         // CODE XREFS from fcn.80400424 @ 0x8040ef64, 0x8040ef6c
         s2 = lo
         s2 += 5
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x14] = s2
         mfc1 a2, f22
         mfc1 a3, f20
         a0 = s0
         a1 = s1 + 0x42
         swc1 f22, 0x10, sp
         [sp + 0x14] = s2
         call 0x87f0b2f4          // 0x87f0b2f4(0x104, 0x442f71dcfe117dff, 0x8, -1)
         [sp + 0x18] = 0
         s1 = [s1 + 4]            // t9

    loc_0x8040efac: // orphan
         // CODE XREFS from fcn.80400424 @ 0x8040ee6c, 0x8040eee4
         s3 += 1
         bnel s1, 0, 0x8040edf4   // likely
         t6 = [s1 + 0x38]         // t9

    loc_0x8040efb8: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040edbc
         ra = [sp + 0x7c]
         ldc1 f20, 0x28, sp
         ldc1 f22, 0x30, sp
         ldc1 f24, 0x38, sp
         ldc1 f26, 0x40, sp
         ldc1 f28, 0x48, sp
         ldc1 f30, 0x50, sp
         s0 = [sp + 0x58]
         s1 = [sp + 0x5c]
         s2 = [sp + 0x60]
         s3 = [sp + 0x64]
         s4 = [sp + 0x68]
         s5 = [sp + 0x6c]
         s6 = [sp + 0x70]
         s7 = [sp + 0x74]
         fp = [sp + 0x78]
         ret
         sp += 0x80

    loc_0x8040f05c: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f0cc
         a1 = s0 + 0x48           // arg2
         if                       // likely
         v0 = [t6 + 0xc]          // t9

    loc_0x8040f068: // orphan
         lwc1 f4, 0x48, s0
         lwc1 f8, 0x50, s0
         a3 = [s0 + 0x4c]         // t9
         sub.s f6, f4, f22
         s1 = v0 + 0x14
         t7 = 0 + 0xf
         add.s f10, f8, f24
         mfc1 a2, f6
         t8 = 0 + 0x2000
         [sp + 0x18] = t8
         swc1 f10, 0x10, sp
         [sp + 0x14] = t7

    loc_0x8040f098: // orphan
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = s1
         mfc1 a2, f20
         mfc1 a3, f26
         t9 = 0 + 0xf
         [sp + 0x14] = t9
         a0 = s1
         a1 = s0 + 0x42
         swc1 f20, 0x10, sp
         call 0x87f0b2f4          // 0x87f0b2f4(0x442f71dcfe117dbd, 0x146, 0x8, -1)
         [sp + 0x18] = 0

    loc_0x8040f0c4: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f060
         s0 = [s0 + 4]
         s2 += 1
         bnel s0, 0, 0x8040f05c   // likely
         t6 = [s0 + 0x38]         // t9

    loc_0x8040f0d4: // orphan
         // CODE XREF from fcn.80400480 @ 0x8040f034
         ra = [sp + 0x54]
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         s0 = [sp + 0x44]
         s1 = [sp + 0x48]
         s2 = [sp + 0x4c]
         s3 = [sp + 0x50]
         ret
         sp += 0x58

    loc_0x8040f214: // orphan
         ra = [sp + 0x14]
         sp += 0x18
         ret
         

    loc_0x8040f330: // orphan
         
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x87e0bffc          // 0x87e0bffc(-1, 0x442f71dcfe116408, 0x8, -1)
         a2 = 0
         ra = [sp + 0x14]
         sp += 0x18               // fp
         ret                      // ra
         

    loc_0x8040f530: // orphan
         [s3 + 0] = t2
         [s0 + 4] = 0
         [s0 + 0] = t3
         s0 = [s3 + 0]            // s4
         t5 |= 0x4340             // t9
         a0 = 0 + 5               // arg1
         t4 = s0 + 8
         [s3 + 0] = t4
         [s0 + 4] = t5
         [s0 + 0] = s2
         a2 = [s1 + 8]            // t9

    loc_0x8040f55c: // orphan
         [sp + 0x10] = 0
         a1 = 0 + 4               // arg2
         call 0x8004d19c          // 0x8004d19c(-1, 0x4, 0x8, -1)
         a3 = 0
         a2 = [s1 + 0x10]         // t9
         [sp + 0x10] = 0
         a0 = 0 + 0x61
         a1 = 0 + 2
         call 0x8004d19c          // 0x8004d19c(0x61, 0x2, -1, 0x0)
         a3 = 0
         t6 = [s1 + 0]            // t9
         t8 = 0 + 0x2e
         t9 = 0 + 0x40
         t7 = byte [t6 + 1]
         a0 = 0 + 0x1e
         a1 = 0 + 3
         if                       // unlikely
         a3 = 0

    loc_0x8040f5a4: // orphan
         // CODE XREF from fcn.80420050 @ +0x1e0
         goto 0x8040f5bc
         [sp + 0x30] = t8

    loc_0x8040f5ac: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f59c
         [sp + 0x30] = t9
         a2 = [s1 + 0xc]          // t9
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, -1, -1)
         [sp + 0x10] = 0

    loc_0x8040f5bc: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f5a4
         a0 = 0 + 0x160
         call 0x8004c990          // 0x8004c990(0x160, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t2 = [s1 + 0]            // t9
         s2 = v0                  // s4
         t3 = [sp + 0x30]         // t9
         v1 = byte [t2 + 0]
         // CODE XREF from fcn.80420050 @ +0x1e4
         v1 -= 1                  // s2
         if                       // likely
         s0 = v1 << 3

    loc_0x8040f5e4: // orphan
         s0 -= v1
         s1 = s0 + t3

    loc_0x8040f5ec: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f608
         // CODE XREF from fcn.80420050 @ +0x1e8
         a0 = s1
         a1 = 0 + 4
         a2 = s2
         a3 = 0
         call 0x8004d19c          // 0x8004d19c(0x442f71dcfe117dbd, 0x4, -1, 0x0)
         // CODE XREF from fcn.80420050 @ +0x1ec
         [sp + 0x10] = 0
         s0 -= 7
         if                       // likely
         s1 -= 7

    loc_0x8040f610: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040f5dc
         s0 = [s3 + 0]
         t6 = 0x8009 << 16
         t6 += 0x4f50
         t4 = s0 + 8
         [s3 + 0] = t4
         t5 = 0xde00 << 16
         [s0 + 0] = t5
         [s0 + 4] = t6
         ra = [sp + 0x2c]
         s3 = [sp + 0x28]
         s2 = [sp + 0x24]         // s4
         s1 = [sp + 0x20]         // t9
         s0 = [sp + 0x1c]         // t9
         ret
         sp += 0x38

    loc_0x8040f9f0: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040faac
         a0 = s5                  // t9
         call 0x87e0ca2c          // 0x87e0ca2c(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = s2

    loc_0x8040f9fc: // orphan
         // CODE XREF from fcn.80420050 @ +0x218
         t6 = 0 + 0x24
         [sp + 0x10] = t6
         a0 = [sp + 0x58]
         a1 = s6
         a2 = fp
         a3 = 0 + 0x140
         [sp + 0x14] = s7
         call 0x87f0aec0          // 0x87f0aec0(0x0, 0x442f71dcfe111002, 0x178000, 0x140)
         [sp + 0x18] = s4
         if                       // unlikely
         // CODE XREF from fcn.80420050 @ +0x220
         s0 = v0                  // s4

    loc_0x8040fa28: // orphan
         t7 = s2 << 2
         t7 -= s2
         t8 = 0x87e2 << 16
         t8 -= 0x5bcc
         t7 <<= 2
         s3 = v0 + 0x24
         a0 = s3
         call 0x8003f1dc          // 0x8003f1dc(0x123, 0x442f71dcfe116408, 0x8, -1)
         s1 = t7 + t8
         a0 = s3
         a1 = 0
         a2 = 0 - 1               // s2
         call 0x8003f114          // 0x8003f114(0x123, 0x0, -1, -1)
         a3 = [s5 + 8]            // s4
         swc1 f20, 0x5c, s0
         swc1 f20, 0x58, s0
         swc1 f20, 0x54, s0
         lwc1 f4
         a0 = s4
         a1 = s0 + 0x48
         swc1 f4, 0x48, s0
         lwc1 f6, 4, s1
         a2 = s0 + 0x54
         a3 = s0 + 0x42
         swc1 f6, 0x4c, s0
         lwc1 f8, 8, s1
         call 0x87f0afd0          // 0x87f0afd0(0xff, 0x14c, 0x158, 0x146)
         swc1 f8, 0x50, s0
         t9 = , unsigned  byte [s0 + 0x25] // s4
         t0 = t9 & 0xfffe         // t3

    loc_0x8040faa0: // orphan
         byte [s0 + 0x25] = t0

    loc_0x8040faa4: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040fa20
         s2 += 1

    loc_0x8040faa8: // orphan
         // CODE XREF from fcn.80420050 @ +0x224
         at = 0 + 4
         if                       // likely
         s4 += 0xec

    loc_0x8040fab4: // orphan
         a0 = s5 + 0x3d8          // arg1
         call 0x87e11e18          // 0x87e11e18(0x1000003d7, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0 + 3
         ra = [sp + 0x54]
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]         // t9
         s1 = [sp + 0x34]         // ra
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         s7 = [sp + 0x4c]
         fp = [sp + 0x50]
         ret
         sp += 0x68

    loc_0x8040fe10: // orphan
         // CODE XREF from fcn.80420050 @ +0x22c
         sp -= 0x48
         [sp + 0x44] = ra
         [sp + 0x40] = s3
         [sp + 0x3c] = s2
         [sp + 0x38] = s1
         [sp + 0x34] = s0
         sdc1 f22, 0x28, sp
         sdc1 f20, 0x20, sp
         s2 = [a0 + 0x1c]         // arg1 // t9
         s0 = 0x87e2 << 16
         s0 -= 0x5b9c
         if                       // unlikely
         s1 = 0 + 0xa

    loc_0x8040fe44: // orphan
         // CODE XREF from fcn.80420050 @ +0x230
         at = 0x87e2 << 16
         mtc1 0, f20
         lwc1 f22, -0x494c, at
         t6 = [s2 + 0x38]         // t9

    loc_0x8040fe54: // orphan
         // CODE XREF from fcn.8040fe60 @ 0x8040fed0
         lwc1 f4, 8, s0
         t7 = 0 + 0x5000
         s3 = [t6 + 0xc]          // t9

    loc_0x8040fed8: // orphan
         // CODE XREF from fcn.80400424 @ 0x8040fe3c
         ra = [sp + 0x44]
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         s0 = [sp + 0x34]         // ra
         s1 = [sp + 0x38]
         s2 = [sp + 0x3c]
         s3 = [sp + 0x40]
         ret
         sp += 0x48

    loc_0x80410048: // orphan
         // CODE XREF from fcn.80400424 @ 0x804100d4
         s2 = [t6 + 0xc]          // t9
         if                       // likely
         v0 = s4 & 1              // lo

    loc_0x80410054: // orphan
         if                       // unlikely
         

    loc_0x8041005c: // orphan
         v0 -= 2

    loc_0x80410060: // orphan
         // CODE XREFS from fcn.80400424 @ 0x8041004c, 0x80410054
         beql v0, 0, 0x80410074   // unlikely
         mov.s f20, f26

    loc_0x80410068: // orphan
         goto 0x80410074
         mov.s f20, f24

    loc_0x80410074: // orphan
         // CODE XREFS from fcn.80400424 @ 0x80410060, 0x80410068
         unsigned , hi            // t3 // t3
         lwc1 f4, 8, s1

    loc_0x8041007c: // orphan
         a2 = [s1 + 0]            // t9
         a3 = [s1 + 4]            // t9
         // CODE XREF from fcn.840daed4 @ +0x340
         t7 = 0 + 0x2000
         [sp + 0x18] = t7
         a0 = s2
         a1 = s0 + 0x48           // arg2
         swc1 f4, 0x10, sp
         s3 = lo
         s3 += 0xa
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x14c, -1, -1)
         [sp + 0x14] = s3
         mfc1 a2, f22
         mfc1 a3, f20
         a0 = s2
         a1 = s0 + 0x42
         swc1 f22, 0x10, sp
         [sp + 0x14] = s3
         call 0x87f0b2f4          // 0x87f0b2f4(-1, 0x146, -1, -1)
         [sp + 0x18] = 0
         s0 = [s0 + 4]
         s4 += 1
         s1 += 0xc
         bnel s0, 0, 0x80410048   // likely
         t6 = [s0 + 0x38]         // t9

    loc_0x804100dc: // orphan
         // CODE XREF from fcn.8040fff0 @ 0x80410024
         ra = [sp + 0x5c]
         ldc1 f20, 0x20, sp
         ldc1 f22, 0x28, sp
         ldc1 f24, 0x30, sp
         ldc1 f26, 0x38, sp
         s0 = [sp + 0x44]
         s1 = [sp + 0x48]
         s2 = [sp + 0x4c]
         s3 = [sp + 0x50]
         s4 = [sp + 0x54]
         s5 = [sp + 0x58]
         ret
         sp += 0x60

    loc_0x80410288: // orphan
         ret                      // ra
         

    loc_0x80410440: // orphan
         at = 0xc2f0 << 16
         beql s0, 0, 0x8041049c   // unlikely
         ra = [sp + 0x34]

    loc_0x8041044c: // orphan
         mtc1 at, f20
         
         lwc1 f4, 0x4c, s0

    loc_0x80410458: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410490
         // CODE XREF from fcn.8042028c @ 0x80420294
         t6 = [s0 + 0x38]
         lwc1 f8, 0x50, s0
         sub.s f6, f4, f20
         a2 = [s0 + 0x48]         // t9
         a0 = [t6 + 0xc]
         t7 = 0 + 0x1e
         mfc1 a3, f6
         t8 = 0 + 0x3000
         [sp + 0x18] = t8
         [sp + 0x14] = t7

    loc_0x80410480: // orphan
         a1 = s0 + 0x48           // arg2
         call 0x87f0b1a4          // 0x87f0b1a4(-1, 0x14c, 0x8, -1)
         swc1 f8, 0x10, sp
         s0 = [s0 + 4]
         bnel s0, 0, 0x80410458   // likely
         lwc1 f4, 0x4c, s0

    loc_0x80410498: // orphan
         ra = [sp + 0x34]

    loc_0x8041049c: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410444
         ldc1 f20, 0x28, sp
         s0 = [sp + 0x30]         // t9
         ret                      // ra
         sp += 0x38

    loc_0x80410540: // orphan
         ret                      // ra
         

    loc_0x804106d4: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410718
         t9 = [v0 + 0x88]
         t0 = [t9 + 0]
         bnel a1, t0, 0x8041070c  // likely
         t5 = , unsigned  byte [v0 + 0xe9] // s4

    loc_0x804106e4: // orphan
         t2 = , unsigned  byte [v0 + 0xe9] // s4

    loc_0x804106e8: // orphan
         a2 += 1                  // arg3
         t3 = t2 | 0x80           // s4

    loc_0x804106f0: // orphan
         byte [v0 + 0xe9] = t3
         t4 = byte [s0 + 0x408]   // s4
         bnel a0, t4, 0x80410718  // likely
         v1 += 1

    loc_0x80410700: // orphan
         goto 0x80410714
         byte [s0 + 0x408] = v1

    loc_0x8041070c: // orphan
         // CODE XREF from fcn.80400424 @ 0x804106dc
         t6 = t5 & 0xff7f
         byte [v0 + 0xe9] = t6

    loc_0x80410714: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410700
         v1 += 1

    loc_0x80410718: // orphan
         // CODE XREF from fcn.80400424 @ 0x804106f8
         if                       // likely
         v0 += 0xec

    loc_0x80410720: // orphan
         at = 0 + 1               // lo
         if                       // likely
         t7 = 0 + 0x3c

    loc_0x8041072c: // orphan
         t9 = byte [s0 + 0x408]   // k0
         t8 = [s0 + 0x18]
         [s0 + 0x3f4] = 0
         t0 = t9 << 2
         t0 -= t9
         t0 <<= 3
         t0 += t9
         t0 <<= 2
         t0 -= t9
         [s0 + 0x3fc] = 0
         [s0 + 0x400] = t7
         t0 <<= 2
         t1 = 0 + 1               // lo
         [sp + 0x10] = t1
         a1 = 0xc2f6 << 16
         a2 = 0xc000 << 16
         a3 = 0 + 0               // arg4
         call 0x87e13558          // 0x87e13558(-1, 0xc2f60000, 0xc0000000, 0x0)
         a0 = t8 + t0
         goto 0x8041078c
         

    loc_0x80410780: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410724
         [s0 + 0x3f4] = 0
         [s0 + 0x400] = 0
         [s0 + 0x3fc] = 0

    loc_0x8041078c: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410778
         call 0x8003570c          // 0x8003570c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         at = 0 + 9
         divu 0, v0, at
         t2 = hi
         t3 = t2 + 4
         [s0 + 0x404] = t3
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x20]         // t9
         sp += 0x38
         ret                      // s4
         

    loc_0x80410c2c: // orphan
         unsigned , hi
         [sp + 0x50] = a3
         v0 = [s1 + 0x18]         // t9
         a1 = 0x87e1 << 16
         a1 -= 0x2368             // arg2

    loc_0x80410c40: // orphan
         a0 = s1 + 0x3d8          // arg1
         a2 = 0
         t5 = lo
         t0 = v0 + t5
         [sp + 0x58] = t0
         unsigned , hi            // s4 // s4
         t6 = lo
         s2 = v0 + t6
         call 0x87e12070          // 0x87e12070(0x442f71dcfe118195, 0x442f71dcfe116408, 0x0, -1)
         
         t0 = [sp + 0x58]
         if                       // unlikely
         s0 = v0                  // s4

    loc_0x80410c74: // orphan
         [v0 + 0x20] = s1
         t8 = [t0 + 0x48]         // t9
         a1 = v0 + 0x48
         at = 0xc320 << 16
         [a1 + 0] = t8
         t7 = [t0 + 0x4c]         // t9
         mtc1 at, f4
         at = 0x4140 << 16
         [a1 + 4] = t7

    loc_0x80410c98: // orphan
         t8 = [t0 + 0x50]         // t9
         mtc1 at, f16
         a2 = v0 + 0x54
         [a1 + 8] = t8
         t9 = [sp + 0x50]
         a3 = v0 + 0x42
         t3 = [t9 + 0]
         t4 = t3 << 3
         t4 -= t3
         t4 <<= 2
         t4 -= t3
         t5 = t4 + 0x10
         mtc1 t5, f6
         
         cvt.s.w f8, f6
         lwc1 f6, 0x54, t0
         add.s f10, f4, f8
         lwc1 f8, 0x48, v0
         add.s f18, f10, f16

    loc_0x80410ce4: // orphan
         mul.s f4, f18, f6
         add.s f10, f8, f4
         swc1 f10, 0x48, v0
         t7 = [t0 + 0x54]         // t9
         [a2 + 0] = t7
         t6 = [t0 + 0x58]         // t9
         [a2 + 4] = t6
         t7 = [t0 + 0x5c]         // t9
         [a2 + 8] = t7
         lwc1 f16, 0x54, v0
         lwc1 f18, 0x58, v0
         lwc1 f6, 0x5c, v0
         a0 = [v0 + 0x38]         // t9
         swc1 f16, 0x54, v0
         swc1 f18, 0x58, v0
         swc1 f6, 0x5c, v0
         [sp + 0x3c] = a1
         call 0x87f0afd0          // 0x87f0afd0(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 += 4
         call 0x80001ff0          // 0x80001ff0(0x100000003, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f8
         at = 0x4270 << 16
         mtc1 at, f10
         cvt.s.w f4, f8
         at = 0x41a0 << 16
         mtc1 at, f18
         mtc1 0, f8
         div.s f16, f4, f10
         mul.s f6, f16, f18
         c.le.s f8, f6
         
         bc1f 0x80410db0
         
         call 0x80001ff0          // 0x80001ff0(0x100000003, 0x442f71dcfe116408, 0x8, -1)
         
         mtc1 v0, f4
         at = 0x4270 << 16
         mtc1 at, f16
         cvt.s.w f10, f4
         at = 0x41a0 << 16
         mtc1 at, f6
         at = 0x3f00 << 16
         mtc1 at, f4
         div.s f18, f10, f16
         mul.s f8, f18, f6
         add.s f10, f8, f4

    loc_0x80410da0: // orphan
         trunc.w.s f16, f10
         mfc1 v1, f16
         goto 0x80410df4
         t3 = [sp + 0x4c]

    loc_0x80410df4: // orphan
         // CODE XREF from fcn.80400424 @ 0x80410da8
         at = 0xc320 << 16
         mtc1 at, f4
         t4 = [t3 + 0]            // t9
         at = 0x4140 << 16
         mtc1 at, f6
         t5 = t4 << 3
         t5 -= t4
         t5 <<= 2
         t5 -= t4
         t6 = t5 + 0x2b
         mtc1 t6, f10
         a0 = [s0 + 0x38]
         a3 = [s2 + 0x4c]         // t9
         cvt.s.w f16, f10
         lwc1 f10, 0x54, s2
         a1 = [sp + 0x3c]
         a0 += 4
         add.s f18, f4, f16
         lwc1 f16, 0x48, s2
         add.s f8, f18, f6
         lwc1 f6, 0x50, s2
         [sp + 0x18] = 0
         [sp + 0x14] = v1
         mul.s f4, f8, f10
         swc1 f6, 0x10, sp
         add.s f18, f16, f4
         mfc1 a2, f18
         call 0x87f0b1a4          // 0x87f0b1a4(0x108, 0xfe116408, 0x8, -1)
         

    loc_0x80410e68: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]         // t9
         ret                      // ra
         sp += 0x60

}

*/
