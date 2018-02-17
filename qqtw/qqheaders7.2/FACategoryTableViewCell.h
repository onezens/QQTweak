//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATableViewCell.h"

@class CALayer;

@interface FACategoryTableViewCell : FATableViewCell
{
    long long _section;
    _Bool _isWYListCell;
    id <IFACategoryTableViewCellDelegate> _delegate;
    CALayer *_borderLayer;
    _Bool _showSplitLine;
}

- (id)accessibilityLabel;
- (void)actionForFileTransfer:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewClicked:(long long)arg1;
- (void)dealloc;
@property(nonatomic) id <IFACategoryTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFileUpdate:(id)arg1;
- (void)fillData:(id)arg1 sec:(long long)arg2 row:(long long)arg3 checkMode:(_Bool)arg4 isWYList:(_Bool)arg5;
- (void)iconTouch:(id)arg1;
- (void)initEvent;
- (void)loadData;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) _Bool showSplitLine; // @synthesize showSplitLine=_showSplitLine;

@end
