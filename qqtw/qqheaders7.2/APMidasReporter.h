//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APMidasReporter : NSObject
{
}

+ (id)instance;
+ (void)releaseInstance;
- (id)buildCommonDataBody:(id)arg1 report:(id)arg2;
- (void)callDataReportCgi:(id)arg1;
- (void)doReport;
- (id)getLogRecord:(id)arg1;
- (id)getReportData:(id)arg1;
- (void)insertData:(id)arg1;
- (void)save;
- (void)sendReportToQQWallet:(id)arg1;

@end
