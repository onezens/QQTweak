//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CADisplayLink, UILabel, UserSummaryLabelModel;

@interface UserSummaryTableHeaderViewTagButton : UIButton
{
    _Bool _shouldDrift;
    _Bool _isFavoured;
    UserSummaryLabelModel *_tagModel;
    UILabel *_tagContentLabel;
    CADisplayLink *_displayLink;
    struct CGPoint _originalCenter;
}

- (void).cxx_destruct;
- (void)animatingDisappearToPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)borderColor;
- (void)dealloc;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)favourCountAddOne;
- (id)fontColor;
- (void)fromCenter:(struct CGPoint)arg1 bounceBackCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isFavoured; // @synthesize isFavoured=_isFavoured;
- (id)normalBGColor;
- (void)onDisplayLinkUpdate;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
- (id)selectedBGColor;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setCenter:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool shouldDrift; // @synthesize shouldDrift=_shouldDrift;
@property(retain, nonatomic) UILabel *tagContentLabel; // @synthesize tagContentLabel=_tagContentLabel;
@property(retain, nonatomic) UserSummaryLabelModel *tagModel; // @synthesize tagModel=_tagModel;
- (void)showPlusOneAnimation;
- (void)startDriftAnimation;
- (void)stopAnimating;
- (void)stopDriftAnimation;
- (id)titleFont;

@end

