//
//  NSDecimalNumber+LDUtils.m
//  TestSimperiumCat
//
//  Created by Hua Ying Ling on 3/5/16.
//  Copyright © 2016 Hua Ying Ling. All rights reserved.
//

#import "NSDecimalNumber+LDUtils.h"

@implementation NSDecimalNumber (LDUtils)

- (NSDecimalNumber *)ld_negativeOne {
    return [NSDecimalNumber decimalNumberWithMantissa:1 exponent:0 isNegative:YES];
}

@end
