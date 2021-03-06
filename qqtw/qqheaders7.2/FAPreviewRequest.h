//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class FAModel, IEngineDispatchDelegateNonRetian, NSString, NSTimerNonRetain;

@interface FAPreviewRequest : NSObject <IEngineDispatchDelegate>
{
    _Bool _isRequesting;
    int _reqSeq;
    int _retCode;
    int _retryCount;
    FAModel *_model;
    NSTimerNonRetain *_downloadTimeOutTimer;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    id <FAPreviewRequestDelegate> _delegate;
    NSString *_errMsg;
}

- (_Bool)canRetry;
- (void)cancel;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
@property(retain, nonatomic) NSTimerNonRetain *downloadTimeOutTimer; // @synthesize downloadTimeOutTimer=_downloadTimeOutTimer;
@property(retain, nonatomic) NSString *errMsg; // @synthesize errMsg=_errMsg;
- (id)hexToString:(const char *)arg1 Length:(int)arg2;
- (id)initWithModel:(id)arg1;
- (void)internalRequest;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (void)notifyError:(id)arg1;
- (void)notifyPreviewResult:(_Bool)arg1;
- (_Bool)onRspApplyPreview:(const basic_string_075b6133 *)arg1;
- (void)onTimedOut;
- (void)onlinePreviewRequest:(id)arg1;
- (void)setTimeoutTimer;
- (void)stopTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

