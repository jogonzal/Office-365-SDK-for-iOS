/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import <Foundation/Foundation.h>

#import "files_services.h"
#import "outlook_services.h"
#import "discovery_services.h"
#import "onenote_services.h"
#import "unified_services.h"

@interface BaseController : NSObject

- (void)getMailClient:(void(^)(MSOutlookClient *c))callback;
- (void)getSharePointClient:(void (^)(MSSharePointClient *c))callback;
- (void)getDiscoveryClient:(void (^)(MSDiscoveryClient *c))callback;
- (void)getMSGraphClient:(void (^) (MSGraphClient* c))callback;
- (void)getOneNoteClient:(UIViewController *)viewController :(void(^)(MSOneNoteClient *c))callback;
- (MSOneNoteClient *)getOneNoteClient:(BOOL)authenticated;

@end
