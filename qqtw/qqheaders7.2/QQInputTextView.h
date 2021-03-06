//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "NSLayoutManagerDelegate.h"

@class NSString, UIColor, UILabel;

@interface QQInputTextView : UITextView <NSLayoutManagerDelegate>
{
    unsigned long long _numberOfLines;
    _Bool _didNotResignFirstResponder;
    _Bool _loupeVisible;
    _Bool _alwaysDisplayPlaceHolder;
    _Bool _didFlashScrollIndicators;
    unsigned long long _maxNumberOfLines;
    unsigned long long _pastableMediaTypes;
    UILabel *_placeholderLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property _Bool alwaysDisplayPlaceHolder; // @synthesize alwaysDisplayPlaceHolder=_alwaysDisplayPlaceHolder;
- (void)clearMarioState;
- (void)clearSlashState;
- (void)clearText;
- (void)commonInit;
- (void)dealloc;
- (void)didBeginEditing;
- (void)didBeginEditing:(id)arg1;
- (void)didChangeText:(id)arg1;
- (void)didEndEditing:(id)arg1;
@property(nonatomic) _Bool didFlashScrollIndicators; // @synthesize didFlashScrollIndicators=_didFlashScrollIndicators;
@property(nonatomic) _Bool didNotResignFirstResponder; // @synthesize didNotResignFirstResponder=_didNotResignFirstResponder;
- (void)flashScrollIndicatorsIfNeeded;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)insertNewLineBreak;
- (struct _NSRange)insertText:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)insertTextAtCaretRange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) _Bool isExpanding;
@property(nonatomic, getter=isLoupeVisible) _Bool loupeVisible; // @synthesize loupeVisible=_loupeVisible;
- (_Bool)isPasteboardItemSupported;
@property(nonatomic, getter=isTypingSuggestionEnabled) _Bool typingSuggestionEnabled;
- (void)layoutIfNeeded;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (void)layoutSubviews;
@property(nonatomic) unsigned long long maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (_Bool)onlyHasMarioPrefix;
@property(nonatomic) unsigned long long pastableMediaTypes; // @synthesize pastableMediaTypes=_pastableMediaTypes;
- (void)paste:(id)arg1;
- (id)pasteboardContentType;
- (id)pastedItem;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) UIColor *placeholderColor;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
- (struct CGRect)placeholderRectThatFits:(struct CGRect)arg1;
- (void)refreshFirstResponder;
- (void)refreshInputViews;
- (void)resetToMarioState;
- (_Bool)resignFirstResponder;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (void)scrollToCaretPositonAnimated:(_Bool)arg1;
- (void)setFont:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (_Bool)shouldHidePlaceholder;
- (id)supportedMediaTypes;
- (id)wordAtCaretRange:(struct _NSRange *)arg1;
- (id)wordAtRange:(struct _NSRange)arg1 rangeInText:(struct _NSRange *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

