//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UnsubcribeTips;

@interface UnsubcribeTipsCoverView : UIView
{
    struct CGRect textFrame;
    UnsubcribeTips *tipsView;
    _Bool _show;
    int _index;
}

- (void)dismiss;
- (struct CGRect)getTipsViewFrameByPoint:(struct CGPoint)arg1;
@property(nonatomic) int index; // @synthesize index=_index;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialView;
@property(nonatomic) _Bool show; // @synthesize show=_show;
- (_Bool)showWithFrame:(struct CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateTipsFrame:(struct CGRect)arg1;

@end
