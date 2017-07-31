//
//  unityPlugin.m
//  SeeCool
//
//  Created by yinhaichao on 2017/4/22.
//
//
#import <AFNetworking.h>

#define BASE_URL(path) [NSString stringWithFormat:@"http://www.silkafx.com:8081/api/%@", path]

@interface unityPlugin : NSObject

{
    NSString *_photoPath;
    NSURLSessionDownloadTask *_download;
    NSString *_videoPath;
}

@property (strong, nonatomic) AFHTTPSessionManager *manager;
- (void)saveImage:(NSString *)path;

@end

@implementation unityPlugin

- (instancetype)init
{
    self = [super init];
    if (self) {
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(quitAR) name:@"quitAR" object:nil];
    }
    return self;
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:@"quitAR" object:nil];
}

- (void)quitAR {
    if (_download != nil && _download.state == NSURLSessionTaskStateRunning) {
        [_download cancel];
        UnitySendMessage("GameManager", "ReturnScanePage", "");
    }
}

- (void)saveImage:(NSString *)path {
    
    _photoPath = path;
    UIImage *image = [[UIImage alloc] initWithContentsOfFile:[NSString stringWithFormat:@"%@", path]];
    
    UIImageWriteToSavedPhotosAlbum(image, self, @selector(image:didFinishSavingWithError:contextInfo:), (__bridge void *)self);
}

- (void)image:(UIImage *)image didFinishSavingWithError:(NSError *)error contextInfo:(void *)contextInfo
{
    BOOL blHave = [[NSFileManager defaultManager] fileExistsAtPath:[NSString stringWithFormat:@"%@", _photoPath]];
    
    if (!blHave) {
        
        //NSLog(@"no  have");
        
        return ;
        
    }else {
        
        //NSLog(@" have");
        
        BOOL blDele= [[NSFileManager defaultManager] removeItemAtPath:[NSString stringWithFormat:@"%@", _photoPath] error:nil];
        
        if (blDele) {
            
            //NSLog(@"dele success");
            
        }else {
            
            //NSLog(@"dele fail");
            
        }
    }
}

- (AFHTTPSessionManager *)manager
{
    if (!_manager) {
        _manager = [AFHTTPSessionManager manager];
        _manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",nil];
        _manager.responseSerializer = [AFHTTPResponseSerializer serializer];
    }
    return _manager;
}

- (void)startDownload:(NSString *)url name:(NSString *)name giftID:(NSString *)ID ARType:(NSString *)ar_type{
    
    NSString *path = [NSString stringWithFormat:@"%@/Documents/videoDownload", NSHomeDirectory()];
    if ([[NSFileManager defaultManager] fileExistsAtPath:[ar_type isEqualToString:@"video"] ? [NSString stringWithFormat:@"%@/%@.mp4",path, ID] : [NSString stringWithFormat:@"%@/%@.zip",path, ID]]) {
        
        NSString *type = [ar_type isEqualToString:@"video"] ? @"1" : @"0";
        NSString *resoursePath = [ar_type isEqualToString:@"video"] ? [NSString stringWithFormat:@"%@/%@.mp4", path, ID] : [NSString stringWithFormat:@"%@/%@.zip", path, ID];
        NSDictionary *dic = @{@"type":type, @"path":path, @"modelName":@"wudao_demo1"};
        
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
        
        NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        [[NSNotificationCenter defaultCenter] postNotificationName:@"IdentifySucceed" object:nil];
        
        UnitySendMessage("GameManager", "GiftInformation", [jsonStr UTF8String]);
        
    } else {
        
        if (![[NSFileManager defaultManager] fileExistsAtPath:path]) {
            [[NSFileManager defaultManager] createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error:nil];
        }
        
        AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
        
        NSURL *videoUrl = [NSURL URLWithString:url];
        
        NSURLRequest *request = [NSURLRequest requestWithURL:videoUrl];
        
        NSURLSessionDownloadTask *download = [manager downloadTaskWithRequest:request progress:^(NSProgress * _Nonnull downloadProgress) {
            
            NSLog(@"----%@", downloadProgress);
        } destination:^NSURL * _Nonnull(NSURL * _Nonnull targetPath, NSURLResponse * _Nonnull response) {
            
            NSString *savePath = [ar_type isEqualToString:@"video"] ? [NSString stringWithFormat:@"%@/%@.mp4",path, ID] : [NSString stringWithFormat:@"%@/%@.zip",path, ID];
            NSURL *url = [NSURL fileURLWithPath:savePath];
            return url;
            
        } completionHandler:^(NSURLResponse * _Nonnull response, NSURL * _Nullable filePath, NSError * _Nullable error) {

            NSString *giftPath = [ar_type isEqualToString:@"video"] ? [NSString stringWithFormat:@"%@/Documents/videoDownload/%@.mp4", NSHomeDirectory(), ID] : [NSString stringWithFormat:@"%@/Documents/videoDownload/%@.zip", NSHomeDirectory(), ID];
            if ([[NSFileManager defaultManager] fileExistsAtPath:giftPath]) {
                NSString *type = [ar_type isEqualToString:@"video"] ? @"1" : @"0";
                
                NSDictionary *dic = @{@"type":type, @"path":path, @"modelName":@"wudao_demo1"};
                
                NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
                
                NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
                [[NSNotificationCenter defaultCenter] postNotificationName:@"IdentifySucceed" object:nil];
                UnitySendMessage("GameManager", "GiftInformation", [jsonStr UTF8String]);
            }
        }];
        _download = download;
        [_download resume];
    }
}

- (void)downloadVideo:(NSString *)name {
    
    NSString *str = [NSString stringWithFormat:@"ar_img/%@/gift", name];
    [self.manager GET:BASE_URL(str) parameters:@{@"system" : @"ios"} progress:^(NSProgress * _Nonnull downloadProgress) {
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:responseObject options:kNilOptions error:nil];
        
        [self startDownload:dic[@"ar_url"] name:name  giftID:dic[@"id"] ARType:dic[@"ar_type"]];
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        
    }];
}

@end

static unityPlugin *_unityPlugin;

unityPlugin * getUnityPlugin() {
    if (!_unityPlugin) {
        _unityPlugin = [[unityPlugin alloc] init];
    }
    return _unityPlugin;
}

extern "C" {
    void photoSucceed(const char * photoPath) {
        [getUnityPlugin() saveImage:[NSString stringWithFormat:@"%s", photoPath]];
    }
    
    void getGiftPath(const char * name) {
        [getUnityPlugin() downloadVideo:[NSString stringWithFormat:@"%s", name]];
    }
    
    void videoRerurnEvent() {
        [[NSNotificationCenter defaultCenter]postNotificationName:@"videoBack" object:nil];
    }
}
