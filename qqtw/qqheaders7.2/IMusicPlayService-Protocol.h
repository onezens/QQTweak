//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, QQMessageModel;

@protocol IMusicPlayService <NSObject>
- (void)DoAction:(NSDictionary *)arg1;
- (_Bool)GetState:(QQMessageModel *)arg1;
- (void)Pause;
- (void)Stop;
- (void)StopMusicGene;
- (void)playMusicWithInfo:(NSDictionary *)arg1;
@end
