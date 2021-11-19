//
//  ARPVASTAdTrackingEvent.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/19/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdTrackingEventKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const eventKey;
    __unsafe_unretained NSString * const offsetKey;
};

extern const struct ARPVASTAdTrackingEventKeys TrackingEventKeys;

@interface ARPVASTAdTrackingEvent : NSObject

@property (strong, nonatomic) NSString *event;
@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSString *offset;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
