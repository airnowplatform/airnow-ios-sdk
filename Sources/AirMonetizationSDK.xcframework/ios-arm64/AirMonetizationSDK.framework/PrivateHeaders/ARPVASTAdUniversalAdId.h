//
//  ARPVASTADUniversalAdId.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdUniversalAdIdKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const idValueKey;
    __unsafe_unretained NSString * const idRegistryKey;
};

extern const struct ARPVASTAdUniversalAdIdKeys UniversalAdIdKeys;

@interface ARPVASTAdUniversalAdId : NSObject

@property (strong, nonatomic) NSString *idRegistry;
@property (strong, nonatomic) NSString *idValue;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
