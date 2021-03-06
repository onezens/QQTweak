//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QARMapBaseViewController.h"

#import "ARMapWGLoadingManagerDelegate.h"
#import "ARMapYunAnimViewDelegate.h"

@class ARMapViewController, ARMapWGAnimView, ARMapWGLoadingManager, ARMapWGRegionView, ARMapWGYunBGView, ARMapYunAnimView, NSDictionary, NSString, NSTimer, QQAsynUrlImageView, QQAvatarView, QQProgressBar, REActivityBackgroundView, REStrokeLabel, UIButton, UIImageView, UILabel, UITapGestureRecognizer;

@interface ARMapWGSplashViewController : QARMapBaseViewController <ARMapWGLoadingManagerDelegate, ARMapYunAnimViewDelegate>
{
    ARMapViewController *_mapViewController;
    ARMapWGLoadingManager *_loadingManager;
    REActivityBackgroundView *_redPacketView;
    ARMapWGYunBGView *_yunBgView;
    ARMapWGAnimView *_wealthGodView;
    QQAsynUrlImageView *_logoView;
    UILabel *_logoName;
    ARMapWGRegionView *_regionView;
    UILabel *_tipsLabel;
    REStrokeLabel *_tipsStrokeLabel;
    UIButton *_enterButton;
    QQProgressBar *_progressBar;
    UILabel *_promptLabel;
    UITapGestureRecognizer *_tapGesture;
    ARMapYunAnimView *_yunAnimView;
    _Bool _hasLoadMap;
    _Bool _hasReceiveResp;
    _Bool _hasLoadLogo;
    _Bool _hasMapLoadFinish;
    _Bool _isLeftBtnClicked;
    NSTimer *_countDownTimer;
    _Bool _hasUpdateUI;
    _Bool _hasAdcodeInfo;
    NSTimer *_fakeProgressTimer;
    double _fakeProgress;
    int _resourceLoadFailCount;
    _Bool _hasRdmReportEntire;
    _Bool _hasRdmReportRequest;
    QQAvatarView *_avatarView;
    REStrokeLabel *_lbsTipsLabel;
    REStrokeLabel *_lbsTipsStrokeLabel;
    UIImageView *_lbsPackAddressIcon;
    UILabel *_lbsPackAddressLabel;
    _Bool _isPushViewController;
    _Bool _isLbsPackFromStructMsg;
    _Bool _isLbsCanDirectEnter;
    NSDictionary *_lbsPackDictionary;
}

- (void).cxx_destruct;
- (id)beginTimeString;
- (id)countDownTimeString:(int)arg1;
- (void)dealloc;
- (void)delayMapLoadFinish;
- (void)didEnterforeground:(id)arg1;
- (void)finishProgress;
- (id)getAdcodeInfoOrLastInfo;
- (int)getDefaultUIStatus;
- (void)goToMapViewController;
- (void)hideLbsPackUI;
- (id)init;
@property(nonatomic) _Bool isLbsCanDirectEnter; // @synthesize isLbsCanDirectEnter=_isLbsCanDirectEnter;
@property(nonatomic) _Bool isLbsPackFromStructMsg; // @synthesize isLbsPackFromStructMsg=_isLbsPackFromStructMsg;
@property(nonatomic) _Bool isPushViewController; // @synthesize isPushViewController=_isPushViewController;
@property(copy, nonatomic) NSDictionary *lbsPackDictionary; // @synthesize lbsPackDictionary=_lbsPackDictionary;
- (void)loadMapIfNeed;
- (void)logoutBeforeNotification;
- (_Bool)needShowLbsPackUI:(int)arg1;
- (void)onCurfewFinished:(id)arg1;
- (void)onCurfewStarted:(id)arg1;
- (void)onEnterClicked:(id)arg1;
- (void)onLoadingCheckFail:(unsigned long long)arg1;
- (void)onLoadingProgress:(float)arg1;
- (void)onMapLoadBegin;
- (void)onMapLoadFinish:(id)arg1;
- (void)onReloadClicked:(id)arg1;
- (void)onWealthGodReceiveRespNotification:(id)arg1;
- (void)onWealthGodScheduleDidChangeNotification:(id)arg1;
- (void)onWealthGodScheduleGetFailedNotification:(id)arg1;
- (void)onYunAnimDidAppear;
- (void)onYunAnimStopWhenAppEnterBackground;
- (void)quitViewController:(_Bool)arg1;
- (void)rdmReportEntire;
- (void)rdmReportRequest:(_Bool)arg1 params:(id)arg2;
- (void)reportWhenClose;
- (void)reportWhenEnterBtnClick;
- (void)reportWhenLoadFail:(unsigned long long)arg1;
- (void)reportWhenLoadSuccess;
- (void)reportWhenUpdateUI;
- (void)reportWhenViewDidLoad;
- (void)requestWealthGodScheduleIfNeed;
- (void)setRedPacketViewBG;
- (void)setTipsLabelText:(id)arg1;
- (void)showLbsPackUI;
- (void)showLbsUnAuthTips;
- (void)startCountDownTimer;
- (void)startFakeProgressTimer;
- (void)startProgress;
- (void)startYunAnimation;
- (void)stopCountDownTimer;
- (void)stopFakeProgressTimer;
- (void)updateCountDownTime;
- (void)updateDefaultLogoWhenFailedIfNeed;
- (void)updateEnterButton;
- (void)updateEnterButton:(int)arg1;
- (void)updateFakeProgress;
- (void)updateLogoIfNeed;
- (void)updateLogoLbsPack;
- (void)updateProgressBar;
- (void)updateProgressBar:(int)arg1;
- (void)updateRedPacketView:(int)arg1;
- (void)updateRedPacketViewBG:(_Bool)arg1;
- (void)updateRegionView:(int)arg1;
- (void)updateTipsLabel;
- (void)updateTipsLabel:(int)arg1;
- (void)updateUI;
- (void)updateUI:(int)arg1;
- (void)updateWealthGodView:(int)arg1;
- (void)updateYunBgView:(int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

