//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, QQMessageModel;

@interface QQPicPausedUploadManager : NSObject
{
    NSMutableArray *_pausedUploadReqs;
    NSMutableArray *_pausedUploadHttps;
    QQMessageModel *_messageModel;
}

+ (id)getInstance;
- (void)cancelSendingInHttpStage:(id)arg1;
- (void)continuePausedUpload;
- (void)dealloc;
- (id)getAllPausedUpload;
- (id)getPauseUploadInfoBySeq:(int)arg1;
- (id)getPauseUploadInfoBySessionId:(int)arg1;
- (id)init;
- (_Bool)isPausedUpload:(id)arg1;
@property(retain, nonatomic) QQMessageModel *messageModel; // @synthesize messageModel=_messageModel;
- (long long)numOfPausedUpload;
- (void)pauseAllRelatedUpload:(id)arg1;
@property(retain, nonatomic) NSMutableArray *pausedUploadHttps; // @synthesize pausedUploadHttps=_pausedUploadHttps;
@property(retain, nonatomic) NSMutableArray *pausedUploadReqs; // @synthesize pausedUploadReqs=_pausedUploadReqs;
- (void)removeAllPausedUpload;
- (_Bool)removePausedUpload:(id)arg1;

@end
