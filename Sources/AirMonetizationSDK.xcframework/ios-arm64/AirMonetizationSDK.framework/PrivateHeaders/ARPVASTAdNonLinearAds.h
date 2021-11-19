//
//  ARPVASTAdNonLinearAds.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <ARPVASTAdNonLinear.h>
#import <ARPVASTAdTrackingEvent.h>

struct ARPVASTAdNonLinearAdsKeys {
    __unsafe_unretained NSString * const nonLinearKey;
    __unsafe_unretained NSString * const trackingEventsKey;
};

extern const struct ARPVASTAdNonLinearAdsKeys NonLinearAdsKeys;

@interface ARPVASTAdNonLinearAds : NSObject

@property (strong, nonatomic) NSArray <ARPVASTAdNonLinear *> *nonLinear;
@property (strong, nonatomic) NSArray <ARPVASTAdTrackingEvent *> *trackingEvents;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
