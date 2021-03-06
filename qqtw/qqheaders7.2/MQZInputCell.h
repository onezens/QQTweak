//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MQZMoodEditInputAccessoryViewDelegate.h"
#import "MulMemSelBusiProcessDelegate.h"
#import "QZEmojiTextViewDelegate.h"
#import "QZFontListViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MQZMoodEditInputAccessoryView, NSMutableDictionary, NSString, QZEmojiTextView, QZFacePanelController, QZFontBoardContainerView, QZSparkleWordView, QzoneCommSparkleWord, UILabel, UITapGestureRecognizer, UIView, UIViewController;

@interface MQZInputCell : NSObject <MQZMoodEditInputAccessoryViewDelegate, QZFontListViewDelegate, MulMemSelBusiProcessDelegate, UIGestureRecognizerDelegate, QZEmojiTextViewDelegate>
{
    UILabel *_counterLabel;
    UIView *_view;
    MQZMoodEditInputAccessoryView *_inputAccessoryView;
    UIView *_emotionBoardContainer;
    UIViewController *_delegate;
    NSString *_placeholderString;
    QZEmojiTextView *_textView;
    _Bool _isShowFriendSelected;
    int _xo;
    UIView *_cachedInputView;
    UILabel *_placeholder;
    _Bool _active;
    _Bool _isShowFontBoard;
    _Bool _getFontListOrNot;
    _Bool _getFontListRetry;
    _Bool _isInputAt;
    _Bool _isAutoATFriend;
    QZFacePanelController *_facePanelController;
    QZFontBoardContainerView *_fontBoardContainer;
    UIView *_fontBoardView;
    UITapGestureRecognizer *_showKeyBoardTapGesture;
    CDUnknownBlockType _onPressPictureButton;
    CDUnknownBlockType _onPressGifRecommendButton;
    CDUnknownBlockType _onPressVoiceButton;
    long long _autoShowFontBoard;
    long long _from;
    UIViewController *_containerVC;
    NSMutableDictionary *_atFriendParam;
    CDUnknownBlockType _onPressPackUpkeyboardButton;
    QzoneCommSparkleWord *_sparkleword;
    QZSparkleWordView *_sparkleWordView;
}

- (void).cxx_destruct;
- (void)activateInputCell;
@property(retain, nonatomic) NSMutableDictionary *atFriendParam; // @synthesize atFriendParam=_atFriendParam;
@property(nonatomic) long long autoShowFontBoard; // @synthesize autoShowFontBoard=_autoShowFontBoard;
- (void)autoresizingHolderHieght;
@property(nonatomic) __weak UIViewController *containerVC; // @synthesize containerVC=_containerVC;
- (void)createFontBoard;
- (void)cz_addSubview:(id)arg1;
- (void)deactivateInputCell;
- (void)dealloc;
- (id)diyFont;
@property(retain, nonatomic) QZFacePanelController *facePanelController; // @synthesize facePanelController=_facePanelController;
@property(retain, nonatomic) QZFontBoardContainerView *fontBoardContainer; // @synthesize fontBoardContainer=_fontBoardContainer;
- (_Bool)fontBoardShow;
@property(retain, nonatomic) UIView *fontBoardView; // @synthesize fontBoardView=_fontBoardView;
- (_Bool)fontButtonClicked;
- (void)fontListView:(id)arg1 openPayVC:(id)arg2 hasQual:(_Bool)arg3;
- (void)fontListViewDidSelected:(id)arg1 withTap:(_Bool)arg2;
@property(nonatomic) long long from; // @synthesize from=_from;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (long long)getFontList;
@property(nonatomic) _Bool getFontListOrNot; // @synthesize getFontListOrNot=_getFontListOrNot;
@property(nonatomic) _Bool getFontListRetry; // @synthesize getFontListRetry=_getFontListRetry;
- (void)handleMentionFriends;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)inputAccessoryViewDidPressEmotionButton:(id)arg1;
- (void)inputAccessoryViewDidPressFontButton:(id)arg1;
- (void)inputAccessoryViewDidPressGifRecommendButton:(id)arg1;
- (void)inputAccessoryViewDidPressKeyboardButton:(id)arg1;
- (void)inputAccessoryViewDidPressMentionButton:(id)arg1;
- (void)inputAccessoryViewDidPressPackUpkeyboardButton:(id)arg1;
- (void)inputAccessoryViewDidPressPictureButton:(id)arg1;
- (void)inputAccessoryViewDidPressVoiceButton:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool isAutoATFriend; // @synthesize isAutoATFriend=_isAutoATFriend;
@property(nonatomic) _Bool isInputAt; // @synthesize isInputAt=_isInputAt;
@property(nonatomic) _Bool isShowFontBoard; // @synthesize isShowFontBoard=_isShowFontBoard;
- (void)loadFontList;
- (void)needShowKeyboard;
- (void)onBusinessProcessCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessPopCancelMulMemSelector:(id)arg1 currentViewControllerClass:(id)arg2 selectedMember:(id)arg3;
- (void)onBusinessProcessWithSelectedMems:(id)arg1 currentViewControllerClass:(id)arg2 currentViewController:(id)arg3;
- (void)onPaste;
@property(copy, nonatomic) CDUnknownBlockType onPressGifRecommendButton; // @synthesize onPressGifRecommendButton=_onPressGifRecommendButton;
@property(copy, nonatomic) CDUnknownBlockType onPressPackUpkeyboardButton; // @synthesize onPressPackUpkeyboardButton=_onPressPackUpkeyboardButton;
@property(copy, nonatomic) CDUnknownBlockType onPressPictureButton; // @synthesize onPressPictureButton=_onPressPictureButton;
@property(copy, nonatomic) CDUnknownBlockType onPressVoiceButton; // @synthesize onPressVoiceButton=_onPressVoiceButton;
- (void)onSelectionCompeleted:(id)arg1 nicks:(id)arg2;
- (void)recoverPlaceholder;
- (void)reportFontBoardShow;
- (void)resetPlaceholder:(id)arg1 alpha:(double)arg2 font:(id)arg3 frame:(struct CGRect)arg4;
- (void)resignTextView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectBigFont:(_Bool)arg1;
- (void)setPlaceholder:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *showKeyBoardTapGesture; // @synthesize showKeyBoardTapGesture=_showKeyBoardTapGesture;
@property(retain, nonatomic) QZSparkleWordView *sparkleWordView; // @synthesize sparkleWordView=_sparkleWordView;
@property(retain, nonatomic) QzoneCommSparkleWord *sparkleword; // @synthesize sparkleword=_sparkleword;
- (void)setSystemFontReq;
- (void)setupCounterLabel;
- (void)setupTextView;
- (void)showEmotionBoard;
- (void)showFontBoard;
- (void)showFontRedDot;
- (void)showFontRedDot:(_Bool)arg1;
- (void)showKeyboard;
- (void)textChanged;
- (struct CGRect)textViewFrame;
- (void)updateSparklewordDisplay;
- (void)viewWillAppear;

// Remaining properties
@property(retain, nonatomic) UILabel *counterLabel; // @dynamic counterLabel;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak UIViewController *delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *emotionBoardContainer; // @dynamic emotionBoardContainer;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MQZMoodEditInputAccessoryView *inputAccessoryView; // @dynamic inputAccessoryView;
@property(retain, nonatomic) NSString *placeholderString; // @dynamic placeholderString;
@property(readonly) Class superclass;
@property(retain, nonatomic) QZEmojiTextView *textView; // @dynamic textView;
@property(retain, nonatomic) UIView *view; // @dynamic view;

@end

