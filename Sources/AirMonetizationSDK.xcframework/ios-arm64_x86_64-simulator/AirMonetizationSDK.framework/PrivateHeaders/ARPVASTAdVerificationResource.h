//
//  ARPVASTAdJavascriptResource.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/18/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdResourceKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
};

extern const struct ARPVASTAdResourceKeys ResourceKeys;

@interface ARPVASTAdVerificationResource : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSString *apiFramework;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
