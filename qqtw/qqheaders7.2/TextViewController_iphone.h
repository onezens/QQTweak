//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TextBaseViewController.h"

#import "ActionSheetDataDelegate.h"
#import "QRChapterListViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, QQReaderBookShareController, QQShareWebRichMsgLogic, QQWebShareActionSheet;

@interface TextViewController_iphone : TextBaseViewController <ActionSheetDataDelegate, QRChapterListViewControllerDelegate, UIActionSheetDelegate>
{
    double _brightValue;
    _Bool _brightChange;
    QQReaderBookShareController *_shareCtrl;
    float _progressValueNow;
    float _progressValueBefore;
    _Bool _isInFontUpProcess;
    _Bool _enteredBook;
    _Bool _isGetComment;
    int _lastUnreadCount;
    QQWebShareActionSheet *_shareActionSheet;
    QQShareWebRichMsgLogic *_sendRichMsgLogic;
    NSString *_introUrl;
}

- (void).cxx_destruct;
- (void)appendProgressViewAboveBottomView;
- (void)autoPaySelected:(id)arg1;
- (void)backItemPressed;
- (void)bookMarkItemPressed:(id)arg1;
- (id)bookRelatedInfo;
- (void)bottomCommentItemPressed;
- (void)chapterCommnetAmountRenewHandler:(id)arg1;
- (void)chapterInfoUpdateFailed:(id)arg1;
- (void)chapterInfoUpdater:(id)arg1 updateSuccess:(id)arg2;
- (void)commentItemPressed;
- (void)dashangItemPressed;
- (void)dayNightItemPressed;
- (void)dealloc;
- (void)directoryItemPressed;
- (void)doAddBookShelf;
- (void)doBackToShelfAndSomethingInViewDidDisappear;
- (_Bool)doJumpToUnpublishHint;
- (void)doOpenDetail;
- (void)doSetPersonalSig;
- (void)doShareBook;
- (void)downloadItemPressed;
- (void)endFontChange;
- (void)enterBackground;
- (void)fontDownItemPressed;
- (void)fontUpItemPressed;
- (id)getDataForConfig:(id)arg1;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (id)getImageForHintQQitemForHintRect:(struct CGRect)arg1;
- (void)gotoNewChapterForProgressItemPressedWithChapterId:(long long)arg1 toForward:(_Bool)arg2;
- (void)gotoNewProgressForProgressItemPressedWithProgress:(long long)arg1 toForward:(_Bool)arg2;
- (void)handleTimer:(id)arg1;
- (id)init;
- (void)initAddBookShelfView;
- (void)initBottomView;
- (void)initMiddleView;
- (void)initTopView;
- (void)initTopViewSubViews;
@property(retain, nonatomic) NSString *introUrl; // @synthesize introUrl=_introUrl;
@property(nonatomic) _Bool isGetComment; // @synthesize isGetComment=_isGetComment;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) int lastUnreadCount; // @synthesize lastUnreadCount=_lastUnreadCount;
- (void)leftButtonClick:(id)arg1;
- (void)lightSliderChanged:(id)arg1;
- (void)lightSliderEne:(id)arg1;
- (void)lightSliderStart:(id)arg1;
- (void)ligthWithSystem:(id)arg1;
- (void)moreItemPressed;
- (void)newUnreadCount;
- (void)nextProgressItemPressed:(id)arg1;
- (void)onPswViewDismiss;
- (void)onReceiveRemoteMsgGotoDetailNew:(id)arg1;
- (void)onStartPopping:(id)arg1;
- (void)prevProgressItemPressed:(id)arg1;
- (void)progressItemPressed;
- (void)progressSliderBegan:(id)arg1;
- (void)progressSliderChanged:(id)arg1;
- (void)progressSliderMoved:(id)arg1;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqItemPressed;
- (void)refreshProgressValue;
- (void)requestBookIntro;
- (void)resetTopView;
- (void)revokeProgressJump;
@property(retain, nonatomic) QQShareWebRichMsgLogic *sendRichMsgLogic; // @synthesize sendRichMsgLogic=_sendRichMsgLogic;
- (void)seniorSettingPressed;
@property(retain, nonatomic) QQWebShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
- (void)settingItemPressed:(id)arg1;
- (void)shareURLWebRichData:(id)arg1;
- (void)shareWithFriend;
- (void)shareWithQZone;
- (void)shareWithWeChatCircle;
- (void)shareWithWeChatFriend;
- (_Bool)showTipsWithTips:(id)arg1;
- (void)showTopView:(_Bool)arg1;
- (void)showTopView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startFontChangeWithIsUpButton:(_Bool)arg1;
- (void)toggleBottomView:(_Bool)arg1;
- (void)touchDownAndHideMiddleview;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enteredBook; // @dynamic enteredBook;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isInFontUpProcess; // @dynamic isInFontUpProcess;
@property(retain, nonatomic) QQReaderBookShareController *shareCtrl; // @dynamic shareCtrl;
@property(readonly) Class superclass;

@end

