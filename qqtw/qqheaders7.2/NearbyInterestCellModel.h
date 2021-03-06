//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TightTableViewCellModel.h"

@class ITInterestTag, NSString;

@interface NearbyInterestCellModel : TightTableViewCellModel
{
    _Bool _bEditing;
    _Bool _gestureEnable;
    unsigned int _type;
    ITInterestTag *_interestTag;
    NSString *_accessibilityLabel;
    long long _selectionStyle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) _Bool bEditing; // @synthesize bEditing=_bEditing;
@property(nonatomic) _Bool gestureEnable; // @synthesize gestureEnable=_gestureEnable;
- (double)heightForRow;
- (id)init;
@property(retain, nonatomic) ITInterestTag *interestTag; // @synthesize interestTag=_interestTag;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

