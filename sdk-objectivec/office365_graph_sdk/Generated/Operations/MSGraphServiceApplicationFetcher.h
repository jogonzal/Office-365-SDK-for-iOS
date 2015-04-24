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

@class MSGraphServiceExtensionPropertyFetcher;
@class MSGraphServiceExtensionPropertyCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceApplicationOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceApplicationFetcher.
*/

@protocol MSGraphServiceApplicationFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceApplication *application, MSODataException *exception))callback;
- (id<MSGraphServiceApplicationFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceApplicationFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceApplicationFetcher>)select:(NSString *)params;
- (id<MSGraphServiceApplicationFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceApplicationOperations *operations;

- (MSGraphServiceExtensionPropertyCollectionFetcher *)getextensionProperties;
- (MSGraphServiceExtensionPropertyFetcher *) getextensionPropertiesById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectFetcher *)getcreatedOnBehalfOf;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getowners;
- (MSGraphServiceDirectoryObjectFetcher *) getownersById:(NSString*)_id;

@end

@interface MSGraphServiceApplicationFetcher : MSODataEntityFetcher<MSGraphServiceApplicationFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSGraphServiceApplication *)application callback:(void (^)(MSGraphServiceApplication *application, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end