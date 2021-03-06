//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummarySimpleTextCell.h"

@class NSMutableArray, NSString, UIImageView, UILabel;

@interface UserSummaryQQLevelInfoCell : UserSummarySimpleTextCell
{
    _Bool _isVip;
    _Bool _isSuperQQ;
    int _type;
    short _qqlevel;
    NSMutableArray *_levelTagArray;
    unsigned long long _levelMaxWidth;
    _Bool _isNormalVip;
    _Bool _isSuperSvip;
    _Bool _isAnnVip;
    _Bool _isGoodNumber;
    _Bool _isNeedShowGoodNum;
    int _showLineCount;
    UIImageView *_goodNumberView;
    UIImageView *_qqLevelView;
    UIImageView *_vipView;
    UILabel *_qqLevelAccMultipleLabel;
    UIImageView *_superqqView;
    double _cellHeight;
    UIImageView *_gameIconImageView;
    NSString *_levelAccessibilityLabel;
    NSString *_speedAccessibilityLabel;
    NSString *_vipLevelAccessibilityLabel;
}

+ (id)vipImageByVipLevel:(unsigned int)arg1 superVip:(_Bool)arg2 annualVip:(_Bool)arg3;
+ (id)vipImageWithPenguinByVipLevel:(unsigned int)arg1 superVip:(_Bool)arg2 annualVip:(_Bool)arg3;
- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIImageView *gameIconImageView; // @synthesize gameIconImageView=_gameIconImageView;
@property(retain, nonatomic) UIImageView *goodNumberView; // @synthesize goodNumberView=_goodNumberView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (_Bool)isAccessibilityElement;
- (void)layoutIsGoodNumberView;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *levelAccessibilityLabel; // @synthesize levelAccessibilityLabel=_levelAccessibilityLabel;
@property(retain, nonatomic) UILabel *qqLevelAccMultipleLabel; // @synthesize qqLevelAccMultipleLabel=_qqLevelAccMultipleLabel;
@property(retain, nonatomic) UIImageView *qqLevelView; // @synthesize qqLevelView=_qqLevelView;
- (void)setGameIconImage:(id)arg1;
- (void)setIsGoodNum:(_Bool)arg1 isMyself:(_Bool)arg2;
- (void)setQQLevel:(id)arg1;
@property(copy, nonatomic) NSString *speedAccessibilityLabel; // @synthesize speedAccessibilityLabel=_speedAccessibilityLabel;
@property(retain, nonatomic) UIImageView *superqqView; // @synthesize superqqView=_superqqView;
- (void)setVipAndSupperQQ:(id)arg1 isMyself:(_Bool)arg2;
@property(copy, nonatomic) NSString *vipLevelAccessibilityLabel; // @synthesize vipLevelAccessibilityLabel=_vipLevelAccessibilityLabel;
@property(retain, nonatomic) UIImageView *vipView; // @synthesize vipView=_vipView;
@property(readonly, nonatomic) int showLineCount; // @synthesize showLineCount=_showLineCount;
- (void)updataQQLevelView:(int)arg1 LevelView:(id)arg2 isMySelf:(_Bool)arg3;
- (void)updateSuperQQLevelView:(int)arg1;
- (void)updateSvipLevel:(unsigned int)arg1 isSvip:(_Bool)arg2 isAnnualVip:(_Bool)arg3;

@end

