//
//  ARPVASTAdIcon.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPVASTAdStaticResource.h"
#import "ARPVASTAdIconClicks.h"

struct ARPVASTAdIconKeys {
    __unsafe_unretained NSString * const staticResourceKey;
    __unsafe_unretained NSString * const iFrameResourceKey;
    __unsafe_unretained NSString * const htmlResourceKey;
    __unsafe_unretained NSString * const iconClicksKey;
    __unsafe_unretained NSString * const iconViewTrackingKey;
    __unsafe_unretained NSString * const programKey;
    __unsafe_unretained NSString * const widthKey;
    __unsafe_unretained NSString * const heihgtKey;
    __unsafe_unretained NSString * const xPositionKey;
    __unsafe_unretained NSString * const yPositionKey;
    __unsafe_unretained NSString * const durationKey;
    __unsafe_unretained NSString * const offsetKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
    __unsafe_unretained NSString * const pxratioKey;
};

extern const struct ARPVASTAdIconKeys IconKeys;

@interface ARPVASTAdIcon : NSObject

@property (strong, nonatomic) ARPVASTAdStaticResource *staticResource;
@property (strong, nonatomic) ARPVASTAdIconClicks *iconClicks;
@property (strong, nonatomic) NSString *iconViewTracking;

@property (strong, nonatomic) NSString *program;
@property (strong, nonatomic) NSString *width;
@property (strong, nonatomic) NSString *heihgt;
@property (strong, nonatomic) NSString *xPosition;
@property (strong, nonatomic) NSString *yPosition;
@property (strong, nonatomic) NSString *duration;
@property (strong, nonatomic) NSString *offset;
@property (strong, nonatomic) NSString *apiFramework;
@property (strong, nonatomic) NSString *pxratio;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
