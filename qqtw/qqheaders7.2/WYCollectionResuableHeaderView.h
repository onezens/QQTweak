//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface WYCollectionResuableHeaderView : UICollectionReusableView
{
    UILabel *_textLabel;
    _Bool _editing;
    _Bool _selected;
    id _currentHeaderItem;
    id <WYCollectionResuableHeaderViewDelegate> _delegate;
    unsigned long long _sectionIndex;
    UIButton *_checkedButton;
    NSLayoutConstraint *_checkedButtonBottomSpaceConstraint;
    UIButton *_checkBoxButton;
    UIImageView *_selectImageView;
    NSLayoutConstraint *_checkedButtonWidthConstraint;
    NSLayoutConstraint *_textLabelLeftLayout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *checkBoxButton; // @synthesize checkBoxButton=_checkBoxButton;
@property(readonly, nonatomic) UIButton *checkedButton; // @synthesize checkedButton=_checkedButton;
@property(readonly, nonatomic) NSLayoutConstraint *checkedButtonBottomSpaceConstraint; // @synthesize checkedButtonBottomSpaceConstraint=_checkedButtonBottomSpaceConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *checkedButtonWidthConstraint; // @synthesize checkedButtonWidthConstraint=_checkedButtonWidthConstraint;
@property(retain, nonatomic) id currentHeaderItem; // @synthesize currentHeaderItem=_currentHeaderItem;
@property(nonatomic) __weak id <WYCollectionResuableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)prepareForReuse;
- (void)sectionCheckBoxClick:(id)arg1;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSLayoutConstraint *textLabelLeftLayout; // @synthesize textLabelLeftLayout=_textLabelLeftLayout;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)thumbMadeSubviews;

@end

