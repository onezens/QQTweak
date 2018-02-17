//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseLocalDraftModel.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, QQPOIListCGIModel;

@interface QQGTDraftModel : QQBaseLocalDraftModel
{
    NSString *_title;
    NSString *_content;
    NSMutableArray *_assetUrlList;
    NSMutableDictionary *_uploadInfo;
    NSMutableDictionary *_cachePath;
    QQPOIListCGIModel *_poiModel;
    NSMutableDictionary *_uploadState;
    NSArray *_QQTribeMedia;
    NSNumber *_QQTribeContextType;
}

@property(retain, nonatomic) NSNumber *QQTribeContextType; // @synthesize QQTribeContextType=_QQTribeContextType;
@property(retain, nonatomic) NSArray *QQTribeMedia; // @synthesize QQTribeMedia=_QQTribeMedia;
- (void)addPhotoMsgToDraft:(id)arg1;
@property(retain, nonatomic) NSMutableArray *assetUrlList; // @synthesize assetUrlList=_assetUrlList;
@property(retain, nonatomic) NSMutableDictionary *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) QQPOIListCGIModel *poiModel; // @synthesize poiModel=_poiModel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableDictionary *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(retain, nonatomic) NSMutableDictionary *uploadState; // @synthesize uploadState=_uploadState;

@end
