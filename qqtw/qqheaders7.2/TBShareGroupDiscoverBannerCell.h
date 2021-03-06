//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TBCycleBannerViewDataSource.h"
#import "TBCycleBannerViewDelegate.h"

@class NSString, TBCycleBannerView, TBSquareBannerBizModel;

@interface TBShareGroupDiscoverBannerCell : UITableViewCell <TBCycleBannerViewDelegate, TBCycleBannerViewDataSource>
{
    TBCycleBannerView *_banner;
    TBSquareBannerBizModel *_model;
    unsigned long long _currentBannerIndex;
}

+ (double)height;
- (void)configureCell:(id)arg1;
- (long long)contentModeForImageIndex:(unsigned long long)arg1;
- (void)createUI;
@property(nonatomic) unsigned long long currentBannerIndex; // @synthesize currentBannerIndex=_currentBannerIndex;
- (void)cycleBannerView:(id)arg1 didScrollToIndex:(unsigned long long)arg2;
- (void)cycleBannerView:(id)arg1 didSelectedAtIndex:(unsigned long long)arg2;
- (void)dealloc;
- (id)imagesOfTBCycleBannerView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) TBSquareBannerBizModel *model; // @synthesize model=_model;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

