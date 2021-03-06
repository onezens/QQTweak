//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSGroupResultsBaseViewController.h"

#import "FTSDataManagerProtocol.h"
#import "FTSGroupResultsDelegate.h"
#import "FTSNoMoreResultDelegate.h"
#import "QQDynamicSearchTableFootLoadingViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class FTSDataManager, FTSNetDynamicSearchEngine, FTSSearchEngine, NSMutableArray, NSString;

@interface FTSGroupResultsViewController : FTSGroupResultsBaseViewController <FTSGroupResultsDelegate, FTSDataManagerProtocol, FTSNoMoreResultDelegate, UIAlertViewDelegate, QQDynamicSearchTableFootLoadingViewDelegate>
{
    FTSSearchEngine *_ftsSearchEngine;
    FTSNetDynamicSearchEngine *_ftsNetDynamicSearchEngine;
    FTSDataManager *_ftsDataManager;
    NSMutableArray *_ftsMArrRegisterAll;
    NSMutableArray *_ftsMArrRegisterHandled;
    _Bool _ftsReStartEngine;
    int _rdmKeywordSearchFrequency;
    NSString *_lastNetSearchKeyWord;
    NSString *_ftsLastSearchKeyword;
    long long _searchFlag;
    unsigned long long _searchPlanType;
    long long _ftsFliter;
}

- (void).cxx_destruct;
- (void)_ftsDataReportAtWhichPage;
- (void)_ftsDataReportCancelAction;
- (void)_ftsDataReportNetSearchResults;
- (id)_ftsGetCurrMArrRegisterResultsKeyword;
- (id)_ftsGetResultsKeyword;
- (_Bool)_ftsMessageSearchIsNeedCalc:(id)arg1;
- (void)_ftsRDMDataReportGroupElapseCalc;
- (void)_ftsRDMDataReportGroupSearchConsume:(id)arg1;
- (void)_ftsShoppingDataReport:(id)arg1;
- (_Bool)_handleZhInputLanguage:(id)arg1;
- (void)_performHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcess:(id)arg1;
- (void)_searchEventHandleSearchProcessNew:(id)arg1;
- (void)cancelFTSAction;
- (void)checkIsMatchAssociationWord;
- (void)clearLastSearchWord;
- (void)clearOptimizeRegister;
- (void)closeFTSAllTask;
- (void)closeFTSLocalSearchTask:(_Bool)arg1;
- (void)closeFTSNetSearchTask;
- (void)dealloc;
- (void)forceStartNetSearch:(id)arg1;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
- (id)ftsGetAllFeedModel;
- (void)ftsLocalDataSearchResultReport;
- (void)handleFTSSearchEngineResultsNotif:(id)arg1;
- (void)handleShowNoResult;
- (_Bool)hasNativeSearchResult;
- (id)initWithSearchKeyword:(id)arg1;
- (_Bool)isSearchFlagYES:(long long)arg1;
- (void)loadView;
- (void)netSearchRequst:(id)arg1 fromAction:(id)arg2;
- (void)onAssociationWordUpdateCallback:(id)arg1;
- (void)onClickNoMoreResultView:(id)arg1;
- (void)onDidClickNetSearchEnter;
- (void)onDidClickNetSearchPeopleAndGroupEnter;
- (void)onDidClickSearchMore:(id)arg1;
- (long long)onGetFiliter;
- (void)onSwipeUp;
- (void)onTableFootLoadingViewClick:(id)arg1;
- (void)onWillDisplayCell:(id)arg1 atIndexPath:(id)arg2;
- (void)optimizeGroupResultsSearchFrequency:(id)arg1;
- (void)p_aiSearchReportModify:(int)arg1;
- (void)p_reStartFTSEngine;
- (void)refreshSearchGroupResults:(_Bool)arg1 isNeedContinueRefresh:(_Bool)arg2;
- (void)reloadSearchStateAppearance;
- (_Bool)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchEventHandleSearchProcess:(id)arg1;
- (void)setSearchFlagState:(long long)arg1 boolState:(_Bool)arg2;
- (void)startFTSNetSearch:(id)arg1;
- (void)startFTSNetSearch:(id)arg1 fromAction:(id)arg2;
- (void)startUniteSearchRequest:(id)arg1 fromAcion:(long long)arg2;
- (void)stopSearchGroupResults:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

