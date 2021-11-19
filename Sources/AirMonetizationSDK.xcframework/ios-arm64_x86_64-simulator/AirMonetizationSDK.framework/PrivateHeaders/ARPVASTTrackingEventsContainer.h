//
//  ARPVASTTrackingEventsContainer.h
//  AP_SDK
//
//  Created by Andrii Alexieiev on 3/26/19.
//  Copyright © 2019 AirPush. All rights reserved.
//

#import <ARPVASTAdTrackingEvent.h>

@interface ARPVASTTrackingEventsContainer : NSObject

@property (strong, nonatomic) NSArray <ARPVASTAdTrackingEvent *> *trackingEvents;

- (NSArray <ARPVASTAdTrackingEvent *> *)trackingValuesForEvent: (NSString *) event;

@end

