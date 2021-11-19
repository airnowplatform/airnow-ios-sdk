//
//  ARPVASTAdStaticResource.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdStaticResourceKeys {
    __unsafe_unretained NSString * const creativeTypeKey;
    __unsafe_unretained NSString * const contentKey;
};

extern const struct ARPVASTAdStaticResourceKeys StaticResourceKeys;

@interface ARPVASTAdStaticResource : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSString *creativeType;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
