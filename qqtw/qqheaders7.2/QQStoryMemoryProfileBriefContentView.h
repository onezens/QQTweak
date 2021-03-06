//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, QQStoryMemoryIncreaseRedPointView, UILabel;

@interface QQStoryMemoryProfileBriefContentView : UIView
{
    _Bool _guest;
    unsigned int _fanNum;
    unsigned int _increaseFanNum;
    unsigned long long _subscribeNum;
    UILabel *_fanNumLabel;
    UILabel *_subscribeNumLabel;
    QQStoryMemoryIncreaseRedPointView *_fanNumIncreasedView;
    NSMutableArray *_separatorArray;
}

- (void)dealloc;
@property(nonatomic) unsigned int fanNum; // @synthesize fanNum=_fanNum;
@property(retain, nonatomic) QQStoryMemoryIncreaseRedPointView *fanNumIncreasedView; // @synthesize fanNumIncreasedView=_fanNumIncreasedView;
@property(retain, nonatomic) UILabel *fanNumLabel; // @synthesize fanNumLabel=_fanNumLabel;
@property(nonatomic) unsigned int increaseFanNum; // @synthesize increaseFanNum=_increaseFanNum;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isGuest) _Bool guest; // @synthesize guest=_guest;
@property(retain, nonatomic) NSMutableArray *separatorArray; // @synthesize separatorArray=_separatorArray;
@property(nonatomic) unsigned long long subscribeNum; // @synthesize subscribeNum=_subscribeNum;
@property(retain, nonatomic) UILabel *subscribeNumLabel; // @synthesize subscribeNumLabel=_subscribeNumLabel;
- (void)tapFanNum;
- (void)tapSubscribeNum;
- (void)tapVideoNum;
- (void)updateLayout;

@end

