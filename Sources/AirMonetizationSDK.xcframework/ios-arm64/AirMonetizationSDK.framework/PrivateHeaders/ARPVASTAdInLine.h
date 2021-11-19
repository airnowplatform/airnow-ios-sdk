//
//  ARPVASTAdInLine.h
//  APSDK
//
//  Created by Andrii Alexieiev on 6/13/18.
//  Copyright © 2018 AirPush. All rights reserved.
//

#import "ARPVASTAdContent.h"

@interface ARPVASTAdInLine : ARPVASTAdContent

- (NSArray <ARPVASTAdCreative *> *)getInLineVideoCreatives;
- (ARPVASTAdCreative *)getInLineEndcardCreative;
    
@end
