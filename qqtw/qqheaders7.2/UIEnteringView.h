//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface UIEnteringView : UIView
{
    UIView *maskingView_;
    UIImageView *logoImageView;
    UIImageView *lineImageView;
    UIImageView *dotImageView;
    int _topOffset;
    UILabel *_pTitleLabel;
}

- (void)asyncShowInView:(id)arg1;
- (void)dealloc;
- (void)doAnimation;
- (void)doCancel:(id)arg1;
- (id)initWithTitle:(id)arg1;
@property(retain, nonatomic) UILabel *pTitleLabel; // @synthesize pTitleLabel=_pTitleLabel;
@property(nonatomic) int topOffset; // @synthesize topOffset=_topOffset;
- (void)showInView:(id)arg1;

@end
