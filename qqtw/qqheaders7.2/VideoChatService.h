//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAlertViewDelegate.h"
#import "AVHttpEngineDelegate.h"
#import "CallkitDelegate.h"
#import "IEngineDispatchDelegate.h"
#import "IQQDBOperationBase.h"
#import "IVideoChatService.h"
#import "QUIAlertPlusViewDelegate.h"
#import "QUIAlertViewDelegate.h"

@class AVAlertView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QQAVBeautifyCheckViewController, QQP2PAVChatBaseViewController, RecvThirdCallAlert;

@interface VideoChatService : NSObject <QUIAlertViewDelegate, AVAlertViewDelegate, CallkitDelegate, QUIAlertPlusViewDelegate, IVideoChatService, IEngineDispatchDelegate, AVHttpEngineDelegate, IQQDBOperationBase>
{
    CDStruct_7895f40e videoMsgCache;
    CDStruct_7895f40e sharpVideoMsgCache;
    unsigned long long m_friUin;
    unsigned long long m_contactUin;
    _Bool _isRequest;
    _Bool _isThirdCallRequest;
    _Bool _isBackGround;
    _Bool _isAudioEnable;
    _Bool _isVOIPEnable;
    _Bool _isPSTNEnable;
    _Bool _isAllPSTNEnable;
    _Bool _isAntiTouchEnable;
    _Bool _isStrongPSTNEnable;
    _Bool _isVideoSuspend;
    _Bool _isAudioSuspend;
    _Bool _isAVSendedBlock;
    _Bool _isAudioHowlingdisable;
    NSString *m_selfPhoneCode;
    NSString *m_peerPhoneCode;
    NSString *m_selfNationCode;
    NSString *m_peerNationCode;
    unsigned long long m_groupID;
    NSMutableArray *_qqMessageQueue;
    NSMutableDictionary *_suspendDic;
    int m_relationType;
    int m_appType;
    int m_accountType;
    unsigned long long _bindId;
    unsigned int _bindType;
    unsigned int _subServiceType;
    _Bool _isUserAudioPermission;
    _Bool _isUserVideoPermission;
    id _lastMessage;
    QQP2PAVChatBaseViewController *_newAVController;
    QQAVBeautifyCheckViewController *_beautifyCheckController;
    AVAlertView *_beautifyAlertView;
    unsigned long long _beautifyFriUin;
    int _beautifyRelationType;
    int _beautifyAppType;
    int _beautifyAccountType;
    NSMutableDictionary *_conflictViewControllerInfo;
    _Bool _isSuspend;
    _Bool _isRunning;
    _Bool _isCreatDiscuss;
    NSMutableDictionary *_chatingStateDict;
    NSMutableArray *_sharpOfflineRequestAllCache;
    NSMutableArray *_sharpOfflineRequestCache;
    NSMutableArray *_sharpOfflineCloseCache;
    NSMutableArray *_sharpOfflineOtherCache;
    int _sharpOfflineMsgCount;
    unsigned long long _roomIDPostToSdkFromSharpOffline;
    int _chatState;
    unsigned long long _chatFriUin;
    _Bool m_bIsSwitchTerTipsTouchRequest;
    _Bool _isRecvCalling;
    struct dispatch_queue_s *_queueVideoService;
    long long _logUploadSeq;
    RecvThirdCallAlert *_thirdCallAlert;
    NSTimer *_anotherCallViewTimer;
    _Bool _isNeedClickAcceptVideoChat;
    _Bool _isCloseVideoBySwitchToGroup;
    _Bool _isP2PCallFromGroup;
    int _currentNetworkState;
    NSArray *_valueDelay;
    int _xo;
    NSMutableDictionary *_msgCache;
    id _userData;
    NSDictionary *_extraDic;
}

+ (id)GetInstance;
+ (void)deviceHasMediaPrivilege:(id)arg1 shouldRequestAccessForMedia:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)isCameraAvailable:(CDUnknownBlockType)arg1 shouldRequestAccessForMedia:(_Bool)arg2 delegate:(id)arg3;
- (void)AppendBusyMsgToMsgDB:(id)arg1:(long long)arg2:(int)arg3:(int)arg4:(unsigned long long)arg5:(unsigned long long)arg6:(unsigned int)arg7 subServiceType:(unsigned int)arg8 isOnline:(_Bool)arg9;
- (void)AppendMsgToMsgDB:(int)arg1 uin:(id)arg2 videoTimeInterval:(long long)arg3 sessionType:(int)arg4 accountType:(int)arg5 groupid:(unsigned long long)arg6 sign:(id)arg7 bindId:(unsigned long long)arg8 bindType:(unsigned int)arg9 subServiceType:(unsigned int)arg10;
- (void)AppendNetFlowDataToMsgDB:(unsigned long long)arg1;
- (int)GetACCountType;
- (int)GetDynamicVolumn;
- (void)GetNewQQMessage:(id)arg1;
- (int)GetSessionType;
- (void)InitTable;
- (_Bool)InitVideoChatService;
- (_Bool)IsVideoChat;
- (_Bool)MSFNetworkIsWiFi;
- (void)MarkAccept:(unsigned long long)arg1 accountType:(int)arg2;
- (void)MarkClose:(unsigned long long)arg1 accountType:(int)arg2 bySelf:(_Bool)arg3 byOtherTerm:(_Bool)arg4 byOtherTermAccept:(_Bool)arg5;
- (void)MarkConnected:(unsigned long long)arg1 accountType:(int)arg2;
- (void)MarkMute:(unsigned long long)arg1 accountType:(int)arg2 mute:(_Bool)arg3;
- (void)OnMSFNetworkApnStateNotification:(id)arg1;
- (void)QueryRoomInfo:(unsigned long long)arg1 andPeerUin:(unsigned long long)arg2;
- (int)QuitVideoChatType:(id)arg1;
- (_Bool)RealRecvRequest:(unsigned long long)arg1 Type:(int)arg2 WithAccoutType:(int)arg3 WithGroupID:(unsigned long long)arg4 sign:(id)arg5 bindId:(unsigned long long)arg6 bindType:(unsigned int)arg7 subServiceType:(unsigned int)arg8;
- (void)RecvAnotherRequest:(unsigned long long)arg1 friNick:(id)arg2 Type:(int)arg3 WithAccoutType:(int)arg4 WithGroupID:(unsigned long long)arg5 sign:(id)arg6 bindId:(unsigned long long)arg7 bindType:(unsigned int)arg8 subServiceType:(unsigned int)arg9 isChatingType:(int)arg10;
- (_Bool)RecvMobileRequest:(unsigned long long)arg1 WithAccoutType:(int)arg2 fromNation:(id)arg3 fromNumber:(id)arg4 toNumber:(id)arg5 type:(int)arg6 sign:(id)arg7 bindID:(unsigned long long)arg8 bindType:(unsigned int)arg9 subService:(unsigned int)arg10;
- (_Bool)RecvRequest:(unsigned long long)arg1 Type:(int)arg2 WithAccoutType:(int)arg3 WithGroupID:(unsigned long long)arg4 sign:(id)arg5 bindId:(unsigned long long)arg6 bindType:(unsigned int)arg7 subServiceType:(unsigned int)arg8;
- (int)RequestVideoChatType:(unsigned long long)arg1:(int)arg2:(int)arg3;
- (int)ReturnVideoChatType;
- (int)SuspendVideoChatType:(_Bool)arg1 needShowNotice:(_Bool)arg2;
- (int)TranslateAccostType:(int)arg1 transType:(int)arg2;
- (void)UnitVideoChatService;
- (void)UpdateVideoChatUin;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedKeyWord:(id)arg2;
- (void)avAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callbackDtmfWithDelay:(id)arg1;
- (void)cencealFloatChattingWindow;
- (void)changeIsRequestType:(_Bool)arg1;
- (void)checkActivedAIO:(id)arg1 andContent:(id)arg2;
- (_Bool)checkBlock:(unsigned long long)arg1;
- (_Bool)checkConflict:(int)arg1;
- (_Bool)checkConnect;
- (_Bool)checkFirstBeautify;
- (int)checkLegal:(unsigned long long)arg1;
- (_Bool)checkNeedChatFirst:(unsigned long long)arg1 AccostType:(int)arg2;
- (int)checkSelfCurrState:(int)arg1;
- (_Bool)checkTelephone;
- (_Bool)checkWIFI:(int)arg1;
- (void)closedBySwitchToGroup:(_Bool)arg1;
- (_Bool)containsMessage:(id)arg1;
- (void)controlAllPSTNEnable:(id)arg1;
- (void)controlAntiTouchEnable:(id)arg1;
- (void)controlAudioEnable:(id)arg1;
- (void)controlAudioHowlingDisable:(id)arg1;
- (void)controlPSTNEnable:(id)arg1;
- (void)controlStrongPSTNEnable:(id)arg1;
- (void)controlVOIPEnable:(id)arg1;
- (id)convertTimeformat:(unsigned long long)arg1;
- (void)createDissGroup:(id)arg1 withFriendUin:(id)arg2;
- (void)createDissGroupCallBack:(int)arg1 withDiscussUin:(id)arg2 withPhones:(id)arg3;
- (_Bool)createTable:(id)arg1;
- (void)dealloc;
- (void)delayStartAVChat:(id)arg1;
- (void)deleteAllChatState;
- (_Bool)deleteAllMessage;
- (_Bool)deleteMessage:(unsigned long long)arg1 accountType:(int)arg2;
- (void)deleteP2PAVChatState:(unsigned long long)arg1;
- (void)deleteRecord:(id)arg1;
- (_Bool)deleteRecord:(id)arg1 inDb:(id)arg2;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (void)didRecievedOfflineMsg:(id)arg1;
- (int)directRequestC2BVideoChat:(unsigned long long)arg1 NickName:(id)arg2 AvatarUrl:(id)arg3 sessionInfo:(id)arg4 openId:(id)arg5 openKey:(id)arg6 signature:(id)arg7 extraUrlParam:(id)arg8;
- (void)dismissAVBeautifyAlertView;
- (void)dismissAVBeautifyCheckController:(int)arg1;
- (void)dismissThirdCallAlertView;
@property(retain, nonatomic) NSDictionary *extraDic; // @synthesize extraDic=_extraDic;
- (void)forceSuspendAVChat;
- (_Bool)forceToCloseConflictViewController;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (int)getAVUnreadCount;
- (int)getAVUnreadCount:(long long)arg1 accountType:(int)arg2;
- (int)getAccountTypeForDataReport;
- (_Bool)getAllPSTNEnable;
- (_Bool)getAntiTouchEnable;
- (_Bool)getAudioHowlingDisable;
- (unsigned long long)getBindId;
- (unsigned int)getBindType;
- (id)getCallkitDisplayName:(unsigned long long)arg1 nickName:(id)arg2 accountType:(int)arg3;
- (unsigned long long)getCurP2PChatUin;
- (unsigned long long)getFriUin;
- (_Bool)getGroundGlassSwitch;
- (id)getIMEI;
- (id)getLatestRecordByUin:(long long)arg1 inDb:(id)arg2;
- (_Bool)getMatchCloseMsg:(id)arg1;
- (_Bool)getMatchRequestMsg:(id)arg1;
- (long long)getMaxId:(id)arg1;
- (int)getMeizuAccType:(id)arg1;
- (id)getMeizuContactModel:(id)arg1;
- (id)getMeizuNickName:(id)arg1;
- (int)getNetType;
- (id)getNickNameFromMobile:(id)arg1 uin:(id)arg2 accountType:(int)arg3;
- (int)getP2PAVChatSession:(unsigned long long)arg1;
- (int)getP2PAVChatState:(unsigned long long)arg1;
- (unsigned long long)getP2PAVChattingRoomID;
- (unsigned long long)getP2PAVFriUin:(unsigned long long)arg1;
- (unsigned long long)getP2PAVRoomID:(unsigned long long)arg1;
- (int)getP2PState:(unsigned long long)arg1 withBindType:(unsigned int)arg2;
- (int)getP2PStateAudioOrVideo;
- (_Bool)getPSTNEnable;
- (id)getPushDisplayName:(unsigned long long)arg1 nickName:(id)arg2 accountType:(int)arg3;
- (int)getSeq;
- (_Bool)getStrongPSTNEnable;
- (unsigned int)getSubServiceType;
- (unsigned long long)getTableSign;
- (_Bool)getVOIPEnable;
- (id)getVideoContext:(id)arg1 timeInterval:(unsigned long long)arg2;
- (void)gotoChatViewControllerFromGroup:(id)arg1;
- (void)handleConflictOnRecv:(id)arg1;
- (void)handleDismissThirdCallView:(unsigned long long)arg1 accountType:(int)arg2 byOtherTerm:(_Bool)arg3 byOtherTermAccept:(_Bool)arg4;
- (id)init;
- (void)insertRecord:(id)arg1;
- (_Bool)insertRecord:(id)arg1 inDb:(id)arg2;
- (_Bool)isAVMessage:(id)arg1;
- (_Bool)isCurC2BChattingUin:(id)arg1;
- (_Bool)isFloatVideoChatting;
- (_Bool)isFreeCallingWithUin:(id)arg1;
- (_Bool)isNeedOpenglInitProtect;
- (_Bool)isOnAVInterface;
- (_Bool)isOtherTerminalChatingWithUin:(id)arg1;
- (_Bool)isOutChatting;
- (_Bool)isP2PRecvCallViewShow;
- (_Bool)isP2PthirdCallAlertShow;
- (_Bool)isRecvRequestShowing;
- (_Bool)isTelePhoneCalling;
- (int)isVideoChatConflictWithUin:(unsigned long long)arg1 andIsAudioChat:(_Bool)arg2;
- (_Bool)isVideoControllerShow;
- (_Bool)iscreateDissGroup;
- (void)loadImageFromURL;
@property(retain, nonatomic) NSString *m_peerNationCode; // @synthesize m_peerNationCode;
@property(retain, nonatomic) NSString *m_peerPhoneCode; // @synthesize m_peerPhoneCode;
@property(retain, nonatomic) NSString *m_selfNationCode; // @synthesize m_selfNationCode;
@property(retain, nonatomic) NSString *m_selfPhoneCode; // @synthesize m_selfPhoneCode;
- (id)modelWithResultSet:(id)arg1;
- (void)navigateToAIOAndShowKeyBoard:(_Bool)arg1 toUin:(id)arg2;
- (_Bool)nearbyCheckAVConflictWithUin:(unsigned long long)arg1;
- (int)nearbyQuitVideoChatType:(id)arg1;
- (_Bool)nearbyVideoCheckConnect;
- (_Bool)nearbyVideoCheckWIFI;
- (void)noticeBarMoveEnd:(struct CGPoint)arg1;
- (void)notifyError:(id)arg1;
- (void)onCallkitAccept:(id)arg1;
- (void)onCallkitActivate:(id)arg1;
- (void)onCallkitDeactivate:(id)arg1;
- (void)onCallkitEnd:(id)arg1;
- (void)onCallkitHold:(id)arg1 hold:(_Bool)arg2;
- (void)onCallkitMute:(id)arg1 mute:(_Bool)arg2;
- (void)onCallkitSpeaker:(id)arg1 speaker:(_Bool)arg2;
- (void)onCallkitStart:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (void)onForceOffLine;
- (void)onNetworkStateChange:(id)arg1;
- (void)onOfflineMsgFinish;
- (void)onTelephoneConnected;
- (void)onTelephoneDialing;
- (void)onTelephoneEnded;
- (void)onTelephoneIncoming;
- (void)onVideoBecomeActive;
- (void)onVideoEnterBackground;
- (void)onVideoEnterFrontground;
- (void)onVideoResignedActive;
- (void)postNeworkOffLineNotification;
- (void)recvNearbyACChat:(id)arg1;
- (void)recvPointInfo:(struct CGPoint)arg1 screenSize:(struct CGSize)arg2 pointType:(int)arg3 penType:(int)arg4 penName:(id)arg5 penColor:(id)arg6 penWidth:(int)arg7;
- (void)remainFloatChattingWindow;
- (void)removeMemberSelector;
- (void)removeMemberSelectorByAutoClickWhenAcceptThirdCall;
- (_Bool)requestC2BAudio:(id)arg1;
- (int)requestMobileFromContactWithPhoneNumber:(int)arg1;
- (void)requestNearbyVideoChat:(unsigned long long)arg1;
- (void)requestVideoChatFromBeautify;
- (void)saveGroundGlassSwitch:(_Bool)arg1;
- (void)sendC2CNotifyMsg:(unsigned int)arg1 SessionType:(unsigned int)arg2 strArg1:(id)arg3 strArg2:(id)arg4;
- (void)sendDtmfMsg:(unsigned long long)arg1 Dial:(BOOL)arg2 Handler:(CDUnknownBlockType)arg3;
- (_Bool)sendTextMsg:(id)arg1;
- (void)sendTextMsgAfterDelay:(id)arg1 ToUin:(unsigned long long)arg2 delay:(double)arg3;
- (_Bool)sendWupBuffer:(char *)arg1 cmd:(char *)arg2 seq:(int *)arg3 immediately:(_Bool)arg4 timeOut:(int)arg5;
- (void)setForceToCloseConflictViewController:(id)arg1;
@property(nonatomic) _Bool isP2PCallFromGroup; // @dynamic isP2PCallFromGroup;
- (void)setIsThirdCallRequest:(_Bool)arg1;
- (void)setNetIP:(id)arg1 AndPort:(int)arg2;
- (void)setP2PState:(int)arg1 withFriUin:(unsigned long long)arg2;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
- (void)showAVBeautifyAlert;
- (void)showAVBeautifyCheckController;
- (void)showThirdAlertViewTimeOut;
- (int)start:(unsigned long long)arg1 AccostType:(int)arg2 GroupID:(unsigned long long)arg3 isAudioChat:(_Bool)arg4;
- (void)startAVChat:(id)arg1;
- (int)startAudio:(unsigned long long)arg1 AccostType:(int)arg2 GroupID:(unsigned long long)arg3;
- (int)startMobileWithSelfNationCode:(id)arg1 selfPhoneNumber:(id)arg2 peerNationCode:(id)arg3 peerPhoneNumber:(id)arg4 type:(int)arg5 AccostType:(int)arg6;
- (int)startQcallWithSelfNationCode:(id)arg1 selfPhoneNumber:(id)arg2 peerNationCode:(id)arg3 peerPhoneNumber:(id)arg4 type:(int)arg5 AccostType:(int)arg6 bindID:(unsigned long long)arg7 bindType:(unsigned int)arg8 friUin:(unsigned long long)arg9;
- (void)startUpNearbyVideoChat;
- (void)startUpNearbyVideoChatWithoutCheck;
- (int)startVideo:(unsigned long long)arg1 AccostType:(int)arg2 GroupID:(unsigned long long)arg3;
- (void)strangerInfoGeted:(id)arg1;
- (_Bool)supportAVBeautify;
- (_Bool)supportBeautify30;
- (int)switchTerminal:(unsigned long long)arg1 chatType:(int)arg2 andOldRoomID:(unsigned long long)arg3;
- (int)switchTerminalVideoChatType:(unsigned long long)arg1 andChatType:(int)arg2 andOldRoomID:(unsigned long long)arg3 andIsTipsTouch:(_Bool)arg4;
- (void)switchToGroupAV:(id)arg1 withPhones:(id)arg2;
- (void)uinDidDeleteFromBlockList:(id)arg1;
- (int)updateNetFlow:(int)arg1 Size:(unsigned long long)arg2;
- (void)updateP2PAVChatState:(unsigned long long)arg1 andChatState:(int)arg2 andChatType:(int)arg3 andRoomID:(unsigned long long)arg4;
- (void)updateTable;
- (void)uploadLogFromPushWithSeq:(long long)arg1 Begin:(struct tm)arg2 End:(struct tm)arg3;
- (void)uploadVideoLog:(unsigned long long)arg1:(const char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isBackGround; // @dynamic isBackGround;
@property(nonatomic) _Bool isCloseVideoBySwitchToGroup; // @dynamic isCloseVideoBySwitchToGroup;
@property(nonatomic) _Bool isNeedClickAcceptVideoChat; // @dynamic isNeedClickAcceptVideoChat;
@property(nonatomic) _Bool isRecvCalling; // @dynamic isRecvCalling;
@property(nonatomic) _Bool isUserAudioPermission; // @dynamic isUserAudioPermission;
@property(nonatomic) _Bool isUserVideoPermission; // @dynamic isUserVideoPermission;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSArray *valueDelay; // @dynamic valueDelay;

@end
