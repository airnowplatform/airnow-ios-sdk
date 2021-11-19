//
//  ARPVASTAdImpression.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdImpressionKeys {
    __unsafe_unretained NSString * const identificatorKey;
    __unsafe_unretained NSString * const impressionURIKey;
};

extern const struct ARPVASTAdImpressionKeys ImpressionKeys;

@interface ARPVASTAdImpression : NSObject

@property (strong, nonatomic) NSString *identificator;
@property (strong, nonatomic) NSString *impressionURI;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
