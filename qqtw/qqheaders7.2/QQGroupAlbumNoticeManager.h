//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSCache, NSMutableDictionary, NSString;

@interface QQGroupAlbumNoticeManager : NSObject <IEngineDispatchDelegate>
{
    NSMutableDictionary *_groupAlbumNoticeDict;
    CDUnknownBlockType _block;
    NSMutableDictionary *_groupFileNoticeDict;
    NSMutableDictionary *_groupBBSNoticeDict;
    NSMutableDictionary *_groupBulletinNoticeDict;
    NSMutableDictionary *_groupActivitiesNoticeDict;
    NSMutableDictionary *_groupExtraAppsNoticeDict;
    NSMutableDictionary *_groupNoticeCenterNoticeDict;
    NSCache *_tribeFeedRedPointDictionary;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (unsigned long long)byteswap_uint64:(unsigned long long)arg1;
- (void)clearGroupAlbumNoticeDict;
- (void)clearTribeFeedRedPointCache;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (int)getGroupAlbumNotice:(id)arg1 then:(CDUnknownBlockType)arg2;
- (int)getUnreadCount:(id)arg1 FromGroupAppID:(int)arg2;
- (void)handleGroupAlbumNoticePush:(const void *)arg1 DataLen:(int)arg2;
- (void)handleGroupEnterEffectPushMessage:(const basic_string_075b6133 *)arg1;
- (void)handleGroupNoticeCenterDelFeedsPush:(struct MsgBody *)arg1;
- (_Bool)hasGroupNoticeCenterRedPoint:(id)arg1;
- (_Bool)hasRedPoint:(id)arg1;
- (id)init;
- (void)notifyError:(id)arg1;
- (void)onLoginSuccess;
- (void)parseNhandleGroupAlbumNotice:(const void *)arg1:(int)arg2 seq:(int)arg3;
- (int)reqGroupAlbumNotice:(id)arg1;
- (int)sendGroupRedPointRequest:(long long)arg1 applist:(id)arg2;
- (int)sendGroupRedPointRequest:(long long)arg1 applist:(id)arg2 serviceType:(int)arg3;
- (void)setUnreadCount:(int)arg1 withGroupCode:(id)arg2 appID:(int)arg3;
- (_Bool)trySetGroupExtraAppCount:(unsigned long long)arg1 appid:(unsigned long long)arg2 count:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

