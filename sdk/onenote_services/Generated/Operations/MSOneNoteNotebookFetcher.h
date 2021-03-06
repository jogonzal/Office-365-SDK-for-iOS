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

@class MSOneNoteSectionFetcher;
@class MSOneNoteSectionCollectionFetcher;
@class MSOneNoteSectionGroupFetcher;
@class MSOneNoteSectionGroupCollectionFetcher;
@class MSOneNoteNotebookOperations;
@class MSOneNoteNotebookFetcher;

#import <core/core.h>
#import "MSOneNoteModels.h"

/**
* The header for type MSOneNoteNotebookFetcher.
*/

@protocol MSOneNoteNotebookFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSOneNoteNotebook *notebook, MSOrcError *error))callback;
- (MSOneNoteNotebookFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteNotebookFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteNotebookFetcher *)select:(NSString *)params;
- (MSOneNoteNotebookFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSOneNoteNotebookOperations *operations;

@end

@interface MSOneNoteNotebookFetcher : MSOrcEntityFetcher<MSOneNoteNotebookFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSOneNoteNotebook *)notebook callback:(void(^)(MSOneNoteNotebook *notebook, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;

@property (retain, nonatomic, readonly, getter=sections) MSOneNoteSectionCollectionFetcher *sections;

- (MSOneNoteSectionFetcher *)getSectionsById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=sectionGroups) MSOneNoteSectionGroupCollectionFetcher *sectionGroups;

- (MSOneNoteSectionGroupFetcher *)getSectionGroupsById:(NSString*)id;


@end