//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralListModel.h"

@interface TBRspGetWatcherModel : TBRspGeneralListModel
{
    unsigned int _viewTotalNum;
    unsigned int _strangerViewTotalNum;
    unsigned int _likeTotalNum;
    unsigned int _strangerLikeTotalNum;
    unsigned int _viewTotalTime;
}

@property(nonatomic) unsigned int likeTotalNum; // @synthesize likeTotalNum=_likeTotalNum;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
@property(nonatomic) unsigned int strangerLikeTotalNum; // @synthesize strangerLikeTotalNum=_strangerLikeTotalNum;
@property(nonatomic) unsigned int strangerViewTotalNum; // @synthesize strangerViewTotalNum=_strangerViewTotalNum;
@property(nonatomic) unsigned int viewTotalNum; // @synthesize viewTotalNum=_viewTotalNum;
@property(nonatomic) unsigned int viewTotalTime; // @synthesize viewTotalTime=_viewTotalTime;

@end
