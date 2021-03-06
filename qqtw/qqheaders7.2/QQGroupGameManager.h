//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, QQLockDictionary, QQOIDBSSORequest, WerewolfInvitationViewController;

@interface QQGroupGameManager : NSObject
{
    QQOIDBSSORequest *_enterRoomRequest;
    QQOIDBSSORequest *_leaveRoomRequest;
    QQOIDBSSORequest *_inviteInfoRequest;
    QQOIDBSSORequest *_enterInviteRequest;
    QQOIDBSSORequest *_leaveInviteRequest;
    QQLockDictionary *_rolesInfo;
    NSMutableSet *_judgeUins;
    WerewolfInvitationViewController *_inviteViewController;
}

+ (id)parserHotChatModel:(struct WifiPOIInfo *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_enterInvateReqWithId:(id)arg1 param:(id)arg2;
- (void)_gotoInviteViewControllerWithParam:(id)arg1;
- (id)_inviteInfoSaveKey;
- (void)accountDidLogout;
- (void)addJudge:(id)arg1;
- (void)enterInvitationWithId:(id)arg1 param:(id)arg2;
- (void)enterRandomRoomWithType:(int)arg1 zoneId:(int)arg2;
- (void)enterRoomWithInviteId:(id)arg1 roomType:(int)arg2 zoneId:(int)arg3;
- (void)enterRoomWithInviteId:(id)arg1 roomType:(int)arg2 zoneId:(int)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (void)enterRoomWithParam:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)init;
@property(nonatomic) __weak WerewolfInvitationViewController *inviteViewController; // @synthesize inviteViewController=_inviteViewController;
- (_Bool)isJudgeOfUin:(id)arg1;
- (void)leaveInvateWithId:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)leaveRoomWithGroupCode:(unsigned long long)arg1;
- (void)leaveRoomWithGroupCode:(unsigned long long)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)requestInvite;
- (void)requestInviteInfoIfNeed;
- (id)roleOfPlayer:(unsigned long long)arg1 inGroup:(unsigned long long)arg2;
- (void)sendGameRoomPushData:(id)arg1 toGameOfType:(unsigned long long)arg2;
- (void)sendInvitationRoomPushData:(id)arg1 toGameOfType:(unsigned long long)arg2;
- (void)setGameRoomPlayerRoles:(id)arg1 ofGroupCode:(unsigned long long)arg2;

@end

