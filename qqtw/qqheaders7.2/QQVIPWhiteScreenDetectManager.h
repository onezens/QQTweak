//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IContentUpdateDelegate.h"
#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface QQVIPWhiteScreenDetectManager : NSObject <IContentUpdateDelegate, ISCListenerCallback, ISCBusinessCallback>
{
    NSString *_basicReportInfo;
    _Bool _shouldEnableWSD;
    NSString *_httpcode;
    NSString *_webLoadTime;
    NSString *_currentUrl;
    NSMutableDictionary *_configDic;
    NSArray *_webViewJavaScriptReportDomains;
    NSArray *_webViewMemoryReportDomains;
    NSArray *_whiteScreenDomains;
    NSDictionary *_sonicWhiteListConfig;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (void)clearWSDReportInfo;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
- (id)configJsonPath;
@property(retain, nonatomic) NSString *currentUrl; // @synthesize currentUrl=_currentUrl;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (void)downloadConfigFileIfNotExist;
- (id)getDomainListSuitableForSwitchToAio;
- (id)getDomainListSuitableForWebCore;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (id)getTimestamp:(id)arg1;
- (id)getUrlListSuitableForWebCore;
@property(retain, nonatomic) NSString *httpcode; // @synthesize httpcode=_httpcode;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (_Bool)isUrlMatchSonicWhiteListDomain:(id)arg1;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)reLoadConfigJson:(id)arg1;
- (void)reportWhiteScreenDataWithInfo:(id)arg1;
@property(nonatomic) _Bool shouldEnableWSD; // @synthesize shouldEnableWSD=_shouldEnableWSD;
@property(retain, nonatomic) NSDictionary *sonicWhiteListConfig; // @synthesize sonicWhiteListConfig=_sonicWhiteListConfig;
@property(retain, nonatomic) NSString *webLoadTime; // @synthesize webLoadTime=_webLoadTime;
@property(retain, nonatomic) NSArray *webViewJavaScriptReportDomains; // @synthesize webViewJavaScriptReportDomains=_webViewJavaScriptReportDomains;
@property(retain, nonatomic) NSArray *webViewMemoryReportDomains; // @synthesize webViewMemoryReportDomains=_webViewMemoryReportDomains;
@property(retain, nonatomic) NSArray *whiteScreenDomains; // @synthesize whiteScreenDomains=_whiteScreenDomains;
- (_Bool)shouldEnableSwitchToAio;
- (_Bool)shouldEnableWKCore;
- (_Bool)shouldEnableWSDForCurrentUser;
- (_Bool)shouldEnableWSDForUrl:(id)arg1;
- (_Bool)shouldEnableWebViewJavaScriptReportForUrl:(id)arg1;
- (_Bool)shouldEnableWebViewMemoryReportForUrl:(id)arg1;
- (_Bool)shouldEnableWhiteScreenDetect;
- (void)trySetHttpCode:(id)arg1 withUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

