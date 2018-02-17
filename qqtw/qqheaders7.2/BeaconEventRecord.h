//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BeaconPersistObject.h"

#import "NSMutableCopying.h"

@class NSMutableDictionary, NSString;

@interface BeaconEventRecord : BeaconPersistObject <NSMutableCopying>
{
    NSString *_apn;
    NSString *_srcIp;
    NSString *_eventName;
    NSString *_eventValue;
    long long _eventTime;
    _Bool _isSuccess;
    long long _elapse;
    long long _packageSize;
    int _eventType;
    NSMutableDictionary *_params;
    _Bool isSuccess;
    int eventType;
    NSString *apn;
    NSString *srcIp;
    NSString *eventName;
    NSString *eventValue;
    long long eventTime;
    long long elapse;
    long long packageSize;
    NSMutableDictionary *params;
}

@property(retain, nonatomic) NSString *apn; // @synthesize apn;
- (void)createWUPModel:(struct EventRecord *)arg1;
- (void)dealloc;
@property(nonatomic) long long elapse; // @synthesize elapse;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName;
@property(nonatomic) long long eventTime; // @synthesize eventTime;
@property(nonatomic) int eventType; // @synthesize eventType;
@property(retain, nonatomic) NSString *eventValue; // @synthesize eventValue;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long packageSize; // @synthesize packageSize;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params;
@property(retain, nonatomic) NSString *srcIp; // @synthesize srcIp;

@end
