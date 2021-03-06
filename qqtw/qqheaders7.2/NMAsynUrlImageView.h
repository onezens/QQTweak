//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface NMAsynUrlImageView : UIButton
{
    NSString *_urlStr;
    struct CGSize _fitSize;
    _Bool _isLocalPath;
    _Bool _shouldDecompressImage;
    unsigned long long _imageStyle;
    int _xo;
    unsigned long long _startTime;
    _Bool _isNMFeedListBigPic;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize fitSize; // @synthesize fitSize=_fitSize;
- (CDStruct_a44e741f)getImageViewInfo;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isLocalPath; // @synthesize isLocalPath=_isLocalPath;
@property(nonatomic) _Bool isNMFeedListBigPic; // @synthesize isNMFeedListBigPic=_isNMFeedListBigPic;
- (void)setContentMode:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageWithURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 transform:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 transform:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool shouldDecompressImage; // @synthesize shouldDecompressImage=_shouldDecompressImage;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
- (void)setup;

// Remaining properties
@property(nonatomic) unsigned long long imageStyle; // @dynamic imageStyle;

@end

