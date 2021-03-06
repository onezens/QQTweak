//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSString;

@interface QQTroopMemModel : QQModel
{
    int _FaceId;
    int _Age;
    int _Status;
    int _Gender;
    long long _GroupUin;
    long long _GroupCode;
    long long _MemUin;
    NSString *_Nick;
    NSString *_Mark;
    NSString *_strReMark;
    int _MemberState;
    NSString *_showName;
    NSString *_nameSortKey;
    NSString *_pinyinOfName;
    NSString *_phone;
    long long _MemberLevel;
    long long _rankLevel;
    long long _JoinTime;
    long long _LastSpeakTime;
    long long _CreditLevel;
    long long _Flag;
    long long _FlagExt;
    long long _Point;
    int _Concerned;
    int _Shielded;
    NSString *_speciaTitle;
    unsigned long long _speciaTitleExpireTime;
    int _xo;
    _Bool _isPttGuest;
    unsigned int _globalChatLevel;
}

- (long long)compareByStatusDesc:(id)arg1;
- (long long)compareMember:(id)arg1;
- (long long)compareMemberByEnterTime:(id)arg1;
- (long long)compareMemberByGlobalLevel:(id)arg1;
- (long long)compareMemberByLevel:(id)arg1;
- (long long)compareMemberBySpeakTime:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)getReMark;
- (id)getUserSummaryModel;
@property(nonatomic) unsigned int globalChatLevel; // @synthesize globalChatLevel=_globalChatLevel;
- (id)init;
- (id)init:(id)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(long long)arg6:(long long)arg7:(long long)arg8;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) _Bool isPttGuest; // @synthesize isPttGuest=_isPttGuest;
- (_Bool)isSpeciaTitleAvailable;
@property(retain, nonatomic) NSString *nameSortKey; // @dynamic nameSortKey;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *pinyinOfName; // @dynamic pinyinOfName;
@property(retain) NSString *showName; // @synthesize showName=_showName;
@property(copy, nonatomic) NSString *speciaTitle; // @dynamic speciaTitle;
@property(nonatomic) unsigned long long speciaTitleExpireTime; // @dynamic speciaTitleExpireTime;
- (_Bool)specialTitleExpire;

// Remaining properties
@property(nonatomic) int Age; // @dynamic Age;
@property(nonatomic) int Concerned; // @dynamic Concerned;
@property(nonatomic) long long CreditLevel; // @dynamic CreditLevel;
@property(nonatomic) int FaceId; // @dynamic FaceId;
@property(nonatomic) long long Flag; // @dynamic Flag;
@property(nonatomic) long long FlagExt; // @dynamic FlagExt;
@property(nonatomic) int Gender; // @dynamic Gender;
@property(nonatomic) long long GroupCode; // @dynamic GroupCode;
@property(nonatomic) long long GroupUin; // @dynamic GroupUin;
@property(nonatomic) long long JoinTime; // @dynamic JoinTime;
@property(nonatomic) long long LastSpeakTime; // @dynamic LastSpeakTime;
@property(copy, nonatomic) NSString *Mark; // @dynamic Mark;
@property(nonatomic) long long MemUin; // @dynamic MemUin;
@property(nonatomic) long long MemberLevel; // @dynamic MemberLevel;
@property(nonatomic) int MemberState; // @dynamic MemberState;
@property(copy, nonatomic) NSString *Nick; // @dynamic Nick;
@property(nonatomic) long long Point; // @dynamic Point;
@property(nonatomic) int Shielded; // @dynamic Shielded;
@property(nonatomic) int Status; // @dynamic Status;
@property(nonatomic) int rankLevel; // @dynamic rankLevel;
@property(copy, nonatomic) NSString *strReMark; // @dynamic strReMark;

@end

