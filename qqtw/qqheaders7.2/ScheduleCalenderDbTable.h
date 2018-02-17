//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DbBaseTable.h"

@interface ScheduleCalenderDbTable : DbBaseTable
{
}

- (void)clearScheduleCalenderDbTable;
- (_Bool)deleteScheduleCalender:(id)arg1;
- (_Bool)deleteScheduleCalender:(id)arg1 inDb:(id)arg2;
- (id)getCalenderIdByScheduleId:(id)arg1;
- (id)getCalenderIdByScheduleId:(id)arg1 inDb:(id)arg2;
- (id)getTableColumn;
- (id)getTableColumnWithType;
- (void)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2;
- (_Bool)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2 inDb:(id)arg3;
- (_Bool)isExitScheduleCalender;
- (_Bool)isExitScheduleCalender:(id)arg1;
- (_Bool)isExitScheduleCalender:(id)arg1 inDb:(id)arg2;
- (_Bool)isExitScheduleCalenderDataInDb:(id)arg1;

@end
