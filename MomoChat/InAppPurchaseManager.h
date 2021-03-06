//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class NSMutableDictionary, NSString;

@interface InAppPurchaseManager : NSObject <SKProductsRequestDelegate, SKPaymentTransactionObserver>
{
    id <NSObject><InAppPurchaseManagerDelegate> delegate;
    _Bool saveInPayVip;
    NSMutableDictionary *productMap;
}

+ (id)sharedInAppPurchaseManager;
@property(nonatomic) _Bool saveInPayVip; // @synthesize saveInPayVip;
@property(nonatomic) id <InAppPurchaseManagerDelegate> delegate; // @synthesize delegate;
- (id)getProduct:(id)arg1;
- (_Bool)checkSingleProduct:(id)arg1 delegate:(id)arg2;
- (_Bool)checkAllProduct:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestAllProductData;
- (void)requestSingleProductData:(id)arg1;
- (void)pay:(id)arg1 delegate:(id)arg2 saveInPayVip:(_Bool)arg3;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (void)dealloc;
- (id)initWithMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

