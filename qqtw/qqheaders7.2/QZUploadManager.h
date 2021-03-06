//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface QZUploadManager : NSObject
{
    NSOperationQueue *_requestQueue;
    _Bool _bStop;
    _Bool _bSuspendRequest;
    id <QZUploadDelegate> _uploaddelegate;
    NSOperationQueue *_otherQueue;
}

+ (id)preUploadSharedManager;
+ (id)sendBoxSharedManager;
- (void).cxx_destruct;
- (void)applicationEventListen;
- (void)applicationWillEnterBackground;
- (void)applicationWillEnterForeground;
- (_Bool)cancelRequestByPacket:(id)arg1;
- (_Bool)cancelRequestFile:(id)arg1 Report:(_Bool)arg2;
- (void)chanceToProcessPacket:(id)arg1;
- (void)clearAllCachedInfo;
- (void)clearAllRequest;
- (_Bool)clearAllRequest:(id)arg1;
- (_Bool)clearSpecialRequestWithBlock:(CDUnknownBlockType)arg1;
- (long long)curReqCnt;
- (void)dealloc;
- (id)delegateDispatcher;
- (id)init;
- (_Bool)isReady;
- (void)notifyBeginUpload:(id)arg1;
- (void)notifyFail:(id)arg1;
- (void)notifyFileStatus:(id)arg1;
- (void)notifyProcess:(id)arg1;
- (void)notifyRequestCancel:(id)arg1;
- (void)notifyRequestFinish:(id)arg1;
- (void)notifySucess:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *otherQueue; // @synthesize otherQueue=_otherQueue;
@property(readonly, nonatomic) NSOperationQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void)resume;
- (void)sendboxAddPacket:(id)arg1;
@property(nonatomic) __weak id <QZUploadDelegate> uploaddelegate; // @synthesize uploaddelegate=_uploaddelegate;
- (_Bool)start:(id)arg1;
- (_Bool)startSingle:(id)arg1;
- (void)stop;
- (void)stopAsync;
- (void)suspend;

@end

