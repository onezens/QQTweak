//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, UIScrollView, UISearchBar;

@protocol QQHistorySearchLogicEngineDelegate <NSObject>

@optional
- (void)historyLoadMore;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
- (void)searchBar:(UISearchBar *)arg1 cancelButtonClick:(_Bool)arg2;
- (void)searchBarEndEdit:(UISearchBar *)arg1;
- (void)searchBarShouldReturn:(UISearchBar *)arg1;
- (void)searchBarStartEdit:(UISearchBar *)arg1;
- (void)searchBarValueChange:(UISearchBar *)arg1;
- (_Bool)searchResultCellDidSelect:(NSObject *)arg1;
@end

