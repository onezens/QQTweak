//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class NSString, UIButton, UIPanGestureRecognizer, UIView;

@interface TBStoryPlayVCDismissAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>
{
    id <UIViewControllerContextTransitioning> _context;
    UIView *_animationView;
    UIButton *_exclusiveTouchBtn;
    struct CGPoint _dragPoint;
    _Bool _isInteract;
    _Bool _endViewHasDelete;
    _Bool _isInterestStory;
    UIView *_endView;
    UIPanGestureRecognizer *_panGesture;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelInteract;
@property(readonly, nonatomic) long long completionCurve;
- (void)dealloc;
- (void)didPan:(id)arg1;
@property(nonatomic) __weak UIView *endView; // @synthesize endView=_endView;
@property(nonatomic) _Bool endViewHasDelete; // @synthesize endViewHasDelete=_endViewHasDelete;
- (void)finishInteract;
@property(nonatomic) _Bool isInterestStory; // @synthesize isInterestStory=_isInterestStory;
@property(nonatomic) __weak UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void)refreshTransform;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

