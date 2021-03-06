//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "TenpaySecureCtrlDelegate.h"
#import "UIAlertViewDelegate.h"

@class CFT_TenpayPswCtrl, CFT_UIGroupStyleView, NSString, UIButton, UILabel, UIView;

@interface CFT_UIBaseVerifyPassRichViewController : CFT_UIBaseRichViewController <UIAlertViewDelegate, TenpaySecureCtrlDelegate>
{
    UILabel *labPswTip;
    CFT_UIGroupStyleView *group_;
    UILabel *labelInputPassTips_;
    CFT_TenpayPswCtrl *pPassword_;
    UIButton *btnForgetPass_;
    UIView *yLine_;
    _Bool is6Psw_;
    NSString *_buss_info;
    NSString *_pass_type;
    NSString *_str_psw;
}

- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
@property(retain, nonatomic) NSString *buss_info; // @synthesize buss_info=_buss_info;
- (void)checkFirstResponder;
- (void)closeButtonClick:(id)arg1;
- (void)dealloc;
- (void)forgetPassClick:(id)arg1;
- (void)initUI;
- (void)layoutSubviewsOnView;
- (void)nextButtonClick:(id)arg1;
@property(retain, nonatomic) NSString *pass_type; // @synthesize pass_type=_pass_type;
- (void)resetPswFinish:(id)arg1;
@property(retain, nonatomic) NSString *str_psw; // @synthesize str_psw=_str_psw;
- (void)textFiledReturnEditing:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

