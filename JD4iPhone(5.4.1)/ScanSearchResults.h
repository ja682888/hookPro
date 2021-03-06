//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HomePageChannelAction, NSArray, NSString, ScanSearchResultMainBodyRectangle, ScanSearchResultSummary;

@interface ScanSearchResults : NSObject
{
    NSString *_code;
    NSString *_subCode;
    NSString *_returnMsg;
    NSString *_imgUrl;
    ScanSearchResultSummary *_summary;
    NSArray *_mainCategoryList;
    NSArray *_hotCategoryList;
    NSArray *_wareCollection;
    ScanSearchResultMainBodyRectangle *_mainBodyRectangle;
    NSArray *_rankList;
    NSString *_rankId;
    NSString *_cate3Id;
    NSString *_writing;
    NSArray *_rows;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(copy, nonatomic) NSString *writing; // @synthesize writing=_writing;
@property(copy, nonatomic) NSString *cate3Id; // @synthesize cate3Id=_cate3Id;
@property(copy, nonatomic) NSString *rankId; // @synthesize rankId=_rankId;
@property(copy, nonatomic) NSArray *rankList; // @synthesize rankList=_rankList;
@property(retain, nonatomic) ScanSearchResultMainBodyRectangle *mainBodyRectangle; // @synthesize mainBodyRectangle=_mainBodyRectangle;
@property(copy, nonatomic) NSArray *wareCollection; // @synthesize wareCollection=_wareCollection;
@property(copy, nonatomic) NSArray *hotCategoryList; // @synthesize hotCategoryList=_hotCategoryList;
@property(copy, nonatomic) NSArray *mainCategoryList; // @synthesize mainCategoryList=_mainCategoryList;
@property(retain, nonatomic) ScanSearchResultSummary *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *returnMsg; // @synthesize returnMsg=_returnMsg;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;
@property(readonly, nonatomic) HomePageChannelAction *moreRankListAction;
@property(readonly, nonatomic) HomePageChannelAction *textSearchAction;

@end

