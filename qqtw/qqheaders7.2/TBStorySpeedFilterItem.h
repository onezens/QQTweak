//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBStoryVideoVisualEffectsItem.h"

@class NSMutableArray, UIImageView;

@interface TBStorySpeedFilterItem : TBStoryVideoVisualEffectsItem
{
    UIImageView *_unitView;
    NSMutableArray *_digitImageViewArray;
    int _speed;
}

- (void)dealloc;
- (id)init;
- (_Bool)isPublish;
- (void)releaseDigitImageArray;
- (void)setSpeed:(int)arg1;
- (void)updateItem;

@end
