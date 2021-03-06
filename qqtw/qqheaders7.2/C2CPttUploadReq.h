//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber, NSString, QQMessageModel, TransferPicInfo;

@interface C2CPttUploadReq : NSObject
{
    NSString *_uuid;
    long long _fromUin;
    long long _toUin;
    unsigned int _businesstype;
    TransferPicInfo *_pttInfo;
    NSData *_tempSeesionSign;
    QQMessageModel *_messageModel;
    NSNumber *_startReqTime;
    NSString *_serverUuid;
    NSString *_toMoblePhone;
    _Bool _useBDH;
    int _xo;
}

- (void)dealloc;
- (id)description;
- (id)initWithQQMessageModel:(id)arg1;
@property(retain, nonatomic) TransferPicInfo *pttIno; // @synthesize pttIno=_pttInfo;
@property(nonatomic) _Bool useBDH; // @synthesize useBDH=_useBDH;

// Remaining properties
@property(nonatomic) unsigned int businesstype; // @dynamic businesstype;
@property(nonatomic) long long fromUin; // @dynamic fromUin;
@property(retain, nonatomic) QQMessageModel *messageModel; // @dynamic messageModel;
@property(retain, nonatomic) NSString *serverUuid; // @dynamic serverUuid;
@property(retain, nonatomic) NSNumber *startReqTime; // @dynamic startReqTime;
@property(retain, nonatomic) NSData *tempSeesionSign; // @dynamic tempSeesionSign;
@property(retain, nonatomic) NSString *toMoblePhone; // @dynamic toMoblePhone;
@property(nonatomic) long long toUin; // @dynamic toUin;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

