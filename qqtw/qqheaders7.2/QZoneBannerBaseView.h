//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSDictionary, UIImageView, UILabel;

@interface QZoneBannerBaseView : UIButton
{
    UILabel *_descriptionLabel;
    UIImageView *_arrowView;
    id <QZoneBannerDelegate> _delegate;
    NSDictionary *_bannerInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
- (long long)bannerType;
- (void)createArrow;
- (void)createLabel;
- (void)dealloc;
@property(nonatomic) __weak id <QZoneBannerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reportClick;
- (void)reportDisplay;
- (void)updateBanner;
- (void)updateDescriptionText:(id)arg1;
- (void)willBeRemoved;

@end
