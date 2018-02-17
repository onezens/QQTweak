//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBInteractiveHelper : NSObject
{
}

+ (id)array:(id)arg1 splitWithSize:(unsigned long long)arg2;
+ (id)checkPlateInfoWithLikeList:(id)arg1 commentList:(id)arg2 unionIDs:(id)arg3;
+ (id)getBigVStrangerWithCommentList:(id)arg1;
+ (id)getBigVStrangerWithLikeList:(id)arg1;
+ (id)getGroupMemberWithNoCardForCommentList:(id)arg1 forGroupCode:(id)arg2;
+ (id)getGroupMemberWithNoCardForLikeList:(id)arg1 forGroupCode:(id)arg2;
+ (id)getNewPlateOfCommentList:(id)arg1;
+ (id)getNewPlateOfLikeList:(id)arg1;
+ (long long)getOpEntryValueWithUserInfo:(id)arg1;
+ (id)getStrangerWithCommentList:(id)arg1;
+ (id)getStrangerWithLikeList:(id)arg1;
+ (id)getUserInfoFromShareGroupInfo:(id)arg1;
+ (long long)indexOfLocalComment:(id)arg1;
+ (_Bool)isBigVUser:(id)arg1;
+ (_Bool)isCommentEmpty:(id)arg1;
+ (_Bool)isFakeFeedWithVideoInfo:(id)arg1;
+ (_Bool)isFollow:(id)arg1;
+ (_Bool)isFriendShip:(id)arg1;
+ (_Bool)isGroupFeed:(long long)arg1;
+ (_Bool)isGroupStory:(id)arg1;
+ (_Bool)isLikeEmpty:(id)arg1;
+ (_Bool)isMemberOfGroupFeed:(id)arg1;
+ (_Bool)isNoVideoFeed:(long long)arg1;
+ (_Bool)isPersonalFeed:(long long)arg1;
+ (_Bool)isPublicUser:(id)arg1;
+ (_Bool)isSelf:(id)arg1;
+ (_Bool)isShowBigv:(unsigned int)arg1 unionID:(id)arg2;
+ (_Bool)isShowTotalCommentTips:(long long)arg1 user:(id)arg2 commentModel:(id)arg3;
+ (_Bool)needShowLikeCellWithShowType:(long long)arg1 likeModel:(id)arg2;
+ (_Bool)noSelfFriend:(id)arg1;
+ (unsigned long long)opEntryValue:(long long)arg1 checkFromFeed:(id)arg2;
+ (long long)ownerType:(long long)arg1 checkFromFeed:(id)arg2;
+ (void)requestBatchImages:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (void)requestSingleImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (_Bool)shouldIgnoreFriendShip:(long long)arg1;
+ (_Bool)shouldShowMultiNavi:(id)arg1 entryType:(long long)arg2;
+ (long long)showTypeRoute:(long long)arg1 user:(id)arg2;
+ (id)unionIDs:(id)arg1 fromCommentList:(id)arg2;
+ (id)unionIDs:(id)arg1 fromLikeList:(id)arg2;
+ (void)uniquePushPlateUrls:(id)arg1 withUrl:(id)arg2;
+ (void)updateGroupNickWithCommentInfo:(id)arg1 groupCode:(id)arg2;
+ (void)updateGroupNickWithCommentList:(id)arg1 groupCode:(id)arg2;
+ (void)updateGroupNickWithLikeList:(id)arg1 groupCode:(id)arg2;
+ (void)updateNickWithCommentInfo:(id)arg1;
+ (void)updateNickWithCommentList:(id)arg1;
+ (void)updateNickWithLikeList:(id)arg1;
+ (void)updatePlateInfoWithCommentInfo:(id)arg1;
+ (void)updatePlateInfoWithCommentList:(id)arg1;
+ (void)updatePlateInfoWithLikeList:(id)arg1;

@end
