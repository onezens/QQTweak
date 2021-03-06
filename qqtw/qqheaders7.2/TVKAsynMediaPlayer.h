//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVKPlaybackDelegate.h"

@class NSString, TVKMediaPlayerController, TVKVideoView;

@interface TVKAsynMediaPlayer : NSObject <TVKPlaybackDelegate>
{
    TVKVideoView *_view;
    TVKMediaPlayerController *_playerController;
    id <TVKAsynMediaPlayerDelegate> _delegate;
}

+ (id)playerOperatQueue;
- (void).cxx_destruct;
- (void)checkMute:(_Bool)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (void)closeMediaPlayer:(_Bool)arg1 playId:(long long)arg2 completeHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <TVKAsynMediaPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getAllStateDetail:(CDUnknownBlockType)arg1;
- (void)getAsset:(CDUnknownBlockType)arg1;
- (void)getCheckUrlState:(CDUnknownBlockType)arg1;
- (void)getCurrentPlaybackTime:(CDUnknownBlockType)arg1;
- (id)getCurrentVideoScreenShot;
- (void)getCurrentVideoScreenShot:(CDUnknownBlockType)arg1;
- (void)getCurrentVolum:(CDUnknownBlockType)arg1;
- (void)getDuration:(CDUnknownBlockType)arg1;
- (void)getError:(CDUnknownBlockType)arg1;
- (void)getInfoDetail:(CDUnknownBlockType)arg1;
- (void)getLoadState:(CDUnknownBlockType)arg1;
- (void)getMuted:(CDUnknownBlockType)arg1;
- (void)getPlayableDuration:(CDUnknownBlockType)arg1;
- (void)getPlaybackState:(CDUnknownBlockType)arg1;
- (void)getShouldAutoplay:(CDUnknownBlockType)arg1;
- (void)getTimeDetail:(CDUnknownBlockType)arg1;
- (void)getVideoFillMode:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)isPlaying:(CDUnknownBlockType)arg1;
- (void)isStoped:(CDUnknownBlockType)arg1;
- (void)mediaContentsUrls:(id)arg1 withContentTimes:(id)arg2 withContentType:(long long)arg3;
- (void)mediaPlayerCacheStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withCacheState:(long long)arg4 withIsCurrentPlayFile:(_Bool)arg5;
- (void)mediaPlayerCheckMediaUrlError:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerError:(id)arg1 log:(id)arg2;
- (id)mediaPlayerGetAVAsset:(id)arg1 userInfo:(id)arg2 segNo:(long long)arg3 segDuration:(double)arg4;
- (void)mediaPlayerKeyPath:(id)arg1 change:(id)arg2;
- (void)mediaPlayerLoadStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerNaturalSizeAvailable:(id)arg1;
- (void)mediaPlayerPlaybackDidFinish:(id)arg1;
- (void)mediaPlayerPlaybackStateDidChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerPlayedItem:(long long)arg1;
- (void)mediaPlayerPrepareToPlay:(long long)arg1;
- (void)mediaPlayerPresentationSize:(struct CGSize)arg1 withFileCacheOrder:(long long)arg2;
- (void)mediaPlayerProgress:(double)arg1 duration:(double)arg2;
- (void)mediaPlayerRequestStateChange:(id)arg1 withError:(id)arg2 withFileCacheOrder:(long long)arg3 withIsCurrentFile:(_Bool)arg4;
- (void)mediaPlayerRetryRequestUrls:(double)arg1;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)play:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TVKMediaPlayerController *playerController; // @synthesize playerController=_playerController;
- (void)prepare:(id)arg1;
- (void)readyToPlay:(_Bool)arg1 CompleteHandler:(CDUnknownBlockType)arg2;
- (void)seek:(double)arg1;
- (void)seek:(double)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)sendMediaPlayerLog:(int)arg1 withLogInfo:(id)arg2;
- (void)setBgColor:(id)arg1;
- (void)setEnableVideoScreenShot:(_Bool)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setResourceReleaseModel:(long long)arg1;
- (void)setShouldAutoplay:(_Bool)arg1;
- (void)setShouldCheckAssetKeyStatus:(_Bool)arg1;
- (void)setVideoFillMode:(id)arg1;
- (void)setVolum:(double)arg1;
- (void)stop:(_Bool)arg1 playId:(long long)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)updateContentsUrls:(id)arg1;
@property(readonly, nonatomic) TVKVideoView *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

