//
//  HTNoticeCenter.h
//  HTNoticeCenter
//
//  Created by lhb on 16/4/22.
//  Copyright © 2016年 HT. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import "NoticeMessage.h"




/*
 *  火图消息中心消息体
 */

typedef NS_ENUM(NSUInteger, HTNoticeCenterNoticeType) {
    HTNoticeTypeDownRegisterSuccess,        //下线会员注册成功
    HTNoticeTypeUpgradePartner,             //会员升级成小伙伴
    HTNoticeTypePaySuccess,                 //订单支付成功
    HTNoticeTypeSendRedPackets,             //小伙伴发送红包
    HTNoticeTypeDownPaySuccess,             //下线订单支付成功
    HTNoticeTypeGetStock,                   //获得股数
    HTNoticeTypeWithdrawApply,              //余额提现申请
    HTNoticeTypeOrderShip,                  //订单发货
    HTNoticeTypeGetRedPackets,              //会员获得红包通知
    HTNoticeTypeUpgradeDreamPartner,        //升级成为梦想合伙人
    HTNoticeTypeUnKnow                      //未知消息类型
};


/*
 *  火图掉用结果
 */

typedef NS_ENUM(NSUInteger, HTNoticeCenterDealResult) {
    HTNoticeCenterFailure,      //失败
    HTNoticeCenterSuccess       //成功
};



/*
 *  火图消息中心错误码
 */
typedef NS_ENUM(NSUInteger, HTNoticeCenterErrorCode) {
    HTNoticeCenterErrorCodeServer,     //失败
   
};


@interface HTNoticeCenter : NSObject



/**
 *  1、注册向苹果APNS服务端注册远程推送通知
 */
+ (void)HTNoticeCenterRegisterRemoteNotice;




/**
 *  2、deviceToken 注册到火图数据服务中心
 *
 *  @param deviceToken 设备的deviceToken
 *  @param UserId      设备的用户id
 *
 *  @return 注册成功
 */
+ (void)HTNoticeCenterRegisterToServerWithDeviceToken:(NSString *)deviceToken DealResult:(void(^)(HTNoticeCenterDealResult resultType))Result;





/**
 *  3、deviceToken 注册到数据服务中心
 *
 *  @param deviceToken 设备的deviceToken
 *  @param UserId      设备的用户id
 *  @param MainUrl     服务端域名
 *
 *  @return 注册成功
 */
+ (void)HTNoticeCenterRegisterToServerWithDeviceToken:(NSString *)deviceToken AndUserId:(NSString *)UserId  DealResult:(void(^)(HTNoticeCenterDealResult resultType))Result;




+ (void)HTNoticeCenterRegisterToServerWithDeviceTokenWithNoUserInfo:(NSString *)deviceToken AndCustomerId:(NSString *)CustomerId  DealResult:(void(^)(HTNoticeCenterDealResult resultType))Result;



/**
 *  4、处理远程推送消息
 *
 *  @param notice 返回消息类型
 */
+ (void)HTNoticeCenterToDealRemoteNoticeWithNotice:(NoticeMessage *)notice ResultNoticeCeterType:(void(^)(HTNoticeCenterNoticeType type))NoticeSuccess;


/**
 *  火图新签名
 *
 *  @param key 签名key
 *
 *  @return 签名后的数据
 */
+ (NSString *)HotTechAsignWith:(NSString *)key;




+ (void)HotTechShowMessageWithMessage:(NoticeMessage *)note block:(void(^)(id message))dealMessage;


@end
