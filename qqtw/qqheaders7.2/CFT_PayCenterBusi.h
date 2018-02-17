//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseSingleton.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface CFT_PayCenterBusi : BaseSingleton <UIAlertViewDelegate>
{
}

+ (void)cancelRequest;
+ (void)cancelRequest:(id)arg1;
+ (_Bool)checkRespondIllegal:(id)arg1 RespondInfo:(id)arg2;
+ (_Bool)checkRespondIllegal:(id)arg1 RespondInfo:(id)arg2 RespondTo:(id)arg3;
+ (id)creditcardId;
+ (id)curUin;
+ (id)getGuid;
+ (id)getPSkey;
+ (id)getPayDomain;
+ (id)getQQSkey;
+ (id)getQQSkeyType;
+ (id)getSkey;
+ (id)getSkeyType;
+ (_Bool)isSkeyValid;
+ (_Bool)isTrueName;
+ (_Bool)isTrueNameBy:(int)arg1;
+ (id)nickname;
+ (void)onServerOverloadFakeFinish:(id)arg1;
+ (id)passFlag;
+ (id)platformString;
+ (unsigned char)requestData:(id)arg1 param:(id)arg2 exParam:(id)arg3 scene:(int)arg4 sendTo:(id)arg5;
+ (unsigned char)requestData:(id)arg1 param:(id)arg2 scene:(int)arg3 sendTo:(id)arg4;
+ (id)requestLocalData:(id)arg1 param:(id)arg2 scene:(int)arg3;
+ (_Bool)requestSSOData:(id)arg1 param:(id)arg2 scene:(int)arg3 sendTo:(id)arg4;
+ (void)resetWalletCahche;
+ (void)sendHttpRequest:(id)arg1 busiData:(id)arg2 defaultPath:(id)arg3 queryPairs:(id)arg4 useSession:(unsigned char)arg5 needEncrypt:(unsigned char)arg6 domainScene:(int)arg7;
+ (void)sendHttpRequest:(id)arg1 busiData:(id)arg2 prefixPath:(id)arg3 queryPairs:(id)arg4 useSession:(unsigned char)arg5 needEncrypt:(unsigned char)arg6;
+ (void)sendHttpRequest:(id)arg1 busiData:(id)arg2 queryPairs:(id)arg3;
+ (void)sendHttpRequest:(id)arg1 busiData:(id)arg2 queryPairs:(id)arg3 useSession:(unsigned char)arg4;
+ (void)setLocalLogStatus:(id)arg1 forUin:(id)arg2;
+ (void)setPSkey:(id)arg1;
+ (void)setTestDomain:(id)arg1 forUin:(id)arg2;
+ (id)userAttr;
+ (id)userCardType;
+ (id)userName;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)onBusiRequestFinish:(id)arg1 RespondInfo:(id)arg2;
- (void)setQQUniConfif:(id)arg1 forUin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
