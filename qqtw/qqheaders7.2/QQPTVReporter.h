//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQPTVReporter : NSObject
{
    _Bool _isCancel;
    double _compressStartTime;
    double _compressTime;
    double _genThumbStartTime;
    double _genThumbTime;
    double _duration;
    double _fileSize;
    NSMutableDictionary *_reportData;
}

+ (id)getInstance;
- (id)getCancelReportData;
- (id)getTmpReportData;
- (id)init;
- (void)onCancel;
- (void)onCompressFinish:(unsigned long long)arg1 filePath:(id)arg2;
- (void)onCompressStart:(unsigned long long)arg1;
- (void)onGenThumbFinish;
- (void)onGenThumbStart;
- (void)onSend:(double)arg1;
@property(retain, nonatomic) NSMutableDictionary *reportData; // @synthesize reportData=_reportData;

@end

