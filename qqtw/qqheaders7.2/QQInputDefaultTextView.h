//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQInputTextView.h"

#import "NSLayoutManagerDelegate.h"

@class NSString, QQQuoteMsgLabel, UIResponder;

@interface QQInputDefaultTextView : QQInputTextView <NSLayoutManagerDelegate>
{
    NSString *_quoteMsg;
    QQQuoteMsgLabel *_quoteMsgLabel;
    _Bool _is7_0_x;
    long long _composedStringSeq;
    _Bool _isDictationPlaceholderShow;
    UIResponder *_overrideNextResponder;
    unsigned long long _preTextLength;
    struct _NSRange _preCursorRange;
}

- (void).cxx_destruct;
- (_Bool)AllEmptyContent;
- (id)accessibilityValue;
- (_Bool)becomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct _NSRange)composedRangeOfRange:(struct _NSRange)arg1;
- (id)convertFromEncodedString:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)didBeginEditing;
@property(copy, nonatomic, getter=encodedString, setter=setEncodedString:) NSString *encodedString;
- (id)encodedStringInComposedRange:(struct _NSRange)arg1;
- (id)encodedStringInRange:(struct _NSRange)arg1;
- (double)getQuoteLabelContentH;
- (double)getQuoteLabelHeight;
- (_Bool)hasQuoteMsg;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct _NSRange)insertComposedString:(id)arg1 image:(id)arg2 bounds:(struct CGRect)arg3 atLocation:(unsigned long long)arg4;
- (struct _NSRange)insertQQEmoji:(id)arg1 row:(long long)arg2 atLocation:(unsigned long long)arg3;
- (void)insertText:(id)arg1;
@property(nonatomic) _Bool isDictationPlaceholderShow; // @synthesize isDictationPlaceholderShow=_isDictationPlaceholderShow;
- (void)layoutSubviews;
- (id)nextResponder;
- (void)onSetText;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
- (void)paste:(id)arg1;
@property(nonatomic) struct _NSRange preCursorRange; // @synthesize preCursorRange=_preCursorRange;
@property(nonatomic) unsigned long long preTextLength; // @synthesize preTextLength=_preTextLength;
- (void)quoteMsgLabel;
- (struct _NSRange)replaceContent:(id)arg1 replacedRange:(struct _NSRange)arg2;
- (_Bool)resignFirstResponder;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)setQuoteMsg:(id)arg1;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
