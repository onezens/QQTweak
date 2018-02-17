//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QQFontPushbannerConfiguration : NSObject <NSCoding>
{
    NSString *imageURL;
    NSString *md5;
    NSString *wording;
    NSString *begin;
    NSString *end;
    NSString *_jumpURL;
}

+ (void)clearFontBannerFile;
+ (id)configurationSavePath;
+ (id)deserialize;
+ (id)getFontPushbannerVersion;
+ (_Bool)serialize:(id)arg1;
+ (void)setFontPushbannerVersion:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *begin; // @synthesize begin;
- (void)downloadFontPushbannerPicture;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *end; // @synthesize end;
- (id)fontPushbannerPicSavePath;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL;
- (id)initWithCoder:(id)arg1;
- (_Bool)isFontPushbannerOutDate;
- (_Bool)isFontPushbannerValid;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(copy, nonatomic) NSString *md5; // @synthesize md5;
@property(copy, nonatomic) NSString *wording; // @synthesize wording;

@end
