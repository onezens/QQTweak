//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseInfoModel.h"

#import "FavCoding.h"

@class NSString;

@interface LocationModel : BaseInfoModel <FavCoding>
{
    NSString *_name;
    NSString *_address;
    NSString *_note;
    double _latitude;
    double _longitude;
    double _altitude;
}

- (id)GetFTSBrief;
- (id)GetFTSSrc;
- (_Bool)canForward;
- (Class)classForCell;
- (void)dealloc;
- (void)encodeAddReqMsg:(void *)arg1;
- (id)encodeDataForDetail:(_Bool)arg1;
- (void)encodeModifyReqMsg:(void *)arg1;
- (struct CLLocationCoordinate2D)getCoordinate;
- (id)getDefaultThumbPath;
- (int)getForwardData:(id)arg1 Fetch:(_Bool)arg2;
- (id)getForwardMsg;
- (int)getRspType;
- (_Bool)hasThumbnailForCell;
- (id)init;
- (id)initWithSummary:(void *)arg1;
- (id)isBriefMatched:(id)arg1;
- (id)isSrcMatched:(id)arg1;
- (void)mergeDataFromModel:(id)arg1;
- (void)setData:(id)arg1 forDetail:(_Bool)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) double altitude; // @dynamic altitude;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *note; // @dynamic note;
@property(readonly) Class superclass;

@end

