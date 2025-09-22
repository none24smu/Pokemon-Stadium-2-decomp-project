[38;2;58;150;221m┌[0m 4: [38;2;197;15;31mfcn.8041a010[0m ();
[38;2;58;150;221m└[0m           [38;2;19;161;14m0x8041a010[0m      [38;2;19;161;14m00[38;2;19;161;14m00[38;2;19;161;14m00[38;2;19;161;14m00[0m       [38;2;0;55;218mnop[0m[0m[0m
int fcn.8041a010 (int esi, int edx) {
    loc_0x8041a010:
        0x8041a010
        // chop
         // do {
    loc_0x8041a014:
        // CODE XREF from fcn.82f70c44 @ +0xb28
        // CALL XREF from fcn.838665e8 @ +0xd34
        cvt.s.w f18, f16
        div.s f4, f20, f18
        mul.s f6, f4, f22
        sub.s f8, f6, f24
        trunc.w.s f10, f8
        mfc1 v1, f10
        0x8041a02c
        at = , s0 < v1 // lo
         // } while (?);
        }
        return eax;
}
