//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface QQUGCVideoVideoPreviewView : UIView
{
    UIButton *_cancelBtn;
    CDUnknownBlockType _removeAction;
    CDUnknownBlockType _clickAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
- (id)initWithFrame:(struct CGRect)arg1 andImage:(id)arg2;
- (void)layoutSubviews;
- (void)onCancelBtn:(id)arg1;
- (void)refreshInfo:(float)arg1;
@property(copy, nonatomic) CDUnknownBlockType removeAction; // @synthesize removeAction=_removeAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
