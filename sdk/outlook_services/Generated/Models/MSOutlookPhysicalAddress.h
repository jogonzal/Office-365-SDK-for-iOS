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

#import <Foundation/Foundation.h>
#import "MSOutlookProtocols.h"


/**
* The header for type PhysicalAddress.
*/

@interface MSOutlookPhysicalAddress : NSObject

@property (retain, nonatomic, readonly) NSString *odataType;
@property (retain, nonatomic, readwrite, getter=street, setter=setStreet:) NSString *Street;
@property (retain, nonatomic, readwrite, getter=city, setter=setCity:) NSString *City;
@property (retain, nonatomic, readwrite, getter=state, setter=setState:) NSString *State;
@property (retain, nonatomic, readwrite, getter=countryOrRegion, setter=setCountryOrRegion:) NSString *CountryOrRegion;
@property (retain, nonatomic, readwrite, getter=postalCode, setter=setPostalCode:) NSString *PostalCode;

@end