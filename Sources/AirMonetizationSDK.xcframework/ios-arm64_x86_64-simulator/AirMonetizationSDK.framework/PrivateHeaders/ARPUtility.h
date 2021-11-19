//
//  ARPUtility.h
//  APSDK
//
//  Created by Andrii Alexieiev on 3/23/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ARPUtility : NSObject

+ (void)sharedApplicationOpenUrlString:(NSString *)urlString;

+ (NSString *)getEncodedUrlString:(NSString *)string;
+ (NSURL *)urlWithString: (NSString *) string;
+ (NSMutableURLRequest *)getEncodedRequest:(NSString *)url;

+ (int)dpToPxRounded: (int) px;

@end
