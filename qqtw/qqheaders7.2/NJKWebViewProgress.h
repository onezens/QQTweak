//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class NSString;

@interface NJKWebViewProgress : NSObject <UIWebViewDelegate>
{
    float _progress;
    id <NJKWebViewProgressDelegate> _progressDelegate;
    CDUnknownBlockType _progressBlock;
}

- (void).cxx_destruct;
- (void)completeProgress;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) __weak id <NJKWebViewProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void)reset;
- (void)setProgress:(float)arg1;
- (void)startProgress;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
