//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQVipFunctionDownloadProtocol.h"

@class NSMutableArray, NSRecursiveLock, NSString, QQLockDictionary, QQVIPFunctionGlobalStatus;

@interface QQVipFunctionDownloadManager : NSObject <QQVipFunctionDownloadProtocol>
{
    NSMutableArray *_callBackThreadArr;
    QQLockDictionary *_comicManageDic;
    NSRecursiveLock *_lock;
    QQVIPFunctionGlobalStatus *_globalStatus;
    unsigned long long _redPointTimestamp;
    double _userStartDownloadTimestamp;
    int _xo;
}

+ (id)shareManager;
- (void).cxx_destruct;
- (void)OnNotify:(id)arg1;
- (void)asynContinueDownloadComic:(id)arg1;
- (void)asynDeleteComic:(id)arg1 SectionArr:(id)arg2;
- (void)asynDownloadComic:(id)arg1 sectionModels:(id)arg2;
- (void)asynGetRunningSectionTaskCount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asynPauseDownloadAllComic;
- (void)asynPauseDownloadComic:(id)arg1;
- (void)asynPauseDownloadComic:(id)arg1 SectionID:(id)arg2;
- (void)asynPauseDownloadComic:(id)arg1 sectionIDArr:(id)arg2;
- (void)asynQueryRuningOrPauseSectionTaskCount:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetDBModel:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)callbackThreadAction:(void *)arg1;
- (void)clearCallbackThread;
- (void)clearDataManageContext;
- (id)comicManageObjBy:(id)arg1;
- (void)dealloc;
- (id)getComicDownloadStatus:(id)arg1;
- (id)getDownloadSectionDBModelArr:(id)arg1;
- (id)getDownloadedComicIDArr;
- (id)getOneCallBackThreadWithComicId:(id)arg1;
- (id)getSectionDBModel:(id)arg1 withSectionID:(id)arg2;
- (id)getSectionDBModelArr:(id)arg1 byDBModelState:(unsigned long long)arg2;
- (int)getTotalDownloadedSize:(id)arg1;
- (_Bool)hasDownloadRecordInComic:(id)arg1 forSection:(id)arg2;
- (_Bool)hasDownloadWithComicID:(id)arg1 withSectionID:(id)arg2;
- (id)init;
- (_Bool)isSectionAlreadySuccessDownload:(id)arg1 SectionID:(id)arg2;
- (_Bool)isThereAnyNewDownloadingTask;
- (void)notifyActionResult:(id)arg1;
- (void)removeNewTaskRedPoint;
@property(nonatomic) double userStartDownloadTimestamp; // @dynamic userStartDownloadTimestamp;
- (unsigned long long)totalRunningSectionTaskCount;
- (void)updateGlobalState;
- (void)updateSectionModelDic:(id)arg1 forComic:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *callBackThreadArr; // @dynamic callBackThreadArr;
@property(retain, nonatomic) QQLockDictionary *comicManageDic; // @dynamic comicManageDic;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQVIPFunctionGlobalStatus *globalStatus; // @dynamic globalStatus;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(nonatomic) unsigned long long redPointTimestamp; // @dynamic redPointTimestamp;
@property(readonly) Class superclass;

@end
