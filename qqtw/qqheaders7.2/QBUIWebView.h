//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class NSMutableDictionary, NSString, QBPerformance, QBUIWebViewProxy, UIImage;

@interface QBUIWebView : UIWebView
{
    QBUIWebViewProxy *_webViewProxy;
    NSMutableDictionary *_redirectInfoDictionary;
    UIImage *_image;
    QBPerformance *_performance;
}

+ (void)initialize;
+ (void)setCustomUA:(id)arg1;
- (void).cxx_destruct;
- (void)addPerformanceItem:(id)arg1;
- (void)addRedirectInfo:(id)arg1;
- (id)appendQBWebViewFlagToUA;
- (void)dealloc;
- (id)delegate;
- (void)doInit;
- (id)getQBUIWebViewProxy;
- (void)goBack;
- (void)goForward;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadRequest:(id)arg1;
@property(retain, nonatomic) QBPerformance *performance; // @synthesize performance=_performance;
- (void)reload;
- (void)removeAllRedirectInfo;
- (void)setDelegate:(id)arg1;
@property(readonly) UIImage *webViewInfoIconImage;
@property(readonly) NSString *webViewInfoIconTips;

@end
