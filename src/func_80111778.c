/*
 * Function: 0x80111778
 * ROM Offset: 0x00012778
 * Category: math
 * Auto-decompiled
 */

// Decompiled C code
int fcn.80111778 (int esi, int edx) {
if            // unlikely
if            // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
if                       // unlikely
}

/*
// Full analysis output
[38;2;58;150;221m┌[0m 548: [38;2;197;15;31mfcn.80111778[0m (int64_t arg1);
[38;2;58;150;221m│[0m       [38;2;0;55;218m│[0m   [38;2;204;204;204m; [38;2;204;204;204marg [38;2;0;55;218mint64_t arg1 [38;2;58;150;221m@ a0[0m
[38;2;58;150;221m│[0m       [38;2;0;55;218m└[0m[38;2;0;55;218m─[0m[38;2;0;55;218m<[0m [38;2;19;161;14m0x80111778[0m      [38;2;204;204;204m14[38;2;204;204;204m82[38;2;197;15;31mff[38;2;193;156;0m76[0m       [38;2;19;161;14mbne[38;2;58;150;221m a0[0m,[38;2;58;150;221m[38;2;58;150;221m v0[0m,[38;2;58;150;221m[38;2;58;150;221m [38;2;193;156;0m0x80111554[0m[0m[0m
[38;2;58;150;221m│[0m           [38;2;19;161;14m0x8011177c[0m      [38;2;193;156;0m24[38;2;193;156;0m63[38;2;19;161;14m00[38;2;204;204;204m08[0m       [38;2;193;156;0maddiu[38;2;58;150;221m v1[0m,[38;2;58;150;221m[38;2;58;150;221m v1[0m,[38;2;58;150;221m[38;2;58;150;221m [38;2;193;156;0m8[0m[0m[0m
[38;2;58;150;221m│[0m           [38;2;19;161;14m0x80111780[0m      [38;2;204;204;204m03[38;2;204;204;204me0[38;2;19;161;14m00[38;2;204;204;204m08[0m       [38;2;197;15;31mjr ra[0m[0m
[38;2;58;150;221m│[0m           [38;2;19;161;14m0x80111784[0m      [38;2;193;156;0m27[38;2;204;204;204mbd[38;2;19;161;14m00[38;2;193;156;0m50[0m       [38;2;193;156;0maddiu[38;2;58;150;221m sp[0m,[38;2;58;150;221m[38;2;58;150;221m sp[0m,[38;2;58;150;221m[38;2;58;150;221m [38;2;193;156;0m0x50[0m[0m[0m
..
int fcn.80111778 (int esi, int edx) {
    loc_0x80111778:
        if            // unlikely
        v1 += 8
            
    loc_0x80111554:
        cfc1 t0, 31
        t1 = 0 + 1
        ctc1 t1, 31
        lwc1 f6       // arg1
        at = 0x4f00 << 16
        cvt.w.s f8, f6
        cfc1 t1, 31
        0x80111570
        t1 &= 0x78
        beql t1, 0, 0x801115c8 // likely
        mfc1 t1, f8
            
    loc_0x801115c8:
        0x801115c8
        if            // unlikely
        0x801115d0
            
    loc_0x801115bc:
        goto 0x801115d4
        t1 = 0 - 1
    loc_0x801115d4: // orphan
             // CODE XREFS from fcn.80111778 @ 0x801115b4, 0x801115bc
             ctc1 t0, 31
             t3 = 0 + 1
             halfword [v1 + 0] = t1
             lwc1 f10, 4, a0          // arg1
             cfc1 t2, 31
             ctc1 t3, 31
             at = 0x4f00 << 16
             cvt.w.s f16, f10
             cfc1 t3, 31
             
             t3 &= 0x78
             beql t3, 0, 0x80111650   // likely
             mfc1 t3, f16

    loc_0x80111650: // orphan
         
         if                       // unlikely
         

    loc_0x80111644: // orphan
         goto 0x8011165c
         t3 = 0 - 1

    loc_0x8011165c: // orphan
         // CODE XREFS from fcn.80111778 @ 0x8011163c, 0x80111644
         ctc1 t2, 31
         halfword [v1 + 2] = t3
         t5 = 0 + 1
         lwc1 f18, 8, a0          // arg1
         cfc1 t4, 31
         ctc1 t5, 31
         at = 0x4f00 << 16
         cvt.w.s f4, f18
         cfc1 t5, 31
         
         t5 &= 0x78
         beql t5, 0, 0x801116d8   // likely
         mfc1 t5, f4

    loc_0x801116d8: // orphan
         
         if                       // unlikely
         

    loc_0x801116cc: // orphan
         goto 0x801116e4
         t5 = 0 - 1

    loc_0x801116e4: // orphan
         // CODE XREFS from fcn.80111778 @ 0x801116c4, 0x801116cc
         ctc1 t4, 31
         halfword [v1 + 4] = t5
         t7 = 0 + 1
         lwc1 f6, 0xc, a0         // arg1
         cfc1 t6, 31
         ctc1 t7, 31
         a0 += 0x10               // arg1
         at = 0x4f00 << 16
         cvt.w.s f8, f6
         cfc1 t7, 31
         
         t7 &= 0x78
         beql t7, 0, 0x80111764   // likely
         mfc1 t7, f8

    loc_0x80111764: // orphan
         
         if                       // unlikely
         

    loc_0x80111758: // orphan
         goto 0x80111770
         t7 = 0 - 1

    loc_0x80111770: // orphan
         // CODE XREFS from fcn.80111778 @ 0x80111750, 0x80111758
         ctc1 t6, 31
         halfword [v1 + 6] = t7

    loc_0x80111780: // orphan
         ret
         sp += 0x50

    loc_0x8011171c: // orphan
         mtc1 at, f8
         t7 = 0 + 1
         sub.s f8, f6, f8
         ctc1 t7, 31
         
         cvt.w.s f8, f8
         cfc1 t7, 31
         
         t7 &= 0x78
         if                       // unlikely
         

    loc_0x80111748: // orphan
         mfc1 t7, f8
         at = 0x8000 << 16
         goto 0x80111770
         t7 |= at

    loc_0x80111690: // orphan
         mtc1 at, f4
         t5 = 0 + 1
         sub.s f4, f18, f4
         ctc1 t5, 31
         
         cvt.w.s f4, f4
         cfc1 t5, 31
         
         t5 &= 0x78
         if                       // unlikely
         

    loc_0x801116bc: // orphan
         mfc1 t5, f4
         at = 0x8000 << 16
         goto 0x801116e4
         t5 |= at

    loc_0x80111608: // orphan
         mtc1 at, f16
         t3 = 0 + 1
         sub.s f16, f10, f16
         ctc1 t3, 31
         
         cvt.w.s f16, f16
         cfc1 t3, 31
         
         t3 &= 0x78
         if                       // unlikely
         

    loc_0x80111634: // orphan
         mfc1 t3, f16
         at = 0x8000 << 16
         goto 0x8011165c
         t3 |= at

    loc_0x80111580: // orphan
         mtc1 at, f8
         t1 = 0 + 1
         sub.s f8, f6, f8
         ctc1 t1, 31
         
         cvt.w.s f8, f8
         cfc1 t1, 31
         
         t1 &= 0x78
         if                       // unlikely
         

    loc_0x801115ac: // orphan
         mfc1 t1, f8
         at = 0x8000 << 16
         goto 0x801115d4
         t1 |= at

}

*/
