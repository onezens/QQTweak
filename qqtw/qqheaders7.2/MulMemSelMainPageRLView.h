//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface MulMemSelMainPageRLView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    UIView *_tipView;
    NSMutableArray *_mulMemSelRLDataList;
    id <MulMemSelRLTableViewDelegate> _mulMemSelRLTableViewDelegate;
}

- (void).cxx_destruct;
- (int)getSelectedItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSMutableArray *mulMemSelRLDataList; // @synthesize mulMemSelRLDataList=_mulMemSelRLDataList;
@property(nonatomic) __weak id <MulMemSelRLTableViewDelegate> mulMemSelRLTableViewDelegate; // @synthesize mulMemSelRLTableViewDelegate=_mulMemSelRLTableViewDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshRLItemTableView;
- (void)resetRLItemFrame:(struct CGRect)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

