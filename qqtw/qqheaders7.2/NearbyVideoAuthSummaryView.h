//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NearbyVideoAuthModel, QQAsynUrlImageView, UIImageView, UILabel;

@interface NearbyVideoAuthSummaryView : UIView
{
    int _summaryType;
    NearbyVideoAuthModel *_videoAuthModel;
    UIView *_backgroundView;
    UILabel *_promptLabel;
    UIImageView *_playImageView;
    QQAsynUrlImageView *_avatarImageView;
    id <NearbyVideoAuthSummaryViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)attachGestures;
@property(nonatomic) __weak id <NearbyVideoAuthSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAuth;
- (_Bool)isHost;
- (void)layoutSubviews;
- (void)onTapVideoAuthSummaryView:(id)arg1;
- (void)setDataSource:(id)arg1 summaryType:(int)arg2;

@end

