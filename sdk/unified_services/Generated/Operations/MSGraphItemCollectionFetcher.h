/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSGraphItemFetcher;
@class MSGraphItemCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphItemCollectionFetcher.
*/

@protocol MSGraphItemCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphItem> *items, MSOrcError *error))callback;

- (MSGraphItemCollectionFetcher *)select:(NSString *)params;
- (MSGraphItemCollectionFetcher *)filter:(NSString *)params;
- (MSGraphItemCollectionFetcher *)search:(NSString *)params;
- (MSGraphItemCollectionFetcher *)top:(int)value;
- (MSGraphItemCollectionFetcher *)skip:(int)value;
- (MSGraphItemCollectionFetcher *)expand:(NSString *)value;
- (MSGraphItemCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphItemCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphItemCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphItemFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphItem *)entity callback:(void (^)(MSGraphItem *item, MSOrcError *error))callback;

@end

@interface MSGraphItemCollectionFetcher : MSOrcCollectionFetcher<MSGraphItemCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end