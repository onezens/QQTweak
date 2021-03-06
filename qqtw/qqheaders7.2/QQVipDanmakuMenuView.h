//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQVipDanmakuColorViewDelegate.h"
#import "UITextFieldDelegate.h"

@class ComicReadContext, DanMuTextField, NSMutableArray, NSString, QQVipDanmakuColorView, UIButton, UIImageView, UILabel;

@interface QQVipDanmakuMenuView : UIView <UITextFieldDelegate, QQVipDanmakuColorViewDelegate>
{
    _Bool _isShowCommentLab;
    long long _selectedColorIndex;
    UIView *_recognizerView;
    UIImageView *_checkImageView;
    UILabel *_tuCaoNumLab;
    UIButton *_danmuEntryBtn;
    UIView *_blurBg;
    NSMutableArray *_danmuColorArr;
    NSString *_selectDanmuColor;
    UIImageView *_girlHeadImageView;
    UILabel *_colorCannotUseTipsLab;
    UIButton *_jumpToTaskBtn;
    UIButton *_jumpToBuyBtn;
    _Bool _isTyping;
    _Bool _isHorizonMode;
    _Bool _noNeedToChangeFrame;
    double _keyboardHeight;
    long long _tuCaoNum;
    UIView *_colorCannotUseTipsView;
    DanMuTextField *_danMuTextField;
    ComicReadContext *_curReadContext;
    long long _displayMode;
    UIView *_danmuMenuAlphaBg;
    UIImageView *_hotDanmuBg;
    UIButton *_sendBtn;
    QQVipDanmakuColorView *_selectColorView;
    id <QQVipDanmakuMenuViewDelegate> _delegate;
    id <QQVipDanmakuMenuViewDatasource> _datasource;
}

- (void).cxx_destruct;
- (void)changeTuCaoState:(id)arg1;
- (id)colorCannotUseTipsLab;
@property(retain, nonatomic) UIView *colorCannotUseTipsView; // @synthesize colorCannotUseTipsView=_colorCannotUseTipsView;
@property(retain, nonatomic) ComicReadContext *curReadContext; // @synthesize curReadContext=_curReadContext;
@property(retain, nonatomic) DanMuTextField *danMuTextField; // @synthesize danMuTextField=_danMuTextField;
- (id)danmaSwitchBgPath;
- (void)danmuListEntryBtnClicked:(id *)arg1;
@property(retain, nonatomic) UIView *danmuMenuAlphaBg; // @synthesize danmuMenuAlphaBg=_danmuMenuAlphaBg;
@property(nonatomic) __weak id <QQVipDanmakuMenuViewDatasource> datasource; // @synthesize datasource=_datasource;
- (void)dealWithBlurEffect;
@property(nonatomic) __weak id <QQVipDanmakuMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void)drawContentUI;
- (id)girlHeadImageView;
@property(retain, nonatomic) UIImageView *hotDanmuBg; // @synthesize hotDanmuBg=_hotDanmuBg;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isHorizonMode; // @synthesize isHorizonMode=_isHorizonMode;
@property(nonatomic) _Bool isTyping; // @synthesize isTyping=_isTyping;
- (id)jumpToBuyBtn;
- (void)jumpToBuyBtnClicked:(id *)arg1;
- (id)jumpToTaskBtn;
- (void)jumpToTaskBtnClicked:(id *)arg1;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (void)layoutSubviews;
@property(nonatomic) _Bool noNeedToChangeFrame; // @synthesize noNeedToChangeFrame=_noNeedToChangeFrame;
- (void)refreshButton:(id)arg1 title:(id)arg2;
- (void)refreshMainUI:(_Bool)arg1 withKeyboardHeight:(double)arg2;
- (void)refreshTextFieldUI;
- (void)refreshTipsViewLayoutWithModel:(id)arg1;
- (void)refreshTuCaoLabelUI;
- (void)refreshdanmaSwitchBgPath;
- (void)reloadData;
- (void)removeBlurEffect;
- (void)resetDanmuColorInfo:(id)arg1;
@property(retain, nonatomic) QQVipDanmakuColorView *selectColorView; // @synthesize selectColorView=_selectColorView;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
- (void)sendDanMu:(id)arg1;
- (void)setDanmuColorViewHidden:(_Bool)arg1;
- (void)setSelectedDanmuColorView:(id)arg1;
@property(nonatomic) long long tuCaoNum; // @synthesize tuCaoNum=_tuCaoNum;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldBecomeFirstResponder;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldResignFirstResponder;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

