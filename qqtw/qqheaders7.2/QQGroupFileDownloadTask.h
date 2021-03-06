//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileTask.h"

@class NSArray, NSString, QQGroupFileInfo, QQGroupFolderInfo;

@interface QQGroupFileDownloadTask : QQGroupFileTask
{
    QQGroupFileInfo *_fileInfo;
    QQGroupFolderInfo *_folderInfo;
    NSArray *_subTasks;
    NSString *_tempFilePath;
}

- (void).cxx_destruct;
- (id)description;
- (id)extraInfo;
@property(readonly, nonatomic) QQGroupFileInfo *fileInfo;
@property(readonly, nonatomic) QQGroupFolderInfo *folderInfo;
- (id)initWithDataBaseRecordInfo:(id)arg1;
- (id)initWithGroupFileInfo:(id)arg1;
@property(retain, nonatomic) NSArray *subTasks; // @synthesize subTasks=_subTasks;
@property(retain, nonatomic) NSString *tempFilePath; // @synthesize tempFilePath=_tempFilePath;

@end

