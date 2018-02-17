//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, LbsPackMapInfo, NSArray, NSData, NSString, TencentLBSLocation;

@interface LbsPackPOIManager : NSObject
{
    NSString *_lastNetTypeString;
    NSString *_lastStateString;
    NSString *_lastSourceString;
    unsigned long long _lbsStartTime;
    _Bool _show_map_grid;
    int _lbsPackBtnStatus;
    int _award_range;
    float _lastLat;
    float _lastLon;
    unsigned int _flushTime;
    NSString *_select_pack_id;
    long long _debugLocationJumpCount;
    NSArray *_lastPOIList;
    NSArray *_lastTaskList;
    TencentLBSLocation *_lastLBSLocation;
    long long _lbsUpdateCount;
    NSData *_lastPOICookie;
    CLHeading *_lastHeading;
    LbsPackMapInfo *_lastPackMapInfo;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (id)arMapLastTaskList:(float)arg1 lon:(float)arg2;
@property(nonatomic) int award_range; // @synthesize award_range=_award_range;
- (void)dealloc;
- (_Bool)debug;
@property(nonatomic) long long debugLocationJumpCount; // @synthesize debugLocationJumpCount=_debugLocationJumpCount;
- (void)didUpdateHeading:(id)arg1;
- (void)didUpdateLocations:(id)arg1;
@property(nonatomic) unsigned int flushTime; // @synthesize flushTime=_flushTime;
- (id)getFirstPagePackList:(unsigned long long)arg1;
- (id)init;
@property(retain, nonatomic) CLHeading *lastHeading; // @synthesize lastHeading=_lastHeading;
@property(retain, nonatomic) TencentLBSLocation *lastLBSLocation; // @synthesize lastLBSLocation=_lastLBSLocation;
@property(nonatomic) float lastLat; // @synthesize lastLat=_lastLat;
@property(nonatomic) float lastLon; // @synthesize lastLon=_lastLon;
@property(retain, nonatomic) NSData *lastPOICookie; // @synthesize lastPOICookie=_lastPOICookie;
@property(retain, nonatomic) NSArray *lastPOIList; // @synthesize lastPOIList=_lastPOIList;
@property(retain, nonatomic) LbsPackMapInfo *lastPackMapInfo; // @synthesize lastPackMapInfo=_lastPackMapInfo;
@property(retain, nonatomic) NSArray *lastTaskList; // @synthesize lastTaskList=_lastTaskList;
@property(nonatomic) int lbsPackBtnStatus; // @synthesize lbsPackBtnStatus=_lbsPackBtnStatus;
- (void)lbsPackRequestFetchPOIList:(double)arg1 lon:(double)arg2 accuracy:(int)arg3 sigLon:(double)arg4 sigLat:(double)arg5 sigTime:(double)arg6 sig:(const char *)arg7 encryptSig:(const char *)arg8 occasion:(int)arg9 pid:(const char *)arg10 mapGame:(void *)arg11 completion:(CDUnknownBlockType)arg12;
@property(nonatomic) long long lbsUpdateCount; // @synthesize lbsUpdateCount=_lbsUpdateCount;
- (id)localInfoWithCftPackId:(id)arg1 poiid:(unsigned long long)arg2;
- (void)locationManagerStopUpdate;
- (void)onSelectPackId:(id)arg1;
- (void)onSendPack:(id)arg1;
- (void)printPackInfo:(id)arg1 withPoiId:(unsigned long long)arg2;
- (void)rdmReportBadLocationIfNeeded:(id)arg1;
- (void)refreshWithQAErrorNotification:(id)arg1;
- (void)refreshWithSuccessNotification:(id)arg1;
- (_Bool)removePack:(id)arg1 poiid:(unsigned long long)arg2;
- (void)reqPackList:(id)arg1 poiId:(unsigned long long)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *select_pack_id; // @synthesize select_pack_id=_select_pack_id;
@property(nonatomic) _Bool show_map_grid; // @synthesize show_map_grid=_show_map_grid;

@end
