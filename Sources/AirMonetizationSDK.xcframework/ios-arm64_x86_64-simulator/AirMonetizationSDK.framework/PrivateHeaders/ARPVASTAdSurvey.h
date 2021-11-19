//
//  ARPVASTAdSurvey.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct ARPVASTAdSurveyKeys {
    __unsafe_unretained NSString * const typeKey;
};

extern const struct ARPVASTAdSurveyKeys SurveyKeys;

@interface ARPVASTAdSurvey : NSObject

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *content;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
