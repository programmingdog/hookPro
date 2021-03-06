//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSNumber, NSString, SubmitOrderModel;

@interface OrderSubmitModel : JDModel
{
    _Bool _inputPassword;
    _Bool _bigItemChangeFlag;
    SubmitOrderModel *_submitOrder;
    NSString *_coMsg;
    NSNumber *_onlinePay;
    NSArray *_commodities;
    long long _stockStatus;
    NSArray *_noStackArray;
    NSArray *_mainArray;
    NSArray *_mustArray;
    NSArray *_otherArray;
    NSString *_imageDomain;
    long long _orderType;
    NSString *_bigItemChangeMsg;
}

@property(copy, nonatomic) NSString *bigItemChangeMsg; // @synthesize bigItemChangeMsg=_bigItemChangeMsg;
@property(nonatomic) _Bool bigItemChangeFlag; // @synthesize bigItemChangeFlag=_bigItemChangeFlag;
@property(nonatomic) long long orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(retain, nonatomic) NSArray *otherArray; // @synthesize otherArray=_otherArray;
@property(retain, nonatomic) NSArray *mustArray; // @synthesize mustArray=_mustArray;
@property(retain, nonatomic) NSArray *mainArray; // @synthesize mainArray=_mainArray;
@property(retain, nonatomic) NSArray *noStackArray; // @synthesize noStackArray=_noStackArray;
@property(nonatomic) long long stockStatus; // @synthesize stockStatus=_stockStatus;
@property(retain, nonatomic) NSArray *commodities; // @synthesize commodities=_commodities;
@property(retain, nonatomic) NSNumber *onlinePay; // @synthesize onlinePay=_onlinePay;
@property(copy, nonatomic) NSString *coMsg; // @synthesize coMsg=_coMsg;
@property(nonatomic) _Bool inputPassword; // @synthesize inputPassword=_inputPassword;
@property(retain, nonatomic) SubmitOrderModel *submitOrder; // @synthesize submitOrder=_submitOrder;
- (void).cxx_destruct;
- (void)parserNoStockList:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end

