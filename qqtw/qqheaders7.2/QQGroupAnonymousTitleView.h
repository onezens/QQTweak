//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface QQGroupAnonymousTitleView : UIView
{
    NSString *_mainTitle;
    NSString *_modeStr;
}

- (void)dealloc;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 mainTitle:(id)arg2 modeStr:(id)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) NSString *modeStr; // @synthesize modeStr=_modeStr;
- (void)setLabelTextColor:(id)arg1;

@end
