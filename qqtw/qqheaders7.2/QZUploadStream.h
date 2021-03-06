//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSData, NSInputStream, NSMutableArray, NSOutputStream, NSString, NSTimer, QZUpIpInfo;

@interface QZUploadStream : NSObject <NSStreamDelegate>
{
    _Bool _isFinishLoading;
    _Bool _isWriting;
    _Bool _readyToSendData;
    QZUpIpInfo *_ipInfo;
    NSString *_domainIp;
    NSInputStream *_input;
    NSOutputStream *_output;
    NSTimer *_connectionTimer;
    NSData *_dataToSend;
    NSMutableArray *_readerQueue;
    long long _streamState;
    double _socketTimeout;
    NSTimer *_socketTimer;
    id <QZUploadStreamDelegate> _delegate;
    long long _maxSeg;
}

- (void).cxx_destruct;
- (void)TrySend;
- (void)connectWithTimeout:(double)arg1;
@property(retain, nonatomic) NSTimer *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
@property(retain, nonatomic) NSData *dataToSend; // @synthesize dataToSend=_dataToSend;
- (void)dealloc;
@property(nonatomic) __weak id <QZUploadStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didConnectionTimeout;
- (void)didSocketTimeout;
- (void)disconnect;
@property(retain, nonatomic) NSString *domainIp; // @synthesize domainIp=_domainIp;
- (id)getRemoteIPAddress;
- (void)getStreamsToHostNamed:(id)arg1 port:(long long)arg2 inputStream:(id *)arg3 outputStream:(id *)arg4;
- (void)handleStreamBytesAvailable;
- (void)handleStreamEndEncountered:(id)arg1;
- (void)handleStreamErrorOccurred:(id)arg1;
- (void)handleStreamOpenCompleted:(id)arg1;
- (void)handleStreamSpaceAvailable;
- (id)init;
@property(retain, nonatomic) NSInputStream *input; // @synthesize input=_input;
- (void)invalidConnectionTimer;
- (void)invalidSocketTimer;
@property(retain, nonatomic) QZUpIpInfo *ipInfo; // @synthesize ipInfo=_ipInfo;
- (_Bool)isConnected;
- (_Bool)isConnecting;
@property(nonatomic) _Bool isFinishLoading; // @synthesize isFinishLoading=_isFinishLoading;
@property(nonatomic) _Bool isWriting; // @synthesize isWriting=_isWriting;
@property(nonatomic) long long maxSeg; // @synthesize maxSeg=_maxSeg;
@property(retain, nonatomic) NSOutputStream *output; // @synthesize output=_output;
- (void)prepareForReuse;
- (void)readPacketWithTag:(id)arg1;
@property(retain, nonatomic) NSMutableArray *readerQueue; // @synthesize readerQueue=_readerQueue;
@property(nonatomic) _Bool readyToSendData; // @synthesize readyToSendData=_readyToSendData;
- (void)sendData:(id)arg1;
@property(nonatomic) double socketTimeout; // @synthesize socketTimeout=_socketTimeout;
@property(retain, nonatomic) NSTimer *socketTimer; // @synthesize socketTimer=_socketTimer;
@property(nonatomic) long long streamState; // @synthesize streamState=_streamState;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)updateSocketTimer;
- (void)writeDataErrorError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

