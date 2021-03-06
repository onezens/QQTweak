//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface TBHotTopicPackModel : NSObject <NSCoding>
{
    unsigned int _topicColor;
    unsigned long long _topicID;
    NSString *_topicName;
    NSString *_topicCover;
    NSString *_topicLogo;
    NSString *_topicDes;
}

+ (id)createWithQQStory:(struct CPBMessageDecoder *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int topicColor; // @synthesize topicColor=_topicColor;
@property(retain, nonatomic) NSString *topicCover; // @synthesize topicCover=_topicCover;
@property(retain, nonatomic) NSString *topicDes; // @synthesize topicDes=_topicDes;
@property(nonatomic) unsigned long long topicID; // @synthesize topicID=_topicID;
@property(retain, nonatomic) NSString *topicLogo; // @synthesize topicLogo=_topicLogo;
@property(retain, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;

@end

