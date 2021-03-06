//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "IQSContactsEngineObserver.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"
#import "UserSummaryTouchControlDelegate.h"

@class AddFriendSendMessageViewController, NSDictionary, NSMutableArray, NSString, QQActionSheet, QQAsynUrlImageView, QQAvatarView, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITableView, UIWebView, UserSummaryContainerTips, UserSummaryModel, UserSummaryNavigationBar, UserSummaryTouchControl, UserSummaryVoiceLabel;

@interface QQContactsCardViewController : QQViewController <MFMessageComposeViewControllerDelegate, UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, UserSummaryTouchControlDelegate, UserSummaryNavBarItemDelagate, IQSContactsEngineObserver>
{
    UIImageView *_headViewBg;
    UIButton *_headMaskButton;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
    UILabel *_tipsLabel;
    UserSummaryTouchControl *_opertionBtn;
    UIButton *_sendSMSButton;
    NSMutableArray *_allPhoneCodes;
    NSMutableArray *_allPhoneLabels;
    NSMutableArray *_allOriginPhoneCodes;
    UITableView *_tableView;
    NSString *_callPhoneNum;
    UIWebView *_phoneCallWebView;
    _Bool _binding;
    _Bool _isFriend;
    _Bool _isInContact;
    _Bool _isPushPhoneCall;
    _Bool _isRecContactFriend;
    UserSummaryModel *_summaryModel;
    QQAsynUrlImageView *_coverView;
    AddFriendSendMessageViewController *_addFriendVC;
    int _summaryEntry;
    UserSummaryNavigationBar *_UserSummaryNavigationBar;
    NSString *_showText;
    UILongPressGestureRecognizer *_longPressGesture;
    NSString *_copyText;
    UserSummaryVoiceLabel *_userSummaryVoiceLabel;
    int _sourceID;
    QQAvatarView *_headView;
    _Bool _callEntry;
    QQActionSheet *_actionSheet;
    _Bool _isSelf;
    id <IQSContactsEngine> _contactsEngine;
    NSString *_uin;
    _Bool _hasSaveContacts;
    double _oldHeight;
    _Bool hasAddVoiceLabelObsever;
    _Bool _isFromBabyQ;
    NSString *_contactName;
    NSString *_headText;
    id <QQNGBackDelegate> _newerGuideDelegate;
    NSDictionary *_newerGuideParams;
}

- (void).cxx_destruct;
- (void)actionAddFriend;
- (void)actionHeadButtonPress:(id)arg1;
- (void)actionPhoneChoose:(id)arg1;
- (void)actionRecommendContact;
- (void)actionRightButtonPress;
- (void)actionSaveContactFriend;
- (void)actionSendMessage;
- (void)actionSendSMS;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addLongPressGesture;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void)copyData:(id)arg1;
- (void)dealloc;
- (void)dialogCancelBtnClick;
- (void)dialogSendBtnClick:(int)arg1 exInfo:(id)arg2;
- (void)didSendAddFriendRequestWithUserInfo:(id)arg1;
- (void)discardHideContacts;
- (_Bool)existPhone:(id)arg1;
- (unsigned long long)getBindingUin;
- (id)getContactName;
- (int)getEntry;
- (id)getInfomationText;
- (id)getOriginContactName;
- (id)getOriginPhoneCode;
- (id)getPhoneCode;
- (int)getPhoneCodeTouchType;
- (int)getReserve2;
- (void)handleNavBarItemClick:(_Bool)arg1;
@property(nonatomic) _Bool hasAddVoiceLabelObsever; // @synthesize hasAddVoiceLabelObsever;
@property(copy, nonatomic) NSString *headText; // @synthesize headText=_headText;
- (void)hideContacts;
- (void)hidePendingMenu;
- (id)initWithMobileAllPhones:(id)arg1 binding:(_Bool)arg2;
- (id)initWithMobileAllPhones:(id)arg1 uin:(id)arg2 binding:(_Bool)arg3;
- (id)initWithMobilePhone:(id)arg1;
- (id)initWithMobilePhoneAndContactName:(id)arg1 contactaName:(id)arg2 headText:(id)arg3;
@property(nonatomic) _Bool isFromBabyQ; // @synthesize isFromBabyQ=_isFromBabyQ;
- (_Bool)isHide;
- (_Bool)isTelePhoneCalling;
- (void)layoutView;
- (void)layoutViewsIfNeeds:(id)arg1;
- (void)loadView;
- (void)longPressGestureCallback:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)navigationBarHandle;
@property(nonatomic) __weak id <QQNGBackDelegate> newerGuideDelegate; // @synthesize newerGuideDelegate=_newerGuideDelegate;
@property(retain, nonatomic) NSDictionary *newerGuideParams; // @synthesize newerGuideParams=_newerGuideParams;
- (void)notifyHideContacts:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onAddFriendTouched:(id)arg1;
- (void)onApplicationWillResignActive;
- (void)onGestureBegan:(id)arg1;
- (void)onGestureEnded:(id)arg1;
- (void)onRTVoiceCallProcess;
- (void)onRTVoiceCallTouched:(id)arg1;
- (void)onResponseSummaryNotification:(id)arg1;
- (void)onSaveContactTouched:(id)arg1;
- (void)onSendMsgTouched:(id)arg1;
- (void)onTouchControlHeightChange;
- (void)openDialWithPhone:(id)arg1;
- (void)openSMSWithPhone:(id)arg1;
- (void)registerObsevers;
- (void)removeLongPressGesture;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) int summaryEntry; // @dynamic summaryEntry;
@property(retain, nonatomic) UserSummaryModel *summaryModel; // @synthesize summaryModel=_summaryModel;
- (void)showAction;
- (void)showPendingMenu:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableViewCellBackgroundColorHighlighted;
- (id)tableViewCellBackgroundColorNormal;
- (void)updateButtons;
- (void)updateHeadViewImage;
- (void)updateHeaderView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(retain, nonatomic) AddFriendSendMessageViewController *addFriendVC; // @dynamic addFriendVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) int sourceID; // @dynamic sourceID;
@property(readonly) Class superclass;
@property(retain, nonatomic) UserSummaryContainerTips *tipsContainer; // @dynamic tipsContainer;
@property(retain, nonatomic) UserSummaryVoiceLabel *userSummaryVoiceLabel; // @dynamic userSummaryVoiceLabel;

@end

