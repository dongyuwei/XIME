//
//  CandidateWindowController.h
//  XIME
//
//  Created by Saiqi Jia on 10/23/14.
//  Copyright (c) 2014 Stackia. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "RimeTypeDef.h"

@interface CandidateWindowController : NSWindowController

@property (weak) IBOutlet NSVisualEffectView *contentView;

/// Update candidate window. If no candidates available, the window will be invisible.
- (void)updateWithRimeContext:(XRimeContext *)context caretRect:(NSRect)caretRect;

@end
