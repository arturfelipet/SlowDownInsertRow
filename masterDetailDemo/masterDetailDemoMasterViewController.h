//
//  masterDetailDemoMasterViewController.h
//  masterDetailDemo
//
//  Created by Artur Felipe on 6/12/13.
//  Copyright (c) 2013 own. All rights reserved.
//

#import <UIKit/UIKit.h>

@class masterDetailDemoDetailViewController;

@interface masterDetailDemoMasterViewController : UITableViewController

@property (strong, nonatomic) masterDetailDemoDetailViewController *detailViewController;

@end
