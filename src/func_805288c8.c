/*
 * Function: 0x805288c8
 * ROM Offset: 0x004298c8
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.805288c8 (int esi, int edx) {
// do {
// } while (?);
}
return eax;
// do {
if            // likely
// } while (?);
}
return eax;
// do {
if            // likely
// } while (?);
}
return eax;
// do {
if            // likely
// } while (?);
}
return eax;
if            // likely
// do {
if            // likely
// } while (?);
// } while (?);
}
return eax;
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // 0x11(0x0, 0x0, 0x0, 0x0)
if                       // 0x11(0x0, 0x0, 0x0, 0x0)
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // likely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
if                       // likely
if                       // likely
if                       // unlikely
}

/*
// Full analysis output
int fcn.805288c8 (int esi, int edx) {
    loc_0x80524668:
        a2 = 0 + 0xff
        call 0x8004972c // 0x8004972c(0x0, 0x0, 0xff, 0x0)
        a3 = 0 + 0xff
        goto 0x805246a4
        0x80524678
         // do {
    loc_0x805246a4:
        t4 = 0x82d2 << 16
        t4 = , unsigned  halfword [t4 + 0x3d90]
        a1 = halfword [sp + 0xbc]
        a2 = 0x82d0 << 16
        a2 += 0x7324
        a3 = , unsigned  halfword [s2 + 0xf8]
        a0 = s1 + t4
        call 0x800495bc // 0x800495bc(0x481d, 0x0, 0x82d07324, 0xffff)
        a1 += 0x7a
        a0 = 0 + 4
        call 0x800496a4 // 0x800496a4(0x4, 0x7a, 0x82d07324, 0xffff)
        a1 = 0 + 1
        a0 = 0 + 0x43
        call 0x8004c874 // 0x8004c874(0x43, 0x1, 0x82d07324, 0xffff)
        a1 = 0 + 0xf
        s0 = halfword [sp + 0xbc]
        t6 = 0x82d2 << 16
        t6 = , unsigned  halfword [t6 + 0x3d92]
        s0 += 0x7e
        a1 = s0
        a2 = 0
        a3 = v0
        call 0x80049064 // 0x80049064(0x43, 0x7e, 0x0, 0x0)
        a0 = s1 + t6
        a0 = 0 + 0x43
        call 0x8004c874 // 0x8004c874(0x43, 0x7e, 0x0, 0x0)
        a1 = 0 + 0x10
        t7 = 0x82d2 << 16
        t7 = , unsigned  halfword [t7 + 0x3d94]
        a1 = s0
        a2 = 0
        a3 = v0
        call 0x80049064 // 0x80049064(0x43, 0x7e, 0x0, 0x0)
        a0 = s1 + t7
        a0 = 0 + 8
        call 0x800496a4 // 0x800496a4(0x8, 0x7e, 0x0, 0x0)
        a1 = 0 + 1
        t8 = , unsigned  byte [s2 + 0xf7]
        t5 = , unsigned  halfword [s2 + 0xf8]
        a0 = 0 + 0x43
        t9 = t8 << 2
        t9 -= t8
        at = , t5 < t9
        bnel at, 0, 0x8052477c // unlikely
        t3 = byte [s2 + 1]
         // } while (?);
        }
        return eax;
    loc_0x80524758:
        call 0x8004c874 // 0x8004c874(0x0, 0x0, 0x0, 0x0)
        a1 = 0 + 0xe
        a1 = halfword [sp + 0xbc]
        a0 = [sp + 0x40]
        a2 = 0 + 2
        a3 = v0
        call 0x80049064 // 0x80049064(0x0, 0x0, 0x2, 0x0)
        a1 += 0x98
        t3 = byte [s2 + 1]
         // do {
    loc_0x8052477c:
        at = 0 + 4
        a0 = 0 + 0xff
        if            // likely
        a1 = 0 + 0xff
         // } while (?);
        }
        return eax;
    loc_0x8052478c:
        a0 = 0 + 0xff
        a1 = 0 + 0xff
        a2 = 0
        call 0x8004972c // 0x8004972c(0xff, 0xff, 0x0, 0x0)
        a3 = 0 + 0xff
        goto 0x805247b8
        t4 = [s2 + 0x100]
         // do {
    loc_0x805247b8:
        v0 = 0 + 0x12
        a0 = 0 + 0x43
        t7 = t4 << 5
        if            // likely
        0x805247c8
         // } while (?);
        }
        return eax;
    loc_0x805247cc:
        goto 0x805247d4
        v0 = 0 + 0x11
         // do {
    loc_0x805247d4:
        call 0x8004c874 // 0x8004c874(0x0, 0x0, 0x0, 0x0)
        a1 = v0
        a1 = halfword [sp + 0xbc]
        a0 = [sp + 0x40]
        a2 = 0 + 2
        a3 = v0
        call 0x80049064 // 0x80049064(0x0, 0x0, 0x2, 0x0)
        a1 += 0xb6
        t8 = [s2 + 0x100]
        a0 = 0 + 0xff
        a1 = 0 + 0xff
        t9 = t8 << 5
        if            // likely
        a2 = 0 + 0xff
         // } while (?);
        }
        return eax;
    loc_0x8052480c:
        t3 = byte [s2 + 1]
        at = 0 + 5
        a0 = 0 + 0xff
        if            // likely
        a1 = 0 + 0xff
            
    loc_0x8052483c:
        a2 = 0 + 0xff
        call 0x8004972c // 0x8004972c(0x0, 0x0, 0xff, 0x0)
        a3 = , unsigned  byte [sp + 0xc3]
        goto 0x8052485c
        t4 = [s2 + 0x100]
         // do {
    loc_0x8052485c:
        v0 = 0 + 0x14
        a0 = 0 + 0x43
        t7 = t4 << 2
        if            // likely
        0x8052486c
         // } while (?);
         // } while (?);
        }
        return eax;
    loc_0x805247a8: // orphan
             a2 = 0 + 0xff
             call 0x8004972c          // 0x8004972c(0x0, 0x0, 0xff, 0x0)
             a3 = , unsigned  byte [sp + 0xc3]
             t4 = [s2 + 0x100]

    loc_0x80524850: // orphan
         call 0x8004972c          // 0x8004972c(0x0, 0x0, 0x0, 0x0)
         a3 = 0 + 0x80
         t4 = [s2 + 0x100]

    loc_0x80524870: // orphan
         goto 0x80524878
         v0 = 0 + 0x13

    loc_0x80524878: // orphan
         call 0x8004c874          // 0x8004c874(0x0, 0x0, 0x0, 0x0)
         a1 = v0
         a1 = halfword [sp + 0xbc]
         a0 = [sp + 0x40]
         a2 = 0 + 2
         a3 = v0
         call 0x80049064          // 0x80049064(0x0, 0x0, 0x2, 0x0)
         a1 += 0xd4
         call 0x800499ec          // 0x800499ec(0x0, 0xd4, 0x2, 0x0)
         
         t8 = , unsigned  byte [s2 + 0]
         t5 = t8 - 1
         at = , unsigned  , t5 < 8
         if                       // likely
         t5 <<= 2

    loc_0x805248b4: // orphan
         at = 0x82d0 << 16
         at += t5
         t5 = [at + 0x7354]
         goto t5
         

    loc_0x80524c08: // orphan
         ra = [sp + 0x34]
         s0 = [sp + 0x28]
         s1 = [sp + 0x2c]
         s2 = [sp + 0x30]
         ret
         sp += 0xc8

    loc_0x805288c8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288d4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288e0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288ec: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805288f8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528904: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528910: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052891c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528928: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528934: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528940: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052894c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528958: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528964: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528970: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052897c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528988: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528994: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289a0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289ac: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289b8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289c4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289d0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289dc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289e8: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x805289f4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a00: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a0c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a18: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a24: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a30: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a3c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a48: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a54: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a60: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a70: // orphan
         if                       // unlikely
         

    loc_0x80528a78: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a84: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80528a94: // orphan
         
         
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80528aac: // orphan
         if                       // unlikely
         

    loc_0x80528ab4: // orphan
         
         if                       // unlikely
         if                       // unlikely

    loc_0x80528ac4: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528ad0: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80528adc: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x8052c35c: // orphan
         at = 0x82c0 << 16
         at += t7
         t7 = [at + 0x4ab4]
         goto t7
         

    loc_0x80530a98: // orphan
         sc 0, 0x1c, s0

    loc_0x80541bd0: // orphan
         t7 = , unsigned  , ra < -0x91
         goto 0x880c0cfc
         sd t7, 0xa8f, ra

    loc_0x80541e0c: // orphan
         cache 0x1f, 0xb9f, t8

    loc_0x80542134: // orphan
         sd ra, -0x20f2, t9
         pref 0, 0x1cf, t8
         call fcn.82fffd3c
         t4 = [t8 + 0x4f4f]
         goto 0x8c227f3c
         t7 = , unsigned  , t8 < 0x3fef

    loc_0x80542320: // orphan
         lwu ra, -0x7364, t7
         sd t5, -0xc1, gp
         ld ra, 0x6d7c, s7
         sd t6, -0xe1, fp
         sd ra, 0x4d6d, ra
         sd t6, 0x1fff, k0
         call 0x8fbe7c34          // 0x8fbe7c34(0x0, 0x0, 0x0, 0x0)

    loc_0x80542878: // orphan
         lwu t7, 0xc09, t9

    loc_0x80542944: // orphan
         call 0x8c0d7ffc          // 0x8c0d7ffc(0x0, 0x0, 0x0, 0x0)
         cache 0x1f, -0x76af, ra
         goto 0x800c0434

    loc_0x80542ae0: // orphan
         call 0x8c7c03fc          // 0x8c7c03fc(0x0, 0x0, 0x0, 0x0)
         lwu ra, 2, fp

    loc_0x80542c4c: // orphan
         call 0x84257c28          // 0x84257c28(0x0, 0x0, 0x0, 0x0)

    loc_0x80542c68: // orphan
         call fcn.80b03038
         t0 = [t8 + 0x3fcf]
         call 0x8bbffc7c          // 0x8bbffc7c(0x0, 0x0, 0x0, 0x0)
         goto 0x80be547c

    loc_0x80542db4: // orphan
         lwu ra, -0x60fc, sp
         call 0x8dfdfc30          // 0x8dfdfc30(0x0, 0x0, 0x0, 0x0)
         sd ra, 0x2ef, t9

    loc_0x80542e20: // orphan
         t7 = [t8 - 0x60f3]
         goto 0x88227c04
         t5 = [t8 + 0x904]

    loc_0x80542ebc: // orphan
         call 0x8c3c0020          // 0x8c3c0020(0x0, 0x0, 0x0, 0x0)
         goto 0x8009ec18

    loc_0x80542fd8: // orphan
         call fcn.83fc03fc
         [s5 + 0x7f4f] = t7
         goto 0x8c2825bc
         call 0x8afdffbc          // 0x8afdffbc(0x0, 0x0, 0x0, 0x0)

    loc_0x805430d0: // orphan
         cache 0x1f, 0x7e3f, fp
         goto 0x80fdfb7c
         cache 0xc, 0xb0d, t9

    loc_0x8054311c: // orphan
         t6 = [t8 + 0x4ef]
         call 0x8c0b7404          // 0x8c0b7404(0x0, 0x0, 0x0, 0x0)
         cache 0x1f, 0x1cf, t4

    loc_0x80543268: // orphan
         sd t7, 0x400, t9
         goto 0x81be3c38
         sync 0x1c

    loc_0x80543520: // orphan
         sd ra, -0x60f2, fp

    loc_0x8054373c: // orphan
         ld ra, -0x70f3, sp
         ra = [ra + 0x5f2f]
         ldr t2, -0x59e1, t8
         cache 0xf, 0x83f, t9
         pref 0x1f, 0xa4f, t8
         cache 0xf, 0x103, t8
         if                       // unlikely

    loc_0x80543874: // orphan
         s0 = , t7 < 0x5f0
         if                       // 0x11(0x0, 0x0, 0x0, 0x0)
         if                       // 0x11(0x0, 0x0, 0x0, 0x0)

    loc_0x80543920: // orphan
         syscall                  // 0 = unknown ()
         v0 = 0 >> 0x14
         sd ra, -0x4401, ra

    loc_0x805439cc: // orphan
         lwr ra, 0x4fef, t5
         bbit1 t1, 0x1b, 0x8052672c
         sdc1 f23, -0x24d, t6

    loc_0x80543a78: // orphan
         bbit132 s4, 0xb, 0x8052c854
         sdr t5, 0x7d1f, t9

    loc_0x80543bd0: // orphan
         ldc1 f20, -0x5c22, t9
         ldr v1, 0x6efd, t8
         bbit132 k1, 0x15, 0x8056399c
         lld s7, -0x181b, gp

    loc_0x80543d6c: // orphan
         if                       // unlikely
         if                       // unlikely

    loc_0x80543d78: // orphan
         daddiu s2, t2, 0x143a

    loc_0x80543f10: // orphan
         fp = halfword [s1 + 0x1901]
         s1 = [t8 + 0x2a00]
         nori.b w8, w3, 0x2f
         s0 = [s0 - 0x5d23]
         if                       // unlikely
         gp = byte [at + 0x3aaf]

    loc_0x80543f28: // orphan
         call 0x8ff45600          // 0x8ff45600(0x0, 0x0, 0x0, 0x0)
         ra = , unsigned  halfword [a3 - 0x7a01]
         if                       // unlikely

    loc_0x8054404c: // orphan
         if                       // likely

    loc_0x80544154: // orphan
         a1 = halfword [t0 + 0x180f]

    loc_0x805441c0: // orphan
         sdl ra, 0x1e0e, t7
         s5 = t6 + 0x5b0f
         ldl s0, 0x1b1f, s0
         ld.b w12, 0x26, s0
         ldr at, 0x3f30, k0
         dext v0, v0, 0x1c
         lwl s6, 0xe01, v1
         ra = , ra < -0x6001
         ra = , ra < -0x1301
         t7 = [a3 + 0x6fef]

    loc_0x80544300: // orphan
         cache 0x12, -0x3312, ra
         synci 0x25ff, a3
         bbit0 t7, 0x1f, 0x80526948

    loc_0x80544458: // orphan
         lwl 0, 0x1fb0, ra
         ld.b w31, -0x150, t5

    loc_0x80544590: // orphan
         ra = halfword [a3 - 0x7af1]
         sdr ra, -0x69c1, s0
         ra = , unsigned  , v0 < -0x54a1
         lld t7, 0x707, s0
         lld t7, -0x4083, 0
         sdl t7, -0x5fe1, 0
         if                       // unlikely
         ra = byte [at - 0x6ff1]

    loc_0x805445b0: // orphan
         jalx 0x8340586c          // 0x8340586c(0x0, 0x0, 0x0, 0x0)

    loc_0x80544680: // orphan
         fp = , unsigned  halfword [ra + 0x1acf]
         t7 = , unsigned  byte [0 + 0x2e11]
         t7 = , unsigned  byte [0 + 0x7aff]
         a0 = , unsigned  , s1 < 0x6fe9

    loc_0x805446b8: // orphan
         

    loc_0x805446f4: // orphan
         swl v0, 0x1e2e, s3
         call 0x87fb7d2c          // 0x87fb7d2c(0x0, 0x0, 0x0, 0x0)
         sdr t7, 0x100f, gp
         cache 0xe, 0x1fae, k1
         lwu t4, -0x6064, gp
         byte [t7 + 0x1b20] = s0
         bbit0 t9, 0x10, 0x80533350
         cache 0xf, 0x1130, fp
         ll at, -0x348f, s0
         call 0x88037ff8          // 0x88037ff8(0x0, 0x0, 0x0, 0x0)
         if                       // likely

    loc_0x80544724: // orphan
         if                       // likely
         byte [0 - 0x5ff1] = t7

    loc_0x8054472c: // orphan
         lwu t7, 0x353f, s0
         lwu s2, 0x140d, t8
         ll 0, 0xf00, s0
         if                       // unlikely

    loc_0x80548764: // orphan
         
         

    loc_0x8055523c: // orphan
         madd.d f24, f15, f17
         sd a2, 0x7dfd, t8

    loc_0x80be2b34: // orphan
         swc1 f0, -0x2068, t3
         sdl t0, 0x5705, t0
         swr t3, 0x68c9, t3
         lwu t5, 0x64c, t3
         lwu t9, 0x3988, a1
         scd k1, -0x290e, gp
         sc t2, -0x376c, gp
         s3 = [k1 + 0x7a40]
         sdl t3, 0x75b4, a1
         v1 = a1 ^ 0x4db6
         
         bbit1 t6, 0x18, 0x80bf2204
         call 0x86a633d4          // 0x86a633d4(0x0, 0x0, 0x0, 0x0)
         t9 = [t5 + 0x62ea]
         swl t6, -0x79ce, t2
         bbit032 s4, 8, 0x80bdff98
         a2 = , unsigned  halfword [s1 - 0x419b]
         daddiu s2, t2, -0x6ce6
         s6 = t9 + 0x1527
         goto 0x8ea16a6c
         goto 0x8d684b24

    loc_0x80be34bc: // orphan
         beql s1, sp, 0x80bdd68c  // unlikely

    loc_0x80be547c: // orphan
         if                       // likely
         a3 = s6 | 0x93c8

    loc_0x80be5484: // orphan
         sdl s6, 0x2844, t8
         ldl sp, 0x46d9, at
         lwc1 f11, -0x5bf4, t1
         if                       // unlikely
         ld a1, 0x3449, v0

    loc_0x80be5498: // orphan
         bnel a1, a2, 0x80be2b34  // unlikely
         teq t9, sp, 0x28d

    loc_0x80be54a0: // orphan
         
         bnel s2, t5, 0x80c04338  // unlikely
         s4 = halfword [t5 + 0x474c]

    loc_0x80be54ac: // orphan
         pref 0x1c, 0x2534, k1
         s3 = , unsigned  byte [t8 - 0x6f6a]
         sd s2, -0x564a, s3
         swl t9, -0x63f3, t1

    loc_0x80c03554: // orphan
         sdr t4, -0x552b, t4
         bbit1 gp, 9, 0x80be9d6c
         goto 0x83263918
         k0 = a2 + 0x6db6

    loc_0x80c04338: // orphan
         swc1 f10, 0x39f6, t4
         v0 = , t5 < 0x43c
         ldr fp, -0x6d8b, s6
         if                       // unlikely

    loc_0x80fdfb7c: // orphan
         sc v0, -0x5d33, s2

    loc_0x81be3c38: // orphan
         s1 = , s0 < 0x14b0
         if                       // unlikely
         k1 = k0 & 0x539b

    loc_0x81be3c44: // orphan
         k1 = a1 + 0xb3
         daddi s7, a1, 0x1175
         if                       // likely
         t5 = t6 + 0x21d7

    loc_0x81be3c54: // orphan
         sp = v1 + 0x2005
         t3 = 0 + 0x216f
         v1 = t3 + 0x2167

    loc_0x81be990c: // orphan
         lwu t6, 0x800, t4

    loc_0x81bebc7c: // orphan
         if                       // likely
         if                       // likely

    loc_0x81bebc88: // orphan
         ra = a2 & 0x41fb
         if                       // likely
         if                       // likely

    loc_0x81bebc98: // orphan
         if                       // likely
         t9 = t7 + 0x22f3

    loc_0x81bebca0: // orphan
         if                       // unlikely
         daddi v1, 0, 0x223f

    loc_0x81bf04b0: // orphan
         if                       // likely
         if                       // unlikely

    loc_0x81bf04bc: // orphan
         t3 = , unsigned  , 0 < 0x4325
         if                       // likely

    loc_0x81bf0d60: // orphan
         if                       // unlikely
         at = k0 + 0x100b

    loc_0x81bf8590: // orphan
         t5 = 0 + 0x2e49
         t5 = , unsigned  , s1 < 0x1e3d
         ldl s1, 0x1815, a3
         a1 = , at < 0x3213
         if                       // unlikely
         if                       // unlikely

    loc_0x81bf8c90: // orphan
         if                       // unlikely

    loc_0x81bfb974: // orphan
         s7 = ra + 0x2bff

    loc_0x81c03d74: // orphan
         sdr sp, -0x4963, t7

    loc_0x832585a0: // orphan
         a1 += 0x810

    loc_0x83263918: // orphan
         if                       // unlikely
         ll s5, 0x2822, s2

    loc_0x83263920: // orphan
         halfword [s1 + 0x2ad8] = t4
         [s4 - 0x951] = k0
         bbit132 t8, 7, 0x8324fc58
         if                       // likely
         sdl t3, 0x9b0, a3

    loc_0x8326a574: // orphan
         s3 = 0 & 0x131
         if                       // likely
         k1 = byte [t1 + 0x13e1]

    loc_0x8326a580: // orphan
         bc0f cc5, 0x8327aaa0
         if                       // unlikely
         sdl t3, 0x14a1, t2

    loc_0x8326a58c: // orphan
         bz.b w20, 0x83276a88     // unlikely
         if                       // likely

    loc_0x8326a598: // orphan
         s2 = , unsigned  , 0 < 0x711f
         if                       // likely

    loc_0x832779c8: // orphan
         lwc1 f28, 0x5fc4, s7
         sd t7, -0x3f04, at

    loc_0x832779e0: // orphan
         if                       // unlikely

}

*/
