//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQModel : NSObject <NSCoding>
{
    NSString *_propertyMD5;
}

- (id)allPropertMD5;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValues:(id)arg1;
- (void)mergeArray:(id)arg1 withArray:(id)arg2 shouldOverride:(_Bool)arg3;
- (id)mergeModel:(id)arg1 shouldOverride:(_Bool)arg2;
- (_Bool)needUp;
- (id)primaryKey;
- (_Bool)propertyExcept:(id)arg1;
- (void)recordEncodingKey:(id)arg1 forClass:(Class)arg2;

@end

