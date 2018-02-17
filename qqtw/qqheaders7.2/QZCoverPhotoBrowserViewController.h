//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

@class QZonePhotoWallCacheInfo;

@interface QZCoverPhotoBrowserViewController : PhotoBrowserBaseViewContoller
{
    long long _uin;
    _Bool _enableLoadMore;
    QZonePhotoWallCacheInfo *_photoWallCacheInfo;
    long long _requestId;
    long long _delRequestId;
    long long _delIndex;
}

- (void).cxx_destruct;
- (void)ForwardToQQ:(id)arg1;
- (void)ForwardToWeChat:(id)arg1;
- (void)SaveToAlbum:(id)arg1;
- (_Bool)canShowPageControl;
- (void)dealloc;
- (void)didScrollToPage:(int)arg1;
- (id)getToolbar;
- (id)getToolbarItems;
- (void)hidePhotoBrowser;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)longPressDetected;
- (void)onNotifyGetPhotoWall:(id)arg1;
- (void)setPhotoWallCacheInfo:(id)arg1 firstVisibleIndex:(long long)arg2 visibleRects:(id)arg3 thumbRects:(id)arg4;
- (void)updatePageControl;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) _Bool enableLoadMore; // @dynamic enableLoadMore;
@property(nonatomic) long long uin; // @dynamic uin;

@end
