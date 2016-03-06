//
//  Event.m
//  TestSimperiumCat
//
//  Created by Hua Ying Ling on 3/5/16.
//  Copyright © 2016 Hua Ying Ling. All rights reserved.
//

#import "Event.h"
#import "NSDecimalNumber+LDUtils.h"

@implementation Event

// Insert code here to add functionality to your managed object subclass

- (void)setNumber:(NSDecimalNumber *)number {
    // This line will crash when sync to 2nd device
    NSDecimalNumber *tempNum = [number ld_negativeOne];
    NSLog(@"%s: %@", __PRETTY_FUNCTION__, tempNum);
    
    [self willChangeValueForKey:@"number"];
    [self setPrimitiveValue:number forKey:@"number"];
    [self didChangeValueForKey:@"number"];
}

@end
