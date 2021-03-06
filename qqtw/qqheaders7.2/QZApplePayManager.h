//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface QZApplePayManager : NSObject
{
    NSDate *_yellowDiamondOpenDate;
    long long _openUser;
    _Bool _isFisrtInit;
    long long _payStatus;
}

+ (id)getAidFromEntranceType:(long long)arg1;
+ (id)getStarAidFromEntranceType:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getPfFromAid:(id)arg1;
- (_Bool)hasOpenYellowDiamond;
- (id)init;
@property(nonatomic) _Bool isFisrtInit; // @synthesize isFisrtInit=_isFisrtInit;
@property(nonatomic) long long payStatus; // @synthesize payStatus=_payStatus;
- (void)updateYellowDiamondOpenDate;
- (id)yellowDiamondPayURL:(id)arg1 openUin:(long long)arg2 openType:(long long)arg3 openMonth:(long long)arg4 isSelected:(_Bool)arg5;
- (void)yellowDiamondPayWebviewClose:(id)arg1;

@end

