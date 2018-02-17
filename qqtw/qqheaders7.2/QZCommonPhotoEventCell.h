//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBasePhotoCell.h"

@class QZEventPhotoModel, QZRichTextLabel, UIButton, UIImageView, UILabel, UIView;

@interface QZCommonPhotoEventCell : QZBasePhotoCell
{
    UILabel *_eventLabel;
    UILabel *_uploadNameLabel;
    UILabel *_uploadTextLabel;
    QZRichTextLabel *_descLabel;
    UIImageView *_logoImgView;
    UIButton *_eventBtn;
    UIButton *_descBtn;
    UIView *_shareUsersView;
    QZEventPhotoModel *_eventModel;
}

+ (double)heightWithEventTitle:(id)arg1 descTitle:(id)arg2 albumType:(long long)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) QZEventPhotoModel *eventModel; // @synthesize eventModel=_eventModel;
- (id)getUploadTextStr:(long long)arg1;
- (id)getUploaderName:(id)arg1;
- (void)onClickDescModifyBtn:(id)arg1;
- (void)onClickModifyPoiBtn:(id)arg1;
- (void)travelUpdateContentViewWithEventTitle:(id)arg1 descTitle:(id)arg2 uinNickDict:(id)arg3 isShareAlbum:(_Bool)arg4 anonymity:(long long)arg5 isHost:(_Bool)arg6;
- (void)updateContentViewWithEventTitle:(id)arg1 descTitle:(id)arg2 uinNickDict:(id)arg3 isShareAlbum:(_Bool)arg4 anonymity:(long long)arg5 isHost:(_Bool)arg6;
- (id)uploaderUins:(id)arg1;

@end
