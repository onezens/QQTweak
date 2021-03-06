//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsynDownloadImageObserver.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MCTempManager : NSObject <IAsynDownloadImageObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <MCTempManagerDelegate> _delegate;
    NSMutableDictionary *_SDKDownloadStatus;
    NSMutableDictionary *_allTypeTotalArray;
}

+ (long long)ConfigVersion:(long long)arg1;
+ (_Bool)FaceOffGrayImageIsExist;
+ (_Bool)GestureSDKIsExist;
+ (_Bool)SDKIsExist;
+ (id)UFAPath;
+ (id)YouTuBeautyPath;
+ (void)checkFaceOffGrayImageIsComplete:(id)arg1;
+ (void)checkGestureSDKIsComplete:(id)arg1;
+ (void)checkResourceIsComplete:(id)arg1 forchDownLoad:(_Bool)arg2 resourceType:(long long)arg3;
+ (_Bool)cleanSDK;
+ (void)clearOldCache:(id)arg1 resourceType:(long long)arg2;
+ (id)decorationTempConfigPath:(long long)arg1;
+ (void)downloadFaceOffGrayImage;
+ (void)downloadFaceOffGrayImageImpl:(id)arg1 md5:(id)arg2 source:(long long)arg3;
+ (void)downloadGestureSDK;
+ (void)downloadGestureSDKImpl:(id)arg1 md5:(id)arg2 source:(long long)arg3;
+ (void)downloadSDK;
+ (void)downloadSDKWithCompletion:(CDUnknownBlockType)arg1 progress:(CDUnknownBlockType)arg2;
+ (void)enumPath:(id)arg1;
+ (id)faceOffGrayImagePath;
+ (id)faceUMassBlessRootPath;
+ (id)faceURootPath;
+ (id)filterTempRootPath;
+ (int)filterTempVersion;
+ (void)forceDownloadAssets:(id)arg1 md5:(id)arg2 source:(long long)arg3 cachePath:(id)arg4 progressHandle:(CDUnknownBlockType)arg5 successBlock:(CDUnknownBlockType)arg6 failBlock:(CDUnknownBlockType)arg7;
+ (void)forceDownloadUFA:(id)arg1 md5:(id)arg2 completed:(CDUnknownBlockType)arg3;
+ (void)forceDownloadUFA:(id)arg1 md5:(id)arg2 source:(long long)arg3 completed:(CDUnknownBlockType)arg4;
+ (void)forceDownloadUFA:(id)arg1 md5:(id)arg2 source:(long long)arg3 completed:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5;
+ (long long)gestureGapFrame;
+ (double)gestureGapTime;
+ (id)gestureRootPath;
+ (_Bool)gestureShouldUpload;
+ (id)getMassBlessTempDicFromCache;
+ (id)getPandentList:(_Bool)arg1;
+ (id)getTempDicFromCache;
+ (id)getTempDicFromCache:(long long)arg1;
+ (_Bool)isAVGestureCompatibleDevice;
+ (_Bool)isOnlyGestureIphone;
+ (id)itemArrayFrom:(id)arg1 ResourceType:(long long)arg2;
+ (id)localDefaultConfig;
+ (int)massBlessFaceUVersion;
+ (int)readInJoyVideoTemVersion;
+ (id)resourceRootPathImpl:(long long)arg1;
+ (void)saveConfigureation:(id)arg1 isLocal:(_Bool)arg2;
+ (void)saveConfigureationImpl:(id)arg1 isLocal:(_Bool)arg2 resourceType:(long long)arg3;
+ (void)saveFilterTempConfigureation:(id)arg1 isLocal:(_Bool)arg2;
+ (void)saveFilterTempVersion:(int)arg1;
+ (void)saveMassBlessConfigureation:(id)arg1 isLocal:(_Bool)arg2;
+ (void)saveMassBlessFaceUVersion:(int)arg1;
+ (void)savePendantRedDotConfig:(id)arg1;
+ (void)saveReadInJoyVideoTemConfiguration:(id)arg1 isLocal:(_Bool)arg2;
+ (void)saveReadInJoyVideoTemVersion:(int)arg1;
+ (void)saveTemConfigVersion:(long long)arg1;
+ (id)sharedInstance;
+ (long long)temConfigVersion;
+ (void)updateTemConfig:(id)arg1 resourceType:(long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *SDKDownloadStatus; // @synthesize SDKDownloadStatus=_SDKDownloadStatus;
@property(retain, nonatomic) NSMutableDictionary *allTypeTotalArray; // @synthesize allTypeTotalArray=_allTypeTotalArray;
@property(nonatomic) __weak id <MCTempManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadImageFinished:(id)arg1;
- (void)downloadResource:(id)arg1;
- (void)fireResourceDownloadEvent:(id)arg1 status:(int)arg2 progress:(float)arg3 error:(id)arg4;
- (id)getCustomQueue;
- (id)getFilterTempArray;
- (id)getMassBlessTempArray;
- (id)getSDKDownloadStautsDict:(id)arg1;
- (id)getTempArray;
- (id)getTempArrayImpl:(long long)arg1;
- (id)getTempArrayImplLocal;
- (id)init;
- (id)loacalFilterConfig;
- (id)readInJoyTempArray;
- (void)removeAllTempArray;
- (void)setSDKDownloadStautsWithURL:(id)arg1 MD5:(id)arg2 downloading:(_Bool)arg3 source:(long long)arg4;
- (void)setTotalArray:(id)arg1 resourceType:(long long)arg2;
- (id)totalArray:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

