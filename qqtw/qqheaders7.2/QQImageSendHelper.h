//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, QQBaseChatViewController, QQBroadcastImgHelper;

@interface QQImageSendHelper : NSObject
{
    _Bool _async;
    NSArray *_images;
    _Bool _useMD5Name;
    QQBaseChatViewController *_baseChatViewController;
    int _body_type;
    int _image_from;
    int _scale_mode;
    int _accType;
    _Bool _isOriginal;
    NSArray *_picInfoArray;
    NSDictionary *_modelDic;
    int _xo;
    CDUnknownBlockType _complete_handle;
    QQBroadcastImgHelper *_broadcastImgHelper;
}

- (void).cxx_destruct;
- (_Bool)asyncUploadImages;
- (_Bool)asyncUploadImages:(int)arg1 bodyType:(int)arg2 Completehandle:(CDUnknownBlockType)arg3;
- (_Bool)asyncUploadImages:(int)arg1 bodyType:(int)arg2 scaleMode:(int)arg3 Completehandle:(CDUnknownBlockType)arg4;
@property(nonatomic) QQBroadcastImgHelper *broadcastImgHelper; // @synthesize broadcastImgHelper=_broadcastImgHelper;
@property(copy, nonatomic) CDUnknownBlockType complete_handle; // @synthesize complete_handle=_complete_handle;
- (void)dealloc;
- (_Bool)doUploadImages;
- (_Bool)doUploadImages:(id)arg1;
- (int)getAccType;
- (int)getScaleAndCompressMode;
- (int)getScaleMode:(id)arg1;
- (id)initWithImage:(id)arg1 andBroadcastImgHelper:(id)arg2;
- (id)initWithImage:(id)arg1 andQQBaseChatViewController:(id)arg2;
@property(nonatomic) _Bool isOriginal; // @dynamic isOriginal;
- (_Bool)isUseMD5Name:(id)arg1;
- (int)sessionType;
@property(nonatomic) int image_from; // @dynamic image_from;
- (_Bool)syncUploadImages;
- (_Bool)syncUploadImages:(int)arg1 bodyType:(int)arg2;
- (_Bool)syncUploadImages:(int)arg1 bodyType:(int)arg2 scaleMode:(int)arg3;

// Remaining properties
@property(nonatomic) int accType; // @dynamic accType;
@property(nonatomic) _Bool async; // @dynamic async;
@property(retain, nonatomic) QQBaseChatViewController *baseChatViewController; // @dynamic baseChatViewController;
@property(nonatomic) int body_type; // @dynamic body_type;
@property(retain, nonatomic) NSArray *images; // @dynamic images;
@property(retain, nonatomic) NSDictionary *modelDic; // @dynamic modelDic;
@property(retain, nonatomic) NSArray *picInfoArray; // @dynamic picInfoArray;
@property(nonatomic) int scale_mode; // @dynamic scale_mode;
@property(nonatomic) _Bool useMD5Name; // @dynamic useMD5Name;

@end
