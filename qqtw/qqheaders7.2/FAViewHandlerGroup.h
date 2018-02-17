//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewHandlerOffline.h"

#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQGroupFileOIDBRespondDelegate.h"
#import "QQGroupFilePreviewImageDelegate.h"
#import "QQGroupFileURLFetcherDelegate.h"
#import "QQGroupFileVideoPreviewHandlerDelegate.h"
#import "QQTVVideoViewControllerDelegate.h"

@class FAOnlinePreviewController, NSString, QQGroupFileInfo, QQGroupFileOIDBRequest, QQGroupFileTask, QQGroupFileURLFetcher, QQGroupFileVideoPreviewHandler;

@interface FAViewHandlerGroup : FAViewHandlerOffline <QQGroupFileURLFetcherDelegate, QQGroupFileVideoPreviewHandlerDelegate, QQTVVideoViewControllerDelegate, QQGroupFileOIDBRespondDelegate, QQGroupFilePreviewImageDelegate, QQFriendSelectedViewControllerDelegate>
{
    FAOnlinePreviewController *_onlinePrevCtrl;
    QQGroupFileURLFetcher *_videoURLFetcher;
    _Bool _isVideoPreviewReported;
    QQGroupFileVideoPreviewHandler *_videoPreviewHandler;
    _Bool _canPreviewVideo;
    QQGroupFileInfo *_fileInfo;
    QQGroupFileTask *_task;
    QQGroupFileOIDBRequest *_previewRequest;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)autoDownload;
- (void)bottomBarAction:(id)arg1;
- (int)businessType;
- (_Bool)canAutoDownLoad;
- (_Bool)canOnlinePreview;
- (_Bool)canShowProgress;
- (void)dealloc;
@property(retain, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
- (int)getCurrentViewMode;
- (id)getErrLabelText;
- (void)getFilePreview;
- (id)getOperationBtnTitle;
- (id)getProgressText;
- (double)getProgressValue;
- (id)getSizeTimeLabelText;
- (id)getUploaderName;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (void)groupFileURLFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileURLFetcher:(id)arg1 didFetcherURL:(id)arg2 cookie:(id)arg3;
- (id)initWithModel:(id)arg1 delegate:(id)arg2;
- (_Bool)isKindOfHandler;
- (void)onForwardAction;
- (void)onNetworkNoReachable:(unsigned long long)arg1;
- (void)onOperateAction;
- (void)onSafeCheckGrayFile:(unsigned long long)arg1 strTips:(id)arg2;
- (void)onSaveToWeiYunAction;
- (void)onStopAction;
- (void)openFile;
- (void)pauseDownload;
- (void)previewFile_internal;
- (void)previewHandler:(id)arg1 didCheckViewPreview:(_Bool)arg2;
- (void)previewHandler:(id)arg1 failWithError:(id)arg2;
@property(retain, nonatomic) QQGroupFileOIDBRequest *previewRequest; // @synthesize previewRequest=_previewRequest;
- (void)sendToPC;
@property(retain, nonatomic) QQGroupFileTask *task; // @synthesize task=_task;
- (void)showImgBottomBtnAndViewIsInit:(_Bool)arg1;
- (void)showOnlinePreviewController;
- (void)startDownload;
- (void)taskStatusChanged:(id)arg1;
- (void)updateImage;
- (void)updateTransferInfo;
- (void)videoController:(id)arg1 didFailPlayWithErrorCode:(long long)arg2;
- (void)videoControllerDidSuccessPlay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
