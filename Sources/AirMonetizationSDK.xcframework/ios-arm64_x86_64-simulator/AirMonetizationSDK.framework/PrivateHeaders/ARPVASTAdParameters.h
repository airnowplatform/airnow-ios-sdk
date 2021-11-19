//
//  ARPVASTAdParameters.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <ARPVASTVideoParameters.h>

struct ARPVASTAdParameterKeys {
    __unsafe_unretained NSString * const videoKey;
    __unsafe_unretained NSString * const xmlEncodedKey;
};

extern const struct ARPVASTAdParameterKeys AdParameterKeys;

@interface ARPVASTAdParameters : NSObject

@property (strong, nonatomic) NSString *content;
@property (strong, nonatomic) ARPVASTVideoParameters *videoParameters;

@property (nonatomic) BOOL isXMLEncoded;
@property (nonatomic) BOOL isGETRequestParameters;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
