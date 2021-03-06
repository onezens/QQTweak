//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewController.h"

@class NSArray, NSString;

@interface QQGroupTagWebViewController : QQWebViewController
{
    unsigned int _groupCode;
    NSArray *_tags;
    _Bool _isAdmin;
    id <ModifyGroupTagsDelegate> _delegate;
    _Bool _modifyToSrvByH5;
    NSString *_baseTag;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *baseTag; // @synthesize baseTag=_baseTag;
- (void)dealloc;
@property(nonatomic) __weak id <ModifyGroupTagsDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didModifyGroupTags:(id)arg1;
- (id)getUrlWithTags:(id)arg1 groupCode:(unsigned int)arg2 isEditTag:(unsigned char)arg3;
- (id)initWithTag:(id)arg1 baseTag:(id)arg2 groupCode:(unsigned int)arg3 isAdmin:(_Bool)arg4 modifyToSrvByH5:(_Bool)arg5;
- (void)leftButtonClick:(id)arg1;
- (void)loadView;
- (void)registerJsNotificationsWhenViewAppear;
- (void)rightButtonClick:(id)arg1;
- (void)unregisterJsNotificationsWhenViewDisappear;

@end

