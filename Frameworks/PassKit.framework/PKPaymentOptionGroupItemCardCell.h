/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentOptionGroupItemCardCell : PKPaymentOptionGroupItemCell {
    UIImageView *_cardArtView;
    UILabel *_censoredPANLabel;
    BOOL _dimCardArt;
    UIColor *_disabledMainLabelColor;
    UIColor *_disabledSubTextLabelColor;
    UILabel *_displayLabel;
    BOOL _isRightToLeft;
    UIColor *_mainLabelColor;
    PKPassSnapshotter *_passSnapshotter;
    BOOL _showBillingAddress;
    UIColor *_subTextLabelColor;
}

@property (nonatomic) BOOL dimCardArt;
@property (nonatomic, retain) UIColor *disabledMainLabelColor;
@property (nonatomic, retain) UIColor *disabledSubTextLabelColor;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, retain) PKPassSnapshotter *passSnapshotter;
@property (nonatomic) BOOL showBillingAddress;
@property (nonatomic, retain) UIColor *subTextLabelColor;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_cardArtFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_censoredPANLabelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_displayLabelFrame;
- (void)_updateCellContent;
- (void)dealloc;
- (BOOL)dimCardArt;
- (id)disabledMainLabelColor;
- (id)disabledSubTextLabelColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)mainLabelColor;
- (id)passSnapshotter;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; long long x54; void*x55; void*x56; in void*x57; void*x58; void*x59; long x60; void*x61; BOOL x62; void*x63; int x64; out in unsigned char x65; void*x66; void*x67; in void*x68; void*x69; double x70; void*x71; void*x72; in double x73; long x74; void*x75; const void*x76; void*x77; void*x78; void*x79; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; unsigned short x133; bool x134; void*x135; void*x136; short x137; short x138; BOOL x139; out double x140; void*x141; void*x142; void*x143; void*x144; unsigned int x145/* : ? */; out void*x146; const double x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; void*x154; void*x155; void*x156; void*x157; short x158; void*x159; void*x160; void*x161; void*x162; void*x163; void*x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; void*x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; id x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; void*x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; BOOL x245; void*x246; void*x247; void*x248; in void*x249; unsigned long x250; void*x251; void*x252; out void*x253; void*x254; void*x255; void*x256; const void*x257; in void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; float x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; id x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; void*x341; void*x342; void*x343; void*x344; void*x345; void*x346; unsigned char x347; void*x348; int x349; long x350; void*x351; unsigned short x352; void*x353; out const void*x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; void*x362; void*x363; void*x364; void*x365; void*x366; void*x367; void*x368; void*x369; void*x370; void*x371; void*x372; void*x373; void*x374; void*x375; void*x376; void*x377; void*x378; id x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; void*x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; void*x400; void*x401; long doublex402; }*)arg1;
- (void)setDimCardArt:(BOOL)arg1;
- (void)setDisabledMainLabelColor:(id)arg1;
- (void)setDisabledSubTextLabelColor:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPassSnapshotter:(id)arg1;
- (void)setShowBillingAddress:(BOOL)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (BOOL)showBillingAddress;
- (id)subTextLabelColor;

@end
