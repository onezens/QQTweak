//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@interface TBStoryTextEditTextView : UITextView
{
    _Bool _freshColor;
    _Bool _firstResponderEnabled;
    double _textZoomScale;
}

- (void)addGestureRecognizer:(id)arg1;
- (void)applyScale:(double)arg1 toLayer:(id)arg2;
- (void)applyScale:(double)arg1 toView:(id)arg2;
- (_Bool)becomeFirstResponder;
@property(nonatomic, getter=isFirstResponderEnabled) _Bool firstResponderEnabled; // @synthesize firstResponderEnabled=_firstResponderEnabled;
@property(nonatomic, getter=isFreshColor) _Bool freshColor; // @synthesize freshColor=_freshColor;
@property(nonatomic) double textZoomScale; // @synthesize textZoomScale=_textZoomScale;
- (void)setTintColor:(id)arg1;
- (void)updateForZoomScale:(double)arg1;

@end

