//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseInfoModel, UIButton;

@protocol FavAddItemDelegate <NSObject>

@optional
- (void)enableMainTableVoiceOver;
- (void)onFavItemAdd:(BaseInfoModel *)arg1;
- (void)onFavItemAdd:(BaseInfoModel *)arg1 bAddAll:(_Bool)arg2;
- (UIButton *)rightButton;
- (void)shieldMainTableVoiceOver;
@end

