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

@class MSGraphCalendarGroupFetcher;
@class MSGraphCalendarGroupCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphCalendarGroupCollectionFetcher.
*/

@protocol MSGraphCalendarGroupCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphCalendarGroup> *calendarGroups, MSOrcError *error))callback;

- (MSGraphCalendarGroupCollectionFetcher *)select:(NSString *)params;
- (MSGraphCalendarGroupCollectionFetcher *)filter:(NSString *)params;
- (MSGraphCalendarGroupCollectionFetcher *)search:(NSString *)params;
- (MSGraphCalendarGroupCollectionFetcher *)top:(int)value;
- (MSGraphCalendarGroupCollectionFetcher *)skip:(int)value;
- (MSGraphCalendarGroupCollectionFetcher *)expand:(NSString *)value;
- (MSGraphCalendarGroupCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphCalendarGroupCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphCalendarGroupCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphCalendarGroupFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphCalendarGroup *)entity callback:(void (^)(MSGraphCalendarGroup *calendarGroup, MSOrcError *error))callback;

@end

@interface MSGraphCalendarGroupCollectionFetcher : MSOrcCollectionFetcher<MSGraphCalendarGroupCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end