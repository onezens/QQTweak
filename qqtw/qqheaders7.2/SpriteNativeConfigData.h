//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, SpriteGamePkgModel;

@interface SpriteNativeConfigData : NSObject
{
    NSMutableArray *_packgeList;
    NSMutableArray *_actionsList;
    SpriteGamePkgModel *_gamePkgModel;
    NSMutableArray *_favoriteList;
    NSMutableArray *_collectionList;
    NSMutableArray *_joinList;
    NSMutableArray *_worldList;
    NSMutableArray *_todayFreeJoinList;
    unsigned long long _actionTimeStamp;
}

@property(nonatomic) unsigned long long actionTimeStamp; // @synthesize actionTimeStamp=_actionTimeStamp;
@property(readonly, nonatomic) NSArray *actionsList; // @synthesize actionsList=_actionsList;
- (void)addActionObject:(id)arg1;
- (void)addCollectionObject:(id)arg1;
- (void)addFavoriteObject:(id)arg1;
- (void)addJoinActiveObject:(id)arg1;
- (void)addPackgeObject:(id)arg1;
- (void)addTodayFreeJoinObject:(id)arg1;
- (void)addWorldCollectionObject:(id)arg1;
@property(readonly, nonatomic) NSArray *collectionList; // @synthesize collectionList=_collectionList;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *favoriteList; // @synthesize favoriteList=_favoriteList;
@property(readonly, nonatomic) SpriteGamePkgModel *gamePkgModel; // @synthesize gamePkgModel=_gamePkgModel;
- (id)init;
@property(readonly, nonatomic) NSArray *joinList; // @synthesize joinList=_joinList;
- (void)modifyActionDataWithAnother:(id)arg1;
- (void)modifyCollectionActionDataWith:(id)arg1;
- (void)modifyFavActionDataWith:(id)arg1;
- (void)modifyGameDataWithGameJsonDic:(id)arg1;
- (void)modifyJoinActiveDataWith:(id)arg1;
- (void)modifyTodayFreeDataWith:(id)arg1;
- (void)modifyWorldDataWith:(id)arg1;
- (void)p_clearActionData;
@property(readonly, nonatomic) NSArray *packgeList; // @synthesize packgeList=_packgeList;
- (void)removeAllCollection;
- (void)removeAllFavorite;
- (void)removeAllJoinActive;
- (void)removeAllTodayFreeJoin;
- (void)removeAllWorldCollection;
- (void)removeCollectionObject:(id)arg1;
- (void)removeFavoriteObject:(id)arg1;
- (void)removeJoinActiveObject:(id)arg1;
- (void)removeTodayFreeJoinObject:(id)arg1;
- (void)removeWorldCollectionObject:(id)arg1;
@property(readonly, nonatomic) NSArray *todayFreeJoinList; // @synthesize todayFreeJoinList=_todayFreeJoinList;
@property(readonly, nonatomic) NSArray *worldList; // @synthesize worldList=_worldList;

@end
