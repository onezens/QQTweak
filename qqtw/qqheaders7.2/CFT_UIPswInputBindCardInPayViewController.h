//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIPswInputViewController.h"

@class NSString;

@interface CFT_UIPswInputBindCardInPayViewController : CFT_UIPswInputViewController
{
    NSString *verifyCode;
}

- (void)dealloc;
- (void)leftButtonClick:(id)arg1;
- (void)nextStep:(id)arg1;
- (void)qpay_itg_verify;
@property(retain, nonatomic) NSString *verifyCode; // @synthesize verifyCode;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
