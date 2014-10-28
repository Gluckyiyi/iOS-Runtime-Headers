/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@class UILabel, _HKEmergencyContact;

@interface _EmergencyCardContactCell : UITableViewCell {
    _HKEmergencyContact *_contact;
    UILabel *_nameLabel;
    UILabel *_phoneNumberLabel;
    UILabel *_relationshipLabel;
}

@property(retain) _HKEmergencyContact * contact;

- (void).cxx_destruct;
- (id)contact;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end