//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralModel.h"

@class NSArray;

@interface TBRspGetFeedVisitor : TBRspGeneralModel
{
    unsigned int _viewTotalNum;
    NSArray *_userList;
}

- (void)dealloc;
- (id)description;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(nonatomic) unsigned int viewTotalNum; // @synthesize viewTotalNum=_viewTotalNum;

@end

