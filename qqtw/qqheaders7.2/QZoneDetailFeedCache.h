//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneStorageBase.h"

@class NSMutableArray, NSMutableDictionary;

@interface QZoneDetailFeedCache : QZoneStorageBase
{
    NSMutableArray *_ugcKeyList;
    NSMutableDictionary *_feedsWithUgcKey;
}

+ (id)instance;
- (void).cxx_destruct;
- (_Bool)addFeed:(id)arg1 withKey:(id)arg2;
- (void)clear;
- (void)clearFeeds;
- (void)deleteFeed:(id)arg1;
- (_Bool)enableVersionControl;
- (id)feedCacheKeyWithKey:(id)arg1;
- (void)flush;
- (id)getCurrentFolderPath;
- (int)getCurrentVersion;
- (id)getFeedWithKey:(id)arg1;
- (void)load;
- (id)loadFeed:(id)arg1;
- (void)removeFeedWithUgcKey:(id)arg1;
- (_Bool)saveFeed:(id)arg1 withKey:(id)arg2;

@end

