//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOModel.h"

@class NSMutableAttributedString, UIColor;

@interface QQAIOInfoModel : QQAIOModel
{
    UIColor *_hightColor;
    struct CGSize _coreTextSize;
    NSMutableAttributedString *_string;
    struct _NSRange _selectedRange;
}

- (void).cxx_destruct;
- (id)GetCmdRangeAndColor;
- (id)GetContent;
- (id)TextContentCoverToImage:(id)arg1 rangeContent:(struct _NSRange)arg2 rangeHightlighted:(struct _NSRange)arg3 color:(id)arg4 hightlightedColor:(id)arg5 font:(id)arg6 maxWidth:(double)arg7;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
- (_Bool)shouldShowTimeline;

// Remaining properties
@property(nonatomic) struct CGSize coreTextSize; // @dynamic coreTextSize;
@property(retain, nonatomic) UIColor *hightColor; // @dynamic hightColor;
@property(retain, nonatomic) NSMutableAttributedString *string; // @dynamic string;

@end

