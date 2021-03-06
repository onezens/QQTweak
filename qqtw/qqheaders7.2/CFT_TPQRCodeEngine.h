//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_TPBaseEngine.h"

@class NSString;

@interface CFT_TPQRCodeEngine : CFT_TPBaseEngine
{
    int _expire_time;
    int _type;
    id <TPQRCodeDelegate> _parseDelegate;
    id <TPQRCodeDelegate> _reqQrcodeDelegate;
    NSString *_uin;
    NSString *_name;
    NSString *_transfer_authcode;
    long long _lastupdatetime;
}

- (void)cleanReqAuthCodeConfig:(id)arg1;
- (void)dealloc;
@property(nonatomic) int expire_time; // @synthesize expire_time=_expire_time;
- (id)getTransfer_authcode:(id)arg1;
- (id)init;
@property(nonatomic) long long lastupdatetime; // @synthesize lastupdatetime=_lastupdatetime;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) id <TPQRCodeDelegate> parseDelegate; // @synthesize parseDelegate=_parseDelegate;
- (id)parseUrl:(id)arg1;
- (id)qrImageForAuthcode:(id)arg1 forEntry:(id)arg2;
- (id)qrImageForAuthcode:(id)arg1 forEntry:(id)arg2 imagesize:(double)arg3 logosize:(double)arg4;
- (void)qr_code_generate;
- (void)qr_code_verify;
- (void)reqAuthcode:(id)arg1 uin:(id)arg2 skey:(id)arg3 skey_type:(id)arg4 name:(id)arg5 forEntry:(id)arg6;
- (void)reqAuthcode:(id)arg1 uin:(id)arg2 skey:(id)arg3 skey_type:(id)arg4 name:(id)arg5 transFee:(id)arg6 extend:(id)arg7 forEntry:(id)arg8;
- (void)reqAuthcodeNoTimeLimit:(id)arg1 uin:(id)arg2 skey:(id)arg3 skey_type:(id)arg4 name:(id)arg5 transFee:(id)arg6 extend:(id)arg7 forEntry:(id)arg8;
@property(nonatomic) id <TPQRCodeDelegate> reqQrcodeDelegate; // @synthesize reqQrcodeDelegate=_reqQrcodeDelegate;
- (void)reqVerifyAuthCode:(id)arg1 uin:(id)arg2 skey:(id)arg3 skey_type:(id)arg4;
- (void)saveTransfer:(id)arg1 authCode:(id)arg2;
@property(retain, nonatomic) NSString *transfer_authcode; // @synthesize transfer_authcode=_transfer_authcode;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;

@end

