//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, QRServerEngine;

@interface QRReadingDurationReporter : NSObject
{
    QRServerEngine *_engine;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_readingDurations;
    NSMutableDictionary *_seqCache;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)increaseDuraiotnFor:(id)arg1;
- (id)init;
- (void)onSendReqFail:(id)arg1;
- (void)onSendReqSuccess:(id)arg1;
- (void)reportReadingDurationWith:(id)arg1;
- (void)reportReadingDurations;
- (void)startDurationFor:(id)arg1;
- (void)stopDurationFor:(id)arg1;

@end
