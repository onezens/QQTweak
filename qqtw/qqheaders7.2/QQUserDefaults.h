//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQUserDefaults : NSObject
{
}

+ (long long)getNumRedPotInterval:(id)arg1;
+ (long long)getRedPotInterval:(id)arg1;
+ (id)standardUserDefaults;
+ (_Bool)updateNumRedPotInterval:(long long)arg1 uin:(id)arg2;
+ (_Bool)updateRedPotInterval:(long long)arg1 uin:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)valueForKey:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
