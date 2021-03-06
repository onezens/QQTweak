//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"
#import "TBVideoUploadDelegate.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface TBVideoService : NSObject <TBBizNetworkLogicDelegate, TBVideoUploadDelegate>
{
    NSObject<OS_dispatch_queue> *_uploadTotalQueue;
    NSObject<OS_dispatch_queue> *_uploadTaskQueue;
    NSMutableSet *_uploadingVideoFile;
}

+ (double)getSecondsFromDate:(id)arg1 toDate:(id)arg2;
+ (id)sharedInstance;
- (void)asynCompressAndUploadVideoWithPath:(id)arg1 withUserData:(id)arg2;
- (void)asynUploadImageWithThumbPath:(id)arg1 thumbImage:(id)arg2 doodlePath:(id)arg3 doodleImage:(id)arg4 withUserData:(id)arg5 withSaveThumbTime:(id)arg6;
- (void)asyncUploadVideo:(id)arg1 withDoodle:(id)arg2 withUserData:(id)arg3;
- (void)cancelUploadVideo:(id)arg1;
- (_Bool)checkUploadVideoHasCanceled:(id)arg1;
- (void)dealloc;
- (id)getDoodleImage:(id)arg1 withUserData:(id)arg2 withError:(id *)arg3;
- (long long)getFileSize:(id)arg1 withUserData:(id)arg2;
- (id)getThumbImageWithVideoPath:(id)arg1 withDoodleImage:(id)arg2 withUserData:(id)arg3;
- (void)getUploadVideoInfo:(id)arg1 userData:(id)arg2;
- (id)init;
- (_Bool)isPictureVideo:(id)arg1;
- (_Bool)isRetryUpload:(id)arg1;
- (void)onAccountChanged:(id)arg1;
- (void)publishResultReport:(id)arg1 withBizName:(id)arg2 withFileSize:(unsigned long long)arg3 withErrorInfo:(id)arg4 withVid:(id)arg5;
- (id)saveThumbImage:(id)arg1 withScale:(double)arg2 withVideoFileName:(id)arg3;
- (void)updateVideoSize:(long long)arg1 WithPath:(id)arg2 withUserData:(id)arg3;
- (id)uploadImage:(id)arg1 imagePath:(id)arg2 toJPG:(_Bool)arg3 withUserData:(id)arg4 withType:(unsigned int)arg5;
- (_Bool)uploadVideo:(id)arg1 withDoodlePath:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (void)uploadVideoBegin:(id)arg1 withVideoSize:(long long)arg2 withCoverImage:(id)arg3 withDoodlePath:(id)arg4 withUserData:(id)arg5;
- (void)uploadVideoFail:(id)arg1 withError:(id)arg2;
- (void)uploadVideoFail:(id)arg1 withError:(id)arg2 withUserData:(id)arg3;
- (void)uploadVideoProgress:(id)arg1 withProgress:(double)arg2 withUserData:(id)arg3;
- (void)uploadVideoSuccess:(id)arg1 withResult:(id)arg2 withUserData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

