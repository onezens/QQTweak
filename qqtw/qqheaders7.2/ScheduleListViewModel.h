//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ScheduleListViewModel : NSObject
{
    unsigned long long _scheduleDate;
    NSMutableArray *_arrayScheduleItemModel;
}

- (void)SortModelByTime;
@property(retain, nonatomic) NSMutableArray *arrayScheduleItemModel; // @synthesize arrayScheduleItemModel=_arrayScheduleItemModel;
- (void)dealloc;
- (unsigned long long)getNumberOfRows;
- (id)getScheduleItemModelAt:(long long)arg1;
- (id)getScheduleItemModelByScheduleID:(id)arg1;
- (id)initList;
- (_Bool)insertScheduleItemMode:(id)arg1;
- (_Bool)insertScheduleItemModeByOneData:(id)arg1;
@property(nonatomic) unsigned long long scheduleDate; // @synthesize scheduleDate=_scheduleDate;

@end

