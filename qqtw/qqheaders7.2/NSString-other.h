//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (other)
+ (id)getPureText:(id)arg1;
+ (id)getTranslateText:(id)arg1;
+ (id)marketFaceKeyDecrypt:(id)arg1;
+ (id)marketFaceKeyEncrypt:(id)arg1;
+ (id)stringToBinaryData:(id)arg1;
+ (id)stringWithBinaryBuff:(const char *)arg1 length:(unsigned long long)arg2;
- (_Bool)containsSystemEmoji;
- (struct _NSRange)firstRangeOfEmojiInRange2:(struct _NSRange)arg1;
- (struct _NSRange)firstRangeOfEmojiInRange:(struct _NSRange)arg1;
- (unsigned long long)getSystemEmojiCount:(id)arg1;
- (unsigned long long)hashCodeJavaLike;
- (struct _NSRange)rangeOfFirstEmoji4AIOLayout:(struct _NSRange)arg1;
- (struct CGSize)safelySizeWithFont:(id)arg1;
- (struct CGSize)safelySizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)safelySizeWithFont:(id)arg1 forWidth:(double)arg2 isCeil:(_Bool)arg3;
- (struct CGSize)sizeWithFont:(id)arg1;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFontWithCoreText:(id)arg1;
- (id)stringByReplacingSystemEmojiWithSpace;
- (id)stringFromMD5;
- (id)stringUniEmoWithFont:(id)arg1 forWidth:(float)arg2;
- (id)stringWithFont:(id)arg1 forWidth:(float)arg2;
- (id)trim;
@end
