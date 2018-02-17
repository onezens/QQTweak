//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, QQShareGroupSelectorModel, QQStoryMultiUserAvatarView, UIImageView, UILabel, UIView;

@interface QQStoryShareGroupCell : UITableViewCell
{
    UIImageView *_imgCheckBoxIcon;
    QQStoryMultiUserAvatarView *_imgHeaderView;
    UILabel *_labelNick;
    UILabel *_labelDetail;
    NSString *_accessibility;
    unsigned long long _checkBoxStype;
    UIImageView *_recommendIcon;
    QQShareGroupSelectorModel *_model;
    UIView *_bottomSeparatorLineView;
}

+ (double)separatorOrigin_x;
- (void)awakeFromNib;
@property(retain, nonatomic) UIView *bottomSeparatorLineView; // @synthesize bottomSeparatorLineView=_bottomSeparatorLineView;
- (void)configureCellWithModel:(id)arg1;
- (void)dealloc;
- (void)initCellUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 withStyle:(unsigned long long)arg3;
- (void)layoutSubviews;
@property(retain, nonatomic) QQShareGroupSelectorModel *model; // @synthesize model=_model;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
