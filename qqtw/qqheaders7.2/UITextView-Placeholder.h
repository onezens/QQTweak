//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSAttributedString, NSString, UIColor, UILabel;

@interface UITextView (Placeholder)
+ (id)tvp_defaultPlaceholderColor;
- (_Bool)needsUpdateFont;
- (void)setNeedsUpdateFont:(_Bool)arg1;
@property(retain, nonatomic) NSAttributedString *tvp_attributedPlaceholder;
@property(retain, nonatomic) NSString *tvp_placeholder;
@property(retain, nonatomic) UIColor *tvp_placeholderColor;
@property(readonly, nonatomic) UILabel *tvp_placeholderLabel;
- (void)updatePlaceholderLabel;
@end
