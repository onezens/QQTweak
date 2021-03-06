//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQTableViewCell.h"

@class NSDictionary, SSoUserAppAdInfoView, UIImage, UIImageView, UILabel, ssoAccountHeadView;

@interface SSoUserInfoAppCell : QQTableViewCell
{
    ssoAccountHeadView *_appHeadImageView;
    UILabel *_appNameLabel;
    UIImageView *_adImageView;
    _Bool _isShowAdView;
    SSoUserAppAdInfoView *_adBannerView;
    NSDictionary *_adInfo;
    UIImage *_adIcon;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SSoUserAppAdInfoView *adBannerView; // @synthesize adBannerView=_adBannerView;
@property(retain, nonatomic) UIImage *adIcon; // @synthesize adIcon=_adIcon;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) NSDictionary *adInfo; // @synthesize adInfo=_adInfo;
- (void)hideAppIconAndShowAd;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appIcon:(id)arg3 appName:(id)arg4;
@property(nonatomic) _Bool isShowAdView; // @synthesize isShowAdView=_isShowAdView;
- (void)layoutSubviews;
- (void)setAppIcon:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)showAppIconAndHideAd;

@end

