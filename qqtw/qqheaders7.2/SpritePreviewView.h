//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQView.h"

@class SpriteMultiImageView, UIButton, UIImageView;

@interface SpritePreviewView : QQView
{
    SpriteMultiImageView *_spriteMultiView;
    UIImageView *_contentView;
    UIButton *_closeBtn;
    id <SpritePreviewCloseDelegate> _spriteCloseDelegate;
}

+ (id)customLineWithWidth:(double)arg1;
- (void)animationDidLoad;
- (void)baseUIInit;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (void)initAvatarViewWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onCloseClick:(id)arg1;
@property(nonatomic) id <SpritePreviewCloseDelegate> spriteCloseDelegate; // @synthesize spriteCloseDelegate=_spriteCloseDelegate;
@property(retain, nonatomic) SpriteMultiImageView *spriteMultiView; // @synthesize spriteMultiView=_spriteMultiView;

@end

