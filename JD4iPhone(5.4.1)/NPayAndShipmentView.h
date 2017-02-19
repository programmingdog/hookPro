//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDContentItem.h"

@class NShipmentScheduleView, NShipmentView, OrderPayShipMapModel, UILabel, UIView;

@interface NPayAndShipmentView : JDContentItem
{
    UIView *_bottomSepartor;
    NShipmentScheduleView *_scheduleView;
    long long _style;
    NShipmentView *_shipmentView;
    OrderPayShipMapModel *_payShipMapModel;
    UILabel *_deliveryServiceLabel;
}

+ (id)payAndShipmentViewWithStyle:(long long)arg1 model:(id)arg2;
@property(retain, nonatomic) UILabel *deliveryServiceLabel; // @synthesize deliveryServiceLabel=_deliveryServiceLabel;
@property(retain, nonatomic) OrderPayShipMapModel *payShipMapModel; // @synthesize payShipMapModel=_payShipMapModel;
@property(retain, nonatomic) NShipmentView *shipmentView; // @synthesize shipmentView=_shipmentView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, retain, nonatomic) NShipmentScheduleView *scheduleView; // @synthesize scheduleView=_scheduleView;
- (long long)__convertNPayAndShipmentStyle:(long long)arg1;
- (void)__setupUIWithStyle:(long long)arg1;
- (double)addOtherViewWithY:(double)arg1;
- (void)setText:(id)arg1 payment:(id)arg2 shipment:(id)arg3;
@property(readonly, nonatomic) UILabel *shipmentLabel;
@property(readonly, nonatomic) UILabel *paymentLabel;
@property(readonly, nonatomic) UILabel *textLabel;
@property(readonly, nonatomic) UIView *accessory;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetHeightOfView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 model:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
