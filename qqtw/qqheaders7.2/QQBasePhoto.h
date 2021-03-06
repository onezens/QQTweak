//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString, UIImage;

@interface QQBasePhoto : NSObject
{
    UIImage *_image;
    UIImage *_thumbImage;
    struct CGRect _thumbRect;
    NSString *_caption;
    double _progress;
    int _gifStatus;
    long long _fileSize;
    id <QQPhotoDelegate> _delegate;
    NSString *_photoPath;
    NSString *_thumbPath;
    _Bool _isDownloading;
    _Bool _isDownloadingThumb;
    _Bool _isNolongerUse;
    _Bool _isLoadingInProgress;
    NSLock *_loadLock;
    _Bool _isTinyVideo;
    int _xo;
    _Bool _isPTV;
    _Bool _isDynamicVideo;
    _Bool _isGroupFilePic;
    _Bool _isQZVideo;
    _Bool _isQzonePic;
    _Bool _isFilePic;
    _Bool _isFlashPic;
    _Bool _needUseArkHttp;
    long long _imageOrientation;
    struct CGSize _imageSize;
}

+ (id)photoWithPath:(id)arg1;
- (void)asynLoadImage;
- (void)cancelDownloadPhoto;
- (void)dealloc;
@property(nonatomic) id <QQPhotoDelegate> delegate; // @synthesize delegate=_delegate;
- (void)downloadPhoto;
- (void)downloadThumbPhoto;
@property long long fileSize; // @synthesize fileSize=_fileSize;
- (id)getImage;
@property(nonatomic, getter=getImageOrientation) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (id)getImageRaw;
- (id)getImageRawEx;
- (int)getImageScaleDenom;
@property(nonatomic, getter=getImageSize) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)getJpegImageRaw;
@property(retain, nonatomic, getter=getPhotoPath) NSString *photoPath; // @synthesize photoPath=_photoPath;
- (id)getThumbImage;
- (id)getTmpImage;
- (id)init;
- (id)initWithImage:(id)arg1;
- (id)initWithPath:(id)arg1;
@property _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(nonatomic) _Bool isDynamicVideo; // @synthesize isDynamicVideo=_isDynamicVideo;
@property(nonatomic) _Bool isFilePic; // @synthesize isFilePic=_isFilePic;
@property(nonatomic) _Bool isFlashPic; // @synthesize isFlashPic=_isFlashPic;
- (_Bool)isGif;
- (void)isGifBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool isGroupFilePic; // @synthesize isGroupFilePic=_isGroupFilePic;
- (_Bool)isIphone4EarlyDevice;
- (_Bool)isJpgComplete;
@property _Bool isLoadingInProgress; // @synthesize isLoadingInProgress=_isLoadingInProgress;
- (_Bool)isNeedAsyncLoad;
@property _Bool isNolongerUse; // @synthesize isNolongerUse=_isNolongerUse;
@property(nonatomic) _Bool isPTV; // @synthesize isPTV=_isPTV;
@property(nonatomic) _Bool isQZVideo; // @synthesize isQZVideo=_isQZVideo;
@property(nonatomic) _Bool isQzonePic; // @synthesize isQzonePic=_isQzonePic;
@property(nonatomic) _Bool needUseArkHttp; // @synthesize needUseArkHttp=_needUseArkHttp;
@property double progress; // @synthesize progress=_progress;
- (void)releaseImage;
- (void)reloadPhoto;

// Remaining properties
@property(retain, nonatomic) NSString *caption; // @dynamic caption;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
@property(nonatomic) _Bool isTinyVideo; // @dynamic isTinyVideo;
@property(retain, nonatomic) NSString *thumbPath; // @dynamic thumbPath;
@property(nonatomic) struct CGRect thumbRect; // @dynamic thumbRect;

@end

