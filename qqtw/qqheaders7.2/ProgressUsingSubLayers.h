//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer;

@interface ProgressUsingSubLayers : UIView
{
    CALayer *left;
    CALayer *right;
    double _value;
}

- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)leftColor;
- (id)rightColor;
- (void)setLeftColor:(id)arg1;
- (void)setRightColor:(id)arg1;
@property(nonatomic) double value; // @synthesize value=_value;

@end
