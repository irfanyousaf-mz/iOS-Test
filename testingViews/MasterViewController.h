//
//  MasterViewController.h
//  testingViews
//
//  Created by VIRTISM on 6/25/12.
//  Copyright (c) 2012 virtism. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
