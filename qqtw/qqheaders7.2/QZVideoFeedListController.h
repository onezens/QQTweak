//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZSlideToCloseFeedListViewController.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QZBlackCommentControllerDelegate.h"
#import "QZScrollToNextVideoViewDelegate.h"
#import "QZVideoFeedsTouchViewDelegate.h"
#import "QZVideoFloatingWindowDataSourceDelegate.h"
#import "QZVideoPopAdvViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, NSDictionary, NSMutableArray, NSNumber, NSString, QZBlackCommentController, QZScrollToNextVideoView, QZVideoAdvManager, QZVideoFeedsTouchView, QZVideoPlayerView, QZVideoPopAdvView, QZVideoViewStub, QzoneFeedCell, QzoneFeedModel, QzoneVideoFeedCell, UIButton, UIImage, UIImageView, UILabel, UIView, UIViewController, UIWindow;

@interface QZVideoFeedListController : MQZSlideToCloseFeedListViewController <QZVideoPopAdvViewDelegate, QZVideoFeedsTouchViewDelegate, QQAudioSessionManagerDelegate, QZScrollToNextVideoViewDelegate, UIGestureRecognizerDelegate, QZBlackCommentControllerDelegate, QZVideoFloatingWindowDataSourceDelegate>
{
    _Bool _pushedBlankVC;
    double _layoutDrawingBeginTime;
    UIButton *_floatWindowButton;
    UIButton *_closeButton;
    UIView *_headBarView;
    UILabel *_headBarTitleView;
    UIView *_blackMaskView;
    UIView *_blackMaskBottomView;
    _Bool _isClosing;
    long long _listReqID;
    long long _hasMore;
    NSString *_attachInfo;
    NSDictionary *_busiParam;
    QzoneFeedModel *_orginFeedModel;
    QzoneFeedModel *_curFeedModel;
    QzoneFeedModel *_adaptedFeedModel;
    QzoneFeedModel *_popAdvVideoModel;
    QZVideoPlayerView *_originVideoPlayerView;
    QzoneFeedCell *_originFeedCell;
    QzoneVideoFeedCell *_currentCell;
    _Bool _scrollTipsStart;
    _Bool _needReloadFeeds;
    _Bool _isEnteringFullscreen;
    QZVideoFeedsTouchView *_touchAlphaView;
    _Bool _waitFeedFlag;
    UIImageView *_scrollTipsView;
    _Bool _scroToNextCellAnimationDone;
    _Bool _playToEndDone;
    UIView *_inputMaskView;
    _Bool _needReplay;
    _Bool _isAudioSessionObtained;
    _Bool _isScrollToping;
    _Bool _isDataLoading;
    _Bool _firstNeedToPlay;
    _Bool _firstNeedCheckToPlay;
    _Bool _isReloadFromVC;
    _Bool _hasRefreshed;
    _Bool _notToPlay;
    _Bool _isClosed;
    QzoneFeedCell *_lastCell;
    QzoneFeedModel *_lastFeed;
    UIWindow *_window;
    _Bool _isNeedRelaseFWAudioDevice;
    QZScrollToNextVideoView *_scrollToNextVideoView;
    QZScrollToNextVideoView *_scrollToNextVideoViewFullSpec;
    QZScrollToNextVideoView *_guideToNextVideoTip;
    _Bool _firstEnterVideoLayer;
    _Bool _haveShowGuideToNextVideoTip;
    _Bool _guideToNextVideoTipIsRemoving;
    _Bool _slideMoreActionClicked;
    UIView *_fullScreenGuideView;
    _Bool _isActive;
    _Bool _needTriggerPlayRightEvent;
    UIViewController *_fullScreenVC;
    _Bool _exitDetailViewController;
    long long _leastTriggerLoadMoreIdx;
    NSMutableArray *_premovieRequestIds;
    QZVideoPopAdvView *_popAdvView;
    CALayer *_popShadowLayer;
    _Bool _hasRequestPopAdv;
    long long _currentVideoPlayDurationWithoutInterrupt;
    QzoneFeedModel *_preFeedModel;
    _Bool _isInEnterFloatWindow;
    UIImage *_originVideoViewCoverImage;
    unsigned long long _popAdvRequestRetryCount;
    _Bool _disApperBecauseClose;
    QZBlackCommentController *_blackCommentController;
    _Bool _isCreatedBlackCommentController;
    _Bool _oldEnableSlideRightToClose;
    _Bool _autoGotoAdDetail;
    _Bool _autoGotoAnimationAdvDetail;
    _Bool _isInVideoLayerByClickTag;
    _Bool _isInVideoLayerByClickFullscreenTag;
    _Bool _isReportedCurrentPage;
    _Bool _isTableReload;
    _Bool _isQuickForwardSending;
    _Bool _isStatusBarHiddenParentVC;
    UIImage *_bgImage;
    UIViewController *_fromViewController;
    long long _advArea;
    QzoneFeedModel *_advFeedModel;
    QZVideoViewStub *_videoStub;
    double _originalVideoViewSeekTo;
    NSString *_videoTagName;
    NSNumber *_startContentOffset;
    long long _quickForwardReqId;
    long long _quickShareReqId;
    QZVideoAdvManager *_advManager;
}

+ (void)commRealReleaseAudioDevice:(id)arg1;
+ (void)commReleaseAudioDevice:(id)arg1 hasObtainedAudioDevice:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
+ (_Bool)commonRequestAudioDevice:(id)arg1;
+ (id)imageFromView:(id)arg1;
+ (_Bool)isPGCVideo:(id)arg1;
+ (_Bool)needAdjustCellPosition:(struct CGSize)arg1 isFirstCell:(_Bool)arg2 isPGCVideo:(_Bool)arg3;
+ (_Bool)needDeleteFirstModelInFeedList:(id)arg1 originFeedmodel:(id)arg2;
+ (void)showVideoFloatLayer:(id)arg1 video:(id)arg2 fromRect:(struct CGRect)arg3 feedCoverImage:(id)arg4 controller:(id)arg5 videoPlayerView:(id)arg6 cell:(id)arg7;
+ (void)showVideoFloatLayer:(id)arg1 video:(id)arg2 fromRect:(struct CGRect)arg3 feedCoverImage:(id)arg4 controller:(id)arg5 videoPlayerView:(id)arg6 cell:(id)arg7 startContentOffset:(id)arg8 feedList:(id)arg9 userInfo:(id)arg10;
+ (void)showVideoFloatLayerFromFloatingWidow:(id)arg1 video:(id)arg2 fromRect:(struct CGRect)arg3 feedCoverImage:(id)arg4 controller:(id)arg5 videoPlayerView:(id)arg6 feedList:(id)arg7 userInfo:(id)arg8;
- (void).cxx_destruct;
- (void)adFeedStayTime:(id)arg1 cell:(id)arg2;
- (void)adReadMoreClickAction;
- (void)addMediaGainSharingInModel:(id)arg1;
- (void)adjustFirstCell;
- (void)adjustNextCell:(id)arg1 force:(_Bool)arg2;
- (id)adjustScreenImage:(id)arg1 withVideoView:(id)arg2 frame:(struct CGRect)arg3;
@property(nonatomic) long long advArea; // @synthesize advArea=_advArea;
- (void)advCancelAll;
- (void)advCheckToShowPopAdvWithIndex:(long long)arg1 playedTime:(long long)arg2 videoDuration:(long long)arg3;
@property(retain, nonatomic) QzoneFeedModel *advFeedModel; // @synthesize advFeedModel=_advFeedModel;
@property(retain, nonatomic) QZVideoAdvManager *advManager; // @synthesize advManager=_advManager;
- (void)advPopDestoryView;
- (long long)advPopGetPopAdvType:(id)arg1;
- (_Bool)advPopHasPop;
- (void)advPopHidePopAdvView:(_Bool)arg1;
- (void)advPopOnTouchPopView:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)advPopPrepareForShowPopView:(id)arg1;
- (void)advPopRefreshPopAdvView:(id)arg1;
- (void)advPopSendRequestForPopAdv:(id)arg1;
- (void)advPopShowPopAdvIfNeeded;
- (void)advPreLoadAdvWithCurFeedModel:(id)arg1;
- (void)advPremovieAdvAddReqId:(long long)arg1;
- (id)advPremovieAdvExtendInfo;
- (void)advPremovieAdvPlayerCheckLoadWithIndex:(long long)arg1 key:(id)arg2;
- (void)advPremovieAdvRemoveReqId:(long long)arg1;
- (_Bool)advPremovieCanLoadPremoveAdv:(id)arg1 model:(id)arg2;
- (void)advPremovieCancelAll;
- (_Bool)advPremovieLoadAdvWithIndex:(long long)arg1;
- (void)advReportWithFeedModel:(id)arg1 requestId:(long long)arg2 position:(long long)arg3;
@property(nonatomic) _Bool autoGotoAdDetail; // @synthesize autoGotoAdDetail=_autoGotoAdDetail;
@property(nonatomic) _Bool autoGotoAnimationAdvDetail; // @synthesize autoGotoAnimationAdvDetail=_autoGotoAnimationAdvDetail;
- (void)autoHideCloseAndFloatButton;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void)blackCommentViewDidDisapper:(id)arg1;
- (void)cancelCurrentRequest;
- (void)cancelWaitFeedFlag;
- (void)cancelWillScrollToNextAnimation;
- (id)cellFromSubView:(id)arg1;
- (void)clearShowBlackTextLayerTimer:(id)arg1;
- (void)clearWhenCloseListWindow;
- (void)close;
- (void)closeByScroll:(_Bool)arg1;
- (void)closeVideoListWindow;
- (void)closeVideoListWindow:(CDUnknownBlockType)arg1;
- (void)closeWithAnimation:(_Bool)arg1;
- (void)closeWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)commonComponentViewClicked;
- (long long)createFakeFeedModelOpmask;
- (id)createGDTReportParamsWithClickPos:(long long)arg1 feedModel:(id)arg2 cell:(id)arg3;
- (void)currentFocusFeedCellChange:(id)arg1;
- (id)currentVideoView;
- (void)dealloc;
- (void)delayDetailToPlay;
- (void)delayScrollToNextCell:(id)arg1;
- (void)delayShowTextBlackLayer:(id)arg1 delayTime:(double)arg2;
- (void)destroyShimmeringLabelAnimating;
- (void)detailToPlay;
- (void)didBecomeActive:(id)arg1;
- (void)didClickAniamtionAdv:(long long)arg1 withFeedModel:(id)arg2;
- (void)didEnterBackgroud:(id)arg1;
- (void)didEnterForeground:(id)arg1;
- (void)didTakeScreenshot:(id)arg1;
- (void)doExitAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableBtn:(id)arg1;
- (_Bool)enableFeedVisitReport;
- (void)ensureBlackMaskView;
- (void)ensureInputMask;
- (void)ensureTouchAlphaView;
- (void)enterFloatWindow;
- (void)feedCell:(id)arg1 playRightChangeTo:(_Bool)arg2;
- (id)firstVideo:(id)arg1;
- (void)forceToPlay;
- (void)forwardAdvReport:(id)arg1 position:(long long)arg2 requestId:(long long)arg3;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)getBgImage:(id)arg1 videoViewFrame:(struct CGRect)arg2 VideoViewSnapshot:(id)arg3 offset:(double)arg4;
- (id)getCellLastFeedModel:(id)arg1;
- (id)getCellNextFeedModel:(id)arg1;
- (struct CGRect)getCurVideoFrameInScreen:(id)arg1;
- (id)getCurrentCell;
- (id)getDictFeedsWithKey;
- (id)getDisplayCellFromModel:(id)arg1;
- (id)getFeedList;
- (id)getLayerVideoStateViewWithCell:(id)arg1;
- (struct CGSize)getVideoSize:(id)arg1 coverImage:(id)arg2;
- (id)getVideoVideoFromCell:(id)arg1;
- (void)handleClickComment:(id)arg1 fromType:(long long)arg2 offset:(double)arg3;
- (void)handleClickVideoTag:(id)arg1 param:(id)arg2 feedModel:(id)arg3;
- (void)handleCommentBarClick:(id)arg1 param:(id)arg2 feedModel:(id)arg3;
- (void)hideCloseAndFloatButton;
- (void)hideCloseButtonBlackLayer;
- (void)hideCommonComponentViewWithCell:(id)arg1;
- (void)hideTextBlackLayer:(id)arg1;
- (void)hideTextBlackLayer:(id)arg1 animationDuration:(double)arg2;
- (id)init;
- (void)initNotificationObservers:(id)arg1;
- (void)initVideoListWinodw:(id)arg1 parentCtr:(id)arg2;
- (id)initWithFeedModel:(id)arg1 videoPlayerView:(id)arg2 cell:(id)arg3 isInVideoLayerByClickTag:(_Bool)arg4;
- (void)inputBarDidActive:(id)arg1;
- (void)inputBarDidDeactive:(id)arg1;
- (void)inputBarShowOpenYellowVipFromCommentController;
- (long long)inputBarTheme;
@property(nonatomic) _Bool isInVideoLayerByClickFullscreenTag; // @synthesize isInVideoLayerByClickFullscreenTag=_isInVideoLayerByClickFullscreenTag;
@property(nonatomic) _Bool isInVideoLayerByClickTag; // @synthesize isInVideoLayerByClickTag=_isInVideoLayerByClickTag;
@property(nonatomic) _Bool isQuickForwardSending; // @synthesize isQuickForwardSending=_isQuickForwardSending;
@property(nonatomic) _Bool isReportedCurrentPage; // @synthesize isReportedCurrentPage=_isReportedCurrentPage;
@property(nonatomic) _Bool isStatusBarHiddenParentVC; // @synthesize isStatusBarHiddenParentVC=_isStatusBarHiddenParentVC;
@property(nonatomic) _Bool isTableReload; // @synthesize isTableReload=_isTableReload;
- (void)loadFloatWindowPlugin;
- (void)loadView;
- (void)microVideoClickAction;
- (void)nativeToH5;
- (_Bool)needAsyncaSnapImgWhenDisappear:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAudioSessionActive;
- (void)onAudioSessionDeactive;
- (void)onDeactiveWithSystem;
- (void)onEnterFloatWindowTapForDebugInfo:(id)arg1;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)onFeedCell:(id)arg1 followBtnClickParam:(id)arg2 feedModel:(id)arg3;
- (long long)onGetCommentNotify:(id)arg1;
- (_Bool)onHasMore;
- (void)onIntterruptBegin;
- (void)onIntterruptEnd;
- (_Bool)onLoadMore;
- (void)onLoginOutNotify:(id)arg1;
- (int)onNotifyHPSetConcen:(id)arg1;
- (void)onNotifyHideFeed:(id)arg1;
- (int)onNotifyRecommVideoList:(id)arg1;
- (void)onNotifyVideoViewInQQAudio:(id)arg1;
- (void)onReceiveCloseFloat:(id)arg1;
- (void)onReceiveQQVideoReq;
- (_Bool)onRefresh;
- (long long)onSyncNotifyRecommVideoList:(id)arg1;
- (void)onVideoChatEnd:(id)arg1;
- (void)onYellowDiamonH5FloatClose:(id)arg1;
- (void)openFullScreenForCell:(id)arg1 openBecauseLandscape:(_Bool)arg2;
- (void)orientationChangeNotification:(id)arg1;
@property(nonatomic) double originalVideoViewSeekTo; // @synthesize originalVideoViewSeekTo=_originalVideoViewSeekTo;
- (void)playNextVideo;
- (void)playingTick:(id)arg1 param:(id)arg2;
- (void)popVideoBlankViewController;
- (void)preCreateBottomRecomm:(id)arg1;
- (void)preProcessRecommVideoList:(id)arg1;
- (void)pushVideoBlankViewController;
- (_Bool)quickForwardInVideoFeedListForward:(id)arg1;
- (_Bool)quickForwardInVideoFeedListShare:(id)arg1;
@property(nonatomic) long long quickForwardReqId; // @synthesize quickForwardReqId=_quickForwardReqId;
- (void)quickForwardWithFeedModel:(id)arg1 text:(id)arg2 userParam:(id)arg3 isForward:(_Bool)arg4;
@property(nonatomic) long long quickShareReqId; // @synthesize quickShareReqId=_quickShareReqId;
- (id)recordAttachInfo;
- (void)releaseAudioDevice;
- (void)reloadData;
- (void)reloadFromController;
- (void)removeGuideToNextVideoTip;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceAdvManager:(id)arg1;
- (void)reportCurrentPage;
- (void)reportVideoVisit:(id)arg1;
- (void)reportVideoVisit:(id)arg1 adaptedFeedModel:(id)arg2;
- (_Bool)requestAudioDevice;
- (void)resetNextVideoGuideView;
- (void)restoreAttachInfo:(id)arg1;
- (void)restoreCellVideo:(id)arg1;
- (void)saveFirstVisibleVideoInfos:(_Bool)arg1;
- (id)screenImage;
- (void)scrollToLastCell;
- (void)scrollToNextCell;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (unsigned long long)secondType:(unsigned long long)arg1;
- (void)setBlackCommentController:(id)arg1;
- (void)setCloseButtonBlackLayerHidden:(_Bool)arg1 duration:(double)arg2;
- (void)setFullScreenVC:(id)arg1;
- (void)setOriginalVideoViewCoverImage:(id)arg1;
@property(retain, nonatomic) NSNumber *startContentOffset; // @synthesize startContentOffset=_startContentOffset;
@property(retain, nonatomic) QZVideoViewStub *videoStub; // @synthesize videoStub=_videoStub;
@property(retain, nonatomic) NSString *videoTagName; // @synthesize videoTagName=_videoTagName;
- (void)setupBackgroundColor;
- (void)setupCloseButton;
- (void)setupEnterFloatingWindowButton;
- (void)setupFeedModel:(id)arg1;
- (void)setupHeadBarView;
- (void)showFeedListToast:(id)arg1 tipType:(long long)arg2;
- (void)showGuideToNextVideoTipIfNeed;
- (void)showTextBlackLayer:(_Bool)arg1 ofCell:(id)arg2 withDuration:(double)arg3;
- (void)showTextBlackLayerByTimer:(id)arg1;
- (void)slideToCloseNoExit;
- (long long)startGetRequest;
- (void)startShimmeringLabelAnimating;
- (void)startSlideToClose;
- (void)startWillScrollToNextAnimation;
- (void)stopRequest;
- (void)stopShimmeringLabelAnimating;
- (void)storeCellVideo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tapAtPointInScreen:(struct CGPoint)arg1;
- (void)touchTable;
- (void)touched:(struct CGPoint)arg1;
- (void)updateCurFeedModel;
- (void)updateForbidDragToBackTouchRect:(id)arg1;
- (id)vfFeedList;
- (void)vfLoadMoreFeedList;
- (void)videoCommentReport:(id)arg1;
- (void)videoReportWithString:(id)arg1;
- (id)videoViewAtIndex:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)visibleCellWithFeedModel:(id)arg1;
- (void)willResignActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

