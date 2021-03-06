//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseLogicEngine.h"

#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "TaggedSearchBarDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"

@class FavClassChooseView, FavSearchView, NSArray, NSString, QQViewController, ShowMoreFavCell, UIButton, UITableView, UITapGestureRecognizer;

@interface FavSearcherLogicEngin : QQSearchBaseLogicEngine <UISearchBarDelegate, TaggedSearchBarDelegate, UIGestureRecognizerDelegate, QQMoreOptionTableViewCellScrollStateDelegate>
{
    NSArray *_resultList;
    NSArray *_historyList;
    int _searchType;
    UITableView *_searchTableView;
    ShowMoreFavCell *_showMoreCell;
    UITapGestureRecognizer *_recognizer;
    QQViewController *_parentViewController;
    int _xo;
    int _currentClassification;
    unsigned int _filterFolder;
    UIButton *_leftButton;
    UIButton *_rightButton;
    FavSearchView *_searchBarEx;
    int _curClassification;
    int _savedStatusBarStyle;
    id <FavSearcherLogicEnginDelegate> _delegate;
    FavClassChooseView *_classifyView;
}

- (void)adjustFrame:(_Bool)arg1 animate:(_Bool)arg2;
- (void)cancelSearch:(_Bool)arg1 animate:(_Bool)arg2;
- (void)changeClassification:(int)arg1;
- (void)dealloc;
- (void)doAdjust:(_Bool)arg1 animate:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleBGClick:(id)arg1;
- (id)initWithViewCtrl:(id)arg1;
- (_Bool)isMessageTabInLeftSwipState;
- (_Bool)isNeedLayoutViews;
- (_Bool)isSearchingWithTag;
@property(retain, nonatomic) UIButton *leftButton; // @dynamic leftButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)reloadSearchTableData:(id)arg1;
@property(retain, nonatomic) UIButton *rightButton; // @dynamic rightButton;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
@property(retain, nonatomic) FavSearchView *searchBarEx; // @synthesize searchBarEx=_searchBarEx;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidChanged:(id)arg1;
- (void)searchForMoreResult;
- (void)searchTagDeleted:(_Bool)arg1;
@property(nonatomic) int currentClassification; // @dynamic currentClassification;
- (void)showResult:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <FavSearcherLogicEnginDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned int filterFolder; // @dynamic filterFolder;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSArray *historyList; // @dynamic historyList;
@property(nonatomic) QQViewController *parentViewController; // @dynamic parentViewController;
@property(retain, nonatomic) NSArray *resultList; // @dynamic resultList;
@property(readonly) Class superclass;

@end

