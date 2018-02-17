//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QzHybridWebCachePluginInterface.h"

@class NSMutableDictionary, NSString;

@interface QZOfflineZipDownloadManager : NSObject <QzHybridWebCachePluginInterface>
{
    NSMutableDictionary *_urlParamDic;
    NSMutableDictionary *_imagesDic;
    NSMutableDictionary *_imagesNameDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addParamDicWithUrl:(id)arg1 business:(id)arg2 dir:(id)arg3 imageCount:(long long)arg4;
- (_Bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (id)dirKey:(id)arg1;
- (void)downloadOfflineZip:(id)arg1 business:(id)arg2 dir:(id)arg3 imageCount:(long long)arg4 currnetUin:(long long)arg5 completeHandler:(CDUnknownBlockType)arg6;
- (id)getHybridWebCacheData:(id)arg1;
- (id)getOfflineZipImageArray:(id)arg1;
- (id)getOfflineZipImageNameArray:(id)arg1;
- (id)init;
- (_Bool)isImageDataExist:(id)arg1 dir:(id)arg2 imageCount:(long long)arg3;
- (id)offlineZipImagePath:(id)arg1 dir:(id)arg2;
- (id)offlineZipPath;
- (void)onReceiveMemoryWarning;
- (void)rewriteResponseWithRequest:(id)arg1 response:(id)arg2 bodyData:(id)arg3 cache:(id)arg4 success:(CDUnknownBlockType)arg5 fail:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
