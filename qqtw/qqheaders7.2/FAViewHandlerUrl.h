//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewHandlerBase.h"

#import "QQGroupFileVideoPreviewHandlerDelegate.h"

@class NSString, QQGroupFileVideoPreviewHandler;

@interface FAViewHandlerUrl : FAViewHandlerBase <QQGroupFileVideoPreviewHandlerDelegate>
{
    _Bool _canPreviewVideo;
    QQGroupFileVideoPreviewHandler *_groupFileVideoPreviewHandler;
}

- (void)alertViewClicked:(long long)arg1;
- (int)businessType;
- (_Bool)canAutoDownLoad;
- (_Bool)canFreeForward;
- (_Bool)canOnlinePreview;
- (_Bool)canOnlinePreviewVideo;
- (_Bool)canShowProgress;
- (_Bool)canShowRightButton;
- (void)checkGroupFileViewPreviewConfig;
- (void)didFileTransferUpdate:(id)arg1;
- (int)getCurrentViewMode;
- (id)getOperationBtnTitle;
- (id)getSizeTimeLabelText;
@property(retain, nonatomic) QQGroupFileVideoPreviewHandler *groupFileVideoPreviewHandler; // @synthesize groupFileVideoPreviewHandler=_groupFileVideoPreviewHandler;
- (void)initEvent;
- (_Bool)isKindOfHandler;
- (void)onOnlinePreviewAction:(id)arg1;
- (void)onOperateAction;
- (void)operateFile;
- (void)previewHandler:(id)arg1 didCheckViewPreview:(_Bool)arg2;
- (void)previewHandler:(id)arg1 failWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

