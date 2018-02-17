//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ArkAIAppInfoItem, NSArray, NSDictionary, NSString, UIButton, UIColor, UIImageView, UILabel;

@interface ArkRecommendControl : UIView
{
    UIButton *_clickBtn;
    UILabel *_label;
    UIImageView *_iconView;
    struct CGRect _contentRect;
    struct CGRect _frameRect;
    UIImageView *_bgImageView;
    _Bool _hasPopup;
    double _titleMaxWidth;
    int _xo;
    int _animationType;
    UIColor *_textColor;
    double _origX;
    double _origY;
    unsigned long long _queueIndex;
    ArkAIAppInfoItem *_currentInfo;
    NSDictionary *_semantic;
    NSArray *_appInfos;
    NSString *_title;
}

+ (id)createWithAppInfo:(struct CGRect)arg1 contextName:(id)arg2 semantic:(id)arg3 appInfos:(id)arg4;
- (void).cxx_destruct;
- (void)adjustX:(double)arg1;
- (void)adjustY:(double)arg1;
@property(nonatomic) int animationType; // @synthesize animationType=_animationType;
@property(retain, nonatomic) NSArray *appInfos; // @synthesize appInfos=_appInfos;
- (struct CGRect)calcViewRect;
- (void)clickButton;
- (void)close:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)configureClickBtn;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(retain, nonatomic) ArkAIAppInfoItem *currentInfo; // @synthesize currentInfo=_currentInfo;
- (void)dealloc;
- (id)initWithAppInfo:(struct CGRect)arg1 contextName:(id)arg2 semantic:(id)arg3 appInfos:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isShowing;
- (void)layout;
@property(nonatomic) double origX; // @synthesize origX=_origX;
@property(nonatomic) double origY; // @synthesize origY=_origY;
- (void)popUp;
@property(nonatomic) unsigned long long queueIndex; // @synthesize queueIndex=_queueIndex;
@property(retain, nonatomic) NSDictionary *semantic; // @synthesize semantic=_semantic;
- (void)setIcon:(id)arg1;
- (void)setSkinColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)slipLeft:(double)arg1;
- (void)slipRight:(double)arg1;
- (void)touchDownButton;
- (void)touchUpButton;

@end
