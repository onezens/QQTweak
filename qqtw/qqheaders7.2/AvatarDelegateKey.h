//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface AvatarDelegateKey : NSObject <NSCopying>
{
    int _type;
    int _size;
    int _shape;
    NSString *_identity;
    NSString *_hashString;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(readonly, nonatomic) NSString *identity; // @synthesize identity=_identity;
- (id)initForBasicAvatar:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4;
- (id)initWithDiscussUin:(id)arg1;
- (id)initWithIdentity:(id)arg1 type:(int)arg2 size:(int)arg3 shape:(int)arg4;
- (id)initWithUrl:(id)arg1 shape:(int)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int shape; // @synthesize shape=_shape;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) int type; // @synthesize type=_type;

@end
