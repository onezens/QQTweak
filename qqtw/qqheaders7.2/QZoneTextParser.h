//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZoneTextParser : NSObject
{
}

+ (void)addList:(id)arg1 captureStr:(id)arg2 Type:(long long)arg3;
+ (long long)getCurrentType:(id)arg1 Postion:(struct _NSRange)arg2;
+ (id)parseText:(id)arg1;
+ (id)parseToReadableText:(id)arg1;
+ (void)processNormalText:(id)arg1 range:(struct _NSRange)arg2 list:(id)arg3;

@end

