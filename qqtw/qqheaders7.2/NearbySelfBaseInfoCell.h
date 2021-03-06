//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class APUnreadRedPointView, APZanAnimation, CAShapeLayer, HighlightedBackgroundView, NSString, NearbySelfHeartView, NearbySelfInfoModel, QQAvatarView, QQViewController, UIImageView, UILabel, UITableView, UIView;

@interface NearbySelfBaseInfoCell : UITableViewCell
{
    HighlightedBackgroundView *_leftBGView;
    HighlightedBackgroundView *_rightBGView;
    NearbySelfInfoModel *_model;
    QQAvatarView *_headerImageView;
    UILabel *_nickLabel;
    UILabel *_selfInfoLabel;
    UIImageView *_zanReddot;
    APUnreadRedPointView *_zanUnreadNumdot;
    UIView *_verticalLine;
    _Bool _ifRedNoted;
    APZanAnimation *_zanAnimation;
    _Bool _enterNotGoBackFlag;
    UIView *_separatorForBoard;
    double _rightBGWidth;
    UIImageView *_ranklistIcon;
    UILabel *_ranklistLabel;
    UIImageView *_videoAuthIcon;
    CAShapeLayer *_videoChatTriangleShape;
    UILabel *_videoChatTipsLabel;
    NSString *_videoChatIconUrl;
    NSString *_videoChatTitle;
    NSString *_videoChatGuide;
    long long _heartIncrement;
    QQViewController *_fatherVc;
    UITableView *_fatherTabelView;
    NearbySelfHeartView *_heartView;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak UITableView *fatherTabelView; // @synthesize fatherTabelView=_fatherTabelView;
@property(nonatomic) __weak QQViewController *fatherVc; // @synthesize fatherVc=_fatherVc;
- (_Bool)findNumber:(long long)arg1 inArray:(id)arg2;
- (id)getSelfInfoText:(long long)arg1 zanNum:(long long)arg2;
- (long long)getVideoChatEntranceStateWithEntranceConfig:(id)arg1 andRedDotConfig:(id)arg2 andClickDate:(id)arg3;
- (void)gotoNearbyUserSummaryVC;
@property(retain, nonatomic) NearbySelfHeartView *heartView; // @synthesize heartView=_heartView;
- (void)hideVideoChatTipsView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)leftBGClick:(id)arg1;
- (void)loadVideoChatConfig;
- (id)loadVideoChatCongfigWithKey:(id)arg1;
- (void)receiveNearbyVideoAuthUpdateProfileNotification:(id)arg1;
- (void)receivedRedPointUpdateNotification;
- (void)receivedZanUnreadCountChangedNotification;
- (void)receivedZanUnreadRedDotChangedNotification;
- (void)registNotification;
- (void)reloadAppearance;
- (void)rightBGClick:(id)arg1;
- (void)setMyBasicInfo:(id)arg1;
- (void)unRegistNotification;
- (void)uniLogUpLoadEnterNearbyUserSummaryWithRedNote;
- (void)updateZanBtnAndUpateUserSummaryModel:(id)arg1;
- (id)zanText:(long long)arg1;

@end

