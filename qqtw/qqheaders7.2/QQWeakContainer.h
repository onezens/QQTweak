//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQWeakContainer : NSObject
{
    id _target;
    id _strongTarget;
    NSString *_targetDescription;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) id strongTarget; // @synthesize strongTarget=_strongTarget;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *targetDescription; // @synthesize targetDescription=_targetDescription;

@end
