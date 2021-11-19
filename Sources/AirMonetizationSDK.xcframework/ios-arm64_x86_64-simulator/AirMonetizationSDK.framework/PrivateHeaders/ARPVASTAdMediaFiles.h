//
//  ARPVASTAdMediaFiles.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/14/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import <Foundation/Foundation.h>

struct Keys {
    __unsafe_unretained NSString * const mediaFilesKey;
    __unsafe_unretained NSString * const mezzanineKey;
    __unsafe_unretained NSString * const interactiveCreativeFileKey;
};

extern const struct Keys ARPVASTAdMediaFilesKeys;

@interface ARPVASTAdMediaFiles : NSObject

@property (strong, nonatomic) NSString *interactiveCreativeFile;
@property (strong, nonatomic) NSString *mezzanine;
@property (strong, nonatomic) NSArray *mediaFiles;

- (instancetype)initWithDictionary: (NSDictionary *) dataDictionary;

@end
