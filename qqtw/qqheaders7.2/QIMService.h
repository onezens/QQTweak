//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IIMService.h"
#import "IQQMessageProcessor.h"

@class NSMutableArray, NSRecursiveLock, NSString;

@interface QIMService : NSObject <IIMService, IQQMessageProcessor>
{
    NSMutableArray *_registerNoticationArray;
    NSRecursiveLock *_luck;
    NSMutableArray *_tmpRegisterNoticationArray;
}

+ (id)getInstance;
- (unsigned int)getGroupSendMessageRandom;
- (id)getIMEI;
- (id)getRegisterNotification;
- (_Bool)hasRegisterNotification;
- (id)init;
- (unsigned long long)notificationCount;
- (void)postAllRegisterNotification;
- (void)postRegisteNotification:(id)arg1 Object:(id)arg2 userInfo:(id)arg3;
- (void)postRegisteNotification:(id)arg1 Object:(id)arg2 userInfo:(id)arg3 priority:(_Bool)arg4;
- (id)processMsgEncapsulation:(id)arg1;
- (_Bool)registerNotification:(id)arg1;
- (void)removeNotificationObserver;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10 isPushInViewController:(_Bool)arg11;
- (void)shareToFriend:(id)arg1 summary:(id)arg2 img:(id)arg3 appName:(id)arg4 appId:(unsigned int)arg5 url:(id)arg6 currentController:(id)arg7 fileType:(id)arg8 flashUrl:(id)arg9 previewImageURL:(id)arg10 isStructMsg:(_Bool)arg11 structMsgParam:(id)arg12 isPushInViewController:(_Bool)arg13;
- (void)shareToFriend:(id)arg1 title:(id)arg2 summary:(id)arg3 img:(id)arg4 appName:(id)arg5 appId:(unsigned int)arg6 url:(id)arg7 currentController:(id)arg8 fileType:(id)arg9 flashUrl:(id)arg10 previewImageURL:(id)arg11 isPushInViewController:(_Bool)arg12;
- (void)shareToFriend:(id)arg1 title:(id)arg2 summary:(id)arg3 img:(id)arg4 appName:(id)arg5 appId:(unsigned int)arg6 url:(id)arg7 currentController:(id)arg8 fileType:(id)arg9 flashUrl:(id)arg10 previewImageURL:(id)arg11 isStructMsg:(_Bool)arg12 structMsgParam:(id)arg13 isPushInViewController:(_Bool)arg14;
- (void)synEnterChatListController;
- (_Bool)synInsertMsgToDB:(id)arg1;
- (_Bool)synInsertMsgToDBInMicroMute:(id)arg1;
- (_Bool)synInsertMsgToDBWithoutNotification:(id)arg1;
- (void)updateAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateAudioNetFlowOnMainThread:(id)arg1;
- (void)updateMultiAudioNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateMultiAudioNetFlowOnMainThread:(id)arg1;
- (void)updateVideoNetFlow:(int)arg1 size:(unsigned long long)arg2;
- (void)updateVideoNetFlowOnMainThread:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
