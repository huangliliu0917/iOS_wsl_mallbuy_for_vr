#include "UnityView.h"
#include "UnityAppController.h"
#include "UnityAppController+Rendering.h"
#include "OrientationSupport.h"
#include "Unity/GlesHelper.h"
#include "Unity/DisplayManager.h"
#include "Unity/UnityMetalSupport.h"
#import <AudioToolbox/AudioToolbox.h>

extern bool _renderingInited;
extern bool _unityAppReady;
extern bool _skipPresent;

@implementation UnityView
{
    CGSize              _surfaceSize;
    ScreenOrientation   _curOrientation;

    BOOL                _recreateView;
    UIButton           *_backBtn;
    UIButton           *_photoBtn;
    UIButton           *_screenshotBtn;
}

@synthesize contentOrientation  = _curOrientation;

- (void)onUpdateSurfaceSize:(CGSize)size
{
    _surfaceSize = size;

    CGSize renderSize = CGSizeMake(size.width * self.contentScaleFactor, size.height * self.contentScaleFactor);
    _curOrientation = (ScreenOrientation)UnityReportResizeView(renderSize.width, renderSize.height, self.contentOrientation);

#if UNITY_CAN_USE_METAL
    if (UnitySelectedRenderingAPI() == apiMetal)
        ((CAMetalLayer*)self.layer).drawableSize = renderSize;
#endif
}

- (void)initImpl:(CGRect)frame scaleFactor:(CGFloat)scale
{
#if !UNITY_TVOS
    self.multipleTouchEnabled   = YES;
    self.exclusiveTouch         = YES;
#endif
    self.contentScaleFactor     = scale;
    self.isAccessibilityElement = TRUE;
    self.accessibilityTraits    = UIAccessibilityTraitAllowsDirectInteraction;

    [self onUpdateSurfaceSize: frame.size];

#if UNITY_CAN_USE_METAL
    if (UnitySelectedRenderingAPI() == apiMetal)
        ((CAMetalLayer*)self.layer).framebufferOnly = NO;
#endif
}

- (id)initWithFrame:(CGRect)frame scaleFactor:(CGFloat)scale;
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: scale];
    return self;
}
- (id)initWithFrame:(CGRect)frame
{
    if ((self = [super initWithFrame: frame]))
        [self initImpl: frame scaleFactor: 1.0f];
    return self;
}

- (id)initFromMainScreen
{
    CGRect  frame   = [UIScreen mainScreen].bounds;
    CGFloat scale   = UnityScreenScaleFactor([UIScreen mainScreen]);
    if ((self = [super initWithFrame: frame])) {
        [self initImpl: frame scaleFactor: scale];
        [self configUI];
    }
    
    return self;
}

- (void)configUI {
    _backBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    _photoBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    _screenshotBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    _backBtn.frame = CGRectMake(15, 30, 60, 60);
    _photoBtn.frame = CGRectMake(30, self.bounds.size.height - 85, 60, 60);
    _screenshotBtn.bounds = CGRectMake(15, 35, 100, 100);
    _screenshotBtn.center = CGPointMake(self.bounds.size.width/2, self.bounds.size.height - 55);
    [_backBtn setImage:[UIImage imageNamed:@"back"] forState:UIControlStateNormal];
    [_photoBtn setImage:[UIImage imageNamed:@"photo"] forState:UIControlStateNormal];
    [_screenshotBtn setImage:[UIImage imageNamed:@"camera"] forState:UIControlStateNormal];
    [_backBtn addTarget:self action:@selector(backBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [_photoBtn addTarget:self action:@selector(photoBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [_screenshotBtn addTarget:self action:@selector(screenshotBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [self addSubview:_backBtn];
    [self addSubview:_photoBtn];
    [self addSubview:_screenshotBtn];
}

- (void)backBtnClicked {

    [[self getCurrentViewController] dismissViewControllerAnimated:NO completion:nil];
    UnityPause(true);
}

- (void)photoBtnClicked {
    if([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypePhotoLibrary])
    {
        UIImagePickerController *imagePicker = [[UIImagePickerController alloc]init];
        imagePicker.allowsEditing = YES;
        imagePicker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
        [[self getCurrentViewController] presentViewController:imagePicker animated:YES completion:^{
            
            NSLog(@"打开相册");
            
        }];
    }
    else
    {
        NSLog(@"不能打开相册");
    }
}

static SystemSoundID soundID = 1108;
- (void)screenshotBtnClicked {
    
    dispatch_queue_t queen = dispatch_queue_create("audioQueen", DISPATCH_QUEUE_SERIAL);
    
    dispatch_async(queen, ^{
        AudioServicesPlayAlertSoundWithCompletion(soundID, ^{
            NSLog(@"播放完成");
        });
    });
    
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    
    // ----------设置你想要的格式,hh与HH的区别:分别表示12小时制,24小时制
    
    [formatter setDateFormat:@"YYYYMMddHHmmss"];
    
    //现在时间,你可以输出来看下是什么格式
    
    NSDate *datenow = [NSDate date];
    
    //----------将nsdate按formatter格式转成nsstring
    
    NSString *nowTimeStr = [formatter stringFromDate:datenow];
        //    NSString *path = [[NSBundle mainBundle] pathForResource:@"u_takephoto" ofType:@"ogg"];
        //    NSURL *url = [NSURL fileURLWithPath:path];
        //    AudioServicesCreateSystemSoundID((__bridge CFURLRef _Nonnull)(url), &soundID);
    UnitySendMessage("GameManager", "OnPhotoClick", [nowTimeStr UTF8String]);
}

- (UIViewController *)getCurrentViewController{
    UIResponder *next = [self nextResponder];
    do {
        if ([next isKindOfClass:[UIViewController class]]) {
            
            return (UIViewController *)next;
            
        }
        next = [next nextResponder];
    } while (next != nil);
    return nil;
}

- (void)layoutSubviews
{
    if (_surfaceSize.width != self.bounds.size.width || _surfaceSize.height != self.bounds.size.height)
        _recreateView = YES;
    [self onUpdateSurfaceSize: self.bounds.size];

    for (UIView* subView in self.subviews)
    {
        if ([subView respondsToSelector: @selector(onUnityUpdateViewLayout)])
            [subView performSelector: @selector(onUnityUpdateViewLayout)];
    }

    [super layoutSubviews];
}

#if !UNITY_TVOS
- (void)willRotateToOrientation:(UIInterfaceOrientation)toOrientation fromOrientation:(UIInterfaceOrientation)fromOrientation;
{
    // to support the case of interface and unity content orientation being different
    // we will cheat a bit:
    // we will calculate transform between interface orientations and apply it to unity view orientation
    // you can still tweak unity view as you see fit in AppController, but this is what you want in 99% of cases

    ScreenOrientation to    = ConvertToUnityScreenOrientation(toOrientation);
    ScreenOrientation from  = ConvertToUnityScreenOrientation(fromOrientation);

    if (fromOrientation == UIInterfaceOrientationUnknown)
        _curOrientation = to;
    else
        _curOrientation = OrientationAfterTransform(_curOrientation, TransformBetweenOrientations(from, to));
}

- (void)didRotate
{
    if (_recreateView)
    {
        // we are not inside repaint so we need to draw second time ourselves
        [self recreateGLESSurface];
        if (_unityAppReady && !UnityIsPaused())
            UnityRepaint();
    }
}

#endif

- (void)recreateGLESSurfaceIfNeeded
{
    unsigned requestedW, requestedH;    UnityGetRenderingResolution(&requestedW, &requestedH);
    int requestedMSAA = UnityGetDesiredMSAASampleCount(MSAA_DEFAULT_SAMPLE_COUNT);
    int requestedSRGB = UnityGetSRGBRequested();

    UnityDisplaySurfaceBase* surf = GetMainDisplaySurface();

    if (_recreateView == YES
        ||  surf->targetW != requestedW || surf->targetH != requestedH
        ||  surf->disableDepthAndStencil != UnityDisableDepthAndStencilBuffers()
        ||  (_supportsMSAA && surf->msaaSamples != requestedMSAA)
        ||  surf->srgb != requestedSRGB
        )
    {
        [self recreateGLESSurface];
    }
}

- (void)recreateGLESSurface
{
    if (_renderingInited)
    {
        unsigned requestedW, requestedH;
        UnityGetRenderingResolution(&requestedW, &requestedH);

        RenderingSurfaceParams params =
        {
            UnityGetDesiredMSAASampleCount(MSAA_DEFAULT_SAMPLE_COUNT),
            (int)requestedW, (int)requestedH,
            UnityGetSRGBRequested(),
            UnityDisableDepthAndStencilBuffers(), 0
        };

        APP_CONTROLLER_RENDER_PLUGIN_METHOD_ARG(onBeforeMainDisplaySurfaceRecreate, &params);
        [GetMainDisplay() recreateSurface: params];

        // actually poke unity about updated back buffer and notify that extents were changed
        UnityReportBackbufferChange(GetMainDisplaySurface()->unityColorBuffer, GetMainDisplaySurface()->unityDepthBuffer);
        APP_CONTROLLER_RENDER_PLUGIN_METHOD(onAfterMainDisplaySurfaceRecreate);

        if (_unityAppReady)
        {
            // seems like ios sometimes got confused about abrupt swap chain destroy
            // draw 2 times to fill both buffers
            // present only once to make sure correct image goes to CA
            // if we are calling this from inside repaint, second draw and present will be done automatically
            _skipPresent = true;
            if (!UnityIsPaused())
                UnityRepaint();
            _skipPresent = false;
        }
    }

    _recreateView = NO;
}

- (void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesBegan(self, touches);
#endif
#if UNITY_TVOS
    if (UnityGetAppleTVRemoteTouchesEnabled())
#endif
    UnitySendTouchesBegin(touches, event);
}

- (void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesEnded(self, touches);
#endif
#if UNITY_TVOS
    if (UnityGetAppleTVRemoteTouchesEnabled())
#endif
    UnitySendTouchesEnded(touches, event);
}

- (void)touchesCancelled:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesEnded(self, touches);
#endif
#if UNITY_TVOS
    if (UnityGetAppleTVRemoteTouchesEnabled())
#endif
    UnitySendTouchesCancelled(touches, event);
}

- (void)touchesMoved:(NSSet*)touches withEvent:(UIEvent*)event
{
#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
    ReportSimulatedRemoteTouchesMoved(self, touches);
#endif
#if UNITY_TVOS
    if (UnityGetAppleTVRemoteTouchesEnabled())
#endif
    UnitySendTouchesMoved(touches, event);
}

#if UNITY_TVOS_SIMULATOR_FAKE_REMOTE
- (void)pressesBegan:(NSSet<UIPress*>*)presses withEvent:(UIEvent*)event
{
    for (UIPress *press in presses)
        ReportSimulatedRemoteButtonPress(press.type);
}

- (void)pressesEnded:(NSSet<UIPress*>*)presses withEvent:(UIEvent*)event
{
    for (UIPress *press in presses)
        ReportSimulatedRemoteButtonRelease(press.type);
}

#endif

@end


#include "objc/runtime.h"

static Class UnityRenderingView_LayerClassGLES(id self_, SEL _cmd)
{
    return [CAEAGLLayer class];
}

static Class UnityRenderingView_LayerClassMTL(id self_, SEL _cmd)
{
    return [[NSBundle bundleWithPath: @"/System/Library/Frameworks/QuartzCore.framework"] classNamed: @"CAMetalLayer"];
}

@implementation UnityRenderingView
+ (Class)layerClass
{
    return nil;
}

+ (void)InitializeForAPI:(UnityRenderingAPI)api
{
    IMP layerClassImpl = 0;
    if (api == apiOpenGLES2 || api == apiOpenGLES3)
        layerClassImpl = (IMP)UnityRenderingView_LayerClassGLES;
    else if (api == apiMetal)
        layerClassImpl = (IMP)UnityRenderingView_LayerClassMTL;

    Method layerClassMethod = class_getClassMethod([UnityRenderingView class], @selector(layerClass));

    if (layerClassMethod)
        method_setImplementation(layerClassMethod, layerClassImpl);
    else
        class_addMethod([UnityRenderingView class], @selector(layerClass), layerClassImpl, "#8@0:4");
}

@end
