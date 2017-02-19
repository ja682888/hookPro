//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSDictionary, NSString, NxNode;

@protocol NXDocumentProtocol <JSExport>
- (void)removeEventListener:(NxNode *)arg1 event:(NSString *)arg2 handler:(JSValue *)arg3;
- (void)addEventListener:(NxNode *)arg1 event:(NSString *)arg2 handler:(JSValue *)arg3;
- (void)setStyles:(NxNode *)arg1 styles:(NSDictionary *)arg2;
- (void)setAttribute:(NxNode *)arg1 property:(NSDictionary *)arg2;
- (void)removeChild:(NxNode *)arg1 child:(NxNode *)arg2;
- (void)appendChild:(NxNode *)arg1 child:(NxNode *)arg2;
- (NxNode *)createElement:(NSString *)arg1 properties:(NSDictionary *)arg2;
- (void)ready;
- (NxNode *)createBody;

@optional
- (void)removeEventListener:(NxNode *)arg1 event:(NSString *)arg2 handler:(JSValue *)arg3 __JS_EXPORT_AS__removeEventListener:(id)arg4;
- (void)addEventListener:(NxNode *)arg1 event:(NSString *)arg2 handler:(JSValue *)arg3 __JS_EXPORT_AS__addEventListener:(id)arg4;
- (void)setStyles:(NxNode *)arg1 styles:(NSDictionary *)arg2 __JS_EXPORT_AS__setStyles:(id)arg3;
- (void)setAttribute:(NxNode *)arg1 property:(NSDictionary *)arg2 __JS_EXPORT_AS__setAttribute:(id)arg3;
- (void)removeChild:(NxNode *)arg1 child:(NxNode *)arg2 __JS_EXPORT_AS__removeChild:(id)arg3;
- (void)appendChild:(NxNode *)arg1 child:(NxNode *)arg2 __JS_EXPORT_AS__appendChild:(id)arg3;
- (NxNode *)createElement:(NSString *)arg1 properties:(NSDictionary *)arg2 __JS_EXPORT_AS__createElement:(id)arg3;
@end
