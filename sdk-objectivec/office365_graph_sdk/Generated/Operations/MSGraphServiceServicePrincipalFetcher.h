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

@class MSGraphServiceAppRoleAssignmentFetcher;
@class MSGraphServiceAppRoleAssignmentCollectionFetcher;
@class MSGraphServiceOAuth2PermissionGrantFetcher;
@class MSGraphServiceOAuth2PermissionGrantCollectionFetcher;
@class MSGraphServiceDirectoryObjectFetcher;
@class MSGraphServiceDirectoryObjectCollectionFetcher;
@class MSGraphServiceServicePrincipalOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphServiceModels.h"

/**
* The header for type MSGraphServiceServicePrincipalFetcher.
*/

@protocol MSGraphServiceServicePrincipalFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSGraphServiceServicePrincipal *servicePrincipal, MSODataException *exception))callback;
- (id<MSGraphServiceServicePrincipalFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphServiceServicePrincipalFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSGraphServiceServicePrincipalFetcher>)select:(NSString *)params;
- (id<MSGraphServiceServicePrincipalFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSGraphServiceServicePrincipalOperations *operations;

- (MSGraphServiceAppRoleAssignmentFetcher *)getappRoleAssignedTo;
- (MSGraphServiceAppRoleAssignmentCollectionFetcher *)getappRoleAssignments;
- (MSGraphServiceAppRoleAssignmentFetcher *) getappRoleAssignmentsById:(NSString*)_id;
- (MSGraphServiceOAuth2PermissionGrantCollectionFetcher *)getoauth2PermissionGrants;
- (MSGraphServiceOAuth2PermissionGrantFetcher *) getoauth2PermissionGrantsById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getmemberOf;
- (MSGraphServiceDirectoryObjectFetcher *) getmemberOfById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectFetcher *)getcreatedOnBehalfOf;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getcreatedObjects;
- (MSGraphServiceDirectoryObjectFetcher *) getcreatedObjectsById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getowners;
- (MSGraphServiceDirectoryObjectFetcher *) getownersById:(NSString*)_id;
- (MSGraphServiceDirectoryObjectCollectionFetcher *)getownedObjects;
- (MSGraphServiceDirectoryObjectFetcher *) getownedObjectsById:(NSString*)_id;

@end

@interface MSGraphServiceServicePrincipalFetcher : MSODataEntityFetcher<MSGraphServiceServicePrincipalFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) update:(MSGraphServiceServicePrincipal *)servicePrincipal callback:(void (^)(MSGraphServiceServicePrincipal *servicePrincipal, MSODataException *error))callback;
- (NSURLSessionTask *) delete:(void (^)(int status, MSODataException *exception))callback;

@end