//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface HotPicThirdPartyInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_appid;
    NSString *_iconDownloadURL;
    NSString *_name;
    NSString *_jumpUrl;
}

@property(copy) NSString *appid; // @synthesize appid=_appid;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(copy) NSString *iconDownloadURL; // @synthesize iconDownloadURL=_iconDownloadURL;
- (id)initWithCoder:(id)arg1;
@property(copy) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy) NSString *name; // @synthesize name=_name;

@end

