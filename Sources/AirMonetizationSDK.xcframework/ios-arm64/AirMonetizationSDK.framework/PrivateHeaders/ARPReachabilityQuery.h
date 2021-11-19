//
//  ARPReachabilityQuery.h
//  APSDK
//
//  Created by Andrii Alexieiev on 8/23/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SystemConfiguration/SystemConfiguration.h>

@interface ARPReachabilityQuery : NSObject {
@private
    SCNetworkReachabilityRef _reachabilityRef;
    CFMutableArrayRef _runLoops;
    NSString *_hostNameOrAddress;
}

@property (nonatomic) SCNetworkReachabilityRef reachabilityRef;
@property (nonatomic, retain) NSString *hostNameOrAddress;
@property (nonatomic) CFMutableArrayRef runLoops;

- (void)scheduleOnRunLoop:(NSRunLoop *)inRunLoop;

@end
