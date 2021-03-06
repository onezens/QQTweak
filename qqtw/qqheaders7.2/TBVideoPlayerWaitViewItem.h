//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBStoryPageScrollViewBaseItem.h"

@class TBStoryVideoWaitModel;

@interface TBVideoPlayerWaitViewItem : TBStoryPageScrollViewBaseItem
{
    TBStoryVideoWaitModel *_waitModel;
    id <TBVideoPlayerWaitViewItemProtocol> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <TBVideoPlayerWaitViewItemProtocol> delegate; // @synthesize delegate=_delegate;
- (void)hideLoadingView;
- (void)pageScrollViewItemDidHide:(id)arg1;
- (void)pageScrollViewItemDidShow:(id)arg1;
@property(retain, nonatomic) TBStoryVideoWaitModel *waitModel; // @synthesize waitModel=_waitModel;

@end

