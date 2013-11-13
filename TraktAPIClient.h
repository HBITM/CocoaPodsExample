//
//  TraktAPIClient.h
//  CocoaPodsExample
//
//  Created by Barrington Haynes on 13/11/2013.
//  Copyright (c) 2013 HBITM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFHTTPClient.h>

extern NSString * const kTraktAPIKey;
extern NSString * const kTraktBaseURLString;

@interface TraktAPIClient : AFHTTPClient

+(TraktAPIClient *)sharedClient;

@end