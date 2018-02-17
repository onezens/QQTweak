//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQReadInJoyVideoReport : NSObject
{
    double _repoStartPlayTime;
    double _repoLastPlayTime;
}

+ (void)RePort:(id)arg1 R2:(int)arg2 R3:(int)arg3 R4:(id)arg4 R5:(id)arg5;
+ (void)RePort:(id)arg1 R5:(id)arg2;
+ (void)RePortMigrateTo1160:(id)arg1 R2:(int)arg2 R3:(int)arg3 R4:(id)arg4 R5:(id)arg5;
+ (void)SendVideoInfoWithArticleId:(id)arg1 videoID:(id)arg2 reportType:(long long)arg3 reCode:(long long)arg4;
+ (int)ShareItemFlagToReportType:(int)arg1;
+ (int)getNetInfo;
+ (int)getPlayStatusWidthVideoView:(int)arg1;
+ (id)info7409BaseR5:(id)arg1 vid:(id)arg2 aid:(id)arg3 watchDuration:(long long)arg4 currentDuration:(long long)arg5 videoDuration:(long long)arg6 fans:(_Bool)arg7 algorithm_id:(unsigned long long)arg8 strategy_id:(unsigned int)arg9 videoIndex:(long long)arg10;
+ (id)info7409BaseR5:(id)arg1 watchDuration:(long long)arg2 currentDuration:(long long)arg3 videoDuration:(long long)arg4 videoIndex:(long long)arg5;
+ (id)info7410BaseR5:(id)arg1 vid:(id)arg2 aid:(id)arg3 currentDuration:(long long)arg4 videoDuration:(long long)arg5;
+ (id)info7414BaseR5:(id)arg1 aid:(id)arg2 uin:(id)arg3 chatMember:(int)arg4 fans:(_Bool)arg5 uniseq:(long long)arg6;
+ (id)info7414BaseR5:(id)arg1 uin:(id)arg2 chatMember:(int)arg3 fans:(_Bool)arg4 uniseq:(long long)arg5;
+ (id)info7415BaseR5:(id)arg1;
+ (void)rdmEventReportBehaviousSequenceSceneType:(unsigned long long)arg1 sequence:(id)arg2;
+ (void)rdmEventReportBehaviousWithSceneType:(unsigned long long)arg1 indexDiff:(id)arg2 previousIndexDiff:(id)arg3 timeInterval:(double)arg4 isPull:(_Bool)arg5;
+ (void)rdmEventReportVideoPreloadWithSceneType:(unsigned long long)arg1 triggerCount:(unsigned long long)arg2 cacheHitCount:(unsigned long long)arg3 chacheNotHitCount:(unsigned long long)arg4 preloadHitCount:(unsigned long long)arg5;
+ (int)rdmNetType;
+ (id)reportInfoBaseR5:(id)arg1;
+ (void)reportTo1160:(id)arg1 R2:(id)arg2 R3:(id)arg3 R4:(id)arg4 R5:(id)arg5;
+ (void)reportWith:(id)arg1 R2:(int)arg2 R3:(int)arg3 R4:(id)arg4 R5:(id)arg5;
+ (void)reportWithMigrateTo1160:(id)arg1 R2:(int)arg2 R3:(int)arg3 R4:(id)arg4 R5:(id)arg5;
- (id)GetPlayedTime;
- (void)InitReportPlayedTime;
@property(nonatomic) double repoLastPlayTime; // @synthesize repoLastPlayTime=_repoLastPlayTime;
@property(nonatomic) double repoStartPlayTime; // @synthesize repoStartPlayTime=_repoStartPlayTime;

@end
