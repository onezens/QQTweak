//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SimpleUserSigInfo : NSObject
{
    NSData *B2;
    NSData *GTKEY_B2;
    NSData *ST;
    NSData *GTKEY_ST;
    NSData *A2;
    NSData *GTKEY_A2;
    NSData *VKey;
    NSData *SKey;
    NSData *STWeb;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *A2; // @synthesize A2;
@property(copy, nonatomic) NSData *B2; // @synthesize B2;
@property(copy, nonatomic) NSData *GTKEY_A2; // @synthesize GTKEY_A2;
@property(copy, nonatomic) NSData *GTKEY_B2; // @synthesize GTKEY_B2;
@property(copy, nonatomic) NSData *GTKEY_ST; // @synthesize GTKEY_ST;
@property(copy, nonatomic) NSData *SKey; // @synthesize SKey;
@property(copy, nonatomic) NSData *ST; // @synthesize ST;
@property(copy, nonatomic) NSData *STWeb; // @synthesize STWeb;
@property(copy, nonatomic) NSData *VKey; // @synthesize VKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

