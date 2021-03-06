//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IEngineDispatchDelegate.h"

@class NSString;

@interface QQPBPayMsgManager : NSObject <IEngineDispatchDelegate>
{
    _Bool bPayAbility;
}

+ (id)getInstance;
@property(nonatomic) _Bool bPayAbility; // @synthesize bPayAbility;
- (void)dealloc;
- (void)didRecievedMsg:(CDStruct_7895f40e)arg1;
- (id)getActionDataJson:(id)arg1;
- (id)init;
- (_Bool)isPayOrderExpire:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)payEventProcess:(id)arg1 aioModel:(id)arg2 tableView:(id)arg3;
- (void)savePayBtnStatus:(id)arg1;
- (void)sendOrderPayEventRequest:(unsigned long long)arg1 withParam:(id)arg2;
- (void)updatePayBtnStatue:(id)arg1 withAioModel:(id)arg2 tableView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

