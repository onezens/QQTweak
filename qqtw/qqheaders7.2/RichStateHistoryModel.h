//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class NSString, RichStateModel;

@interface RichStateHistoryModel : QQGroupPropertyModel
{
}

- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;

// Remaining properties
@property(nonatomic) int creatTime; // @dynamic creatTime;
@property(nonatomic) int delTime; // @dynamic delTime;
@property(nonatomic) int modiTime; // @dynamic modiTime;
@property(retain, nonatomic) RichStateModel *rich; // @dynamic rich;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(nonatomic) int type; // @dynamic type;

@end

