//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QDatabase;

@interface QQGroupFileDataBase : NSObject
{
    QDatabase *_groupFileDataBase;
    unsigned long long _maxTransferTaskId;
}

- (void).cxx_destruct;
- (id)fileInfoWithId:(id)arg1;
- (id)folderInfoWithId:(id)arg1;
- (unsigned long long)generateTransferTaskId;
- (id)initWithAccount:(id)arg1;
- (id)parserTasksFromSQLResult:(id)arg1;
- (void)removeTaskWithId:(unsigned long long)arg1;
- (id)restoreAllTasks;
- (id)restoreSubTaskWithParentTaskId:(unsigned long long)arg1;
- (void)saveFileInfo:(id)arg1;
- (void)saveFolderInfo:(id)arg1;
- (void)saveTask:(id)arg1;

@end
