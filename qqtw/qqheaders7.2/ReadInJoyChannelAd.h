//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReadInJoyChannelArticle.h"

@class NSData, ReadInJoyAdInfo;

@interface ReadInJoyChannelAd : ReadInJoyChannelArticle
{
    _Bool _didExposure;
    NSData *_pb_ad_info;
    unsigned long long _pull_time;
    ReadInJoyAdInfo *_AdInfo;
}

+ (id)ad;
+ (id)entityFromDb:(id)arg1;
+ (id)tableName;
@property(retain, nonatomic) ReadInJoyAdInfo *AdInfo; // @synthesize AdInfo=_AdInfo;
- (void)dealloc;
- (id)description;
@property(nonatomic) _Bool didExposure; // @synthesize didExposure=_didExposure;
- (id)init;
@property(retain, nonatomic) NSData *pb_ad_info; // @synthesize pb_ad_info=_pb_ad_info;
@property(nonatomic) unsigned long long pull_time; // @synthesize pull_time=_pull_time;
- (_Bool)saveToDb:(id)arg1;

@end

