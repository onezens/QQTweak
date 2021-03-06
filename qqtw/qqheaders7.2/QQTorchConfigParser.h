//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface QQTorchConfigParser : NSObject <NSXMLParserDelegate>
{
    NSMutableDictionary *_allDic;
    NSMutableDictionary *_curDic;
    NSMutableArray *_curArray;
    NSArray *_oriArray;
    NSString *_elementString;
    NSString *_processingType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *elementString; // @synthesize elementString=_elementString;
- (id)parseFromData:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
@property(retain, nonatomic) NSString *processingType; // @synthesize processingType=_processingType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

