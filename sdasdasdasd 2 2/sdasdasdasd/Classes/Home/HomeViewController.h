//
//  HomeViewController.h
//  HuoBanMallBuy
//
//  Created by lhb on 15/9/5.
//  Copyright (c) 2015年 HT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HomeViewController : UIViewController

@property (nonatomic, strong) NSString *openUrl;

@property (nonatomic, strong) NSString *tabbarImage;

@property (nonatomic, strong) NSDictionary *openNotifacation;

@property (strong, nonatomic) WKWebView *homeWebView;
- (void)resetHomeWebAgent;

@end
