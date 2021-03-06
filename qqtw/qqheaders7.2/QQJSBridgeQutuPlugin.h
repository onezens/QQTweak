//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "IQutuDownloadDelegate.h"

@class NSMutableArray, NSString, QutuDownImgTask;

@interface QQJSBridgeQutuPlugin : QQWebViewPluginQQBizBase <IQutuDownloadDelegate>
{
    NSMutableArray *_pathArray;
    NSString *_addQutuCallback;
    QutuDownImgTask *_task;
    int _addQutuAction;
}

+ (void)webViewControllerForQutuSecion:(id)arg1 isPush:(_Bool)arg2;
- (void)dealloc;
- (void)doAddQutuCallBackWithResult:(id)arg1 authRst:(id)arg2 failNum:(int)arg3 succNum:(int)arg4;
- (void)faceManager:(int)arg1;
- (void)handleJsBridgeRequest_qutu_addQutu:(id)arg1;
- (void)handleJsBridgeRequest_qutu_getCurrentPkgInfo:(id)arg1;
- (id)init;
- (void)onDownloadResult:(int)arg1 authRst:(id)arg2 failNum:(int)arg3 succNum:(int)arg4;
- (id)serializeAndConvertToString:(id)arg1;

@end

