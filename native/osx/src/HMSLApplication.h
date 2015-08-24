//
//  HMSLApplication.h
//  HMSL-OSX
//
//  Created by Andrew C Smith on 2/22/15.
//  Copyright (c) 2015 3DO. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "HMSLWindow.h"

@interface HMSLApplication : NSApplication {
  int result;
}

-(void)flushAllWindowDrawing;

@property int result;

@end
