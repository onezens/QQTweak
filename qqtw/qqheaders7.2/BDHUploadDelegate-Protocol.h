//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError;

@protocol BDHUploadDelegate <NSObject>

@optional
- (void)notifyBDHCancel:(long long)arg1 uploadDetail:(NSDictionary *)arg2;
- (void)notifyBDHFail:(long long)arg1 uploadDetail:(NSDictionary *)arg2 fail:(NSError *)arg3;
- (void)notifyBDHProgress:(long long)arg1 uploadDetail:(NSDictionary *)arg2 progress:(float)arg3;
- (void)notifyBDHSuccess:(long long)arg1 uploadDetail:(NSDictionary *)arg2;
@end
