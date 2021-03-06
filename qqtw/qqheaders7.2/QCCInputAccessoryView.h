//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QCCInputAccessoryView : UIView
{
    UIView *_barView;
    UIButton *_emotionBtn;
    UIButton *_imageBtn;
    UIButton *_privateBtn;
    UIButton *_privateTextBtn;
    _Bool _isShowingEmotionBoard;
    id <QCCInputAccessoryViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)clickEmotionBtn:(id)arg1;
- (void)clickImageBtn:(id)arg1;
- (void)clickPrivateBtn:(id)arg1;
@property(nonatomic) __weak id <QCCInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isPrivate;
- (void)layoutAllSubViews;
- (void)showEmotionBoard;
- (void)showKeyboard;

@end

