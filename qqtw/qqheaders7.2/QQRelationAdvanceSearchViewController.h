//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "FTSCompositeProtocol.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CompositeTableResultDelegate, FTSCustomSearchBar, NSArray, NSString, NSTimer, UIButton, UITableView;

@interface QQRelationAdvanceSearchViewController : QQViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, FTSCompositeProtocol>
{
    NSString *_keyword;
    NSString *_from;
    long long _reqSearchFrom;
    FTSCustomSearchBar *_searchBar;
    UIButton *_cancelBtn;
    UITableView *_dropdownTable;
    NSArray *_compositeImages;
    CompositeTableResultDelegate *_tableDelegate;
    NSArray *_accountSearchResult;
    NSArray *_groupSearchResult;
    NSArray *_publicSearchResult;
    NSArray *_qzFeedSearchResult;
    NSArray *_titlesForSection;
    _Bool _cancelBtnClicked;
    _Bool _isPushEnter;
    int _xo;
    int _pbArticleSource;
    NSString *_from2;
    long long _ftsFliter;
    UITableView *_compositeSearchResultTable;
    NSArray *_articleSearchResult;
    NSTimer *_reqSearchTimer;
}

- (void).cxx_destruct;
- (void)_ftsReportNetResultsCount;
@property(retain, nonatomic) NSArray *articleSearchResult; // @synthesize articleSearchResult=_articleSearchResult;
- (void)compositeHandlePopLogicForFTS;
@property(retain, nonatomic) NSArray *compositeImages; // @dynamic compositeImages;
- (void)compositeSearchLogic:(id)arg1;
@property(retain, nonatomic) UITableView *compositeSearchResultTable; // @synthesize compositeSearchResultTable=_compositeSearchResultTable;
- (void)dealloc;
- (void)destorySelfView;
@property(retain, nonatomic) NSString *from2; // @synthesize from2=_from2;
- (void)ftsCustomSearchBarReturnButtonClicked:(id)arg1;
@property(nonatomic) long long ftsFliter; // @synthesize ftsFliter=_ftsFliter;
- (id)getHotwordUrlFromArticleSearch:(id)arg1;
- (int)getSummaryTypeUsingSearchResult:(id)arg1;
- (_Bool)gotoGroupCardIfResultCountIsUnique:(id)arg1 KeyWord:(id)arg2 typeKey:(id)arg3;
- (_Bool)gotoPublicCardIfResultCountIsUnique:(id)arg1;
- (void)gotoQzoneActive:(id)arg1;
- (void)gotoSingleSearchResult:(id)arg1;
- (void)gotoSummaryCard:(id)arg1;
- (_Bool)gotoSummaryCardIfResultCountIsUnique:(id)arg1;
- (void)handleSearchReqFromFTS;
- (id)init;
- (_Bool)isEmpty:(id)arg1;
- (_Bool)isSupportFullScreenLayout;
- (_Bool)isSupportRightDragToGoBack;
- (void)loadView;
- (void)onCompositeSearchGetResultNotification:(id)arg1;
- (void)onFTSCompositeDidScrollView;
- (void)onReqSearchTimer:(id)arg1;
- (void)onSingleSearchResultNotification:(id)arg1;
@property(nonatomic) int pbArticleSource; // @synthesize pbArticleSource=_pbArticleSource;
- (_Bool)prefersStatusBarHidden;
- (void)removeDropdownTable;
@property(retain, nonatomic) NSTimer *reqSearchTimer; // @synthesize reqSearchTimer=_reqSearchTimer;
- (void)reseivedGotoGroupSettingNotification:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)showDropdownTable;
- (void)showOfficalAccountDetailWithUin:(unsigned long long)arg1;
- (void)showOfficalAccountDetailWithUin:(long long)arg1 account_flag:(unsigned int)arg2;
- (void)showOfficalAccountDetailWithUin:(unsigned long long)arg1 source:(unsigned int)arg2;
- (void)singleSearchLogic:(id)arg1 withType:(unsigned int)arg2;
- (void)startReqSearchTimer:(id)arg1 andIsSingle:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tintCellForCompositeSearch:(id)arg1 atIndexPath:(id)arg2;
- (void)uploadData:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(retain, nonatomic) NSArray *accountSearchResult; // @dynamic accountSearchResult;
@property(retain, nonatomic) UIButton *cancelBtn; // @dynamic cancelBtn;
@property(nonatomic) _Bool cancelBtnClicked; // @dynamic cancelBtnClicked;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UITableView *dropdownTable; // @dynamic dropdownTable;
@property(retain, nonatomic) NSString *from; // @dynamic from;
@property(retain, nonatomic) NSArray *groupSearchResult; // @dynamic groupSearchResult;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) NSArray *publicSearchResult; // @dynamic publicSearchResult;
@property(nonatomic) long long reqSearchFrom; // @dynamic reqSearchFrom;
@property(retain, nonatomic) FTSCustomSearchBar *searchBar; // @dynamic searchBar;
@property(readonly) Class superclass;
@property(retain, nonatomic) CompositeTableResultDelegate *tableDelegate; // @dynamic tableDelegate;
@property(retain, nonatomic) NSArray *titlesForSection; // @dynamic titlesForSection;

@end
