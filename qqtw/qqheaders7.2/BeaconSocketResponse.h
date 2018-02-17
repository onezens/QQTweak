//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AnaLocalObjInitWithWupProtocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface BeaconSocketResponse : NSObject <AnaLocalObjInitWithWupProtocol>
{
    int statusCode;
    NSMutableDictionary *header;
    NSData *body;
    NSString *msg;
}

@property(retain, nonatomic) NSData *body; // @synthesize body;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *header; // @synthesize header;
- (void)initLocalObjWithWupBuffer:(JceInputStream_de19c559 *)arg1;
- (void)initWithWUPModel:(struct SocketResponse *)arg1;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) int statusCode; // @synthesize statusCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
