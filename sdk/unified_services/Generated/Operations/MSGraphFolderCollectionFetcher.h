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

@class MSGraphFolderFetcher;
@class MSGraphFolderCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphFolderCollectionFetcher.
*/

@protocol MSGraphFolderCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphFolder> *folders, MSOrcError *error))callback;

- (MSGraphFolderCollectionFetcher *)select:(NSString *)params;
- (MSGraphFolderCollectionFetcher *)filter:(NSString *)params;
- (MSGraphFolderCollectionFetcher *)search:(NSString *)params;
- (MSGraphFolderCollectionFetcher *)top:(int)value;
- (MSGraphFolderCollectionFetcher *)skip:(int)value;
- (MSGraphFolderCollectionFetcher *)expand:(NSString *)value;
- (MSGraphFolderCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphFolderCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphFolderCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphFolderFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphFolder *)entity callback:(void (^)(MSGraphFolder *folder, MSOrcError *error))callback;

@end

@interface MSGraphFolderCollectionFetcher : MSOrcCollectionFetcher<MSGraphFolderCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end