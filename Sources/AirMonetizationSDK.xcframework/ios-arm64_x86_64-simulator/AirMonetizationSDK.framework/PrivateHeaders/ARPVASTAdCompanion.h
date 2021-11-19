//
//  ARPVASTAdCompanion.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <ARPVASTAdClickTracking.h>
#import <ARPVASTAdParameters.h>
#import <ARPVASTAdStaticResource.h>
#import <ARPVASTTrackingEventsContainer.h>

struct ARPVASTAdCompanionAdKeys {
    __unsafe_unretained NSString * const staticResourceKey;
    __unsafe_unretained NSString * const iFrameResourceKey;
    __unsafe_unretained NSString * const htmlResourceKey;
    __unsafe_unretained NSString * const adParametersKey;
    __unsafe_unretained NSString * const companionClickThroughKey;
    __unsafe_unretained NSString * const companionClickTrackingKey;
    __unsafe_unretained NSString * const altTextKey;
    __unsafe_unretained NSString * const trackingEventsKey;
    __unsafe_unretained NSString * const widthKey;
    __unsafe_unretained NSString * const heightKey;
    __unsafe_unretained NSString * const identificatorKey;
    __unsafe_unretained NSString * const assetWidthKey;
    __unsafe_unretained NSString * const assetHeightKey;
    __unsafe_unretained NSString * const expandedWidthKey;
    __unsafe_unretained NSString * const expandedHeightKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
    __unsafe_unretained NSString * const adslotIDKey;
    __unsafe_unretained NSString * const pxratioKey;
};

extern const struct ARPVASTAdCompanionAdKeys CompanionKeys;

@interface ARPVASTAdCompanion : ARPVASTTrackingEventsContainer 

@property (strong, nonatomic) ARPVASTAdStaticResource *staticResource;
@property (strong, nonatomic) ARPVASTAdStaticResource *iFrameResource;
@property (strong, nonatomic) ARPVASTAdStaticResource *htmlResource;
@property (strong, nonatomic) ARPVASTAdParameters *adParameters;
@property (strong, nonatomic) ARPVASTAdClickTracking *companionClickThrough;
@property (strong, nonatomic) ARPVASTAdClickTracking *companionClickTracking;

@property (strong, nonatomic) NSString *altText;
@property (strong, nonatomic) NSString *width;
@property (strong, nonatomic) NSString *heihgt;
@property (strong, nonatomic) NSString *identificator;
@property (strong, nonatomic) NSString *assetWidth;
@property (strong, nonatomic) NSString *assetHeight;
@property (strong, nonatomic) NSString *expandedWidth;
@property (strong, nonatomic) NSString *expandedHeight;
@property (strong, nonatomic) NSString *apiFramework;
@property (strong, nonatomic) NSString *adslotID;
@property (strong, nonatomic) NSString *pxratio;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
