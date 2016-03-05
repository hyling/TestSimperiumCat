//
//  DetailViewController.h
//  TestSimperiumCat
//
//  Created by Hua Ying Ling on 3/5/16.
//  Copyright © 2016 Hua Ying Ling. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

