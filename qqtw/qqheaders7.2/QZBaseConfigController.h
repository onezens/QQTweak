//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QZBaseConfigController : NSObject
{
}

+ (void)clearFileBy:(long long)arg1;
+ (id)pathWithAdvId:(long long)arg1 andSubPath:(id)arg2;
+ (void)removeFileByPath:(id)arg1;
+ (id)rootPath;
- (void)downloadZipWithUrl:(id)arg1 reqFinishBlock:(CDUnknownBlockType)arg2 advId:(long long)arg3 subKey:(id)arg4;
- (id)readJsonConfigBy:(long long)arg1 subPath:(id)arg2 index:(long long)arg3 readFromFile:(_Bool *)arg4;
- (_Bool)shouldDownload:(long long)arg1 subKey:(id)arg2;
- (_Bool)upZip:(id)arg1 zipPath:(id)arg2 andFileMd5:(id)arg3;

@end

