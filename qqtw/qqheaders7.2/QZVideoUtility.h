//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SDAVAssetExportSession;

@interface QZVideoUtility : NSObject
{
    SDAVAssetExportSession *_recordSession;
}

+ (_Bool)CheckSupportOriginQuality;
+ (void)activeAudioSessionInQZone;
+ (double)aspectRatio;
+ (_Bool)audioMaxSampleIsValid:(id)arg1;
+ (_Bool)changeVideoVkey:(id)arg1 completeBlocks:(CDUnknownBlockType)arg2;
+ (id)convertVideoToGifWithInfo:(id)arg1;
+ (id)createFileId:(id)arg1 videoFormat:(id)arg2 videoUrl:(id)arg3;
+ (void)deActiveAudioSessionInQZone;
+ (_Bool)enableTSSDKCache;
+ (int)encodeVideoErrCode:(int)arg1 firstLevelErrCode:(int)arg2 secondLevelErrCode:(int)arg3;
+ (_Bool)fileIdIsExist:(id)arg1;
+ (id)findFileIdWithCache:(id)arg1 hashValue:(id)arg2;
+ (long long)getFpsWithVideo:(id)arg1;
+ (id)getVideoSettingsWithSize:(struct CGSize)arg1 bitRate:(id)arg2 keyframeInterval:(id)arg3 profile:(id)arg4;
+ (_Bool)isInQQAudioChat;
+ (_Bool)isValidContentType:(id)arg1;
+ (id)keyWithURL:(id)arg1;
+ (long long)lowDldSpeedDefinition;
+ (long long)lowDldSpeedDuration;
+ (long long)maxDurationForRecord;
+ (long long)pollLiveStatusTime;
+ (id)queryVideoImageOfAsset:(id)arg1 withTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
+ (id)queryVideoImageOfFile:(id)arg1 withTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
+ (struct CGSize)queryVideoResolutionWithAsset:(id)arg1;
+ (id)qzPreViewVideoModelFromQQRichTinyVideoClips:(id)arg1;
+ (_Bool)requestQQAudioDevice:(id)arg1;
+ (id)stringByDuration:(long long)arg1;
+ (struct CGAffineTransform)validTranformWithTransform:(struct CGAffineTransform)arg1 originSize:(struct CGSize)arg2;
+ (id)videoBufferConfigure;
+ (long long)videoCacheDiskSize;
+ (id)videoContentTypeMap;
+ (_Bool)videoDisableSpeedLimit;
+ (_Bool)videoEnableAts;
+ (long long)videoIllegalBounds;
+ (long long)videoIllegalCacheTime;
+ (long long)videoLoadTimeout;
+ (id)videoPlayerErrorDesc;
+ (long long)videoPreloadCount;
+ (double)videoReReportDelayTime;
- (void).cxx_destruct;
- (_Bool)compressVideoWithURL:(id)arg1 output:(id)arg2 videoMaxBitrate:(id)arg3 videoLongestEdge:(double)arg4 audioMaxSample:(id)arg5 audioMaxBitrate:(id)arg6 videoFrameRate:(id)arg7 keyframeInterval:(id)arg8 videoProfileLevel:(id)arg9 enableTransformFix:(_Bool)arg10 error:(id *)arg11 complete:(CDUnknownBlockType)arg12;
- (_Bool)compressVideoWithURL:(id)arg1 output:(id)arg2 videoMaxBitrate:(id)arg3 videoLongestEdge:(double)arg4 audioMaxSample:(id)arg5 audioMaxBitrate:(id)arg6 videoFrameRate:(id)arg7 videoProfileLevel:(id)arg8 enableTransformFix:(_Bool)arg9 error:(id *)arg10 complete:(CDUnknownBlockType)arg11;
@property(retain, nonatomic) SDAVAssetExportSession *recordSession; // @synthesize recordSession=_recordSession;

@end

