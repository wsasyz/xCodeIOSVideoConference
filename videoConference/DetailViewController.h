//
//  DetailViewController.h
//  videoConference
//
//  Created by Shuang Wang on 8/29/13.
//  Copyright (c) 2013 Shuang Wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
