//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "QQBiuFacePanelControllerDelegate.h"
#import "QQBiuRecommandEditViewDelegate.h"
#import "QQFaceKeyBoardDelegate.h"
#import "SimpleAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, QQBiuFacePanelController, QQBiuRecommandEditArticleView, QQBiuRecommandEditView, ReadInJoyChannelArticle, UIButton, UILabel, UIScrollView, UIView;

@interface QQBiuRecommandLightViewController : UIViewController <QQBiuRecommandEditViewDelegate, UIGestureRecognizerDelegate, QQFaceKeyBoardDelegate, QQBiuFacePanelControllerDelegate, UIActionSheetDelegate, SimpleAlertViewDelegate>
{
    _Bool _isCommitDeal;
    _Bool _showFacePanel;
    QQBiuFacePanelController *_facePanel;
    unsigned long long _totalCount;
    long long _oldBarStyle;
    _Bool _hasOtherEdited;
    _Bool _toolBarHidden;
    _Bool _isFirstLoad;
    id <QQMultiBiuEditControllerDelegate> _delegate;
    QQBiuRecommandEditArticleView *_biuArticleView;
    QQBiuRecommandEditView *_biuRecommandEditView;
    ReadInJoyChannelArticle *_articleModel;
    unsigned long long _adtag;
    UIButton *_expressionBtn;
    UILabel *_textCountLabel;
    UIScrollView *_aboveScrollView;
    unsigned long long _bottomBarMode;
    unsigned long long _type;
    NSString *_picurl;
    unsigned long long _duration;
    CDUnknownBlockType _biuSendBlockWebJS;
    UIView *_toolbarView;
    UIView *_containerView;
    double _lastClickTime;
    struct CGRect _countLabelFrame;
}

+ (long long)biuEditMaxCount;
- (void).cxx_destruct;
- (void)SetNightModeLayer;
@property(nonatomic) __weak UIScrollView *aboveScrollView; // @synthesize aboveScrollView=_aboveScrollView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) unsigned long long adtag; // @synthesize adtag=_adtag;
@property(retain, nonatomic) ReadInJoyChannelArticle *articleModel; // @synthesize articleModel=_articleModel;
- (id)base64decode:(id)arg1;
@property(retain, nonatomic) QQBiuRecommandEditArticleView *biuArticleView; // @synthesize biuArticleView=_biuArticleView;
@property(retain, nonatomic) QQBiuRecommandEditView *biuRecommandEditView; // @synthesize biuRecommandEditView=_biuRecommandEditView;
@property(copy, nonatomic) CDUnknownBlockType biuSendBlockWebJS; // @synthesize biuSendBlockWebJS=_biuSendBlockWebJS;
@property(nonatomic) unsigned long long bottomBarMode; // @synthesize bottomBarMode=_bottomBarMode;
- (void)cellDidTapped:(id)arg1 onKeyBoard:(id)arg2;
- (void)cellMoveToPoint:(id)arg1 view:(id)arg2;
- (void)cellStopAtPoint:(id)arg1 data:(id)arg2 view:(id)arg3;
- (_Bool)checkSendOrShowTips;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (id)copyChannelArticleForBiuEditor:(id)arg1;
@property(nonatomic) struct CGRect countLabelFrame; // @synthesize countLabelFrame=_countLabelFrame;
- (void)createCloseButton;
- (void)createNewSociallizeInfoIfEmpty;
- (void)createToolbarView;
- (void)createTopCoverView;
- (void)dealloc;
- (void)delayCheckCommitState;
@property(nonatomic) __weak id <QQMultiBiuEditControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)doApplicationStatusBarTapped;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIButton *expressionBtn; // @synthesize expressionBtn=_expressionBtn;
- (void)faceChoosed:(id)arg1;
- (double)get0x83eProtocolTimeOut;
- (unsigned long long)getBiuSrc;
- (long long)getRealCharCount;
- (id)getUGCInfoWithDic:(id)arg1;
@property(nonatomic) _Bool hasOtherEdited; // @synthesize hasOtherEdited=_hasOtherEdited;
- (void)hideKeyboardWhenQuit;
- (void)hideMyFacePanel;
- (id)init;
- (id)initWithArticleModel:(id)arg1 adTag:(unsigned long long)arg2;
- (id)initWithJSWebQuery:(id)arg1;
- (id)initWithVideoModel:(id)arg1 adTag:(unsigned long long)arg2;
- (void)initfacepanel;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
- (_Bool)isIPhone4or4s;
- (_Bool)isShowExitAlert;
- (_Bool)isSupportRightDragToGoBack;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) double lastClickTime; // @synthesize lastClickTime=_lastClickTime;
- (void)onBiuClick:(id)arg1;
- (void)onBiuViewBeginEdit;
- (void)onBiuViewTextChange;
- (void)onClickAndChooseFace;
- (void)onClickCancelUpload;
- (void)onClickExpressionBtn;
- (void)onClickTopButton;
- (void)onEnterForeGround;
@property(retain, nonatomic) NSString *picurl; // @synthesize picurl=_picurl;
- (void)popKeyBoard;
- (void)popQQController:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)refreshArticleViewLayout;
- (void)refreshEditViewMaxHeightWithMaxY:(double)arg1;
- (void)refreshTextCountLable;
- (void)relayoutSubviews;
- (void)reportBiuAndUploadWithKey:(id)arg1 andR2:(id)arg2 andR3:(id)arg3 andR4:(id)arg4;
- (void)setBiuSendResultBlockForWebJs:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(nonatomic) _Bool toolBarHidden; // @synthesize toolBarHidden=_toolBarHidden;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)shouldIgnoreThisClick:(float)arg1;
- (void)showExitAlertWindow;
- (_Bool)showFaceKeyboardForItemDelegate:(id)arg1 ID:(long long)arg2 forPage:(long long)arg3;
- (void)showKeyboard;
- (void)showLastBottomBar;
- (void)showMyFacePanel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
