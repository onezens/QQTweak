//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBExtendedHitButton, UILabel;

@interface QQStorySGFeatureCell : UITableViewCell
{
    id <QQStorySGFeatureCellDelegate> _delegate;
    TBExtendedHitButton *_hotBtn;
    UILabel *_label;
}

+ (double)height;
- (void).cxx_destruct;
- (void)changeChannel:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <QQStorySGFeatureCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBExtendedHitButton *hotBtn; // @synthesize hotBtn=_hotBtn;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end
