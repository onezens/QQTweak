//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GetNearbyBannerTipNetDelegagte.h"

@class NSDictionary, NSMutableArray, NSString, NSTimer, QQLockDictionary, QQWeakProxy;

@interface NearbyBannerTipManager : NSObject <GetNearbyBannerTipNetDelegagte>
{
    NSMutableArray *_nextArray;
    _Bool _hasStart;
    long long _repeatTime;
    double _lastRequestTime;
    QQLockDictionary *_paramDict;
    NSDictionary *_locationInfo;
    NSDictionary *_clientInfo;
    unsigned long long _nextTimeDistance;
    NSTimer *_reFetchTimer;
    QQWeakProxy *_weakProxy;
    int _refetchTimerState;
    id <NearbyBannerTipManageDelegate> _delegate;
}

- (void)addReFetchTimer;
- (void)appEnterBackground:(id)arg1;
- (void)cleanDataArray;
- (void)dealloc;
@property(nonatomic) id <NearbyBannerTipManageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enterForeground:(id)arg1;
- (void)handleReFetchTimer:(id)arg1;
- (id)init;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (void)onReceive:(id)arg1 param:(id)arg2;
- (void)reFetchBannerTipData;
@property(nonatomic) int refetchTimerState; // @synthesize refetchTimerState=_refetchTimerState;
- (void)requestBannerTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

