//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface QZUploadResponse : NSObject
{
    long long _ret;
    long long _flag;
    NSString *_msg;
    NSString *_session;
    NSData *_rspData;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long ret; // @synthesize ret=_ret;
@property(retain, nonatomic) NSData *rspData; // @synthesize rspData=_rspData;
@property(retain, nonatomic) NSString *session; // @synthesize session=_session;

@end

