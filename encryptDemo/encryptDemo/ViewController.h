//
//  ViewController.h
//  encryptDemo
//
//  Created by 潘 思浩 on 13-7-22.
//  Copyright (c) 2013年 com.miaomiaobase. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *srcStringTextField;

@property (weak, nonatomic) IBOutlet UILabel *entryptTypeLabel;
@property (weak, nonatomic) IBOutlet UILabel *introLabel1;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel1;
@property (weak, nonatomic) IBOutlet UILabel *introLabel2;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel2;
@property (weak, nonatomic) IBOutlet UILabel *introLabel3;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel3;
@property (weak, nonatomic) IBOutlet UILabel *introLabel4;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel4;



- (IBAction)bgTap:(id)sender;

//md5常规加密
- (IBAction)commonMd5BtnPressed:(id)sender;
//md5二次加密
- (IBAction)secondaryMd5BtnPressed:(id)sender;

//sha加密
- (IBAction)shaBtnPressed:(id)sender;

//ASE加密

@end
