//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol IQSRegEngineObserver <NSObject>

@optional
- (void)notifyCommitInfoResponse:(NSDictionary *)arg1;
- (void)notifyCommitNickAndPwdResponse:(NSDictionary *)arg1;
- (void)notifyCommitPhoneCodeResponse:(NSDictionary *)arg1;
- (void)notifyCommitSmsCodeResponse:(NSDictionary *)arg1;
- (void)notifyQueryUpSmsStatResponse:(NSDictionary *)arg1;
- (void)notifyQuickRegAccountResponse:(NSDictionary *)arg1;
- (void)notifyQuickRegCheckResponse:(NSDictionary *)arg1;
- (void)notifyRegReqFailed:(NSDictionary *)arg1;
- (void)notifyRegReqFailedJumpUrl:(NSDictionary *)arg1;
- (void)notifyRequestResendSMSCodeResponse:(NSDictionary *)arg1;
- (void)notifyWTLoginBindResponse:(NSDictionary *)arg1;
- (void)notifyWTLoginReBindResponse:(NSDictionary *)arg1;
@end
