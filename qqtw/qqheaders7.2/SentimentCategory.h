//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SentimentCategory : NSObject
{
    unsigned long long _curDisplayedImageNum;
    unsigned long long _totalImageNums;
    NSString *_name;
    NSArray *_imagenamelist;
}

@property unsigned long long curDisplayedImageNum; // @synthesize curDisplayedImageNum=_curDisplayedImageNum;
- (void)dealloc;
@property(retain, nonatomic) NSArray *imagenamelist; // @synthesize imagenamelist=_imagenamelist;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property unsigned long long totalImageNums; // @synthesize totalImageNums=_totalImageNums;

@end

