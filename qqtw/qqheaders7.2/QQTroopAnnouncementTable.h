//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBAccountChangedProtocol.h"

@class NSString, QQTroopAnnouncementTableOperation;

@interface QQTroopAnnouncementTable : NSObject <DBAccountChangedProtocol>
{
    QQTroopAnnouncementTableOperation *_dbOperation;
    struct CDBMaxMsgIdManager *_msgIdManager;
}

- (void).cxx_destruct;
- (_Bool)ClearAllOverdueGrayTipsMsg;
- (id)GetAnnouncementMsgWithSeq:(long long)arg1 groupCode:(long long)arg2 msgTime:(long long)arg3;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 HadReaded:(_Bool)arg3;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 AscOrder:(_Bool)arg2 StartTime:(long long)arg3 EndTime:(long long)arg4;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 HadReaded:(_Bool)arg4;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 Type:(int)arg3 Type:(int)arg4 AscOrder:(_Bool)arg5 StartTime:(long long)arg6 EndTime:(long long)arg7;
- (id)GetAnouncementMsgOfGroup:(long long)arg1 TypeArray:(id)arg2 AscOrder:(_Bool)arg3 StartTime:(long long)arg4 EndTime:(long long)arg5;
- (id)GetAnouncementMsgOfReadState:(_Bool)arg1;
- (id)GetAnouncementMsgWithMsgId:(long long)arg1;
- (id)GetAnouncementMsgWithSvrMsgId:(long long)arg1;
- (id)GetGrayTipsMsgOfGroup:(long long)arg1 Type:(int)arg2 Seq:(int)arg3;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2;
- (id)GetLastAnouncementMsgOfGroup:(long long)arg1 Type:(int)arg2 limit:(int)arg3;
- (void)dealloc;
- (void)delAllGrayTipsMsg;
- (_Bool)deleteAllTroopAnnouncementMsg;
- (_Bool)deleteTroopAnnouncementMsgBySeq:(long long)arg1;
- (_Bool)deleteTroopAnouncementMsg:(long long)arg1;
- (_Bool)deleteTroopAnouncementMsgArr:(id)arg1;
- (_Bool)deleteTroopAnouncementMsgOfReadState:(_Bool)arg1 GroupCode:(long long)arg2;
- (id)getGrayTipsToGroupDB;
- (id)init;
- (_Bool)insertTroopAnouncementMsgArray:(id)arg1;
- (void)onDBChanged:(id)arg1;
- (_Bool)updateTroopAnouncementMsgArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
