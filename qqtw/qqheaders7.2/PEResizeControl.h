//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PEResizeControl : UIView
{
    struct CGPoint _translation;
    struct CGPoint _startPoint;
    id _delegate;
}

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)handlePan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGPoint translation; // @synthesize translation=_translation;

@end

