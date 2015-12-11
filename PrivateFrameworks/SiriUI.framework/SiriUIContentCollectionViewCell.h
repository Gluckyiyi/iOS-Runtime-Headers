/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _accessoryOffset;
    UIView *_accessoryView;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _chevronOffset;
    UIImageView *_chevronView;
    BOOL _hasChevron;
    BOOL _hasSetUpSubviewConstraints;
    BOOL _hasSetupStaticSubviewConstraints;
    SiriUIKeyline *_keyline;
    int _keylineType;
    NSMutableArray *_subviewConstraints;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textAndAccessoryInsets;
    UILabel *_textLabel;
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _textOffset;
    int _verticalAlignment;
    NSLayoutConstraint *leftChevronWidthConstraint;
    NSLayoutConstraint *rightChevronWidthConstraint;
}

@property (nonatomic) struct UIOffset { float x1; float x2; } accessoryOffset;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, readonly) float chevronLeadingMargin;
@property (nonatomic) struct UIOffset { float x1; float x2; } chevronOffset;
@property (nonatomic, readonly) float chevronTrailingMargin;
@property (nonatomic) BOOL hasChevron;
@property (nonatomic, readonly) SiriUIKeyline *keyline;
@property (nonatomic) int keylineType;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textAndAccessoryInsets;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic) struct UIOffset { float x1; float x2; } textOffset;
@property (nonatomic) int verticalAlignment;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })defaultInsets;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateSubviewConstraints;
- (struct UIOffset { float x1; float x2; })accessoryOffset;
- (id)accessoryView;
- (float)chevronLeadingMargin;
- (struct UIOffset { float x1; float x2; })chevronOffset;
- (float)chevronTrailingMargin;
- (BOOL)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)keyline;
- (int)keylineType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setChevronOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setHasChevron:(BOOL)arg1;
- (void)setKeylineType:(int)arg1;
- (void)setNeedsUpdateSubviewConstraints;
- (void)setTextAndAccessoryInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTextLabel:(id)arg1;
- (void)setTextOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setVerticalAlignment:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textAndAccessoryInsets;
- (id)textLabel;
- (struct UIOffset { float x1; float x2; })textOffset;
- (void)updateConstraints;
- (int)verticalAlignment;

@end
