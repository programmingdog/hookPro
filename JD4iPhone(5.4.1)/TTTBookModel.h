//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTWareModel.h"

@class NSMutableAttributedString, NSString, TTTBookStep;

@interface TTTBookModel : TTTWareModel
{
    _Bool _onSalePriceAvaiable;
    _Bool _stockAvaiable;
    _Bool _advanceDeposited;
    _Bool _hideSellOutEnable;
    TTTBookStep *_psStep;
    NSString *_psCount;
    NSString *_swPsSt;
    NSString *_psDps;
    NSString *_psDpsPriceStr;
    NSString *_floorStyleId;
    NSString *_bookingNumTag;
    NSMutableAttributedString *_bookingPriceTag;
    NSMutableAttributedString *_bookingPriceDesTag;
    NSMutableAttributedString *_preSalePriceTag;
    NSMutableAttributedString *_preSalePriceDesTag;
    long long _bookStyle;
    NSString *_commondTitle;
    long long _commondStyle;
    NSMutableAttributedString *_commonPriceTag;
    NSMutableAttributedString *_commonPriceDesTag;
}

@property(retain, nonatomic) NSMutableAttributedString *commonPriceDesTag; // @synthesize commonPriceDesTag=_commonPriceDesTag;
@property(retain, nonatomic) NSMutableAttributedString *commonPriceTag; // @synthesize commonPriceTag=_commonPriceTag;
@property(nonatomic) _Bool hideSellOutEnable; // @synthesize hideSellOutEnable=_hideSellOutEnable;
@property(nonatomic) long long commondStyle; // @synthesize commondStyle=_commondStyle;
@property(retain, nonatomic) NSString *commondTitle; // @synthesize commondTitle=_commondTitle;
@property(nonatomic) long long bookStyle; // @synthesize bookStyle=_bookStyle;
@property(retain, nonatomic) NSMutableAttributedString *preSalePriceDesTag; // @synthesize preSalePriceDesTag=_preSalePriceDesTag;
@property(retain, nonatomic) NSMutableAttributedString *preSalePriceTag; // @synthesize preSalePriceTag=_preSalePriceTag;
@property(nonatomic) _Bool advanceDeposited; // @synthesize advanceDeposited=_advanceDeposited;
@property(nonatomic) _Bool stockAvaiable; // @synthesize stockAvaiable=_stockAvaiable;
@property(nonatomic) _Bool onSalePriceAvaiable; // @synthesize onSalePriceAvaiable=_onSalePriceAvaiable;
@property(retain, nonatomic) NSMutableAttributedString *bookingPriceDesTag; // @synthesize bookingPriceDesTag=_bookingPriceDesTag;
@property(retain, nonatomic) NSMutableAttributedString *bookingPriceTag; // @synthesize bookingPriceTag=_bookingPriceTag;
@property(retain, nonatomic) NSString *bookingNumTag; // @synthesize bookingNumTag=_bookingNumTag;
@property(nonatomic) __weak NSString *floorStyleId; // @synthesize floorStyleId=_floorStyleId;
@property(retain, nonatomic) NSString *psDpsPriceStr; // @synthesize psDpsPriceStr=_psDpsPriceStr;
@property(retain, nonatomic) NSString *psDps; // @synthesize psDps=_psDps;
@property(retain, nonatomic) NSString *swPsSt; // @synthesize swPsSt=_swPsSt;
@property(retain, nonatomic) NSString *psCount; // @synthesize psCount=_psCount;
@property(retain, nonatomic) TTTBookStep *psStep; // @synthesize psStep=_psStep;
- (void).cxx_destruct;
- (void)updateCommondInfo;
- (void)keyValuesDidFinishConvertingToObject;

@end

