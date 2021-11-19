//
//  ARPVASTAdViewableImpression.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdViewableImpressionKeys {
    __unsafe_unretained NSString * const idKey;
    __unsafe_unretained NSString * const viewableURIKey;
    __unsafe_unretained NSString * const notViewableURIKey;
    __unsafe_unretained NSString * const viewUndeterminedURIKey;
};

extern const struct ARPVASTAdViewableImpressionKeys ViewableImpressionKeys;

@interface ARPVASTAdViewableImpression : NSObject

@property (strong, nonatomic) NSString *identificator;
@property (strong, nonatomic) NSString *viewableURI;
@property (strong, nonatomic) NSString *notViewableURI;
@property (strong, nonatomic) NSString *viewUndeterminedURI;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
