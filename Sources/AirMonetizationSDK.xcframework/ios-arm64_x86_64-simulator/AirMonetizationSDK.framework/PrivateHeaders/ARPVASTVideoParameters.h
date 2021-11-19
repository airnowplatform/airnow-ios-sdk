//
//  ARPVASTVideoParameters.h
//  AP_SDK
//
//  Created by Andrii Alexieiev on 6/21/18.
//  Copyright © 2018 Andrii Alexieiev. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdParametersModelKeys {
    __unsafe_unretained NSString * const backgroundImageUrlStringKey;
    __unsafe_unretained NSString * const contentBarKey;
    __unsafe_unretained NSString * const enableiFrameKey;
    __unsafe_unretained NSString * const isTagEndcardKey;
    __unsafe_unretained NSString * const isTagContentBarKey;
    __unsafe_unretained NSString * const guidKey;
    __unsafe_unretained NSString * const ciconKey;
    __unsafe_unretained NSString * const refreshTimeKey;
    __unsafe_unretained NSString * const closeRefreshTimeKey;
    __unsafe_unretained NSString * const clickRefreshTimeKey;
    __unsafe_unretained NSString * const trackingUrlStringKey;
    __unsafe_unretained NSString * const redirectFlagKey;
    __unsafe_unretained NSString * const adParametersKey;
};

extern const struct ARPVASTAdParametersModelKeys AdParametersModelKeys;

@interface ARPVASTVideoParameters : NSObject

@property (strong, nonatomic) NSString *backgroundImageUrlString;
@property (strong, nonatomic) NSString *guid;
@property (strong, nonatomic) NSString *cicon;
@property (strong, nonatomic) NSString *refreshTime;
@property (strong, nonatomic) NSString *closeRefreshTime;
@property (strong, nonatomic) NSString *clickRefreshTime;
@property (strong, nonatomic) NSString *trackingUrlString;
@property (strong, nonatomic) NSString *adParameters;

@property (nonatomic) int redirectFlag;

@property (nonatomic) int enableiFrame;
@property (nonatomic) int contentBar;
@property (nonatomic) int isTagEndcard;
@property (nonatomic) int isTagContentbar;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
