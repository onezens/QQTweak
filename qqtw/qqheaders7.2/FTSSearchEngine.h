//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSSearchRecordModule, NSMutableArray, NSOperationQueue, QQRelationSearchFilter;

@interface FTSSearchEngine : NSObject
{
    NSMutableArray *_engineList;
    NSOperationQueue *_ftsOperationQueue;
    FTSSearchRecordModule *_searchRecordModule;
    QQRelationSearchFilter *_ftsBaseSearchFilter;
}

+ (id)GetInstance;
- (void).cxx_destruct;
- (void)clickSearchRecord:(id)arg1;
- (void)deleteSearchRecord:(id)arg1;
- (void)ftsClearAllBusinessSearchEngine;
- (void)ftsConstructFTSEngine;
- (void)ftsDestructFTSEngine;
- (unsigned long long)ftsGetAllBusinessSearchEngineCount;
- (void)ftsGetAllResultsWithSearchKeyword:(id)arg1;
- (void)ftsPauseSearch;
- (void)ftsRegisterBusinessSearchEngine:(long long)arg1;
- (void)ftsStopSearch;
- (id)getAllSearchRecords;
- (id)getLastSearchKeyword;
- (id)init;
- (void)setLastSearchKeyword:(id)arg1;

@end

