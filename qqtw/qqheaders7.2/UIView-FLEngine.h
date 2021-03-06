//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FLRow, FLRowManager, FLStyle;

@interface UIView (FLEngine)
@property(retain, nonatomic) FLRow *FLBelongRow; // @dynamic FLBelongRow;
@property(retain, nonatomic) UIView *FLNextSibling; // @dynamic FLNextSibling;
@property(retain, nonatomic) UIView *FLPreviousSibling; // @dynamic FLPreviousSibling;
@property(retain, nonatomic) FLRowManager *FLRowManager; // @dynamic FLRowManager;
@property(retain, nonatomic) FLStyle *FLStyle; // @dynamic FLStyle;
- (id)addTo:(id)arg1;
- (id)changeToFLAbsolute;
- (id)changeToFLBlock;
- (id)changeToFLInline;
- (id)getPreviousSiblingALEngineView;
- (id)initFLEngine;
@property(readonly, nonatomic) _Bool isFLEngine; // @dynamic isFLEngine;
- (_Bool)isVaildView;
- (void)linkSiblingView;
- (id)setFLBottom:(double)arg1;
- (id)setFLCenter:(struct CGPoint)arg1;
- (id)setFLCenterX:(double)arg1;
- (id)setFLCenterY:(double)arg1;
- (id)setFLContentHorizontalAlign:(long long)arg1;
- (id)setFLHeight:(double)arg1;
- (id)setFLHidden:(_Bool)arg1;
- (id)setFLIsEndOFLine:(_Bool)arg1;
- (id)setFLIsFirstOFLine:(_Bool)arg1;
- (id)setFLLBCorner:(struct LBCorner)arg1;
- (id)setFLLTCorner:(struct LTCorner)arg1;
- (id)setFLLeft:(double)arg1;
- (id)setFLMargin:(struct UIEdgeInsets)arg1;
- (id)setFLMaxHeight:(double)arg1;
- (id)setFLMaxWidth:(double)arg1;
- (id)setFLPadding:(struct UIEdgeInsets)arg1;
- (id)setFLRBCorner:(struct RBCorner)arg1;
- (id)setFLRTCorner:(struct RTCorner)arg1;
- (id)setFLRight:(double)arg1;
- (id)setFLSize:(struct CGSize)arg1;
- (id)setFLTop:(double)arg1;
- (id)setFLWidth:(double)arg1;
- (void)setIsFLEngine:(_Bool)arg1;
@end

