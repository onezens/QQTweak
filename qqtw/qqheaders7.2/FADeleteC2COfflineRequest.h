//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class FAModel, IEngineDispatchDelegateNonRetian, NSString, NSTimerNonRetain;

@interface FADeleteC2COfflineRequest : NSObject <IEngineDispatchDelegate>
{
    NSTimerNonRetain *_timer;
    IEngineDispatchDelegateNonRetian *_csDelegate;
    int _reqSeq;
    id <FADeleteC2COfflineRequestDelegate> _delegate;
    FAModel *_model;
}

- (void)cancel;
- (void)dealloc;
@property(retain, nonatomic) id <FADeleteC2COfflineRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)initWithFAModel:(id)arg1 delegate:(id)arg2;
- (void)internalRequest;
@property(retain, nonatomic) FAModel *model; // @synthesize model=_model;
- (void)notifyError:(id)arg1;
- (void)onTimeOut;
- (void)start;
- (void)startTimer;
- (void)stopTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

