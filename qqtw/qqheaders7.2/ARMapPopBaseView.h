//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface ARMapPopBaseView : UIView
{
    UIView *_contentView;
    UIView *_maskView;
    UIButton *_closeBtn;
    struct CGPoint _popPoint;
}

- (void).cxx_destruct;
- (void)dismiss;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showInView:(id)arg1 point:(struct CGPoint)arg2;

@end
