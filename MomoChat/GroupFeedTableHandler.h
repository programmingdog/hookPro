//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FeedTableHandler.h"

@interface GroupFeedTableHandler : FeedTableHandler
{
}

- (void)dealloc;
- (void)removeFeedCommentNotification:(id)arg1;
- (void)publishFeedCommentNotification:(id)arg1;
- (void)reLayoutDataSourceWithIndexPaths:(id)arg1;
- (void)appendFeedData:(id)arg1 andFeedType:(int)arg2 index:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)feedWithFeedID:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)findFeedItemWithIndexPath:(id)arg1;

@end
