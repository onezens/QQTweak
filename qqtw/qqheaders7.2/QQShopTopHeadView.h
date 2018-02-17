//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QQAsynUrlImageView, UIImageView, UILabel;

@interface QQShopTopHeadView : UIButton
{
    _Bool isHasPlayAnimate;
    double _width;
    double _index;
    double _height;
    QQAsynUrlImageView *_iconView;
    UIImageView *_redDotView;
    UILabel *_label;
}

- (void)dealloc;
@property(retain, nonatomic) QQAsynUrlImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithIndex:(unsigned long long)arg1 width:(double)arg2 height:(double)arg3 image:(id)arg4 imageUrl:(id)arg5 text:(id)arg6;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)playShowAnimationWithImage:(id)arg1;
@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=_redDotView;
- (void)reloadTitle:(id)arg1;

@end
