//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVipComicReadTableViewBaseCell.h"

@class QQVipComicAdvertiseView, UIControl;

@interface QQVipComicAdvertiseCell : QQVipComicReadTableViewBaseCell
{
    QQVipComicAdvertiseView *_advertiseView;
    UIControl *_containerView;
}

- (void)clickEmpty:(id)arg1;
- (void)dealloc;
- (void)handleSingleTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDisplayMode:(int)arg1;

// Remaining properties
@property(retain, nonatomic) QQVipComicAdvertiseView *advertiseView; // @dynamic advertiseView;

@end
