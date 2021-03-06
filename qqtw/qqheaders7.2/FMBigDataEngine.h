//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString;

@interface FMBigDataEngine : NSObject
{
    NSData *_sig;
    NSMutableArray *_serverList;
    unsigned long long _ipSetSuggest;
    NSString *_key;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getBigDataReqWithData:(id)arg1 cmd:(unsigned int)arg2 subcmd:(unsigned int)arg3;
- (id)getReqDataWithCmd:(unsigned int)arg1 json:(id)arg2;
- (id)getRespJson:(id)arg1 cmd:(long long)arg2 errorCode:(int *)arg3;
- (id)init;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)link;
- (_Bool)parseRespData:(char *)arg1 size:(unsigned long long)arg2 outDataHead:(id *)arg3 outDataBody:(id *)arg4;
- (id)serverList;
- (id)sig;

@end

