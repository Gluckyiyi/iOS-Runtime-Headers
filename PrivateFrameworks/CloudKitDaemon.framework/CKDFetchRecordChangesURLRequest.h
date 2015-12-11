/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesURLRequest : CKDURLRequest {
    int _changeTypes;
    id /* block */ _recordChangedBlock;
    id /* block */ _recordDeletedBlock;
    CKRecordZoneID *_recordZoneID;
    NSArray *_requestedFields;
    NSData *_resultClientChangeTokenData;
    NSData *_resultServerChangeTokenData;
    unsigned int _resultsLimit;
    NSData *_serverChangeTokenData;
    id /* block */ _shareChangedBlock;
    id /* block */ _shareDeletedBlock;
    BOOL _shouldFetchAssetContent;
    int _status;
}

@property (nonatomic) int changeTypes;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, copy) id /* block */ recordDeletedBlock;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSArray *requestedFields;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) NSData *resultServerChangeTokenData;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic, copy) id /* block */ shareChangedBlock;
@property (nonatomic, copy) id /* block */ shareDeletedBlock;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)_handleRecordChanges:(id)arg1;
- (id)_handleShareChanges:(id)arg1;
- (int)changeTypes;
- (id)initWithRecordZoneID:(id)arg1 serverChangeTokenData:(id)arg2 requestedFields:(id)arg3;
- (int)operationType;
- (id /* block */)recordChangedBlock;
- (id /* block */)recordDeletedBlock;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)requestedFields;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeTokenData;
- (unsigned int)resultsLimit;
- (id)serverChangeTokenData;
- (void)setChangeTypes:(int)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setRequestedFields:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeTokenData:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setShareChangedBlock:(id /* block */)arg1;
- (void)setShareDeletedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (id /* block */)shareChangedBlock;
- (id /* block */)shareDeletedBlock;
- (BOOL)shouldFetchAssetContent;
- (int)status;
- (id)zoneIDsToLock;

@end
