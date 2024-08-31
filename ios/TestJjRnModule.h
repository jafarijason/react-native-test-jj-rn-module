
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTestJjRnModuleSpec.h"

@interface TestJjRnModule : NSObject <NativeTestJjRnModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TestJjRnModule : NSObject <RCTBridgeModule>
#endif

@end
