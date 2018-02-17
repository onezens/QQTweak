//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexPath, NSString, QQAIOEventModule, QQAIOModel, QQAIOMsgModel, QQAIORichModel, QQAIOSpriteActionModel, QQBaseChatModel, QQBaseChatUIOperation, QQMessageModel, QQStructuredMessageEvent, QQVoiceCellModel, UITableView, UITableViewCell;

@protocol QQChatViewTableDelegate <NSObject>
- (void)QQAIOOfficeMessageCellDidAction:(QQAIOMsgModel *)arg1;
- (void)QQAIOScheduleMessageCellDidAction:(QQAIOMsgModel *)arg1;
- (void)QQAIOShareMessageCellDidAction:(QQStructuredMessageEvent *)arg1 aioModel:(QQAIOMsgModel *)arg2;

@optional
- (void)BeginDraggingInTableView:(UITableView *)arg1;
- (void)BeginScrollInTableView:(UITableView *)arg1;
- (void)EndDraggingInTableView:(UITableView *)arg1 speed:(double)arg2 byUser:(_Bool)arg3;
- (void)EndScrollBySetContenOffset:(UITableView *)arg1;
- (void)EndScrollInTableView:(UITableView *)arg1;
- (void)EndScrollToTopTableView:(UITableView *)arg1;
- (QQBaseChatModel *)GetBaseChatModel;
- (QQBaseChatUIOperation *)GetChatUIOperation;
- (void)OnDraggingInTableView:(UITableView *)arg1;
- (void)QQAIOTribeTopicMessageCellDidAction:(QQStructuredMessageEvent *)arg1 aioModel:(QQAIOMsgModel *)arg2;
- (QQAIOEventModule *)UITableViewGetEventModule;
- (void)anonymousHeadTouched:(QQMessageModel *)arg1;
- (void)cancelSendThirdAppShareStructureMessage:(QQMessageModel *)arg1;
- (void)continueUploadOrginalPic:(QQMessageModel *)arg1;
- (void)deleteMessageModel:(NSIndexPath *)arg1;
- (void)deleteMessageModelWithoutWarning:(NSIndexPath *)arg1;
- (void)deletedMsgByAIOModel:(QQAIOModel *)arg1;
- (void)didEndDisplayingCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didEndScroll:(UITableView *)arg1;
- (void)didSelectEmail:(NSString *)arg1;
- (void)didSelectIDNumber:(NSString *)arg1;
- (void)didSelectIVRAudio:(NSString *)arg1;
- (void)didSelectLongNumber:(NSString *)arg1;
- (void)didSelectQQNumber:(NSString *)arg1;
- (void)didSelectReloadImage:(QQAIORichModel *)arg1;
- (void)didSelectSensContent:(NSString *)arg1 aioMsgModel:(QQAIOMsgModel *)arg2;
- (void)didSelectSystemNotificationCell:(QQAIOModel *)arg1;
- (void)didSelectURL:(NSString *)arg1 msgModel:(QQMessageModel *)arg2;
- (void)didTouchInTabelView:(UITableView *)arg1;
- (void)downLoadC2COfflineImg:(QQMessageModel *)arg1;
- (void)downLoadGroupImg:(QQMessageModel *)arg1 isRefresh:(_Bool)arg2;
- (void)emojiCollectAuthFail:(NSDictionary *)arg1;
- (void)emojiForwardAuthFail:(NSDictionary *)arg1;
- (void)emojiForwardAuthSuccess:(NSDictionary *)arg1;
- (void)emotionLabelHandleSmallFace:(unsigned long long)arg1 emojiID:(NSString *)arg2 allSmallFace:(NSArray *)arg3;
- (void)endDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 byUser:(_Bool)arg3;
- (void)forwardTo:(QQAIOMsgModel *)arg1;
- (void)goToManageView:(id)arg1;
- (void)groupDidFollowUpstairsWithSimpleText:(NSString *)arg1;
- (void)groupDidFollowUpstairsWithSpriteActionModel:(QQAIOSpriteActionModel *)arg1;
- (void)groupRankLabelTouch:(NSString *)arg1 clkUin:(NSString *)arg2 clkNick:(NSString *)arg3 isDeliverGiftFlag:(_Bool)arg4 source:(NSString *)arg5;
- (void)groupTitleOrNickLabelTouch:(NSString *)arg1 targetUin:(NSString *)arg2 targetNick:(NSString *)arg3 targetType:(int)arg4 source:(NSString *)arg5;
- (void)headIconTouch:(NSString *)arg1;
- (void)headIconTouchWithModel:(QQAIOMsgModel *)arg1;
- (void)onTableViewFrameChange:(struct CGRect)arg1;
- (void)reReceivePPT:(QQVoiceCellModel *)arg1 index:(NSIndexPath *)arg2;
- (void)reSendStreamPTT:(QQMessageModel *)arg1;
- (void)saveImgToAlbum:(NSString *)arg1;
- (void)sendTipsTouchAIO:(QQAIOModel *)arg1;
- (void)sendVideoTouch:(QQAIOMsgModel *)arg1;
- (void)shakeWindowAndShake;
- (void)showKeyboard:(QQAIOMsgModel *)arg1;
- (void)showKeyboardForVoice:(QQVoiceCellModel *)arg1;
- (void)showNavigationBarShadow:(_Bool)arg1;
- (void)tableCallPopViewController:(UITableView *)arg1;
- (void)tableViewDidScroll;
- (void)tableViewImageModelDidTouch:(QQAIOMsgModel *)arg1;
- (void)tableViewReSendImage:(QQAIOMsgModel *)arg1;
- (void)upAmrFile:(QQMessageModel *)arg1;
- (void)willDisplayCell:(UITableViewCell *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2 byUser:(_Bool)arg3;
@end
