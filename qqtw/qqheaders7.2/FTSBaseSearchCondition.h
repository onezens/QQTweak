//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FTSBaseSearchCondition : NSObject <NSCopying>
{
    _Bool _isAIBlurSearch;
    NSString *_ftsSearchKeyWord;
    long long _ftsFeedType;
}

- (void).cxx_destruct;
@property(nonatomic) long long ftsFeedType; // @synthesize ftsFeedType=_ftsFeedType;
@property(copy, nonatomic) NSString *ftsSearchKeyWord; // @synthesize ftsSearchKeyWord=_ftsSearchKeyWord;
@property(nonatomic) _Bool isAIBlurSearch; // @synthesize isAIBlurSearch=_isAIBlurSearch;
- (Class)viewControllerClass;

@end
