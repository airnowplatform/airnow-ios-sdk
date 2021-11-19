//
//  ARPVASTAdMediaFile.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdMediaFileKeys {
    __unsafe_unretained NSString * const contentKey;
    __unsafe_unretained NSString * const deliveryKey;
    __unsafe_unretained NSString * const typeKey;
    __unsafe_unretained NSString * const widthKey;
    __unsafe_unretained NSString * const heightKey;
    __unsafe_unretained NSString * const codecKey;
    __unsafe_unretained NSString * const identifierKey;
    __unsafe_unretained NSString * const bitrateKey;
    __unsafe_unretained NSString * const minBitrateKey;
    __unsafe_unretained NSString * const maxBitrateKey;
    __unsafe_unretained NSString * const scalableKey;
    __unsafe_unretained NSString * const maintainAspectRatioKey;
    __unsafe_unretained NSString * const apiFrameworkKey;
};

extern const struct ARPVASTAdMediaFileKeys MediaFileKeys;

@interface ARPVASTAdMediaFile : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) NSString *delivery;
@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *width;
@property (strong, nonatomic) NSString *height;
@property (strong, nonatomic) NSString *codec;
@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) NSString *bitrate;
@property (strong, nonatomic) NSString *minBitrate;
@property (strong, nonatomic) NSString *maxBitrate;
@property (strong, nonatomic) NSString *scalable;
@property (strong, nonatomic) NSString *maintainAspectRatio;
@property (strong, nonatomic) NSString *apiFramework;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
