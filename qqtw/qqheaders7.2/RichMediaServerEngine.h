//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"
#import "WupTransportationProxyDelegate.h"

@class NSString;

@interface RichMediaServerEngine : NSObject <IEngineDispatchDelegate, WupTransportationProxyDelegate>
{
    char *_cryptSign;
    int _cryptSignLen;
    char *_cryptKey;
    int _cryptKeyLen;
    int _reqSignSeq;
}

+ (id)getInstance;
- (void)clearSignAndKey;
- (id)createNotifyError:(int)arg1;
- (id)createNotifyErrorForRTSErrorCode:(int)arg1;
@property(nonatomic) int cryptKeyLen; // @synthesize cryptKeyLen=_cryptKeyLen;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (char *)getCryptKey;
- (char *)getCryptSign;
- (_Bool)handleWupSendResult:(int)arg1 recvWupStruct:(CDStruct_7895f40e *)arg2 userInfo:(id)arg3;
- (id)init;
- (_Bool)isC2CPttDowloadCmd:(const char *)arg1;
- (_Bool)isC2CPttDowloadSucCmd:(const char *)arg1;
- (_Bool)isConnected;
- (void)notifyError:(id)arg1;
- (int)requestSignAndKey;
- (void)responseC2CPicDownload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CPicUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CPttDownload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CPttDownloadSucReq:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CPttUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CShortVideoDownload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseC2CShortVideoUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGetFriendNick:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGetGroupMemberNick:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGroupPicAndPttDownload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseGroupPicAndPttUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseHTMLPicAndPttUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responsePBFileDownloadReq:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responsePBFileUpload:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responsePBLongMsgDownloadReq:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseReqSignAndKey:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (void)responseShortVideoForward:(char *)arg1 DataLen:(int)arg2 Seq:(int)arg3;
- (int)sendC2CPicDownloadReq:(struct vector<Sc2cPicDownload, std::allocator<Sc2cPicDownload>> *)arg1;
- (int)sendC2CPicUploadReq:(struct vector<Sc2cPicUpload, std::allocator<Sc2cPicUpload>> *)arg1;
- (int)sendC2CPttDownloadReq:(struct Sc2cPttDownload *)arg1;
- (int)sendC2CPttUploadReq:(struct Sc2cPttUpload *)arg1;
- (int)sendC2CSVideoDownloadReq:(vector_4669ef0f *)arg1;
- (int)sendC2CSVideoUploadReq:(vector_08bc0f7c *)arg1;
- (int)sendC2CSVideoUploadReq:(vector_08bc0f7c *)arg1 withTimeout:(double)arg2;
- (int)sendC2cPttDownloadSucReq:(struct Sc2cPttDownloadSuc *)arg1;
- (int)sendGetFriendNickReq:(id)arg1;
- (int)sendGetGroupMemberNickReq:(long long)arg1 uinList:(id)arg2;
- (int)sendGroupPicDownloadReq:(struct vector<SGroupPicDownload, std::allocator<SGroupPicDownload>> *)arg1;
- (int)sendGroupPicUploadReq:(struct vector<SGroupPicUpload, std::allocator<SGroupPicUpload>> *)arg1;
- (int)sendGroupPttDownloadReq:(struct vector<SGroupPicDownload, std::allocator<SGroupPicDownload>> *)arg1;
- (int)sendGroupPttUploadReq:(struct vector<SGroupPicUpload, std::allocator<SGroupPicUpload>> *)arg1;
- (int)sendHTML5PicUploadReq:(struct vector<SCommonPicUpload, std::allocator<SCommonPicUpload>> *)arg1;
- (int)sendPBFileDownloadReq:(struct vector<SPBFileDownload, std::allocator<SPBFileDownload>> *)arg1;
- (int)sendPBFileUploadReq:(struct vector<SPBFileUpload, std::allocator<SPBFileUpload>> *)arg1;
- (int)sendPbLongMsgDownloadReq:(struct SpbLongMsgDownload *)arg1;
- (int)sendShortVideoForwardReq:(struct vector<SSVideoForward, std::allocator<SSVideoForward>> *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

