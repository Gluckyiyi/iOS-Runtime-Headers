/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDService : NSObject <NSSecureCoding> {
    HMDAccessory *_accessory;
    NSString *_associatedServiceType;
    NSArray *_characteristics;
    NSNumber *_instanceID;
    NSString *_name;
    NSString *_providedName;
    NSString *_serviceType;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) NSString *associatedServiceType;
@property (nonatomic, readonly, copy) NSArray *characteristics;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, copy) NSNumber *instanceID;
@property (getter=getName, nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, retain) NSString *serviceType;
@property (nonatomic, readonly, copy) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_readNameCharacterisiticIfNeeded:(id)arg1;
- (void)_updateName:(id)arg1;
- (void)_updateProvidedName:(id)arg1;
- (id)accessory;
- (id)assistantUniqueIdentifier;
- (id)associatedServiceType;
- (id)characteristics;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (id)contextID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristicWithType:(id)arg1;
- (id)getConfiguredName;
- (id)getName;
- (id)initWithCoder:(id)arg1;
- (id)initWithService:(id)arg1 accessory:(id)arg2;
- (id)instanceID;
- (id)providedName;
- (id)serviceType;
- (void)setInstanceID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setServiceType:(id)arg1;
- (id)type;
- (BOOL)updateAssociatedServiceType:(id)arg1 error:(id*)arg2;
- (void)updateLastKnownValues;
- (id)updateName:(id)arg1;
- (id)url;

@end
