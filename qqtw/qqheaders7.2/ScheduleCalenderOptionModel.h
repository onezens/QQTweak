//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ScheduleCalenderOptionModel : NSObject
{
    short _optionType;
    NSString *_scheduleId;
}

- (void)dealloc;
- (id)initModel;
@property(nonatomic) short optionType; // @synthesize optionType=_optionType;
@property(copy, nonatomic) NSString *scheduleId; // @synthesize scheduleId=_scheduleId;

@end

