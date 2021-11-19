//
//  ARPVASTAd.h
//  APSDK
//
//  Created by Andrii Alexieiev on 7/5/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdInLine.h"
#import "ARPVASTWrapper.h"

struct ARPVASTAdKeys {
    __unsafe_unretained NSString * const identificatorKey;
    __unsafe_unretained NSString * const inLineKey;
    __unsafe_unretained NSString * const wrapperKey;
    __unsafe_unretained NSString * const secuenceKey;
    __unsafe_unretained NSString * const conditionalAdKey;
};

extern const struct ARPVASTAdKeys VASTAdKeys;

@interface ARPVASTAd : NSObject

@property (strong, nonatomic) NSString *identificator;
@property (nonatomic) NSInteger sequence;
@property (nonatomic) BOOL conditionalAd;

@property (strong, nonatomic) ARPVASTAdInLine *inLine;
@property (strong, nonatomic) ARPVASTWrapper *wrapper;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

- (ARPVASTAdCreative *)getVideoCreative;

@end
