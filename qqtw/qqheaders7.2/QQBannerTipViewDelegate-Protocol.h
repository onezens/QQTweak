//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQBannerTipView;

@protocol QQBannerTipViewDelegate <NSObject>

@optional
- (void)bannerButtonDidClick:(QQBannerTipView *)arg1 atIndex:(long long)arg2;
- (void)bannerTipViewDidClick:(QQBannerTipView *)arg1;
- (void)bannerTipViewShowStateChange:(_Bool)arg1;
- (void)bannerTipViewShowStateChange:(QQBannerTipView *)arg1 showState:(_Bool)arg2;
@end

