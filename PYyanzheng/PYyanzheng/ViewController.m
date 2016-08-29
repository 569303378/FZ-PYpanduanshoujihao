//
//  ViewController.m
//  PYyanzheng
//
//  Created by Apple on 16/7/26.
//  Copyright © 2016年 Apple. All rights reserved.
//

#import "ViewController.h"
#import "NSString+SayHi.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *myTextField;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
}
- (IBAction)button:(UIButton *)sender {
  BOOL isE = [NSString validateMobile:self.myTextField.text];
    if (isE) {
        NSLog(@"是手机号");
    } else {
        NSLog(@"不是手机号");
    }
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
