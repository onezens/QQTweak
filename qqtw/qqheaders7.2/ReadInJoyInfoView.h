//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, UILabel;

@interface ReadInJoyInfoView : UIView
{
    UILabel *footerLabel;
    UILabel *sourceLabel;
    ReadInJoyChannelArticle *_feedsModel;
}

- (void)dealloc;
- (void)feedbackTapped;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (id)init;
- (void)layoutForNormalFeeds;
- (void)layoutForSocialFeeds;
- (void)layoutSubviews;
- (void)layoutSubviewsExt;

@end
