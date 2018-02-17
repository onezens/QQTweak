//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, QQGroupSettingModel, UITableView;

@interface QQManagerViewController : QQViewController <UITableViewDataSource, UITableViewDelegate>
{
    QQGroupSettingModel *_model;
    NSMutableArray *_adminUinArr;
    NSMutableArray *_adminInfoArr;
    UITableView *_tableView;
}

- (void)actionGetSimpleInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *adminInfoArr; // @synthesize adminInfoArr=_adminInfoArr;
@property(retain, nonatomic) NSMutableArray *adminUinArr; // @synthesize adminUinArr=_adminUinArr;
- (void)dealloc;
- (id)init;
- (void)loadView;
@property(retain, nonatomic) QQGroupSettingModel *model; // @synthesize model=_model;
- (void)resortAdminArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
