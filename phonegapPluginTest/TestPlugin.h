//
//  TestPlugin.h
//
//  Copyright 2011 Mercenary Limited

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>
#ifdef PHONEGAP_FRAMEWORK
#import <PhoneGap/PGPlugin.h>
#else
#import "PGPlugin.h"
#endif


@interface TestPlugin : PGPlugin {}

- (void) test:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
@end
