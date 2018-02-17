//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBParseData.h"

@class NSString, TBErrorInfo;

@interface TBRspGetUserGuide : NSObject <ITBPBParseData>
{
    unsigned int _seqno;
    TBErrorInfo *_error;
    NSString *_picURL;
    NSString *_text;
    NSString *_confirmText;
    NSString *_cancelText;
}

@property(retain, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(retain, nonatomic) NSString *confirmText; // @synthesize confirmText=_confirmText;
- (void)dealloc;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSString *picURL; // @synthesize picURL=_picURL;
@property(nonatomic) unsigned int seqno; // @synthesize seqno=_seqno;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
