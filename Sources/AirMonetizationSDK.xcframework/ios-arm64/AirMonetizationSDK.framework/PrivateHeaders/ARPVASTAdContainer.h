//
//  ARPVASTAdContainer.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAd.h"

#import "ARPVASTAdError.h"

struct ARPVASTAdContainerKeys {
    __unsafe_unretained NSString * const adsKey;
    __unsafe_unretained NSString * const errorKey;
};

extern const struct ARPVASTAdContainerKeys VASTAdContainerKeys;

@interface ARPVASTAdContainer : NSObject

@property (strong, nonatomic) NSArray <ARPVASTAd *> *ads;
@property (strong, nonatomic) ARPVASTAdError *error;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
