//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePicUploadReqInfo.h"

@class NSString;

@interface GroupPicUploadReqInfo : BasePicUploadReqInfo
{
    long long _groupCode;
    _Bool _isDiscuss;
    _Bool _isPtt;
    long long _groupPicFileId;
    unsigned int _severIp;
    unsigned int _severPort;
    int _seq;
    int _retryCount;
    int _httpSessionId;
    NSString *_fileKey;
}

- (void)dealloc;
- (id)description;
- (id)initWithQQMessageModel:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *fileKey; // @dynamic fileKey;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(nonatomic) long long groupPicFileId; // @dynamic groupPicFileId;
@property(nonatomic) int httpSessionId; // @dynamic httpSessionId;
@property(nonatomic) _Bool isDiscuss; // @dynamic isDiscuss;
@property(nonatomic) _Bool isPtt; // @dynamic isPtt;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(nonatomic) int seq; // @dynamic seq;
@property(nonatomic) unsigned int severIp; // @dynamic severIp;
@property(nonatomic) unsigned int severPort; // @dynamic severPort;

@end
