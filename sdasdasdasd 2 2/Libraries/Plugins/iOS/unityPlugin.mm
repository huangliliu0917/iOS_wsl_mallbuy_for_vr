//
//  unityPlugin.m
//  SeeCool
//
//  Created by yinhaichao on 2017/4/22.
//
//
#import <SVProgressHUD/SVProgressHUD.h>
@interface unityPlugin : NSObject

{
    NSString *_photoPath;
}

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
    
    void getGiftPath(int type, const char * giftURL) {
        
    }
}
