//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol QZCommonVideoViewDelegate <NSObject>

@optional
- (double)getVideoDuration;
- (double)getVideoPlayCurrentTime;
- (_Bool)isMuted;
- (_Bool)isPlaying;
- (void)pause:(_Bool)arg1;
- (void)pauseBySeek;
- (void)pauseByUser:(_Bool)arg1;
- (_Bool)playWithManul:(_Bool)arg1;
- (void)resumeBySeek;
- (void)seek:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)stop;
@end

