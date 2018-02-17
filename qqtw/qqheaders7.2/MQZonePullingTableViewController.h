//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "GAInputBarDelegate.h"
#import "MQZoneAccessibilityViewDelegate.h"
#import "MQZoneTableFootLoadingViewDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QUIAlertViewDelegate.h"
#import "QZFeedVideoPlayRightManagerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CMMotionManager, GAInputBar, MQZoneAccessibilityView, MQZoneNavigationTitleView, MQZoneTableFootLoadingView, NSMutableArray, NSString, ODRefreshControl, QUIAlertView, QZExposureSampleStatistics, QZFeedVideoPlayRightManager, UILabel, UITableView;

@interface MQZonePullingTableViewController : QZoneViewController <MulMemSelBusiProcessDelegate, MQZoneAccessibilityViewDelegate, EGORefreshTableHeaderDelegate, UITableViewDataSource, UITableViewDelegate, GAInputBarDelegate, QUIAlertViewDelegate, MQZoneTableFootLoadingViewDelegate, QZFeedVideoPlayRightManagerDelegate>
{
    long long _inputBarActiveFrom;
    ODRefreshControl *_refreshControl;
    UITableView *_tableView;
    MQZoneNavigationTitleView *_navigationTitleView;
    _Bool _isRefreshing;
    MQZoneTableFootLoadingView *_footerLoadingView;
    long long _refreshType;
    _Bool _isHistroyVC;
    unsigned long long _blueType;
    NSString *_strFpsReportRDMEventName;
    QZExposureSampleStatistics *_exposureSample;
    _Bool _hasRefreshHeader;
    _Bool _isLoadMore;
    GAInputBar *_inputBar;
    _Bool _inputBarHiddenDefault;
    id _inputBarParam;
    double _inputBarDisplayOffset;
    struct CGPoint _tableViewOriginalContentOffset;
    _Bool _isScrolling;
    float _lastScrollOffsetY;
    QUIAlertView *_alertView;
    int _missRefreshCount;
    _Bool _isTableViewReloading;
    long long _emptyCellState;
    CMMotionManager *_motionManager;
    double _lastRoll;
    UILabel *_angleLabel;
    _Bool _forceUpdatePlayRight;
    _Bool _needAutoRefrsh;
    _Bool _isFirstRequestFeedListInVC;
    _Bool _needStickTableView;
    _Bool _isDoinglayoutFeedInSub;
    _Bool _hasReceiveEtFontNotify;
    QZFeedVideoPlayRightManager *_videoPlayRightManager;
    long long _scrollDirection;
    MQZoneAccessibilityView *_accessibilityView;
    NSMutableArray *_updateFontList;
}

- (void).cxx_destruct;
- (void)UpdateNetworkState:(id)arg1;
- (void)WillEnterForeground:(id)arg1;
@property(readonly, nonatomic) MQZoneAccessibilityView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
- (id)accessilibityElementsInMQZoneAccessibilityView;
- (void)addFakeFeed:(id)arg1;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)adjustFake:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkAutoPlayViewEvent:(long long)arg1;
- (void)checkAutoPlayViewReloadEndDisplay;
- (void)checkFootViewState;
- (void)checkLoadMore:(id)arg1;
- (void)clearLoadMoreState;
- (id)controllerTitle;
- (id)creatInputBarOutsizeScreen:(_Bool)arg1 hidden:(_Bool)arg2;
- (void)createFooterLoadingView;
- (void)createHeaderView;
- (_Bool)customLoadMoreTiming:(_Bool)arg1;
- (void)dealloc;
- (void)delayEndRefreshing:(_Bool)arg1;
- (void)delayUpdateAllPlayRightWithEvent:(id)arg1;
- (void)destroyShimmeringLabelAnimating;
- (void)didBecomeActive:(id)arg1;
- (void)didFinishHeaderRefreshing:(_Bool)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
@property(nonatomic) long long emptyCellState; // @synthesize emptyCellState=_emptyCellState;
- (void)endRefresh:(_Bool)arg1;
- (void)etFontChanged:(id)arg1;
- (id)feedModelList4Font;
- (void)finishLoading:(id)arg1;
@property(nonatomic) _Bool forceUpdatePlayRight; // @synthesize forceUpdatePlayRight=_forceUpdatePlayRight;
- (id)getAnEmptyCellForTableView:(id)arg1;
- (id)getDictFeedsWithKey;
- (id)getFeedList;
- (id)getFeedVideoViewsInCell:(id)arg1;
- (double)getScrollSpeed;
- (_Bool)hasNoFeeds;
@property(nonatomic) _Bool hasReceiveEtFontNotify; // @synthesize hasReceiveEtFontNotify=_hasReceiveEtFontNotify;
- (void)hideRefreshControl:(_Bool)arg1;
- (id)init;
- (id)initWithoutRefreshHeader;
@property(readonly, nonatomic) GAInputBar *inputBar; // @synthesize inputBar=_inputBar;
- (void)inputBar:(id)arg1 changeOffset:(double)arg2 changeHeight:(double)arg3;
- (_Bool)inputBar:(id)arg1 sendAction:(id)arg2;
- (void)inputBarBeingActive:(id)arg1 willChangeOffset:(double)arg2 changeHeight:(double)arg3;
- (void)inputBarBeingDeactive:(id)arg1 willChangeOffset:(double)arg2 changeHeight:(double)arg3;
- (void)inputBarDidActive:(id)arg1;
- (void)inputBarDidDeactive:(id)arg1;
- (_Bool)inputBarSendText:(id)arg1 param:(id)arg2;
- (void)inputBarShowOpenYellowVip;
- (void)inputBarShowSelectViewController:(id)arg1;
- (void)insertFakeFeed:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)invokeInputBarWithParam:(id)arg1 displayOffset:(double)arg2;
@property(nonatomic) _Bool isDoinglayoutFeedInSub; // @synthesize isDoinglayoutFeedInSub=_isDoinglayoutFeedInSub;
@property(nonatomic) _Bool isFirstRequestFeedListInVC; // @synthesize isFirstRequestFeedListInVC=_isFirstRequestFeedListInVC;
- (_Bool)isLoadingMore;
- (_Bool)isNavigationBarHidden;
@property(readonly, nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
- (_Bool)isTransparentRefreshControl;
- (void)loadMore;
- (void)loadTableView;
- (void)loadView;
- (double)navigationBarBottomY;
@property(nonatomic) _Bool needAutoRefrsh; // @synthesize needAutoRefrsh=_needAutoRefrsh;
@property(nonatomic) _Bool needStickTableView; // @synthesize needStickTableView=_needStickTableView;
- (id)objectWithUgcKey:(id)arg1 clientKey:(id)arg2;
- (void)onAlertViewBtnClicked:(long long)arg1 atIndex:(long long)arg2 cancel:(_Bool)arg3 userData:(id)arg4;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (long long)onFakeFeedNotify:(id)arg1;
- (unsigned long long)onGetLastRefreshTime;
- (id)onGetShowTextOfFinishingHeaderRefreshing;
- (_Bool)onHasMore;
- (_Bool)onLoadMore;
- (void)onMoodModifyNotify:(id)arg1;
- (void)onMoodWriteNotify:(id)arg1;
- (void)onMutltiMembersSelected:(id)arg1 members:(id)arg2;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)onNotify:(id)arg1;
- (void)onQZVideoFloatingWindowCloseNotify:(id)arg1;
- (_Bool)onRefresh;
- (void)onSelectionCompeleted:(id)arg1 nicks:(id)arg2;
- (void)onUpdateScrollState;
- (_Bool)openExposureSampleIfNeed;
- (void)refresh;
- (void)registFakeFeedNotify:(id)arg1;
- (void)releaseMotion;
- (void)reloadData;
- (void)removeAllObjects;
- (void)removeFakeFeed:(id)arg1;
- (void)removeObject:(id)arg1;
- (_Bool)removeObjectWithKey:(id)arg1 byfeedskey:(id)arg2;
- (_Bool)removeObjectWithUgcKey:(id)arg1 clientKey:(id)arg2 byfeedskey:(id)arg3;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setControllerTitle:(id)arg1;
- (void)setGifFrameDuration:(double)arg1 playDirection:(long long)arg2;
- (void)setTitle:(id)arg1;
@property(retain, nonatomic) NSMutableArray *updateFontList; // @synthesize updateFontList=_updateFontList;
@property(retain, nonatomic) QZFeedVideoPlayRightManager *videoPlayRightManager; // @synthesize videoPlayRightManager=_videoPlayRightManager;
- (_Bool)shouldHandleFakeFeedType:(long long)arg1;
- (void)showAlertViewWithTitle:(id)arg1 message:(id)arg2 cancelButton:(id)arg3 otherButtonTitles:(id)arg4 tag:(long long)arg5 userData:(id)arg6;
- (void)showFriendSelectViewControllerMaxCount:(long long)arg1 selectedList:(id)arg2 returnWhenReachMaxHeadCapacity:(_Bool)arg3;
- (void)showFriendSelectViewControllerMaxCount:(long long)arg1 selectedList:(id)arg2 returnWhenReachMaxHeadCapacity:(_Bool)arg3 withMySelfType:(_Bool)arg4 params:(id)arg5;
- (void)startBirthPrasieAniating;
- (void)startMotion;
- (void)startShimmeringLabelAnimating;
- (void)stickTableViewAnimated:(_Bool)arg1;
- (void)stopBirthPrasieAniating;
- (void)stopFooterLoading;
- (void)stopHeaderRefreshing;
- (void)stopHeaderRefreshing:(_Bool)arg1;
- (void)stopShimmeringLabelAnimating;
- (_Bool)supportPreload;
- (void)tableFootLoadingViewDidTriggerLoading:(id)arg1;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateCustomVipIconSceneFeed:(id)arg1;
- (void)updateFeedAccordEvent:(long long)arg1;
- (void)updateNavigationActiveViewState:(_Bool)arg1;
- (void)updateRefreshControlWithType:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
