//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QQGroupEnterEffectModel : NSObject
{
    unsigned int _svipLevel;
    unsigned int _svipType;
    unsigned int _groupLevel;
    unsigned long long _groupCode;
    unsigned long long _uin;
    unsigned long long _effectId;
    unsigned long long _setMode;
    NSString *_nick;
    double _addTime;
}

- (void).cxx_destruct;
@property(nonatomic) double addTime; // @synthesize addTime=_addTime;
@property(nonatomic) unsigned long long effectId; // @synthesize effectId=_effectId;
@property(nonatomic) unsigned long long groupCode; // @synthesize groupCode=_groupCode;
@property(nonatomic) unsigned int groupLevel; // @synthesize groupLevel=_groupLevel;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) unsigned long long setMode; // @synthesize setMode=_setMode;
@property(nonatomic) unsigned int svipLevel; // @synthesize svipLevel=_svipLevel;
@property(nonatomic) unsigned int svipType; // @synthesize svipType=_svipType;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;

@end
