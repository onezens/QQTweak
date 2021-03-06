//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQGroupSettingViewCell.h"

@class NSMutableArray, NSMutableDictionary, UIImageView;

@interface QQGroupSettingViewHeadIconsCell : QQGroupSettingViewCell
{
    NSMutableArray *_heardIconViewArray;
    UIImageView *_iconImageView;
    unsigned long long _memberCount;
    _Bool _isSimple;
    id <QQGroupSettingViewHeadIconsCellDelegate> _headIconCelldelegate;
    NSMutableDictionary *_uinRemarkDic;
    NSMutableDictionary *_adminUinRemarkDic;
}

+ (double)calculateCellHeight:(long long)arg1;
+ (float)calculateImageWidth:(float)arg1 picCount:(int)arg2;
+ (double)calculateMemberCountCellHeight;
@property(retain, nonatomic) NSMutableDictionary *adminUinRemarkDic; // @synthesize adminUinRemarkDic=_adminUinRemarkDic;
- (void)dealloc;
@property(nonatomic) id <QQGroupSettingViewHeadIconsCellDelegate> headIconCelldelegate; // @synthesize headIconCelldelegate=_headIconCelldelegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isSimple; // @synthesize isSimple=_isSimple;
- (void)layoutSubviews;
- (void)onAddViewClicked;
@property(retain, nonatomic) NSMutableDictionary *uinRemarkDic; // @synthesize uinRemarkDic=_uinRemarkDic;

@end

