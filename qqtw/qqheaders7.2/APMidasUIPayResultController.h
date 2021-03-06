//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "QQActionLabelDelegate.h"
#import "QQWalletPubaccManagerDelegate.h"
#import "UIAlertViewDelegate.h"

@class APMidasBizManager, APMidasPublicAcctView, APMidasUIItemView, NSString, QQActionLabel, UIImageView, UILabel, UIView;

@interface APMidasUIPayResultController : QQViewController <QQActionLabelDelegate, UIAlertViewDelegate, QQWalletPubaccManagerDelegate>
{
    APMidasBizManager *bizManager;
    UIImageView *_resultIcon;
    UILabel *_resultMsgLb;
    APMidasUIItemView *_nameItem;
    APMidasUIItemView *_priceItem;
    UIView *_btn;
    UIView *_detailBgView;
    UILabel *_customerServiceLb1;
    UILabel *_customerServiceLb2;
    QQActionLabel *_telLb;
    UIImageView *_waveBgIv;
    APMidasPublicAcctView *_pubAcctView;
    _Bool _needRequestPublicAcctInfo;
}

+ (id)payResultController;
- (id)GetCurrentTitle;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)layout;
- (void)loadView;
- (void)onBtnClicked;
- (void)onClose;
- (void)onContinue;
- (void)pubaccManagerDidDownloadImage:(id)arg1 error:(id)arg2;
- (void)reSetLeftButtonTitle;
- (void)requestPublicAcctInfo;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)touchActionWithType:(int)arg1 actionUrl:(id)arg2 title:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

