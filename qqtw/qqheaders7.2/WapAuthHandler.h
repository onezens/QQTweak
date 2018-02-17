//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"
#import "WXUIWebViewControllDelegate.h"

@class NSString, SendAuthReq, WXUIWebViewControll;

@interface WapAuthHandler : NSObject <WXUIWebViewControllDelegate, UIAlertViewDelegate>
{
    WXUIWebViewControll *_webViewController;
    NSString *_appId;
    unsigned long long _timeStamp;
    SendAuthReq *_sendAuthReq;
    id <WXApiDelegate> _delegate;
    _Bool _running;
}

+ (id)shareWapAuthHandlerInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)beginWapAuth:(id)arg1 currentVC:(id)arg2 appId:(id)arg3 delegate:(id)arg4;
- (void)cancelWapOAuth;
- (void)dealloc;
- (_Bool)endWapAuth;
- (id)getMobileCheckUrl;
- (id)getWebViewController;
- (_Bool)handleWapOAuthOpenUrl:(id)arg1;
- (id)init;
- (void)onCancelOAuthWebView;
- (void)onHiddenLeftBar;
- (void)onShowLeftBar;
- (id)parseURLParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
