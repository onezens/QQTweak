//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "CAAnimationDelegate.h"
#import "CustomSummaryCardZipDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "QQBannerTipViewDelegate.h"
#import "QUIActionSheetDelegate.h"
#import "RequestSetCardDelegate.h"
#import "SpriteMultiImgDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserSummaryAccessibilityViewDelegate.h"
#import "UserSummaryEachBusinessEnterDelegate.h"
#import "UserSummaryEmptyPhotoWallDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"
#import "UserSummaryPhotoCoverFootViewDelegate.h"
#import "UserSummaryPhotosWallBrowserViewContollerDelegate.h"
#import "UserSummaryPhotosWallCellDelegate.h"
#import "UserSummaryTableHeaderViewDataSource.h"
#import "UserSummaryTableHeaderViewDelegate.h"
#import "UserSummaryTableHeaderViewPhotoDelegate.h"
#import "UserSummaryTableHeaderViewTagsPresenter.h"
#import "UserSummaryTouchControlDelegate.h"

@class AddFriendSendMessageViewController, CALayer, CMMotionManager, CloudLayoutManager, DIYEditView, FriendsVerifyMsgStructMsgModle, LOTAnimationView, NSArray, NSData, NSDictionary, NSIndexPath, NSMutableArray, NSNumber, NSString, NSTimer, QQAPNGImageView, QQAlertView, QQAvatarView, QQBubbleTipsView, QQProfileModel, QQTableViewForHighlightEffectButton, QQToastView, QUIActionSheet, QZonePhotoWallCacheInfo, RichStateModel, ShoppingPersonalCardModel, SpriteMultiImageView, ThirdBusinessShowModel, UIImage, UIImagePickerController, UIImageView, UILongPressGestureRecognizer, UINavigationController, UIView, UIViewController, UIWebView, USPersonalTagModel, UserSpriteModel, UserSummaryModel, UserSummaryNavigationBar, UserSummaryPersonalTagCell, UserSummaryPhotoCoverFootView, UserSummaryPhotosWallImageModel, UserSummaryPtotosWallManager, UserSummaryTableHeaderView, UserSummaryTouchControl, ZanRequestManager;

@interface UserSummaryViewController : QQViewController <UserSummaryTableHeaderViewPhotoDelegate, UserSummaryAccessibilityViewDelegate, SpriteMultiImgDelegate, UserSummaryPhotosWallCellDelegate, UserSummaryPhotosWallBrowserViewContollerDelegate, UserSummaryPhotoCoverFootViewDelegate, TBBizNetworkLogicDelegate, UITableViewDelegate, UITableViewDataSource, QUIActionSheetDelegate, UIAlertViewDelegate, UserSummaryTouchControlDelegate, UserSummaryTableHeaderViewDelegate, UserSummaryTableHeaderViewDataSource, MFMessageComposeViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate, CustomSummaryCardZipDelegate, QQBannerTipViewDelegate, UserSummaryEachBusinessEnterDelegate, UserSummaryNavBarItemDelagate, UserSummaryTableHeaderViewTagsPresenter, RequestSetCardDelegate, UserSummaryEmptyPhotoWallDelegate, CAAnimationDelegate>
{
    int _type;
    int _subtype;
    long long _uin;
    _Bool _isMySelf;
    NSString *_searchName;
    unsigned long long _groupUin;
    UserSummaryModel *_model;
    NSMutableArray *_tableDataArray;
    NSMutableArray *_menuItemArray;
    NSMutableArray *_businessModelArray;
    NSString *_enc_id;
    NSString *_uid;
    QQTableViewForHighlightEffectButton *_tableView;
    UserSummaryTableHeaderView *_simpleInfoView;
    UserSummaryTouchControl *_operationView;
    NSDictionary *_unifyNameDic;
    _Bool _isUIBusy;
    _Bool _isDeleteRequesting;
    int _reqSummarySeqID;
    _Bool _bIsSummaryNeededUpdate;
    _Bool _isManualAddFriendisHoldByRequestingSumaryResponce;
    int _sumaryResponsedStatus;
    UIWebView *_phoneCallWebView;
    QUIActionSheet *_actionSheet;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_lastIndexPath;
    int _referType;
    UIImagePickerController *_photoPicker;
    int _headUploadSessionID;
    NSTimer *_timer;
    AddFriendSendMessageViewController *_addFriend;
    _Bool _isSupportWpa;
    _Bool _bClickEditInfo;
    _Bool _isMenuVisible;
    _Bool _isSheetVisible;
    _Bool _didPressStarCell;
    int _summaryEntry;
    unsigned int _getPhotoWallRequestId;
    QZonePhotoWallCacheInfo *_photoWallInfo;
    NSMutableArray *_uploadingPhotos;
    UIView *_nightModeMaskView;
    UserSummaryNavigationBar *_UserSummaryNavigationBar;
    _Bool _shadeDone;
    _Bool _businessExposureReport;
    _Bool _hobbiesExposureReport;
    UINavigationController *_navi;
    ThirdBusinessShowModel *_UserExportGorupModel;
    NSString *_exportgroupCode;
    _Bool needsShowGuideAnimation;
    _Bool tableViewScrollLock;
    _Bool _editInfoSelected;
    _Bool _editSigInfo;
    _Bool _isPushPhoneCall;
    _Bool _isReportQCallPromotion;
    unsigned long long _setImageCount;
    _Bool _isEnterZanList;
    long long _qvlmEmtry;
    RichStateModel *_richStateSigModel;
    UIViewController *_popToViewController;
    UIImageView *_bgImgView;
    UIView *_diyCardMaskView;
    UIImageView *_animationBgView;
    CALayer *_animationLayer;
    NSNumber *_overDueNum;
    UIImageView *_customCardShadowImageView;
    NSString *_commendName;
    QQAlertView *_alertAddFriend;
    QQAlertView *_alertVIP;
    NSDictionary *_customTemplateConfig;
    _Bool _shouldDisplayWithTemplate;
    int _customTemplateId;
    UIImage *_tempHoldImage;
    struct CGPoint _lastContentOffset;
    NSString *_cardRmarkMobile;
    FriendsVerifyMsgStructMsgModle *_msgModel;
    SpriteMultiImageView *_spriteShowView;
    UserSpriteModel *_spriteModel;
    _Bool _isSpriteStand;
    _Bool _isFoldShow;
    _Bool _isFoldExpand;
    _Bool _needAddSumItemFoldPremise;
    _Bool _isReqSetFriendCard;
    QQAvatarView *_NowLiveView;
    QQProfileModel *_profileModel;
    _Bool _isSelfCampusCircleCard;
    UIImageView *_heroBgImage;
    struct CGRect _gameHonourBgInitFrame;
    QQAPNGImageView *_gameHonourLogo;
    UIImageView *_gameHonourLight;
    CMMotionManager *_motionManager;
    UIImageView *_diyEditView;
    DIYEditView *_diyContentView;
    QQBubbleTipsView *_diyCardGuideView;
    LOTAnimationView *_colorfulFloatingScreenAnimationView;
    NSTimer *_colorfulFloatingScreenTimer;
    ShoppingPersonalCardModel *_shopBasicInfo;
    long long _bindShopUin;
    long long _selfBindShopUin;
    _Bool _isWaitingBindShopUin;
    NSArray *_photosWallDataSource;
    NSArray *_photosWallImageModelList;
    UserSummaryPtotosWallManager *_photosWallManager;
    UserSummaryPhotosWallImageModel *_deleteModel;
    double _operationViewHeight;
    int _totalVideoCount;
    _Bool _hasResp;
    long long _initUin;
    long long _initGroupUin;
    NSData *_initSecureSig;
    NSString *_initNumber;
    NSString *_originalISummaryCardbgUrl;
    _Bool _isFirstTimeAppear;
    _Bool _didReceivedResponse;
    int _showingBoxType;
    _Bool _personalTagDidUpdateFromSharePage;
    _Bool _guestDidPraisePersonalTag;
    _Bool _animationHasPlayed;
    _Bool _callEntry;
    ZanRequestManager *_zanRequest;
    QQToastView *_toastView;
    CloudLayoutManager *_cloudWordManager;
    UserSummaryPersonalTagCell *_personalTagCell;
    _Bool _isFromBabyQ;
    _Bool _hideBottomOperationBar;
    _Bool _isFromCampusCircleWeb;
    _Bool _isRequest;
    _Bool _isGetMore;
    QQViewController *_campusCircleWebViewController;
    id <QQWebviewExecuteJSDelegate> _campusCircleWebVC;
    UserSummaryPhotoCoverFootView *_footView;
    UIImage *_arrowImage;
    NSArray *_cloudWords;
    USPersonalTagModel *_personalTagModel;
    struct CGSize _cloudWordRegionSize;
}

+ (int)addFriendSourceIDForType:(int)arg1;
+ (int)addFriendSubSourceIDForType:(int)arg1;
+ (void)businessClickReport:(long long)arg1;
+ (void)businessEnterDidSeletect:(id)arg1 enterIndex:(long long)arg2 uin:(id)arg3 groupCode:(id)arg4 pushNavc:(id)arg5 summaryModel:(id)arg6;
+ (void)businessExposureReport:(long long)arg1 hasReport:(_Bool *)arg2;
+ (void)businessShowExposureReportUtils:(id)arg1 hasReport:(_Bool *)arg2;
+ (id)creatDefaultModelForType:(int)arg1 uin:(long long)arg2;
+ (void)didClickHobbyCellWithServiceType:(long long)arg1 hobbyModel:(id)arg2 uin:(id)arg3 navController:(id)arg4 summaryModel:(id)arg5;
+ (void)didClickHobbyContentSectionHeaderWithServiceType:(long long)arg1 hobbiesModel:(id)arg2 uin:(id)arg3 navController:(id)arg4 summaryModel:(id)arg5;
+ (void)goToChatWithNavigationController:(id)arg1 summaryType:(int)arg2 fromUin:(long long)arg3 groupUin:(long long)arg4 nick:(id)arg5;
+ (void)gotoQZoneWithViewController:(id)arg1 referType:(int)arg2 fromUin:(long long)arg3 nick:(id)arg4 hasPermission:(_Bool)arg5;
+ (int)resetSummaryType:(int)arg1 withUin:(long long)arg2 groupUin:(long long)arg3;
+ (void)showThirdBusinessAndReport:(long long)arg1 jump_url:(id)arg2 uin:(id)arg3 pushNavc:(id)arg4 groupCode:(id)arg5 summaryModel:(id)arg6;
+ (int)sumTouchControlTypeForType:(int)arg1 supportWpa:(_Bool)arg2;
+ (id)viewControllerWithGroupCode:(long long)arg1 groupCode:(long long)arg2;
+ (id)viewControllerWithUin:(long long)arg1;
+ (id)viewControllerWithUin:(long long)arg1 type:(int)arg2;
- (void).cxx_destruct;
- (void)ActionOnDeleteFriend:(id)arg1;
- (void)ActionOnModifyNick:(id)arg1;
- (void)ActionOnModifyRemark:(id)arg1;
- (void)ActionReqeustStwebTokenTimeout;
- (void)ActionRequestStwebToken:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerController:(id)arg1 didSelectPhotoList:(id)arg2;
- (void)QQRemovePersonalTagRedPoint:(id)arg1;
- (id)accessibleElementsInUserSummary;
- (void)actionOnModifyGameIconInfo:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addCampusNotification;
- (void)addCoverViewIfNeed:(id)arg1 topShadow:(id)arg2;
- (void)addFriend:(id)arg1;
- (void)addLongPressGesture;
- (_Bool)addSumItemIfAvailable:(id)arg1 type:(int)arg2;
- (void)adjustForNightMode;
- (void)adjustHeaderViewZanButtonYIfNeeded;
- (void)adjustPhotoWallHeight;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)animateToNewHeader:(id)arg1 andHeaderName:(id)arg2;
@property(retain, nonatomic) UIImageView *animationBgView; // @synthesize animationBgView=_animationBgView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(retain, nonatomic) CALayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void)applyCustomConfigByColor:(long long)arg1 withTempDic:(id)arg2;
- (void)applyCustomTemplate;
- (void)applyCustomTemplateOnCell:(id)arg1 type:(int)arg2;
@property(retain, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (void)asynLayoutFinish:(id)arg1;
- (long long)avatarPendantEntry;
- (void)avatarPendantPushUpdate:(id)arg1;
- (id)avatarView;
- (void)bannerTipViewDidClick:(id)arg1;
- (void)blockFriendMsg;
- (void)businessShowExposureReport;
- (void)callCardMobiles:(id)arg1;
- (void)callSomebody;
@property(retain, nonatomic) id <QQWebviewExecuteJSDelegate> campusCircleWebVC; // @synthesize campusCircleWebVC=_campusCircleWebVC;
@property(retain, nonatomic) QQViewController *campusCircleWebViewController; // @synthesize campusCircleWebViewController=_campusCircleWebViewController;
- (_Bool)canShowSprite;
- (void)cancelReuestSetTemplateID:(id)arg1;
@property(retain, nonatomic) NSString *cardRmarkMobile; // @synthesize cardRmarkMobile=_cardRmarkMobile;
- (void)changeSummaryTypeAndUpdateUI;
- (void)changeSummaryTypeAndUpdateUIIfNeed;
- (void)checkRefresh;
- (void)checkRoleAndDressList;
- (_Bool)checkShowMaxPhotosWall;
- (void)clearVipOutDateBannerRecord;
- (void)clickPersonalVipCardInfo:(id)arg1;
- (void)clickedCoverImage:(id)arg1;
- (void)clickedImageWithIndex:(long long)arg1;
- (void)clickedSeeMore;
- (void)cloudWordRegionClick;
@property(nonatomic) struct CGSize cloudWordRegionSize; // @synthesize cloudWordRegionSize=_cloudWordRegionSize;
@property(retain, nonatomic) NSArray *cloudWords; // @synthesize cloudWords=_cloudWords;
@property(retain, nonatomic) LOTAnimationView *colorfulFloatingScreenAnimationView; // @synthesize colorfulFloatingScreenAnimationView=_colorfulFloatingScreenAnimationView;
- (int)convertSummaryType:(int)arg1;
- (int)convertTouchControlType:(int)arg1;
- (id)creatDefaultModel:(int)arg1;
- (void)createHeaderViewWithClassName:(id)arg1 headName:(id)arg2;
- (id)createPersonalTagCellIfNeed;
- (void)cropViewController:(id)arg1 didFinishCroppingImage:(id)arg2;
- (void)cropViewControllerDidCancel:(id)arg1;
@property(retain, nonatomic) NSDictionary *customTemplateConfig; // @dynamic customTemplateConfig;
@property(nonatomic) int customTemplateId; // @dynamic customTemplateId;
- (void)dealloc;
- (void)deletePhoto:(id)arg1 WithIndex:(long long)arg2;
- (void)didOneBusinessEnter:(long long)arg1;
- (void)doColorfulFloatingScreenAnimationWithConfig:(id)arg1;
- (void)doGameHonourLogoAnimation;
- (void)downloadFileResultWithUrl:(id)arg1 withType:(long long)arg2 andResult:(_Bool)arg3;
- (void)endGetMorePhotosWall;
- (void)endRequestPhotosWall;
- (void)expandTagsCompletion;
- (void)failedRequestSetTemplateID:(id)arg1;
@property(retain, nonatomic) UserSummaryPhotoCoverFootView *footView; // @synthesize footView=_footView;
- (void)friendShieldNotificationDidReceive:(id)arg1;
- (void)gameIconImageDownloadSuccess:(id)arg1;
- (_Bool)getAccessoryType:(int)arg1;
- (id)getCampusCircleFeedContent;
- (id)getCampusCircleNick;
- (id)getDisplayName;
- (int)getEntry;
- (int)getGuestEntry;
- (id)getInfoDic;
- (int)getMyselfEntry;
- (id)getPraiseKey;
- (int)getReserve2;
- (int)getReserve3;
- (id)getSimpleText:(int)arg1;
- (id)getSimpleTextAndPhotosCell:(id)arg1 type:(int)arg2 imageName:(id)arg3 simpleText:(id)arg4 accessoryType:(_Bool)arg5;
- (id)getSimpleTextCell:(id)arg1 type:(int)arg2 imageName:(id)arg3 simpleText:(id)arg4 accessoryType:(_Bool)arg5;
- (id)getSumItemCellImageName:(int)arg1;
- (int)getSummaryType;
- (long long)getUin;
- (void)getUserSummaryInfo;
- (id)getUserVipReportInfo;
- (id)getVersion;
- (void)goBack;
- (void)goSetCardOnGuest;
- (void)goSummaryBackgroundWall;
- (void)goSummaryBackgroundWallUsingCache:(_Bool)arg1;
- (void)goToCardDIYVC:(id)arg1;
- (void)goToChat;
- (void)goToMySummary;
- (void)goToPersonalTagListViewController;
- (void)goToPhotoWallPage:(id)arg1;
- (void)goToQZone;
- (void)goToSignature;
- (void)gotoBizVipDetailInfo;
- (void)gotoQCallPromotionWebView;
- (void)gotoQRCodeCard;
- (void)gotoWebView;
- (void)handleDidSetPersonalTagSwitchStatusNotification:(id)arg1;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)handleNavBarItemClickWithType:(int)arg1;
- (void)handleSetPersonProfileNotification:(id)arg1;
- (void)handleSetPersonalTagSwitchStatusSuccessNotification:(id)arg1;
- (void)handleSetTemplateIdFailed:(long long)arg1 withUserInfo:(id)arg2;
- (void)handleTemplateChange:(id)arg1;
- (void)handleTheOnlyOneClick:(id)arg1;
- (void)handleUserSummaryNavBtClick:(id)arg1;
- (_Bool)hasPhotoWall;
- (id)headerClassName;
@property(nonatomic) _Bool hideBottomOperationBar; // @synthesize hideBottomOperationBar=_hideBottomOperationBar;
- (void)hideVCPendingMenuWithAnim:(_Bool)arg1;
- (void)hobbiesShowExposureReport;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imageWithFileName:(id)arg1;
- (id)imageWithTemplateId:(id)arg1 filename:(id)arg2;
- (id)init;
- (id)initWithSearchName:(id)arg1 SummaryType:(int)arg2 SummaryModel:(id)arg3 popToViewController:(id)arg4;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 Sig:(id)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 SubType:(int)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 groupUin:(unsigned long long)arg3;
- (id)initWithUin:(long long)arg1 SummaryType:(int)arg2 groupUin:(unsigned long long)arg3 Sig:(id)arg4 Phone:(id)arg5;
- (_Bool)isCampusCircleAvailable;
- (_Bool)isFriendMaskWithUin:(id)arg1;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
@property(nonatomic) _Bool isFromCampusCircleWeb; // @synthesize isFromCampusCircleWeb=_isFromCampusCircleWeb;
- (_Bool)isGameHonourCardResourceComplete;
@property(nonatomic) _Bool isGetMore; // @synthesize isGetMore=_isGetMore;
- (_Bool)isItemTypeShownInHeaderForCurrentTemplate:(int)arg1;
- (_Bool)isNeedRefresh;
@property(nonatomic) _Bool isRequest; // @synthesize isRequest=_isRequest;
- (_Bool)isSelfViewing;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (_Bool)isTelePhoneCalling;
- (_Bool)isToday:(id)arg1;
- (id)itemTypesShownInHeaderForCurrentTemplate;
- (void)jumpShopIsOpenBox;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)leftButtonClick:(id)arg1;
- (void)loadAllBusinessEnterModel;
- (void)loadBackImgByUrl:(id)arg1;
- (void)loadBackgroundResFail;
- (void)loadBusinessDataAndRefreshView;
- (void)loadData;
- (void)loadDynamicRes;
- (void)loadItemsZip;
- (void)loadLocalPhotoWall;
- (void)loadMenuData;
- (void)loadPersonalData;
- (void)loadSpriteModel:(long long)arg1;
- (void)loadTableData;
- (void)loadTemplateData:(long long)arg1 andRespResult:(long long)arg2;
- (void)loadView;
- (void)longPressGestureCallback:(id)arg1;
- (void)menuControllerWillHide:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
@property(readonly, nonatomic) UserSummaryModel *model; // @synthesize model=_model;
- (void)modifyNavigationState;
- (void)modifyQQHeadNotify:(id)arg1;
- (void)navigationBarHandle;
- (void)navigationBarStyleWithCurrentTheme;
- (void)navigationBarStyleWithNoTheme;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onAddFriendTouched:(id)arg1;
- (void)onAddPersonalTag:(id)arg1;
- (void)onApplicationWillResignActive;
- (void)onCampusCircleFeedSelect;
- (void)onColorfulFloatingScreenResDownloadFail:(id)arg1;
- (void)onColorfulFloatingScreenResDownloadSuccess:(id)arg1;
- (void)onCoverViewClicked:(id)arg1;
- (void)onCustomHeaderClickHandler:(id)arg1;
- (void)onDeleteNewPhotosWall:(id)arg1;
- (void)onEditOrgGroupInfoTouched:(id)arg1;
- (void)onEditPhotoWallButtonClicked;
- (void)onEnterShopBtnTouched:(id)arg1;
- (void)onGameHonourAddIconClick;
- (void)onGestureBegan:(id)arg1;
- (void)onGestureEnded:(id)arg1;
- (void)onGetNewPhotosWallList:(id)arg1;
- (void)onGetPhotoWallList:(id)arg1;
- (void)onGuestDidPraisePersonalTag:(id)arg1;
- (void)onModifyCampusInfo:(id)arg1;
- (void)onMorePhotoWallButtonClicked:(id)arg1;
- (void)onPhotoWallPictureButtonTapped:(id)arg1;
- (void)onPhotosWallChange:(id)arg1;
- (void)onPushRejectFriend;
- (void)onPushUpdateDeleteFriend;
- (void)onQQDarenViewClick:(id)arg1;
- (void)onQQRefreshFriendListSuccessNotification;
- (void)onRTVoiceCall;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)onReceiveRefreshDataNoti:(id)arg1;
- (void)onRefreshPersonalTag:(id)arg1;
- (void)onRefreshPhotoWallList:(id)arg1 isLocal:(_Bool)arg2;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)onSetPersonProfileNotification:(id)arg1;
- (void)onShopAccountDetailInfoNotification:(id)arg1;
- (void)onShopBindInfoNotification:(id)arg1;
- (void)onShopImageClick:(id)arg1;
- (void)onShowRareIcon;
- (void)onSpriteInstanceBubbleClicked:(id)arg1;
- (void)onSpriteInstanceClicked:(id)arg1;
- (void)onSpriteSaveDBComplete:(id)arg1;
- (void)onTouchControlHeightChange;
- (void)onUpdateCloudWordLayoutFromSharePage:(id)arg1;
- (void)onUploadNewPhotosWall:(id)arg1;
- (void)onUploadPhotoButtonTouched:(id)arg1;
- (void)onUserSUmmaryIdentityImageClick:(id)arg1 tag:(int)arg2;
- (void)onUserSummaryLevelViewClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewChanged:(id)arg1;
- (void)onUserSummaryTableHeaderViewHeaderImageClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewNowViewClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewTimOnlineClick:(id)arg1;
- (void)onUserSummaryTableHeaderViewZanClick:(id)arg1;
- (void)onUserSummaryZanSuccessNotification:(id)arg1;
- (void)openDetailInfo;
- (_Bool)openPriviledgeWebView;
- (void)pendantStoreLua;
@property(retain, nonatomic) USPersonalTagModel *personalTagModel; // @synthesize personalTagModel=_personalTagModel;
- (void)photoWallClick:(id)arg1;
- (id)photoWallPhotoList;
- (double)photosWallCellHeight;
- (void)praiseCountButtonClick;
- (void)pushToInvitationURL;
- (void)pushToSpriteBeanProductionViewController;
- (void)qqMasterMsgPushUpdate:(id)arg1;
- (void)recommendImageDownloadError:(id)arg1;
- (void)recommendImageDownloadSuccess:(id)arg1;
- (void)refreshCover;
- (void)refreshDIYView;
- (void)refreshGameHonourCardUI:(_Bool)arg1;
- (void)refreshPhotoWallView;
- (void)refreshView;
- (void)registerNotifications;
- (void)registerPhotoWallNotifications;
- (void)releaseTimer;
- (void)reloadDataAsRichStateCallback;
- (void)removeCustomTemplate;
- (void)removeInvitationBubble;
- (void)removeLongPressGesture;
- (void)removePhotoWallDataSourceForType:(int)arg1;
- (void)removePhotoWallNotifications;
- (void)removeRequestingUrl;
- (id)removeSpaceAndNewline:(id)arg1;
- (void)reportEnteringUserSummaryCardForAvatarPendant;
- (void)requestCampusCircleNewestFeedForUin:(id)arg1;
- (void)requestDataWithNumber:(id)arg1 secureSig:(id)arg2 uin:(long long)arg3 groupCode:(unsigned long long)arg4;
- (void)requestNowPhotoList;
- (void)requestQzonePhotoWallList;
- (void)requestSummaryCardIfNecessary;
- (void)resetImageRefreshCount;
- (void)resetSpriteState;
- (void)resetThemeOnDisappear;
- (void)resetUIBusy;
- (void)richStateCallback:(id)arg1;
- (id)richStateModel;
- (void)rightButtonPress:(id)arg1;
- (void)saveIsEnterChat;
- (void)scrollToPhotosWall;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendCardMobileMsg:(id)arg1;
- (void)sendModifySummaryRequest;
- (void)sendPhoneMsg;
- (void)setBackgroundImage;
- (void)setBackgroundImageInMainThread;
- (void)setContactNameToRemark;
- (void)setGlobalSummaryEntry:(int)arg1;
- (void)setHeadName:(id)arg1 headerName:(id)arg2;
- (void)setOperationViewEnable:(_Bool)arg1 SummaryType:(int)arg2;
- (void)setRightButtonEnable:(_Bool)arg1 SummaryType:(int)arg2;
@property(nonatomic) _Bool shouldDisplayWithTemplate; // @dynamic shouldDisplayWithTemplate;
@property(retain, nonatomic) UserSpriteModel *spriteModel; // @synthesize spriteModel=_spriteModel;
@property(retain, nonatomic) SpriteMultiImageView *spriteShowView; // @synthesize spriteShowView=_spriteShowView;
@property(nonatomic) int summaryEntry; // @dynamic summaryEntry;
- (void)setSupportWpa:(_Bool)arg1;
- (void)setTagCallBack:(id)arg1;
- (void)setupQzone;
- (_Bool)shouldDisplayLevelCell;
- (_Bool)shouldShowCampusCell;
- (void)showCamera;
- (void)showChangeHeadActionSheet;
- (void)showCustomCardBanner;
- (void)showDIYEditGuide;
- (void)showEaseOutAnimation:(id)arg1;
- (void)showGameHonourLogoAnimation;
- (void)showGuidence;
- (void)showImagePicker;
- (void)showInvitationBubbleIfNeed;
- (void)showOpenningAnimation;
- (void)showOrHideCompletePersonalInfoTipsView:(_Bool)arg1;
- (void)showPhoneContactSheet;
- (void)showSprite;
- (void)showSpriteBox;
- (void)showTagsViewAnimated;
- (void)simplifiedPhotosCell:(id)arg1 clickedPhotoAtIndex:(unsigned long long)arg2;
- (void)sortPhotoWallDataSoucre;
- (void)spriteMultiImgView:(id)arg1 actionDidFinish:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteMultiImgView:(id)arg1 roleAndDressDidFinishLoad:(_Bool)arg2 isDressSucc:(_Bool)arg3;
- (void)startBgAnimation;
- (void)startColorfulFloatingScreenAnimation;
- (void)startGetMorePhotosWall;
- (void)startRequestPhotosWall;
- (void)startRequestSetTemplateID:(id)arg1;
- (void)startUpdateDeviceMotion;
- (void)startUploadHeadImage:(id)arg1;
- (void)stealBox;
- (void)stopColorfulFloatingScreenAnimation;
- (void)stopUpdateDeviceMotion;
- (void)successRequestSetTemplateID:(id)arg1;
- (void)synInfoToFriendList;
- (void)syncSaveProfileModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableViewCellBackgroundColorHighlighted;
- (id)tableViewCellBackgroundColorNormal;
- (struct CGPoint)tableViewContentOffset;
- (id)tableViewSeparatorColor;
- (id)today;
- (void)uiApprovedTag:(id)arg1;
- (_Bool)uiAskForIfTagHasBeenApproved:(id)arg1;
- (id)uiAskForTagModelsToBeShown;
- (_Bool)uiAskIfSelfViewing;
- (void)uiCLickedAddTagButton;
- (void)uiUpSwipedHeaderView;
- (void)uinDidAddToBlockList:(id)arg1;
- (void)uinDidDeleteFromBlockList:(id)arg1;
- (void)unRegisterNotifications;
- (void)upDateAlbumPicCount:(id)arg1;
- (void)updateCompletePersonalInfoTipsView;
- (void)updateHeaderView;
- (void)updateImageModel:(id)arg1 WithIndex:(long long)arg2;
- (void)updateImageModelFrame:(long long)arg1 withPhotos:(id)arg2;
- (void)updateModelDataByProfileModel:(id)arg1 profileModel:(id)arg2;
- (void)updateOperationView:(int)arg1;
- (void)updatePhotosWall:(id)arg1;
- (void)updateQzoneTips:(id)arg1;
- (void)updateRightButton;
- (void)updateShoppingInfo;
- (void)updateStrangerModelInfo;
- (void)updateTimTips:(id)arg1;
- (void)updateUserSummary;
- (void)updateUserSummary:(id)arg1;
- (id)userSummaryModel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewHeadOriginImage;
- (int)viewTag;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) QQAlertView *alertAddFriend; // @dynamic alertAddFriend;
@property(retain, nonatomic) QQAlertView *alertVIP; // @dynamic alertVIP;
@property(retain, nonatomic) UIImageView *bgImgView; // @dynamic bgImgView;
@property(nonatomic) _Bool businessExposureReport; // @dynamic businessExposureReport;
@property(retain, nonatomic) NSMutableArray *businessModelArray; // @dynamic businessModelArray;
@property(retain, nonatomic) NSString *commendName; // @dynamic commendName;
@property(retain, nonatomic) UIImageView *customCardShadowImageView; // @dynamic customCardShadowImageView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGPoint lastContentOffset; // @dynamic lastContentOffset;
@property(retain, nonatomic) NSIndexPath *lastIndexPath; // @dynamic lastIndexPath;
@property(retain, nonatomic) FriendsVerifyMsgStructMsgModle *msgModel; // @dynamic msgModel;
@property(retain, nonatomic) UINavigationController *navi; // @dynamic navi;
@property(retain, nonatomic) NSNumber *overDueNum; // @dynamic overDueNum;
@property(nonatomic) UIViewController *popToViewController; // @dynamic popToViewController;
@property(nonatomic) long long qvlmEmtry; // @dynamic qvlmEmtry;
@property(nonatomic) int referType; // @dynamic referType;
@property(retain, nonatomic) RichStateModel *richStateSigModel; // @dynamic richStateSigModel;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIImage *tempHoldImage; // @dynamic tempHoldImage;

@end
