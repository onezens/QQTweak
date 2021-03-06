//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface OccupationCell : UITableViewCell
{
    NSString *_iconTitle;
    NSString *_labelText;
    unsigned long long _type;
    int _xo;
    UIImageView *_iconImgV;
    UILabel *_iconLabel;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
- (id)getVocieOverStr;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setIconTitle:(id)arg1 labelText:(id)arg2 type:(unsigned long long)arg3;

// Remaining properties
@property(retain, nonatomic) NSString *iconTitle; // @dynamic iconTitle;
@property(retain, nonatomic) NSString *labelText; // @dynamic labelText;
@property(nonatomic) unsigned long long type; // @dynamic type;

@end

