//
//  MasterViewController.h
//  AddressBookTableView
//
//  Created by Darrell Weaver on 3/20/13.
//  Copyright (c) 2013 Darrell Weaver. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
