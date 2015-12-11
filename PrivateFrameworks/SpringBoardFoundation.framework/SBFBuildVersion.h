/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBuildVersion : NSObject {
    NSString *_majorBuildLetterString;
    int _majorBuildNumber;
    NSString *_minorBuildLetterString;
    int _minorBuildNumber;
    NSString *_stringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *majorBuildLetterString;
@property (nonatomic, readonly) int majorBuildNumber;
@property (nonatomic, readonly, copy) NSString *minorBuildLetterString;
@property (nonatomic, readonly) int minorBuildNumber;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

- (int)compareBuildVersion:(id)arg1 withPrecision:(int)arg2;
- (int)compareBuildVersionString:(id)arg1 withPrecision:(int)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)majorBuildLetterString;
- (int)majorBuildNumber;
- (id)minorBuildLetterString;
- (int)minorBuildNumber;
- (id)stringRepresentation;

@end
