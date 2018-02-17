//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface NearbyRefreshManager : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_refreshDictionary;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)cleanRecordWithKey:(id)arg1;
@property(copy, nonatomic) NSString *currentUin; // @synthesize currentUin=_currentUin;
- (id)init;
- (void)recordRefreshItem:(id)arg1 withKey:(id)arg2;
- (void)recordRefreshWithKey:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *refreshDictionary; // @synthesize refreshDictionary=_refreshDictionary;
- (_Bool)refreshDisableForKey:(id)arg1;
- (id)refreshItemForKey:(id)arg1;

@end
