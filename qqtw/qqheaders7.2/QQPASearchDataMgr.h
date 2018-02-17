//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface QQPASearchDataMgr : NSObject
{
    unsigned long long _historyMaxNumber;
    NSString *_historyFileName;
    NSMutableArray *_historySearchWords;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)addNewHistorySearchKeyword:(id)arg1;
- (_Bool)clearHistorySearchKeywords;
- (void)dealloc;
- (id)getHistorySearchKeyword;
- (id)getHistoryWordsCachePath;
@property(copy, nonatomic) NSString *historyFileName; // @synthesize historyFileName=_historyFileName;
@property(nonatomic) unsigned long long historyMaxNumber; // @synthesize historyMaxNumber=_historyMaxNumber;
@property(retain, nonatomic) NSMutableArray *historySearchWords; // @synthesize historySearchWords=_historySearchWords;
- (id)init;
- (void)loadHistoryWordsFromFile;
- (_Bool)writeHistorySearchWordToFile;

@end
