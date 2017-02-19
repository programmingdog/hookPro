//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSessionArray, NSArray, NSMutableDictionary;

@interface MDChatSessionArray : NSObject
{
    NSArray *_array;
    NSMutableDictionary *_sessionsCache;
    MDSessionArray *_headerSessionArray;
    MDSessionArray *_topSessionArray;
    MDSessionArray *_normalSessionArray;
}

@property(retain, nonatomic) MDSessionArray *normalSessionArray; // @synthesize normalSessionArray=_normalSessionArray;
@property(retain, nonatomic) MDSessionArray *topSessionArray; // @synthesize topSessionArray=_topSessionArray;
@property(retain, nonatomic) MDSessionArray *headerSessionArray; // @synthesize headerSessionArray=_headerSessionArray;
@property(retain, nonatomic) NSMutableDictionary *sessionsCache; // @synthesize sessionsCache=_sessionsCache;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void).cxx_destruct;
- (void)enumerateSessionsUsingBlock:(CDUnknownBlockType)arg1;
- (id)sortSessionArray:(id)arg1;
- (void)resortAllSession;
- (void)cleanTopSessionArray;
- (void)addInTopArray:(id)arg1;
- (_Bool)existsSession:(id)arg1;
- (void)update:(id)arg1;
- (void)remove:(id)arg1;
- (void)append:(id)arg1;
- (void)add:(id)arg1;
- (unsigned long long)sessionCount;
- (void)removeAll;
- (id)sessionArrayForKey:(id)arg1;
- (id)validKey:(id)arg1;
- (_Bool)isTopKey:(id)arg1;
- (id)topKeys;
- (id)init;

@end
