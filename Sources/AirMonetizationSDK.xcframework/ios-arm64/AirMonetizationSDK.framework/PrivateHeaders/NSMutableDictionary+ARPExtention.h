//
//  NSMutableDictionary+ARPExtention.h
//  APSDK
//
//  Created by Andrii Alexieiev on 4/5/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (ARPExtention)

- (void)addEntriesFromObject: (id) object;

- (void)cleanUpFromVASTXML;

- (NSMutableDictionary *)formatedResponseDictionary;

@end
