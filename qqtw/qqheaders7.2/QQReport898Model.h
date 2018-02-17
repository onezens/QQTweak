//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQReportBaseModel.h"

#import "QQReportProtocol.h"

@class NSString;

@interface QQReport898Model : QQReportBaseModel <QQReportProtocol>
{
    NSString *_opUin;
    NSString *_targetUin;
    NSString *_opType;
    NSString *_opName;
    long long _opEntry;
    long long _opCount;
    long long _opResult;
    long long _reserved1;
    long long _reserved2;
    NSString *_reserved3;
    NSString *_reserved4;
}

+ (id)keyList;
- (void).cxx_destruct;
- (_Bool)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)logKey;
- (id)logString;
- (id)merge:(id)arg1;
- (id)modelWithLogString:(id)arg1;
@property(nonatomic) long long opCount; // @synthesize opCount=_opCount;
@property(nonatomic) long long opEntry; // @synthesize opEntry=_opEntry;
@property(copy, nonatomic) NSString *opName; // @synthesize opName=_opName;
@property(nonatomic) long long opResult; // @synthesize opResult=_opResult;
@property(copy, nonatomic) NSString *opType; // @synthesize opType=_opType;
@property(copy, nonatomic) NSString *opUin; // @synthesize opUin=_opUin;
@property(nonatomic) long long reserved1; // @synthesize reserved1=_reserved1;
@property(nonatomic) long long reserved2; // @synthesize reserved2=_reserved2;
@property(copy, nonatomic) NSString *reserved3; // @synthesize reserved3=_reserved3;
@property(copy, nonatomic) NSString *reserved4; // @synthesize reserved4=_reserved4;
@property(copy, nonatomic) NSString *targetUin; // @synthesize targetUin=_targetUin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
