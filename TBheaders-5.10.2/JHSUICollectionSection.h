//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JHSUICollectionSectionFactory-Protocol.h"

@class NSString;

@interface JHSUICollectionSection : NSObject <JHSUICollectionSectionFactory>
{
    _Bool _hiddenHeader;	// 8 = 0x8
    _Bool _hiddenFooter;	// 9 = 0x9
    Class headerClass;	// 16 = 0x10
    Class footerClass;	// 24 = 0x18
    NSString *headerIdentifier;	// 32 = 0x20
    NSString *footerIdentifier;	// 40 = 0x28
    long long index;	// 48 = 0x30
    struct CGSize headerSize;	// 56 = 0x38
    struct CGSize footerSize;	// 72 = 0x48
}

@property(nonatomic) _Bool hiddenFooter; // @synthesize hiddenFooter=_hiddenFooter;
@property(nonatomic) _Bool hiddenHeader; // @synthesize hiddenHeader=_hiddenHeader;
@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize;
@property(nonatomic) long long index; // @synthesize index;
@property(copy, nonatomic) NSString *footerIdentifier; // @synthesize footerIdentifier;
@property(copy, nonatomic) NSString *headerIdentifier; // @synthesize headerIdentifier;
@property(nonatomic) Class footerClass; // @synthesize footerClass;
@property(nonatomic) Class headerClass; // @synthesize headerClass;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
