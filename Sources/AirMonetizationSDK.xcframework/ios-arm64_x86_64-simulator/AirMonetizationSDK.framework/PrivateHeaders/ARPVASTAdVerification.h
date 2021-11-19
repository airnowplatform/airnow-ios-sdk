//
//  ARPVASTAdVerification.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/18/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ARPVASTAdVerificationResource.h>
#import <ARPVASTAdViewableImpression.h>

struct ARPVASTAdVerificationKeys {
    __unsafe_unretained NSString * const javaScriptResourceKey;
    __unsafe_unretained NSString * const flashResourceKey;
    __unsafe_unretained NSString * const viewableImpressionKey;
    __unsafe_unretained NSString * const vendorKey;
};

extern const struct ARPVASTAdVerificationKeys VerificationKeys;

@interface ARPVASTAdVerification : NSObject

@property (strong, nonatomic) ARPVASTAdVerificationResource *javaScriptResource;
@property (strong, nonatomic) ARPVASTAdVerificationResource *flashResource;
@property (strong, nonatomic) NSArray <ARPVASTAdViewableImpression *> *viewableImpression;
@property (strong, nonatomic) NSString *vendor;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
