//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface FinderInventoryDataModel : NSObject
{
    NSMutableArray *_listArray;
    NSString *_offSet;
    NSString *_headImg;
    NSString *_headUrl;
}

@property(copy, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(copy, nonatomic) NSString *headImg; // @synthesize headImg=_headImg;
@property(copy, nonatomic) NSString *offSet; // @synthesize offSet=_offSet;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
- (void).cxx_destruct;
- (_Bool)loadFailureHnintAdded:(_Bool)arg1;
- (_Bool)loadMoreHintAdded:(_Bool)arg1;
- (void)appendData:(id)arg1;
- (void)updateListData:(id)arg1 isRefresh:(_Bool)arg2;
- (id)fetchModel:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (long long)numberOfSection;

@end

