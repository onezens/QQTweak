//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ContentUpdateStorage : NSObject
{
}

+ (id)GetInstance;
- (id)OpenContentUpdateDB;
- (_Bool)batUpdateContentUpdate:(id)arg1 uin:(long long)arg2;
- (void)createContentUpdateTable:(id)arg1;
- (id)getContentUpdateDBPath;
- (_Bool)getContentUpdateInfoFromDB:(long long)arg1 contentInfo:(id)arg2;
- (_Bool)updateContentUpdateVersion:(int)arg1 name:(id)arg2 uin:(long long)arg3 version:(unsigned int)arg4 flag:(unsigned int)arg5;

@end

