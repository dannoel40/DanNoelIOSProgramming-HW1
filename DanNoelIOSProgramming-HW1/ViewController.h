//
//  ViewController.h
//  DanNoelIOSProgramming-HW1
//
//  Created by Dan Noel on 1/10/15.
//  Copyright (c) 2015 Dan Noel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;



@end

