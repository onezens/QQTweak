//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

@class NSString, QQEmotionLabel;

@interface UserSummaryRichTextCell : UserSummaryBaseCell
{
    QQEmotionLabel *_richTextLabel;
    NSString *_richText;
}

+ (id)richTextCell:(id)arg1 type:(int)arg2 imageName:(id)arg3 richText:(id)arg4 accessoryType:(_Bool)arg5;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *richText; // @synthesize richText=_richText;
@property(retain, nonatomic) QQEmotionLabel *richTextLabel; // @synthesize richTextLabel=_richTextLabel;
- (void)updateSkin:(id)arg1 highlightedColor:(id)arg2;

@end

