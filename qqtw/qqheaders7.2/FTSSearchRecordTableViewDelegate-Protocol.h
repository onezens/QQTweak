//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSRecommendItem, NSIndexPath, NSString, QQDynamicHotWordItem, UITableView;

@protocol FTSSearchRecordTableViewDelegate <NSObject>

@optional
- (void)FTSSearchRecordTableView:(UITableView *)arg1 didClickDynamicHotIndex:(NSString *)arg2;
- (void)FTSSearchRecordTableView:(UITableView *)arg1 didClickDynamicHotWord:(QQDynamicHotWordItem *)arg2;
- (void)FTSSearchRecordTableView:(UITableView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2 itemData:(FTSRecommendItem *)arg3;
- (void)onDidFTSSearchRecordTableViewBeginDragging;
@end

