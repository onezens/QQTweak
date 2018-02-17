//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

#import "HPGrowingTextViewDelegate.h"
#import "NWAVLogDelegate.h"
#import "NWAVNotifyDelegate.h"
#import "NWAudioSessionManagerDelegate.h"
#import "PLTopPopNetworkTipsViewDelegate.h"
#import "QQAudioSessionManagerDelegate.h"

@class BeforeRoomPerf, HPGrowingTextView, NLRoomDRHelper, NSDictionary, NSString, NWVideoRender, NoRetainTimer, NowLiveRoomPreviewView, NowLiveRoomShareHelper, NowStoryNextRoomReqModel, PGCStoryModel, PLCommonLoadingView, UIButton, UILabel, UINavigationController, UIView;

@interface NowLiveRoomWebViewController : QQWebViewController <NWAVNotifyDelegate, NWAVLogDelegate, HPGrowingTextViewDelegate, PLTopPopNetworkTipsViewDelegate, NWAudioSessionManagerDelegate, QQAudioSessionManagerDelegate>
{
    NowLiveRoomShareHelper *_shareHelper;
    NLRoomDRHelper *_drHelper;
    _Bool _bFirstFrame;
    NoRetainTimer *_timeoutTimer;
    NoRetainTimer *_delayTimer;
    int _operType;
    _Bool _bLoading;
    _Bool _isOrigNavHidden;
    _Bool _isOrigStatusBarHidden;
    _Bool _navigationBarShow;
    double startTime1;
    double startTime2;
    double startTime3;
    double startTime4;
    _Bool _isDeatived;
    int sdkType;
    _Bool _handelGestureRecognizer;
    _Bool _isInPageVC;
    _Bool _isShareViewShow;
    _Bool _isChargeViewShow;
    _Bool _isCleanScreen;
    _Bool _isAppear;
    _Bool _isH5LoadSucc;
    _Bool _isH5LoadFail;
    _Bool _isReuseRender;
    int _openLiveRoomType;
    int _firstType;
    int _type;
    int _state;
    int _viewWillAppearCount;
    int _viewDidAppearCount;
    NSString *_roomId;
    id <NowLiveRoomDelegate> _delegate;
    UINavigationController *_parentNav;
    NSString *_previewImageURL;
    BeforeRoomPerf *_perf;
    NowStoryNextRoomReqModel *_topicModel;
    PGCStoryModel *_storyModel;
    NSDictionary *_h5ParamsDic;
    NowLiveRoomPreviewView *_previewImageview;
    UIView *_videoView;
    HPGrowingTextView *_growingTextView;
    UIButton *_closeBtn;
    UIButton *_restoreBtn;
    PLCommonLoadingView *_bufferView;
    UILabel *_waitHostView;
    UIButton *_keyboardDismissBtn;
    UIButton *_screenHorBtn;
    UIButton *_screenVertBtn;
    UIButton *_screenCloseBtn;
    NSString *_videoUrl;
    unsigned long long _roomStartTime;
    NSDictionary *_resultDict;
    NWVideoRender *_videoRender;
}

- (void).cxx_destruct;
- (void)_initParams;
- (void)activeApp;
- (_Bool)activeCategoryModel:(id)arg1 error:(id *)arg2;
- (void)appEnterBackground;
- (void)appEnterForegound;
@property(retain, nonatomic) PLCommonLoadingView *bufferView; // @synthesize bufferView=_bufferView;
- (id)calcRoomUrlStr:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)changeFrameWithKeyboardHeight:(int)arg1;
- (void)checkH5LoadSucc;
- (void)close;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void)closeRoom;
- (void)closeWithoutDeactive;
- (void)dataReportWithAction:(id)arg1 obj1:(id)arg2 obj2:(id)arg3 source:(id)arg4 timelong:(id)arg5;
- (void)dealloc;
@property(nonatomic) __weak id <NowLiveRoomDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissKeyboard;
@property(retain, nonatomic) NLRoomDRHelper *drHelper; // @synthesize drHelper=_drHelper;
- (void)exploreMore;
@property(nonatomic) int firstType; // @synthesize firstType=_firstType;
- (void)getRoomInfo;
@property(retain, nonatomic) HPGrowingTextView *growingTextView; // @synthesize growingTextView=_growingTextView;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(id)arg1;
@property(retain, nonatomic) NSDictionary *h5ParamsDic; // @synthesize h5ParamsDic=_h5ParamsDic;
@property(nonatomic) _Bool handelGestureRecognizer; // @synthesize handelGestureRecognizer=_handelGestureRecognizer;
- (void)handleHostNetUnstable;
- (void)handleNetworkChange:(id)arg1;
- (void)handleVideoChatEnd;
- (void)handleVideoChatStart;
- (void)handleVideoPause;
- (void)hideScreenControlView;
- (void)hscreenBtnClick;
- (id)initWithRoomId:(id)arg1 openLiveRoomType:(int)arg2 firstType:(int)arg3 isInPageVc:(_Bool)arg4;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(nonatomic) _Bool isChargeViewShow; // @synthesize isChargeViewShow=_isChargeViewShow;
@property(nonatomic) _Bool isCleanScreen; // @synthesize isCleanScreen=_isCleanScreen;
@property(nonatomic) _Bool isH5LoadFail; // @synthesize isH5LoadFail=_isH5LoadFail;
@property(nonatomic) _Bool isH5LoadSucc; // @synthesize isH5LoadSucc=_isH5LoadSucc;
@property(nonatomic) _Bool isInPageVC; // @synthesize isInPageVC=_isInPageVC;
@property(nonatomic) _Bool isReuseRender; // @synthesize isReuseRender=_isReuseRender;
@property(nonatomic) _Bool isShareViewShow; // @synthesize isShareViewShow=_isShareViewShow;
@property(retain, nonatomic) UIButton *keyboardDismissBtn; // @synthesize keyboardDismissBtn=_keyboardDismissBtn;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loadH5View;
- (void)loadHybridView;
- (void)loadNewGuideView;
- (void)loadSDKView;
- (void)loadWebViewContent;
- (id)mqq_app_beginDraw:(id)arg1;
- (id)mqq_app_beginShare:(id)arg1;
- (id)mqq_app_cleanScreen:(id)arg1;
- (id)mqq_app_close:(id)arg1;
- (id)mqq_app_closeAndForward:(id)arg1;
- (id)mqq_app_closeClient:(id)arg1;
- (id)mqq_app_contentLoaded:(id)arg1;
- (id)mqq_app_endDraw:(id)arg1;
- (id)mqq_app_explore:(id)arg1;
- (id)mqq_app_getClientState:(id)arg1;
- (id)mqq_app_loadFailed:(id)arg1;
- (id)mqq_app_loadSucc:(id)arg1;
- (id)mqq_app_openUrl:(id)arg1;
- (id)mqq_app_setStatusBarStyle:(id)arg1;
- (id)mqq_app_setWaitHostViewState:(id)arg1;
- (id)mqq_app_shareToQQ:(id)arg1;
- (id)mqq_app_showKeyboard:(id)arg1;
- (id)mqq_app_showNavigationBar:(id)arg1;
- (id)mqq_app_statusChange:(id)arg1;
- (id)navigationController;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onDeactiveWithSystem;
- (void)onDelayTimer:(id)arg1;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (void)onLogDev:(id)arg1 LogStr:(id)arg2;
- (void)onLogFinal:(id)arg1 LogStr:(id)arg2;
- (void)onMessage:(unsigned int)arg1;
- (void)onQuit;
- (void)onReConnect;
- (void)onTimeoutTimer:(id)arg1;
- (void)onVideoSize:(int)arg1 andHeight:(int)arg2;
@property(nonatomic) int openLiveRoomType; // @synthesize openLiveRoomType=_openLiveRoomType;
@property(nonatomic) __weak UINavigationController *parentNav; // @synthesize parentNav=_parentNav;
@property(retain, nonatomic) BeforeRoomPerf *perf; // @synthesize perf=_perf;
@property(retain, nonatomic) NSString *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(retain, nonatomic) NowLiveRoomPreviewView *previewImageview; // @synthesize previewImageview=_previewImageview;
- (void)reStartPlay;
- (void)removeBufferView;
- (void)removeLoadingView;
- (void)removeWaitHostView;
- (void)reportClientStateToWeb;
- (void)reportEnterRoomCGIError;
- (void)resetlayout;
@property(retain, nonatomic) UIButton *restoreBtn; // @synthesize restoreBtn=_restoreBtn;
- (void)restoreScreen;
@property(retain, nonatomic) NSDictionary *resultDict; // @synthesize resultDict=_resultDict;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) unsigned long long roomStartTime; // @synthesize roomStartTime=_roomStartTime;
@property(retain, nonatomic) UIButton *screenCloseBtn; // @synthesize screenCloseBtn=_screenCloseBtn;
@property(retain, nonatomic) UIButton *screenHorBtn; // @synthesize screenHorBtn=_screenHorBtn;
@property(retain, nonatomic) UIButton *screenVertBtn; // @synthesize screenVertBtn=_screenVertBtn;
- (void)setEnterType:(unsigned long long)arg1;
- (void)setRoomMode:(unsigned long long)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) PGCStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) NowStoryNextRoomReqModel *topicModel; // @synthesize topicModel=_topicModel;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NWVideoRender *videoRender; // @synthesize videoRender=_videoRender;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) int viewDidAppearCount; // @synthesize viewDidAppearCount=_viewDidAppearCount;
@property(nonatomic) int viewWillAppearCount; // @synthesize viewWillAppearCount=_viewWillAppearCount;
@property(retain, nonatomic) UILabel *waitHostView; // @synthesize waitHostView=_waitHostView;
- (void)showBufferView;
- (void)showEnterRoomErrorView;
- (void)showLoadView;
- (void)showNonWifiToast;
- (void)showPreviewImage:(_Bool)arg1;
- (void)showRetryTopTip;
- (void)showScreenControlView;
- (void)showWaitHostView;
- (void)startDelayTimer;
- (void)startLoading;
- (void)startTimeoutTimer:(double)arg1;
- (void)stopDelayTimer;
- (void)stopTimeoutTimer;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visibilityChangedScript:(_Bool)arg1;
- (void)vscreenBtnClick;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
