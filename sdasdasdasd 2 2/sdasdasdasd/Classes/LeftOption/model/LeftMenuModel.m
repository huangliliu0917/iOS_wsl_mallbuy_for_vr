//
//  LeftMenuModel.m
//  HuoBanMallBuy
//
//  Created by lhb on 15/9/10.
//  Copyright (c) 2015年 HT. All rights reserved.
//

#import "LeftMenuModel.h"
#import "MJExtension.h"

@implementation LeftMenuModel
MJCodingImplementation

+ (instancetype) LeftMenuModelWithId:(int)menu_group andIcon:(NSString *)menu_icon andname:(NSString *)menu_name andtag:(NSString *)menu_tag andUrl:(NSString *)menu_url{
    
    LeftMenuModel * model = [[self alloc] init];
    model.menu_tag = menu_tag;
    model.menu_url = menu_url;
    model.menu_icon = menu_icon;
    model.menu_group = menu_group;
    model.menu_name = menu_name;
    return model;
}
@end
