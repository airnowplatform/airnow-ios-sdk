//
//  ARPVASTAdContent.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdSystem.h"
#import "ARPVASTAdImpression.h"
#import "ARPVASTAdCreative.h"
#import "ARPVASTAdCategory.h"
#import "ARPVASTAdPricing.h"
#import "ARPVASTAdSurvey.h"
#import "ARPVASTAdViewableImpression.h"
#import "ARPVASTAdVerification.h"
#import "ARPVASTAdExtention.h"
#import "ARPVASTAdError.h"

struct ARPVASTAdContentKeys {
    __unsafe_unretained NSString * const adSystemKey;
    __unsafe_unretained NSString * const adTitleKey;
    __unsafe_unretained NSString * const impressionKey;
    __unsafe_unretained NSString * const categoryKey;
    __unsafe_unretained NSString * const adDescriptionKey;
    __unsafe_unretained NSString * const advertiserKey;
    __unsafe_unretained NSString * const pricingKey;
    __unsafe_unretained NSString * const surveyKey;
    __unsafe_unretained NSString * const errorKey;
    __unsafe_unretained NSString * const extensionsKey;
    __unsafe_unretained NSString * const viewableImpressionKey;
    __unsafe_unretained NSString * const adVerificationKey;
    __unsafe_unretained NSString * const creativesKey;
    __unsafe_unretained NSString * const inLineKey;
};

extern const struct ARPVASTAdContentKeys AdContentKeys;

@interface ARPVASTAdContent : NSObject

@property (strong, nonatomic) ARPVASTAdSystem *adSystem;
@property (strong, nonatomic) ARPVASTAdPricing *pricing;
@property (strong, nonatomic) ARPVASTAdSurvey *survey;
@property (strong, nonatomic) ARPVASTAdViewableImpression *viewableImpression;
@property (strong, nonatomic) ARPVASTAdError *error;

@property (strong, nonatomic) NSString *adTitle;
@property (strong, nonatomic) NSString *adDescription;
@property (strong, nonatomic) NSString *advertiser;

@property (strong, nonatomic) NSArray <ARPVASTAdImpression *> *impressions;
@property (strong, nonatomic) NSArray <ARPVASTAdCreative *> *creatives;
@property (strong, nonatomic) NSArray <ARPVASTAdExtention *> *extensions;
@property (strong, nonatomic) NSArray <ARPVASTAdCategory *> *categories;
@property (strong, nonatomic) NSArray <ARPVASTAdVerification *> *adVerifications;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
