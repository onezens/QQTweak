//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, QQBirthdaySplashNickConfiguration;

@interface QQBirthdaySplashConfiguration : NSObject <NSCoding>
{
    unsigned long long weight;
    NSString *md5;
    NSString *imageURL;
    NSString *title;
    NSString *digest;
    QQBirthdaySplashNickConfiguration *nick;
}

+ (void)clearBirthdaySplashFile;
+ (id)configurationSavePath;
+ (id)deserialize;
+ (_Bool)serialize:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *digest; // @synthesize digest;
- (void)downloadSplashPicture;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) QQBirthdaySplashNickConfiguration *nick; // @synthesize nick;
- (void)removeSplashPictureFile;
- (void)resetConfiguration;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) unsigned long long weight; // @synthesize weight;
- (id)splashPictureSavePath;

@end
