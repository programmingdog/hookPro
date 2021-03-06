//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBRadarNoticeProvider, MFSortedArray;

@interface MDFriendRadarNoticeProvider : NSObject
{
    DBRadarNoticeProvider *dbProvider;
    MFSortedArray *noticeArray;
}

- (void)initNoticeArray;
- (void)resetMore;
- (void)loadMore;
- (_Bool)hasMore;
- (void)removeAllNotices;
- (void)removeForKey:(id)arg1;
- (id)noticeForKey:(id)arg1;
- (id)noticeAtIndex:(unsigned long long)arg1;
- (unsigned long long)noticeCount;
- (id)lastNotice;
- (_Bool)updateNotice:(id)arg1;
- (_Bool)addNotice:(id)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

