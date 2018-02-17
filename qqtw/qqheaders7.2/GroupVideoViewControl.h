//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, QQVisualEffectView, UITableView, UITextField, UIView;

@interface GroupVideoViewControl : UIControl <UITableViewDataSource, UITableViewDelegate>
{
    struct CGRect _viewFrame;
    int _direction;
    UIView *_backView;
    _Bool _isEditing;
    QQVisualEffectView *_visualView;
    UITableView *_contentView;
    double _tableViewWidth;
    NSArray *_recommondVideoArr;
    id <GroupVideoViewControlDelegate> _delegate;
    UITextField *_inputTextField;
}

- (void).cxx_destruct;
- (void)addSingleTapGesture;
- (void)addTestUI;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <GroupVideoViewControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAnimation;
- (id)initWithFrame:(struct CGRect)arg1 animated:(_Bool)arg2 Direction:(int)arg3 ContentView:(id)arg4;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
- (void)moreButtonClick:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onSingleTapGesture:(id)arg1;
@property(retain, nonatomic) NSArray *recommondVideoArr; // @synthesize recommondVideoArr=_recommondVideoArr;
- (void)recommondVideoClick:(id)arg1;
- (void)setBackViewBackColor:(id)arg1;
- (void)setBackViewFrame:(struct CGRect)arg1;
@property(nonatomic) double tableViewWidth; // @synthesize tableViewWidth=_tableViewWidth;
- (void)showAnimation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
