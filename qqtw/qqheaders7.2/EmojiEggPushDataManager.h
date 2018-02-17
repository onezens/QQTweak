//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface EmojiEggPushDataManager : NSObject
{
    NSMutableArray *_disableFlappyIds;
    NSMutableDictionary *_pushDataPeerUinTimeDic;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (_Bool)checkFitToPushWithType:(int)arg1 friendUin:(id)arg2;
- (_Bool)checkIsBingoLimitWithType:(int)arg1;
- (_Bool)checkStorageInfoExistWithUinWithType:(int)arg1 friendUin:(id)arg2;
- (id)disableFlappyIds;
- (void)disableFlappyIfNeeded;
- (void)emojiEggSynPushDataToModels:(id)arg1;
- (int)getTypeOfPushGrayTipsOnTheEveOfDegradeWith:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *pushDataPeerUinTimeDic; // @synthesize pushDataPeerUinTimeDic=_pushDataPeerUinTimeDic;
- (void)pushGrayTipsOnTheEveOfDegradeWith:(int)arg1 friendUin:(id)arg2;
- (void)reportWithType:(int)arg1;
- (void)resetDisableFlappy;
- (void)respPushUpdate:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
- (void)showGrayTipsWithEmojiEggFlag:(id)arg1 WithKey:(id)arg2 withUin:(id)arg3 withValue:(id)arg4;
- (void)storageInfoOfGrayTipsOnTheEveOfDegradeWith:(int)arg1 friendUin:(id)arg2;
- (void)tryToPushGrayTipsOnTheEveOfDegrade:(id)arg1;
- (void)updateEmojiEggGrayTipsWithUin:(id)arg1 withDic:(id)arg2;

@end
