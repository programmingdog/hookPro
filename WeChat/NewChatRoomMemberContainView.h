//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "NewChatRoomMemberItemViewDelegate.h"

@class CContact, NSMutableArray, NSString;

@interface NewChatRoomMemberContainView : MMUIView <NewChatRoomMemberItemViewDelegate>
{
    NSMutableArray *m_arrItemViews;
    CContact *m_groupContact;
    unsigned long long m_column;
    double m_margin;
    _Bool m_bDeleteStatue;
    id <ChatRoomMemberGridViewDelegate> m_delegate;
}

@property(retain, nonatomic) CContact *groupContact; // @synthesize groupContact=m_groupContact;
@property(nonatomic) _Bool m_bDeleteStatue; // @synthesize m_bDeleteStatue;
@property(nonatomic) __weak id <ChatRoomMemberGridViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onLongPressEx:(id)arg1;
- (void)setShowRemoveMember;
- (void)onShowMoreMember;
- (void)onDeleteMember:(id)arg1;
- (void)onAddMember:(id)arg1;  //点击 ”＋“ 按钮 @“1”
- (void)openContactInfo:(id)arg1;
- (void)updateSubViewWithContacts:(id)arg1 editBtn:(unsigned long long)arg2 withTrackUserNameList:(id)arg3 withTalkList:(id)arg4;
- (_Bool)showTalkFlag:(id)arg1 contact:(id)arg2 talkList:(id)arg3;
- (_Bool)showTrackFlag:(id)arg1 contact:(id)arg2 trackUserNameList:(id)arg3;
- (id)getItemAt:(unsigned int)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (double)getCenterX:(unsigned long long)arg1 itemView:(id)arg2;
- (void)addItemView:(id)arg1;
- (void)updateColumn:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 column:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
