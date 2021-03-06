//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWlxBaseViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSString, QQWlxCityConfig, UITableView;

@interface QQWlxCitySelectViewController : QQWlxBaseViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    UITableView *_tvCity;
    id <CitySelectProtocol> _delegate;
    QQWlxCityConfig *_localCity;
    NSDictionary *_cityList;
}

@property(nonatomic) NSDictionary *cityList; // @synthesize cityList=_cityList;
@property(nonatomic) id <CitySelectProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) QQWlxCityConfig *localCity; // @synthesize localCity=_localCity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

