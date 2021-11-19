//
//  ARPVASTAdCategory.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdCategoryKeys {
    __unsafe_unretained NSString * const authorityKey;
    __unsafe_unretained NSString * const contentKey;
};

extern const struct ARPVASTAdCategoryKeys CategoryKeys;

@interface ARPVASTAdCategory : NSObject

@property (strong, nonatomic) NSString *authority;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
