//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQPimContactDB : NSObject
{
    void *_sysDB;
}

- (void *)addressBookRef;
- (void)checkSysDB;
- (struct __CFArray *)copyAllContacts;
- (void)dealloc;
- (id)getAllContactIDs;
- (long long)getContactsCount;
- (id)init;
@property(nonatomic) void *sysDB; // @synthesize sysDB=_sysDB;

@end
