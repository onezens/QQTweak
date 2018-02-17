//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryBaseCell.h"

#import "UITextFieldDelegate.h"

@class NSIndexPath, NSString, QQSingleTextfield, UIImage, UIImageView, UILabel, UITextField;

@interface UserSummaryEditProfileCell : UserSummaryBaseCell <UITextFieldDelegate>
{
    NSString *_placeHolder;
    NSString *_simpleLabelText;
    NSString *_textFieldText;
    _Bool _isIconExist;
    id <UserSummaryEditProfileCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    UITextField *_simpleTextField;
    UILabel *_simpleTextLabel;
    UIImageView *_icon;
    UILabel *_iconLabel;
    long long _maxInputLength;
    UIImage *_imageIcon;
    long long _paddingRight;
    UIImageView *_certificatedMark;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *certificatedMark; // @synthesize certificatedMark=_certificatedMark;
- (void)dealloc;
- (id)getVocieOverStr;
@property(retain, nonatomic) UIImage *imageIcon; // @synthesize imageIcon=_imageIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) long long paddingRight; // @synthesize paddingRight=_paddingRight;
- (void)prepareForReuse;
- (void)setBecomeFirstResponder;
- (void)setEditable:(_Bool)arg1;
- (void)setIconText:(id)arg1 iconType:(unsigned long long)arg2;
@property(nonatomic) _Bool isIconExist; // @dynamic isIconExist;
@property(nonatomic) long long maxInputLength; // @dynamic maxInputLength;
@property(retain, nonatomic) NSString *placeHolder; // @dynamic placeHolder;
- (void)setPlaceHolderColor:(id)arg1;
@property(retain, nonatomic) NSString *simpleLabelText; // @dynamic simpleLabelText;
- (void)setSimpleLabelTextColor:(id)arg1;
- (void)setSimpleSimpleTextFieldColor:(id)arg1;
- (void)setSimplelabelTextAlignmentRight;
@property(retain, nonatomic) NSString *textFieldText; // @dynamic textFieldText;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldEditChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <UserSummaryEditProfileCellDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImageView *icon; // @dynamic icon;
@property(retain, nonatomic) UILabel *iconLabel; // @dynamic iconLabel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @dynamic indexPath;
@property(retain, nonatomic) QQSingleTextfield *simpleTextField; // @dynamic simpleTextField;
@property(retain, nonatomic) UILabel *simpleTextLabel; // @dynamic simpleTextLabel;
@property(readonly) Class superclass;

@end
