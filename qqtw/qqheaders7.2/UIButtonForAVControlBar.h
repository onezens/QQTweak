//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSDictionary;

@interface UIButtonForAVControlBar : UIButton
{
    int _buttonState;
    int _enable;
    int _extra;
    _Bool weatherRelease;
    _Bool removeMark;
    NSDictionary *extraInfoDic;
    struct UIEdgeInsets touchEdgeInsets;
}

- (void)ChangeAlphaWithAlpha:(double)arg1;
@property(nonatomic) int _buttonState; // @synthesize _buttonState;
@property(nonatomic) int _enable; // @synthesize _enable;
- (void)dealloc;
@property(retain, nonatomic) NSDictionary *extraInfoDic; // @synthesize extraInfoDic;
- (int)getEnable;
- (int)getState;
- (id)imageWithImage:(id)arg1 Alpha:(double)arg2;
- (int)indexOfState;
- (id)initWithButtonInfo:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadStyle;
@property(nonatomic) _Bool removeMark; // @synthesize removeMark;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setBaseInfo;
- (void)setColor:(id)arg1;
- (void)setEnable:(int)arg1;
- (void)setExtra:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setState:(int)arg1;
- (void)setState:(int)arg1 Enable:(int)arg2;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAccessibilityStringInfo;
- (void)updateEnableInfo;
- (void)updateStateInfo;

@end
