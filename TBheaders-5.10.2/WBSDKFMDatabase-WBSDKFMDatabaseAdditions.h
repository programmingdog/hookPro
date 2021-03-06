//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBSDKFMDatabase.h"

@interface WBSDKFMDatabase (WBSDKFMDatabaseAdditions)
- (_Bool)validateSQL:(id)arg1 error:(id *)arg2;
- (_Bool)columnExists:(id)arg1 columnName:(id)arg2;
- (id)getTableSchema:(id)arg1;
- (id)getSchema;
- (_Bool)tableExists:(id)arg1;
- (id)stringDictForQuery:(id)arg1;
- (id)stringDictForQuery:(id)arg1 withArgumentsInArray:(id)arg2;
- (id)dateForQuery:(id)arg1;
- (id)dataForQuery:(id)arg1;
- (double)doubleForQuery:(id)arg1;
- (_Bool)boolForQuery:(id)arg1;
- (long long)longForQuery:(id)arg1;
- (int)intForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1;
@end

