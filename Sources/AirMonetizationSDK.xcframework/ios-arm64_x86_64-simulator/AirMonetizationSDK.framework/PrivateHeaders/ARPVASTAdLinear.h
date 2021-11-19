//
//  ARPVASTAdLinear.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdMediaFile.h"
#import "ARPVASTAdParameters.h"
#import "ARPVASTAdIcon.h"
#import "ARPVASTAdVideoClicks.h"
#import "ARPVASTTrackingEventsContainer.h"

struct ARPVASTAdLinearKeys {
    __unsafe_unretained NSString * const durationKey;
    __unsafe_unretained NSString * const mediaFilesKey;
    __unsafe_unretained NSString * const adParametersKey;
    __unsafe_unretained NSString * const trackingEventsKey;
    __unsafe_unretained NSString * const videoClicksKey;
    __unsafe_unretained NSString * const iconsKey;
    __unsafe_unretained NSString * const skipoffsetKey;
};

extern const struct ARPVASTAdLinearKeys LinearKeys;

@interface ARPVASTAdLinear : ARPVASTTrackingEventsContainer

@property (strong, nonatomic) NSString *duration;
@property (strong, nonatomic) NSString *skipoffset;

@property (strong, nonatomic) ARPVASTAdParameters *adParameters;

@property (strong, nonatomic) ARPVASTAdVideoClicks *videoClicks;

@property (strong, nonatomic) NSArray <ARPVASTAdMediaFile *> *mediaFiles;
@property (strong, nonatomic) NSArray <ARPVASTAdIcon *> *icons;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

- (ARPVASTAdMediaFile *)videoMediaFile;

@end
