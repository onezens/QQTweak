//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "ReadInJoyBBCircleViewDelegate.h"
#import "ReadInJoyNaviBarPageControlViewDeleage.h"
#import "ReadInJoyScrollViewDelegate.h"
#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"

@class HeadButtonLongPress, NSMutableArray, NSString, QQUnReadCountAnimationView, ReadInJoyBBCircleView, ReadInJoyNaviBarPageControlView, UIPageViewController;

@interface ReadInJoyPageViewController : QQViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, ReadInJoyNaviBarPageControlViewDeleage, ReadInJoyBBCircleViewDelegate, ReadInJoyScrollViewDelegate>
{
    QQUnReadCountAnimationView *mineRedPoint;
    _Bool fistAppearFromTab;
    _Bool firtEnterFromTab;
    ReadInJoyBBCircleView *bbCircleView;
    UIPageViewController *_pageViewController;
    NSMutableArray *_dataSource;
    HeadButtonLongPress *_headButton;
    ReadInJoyNaviBarPageControlView *_naviBarPageControlView;
}

- (void).cxx_destruct;
- (void)bbCricleNewMessage:(unsigned long long)arg1;
- (void)cleanBBCircle;
- (void)clickBottomTab;
- (id)currentVC;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
- (id)dataSourceDescription;
- (void)dealloc;
- (void)didBBCircleClick;
- (id)getPageControlView;
- (void)handleQQAccountLoginSucNotification:(id)arg1;
- (int)hasRedPointTabCount;
@property(retain, nonatomic) HeadButtonLongPress *headButton; // @synthesize headButton=_headButton;
- (void)hideBBCircle;
- (void)hideRightButtonRedPoint;
- (id)init;
@property(retain, nonatomic) ReadInJoyNaviBarPageControlView *naviBarPageControlView; // @synthesize naviBarPageControlView=_naviBarPageControlView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onHeadButtonClick;
- (void)onRightButtonClick;
- (void)onThemeChanged;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)readinjoyTabOut;
- (void)readinjoyTapIn;
- (void)refreshContentListWithInfo:(id)arg1;
- (void)refreshDataWithTagIndex:(int)arg1;
- (void)reportTabClickWithEventName:(id)arg1 CurIndex:(int)arg2;
- (void)resetTheme;
- (void)selectIndex:(unsigned long long)arg1 previousIndex:(unsigned long long)arg2;
- (void)setLeftTopAvatar;
- (void)setNavigationBar;
- (void)setPageViewControllerScrollEnable:(_Bool)arg1;
- (void)setSubPageViewController;
- (void)setupBBCircle;
- (void)showBBCircle;
- (void)showRightButtonRedPointWithNumber:(int)arg1;
- (id)tabWithType:(unsigned long long)arg1;
- (void)tagExposeWithRedpointReport;
- (void)videoCellDidSelect:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

