//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, NSTimer;

@interface QQPublicAccountMpPortalMgr : NSObject
{
    NSTimer *timer;
    int _currentNetworkState;
    int _currentMsfApnNetworkState;
    long long _groupId;
    NSString *_currentUploadVid;
    NSMutableDictionary *_configDicMpIsAdmin;
    NSMutableDictionary *_configDicMpNotifycation;
    NSMutableDictionary *_uploadSessions;
}

+ (id)GetInstance;
- (void)OnAccountLogout;
- (void)addUnCompletedTask:(id)arg1;
- (void)addUploadEngineforVid:(id)arg1 uploadEngine:(id)arg2;
- (void)cancelAllUploadTasks;
- (void)cancelCurrentUploadTask;
- (void)checkAndUploadUnCompleteTask;
- (void)checkNotifycation;
- (void)clearUnCompleteTask:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableDictionary *configDicMpIsAdmin; // @synthesize configDicMpIsAdmin=_configDicMpIsAdmin;
@property(retain, nonatomic) NSMutableDictionary *configDicMpNotifycation; // @synthesize configDicMpNotifycation=_configDicMpNotifycation;
- (void)dealloc;
- (long long)getGroupIDByQuery:(id)arg1;
- (long long)getLocalDicGroupIDByVid:(id)arg1;
- (id)getLocalDicVidByGroupID:(long long)arg1;
- (id)getSportLocalDicByGroupID:(long long)arg1;
- (void)getUnCompleteTask:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)getUnCompletedTaskVid;
- (_Bool)getUnReadMsg:(id *)arg1;
- (id)getUploadEngineforVid:(id)arg1;
- (void)getUploadStatus:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)getVidByQuery:(id)arg1;
- (void)getVideoInfo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasUploadingTask;
- (id)init;
- (_Bool)initMpPortal;
- (_Bool)isFlagAlreadyUploading;
- (_Bool)isMpAdminForCurrentUin;
- (_Bool)isPublicAccountMpEnable;
- (_Bool)isShowPublicAccountMpPlugin:(unsigned int)arg1;
- (void)onMSFNetworkApnStateNotification:(id)arg1;
- (void)pauseUploadVideo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)publicAccountUpdataMsgHandle:(id)arg1;
- (void)removeUnCompletedTask:(id)arg1;
- (void)removeUploadEngineforVid:(id)arg1;
- (void)resumeUploadVideo:(id)arg1;
- (void)setLocalDicGroupIDByVid:(id)arg1 groupID:(long long)arg2;
- (void)setLocalDicthumbDataByGroupID:(id)arg1 groupID:(long long)arg2;
- (void)setMpPortalMsgHaveRead;
- (void)setUploadFinishFlagWithType:(long long)arg1 type:(id)arg2 vid:(id)arg3;
@property(retain, nonatomic) NSMutableDictionary *uploadSessions; // @synthesize uploadSessions=_uploadSessions;
- (void)startCheckNotifycation;
- (void)stopCheckNotifycation;
- (void)stopUploadVideo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)uploadVideo:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)uploadVideoWithParam:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;

@end
