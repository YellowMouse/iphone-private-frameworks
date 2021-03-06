/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSString, NSMutableArray, SBStatusBar, SBStatusBarContentsView, UIWindow, UIColor;

@interface SBStatusBarController : NSObject {
	UIWindow* _slidingStatusBarWindow;
	int _slidingStatusBarAnimation;
	UIWindow* _animatingCallStatusBarWindow;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIWindow* _leftTopCorner;
	UIWindow* _rightTopCorner;
#endif
	UIWindow* _leftBottomCorner;
	UIWindow* _rightBottomCorner;
	SBStatusBar* _statusBarView;
	SBStatusBarContentsView* _statusBarContentsView;
	SBStatusBar* _transitioningStatusBarView;
	SBStatusBar* _animatingCallStatusBar;
	SBStatusBar* _animatingCallStatusBarToFixUp;
	SBStatusBarContentsView* _transitioningStatusBarContentsView;
	unsigned _isLockVisible : 1;
	unsigned _isTimeVisible : 1;
	unsigned _lockOrTimeVisibleChanging : 1;
	unsigned _dimmed : 1;
	unsigned _showDimmerOverlay : 1;
	unsigned _animating : 1;
	unsigned _airplaneMode : 1;
	unsigned _showsProgress : 1;
	unsigned _showsProgressOnHomeScreen : 1;
	unsigned _cloakStatusBar : 1;
	unsigned _showAirport : 1;
	unsigned _telephonyControllerCheckedIn : 1;
	unsigned _bluetoothControllerCheckedIn : 1;
	unsigned _enteringAirplaneMode : 1;
	unsigned _doubleHeightStatusBarHeightDirty : 1;
	unsigned _doubleHeightStatusBarContentDirty : 1;
	unsigned _animatingStatusBarRotation : 1;
	NSMutableArray* _statusBarIndicatorNames;
	int _mode;
	int _orientation;
	int _animatingCallStatusBarOrientation;
	NSString* _customText;
	UIColor* _dimmerOverlayColor;
	int _airPortSignalStrength;
	NSMutableArray* _doubleHeightInfos;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSString* _currentAnimationIDStr;
	unsigned _currentAnimationID;
#endif
}
+(SBStatusBarController*)sharedStatusBarController;
+(BOOL)isLikeAFullScreenStatusBar:(int)bar;
+(UIImage*)statusBarImageNamed:(NSString*)named forMode:(int)mode;
// inherited: -(id)init;
-(BOOL)_enteringAirplaneMode;
// inherited: -(void)dealloc;
-(void)preheatStatusBarForMode:(int)mode orientation:(int)orientation;
-(SBStatusWindow*)statusBarWindow;
-(SBStatusBar*)statusBarView;
-(id)transitioningStatusBarView;
-(void)addStatusBarItem:(NSString*)item;
-(void)setIsLockVisible:(BOOL)visible isTimeVisible:(BOOL)visible2;
-(BOOL)isLockVisible;
-(BOOL)isTimeVisible;
-(BOOL)isLockOrTimeVisibleChanging;
-(void)setDimmed:(BOOL)dimmed;
-(BOOL)dimmed;

/// Overlay the status bar with a translucent color.
-(BOOL)showDimmerOverlay;
-(void)setShowDimmerOverlay:(BOOL)overlay;
-(UIColor*)dimmerOverlayColor;
-(void)setDimmerOverlayColor:(UIColor*)color;

-(void)tearDownWindowForSlidingStatusBar:(id)slidingStatusBar overStatusBar:(id)bar;
-(void)setupWindowForSlidingStatusBar:(id)slidingStatusBar overStatusBar:(id)bar;
-(void)endDoubleHeightStatusBarAnimationFinished;
-(void)resizeStatusBar:(float)bar grow:(BOOL)grow fenceID:(int)anId;
-(BOOL)useDoubleHeightSizeForMode:(int)mode orientation:(int)orientation;
-(BOOL)useDoubleHeightStyle;
-(BOOL)useDoubleHeightSize;
-(void)setIsInCall:(BOOL)isInCall;	// equivaent to [self setDoubleHeightMode:isInCall glowAnimationEnabled:YES bundleID:@"com.apple.mobilephone" priority:10];
-(BOOL)isInCall;
-(void)updateDoubleHeightStatusBarState;
-(id)doubleHeightInfoForBundleID:(id)bundleID createIfNeeded:(BOOL)needed;
-(void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled bundleID:(id)anId;
-(void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled bundleID:(id)anId priority:(int)priority;
-(void)clearDoubleHeightStatusBarForBundleID:(id)bundleID;
-(int)doubleHeightMode;
-(void)setDoubleHeightPrefixText:(id)text bundleID:(id)anId;
-(id)doubleHeightPrefixText;
-(void)setDoubleHeightStatusText:(id)text bundleID:(id)anId;
-(id)doubleHeightStatusText;
-(BOOL)_isServiceAvailable;
-(NSString*)_SIMStatus;
-(void)_SIMOrServiceStatusChanged;
-(void)_SIMStatusChanged:(id)changed;
-(void)_serviceStatusChanged:(id)changed;
-(void)setAirplaneModeIsEnabled:(BOOL)enabled;
-(BOOL)airplaneModeIsEnabled;
-(void)removeStatusBarItem:(NSString*)item;
-(id)statusBarIndicatorNames;
-(id)customText;
-(void)setCustomText:(id)text;
-(void)setAirPortStrength:(int)strength;	// 0 ~ 3
-(void)setShowsAirPort:(BOOL)port;
-(void)dataConnectionTypeChanged;
-(BOOL)showsAirPort;
-(int)airPortStrength;
-(void)setCloakStatusBar:(BOOL)bar;
-(BOOL)cloakStatusBar;
-(void)updateProgressVisibility;
-(BOOL)showsProgress;
-(void)setShowsProgressOnHomeScreen:(BOOL)screen;
-(void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(double)duration animation:(int)animation;
-(void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(double)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;
-(void)_setTransitionalStatusBarSize:(BOOL)size;
-(void)switchBackstopFrom:(int)from to:(int)to fromOrientation:(int)orientation toOrientation:(int)orientation4 duration:(double)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;
-(void)orderStatusBarFront;
-(void)_finishStatusBarAnimation;
-(void)lockCurrentStatusBarForAnimation;
-(void)releaseLockedStatusBarForAnimationForDisplay:(id)display;
-(int)statusBarMode;
-(int)statusBarOrientation;
-(void)significantTimeChange;
-(void)updateClockFormat;
-(void)signalFormatChanged;
-(void)showBatteryPercentageChanged;
-(void)checkInController:(int)controller;
-(BOOL)telephonyControllerCheckedIn;
-(BOOL)bluetoothControllerCheckedIn;
-(void)loopCarrierNameIfNecessary;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(id)sharedStatusBarControllerIfAvailable;

-(void)_updateCorners;
-(void)_setCurrentAnimationID:(id)anId;
-(id)_uniqueAnimationIDWithPrefix:(id)prefix;
-(void)hideStatusBarAnimationDidStop:(id)hideStatusBarAnimation finished:(id)finished context:(void*)context;
-(void)setStatusBarMode:(int)mode duration:(double)duration;

-(void)statusBarAnimationDidStop:(id)statusBarAnimation finished:(id)finished context:(id)context;
#else
-(void)statusBarRotateContentAnimationDidStop:(id)statusBarRotateContentAnimation finished:(id)finished context:(id)context;
-(void)finishSwitching;
#endif
@end

// Status Bar Item could be one of:
//  - airplaneMode
//  - (XXX for any Default_XXX.png in SpringBoard.app)