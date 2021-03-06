//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RoomMemberCell.h"

@class CALayer, NSMutableArray, NSString, NSTimer, UIImage;

@interface SingleMemberCell : RoomMemberCell
{
    CALayer *_rotateLayers;
    NSMutableArray *_animationLayers;
    NSMutableArray *_cacheLayers;
    NSTimer *_timer;
    _Bool _bfinished;
    NSString *_avatarUrl;
    UIImage *_waveImage;
}

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void)beginRotateAnimating;
- (void)beginWave;
- (id)createWaveAnimationWithDuration:(double)arg1 scale:(double)arg2;
- (id)createWaveLayer;
- (void)dealloc;
- (void)endRotateAnimating;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadCustomAvatarUrl:(id)arg1;
- (void)onRotate:(id)arg1;
- (void)onWave:(id)arg1;
- (void)prepareForReuse;
- (void)recursiveFame:(id)arg1;
- (void)removeRotateLayer;
- (void)reuserAllAnimations;
- (void)reuserAnimationLayer:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)stopWave;
- (void)wave;

@end

