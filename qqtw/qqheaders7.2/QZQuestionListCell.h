//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIImage;

@interface QZQuestionListCell : UITableViewCell
{
    long long _srcIndex;
    NSString *_text;
    UIImage *_bgImage;
    int _xo;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)reloadAppearance;

// Remaining properties
@property(retain, nonatomic) UIImage *bgImage; // @dynamic bgImage;
@property(nonatomic) long long srcIndex; // @dynamic srcIndex;
@property(retain, nonatomic) NSString *text; // @dynamic text;

@end
