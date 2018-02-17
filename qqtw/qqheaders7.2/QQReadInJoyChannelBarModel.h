//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@class NSArray, ReadInJoyTopicTitle;

@interface QQReadInJoyChannelBarModel : QQModel <NSCopying>
{
    unsigned long long _channelId;
    unsigned long long _channelSeq;
    NSArray *_items;
    ReadInJoyTopicTitle *_leftTitle;
    ReadInJoyTopicTitle *_rightTitle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) unsigned long long channelSeq; // @synthesize channelSeq=_channelSeq;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)getItemsCopy;
- (id)initWithTopicFeedsInfo:(id)arg1;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) ReadInJoyTopicTitle *leftTitle; // @synthesize leftTitle=_leftTitle;
@property(retain, nonatomic) ReadInJoyTopicTitle *rightTitle; // @synthesize rightTitle=_rightTitle;

@end
