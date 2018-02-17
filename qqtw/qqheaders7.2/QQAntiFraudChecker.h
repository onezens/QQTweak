//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSMutableDictionary, NSString;

@interface QQAntiFraudChecker : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_dictBannerCache;
    NSMutableDictionary *_dictAddFriendCache;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)addEntry:(struct tagAntiFraudCacheEntry)arg1 forKey:(id)arg2 ByCmd:(int)arg3;
- (void)checkFraudWithUin:(unsigned int)arg1 ByCmd:(int)arg2;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (unsigned char)flagOfUin:(unsigned int)arg1 ByCmd:(int)arg2;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)postNotificationWithUin:(id)arg1 andFlag:(id)arg2 ByCmd:(int)arg3;
- (_Bool)queryCacheForUin:(unsigned int)arg1 ByCmd:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
