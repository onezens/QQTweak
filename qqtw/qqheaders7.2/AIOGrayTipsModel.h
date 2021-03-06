//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TipsMessageModel.h"

@class NSString;

@interface AIOGrayTipsModel : TipsMessageModel
{
    NSString *_brief;
    _Bool _isRemind;
    _Bool _showAsLastest;
    unsigned long long _groupCode;
    unsigned long long _uin;
    unsigned long long _sessionType;
    _Bool _isDiscussGroupMsg;
    long long _sourceType;
}

- (void)dealloc;
@property(nonatomic) _Bool isDiscussGroupMsg; // @synthesize isDiscussGroupMsg=_isDiscussGroupMsg;
@property(nonatomic) unsigned long long sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;

// Remaining properties
@property(retain, nonatomic) NSString *brief; // @dynamic brief;
@property(nonatomic) unsigned long long groupCode; // @dynamic groupCode;
@property(nonatomic) _Bool isRemind; // @dynamic isRemind;
@property(nonatomic) _Bool showAsLastest; // @dynamic showAsLastest;
@property(nonatomic) unsigned long long uin; // @dynamic uin;

@end

