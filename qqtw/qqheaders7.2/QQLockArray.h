//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface QQLockArray : NSObject
{
    NSRecursiveLock *_lock;
    NSMutableArray *_array;
}

- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)fetchArray;
- (id)init;
- (id)initWithNSMutableArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setArray:(id)arg1;

@end

