//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQRecommendFriendsProxy : NSObject
{
}

+ (id)createExposeRecordWith:(unsigned long long)arg1 PageId:(unsigned int)arg2 EntranceId:(unsigned int)arg3 ActionId:(unsigned int)arg4 ExposeCnt:(unsigned int)arg5 ExposeTime:(unsigned int)arg6 BufferLen:(unsigned short)arg7 Buffer:(id)arg8 ReservLen:(unsigned short)arg9 Reserv:(id)arg10;
+ (char *)createRemoveFriendReportPackageWithUin:(unsigned int)arg1 flag:(unsigned char)arg2;
+ (char *)doExposeReportWith:(unsigned long long)arg1 ExposeRecords:(id)arg2;

@end

