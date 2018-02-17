//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class LbsPackInfo, LbsPackMapInfo, LbsPackPoiInfo, NSArray, NSData, NSString;

@interface LbsPackPOIRequestItem : SAMRequestItem
{
    _Bool _ret;
    _Bool _show_map_grid;
    int _accuracy;
    unsigned int _sigTime;
    unsigned int _flushDist;
    unsigned int _flushTime;
    int _lbsPackBtnStatus;
    int _award_range;
    int _req_occasion;
    int _requestFromType;
    long long _lat;
    long long _lon;
    double _lbsSigLon;
    double _lbsSigLat;
    NSString *_lbsSig;
    NSString *_encryptSig;
    NSData *_cookie;
    NSString *_pid;
    unsigned long long _poiId;
    NSData *_pageCookie;
    unsigned long long _adCode;
    long long _result;
    NSArray *_poiList;
    NSArray *_taskList;
    NSData *_respCookie;
    NSString *_errorDescription;
    NSData *_respPageCookie;
    LbsPackMapInfo *_lbsPackMapInfo;
    NSArray *_lbsPackInfoArray;
    LbsPackPoiInfo *_theSelectLbsPackPoi;
    LbsPackInfo *_theSelectLbsPackInfo;
    void *_mapGame;
}

- (void).cxx_destruct;
@property(nonatomic) int accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) unsigned long long adCode; // @synthesize adCode=_adCode;
@property(nonatomic) int award_range; // @synthesize award_range=_award_range;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie=_cookie;
- (id)description;
@property(copy, nonatomic) NSString *encryptSig; // @synthesize encryptSig=_encryptSig;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) unsigned int flushDist; // @synthesize flushDist=_flushDist;
@property(nonatomic) unsigned int flushTime; // @synthesize flushTime=_flushTime;
- (char *)getRequestBuffer;
- (id)init;
@property(nonatomic) long long lat; // @synthesize lat=_lat;
@property(nonatomic) int lbsPackBtnStatus; // @synthesize lbsPackBtnStatus=_lbsPackBtnStatus;
@property(retain, nonatomic) NSArray *lbsPackInfoArray; // @synthesize lbsPackInfoArray=_lbsPackInfoArray;
@property(retain, nonatomic) LbsPackMapInfo *lbsPackMapInfo; // @synthesize lbsPackMapInfo=_lbsPackMapInfo;
@property(copy, nonatomic) NSString *lbsSig; // @synthesize lbsSig=_lbsSig;
@property(nonatomic) double lbsSigLat; // @synthesize lbsSigLat=_lbsSigLat;
@property(nonatomic) double lbsSigLon; // @synthesize lbsSigLon=_lbsSigLon;
@property(nonatomic) long long lon; // @synthesize lon=_lon;
@property(nonatomic) void *mapGame; // @synthesize mapGame=_mapGame;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
@property(retain, nonatomic) NSData *pageCookie; // @synthesize pageCookie=_pageCookie;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(nonatomic) unsigned long long poiId; // @synthesize poiId=_poiId;
@property(retain, nonatomic) NSArray *poiList; // @synthesize poiList=_poiList;
@property(nonatomic) int req_occasion; // @synthesize req_occasion=_req_occasion;
@property(nonatomic) int requestFromType; // @synthesize requestFromType=_requestFromType;
@property(retain, nonatomic) NSData *respCookie; // @synthesize respCookie=_respCookie;
@property(retain, nonatomic) NSData *respPageCookie; // @synthesize respPageCookie=_respPageCookie;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
- (id)serviceCmd;
@property(nonatomic) _Bool show_map_grid; // @synthesize show_map_grid=_show_map_grid;
@property(nonatomic) unsigned int sigTime; // @synthesize sigTime=_sigTime;
@property(retain, nonatomic) NSArray *taskList; // @synthesize taskList=_taskList;
@property(retain, nonatomic) LbsPackInfo *theSelectLbsPackInfo; // @synthesize theSelectLbsPackInfo=_theSelectLbsPackInfo;
@property(retain, nonatomic) LbsPackPoiInfo *theSelectLbsPackPoi; // @synthesize theSelectLbsPackPoi=_theSelectLbsPackPoi;

@end
