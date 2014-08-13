//
//  MasterViewController.h
//  RaidPlanner
//
//  Created by Chris Snyder on 8/13/14.
//  Copyright (c) 2014 Chris Snyder. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
