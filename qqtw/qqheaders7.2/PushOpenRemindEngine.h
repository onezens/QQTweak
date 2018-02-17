//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SimpleAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIWindow;

@interface PushOpenRemindEngine : NSObject <SimpleAlertViewDelegate, UIAlertViewDelegate>
{
    NSMutableDictionary *_settingDic;
    NSObject<OS_dispatch_queue> *_queue;
    UIWindow *_alertWindow;
}

+ (id)shareInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)buttonClick:(id)arg1 atIndex:(int)arg2;
- (_Bool)checkNeedShowAlert;
- (_Bool)checkPushSettings;
- (void)closeAlert;
- (void)doCloseAlert;
- (void)downloadImageRes;
- (id)getAlertText;
- (_Bool)getIsOpen;
- (long long)getLastShowTime;
- (id)getResPath;
- (double)getSettingSysVer;
- (unsigned int)getShownCount;
- (void)gotoSysPushSetting;
- (id)init;
- (id)loadResources;
- (void)loadSetting;
- (void)onSettingUpdate:(id)arg1;
- (void)saveSetting;
- (void)setLastShowTime:(long long)arg1;
- (void)setShownCount:(unsigned int)arg1;
- (void)showAlert:(id)arg1;
- (void)showOpenPushRemindAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
