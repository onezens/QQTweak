//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQStoryTitleCellModel : NSObject
{
    _Bool _showArrow;
    _Bool _lastExpand;
    _Bool _expand;
    _Bool _selected;
    NSString *_title;
    double _separatorMargin;
    long long _modelType;
}

- (void)dealloc;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(nonatomic) _Bool lastExpand; // @synthesize lastExpand=_lastExpand;
@property(nonatomic) long long modelType; // @synthesize modelType=_modelType;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) double separatorMargin; // @synthesize separatorMargin=_separatorMargin;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

