//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface PerfSubData : NSObject
{
    _Bool _isSuccess;
    NSDate *_startTime;
    NSDate *_stopTime;
    double _interval;
    double _modifyInterval;
    NSMutableDictionary *_extInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *extInfo; // @synthesize extInfo=_extInfo;
- (id)init;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) double modifyInterval; // @synthesize modifyInterval=_modifyInterval;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;

@end

