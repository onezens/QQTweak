//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface NearbyGroupListLoadMoreView : UIView
{
    UILabel *_label;
    int _moreGroupCount;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCount:(int)arg2;
- (void)updateMoreCount:(int)arg1;

@end

