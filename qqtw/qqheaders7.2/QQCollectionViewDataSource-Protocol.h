//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QQCollectionView, QQCollectionViewCell;

@protocol QQCollectionViewDataSource <NSObject>
- (QQCollectionViewCell *)collectionView:(QQCollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)numberOfItemInCollectionView:(QQCollectionView *)arg1;
@end

