//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, QQMessageModel;

@interface QQDiscussAudioTipsShowManager : NSObject
{
    double _curTime;
    NSString *_bindUin;
    _Bool _needMon;
    int _pttMsgCount;
    NSMutableArray *_pttMsgUin;
    int _seq;
    QQMessageModel *_recordLastMode;
    double _showTime;
}

+ (id)GetInstance;
- (void)dealloc;
- (id)initWithDiscuss:(id)arg1;
- (_Bool)isMessageTimeOut:(id)arg1;
- (_Bool)isWiFiNetWork;
- (double)lastShowTime;
- (void)loadMessageModel:(id)arg1;
- (void)loadShowTime;
- (_Bool)needInsertTipsMessage:(id)arg1;
- (_Bool)pttMsgRS;
- (_Bool)recentShowAudio;
@property(retain, nonatomic) QQMessageModel *recordLastMode; // @synthesize recordLastMode=_recordLastMode;
- (void)reportTipsClick;
- (void)reportTipsShow;
- (void)saveShowTime;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
- (id)tipsMessageModel;

@end
