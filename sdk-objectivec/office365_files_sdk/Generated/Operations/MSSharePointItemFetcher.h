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

@class MSSharePointFileFetcher;
@class MSSharePointFolderFetcher;
@class MSSharePointItemOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointModels.h"

/**
* The header for type MSSharePointItemFetcher.
*/

@protocol MSSharePointItemFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSSharePointItem *item, MSODataException *exception))callback;
- (id<MSSharePointItemFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSSharePointItemFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSSharePointItemFetcher>)select:(NSString *)params;
- (id<MSSharePointItemFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSSharePointItemOperations *operations;

- (MSSharePointFileFetcher *)asFile;	
- (MSSharePointFolderFetcher *)asFolder;	

@end

@interface MSSharePointItemFetcher : MSODataEntityFetcher<MSSharePointItemFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateItem:(MSSharePointItem *)item callback:(void (^)(MSSharePointItem *item, MSODataException *error))callback;
- (NSURLSessionTask *) deleteItem:(void (^)(int status, MSODataException *exception))callback;

@end