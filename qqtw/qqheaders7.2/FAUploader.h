//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FAUpDoEndDelegate.h"
#import "FAUpHttpDelegate.h"
#import "FAUpRequestDelegate.h"

@class FATaskInfoUpload, FAUpDoEnd, FAUpHttp, FAUpRequest, NSInvocationOperation, NSString;

@interface FAUploader : NSObject <FAUpRequestDelegate, FAUpHttpDelegate, FAUpDoEndDelegate>
{
    int _logId;
    FATaskInfoUpload *_fileInfo;
    id <FAUploadDelegate> _delegate;
    _Bool _isRetryReqUrl;
    NSInvocationOperation *_opHASH;
    FAUpRequest *_fileUpRequest;
    FAUpHttp *_fileUpHttp;
    FAUpDoEnd *_fileUpDoEnd;
    _Bool _exteriorCancelFlag;
    int _xo;
}

- (_Bool)GetResumeInfo;
- (void)OnDoEndResult:(_Bool)arg1;
- (void)OnHttpProgress:(id)arg1;
- (void)OnHttpResult:(_Bool)arg1 isInvalidUrl:(_Bool)arg2 info:(id)arg3;
- (void)OnRequestResult:(_Bool)arg1 url:(id)arg2 info:(id)arg3;
- (void)StopCurrentHttpUpload;
- (void)calcFileHash:(id)arg1;
- (void)calcFileHashAsync;
- (void)cancel;
- (void)cancelWithNotifyFailCode:(int)arg1 errMsg:(id)arg2;
- (void)createComponent;
- (void)dealloc;
- (id)init:(id)arg1;
- (void)internalStart;
- (void)retryReqUrl;
- (void)saveHttpInfoForDoEnd;
- (void)start:(id)arg1;
- (void)stop;
- (void)stopHashCalcThread;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) FATaskInfoUpload *fileInfo; // @dynamic fileInfo;
@property(retain, nonatomic) FAUpDoEnd *fileUpDoEnd; // @dynamic fileUpDoEnd;
@property(retain, nonatomic) FAUpHttp *fileUpHttp; // @dynamic fileUpHttp;
@property(retain, nonatomic) FAUpRequest *fileUpRequest; // @dynamic fileUpRequest;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
