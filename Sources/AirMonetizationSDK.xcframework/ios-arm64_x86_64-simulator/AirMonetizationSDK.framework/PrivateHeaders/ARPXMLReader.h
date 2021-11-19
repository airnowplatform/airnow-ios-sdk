//
//  ARPXMLReader.h
//  APSDKDev
//
//  Created by Andrii Alexieiev on 1/23/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ARPXMLReader : NSObject {
    NSMutableArray *dictionaryStack;
    NSMutableString *textInProgress;
}

+ (NSDictionary *)dictionaryForXMLData: (NSData *) data;

+ (NSDictionary *)dictionaryForXMLString: (NSString *) string
                                   error: (NSError **) error;

@end
