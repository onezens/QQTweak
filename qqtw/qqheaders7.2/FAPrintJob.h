//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FAPrintJob : NSObject
{
    _Bool _duplex;
    NSArray *_printingFiles;
    unsigned long long _numberOfCopies;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool duplex; // @synthesize duplex=_duplex;
@property(nonatomic) unsigned long long numberOfCopies; // @synthesize numberOfCopies=_numberOfCopies;
@property(retain, nonatomic) NSArray *printingFiles; // @synthesize printingFiles=_printingFiles;

@end

