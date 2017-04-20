/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUPressedItemContext : NSObject {
    BOOL  _active;
    HUElasticApplier * _applier;
    double  _beginTime;
    float  _currentViewScale;
    BOOL  _isUserInitiated;
    HFItem * _item;
    NSTimer * _programmaticBounceTimer;
    float  _rawInputProgress;
}

@property (getter=isActive, nonatomic) BOOL active;
@property (nonatomic, retain) HUElasticApplier *applier;
@property (nonatomic) double beginTime;
@property (nonatomic) float currentViewScale;
@property (nonatomic) BOOL isUserInitiated;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSTimer *programmaticBounceTimer;
@property (nonatomic) float rawInputProgress;

- (void).cxx_destruct;
- (id)applier;
- (double)beginTime;
- (float)currentViewScale;
- (BOOL)isActive;
- (BOOL)isUserInitiated;
- (id)item;
- (id)programmaticBounceTimer;
- (float)rawInputProgress;
- (void)setActive:(BOOL)arg1;
- (void)setApplier:(id)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setCurrentViewScale:(float)arg1;
- (void)setIsUserInitiated:(BOOL)arg1;
- (void)setItem:(id)arg1;
- (void)setProgrammaticBounceTimer:(id)arg1;
- (void)setRawInputProgress:(float)arg1;

@end