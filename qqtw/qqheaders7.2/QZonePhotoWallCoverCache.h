//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneStorageBase.h"

@class NSMutableArray, NSMutableDictionary;

@interface QZonePhotoWallCoverCache : QZoneStorageBase
{
    NSMutableDictionary *_photoWallInfo;
    NSMutableArray *_localPictureList;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)flushLocalPicture;
- (void)flushPhotoWall;
- (id)getLocalPictureList;
- (id)getPhotoWallWithUin:(long long)arg1;
- (void)load;
- (void)removeLocalPictureListWithPhotoWallListWithState:(long long)arg1;
- (void)setPhotoWall:(id)arg1 withUin:(long long)arg2;

@end

