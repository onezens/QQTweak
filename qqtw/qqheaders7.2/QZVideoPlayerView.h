//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZSectionPlayer, QZVideoReportModel, QZVideoStateView;

@interface QZVideoPlayerView : UIView
{
    QZVideoStateView *_stateView;
    QZSectionPlayer *_player;
    _Bool _isPausedBySeek;
    _Bool _hasEnoughCacheData;
    _Bool _showDurationInView;
    _Bool _hiddenVideoWhenStop;
    _Bool _enableDelayShowLoading;
    id <QZVideoPlayerViewDelegate> _delegate;
    unsigned long long _defaultState;
    double _canPlayTime;
    unsigned long long _playSessionId;
    QZVideoReportModel *_reportModel;
    long long _cacheFileSize;
}

- (void).cxx_destruct;
- (id)asset;
- (double)bottomOffset;
@property(nonatomic) long long cacheFileSize; // @synthesize cacheFileSize=_cacheFileSize;
@property(nonatomic) double canPlayTime; // @synthesize canPlayTime=_canPlayTime;
- (void)checkPlaybackState;
- (id)configure;
- (id)currentImage;
- (double)currentTime;
@property(nonatomic) unsigned long long defaultState; // @synthesize defaultState=_defaultState;
@property(nonatomic) __weak id <QZVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)duration;
@property(nonatomic) _Bool enableDelayShowLoading; // @synthesize enableDelayShowLoading=_enableDelayShowLoading;
- (long long)errorCode;
- (void)getCurrentImage:(id)arg1 async:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (double)getCurrentPlayTime;
- (void)getCurrentVolum:(CDUnknownBlockType)arg1;
- (int)getPlayerState;
- (long long)getSeqNo;
- (id)getVideoDebugInfo;
- (id)getVideoFillMode;
- (long long)getVideoSizeWithNoPlayVideoSize:(long long *)arg1;
@property(nonatomic) _Bool hiddenVideoWhenStop; // @synthesize hiddenVideoWhenStop=_hiddenVideoWhenStop;
- (void)initPlayerBlock;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAutoAdaptFillModel;
- (_Bool)isDelayStartPlay;
- (_Bool)isMuted;
- (_Bool)isPlayOutOfRange:(double)arg1 duration:(double)arg2;
- (_Bool)isPlaying;
- (_Bool)isRepeat;
- (void)pause;
- (void)pause:(_Bool)arg1;
- (void)pauseByUser:(_Bool)arg1;
- (void)pauseForSeek;
- (_Bool)play;
@property(nonatomic) unsigned long long playSessionId; // @synthesize playSessionId=_playSessionId;
- (void)playbackStarted;
- (long long)playedTime;
- (void)playerFailed:(id)arg1;
- (void)playerLoadComplete;
- (void)playerLoadFailed:(id)arg1;
- (void)playerLoadProgress:(double)arg1;
- (void)playerLoadSpeed:(double)arg1;
- (void)playerPaused:(id)arg1;
- (void)playerPlayEndSection:(long long)arg1;
- (void)playerPlayToEnd:(id)arg1;
- (void)playerProgress:(id)arg1;
- (void)playerReadyToPlay;
- (void)playerStateChange:(int)arg1;
- (void)playerStoped:(id)arg1;
- (void)playerWaitDataCurTime:(double)arg1 loadedTime:(double)arg2;
- (void)playerWillPaused:(id)arg1;
- (void)playerWillStoped:(id)arg1;
- (_Bool)readyToPlay;
- (void)readyToPlay:(CDUnknownBlockType)arg1;
- (void)replacePlayer:(id)arg1;
@property(retain, nonatomic) QZVideoReportModel *reportModel; // @synthesize reportModel=_reportModel;
- (void)reset;
- (struct CGSize)resolution;
- (void)resumeForSeek;
- (void)seek:(double)arg1;
- (void)setAutoAdaptFillModel:(_Bool)arg1;
- (void)setConfigure:(id)arg1;
- (_Bool)setContentUrls:(id)arg1 withContentTimes:(id)arg2 isHLS:(_Bool)arg3 startTime:(double)arg4;
- (void)setDelayStartPlay:(_Bool)arg1;
- (void)setDisableClearCacheWhenError:(_Bool)arg1;
- (void)setDisableVideoSpeedLimit:(_Bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEnableVideoAts:(_Bool)arg1;
- (void)setLoadProgress:(double)arg1;
- (void)setLoadSpeed:(double)arg1;
- (void)setLoadTimeOut:(long long)arg1;
- (void)setMaxErrorCountFor1005:(long long)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setNeedNetworkChangeTip:(_Bool)arg1;
- (void)setOnlyVoice:(_Bool)arg1;
- (void)setPlayerBackground:(id)arg1;
- (void)setPlayerHidden:(_Bool)arg1;
- (void)setRepeat:(_Bool)arg1;
@property(nonatomic) _Bool showDurationInView; // @synthesize showDurationInView=_showDurationInView;
- (void)setState:(unsigned long long)arg1;
@property(retain, nonatomic) QZVideoStateView *stateView; // @synthesize stateView=_stateView;
- (void)setStateViewClass:(Class)arg1 stateViewDelegate:(id)arg2;
- (void)setStepPoint:(long long)arg1;
- (void)setVideoAsset:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)setVideoBussinessError:(long long)arg1;
- (void)setVideoFillMode:(id)arg1;
- (void)setVolum:(double)arg1;
- (void)showLiveStatusTips;
- (void)startLoadVideo:(id)arg1;
- (unsigned long long)state;
- (void)stop;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)updateContentUrls:(id)arg1;
- (void)updateReportModel;
- (void)updateReportModel:(_Bool)arg1;

@end

