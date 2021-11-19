//
//  ARPVASTAdPricing.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdPricingKeys {
    __unsafe_unretained NSString * const modelKey;
    __unsafe_unretained NSString * const currencyKey;
    __unsafe_unretained NSString * const contentKey;
};

extern const struct ARPVASTAdPricingKeys PricingKeys;

@interface ARPVASTAdPricing : NSObject

@property (strong, nonatomic) NSString *model;
@property (strong, nonatomic) NSString *currency;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
