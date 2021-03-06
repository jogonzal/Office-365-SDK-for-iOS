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

#import "MSSharePointFetchers.h"

@implementation MSSharePointFolderFetcher

@synthesize operations = _operations;

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent {

    if (self = [super initWithUrl:urlComponent parent:parent asClass:[MSSharePointFolder class]]) {

		_operations = [[MSSharePointFolderOperations alloc] initOperationWithUrl:urlComponent parent:parent];
    }

    return self;
}

- (void)update:(id)entity callback:(void (^)(MSSharePointFolder *folder, MSOrcError *e))callback {

	return [super update:entity callback:callback];
}

- (void)delete:(void (^)(int status, MSOrcError *e))callback {

	return [super deleteWithCallback:callback];
}

- (MSSharePointItemCollectionFetcher *)children {

    return [[MSSharePointItemCollectionFetcher alloc] initWithUrl:@"children" parent:self asClass:[MSSharePointItem class]];
}

- (MSSharePointItemFetcher *)getChildrenById:(NSString *)id {

    return [[[MSSharePointItemCollectionFetcher alloc] initWithUrl:@"children" parent:self asClass:[MSSharePointItem class]] getById:id];
}

@end