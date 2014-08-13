//
//  Raid.h
//  RaidPlanner
//
//  Created by Chris Snyder on 8/13/14.
//  Copyright (c) 2014 Chris Snyder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Adventurer;

@interface Raid : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSSet *adventurers;
@end

@interface Raid (CoreDataGeneratedAccessors)

- (void)addAdventurersObject:(Adventurer *)value;
- (void)removeAdventurersObject:(Adventurer *)value;
- (void)addAdventurers:(NSSet *)values;
- (void)removeAdventurers:(NSSet *)values;

@end
