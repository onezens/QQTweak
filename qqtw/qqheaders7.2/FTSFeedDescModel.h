//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseCellModel.h"

@class NSString;

@interface FTSFeedDescModel : FTSBaseCellModel
{
    _Bool _dontShow;
    NSString *_ftsFeedDesc;
    id _moreModel;
    unsigned long long _dynamicSearchGroupMask;
}

- (void).cxx_destruct;
- (double)cellHeight;
@property(nonatomic) _Bool dontShow; // @synthesize dontShow=_dontShow;
@property(nonatomic) unsigned long long dynamicSearchGroupMask; // @synthesize dynamicSearchGroupMask=_dynamicSearchGroupMask;
@property(retain, nonatomic) NSString *ftsFeedDesc; // @synthesize ftsFeedDesc=_ftsFeedDesc;
@property(retain, nonatomic) id moreModel; // @synthesize moreModel=_moreModel;

@end

