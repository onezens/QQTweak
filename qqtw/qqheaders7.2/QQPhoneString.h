//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface QQPhoneString : NSObject <NSCopying>
{
    NSString *_stringHolder;
}

+ (id)stringWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *stringHolder; // @synthesize stringHolder=_stringHolder;

@end
