//
//  ARPVASTAdInteractiveCreativeFile.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct VASTAdInteractiveCreativeFileKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
    __unsafe_unretained NSString * const typeKey;
};

extern const struct VASTAdInteractiveCreativeFileKeys ARPVASTAdInteractiveCreativeFileKeys;

@interface ARPVASTAdInteractiveCreativeFile : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *apiFramework;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
