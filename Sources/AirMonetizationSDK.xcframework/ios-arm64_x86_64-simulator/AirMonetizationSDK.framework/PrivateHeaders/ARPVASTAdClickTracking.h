//
//  ARPVASTAdClickTracking.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/18/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdClickTrackingKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const identificatorKey;
};

extern const struct ARPVASTAdClickTrackingKeys ClickTrackingKeys;

@interface ARPVASTAdClickTracking : NSObject

@property (strong, nonatomic) NSString *identificator;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
