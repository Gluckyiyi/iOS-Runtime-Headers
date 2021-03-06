/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATSocket : NSObject {
    <CATSocketDelegate> * _delegate;
    CATEndPoint * _localEndPoint;
    int  _nativeSocket;
    CATEndPoint * _remoteEndPoint;
    NSObject<OS_dispatch_queue> * _socketQueue;
    NSObject<OS_dispatch_source> * _socketSource;
    NSObject<OS_dispatch_queue> * _userQueue;
    BOOL  mIsInvalid;
    int  mState;
}

@property (nonatomic) <CATSocketDelegate> *delegate;
@property (nonatomic, readonly) CATEndPoint *localEndPoint;
@property (nonatomic) int nativeSocket;
@property (nonatomic, readonly) CATEndPoint *remoteEndPoint;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *socketQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *socketSource;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *userQueue;

- (void).cxx_destruct;
- (void)acceptPendingConnection;
- (BOOL)connectToEndPoint:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidClose;
- (void)delegateDidConnect;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidReceiveData:(id)arg1;
- (BOOL)delegateShouldAcceptNewSocket:(id)arg1;
- (id)init;
- (id)initWithNativeSocket:(int)arg1;
- (void)invalidate;
- (BOOL)listenWithEndPoint:(id)arg1 error:(id*)arg2;
- (id)localEndPoint;
- (int)nativeSocket;
- (void)populateLocalEndPoint;
- (void)populateRemoteEndPoint;
- (id)remoteEndPoint;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setNativeSocket:(int)arg1;
- (void)socketDidCancel;
- (void)socketDidConnect;
- (void)socketDidFailWithError:(id)arg1;
- (void)socketDidReceiveData;
- (void)socketDidReceiveEvent;
- (void)socketDidReceiveListeningEvent;
- (id)socketQueue;
- (id)socketSource;
- (void)suspend;
- (id)userQueue;

@end
