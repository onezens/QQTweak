//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSDictionary, NSMutableDictionary, NSString, QQMessageModel;

@interface QQWeatherPublicAccountEngine : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_swithHistory;
    unsigned int _cmdType;
    NSDictionary *_switchInfo;
    int _xo;
    long long _latestMsg;
    QQMessageModel *_recentUnReadMsg;
    NSMutableDictionary *_recentAdInfo;
}

+ (id)menuForPublicAccount;
+ (id)sharedInstance;
+ (_Bool)weatherPublicAccount:(id)arg1;
+ (_Bool)weatherPublicPlatformXml:(id)arg1;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)cmdStringForType:(long long)arg1 info:(id)arg2;
- (void)confirmLocationChange;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)init;
- (id)insertXml:(id)arg1 behindItem:(id)arg2 withItem:(id)arg3;
- (void)lanchWeatherInfoShow;
@property(nonatomic) long long latestMsg; // @synthesize latestMsg=_latestMsg;
- (void)notifyError:(id)arg1;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (void)onADInfo:(id)arg1;
- (void)onSwitchPlace:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recentAdInfo; // @synthesize recentAdInfo=_recentAdInfo;
@property(retain, nonatomic) QQMessageModel *recentUnReadMsg; // @synthesize recentUnReadMsg=_recentUnReadMsg;
- (void)replaceMessageInfo:(id)arg1;
- (id)replaceXml:(id)arg1 Item1:(id)arg2 item2:(id)arg3 withItem:(id)arg4;
- (void)requestADInfo;
- (void)requestDefaultInfo;
- (void)requestGetLocation;
- (int)requestGetWeatherMessage:(unsigned long long)arg1 lat:(unsigned int)arg2 lng:(unsigned int)arg3 area:(unsigned int)arg4 source:(unsigned int)arg5 flag:(unsigned int)arg6 extra:(id)arg7;
- (void)requestInitialWeatherInfo;
- (void)requestLocationDetermin;
- (void)requestReportExposeAd:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

