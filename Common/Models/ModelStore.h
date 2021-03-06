//
//  ModelStore.h
//  SeriouslyOSX
//
//  Created by Kyle Kinkade on 11/5/11.
//  Copyright (c) 2011 Monocle Society LLC All rights reserved.
//
#import <CoreData/CoreData.h>
#import <Foundation/Foundation.h>
 
@interface ModelStore : NSObject
{
    
}
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectContext *privateManagedObjectContect;

+ (ModelStore *)sharedStore;

- (BOOL)save;

- (id)newModelWithClassName:(NSString *)className;
- (NSArray *)allWithClassName:(NSString *)className;

- (NSFetchRequest *)fetchRequestForFilteredActivities;
- (NSFetchRequest *)activityExistsForSourceID:(NSString *)sourceID;

@end