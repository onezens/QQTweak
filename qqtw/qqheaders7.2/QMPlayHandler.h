//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMusicJSHandler.h"

@class NSDictionary;

@interface QMPlayHandler : QMusicJSHandler
{
    NSDictionary *_playParams;
}

- (void).cxx_destruct;
- (void)addPauseMusicProc;
- (void)addPlayMusicProc;
- (void)addPlayNextProc;
- (void)addPlayPrevProc;
- (void)addQueryPlayListProc;
- (void)addQueryPlaySongProc;
- (void)addResumeMusicProc;
- (void)addStopMusicProc;
- (void)clearCacheData;
- (long long)covertToJSState:(int)arg1;
- (id)playMusicInfoDict;
- (id)playRingInfoDict;
- (void)registeHandler;
- (id)translateFromParams:(id)arg1;
- (id)translateSongListToJsonDic:(id)arg1;

@end

