//
//  PEAPIClient.h
//  PurchEaseKit
//
//  Created by Ludovic Galabru on 3/13/12.
//  Copyright (c) 2012 Skerou. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PEAPIClient : NSObject

/**
 Used by PurchEase's server to identify the application.
 */
@property(nonatomic, strong) NSString *clientId;
@property(nonatomic, strong) NSString *clientSecret;

/**
 Used in case of invalidation of the user access token.
 */
@property(nonatomic, strong) NSString *redirectUrl;

/**
 Retrieve sharedClient
 
 @return The shared API client instance.
 */
+ (PEAPIClient *)sharedClient;

/**
 Authenticate user and asynchronously retrieve an API access token
 
 @param externalId The identifier used by the host application's server to identify a user. The same id will be used by PurchEase's server to communicate about this user
 
 @param email The user email
 
 @param successBlock The code block that will be executed when the call succeed
 
 @param errorBlock The code block that will be executed in case of failure
 */
- (void)authorizeUserIdentifiedById:(NSString *)externalId withEmail:(NSString *)email successBlock:(void (^) (void))successBlock errorBlock:(void (^) (NSError *error))errorBlock;

/**
 Disconnect current user, which erase any cached data and remove the access token currently in use.
 */
- (void)disconnect;

@end
