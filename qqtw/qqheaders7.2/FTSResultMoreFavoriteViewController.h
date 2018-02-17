//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSResultMoreBaseViewController.h"

@class ShowMoreFavCell;

@interface FTSResultMoreFavoriteViewController : FTSResultMoreBaseViewController
{
    ShowMoreFavCell *_showMoreCell;
    unsigned long long _sortLength;
    _Bool _isStartSearh;
}

- (void).cxx_destruct;
- (void)actionSearch;
- (void)addDatasource:(id)arg1;
- (void)clearDataSource;
- (id)initWithSearchCondition:(id)arg1;
- (void)onSearchResult:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchForMoreResult;
- (void)setMoreCell:(_Bool)arg1 isFetch:(_Bool)arg2;
- (void)stopSearch;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
