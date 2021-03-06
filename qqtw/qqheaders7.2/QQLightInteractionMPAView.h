//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQLightInteractionAnimationActorDelegate.h"

@class LOTAnimationView, NSMutableArray, NSString;

@interface QQLightInteractionMPAView : UIView <QQLightInteractionAnimationActorDelegate>
{
    NSMutableArray *_animtList;
    LOTAnimationView *_lotiView;
    _Bool _isPlaying;
}

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1 anim:(id)arg2;
- (void)animationDidStop:(id)arg1 anim:(id)arg2 finished:(_Bool)arg3;
- (void)cancel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)loadHeartAnimation;
- (void)loadVipPokeAnimation:(id)arg1;
- (void)loadlikeAnimation;
- (void)replay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

