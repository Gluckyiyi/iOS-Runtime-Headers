/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemOfferButton : UIControl <SKUIViewElementOfferButton> {
    UIColor *_backgroundColor;
    float _borderColorAlphaMultiplier;
    BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
    UIView *_borderView;
    SKUIFocusedTouchGestureRecognizer *_cancelGestureRecognizer;
    id /* block */ _centerImageProvider;
    UIImage *_cloudImage;
    UIColor *_cloudTintColor;
    UIColor *_confirmationColor;
    NSMutableAttributedString *_confirmationTitleAttributedString;
    struct CGSize { 
        float width; 
        float height; 
    } _confirmationTitleFitSize;
    int _confirmationTitleStyle;
    <SKUIItemOfferButtonDelegate> *_delegate;
    int _fillStyle;
    UIImage *_image;
    UIImageView *_imageView;
    float _progress;
    SKUICircleProgressIndicator *_progressIndicator;
    BOOL _showsConfirmationState;
    SKUIItemOfferButtonState *_state;
    NSMutableAttributedString *_titleAttributedString;
    struct CGSize { 
        float width; 
        float height; 
    } _titleFitSize;
    UILabel *_titleLabel;
    int _titleStyle;
    BOOL _universal;
    UIImageView *_universalImageView;
    BOOL _usesDrawRectPath;
}

@property (nonatomic) float borderColorAlphaMultiplier;
@property (nonatomic, copy) id /* block */ centerImageProvider;
@property (nonatomic, copy) UIColor *cloudTintColor;
@property (nonatomic, copy) NSString *confirmationTitle;
@property (nonatomic) int confirmationTitleStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemOfferButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fillStyle;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) <SKUIItemOfferButtonDelegate> *itemOfferDelegate;
@property (nonatomic) float progress;
@property (nonatomic) int progressType;
@property (getter=isShowingConfirmation, nonatomic, readonly) BOOL showingConfirmation;
@property (nonatomic) BOOL showsConfirmationState;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int titleStyle;
@property (getter=isUniversal, nonatomic) BOOL universal;

+ (id)_basicAnimationWithKeyPath:(id)arg1;
+ (id)_cachedImageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 fillStyle:(int)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_defaultTitleAttributes;
+ (id)_imageForAttributedTitle:(id)arg1 titleStyle:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 fillStyle:(int)arg4 universal:(BOOL)arg5 tintColor:(id)arg6;
+ (id)_imageForProgressType:(int)arg1;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_imageInsetsForProgressType:(int)arg1;
+ (BOOL)_sizeMattersForTitleStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })_titleSizeThatFitsForSize:(struct CGSize { float x1; float x2; })arg1 titleStyle:(int)arg2 mutableAttributedString:(id)arg3;
+ (id)_universalPlusImageWithTintColor:(id)arg1;
+ (id)cloudImageWithTintColor:(id)arg1 arrowTintColor:(id)arg2;
+ (id)cloudTintColorForBackgroundColor:(id)arg1;
+ (id)itemOfferButtonWithAppearance:(id)arg1;
+ (id)localizedTitleForItemState:(id)arg1 clientContext:(id)arg2;

- (void).cxx_destruct;
- (void)_adjustViewOrderingForProperties:(id)arg1;
- (id)_buttonPropertiesForState:(id)arg1;
- (void)_cancelGestureAction:(id)arg1;
- (float)_horizontalInsetForTitleStyle:(int)arg1;
- (id)_imageForProgressType:(int)arg1;
- (void)_insertBorderView;
- (void)_insertCancelGestureRecognizer;
- (void)_insertImageView;
- (void)_insertLabel;
- (void)_insertProgressIndicator;
- (void)_insertUniversalView;
- (void)_reloadForCurrentState:(BOOL)arg1;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (BOOL)_touchInBounds:(id)arg1;
- (void)_transitionFromImage:(id)arg1 toImage:(id)arg2 withDuration:(float)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromProgress:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromProgress:(id)arg1 toTitleOrImage:(id)arg2 withDuration:(float)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromTitle:(id)arg1 toTitle:(id)arg2 withDuration:(float)arg3 completion:(id /* block */)arg4;
- (void)_transitionFromTitleOrImage:(id)arg1 toProgress:(id)arg2 withDuration:(float)arg3 completion:(id /* block */)arg4;
- (void)_updateForChangedConfirmationTitleProperty;
- (void)_updateForChangedTitleProperty;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (float)borderColorAlphaMultiplier;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id /* block */)centerImageProvider;
- (id)cloudTintColor;
- (id)confirmationTitle;
- (int)confirmationTitleStyle;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (int)fillStyle;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShowingConfirmation;
- (BOOL)isUniversal;
- (id)itemOfferDelegate;
- (struct CGSize { float x1; float x2; })layoutSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (float)progress;
- (int)progressType;
- (void)removeButtonStateAnimations;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColorAlphaMultiplier:(float)arg1;
- (void)setCenterImageProvider:(id /* block */)arg1;
- (void)setCloudTintColor:(id)arg1;
- (void)setColoringWithAppearance:(id)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setConfirmationTitleStyle:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFillStyle:(int)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setItemOfferDelegate:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgressType:(int)arg1;
- (void)setProgressType:(int)arg1 animated:(BOOL)arg2;
- (void)setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsConfirmationState:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)setTitle:(id)arg1 confirmationTitle:(id)arg2 itemState:(id)arg3 clientContext:(id)arg4 animated:(BOOL)arg5;
- (void)setTitleStyle:(int)arg1;
- (void)setUniversal:(BOOL)arg1;
- (BOOL)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (BOOL)setValuesUsingItemOffer:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(BOOL)arg4;
- (void)showCloudImage;
- (BOOL)showsConfirmationState;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)tintColorDidChange;
- (id)title;
- (int)titleStyle;

@end
