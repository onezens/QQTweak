//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSString;

@interface TBReqMonitorValueModel : NSObject <ITBPBGetData>
{
    unsigned int _ID;
    unsigned int _value;
    NSString *_errmsg;
}

@property(nonatomic) unsigned int ID; // @synthesize ID=_ID;
- (void)dealloc;
@property(retain, nonatomic) NSString *errmsg; // @synthesize errmsg=_errmsg;
- (id)getRequestPBData;
@property(nonatomic) unsigned int value; // @synthesize value=_value;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

