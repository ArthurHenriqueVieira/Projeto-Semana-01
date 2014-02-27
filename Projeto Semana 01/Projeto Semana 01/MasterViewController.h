//
//  MasterViewController.h
//  Projeto Semana 01
//
//  Created by Arthur Henrique Vieira de Oliveira on 27/02/14.
//  Copyright (c) 2014 Arthur Henrique Vieira de Oliveira. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
