//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQSearchBaseViewController.h"

#import "QQGroupFileListCellDelegate.h"
#import "QQGroupFileListModelDelegate.h"
#import "QQGroupFileListViewControllerDelegate.h"
#import "QQGroupFileOIDBRespondDelegate.h"
#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSIndexPath, NSString, ODRefreshControl, QQDragUpToLoadMoreView, QQGroupFileListModel, QQGroupFileOIDBRequest, QQGroupFolderInfo, UITableView, UIView;

@interface QQGroupFileListViewController : QQSearchBaseViewController <UITableViewDelegate, UITableViewDataSource, QQGroupFileListModelDelegate, QQGroupFileListCellDelegate, UIAlertViewDelegate, QQMoreOptionTableViewCellScrollStateDelegate, UIActionSheetDelegate, QQGroupFileListViewControllerDelegate, QQGroupFileOIDBRespondDelegate>
{
    unsigned long long _groupCode;
    _Bool _hideSearchBar;
    unsigned long long _filterUin;
    _Bool _onlyFolder;
    _Bool _enableUploaderButton;
    QQGroupFolderInfo *_folderInfo;
    _Bool _disableCellButton;
    UITableView *_fileListView;
    _Bool _allowMoveFile;
    NSIndexPath *_lastSwipIndexPath;
    ODRefreshControl *_refreshControl;
    QQDragUpToLoadMoreView *_loadMoreView;
    _Bool _isTableHeaderViewAppear;
    UIView *_noNetworkView;
    UIView *_bannerView;
    QQGroupFileOIDBRequest *_fileCountRequest;
    id <QQGroupFileListViewControllerDelegate> _delegate;
    QQGroupFileListModel *_listModel;
}

- (void).cxx_destruct;
- (void)closeBannerTips;
- (id)createLabel:(struct CGRect)arg1 fontSize:(double)arg2 normalColor:(int)arg3 highlightColor:(int)arg4;
@property(nonatomic) __weak id <QQGroupFileListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)dragViewToLoadMoreAction;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (void)groupFileOIDBRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)groupFileOIDBRequest:(id)arg1 didReceivedRespond:(id)arg2;
- (id)initWithGroupCode:(unsigned long long)arg1 folderInfo:(id)arg2;
- (id)initWithGroupCode:(unsigned long long)arg1 folderInfo:(id)arg2 filterUin:(unsigned long long)arg3 onlyFolder:(_Bool)arg4;
- (_Bool)isAdmin;
- (_Bool)isGroupOwner;
- (_Bool)isMessageTabInLeftSwipState;
@property(retain, nonatomic) QQGroupFileListModel *listModel; // @synthesize listModel=_listModel;
- (void)listModel:(id)arg1 failLoadMoreWithError:(id)arg2;
- (void)listModel:(id)arg1 failRefreshWithError:(id)arg2;
- (void)listModelFinishLoadMore:(id)arg1;
- (void)listModelFinishRefresh:(id)arg1;
- (struct CGRect)regionForSupportingRightDragToGoBack;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)showBannerTips:(id)arg1;
- (void)tableLoadMoreAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
