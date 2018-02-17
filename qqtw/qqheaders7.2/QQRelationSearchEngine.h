//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, QQRelationSearchUICompositor, UISearchDisplayController;

@interface QQRelationSearchEngine : NSObject
{
    id <QQSearchResultClickResponding> _resultTableClickDelegate;
    UISearchDisplayController *_searchDisplay;
    QQRelationSearchUICompositor *_compositor;
    NSString *_lastInputWord;
    NSMutableArray *_results;
    NSMutableArray *_filters;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (long long)getTimeIntervalBySearchResult:(id)arg1;
+ (_Bool)pIsNeedReduceSortDimension:(id)arg1 currResultPriority:(unsigned long long)arg2 comparedPriority:(int)arg3 usingConfig:(int)arg4;
+ (id)p_GetRelationObjectUid:(id)arg1;
+ (void)p_SortStepByDictionaryOrder:(id)arg1 keyWord:(id)arg2;
+ (void)p_SortStepByWeightAndDictionaryOrder:(id)arg1 keyWord:(id)arg2;
+ (void)p_SortStepByWeightCompare:(id)arg1 keyWord:(id)arg2;
+ (void)sortResults:(id)arg1 keyWord:(id)arg2;
- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)changeTipsText:(id)arg1;
@property(retain, nonatomic) QQRelationSearchUICompositor *compositor; // @synthesize compositor=_compositor;
- (void)dealloc;
- (id)getSearchResult;
- (id)init;
- (id)initFTSUIAdapterForDisGroup;
- (id)initFTSUIAdapterForGroup;
- (id)initForContactListWithType:(long long)arg1;
- (id)initForContactListWithoutMerge;
- (id)initForContactsAndFriends;
- (id)initForCreateDingdongMemberList:(id)arg1;
- (id)initForDGMemberManangeViewController:(long long)arg1;
- (id)initForDgGroupFriendMyComputer:(_Bool)arg1 bShowFavorite:(_Bool)arg2;
- (id)initForDiscussGroupList;
- (id)initForDiscussGroupMemberSelectController:(long long)arg1;
- (id)initForFileForward:(int)arg1;
- (id)initForFileForwardWithDiscuss:(_Bool)arg1;
- (id)initForForwardController;
- (id)initForFriendList;
- (id)initForGroupFileForward;
- (id)initForGroupFriendMyComputer;
- (id)initForGroupList;
- (id)initForGroupMemberList:(unsigned long long)arg1;
- (id)initForGroupMemberModelList:(id)arg1;
- (id)initForHongbaoWithMode:(long long)arg1;
- (id)initForMulMemSelWithRlItemType:(long long)arg1 andGroupType:(long long)arg2 IsSupportGroupSearch:(_Bool)arg3;
- (id)initForPublicAccountList;
- (id)initForSelectFriendWithMode:(long long)arg1;
- (id)initForUnCommonFriList;
- (id)initForWeiyunFileForward:(_Bool)arg1;
- (id)initLbsForPoiList:(id)arg1;
- (void)refreshSearchResults;
@property(nonatomic) __weak id <QQSearchResultClickResponding> resultTableClickDelegate; // @synthesize resultTableClickDelegate=_resultTableClickDelegate;
@property(nonatomic) __weak UISearchDisplayController *searchDisplay; // @synthesize searchDisplay=_searchDisplay;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchResultForSearchString:(id)arg1 completitonBlock:(CDUnknownBlockType)arg2;
- (void)searchResultForSearchStringWithSeperateFilterSort:(id)arg1 completitonBlock:(CDUnknownBlockType)arg2;
- (id)searchResultTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchResultTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchResultTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)searchResultTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)searchResultTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

@end
