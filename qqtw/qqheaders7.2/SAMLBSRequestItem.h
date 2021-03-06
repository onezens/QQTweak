//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class NSString, SAMLocation;

@interface SAMLBSRequestItem : SAMRequestItem
{
    _Bool _locationFailTryEarlierCache;
    _Bool _locationFailStillRequest;
    _Bool _requestPositionShare;
    _Bool _positionShareRequested;
    int _validTimeUseCache;
    int _earlierCacheTime;
    int _lbsCoordinate;
    SAMLocation *_location;
    NSString *_rdmReportName;
    unsigned long long _lbsStartTime;
}

- (void).cxx_destruct;
- (void)checkLBSRDMReportBegin;
- (void)checkLBSRDMReportEnd:(_Bool)arg1 param:(id)arg2;
- (id)description;
@property(nonatomic) int earlierCacheTime; // @synthesize earlierCacheTime=_earlierCacheTime;
- (id)init;
@property(nonatomic) int lbsCoordinate; // @synthesize lbsCoordinate=_lbsCoordinate;
@property(nonatomic) unsigned long long lbsStartTime; // @synthesize lbsStartTime=_lbsStartTime;
@property(retain, nonatomic) SAMLocation *location; // @synthesize location=_location;
@property(nonatomic) _Bool locationFailStillRequest; // @synthesize locationFailStillRequest=_locationFailStillRequest;
@property(nonatomic) _Bool locationFailTryEarlierCache; // @synthesize locationFailTryEarlierCache=_locationFailTryEarlierCache;
@property(nonatomic) _Bool positionShareRequested; // @synthesize positionShareRequested=_positionShareRequested;
@property(retain, nonatomic) NSString *rdmReportName; // @synthesize rdmReportName=_rdmReportName;
@property(nonatomic) _Bool requestPositionShare; // @synthesize requestPositionShare=_requestPositionShare;
@property(nonatomic) int validTimeUseCache; // @synthesize validTimeUseCache=_validTimeUseCache;

@end

