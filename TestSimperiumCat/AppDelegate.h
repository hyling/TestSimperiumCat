//
//  AppDelegate.h
//  TestSimperiumCat
//
//  Created by Hua Ying Ling on 3/5/16.
//  Copyright © 2016 Hua Ying Ling. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import <Simperium/Simperium.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) Simperium *simperium;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

