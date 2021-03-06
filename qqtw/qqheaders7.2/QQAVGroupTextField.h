//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GrpVideoTextFieldButt, UIImageView;

@interface QQAVGroupTextField : UIView
{
    UIView *_lineView;
    _Bool _hiddenCamareBtn;
    _Bool _fobidFlag;
    GrpVideoTextFieldButt *_camareBtn;
    GrpVideoTextFieldButt *_voiceBtn;
    GrpVideoTextFieldButt *_videoBtn;
    GrpVideoTextFieldButt *_giftBtn;
    GrpVideoTextFieldButt *_messageBtn;
    GrpVideoTextFieldButt *_homeBtn;
    GrpVideoTextFieldButt *_returnBtn;
    id <QQAVGroupTextFieldDelegate> _delegate;
    UIImageView *_bgImageView;
    UIImageView *_micBaseMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain) GrpVideoTextFieldButt *camareBtn; // @synthesize camareBtn=_camareBtn;
- (void)dealloc;
@property(nonatomic) __weak id <QQAVGroupTextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool fobidFlag; // @synthesize fobidFlag=_fobidFlag;
- (double)getCameraBtnCenterOriginX;
- (id)getGrpVideoTextFieldButt:(int)arg1 NormalSrc:(id)arg2 PressSrc:(id)arg3 isHidden:(_Bool)arg4;
- (id)getRoundView;
@property(retain) GrpVideoTextFieldButt *giftBtn; // @synthesize giftBtn=_giftBtn;
@property(nonatomic) _Bool hiddenCamareBtn; // @synthesize hiddenCamareBtn=_hiddenCamareBtn;
@property(retain) GrpVideoTextFieldButt *homeBtn; // @synthesize homeBtn=_homeBtn;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)intelnalInit;
- (void)layoutSubviews;
@property(retain) GrpVideoTextFieldButt *messageBtn; // @synthesize messageBtn=_messageBtn;
@property(retain, nonatomic) UIImageView *micBaseMap; // @synthesize micBaseMap=_micBaseMap;
- (void)onPayFlagChange:(id)arg1;
@property(retain) GrpVideoTextFieldButt *returnBtn; // @synthesize returnBtn=_returnBtn;
- (void)setTextFieldButtonsFrame;
@property(retain) GrpVideoTextFieldButt *videoBtn; // @synthesize videoBtn=_videoBtn;
@property(retain) GrpVideoTextFieldButt *voiceBtn; // @synthesize voiceBtn=_voiceBtn;

@end

