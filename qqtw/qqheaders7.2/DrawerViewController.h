//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQRedPointTableViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DrawerContentsViewController, NSMutableArray, NSString, UIControl, UIPanGestureRecognizer, UIView, UIViewController;

@interface DrawerViewController : QQViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, QQRedPointTableViewControllerDelegate>
{
    UIViewController *_tabController;
    UIView *_container;
    DrawerContentsViewController *_contentsViewController;
    _Bool _isAnimating;
    double _gestureBeginX;
    NSMutableArray *_dataSource;
    struct CGRect _panBeginSpriteViewFrame;
    _Bool _isVIPCard;
    NSString *_coverUrl;
    double _elapsedTime;
    _Bool _isSlideInToMessageTab;
    UIPanGestureRecognizer *_panGesture;
    id <DrawerViewPanGestureDelegate> _panDelegate;
    UIControl *_control;
}

+ (id)getInstance;
+ (_Bool)isNeedUseWhiteIcon;
- (void).cxx_destruct;
- (void)checkHintForMyInfo:(id)arg1;
- (void)checkHintForTab;
- (id)contentsViewController;
@property(retain, nonatomic) UIControl *control; // @synthesize control=_control;
- (id)controlInit;
- (void)coverUpdateNotification:(id)arg1;
- (void)dealloc;
- (void)destroyContentsViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleThemeChangeNotification;
- (id)init;
@property(readonly, nonatomic) _Bool isAnimating;
@property(nonatomic) _Bool isSlideInToMessageTab; // @synthesize isSlideInToMessageTab=_isSlideInToMessageTab;
@property(readonly, nonatomic) _Bool isSlideOut;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadMySummaryCover;
- (_Bool)loadNormalCard;
- (void)loadVIPSummaryCard:(CDUnknownBlockType)arg1;
- (void)loadView;
- (void)onLoginSuccess;
- (void)onPanGestureTriggered:(id)arg1;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)onSlideInComplete;
@property(nonatomic) __weak id <DrawerViewPanGestureDelegate> panDelegate; // @synthesize panDelegate=_panDelegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(readonly, nonatomic) struct CGRect portraitBounds;
- (id)redPointTableView;
- (void)registerCellCallBack:(id)arg1;
- (void)reloadAppearance;
- (void)reloadCell:(id)arg1;
- (void)requestVIPCard;
- (void)setTabController:(id)arg1;
- (void)slideIn;
- (void)slideInByClick;
- (void)slideInByGesture;
- (void)slideOut;
- (void)slideOutByClick;
- (void)slideOutByGesture;
- (void)startNavBarAnim:(id)arg1;
- (void)statusBarFrameDidChanged;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 redPointPathForIndex:(id)arg2;
- (void)unregisterCellCallBack:(id)arg1;
- (void)updateCoverModel:(id)arg1;
- (void)updateCoverUrl:(id)arg1 isVIPCard:(_Bool)arg2;
- (void)viewDidLoad;
- (int)viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
