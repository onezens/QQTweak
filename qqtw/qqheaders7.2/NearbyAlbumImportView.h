//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface NearbyAlbumImportView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_descriptionLabel;
    UIButton *_importButton;
    id <NearbyAlbumImportViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NearbyAlbumImportViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)importAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

