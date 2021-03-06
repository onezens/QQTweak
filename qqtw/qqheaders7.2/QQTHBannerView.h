//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQHeaderCell.h"

@class QQTableHeaderContentView, UIButton, UIImageView, UILabel;

@interface QQTHBannerView : QQHeaderCell
{
    UIButton *_closeButton;
    QQTableHeaderContentView *_headerContentView;
    unsigned long long _bannerStyle;
    int _issueCount;
    int _xo;
    UILabel *_textLabel;
    UILabel *_subtextLabel;
    UIImageView *_iconImageView;
    UIImageView *_bagroundImageView;
}

- (void).cxx_destruct;
- (double)headerHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBannerStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) unsigned long long bannerStyle; // @dynamic bannerStyle;
@property(readonly, nonatomic) UIButton *closeButton; // @dynamic closeButton;
@property(nonatomic) __weak QQTableHeaderContentView *headerContentView; // @dynamic headerContentView;
@property(nonatomic) int issueCount; // @dynamic issueCount;

@end

