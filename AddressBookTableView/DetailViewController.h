//
//  DetailViewController.h
//  AddressBookTableView
//
//  Created by Darrell Weaver on 3/20/13.
//  Copyright (c) 2013 Darrell Weaver. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
