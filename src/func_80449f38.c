/*
 * Function: 0x80449f38
 * Category: math
 */

// Decompiled C code
int fcn.8043b044 (int esi, int edx) {
// } else {
// } else {
}
return eax;
// do {
// } while (?);
// } while (?);
// } while (?);
// } while (?);
// } while (?);
}
return eax;
// } else {
// } while (?);
// } while (?);
// } while (?);
}

/*
// Full radare2 output
int fcn.8043b044 (int esi, int edx) {
    loc_0x8043b044:
        // CALL XREF from fcn.83bbcc38 @ +0xa30
        if            // unlikely
        if            // unlikely
            
    loc_0x8043b32c:
        if            // unlikely
        0x8043b330
            
    loc_0x8043f4c0:
        0x8043f4c0
        sp -= 0x20
        [sp + 0x18] = s0
        s0 = 0x8292 << 16
        s0 -= 0x65f8
        [sp + 0x1c] = ra
        t6 = a0 + 0x34c // arg1
        [s0 + 0] = t6
        call 0x8003f018 // 0x8003f018(-1, 0x442f71dcfe116408, 0x8, -1)
        a0 = t6
        a3 = 0x8292 << 16
        a3 = [a3 - 0x62e4]
        a0 = [s0 + 0]
        a1 = 0
        call 0x8003f114 // 0x8003f114(0x34b, 0x0, 0x8, 0xf23e4ebf)
        a2 = 0 - 1    // s2
        t7 = 0x8292 << 16
        t7 = [t7 - 0x63f0]
        mtc1 0, f0
        a0 = [s0 + 0]
        t8 = t7 << 2
        t8 += t7
        t8 <<= 2
        a2 = 0x8291 << 16
        a2 += t8
        mfc1 a1, f0
        mfc1 a3, f0
        a2 = [a2 + 0x1fd4] // t9
        call 0x800357a8 // 0x800357a8(0x34b, 0x0, -1, 0xf23e4ebf)
        a0 += 0x24
        a0 = [s0 + 0]
        a1 = 0
        a2 = 0 - 0x8000
        a3 = 0
        call 0x80035a68 // 0x80035a68(0x34b, 0x0, 0xffffffffffff8000, 0x0)
        a0 += 0x1e
        v0 = [s0 + 0]
        mtc1 0, f4
        t9 = , unsigned  byte [v0 + 1] // s4
        t0 = t9 & 0xfffe // t3
        byte [v0 + 1] = t0
        ra = [sp + 0x1c]
        halfword [s0 + 0x38] = 0
        swc1 f4, 0x30, s0
        s0 = [sp + 0x18]
        ret           // ra
        sp += 0x20    // fp
         // } else {
    loc_0x8043b334:
        0x8043b334
        if            // fcn.80421810+0x1eddc // unlikely
        if            // fcn.80421810+0x1ee60 // unlikely
         // } else {
        }
        return eax;
        goto loc_0x8043b050
    loc_0x8043b05c:
        if            // unlikely
        if            // unlikely
            
    loc_0x8043b1c4:
        if            // fcn.8043df28+0x10 // unlikely
        if            // fcn.8043df28+0x94 // unlikely
        // chop
            
    loc_0x8043dfbc:
        if            // likely
        t0 = , signed  t9 >> 2
        // chop
            
    loc_0x8043dfcc:
        mtc1 t0, f8
        0x8043dfd0
        cvt.s.w f0, f8
        mfc1 a2, f0
        mfc1 a3, f0
        call 0x8003730c // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
        0x8043dfe4
        v0 = halfword [s1 + 0xc]
        t1 = halfword [s1 + 0]
        swc1 f0, 4, s0
        mtc1 v0, f10
        t2 = v0 - t1
        lwc1 f12, 0x10, s0
        cvt.s.w f14, f10
        if            // fcn.8045664c-0x18638 // likely
        t3 = , signed  t2 >> 2
        // chop
            
    loc_0x8043e014:
        mtc1 t3, f16
        0x8043e018
        cvt.s.w f2, f16
        mfc1 a2, f2
        mfc1 a3, f2
        // chop
         // do {
    loc_0x8043e028:
        call 0x8003730c // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
        0x8043e02c
        t4 = halfword [s1 + 0xa]
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
         // } while (?);
        }
        return eax;
        goto loc_0x8043b068
    loc_0x8043b074:
        if            // unlikely
        // CODE XREF from fcn.8041f2b0 @ +0x514
        if            // unlikely
        // chop
            
    loc_0x8043b4e8:
        if            // fcn.8045664c-0x13a90 // unlikely
        if            // unlikely
        // chop
            
    loc_0x80442bd0:
        s0 = a0       // t9
        if            // fcn.8045664c-0x13a5c // likely
        [sp + 0x1c] = ra
        // chop
            
    loc_0x80442bf0:
        at = , s0 < 4
        if            // unlikely
        at = , s0 < 0xc
        // chop
            
    loc_0x80442c20:
        at = , s0 < 0xc
        if            // unlikely
        at = , s0 < 0x28
        // chop
            
    loc_0x80442c50:
        ra = [sp + 0x1c]
        s0 = [sp + 0x18]
        sp += 0x20
        ret           // ra
        0x80442c60
         // } else {
    loc_0x80442c2c:
        if            // unlikely
        a0 = 0x8292 << 16
         // } while (?);
         // } while (?);
         // } while (?);
        goto loc_0x8043b4f4
    loc_0x8043b4f0:
        if            // fcn.8045664c-0x13a68 // unlikely
        if            // fcn.8045664c-0x13a44 // unlikely
        // chop
            
    loc_0x80442c08:
        a2 = 0x8291 << 16
        a2 += 0x2370  // arg3
        a1 += 0x237c  // arg2
        a0 -= 0x629c  // arg1
        call fcn.82906a50
        a3 = 0 + 7
        // chop
    loc_0x8043b080: // orphan
             if                       // fcn.8043b784+0x140 // unlikely
             if                       // fcn.8043b8cc+0xc // unlikely

    loc_0x8043b08c: // orphan
         if                       // fcn.8043b8cc+0x34 // unlikely
         if                       // unlikely

    loc_0x8043b098: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b0a4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b0b0: // orphan
         if                       // fcn.80433800+0x8424 // unlikely
         if                       // unlikely

    loc_0x8043b0bc: // orphan
         if                       // fcn.80433800+0x85a0 // unlikely
         if                       // unlikely

    loc_0x8043b0c8: // orphan
         if                       // fcn.80433800+0x867c // unlikely
         if                       // fcn.80433800+0x87c0 // unlikely

    loc_0x8043b0d4: // orphan
         if                       // fcn.8043c084+0x14 // unlikely
         if                       // unlikely

    loc_0x8043b0e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b0ec: // orphan
         if                       // fcn.8043c480+0xd0 // unlikely
         

    loc_0x8043b0f4: // orphan
         
         if                       // fcn.80433800+0x911c // unlikely
         if                       // fcn.80433800+0x9130 // unlikely

    loc_0x8043b104: // orphan
         
         if                       // fcn.80421810+0x1b64c // unlikely
         if                       // fcn.80421810+0x1b660 // unlikely

    loc_0x8043b1dc: // orphan
         if                       // unlikely
         if                       // fcn.80421810+0x1cb64 // unlikely

    loc_0x8043b1e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b1f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b200: // orphan
         if                       // fcn.8043e820+0x54 // unlikely
         if                       // fcn.8045664c-0x17c94 // unlikely

    loc_0x8043b20c: // orphan
         if                       // fcn.8045664c-0x17b3c // unlikely
         if                       // fcn.8045664c-0x17b28 // unlikely

    loc_0x8043b218: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b224: // orphan
         if                       // fcn.8045664c-0x17974 // unlikely
         if                       // fcn.8043ed08+0x4 // unlikely

    loc_0x8043b230: // orphan
         if                       // fcn.8043ed08+0x6c // unlikely
         if                       // fcn.8043ed08+0xa0 // unlikely

    loc_0x8043b23c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b248: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b254: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b264: // orphan
         if                       // fcn.80421810+0x1dab8 // unlikely
         if                       // unlikely

    loc_0x8043b270: // orphan
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b284: // orphan
         if                       // unlikely
         

    loc_0x8043b28c: // orphan
         
         if                       // fcn.8043f604+0x20 // unlikely
         if                       // unlikely

    loc_0x8043b29c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b2a8: // orphan
         
         
         if                       // fcn.80421810+0x1df84 // unlikely
         if                       // fcn.80421810+0x1dfc8 // unlikely

    loc_0x8043b2bc: // orphan
         if                       // fcn.80421810+0x1dfc0 // unlikely
         if                       // fcn.8043f84c+0x78 // unlikely

    loc_0x8043b2c8: // orphan
         if                       // fcn.8043f84c+0xd0 // unlikely
         if                       // fcn.8043f84c+0xf4 // unlikely

    loc_0x8043b2d4: // orphan
         if                       // unlikely
         if                       // fcn.80421810+0x1e35c // unlikely

    loc_0x8043b2e0: // orphan
         if                       // fcn.8045664c-0x16a88 // unlikely
         

    loc_0x8043b2e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b2f4: // orphan
         if                       // fcn.8045664c-0x16784 // unlikely
         if                       // unlikely

    loc_0x8043b300: // orphan
         if                       // fcn.8044006c+0x18 // unlikely
         if                       // fcn.80440098 // unlikely

    loc_0x8043b30c: // orphan
         if                       // unlikely
         if                       // fcn.80421810+0x1eab4 // unlikely

    loc_0x8043b318: // orphan
         if                       // fcn.8045664c-0x16350 // unlikely
         if                       // fcn.8045664c-0x1633c // unlikely

    loc_0x8043b324: // orphan
         if                       // fcn.8045664c-0x162f4 // unlikely
         if                       // unlikely

    loc_0x8043b330: // orphan
         if                       // unlikely
         

    loc_0x8043b344: // orphan
         if                       // fcn.80421810+0x1ee78 // unlikely
         if                       // fcn.80421810+0x1ee0c // unlikely

    loc_0x8043b350: // orphan
         
         
         if                       // fcn.8045664c-0x15ef0 // unlikely
         if                       // unlikely

    loc_0x8043b364: // orphan
         if                       // fcn.80440788+0x10 // unlikely
         if                       // fcn.80440848+0x44 // unlikely

    loc_0x8043b370: // orphan
         if                       // fcn.80440848+0x9c // unlikely
         if                       // fcn.80440848+0xc0 // unlikely

    loc_0x8043b37c: // orphan
         // CODE XREF from fcn.8041f2b0 @ +0x518
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b388: // orphan
         if                       // fcn.80440bf4+0x28 // unlikely
         if                       // unlikely

    loc_0x8043b394: // orphan
         if                       // fcn.8045664c-0x15874 // unlikely
         if                       // fcn.8045664c-0x15860 // unlikely

    loc_0x8043b398: // orphan
         if                       // fcn.8045664c-0x15874 // unlikely
         if                       // fcn.8045664c-0x15860 // unlikely

    loc_0x8043b3a0: // orphan
         if                       // fcn.8045664c-0x15798 // unlikely
         if                       // unlikely

    loc_0x8043b3a4: // orphan
         if                       // fcn.8045664c-0x15798 // unlikely
         if                       // unlikely

    loc_0x8043b3ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b3b0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b3b8: // orphan
         if                       // unlikely
         

    loc_0x8043b3bc: // orphan
         if                       // unlikely
         

    loc_0x8043b3c0: // orphan
         
         if                       // fcn.8044110c+0xec // unlikely
         if                       // fcn.8044110c+0x100 // unlikely

    loc_0x8043b3d0: // orphan
         if                       // unlikely
         if                       // fcn.80441458 // unlikely

    loc_0x8043b3dc: // orphan
         if                       // fcn.8045664c-0x151ac // unlikely
         if                       // unlikely

    loc_0x8043b3e8: // orphan
         if                       // fcn.804414cc+0x1c // unlikely
         if                       // fcn.804414f4+0x18 // unlikely

    loc_0x8043b3f4: // orphan
         if                       // fcn.804414f4+0x84 // unlikely
         if                       // unlikely

    loc_0x8043b400: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b40c: // orphan
         if                       // fcn.8045664c-0x14fcc // unlikely
         if                       // unlikely

    loc_0x8043b418: // orphan
         if                       // unlikely
         if                       // fcn.8045664c-0x14f3c // unlikely

    loc_0x8043b424: // orphan
         if                       // fcn.804418c0+0x68 // unlikely
         if                       // fcn.8045664c-0x14d10 // unlikely

    loc_0x8043b430: // orphan
         if                       // fcn.8045664c-0x14bb8 // unlikely
         if                       // fcn.8045664c-0x14ae4 // unlikely

    loc_0x8043b43c: // orphan
         if                       // fcn.80441b9c+0x14 // unlikely

    loc_0x8043b4ec: // orphan
         if                       // fcn.8045664c-0x13a90 // unlikely
         if                       // unlikely

    loc_0x8043b4f8: // orphan
         if                       // fcn.8045664c-0x13a44 // unlikely
         if                       // fcn.8045664c-0x13a10 // unlikely

    loc_0x8043b504: // orphan
         if                       // unlikely
         if                       // fcn.8043b448+0x7840 // unlikely

    loc_0x8043b510: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b51c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b528: // orphan
         if                       // fcn.80443000+0x8 // unlikely
         if                       // unlikely

    loc_0x8043b964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b97c: // orphan
         if                       // fcn.80447df0+0x30 // unlikely
         if                       // fcn.8045664c-0xe7f8 // unlikely

    loc_0x8043b988: // orphan
         if                       // fcn.8045664c-0xe800 // unlikely
         if                       // fcn.8045664c-0xe73c // unlikely

    loc_0x8043b994: // orphan
         if                       // fcn.8045664c-0xe724 // unlikely
         if                       // fcn.8045664c-0xe710 // unlikely

    loc_0x8043b9a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b9ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043b9b8: // orphan
         if                       // fcn.80448460+0x9c // unlikely
         if                       // fcn.80448460+0xb0 // unlikely

    loc_0x8043b9c4: // orphan
         if                       // unlikely
         if                       // fcn.804486b4-0x88 // unlikely

    loc_0x8043b9d0: // orphan
         if                       // fcn.804486b4-0x50 // unlikely
         if                       // fcn.804486b4+0x104 // unlikely

    loc_0x8043b9dc: // orphan
         if                       // fcn.8045664c-0xdd5c // unlikely
         if                       // fcn.8045664c-0xdd48 // unlikely

    loc_0x8043b9e8: // orphan
         if                       // fcn.8045664c-0xdd10 // unlikely
         

    loc_0x8043b9f0: // orphan
         if                       // fcn.8045664c-0xdcd8 // unlikely
         if                       // unlikely

    loc_0x8043b9fc: // orphan
         if                       // fcn.8045664c-0xdcdc // unlikely
         if                       // fcn.8045664c-0xdca8 // unlikely

    loc_0x8043ba08: // orphan
         if                       // unlikely
         if                       // fcn.80434154+0x1494c // unlikely

    loc_0x8043ba14: // orphan
         if                       // fcn.80434154+0x14ab4 // unlikely
         if                       // unlikely

    loc_0x8043ba20: // orphan
         if                       // fcn.80434068+0x14ebc // unlikely
         if                       // fcn.80434068+0x14ed0 // unlikely

    loc_0x8043ba2c: // orphan
         if                       // fcn.80434068+0x14ef8 // unlikely
         if                       // unlikely

    loc_0x8043ba38: // orphan
         if                       // fcn.80434068+0x14fa4 // unlikely
         if                       // unlikely

    loc_0x8043ba44: // orphan
         if                       // fcn.8045664c-0xd5b4 // unlikely
         if                       // fcn.8045664c-0xd590 // unlikely

    loc_0x8043ba50: // orphan
         if                       // fcn.8045664c-0xd4f8 // unlikely
         if                       // fcn.8045664c-0xd564 // unlikely

    loc_0x8043ba5c: // orphan
         if                       // fcn.8045664c-0xd54c // unlikely
         if                       // fcn.8045664c-0xd538 // unlikely

    loc_0x8043ba60: // orphan
         if                       // fcn.8045664c-0xd54c // unlikely
         if                       // fcn.8045664c-0xd538 // unlikely

    loc_0x8043ba68: // orphan
         if                       // fcn.8045664c-0xd450 // unlikely
         if                       // fcn.8045664c-0xd3fc // unlikely

    loc_0x8043ba74: // orphan
         if                       // fcn.8045664c-0xd404 // unlikely
         if                       // fcn.8045664c-0xd420 // unlikely

    loc_0x8043ba80: // orphan
         if                       // fcn.8045664c-0xd498 // unlikely
         if                       // fcn.8045664c-0xd484 // unlikely

    loc_0x8043ba8c: // orphan
         if                       // fcn.8045664c-0xd44c // unlikely
         if                       // fcn.8045664c-0xd438 // unlikely

    loc_0x8043ba98: // orphan
         if                       // fcn.8045664c-0xd3a0 // unlikely
         if                       // fcn.8045664c-0xd38c // unlikely

    loc_0x8043baa4: // orphan
         if                       // fcn.804495e4-0x1fc // unlikely
         

    loc_0x8043baac: // orphan
         
         if                       // fcn.80449764+0x60 // unlikely
         if                       // fcn.80449764+0x74 // unlikely

    loc_0x8043babc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bacc: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bad4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bad8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bae0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bae4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043baec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043baf0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043baf8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bafc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb04: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb08: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb10: // orphan
         if                       // fcn.8045664c-0xc1f8 // unlikely
         if                       // unlikely

    loc_0x8043bb14: // orphan
         if                       // fcn.8045664c-0xc1f8 // unlikely
         if                       // unlikely

    loc_0x8043bb1c: // orphan
         if                       // fcn.8045664c-0xc20c // unlikely
         if                       // fcn.8045664c-0xc1c8 // unlikely

    loc_0x8043bb20: // orphan
         if                       // fcn.8045664c-0xc20c // unlikely
         if                       // fcn.8045664c-0xc1c8 // unlikely

    loc_0x8043bb28: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb2c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb34: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb44: // orphan
         
         if                       // fcn.8044ac54+0x1b8 // unlikely
         if                       // fcn.8044ac54+0x1cc // unlikely

    loc_0x8043bb54: // orphan
         
         if                       // fcn.8044b110+0xcc // unlikely
         if                       // fcn.8044b110+0xe0 // unlikely

    loc_0x8043bb64: // orphan
         
         if                       // fcn.80434154+0x174a8 // unlikely
         if                       // fcn.80434154+0x174bc // unlikely

    loc_0x8043bb74: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bb84: // orphan
         
         
         
         if                       // unlikely

    loc_0x8043bb9c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bba8: // orphan
         if                       // fcn.8044bdb4+0x28 // unlikely
         if                       // unlikely

    loc_0x8043bbb4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bbc0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bbd0: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bbe0: // orphan
         
         if                       // unlikely

    loc_0x8043bc48: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x8043bdf4: // orphan
         if                       // fcn.80433800+0x1a318 // unlikely

    loc_0x8043be00: // orphan
         

    loc_0x8043c33c: // orphan
         if                       // unlikely
         [a0 + 0] = t9            // arg1

    loc_0x8043c344: // orphan
         goto 0x8043c350
         v1 = a2

    loc_0x8043c34c: // orphan
         v1 = 0

    loc_0x8043c350: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c344
         if                       // unlikely
         t6 = v1 & 0x3ff

    loc_0x8043c358: // orphan
         goto 0x8043c364
         v0 = t2                  // s4

    loc_0x8043c360: // orphan
         v0 = 0

    loc_0x8043c364: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c358
         t7 = v0 & 0x3ff          // s4
         t8 = t7 << 2
         t9 = t6 << 0xe
         t7 = t8 | t9
         [a0 + 4] = t7            // arg1
         t6 = , unsigned  halfword [sp + 0x22]
         t8 = halfword [sp + 0x32]
         t4 = halfword [sp + 0x2e]
         t9 = halfword [sp + 0x36]
         a1 = t3 + t6             // arg2
         a0 = a2 + t8             // arg3
         at = , a1 < a0
         t5 = 0xf600 << 16
         a3 = t2 + ra             // arg4
         if                       // fcn.8043c480+0xbc // likely
         t1 = t4 + t9

    loc_0x8043c3a4: // orphan
         at = , t4 < t2
         beql at, 0, 0x8043c434   // fcn.8043c418+0x1c // likely
         at = , a3 < t1           // lo

    loc_0x8043c3b0: // orphan
         a2 = [t0 + 0]            // t9
         v1 = 0
         v0 = 0
         t7 = a2 + 8              // arg3
         if                       // unlikely
         [t0 + 0] = t7

    loc_0x8043c3c8: // orphan
         goto 0x8043c3d0
         v1 = a0                  // t9

    loc_0x8043c3d0: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c3c8
         if                       // unlikely
         t7 = v1 & 0x3ff

    loc_0x8043c3d8: // orphan
         goto 0x8043c3e0
         v0 = t2                  // s4

    loc_0x8043c3e0: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c3d8
         t6 = v0 & 0x3ff          // s4
         t8 = t6 << 2
         t9 = t8 | t5
         t6 = t7 << 0xe
         t8 = t9 | t6
         if                       // unlikely
         [a2 + 0] = t8            // arg3

    loc_0x8043c3f8: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c3d8
         t6 = v0 & 0x3ff          // s4
         t8 = t6 << 2
         t9 = t8 | t5
         t6 = t7 << 0xe
         t8 = t9 | t6
         if                       // unlikely
         [a2 + 0] = t8            // arg3

    loc_0x8043c3fc: // orphan
         goto 0x8043c408
         v1 = a1                  // t0

    loc_0x8043c404: // orphan
         v1 = 0

    loc_0x8043c408: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043c3fc
         if                       // fcn.8043c418 // unlikely
         t6 = v1 & 0x3ff

    loc_0x8043c410: // orphan
         goto 0x8043c41c          // fcn.8043c418+0x4
         v0 = t4                  // t9

    loc_0x8043e0f8: // orphan
         mtc1 t1, f6
         
         // CODE XREF from fcn.8041f2b0 @ +0x5e0
         cvt.s.w f0, f6
         mfc1 a2, f0
         mfc1 a3, f0
         call 0x8003730c          // 0x8003730c(-1, 0x442f71dcfe116408, 0x8, -1)
         
         v0 = halfword [s1 + 0]
         t2 = halfword [s1 + 0xc]
         swc1 f0, 4, s0
         mtc1 v0, f8
         t3 = t2 - v0
         lwc1 f12, 0x10, s0
         cvt.s.w f14, f8
         if                       // likely
         t4 = , signed  t3 >> 2

    loc_0x8043e5bc: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043e5f8
         call 0x80064d28          // 0x80064d28(-1, 0x442f71dcfe116408, 0x8, -1)
         
         .qword 0x0ca4098300000000
         call fcn.82902634
         
         t7 = [s1 + 0]            // t9
         t8 = , unsigned  halfword [t7 + 8]
         t9 = t8 & 0xd000

    loc_0x8043e5e0: // orphan
         if                       // unlikely
         

    loc_0x8043e5e8: // orphan
         [s0 + 0] = 0

    loc_0x8043e5ec: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043e5e0
         call fcn.82901ba8
         
         t0 = [s0 + 0]
         if                       // unlikely
         

    loc_0x8043e600: // orphan
         // CODE XREF from fcn.8043e428 @ +0x188
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x8043e71c: // orphan
         call 0x80002b44          // 0x80002b44(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x454e             // t9
         a0 = 1 << 16
         a0 |= 0x4000
         call 0x80006cd0          // 0x80006cd0(0x14000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         // CODE XREF from fcn.8041f2b0 @ +0x604
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0 + 1               // lo
         a1 = 0
         a2 = 0 + 2
         call 0x800082e0          // 0x800082e0(0x1, 0x0, 0x2, -1)
         a3 = 0 + 1               // lo
         [sp + 0x24] = v0
         call 0x8004c09c          // 0x8004c09c(0x1, 0x0, 0x2, 0x1)
         a0 = 0 + 3
         call 0x8004c4b0          // 0x8004c4b0(0x3, 0x0, 0x2, 0x1)
         a0 = 0 + 0x16
         call 0x8004c8c0          // 0x8004c8c0(0x16, 0x0, 0x2, 0x1)
         a0 = 0 + 0x158
         call fcn.82902920
         
         a0 = 0 + 0x10
         call 0x80047588          // 0x80047588(0x10, 0x0, 0x2, 0x1)
         a1 = 0

    loc_0x8043ee44: // orphan
         lwc1 f6, -0x7688, at
         a3 = halfword [sp + 0x42]
         at = 0xbf00 << 16
         mul.s f10, f6, f16
         mtc1 a3, f4
         
         cvt.s.w f6, f4
         mul.s f8, f10, f18
         add.s f10, f14, f12
         div.s f0, f8, f6
         // CODE XREF from fcn.8041f2b0 @ +0x678
         trunc.w.s f4, f10
         c.lt.s f2, f0
         
         bc1fl 0x8043ee94
         mtc1 at, f2
         at = 0x3f00 << 16
         mtc1 at, f2
         goto 0x8043ee9c
         add.s f8, f2, f0

    loc_0x8043ee9c: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043ee88
         mfc1 t7, f4
         // CODE XREF from fcn.8041f2b0 @ +0x67c
         a0 = halfword [sp + 0x36]
         a1 = halfword [sp + 0x3a]
         trunc.w.s f6, f8
         [sp + 0x10] = 0
         [sp + 0x14] = 0
         [sp + 0x20] = 0
         // CODE XREF from fcn.8041f2b0 @ +0x684
         mfc1 t9, f6
         [sp + 0x18] = t7
         call 0x80044270          // 0x80044270(0x0, 0x0, 0x8, -1)
         [sp + 0x1c] = t9
         ra = [sp + 0x2c]
         // CODE XREF from fcn.8041f2b0 @ +0x688
         sp += 0x30
         ret
         

    loc_0x8043ef10: // orphan
         t7 -= 0x71b0
         a3 = v0 + t7             // arg4
         mul.s f8, f4, f6
         lwc1 f16                 // arg4
         lwc1 f10                 // arg2
         // CODE XREF from fcn.8041f2b0 @ +0x6b0
         mul.s f18, f10, f16
         add.s f4, f8, f18
         swc1 f4                  // arg1
         lwc1 f10, 8, a1          // arg2
         lwc1 f6                  // arg4
         // CODE XREF from fcn.8041f2b0 @ +0x694
         lwc1 f8                  // arg2
         lwc1 f4
         mul.s f16, f6, f10
         neg.s f18, f8
         mul.s f6, f18, f4
         add.s f10, f16, f6
         ret                      // ra
         swc1 f10, 8, a0          // arg1

    loc_0x8043f030: // orphan
         a0 += 0xb4               // arg1
         t6 = , unsigned  byte [s1 + 0x1070] // s4
         t0 = 0 + 0x1c
         v1 = 0x8291 << 16
         // CODE XREF from fcn.8041f2b0 @ +0x6ac
         unsigned , hi
         v1 += 0x2db8
         at = 0x8292 << 16
         t7 = lo
         t8 = v1 + t7
         t9 = halfword [t8 + 0]
         // CODE XREF from fcn.8041f2b0 @ +0x6b4
         halfword [s0 + 0x90] = t9
         t1 = , unsigned  byte [s1 + 0x1070] // s4
         t6 = halfword [s1 + 0x24]
         unsigned , hi
         t2 = lo
         t3 = v1 + t2
         t4 = halfword [t3 + 2]
         t5 = ~t4
         t7 = t5 + t6
         halfword [at - 0x6336] = t7
         t8 = , unsigned  byte [s1 + 0x1070] // s4
         lwc1 f18, 0x74, s0
         t5 = [s0 + 0]
         unsigned , hi
         t9 = lo
         t1 = v1 + t9
         lwc1 f4, 4, t1
         mul.s f8, f18, f4
         swc1 f8, 0x74, s0
         t2 = , unsigned  byte [s1 + 0x1070] // s4
         unsigned , hi
         t3 = lo
         t4 = v1 + t3
         lwc1 f0, 0x10, t4
         swc1 f0, 0x2c, t5
         v0 = [s0 + 0]
         t6 = halfword [s0 + 0x92]
         a3 = halfword [s0 + 0x90]
         a2 = [s0 + 0x74]         // t9
         swc1 f0, 0x88, s0
         a0 = v0 + 0xb4           // arg1
         a1 = v0 + 0xa8           // arg2
         call 0x800371b4          // 0x800371b4(0xb4, 0xa8, -1, 0x6001)
         [sp + 0x10] = t6
         ra = [sp + 0x24]         // s4
         s0 = [sp + 0x1c]         // t9
         s1 = [sp + 0x20]
         ret                      // s4
         sp += 0x40

    loc_0x8043f250: // orphan
         a3 = [t5 + 0]            // t9
         t7 = 0x8292 << 16
         t7 = [t7 - 0x63e8]

    loc_0x8043f2ec: // orphan
         sub.s f4, f12, f0
         mul.s f6, f4, f14
         add.s f8, f6, f0
         swc1 f8                  // arg1
         lwc1 f10                 // arg1
         ldc1 f16, 0x7438, at
         at = 0x8291 << 16
         cvt.d.s f2, f10
         c.lt.d f2, f16
         
         bc1f 0x8043f33c
         
         ldc1 f18, 0x7440, at
         c.lt.d f18, f2
         
         bc1f 0x8043f33c
         
         mtc1 0, f4
         
         swc1 f4                  // arg1
         ret                      // ra
         

    loc_0x8043f440: // orphan
         a1 = [a1 + 0x2098]       // arg2 // t9
         call 0x800357a8          // 0x800357a8(-1, -1, 0x8, -1)
         a0 += 0xb4
         t2 = 0x8292 << 16
         t2 -= 0x63c8
         at = 0x41f0 << 16
         mtc1 at, f4
         t6 = [t2 + 0]
         t1 = 0x8292 << 16
         at = 0x4448 << 16
         swc1 f4, 0x2c, t6
         mtc1 at, f6
         t1 -= 0x62d0
         t7 = 0 - 0x4000
         v0 = [t2 + 0]
         v1 = 0x8292 << 16
         t0 = 0x8292 << 16
         halfword [t1 + 0] = t7

    loc_0x8043f488: // orphan
         t8 = halfword [t1 + 0]
         t0 -= 0x62d2
         v1 -= 0x62cc
         halfword [t0 + 0] = 0
         swc1 f6
         a2 = [v1 + 0]            // t9
         a3 = halfword [t0 + 0]
         a0 = v0 + 0xb4
         a1 = v0 + 0xa8

    loc_0x8043f4ac: // orphan
         call 0x800371b4          // 0x800371b4(-1, 0x442f71dcfe116408, 0x8, -1)
         [sp + 0x10] = t8
         ra = [sp + 0x1c]         // t9
         sp += 0x20
         ret                      // t9
         

    loc_0x8043f654: // orphan
         goto 0x8043f65c
         swc1 f14, 0xec, v1

    loc_0x8043f6a8: // orphan
         [sp + 0x18] = a0
         a0 = [sp + 0x18]         // t9
         mtc1 0, f0
         v0 = 0x8292 << 16
         t6 = 0 - 1               // s2
         v0 -= 0x62b8
         halfword [a0 + 0x1068] = 0 // arg1
         byte [a0 + 0x1072] = 0   // arg1
         byte [a0 + 0x1070] = 0   // arg1
         halfword [a0 + 0x106c] = t6 // arg1
         byte [v0 + 0] = 0
         swc1 f0, 4, v0
         call fcn.8290325c        // fcn.8290325c(-1, 0x442f71dcfe116408, 0x8, -1)
         swc1 f0, 8, v0
         call fcn.82903298        // fcn.82903298(-1, 0x442f71dcfe116408, 0x8)
         a0 = [sp + 0x18]         // t9

    loc_0x8043fe10: // orphan
         t6 = , unsigned  halfword [a2 + 0]
         [sp + 0x10] = 0
         mfc1 t3, f6
         a3 = 0
         t4 = t3 << 0x10
         t5 = , signed  t4 >> 0x10 // t3
         if                       // likely
         t7 = , signed  t6 >> 1

    loc_0x8043fe30: // orphan
         at = t6 + 1
         t7 = , signed  at >> 1

    loc_0x8043fe38: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8043fe28
         call 0x8004d19c          // 0x8004d19c(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = t5 - t7             // t9
         ra = [sp + 0x24]         // s4
         // CODE XREF from fcn.8043fc54 @ +0x138
         s0 = [sp + 0x20]
         sp += 0x28
         ret                      // s4
         

    loc_0x8044004c: // orphan
           // CALL XREF from fcn.83cfc800 @ +0x20bc
         a2 = 0 + 1               // arg3 // lo
         call 0x800499ec          // 0x800499ec(-1, 0x442f71dcfe116408, 0x1, -1)
         

    loc_0x804407a0: // orphan
         sp -= 0x48
         t7 = 0x8291 << 16
         [sp + 0x14] = ra
         [sp + 0x48] = a0
         t7 += 0x20a8
         t9 = [t7 + 0]
         t8 = [t7 + 4]

    loc_0x80440b48: // orphan
         t6 = , unsigned  byte [v0 + 0x18] // s4
         t8 = , unsigned  byte [v0 + 0x88] // s4
         t0 = , unsigned  byte [v0 + 0xf8] // s4
         v0 += 0x1c
         t7 = t6 & v1             // k0
         t9 = t8 & v1             // k0
         t1 = t0 & v1             // k0

    loc_0x80440b64: // orphan
         byte [v0 - 4] = t7
         byte [v0 + 0x6c] = t9
         if                       // likely
         byte [v0 + 0xdc] = t1

    loc_0x80440b74: // orphan
         a0 = 0x8292 << 16
         a0 -= 0x6578             // arg1
         t2 = 0 + 0xff            // s4
         t3 = 0 + 0xc8
         t4 = 0 + 0xff            // s4
         t5 = 0 + 0x14
         [sp + 0x20] = t5
         [sp + 0x1c] = t4
         [sp + 0x18] = t3
         [sp + 0x10] = t2
         a1 = a0
         a2 = 0 + 0xff            // arg3 // s4
         a3 = 0 + 0xff            // arg4 // s4
         call fcn.82904ac8
         [sp + 0x14] = 0

    loc_0x80440da0: // orphan
         [sp + 0x14] = ra
         t6 = , unsigned  byte [a0 + 0x1070] // arg1
         a3 = 0 + 5               // arg4
         a1 = a0                  // t9
         if                       // fcn.80456444-0x15688 // likely
         a2 = 0 + 0x50            // arg3

    loc_0x80440db8: // orphan
         a2 = 0 + 0x78            // arg3

    loc_0x80441018: // orphan
         
         goto 0x804410a0          // fcn.80441030+0x70
         // CALL XREF from fcn.82b54018 @ +0x40
         ra = [sp + 0x14]

    loc_0x80441064: // orphan
         call fcn.82904c28
         

    loc_0x804410ac: // orphan
         sp -= 0x18
         [sp + 0x14] = ra
         call 0x800088a4          // 0x800088a4(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 1               // lo
         call 0x80007aec          // 0x80007aec(0x1, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         t6 = 0x8292 << 16
         t6 = [t6 - 0x63ec]
         a0 = 0x8292 << 16
         a0 -= 0x63e0
         t7 = halfword [t6 + 6]
         a1 = 0 + 1               // lo
         if                       // fcn.80421810+0x1f8ec // unlikely
         

    loc_0x804410e4: // orphan
         a0 = 0x8292 << 16
         call 0x80055ef0          // 0x80055ef0(0x82920000, 0x442f71dcfe116408, 0x8, -1)
         a0 -= 0x63e0

    loc_0x804414c4: // orphan
         if                       // fcn.804414cc+0x4 // likely
         t1 = 0 + 8               // a2

    loc_0x804415ac: // orphan
         [sp + 0x1c] = ra
         a0 = 0x43 << 16
         [sp + 0x2c] = a1
         call 0x80002b44          // 0x80002b44(0x430000, 0x442f71dcfe116408, 0x8, -1)
         a0 |= 0x4150
         a0 = 1 << 16
         a0 |= 0x8000
         call 0x80006cd0          // 0x80006cd0(0x18000, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t6 = 0 + 2
         t7 = 0 + 1               // lo
         [sp + 0x14] = t7
         [sp + 0x10] = t6
         a0 = 0
         a1 = 0 + 1               // lo
         a2 = 0 + 3
         call 0x800082e0          // 0x800082e0(0x0, 0x1, 0x3, -1)
         a3 = 0 + 1               // lo
         [sp + 0x24] = v0
         a0 = 0 + 0x13
         call 0x80047588          // 0x80047588(0x13, 0x1, 0x3, 0x1)
         a1 = 0
         call 0x800356cc          // 0x800356cc(0x13, 0x0, 0x3, 0x1)
         a0 = 0 + 0x10
         a0 = v0                  // s4
         a1 = 0
         a2 = 0 + 1               // lo
         call 0x8000484c          // 0x8000484c(0xff, 0x0, 0x1, 0x1)
         a3 = 0 + 1               // lo
         at = 0x8292 << 16
         t8 = [sp + 0x2c]

    loc_0x80441628: // orphan
         [at - 0x62ec] = v0
         at = 0x8292 << 16
         a0 = 0 + 0x23
         call 0x8004c09c          // 0x8004c09c(0x23, 0x442f71dcfe116408, 0x8, -1)
         [at - 0x63ec] = t8

    loc_0x80441734: // orphan
         [sp + 0x20] = s0
         s0 = a1                  // t0
         [sp + 0x24] = ra
         if                       // likely
         a2 = a0                  // t9

    loc_0x80441748: // orphan
         v1 = 0x8292 << 16
         v1 -= 0x62dc
         t6 = [v1 + 0]
         a0 = 0 + 0xc             // arg1
         v0 = 0x8291 << 16
         unsigned , hi
         v0 += 0x20c0
         t7 = lo
         t8 = v0 + t7
         t9 = , unsigned  byte [t8 + 0] // s4
         byte [a1 + 0x18] = t9    // arg2
         t0 = [v1 + 0]
         unsigned , hi
         t1 = lo
         t2 = v0 + t1
         t3 = , unsigned  byte [t2 + 1] // s4
         byte [a1 + 0x19] = t3    // arg2
         t4 = [v1 + 0]
         unsigned , hi
         t5 = lo
         t6 = v0 + t5
         t7 = , unsigned  byte [t6 + 2] // s4
         byte [a1 + 0x1a] = t7    // arg2

    loc_0x804417a4: // orphan
         v0 = 0x8291 << 16
         v1 = 0x8292 << 16
         at = 0 + 2
         v1 -= 0x62dc
         v0 += 0x20c0
         if                       // fcn.8045664c-0x14cd8 // likely
         a0 = 0 + 0xc             // arg1

    loc_0x804417c0: // orphan
         a1 = 0x8292 << 16
         a1 -= 0x6230             // arg2
         a2 = , unsigned  byte [a1 + 0] // arg2
         t8 = , unsigned  byte [a1 + 1] // arg2
         t0 = , unsigned  byte [a1 + 2] // arg2
         a3 = 0 + 0xff            // arg4 // s4
         t9 = a2 & t8             // arg3
         t1 = t9 & t0
         bnel a3, t1, 0x80441838  // likely
         t4 = [v1 + 0]            // t9

    loc_0x804417e8: // orphan
         t2 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t3 = lo
         t4 = v0 + t3
         t5 = , unsigned  byte [t4 + 0] // s4
         byte [s0 + 0x18] = t5
         t6 = [v1 + 0]            // t9
         unsigned , hi            // lo // lo
         t7 = lo
         t8 = v0 + t7
         t9 = , unsigned  byte [t8 + 1] // s4

    loc_0x80441838: // orphan
         unsigned , hi            // lo // lo
         t5 = lo

    loc_0x80441be4: // orphan
         if                       // fcn.8045664c-0x14a04 // likely
         at = 0 + 2

    loc_0x80441bec: // orphan
         a2 = 0x8292 << 16
         a2 -= 0x62dc
         t6 = [a2 + 0]
         a3 = 0 + 0xc
         v1 = 0x8291 << 16
         unsigned , hi
         v1 += 0x20c0
         t7 = lo
         t8 = v1 + t7
         t9 = , unsigned  byte [t8 + 8] // s4
         byte [a1 + 0x18] = t9
         t1 = [a2 + 0]

    loc_0x80447c48: // orphan
         s4 = 0 + 1               // lo

    loc_0x80447c4c: // orphan
         s5 = 0 + 0x32
         s6 = 0 + 0x29
         s7 = 0 + 3
         fp = 0 + 4

    loc_0x80448218: // orphan
         t6 = , unsigned  byte [s0 + 0x1a2] // s4
         if                       // unlikely
         

    loc_0x80448224: // orphan
         call 0x80001ff0          // "TU" // 0x80001ff0(-1, 0x442f71dcfe116408, 0x8, -1)
         
         bnel v0, s5, 0x80448248  // likely
         lwc1 f8, 0x170, s0

    loc_0x80448234: // orphan
         lwc1 f4, 0x170, s0
         sub.s f6, f4, f20
         goto 0x80448250
         swc1 f6, 0x170, s0

    loc_0x80448248: // orphan
         sub.s f10, f8, f24
         swc1 f10, 0x170, s0

    loc_0x80448250: // orphan
         // CODE XREF from fcn.8043b044 @ 0x8044823c
         t7 = halfword [s0 + 0x192]
         a0 = s1
         t8 = t7 - 0x71c
         call fcn.8290a208
         halfword [s0 + 0x192] = t8
         lwc1 f16, 0x170, s0
         c.le.s f16, f22
         
         bc1fl 0x80448318
         s1 += 1
         byte [s0 + 0x1a2] = 0
         t9 = halfword [s2 + 0x1068]
         t2 = , unsigned  byte [s2 + 0x1071] // s4
         t0 = t9 << 4
         t0 += t9
         t0 <<= 1
         t1 = s3 + t0
         t3 = t2 << 1
         t4 = t1 + t3
         t5 = , unsigned  halfword [t4 + 0]
         beql t5, 0, 0x80448318   // unlikely
         s1 += 1

    loc_0x804482a8: // orphan
         call fcn.8290b3bc        // "T@" // fcn.8290b3bc(-1)
         
         bnel v0, 0, 0x80448318   // likely
         s1 += 1

    loc_0x804482b8: // orphan
         t6 = halfword [s2 + 0x1068]
         t9 = , unsigned  byte [s2 + 0x1071] // s4
         a0 = s1
         t7 = t6 << 4

    loc_0x804482c8: // orphan
         t7 += t6
         t7 <<= 1
         t8 = s3 + t7
         t0 = t9 << 1
         t2 = t8 + t0
         call fcn.8290a358        // fcn.828f2530+0x17e28
         a1 = , unsigned  halfword [t2 + 0]
         goto 0x80448318
         s1 += 1

    loc_0x804482ec: // orphan
         call 0x800427b8          // "P@" // 0x800427b8(-1, 0x442f71dcfe116408, 0x8, -1)
         a0 = [s0 + 0]
         beql v0, 0, 0x80448318   // unlikely
         s1 += 1

    loc_0x804482fc: // orphan
         call fcn.8290b40c        // fcn.8290b40c(-1)
         
         if                       // unlikely
         a0 = s1

    loc_0x8044830c: // orphan
         call fcn.8290abb0        // "&1"
         a1 = , unsigned  byte [s2 + 0x1071] // s4

    loc_0x80448314: // orphan
         s1 += 1

    loc_0x80448318: // orphan
         // CODE XREF from fcn.8043b044 @ 0x804482e4
         if                       // likely
         s0 += 0x1a4

    loc_0x80448320: // orphan
         call fcn.8290b264        // fcn.8290b264(-1, 0x442f71dcfe116408)
         
         ra = [sp + 0x4c]
         ldc1 f20, 0x18, sp
         ldc1 f22, 0x20, sp
         ldc1 f24, 0x28, sp
         s0 = [sp + 0x30]
         s1 = [sp + 0x34]
         s2 = [sp + 0x38]
         s3 = [sp + 0x3c]
         s4 = [sp + 0x40]
         s5 = [sp + 0x44]
         s6 = [sp + 0x48]
         ret
         sp += 0x50

    loc_0x80448384: // orphan
         [sp + 0x44] = s3
         [sp + 0x38] = s0
         mtc1 at, f22
         [sp + 0x58] = fp
         [sp + 0x54] = s7

    loc_0x804489a8: // orphan
         s2 += 1

    loc_0x80448d0c: // orphan
         a0 = [s0 + 0]
         call 0x8003f2c4          // 0x8003f2c4(0x0, 0x442f71dcfe116408, 0x8, -1)
         a2 = , unsigned  byte [t7 + 0] // s4
         v1 = , unsigned  halfword [s0 + 0x1a0]

    loc_0x80448f74: // orphan
         a2 = [s0 + 0x170]        // t9
         call 0x800357a8          // 0x800357a8(-1, 0x442f71dcfe116408, -1, -1)
         a3 = [s0 + 0x174]        // t9
         a0 = s1
         call fcn.8290e438        // fcn.8290e2fc+0x13c
         a1 = s2
         t7 = , unsigned  halfword [s0 + 0x1a0]
         a1 = s1
         a2 = s6
         t8 = t7 + 1
         v1 = t8 & 0xffff
         at = , v1 < 0x97         // lo
         halfword [s0 + 0x1a0] = t8
         if                       // unlikely
         a0 = v1

    loc_0x80449020: // orphan
         sp += 0x78
         sp -= 0x60
         [sp + 0x38] = s6
         s6 = 0x8292 << 16
         s6 -= 0x5840
         v0 = halfword [s6 + 0x1068]
         at = 0 + 0x24
         [sp + 0x3c] = ra

    loc_0x80449e80: // orphan
         [sp + 0x1c] = ra
         at = 0 + 0x25
         if                       // unlikely
         at = 0 + 0x26

    loc_0x80449e90: // orphan
         if                       // likely
         t6 = 0x8292 << 16

    loc_0x80449e94: // orphan
         t6 = 0x8292 << 16

    loc_0x80449e98: // orphan
         t6 = halfword [t6 - 0x4786]
         a0 = 0 + 0xc1            // arg1
         beql t6, 0, 0x80449f08   // unlikely
         ra = [sp + 0x1c]

    loc_0x80449ea8: // orphan
         call 0x8004c990          // 0x8004c990(-1, 0x442f71dcfe116408, 0x8, -1)
         a1 = 0
         t2 = 0x800d << 16
         t2 += 0x510
         t0 = [t2 + 0]            // t9
         t1 = 0x8292 << 16
         t1 -= 0x4790

    loc_0x80449edc: // orphan
         [t0 + 0] = t8
         [t0 + 4] = t9
         a0 = 0x8292 << 16
         a1 = 0x8292 << 16
         a1 = halfword [a1 - 0x478a]
         a0 = halfword [a0 - 0x478c]
         [sp + 0x10] = 0
         a2 = [t1 + 0]            // t9
         call 0x8004d19c          // 0x8004d19c(0x6ff9, 0xb7eb, -1, -1)
         a3 = 0

    loc_0x80449f04: // orphan
         ra = [sp + 0x1c]

    loc_0x80449f08: // orphan
         sp += 0x20
         ret                      // ra
         

    loc_0x80449f30: // orphan
         sp += 0x18
         ret                      // ra
         

    loc_0x80449f58: // orphan
         at = 0x40c0 << 16
         mtc1 at, f10
         sub.s f0, f4, f12
         at = 0x8291 << 16
         mul.s f14, f2, f12

    loc_0x80449f6c: // orphan
         
         mul.s f6, f0, f0
         
         mul.s f8, f6, f0
         div.s f18, f8, f10
         mul.s f4, f16, f14
         sub.s f6, f4, f2
         swc1 f18                 // arg1
         lwc1 f8, 0x7730, at
         at = 0xbf00 << 16
         mtc1 at, f18
         add.s f10, f6, f8
         at = 0x8291 << 16
         mul.s f4, f18, f14
         swc1 f10, 4, a0          // arg1
         mul.s f6, f16, f2
         add.s f8, f4, f6
         mul.s f10, f16, f12
         lwc1 f4, 0x7734, at
         at = 0x4018 << 16
         mtc1 at, f11
         at = 0x8292 << 16
         add.s f18, f8, f10
         mtc1 0, f10
         cvt.d.s f8, f14
         add.s f6, f18, f4
         div.d f18, f8, f10
         swc1 f6, 8, a0           // arg1
         cvt.s.d f4, f18
         swc1 f4, 0xc, a0         // arg1

    loc_0x80449fe4: // orphan
         swc1 f0, -0x43e4, at
         at = 0x8292 << 16
         swc1 f2, -0x43e8, at
         at = 0x8292 << 16
         ret                      // ra
         swc1 f14, -0x43ec, at

    loc_0x80449ff8: // orphan
         swc1 f0, -0x43e4, at
         at = 0x8292 << 16
         swc1 f2, -0x43e8, at
         at = 0x8292 << 16
         ret                      // ra
         swc1 f14, -0x43ec, at

    loc_0x8044a020: // orphan
         cvt.d.s f6, f12
         at = 0x41a8 << 16
         sub.d f8, f4, f6
         mtc1 at, f6
         mul.s f14, f2, f12
         at = 0x4110 << 16
         cvt.s.d f0, f8
         mul.s f10, f0, f0
         

    loc_0x8044a044: // orphan
         mul.s f4, f10, f0
         
         mul.s f8, f6, f14
         swc1 f4                  // arg1
         mtc1 at, f4
         at = 0x4040 << 16
         div.s f10, f8, f16
         mul.s f6, f4, f2
         
         mul.s f8, f6, f18
         mtc1 at, f6
         at = 0xc130 << 16
         sub.s f4, f10, f8
         mul.s f10, f6, f12
         mtc1 at, f6
         at = 0x4040 << 16
         add.s f8, f4, f10
         mul.s f4, f6, f14

    loc_0x8044a08c: // orphan
         swc1 f8, 4, a0           // arg1
         mtc1 at, f8
         at = 0x40c0 << 16
         div.s f10, f4, f16
         mul.s f6, f8, f2
         
         mul.s f4, f6, f18
         mtc1 at, f6
         at = 0x8292 << 16
         add.s f8, f10, f4
         div.s f10, f14, f6

    loc_0x8044a468: // orphan
         goto 0x8044a4d4
         v0 = 0 + 1               // lo

    loc_0x8044a630: // orphan
         ret                      // ra
         halfword [v0 + 0xe] = 0

    loc_0x8044aa00: // orphan
         [sp + 0x14] = s3
         [sp + 0x10] = s2
         [sp + 0xc] = s1
         [sp + 0x60] = a0
         if                       // likely
         [sp + 0x64] = a1

    loc_0x8044aa18: // orphan
         a3 += s0                 // arg4
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         s0 = 0

    loc_0x8044aa28: // orphan
         if                       // likely
         s6 = s0 + a3             // arg4

    loc_0x8044aa30: // orphan
         v0 = halfword [sp + 0x72]
         v0 += a2                 // arg3
         v0 <<= 0x10
         v0 = , signed  v0 >> 0x10 // a2
         halfword [sp + 0x72] = v0
         a2 = 0

    loc_0x8044aa48: // orphan
         at = , s6 < 0x281
         if                       // unlikely
         v0 = halfword [sp + 0x72] // a2

    loc_0x8044aa54: // orphan
         at = , s0 < 0x281        // lo
         if                       // likely
         t6 = 0 + 0x280

    loc_0x8044aa60: // orphan
         s0 = 0 + 0x280

    loc_0x8044aa64: // orphan
         a3 = t6 - s0             // arg4
         // CODE XREF from fcn.8045664c @ 0x80455d04
         a3 <<= 0x10              // arg4
         a3 = , signed  a3 >> 0x10 // arg4
         s6 = a3 + s0             // arg4

    loc_0x8044aa74: // orphan
         a0 = a2 + v0             // arg3
         at = , a0 < 0x1e1        // arg1 // lo

    loc_0x8044b9e0: // orphan
         a0 = 0 + 0x10            // arg1
         call 0x80007b34          // 0x80007b34(0x10, 0x442f71dcfe116408, 0x8, -1)
         a0 = 0 + 0x10
         s0 = 0
         s1 = 0 + 0x10

    loc_0x8044b9f4: // orphan
         .qword 0x0ca43e8000000000
         s0 += 1
         if                       // likely
         

    loc_0x8044ba08: // orphan
         ra = [sp + 0x1c]
         s0 = [sp + 0x14]         // t9
         s1 = [sp + 0x18]
         ret                      // ra
         sp += 0x20

    loc_0x8044bd48: // orphan
         t6 = 0 + 0x230
         [sp + 0x14] = ra
         halfword [t1 + 4] = 0
         halfword [t1 + 0] = 0
         halfword [t1 + 2] = 0
         halfword [v0 + 0] = t2
         halfword [v0 + 2] = t6
         halfword [v0 + 6] = 0
         t4 = , unsigned  byte [a2 + 0] // arg3 // s4
         a3 = [t0 + 0x3c]         // t9
         v1 = 0x8292 << 16
         byte [v0 + 0x15] = t4
         t5 = , unsigned  byte [a2 + 1] // arg3 // s4
         v1 -= 0x4168
         t4 = halfword [sp + 0x1a]

    loc_0x8044bd84: // orphan
         byte [v0 + 0x16] = t5
         t6 = , unsigned  byte [a2 + 2] // arg3 // s4
         t3 = 0 - 0x118
         a0 = 0x8292 << 16
         byte [v0 + 0x17] = t6
         t7 = , unsigned  byte [a3 + 0] // arg4 // s4
         a0 -= 0x4150             // arg1
         a1 = 0 + 4               // arg2
         byte [v0 + 0x12] = t7
         t8 = , unsigned  byte [a3 + 1] // arg4 // s4
         byte [v0 + 0x13] = t8
         t9 = , unsigned  byte [a3 + 2] // arg4 // s4

    loc_0x8044be00: // orphan
         a0 = halfword [sp + 0x1a]
         ra = [sp + 0x14]
         sp += 0x18
         ret                      // ra
         

    loc_0x8044be6c: // orphan
         a3 = 0 + 0x32            // arg4
         call 0x800372cc          // 0x800372cc(-1, 0x442f71dcfe116408, 0x8, 0x32)
         a1 = , unsigned  byte [t8 + 0] // s4
         byte [s0 + 0x15] = v0
         t9 = 0x8292 << 16
         t9 = halfword [t9 - 0x4174]
         t1 = 0x8291 << 16
         a0 = , unsigned  byte [s0 + 0x16] // s4
         t0 = t9 << 4
         t0 += t9
         t0 <<= 2
         t1 += t0
         t1 = [t1 + 0x7318]
         a2 = 0 + 0x32
         a3 = 0 + 0x32
         call 0x800372cc          // 0x800372cc(0xff, 0xff, 0x32, 0x32)
         a1 = , unsigned  byte [t1 + 1] // s4
         byte [s0 + 0x16] = v0
         // CODE XREF from fcn.80455b3c @ +0x2e4
         t2 = 0x8292 << 16
         t2 = halfword [t2 - 0x4174]
         t4 = 0x8291 << 16
         a0 = , unsigned  byte [s0 + 0x17] // s4
         t3 = t2 << 4
         // CODE XREF from fcn.80455b3c @ +0x2e8
         t3 += t2
         t3 <<= 2
         t4 += t3
         t4 = [t4 + 0x7318]
         a2 = 0 + 0x32
         a3 = 0 + 0x32
         call 0x800372cc          // 0x800372cc(0xff, 0xff, 0x32, 0x32)
         a1 = , unsigned  byte [t4 + 2] // s4
         byte [s0 + 0x17] = v0
         t5 = 0x8292 << 16
         t5 = halfword [t5 - 0x4174]
         t7 = 0x8291 << 16
         a0 = , unsigned  byte [s0 + 0x12] // s4

    loc_0x8044befc: // orphan
         t6 = t5 << 4
         t6 += t5
         t6 <<= 2
         t7 += t6
         t7 = [t7 + 0x7314]       // t9
         a2 = 0 + 0x32
         a3 = 0 + 0x32
         call 0x800372cc          // 0x800372cc(-1, 0x442f71dcfe116408, 0x32, 0x32)
         a1 = , unsigned  byte [t7 + 0] // s4
         byte [s0 + 0x12] = v0
         t8 = 0x8292 << 16
         t8 = halfword [t8 - 0x4174]
         t0 = 0x8291 << 16
         a0 = , unsigned  byte [s0 + 0x13] // s4
         t9 = t8 << 4
         t9 += t8
         t9 <<= 2
         t0 += t9
         t0 = [t0 + 0x7314]
         a2 = 0 + 0x32
         a3 = 0 + 0x32
         call 0x800372cc          // 0x800372cc(0xff, 0xff, 0x32, 0x32)
         a1 = , unsigned  byte [t0 + 1] // s4
         byte [s0 + 0x13] = v0
         t1 = 0x8292 << 16
         t1 = halfword [t1 - 0x4174]
         t3 = 0x8291 << 16
         a0 = , unsigned  byte [s0 + 0x14] // s4
         t2 = t1 << 4
         t2 += t1
         t2 <<= 2
         t3 += t2
         t3 = [t3 + 0x7314]
         a2 = 0 + 0x32
         a3 = 0 + 0x32
         call 0x800372cc          // 0x800372cc(0xff, 0xff, 0x32, 0x32)

    loc_0x8044bf8c: // orphan
         a1 = , unsigned  byte [t3 + 2] // s4
         byte [s0 + 0x14] = v0
         t4 = 0x8292 << 16
         t4 = halfword [t4 - 0x4174]
         t6 = 0x8291 << 16
         // CODE XREF from fcn.80455b3c @ +0x2f0
         t6 += 0x72d8
         t5 = t4 << 4
         t5 += t4
         t5 <<= 2
         a0 = t5 + t6
         // CODE XREF from fcn.80455b3c @ +0x2f4
         v1 = [a0 + 0x40]
         t7 = , unsigned  byte [s0 + 0x15] // s4
         t8 = , unsigned  byte [v1 + 0] // s4
         bnel t7, t8, 0x8044c148  // fcn.80433800+0x18948 // unlikely
         ra = [sp + 0x1c]

    loc_0x8044bfc8: // orphan
         t9 = , unsigned  byte [s0 + 0x16] // s4
         t0 = , unsigned  byte [v1 + 1] // s4
         bnel t9, t0, 0x8044c148  // fcn.80433800+0x18948 // unlikely
         ra = [sp + 0x1c]

    loc_0x8044bfd8: // orphan
         t1 = , unsigned  byte [s0 + 0x17] // s4
         t2 = , unsigned  byte [v1 + 2] // s4
         bnel t1, t2, 0x8044c148  // fcn.80433800+0x18948 // unlikely
         ra = [sp + 0x1c]

    loc_0x8044bfe8: // orphan
         v0 = [a0 + 0x3c]         // t9
         t3 = , unsigned  byte [s0 + 0x12] // s4
         t4 = , unsigned  byte [v0 + 0] // s4
         bnel t3, t4, 0x8044c148  // fcn.80433800+0x18948 // unlikely
         ra = [sp + 0x1c]

    loc_0x8044bffc: // orphan
         t5 = , unsigned  byte [s0 + 0x13] // s4
         t6 = , unsigned  byte [v0 + 1] // s4
         bnel t5, t6, 0x8044c148  // fcn.80433800+0x18948 // unlikely
         ra = [sp + 0x1c]

    loc_0x8044c00c: // orphan
         t7 = , unsigned  byte [s0 + 0x14] // s4
         t8 = , unsigned  byte [v0 + 2]
         bnel t7, t8, 0x8044c148  // fcn.80433800+0x18948 // likely
         ra = [sp + 0x1c]

}

*/
