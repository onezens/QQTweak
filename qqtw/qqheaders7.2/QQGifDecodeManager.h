//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQObjectSubPool;

@interface QQGifDecodeManager : NSObject
{
    NSMutableArray *_waitingList;
    long long _allBufferBytes;
    QQObjectSubPool *_gifDict;
}

+ (id)gifKeyWithURL:(id)arg1;
+ (_Bool)loadAnimationGifForView:(id)arg1 atUrl:(id)arg2 gifType:(int)arg3;
+ (_Bool)loadAnimationGifForView:(id)arg1 atUrl:(id)arg2 listenNotification:(_Bool)arg3 gifType:(int)arg4;
+ (_Bool)loadAnimationGifForView:(id)arg1 atUrl:(id)arg2 listenNotification:(_Bool)arg3 gifType:(int)arg4 asyncLoad:(_Bool)arg5;
+ (_Bool)loadAnimationVoiceGifForView:(id)arg1 audioIndicatorview:(id)arg2 atUrl:(id)arg3 gifType:(int)arg4 bPlay:(_Bool)arg5;
+ (id)privateInstance;
+ (void)removeAll;
+ (void)removeGifBuffForUrl:(id)arg1;
+ (_Bool)startSmallGifDecodeIfExistWhenMemoryShortage;
@property(nonatomic) long long allBufferBytes; // @synthesize allBufferBytes=_allBufferBytes;
- (void)dealloc;
@property(retain, nonatomic) QQObjectSubPool *gifDict; // @synthesize gifDict=_gifDict;
- (id)init;
@property(retain, nonatomic) NSMutableArray *waitingList; // @synthesize waitingList=_waitingList;

@end
