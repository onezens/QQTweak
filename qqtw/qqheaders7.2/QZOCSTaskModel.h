//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QZOCSLoadTimeStatistic, UINavigationController;

@interface QZOCSTaskModel : NSObject
{
    _Bool _needDownLoadVC;
    _Bool _isCanceled;
    _Bool _ignorePluginCheck;
    UINavigationController *_navigation;
    NSString *_pluginID;
    CDUnknownBlockType _loadSucessBlock;
    CDUnknownBlockType _loadFailedBlock;
    QZOCSLoadTimeStatistic *_timeCost;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool ignorePluginCheck; // @synthesize ignorePluginCheck=_ignorePluginCheck;
- (id)initWithPluginID:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3 needDownloadVC:(_Bool)arg4;
@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(copy, nonatomic) CDUnknownBlockType loadFailedBlock; // @synthesize loadFailedBlock=_loadFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType loadSucessBlock; // @synthesize loadSucessBlock=_loadSucessBlock;
@property(retain, nonatomic) UINavigationController *navigation; // @synthesize navigation=_navigation;
@property(nonatomic) _Bool needDownLoadVC; // @synthesize needDownLoadVC=_needDownLoadVC;
@property(retain, nonatomic) NSString *pluginID; // @synthesize pluginID=_pluginID;
@property(retain, nonatomic) QZOCSLoadTimeStatistic *timeCost; // @synthesize timeCost=_timeCost;

@end
