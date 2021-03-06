//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CIMBaseEngineDelegate.h"

@class NSDate, NSMutableDictionary, NSString;

@interface LBSPositionShareEngine : NSObject <CIMBaseEngineDelegate>
{
    NSMutableDictionary *_seqDict;
    struct CLLocationCoordinate2D _coordinateCache;
    long long _macAddr;
    NSDate *_coordinateCacheTimestamp;
}

+ (id)shareInstance;
- (void)CIMBaseEngine:(id)arg1 didRecievedMsg:(CDStruct_7895f40e)arg2;
- (void)RequestGetLocation:(int)arg1 lon:(int)arg2 alt:(int)arg3 isMars:(_Bool)arg4 bJiejingSOSO:(_Bool)arg5;
- (void)RequestGetLocationInner:(int)arg1 lon:(int)arg2 alt:(int)arg3 isMars:(_Bool)arg4 bJiejingSOSO:(_Bool)arg5 macAddr:(long long)arg6;
@property(retain, nonatomic) NSDate *coordinateCacheTimestamp; // @synthesize coordinateCacheTimestamp=_coordinateCacheTimestamp;
- (_Bool)getGPSLocationForCacheTime:(long long)arg1 location:(struct CLLocationCoordinate2D *)arg2;
- (long long)getWifiMacAddressHelper;
- (id)init;
- (void)notifyGetLocationFail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

