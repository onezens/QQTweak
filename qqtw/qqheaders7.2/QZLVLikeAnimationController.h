//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AvatarServiceDelegate.h"
#import "QZLVLikeAnimationTaskDelegate.h"

@class NSMutableArray, NSString, NSTimer, UIView;

@interface QZLVLikeAnimationController : NSObject <QZLVLikeAnimationTaskDelegate, AvatarServiceDelegate>
{
    NSTimer *_likeTimer;
    long long _animaLikeNum;
    long long _maxPraiseNum;
    long long _animaLikeNumDone;
    long long _likeNumLoop;
    long long _colorNum;
    NSTimer *_likeCountTimer;
    long long _normalLikeCount;
    NSMutableArray *_tasks;
    UIView *_maskView;
}

- (void).cxx_destruct;
- (void)addAvatarAmintion:(id)arg1 uin:(id)arg2;
- (void)addLikeAnimation:(id)arg1 Type:(long long)arg2 isRandomColor:(_Bool)arg3;
- (void)addLikeAnimationFinished:(id)arg1;
- (void)anims:(id)arg1 addMajorityType:(unsigned long long)arg2 majorityCount:(long long)arg3 minorityType:(unsigned long long)arg4 minorityCount:(long long)arg5;
- (void)dealloc;
- (void)didFailedDownloadingImage:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4 avatarInfo:(id)arg5;
- (void)didFailedGetAvatarInfo:(id)arg1 type:(int)arg2;
- (void)didLoadImage:(id)arg1 identity:(id)arg2 type:(int)arg3 size:(int)arg4 shape:(int)arg5 avatarInfo:(id)arg6;
- (void)handlePlayLikeAnim:(id)arg1;
- (id)init;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)playAminationWithAvatarImg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
