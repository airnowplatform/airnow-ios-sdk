//
//  ARPVASTAdExtention.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdExtentionKeys {
    __unsafe_unretained NSString * const typeKey;
    __unsafe_unretained NSString * const contentKey;
};

extern const struct ARPVASTAdExtentionKeys ExtentionKeys;

@interface ARPVASTAdExtention : NSObject

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
