/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCellLayoutOptions : NSObject <HUGridDisplayOptions, NSCopying> {
    HUGridCellBackgroundDisplayOptions * _backgroundDisplayOptions;
    float  _cellCornerRadius;
    float  _cellInnerMargin;
    float  _cellScaleFactor;
    int  _cellSizeSubclass;
    unsigned int  _contentColorStyle;
    UIFont * _font;
    float  _iconSize;
    UIVisualEffect * _vibrancyEffect;
}

@property (nonatomic, copy) HUGridCellBackgroundDisplayOptions *backgroundDisplayOptions;
@property (nonatomic) float cellCornerRadius;
@property (nonatomic) float cellInnerMargin;
@property (nonatomic) float cellScaleFactor;
@property (nonatomic, readonly) int cellSizeSubclass;
@property (nonatomic) unsigned int contentColorStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic) float iconSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIVisualEffect *vibrancyEffect;

+ (id)defaultOptionsForCellSizeSubclass:(int)arg1;

- (void).cxx_destruct;
- (id)backgroundDisplayOptions;
- (float)cellCornerRadius;
- (float)cellInnerMargin;
- (float)cellScaleFactor;
- (int)cellSizeSubclass;
- (unsigned int)contentColorStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)font;
- (float)iconSize;
- (id)initWithCellSizeSubclass:(int)arg1;
- (void)setBackgroundDisplayOptions:(id)arg1;
- (void)setCellCornerRadius:(float)arg1;
- (void)setCellInnerMargin:(float)arg1;
- (void)setCellScaleFactor:(float)arg1;
- (void)setContentColorStyle:(unsigned int)arg1;
- (void)setFont:(id)arg1;
- (void)setIconSize:(float)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (id)vibrancyEffect;

@end