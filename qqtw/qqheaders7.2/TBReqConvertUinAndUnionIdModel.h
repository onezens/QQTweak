//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSArray, NSString;

@interface TBReqConvertUinAndUnionIdModel : NSObject <ITBPBGetData>
{
    unsigned int _convertType;
    NSArray *_userIdList;
}

@property(nonatomic) unsigned int convertType; // @synthesize convertType=_convertType;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getRequestPBData;
@property(retain, nonatomic) NSArray *userIdList; // @synthesize userIdList=_userIdList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
