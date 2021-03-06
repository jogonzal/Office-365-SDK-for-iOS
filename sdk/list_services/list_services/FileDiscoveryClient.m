/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "FileDiscoveryClient.h"
#import "DiscoveryInformation.h"
#import "HttpConnection.h"
#import "Constants.h"

@implementation FileDiscoveryClient


- (instancetype)initWithUrl:(NSString *)url credentials:(Credentials *)credentials{
    self =[super initWithUrl:url credentials:credentials];
    return self;
}

- (NSURLSessionDataTask *)getDiscoveryInfo:(void (^)(NSData *data, NSURLResponse *response, NSError *error))callback
{
    HttpConnection *connection = [[HttpConnection alloc] initWithCredentials:self.Credential
                                                                       url: @"https://api.office.com/discovery/me/services"];

    NSString *method = (NSString *)[[Constants alloc] init].Method_Get;
    return [connection execute:method callback:callback];
}

- (NSMutableArray *)parseData:(NSData *)data{
    NSMutableArray *array = [NSMutableArray array];
    //NSError *err;
    
    NSDictionary *jsonResult = [NSJSONSerialization JSONObjectWithData:data
                                                               options: NSJSONReadingMutableContainers
                                                                 error:nil];
    
    NSArray *jsonArray  = [[jsonResult valueForKey:@"d"] valueForKey:@"results"];
    
    for (NSDictionary *value in jsonArray) {
        DiscoveryInformation *information = [[DiscoveryInformation alloc] init];
        [information createFromJson:value];
        
        [array addObject:information];
    }
    
    return array;
}

@end