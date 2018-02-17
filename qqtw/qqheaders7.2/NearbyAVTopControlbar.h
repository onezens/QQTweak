//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NearbyAVFollowView, NearbyAVLikeEffectTipButton, QQVideoAnimationView, UIButton, UIImageView;

@interface NearbyAVTopControlbar : UIView
{
    UIImageView *_backGroundView;
    UIButton *_closeNearbyVideoBtn;
    UIView *_likeEffectBackgroundView;
    QQVideoAnimationView *_likeEffectAnimationView;
    NearbyAVLikeEffectTipButton *_likeEffectTipView;
    int _avShowStatus;
    id <NearbyAVTopControlbarDelegate> _delegate;
    UIButton *_closeBtn;
    NearbyAVFollowView *_followView;
    UIButton *_reportBtn;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) int avShowStatus; // @synthesize avShowStatus=_avShowStatus;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void)closeNearbyVideoBtnClick:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <NearbyAVTopControlbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NearbyAVFollowView *followView; // @synthesize followView=_followView;
- (void)followViewTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onCloseBtnClick:(id)arg1;
- (void)onReceiveNearbyVideoMatchPushNotify:(id)arg1;
- (void)onReportBtnClick:(id)arg1;
@property(retain, nonatomic) UIButton *reportBtn; // @synthesize reportBtn=_reportBtn;
- (void)setNearbyAVShowStatus:(int)arg1;
- (void)setupLikeEffect;
- (void)setupNotification;
- (void)showLikeEffect:(unsigned long long)arg1;

@end
