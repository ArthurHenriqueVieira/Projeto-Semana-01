//
//  DetailViewController.h
//  Projeto Semana 01
//
//  Created by Arthur Henrique Vieira de Oliveira on 27/02/14.
//  Copyright (c) 2014 Arthur Henrique Vieira de Oliveira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
