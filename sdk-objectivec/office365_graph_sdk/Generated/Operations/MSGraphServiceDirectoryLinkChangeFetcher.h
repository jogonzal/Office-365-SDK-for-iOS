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

@class MSGraphServiceDirectoryLinkChangeOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceDirectoryLinkChangeFetcher.
*/

@protocol MSGraphServiceDirectoryLinkChangeFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceDirectoryLinkChange *directoryLinkChange, MSODataException *exception))callback;
- (id<MSGraphServiceDirectoryLinkChangeFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceDirectoryLinkChangeFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceDirectoryLinkChangeFetcher>)select:(NSString *)params;
- (id<MSGraphServiceDirectoryLinkChangeFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceDirectoryLinkChangeOperations *operations;


@end

@interface MSGraphServiceDirectoryLinkChangeFetcher : MSODataEntityFetcher<MSGraphServiceDirectoryLinkChangeFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSGraphServiceDirectoryLinkChange *)directoryLinkChange callback:(void (^)(MSGraphServiceDirectoryLinkChange *directoryLinkChange, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end