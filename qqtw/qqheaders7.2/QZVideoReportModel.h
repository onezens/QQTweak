//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface QZVideoReportModel : QzoneModel
{
    double _prepareStart;
    double _loadingStart;
    double _fisrtPlayDurationStart;
    double _endCalculate;
    double _playingStartTime;
    long long _lastPlayInterruptTime;
    _Bool _isVideoPlayedAfterLoading;
    _Bool _loadSuccess;
    long long _startPlayTime;
}

- (void)addPlaySegmentDurationByInterrupt:(unsigned long long)arg1;
- (void)calNoPlayFirstBuffer;
- (void)calculateTimeConsumingWhenStart;
- (void)clearPlayList;
- (void)fillUpDownloadField;
- (double)getStepTimeStamp:(long long)arg1;
- (_Bool)isValidPlay;
@property(nonatomic) _Bool loadSuccess; // @synthesize loadSuccess=_loadSuccess;
- (void)recordPlayEvent:(int)arg1 player:(id)arg2;
- (void)reset;
- (void)restoreData:(id)arg1;
@property(nonatomic) long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;

// Remaining properties
@property(retain, nonatomic) NSString *attachInfo; // @dynamic attachInfo;
@property(nonatomic) long long beforStartOpCount; // @dynamic beforStartOpCount;
@property(nonatomic) double beforeBuffer; // @dynamic beforeBuffer;
@property(nonatomic) long long bufferCount; // @dynamic bufferCount;
@property(nonatomic) long long currentOpCount; // @dynamic currentOpCount;
@property(nonatomic) double currentPlayPos; // @dynamic currentPlayPos;
@property(nonatomic) _Bool cyclePlayIsToEnd; // @dynamic cyclePlayIsToEnd;
@property(retain, nonatomic) NSString *downloadFinishOccurTime; // @dynamic downloadFinishOccurTime;
@property(nonatomic) long long downloadRetCode; // @dynamic downloadRetCode;
@property(nonatomic) long long downloadSize; // @dynamic downloadSize;
@property(nonatomic) double downloadSpeed; // @dynamic downloadSpeed;
@property(retain, nonatomic) NSDictionary *extendInfo; // @dynamic extendInfo;
@property(copy, nonatomic) NSString *fileId; // @dynamic fileId;
@property(nonatomic) unsigned long long fileSize; // @dynamic fileSize;
@property(retain, nonatomic) NSString *firstBufferOccurTime; // @dynamic firstBufferOccurTime;
@property(retain, nonatomic) NSString *firstPlayOccurTime; // @dynamic firstPlayOccurTime;
@property(nonatomic) double firstPlayTimeDuration; // @dynamic firstPlayTimeDuration;
@property(nonatomic) _Bool hasProgress; // @dynamic hasProgress;
@property(nonatomic) double hitCachePercent; // @dynamic hitCachePercent;
@property(retain, nonatomic) NSArray *hotlinkProtectionIpList; // @dynamic hotlinkProtectionIpList;
@property(retain, nonatomic) NSString *hotlinkProtectionOccurTime; // @dynamic hotlinkProtectionOccurTime;
@property(nonatomic) long long hotlinkProtectionRetCode; // @dynamic hotlinkProtectionRetCode;
@property(nonatomic) double hotlinkProtectionTimeCost; // @dynamic hotlinkProtectionTimeCost;
@property(nonatomic) _Bool isFirstBufferOccurred; // @dynamic isFirstBufferOccurred;
@property(nonatomic) _Bool isManualPlay; // @dynamic isManualPlay;
@property(nonatomic) _Bool isPlayCacheFile; // @dynamic isPlayCacheFile;
@property(nonatomic) _Bool isPlayedToEnd; // @dynamic isPlayedToEnd;
@property(nonatomic) _Bool isPreloadOccurred; // @dynamic isPreloadOccurred;
@property(nonatomic) _Bool isVideoSeeked; // @dynamic isVideoSeeked;
@property(nonatomic) long long linkRedirectCount; // @dynamic linkRedirectCount;
@property(retain, nonatomic) NSString *linkRedirectOccurTime; // @dynamic linkRedirectOccurTime;
@property(nonatomic) double linkRedirectTimeCost; // @dynamic linkRedirectTimeCost;
@property(nonatomic) double loadedTime; // @dynamic loadedTime;
@property(nonatomic) double noPlayFirstBuffer; // @dynamic noPlayFirstBuffer;
@property(nonatomic) double playCompleteRate; // @dynamic playCompleteRate;
@property(retain, nonatomic) NSString *playFinishOccurTime; // @dynamic playFinishOccurTime;
@property(nonatomic) unsigned long long playID; // @dynamic playID;
@property(retain, nonatomic) NSMutableArray *playPeriodList; // @dynamic playPeriodList;
@property(nonatomic) long long playRetCode; // @dynamic playRetCode;
@property(nonatomic) double playableDuration; // @dynamic playableDuration;
@property(retain, nonatomic) NSString *qzVideoId; // @dynamic qzVideoId;
@property(nonatomic) long long readCacheSize; // @dynamic readCacheSize;
@property(nonatomic) long long seekCount; // @dynamic seekCount;
@property(nonatomic) long long seqNo; // @dynamic seqNo;
@property(retain, nonatomic) NSString *serverIP; // @dynamic serverIP;
@property(retain, nonatomic) NSString *startPlayOccurTime; // @dynamic startPlayOccurTime;
@property(retain, nonatomic) NSMutableDictionary *stepDuration; // @dynamic stepDuration;
@property(nonatomic) double timeToSee; // @dynamic timeToSee;
@property(nonatomic) double totalBufferTimeDuration; // @dynamic totalBufferTimeDuration;
@property(nonatomic) double totalPlayTimeDuration; // @dynamic totalPlayTimeDuration;
@property(retain, nonatomic) NSString *updateVkeyOccurTime; // @dynamic updateVkeyOccurTime;
@property(nonatomic) double updateVkeyTimeCost; // @dynamic updateVkeyTimeCost;
@property(nonatomic) _Bool useCacheForFirstLoading; // @dynamic useCacheForFirstLoading;
@property(retain, nonatomic) NSString *videoFirstBufferOccurTime; // @dynamic videoFirstBufferOccurTime;
@property(nonatomic) double videoFirstBufferTimeCost; // @dynamic videoFirstBufferTimeCost;
@property(retain, nonatomic) NSString *videoName; // @dynamic videoName;
@property(retain, nonatomic) NSString *videoPreloadOccurTime; // @dynamic videoPreloadOccurTime;
@property(nonatomic) double videoPreloadTimeCost; // @dynamic videoPreloadTimeCost;
@property(nonatomic) struct CGSize videoResolution; // @dynamic videoResolution;
@property(nonatomic) double videoTotalTime; // @dynamic videoTotalTime;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;

@end
