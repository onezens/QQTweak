//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQReadInJoyThirdCacheMgr : NSObject
{
    NSMutableDictionary *_thirdVideoCache;
}

+ (id)GetInstance;
+ (void)requestThirdUrlWithVid:(id)arg1 andEntry:(int)arg2 andCanRetry:(_Bool)arg3 andParams:(id)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)genKey:(id)arg1 ThirdVideoRatio:(int)arg2;
- (id)getCacheUrlWithKey:(id)arg1;
- (id)multCDNUrls:(id)arg1;
- (void)setCacheUrlWithKey:(id)arg1 andUrl:(id)arg2 andVideotype:(unsigned long long)arg3;
@property(retain, nonatomic) NSMutableDictionary *thirdVideoCache; // @synthesize thirdVideoCache=_thirdVideoCache;

@end
