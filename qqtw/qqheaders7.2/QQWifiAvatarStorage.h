//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString, NSTimer, QQWifiLRUCache;

@interface QQWifiAvatarStorage : NSObject
{
    _Bool _dirtyCaches;
    NSTimer *_flushTimer;
    NSString *_cachePath;
    QQWifiLRUCache *_lruCache;
    NSRecursiveLock *_avatarLock;
    NSMutableDictionary *_avatarDict;
    NSMutableDictionary *_hashMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *avatarDict; // @synthesize avatarDict=_avatarDict;
@property(retain, nonatomic) NSRecursiveLock *avatarLock; // @synthesize avatarLock=_avatarLock;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)dealloc;
@property _Bool dirtyCaches; // @synthesize dirtyCaches=_dirtyCaches;
- (void)flushAvatarCache:(id)arg1;
@property(retain, nonatomic) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
- (id)getAvatarFileByUrl:(id)arg1;
- (id)getAvatarItem:(id)arg1;
- (id)getMD5:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *hashMap; // @synthesize hashMap=_hashMap;
- (id)init;
- (id)loadAvatar:(id)arg1;
@property(retain, nonatomic) QQWifiLRUCache *lruCache; // @synthesize lruCache=_lruCache;
- (void)onFlushTimer;
- (_Bool)queryAvatar:(id *)arg1 url:(id)arg2;
- (void)saveAvatar:(id)arg1 url:(id)arg2;
- (void)scheduledFlushTimer:(long long)arg1;
- (_Bool)updateAvatar:(id)arg1 url:(id)arg2;

@end
