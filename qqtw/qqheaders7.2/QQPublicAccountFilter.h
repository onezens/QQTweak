//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationSearchFilter.h"

@class NSMutableArray;

@interface QQPublicAccountFilter : QQRelationSearchFilter
{
    NSMutableArray *_publicAccounts;
    long long _type;
    _Bool _offlineSearch;
}

+ (id)getModel:(id)arg1;
+ (_Bool)isCrmIvrVoipRecord:(id)arg1;
+ (void)publicAccountSortWeightCalc:(id)arg1 keyword:(id)arg2;
+ (void)sortResults:(id)arg1 keyWord:(id)arg2;
- (void).cxx_destruct;
- (void)ClickPercentConvert:(id)arg1 totalClicks:(unsigned long long)arg2;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (void)doInit;
- (id)init;
- (id)initWithFliter:(long long)arg1 offLineSearch:(_Bool)arg2;

@end

