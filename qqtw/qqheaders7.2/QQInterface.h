//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQInterface : NSObject
{
}

+ (id)cardNameByUin:(id)arg1 groupCode:(id)arg2;
+ (id)filePathForPersonalize:(id)arg1 type:(unsigned long long)arg2;
+ (id)getDiscussGroupName:(id)arg1;
+ (id)getGroupName:(id)arg1;
+ (id)getMemberRemarkName:(id)arg1 memberUin:(id)arg2;
+ (id)getPSKEYStr:(id)arg1;
+ (id)getPubAccInfo:(id)arg1 sub:(id)arg2 bussId:(id)arg3 delegate:(id)arg4;
+ (id)getQQFriendNameByUin:(id)arg1;
+ (id)getQQFriendRemarkByUin:(id)arg1;
+ (id)getSKEYStr;
+ (int)getServerTime;
+ (id)getUIColorFromRGBStr:(id)arg1;
+ (id)getUinStr;
+ (_Bool)isNightModeThemeEnabled;
+ (_Bool)isUinAtFriendList:(id)arg1;
+ (_Bool)isWalletPersonalizeOpen;
+ (id)nickForStrangerWithUin:(id)arg1;
+ (id)preloadImageWithUrl:(id)arg1;
+ (id)preloadResourceFilePath:(id)arg1;
+ (id)readWalletRedEnvelopeConfigFromCache;
+ (void)reloadNavigationBar;
+ (id)safeTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 repeats:(_Bool)arg4;
+ (void)updateWalletPersonalizeState:(_Bool)arg1;
+ (_Bool)vipRedBagAuthorized;
+ (id)vipRedBagBgImage;
+ (_Bool)vipRedBagDisabled;
+ (id)vipRedBagPreviewInfoWithCompletion:(CDUnknownBlockType)arg1;
+ (id)vipRedBagStoreURL;
+ (id)walletConfigImageForURL:(id)arg1;

@end

