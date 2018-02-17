//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseOperation.h"

#import "QZChildOperation.h"

@class NSString, QZGroupOperation;

@interface QZSendPictureCommentOperation : QZBaseOperation <QZChildOperation>
{
    long long _requestID;
    QZGroupOperation *_parentOperation;
}

- (void).cxx_destruct;
- (void)cancelJob:(_Bool)arg1;
- (void)dealloc;
- (void)execute;
@property(nonatomic) __weak QZGroupOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
- (void)sendCommentFinished:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
