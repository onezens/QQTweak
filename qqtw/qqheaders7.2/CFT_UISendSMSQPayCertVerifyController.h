//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseSendSMSRichViewController.h"

#import "TPQpayCertManagerDelegate.h"

@class NSString;

@interface CFT_UISendSMSQPayCertVerifyController : CFT_UIBaseSendSMSRichViewController <TPQpayCertManagerDelegate>
{
    NSString *_p;
    NSString *_mobileNumer;
}

- (void)dealloc;
- (id)init;
- (void)installFinish:(id)arg1 resultCode:(int)arg2 quiet:(_Bool)arg3;
@property(retain, nonatomic) NSString *mobileNumer; // @synthesize mobileNumer=_mobileNumer;
- (void)nextButtonClick:(id)arg1;
@property(retain, nonatomic) NSString *p; // @synthesize p=_p;
- (void)qpay_gate;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

