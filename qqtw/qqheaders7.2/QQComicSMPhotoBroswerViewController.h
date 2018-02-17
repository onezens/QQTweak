//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatPhotoBrowserViewController.h"

@class UIButton, UILabel, UIView;

@interface QQComicSMPhotoBroswerViewController : ChatPhotoBrowserViewController
{
    UIView *_comicInfoBar;
    UIButton *_comicTitleButton;
    UIButton *_comicPicButton;
    UIButton *_comicMoreButton;
    UILabel *_comicHintLabel;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (struct CGRect)adjustedRect:(struct CGRect)arg1 fromButton:(id)arg2;
- (void)didScrollToPage:(int)arg1;
- (id)getCurrentMsgModel;
- (id)getToolbarItems;
- (void)initComicUI;
- (_Bool)isCurrentShowComicPic;
- (void)jumpToComicDetailVC;
- (void)loadComicPicUI;
- (void)loadView;
- (id)msgButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)onClickHomeButon;
- (void)onComicPicClicked;
- (void)onComicTitleClicked;
- (double)originalYForButtonSize:(struct CGSize)arg1;
- (void)setComicPicUIHidden:(_Bool)arg1;
- (void)shareWithFriend;

@end
