//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QQActivateFriendsModel, QQPbMsgSenderBase;

@interface QQActivateFriendsEngine : NSObject
{
    QQActivateFriendsModel *_currentFriendsModel;
    NSMutableDictionary *_dicFriendsModels;
    QQPbMsgSenderBase *_messageSender;
    NSMutableDictionary *_tmpFriendsStorage;
    int _xo;
    long long _birPushType;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)ActionSendMessgae;
@property(nonatomic) long long birPushType; // @synthesize birPushType=_birPushType;
@property(retain, nonatomic) QQActivateFriendsModel *currentFriendsModel; // @dynamic currentFriendsModel;
- (id)currentFriendsModelCopyFromEngine;
- (void)deleteCurrentFriendsModel;
- (id)friendNickInCurrentFriendsModelForUin:(long long)arg1;
- (id)friendNickNameForUin:(long long)arg1;
- (id)friendsModelForUin:(long long)arg1;
- (void)insertToMessageList:(id)arg1;
- (_Bool)isInTodayWithCurTime:(double)arg1 lastTime:(double)arg2;
- (id)loadFriendsModelFromDiskForUin:(long long)arg1;
- (void)markCurrentFriendsModelNotifyReaded;
- (void)markMessageType:(long long)arg1 hasBeenSendedToFriends:(id)arg2;
- (void)markPresentsSentToFriends:(id)arg1;
- (id)messageModelForMessageSting:(id)arg1 messageData:(id)arg2 friendModel:(id)arg3;
- (id)notifyTypeListForCurrentFriendsModel;
- (void)pokeServerForBirthdayBlessing:(_Bool)arg1 isSwitch:(_Bool)arg2;
- (void)privateReqSendBirthdayBlessingString:(id)arg1 blessingData:(id)arg2 giftID:(unsigned int)arg3 toFriends:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)receivedDeleteAccountNotification:(id)arg1;
- (void)receivedProfileInfoNotification:(id)arg1;
- (void)refreshCurrentFriendsModelWith:(id)arg1;
- (void)registerNotification;
- (id)reminderRequestItemForString:(id)arg1 data:(id)arg2 giftID:(unsigned int)arg3 arFriends:(id)arg4;
- (void)reportReadNotify:(id)arg1;
- (void)reportReceivedPush:(id)arg1;
- (void)reqSendBirthdayBlessingString:(id)arg1 blessingData:(id)arg2 giftID:(unsigned int)arg3 toFriends:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)reqSendGeogMessageString:(id)arg1 blessingData:(id)arg2 toFriends:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reqSendMutiC2CMessageString:(id)arg1 messageData:(id)arg2 toFriends:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)respActivateFriendsBufferData:(const void *)arg1 dataLen:(long long)arg2 msgSeq:(unsigned int)arg3 fromUin:(unsigned long long)arg4;
- (void)respReadReportBufferData:(const void *)arg1 dataLen:(long long)arg2 msgSeq:(unsigned int)arg3;
- (void)saveFriendsModelToDisk:(id)arg1;
- (_Bool)setModel:(id)arg1 parseFromMsgBody:(struct MsgBody *)arg2;
- (long long)unreadCountForCurrentFriendsModel;
- (long long)unreadCountForNotifyTypeInCurrentFriendsModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *dicFriendsModels; // @dynamic dicFriendsModels;
@property(retain, nonatomic) QQPbMsgSenderBase *messageSender; // @dynamic messageSender;
@property(retain, nonatomic) NSMutableDictionary *tmpFriendsStorage; // @dynamic tmpFriendsStorage;

@end

