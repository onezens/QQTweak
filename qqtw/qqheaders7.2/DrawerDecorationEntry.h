//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DrawerCellCallBack.h"

@class NSString;

@interface DrawerDecorationEntry : NSObject <DrawerCellCallBack>
{
}

- (id)cellReuseId;
- (id)fillCell:(id)arg1;
- (float)key;
- (void)onClick;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

