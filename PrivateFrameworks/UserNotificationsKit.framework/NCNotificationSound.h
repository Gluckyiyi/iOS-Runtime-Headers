/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationSound : NSObject <BSDescriptionProviding> {
    TLAlertConfiguration * _alertConfiguration;
    NSDictionary * _controllerAttributes;
    double  _maxDuration;
    BOOL  _repeats;
    NSString * _ringtoneName;
    NSString * _songPath;
    unsigned int  _soundBehavior;
    int  _soundType;
    unsigned long  _systemSoundID;
    NSDictionary * _vibrationPattern;
}

@property (nonatomic, readonly, copy) TLAlertConfiguration *alertConfiguration;
@property (nonatomic, readonly, copy) NSDictionary *controllerAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) double maxDuration;
@property (getter=isRepeating, nonatomic, readonly) BOOL repeats;
@property (nonatomic, readonly, copy) NSString *ringtoneName;
@property (nonatomic, readonly, copy) NSString *songPath;
@property (nonatomic, readonly) unsigned int soundBehavior;
@property (nonatomic, readonly) int soundType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long systemSoundID;
@property (nonatomic, readonly, copy) NSDictionary *vibrationPattern;

- (void).cxx_destruct;
- (id)alertConfiguration;
- (id)controllerAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)hash;
- (id)initWithNotificationSound:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRepeating;
- (double)maxDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)ringtoneName;
- (id)songPath;
- (unsigned int)soundBehavior;
- (int)soundType;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long)systemSoundID;
- (id)vibrationPattern;

@end
