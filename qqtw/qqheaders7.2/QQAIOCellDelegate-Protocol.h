//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, QQAIOMsgModel, QQMessageModel, QQSMItemElementBaseView, QQStructuredMessageEvent, QQUITableViewCell, QQXMLMessage, QQXMLMessageItem;

@protocol QQAIOCellDelegate <NSObject>
- (void)QQSMMessageCellDidAction:(QQStructuredMessageEvent *)arg1 model:(QQAIOMsgModel *)arg2;
- (void)QQSMMessageCellDidCopyURL:(QQAIOMsgModel *)arg1;
- (void)QQSMMessageCellDidForwardMessage:(QQAIOMsgModel *)arg1;
- (void)QQSMMessageCellDidForwardMultiMsgMessage:(QQAIOMsgModel *)arg1;
- (void)QQSMMessageCellDidNewForwardMessage:(QQAIOMsgModel *)arg1 longPressIndex:(NSNumber *)arg2;
- (void)anonymousHeadTouched:(QQMessageModel *)arg1;

@optional
- (void)QQSMMessageCellDidcollectMessage:(QQAIOMsgModel *)arg1;
- (void)QQXMLRichMessageCellDidSelectItem:(QQXMLMessageItem *)arg1 message:(QQXMLMessage *)arg2 model:(QQAIOMsgModel *)arg3;
- (void)deleteMessageModel:(QQUITableViewCell *)arg1;
- (QQSMItemElementBaseView *)dequeueReusableElementViewWithIdentifier:(NSString *)arg1;
- (void)enqueReusableElementView:(QQSMItemElementBaseView *)arg1 withIdentifier:(NSString *)arg2;
- (void)headIconTouch:(NSString *)arg1;
@end

