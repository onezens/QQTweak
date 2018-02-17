//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (EMOTION)
+ (_Bool)isBaseCharacter:(unsigned short)arg1;
+ (_Bool)isLinkCharacter:(unsigned short)arg1;
- (struct _NSRange)GetDeletedIOSEmojiRange;
- (struct _NSRange)firstRangeOfEmojiInRange:(struct _NSRange)arg1;
- (struct _NSRange)getConsecutiveSubStringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)getFirstWordWithRange:(struct _NSRange)arg1;
- (struct _NSRange)rangeOfAllEmotion:(int *)arg1;
- (struct _NSRange)rangeOfEmotion:(int *)arg1;
- (struct _NSRange)rangeOfEmotionAtLocation:(long long)arg1;
- (struct _NSRange)rangeOfSmallEmotion;
- (struct _NSRange)rangeOfSmallEmotionAtInputBox;
- (id)rangesOfAllEmotionAndSmallEmotion;
@end
