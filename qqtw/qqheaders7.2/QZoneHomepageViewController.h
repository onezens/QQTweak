//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZCoverFeedListViewController.h"

#import "MQZoneApplyVisitViewControllerDelegate.h"
#import "MQZoneCoverHeaderViewDelegate.h"
#import "MQZoneHomepageHeaderViewDelegate.h"
#import "MQZoneHomepageMemorySealOffViewDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "QZClearNavigationBarDelegate.h"
#import "QZCommonWidgetDelegate.h"
#import "QZCoverViewWrapperDelegate.h"
#import "QZEventWidgetDelegate.h"
#import "QZFacadeViewDelegate.h"
#import "QZFeedDateCellDelegate.h"
#import "QZHomePagePermissionViewDelegate.h"
#import "QZoneBannerDelegate.h"
#import "QzoneSearchTimeLineViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class AddFriendSendMessageViewController, MQZoneCoverHeaderView, MQZoneHomepageMemorySealOffView, MQZoneMusicPlayBar, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, QZClearNavigationBar, QZCommonWidget, QZEventWidgetWrapper, QZFacadeView, QZFloatView, QZHomePagePermissionViewManager, QZJNsQmallCoverQzmallCustomNavi, QZProfileModel, QZoneBannerUrgeVipView, QzoneFeedModel, QzoneSearchTimeLineView, UIActivityIndicatorView, UIImageView, UIView, UIViewController;

@interface QZoneHomepageViewController : MQZCoverFeedListViewController <QZHomePagePermissionViewDelegate, QZoneBannerDelegate, QZClearNavigationBarDelegate, QzoneSearchTimeLineViewDelegate, QZFeedDateCellDelegate, QZCommonWidgetDelegate, MQZoneHomepageMemorySealOffViewDelegate, QZEventWidgetDelegate, UIActionSheetDelegate, QUIActionSheetDelegate, MQZoneCoverHeaderViewDelegate, QZCoverViewWrapperDelegate, MQZoneHomepageHeaderViewDelegate, MQZoneApplyVisitViewControllerDelegate, QZFacadeViewDelegate>
{
    _Bool _hasMore;
    long long _getPslProfileReqID;
    long long _unreadNumberFromRefreshing;
    long long _unReadFeedNum;
    long long _getCoverReqID;
    long long _applyVisitReqID;
    long long _writeMsgReqID;
    NSDictionary *_userInfo;
    _Bool _shouldReloadFullData;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicatorView;
    _Bool _hasPermission;
    long long _getMiniFeedReqID;
    AddFriendSendMessageViewController *_addFriendControll;
    UIViewController *_preCtr;
    NSString *_feedCoverId;
    QZFacadeView *_facadeView;
    _Bool _isFacadeDisappeared;
    long long _deleteVisitRecordReqID;
    UIImageView *_fullScreenCoverView;
    UIImageView *_weidongImageView;
    NSString *_currentWeidongZipUrl;
    NSString *_currentWeidongDir;
    _Bool _needLazyLoadWeidong;
    _Bool _isWeidongAnimating;
    _Bool _isGetLuckyMoney;
    double _feedCellBgAlpha;
    QZClearNavigationBar *_clearNavigationBar;
    QZoneBannerUrgeVipView *_urgePayVipBanner;
    double _layoutDrawingBeginTime;
    double _openVCtime;
    NSString *_profileAttach;
    NSString *_cachedProfileAttach;
    NSDictionary *_shareInfo;
    QzoneSearchTimeLineView *_timeLineView;
    NSString *_currentYearAndMonth;
    QZJNsQmallCoverQzmallCustomNavi *_naviDeco;
    _Bool _isTimeLineMode;
    _Bool _cacheHasMore;
    NSDate *_clickTimeLineDate;
    NSMutableArray *_cachedFeedList;
    _Bool _hasPrevious;
    NSString *_currentRefreshkey;
    double _currentRefreshOffsetY;
    _Bool _shouldAddOffsetY;
    MQZoneCoverHeaderView *_cachedHeaderView;
    MQZoneHomepageMemorySealOffView *_sealOffView;
    QzoneFeedModel *_memorySealOffModel;
    struct CGRect _memorySealOffCellRect;
    QZCommonWidget *_commonWidget;
    NSString *_firstTitle;
    unsigned long long _firstRightButtonType;
    QZHomePagePermissionViewManager *_permissionViewManager;
    _Bool _isShowPermission;
    MQZoneMusicPlayBar *_musicPlayBar;
    QZEventWidgetWrapper *_eventWidgetWrpper;
    _Bool _sharePosterType;
    _Bool _isFromUserSummary;
    _Bool _shouldShowFacadeView;
    _Bool _offsetFirstFeed;
    _Bool _isFollowGuideChecked;
    _Bool _isFollowGuideDownloadReady;
    _Bool _isShareViewDownloadReady;
    _Bool _isAutoOpenFollowFeedSetting;
    QZProfileModel *_profile;
    NSMutableDictionary *_avatarActionMap;
    long long _avatarId;
    QZFloatView *_floatView;
}

- (void).cxx_destruct;
- (id)GetLastFeedModel;
- (_Bool)HasPlayingFeedVideoView;
- (void)ReplaceCover;
- (id)accessilibityElementsInMQZoneAccessibilityView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addFriend:(int)arg1;
- (void)addFriend:(id)arg1 withSourceID:(int)arg2;
- (void)addLoadingView;
- (void)adjustTableHeaderHeight:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)afterViewDidAppear;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)answerQuestion;
- (void)applyFollow;
- (void)applyVisit;
@property(retain, nonatomic) NSMutableDictionary *avatarActionMap; // @synthesize avatarActionMap=_avatarActionMap;
- (void)avatarCover:(_Bool)arg1;
@property(nonatomic) long long avatarId; // @synthesize avatarId=_avatarId;
- (void)cacheRectAvatar:(id)arg1;
- (void)cacheRoundAvatar:(id)arg1;
- (void)changeConcernActionSelected;
- (void)checkFollowGuideReady;
- (void)checkForUpdatePoster;
- (void)checkShareViewReady;
- (void)checkShouldShowGuide:(id)arg1;
- (void)clickAndGetTime:(int)arg1 andMonth:(int)arg2;
- (void)clickAvatarView;
- (void)clickBackButton;
- (void)clickCampusSpaceView;
- (void)clickCommonWidget:(id)arg1;
- (void)clickEnterButton;
- (void)clickEventWidget:(id)arg1;
- (void)clickFacade:(id)arg1;
- (void)clickFace:(long long)arg1 avatarCover:(long long)arg2 isNameplate:(_Bool)arg3;
- (void)clickFamousQZoneView;
- (void)clickGiftView;
- (void)clickIntimacyView:(id)arg1;
- (void)clickLoversSpaceView;
- (void)clickMyFansFollowButton;
- (void)clickMyFansView;
- (void)clickMyFollowView;
- (void)clickOpenVip;
- (void)clickOpenVipPK;
- (void)clickPersonalizeView;
- (void)clickRedBonus;
- (void)clickTabButtonAtIndex:(long long)arg1;
- (void)clickTimeIcon;
- (void)clickUrgePayVipBanner:(id)arg1;
- (void)clickWidget:(id)arg1;
- (void)closeBannerForType:(long long)arg1;
- (void)copyUin;
- (void)createCommonWidget;
- (void)createFloatView;
- (void)createHeaderView;
- (void)dealWithTypeForNotifyTopfeeds:(long long)arg1;
- (void)dealloc;
- (void)delayInitWebCoverView;
- (void)deleteVisitRecord;
- (void)didDismissToastView:(id)arg1;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)dismissUrgePayVipBanner;
- (void)doFollow;
- (void)doShowShareMenu;
- (_Bool)enableFeedVisitReport;
- (void)enterAlbumList;
- (void)enterBlogList;
- (void)enterFriendsSetting;
- (_Bool)enterGameBySchema:(id)arg1;
- (void)enterGameByUrl:(id)arg1;
- (void)enterMessageList;
- (void)enterMoodList;
- (void)enterVisiterList;
- (void)facadeViewFadeAway;
- (id)feedModelList4Font;
- (void)filterDateAndDuplicateFeedWhenMerge:(id)arg1 downArray:(id)arg2;
- (void)filterFakeReminderFeed;
@property(retain, nonatomic) QZFloatView *floatView; // @synthesize floatView=_floatView;
- (id)generateDateRemindWithFirstYear:(long long)arg1 firstMonth:(long long)arg2 clickYear:(long long)arg3 clickMonth:(long long)arg4;
- (id)getAnEmptyCellForTableView:(id)arg1;
- (long long)getDateModelNumBeforeModel:(id)arg1;
- (id)getDictFeedsWithKey;
- (id)getFeedList;
- (id)getFirstFeedInList:(id)arg1;
- (id)getFirstFeedWithoutReminder:(id)arg1;
- (double)getHeaderViewHeight:(_Bool)arg1 coverInfo:(id)arg2;
- (id)getImageByURL:(id)arg1;
- (id)getLastFeedModelInList:(id)arg1;
- (void)getProfile;
- (void)goApplyVisit;
- (void)goDeleteVisitRecord;
- (void)goSeeProfile;
- (void)gotoNameplate;
- (void)gotoSearchBoard;
- (void)handleClickFeedOwnerNick:(id)arg1 param:(id)arg2;
- (void)handleClickReport:(id)arg1 indexPath:(id)arg2 offset:(double)arg3;
- (void)handleEnterBackground;
- (void)handleEnterForeground;
- (void)handleOpenHomepage:(long long)arg1 nick:(id)arg2;
- (void)hanldeTouchSealOffSettingBtn:(id)arg1 feedModel:(id)arg2;
- (void)hideMemorySealOffView;
- (void)hideNavigationBar;
- (id)homepageSharePoster:(id)arg1 headImage:(id)arg2;
- (void)initNotificationObservers:(id)arg1;
- (id)initWithUin:(long long)arg1 nickname:(id)arg2 preCtr:(id)arg3 hasPermission:(_Bool)arg4;
- (id)initWithUin:(long long)arg1 nickname:(id)arg2 preCtr:(id)arg3 hasPermission:(_Bool)arg4 isGetLuckyMoney:(_Bool)arg5;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
@property(nonatomic) _Bool isAutoOpenFollowFeedSetting; // @synthesize isAutoOpenFollowFeedSetting=_isAutoOpenFollowFeedSetting;
- (_Bool)isExistMemorySealOffModel:(id)arg1;
@property(nonatomic) _Bool isFollowGuideChecked; // @synthesize isFollowGuideChecked=_isFollowGuideChecked;
@property(nonatomic) _Bool isFollowGuideDownloadReady; // @synthesize isFollowGuideDownloadReady=_isFollowGuideDownloadReady;
@property(nonatomic) _Bool isFromUserSummary; // @synthesize isFromUserSummary=_isFromUserSummary;
- (_Bool)isGetAllCommentRequestIDInContainer:(long long)arg1;
- (_Bool)isHasPass;
- (_Bool)isNavigationBarHidden;
- (_Bool)isNeedPopActionSheet;
- (_Bool)isProfileFeeds;
- (_Bool)isReverseBlack;
@property(nonatomic) _Bool isShareViewDownloadReady; // @synthesize isShareViewDownloadReady=_isShareViewDownloadReady;
- (_Bool)isShowingOperationWidget;
- (_Bool)isTransparentRefreshControl;
- (void)leftButtonClick:(id)arg1;
- (id)linkDescForHomepageShareView;
- (id)linkNameForHomepageShareView;
- (long long)linkUinForHomepageShareView;
- (long long)liveReportExpose;
- (void)loadView;
- (id)managementHomepageAvatarActionSheet:(_Bool)arg1 isNameplate:(_Bool)arg2;
- (void)modifyStatusBarStyleIfNeed;
- (void)musicPlayStateChange;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) _Bool offsetFirstFeed; // @synthesize offsetFirstFeed=_offsetFirstFeed;
- (void)on3RDShareNotify:(id)arg1;
- (void)onBtnMoreClicked;
- (void)onClickButton:(unsigned long long)arg1;
- (void)onClickedReport;
- (void)onCoverUpdatedNotify:(id)arg1;
- (void)onCoverViewClicked:(id)arg1;
- (int)onDeleteMessgaeNofity:(id)arg1;
- (int)onDeleteVisitRecord:(id)arg1;
- (void)onDownloadWeidongSucc:(id)arg1;
- (void)onEnterQuestion:(id)arg1 answer:(id)arg2;
- (void)onEventWidgetUpdate:(id)arg1;
- (long long)onFakeFeedNotify:(id)arg1;
- (long long)onFeedUnreadNumberUpdate:(id)arg1;
- (void)onForwardToQzone;
- (void)onForwardToWX;
- (void)onForwardToWXMomment;
- (void)onFowardToQQClicked;
- (int)onGetHpgInfo:(id)arg1;
- (unsigned long long)onGetLastRefreshTime;
- (int)onGetMiniFeedNotify:(id)arg1;
- (void)onHasLuckyMoney:(id)arg1;
- (_Bool)onHasMore;
- (void)onHomepageShareViewSelectShareType:(_Bool)arg1;
- (void)onInvite;
- (int)onInviteOpenSpaceNotify:(id)arg1;
- (_Bool)onLoadMore;
- (int)onNotifyDelFeedInFeedlist:(id)arg1;
- (void)onNotifySetFeedCover:(id)arg1;
- (_Bool)onNotifyVerify:(id)arg1;
- (int)onNotifyWriteMessageResult:(id)arg1;
- (void)onPersonalSetting:(id)arg1;
- (_Bool)onRefresh;
- (_Bool)onRefresh:(_Bool)arg1 isFromTimeLine:(_Bool)arg2 busi:(id)arg3;
- (_Bool)onRefresh:(_Bool)arg1 previous:(_Bool)arg2 isFromTimeLine:(_Bool)arg3 busi:(id)arg4;
- (void)onRefreshFeeds;
- (int)onSetApplyVisitNotify:(id)arg1;
- (int)onSetBlackNotify:(id)arg1;
- (int)onSetConcernNotify:(id)arg1;
- (int)onSetUncareNotify:(id)arg1;
- (int)onSetVisitNotifyList:(id)arg1;
- (void)onSettingButtonClicked;
- (void)onUpdateFloat:(id)arg1;
- (void)onUpdateNaviDeco:(id)arg1;
- (void)onUpdateTableBgImageView:(id)arg1;
- (_Bool)openExposureSampleIfNeed;
- (void)openFollowFeedSetting;
- (void)openVideoCoverFloating:(id)arg1;
- (void)openYellowDiamondSuccess;
- (void)pauseAllFeedVideo;
@property(retain, nonatomic) QZProfileModel *profile; // @synthesize profile=_profile;
- (id)qrimageForMainPage;
- (void)refreshAllVisibleExposure:(id)arg1;
- (void)removeFloatView;
- (void)removeGetAllCommentRequestID:(long long)arg1 cancel:(_Bool)arg2;
- (void)removeLoadingView;
- (void)removeMusicPlayBar;
- (void)removeOldMemorySealOffModel;
- (void)removeWeidongView;
- (void)requestFinished:(id)arg1;
- (void)scrollToFirstFeeds;
- (void)scrollToTimeLineRefreshFeeds;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setConcernRequest;
- (void)setFullScreenCover:(id)arg1;
- (void)setRedBounusHidden:(_Bool)arg1;
@property(nonatomic) _Bool shouldShowFacadeView; // @synthesize shouldShowFacadeView=_shouldShowFacadeView;
- (void)setupMusicPlayer;
- (void)shareDidAction:(id)arg1;
- (void)shareHomePage;
- (void)shareToWeChat:(int)arg1;
- (void)shouldShowMemorySealOff:(id)arg1;
- (_Bool)shouldShowWidgetAI;
- (void)showEventWidget;
- (void)showFacadeView;
- (void)showFeedListToast:(id)arg1 tipType:(long long)arg2;
- (void)showFloatView;
- (void)showMemorySealOff:(id)arg1;
- (void)showMusicPlayBar;
- (void)showNavigationBar;
- (void)showPermissionInfo:(id)arg1;
- (void)showRightButton;
- (void)showShareMenu:(id)arg1;
- (void)showTopUI;
- (void)showUrgePayVipBanner;
- (void)showVipUrl;
- (void)showWeidongView;
- (_Bool)submitByContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateCachedFeedListInTimeLineMode:(id)arg1;
- (void)updateFullScreenCover:(id)arg1;
- (void)updateNaviDeco:(id)arg1;
- (void)updateNavigationActiveViewState:(_Bool)arg1;
- (_Bool)updateNavigationbarWithTitle:(id)arg1;
- (void)updateShareImage;
- (void)updateTimeLineMode:(_Bool)arg1;
- (void)videoCoverFinishedCallBack:(id)arg1;
- (void)videoCoverStateChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

