//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQPushbannerManager : NSObject
{
}

+ (id)GetInstance;
- (int)FIFOUpdateLocalTaskList;
- (void)addLocalPbConfWithServerTask:(id)arg1 byIndex:(int)arg2;
- (void)allDownloadAgain:(id)arg1;
- (void)arrangeLocalPushbannerTask;
- (void)dealWithLocalPbAddAndUpdateTask:(id)arg1;
- (void)dealWithLocalPbDeleteTask:(id)arg1;
- (id)getPbConfFilePath:(int)arg1;
- (id)getPbPicFilePath:(id)arg1;
- (_Bool)isLocalTask:(id)arg1 inServerTaskSets:(id)arg2;
- (_Bool)isLocalTaskClicked:(id)arg1;
- (_Bool)isNeedDownloadBannerPicAgain:(id)arg1 compareWithServerTask:(id)arg2;
- (_Bool)isServerTaskInLocalTaskSets:(id)arg1 byIndex:(int *)arg2;
- (_Bool)removeTheOldestTask;
- (id)sortAscendingByChannelID:(id)arg1;
- (void)updateLocalPbConfWithServerTask:(id)arg1 byIndex:(int)arg2;
- (_Bool)updateLocalTaskList;

@end
