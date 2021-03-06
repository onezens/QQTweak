//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MulMemSelUserInfo : NSObject
{
    int _actionType;
    NSMutableArray *_joinedMemsInfo;
    NSMutableArray *_joinedPhoneMemsInfo;
    int _configRlItemType;
    int _configGroupType;
    int _rlType;
    unsigned long long _maxHeadCapacity;
    unsigned long long _opLimit;
    _Bool _showSelectAll;
    long long _maxSelAll;
    int _selectType;
    _Bool _returnWhenReachMaxHeadCapacity;
    NSString *_sourceToken;
    int _xo;
    _Bool _initialized;
    NSArray *_selectedMemsInfo;
    NSArray *_selectedPhoneMemsInfo;
    NSString *_groupCode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupCode; // @synthesize groupCode=_groupCode;
- (id)init;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(copy, nonatomic) NSArray *selectedMemsInfo; // @synthesize selectedMemsInfo=_selectedMemsInfo;
@property(copy, nonatomic) NSArray *selectedPhoneMemsInfo; // @synthesize selectedPhoneMemsInfo=_selectedPhoneMemsInfo;

// Remaining properties
@property(nonatomic) int actionType; // @dynamic actionType;
@property(nonatomic) int configGroupType; // @dynamic configGroupType;
@property(nonatomic) int configRlItemType; // @dynamic configRlItemType;
@property(retain, nonatomic) NSMutableArray *joinedMemsInfo; // @dynamic joinedMemsInfo;
@property(retain, nonatomic) NSMutableArray *joinedPhoneMemsInfo; // @dynamic joinedPhoneMemsInfo;
@property(nonatomic) unsigned long long maxHeadCapacity; // @dynamic maxHeadCapacity;
@property(nonatomic) long long maxSelAll; // @dynamic maxSelAll;
@property(nonatomic) unsigned long long opLimit; // @dynamic opLimit;
@property(nonatomic) _Bool returnWhenReachMaxHeadCapacity; // @dynamic returnWhenReachMaxHeadCapacity;
@property(nonatomic) int rlType; // @dynamic rlType;
@property(nonatomic) int selectType; // @dynamic selectType;
@property(nonatomic) _Bool showSelectAll; // @dynamic showSelectAll;
@property(retain, nonatomic) NSString *sourceToken; // @dynamic sourceToken;

@end

