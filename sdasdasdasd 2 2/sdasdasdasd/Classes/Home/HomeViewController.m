
//  HomeViewController.m
//  HuoBanMallBuy
//
//  Created by lhb on 15/9/5.
//  Copyright (c) 2015年 HT. All rights reserved.
//

#import "HomeViewController.h"
#import <BlocksKit+UIKit.h>
#import <MJRefresh.h>
#import "UIViewController+NAV.h"
#import "LeftMenuModel.h"
#import "MJExtension.h"
#import "UIViewController+MMDrawerController.h"
#import "RootViewController.h"
#import "PushWebViewController.h"
#import <ShareSDK/ShareSDK.h>
#import <ShareSDKUI/ShareSDK+SSUI.h>
#import "NSDictionary+HuoBanMallSign.h"
#import "LoginViewController.h"
#import "AppDelegate.h"
#import "MidTabelViewCell.h"
#import "AccountModel.h"
#import "UIViewController+MonitorNetWork.h"
#import "MallMessage.h"
#import "PayModel.h"
#import "IponeVerifyViewController.h"
#import <SDWebImageManager.h>
#import "WXApi.h"
#import "payRequsestHandler.h"
#import "UserLoginTool.h"
#import <SSZipArchive.h>
#import <SVProgressHUD.h>
#import "UserInfo.h"
#import "AQuthModel.h"
#import "AccountModel.h"
#import "AccountTool.h"
#import "LeftMenuModel.h"
#import "LeftGroupModel.h"
#import "NoticeMessage.h"
#import <SDWebImage/SDWebImageManager.h>
#import "WKCookieSyncManager.h"
#import "NSDictionary+ConfirmSign.h"
#import "ADView.h"

#import "LWNavigationController.h"



@interface HomeViewController()<UIWebViewDelegate,UIActionSheetDelegate,WKUIDelegate,WKNavigationDelegate,WXApiDelegate>




@property (strong, nonatomic) WKWebView *homeBottonWebView;

/***/
@property(nonatomic,strong) NSMutableString * debugInfo;
/**
 *  是否显示返回按钮
 *  1、表示显示
 *  2、表示不显示
 */
@property(nonatomic,assign) BOOL showBackArrows;

/**底部网页约束高度*/
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *homeBottonWebViewHeight;
/**图标*/
@property (nonatomic,strong) UIButton * backArrow;
/**返回按钮*/
@property (nonatomic,strong) UIButton * leftOption;

/**刷新按钮标*/
@property (nonatomic,strong) UIButton * refreshBtn;
/**分享按钮*/
@property (nonatomic,strong) UIButton * shareBtn;

/**登陆后的背景遮罩*/
@property (nonatomic,strong) UIView * backView;

/**本地账号*/
@property (nonatomic,strong) NSArray * LocalAccounts;

@property(nonatomic,strong) NSString * orderNo;       //订单号
@property(nonatomic,strong) NSString * priceNumber;  //订单价格
@property(nonatomic,strong) NSString * proDes;       //订单描述
/**支付的url*/
@property(nonatomic,strong) NSString * ServerPayUrl;

@property(nonatomic,strong) PayModel * paymodel;

@property (strong, nonatomic) UIProgressView *progressView;

@property (nonatomic, assign) BOOL bingWeixin;

@property (nonatomic, strong) NSString *bingWeixinUrl;


/***1.5.4修改 用于识别当前加载的页面是否是首页***/
@property (nonatomic, strong) NSString *homeWebUrl;


@property (nonatomic, strong) NSTimer * timer;


@property (nonatomic, strong) UIBarButtonItem * arItem;

@end


@implementation HomeViewController

- (UIBarButtonItem *)arItem{
    
    if (_arItem == NULL) {
        UIButton * arbtn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 25, 25)];
        [arbtn setTitle:@"AR" forState:UIControlStateNormal];
        [arbtn addTarget:self action:@selector(ARBtnClicked) forControlEvents:UIControlEventTouchUpInside];
        _arItem = [[UIBarButtonItem alloc] initWithCustomView:arbtn];
    }
    return _arItem;
}

- (void)ARBtnClicked {
    
    UnityPause(false);
    [self presentViewController:UnityGetGLViewController() animated:NO completion:nil];
}



- (NSMutableString *)debugInfo{
    
    if (_debugInfo == nil) {
        
        _debugInfo = [[NSMutableString alloc] init];
    }
    return _debugInfo;
    
}



- (NSArray *)LocalAccounts{
    _LocalAccounts = nil;
    if (_LocalAccounts == nil) {
        NSArray *array =  NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString * filename = [[array objectAtIndex:0] stringByAppendingPathComponent:AccountList];
        NSData *data = [NSData dataWithContentsOfFile:filename];
        // 2.创建反归档对象
        NSKeyedUnarchiver *unArchiver = [[NSKeyedUnarchiver alloc] initForReadingWithData:data];
        // 3.解码并存到数组中
        NSArray *namesArray = [unArchiver decodeObjectForKey:AccountList];
        _LocalAccounts = namesArray;
    }
    return _LocalAccounts;
}


- (UIButton *)backArrow{
    if (_backArrow == nil) {
        _backArrow = [UIButton buttonWithType:UIButtonTypeCustom];
        _backArrow.frame = CGRectMake(0, 0, 25, 25);
        [_backArrow addTarget:self action:@selector(BackToWebView) forControlEvents:UIControlEventTouchUpInside];
        [_backArrow setBackgroundImage:[UIImage imageNamed:@"main_title_left_back"] forState:UIControlStateNormal];
        self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:_backArrow];
    }
    return _backArrow;
}

- (UIButton *)leftOption{
    
    if (_leftOption == nil) {
        _leftOption = [[UIButton alloc] init];
        _leftOption.frame = CGRectMake(0, 0, 25, 25);
        [_leftOption addTarget:self action:@selector(GoToLeft) forControlEvents:UIControlEventTouchUpInside];
        [_leftOption setBackgroundImage:[UIImage imageNamed:@"main_title_left_sideslip"] forState:UIControlStateNormal];
        self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:_leftOption];
    }
    return _leftOption;
}


- (UIButton *)shareBtn{
    if (_shareBtn == nil) {
        _shareBtn = [[UIButton alloc] init];
        _shareBtn.frame = CGRectMake(0, 0, 25, 25);
        _shareBtn.userInteractionEnabled = NO;
        [_shareBtn addTarget:self action:@selector(shareBtnClicks) forControlEvents:UIControlEventTouchUpInside];
        [_shareBtn setBackgroundImage:[UIImage imageNamed:@"home_title_right_share"] forState:UIControlStateNormal];
    }
    return _shareBtn;
}


-(UIButton *)refreshBtn{
    if (_refreshBtn == nil) {
        _refreshBtn = [[UIButton alloc] init];
        _refreshBtn.frame = CGRectMake(0, 0, 25, 25);
        [_refreshBtn addTarget:self action:@selector(refreshToWebViews) forControlEvents:UIControlEventTouchUpInside];
        [_refreshBtn setBackgroundImage:[UIImage imageNamed:@"main_title_left_refresh"] forState:UIControlStateNormal];
        [_refreshBtn setBackgroundImage:[UIImage imageNamed:@"loading"] forState:UIControlStateHighlighted];
    }
    return _refreshBtn;
}

/**
 *  刷新
 */
- (void)refreshToWebViews{
    [_refreshBtn setBackgroundImage:[UIImage imageNamed:@"loading"] forState:UIControlStateNormal];
    self.refreshBtn.userInteractionEnabled = NO;
    
    [self.homeWebView reload];
}

/**
 *  分享
 */
- (void)shareBtnClicks{
    [self shareSdkSha];
}






- (void)shareSdkSha{
    
    //1、创建分享参数
#pragma mark 分享修改
    
    [self.homeWebView evaluateJavaScript:@"__getShareStr()" completionHandler:^(id _Nullable shareStr, NSError * _Nullable error) {
        
        NSString *str = shareStr;
        
        NSArray *array = [str componentsSeparatedByString:@"^"];
        if (array.count != 4) {
            return;
        }
        //1、创建分享参数
        NSArray* imageArray = @[[NSURL URLWithString:array[3]]];
        if (imageArray) {
            NSMutableDictionary *shareParams = [NSMutableDictionary dictionary];
            [shareParams SSDKSetupShareParamsByText:array[1]
                                             images:imageArray
                                                url:[NSURL URLWithString:array[2]]
                                              title:array[0]
                                               type:SSDKContentTypeAuto];
            //2、分享（可以弹出我们的分享菜单和编辑界面）
            [ShareSDK showShareActionSheet:nil //要显示菜单的视图, iPad版中此参数作为弹出菜单的参照视图，只有传这个才可以弹出我们的分享菜单，可以传分享的按钮对象或者自己创建小的view 对象，iPhone可以传nil不会影响
                                     items:nil
                               shareParams:shareParams
                       onShareStateChanged:^(SSDKResponseState state, SSDKPlatformType platformType, NSDictionary *userData, SSDKContentEntity *contentEntity, NSError *error, BOOL end) {
                           
                           switch (state) {
                               case SSDKResponseStateSuccess:
                               {
                                   UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"分享成功" message:nil preferredStyle:UIAlertControllerStyleAlert];
                                   [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil]];
                                   [self presentViewController:alert animated:YES completion:nil];
                                   
                                   //
                                   break;
                               }
                               case SSDKResponseStateFail:
                               {
                                   
                                   UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"分享失败" message:[NSString stringWithFormat:@"%@",error] preferredStyle:UIAlertControllerStyleAlert];
                                   [alert addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:nil]];
                                   [self presentViewController:alert animated:YES completion:nil];
                                   
                                   break;
                               }
                               default:
                                   break;
                           }
                           
                       }];
            
        }
    }];
    
}


- (void) toAddNavagationRightBtnwithType:(int)type{
    
    
    if (type == 1) {
        self.navigationItem.rightBarButtonItems = @[[[UIBarButtonItem alloc] initWithCustomView:self.shareBtn],[self arItem]];
    }else{
        
        self.navigationItem.rightBarButtonItems = @[[self arItem]];
    }
}


- (void)viewDidLoad{
    [super viewDidLoad];
    //    WKWebsiteDataRecord *rec = [
    [SVProgressHUD setDefaultMaskType:SVProgressHUDMaskTypeBlack];
    
    LWLog(@"%@",self.homeWebUrl);
    
    AppDelegate * appde = (AppDelegate *)[UIApplication sharedApplication].delegate;
    appde.currentVc = self;
    
    
    
    self.automaticallyAdjustsScrollViewInsets = NO;
    AppDelegate *app = (AppDelegate *)[UIApplication sharedApplication].delegate;
    
    WKWebViewConfiguration * internalConfig = [[WKWebViewConfiguration alloc] init];
    WKCookieSyncManager * ma = [WKCookieSyncManager shareInstance];
    internalConfig.processPool = ma.processPool;
    WKWebView * wk  = [[WKWebView alloc] initWithFrame:CGRectMake(0, 0, ScreenWidth, ScreenHeight - 64-49 ) configuration:internalConfig];
    
    
    self.homeWebView = wk;
    self.homeWebView.navigationDelegate = self;
    self.homeWebView.UIDelegate = self;
    self.homeWebView.tag = 100;

    //    self.homeWebView
    //    self.view = wk;
    [self.view addSubview:self.homeWebView];
    self.view.backgroundColor = [UIColor whiteColor];
    
    LWLog(@"%@",self.openUrl);
    
    //    AppDelegate *app = (AppDelegate *)[UIApplication sharedApplication].delegate;
    
    NSLog(@"%@",app.userAgent);
    self.homeWebView.customUserAgent = app.userAgent;
    NSString * uraaaaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
    NSString * webChennel = [[NSUserDefaults standardUserDefaults] objectForKey:@"KeFuWebchannel"];
    if ([self.openUrl isEqualToString:webChennel]) {
        NSString *temp = [webChennel stringByReplacingOccurrencesOfString:@"{goodid}"withString:@"0"];
        temp = [temp stringByReplacingOccurrencesOfString:@"{orderid}"withString:@"0"];
        
        NSString * login = [[NSUserDefaults standardUserDefaults] objectForKey:LoginStatus];
        if ([login isEqualToString:Success]) {
            NSString *userId = [[NSUserDefaults standardUserDefaults] objectForKey:HuoBanMallUserId];
            if ([NSString stringWithFormat:@"%@", userId].length != 0) {
                self.homeWebUrl = [temp stringByReplacingOccurrencesOfString:@"{userid}" withString:[NSString stringWithFormat:@"%@", userId]];
            }else {
                self.homeWebUrl = [temp stringByReplacingOccurrencesOfString:@"{userid}" withString:@"0"];
            }
        }else {
            self.homeWebUrl = [temp stringByReplacingOccurrencesOfString:@"{userid}" withString:@"0"];
        }
    }else {
        if ([self.openUrl rangeOfString:@"http://"].location != NSNotFound) {
            self.homeWebUrl = self.openUrl;
        }else {
            self.homeWebUrl = [NSString stringWithFormat:@"%@%@", uraaaaa, self.openUrl];
        }
    }
    //NSString * del = self.homeWebUrl;
    //if ([del rangeOfString:@"back=1"].location == NSNotFound) {
    //   self.homeWebUrl = [NSString stringWithFormat:@"%@=1",del];
    //}
    
    
    //if (([[self.homeWebUrl lowercaseString] rangeOfString:@"usercenter/index.aspx"].location == //NSNotFound) &&([[self.homeWebUrl lowercaseString] rangeOfString:@"mall/cart.aspx"].location == NSNotFound)) {
       // NSURL * urlStr = [NSURL URLWithString:self.homeWebUrl];
       // NSURLRequest * req = [[NSURLRequest alloc] initWithURL:urlStr];
       // [self.homeWebView loadRequest:req];
    //}
    
    if (app.Ad != NULL) {
        
        
        AdModel * md = app.Ad;
        
        LWLog(@"%@",[md mj_keyValues]);
        NSString *image = [md.images copy];
        NSString *ad = [md.linkUrl copy];
        
        //1、创建广告
        ADView *adView = [[ADView alloc] initWithFrame:[UIApplication sharedApplication].keyWindow.bounds imgUrl:image adUrl:ad clickImg:^(NSString *clikImgUrl) {
            
            PushWebViewController * funWeb =  [[PushWebViewController alloc] init];
            funWeb.funUrl = clikImgUrl;
            [self.navigationController pushViewController:funWeb animated:YES];
            self.tabBarController.tabBar.hidden = YES;
            
        }];
        //设置倒计时（默认3秒）
//        adView.showTime = 5;
        
        //2、显示广告
        [adView show];
        
        app.Ad = NULL;
    }
    

    
    //UserCenter/Index.aspx
    self.navigationController.navigationBar.alpha = 0;
    self.navigationController.navigationBar.barTintColor = HuoBanMallBuyNavColor;
    
    ;
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:self.leftOption];
    /**
     * 为ar添加
     */
    
    //集成刷新控件
    [self AddMjRefresh];
//    self.shareBtn.hidden = YES;
    
//    self.navigationItem.rightBarButtonItems = @[[[UIBarButtonItem alloc] initWithCustomView:self.shareBtn]];
    
    
    //左侧返回到首页
    
    
    //切换账号
    //    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(ToSwitchAccount) name:@"SwitchAccount" object:nil];
    
    //    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(pushToIphone) name:@"goToIponeVerifyViewController" object:nil];
    
    //    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(CannelLoginBackToHome) name:@"CannelLoginBackHome" object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(resetHomeWebAgent) name:ResetAllWebAgent object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(goToNewUrlFormRemoteNotifcation:) name:@"GoNewUrl" object:nil];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(gotoLoginController) name:@"backAndGoLogin" object:nil];
    
    
    [UIViewController MonitorNetWork];
    
   
    
    [self initWebViewProgress];
    
    
    _openNotifacation = app.openNotifacation;
    if (_openNotifacation) {
        //        LWLog(@"%@", _openNotifacation);
        NoticeMessage *message = [NoticeMessage mj_objectWithKeyValues:_openNotifacation];
        if (![message.alertUrl isKindOfClass:[NSNull class]]) {
            UIStoryboard * mainStory = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
            PushWebViewController * funWeb =  [mainStory instantiateViewControllerWithIdentifier:@"PushWebViewController"];
            funWeb.funUrl = message.alertUrl;
            [self.navigationController pushViewController:funWeb animated:YES];
        }else if (![message.url isKindOfClass:[NSNull class]]) {
            UIAlertController *aa = [UIAlertController alertControllerWithTitle:message.title message:message.body preferredStyle:UIAlertControllerStyleAlert];
            [aa addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
                
            }]];
            [aa addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                UIStoryboard * mainStory = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
                PushWebViewController * funWeb =  [mainStory instantiateViewControllerWithIdentifier:@"PushWebViewController"];
                funWeb.funUrl = message.url;
                [self.navigationController pushViewController:funWeb animated:YES];
            }]];
            
            [self presentViewController:aa animated:YES completion:nil];
        }
    }

    if (webChennel.length) {
        self.timer = [NSTimer scheduledTimerWithTimeInterval:5
                                                      target:self
                                                    selector:@selector(timerUp)
                                                    userInfo:nil
                                                     repeats:YES];

    }
    if ([self.homeWebUrl rangeOfString:@"/UserCenter/Index.aspx"].location == NSNotFound && [self.homeWebUrl rangeOfString:@"/Mall/Cart.aspx"].location == NSNotFound) {
        NSURL * urlStr = [NSURL URLWithString:self.homeWebUrl];
        NSMutableURLRequest * req = [[NSMutableURLRequest alloc] initWithURL:urlStr];
        [req addValue:WBAPPVERSION forHTTPHeaderField:@"appversion"];
        [self.homeWebView loadRequest:req];
    }
    
    
    
}


- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.navigationController.navigationBar addSubview:_progressView];
    [self.navigationController setNavigationBarHidden:NO  animated:YES];
    self.tabBarController.tabBar.hidden = NO;
    
    
    if ([self.homeWebUrl rangeOfString:@"/UserCenter/Index.aspx"].location != NSNotFound || [self.homeWebUrl rangeOfString:@"/Mall/Cart.aspx"].location != NSNotFound) {
        NSURL * urlStr = [NSURL URLWithString:self.homeWebUrl];
        LWLog(@"%@",self.homeWebUrl);
        NSMutableURLRequest * req = [[NSMutableURLRequest alloc] initWithURL:urlStr];
        [req addValue:WBAPPVERSION forHTTPHeaderField:@"appversion"];
        [self.homeWebView loadRequest:req];
    }
    [self.homeWebView evaluateJavaScript:@"document.title" completionHandler:^(NSString * _Nullable title, NSError * _Nullable error) {
        if (error) {
            self.navigationItem.title = MallName;
        }else{
            
            title.length > 0 ? (self.navigationItem.title = title) : (self.navigationItem.title = MallName);
        }
        
    }];

}
//
///**
// *  查看数据资源
// */
//- (void)ToCheckDate{
//    
//    [[NSUserDefaults standardUserDefaults] removeObjectForKey:DatePackageVersion];
//    __weak HomeViewController * wself = self;
//    NSString * cc = [NSString stringWithFormat:@"%@%@",AppOriginUrl,@"/mall/CheckDataPacket"];
//    NSMutableDictionary * dict = [NSMutableDictionary dictionary];
//    dict[@"datapacketversion"] = AppVersion;
//    NSMutableDictionary * aa =  [NSDictionary asignWithMutableDictionary:dict];
//    [UserLoginTool loginRequestGet:cc parame:aa success:^(id json) {
//        //        LWLog(@"%@",json);
//        if ([json[@"code"] integerValue] == 200 && [json[@"data"][@"updateData"] integerValue] == 1 ) {
//            //数据包版本号
//            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"version"] forKey:DatePackageVersion];
//            
//            [wself ToGetDownDateWithDateSource:json[@"data"][@"downloadUrl"] andverson:json[@"version"]];
//        }
//    } failure:^(NSError *error) {
//        //         LWLog(@"%@",error.description);
//    }];
//    
//}


- (void)AddMjRefresh{
    // 添加下拉刷新控件
    MJRefreshNormalHeader * header = [MJRefreshNormalHeader headerWithRefreshingTarget:self refreshingAction:@selector(loadNewData)];
    // 隐藏时间
    header.lastUpdatedTimeLabel.hidden = YES;
    // 隐藏状态
    header.stateLabel.hidden = YES;
    header.arrowView.image= nil;
    self.homeWebView.scrollView.mj_header = header;
    
}


- (void)ToGetDownDateWithDateSource:(NSString *) url andverson:(NSString *)ver{
    //    [UserLoginTool loginRequestDateGet:url parame:nil downloadSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
    //
    //        NSString *savedPath = [NSHomeDirectory() stringByAppendingString:@"/Documents/update.zip"];
    //        NSString *unsavedPath = [NSHomeDirectory() stringByAppendingString:@"/Documents/update"];
    //        NSString * cc = [NSString stringWithFormat:@"%@/icon",unsavedPath];
    //
    //        [SSZipArchive unzipFileAtPath:savedPath toDestination: unsavedPath];
    //        NSFileManager * manage = [NSFileManager defaultManager];
    //        NSArray * fileName = [manage contentsOfDirectoryAtPath:cc error:nil];
    //        [fileName enumerateObjectsUsingBlock:^(NSString * fileName, NSUInteger idx, BOOL *stop) {
    //
    ////            LWLog(@"dasdasdasdasdasd====%@",fileName);
    //        }];
    //
    //
    //    } downloadFailure:^(AFHTTPRequestOperation *operation, NSError *error) {
    //
    //        LWLog(@"%@",error.description);
    //    } progress:^(float progress) {
    //         LWLog(@"xxxxxx%f",progress);
    //    }];
    
}

/*
 *网页下拉刷新
 */
- (void)loadNewData{
    [self.homeWebView reload];
}

- (void)switchUserInfoSuccess {
    NSString * uraaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
    NSString * ddd = [NSString stringWithFormat:@"%@/%@/index.aspx?back=1",uraaa,HuoBanMallBuyApp_Merchant_Id];
    NSURL * urlStr = [NSURL URLWithString:ddd];
    NSMutableURLRequest * req = [[NSMutableURLRequest alloc] initWithURL:urlStr];
    [req addValue:WBAPPVERSION forHTTPHeaderField:@"appversion"];
    [self.homeWebView loadRequest:req];
}






- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    
    RootViewController * root = (RootViewController *)self.mm_drawerController;
    [root setCloseDrawerGestureModeMask:MMCloseDrawerGestureModeAll];
    [root setOpenDrawerGestureModeMask:MMOpenDrawerGestureModeAll];
//    [root setCloseDrawerGestureModeMask:MMCloseDrawerGestureModeNone];
    [root setOpenDrawerGestureModeMask:MMOpenDrawerGestureModeNone];
    //if ([[self.homeWebUrl lowercaseString] rangeOfString:@"usercenter/index.aspx"].location != NSNotFound || [[self.homeWebUrl lowercaseString] rangeOfString:@"mall/cart.aspx"].location != NSNotFound) {
        //NSURL * urlStr = [NSURL URLWithString:self.homeWebUrl];
        //NSURLRequest * req = [[NSURLRequest alloc] initWithURL:urlStr];
        //[self.homeWebView loadRequest:req];
    //}
    
}


/**
 *  网页
 */
- (void)BackToWebView{
    if ([self.homeWebView canGoBack]) {
        [self.homeWebView goBack];
    }
}

/**
 *  去左侧
 */
- (void)GoToLeft{
    
    [self.mm_drawerController toggleDrawerSide:MMDrawerSideLeft animated:YES completion:^(BOOL finished) {
        
        
    }];
}



//- (void)CannelLoginBackToHome {
//
//    NSString * uraaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
//    NSString * ddd = [NSString stringWithFormat:@"%@/%@/index.aspx?back=1",uraaa,HuoBanMallBuyApp_Merchant_Id];
//    NSURL * urlStr = [NSURL URLWithString:ddd];
//    NSURLRequest * req = [[NSURLRequest alloc] initWithURL:urlStr];
//    [self.homeWebView loadRequest:req];
//}

- (UIView *)ReturnNavPictureWithName:(NSString *)name andTwo:(NSString *)share{
    
    return nil;
}

- (UIView *)ReturnNavPictureWithName:(NSString *)name{
    
    UIButton *leftbutton = [[UIButton alloc] init];
    if ([name isEqualToString:@"home_title_left_menu"]) {
        leftbutton.tag = 0;
    }else{
        leftbutton.tag = 1;
    }
    leftbutton.frame = CGRectMake(0, 0, 25, 25);
    [leftbutton addTarget:self action:@selector(presentLeftMenuViewController:) forControlEvents:UIControlEventTouchUpInside];
    [leftbutton setBackgroundImage:[UIImage imageNamed:name] forState:UIControlStateNormal];
    return leftbutton;
}

- (void)presentLeftMenuViewController:(UIButton *)item{
    [self.mm_drawerController toggleDrawerSide:MMDrawerSideLeft animated:YES completion:^(BOOL finished) {
        
    }];
}


- (void)ocappCallJspoc{
    [self.homeWebView evaluateJavaScript:@"alert(1);" completionHandler:^(id _Nullable tempStr, NSError * _Nullable error) {
        
    }];
}



/**
 *  jsp调app
 
 windown.location.href  = 'ios://openAlum'
 */
- (void)jspCallApp{
    
    
}

- (void)openAlbum{
    
}

-(UIImage *)scaleimage:(UIImage *)img size:(CGSize)c

{
    
    UIGraphicsBeginImageContext(c);
    
    [img drawInRect:CGRectMake(0, 0, SecrenWith, SecrenHeight)];
    
    UIImage *image=UIGraphicsGetImageFromCurrentImageContext();
    
    UIGraphicsEndImageContext();
    
    return image;
    
}


/**
 *  商城支付宝支付
 */
- (void)MallAliPay:(PayModel *)pay{
    
}


/**
 *  微信支付
 */
- (void)WeiChatPay:(PayModel *)model{
    //获取到实际调起微信支付的参数后，在app端调起支付
    NSMutableDictionary *dict = [self PayByWeiXinParame:model];
    if(dict != nil){
        NSMutableString *stamp  = [dict objectForKey:@"timestamp"];
        //调起微信支付
        PayReq* req             = [[PayReq alloc] init];
        req.openID              = [dict objectForKey:@"appid"];
        req.partnerId           = [dict objectForKey:@"partnerid"];
        req.prepayId            = [dict objectForKey:@"prepayid"];
        req.nonceStr            = [dict objectForKey:@"noncestr"];
        req.timeStamp           = stamp.intValue;
        req.package             = [dict objectForKey:@"package"];
        req.sign                = [dict objectForKey:@"sign"];
        [WXApi sendReq:req];
    }else{
        LWLog(@"提示信息----微信预支付失败");
    }
}


/**
 *  微信支付预zhifu
 */
- (NSMutableDictionary *)PayByWeiXinParame:(PayModel *)paymodel{
    
    payRequsestHandler * payManager = [[payRequsestHandler alloc] init];
    [payManager setKey:paymodel.appKey];
    BOOL isOk = [payManager init:self.paymodel.appId mch_id:self.paymodel.partnerId];
    if (isOk) {
        NSMutableDictionary *params = [NSMutableDictionary dictionary];
        NSString *noncestr  = [NSString stringWithFormat:@"%d", rand()];
        params[@"appid"] = paymodel.appId;
        params[@"mch_id"] = paymodel.partnerId;     //微信支付分配的商户号
        params[@"nonce_str"] = noncestr; //随机字符串，不长于32位。推荐随机数生成算法
        params[@"trade_type"] = @"APP";   //取值如下：JSAPI，NATIVE，APP，WAP,详细说明见参数规定
        params[@"body"] = MallName; //商品或支付单简要描述
        NSMutableString * urls = [NSMutableString stringWithString:[[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl]];
        [urls appendString:paymodel.notify];
        params[@"notify_url"] = urls;  //接收微信支付异步通知回调地址
        
        NSString * order = [NSString stringWithFormat:@"%@_%@_%d",self.orderNo,HuoBanMallBuyApp_Merchant_Id,(arc4random() % 900 + 100)];
        params[@"out_trade_no"] = order; //订单号
        params[@"spbill_create_ip"] = @"192.168.1.1"; //APP和网页支付提交用户端ip，Native支付填调用微信支付API的机器IP。
        params[@"total_fee"] = [NSString stringWithFormat:@"%.f",[self.priceNumber floatValue] * 100];  //订单总金额，只能为整数，详见支付金额
        params[@"device_info"] = ([[UIDevice currentDevice].identifierForVendor UUIDString]);
        params[@"attach"] = [NSString stringWithFormat:@"%@_0",HuoBanMallBuyApp_Merchant_Id];
        //获取prepayId（预支付交易会话标识）
        NSString * prePayid = nil;
        prePayid  = [payManager sendPrepay:params];
        //        LWLog(@"xcaccasc%@",[payManager getDebugifo]);
        if ( prePayid != nil) {
            //获取到prepayid后进行第二次签名
            NSString    *package, *time_stamp, *nonce_str;
            //设置支付参数
            time_t now;
            time(&now);
            time_stamp  = [NSString stringWithFormat:@"%ld", now];
            nonce_str	= [WXUtil md5:time_stamp];
            //重新按提交格式组包，微信客户端暂只支持package=Sign=WXPay格式，须考虑升级后支持携带package具体参数的情况
            //package       = [NSString stringWithFormat:@"Sign=%@",package];
            package         = @"Sign=WXPay";
            //第二次签名参数列表
            NSMutableDictionary *signParams = [NSMutableDictionary dictionary];
            [signParams setObject: HuoBanMallBuyWeiXinAppId  forKey:@"appid"];
            [signParams setObject: nonce_str    forKey:@"noncestr"];
            [signParams setObject: package      forKey:@"package"];
            [signParams setObject: @"1251040401"   forKey:@"partnerid"];
            [signParams setObject: time_stamp   forKey:@"timestamp"];
            [signParams setObject: prePayid     forKey:@"prepayid"];
            //生成签名
            NSString *sign  = [payManager createMd5Sign:signParams];
            //添加签名
            [signParams setObject: sign forKey:@"sign"];
            [_debugInfo appendFormat:@"第二步签名成功，sign＝%@\n",sign];
            //返回参数列表
            return signParams;
        }else{
            [_debugInfo appendFormat:@"获取prepayid失败！\n"];
        }
        
    }
    return nil;
}


- (void)pushToIphone {
    
    UIStoryboard *stroy = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    IponeVerifyViewController *phone = [stroy instantiateViewControllerWithIdentifier:@"IponeVerifyViewController"];
    phone.isBundlPhone = YES;
    [self.navigationController pushViewController:phone animated:YES];
}


- (void)dealloc{
    
    [self.timer invalidate];
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [self.homeWebView removeObserver:self forKeyPath:@"estimatedProgress"];
}





#pragma mark 切换账号

- (void)changeWithUserInfo:(NSArray *) array {
    NSMutableDictionary *parame = [NSMutableDictionary dictionary];
    parame[@"userid"] = array[1];
    parame = [NSDictionary asignWithMutableDictionary:parame];
    NSMutableString * url = [NSMutableString stringWithString:AppOriginUrl];
    [url appendString:@"/Account/getAppUserInfo"];
    
    [UserLoginTool loginRequestGet:url parame:parame success:^(id json) {
        LWLog(@"%@", json);
        
        if ([json[@"code"] integerValue] == 200) {
            UserInfo * userInfo = [[UserInfo alloc] init];
            userInfo.unionid = json[@"data"][@"unionId"];
            userInfo.nickname = json[@"data"][@"nickName"];
            userInfo.headimgurl = json[@"data"][@"headImgUrl"];
            userInfo.openid = json[@"data"][@"openId"];
            
            NSString * path = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
            NSString *fileName = [path stringByAppendingPathComponent:WeiXinUserInfo];
            [NSKeyedArchiver archiveRootObject:userInfo toFile:fileName];
            
            
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"levelName"] forKey:HuoBanMallMemberLevel];
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"userid"] forKey:HuoBanMallUserId];
            if (![json[@"data"][@"headImgUrl"] isKindOfClass:[NSNull class]]) {
                [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"headImgUrl"] forKey:IconHeadImage];
            }else {
                [[NSUserDefaults standardUserDefaults] setObject:@"21321321" forKey:IconHeadImage];
            }
            
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"userType"] forKey:MallUserType];
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"relatedType"] forKey:MallUserRelatedType];
            NSArray * lefts = [LeftMenuModel mj_objectArrayWithKeyValuesArray:json[@"data"][@"home_menus"]];
            NSMutableData *data = [[NSMutableData alloc] init];
            //创建归档辅助类
            NSKeyedArchiver *archiver = [[NSKeyedArchiver alloc] initForWritingWithMutableData:data];
            //编码
            [archiver encodeObject:lefts forKey:LeftMenuModels];
            //结束编码
            [archiver finishEncoding];
            
            NSArray *array =  NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
            NSString * filename = [[array objectAtIndex:0] stringByAppendingPathComponent:LeftMenuModels];
            //写入
            [data writeToFile:filename atomically:YES];
            
            [self BackToWebView];
            
            [SVProgressHUD showSuccessWithStatus:@"账号切换成功"];
        }else {
            [SVProgressHUD showErrorWithStatus:@"切换失败"];
        }
    } failure:^(NSError *error) {
        [SVProgressHUD showErrorWithStatus:@"切换失败"];
    }];
}


#pragma mark 微信授权登录

/**
 *  微信授权登录
 */
- (void)WeiXinLog{
    
    //构造SendAuthReq结构体
    SendAuthReq* req =[[SendAuthReq alloc ] init];
    req.scope = @"snsapi_userinfo" ;
    req.state = @"123" ;
    //第三方向微信终端发送一个SendAuthReq消息结构
    [WXApi sendAuthReq:req viewController:self delegate:self];
}

/**
 *  微信授权登录后返回的用户信息
 */
-(void)getUserInfo1:(AQuthModel*)aquth
{
    
    NSMutableDictionary * parame = [NSMutableDictionary dictionary];
    parame[@"access_token"] = aquth.access_token;
    parame[@"openid"] = aquth.openid;
    [UserLoginTool loginRequestGet:@"https://api.weixin.qq.com/sns/userinfo" parame:parame success:^(id json) {
        //        LWLog(@"%@",json);
        UserInfo * userInfo = [UserInfo mj_objectWithKeyValues:json];
        //向服务端提供微信数据
        NSString * path = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
        NSString *fileName = [path stringByAppendingPathComponent:WeiXinUserInfo];
        UserInfo *userLocal = [NSKeyedUnarchiver unarchiveObjectWithFile:fileName];
        
        [self bindWeixinWithUserInfo:userInfo AndUnionid:userLocal.unionid  AndRefreshToken:aquth.refresh_token];
        
    } failure:^(NSError *error) {
        LWLog(@"%@",error.description);
    }];
    
}
- (void)OquthByWeiXinSuccess1:(NSNotification *) note{
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"ToGetUserInfoBuild" object:nil];
    LWLog(@"-=------------%@",note);
    
    if (self.bingWeixin) {
        
        [self accessTokenWithCode1:note.userInfo[@"code"]];
        
        self.bingWeixin = NO;
    }else {
        return;
    }
    
    
    
}


- (void)accessTokenWithCode1:(NSString * )code
{
    __weak HomeViewController * wself = self;
    //进行授权
    NSString *url =[NSString stringWithFormat:@"https://api.weixin.qq.com/sns/oauth2/access_token?appid=%@&secret=%@&code=%@&grant_type=authorization_code",HuoBanMallBuyWeiXinAppId,HuoBanMallShareSdkWeiXinSecret,code];
    [UserLoginTool loginRequestGet:url parame:nil success:^(id json) {
        
        LWLog(@"accessTokenWithCode%@",json);
        AQuthModel * aquth = [AQuthModel mj_objectWithKeyValues:json];
        [AccountTool saveAccount:aquth];
        //获取用户信息
        [wself getUserInfo1:aquth];
    } failure:^(NSError *error) {
        LWLog(@"%@",error.description);
    }];
}
/**
 *  刷新access_token
 */
- (void)toRefreshaccess_token1{
    
    [SVProgressHUD setStatus:nil];
    __weak HomeViewController * wself = self;
    AQuthModel * mode = [AccountTool account];
    NSString * ss = [NSString stringWithFormat:@"https://api.weixin.qq.com/sns/oauth2/refresh_token?appid=%@&grant_type=refresh_token&refresh_token=%@",HuoBanMallBuyWeiXinAppId,mode.refresh_token];
    [UserLoginTool loginRequestGet:ss parame:nil success:^(id json) {
        AQuthModel * aquth = [AQuthModel mj_objectWithKeyValues:json];
        [AccountTool saveAccount:aquth];
        //获取用户信息
        [wself getUserInfo1:aquth];
    } failure:^(NSError *error) {
        LWLog(@"%@",error.description);
    }];
}

- (void)bindWeixinWithUserInfo:(UserInfo *)userInfo AndUnionid:(NSString *) unionid AndRefreshToken:(NSString *)refreshToken
{
    NSMutableDictionary * params = [NSMutableDictionary dictionary];
    params[@"customerid"] = HuoBanMallBuyApp_Merchant_Id;
    params[@"userid"] = [NSString stringWithFormat:@"%@",[[NSUserDefaults standardUserDefaults] objectForKey:HuoBanMallUserId]];
    params[@"sex"] = [NSString stringWithFormat:@"%@",userInfo.sex];
    params[@"nickname"] = userInfo.nickname;
    params[@"openid"] = userInfo.openid;
    params[@"city"] = userInfo.city;
    params[@"country"] = userInfo.country;
    params[@"province"] = userInfo.province;
    params[@"unionid"] = userInfo.unionid;
    params[@"headimgurl"] = userInfo.headimgurl;
    params[@"refreshtoken"] = refreshToken;
    
    
    params = [NSDictionary asignWithMutableDictionary:params];
    
    NSMutableString * url = [NSMutableString stringWithString:AppOriginUrl];
    [url appendString:@"/Account/bindWeixin"];
    
    [UserLoginTool loginRequestPost:url parame:params success:^(id json) {
        //        LWLog(@"%@",json);
        if ([json[@"code"] intValue] == 200) {
            
            UserInfo * userInfo = [[UserInfo alloc] init];
            userInfo.unionid = json[@"data"][@"authorizeCode"];
            userInfo.nickname = json[@"data"][@"nickName"];
            userInfo.headimgurl = json[@"data"][@"headImgUrl"];
            userInfo.openid = json[@"data"][@"openId"];
            NSString * path = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject];
            NSString *fileName = [path stringByAppendingPathComponent:WeiXinUserInfo];
            [NSKeyedArchiver archiveRootObject:userInfo toFile:fileName];
            
            
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"levelName"] forKey:HuoBanMallMemberLevel];
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"userid"] forKey:HuoBanMallUserId];
            if (![json[@"data"][@"headImgUrl"] isKindOfClass:[NSNull class]]) {
                [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"headImgUrl"] forKey:IconHeadImage];
            }else {
                [[NSUserDefaults standardUserDefaults] setObject:@"21321321" forKey:IconHeadImage];
            }
            
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"userType"] forKey:MallUserType];
            [[NSUserDefaults standardUserDefaults] setObject:json[@"data"][@"relatedType"] forKey:MallUserRelatedType];
            NSArray * lefts = [LeftMenuModel mj_objectArrayWithKeyValuesArray:json[@"data"][@"home_menus"]];
            NSMutableData *data = [[NSMutableData alloc] init];
            //创建归档辅助类
            NSKeyedArchiver *archiver = [[NSKeyedArchiver alloc] initForWritingWithMutableData:data];
            //编码
            [archiver encodeObject:lefts forKey:LeftMenuModels];
            //结束编码
            [archiver finishEncoding];
            
            NSArray *array =  NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
            NSString * filename = [[array objectAtIndex:0] stringByAppendingPathComponent:LeftMenuModels];
            //写入
            [data writeToFile:filename atomically:YES];
            
            [SVProgressHUD showSuccessWithStatus:@"绑定成功"];
            
            AppDelegate *app = (AppDelegate *)[UIApplication sharedApplication].delegate;
            
            if ([self.bingWeixinUrl isEqual:[NSNull class]]) {
                
                [app resetUserAgent:nil];
            }else {
                [app resetUserAgent:self.bingWeixinUrl];
            }
            
            [self.homeWebView reload];
            
        }else {
            
            [SVProgressHUD showErrorWithStatus:@"绑定失败"];
        }
    } failure:^(NSError *error) {
        LWLog(@"%@",error);
    }];
    
}


- (void)viewDidDisappear:(BOOL)animated {
    [super viewDidDisappear:animated];
    [_progressView removeFromSuperview];
    
}
#pragma mark UIWebView

//- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
//    LWLog(@"shouldStartLoadWithRequest");
//    NSString *temp = request.URL.absoluteString;
//    
//    LWLog(@"%@",temp);
//    NSString *url = [temp lowercaseString];
//    
//    
//    NSString * uraaaaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
//    NSString * cc = [NSString stringWithFormat:@"%@%@%@",uraaaaa,HomeBottomUrl,HuoBanMallBuyApp_Merchant_Id];
//    if ([url isEqualToString:cc]) {
//        return YES;
//    }else if ([url rangeOfString:@"/js/easemob/im.html?"].location != NSNotFound){
//        
//        [self.homeWebView loadRequest:request];
//        return NO;
//    }else if([url rangeOfString:@"http://wpa.qq.com/msgrd?v=3&uin"].location != NSNotFound){
//        if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:url]]) {
//            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]]; //拨号
//        }else{
//            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"itms-apps://ax.itunes.apple.com/cn/app/qq/id451108668?mt=12"]]; //拨号
//        }
//        return NO;
//    }else {
//        
//        NSRange range = [temp rangeOfString:@"back"];
//        NSString * newUrls = nil;
//        if (range.location != NSNotFound) {
//            
//            newUrls = [temp stringByReplacingCharactersInRange:range withString:@"back=1"];
//        }else{
//            newUrls = [NSString stringWithFormat:@"%@&back=1",temp];
//        }
//        
//        NSRange ran = [newUrls rangeOfString:@"aspx"];
//        NSString * newUrl = nil;
//        if (ran.location != NSNotFound) {
//            NSRange cc = NSMakeRange(ran.location+ran.length, 1);
//            newUrl = [newUrls stringByReplacingCharactersInRange:cc withString:@"?"];
//            NSString * dddd = newUrl;
//            NSURL * urlStr = [NSURL URLWithString:dddd];
//            NSMutableURLRequest * req = [[NSMutableURLRequest alloc] initWithURL:urlStr];
//            [req addValue:WBAPPVERSION forHTTPHeaderField:@"appversion"];
//            [self.homeWebView loadRequest:req];
//            return NO;
//        }else {
//            [self.homeWebView loadRequest:request];
//            return NO;
//        }
//    }
//    return NO;
//    //    }
//}

#pragma mark wkWebView
- (void)webView:(WKWebView *)webView decidePolicyForNavigationAction:(WKNavigationAction *)navigationAction decisionHandler:(void (^)(WKNavigationActionPolicy))decisionHandler{
    if (navigationAction.targetFrame == nil) {
        [webView loadRequest:navigationAction.request];
    }
    decisionHandler(WKNavigationActionPolicyAllow);
}



- (void)webView:(WKWebView *)webView decidePolicyForNavigationResponse:(WKNavigationResponse *)navigationResponse decisionHandler:(void (^)(WKNavigationResponsePolicy))decisionHandler{
    
    
    LWLog(@"decidePolicyForNavigationResponse");
    NSString *temp = webView.URL.absoluteString;
//    NSMutableURLRequest * res = webView.re
    LWLog(@"%@",temp);
    NSString *url = [temp lowercaseString];
    
    if ([url isEqualToString:@"about:blank"]) {
        decisionHandler(WKNavigationResponsePolicyCancel);
    }
    if (webView.tag == 100) {
        if ([url rangeOfString:@"qq"].location !=  NSNotFound) {
            decisionHandler(WKNavigationResponsePolicyAllow);
        }
        if ([url rangeOfString:@"/usercenter/login.aspx"].location !=  NSNotFound || [url rangeOfString:@"/invite/mobilelogin.aspx?"].location != NSNotFound || [url rangeOfString:@"/usercenter/verifymobile.aspx?"].location != NSNotFound) {
            
            NSString * goUrl = [[NSString alloc] init];
            if ([url rangeOfString:@"redirecturl="].location != NSNotFound) {
                NSArray *array = [url componentsSeparatedByString:@"redirecturl="];
                NSString *str = array[1];
                if (str.length != 0) {
                    goUrl = [str stringByRemovingPercentEncoding];
                    if ([goUrl rangeOfString:@"http:"].location == NSNotFound) {
                        goUrl = [NSString stringWithFormat:@"%@%@",[[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl], goUrl];
                    }
                }
            }else {
                NSString * uraaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
                NSString * ddd = [NSString stringWithFormat:@"%@/%@/index.aspx?back=1",uraaa,HuoBanMallBuyApp_Merchant_Id];
                goUrl = ddd;
            }
            
            [UIViewController ToRemoveSandBoxDate];
            
            UIStoryboard * main = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
            
            NSString *str = [[NSUserDefaults standardUserDefaults] objectForKey:AppLoginType];
            /*
             微信加手机 = 0,
             手机登录 = 1,
             微信登录 = 2,
             手机为主授权为辅 = 3
             */
            if ([str intValue] == 0 || [str intValue] == 3 || [str intValue] == 1) {
                IponeVerifyViewController *login = [main instantiateViewControllerWithIdentifier:@"IponeVerifyViewController"];
                LWNavigationController * root = [[LWNavigationController alloc] initWithRootViewController:login];
                login.title = @"登录";
                login.goUrl = goUrl;
                if ([str intValue] == 1) {
                   login.isPhoneLogin = YES;
                }
                [self presentViewController:root animated:YES completion:^{
                    [[NSUserDefaults standardUserDefaults] setObject:Failure forKey:LoginStatus];
                    [self BackToWebView];
                }];
            }else if ([str intValue] == 2 ) {
                LoginViewController * login =  [main instantiateViewControllerWithIdentifier:@"LoginViewController"];
                login.title = @"登录";
                login.goUrl = goUrl;
                LWNavigationController * root = [[LWNavigationController alloc] initWithRootViewController:login];
                [self presentViewController:root animated:YES completion:^{
                    [[NSUserDefaults standardUserDefaults] setObject:Failure forKey:LoginStatus];
                    [self BackToWebView];
                }];
            }
            decisionHandler(WKNavigationResponsePolicyCancel);
        }else if ([url rangeOfString:@"/usercenter/bindingweixin.aspx"].location != NSNotFound) {
            
            if ([WXApi isWXAppInstalled]) {
                NSString *goUrl = [[NSString alloc] init];
                if ([url rangeOfString:@"redirecturl="].location != NSNotFound) {
                    NSArray *array = [url componentsSeparatedByString:@"redirecturl="];
                    NSString *str = array[1];
                    if (str.length != 0) {
                        goUrl = [str stringByRemovingPercentEncoding];
                        if ([goUrl rangeOfString:@"http:"].location == NSNotFound) {
                            goUrl = [NSString stringWithFormat:@"%@%@",[[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl], goUrl];
                        }
                    }
                }else {
                    NSString * uraaa = [[NSUserDefaults standardUserDefaults] objectForKey:AppMainUrl];
                    NSString * ddd = [NSString stringWithFormat:@"%@/%@/index.aspx?back=1",uraaa,HuoBanMallBuyApp_Merchant_Id];
                    goUrl = ddd;
                }
                self.bingWeixinUrl = goUrl;
                [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(OquthByWeiXinSuccess1:) name:@"ToGetUserInfoBuild" object:nil];
                self.bingWeixin = YES;
                [self WeiXinLog];
                
            }else {
                [SVProgressHUD showErrorWithStatus:@"绑定失败"];
            }
            decisionHandler(WKNavigationResponsePolicyCancel);
        }else if ([url rangeOfString:@"/usercenter/appaccountswitcher.aspx"].location != NSNotFound) {
            
            NSArray *array = [url componentsSeparatedByString:@"?u="]; //从字符A中分隔成2个元素的数组
            LWLog(@"array:%@",array);
            [self changeWithUserInfo:array];
            decisionHandler(WKNavigationResponsePolicyCancel);
        }else if([url rangeOfString:@"appalipay.aspx"].location != NSNotFound){
            
            __weak HomeViewController *wself = self;
            
            self.ServerPayUrl = [temp copy];
            NSRange trade_no = [temp rangeOfString:@"trade_no="];
            NSRange customerID = [temp rangeOfString:@"customerID="];
            //            NSRange paymentType = [url rangeOfString:@"paymentType="];
            NSRange trade_noRange = {trade_no.location + 9,customerID.location-trade_no.location-10};
            NSString * trade_noss = [temp substringWithRange:trade_noRange];//订单号
            self.orderNo = trade_noss;
            //            NSString * payType = [url substringFromIndex:paymentType.location+paymentType.length];
            // 1.得到data
            AppDelegate * de = (AppDelegate *)[UIApplication sharedApplication].delegate;
            NSArray *namesArray = de.payConfig;
            
            
            NSMutableString *url = [NSMutableString stringWithString:AppOriginUrl];
            [url appendFormat:@"%@?orderid=%@",@"/order/getpayinfo",trade_noss];
            
            
            
            
            AFHTTPSessionManager * manager = [AFHTTPSessionManager manager];
            NSString * to = [NSDictionary ToSignUrlWithString:url];
            [SVProgressHUD show];
            [manager GET:to parameters:nil progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable json) {
                [SVProgressHUD dismiss];
                if(([json[@"code"] integerValue] == 200) && ([json[@"data"] HuoTuPayInfoConfConfirmWithOrderId:trade_noss])){
                    
                    self.priceNumber = json[@"data"][@"finalamount"];
                    NSString * des =  json[@"data"][@"name"]; //商品描述
                    self.proDes = [des copy];
                    if(namesArray.count == 1){
                        PayModel * pay =  namesArray.firstObject;  //300微信  400支付宝
                        self.paymodel = pay;
                        if ([pay.payType integerValue] == 300) {//300微信
                            UIAlertController *aa =[UIAlertController alertControllerWithTitle:@"支付方式" message:nil preferredStyle:UIAlertControllerStyleActionSheet];
                            [aa addAction:[UIAlertAction actionWithTitle:@"微信" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                                [wself weixinPay];
                            }]];
                            [aa addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
                                
                            }]];
                            [self presentViewController:aa animated:YES completion:nil];
                        }
                        if ([pay.payType integerValue] == 400) {//400支付宝
                            UIAlertController *aa =[UIAlertController alertControllerWithTitle:@"支付方式" message:nil preferredStyle:UIAlertControllerStyleActionSheet];
                            [aa addAction:[UIAlertAction actionWithTitle:@"支付宝" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                                [wself zhifubaoPay];
                            }]];
                            [aa addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
                                
                            }]];
                            [self presentViewController:aa animated:YES completion:nil];
                        }
                    }else if(namesArray.count == 2){
                        
                        UIAlertController *aa =[UIAlertController alertControllerWithTitle:@"支付方式" message:nil preferredStyle:UIAlertControllerStyleActionSheet];
                        [aa addAction:[UIAlertAction actionWithTitle:@"微信" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                            [wself weixinPay];
                        }]];
                        [aa addAction:[UIAlertAction actionWithTitle:@"支付宝" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                            [wself zhifubaoPay];
                        }]];
                        [aa addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
                            
                        }]];
                        [self presentViewController:aa animated:YES completion:nil];
                    }
                    
                    
                    
                }else{
                    UIAlertController * alert = [UIAlertController alertControllerWithTitle:nil message:@"获取订单信息异常，请重新提交订单" preferredStyle:UIAlertControllerStyleAlert];
                    UIAlertAction * action = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
                        
                    }];
                    [alert addAction:action];
                    [self presentViewController:alert animated:YES completion:nil];
                }
            } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
                
            }];
            
            decisionHandler(WKNavigationResponsePolicyCancel);
        }else if ([url rangeOfString:@"im.html"].location != NSNotFound || [url rangeOfString:@"/webChannel.html"].location != NSNotFound){
            //            PushWebViewController * funWeb =  [[PushWebViewController alloc] init];
            //            funWeb.funUrl = temp;
            //            [self.navigationController pushViewController:funWeb animated:YES];
            //            self.tabBarController.tabBar.hidden = YES;
            //            self.navigationItem.title = nil;
            //            decisionHandler(WKNavigationResponsePolicyCancel);
            decisionHandler(WKNavigationResponsePolicyAllow);
        }else{
            
            //            NSRange range = [url rangeOfString:@"__newframe"];
            if (![temp isEqualToString:self.homeWebUrl]) {
                //                UIStoryboard * mainStory = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
                if ([temp.lowercaseString isEqualToString:self.homeWebUrl.lowercaseString]) {
                    decisionHandler(WKNavigationResponsePolicyAllow);
                }else {
                    NSRange spe = [temp rangeOfString:@"back#"];
                    NSRange spe1 = [temp rangeOfString:@"back=1#"];
                    LWLog(@"%@",NSStringFromRange(spe));
                    if (spe.location != NSNotFound || spe1.location != NSNotFound) {
                        
                        NSString * hou = nil;
                        @try {
                             hou = [temp substringToIndex:temp.length-2];
                        } @catch (NSException *exception) {
                            
                        } @finally {
                            
                        }
                        LWLog(@"%@",hou);
                        if ([[hou lowercaseString] isEqualToString:[self.homeWebUrl lowercaseString]]) {
                            decisionHandler(WKNavigationResponsePolicyAllow);
                        }else{
                            decisionHandler(WKNavigationResponsePolicyCancel);
                            PushWebViewController * funWeb =  [[PushWebViewController alloc] init];
                            funWeb.funUrl = temp;
                            [self.navigationController pushViewController:funWeb animated:YES];
                            self.tabBarController.tabBar.hidden = YES;
                            //self.navigationItem.title = nil;
                            [self.homeWebView.scrollView.mj_header endRefreshing];
                        }
                        [self.homeWebView.scrollView.mj_header endRefreshing];
                        
                    }else{
                        decisionHandler(WKNavigationResponsePolicyCancel);
                        PushWebViewController * funWeb =  [[PushWebViewController alloc] init];
                        funWeb.funUrl = temp;
                        [self.navigationController pushViewController:funWeb animated:YES ];
                        self.tabBarController.tabBar.hidden = YES;
                        //self.navigationItem.title = nil;
                        [self.homeWebView.scrollView.mj_header endRefreshing];
                        
                    }
                    
                    
                }
            }
        }
        
        decisionHandler(WKNavigationResponsePolicyAllow);
    }
    
}

/**
 * 定时器获取定时消息
 */
- (void)timerUp{
        [self.homeWebView evaluateJavaScript:@"easemobMessage.getMessageNum()" completionHandler:^(id _Nullable title, NSError * _Nullable error) {
            LWLog(@"客服的定时读取消息%@",title);
            if(title != NULL){
                NSArray * items = [self.tabBarController.tabBar items];
                if ([title intValue] > 0) {
                    [self.tabBarController.tabBar showBadgeOnItemIndex:items.count - 1 andItemMumber:items.count];
                }else{
                   [self.tabBarController.tabBar hideBadgeOnItemIndex:items.count - 1];
                }
            }
        }];
    

    
}
- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation {
    
    LWLog(@"didFinishNavigation");
    [_refreshBtn setBackgroundImage:[UIImage imageNamed:@"main_title_left_refresh"] forState:UIControlStateNormal];
    
    self.refreshBtn.userInteractionEnabled = YES;
    
    
    if (webView.tag == 100) {
        
        [webView evaluateJavaScript:@"document.title" completionHandler:^(NSString * _Nullable title, NSError * _Nullable error) {
            if (title.length > 0) {
                self.navigationItem.title = title;
                
            }else{
                self.navigationItem.title = MallName;
            }
            
        }];
        
        
        

        
        [webView evaluateJavaScript:@"__getShareStr()" completionHandler:^(id _Nullable shareStr, NSError * _Nullable error) {
            
            NSString *str = shareStr;
            if (str.length != 0) {
                [self toAddNavagationRightBtnwithType:1];
            }else {
                [self toAddNavagationRightBtnwithType:0];
            }
        }];
        LWLog(@"xxxx");
        
    }
    
    _shareBtn.userInteractionEnabled = YES;
    [self.homeWebView.scrollView.mj_header endRefreshing];
}

- (void)setRedHead{
    
    
    
}



- (void)webView:(WKWebView *)webView didStartProvisionalNavigation:(null_unspecified WKNavigation *)navigation{
    
    LWLog(@"didStartProvisionalNavigation");
    _shareBtn.userInteractionEnabled = NO;
}

- (void)webView:(WKWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler{
    LWLog(@"runJavaScriptAlertPanelWithMessage");
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:message?:@"" preferredStyle:UIAlertControllerStyleAlert];
    [alertController addAction:([UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        completionHandler();
    }])];
    [self presentViewController:alertController animated:YES completion:nil];
    
}

- (void)webView:(WKWebView *)webView runJavaScriptConfirmPanelWithMessage:(nonnull NSString *)message initiatedByFrame:(nonnull WKFrameInfo *)frame completionHandler:(nonnull void (^)(BOOL))completionHandler {
    
    LWLog(@"runJavaScriptConfirmPanelWithMessage");
    UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:message?:@"" preferredStyle:UIAlertControllerStyleAlert];
    [alertController addAction:([UIAlertAction actionWithTitle:@"确认" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        completionHandler(YES);
    }])];
    [alertController addAction:([UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        completionHandler(NO);
    }])];    [self presentViewController:alertController animated:YES completion:nil];
}

- (void)resetHomeWebAgent {
    AppDelegate *app = (AppDelegate *)[UIApplication sharedApplication].delegate;
    self.homeWebView.customUserAgent = app.userAgent;
    self.homeBottonWebView.customUserAgent = app.userAgent;
}

/**
 *  初始化进度条
 */
- (void)initWebViewProgress {
    
    [self.homeWebView addObserver:self forKeyPath:@"estimatedProgress" options:NSKeyValueObservingOptionNew context:nil];
    CGFloat progressBarHeight = 2.f;
    CGRect navigationBarBounds = self.navigationController.navigationBar.bounds;
    CGRect barFrame = CGRectMake(0, navigationBarBounds.size.height - progressBarHeight, navigationBarBounds.size.width, progressBarHeight);
    self.progressView = [[UIProgressView alloc] initWithFrame:barFrame];
    self.progressView.tintColor = [UIColor greenColor];
    self.progressView.trackTintColor = HuoBanMallBuyNavColor;
    
    
}

// 计算wkWebView进度条
- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context {
    if (object == self.homeWebView && [keyPath isEqualToString:@"estimatedProgress"]) {
        CGFloat newprogress = [[change objectForKey:NSKeyValueChangeNewKey] doubleValue];
        if (newprogress == 1) {
            self.progressView.hidden = YES;
            [self.progressView setProgress:0 animated:NO];
        }else {
            self.progressView.hidden = NO;
            [self.progressView setProgress:newprogress animated:YES];
        }
    }
}

#pragma mark 支付处理

- (void)weixinPay {
    AppDelegate * de = (AppDelegate *)[UIApplication sharedApplication].delegate;
    NSArray *namesArray = de.payConfig;
    PayModel * paymodel =  namesArray[0];
    if ([paymodel.payType integerValue] == 300) {
        [self WeiChatPay:namesArray[0]];
    }else{
        [self WeiChatPay:namesArray[1]];//微信
    }
}

- (void)zhifubaoPay {
    AppDelegate * de = (AppDelegate *)[UIApplication sharedApplication].delegate;
    NSArray *namesArray = de.payConfig;
    
    PayModel * paymodel =  namesArray[0];
    PayModel *cc =  [paymodel.payType integerValue] == 400?namesArray[0]:namesArray[1];
    if (cc.webPagePay) {//网页支付
        NSRange parameRange = [self.ServerPayUrl rangeOfString:@"?"];
        NSString * par = [self.ServerPayUrl substringFromIndex:(parameRange.location+parameRange.length)];
        NSArray * arr = [par componentsSeparatedByString:@"&"];
        __block NSMutableDictionary * dict = [NSMutableDictionary dictionary];
        [arr enumerateObjectsUsingBlock:^(NSString * obj, NSUInteger idx, BOOL *stop) {
            NSArray * aa = [obj componentsSeparatedByString:@"="];
            NSDictionary * dt = [NSDictionary dictionaryWithObject:aa[1] forKey:aa[0]];
            [dict addEntriesFromDictionary:dt];
        }];
        NSString * js = [NSString stringWithFormat:@"utils.Go2Payment(%@, %@, 1, false)",dict[@"customerID"],[NSString stringWithFormat:@"'%@'",dict[@"trade_no"]]];
        //                [self.homeWebView stringByEvaluatingJavaScriptFromString:js];
        [self.homeWebView evaluateJavaScript:js completionHandler:^(id _Nullable js, NSError * _Nullable error) {
            
        }];
    }else{
        [self MallAliPay:cc];
    }
}


- (void)goToNewUrlFormRemoteNotifcation:(NSNotification *) notification {
    
    
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"GoNewUrl" object:nil];
    
    NSString *url = notification.userInfo[@"url"];
    
    UIStoryboard * mainStory = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    PushWebViewController * funWeb =  [mainStory instantiateViewControllerWithIdentifier:@"PushWebViewController"];
    funWeb.funUrl = url;
    [self.navigationController pushViewController:funWeb animated:YES ];
}

#pragma mark 登录修改

- (void)gotoLoginController {
    [UIViewController ToRemoveSandBoxDate];
    
    UIStoryboard * main = [UIStoryboard storyboardWithName:@"Main" bundle:nil];
    
    NSString *str = [[NSUserDefaults standardUserDefaults] objectForKey:AppLoginType];
    
    if ([str intValue] == 0) {
        IponeVerifyViewController *login = [main instantiateViewControllerWithIdentifier:@"IponeVerifyViewController"];
        UINavigationController * root = [[UINavigationController alloc] initWithRootViewController:login];
        login.title = @"登录";
        //        login.goUrl = goUrl;
        [self presentViewController:root animated:YES completion:^{
            [[NSUserDefaults standardUserDefaults] setObject:Failure forKey:LoginStatus];
            [self BackToWebView];
        }];
    }else if ([str intValue] == 1) {
        IponeVerifyViewController *login = [main instantiateViewControllerWithIdentifier:@"IponeVerifyViewController"];
        UINavigationController * root = [[UINavigationController alloc] initWithRootViewController:login];
        login.isPhoneLogin = YES;
        login.title = @"登录";
        //        login.goUrl = goUrl;
        [self presentViewController:root animated:YES completion:^{
            [[NSUserDefaults standardUserDefaults] setObject:Failure forKey:LoginStatus];
            [self BackToWebView];
        }];
    }else if ([str intValue] == 2) {
        LoginViewController * login =  [main instantiateViewControllerWithIdentifier:@"LoginViewController"];
        login.title = @"登录";
        //        login.goUrl = goUrl;
        UINavigationController * root = [[UINavigationController alloc] initWithRootViewController:login];
        [self presentViewController:root animated:YES completion:^{
            [[NSUserDefaults standardUserDefaults] setObject:Failure forKey:LoginStatus];
            [self BackToWebView];
        }];
    }
}



@end


