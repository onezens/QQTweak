//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQDoodleGifViewDelegate.h"
#import "QQDoodlePlayDelegate.h"
#import "QQImageMaskViewDelegate.h"

@class NSString, NSThread, QQAIODynaDoodleImageView, QQAIOFlashChatArkSourceView, QQBaseChatViewController, QQDoodleGifView, QQImageMaskView, UIButton, UIImageView;

@interface QQAIODynaDoodleCellView : QQAIOCommonCellView <QQImageMaskViewDelegate, QQDoodlePlayDelegate, QQDoodleGifViewDelegate>
{
    _Bool _loadBeforeGif;
    _Bool _FirstUploadOver;
    double lastGestureTapStopDoodleTime;
    QQImageMaskView *_imageMask;
    _Bool _autoRunAfterUserRetry;
    _Bool _isNeedAutoRunDynaDoodle;
    QQBaseChatViewController *_currentViewControll;
    QQAIODynaDoodleImageView *_contentImage;
    QQAIOFlashChatArkSourceView *_sourceView;
    QQDoodleGifView *_gifPlayViewBefore;
    UIImageView *_gifPlayViewAfter;
    UIImageView *_bootomView;
    UIButton *_recvFailview;
    NSThread *_doodleDataProcessThread;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bootomView; // @synthesize bootomView=_bootomView;
@property(retain, nonatomic) QQAIODynaDoodleImageView *contentImage; // @synthesize contentImage=_contentImage;
@property(nonatomic) __weak QQBaseChatViewController *currentViewControll; // @synthesize currentViewControll=_currentViewControll;
- (void)dealloc;
- (void)didTapRecvFailIcon:(id)arg1;
@property(retain, nonatomic) NSThread *doodleDataProcessThread; // @synthesize doodleDataProcessThread=_doodleDataProcessThread;
- (void)doodleDataProcessThreadFunction:(id)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)dynadoodleFileTransferNotify:(id)arg1;
- (struct CGRect)frameForMsgRecvFail;
- (void)gestureTap:(id)arg1;
- (id)getMenuItems;
@property(retain, nonatomic) UIImageView *gifPlayViewAfter; // @synthesize gifPlayViewAfter=_gifPlayViewAfter;
@property(retain, nonatomic) QQDoodleGifView *gifPlayViewBefore; // @synthesize gifPlayViewBefore=_gifPlayViewBefore;
- (void)handleGifDecodeNotification:(id)arg1;
- (void)hideMaskViewIfNecessary;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;
- (void)interiorRunBeforeGif;
- (void)interiorRunDynaDoodle;
- (_Bool)isDynaDoodleRunning;
@property(nonatomic) _Bool isNeedAutoRunDynaDoodle; // @synthesize isNeedAutoRunDynaDoodle=_isNeedAutoRunDynaDoodle;
- (void)maskViewDidRevealed:(id)arg1;
- (void)maskViewIndicatorFinished:(id)arg1;
- (void)menuActionDeleteDoodleMessage:(id)arg1;
- (void)menuActionRecallDoodlelMessage:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performDoodleAnimationFromBeforeGif;
- (void)playDoodleCancel:(id)arg1;
- (void)playDoodleEnd:(id)arg1;
- (void)playGifEnd:(id)arg1;
- (void)prepareImageMaskData;
- (void)preparePaopao:(id)arg1;
@property(retain, nonatomic) UIButton *recvFailview; // @synthesize recvFailview=_recvFailview;
- (void)retryToDownloadDynaDoodleFile;
- (void)runDynaDoodle;
- (void)setAioModel:(id)arg1;
- (void)setHiddenAllGifView;
- (void)setHiddenRecvView:(_Bool)arg1;
@property(retain, nonatomic) QQAIOFlashChatArkSourceView *sourceView; // @synthesize sourceView=_sourceView;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)staticDoodleImageKeepState:(id)arg1;
- (void)staticDoodleImageReadyFailed:(id)arg1;
- (void)staticDoodleImageReadySucceed:(id)arg1;
- (void)stopDynaDoodle;
- (void)willDrawBubble;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
