//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAsyncCallbackProtocol.h"
#import "IQQMessageProcessor.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer;

@interface QQTroopMsgManager : NSObject <DBAsyncCallbackProtocol, IQQMessageProcessor>
{
    NSTimer *_timer;
    NSMutableArray *_GroupList;
    int _SendNum;
    _Bool _timeOut;
    NSMutableArray *_TroopMsgArray;
    _Bool _isGetPushMsg;
    NSMutableDictionary *_GroupSeqRecord;
    int _SoundTimeStamp;
    NSMutableDictionary *_GroupFileMsgCache;
    NSString *_cacheGroupFileMsgPath;
}

+ (id)GetInstance;
+ (id)getGroupMsgNickName:(id)arg1;
+ (id)refreshGroupMsgNickName:(id)arg1;
- (void)Action:(id)arg1;
- (void)ActionGetTroopMsg:(id)arg1;
- (void)ActionGetTroopMsgTimeOut;
- (void)ActionPushTroopMsg:(id)arg1;
- (void)AsyncSaveMessageToDB:(id)arg1 target:(id)arg2 userdata:(id)arg3;
- (void)CacheTroopMsg:(id)arg1;
- (void)CacheTroopMsgList:(id)arg1;
- (void)InsertMsg:(id)arg1 withGroupUin:(unsigned long long)arg2;
- (void)SaveDataToDataBase:(id)arg1;
- (void)SaveDataToDataBase:(id)arg1 playSound:(_Bool)arg2;
- (void)SaveFailedMsgToDataBase:(id)arg1 playSound:(_Bool)arg2;
- (void)SaveMessageToDB:(id)arg1;
- (void)_saveDataToDataBase:(id)arg1 playSound:(_Bool)arg2 checkContinuity:(_Bool)arg3;
- (void)changeAccount;
- (_Bool)checkContinuty:(id)arg1;
- (void)dealloc;
- (void)enterBackGround;
- (id)filterBlankMsg:(id)arg1;
- (int)getMaxMsgSeq:(unsigned long long)arg1;
- (id)init;
- (_Bool)isAllUnVisableMsg:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (id)processMsgEncapsulation:(id)arg1;
- (void)processSpecialMessage:(id)arg1;
- (void)readyForMessage;
- (void)saveGroupMsgToDBSilently:(id)arg1;
- (void)timeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
