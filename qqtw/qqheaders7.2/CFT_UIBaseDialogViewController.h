//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

@class CFT_UIDialogNavigationController, UIButton, UIImageView;

@interface CFT_UIBaseDialogViewController : CFT_UICustomNaviBarViewController
{
    UIButton *closeButton;
    UIImageView *_backgroundImageView;
    CFT_UIDialogNavigationController *_naviController;
}

- (void)checkFirstResponder;
- (void)closeButtonClick:(id)arg1;
- (void)dealloc;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)layoutSubviewsOnView;
- (void)leftButtonClick:(id)arg1;
@property(nonatomic) CFT_UIDialogNavigationController *naviController; // @synthesize naviController=_naviController;
- (id)navigationController;
- (void)nextButtonClick:(id)arg1;
- (void)onBackgroundTapped;
- (void)popTPViewController:(_Bool)arg1;
- (void)pushTPViewController:(id)arg1 animated:(_Bool)arg2;
- (void)removeLoadingView;
- (void)setNextButtonHidden:(_Bool)arg1;
- (void)setScene:(int)arg1;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showLoadingWithDefault;
- (void)showLoadingWithTextDefault:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

