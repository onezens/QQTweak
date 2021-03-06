//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "NFTopBannerViewDelegate.h"
#import "NewFriendsNotifyListCellProtocol.h"
#import "NewFriendsNotifyListProtocol.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"

@class AddFriendSendMessageViewController, CFFootView, NFResourceListTableView, NSMutableArray, NSString, ODRefreshControl, UIView;

@interface NewFriendsNotifyListViewController : QQViewController <UIActionSheetDelegate, UIScrollViewDelegate, NewFriendsNotifyListProtocol, NewFriendsNotifyListCellProtocol, NFTopBannerViewDelegate>
{
    NSMutableArray *_nfAllDataCache;
    NSMutableArray *_nfShowDataCache;
    unsigned long long _nfUnReadCount;
    _Bool _nfOptimizeFlag;
    _Bool _nfVCPoped;
    UIView *_nfEmptyView;
    CFFootView *_nfFooterView;
    NFResourceListTableView *_nfTableView;
    ODRefreshControl *_nfRefreshControl;
    AddFriendSendMessageViewController *_addFriendVC;
    unsigned long long _nfRecommendUnReadCnt;
    unsigned long long _nfRecommendDataCnt;
    _Bool _firstLoad;
    _Bool _isNFPopSelf;
}

+ (void)requestFriendsVerifyMsgAction:(id)arg1 Action:(id)arg2;
- (void).cxx_destruct;
- (void)actionBtnClicked:(id)arg1;
- (void)agreeAddedFriendResponse:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactMsgClickButton:(id)arg1;
- (void)dealloc;
- (void)didClickTopBannerView:(id)arg1;
- (void)didReceivedAcceptAddResponse:(id)arg1;
- (void)didReceivedAddFriendResponse:(id)arg1;
- (void)didReceivedRefuseResponse:(id)arg1;
- (void)friendsVerifyClickButton:(id)arg1;
- (id)getNFShowDataSource;
- (void)goToFriendRemark:(id)arg1;
- (void)haveNewFriendsVerifyMsg:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isNFPopSelf; // @synthesize isNFPopSelf=_isNFPopSelf;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (void)newFriendsVCFromClickNFIcon:(_Bool)arg1;
- (void)nfMarkAllHasReadState;
- (void)nfMarkHasReadState:(long long)arg1 isReadedReport:(_Bool)arg2;
- (void)nfMarkSingleHasReadState:(id)arg1;
- (void)nfSingleDelSection:(long long)arg1 Row:(long long)arg2;
- (void)onReceiveQIMFansNotify:(id)arg1;
- (void)p_ControlNFPageItemShowState:(long long)arg1;
- (void)p_InitialEmptyMsgView;
- (void)p_InitialNFBannerView;
- (void)p_InitialNFTableView;
- (void)p_NFContactChangeHandle:(id)arg1;
- (void)p_NFEnterBackground;
- (void)p_NFShowDataCheck;
- (void)p_OnAddButtonClick:(id)arg1;
- (void)p_OnlyRefreshNFMsgList;
- (void)p_QuitNFPageReportHasReadData;
- (void)p_RefreshNFPageOnMainThread;
- (void)p_ReloadNFAllData;
- (void)p_StartLoading;
- (void)p_StopLoading;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)reloadDeleteTable:(id)arg1;
- (void)reportSmobaRecommendFriend:(id)arg1;
- (_Bool)shouldShowBindBanner;
- (void)showBindAlertView;
- (void)updateUnReadedCount;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

