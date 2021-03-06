//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQImageCompressorConfigMgr : NSObject
{
    _Bool _enableProgressiveJpegEncode;
    _Bool _enableProgressiveJpegDecode;
    unsigned int _progressiveJpegShowScan;
    unsigned int _progressiveJpegDownloadScan;
    int _xo;
}

+ (id)instance;
- (void)dealloc;
- (void)getConfigInfo;
- (id)init;
- (void)setDefault;
- (void)updateDpcConfig:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool enableProgressiveJpegDecode; // @dynamic enableProgressiveJpegDecode;
@property(nonatomic) _Bool enableProgressiveJpegEncode; // @dynamic enableProgressiveJpegEncode;
@property(nonatomic) unsigned int progressiveJpegDownloadScan; // @dynamic progressiveJpegDownloadScan;
@property(nonatomic) unsigned int progressiveJpegShowScan; // @dynamic progressiveJpegShowScan;

@end

