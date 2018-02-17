//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, NSMutableArray, NSTimer, QZCFrameAnimationView, QZCImageView, QZJAdBannerMultiBanner, QZVideoPlayerView, QZVideoSectionInfo, UIImageView;

@interface QZLiveSquareView : UIView
{
    int _xo;
    double _cellBgAlpha;
    unsigned long long _type;
    QZJAdBannerMultiBanner *_liveInfo;
    QZCImageView *_coverView;
    UIView *_blurView;
    QZVideoPlayerView *_playerView;
    QZVideoSectionInfo *_sectionInfo;
    double _startPlayTime;
    _Bool _isStartPlay;
    _Bool _playIsTerminated;
    NSTimer *_timer;
    NSTimer *_waitingTimer;
    UIImageView *_liveLogoView;
    UIImageView *_playIcon;
    QZCFrameAnimationView *_soundDynamicEffectIcon;
    NSMutableArray *_animImagePaths;
    id <QZQZLiveSquareViewDelegate> _playerDelegate;
    _Bool _isReportedSeq0;
    _Bool _canReportSeq1;
    double _currentPlayTime;
    NSDictionary *_reportDic;
}

- (void).cxx_destruct;
- (unsigned long long)createPlayID;
- (_Bool)stringIsInBlackList:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *animImagePaths; // @dynamic animImagePaths;
@property(retain, nonatomic) UIView *blurView; // @dynamic blurView;
@property(retain, nonatomic) QZCImageView *coverView; // @dynamic coverView;
@property(retain, nonatomic) QZJAdBannerMultiBanner *liveInfo; // @dynamic liveInfo;
@property(retain, nonatomic) UIImageView *liveLogoView; // @dynamic liveLogoView;
@property(retain, nonatomic) UIImageView *playIcon; // @dynamic playIcon;
@property(retain, nonatomic) QZVideoPlayerView *playerView; // @dynamic playerView;
@property(retain, nonatomic) QZVideoSectionInfo *sectionInfo; // @dynamic sectionInfo;
@property(retain, nonatomic) QZCFrameAnimationView *soundDynamicEffectIcon; // @dynamic soundDynamicEffectIcon;

@end
