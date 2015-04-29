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

#import "MSDirectoryODataEntities.h"

/**
* The implementation file for type MSDirectoryServicePrincipalCollectionFetcher.
*/

@implementation MSDirectoryServicePrincipalCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent {

    return [super initWithUrl:urlComponent parent:parent asClass:[MSDirectoryServicePrincipal class]];
}

- (NSURLSessionTask *)addServicePrincipal:(MSDirectoryServicePrincipal*)entity callback:(void (^)(MSDirectoryServicePrincipal *servicePrincipal, MSODataException *exception))callback {
	
	return [super addEntity:entity callback:^(id entityAdded, MSODataException *e) {

        callback(entityAdded,e);
    }];
}

- (MSDirectoryServicePrincipalFetcher *)getById:(NSString *)Id {

    return [[MSDirectoryServicePrincipalFetcher alloc] initWithUrl:[[NSString alloc] initWithFormat:@"('%@')" ,Id] parent:self];
}

@end