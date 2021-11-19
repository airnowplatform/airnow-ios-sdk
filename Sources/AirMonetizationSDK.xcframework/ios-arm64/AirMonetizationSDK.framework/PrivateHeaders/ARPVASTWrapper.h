//
//  ARPVASTWrapper.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdContent.h"

struct WrapperKeys {
    __unsafe_unretained NSString * const adTagURIKey;
    __unsafe_unretained NSString * const allowMultipleAdsKey;
    __unsafe_unretained NSString * const fallbackOnNoAdKey;
    __unsafe_unretained NSString * const followAdditionalWrappersKey;
};

extern const struct WrapperKeys ARPVASTAdWrapperKeys;

@interface ARPVASTWrapper : ARPVASTAdContent

@property (nonatomic) BOOL followAdditionalWrappers;
@property (nonatomic) BOOL allowMultipleAds;
@property (nonatomic) BOOL fallbackOnNoAd;

@property (strong, nonatomic) NSString *adTagURI;

@end
