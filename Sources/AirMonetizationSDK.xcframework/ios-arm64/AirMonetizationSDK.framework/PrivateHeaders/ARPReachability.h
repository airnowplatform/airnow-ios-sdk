//
//  ARPReachability.h
//  APSDK
//
//  Created by Andrii Alexieiev on 3/23/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ARPReachability;

typedef enum {
    NotReachable = 0,
    ReachableViaCarrierDataNetwork,
    ReachableViaWiFiNetwork
} NetworkStatus;

@interface ARPReachability : NSObject 

@property (nonatomic) BOOL networkStatusNotificationsEnabled;

+ (ARPReachability *)sharedReachability;

- (NetworkStatus)remoteHostStatus;
- (NetworkStatus)internetConnectionStatus;
- (NetworkStatus)localWiFiConnectionStatus;

@end


