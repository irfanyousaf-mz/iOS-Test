//
//  DetailViewController.h
//  testingViews
//
//  Created by VIRTISM on 6/25/12.
//  Copyright (c) 2012 virtism. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
