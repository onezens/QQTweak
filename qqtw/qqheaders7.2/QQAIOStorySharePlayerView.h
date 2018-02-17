//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBStoryVideoPlayView.h"

#import "TBStoryVideoPlayViewDelegate.h"

@class NSString, QQAIOStoryShareTipsView, QQAIOVideoCellPlayBtnView, QQAnimatedRevealMaskView, QQStoryFakeProgressView, QQStoryShareVideoInfo, TBStoryVideoDesModel;

@interface QQAIOStorySharePlayerView : TBStoryVideoPlayView <TBStoryVideoPlayViewDelegate>
{
    QQStoryShareVideoInfo *_videoInfo;
    QQAIOStoryShareTipsView *_statusTipsView;
    QQStoryFakeProgressView *_progressView;
    QQAnimatedRevealMaskView *_maskView;
    QQAIOVideoCellPlayBtnView *_buttonView;
    _Bool _videoDidStartPlay;
    _Bool _videoDidEndError;
    _Bool _isRequestingBaseInfo;
    _Bool _canAutoDownload;
    _Bool _needPlayerUI;
    _Bool _supportPause;
    int _videoType;
    id <QQAIOStoryVideoPlayViewDelegate> _aioDelegate;
    id _touchDelegate;
    TBStoryVideoDesModel *_videoDesModel;
}

+ (id)storyShareAIOPlayerViewWithFrame:(struct CGRect)arg1 videoType:(int)arg2;
- (void)TBStoryViewPlayWillStart:(id)arg1;
- (void)addNotification;
@property(nonatomic) id <QQAIOStoryVideoPlayViewDelegate> aioDelegate; // @synthesize aioDelegate=_aioDelegate;
@property(nonatomic) _Bool canAutoDownload; // @synthesize canAutoDownload=_canAutoDownload;
- (_Bool)checkStoryInLocal:(id)arg1;
- (void)dealloc;
- (_Bool)didErrorShow;
- (void)doActionPlayVideoWithUrl:(id)arg1 doodle:(id)arg2 loaderMng:(id)arg3 error:(id)arg4;
- (void)enablePlayerViewDelegate;
- (void)handleGetGroupStoryInfo:(id)arg1;
- (void)handleGetVideoInfo:(id)arg1;
- (void)hideLoading;
- (void)hideStatusTipsView;
- (void)initStorySharePlayerView;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isPausing;
- (_Bool)isPlaying;
- (_Bool)isProgressViewShow;
@property(nonatomic) _Bool needPlayerUI; // @synthesize needPlayerUI=_needPlayerUI;
- (void)play;
- (double)progress;
- (void)removeAttatchViewForReuse;
- (void)requestStoryVideoInfo;
- (void)reusePlayerView;
- (void)setAudioSessionMix;
- (void)setFakeProgress:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgress:(double)arg1 withAnimation:(_Bool)arg2;
@property(nonatomic) _Bool supportPause; // @synthesize supportPause=_supportPause;
@property(nonatomic) id touchDelegate; // @synthesize touchDelegate=_touchDelegate;
@property(retain, nonatomic) TBStoryVideoDesModel *videoDesModel; // @synthesize videoDesModel=_videoDesModel;
- (void)setVideoInfo:(id)arg1;
- (void)setVideoSize:(struct CGSize)arg1 isLandScape:(_Bool)arg2;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
- (_Bool)shouldShowToastWhenFail;
- (void)showAndPlay:(_Bool)arg1;
- (void)showErrorTips:(id)arg1;
- (void)showFakeLoadingProgress;
- (void)showLoadingImmediately:(_Bool)arg1;
- (void)showMask:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showPlayButton;
- (void)showPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showProgress:(_Bool)arg1;
- (void)showProgress:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showStatusTipsView;
- (void)showToastWithString:(id)arg1;
- (void)startFakeProgress;
- (void)startPlayVideoWithVid:(id)arg1 Url:(id)arg2 doodle:(id)arg3 loaderMng:(id)arg4 error:(id)arg5;
- (_Bool)storyInfoValid;
- (id)tbStoryVideoDesModelFromShareVideoInfo:(id)arg1;
- (void)videoPlayEnd:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
