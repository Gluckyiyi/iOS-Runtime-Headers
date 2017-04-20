/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewSetPlacement_GenericApplicator : NSObject <UIInputViewSetPlacementApplicator> {
    NSLayoutConstraint * _horizontalConstraint;
    <UIInputViewSetPlacementOwner> * _owner;
    NSLayoutConstraint * _verticalConstraint;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly, retain) NSArray *constraints;
@property (readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain) UIView *draggableView;
@property (readonly) unsigned int hash;
@property (readonly) struct CGPoint { float x1; float x2; } origin;
@property (readonly) Class superclass;

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;

- (void).cxx_destruct;
- (BOOL)allConstraintsActive;
- (void)applyChanges:(id)arg1;
- (void)checkVerticalConstraint;
- (id)constraints;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)description;
- (id)draggableView;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGesture:(id)arg1 inDraggableView:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })origin;
- (BOOL)preBeginGesture:(id)arg1 shouldBegin:(BOOL*)arg2;
- (void)prepare;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;

@end