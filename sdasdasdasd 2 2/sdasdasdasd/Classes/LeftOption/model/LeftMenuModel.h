//
//  LeftMenuModel.h
//  HuoBanMallBuy
//
//  Created by lhb on 15/9/10.
//  Copyright (c) 2015年 HT. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LeftMenuModel : NSObject

@property(nonatomic,assign) int menu_group;
@property(nonatomic,strong) NSString * menu_icon;
@property(nonatomic,strong) NSString * menu_name;
@property(nonatomic,strong) NSString * menu_tag;
@property(nonatomic,strong) NSString * menu_url;


+ (instancetype) LeftMenuModelWithId:(int)menu_group andIcon:(NSString *)menu_icon andname:(NSString *)menu_name andtag:(NSString *)menu_tag andUrl:(NSString *)menu_url;
@end
