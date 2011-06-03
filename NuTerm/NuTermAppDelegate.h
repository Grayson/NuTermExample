//
//  NuTermAppDelegate.h
//  NuTerm
//
//  Created by Grayson Hansard on 6/3/11.
//  Copyright 2011 From Concentrate Software. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NuTermAppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end
