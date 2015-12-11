/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface WorldClockCellView : UIView <Clock> {
    AnalogClockView *_analogClock;
    UILabel *_combinedLabel;
    UIView *_combinedLabelContainer;
    NSArray *_currentConstraints;
    <WorldClockCellViewDelegate> *_delegate;
    DigitalClockLabel *_digitalClock;
    BOOL _editing;
    UILabel *_nameLabel;
    int _nowInMinutes;
    BOOL _shouldAddLayoutConstraints;
    BOOL _started;
    int _style;
    NSTimeZone *_timeZone;
}

@property (nonatomic, readonly) AnalogClockView *analogClock;
@property (nonatomic, readonly) UILabel *combinedLabel;
@property (retain) UIView *combinedLabelContainer;
@property (nonatomic, retain) NSArray *currentConstraints;
@property (nonatomic) <WorldClockCellViewDelegate> *delegate;
@property (nonatomic, readonly) DigitalClockLabel *digitalClock;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) int runMode;
@property (nonatomic) BOOL shouldAddLayoutConstraints;
@property (nonatomic, readonly) BOOL started;
@property (nonatomic) int style;

+ (id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(int)arg2 dayText:(id*)arg3 hourText:(id*)arg4 usesSeparateLines:(BOOL)arg5;

- (void).cxx_destruct;
- (void)_setStyle:(int)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (id)analogClock;
- (double)coarseUpdateInterval;
- (id)combinedLabel;
- (id)combinedLabelContainer;
- (id)currentConstraints;
- (void)dealloc;
- (id)delegate;
- (id)digitalClock;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)localeChange:(id)arg1;
- (id)nameLabel;
- (int)runMode;
- (void)setCombinedLabelContainer:(id)arg1;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldAddLayoutConstraints:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setTimeZone:(id)arg1;
- (BOOL)shouldAddLayoutConstraints;
- (void)significantTimeChange:(id)arg1;
- (void)start;
- (BOOL)started;
- (void)stop;
- (id)stringFromDate:(id)arg1 withTimezoneOffset:(int)arg2;
- (int)style;
- (void)updateConstraints;
- (double)updateInterval;
- (void)updateTime;
- (void)updateTimeContinuously:(int)arg1;
- (id)viewsByIdentifier;

@end
