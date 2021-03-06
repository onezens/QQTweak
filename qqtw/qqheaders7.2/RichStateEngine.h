//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "IIncrUpdateDelegate.h"
#import "IRichStatusSignatureService.h"
#import "RichStateServiceImplCallback.h"

@class NSArray, NSMutableDictionary, NSObject, NSObject<OS_dispatch_queue>, NSString, RichStateModel, RichStateReqManager, RichStateServiceImpl;

@interface RichStateEngine : QQModel <IRichStatusSignatureService, RichStateServiceImplCallback, IIncrUpdateDelegate>
{
    RichStateServiceImpl *_impl;
    RichStateReqManager *_requestManager;
    RichStateModel *_myRichState;
    NSMutableDictionary *_hotRichStateDictCache;
    NSMutableDictionary *_sameListSigDictCache;
    NSArray *_configModelsList;
    NSArray *_templyUINList;
    NSArray *_configGroupList;
    int _xo;
    NSObject *_myRichStateMutex;
    NSObject *_modelDictCacheMutex;
    NSString *_currentUIN;
    NSObject<OS_dispatch_queue> *_asynModelQueue;
    NSObject<OS_dispatch_queue> *_ioQueue;
    CDUnknownBlockType _levelAcclerationResponse;
    NSMutableDictionary *_modelDictCache;
}

+ (id)getInstance;
+ (_Bool)isEngineAvailable;
- (void).cxx_destruct;
- (_Bool)allFriendUINContainSelf;
- (void)asynGetRichStateSignatureByUIN:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asynGetRichStatusInfoTimeList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asynRequestGetAllFriendsRichSignatures:(CDUnknownBlockType)arg1;
- (void)asynRequestGetFriendRichSigArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncRequestGetFriendRichSigs:(id)arg1 sliceIndex:(int)arg2 sliceSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (int)calcChineseTextCount:(id)arg1;
- (void)changeAccount:(id)arg1;
- (void)checkNeedResetRichModelCache;
- (void)clearIconCache:(id)arg1;
- (void)clearRichModelCache:(unsigned long long)arg1;
- (void)clearRichStatusTodoConfigList;
- (void)dealloc;
- (void)delaySaveMyRichState;
- (void)delaySaveRichModelCache;
- (id)getAllFriendModelList;
- (id)getAllFriendUINList;
- (void)getModelDictCache:(CDUnknownBlockType)arg1;
- (id)getMovieListURL:(int)arg1 uin:(long long)arg2;
- (void)getReqPBBuffer:(char **)arg1 buffEnd:(char **)arg2 seqId:(int)arg3 type:(int)arg4;
- (id)getRichStateDetailURL:(id)arg1;
- (id)getRichStateIconUUID:(int)arg1;
- (id)getRichStateIconUUID:(int)arg1 dataID:(int)arg2;
- (id)getRichStateImage:(int)arg1;
- (id)getRichStateImage:(int)arg1 dataID:(int)arg2;
- (id)getRichStateModelByID:(int)arg1;
- (id)getRichStateSameSigByUIN:(unsigned long long)arg1;
- (id)getRichStateSignatureByUIN:(long long)arg1;
- (id)getRichStateTinyIcon:(int)arg1;
- (id)getRichStateTinyIconUUID:(int)arg1;
- (id)getRichStatusTodoConfigGroupList;
- (id)getRichStatusTodoConfigList;
@property(retain, nonatomic) NSMutableDictionary *hotRichStateDictCache; // @dynamic hotRichStateDictCache;
- (id)init;
- (void)initHotRichSateModel;
- (void)initializingMyRichState;
- (void)initializingRichStateModels;
- (id)loadHotRichStateModelCache;
- (id)loadMyRichState;
- (id)loadRichModelCache;
- (void)modelCacheCallBack:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *modelDictCache; // @synthesize modelDictCache=_modelDictCache;
@property(retain, nonatomic) RichStateModel *myRichState; // @dynamic myRichState;
- (void)notifyRespPBBuffer:(const void *)arg1 size:(int)arg2 result:(int)arg3 type:(int)arg4 seqId:(int)arg5;
- (void)onImageDownFinished:(id)arg1;
- (void)onImageDownloadError:(id)arg1;
- (void)onRequestDeleteRichHistoryCallback:(id)arg1;
- (void)onRequestDeleteRichSigCallback:(id)arg1;
- (void)onRequestGetHotRichStateCallback:(id)arg1;
- (void)onRequestGetRichHistoryListCallback:(id)arg1;
- (void)onRequestGetRichSigCallback:(id)arg1;
- (void)onRequestRichSyncShuoshuoCallback:(id)arg1;
- (void)onRequestSetRichSigCallback:(id)arg1;
- (void)onRequstGetLevelAccelerationCallBack:(long long)arg1 acceleration:(float)arg2;
- (void)onRequstGetLevelAccelerationError:(id)arg1;
- (id)parseIconDic:(id)arg1;
- (void)refactoringRichModel:(id)arg1 uin:(unsigned long long)arg2 dwTime:(int)arg3;
- (void)refactoringRichModelByBuffer:(const char *)arg1 length:(int)arg2 uin:(unsigned long long)arg3 dwTime:(int)arg4;
- (void)refactoringRichModelByData:(id)arg1 uin:(unsigned long long)arg2 dwTime:(int)arg3;
- (int)requestDelRichstateHistory:(_Bool)arg1 withArray:(id)arg2;
- (int)requestGetHotRichState;
- (int)requestGetRichSigWithoutCacheByUin:(id)arg1;
- (int)requestRichHistory:(long long)arg1 pageNum:(int)arg2 isFirstTime:(_Bool)arg3;
- (int)requestRichSyncShuoshuo:(_Bool)arg1 sync:(_Bool)arg2 syncOLD:(_Bool)arg3;
- (int)requestSetRichStatusSignature:(id)arg1 sourceID:(int)arg2;
- (void)resetRichModelCache;
- (void)saveHotRichModelCache:(id)arg1;
- (void)saveMyRichState:(id)arg1;
- (void)saveMyRichStateModel;
- (void)saveRichModelCache;
- (void)saveRichStateModels;
- (void)setRichStateSameSigByUIN:(unsigned long long)arg1 signatures:(id)arg2;
- (void)setUserLevelAcceleration:(long long)arg1 acceleration:(float)arg2;
- (id)synGetModelDictCache;
- (id)transformationFromBuffer:(const char *)arg1 size:(int)arg2;
- (void)updateAndSaveRichStateArray:(id)arg1;
- (void)updateRichModelCache:(unsigned long long)arg1 sig:(id)arg2;
- (void)updateRichStateLocally:(id)arg1;
- (void)updateRichStateSigByUINAndBroadCasting:(unsigned long long)arg1 time:(int)arg2 buffer:(const char *)arg3 length:(int)arg4;
- (id)wilderConversionMutaString:(id)arg1 actionID:(int)arg2 dataID:(int)arg3 name:(id)arg4 uin:(unsigned long long)arg5 sid:(id)arg6;

// Remaining properties
@property(retain, nonatomic) NSArray *configGroupList; // @dynamic configGroupList;
@property(retain, nonatomic) NSArray *configModelsList; // @dynamic configModelsList;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) RichStateServiceImpl *impl; // @dynamic impl;
@property(retain, nonatomic) RichStateReqManager *requestManager; // @dynamic requestManager;
@property(retain, nonatomic) NSMutableDictionary *sameListSigDictCache; // @dynamic sameListSigDictCache;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *templyUINList; // @dynamic templyUINList;

@end

