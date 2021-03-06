//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMMarketBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TMMarketCitySelectModel, TMMarketDivisionSelectController, UITableView;

@interface TMMarketCitySelectController : TMMarketBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_divisionCode;	// 56 = 0x38
    CDUnknownBlockType _didSelectCityCallback;	// 64 = 0x40
    TMMarketCitySelectModel *_citySelectModel;	// 72 = 0x48
    UITableView *_tableView;	// 80 = 0x50
    TMMarketDivisionSelectController *_selectDivisionController;	// 88 = 0x58
}

@property(retain, nonatomic) TMMarketDivisionSelectController *selectDivisionController; // @synthesize selectDivisionController=_selectDivisionController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TMMarketCitySelectModel *citySelectModel; // @synthesize citySelectModel=_citySelectModel;
@property(copy, nonatomic) CDUnknownBlockType didSelectCityCallback; // @synthesize didSelectCityCallback=_didSelectCityCallback;
@property(retain, nonatomic) NSString *divisionCode; // @synthesize divisionCode=_divisionCode;
- (void).cxx_destruct;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)didSelectDivision:(id)arg1;
- (void)changeToDivision:(id)arg1;
- (void)startLocationService;
- (void)initCitySelectModel;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

