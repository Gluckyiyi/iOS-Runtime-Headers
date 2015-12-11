/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor {
    struct ObjectBounds { 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } mBounds; 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } mProjected; 
        struct box<glm::detail::tvec3<float> > { 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMin; 
            struct tvec3<float> { 
                union { 
                    float x; 
                    float r; 
                    float s; 
                } ; 
                union { 
                    float y; 
                    float g; 
                    float t; 
                } ; 
                union { 
                    float z; 
                    float b; 
                    float p; 
                } ; 
            } mMax; 
        } m2DProjected; 
        struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { 
            struct box<glm::detail::tvec3<float> > {} *__begin_; 
            struct box<glm::detail::tvec3<float> > {} *__end_; 
            struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { 
                struct box<glm::detail::tvec3<float> > {} *__first_; 
            } __end_cap_; 
        } mBoxes; 
    } mBounds;
    int mMode;
}

@property (nonatomic, readonly) const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; /* Warning: unhandled struct encoding: '{vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >' */ struct x4; void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; unsigned char x25; void*x26; void*x27; void*x28; void*x29; double x30; int x31; in void*x32; void*x33; int x34; in double x35; void*x36; const void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void* x46[ /* ? */ ]; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; id x57; void*x58; BOOL x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; unsigned char x77; void*x78; unsigned short x79; void*x80; short x81; void*x82; void*x83; void*x84; void*x85; unsigned long x86; int x87; unsigned int x88/* : ? */; const void*x89; const void*x90; void*x91; void*x92; const int x93; void x94; void*x95; void*x96; void*x97; void*x98; const void*x99; void*x100; void*x101; void*x102; out const void*x103; short x104; void*x105; void*x106; void*x107; void*x108; long x109; void*x110; void*x111; void*x112; int x113; void*x114; void*x115; unsigned int x116; void*x117; float x118; const void*x119; void*x120; void*x121; void*x122; out const void*x123; void*x124; void*x125; void*x126; void*x127; long x128; void*x129; void*x130; void*x131; int x132; void*x133; void*x134; unsigned int x135; void*x136; void*x137; void*x138; void*x139; void*x140; }*bounds; /* unknown property attribute:  std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > >=^{box<glm::detail::tvec3<float> >}}}} */
@property (nonatomic) int mode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct ObjectBounds { struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_1_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_1_1_2; } x1; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_2_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_2_1_2; } x2; struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_1_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_1_2_3; } x_3_1_1; struct tvec3<float> { union { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; union { float x_2_3_1; float x_2_3_2; float x_2_3_3; } x_2_2_2; union { float x_3_3_1; float x_3_3_2; float x_3_3_3; } x_2_2_3; } x_3_1_2; } x3; struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > {} *x_4_1_1; struct box<glm::detail::tvec3<float> > {} *x_4_1_2; struct __compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float> > > > { struct box<glm::detail::tvec3<float> > {} *x_3_2_1; } x_4_1_3; } x4; }*)bounds;
- (void)extend2DProjectedBounds:(const struct box<glm::detail::tvec3<float> > { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1; struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_2_1_3; } x2; }*)arg1;
- (id)init;
- (int)mode;
- (void)resetBounds;
- (void)setMode:(int)arg1;
- (void)submit:(const struct PrimitiveInfo { int x1; int x2; int x3; id x4; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x5; void*x6; void*x7; void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; unsigned short x15; void*x16; short x17; void*x18; void*x19; void*x20; void*x21; unsigned long x22; int x23; unsigned int x24/* : ? */; const void*x25; const void*x26; void*x27; void*x28; const int x29; void x30; void*x31; void*x32; void*x33; void*x34; const void*x35; void*x36; void*x37; void*x38; out const void*x39; short x40; void*x41; unsigned short x42; void*x43; out const void*x44; void*x45; int x46; void*x47; void*x48; unsigned int x49; void*x50; float x51; const void*x52; void*x53; void*x54; void*x55; out const void*x56; void*x57; unsigned short x58; void*x59; out const void*x60; void*x61; int x62; void*x63; void*x64; unsigned int x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; out void*x117; void*x118; void*x119; void*x120; long long x121; void*x122; void*x123; short x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; void*x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; void*x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; id x185; void*x186; unsigned int x187/* : ? */; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; id x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; void*x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; id x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; unsigned short x332; void*x333; bool x334; void*x335; const out void*x336; const void*x337; short x338; short x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; out void*x353; void*x354; void*x355; void*x356; out void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; unsigned short x391; void*x392; unsigned int x393; void*x394; void*x395; void*x396; unsigned long x397; int x398; short x399; void*x400; void*x401; const out void*x402; void*x403; void*x404; void*x405; void*x406; void*x407; void*x408; void*x409; void*x410; void*x411; void*x412; void*x413; void*x414; id x415; void*x416; out long long x417; void*x418; void*x419; void*x420; long doublex421; void*x422; void*x423; void*x424; unsigned short x425; void*x426; unsigned int x427/* : ? */; short x428; BOOL x429; const int x430; void*x431; void*x432; int x433; out in short x434; void*x435; void*x436; unsigned long x437; void*x438; void*x439; long long x440; void*x441; void*x442; short x443; void*x444; void*x445; void*x446; void*x447; void*x448; void*x449; void*x450; void*x451; void*x452; void*x453; void*x454; void*x455; void*x456; void*x457; id x458; void*x459; out long long x460; void*x461; void*x462; void*x463; void*x464; unsigned int x465; void*x466; void*x467; in double x468; long x469; void*x470; void*x471; void*x472; long x473; void*x474; short x475; unsigned short x476; void*x477; void*x478; void*x479; int x480; in void*x481; short x482; void*x483; void*x484; void*x485; double x486; void*x487; const void*x488; out out void*x489; void*x490; const long doublex491; void*x492; short x493; BOOL x494; const int x495; void*x496; void*x497; int x498; out in oneway int x499; void*x500; void*x501; void*x502; void*x503; void*x504; void*x505; void*x506; void*x507; void*x508; void*x509; id x510; void*x511; out long long x512; long doublex513; void*x514; void*x515; void*x516; void*x517; void*x518; out void*x519; out short x520; void*x521; const int x522; double x523; void*x524; const out void*x525; const void*x526; short x527; short x528; unsigned int x529; in float x530; out void*x531; void*x532; void*x533; void*x534; void*x535; void*x536; void*x537; void*x538; void*x539; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; id x548; void*x549; out long long x550; void*x551; void*x552; unsigned char x553; out void*x554; void*x555; out short x556; void*x557; void*x558; void*x559; void x560; int x561; void*x562; void*x563; oneway int x564; void*x565; void*x566; unsigned char x567; out in void*x568; const out long x569; long x570; void*x571; const void*x572; void*x573; void*x574; void*x575; void*x576; void*x577; void*x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; id x585; void*x586; out long long x587; void*x588; void*x589; oneway void*x590; double x591; int x592; out unsigned short x593; void*x594; short x595; short x596; int x597; out in unsigned char x598; void*x599; void*x600; in in void*x601; long x602; long doublex603; void*x604; short x605; BOOL x606; const int x607; void*x608; void*x609; int x610; out in void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; id x621; void*x622; out long long x623; void*x624; void*x625; unsigned int x626; void*x627; void*x628; void*x629; const void*x630; void*x631; void*x632; void*x633; void*x634; void*x635; void*x636; void*x637; void*x638; void*x639; void*x640; void*x641; void*x642; void*x643; void*x644; void*x645; void*x646; void*x647; void*x648; void*x649; id x650; void*x651; out long long x652; void*x653; void*x654; void*x655; unsigned int x656; void*x657; void*x658; void*x659; void*x660; long x661; void*x662; void*x663; void*x664; void*x665; void*x666; const int x667; unsigned int x668/* : ? */; void*x669; void*x670; void*x671; double x672; unsigned short x673; void*x674; const int x675; in void*x676; void*x677; void*x678; void*x679; void*x680; void*x681; void*x682; void*x683; void*x684; void*x685; void*x686; void*x687; void*x688; void*x689; void*x690; id x691; void*x692; out long long x693; void*x694; void*x695; unsigned long long x696; void*x697; bool x698; out double x699; void*x700; unsigned short x701; void*x702; out const void*x703; void*x704; void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; id x718; void*x719; out long long x720; void*x721; void*x722; oneway short x723; short x724; void*x725; void*x726; void*x727; const int x728; void*x729; void*x730; const unsigned int x731; in void*x732; void*x733; void*x734; void*x735; void*x736; short x737; short x738; long doublex739; void*x740; short x741; BOOL x742; const int x743; void*x744; void*x745; int x746; out in void*x747; void*x748; short x749; void*x750; out in double x751; void*x752; const void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; void*x761; void*x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; id x769; void*x770; out long long x771; void*x772; void*x773; void*x774; unsigned int x775; void*x776; void*x777; void*x778; unsigned long x779; int x780; short x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; void*x791; void*x792; void*x793; void*x794; void*x795; void*x796; void*x797; void*x798; id x799; void*x800; out long long x801; void*x802; void*x803; void*x804; unsigned short x805; void*x806; void*x807; void*x808; void*x809; in void*x810; unsigned int x811; in float x812; out void*x813; void*x814; void*x815; void*x816; void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; id x826; void*x827; out long long x828; void*x829; void*x830; void*x831; void*x832; void*x833; const out void*x834; out void*x835; void*x836; void*x837; out void x838; void*x839; void*x840; void*x841; short x842; short x843; void*x844; void*x845; long long x846; void*x847; void*x848; short x849; void*x850; void*x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; void*x867; id x868; void*x869; out long long x870; void*x871; void*x872; unsigned short x873; void*x874; void*x875; void*x876; void*x877; void*x878; bool x879; void*x880; void*x881; in BOOL x882; out double x883; int x884; in void*x885; long doublex886; void*x887; void*x888; void*x889; BOOL x890; void*x891; out const void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; void*x898; void*x899; void*x900; void*x901; void*x902; void*x903; void*x904; void*x905; void*x906; void*x907; void*x908; id x909; void*x910; out long long x911; void*x912; void*x913; unsigned short x914; unsigned char x915; void*x916; unsigned char x917; void*x918; void*x919; const void*x920; unsigned short x921; void*x922; void*x923; long x924; void*x925; unsigned short x926; void*x927; void*x928; void*x929; void*x930; void*x931; void*x932; void*x933; void*x934; void*x935; void*x936; void*x937; id x938; void*x939; out long long x940; void*x941; void*x942; out const void*x943; long doublex944; void*x945; unsigned short x946; void*x947; oneway void*x948; void*x949; short x950; out void*x951; const BOOL x952; void*x953; void*x954; void*x955; BOOL x956; out const double x957; void*x958; void*x959; void*x960; void*x961; void*x962; void*x963; void*x964; void*x965; void*x966; void*x967; void*x968; void*x969; void*x970; void*x971; void*x972; void*x973; void*x974; void*x975; id x976; void*x977; out long long x978; void*x979; bool x980; void*x981; void*x982; unsigned int x983/* : ? */; long x984; void*x985; unsigned char x986; void*x987; long x988; long x989; void*x990; const out void*x991; void*x992; const void*x993; int x994; void*x995; short x996; void*x997; void*x998; void*x999; void*x1000; void*x1001; id x1002; void*x1003; void*x1004; void*x1005; void*x1006; void*x1007; unsigned int x1008; void*x1009; void*x1010; void*x1011; unsigned int x1012/* : ? */; out void*x1013; const double x1014; void*x1015; void*x1016; out void*x1017; int x1018; unsigned int x1019; in void*x1020; void*x1021; void*x1022; unsigned char x1023; out in void*x1024; const out long x1025; long x1026; void*x1027; const void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; id x1040; float x1041; unsigned int x1042/* : ? */; void*x1043; void*x1044; unsigned long x1045; void*x1046; void*x1047; void*x1048; unsigned long x1049; long doublex1050; void*x1051; void*x1052; void*x1053; unsigned char x1054; void*x1055; BOOL x1056; void*x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; void*x1064; void*x1065; void*x1066; void*x1067; void*x1068; void*x1069; id x1070; void*x1071; void*x1072; void*x1073; void*x1074; void*x1075; long doublex1076; bycopy unsigned int x1077/* : ? */; short x1078; void*x1079; const void x1080; void*x1081; const unsigned long long x1082; void*x1083; void*x1084; const void*x1085; unsigned short x1086; void*x1087; const void x1088; void*x1089; const void*x1090; void*x1091; void*x1092; void*x1093; void*x1094; id x1095; long doublex1096; unsigned int x1097/* : ? */; void*x1098; void*x1099; void*x1100; unsigned short x1101; oneway void*x1102; in void*x1103; unsigned int x1104/* : ? */; long x1105; void*x1106; unsigned short x1107; void*x1108; unsigned int x1109/* : ? */; short x1110; BOOL x1111; const int x1112; void*x1113; void*x1114; int x1115; out in void*x1116; void*x1117; long long x1118; void*x1119; void*x1120; short x1121; void*x1122; void*x1123; void*x1124; void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; void*x1131; void*x1132; void*x1133; void*x1134; void*x1135; void*x1136; id x1137; void*x1138; out void*x1139; void*x1140; void*x1141; unsigned short x1142; void*x1143; void*x1144; void*x1145; void*x1146; void*x1147; unsigned long x1148; void*x1149; void*x1150; in BOOL x1151; out double x1152; int x1153; in void*x1154; long doublex1155; void*x1156; void*x1157; void*x1158; BOOL x1159; void*x1160; out const void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; void*x1168; void*x1169; void*x1170; void*x1171; void*x1172; void*x1173; void*x1174; void*x1175; void*x1176; void*x1177; id x1178; void*x1179; long long x1180; void*x1181; void*x1182; void*x1183; unsigned short x1184; void*x1185; unsigned char x1186; out void*x1187; void*x1188; void*x1189; in void*x1190; void*x1191; out short x1192; void*x1193; int x1194; in void*x1195; void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; id x1205; }*)arg1;

@end
