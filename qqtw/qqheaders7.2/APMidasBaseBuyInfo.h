//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupPropertyModel.h"

@class APMidasCouponsInfo, APMidasHFInfo, NSString, UIImage;

@interface APMidasBaseBuyInfo : QQGroupPropertyModel
{
    long long _totalPrice;
    APMidasHFInfo *hfInfo;
}

- (void)calcCost:(long long)arg1;
- (void)dealloc;
- (long long)getCostByCount:(long long)arg1;
@property(readonly, nonatomic) APMidasHFInfo *hfInfo; // @synthesize hfInfo;
- (id)init;
@property(readonly, nonatomic) long long rawTotalPrice;
- (void)resetCoupon;
@property(readonly, nonatomic) long long totalPrice; // @synthesize totalPrice=_totalPrice;

// Remaining properties
@property(retain, nonatomic) NSString *couponId; // @dynamic couponId;
@property(retain, nonatomic) APMidasCouponsInfo *couponsInfo; // @dynamic couponsInfo;
@property(retain, nonatomic) NSString *disPrice; // @dynamic disPrice;
@property(retain, nonatomic) UIImage *logo; // @dynamic logo;
@property(nonatomic) long long maxNum; // @dynamic maxNum;
@property(retain, nonatomic) NSString *merchantName; // @dynamic merchantName;
@property(nonatomic) long long minNum; // @dynamic minNum;
@property(retain, nonatomic) NSString *productName; // @dynamic productName;
@property(retain, nonatomic) NSString *publicAcctBargainorId; // @dynamic publicAcctBargainorId;
@property(retain, nonatomic) NSString *rate; // @dynamic rate;
@property(retain, nonatomic) NSString *unicouponAcct; // @dynamic unicouponAcct;
@property(retain, nonatomic) NSString *unit; // @dynamic unit;
@property(nonatomic) _Bool userSelectFollowPublicAcct; // @dynamic userSelectFollowPublicAcct;

@end

