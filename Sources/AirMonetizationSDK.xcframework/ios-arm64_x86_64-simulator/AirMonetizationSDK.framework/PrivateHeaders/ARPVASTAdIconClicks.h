//
//  ARPVASTAdIconClicks.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdIconClicksKeys {
    __unsafe_unretained NSString * const iconClickThroughKey;
    __unsafe_unretained NSString * const iconClickTrackingKey;
};

extern const struct ARPVASTAdIconClicksKeys IconClicksKeys;

@interface ARPVASTAdIconClicks : NSObject

@property (strong, nonatomic) NSString *iconClickThrough;
@property (strong, nonatomic) NSArray *iconClickTracking;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
