//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVideoSegUploadDelegate.h"

@class C2CSVideoUploadReqInfo, NSError, NSLock, NSMutableDictionary, NSString, QQMessageModel, QQRichTinyVideoClips, QQTinyVideoPreUploadProcessor, QQViewController, SplitVideoCollection;

@interface QQTinyVideoPreUploadHandle : NSObject <SVideoSegUploadDelegate>
{
    int _sessionType;
    int _rollBackFlag;
    QQViewController *_parentViewController;
    QQTinyVideoPreUploadProcessor *_processor;
    NSString *_preUploadThumbPath;
    NSString *_preUploadSavedPath;
    QQMessageModel *_msgModel;
    QQRichTinyVideoClips *_videoClips;
    QQRichTinyVideoClips *_preUploadVideoClips;
    SplitVideoCollection *_preUploadVideoInfoCollection;
    CDUnknownBlockType _complete_handle;
    NSLock *_stateLock;
    unsigned long long _uploadState;
    unsigned long long _compressState;
    NSString *_videoMD5FormServer;
    NSString *_videoUUIDFromServer;
    unsigned long long _videoSizeFromServer;
    unsigned long long _thumbSize;
    C2CSVideoUploadReqInfo *_uploadReq;
    NSMutableDictionary *_statisInfo;
    NSError *_error;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType complete_handle; // @synthesize complete_handle=_complete_handle;
@property(nonatomic) unsigned long long compressState; // @synthesize compressState=_compressState;
- (_Bool)confirmPreUpload;
- (void)dealloc;
- (void)delayRefreshTimeUp;
- (_Bool)deleteAllTmpFile;
- (void)didFinishUpload;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (id)genTmpVideoPath;
- (id)getMsgContenct;
- (unsigned long long)getVideoBusinessType;
- (id)getVideoFilePath:(id)arg1;
- (id)getVideoThumbFilePath:(id)arg1;
- (id)init;
- (id)initWithMediaInfo:(id)arg1 andQQViewController:(id)arg2;
- (_Bool)insertAIOCell:(id)arg1;
- (_Bool)mergeVideo;
- (_Bool)mergeVideoWithVideoClips:(id)arg1;
@property(retain, nonatomic) QQMessageModel *msgModel; // @synthesize msgModel=_msgModel;
- (void)notifySVideoFail:(long long)arg1 uploadDetail:(id)arg2 fail:(id)arg3;
- (void)notifySVideoProgress:(long long)arg1 uploadDetail:(id)arg2 progress:(float)arg3;
- (void)notifySVideoSuccess:(long long)arg1 uploadDetail:(id)arg2;
- (_Bool)onCompressFailed;
- (_Bool)onTransferFinish;
- (_Bool)onUploadFailed;
- (void)onVideoProcessEvent:(id)arg1 tag:(long long)arg2 status:(int)arg3;
@property(retain, nonatomic) QQViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(copy, nonatomic) NSString *preUploadSavedPath; // @synthesize preUploadSavedPath=_preUploadSavedPath;
@property(copy, nonatomic) NSString *preUploadThumbPath; // @synthesize preUploadThumbPath=_preUploadThumbPath;
@property(retain, nonatomic) QQRichTinyVideoClips *preUploadVideoClips; // @synthesize preUploadVideoClips=_preUploadVideoClips;
@property(retain, nonatomic) SplitVideoCollection *preUploadVideoInfoCollection; // @synthesize preUploadVideoInfoCollection=_preUploadVideoInfoCollection;
@property(retain, nonatomic) QQTinyVideoPreUploadProcessor *processor; // @synthesize processor=_processor;
- (id)processorClassName;
- (_Bool)renameThumbAndVideoWithMd5:(id)arg1;
@property(nonatomic) int rollBackFlag; // @synthesize rollBackFlag=_rollBackFlag;
- (_Bool)rollBackUploadVideo;
- (int)sendSVideoMsg:(id)arg1;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;
@property(retain, nonatomic) NSLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSMutableDictionary *statisInfo; // @synthesize statisInfo=_statisInfo;
@property(nonatomic) unsigned long long thumbSize; // @synthesize thumbSize=_thumbSize;
@property(retain, nonatomic) C2CSVideoUploadReqInfo *uploadReq; // @synthesize uploadReq=_uploadReq;
@property(nonatomic) unsigned long long uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) QQRichTinyVideoClips *videoClips; // @synthesize videoClips=_videoClips;
@property(copy, nonatomic) NSString *videoMD5FormServer; // @synthesize videoMD5FormServer=_videoMD5FormServer;
@property(nonatomic) unsigned long long videoSizeFromServer; // @synthesize videoSizeFromServer=_videoSizeFromServer;
@property(copy, nonatomic) NSString *videoUUIDFromServer; // @synthesize videoUUIDFromServer=_videoUUIDFromServer;
- (void)setupWithMediaInfo:(id)arg1;
- (_Bool)startProcess;
- (_Bool)updateMsgInfoWithMD5:(id)arg1 uuid:(id)arg2;
- (_Bool)updateProcessingState;
- (_Bool)updateVideoInfoToDB;
- (id)videoMsgModelClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

