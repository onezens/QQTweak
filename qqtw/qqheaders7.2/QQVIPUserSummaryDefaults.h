//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQVIPUserSummaryDefaults : NSObject
{
    NSMutableDictionary *_dic;
    int _xo;
}

+ (id)userDefaults;
- (void).cxx_destruct;
- (id)init;
- (void)loadDefaults;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 withTargetVersion:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1 exceptTargetVersion:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 withTargetVersion:(id)arg3;
- (_Bool)synchronize;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *dic; // @dynamic dic;

@end
