//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FAModel, QQAsynUrlImageView, QQProgressBar, UILabel, UIView;

@interface NearFileTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    QQProgressBar *_progressView;
    UILabel *_stateLabel;
    QQAsynUrlImageView *_fileIconView;
    UIView *_btmLine;
    FAModel *_fileModel;
}

- (void)dealloc;
@property(retain, nonatomic) FAModel *fileModel; // @synthesize fileModel=_fileModel;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)onEventFileUpdate:(id)arg1;
- (void)setLineHidden:(_Bool)arg1;
- (void)updateFileState;

@end
