//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface UIImageTitleButton : UIButton
{
    UIImageView *_iconView;
    UILabel *_buttonTitleLabel;
}

@property(retain, nonatomic) UILabel *buttonTitleLabel; // @synthesize buttonTitleLabel=_buttonTitleLabel;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithTitle:(id)arg1 andIcon:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;

@end

