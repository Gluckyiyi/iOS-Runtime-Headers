/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMetricsPlayActionEvent : MusicMetricsEvent {
    unsigned int _index;
    unsigned int _playActionEventType;
    unsigned int _shuffleType;
    NSDictionary *_storePlatformDictionary;
}

@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int playActionEventType;
@property (nonatomic) unsigned int shuffleType;
@property (nonatomic, copy) NSDictionary *storePlatformDictionary;

- (void).cxx_destruct;
- (id)copyJSExtraInfo;
- (unsigned int)index;
- (id)init;
- (unsigned int)playActionEventType;
- (void)setIndex:(unsigned int)arg1;
- (void)setPlayActionEventType:(unsigned int)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (void)setStorePlatformDictionary:(id)arg1;
- (unsigned int)shuffleType;
- (id)storePlatformDictionary;

@end
