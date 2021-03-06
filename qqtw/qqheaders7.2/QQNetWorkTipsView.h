//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class NSString, UIButton, UIColor, UIFont, UIImage, UILabel, UIProgressView;

@interface QQNetWorkTipsView : UIView <UIActionSheetDelegate>
{
    UIImage *_backgroundImage;
    UIImage *_errorTipsImage;
    UIButton *_checkOtherButton;
    UILabel *processLabel;
    long long total;
    UIProgressView *progress;
    NSString *_titleString;
    NSString *_contentString;
    UIFont *_titleFont;
    UIFont *_contentFont;
    UIColor *_fontColor;
    struct CGRect _rectBackground;
    struct CGRect _rectErrorTips;
    struct CGRect _rectCheckButton;
    struct CGRect _rectTitle;
    struct CGRect _rectContent;
    _Bool _isShow;
    UIView *_superView;
    id <QQNetWorkTipsViewDelegate> _delegate;
}

- (void)cancelUpLoad;
- (void)dealloc;
@property(nonatomic) id <QQNetWorkTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCheckButtonSender:(id)arg1;
- (void)dismiss;
- (void)drawRect:(struct CGRect)arg1;
- (void)hiddenDidStop;
- (void)initState;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isShow;
- (void)removeMe;
- (void)removeView;
- (void)setTotal:(long long)arg1;
- (void)show;
- (void)showDidStop;
- (void)showInSuperView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

