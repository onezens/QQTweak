//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class NSData;

@interface VVeboImage : UIImage
{
    NSData *_data;
    int index;
    struct CGImageSource *source;
    unsigned long long count;
}

+ (id)gifWithData:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (float)frameDuration;
- (id)initGifWithData:(id)arg1;
- (id)nextImage;
- (void)resumeIndex;

@end

