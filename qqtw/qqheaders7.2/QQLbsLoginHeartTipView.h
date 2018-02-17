//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NearbyLoginScoreModel, QQAsynUrlImageView;

@interface QQLbsLoginHeartTipView : UIView
{
    QQAsynUrlImageView *_upperImgView;
    NearbyLoginScoreModel *_todayScoreModel;
    NSArray *_scoreConfigList;
    id <QQLbsLoginHeartTipViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)bottomBtnClick;
@property(nonatomic) __weak id <QQLbsLoginHeartTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getConfigMaxScore;
- (id)getTomorrowScoreStr;
- (id)initWithFrame:(struct CGRect)arg1 withTodayScore:(id)arg2 withConfigList:(id)arg3;
- (void)layoutUpperImgView;
@property(retain, nonatomic) NSArray *scoreConfigList; // @synthesize scoreConfigList=_scoreConfigList;
@property(retain, nonatomic) NearbyLoginScoreModel *todayScoreModel; // @synthesize todayScoreModel=_todayScoreModel;
@property(retain, nonatomic) QQAsynUrlImageView *upperImgView; // @synthesize upperImgView=_upperImgView;

@end
