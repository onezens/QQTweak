//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class TBGPSModel;

@interface TBReqGetLocation : TBReqGeneralListModel
{
    unsigned int _coordinate;
    TBGPSModel *_gps;
}

@property(nonatomic) unsigned int coordinate; // @synthesize coordinate=_coordinate;
- (void)dealloc;
- (id)getRequestPBData;
@property(retain, nonatomic) TBGPSModel *gps; // @synthesize gps=_gps;

@end
