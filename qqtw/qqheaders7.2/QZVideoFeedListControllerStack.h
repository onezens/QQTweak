//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface QZVideoFeedListControllerStack : NSObject
{
    NSMutableArray *_ctrlArray;
}

+ (id)instance;
- (void).cxx_destruct;
- (id)init;
- (void)popController;
- (void)pushController:(id)arg1;
- (id)topController;

@end

