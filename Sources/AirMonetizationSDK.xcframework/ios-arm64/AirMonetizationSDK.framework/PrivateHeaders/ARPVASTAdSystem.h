//
//  ARPVASTAdSystem.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdSystemKeys {
    __unsafe_unretained NSString * const versionKey;
    __unsafe_unretained NSString * const contentKey;
};

extern const struct ARPVASTAdSystemKeys AdSystemKeys;

@interface ARPVASTAdSystem : NSObject

@property (strong, nonatomic) NSString *version;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
