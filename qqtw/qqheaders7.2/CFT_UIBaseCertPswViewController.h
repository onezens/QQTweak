//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UICustomNaviBarViewController.h"

#import "TenpaySecureCtrlDelegate.h"

@class CFT_TenpayPswCtrl, NSString, UIButton, UILabel;

@interface CFT_UIBaseCertPswViewController : CFT_UICustomNaviBarViewController <TenpaySecureCtrlDelegate>
{
    CFT_TenpayPswCtrl *_pswCtrl;
    UILabel *_tipLabel;
    UIButton *_nextBtn;
    _Bool _is6Psw;
}

- (void)forgetPswBtnClicked;
- (id)init;
- (void)nextBtnClicked;
- (void)tenpayCtrlShouldChange:(id)arg1;
- (void)tenpayCtrlShouldReturn:(id)arg1;
- (void)timeseed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

