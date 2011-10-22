#import "TestPlugin.h"

@implementation TestPlugin

- (void) test:(NSMutableArray *)arguments withDict:(NSMutableDictionary *)options {
    NSString* callbackId = [arguments objectAtIndex:0];
    
    PluginResult *pluginResult = [PluginResult resultWithStatus:PGCommandStatus_OK messageAsString: @"success"];
    [super writeJavascript:[pluginResult toSuccessCallbackString:callbackId]];        
}

@end