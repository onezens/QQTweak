//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@interface NearbyVisitProRec : QQModel
{
    unsigned int _seq;
    unsigned int _enterCount;
    unsigned int _visitDuration;
    unsigned int _visitPicCount;
    unsigned int _opflag;
    unsigned int _listType;
    unsigned int _ruleID;
    unsigned long long _tinyid;
}

- (void)endRecordTime;
@property(nonatomic) unsigned int enterCount; // @synthesize enterCount=_enterCount;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) unsigned int listType; // @synthesize listType=_listType;
- (void)merge:(id)arg1;
@property(nonatomic) unsigned int opflag; // @synthesize opflag=_opflag;
@property(nonatomic) unsigned int ruleID; // @synthesize ruleID=_ruleID;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned long long tinyid; // @synthesize tinyid=_tinyid;
@property(nonatomic) unsigned int visitDuration; // @synthesize visitDuration=_visitDuration;
@property(nonatomic) unsigned int visitPicCount; // @synthesize visitPicCount=_visitPicCount;
- (void)startRecordTime;

@end
