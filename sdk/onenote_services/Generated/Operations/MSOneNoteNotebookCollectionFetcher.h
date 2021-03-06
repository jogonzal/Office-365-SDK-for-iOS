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

@class MSOneNoteNotebookFetcher;
@class MSOneNoteNotebookCollectionFetcher;

#import <core/core.h>
#import "MSOneNoteModels.h"

/**
* The header for type MSOneNoteNotebookCollectionFetcher.
*/

@protocol MSOneNoteNotebookCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOneNoteNotebook> *notebooks, MSOrcError *error))callback;

- (MSOneNoteNotebookCollectionFetcher *)select:(NSString *)params;
- (MSOneNoteNotebookCollectionFetcher *)filter:(NSString *)params;
- (MSOneNoteNotebookCollectionFetcher *)search:(NSString *)params;
- (MSOneNoteNotebookCollectionFetcher *)top:(int)value;
- (MSOneNoteNotebookCollectionFetcher *)skip:(int)value;
- (MSOneNoteNotebookCollectionFetcher *)expand:(NSString *)value;
- (MSOneNoteNotebookCollectionFetcher *)orderBy:(NSString *)params;
- (MSOneNoteNotebookCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteNotebookCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOneNoteNotebookFetcher *)getById:(NSString *)Id;
- (void)add:(MSOneNoteNotebook *)entity callback:(void (^)(MSOneNoteNotebook *notebook, MSOrcError *error))callback;

@end

@interface MSOneNoteNotebookCollectionFetcher : MSOrcCollectionFetcher<MSOneNoteNotebookCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end