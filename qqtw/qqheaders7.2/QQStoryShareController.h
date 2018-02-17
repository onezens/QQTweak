//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivityViewController.h"

#import "QQFriendSelectedViewControllerDelegate.h"
#import "QQStroyLinkDelegate.h"
#import "QQStructureMsgUtilityDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSArray, NSString, PGCStoryModel, QQFriendSelectedViewController, QQNavigationController, QQStoryMsgExInfo, QQStructureMsgUtility, TBHotTopicPackModel, TBQQUserInfoModel;

@interface QQStoryShareController : QQActivityViewController <QQFriendSelectedViewControllerDelegate, QQStructureMsgUtilityDelegate, QQStroyLinkDelegate, RichMsgPreviewDialogDelegate>
{
    NSArray *_activities;
    int _shareType;
    NSString *_shareLink;
    QQNavigationController *_share2QZoneVC;
    QQFriendSelectedViewController *_friendSelectedViewController;
    QQStoryMsgExInfo *_storyExInfo;
    unsigned int _flag;
    QQStructureMsgUtility *_structureMsgUtility;
    id <QQStoryShareControllerDelegate> _delegate;
    PGCStoryModel *_storyModel;
    TBHotTopicPackModel *_ugcModel;
    TBQQUserInfoModel *_userModel;
}

- (void).cxx_destruct;
- (void)actionDidCancel;
- (void)actionDidClick;
- (void)actionDidFail;
- (void)actionDidSuccess;
- (id)addPlayIcon:(id)arg1 size:(struct CGSize)arg2;
- (void)appNotInstall;
- (id)buildFriendSelectViewController:(id)arg1;
- (void)cancelButtonClick;
- (id)clipToRect:(id)arg1 rect:(struct CGRect)arg2;
- (id)compressGroupHeadImageLimitTo32K:(id)arg1;
- (void)dealShareCopyLinkResult:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <QQStoryShareControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissQZoneShareVC;
- (void)doShareToFriends:(id)arg1;
- (void)doShareToQQ:(id)arg1;
- (void)doShareToQQInternal;
- (void)doShareToQZone:(id)arg1;
- (void)doShareToWeiXin:(id)arg1;
- (void)doShareToWeibo:(id)arg1;
- (void)fixStoryShareInfo:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (long long)getActionNameKey;
- (id)getCommonShareLinkPara;
- (id)getCommonShareLinkWebPara;
- (id)getShareFrom;
- (id)getShareWeiboTitle;
- (void)getShortUrlsFailed:(id)arg1 error1:(int)arg2 error2:(int)arg3;
- (void)getShortUrlsSuccess:(id)arg1;
- (id)infoCardShareLink:(id)arg1;
- (id)initWithFlag:(id)arg1;
- (id)initWithFlag:(unsigned int)arg1 storyExInfo:(id)arg2;
- (void)linkActivityDidAction:(id)arg1;
- (id)makeQZoneSmallCoverImage:(id)arg1;
- (id)makeSmallCoverImage:(id)arg1;
- (void)onWeiXinResp:(id)arg1;
- (void)requestShareCoverImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
@property(retain, nonatomic) PGCStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(retain, nonatomic) TBHotTopicPackModel *ugcModel; // @synthesize ugcModel=_ugcModel;
@property(retain, nonatomic) TBQQUserInfoModel *userModel; // @synthesize userModel=_userModel;
- (void)shareDidAppear:(id)arg1;
- (void)shareDidDismiss:(id)arg1;
- (int)shareFromType;
- (id)shareGroupCardShareLink:(id)arg1;
- (void)shareGroupLink:(id)arg1;
- (void)shareToFriendCancelled;
- (void)shareToFriendSuccess;
- (void)shareToQZoneSuccess;
- (void)show;
- (void)showGroupLinkActionSheet:(int)arg1;
- (void)showShareLinkDialog;
- (id)urlEncode:(id)arg1 onlyLinkSymbol:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)weixinNotInstallTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
