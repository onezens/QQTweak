//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseTabViewController.h"

#import "QQTransferAccountFinishDelegate.h"
#import "TPADViewDelegate.h"
#import "TPPayCodeManagerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class CFT_TPADView, CFT_TPPersonalityResManager, CFT_UIQQTransferAccountViewController, NSDictionary, NSString;

@interface CFT_UIPayCodeGuideViewController : CFT_UIBaseTabViewController <UIAlertViewDelegate, TPPayCodeManagerDelegate, QQTransferAccountFinishDelegate, UIActionSheetDelegate, TPADViewDelegate>
{
    CFT_UIQQTransferAccountViewController *_qqTransferVC;
    _Bool _isshowAdView;
    CFT_TPPersonalityResManager *_personalResManager;
    _Bool _isFromPayCode;
    _Bool _isGotoOpenPayCodeView;
    NSString *_qqSkey;
    NSString *_qqSkeyType;
    NSString *_uin;
    NSString *_comeFrom;
    NSString *_appInfo;
    CFT_TPADView *_adView;
    NSDictionary *_adconfig;
}

@property(nonatomic) CFT_TPADView *adView; // @synthesize adView=_adView;
@property(copy, nonatomic) NSDictionary *adconfig; // @synthesize adconfig=_adconfig;
@property(retain, nonatomic) NSString *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSString *comeFrom; // @synthesize comeFrom=_comeFrom;
- (void)dealloc;
@property(nonatomic) _Bool isFromPayCode; // @synthesize isFromPayCode=_isFromPayCode;
@property(nonatomic) _Bool isGotoOpenPayCodeView; // @synthesize isGotoOpenPayCodeView=_isGotoOpenPayCodeView;
@property(retain, nonatomic) NSString *qqSkey; // @synthesize qqSkey=_qqSkey;
@property(retain, nonatomic) NSString *qqSkeyType; // @synthesize qqSkeyType=_qqSkeyType;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

