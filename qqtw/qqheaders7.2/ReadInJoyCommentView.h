//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QQEmotionLabelDelegate.h"

@class NSString, ReadInJoyChannelArticle, ReadInJoyEmotionLabel;

@interface ReadInJoyCommentView : UIView <QQEmotionLabelDelegate>
{
    ReadInJoyEmotionLabel *biuLabel;
    ReadInJoyChannelArticle *_feedsModel;
}

- (void)dealloc;
- (void)emotionLabelHandleUrl:(id)arg1;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tap;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
