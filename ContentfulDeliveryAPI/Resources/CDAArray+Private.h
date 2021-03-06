//
//  CDAArray+Private.h
//  ContentfulSDK
//
//  Created by Boris Bügling on 04/03/14.
//
//

#import "CDAArray.h"

@interface CDAArray ()

@property (nonatomic, readonly) NSURL* nextPageUrl;
@property (nonatomic, readonly) NSURL* nextSyncUrl;
@property (nonatomic) NSDictionary* query;

-(instancetype)initWithItems:(NSArray*)items client:(CDAClient*)client;

@end
