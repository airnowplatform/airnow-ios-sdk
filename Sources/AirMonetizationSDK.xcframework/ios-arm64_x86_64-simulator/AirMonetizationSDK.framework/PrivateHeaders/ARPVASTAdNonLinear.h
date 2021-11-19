//
//  ARPVASTAdNonLinear.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <ARPVASTAdStaticResource.h>
#import <ARPVASTAdParameters.h>
#import <ARPVASTAdClickTracking.h>

struct ARPVASTAdNonLinearKeys {
    __unsafe_unretained NSString * const staticResourceKey;
    __unsafe_unretained NSString * const iFrameResourceKey;
    __unsafe_unretained NSString * const htmlResourceKey;
    __unsafe_unretained NSString * const adParametersKey;
    __unsafe_unretained NSString * const nonLinearClickThroughKey;
    __unsafe_unretained NSString * const nonLinearClickTrackingKey;
};

extern const struct ARPVASTAdNonLinearKeys NonLinearKeys;

@interface ARPVASTAdNonLinear : NSObject

@property (strong, nonatomic) ARPVASTAdStaticResource *staticResource;
@property (strong, nonatomic) ARPVASTAdStaticResource *iFrameResource;
@property (strong, nonatomic) ARPVASTAdStaticResource *htmlResource;
@property (strong, nonatomic) ARPVASTAdParameters *adParameters;
@property (strong, nonatomic) ARPVASTAdClickTracking *nonLinearClickThrough;
@property (strong, nonatomic) ARPVASTAdClickTracking *nonLinearclickTracking;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
