//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISCBusinessCallback.h"
#import "ISCListenerCallback.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EmojiAssociateStore : NSObject <ISCListenerCallback, ISCBusinessCallback>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_cloudKeyWords;
    NSMutableDictionary *_cloudEmojiCache;
    NSMutableDictionary *_historyCache;
    NSMutableDictionary *_cloudRequestTimeCache;
    _Bool isOpenCloudSearh;
    _Bool finishLoading;
}

+ (id)GetInstance;
+ (id)cloudEmojiCachePath;
+ (id)historyEmojiCachePath;
+ (id)keywordConfigPath;
- (id)_init;
- (void)addHistoryEmoji:(id)arg1;
- (_Bool)canUpdate:(unsigned long long)arg1 scid:(id)arg2 from:(id)arg3;
- (_Bool)checkCloudKeywordTimeIsOK:(id)arg1;
- (void)clearAllInfo;
- (void)dealCloudKeyWords:(id)arg1;
- (void)dealCloudKeyWordsFile:(_Bool)arg1;
- (void)dealWithEmojiInfokeyword:(id)arg1 show:(id)arg2 allEmojiInfos:(id)arg3 clearFlag:(_Bool)arg4 selectID:(id)arg5 historys:(id)arg6;
- (void)dealloc;
- (_Bool)deleteFiles:(unsigned long long)arg1 scid:(id)arg2;
- (id)getEmojiAssociateQueue;
- (_Bool)getItem:(unsigned long long)arg1 scid:(id)arg2 info:(id)arg3;
- (void)initializeKeyWordData;
- (_Bool)isFileExists:(unsigned long long)arg1 scid:(id)arg2;
- (void)onCompleted:(unsigned long long)arg1 scid:(id)arg2 cfgScid:(id)arg3 from:(id)arg4 result:(int)arg5 httpcode:(int)arg6;
- (void)onVipChange;
- (id)queryEmojiAssociateResult:(id)arg1;
- (void)saveCloudEmoji;
- (void)saveHistoryEmoji;
- (void)saveRequestTime;
- (void)setCloudKeywordTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
