//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRichMsgState.h"

@interface QQShortVideoMsgState : QQRichMsgState
{
    int _errorCode;
}

- (void)checkState;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (_Bool)failed;
- (_Bool)isForwardFail;
- (_Bool)isSendMsgFail;
- (_Bool)isUploadFail;
- (_Bool)isUploadPause;
- (_Bool)isUploadSucc;
- (_Bool)isUploading;
- (_Bool)isVideoCompressFail;
- (_Bool)isVideoCompressSucc;
- (_Bool)isVideoCompressing;
- (_Bool)isVideoDownSucc;
- (_Bool)isVideoDownloadFail;
- (_Bool)isVideoDownloadPause;
- (_Bool)isVideoDownloading;
- (void)resetVideoState;
- (_Bool)sending;
- (void)setState:(int)arg1;

@end
