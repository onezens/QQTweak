//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALAsset.h"

@class NSMutableDictionary, NSString, QQAsset;

@interface ALAsset (Extent)
@property(readonly, nonatomic) long long assetSize; // @dynamic assetSize;
- (id)assetURL;
@property(retain, nonatomic) NSString *assetsGroupUrl; // @dynamic assetsGroupUrl;
- (int)asssetType;
- (long long)convertToRotationImageOrientation:(long long)arg1;
- (struct CGSize)dimensionSize;
- (int)getEditedFullScreenImageOrientation;
- (id)getEditedImageIfExist;
- (id)getEditedImageIfExist:(_Bool *)arg1;
- (id)getEditedImageWithXMP:(id)arg1;
- (id)getFullResolutionImage;
- (_Bool)getImageEdited;
- (id)getPhotoData;
- (_Bool)isAssetValid;
- (id)medadata;
- (id)realAssetURL;
@property(nonatomic) __weak QQAsset *shareAsset;
@property(retain, nonatomic) NSString *sortedIndex; // @dynamic sortedIndex;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @dynamic userInfo;
@end

