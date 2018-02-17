//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "IIncrUpdateDelegate.h"
#import "ISynInfoService.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SynInfoSvrProfileRequest;

@interface SynInfoServiceImpl : NSObject <IIncrUpdateDelegate, ISynInfoService, IEngineDispatchDelegate>
{
    NSMutableArray *_incrUpdDataArr;
    NSMutableArray *_pushUpdDataArr;
    NSMutableDictionary *_updateTimeStamps;
    _Bool _bModifyNick;
    _Bool _bRefreshFriList;
    _Bool _bRefreshGrpList;
    NSMutableArray *_faceChangeArr;
    NSMutableArray *_groupFaceChangeArr;
    NSMutableDictionary *_delegatTypeDic;
    NSMutableArray *_dataArr;
    _Bool _bNeedRetry;
    SynInfoSvrProfileRequest *profileRequest;
    NSString *myUin;
    NSObject<OS_dispatch_queue> *_fetch_valuebit_queue;
    NSObject<OS_dispatch_queue> *_timeArrQueue;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)addIncreasedUpdData:(id)arg1;
@property(nonatomic) _Bool bNeedRetry; // @synthesize bNeedRetry=_bNeedRetry;
- (void)changeAccount:(id)arg1;
- (_Bool)checkSynInfoEnumIn:(int)arg1;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)fetchValueBit;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetch_valuebit_queue; // @synthesize fetch_valuebit_queue=_fetch_valuebit_queue;
- (id)getDelegate:(int)arg1;
- (int)getIncrUpdateType:(int)arg1 pAvailable:(_Bool *)arg2 pCOpertype:(int *)arg3;
- (id)getIncreasedUpdDataArray;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2;
- (int)getSTServiceID:(int)arg1 pAvailable:(_Bool *)arg2 pCOpertype:(int *)arg3;
- (id)getTimeStamps;
- (void)handleIncUpdateDelegate:(int)arg1 pReqInfo:(vector_0d97c84e *)arg2 seqId:(int)arg3;
- (_Bool)handlingProfilePBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
@property(retain, nonatomic) NSMutableArray *incrUpdDataArr; // @synthesize incrUpdDataArr=_incrUpdDataArr;
- (id)init;
- (_Bool)isVipOpened1:(unsigned int)arg1;
- (void)loadTimeStamps;
- (void)mergeRefresh;
@property(retain, nonatomic) NSString *myUin; // @synthesize myUin;
- (void)notifyError:(id)arg1;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3;
@property(retain, nonatomic) SynInfoSvrProfileRequest *profileRequest; // @synthesize profileRequest;
- (void)removeAlIncrUpdDataArray;
- (void)removeAllTimeStamps;
- (void)removeDelegateForIncrUpdateType:(int)arg1;
- (void)requestExclusiveIncUpdate:(_Bool)arg1 includeArray:(id)arg2;
- (void)requestIncreasedUpdate;
- (void)respIncreasedUpdate:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)respIncreasedUpdateOnThread:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)respPushUpdate:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)saveTimeStamps;
- (void)saveTimestamps:(int)arg1 from:(_Bool)arg2;
- (void)setDelegate:(id)arg1 IncrUpdateType:(int)arg2;
- (void)setRetry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timeArrQueue; // @synthesize timeArrQueue=_timeArrQueue;
- (void)setTimeStamps:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *updateTimeStamps; // @synthesize updateTimeStamps=_updateTimeStamps;
- (void)synIncreasedDataToModels;
- (void)synPushDataToModels;
- (void)updateCommonGroup:(id)arg1;
- (void)updateDiscussMember:(id)arg1;
- (void)updateFriendApolloProperty:(id)arg1 uin:(id)arg2 type:(int)arg3;
- (void)updateFriendColorRingIdProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateFriendFaceAddonIdProperty:(long long)arg1 uin:(id)arg2;
- (void)updateFriendGameAppIdProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateFriendGameIconShowFlagProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateFriendGameLastLoginTimeProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateFriendGameRankProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateFriendMagicFontOpenFlagProperty:(short)arg1 uin:(id)arg2;
- (void)updateFriendNickProperty:(id)arg1 uin:(id)arg2;
- (void)updateFriendRemarkProperty:(id)arg1 uin:(id)arg2;
- (void)updateFriendSexProperty:(id)arg1 uin:(id)arg2;
- (void)updateFriendVipFontIdProperty:(unsigned int)arg1 uin:(id)arg2;
- (void)updateSystemAvatar;
- (void)updateUI_incrUpd;
- (void)updateUI_pushUpdate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
