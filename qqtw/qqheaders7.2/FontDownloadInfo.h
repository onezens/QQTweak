//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FontDownloadInfo : NSObject
{
    int _fontId;
    long long _fontType;
    CDUnknownBlockType _complete;
}

@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void)dealloc;
@property(nonatomic) int fontId; // @synthesize fontId=_fontId;
@property(nonatomic) long long fontType; // @synthesize fontType=_fontType;

@end

