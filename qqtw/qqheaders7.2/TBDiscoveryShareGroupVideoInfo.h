//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface TBDiscoveryShareGroupVideoInfo : QQModel
{
    NSString *_video_cover;
    NSString *_vid;
    unsigned long long _time;
    NSString *_video_attr;
    NSString *_feed_id;
}

+ (id)createWithData:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *feed_id; // @synthesize feed_id=_feed_id;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *video_attr; // @synthesize video_attr=_video_attr;
@property(retain, nonatomic) NSString *video_cover; // @synthesize video_cover=_video_cover;

@end

