//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVKLitePreCacheManagerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, TVKLitePreCacheManager;

@interface QQReadInJoyVideoPreloadManager : NSObject <TVKLitePreCacheManagerDelegate>
{
    _Bool _async;
    int _duration;
    NSMutableDictionary *_preloadingTasks;
    TVKLitePreCacheManager *_tvkPrecacheManager;
    NSMutableArray *_preloadedQueue;
    NSMutableDictionary *_preloadTasks;
    NSMutableDictionary *_preloadedTasks;
    NSMutableDictionary *_report_playID_VID_Map;
}

+ (_Bool)enablePreload;
+ (id)fetchFileIDWithTencentVideoID:(id)arg1;
+ (id)fetchFileIDWithThirdVideoID:(id)arg1;
+ (id)sharedInstance;
+ (_Bool)videoFileID:(id)arg1 isPreloadedWithDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (long long)videoFileSizeWithvideoID:(id)arg1 serviceType:(int)arg2 clipNo:(int)arg3 videoSource:(unsigned long long)arg4;
+ (_Bool)videoID:(id)arg1 isPreloadedWithDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (_Bool)videoIsCachedWithVideoID:(id)arg1 atDuration:(int)arg2 ServiceType:(int)arg3 ClipNo:(int)arg4 VideoSource:(unsigned long long)arg5;
+ (long long)videoSizeShouldPreloadWithFileID:(id)arg1 Duration:(int)arg2 VideoSource:(unsigned long long)arg3;
- (void).cxx_destruct;
- (_Bool)canPreloadVideoWithVideoID:(id)arg1;
- (_Bool)createTaskWithTaskModel:(id)arg1;
- (unsigned long long)createTaskWithTaskModels:(id)arg1 Async:(_Bool)arg2;
@property(nonatomic) int duration; // @synthesize duration=_duration;
- (void)fetchHDVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)fetchVideoURLWithVideoID:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (id)getCacheURLWithVideoID:(id)arg1;
@property(nonatomic, getter=isAsync) _Bool async; // @synthesize async=_async;
@property(retain, nonatomic) NSMutableDictionary *preloadTasks; // @synthesize preloadTasks=_preloadTasks;
@property(retain, nonatomic) NSMutableArray *preloadedQueue; // @synthesize preloadedQueue=_preloadedQueue;
@property(retain, nonatomic) NSMutableDictionary *preloadedTasks; // @synthesize preloadedTasks=_preloadedTasks;
@property(retain) NSMutableDictionary *preloadingTasks; // @synthesize preloadingTasks=_preloadingTasks;
@property(retain, nonatomic) NSMutableDictionary *report_playID_VID_Map; // @synthesize report_playID_VID_Map=_report_playID_VID_Map;
- (void)setPrecacheManagerWithServiceType:(int)arg1;
@property(retain, nonatomic) TVKLitePreCacheManager *tvkPrecacheManager; // @synthesize tvkPrecacheManager=_tvkPrecacheManager;
- (void)starPreloadWithPlayID:(int)arg1 taskModel:(id)arg2 fileID:(id)arg3;
- (void)startPreCacheTaskCallbackForVid:(id)arg1 ResultPlayId:(int)arg2 FileID:(id)arg3;
- (int)startPreloadWithPlayID:(int)arg1 taskModel:(id)arg2;
- (void)stopAllPreloadExceptForVideoID:(id)arg1;
- (void)stopAllPreloadExceptForVideoIDs:(id)arg1;
- (int)stopPreloadWithPlayID:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

