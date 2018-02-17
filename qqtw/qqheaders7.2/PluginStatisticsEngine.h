//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPluginStatisticsService.h"

@class NSMutableDictionary, NSString;

@interface PluginStatisticsEngine : NSObject <IPluginStatisticsService>
{
    NSMutableDictionary *_pluginStatisticsContainer;
    int _shareSource;
    int _shareDest;
    int _xo;
}

- (void)AddMsgLog:(id)arg1;
- (void)AddStatisticsLog:(id)arg1 clickPosition:(int)arg2 clickResult:(int)arg3;
- (void)SetDestType:(int)arg1;
- (void)SetMessageSource:(int)arg1;
- (void)analyzeDate:(id)arg1;
- (void)dealloc;
- (id)getClickPosString:(id)arg1;
- (id)getClickRltString:(id)arg1;
- (id)init;
- (void)sendLog:(id)arg1;
- (void)upload;
- (void)writeToFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) int shareDest; // @dynamic shareDest;
@property(nonatomic) int shareSource; // @dynamic shareSource;
@property(readonly) Class superclass;

@end
