//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface ARMapWealthActModel : QQModel
{
    NSString *_startTime;
    NSString *_endTime;
    long long _startTimestamp;
    long long _endTimestamp;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;

@end

