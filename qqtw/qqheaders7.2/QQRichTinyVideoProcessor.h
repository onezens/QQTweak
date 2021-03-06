//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichOperatorBase.h"

@class NSString, UIImage;

@interface QQRichTinyVideoProcessor : QQRichOperatorBase
{
    UIImage *_thumbnail;
    NSString *_compressedMp4Path;
    NSString *_md5;
    _Bool _genThumbnail;
    _Bool _cropAndScale;
    int _sessionType;
}

- (void)dealloc;
- (_Bool)execut;
- (_Bool)genThumb;
- (unsigned long long)getMergeFileBitrate;
- (id)getMp4MergeName;
- (struct CGSize)getVideoTargetSize;
- (id)initWithTinyVideoClips:(id)arg1;
- (_Bool)mergeVideoFile:(CDUnknownBlockType)arg1;
@property(nonatomic) int sessionType; // @synthesize sessionType=_sessionType;

// Remaining properties
@property(copy, nonatomic) NSString *compressedMp4Path; // @dynamic compressedMp4Path;
@property(nonatomic) _Bool cropAndScale; // @dynamic cropAndScale;
@property(nonatomic) _Bool genThumbnail; // @dynamic genThumbnail;
@property(copy, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) UIImage *thumbnail; // @dynamic thumbnail;

@end

