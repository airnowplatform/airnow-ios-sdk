//
//  ARPVASTAdCompanionAds.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/18/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <ARPVASTAdCompanion.h>

struct ARPVASTAdCompanionAdsKeys {
    __unsafe_unretained NSString * const requiredKey;
    __unsafe_unretained NSString * const companionAdsKey;
};

extern const struct ARPVASTAdCompanionAdsKeys CompanionAdsKeys;

@interface ARPVASTAdCompanionAds : NSObject

@property (strong, nonatomic) NSString *required;
@property (strong, nonatomic) NSArray <ARPVASTAdCompanion *> *companions;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
