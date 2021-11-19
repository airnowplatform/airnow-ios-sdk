//
//  ARPVASTAdVideoClicks.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARPVASTAdClickTracking.h"

struct ARPVASTAdVideoClicksKeys {
    __unsafe_unretained NSString * const clickThroughKey;
    __unsafe_unretained NSString * const clickTrackingKey;
    __unsafe_unretained NSString * const customClickKey;
};

extern const struct ARPVASTAdVideoClicksKeys VideoClicksKeys;

@interface ARPVASTAdVideoClicks : NSObject

@property (strong, nonatomic) ARPVASTAdClickTracking *clickthrough;
@property (strong, nonatomic) NSArray <ARPVASTAdClickTracking *> *clickTracking;
@property (strong, nonatomic) NSArray <ARPVASTAdClickTracking *> *customClick;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
