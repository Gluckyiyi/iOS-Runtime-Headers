/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {
    NSString * _followUpType;
    BOOL  _force;
    unsigned int  _repairType;
    BOOL  _shouldNotify;
}

@property (nonatomic, copy) NSString *followUpType;
@property (nonatomic) BOOL force;
@property (nonatomic) unsigned int repairType;
@property (nonatomic) BOOL shouldNotify;

+ (id)contextForOfflinePasscodeChange;
+ (id)contextForRecoveryKeyRepair;
+ (id)contextForStateRepair;
+ (id)contextWithType:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpType;
- (BOOL)force;
- (id)initWithCoder:(id)arg1;
- (unsigned int)repairType;
- (void)setFollowUpType:(id)arg1;
- (void)setForce:(BOOL)arg1;
- (void)setRepairType:(unsigned int)arg1;
- (void)setShouldNotify:(BOOL)arg1;
- (BOOL)shouldNotify;

@end