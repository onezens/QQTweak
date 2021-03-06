//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface QQPublicAccountVideoChildChannelFollowDataMgr : NSObject
{
    NSString *_currentUin;
    NSMutableDictionary *_subsChannelDatas;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *currentUin; // @synthesize currentUin=_currentUin;
- (void)dealloc;
- (id)getChildChannelStatusByID:(int)arg1;
- (_Bool)getFollowingByID:(int)arg1;
- (id)getHeaderImgUrlByID:(int)arg1;
- (id)getLikingInnerIDsCachePath;
- (int)getSubscriptionCountByID:(int)arg1;
- (id)init;
- (id)key:(int)arg1;
- (void)loadLikingInnerIDsFromFile;
@property(retain) NSMutableDictionary *subsChannelDatas; // @synthesize subsChannelDatas=_subsChannelDatas;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (_Bool)updateData:(id)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)writeLikingInnerIDsToFile;

@end

