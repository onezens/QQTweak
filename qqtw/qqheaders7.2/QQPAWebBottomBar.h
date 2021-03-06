//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface QQPAWebBottomBar : UIView
{
    id <QQPAWebBottomBarDelegate> _delegate;
    unsigned long long _urlFlag;
    NSMutableArray *_buttonArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) id <QQPAWebBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 andUrlFlag:(unsigned long long)arg2;
- (_Bool)isLastButton:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)onClickButton:(id)arg1;
- (void)resetButtonView;
- (void)setBottomBarChangeButton:(id)arg1;
- (void)setBottomBarInit:(id)arg1;
@property(nonatomic) unsigned long long urlFlag; // @synthesize urlFlag=_urlFlag;

@end

