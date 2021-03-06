//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIImageView, UILabel;

@interface EmojiDIYColorItem : UIView
{
    UIView *backView;
    UILabel *titleLabel;
    UIColor *_itemColor;
    NSString *_title;
    UIImageView *_selectView;
    id <EmojiDIYColorItemClick> _delegate;
}

- (void)changeToNomal;
- (void)dealloc;
@property(nonatomic) id <EmojiDIYColorItemClick> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *itemColor; // @synthesize itemColor=_itemColor;
- (void)loadData;
- (void)selectItem:(id)arg1;
@property(readonly, copy, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

