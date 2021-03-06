//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBParseData.h"

@class NSString, TBErrorInfo;

@interface TBRspGetGroupDynamicEntrancePicture : NSObject <ITBPBParseData>
{
    TBErrorInfo *_error;
    unsigned long long _groupId;
    NSString *_coverUrl;
}

@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
- (void)dealloc;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

