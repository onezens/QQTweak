//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface StackInfo : NSObject
{
    int invokeTimes;
    int _invokeTimes;
    NSArray *_stack;
}

- (void)dealloc;
- (id)initWithStack:(id)arg1 invokeTimes:(int)arg2;
@property int invokeTimes; // @synthesize invokeTimes=_invokeTimes;
@property(retain, nonatomic) NSArray *stack; // @synthesize stack=_stack;

@end
