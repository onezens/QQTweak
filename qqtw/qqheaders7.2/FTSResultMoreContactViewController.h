//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSResultMoreBaseViewController.h"

@class NSArray;

@interface FTSResultMoreContactViewController : FTSResultMoreBaseViewController
{
    _Bool _rlIsContinue;
    NSArray *_rlTopResults;
    NSArray *_rlMatchedUids;
}

- (void).cxx_destruct;
- (_Bool)_handleNormalInputLanguage:(id)arg1;
- (_Bool)_handleZhInputLanguage:(id)arg1;
- (void)_searchEventHandleSearchProcess:(id)arg1;
- (void)actionSearch;
- (void)addDatasource:(id)arg1;
- (void)clearDataSource;
- (void)continueRemainSearch:(id)arg1 topResults:(id)arg2 matchUids:(id)arg3;
- (void)delaySearchT9KeyBoard:(id)arg1;
- (void)ftsCustomSearchBarChange:(id)arg1;
- (id)getAIBlurMatchResults;
- (id)initWithSearchCondition:(id)arg1;
- (_Bool)openTimeInput;
- (_Bool)openZnHans;
- (void)resetSearchBarPlaceHolder;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

