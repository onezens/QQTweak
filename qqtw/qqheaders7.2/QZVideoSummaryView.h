//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QZFeedCellDelegate.h"

@class NSString, QzoneFeedLayoutView, QzoneFeedModel, UIImageView;

@interface QZVideoSummaryView : UIView <QZFeedCellDelegate>
{
    UIImageView *_bgView;
    QzoneFeedLayoutView *_layoutView;
    QzoneFeedModel *_feedModel;
}

- (void).cxx_destruct;
- (void)checkAutoPlayViewEvent:(long long)arg1 params:(id)arg2;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutVideoSummaryView;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

