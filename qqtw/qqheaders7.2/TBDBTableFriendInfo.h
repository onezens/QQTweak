//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface TBDBTableFriendInfo : NSObject <IQQDBOperationBase>
{
}

- (void)createFriendInfoTable:(id)arg1;
- (void)deleteAllFriendInfo:(id)arg1;
- (id)getAllFriendInfo:(id)arg1;
- (unsigned long long)getTableSign;
- (void)updateFriendInfoWithModel:(id)arg1 inDb:(id)arg2;
- (void)updateTable:(id)arg1 inDb:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

