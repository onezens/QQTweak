//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QZBlackCommentController, QzoneFeedModel;

@protocol QZBlackCommentControllerDelegate <NSObject>
- (void)handleOpenHomepage:(long long)arg1 nick:(NSString *)arg2;
- (void)inputBarShowOpenYellowVipFromCommentController;
- (void)setBlackCommentController:(QZBlackCommentController *)arg1;

@optional
- (void)blackCommentViewDidDisapper:(QzoneFeedModel *)arg1;
- (void)notifyFeedDetail:(QzoneFeedModel *)arg1;
@end
