//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, ScheduleAlarmTable, ScheduleCalenderDbTable, ScheduleDbStateInfoTable, ScheduleFutureDataSortMerge, ScheduleOutDataSortMerge, ScheduleRemindTempCase;

@interface ScheduleDataBaseManager : NSObject
{
    ScheduleDbStateInfoTable *_scheduleStateInfoTable;
    ScheduleRemindTempCase *_scheduleRemindTempCaseTable;
    ScheduleCalenderDbTable *_scheduleCalenderDbTable;
    ScheduleAlarmTable *_scheduleAlarmTable;
    unsigned long long _nRequestRepeatContenTime;
    long long _nCurrentRangeIndex;
    unsigned long long _nBackRequestRepeatContenTime;
    long long _nBackRangeIndex;
    unsigned long long _nOutRequestRepeatContenTime;
    long long _nOutCurrentRangeIndex;
    unsigned long long _nBackOutRequestRepeatContenTime;
    long long _nBackOutRangeIndex;
    unsigned long long _nTopRequestContenTime;
    _Bool _bInitTime;
    ScheduleFutureDataSortMerge *_scheduleFutureSortMerge;
    ScheduleOutDataSortMerge *_scheduleOutSortMerge;
    NSMutableArray *_arrayRangeData;
}

+ (id)getInstance;
- (void)DeleteSheduleRecord:(id)arg1;
- (_Bool)EliminateRepetitiveRemind:(id)arg1 time:(unsigned long long)arg2;
- (id)GetBackGroupOutScheduleRecord;
- (id)GetBackScheduleRecord;
- (id)GetMoreScheduleRecord;
- (id)GetNextGroupOutScheduleRecord;
- (id)GetNextGroupOutScheduleStateInfo:(unsigned long long)arg1;
- (id)GetNextGroupScheduleStateInfo:(unsigned long long)arg1;
- (id)GetSheduleRecord:(id)arg1;
- (id)InteriorGetOutScheduleRecord:(unsigned long long)arg1 endtime:(unsigned long long)arg2;
- (id)InteriorGetScheduleRecord:(unsigned long long)arg1 endtime:(unsigned long long)arg2;
- (void)ResetTime;
- (void)UpdateSheduleRecord:(id)arg1;
- (void)dealloc;
- (_Bool)deleteScheduleCalender:(id)arg1;
- (_Bool)getAlarmByScheduleID:(id)arg1;
- (id)getCalenderIdByScheduleId:(id)arg1;
- (id)init;
- (void)insertScheduleCalender:(id)arg1 CalenderId:(id)arg2;
- (_Bool)isExistScheduleCalenderData;
- (void)updateItem:(id)arg1 alarm:(_Bool)arg2;

@end
