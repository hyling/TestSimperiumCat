//
//  Event+CoreDataProperties.h
//  TestSimperiumCat
//
//  Created by Hua Ying Ling on 3/5/16.
//  Copyright © 2016 Hua Ying Ling. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Event.h"

NS_ASSUME_NONNULL_BEGIN

@interface Event (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *timeStamp;
@property (nullable, nonatomic, retain) NSDecimalNumber *number;
@property (nullable, nonatomic, retain) NSString *ghostData;
@property (nullable, nonatomic, retain) NSString *simperiumKey;

@end

NS_ASSUME_NONNULL_END
