//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SelectedUinInfoModel;

@interface LbsPackInfo : NSObject <NSCopying>
{
    _Bool _isMyself;
    int _status;
    unsigned int _priority;
    unsigned int _answer;
    NSString *_pId;
    NSString *_uin;
    NSString *_cftPackId;
    SelectedUinInfoModel *_selectInfoModel;
    NSString *_cftAuth_key;
    unsigned long long _mergedPoiId;
    NSString *_nick;
    NSString *_poiName;
    NSString *_poiDetail;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int answer; // @synthesize answer=_answer;
@property(copy, nonatomic) NSString *cftAuth_key; // @synthesize cftAuth_key=_cftAuth_key;
@property(copy, nonatomic) NSString *cftPackId; // @synthesize cftPackId=_cftPackId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic, getter=getNick) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) _Bool isMyself; // @synthesize isMyself=_isMyself;
@property(nonatomic) unsigned long long mergedPoiId; // @synthesize mergedPoiId=_mergedPoiId;
@property(copy, nonatomic) NSString *pId; // @synthesize pId=_pId;
@property(copy, nonatomic) NSString *poiDetail; // @synthesize poiDetail=_poiDetail;
@property(copy, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) unsigned int priority; // @synthesize priority=_priority;
@property(copy, nonatomic) SelectedUinInfoModel *selectInfoModel; // @synthesize selectInfoModel=_selectInfoModel;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;

@end
