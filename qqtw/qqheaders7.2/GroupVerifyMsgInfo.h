//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class GroupVerifyMsgStructMsgModel, NSString;

@interface GroupVerifyMsgInfo : QQModel
{
    unsigned int _unread_count;
    unsigned long long _latest_group_seq;
    unsigned long long _following_group_seq;
    unsigned long long _latest_group_seq_cleen;
    unsigned int _cleanStep;
    GroupVerifyMsgStructMsgModel *_msg_ribbon_group;
    NSString *_grp_msg_display;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) unsigned int cleanStep; // @dynamic cleanStep;
@property(nonatomic) unsigned long long following_group_seq; // @dynamic following_group_seq;
@property(retain, nonatomic) NSString *grp_msg_display; // @dynamic grp_msg_display;
@property(nonatomic) unsigned long long latest_group_seq; // @dynamic latest_group_seq;
@property(nonatomic) unsigned long long latest_group_seq_cleen; // @dynamic latest_group_seq_cleen;
@property(retain, nonatomic) GroupVerifyMsgStructMsgModel *msg_ribbon_group; // @dynamic msg_ribbon_group;
@property(nonatomic) unsigned int unread_count; // @dynamic unread_count;

@end
