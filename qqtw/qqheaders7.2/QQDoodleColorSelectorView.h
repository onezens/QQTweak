//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QQDoodlePainView, TBExtendedHitButton, UIActivityIndicatorView, UIImageView, UIScrollView;

@interface QQDoodleColorSelectorView : UIView
{
    long long currentSelColorIndex;
    long long currentSelGifIndex;
    long long fastClickUnDoBtnCount;
    double lastClickUnDoBtnTime;
    TBExtendedHitButton *_undoBtn;
    UIScrollView *_gifSelectView;
    UIScrollView *_colorSelectView;
    QQDoodlePainView *_paintView;
    id <QQDoodleColorSelectorViewDelegate> _selectColordelegate;
    NSMutableArray *_rainbowColorArrar;
    NSMutableArray *_gifArrar;
    NSMutableArray *_colorIconArray;
    NSMutableArray *_gifPreimageIconArrar;
    UIImageView *_boardShadowOne;
    UIImageView *_boardShadowTwo;
    UIImageView *_colorSelectViewShadow;
    UIImageView *_colorSelectStateView;
    UIImageView *_gifSelectStateView;
    UIActivityIndicatorView *_colorIndicator;
    UIActivityIndicatorView *_gifIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *boardShadowOne; // @synthesize boardShadowOne=_boardShadowOne;
@property(retain, nonatomic) UIImageView *boardShadowTwo; // @synthesize boardShadowTwo=_boardShadowTwo;
- (void)changeSelColor:(id)arg1;
- (void)changeSelGif:(id)arg1;
@property(retain, nonatomic) NSMutableArray *colorIconArray; // @synthesize colorIconArray=_colorIconArray;
@property(retain, nonatomic) UIActivityIndicatorView *colorIndicator; // @synthesize colorIndicator=_colorIndicator;
@property(retain, nonatomic) UIImageView *colorSelectStateView; // @synthesize colorSelectStateView=_colorSelectStateView;
@property(retain, nonatomic) UIScrollView *colorSelectView; // @synthesize colorSelectView=_colorSelectView;
@property(retain, nonatomic) UIImageView *colorSelectViewShadow; // @synthesize colorSelectViewShadow=_colorSelectViewShadow;
- (void)dealloc;
- (void)didSelectGifAt:(long long)arg1;
- (void)dynaDoodleIconUpdateDone;
@property(retain, nonatomic) NSMutableArray *gifArrar; // @synthesize gifArrar=_gifArrar;
@property(retain, nonatomic) UIActivityIndicatorView *gifIndicator; // @synthesize gifIndicator=_gifIndicator;
@property(retain, nonatomic) NSMutableArray *gifPreimageIconArrar; // @synthesize gifPreimageIconArrar=_gifPreimageIconArrar;
@property(retain, nonatomic) UIImageView *gifSelectStateView; // @synthesize gifSelectStateView=_gifSelectStateView;
@property(retain, nonatomic) UIScrollView *gifSelectView; // @synthesize gifSelectView=_gifSelectView;
- (void)handleLongPress:(id)arg1;
- (void)initColorSelectView;
- (void)initColorSelectView:(id)arg1;
- (void)initGifSelectView;
- (void)initGifSelectView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorSelDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)onColorBtnClick:(id)arg1;
- (void)onGifBtnClick:(id)arg1;
- (void)onUndoButtonClick:(id)arg1;
@property(nonatomic) __weak QQDoodlePainView *paintView; // @synthesize paintView=_paintView;
@property(retain, nonatomic) NSMutableArray *rainbowColorArrar; // @synthesize rainbowColorArrar=_rainbowColorArrar;
@property(nonatomic) __weak id <QQDoodleColorSelectorViewDelegate> selectColordelegate; // @synthesize selectColordelegate=_selectColordelegate;
@property(retain, nonatomic) TBExtendedHitButton *undoBtn; // @synthesize undoBtn=_undoBtn;

@end

