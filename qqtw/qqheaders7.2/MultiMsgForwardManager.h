//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IRichMediaPBTransferResult.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface MultiMsgForwardManager : NSObject <IRichMediaPBTransferResult>
{
    NSMutableDictionary *_multiMsgForwardUploadReqs;
    NSMutableArray *_multiMsgForwardDownloadloadReqs;
    int _nGetNickReqSeq;
    NSDictionary *_NickDic;
}

+ (id)getInstance;
- (void)Preprocess:(id)arg1 forwardMsgs:(id)arg2 isResend:(_Bool)arg3 isForward:(_Bool)arg4;
- (void)cancelDownload:(int)arg1;
- (void)cancelUpload:(int)arg1;
- (void)changeAccount:(id)arg1;
- (id)createMultiMsgStructuredXML:(id)arg1 isForward:(_Bool)arg2;
- (id)createSummary:(id)arg1 type:(int)arg2;
- (void)deleteMultiMsg:(id)arg1;
- (void)downloadMultiMsg:(id)arg1;
- (id)getExistForwardPic:(id)arg1 multiMsgModel:(id)arg2;
- (void)getForwardUinNickName:(id)arg1;
- (int)getMaxMsgNum;
- (int)getMaxPicNum;
- (id)getNickName:(id)arg1;
- (id)getSelectedShowSummary:(id)arg1 type:(int)arg2;
- (id)init;
- (_Bool)isEnableMultiMsgForward;
- (_Bool)isUploading:(id)arg1;
- (id)loadLocalMultiMsg:(id)arg1;
- (void)notifyForwardUinNickNameResult:(_Bool)arg1 seq:(int)arg2 error:(id)arg3 resp:(id)arg4;
- (void)notifyPicUploadState:(id)arg1 uploadPicMsgModel:(id)arg2 isSuccess:(_Bool)arg3 serverRet:(id)arg4;
- (void)notifyPttResourceUploadState:(id)arg1 uploadPttMsgModel:(id)arg2 isSuccess:(_Bool)arg3;
- (void)onForceOffLineNotify;
- (void)onReceiveVideoUploadCanceldNoti:(id)arg1;
- (void)resendMultiMsg:(id)arg1;
- (void)richMediaDownloadPBFileMessageModel:(id)arg1 result:(_Bool)arg2 error:(id)arg3;
- (void)richMediaUploadPBFileMessageModel:(id)arg1 result:(_Bool)arg2 resId:(id)arg3 error:(id)arg4;
- (void)sendMultiMsg:(id)arg1 forwardMsgs:(id)arg2 isForward:(_Bool)arg3;
- (void)sendPbMsg:(id)arg1;
- (void)sendVideos:(id)arg1 multiMsgModel:(id)arg2;
- (void)updatePicMsgModelDownloadState:(id)arg1 picMsgModel:(id)arg2 state:(int)arg3;
- (void)updatePicMsgModelPicInfo:(id)arg1 picMsgModel:(id)arg2 picInfo:(id)arg3;
- (void)updatePicMsgModelPicSize:(id)arg1 picMsgModel:(id)arg2;
- (void)updatedDbMsgState:(id)arg1 state:(int)arg2;
- (void)updatedMultiMsg:(id)arg1 resid:(id)arg2;
- (void)videosForwardResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
