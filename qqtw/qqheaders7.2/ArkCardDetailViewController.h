//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQFriendSelectedViewControllerDelegate.h"

@class ArkCardModel, ArkUIView, NSMutableArray, NSMutableDictionary, NSString, QQFriendSelectedViewController, UIBarButtonItem;

@interface ArkCardDetailViewController : QQViewController <QQFriendSelectedViewControllerDelegate>
{
    ArkCardModel *_currentCardModel;
    NSMutableArray *_appViewControllers;
    ArkUIView *_currentArkView;
    QQFriendSelectedViewController *_friendSelectedViewController;
    NSMutableDictionary *_titles;
    UIBarButtonItem *_rightBarButton;
    id <UIGestureRecognizerDelegate> _oldInteractivePopGestureDelegate;
}

- (void).cxx_destruct;
- (void)ResetLeftButton;
@property(retain, nonatomic) NSMutableArray *appViewControllers; // @synthesize appViewControllers=_appViewControllers;
- (void)asyncCreateArkViewWithData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)back;
- (void)backButtonTaped:(id)arg1;
- (_Bool)checkShareMenuShow:(id)arg1 cardModel:(id)arg2;
- (void)closeArkView:(id)arg1;
- (void)closeButtonTaped:(id)arg1;
@property(retain, nonatomic) ArkUIView *currentArkView; // @synthesize currentArkView=_currentArkView;
- (void)dealloc;
- (void)dismissFriendsSelectViewController;
@property(retain, nonatomic) QQFriendSelectedViewController *friendSelectedViewController; // @synthesize friendSelectedViewController=_friendSelectedViewController;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)goWithData:(id)arg1;
- (id)initWithData:(id)arg1;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> oldInteractivePopGestureDelegate; // @synthesize oldInteractivePopGestureDelegate=_oldInteractivePopGestureDelegate;
- (void)removeViewController:(id)arg1;
- (void)reportButtonTapedWithOperationType:(unsigned long long)arg1;
- (void)resetRightBarButton:(_Bool)arg1;
@property(retain, nonatomic) UIBarButtonItem *rightBarButton; // @synthesize rightBarButton=_rightBarButton;
- (void)setShareMenuState:(_Bool)arg1 arkView:(id)arg2;
- (void)setTitle:(id)arg1 forArkView:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *titles; // @synthesize titles=_titles;
- (void)shareArkApp;
- (void)shareButtonTaped:(id)arg1;
- (void)shareToFriendCancelled;
- (void)shareToFriendSuccess;
- (void)showViewController:(id)arg1;
- (void)updateTitle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

