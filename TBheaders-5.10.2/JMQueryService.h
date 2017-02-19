//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface JMQueryService : JMObject
{
    NSMutableDictionary *ticketsTable_;	// 8 = 0x8
    NSMutableDictionary *httpResponseHeaderHandlers_;	// 16 = 0x10
    NSRecursiveLock *lock_;	// 24 = 0x18
}

+ (void)releaseBlcoksAction:(id)arg1;
+ (id)sharedQueryService;
@property(retain) NSRecursiveLock *lock; // @synthesize lock=lock_;
@property(retain, nonatomic) NSMutableDictionary *httpResponseHeaderHandlers; // @synthesize httpResponseHeaderHandlers=httpResponseHeaderHandlers_;
@property(retain, nonatomic) NSMutableDictionary *ticketsTable; // @synthesize ticketsTable=ticketsTable_;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseBlocksOnMainThread;
- (void)cancelAllQueries;
- (void)cancelQueriesWithRelativedObject:(id)arg1;
- (void)cancelQueriesWithTickets:(id)arg1;
- (void)cancelQueryWithTicket:(id)arg1;
- (void)removeGlobalHttpResponseHeadersHandlerForTag:(long long)arg1;
- (void)addGlobalHttpResponseHeadersHandler:(CDUnknownBlockType)arg1 forTag:(long long)arg2;
- (id)executeQuery:(id)arg1;
- (void)didFinishQueryWithTicket:(id)arg1;
- (void)storeTicket:(id)arg1;
- (id)ticketForRpcFetcher:(id)arg1;
- (id)buildTicketWithQuery:(id)arg1 fetcher:(id)arg2;
- (id)buildRpcHttpFetcherWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)retryQueryWithTicket:(id)arg1;
- (void)performResponseHeadersHandlerWithTicket:(id)arg1 headerFields:(id)arg2;
- (void)performCompletionBlockWithTicket:(id)arg1 query:(id)arg2 responseObject:(id)arg3 error:(id)arg4;
- (_Bool)hasSignedIn;
- (id)validateWithQuery:(id)arg1;
- (void)dropRetryableTickets:(id)arg1 withError:(id)arg2;
- (void)resumeRetryableTicket:(id)arg1;
- (id)init;

@end
