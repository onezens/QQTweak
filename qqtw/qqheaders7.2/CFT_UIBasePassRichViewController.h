//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "TenpaySecureCtrlDelegate.h"
#import "UIAlertViewDelegate.h"

@class CFT_TPPersonalityResManager, CFT_TenpayPswCtrl, CFT_UIGroupStyleView, CFT_UILinePassGroupView, NSArray, NSDictionary, NSString, UIButton, UIControl, UIImageView, UILabel, UIView;

@interface CFT_UIBasePassRichViewController : CFT_UIBaseRichViewController <UIAlertViewDelegate, TenpaySecureCtrlDelegate>
{
    CFT_UIGroupStyleView *group_t1;
    CFT_UILinePassGroupView *linePassGroup;
    UIControl *btnSelect_;
    UILabel *labelSelBankname_;
    UIView *redPoint;
    UILabel *labelSelBankTail_;
    UIImageView *imgViewSelBankArrow;
    UIImageView *imgViewSelBankIcon;
    UILabel *labelInputPassTips_;
    CFT_TenpayPswCtrl *pPassword_;
    UIButton *btnForgetPass_;
    UIButton *btnNext;
    _Bool is6Psw;
    _Bool isShowPayByFriend;
    UIButton *payByFriendBtn;
    _Bool isShowPersonaliseView;
    _Bool isPersonaliseOn;
    _Bool isNOPwd;
    NSString *userType;
    NSDictionary *pfa_param;
    UIImageView *imgHeadView;
    CFT_TPPersonalityResManager *_personalityManager;
    NSArray *_pBankArray;
}

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)checkFirstResponder;
- (void)dealloc;
- (void)forgetPassClick:(id)arg1;
- (void)initUI;
- (void)layoutSubviewsOnView;
- (void)nextButtonClick:(id)arg1;
@property(retain, nonatomic) NSArray *pBankArray; // @synthesize pBankArray=_pBankArray;
- (void)payByFriendBtnClick;
- (void)resetPswFinish:(id)arg1;
- (void)selectBankClick;
- (void)setSelectIndex:(long long)arg1;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)textFiledReturnEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

