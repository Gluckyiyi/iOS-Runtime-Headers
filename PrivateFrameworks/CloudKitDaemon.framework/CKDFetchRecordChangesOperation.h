/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordChangesOperation : CKDDatabaseOperation {
    int _changeTypes;
    CKServerChangeToken *_clientChangeToken;
    NSArray *_desiredKeys;
    BOOL _fetchAllChanges;
    NSObject<OS_dispatch_group> *_fetchRecordsGroup;
    NSObject<OS_dispatch_group> *_pendingClientHandlingGroup;
    CKServerChangeToken *_previousServerChangeToken;
    id /* block */ _recordChangedBlock;
    CKDRecordFetchAggregator *_recordFetcher;
    CKRecordZoneID *_recordZoneID;
    NSData *_resultClientChangeToken;
    NSData *_resultClientChangeTokenData;
    CKServerChangeToken *_resultServerChangeToken;
    unsigned int _resultsLimit;
    id /* block */ _serverChangeTokenUpdatedBlock;
    id /* block */ _shareChangedBlock;
    BOOL _shouldFetchAssetContents;
    int _status;
}

@property (nonatomic) int changeTypes;
@property (nonatomic, retain) CKServerChangeToken *clientChangeToken;
@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchRecordsGroup;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *pendingClientHandlingGroup;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, retain) CKDRecordFetchAggregator *recordFetcher;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic, readonly) NSData *resultClientChangeToken;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic, copy) id /* block */ serverChangeTokenUpdatedBlock;
@property (nonatomic, copy) id /* block */ shareChangedBlock;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleFetchChangesRequestFinished:(id)arg1 callbackGroup:(id)arg2;
- (void)_handleRecordChange:(id)arg1 callbackGroup:(id)arg2;
- (void)_sendFetchChangesRequestWithChangeToken:(id)arg1;
- (unsigned long long)activityStart;
- (int)changeTypes;
- (id)clientChangeToken;
- (id)desiredKeys;
- (BOOL)fetchAllChanges;
- (id)fetchRecordsGroup;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (id)pendingClientHandlingGroup;
- (id)previousServerChangeToken;
- (id /* block */)recordChangedBlock;
- (id)recordFetcher;
- (id)recordZoneID;
- (id)resultClientChangeToken;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeToken;
- (unsigned int)resultsLimit;
- (id /* block */)serverChangeTokenUpdatedBlock;
- (void)setChangeTypes:(int)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllChanges:(BOOL)arg1;
- (void)setFetchRecordsGroup:(id)arg1;
- (void)setPendingClientHandlingGroup:(id)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordFetcher:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeTokenUpdatedBlock:(id /* block */)arg1;
- (void)setShareChangedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContents:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (id /* block */)shareChangedBlock;
- (BOOL)shouldFetchAssetContents;
- (int)status;

@end
