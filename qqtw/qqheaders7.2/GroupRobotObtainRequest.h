//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GSBaseRequest.h"

#import "GSRequestProtocol.h"

@class NSString;

@interface GroupRobotObtainRequest : GSBaseRequest <GSRequestProtocol>
{
    unsigned long long _groupCode;
}

- (void *)getRequestBodyString;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
- (id)parseResponseBodyString:(void *)arg1;
- (unsigned int)serviceNumber;
- (unsigned int)serviceType;
- (id)translateHeaderCode:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

