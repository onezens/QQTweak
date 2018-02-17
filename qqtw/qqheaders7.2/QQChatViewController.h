//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseChatViewController.h"

#import "ArkBannerTipsDelegate.h"
#import "DBAsyncCallbackProtocol.h"
#import "GetTroopMemberProtocol.h"
#import "GetTroopRemarkProtocol.h"
#import "QQBabyQKeyWordViewDelegate.h"
#import "QQGrayTipsManagerDelegate.h"
#import "QQPttRecorderDelegate.h"
#import "QshipAnimationViewDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class ArkBannerTipView, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, QC2CRoamMessageService, QQBabyQKeyWordView, QQCircleWaveNotifyView, QQEncounterChatSettingController, QQMessageModel, QQNetWorkTipsView, QQPublicAccountLoadingView, QQRichMsgPreviewDialog, QQViewController, QshipAnimationView, UIActionSheet, UIActivityIndicatorView, UIButton, UILabel, UIProgressView, UIView;

@interface QQChatViewController : QQBaseChatViewController <RichMsgPreviewDialogDelegate, QQPttRecorderDelegate, DBAsyncCallbackProtocol, QQGrayTipsManagerDelegate, UIActionSheetDelegate, ArkBannerTipsDelegate, QQBabyQKeyWordViewDelegate, QshipAnimationViewDelegate, UIAlertViewDelegate, GetTroopMemberProtocol, GetTroopRemarkProtocol>
{
    UIButton *_historyButton;
    UIButton *_voiceModal;
    UIButton *_cardButton;
    NSTimer *timer;
    NSTimer *processTimer;
    UIProgressView *progress;
    UIActivityIndicatorView *act;
    NSDictionary *Imagedict;
    NSMutableDictionary *identDic;
    _Bool ifint;
    _Bool KeyBoard;
    int _displayMsgCount;
    _Bool _flagMsgBarInfoGroup;
    int _flagMsgTmp;
    NSString *_flagMsgBarValueUin;
    _Bool _isReqVideActionSheetShow;
    _Bool _supportInterfaceRote;
    UIActionSheet *sheetVideo;
    QQMessageModel *recordModel;
    _Bool bGerenalCell;
    _Bool _isMyFriend;
    id _moviePlayer;
    _Bool _isVoiceText;
    int _sendPTTSetp;
    _Bool _rotateViewForInterfaceOrientation;
    int _currSkin;
    NSTimer *_notificationRecivePttTimer;
    QQNetWorkTipsView *_netWorkTips;
    _Bool ifShowTips;
    _Bool _isFormNSMagBar;
    QQRichMsgPreviewDialog *_richMsgPreviewDialog;
    NSMutableDictionary *_shareParam;
    NSMutableArray *_arrOnlineFile;
    UIButton *_onlineFileTip;
    UILabel *_onlineFileTipText;
    QC2CRoamMessageService *_service;
    NSString *_toSendFilePath;
    QQEncounterChatSettingController *_settings;
    _Bool _handleTeleTip;
    _Bool _flagGetAIOFeed;
    _Bool _isNeedToShowPttPannel;
    _Bool _isNeedToShowKeyBoard;
    _Bool _onewayFriendTipsHandled;
    NSMutableArray *atGroupMemArr;
    NSMutableArray *atGroupMemDataArr;
    _Bool _isToForwardMsg;
    _Bool _isTipsShow;
    int _showType;
    int _curMemCount;
    double _enterTime;
    QQCircleWaveNotifyView *_babyQNotifyView;
    QQBabyQKeyWordView *_babyQKeyWordView;
    int _robotSubMsgClassID;
    ArkBannerTipView *_arkBarTipView;
    _Bool isLoadingData;
    _Bool _antiFraudChecked;
    NSString *_phone;
    _Bool isReportFromOF;
    UIView *_loadingView;
    UIActivityIndicatorView *_indicatorView;
    _Bool _isBlockGroupCanLoadMsg;
    _Bool _updateFromDiscuss;
    _Bool _isQIMOnline;
    _Bool _isQIMAppearance;
    int currentPage;
    UIView *_sliderView;
    QQPublicAccountLoadingView *publicLoadingView;
    long long _newestFeedRequestID;
    QQMessageModel *_quoteMsgModel;
    long long _showBabyQNotifyType;
    QshipAnimationView *_shipAnimationView;
    unsigned long long _giftWantedUin;
    QQViewController *_campusCircleWebVC;
}

- (void)ActionSelectVideoFromAlbum;
- (void)ActionSendMessgae;
- (_Bool)Confirmation;
- (void)HandleArkBannerTipIsAppear:(_Bool)arg1;
- (void)HandleP2PAVTips;
@property _Bool KeyBoard; // @synthesize KeyBoard;
- (void)PushUpdateDeleteFriend:(id)arg1;
- (void)QQPPBarBtnClick:(id)arg1 param:(id)arg2;
- (void)QQPPPopBtnClick:(id)arg1 param:(id)arg2;
- (void)QShipAnimationViewDidDisappear;
- (void)QShipAnimationViewShowing;
- (void)QShipAnimationViewWillDisappear;
- (void)SendGIFImage:(id)arg1 data:(id)arg2 bodyType:(int)arg3 picMd5:(id)arg4 attr:(id)arg5;
- (void)_openChatSettingView;
- (void)_removeTheBlockTipsView:(id)arg1;
- (void)_showUncommonFriendsTipsIfNeeded;
- (void)actionAudioFromRightButtn;
- (void)actionInputbarBabyQPanel:(id)arg1;
- (void)actionInputbarPTT:(id)arg1;
- (void)actionInputbarPTV:(id)arg1;
- (void)actionInputbarPhoto:(id)arg1;
- (void)actionInputbarPoke:(id)arg1;
- (void)actionInputbarPokeSingle:(id)arg1;
- (void)actionReply:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionVideo;
- (void)addLoadingView;
- (void)addQuoteMsAtInfo:(id)arg1;
- (void)addShowSpecialRemindAIOTipTimesToUin:(id)arg1;
- (void)addSidAndJumpUrl:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)allowPublicGiftOfGiftSelectionView:(id)arg1;
- (_Bool)alreadyReachTwoTimesToUin:(id)arg1;
- (void)antiFraudTipsWillAppear:(id)arg1;
- (void)appendAIONearFilePromoteTip;
- (void)appendMessage:(id)arg1 shouldReloadData:(_Bool)arg2 shouldScrollToEndWithAnimation:(_Bool)arg3;
- (void)bannerArkBannerTipViewDidClick:(id)arg1;
- (void)bannerButtonDidClick:(id)arg1 atIndex:(long long)arg2;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)baseChatMessage:(id)arg1 didLoadUnreadMessages:(id)arg2 first:(_Bool)arg3;
- (void)blockMessages:(id)arg1;
@property(retain, nonatomic) QQViewController *campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
- (void)cancelButtonClick;
- (void)checkBabyQKeyWordView;
- (void)checkForVASReminder:(id)arg1;
- (void)checkHideBabyQNotify;
- (void)checkOnlineState:(id)arg1;
- (void)checkPushGrayTipsOnTheEveOfDegrade;
- (_Bool)checkQIMOnline;
- (void)checkShipAnimation;
- (void)checkShowBabyQEditPhotoNotify;
- (void)checkShowBabyQNotify;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)colorForNavButton;
- (void)configNotifications;
- (id)confirmButtonTitleOfGiftSelectionView:(id)arg1;
- (long long)converBabyQNotifyType:(long long)arg1;
- (void)createLoadingView;
- (id)createMultiMsgForward:(id)arg1 isLargeMsg:(_Bool)arg2;
@property int currentPage; // @synthesize currentPage;
- (void)dealloc;
- (void)deallocCallbackGoldMsg;
- (void)deferSpecialRemindAIOTip;
- (void)didClickMenu:(id)arg1 withParam:(id)arg2;
- (void)didEndDisplayingCell:(id)arg1 atIndexPath:(id)arg2;
- (void)didRecieveVASReminderPaySuccessNotification;
- (void)didSelectReloadImage:(id)arg1;
- (void)didSelectSystemNotificationCell:(id)arg1;
- (void)disableThemeIfNeeded;
- (void)dismiss;
- (void)dismissChatViewBarWithUin:(id)arg1;
- (void)dismissInputPanelView:(_Bool)arg1;
- (void)dismissVocieTips;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4 hideFakeMsg:(_Bool)arg5;
- (_Bool)doSendTextMsg:(id)arg1 showText:(id)arg2 isLocation:(_Bool)arg3 resendModel:(id)arg4 hideFakeMsg:(_Bool)arg5 emojiStickerInfo:(id)arg6;
- (id)filterAtChar:(id)arg1;
@property(nonatomic) NSString *flagMsgBarValueUin; // @synthesize flagMsgBarValueUin=_flagMsgBarValueUin;
- (void)freeTeleWithModel:(id)arg1;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4;
- (id)generateMessageModelByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 saveMsg:(_Bool)arg4 content:(id)arg5;
- (id)getArkAppModelWithArkUIView:(id)arg1;
- (id)getAtGroupMemArr;
- (id)getChatViewUin;
- (id)getMaxSubString:(id)arg1 maxLength:(int)arg2;
@property(nonatomic) unsigned long long giftWantedUin; // @synthesize giftWantedUin=_giftWantedUin;
- (void)goToAudioChat;
- (void)gotoAudioChatFromCorner;
- (void)gotoSeq:(long long)arg1;
- (void)grayTipsManagerDidInsertMsgTab:(id)arg1 retusls:(id)arg2;
- (void)groupGiftSelectionViewDidSelect;
- (void)handGameTeamBuleTips;
- (void)handleActionGoldMsgMode:(id)arg1 richAIOFlag:(unsigned long long)arg2;
- (void)handleC2CRoamMessage:(id)arg1 msgList:(id)arg2;
- (void)handleFreeTeleClickEvent:(id)arg1;
- (void)handleGetLocationFail:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)handleGroupMessage:(id)arg1 userInfo:(id)arg2:(id)arg3:(long long)arg4;
- (void)handleMsgUnreadCountClean;
- (void)handleNewWifiLinkTaped:(id)arg1;
- (void)handleOnewayFriendNotification:(id)arg1;
- (_Bool)handleP2PAVBannerTipViewClick:(id)arg1;
- (void)handleP2PAVTipsShow:(int)arg1;
- (void)handleRecommendedFriendDidTap:(id)arg1;
- (void)handleRequestTimeout:(id)arg1;
- (void)handleShareToFriendNotification:(id)arg1;
- (void)handleStartUpdateLocation:(id)arg1;
- (_Bool)handleTeleBannerButtonClick:(id)arg1;
- (void)handleTeleFreeBlackTipsShowForMsgs:(id)arg1;
- (void)handleTeleFreeTipsShow;
- (void)headIconTouch:(id)arg1;
- (void)hideBabyQSelectPicNotify;
- (void)hidePublicLoadingView;
@property _Bool ifint; // @synthesize ifint;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
@property(nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void)initArkAppMsgModel:(id)arg1;
- (void)initCallbackGoldMsg;
- (id)initWithCertainMsg:(id)arg1;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2 accostType:(int)arg3;
- (id)initWithuin:(id)arg1 isGroup:(_Bool)arg2 initIndex:(int)arg3;
- (void)initializeTextInputCache;
- (void)insertPreuploadImageMessage:(id)arg1 preuploadState:(unsigned long long)arg2;
- (void)insertVoiceCell;
- (void)invokePlugin:(CDUnknownBlockType)arg1 showFailedToast:(_Bool)arg2;
@property(nonatomic) _Bool isBlockGroupCanLoadMsg; // @synthesize isBlockGroupCanLoadMsg=_isBlockGroupCanLoadMsg;
- (_Bool)isGoldMsgMode;
@property _Bool isNeedToShowKeyBoard; // @synthesize isNeedToShowKeyBoard=_isNeedToShowKeyBoard;
@property _Bool isNeedToShowPttPannel; // @synthesize isNeedToShowPttPannel=_isNeedToShowPttPannel;
@property(nonatomic) _Bool isQIMAppearance; // @synthesize isQIMAppearance=_isQIMAppearance;
@property(nonatomic) _Bool isQIMOnline; // @synthesize isQIMOnline=_isQIMOnline;
- (_Bool)isSupportRightDragToGoBack;
@property _Bool isVoiceText; // @synthesize isVoiceText=_isVoiceText;
- (void)judgeC2CMessageTriggerFriUin:(id)arg1;
- (void)judgeGetFeedAIO;
- (void)judgeVideoMessageTriggerFriUin:(id)arg1;
- (void)judgeVoiceMessageTriggerFriUin:(id)arg1;
- (id)keyForSelectedInputbarItemCaching;
- (void)layoutCustomTitle;
- (void)leavePreviewStatus;
- (void)loadData;
- (void)loadLocalGameTeamBuleTips;
- (void)loadPersonalTag;
- (void)loadView;
@property(nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
- (_Bool)needClearTextMessageFlag;
@property(nonatomic) long long newestFeedRequestID; // @synthesize newestFeedRequestID=_newestFeedRequestID;
- (void)ocsHandlerNotification:(id)arg1;
- (void)onAIOTipsNotify:(id)arg1;
- (void)onCRMMenuCfgUpdateCompleted:(id)arg1;
- (void)onClickedWithItem:(id)arg1;
- (void)onDbAsyncCallback:(id)arg1 userdata:(id)arg2 workID:(int)arg3;
- (void)onResponseQidianInfoNotification:(id)arg1;
- (void)onResponseQidianTransferInfoNotification:(id)arg1;
- (void)onVideoRecordCompleted:(id)arg1;
- (void)perforDelayTitle;
- (void)popViewController;
- (void)prepareForRobotMessage:(id)arg1;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (id)prepareUploadImageByUuid:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3 content:(id)arg4;
- (id)prepareUploadMultiImage:(id)arg1 picInfo:(id)arg2 bodyType:(int)arg3;
- (id)prepareUploadMultiMsgForward:(id)arg1 isForward:(_Bool)arg2;
- (id)prepareUploadMultiMsgForwardToWX:(id)arg1;
- (id)prepareUploadReceiptMsg:(id)arg1 isForward:(_Bool)arg2 resType:(long long)arg3;
- (void)preuploadImage:(id)arg1;
- (void)processJSCallBack:(id)arg1 withParamStr:(id)arg2;
- (void)pttReciveNow:(id)arg1;
@property(retain, nonatomic) QQPublicAccountLoadingView *publicLoadingView; // @synthesize publicLoadingView;
- (id)queryShowTimeToUin:(id)arg1;
@property(retain, nonatomic) QQMessageModel *quoteMsgModel; // @synthesize quoteMsgModel=_quoteMsgModel;
- (void)quoteMsgStructViewClicked:(id)arg1;
- (void)reReceivePPT:(id)arg1 index:(id)arg2;
- (void)reSendMultiMsgForward:(id)arg1;
- (void)reSendStreamPTT:(id)arg1;
- (void)reSendTextMsg:(id)arg1 isLocation:(_Bool)arg2;
- (void)reSetLeftButtonTitle;
@property(retain, nonatomic) QQMessageModel *recordModel; // @synthesize recordModel;
- (void)recordShowTimeToUin:(id)arg1;
- (void)refreshAIOByAppendingMessages:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)registerShareToFriendNotifications;
- (void)reloadCustomTitle;
- (void)reloadTableView:(id)arg1;
- (void)removeLbsNotification;
- (void)removeLoadingView;
- (void)removeRecordItemWithUin:(id)arg1;
- (void)removeTipsMessage:(id)arg1;
- (void)requestDeleteOnewayFriend;
- (void)requestMobielTipsWhenOpenAIO;
- (void)requestMobileTipsWithMessages:(id)arg1 includeFrequencyLimit:(_Bool)arg2;
- (void)requestOnewayFriendList;
- (void)requestUpdateNetWorkStatus:(long long)arg1;
- (void)resetC2cMessageReadConfirm:(double)arg1;
- (void)resetIfint:(_Bool)arg1;
- (void)resetViewControllerTitle;
- (void)restoreData;
- (void)restoreDataWithCertainMsg;
- (void)restoreUIAppearance;
- (void)scrollToArkModel;
- (void)sendAddAccpetedMsgReadConfirm;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (_Bool)sendData:(id)arg1 showText:(id)arg2;
- (_Bool)sendData:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (void)sendDouTuImg:(id)arg1;
- (void)sendHotPicGifImgUseForward:(id)arg1;
- (void)sendInternalMarioImage:(id)arg1 path:(id)arg2 picMd5:(id)arg3 emojiInfo:(id)arg4;
- (_Bool)sendLocationMsg:(id)arg1 showText:(id)arg2;
- (void)sendMarketFaceMsg:(id)arg1;
- (void)sendMarketFaceMsg:(id)arg1 resendModel:(id)arg2;
- (void)sendMarketFaceMsgFromShare:(id)arg1;
@property(nonatomic) int sendPTTSetp; // @synthesize sendPTTSetp=_sendPTTSetp;
- (void)sendReadConfirm;
- (void)sendReadConfirmForBabyQGuideMessage:(id)arg1;
- (void)sendSpriteActionMsg:(id)arg1;
- (void)sendSpriteActionMsg:(id)arg1 resendModel:(id)arg2;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2;
- (_Bool)sendTextMsg:(id)arg1 showText:(id)arg2 emojiStickerInfo:(id)arg3;
- (void)sendThirdAppShareMsg:(id)arg1 msg:(id)arg2;
- (void)sendVideoFile:(id)arg1;
- (void)setAnomymousInfoToMessage:(id)arg1 fromResendModel:(id)arg2;
- (void)setDidShowRedPointForInputbarItem:(id)arg1;
- (void)setGoldMsgCustomNavSubTitleIfNeed;
- (void)setNavBarQIMOnlineStyle:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setQIMOnlineSubtitleIcon;
- (void)setQIMOnlineTableCorner;
- (void)setQIMOnlineUIAppearance;
- (void)setQZNewestFeedLoaded;
@property(retain, nonatomic) QshipAnimationView *shipAnimationView; // @synthesize shipAnimationView=_shipAnimationView;
@property(nonatomic) long long showBabyQNotifyType; // @synthesize showBabyQNotifyType=_showBabyQNotifyType;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
@property(nonatomic) _Bool updateFromDiscuss; // @synthesize updateFromDiscuss=_updateFromDiscuss;
- (void)setupInputbarItems;
- (void)setupRichKeyboardItems;
- (_Bool)shouldLoadNewPersonalTag;
- (_Bool)shouldShowAudioFromConern;
- (_Bool)shouldShowRedPointForInputbarItem:(id)arg1;
- (_Bool)shouldShowUnCommonFriendsTips;
- (_Bool)shouldUseDefaultBackgroundImage;
- (void)showBabyQKeyWordPanel;
- (void)showBabyQSelectPicNotify;
- (void)showBizQQReqLocAlert;
- (void)showChatViewBarTitle:(id)arg1 icon:(id)arg2 chatViewUin:(id)arg3;
- (void)showGoldMsgAnimationByUnreadMsg:(id)arg1;
- (void)showGolgMsgAnimationIfNeeded:(id)arg1;
- (void)showGroupAssistantChatTip;
- (void)showKeyboard:(id)arg1;
- (void)showKeyboardForVoice:(id)arg1;
- (void)showOnewayFriendTips;
- (void)showOnewayFriendTipsIfNeed;
- (void)showP2PAVTips;
- (void)showPopupMenu0;
- (void)showRebateButton:(id)arg1;
- (void)showSpecialRemindAIOTipToUin:(id)arg1;
- (void)showThirdAppForwardNotify;
- (void)showUncommonFriendsTipsIfNeeded;
- (void)showUnsetFailedTips;
- (void)specialRemindAIOTip;
- (void)startBizQQLocationReport;
- (void)startGoldMsgAnimationWithMsg:(id)arg1;
- (void)startPublicAccountLoadingView;
- (void)startUpdateLocation;
- (void)stopPublicAccountLoadingView;
- (void)tableViewReSendImage:(id)arg1;
- (void)tableViewSendMarioImage:(id)arg1;
- (void)timeOut;
- (id)tipsContentForState:(long long)arg1;
- (id)trimAtGroupName:(id)arg1;
- (void)tweakNavigationBarWhenQIMOnline;
- (void)uncommonFriendsTipsDidShow:(int)arg1;
- (void)uncommonFriendsTipsTapped:(id)arg1;
- (void)unregisterShareToFriendNotifications;
- (void)upAmrFile:(id)arg1;
- (void)updateBlockBtnTitle;
- (void)updateCRMMenuAndRedrawMenu;
- (void)updateTableFooterViewForGoldMsg;
- (void)updateTipsContent:(id)arg1;
- (void)uploadFailed;
- (void)uploadImage:(id)arg1;
- (void)uploadSilentCare;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidAppearGoldMsg:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLayoutSubviewsGoldMsg;
- (void)viewDidLoad;
- (int)viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillAppearGoldMsg:(_Bool)arg1;
- (void)viewWillAppearOnNormalStatus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillDisappearGoldMsg:(_Bool)arg1;
- (void)viewWillDisappearOnNormalStatus;
- (void)willChangeInputbarStatus:(unsigned long long)arg1;
- (void)willDisplayCell:(id)arg1 atIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
