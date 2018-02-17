//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface QQVIPFunctionSectionPicInfoTable : NSObject <IQQDBOperationBase>
{
    NSString *_tableName;
    unsigned int _updateBatchSqlStatementId;
    unsigned int _queryPicInfoSqlStatementId;
}

- (void).cxx_destruct;
- (id)adapterFMResultSetToSectionPicodel:(id)arg1;
- (void)createTable;
- (void)createTable:(id)arg1;
- (id)getCreateTableSql;
- (id)getPicInfoBySectionId:(id)arg1 sectionId:(id)arg2;
- (id)getPicInfoBySectionId:(id)arg1 sectionId:(id)arg2 inDb:(id)arg3;
- (unsigned long long)getTableSign;
- (id)init;
- (_Bool)updatePicInfoBySectionId:(id)arg1 comicId:(id)arg2 sectionId:(id)arg3;
- (void)updatePicInfoBySectionId:(id)arg1 comicId:(id)arg2 sectionId:(id)arg3 inDb:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
