//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NormalInvoiceModel.h"

@class NSString;

@interface ElectroInvoiceModel : NormalInvoiceModel
{
    NSString *_invoiceConsigneeEmail;
    NSString *_invoiceConsigneePhone;
}

@property(retain, nonatomic) NSString *invoiceConsigneePhone; // @synthesize invoiceConsigneePhone=_invoiceConsigneePhone;
@property(retain, nonatomic) NSString *invoiceConsigneeEmail; // @synthesize invoiceConsigneeEmail=_invoiceConsigneeEmail;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

