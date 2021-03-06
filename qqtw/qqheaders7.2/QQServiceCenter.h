//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQServiceCenter.h"

@class AppVersionService, C2CDBService, C2CDBService_MultiTable, GroupDBService, NSString, PluginStatisticsEngine, QIMService, RecentMsgDBService, TmpMsgSrcDBService;

@interface QQServiceCenter : NSObject <IQQServiceCenter>
{
    QIMService *m_QIMService;
    PluginStatisticsEngine *m_pluginStatEngine;
    GroupDBService *m_groupDBServie;
    AppVersionService *m_appVersionService;
    C2CDBService *m_c2cDBService;
    C2CDBService_MultiTable *m_c2cMultiTableDB;
    RecentMsgDBService *m_recentMsgDB;
    TmpMsgSrcDBService *m_tmpMsgSrcDB;
}

- (id)AppVersionService;
- (id)C2CDBService;
- (id)C2CMultiTableDB;
- (id)GroupDBServie;
- (id)IMService;
- (id)PluginStatService;
- (void)dealloc;
- (id)recentMsgDB;
- (id)tmpMsgSrcDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

