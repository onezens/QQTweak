//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVIPFunctionComicBaseViewController.h"

#import "QQVIPFunctionComicNavigationBarViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class ComicInfoModel, ComicSectionModel, NSDictionary, NSString, QQToastView, QQVIPFunctionComicLoadingView, QQVIPFunctionUserReadProgressInfoModel, QQVipComicVideoPlayer, QQVipComicVideoPlayerNavBar, QQVipComicVideoSlideMenu, QQVipEpisodeChooseView, UIView;

@interface QQVipComicVideoPlayerVC : QQVIPFunctionComicBaseViewController <QQVIPFunctionComicNavigationBarViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _menuBarExpand;
    _Bool _episodeViewExpand;
    QQToastView *_showView;
    int _laststate;
    int _videoProgress;
    NSDictionary *_videoContext;
    UIView *_horizontalContainer;
    QQVIPFunctionComicLoadingView *_loadingView;
    QQVipComicVideoPlayer *_playerView;
    QQVipComicVideoPlayerNavBar *_navBar;
    QQVipEpisodeChooseView *_episodeView;
    NSString *_videoComicID;
    NSString *_videoSectionID;
    QQVIPFunctionUserReadProgressInfoModel *_progressModel;
    ComicInfoModel *_model;
    ComicSectionModel *_sectionModel;
    QQVipComicVideoSlideMenu *_slideMenu;
}

- (void).cxx_destruct;
- (void)appBecomActive:(id)arg1;
- (void)appBecomNonActive:(id)arg1;
- (void)autoHideMenuBar;
- (void)barViewClickedBackButton:(id)arg1;
- (void)barViewClickedRightButton:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) QQVipEpisodeChooseView *episodeView; // @synthesize episodeView=_episodeView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleComicDetailResp;
@property(retain, nonatomic) UIView *horizontalContainer; // @synthesize horizontalContainer=_horizontalContainer;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
@property(retain, nonatomic) QQVIPFunctionComicLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) ComicInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) QQVipComicVideoPlayerNavBar *navBar; // @synthesize navBar=_navBar;
- (void)networkChange:(id)arg1;
- (void)playVideo;
- (void)playVideo:(unsigned long long)arg1;
- (void)playerEpisodeChooseBtnClick:(id)arg1;
- (void)playerEpisodeChooseNoti:(id)arg1;
- (void)playerNextButtonClickNoti:(id)arg1;
@property(retain, nonatomic) QQVipComicVideoPlayer *playerView; // @synthesize playerView=_playerView;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) QQVIPFunctionUserReadProgressInfoModel *progressModel; // @synthesize progressModel=_progressModel;
- (void)queryComicVedioDetail;
- (void)removeLoadingView;
- (void)saveDisplayProgress;
@property(retain, nonatomic) ComicSectionModel *sectionModel; // @synthesize sectionModel=_sectionModel;
- (void)setEpisodeViewExpand:(_Bool)arg1;
- (void)setMenuBarExpand:(id)arg1;
@property(retain, nonatomic) QQVipComicVideoSlideMenu *slideMenu; // @synthesize slideMenu=_slideMenu;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
@property(retain, nonatomic) NSString *videoComicID; // @synthesize videoComicID=_videoComicID;
@property(retain, nonatomic) NSDictionary *videoContext; // @synthesize videoContext=_videoContext;
@property(nonatomic) int videoProgress; // @synthesize videoProgress=_videoProgress;
@property(retain, nonatomic) NSString *videoSectionID; // @synthesize videoSectionID=_videoSectionID;
- (void)showLoadingView;
- (_Bool)showTipsWithoutAnimation:(id)arg1 atRootView:(id)arg2 startY:(int)arg3 mode:(long long)arg4;
- (void)showToast:(id)arg1;
- (void)shpwToastAndExit:(id)arg1;
- (void)tap:(id)arg1;
- (void)updateComicPlayerState:(id)arg1;
- (void)updatePlayNextButtonState:(_Bool)arg1;
- (void)updatePlaySelectButtonState:(_Bool)arg1;
- (_Bool)validVideoContext;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
