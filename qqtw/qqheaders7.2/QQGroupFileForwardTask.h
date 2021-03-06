//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupFileTask.h"

@class NSString, QQGroupFileInfo;

@interface QQGroupFileForwardTask : QQGroupFileTask
{
    _Bool _noTips;
    unsigned int _targetBusinessType;
    QQGroupFileInfo *_fileInfo;
    unsigned long long _faJobId;
    unsigned long long _messageRandom;
    double _videoDuration;
    unsigned long long _targetUIN;
    NSString *_targetFileId;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
- (id)description;
@property(nonatomic) unsigned long long faJobId; // @synthesize faJobId=_faJobId;
@property(readonly, nonatomic) QQGroupFileInfo *fileInfo; // @synthesize fileInfo=_fileInfo;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)initWithFAModel:(id)arg1 toGroupCode:(unsigned long long)arg2;
- (id)initWithFileInfo:(id)arg1 targetBusinessType:(unsigned int)arg2 targetUIN:(unsigned long long)arg3;
@property(nonatomic) unsigned long long messageRandom; // @synthesize messageRandom=_messageRandom;
@property(nonatomic) _Bool noTips; // @synthesize noTips=_noTips;
@property(nonatomic) unsigned int targetBusinessType; // @synthesize targetBusinessType=_targetBusinessType;
@property(retain, nonatomic) NSString *targetFileId; // @synthesize targetFileId=_targetFileId;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) unsigned long long targetUIN; // @synthesize targetUIN=_targetUIN;

@end

