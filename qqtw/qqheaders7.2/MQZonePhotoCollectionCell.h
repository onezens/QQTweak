//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MQZoneDragCollectionViewCell.h"

#import "IQZUrlDownloaderDelegate.h"

@class MQZImagePickerModel, NSMutableArray, NSString, QZGifItemView, UIImageView, UILabel, UIView;

@interface MQZonePhotoCollectionCell : MQZoneDragCollectionViewCell <IQZUrlDownloaderDelegate>
{
    UIImageView *_imageView;
    UIView *_view;
    NSString *_imageUrl;
    QZGifItemView *_playGifView;
    UILabel *_addIconLabel;
    NSMutableArray *_tags;
    double _flagX;
    NSMutableArray *_tagLabels;
    int _showTagsMaxCount;
    MQZImagePickerModel *_imagePickerModel;
}

- (void).cxx_destruct;
- (void)addSubLabel;
@property(retain, nonatomic) MQZImagePickerModel *imagePickerModel; // @synthesize imagePickerModel=_imagePickerModel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutLabelByTags:(id)arg1;
- (void)prepareForReuse;
- (void)requestFinished:(id)arg1;
- (void)showImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
