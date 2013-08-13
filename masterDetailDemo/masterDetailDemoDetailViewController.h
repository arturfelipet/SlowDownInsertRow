//
//  masterDetailDemoDetailViewController.h
//  masterDetailDemo
//
//  Created by Artur Felipe on 6/12/13.
//  Copyright (c) 2013 own. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface masterDetailDemoDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
