//
//  ARPVASTAdCreative.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdLinear.h"
#import "ARPVASTAdNonLinearAds.h"
#import "ARPVASTAdCompanionAds.h"
#import "ARPVASTAdExtention.h"
#import "ARPVASTAdUniversalAdId.h"

struct ARPVASTAdCreativeKeys {
    __unsafe_unretained NSString * const universalAdIdKey;
    __unsafe_unretained NSString * const creativeExtensionsKey;
    __unsafe_unretained NSString * const linearKey;
    __unsafe_unretained NSString * const nonLinearAdsKey;
    __unsafe_unretained NSString * const companionAdsKey;
    __unsafe_unretained NSString * const identificatorKey;
    __unsafe_unretained NSString * const adIdKey;
    __unsafe_unretained NSString * const sequenceKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
};

extern const struct ARPVASTAdCreativeKeys AdCreativeKeys ;

@interface ARPVASTAdCreative : NSObject

@property (strong, nonatomic) ARPVASTAdUniversalAdId *universalAdId;
@property (strong, nonatomic) NSString *identificator;
@property (strong, nonatomic) NSString *adId;
@property (strong, nonatomic) NSString *sequence;
@property (strong, nonatomic) NSString *apiFramework;

@property (strong, nonatomic) ARPVASTAdLinear *linear;

@property (strong, nonatomic) ARPVASTAdNonLinearAds *nonLinearAds;
@property (strong, nonatomic) ARPVASTAdCompanionAds *companionAds;
@property (strong, nonatomic) NSArray <ARPVASTAdExtention *> *creativeExtensions;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
