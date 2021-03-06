//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QQStorySGVideoSelectorListViewActionDelegate.h"

@class NSString, QQStorySGVideoSelectorCellModel, QQStorySGVideoSelectorListView, UILabel;

@interface QQStorySGVideoSelectorCell : UITableViewCell <QQStorySGVideoSelectorListViewActionDelegate>
{
    QQStorySGVideoSelectorListView *_scrollView;
    UILabel *_dateLabel;
    id <QQStorySGVideoSelectorCellDelegate> _delegate;
    QQStorySGVideoSelectorCellModel *_model;
}

- (void)configureInitialUI;
- (void)dealloc;
@property(nonatomic) id <QQStorySGVideoSelectorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) QQStorySGVideoSelectorCellModel *model; // @synthesize model=_model;
- (void)sgVideoSelectorListViewDidClickShareGroupVideo:(id)arg1;
- (void)sgVideoSelectorListViewDidScrollEndToRight;
- (_Bool)sgVideoSelectorListViewDidSelectShareGroupVideo:(id)arg1;
- (void)sgVideoSelectorListViewVCEnableDragToBack:(_Bool)arg1;
- (id)showDateString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

