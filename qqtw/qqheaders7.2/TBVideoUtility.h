//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBVideoUtility : NSObject
{
}

+ (id)audioMaxBitRate:(float)arg1;
+ (_Bool)audioMaxSampleIsValid:(id)arg1;
+ (id)clipVideo:(id)arg1 startTime:(double)arg2 stopTime:(double)arg3 error:(id *)arg4;
+ (void)exportVideo:(id)arg1 path:(id)arg2 autoRotatd:(_Bool)arg3 block:(CDUnknownBlockType)arg4;
+ (void)exportVideoWithAsset:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (void)exportVideoWithPath:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 completeBlock:(CDUnknownBlockType)arg4;
+ (id)getDataSha1:(id)arg1;
+ (double)getDurationWithVideo:(id)arg1;
+ (id)getFileSha1:(id)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (id)queryVideoImageOfFile:(id)arg1 withTime:(CDStruct_1b6d18a9)arg2 error:(id *)arg3;
+ (struct CGSize)queryVideoResolutionWithAsset:(id)arg1;

@end

