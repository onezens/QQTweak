//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSMutableArray, NSString, UICollectionView;

@interface QZFriVideoBannerScrollView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    id <QZIntelligenceBannerContainerDelegate> _delegate;
    long long _totoalVideos;
    int _xo;
    UICollectionView *_mainCollectionView;
    NSArray *_videoBanners;
    NSMutableArray *_videoFeedList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *videoFeedList; // @synthesize videoFeedList=_videoFeedList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QZIntelligenceBannerContainerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @dynamic mainCollectionView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long totoalVideos; // @dynamic totoalVideos;
@property(retain, nonatomic) NSArray *videoBanners; // @dynamic videoBanners;

@end

