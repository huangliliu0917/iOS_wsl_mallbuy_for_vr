//
//  unityPlugin.m
//  SeeCool
//
//  Created by yinhaichao on 2017/4/22.
//
//
#import <AFNetworking.h>

#define BASE_URL(path) [NSString stringWithFormat:@"http://106.14.59.8/api/%@", path]

@interface unityPlugin : NSObject

{
    NSString *_photoPath;
}
@property (strong, nonatomic) AFHTTPSessionManager *manager;
- (void)saveImage:(NSString *)path;

@end

@implementation unityPlugin

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

- (void)startDownload:(NSString *)url name:(NSString *)name giftID:(NSString *)ID{
    
    NSString *path = [NSString stringWithFormat:@"%@/Documents/videoDownload/", NSHomeDirectory()];
    if ([[NSFileManager defaultManager] fileExistsAtPath:[NSString stringWithFormat:@"%@%@.mp4",path, ID]]) {
        
        
        NSDictionary *dic = @{@"type":@"1", @"path":[NSString stringWithFormat:@"%@%@.mp4", path, ID], @"modelName":@"ss"};
        
        NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
        
        NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
        
        UnitySendMessage("GameManager", "GiftInformation", [jsonStr UTF8String]);
        
    } else {
        
        AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
        
        NSURL *videoUrl = [NSURL URLWithString:url];
        
        NSURLRequest *request = [NSURLRequest requestWithURL:videoUrl];
        
        NSURLSessionDownloadTask *download = [manager downloadTaskWithRequest:request progress:^(NSProgress * _Nonnull downloadProgress) {
            
        } destination:^NSURL * _Nonnull(NSURL * _Nonnull targetPath, NSURLResponse * _Nonnull response) {
            
            NSString *savePath = [NSString stringWithFormat:@"%@%@.mp4",path, ID];
            NSURL *url = [NSURL fileURLWithPath:savePath];
            return url;
            
        } completionHandler:^(NSURLResponse * _Nonnull response, NSURL * _Nullable filePath, NSError * _Nullable error) {
            NSString *giftPath = [NSString stringWithFormat:@"%@/Documents/videoDownload/%@.mp4", NSHomeDirectory(), ID];
            if ([[NSFileManager defaultManager] fileExistsAtPath:giftPath]) {
                NSDictionary *dic = @{@"type":@"1", @"path":[NSString stringWithFormat:@"%@%@.mp4", path, ID], @"modelName":@"ss"};
                
                NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:nil];
                
                NSString *jsonStr = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
                
                UnitySendMessage("GameManager", "GiftInformation", [jsonStr UTF8String]);
            }
        }];
         [download resume];
    }
}

- (void)downloadVideo:(NSString *)name {
    
    NSString *str = [NSString stringWithFormat:@"ar_img/%@/gift", name];
    [self.manager GET:BASE_URL(str) parameters:@{@"system" : @"ios"} progress:^(NSProgress * _Nonnull downloadProgress) {
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:responseObject options:kNilOptions error:nil];
        [self startDownload:dic[@"ar_url"] name:name  giftID:dic[@"id"]];
        
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
}
