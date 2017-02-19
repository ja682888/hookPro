//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MomoVerifiCodeManager, NSString, UIImageView;

@interface MDVerifyImageHelper : NSObject
{
    id <MDVerifyImageHelperDelegate> _delegate;
    UIImageView *_vericodeView;
    MomoVerifiCodeManager *_verifiCodeManager;
    NSString *_verifyCookieString;
}

@property(retain, nonatomic) NSString *verifyCookieString; // @synthesize verifyCookieString=_verifyCookieString;
@property(retain, nonatomic) MomoVerifiCodeManager *verifiCodeManager; // @synthesize verifiCodeManager=_verifiCodeManager;
@property(retain, nonatomic) UIImageView *vericodeView; // @synthesize vericodeView=_vericodeView;
@property(nonatomic) id <MDVerifyImageHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitVerifiCodeWithText:(id)arg1;
- (void)verifyFinished:(id)arg1;
- (void)getVerifiCodeSuccess:(id)arg1;
- (void)refreshVerifyCode;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 superView:(id)arg2 delegate:(id)arg3;

@end
