//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURL, QQRichVideoPreloadWriterManager;

@protocol QQRichVideoPreloadWriterManagerDelegate <NSObject>

@optional
- (void)QQRichVideoPreloadWriterManager:(QQRichVideoPreloadWriterManager *)arg1 finishedMakeThumbnailAtUrl:(NSURL *)arg2;
- (void)QQRichVideoPreloadWriterManager:(QQRichVideoPreloadWriterManager *)arg1 finishedVideoAtUrl:(NSURL *)arg2 SectionNumber:(int)arg3;
- (void)QQRichVideoPreloadWriterManager:(QQRichVideoPreloadWriterManager *)arg1 recordError:(NSError *)arg2;
@end

