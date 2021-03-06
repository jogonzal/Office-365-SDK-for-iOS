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

@class MSDirectoryContactOperations;
@class MSDirectoryContactFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryContactFetcher.
*/

@protocol MSDirectoryContactFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryContact *contact, MSOrcError *error))callback;
- (MSDirectoryContactFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryContactFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryContactFetcher *)select:(NSString *)params;
- (MSDirectoryContactFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryContactOperations *operations;

@end

@interface MSDirectoryContactFetcher : MSOrcEntityFetcher<MSDirectoryContactFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryContact *)contact callback:(void(^)(MSDirectoryContact *contact, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@end