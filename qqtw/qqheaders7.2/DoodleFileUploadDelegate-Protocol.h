//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, QQMessageModel;

@protocol DoodleFileUploadDelegate <NSObject>
- (void)OnFileUploadComplete:(unsigned int)arg1 model:(QQMessageModel *)arg2 withErr:(NSError *)arg3;
@end
