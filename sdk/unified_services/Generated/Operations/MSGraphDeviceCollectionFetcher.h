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

@class MSGraphDeviceFetcher;
@class MSGraphDeviceCollectionFetcher;

#import <core/core.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphDeviceCollectionFetcher.
*/

@protocol MSGraphDeviceCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSGraphDevice> *devices, MSOrcError *error))callback;

- (MSGraphDeviceCollectionFetcher *)select:(NSString *)params;
- (MSGraphDeviceCollectionFetcher *)filter:(NSString *)params;
- (MSGraphDeviceCollectionFetcher *)search:(NSString *)params;
- (MSGraphDeviceCollectionFetcher *)top:(int)value;
- (MSGraphDeviceCollectionFetcher *)skip:(int)value;
- (MSGraphDeviceCollectionFetcher *)expand:(NSString *)value;
- (MSGraphDeviceCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphDeviceCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphDeviceCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSGraphDeviceFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphDevice *)entity callback:(void (^)(MSGraphDevice *device, MSOrcError *error))callback;

@end

@interface MSGraphDeviceCollectionFetcher : MSOrcCollectionFetcher<MSGraphDeviceCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end