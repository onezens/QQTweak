//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SingleRequestDelegate.h"

@class NSMutableArray, NSMutableString, NSString;

@interface QQRegisterProxyMonitor : NSObject <SingleRequestDelegate>
{
    NSMutableArray *_proxyRequests;
    int _msgCount;
    unsigned long long _packetSize;
    double _requestStartTime;
    NSMutableString *_responseTimeResult;
}

+ (id)sharedInstance;
- (void)actionGetC2CMsg:(id)arg1;
- (void)actionGetDiscussMsg:(id)arg1;
- (void)actionGetDiscussSeq:(id)arg1;
- (void)actionGetGroupMsg:(id)arg1;
- (void)actionGetGroupSeq:(id)arg1;
- (void)actionGetRegEndNotice:(id)arg1;
- (void)actionGetRegisterResp:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)clearRequests;
- (void)dealloc;
- (id)findRequestsByType:(int)arg1;
- (id)findSingleRequestByUin:(id)arg1 businessType:(int)arg2;
- (void)finishAllRequestsOfType:(int)arg1 forFlag:(int)arg2;
- (id)init;
- (void)observeOnRegisterProxyResponse;
- (void)onMessageRecvTimeout;
- (void)onRegProxyRequest:(id)arg1;
- (void)onRegisterFinished:(int)arg1;
- (void)onSingleRequestDone:(id)arg1;
- (void)onSingleRequestDone:(id)arg1 forFlag:(int)arg2;
- (void)removeRegisterProxyResponse;
- (void)removeRequest:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

