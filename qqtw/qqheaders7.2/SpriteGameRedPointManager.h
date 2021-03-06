//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface SpriteGameRedPointManager : NSObject
{
    NSCache *_cache;
}

+ (id)sharedInstance;
- (id)activityMission;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)cacheRedPointItem:(id)arg1 gameId:(int)arg2 dotId:(int)arg3;
- (id)contentOfBufferDict;
- (void)dealloc;
- (void)fecth:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)gameActivityBufferDict;
- (id)gamePushItem;
- (id)getRedPointItem:(int)arg1 dotId:(int)arg2;
- (id)getRedPointModel:(int)arg1;
- (id)getRedPointModelList;
- (int)hasGameRedPoint;
- (id)init;
- (_Bool)isNeedShowAIOGameActivityBubble;
- (_Bool)isNeedShowGameCoverRedPoint:(int)arg1;
- (_Bool)isNeedShowSpritePanelGameListRedPoint;
- (_Bool)isValid;
- (id)keyForHasShownGameActivityBubble;
- (id)keyWithGameId:(int)arg1 bid:(int)arg2;
- (id)latestRedModelForWording;
- (_Bool)needRedPoint:(int)arg1;
- (_Bool)needRedPoint:(int)arg1 dotId:(int)arg2;
- (void)redPointShowed:(int)arg1;
- (void)redPointShowed:(int)arg1 dotId:(int)arg2;
- (void)saveHasShownBubble;
- (void)saveHasShownGameCoverRedPoint;
- (void)saveHasShownSpritePanelGameListRedPoint;
- (void)saveRedPointItem:(id)arg1 gameId:(int)arg2 dotId:(int)arg3;
- (void)saveRedPointModel:(id)arg1;
- (void)saveRedPointModelList:(id)arg1;
- (void)updateRedPointModels:(id)arg1;
- (void)wordingShowed:(id)arg1;

@end

