//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QUICustomViewPositionCell.h"

@class NSIndexPath, QQWalletH5Info, UIActivityIndicatorView, UIImageView, UITableView;

@interface QQWalletUserCenterCell : QUICustomViewPositionCell
{
    long long _redPointID;
    NSIndexPath *_indexPath;
    UITableView *_tableView;
    UIImageView *_redPointView;
    UIImageView *_arrowImgView;
    UIImageView *_lockImgView;
    UIActivityIndicatorView *_loadingView;
    QQWalletH5Info *_userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) QQWalletH5Info *userInfo; // @synthesize userInfo=_userInfo;

@end

