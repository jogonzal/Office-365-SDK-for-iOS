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
					  		
#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphDirectoryObjectOperations.
*/

@interface MSGraphDirectoryObjectOperations : MSOrcOperations

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)checkMemberGroupsWithGroupIds:(NSArray *)groupIds callback:(void (^)(NSMutableArray *string, MSOrcError *error))callback;
- (void)checkMemberGroupsRawWithGroupIds:(NSString *) groupIds callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;
- (void)getMemberGroupsWithSecurityEnabledOnly:(BOOL)securityEnabledOnly callback:(void (^)(NSMutableArray *string, MSOrcError *error))callback;
- (void)getMemberGroupsRawWithSecurityEnabledOnly:(NSString *) securityEnabledOnly callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;
- (void)getMemberObjectsWithSecurityEnabledOnly:(BOOL)securityEnabledOnly callback:(void (^)(NSMutableArray *string, MSOrcError *error))callback;
- (void)getMemberObjectsRawWithSecurityEnabledOnly:(NSString *) securityEnabledOnly callback:(void(^)(NSString *returnValue, MSOrcError *error))callback;

@end