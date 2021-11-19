//
//  ARPVASTAdError.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/19/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdError {
    __unsafe_unretained NSString * const errorURIKey;
    __unsafe_unretained NSString * const statusKey;
};

extern const struct ARPVASTAdError ErrorKeys;

@interface ARPVASTAdError : NSObject

@property (nonatomic, strong) NSString *errorURI;
@property (nonatomic, strong) NSString *status;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
