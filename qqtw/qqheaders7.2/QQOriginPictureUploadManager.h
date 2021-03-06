//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQOriginPictureUploadManager : NSObject <UIAlertViewDelegate>
{
    int _currentNetWorkStatus;
    _Bool _isNetChangePaused;
    NSMutableDictionary *_uuidToMsgModel;
    NSMutableDictionary *_shortVideoMd5ToMsgModel;
    NSMutableDictionary *_shortVideoUuidToMsgModel;
    NSMutableDictionary *_tinyVideoMd5MsgModel;
    NSMutableDictionary *_tinyVideoUuidToMsgModel;
    NSMutableDictionary *_ptvMd5ToMsgModel;
    NSMutableDictionary *_ptvUuidToMsgModel;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)addUploadTask:(id)arg1;
- (void)addVideoDownloadTask:(id)arg1;
- (void)addVideoUploadTask:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cleanAllVideo;
- (void)continueAll;
- (void)handleImageTransferProgressNotification:(id)arg1;
- (void)handleImageTransferStateNotification:(id)arg1;
- (id)init;
- (void)networkTypeChange:(int)arg1;
- (void)pauseAll;
- (void)pauseAllShortVideoDownload;
- (void)pauseAllShortVideoUpload;
@property(retain, nonatomic) NSMutableDictionary *ptvMd5ToMsgModel; // @synthesize ptvMd5ToMsgModel=_ptvMd5ToMsgModel;
@property(retain, nonatomic) NSMutableDictionary *ptvUuidToMsgModel; // @synthesize ptvUuidToMsgModel=_ptvUuidToMsgModel;
- (void)removeUploadTask:(id)arg1;
- (void)removeVideoDownloadTask:(id)arg1 businessType:(unsigned long long)arg2;
- (void)removeVideoUploadTask:(id)arg1 businessType:(unsigned long long)arg2;
- (void)resumePTVTransfer;
- (void)resumeShortVideoUpload;
- (void)resumeTinyVideoTransfer;
- (void)saveAllAndClean;
- (void)showNetWorkTypeChangeAlert:(int)arg1;
- (void)taskFail:(id)arg1;
- (void)taskFinish:(id)arg1;
- (void)updateState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

