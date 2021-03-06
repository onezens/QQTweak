//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, QQRichOperationQueue;

@interface QQRichImageSendPreprocess : NSObject
{
    QQRichOperationQueue *_operationQueue;
    NSMutableDictionary *_groupInfoDic;
    _Bool _isOriginal;
    _Bool _isCompletedWhenConfirm;
    _Bool _canClear;
}

+ (_Bool)enablePreCompress;
+ (_Bool)enablePreuploadImage;
+ (_Bool)enableSendMessage;
+ (id)getInstance;
+ (_Bool)isAssetTooBig:(id)arg1;
- (_Bool)addAsyncUploadAsset:(id)arg1 withTag:(long long)arg2 inBaseChatViewController:(id)arg3 andBodyType:(long long)arg4;
@property(nonatomic) _Bool canClear; // @synthesize canClear=_canClear;
- (_Bool)cancelAsyncUploadAsset:(id)arg1 withTag:(long long)arg2;
- (_Bool)cancelAsyncUploadAssetsWithTag:(long long)arg1 from:(int)arg2;
- (_Bool)checkOriginalSelectedImageWithTag:(long long)arg1;
- (_Bool)cleanCommitHandleByTag:(unsigned long long)arg1;
- (_Bool)cleanExecutDelayWithTag:(long long)arg1;
- (_Bool)cleanupByTag:(long long)arg1;
- (_Bool)commitAsyncUploadAssetsWithTag:(long long)arg1 inBaseChatViewController:(id)arg2 withCompletehandle:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)commitHandleByTag:(unsigned long long)arg1;
- (_Bool)confirmSendImage;
- (id)createOperator:(id)arg1 withTag:(long long)arg2 inBaseChatViewController:(id)arg3 andBodyType:(long long)arg4;
- (id)findImageSendOperatorByAsset:(id)arg1 andTag:(long long)arg2;
- (long long)getChatTypeByController:(id)arg1;
- (id)init;
@property(nonatomic) _Bool isCompletedWhenConfirm; // @synthesize isCompletedWhenConfirm=_isCompletedWhenConfirm;
- (_Bool)isEverythingDoneWithTag:(long long)arg1;
- (void)onCommitTasksInTag:(long long)arg1 withCompleteHandle:(CDUnknownBlockType)arg2;
- (void)onImageSendOperatorStatusChange:(id)arg1 source:(id)arg2 tag:(long long)arg3 status:(long long)arg4;
- (void)onSelectOriginal:(int)arg1;
- (void)resetSelectOriginal;

@end

