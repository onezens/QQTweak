//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IQQDBOperationBase.h"

@class NSString;

@interface DiscussGroupMemberTableOperation : NSObject <IQQDBOperationBase>
{
}

- (void)createTable:(id)arg1;
- (void)deleteAllMembersByDisGroupUin:(unsigned long long)arg1 inDB:(id)arg2;
- (void)deleteMemberByUin:(unsigned long long)arg1 andDisGroupUin:(unsigned long long)arg2 inDB:(id)arg3;
- (id)findAllMembersByDisGroupUin:(unsigned long long)arg1 inDB:(id)arg2;
- (id)findMemberByUin:(unsigned long long)arg1 andDisGroupUin:(unsigned long long)arg2 inDB:(id)arg3;
- (unsigned long long)getTableSign;
- (void)insertMember:(id)arg1 inDisGroup:(unsigned long long)arg2 inDB:(id)arg3;
- (void)insertMembers:(id)arg1 inDisGroup:(unsigned long long)arg2 inDB:(id)arg3;
- (void)refillMembers:(id)arg1 inDisGroup:(unsigned long long)arg2 inDB:(id)arg3;
- (void)replaceMember:(id)arg1 inDisGroup:(unsigned long long)arg2 inDB:(id)arg3;
- (void)replaceMembers:(id)arg1 inDisGroup:(unsigned long long)arg2 inDB:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

