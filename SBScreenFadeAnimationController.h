//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppStatusBarSettingsAssertion, SBFLockScreenDateView, UIView, UIWindow;

@interface SBScreenFadeAnimationController : NSObject
{
    UIWindow *_fadeWindow;
    UIView *_overlayView;
    SBFLockScreenDateView *_fakeFadeAnimationDateView;
    double _originalDateLeftEdge;
    double _originalDateBottomEdge;
    double _finalTimeAlpha;
    double _finalDateAlpha;
    double _finalStatusBarAlpha;
    id <SBScreenFadeAnimationControllerDelegate> _delegate;
    UIView *_realDateView;
    _Bool _preparingToAnimateFadeIn;
    _Bool _animatingForFadeIn;
    _Bool _animatingForFadeOut;
    _Bool _insideFadeInCompletionBlock;
    _Bool _insideFadeOutCompletionBlock;
    int _animationToken;
    CDUnknownBlockType _fadeInCompletionBlock;
    CDUnknownBlockType _fadeOutCompletionBlock;
    _Bool _animatingDateTime;
    _Bool _animatingWallpaper;
    _Bool _animatingOverlay;
    _Bool _animatingContent;
    long long _lastBacklightChangeSource;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
}

+ (double)_animationSpeedForBacklightChangeSource:(long long)arg1 isFadeIn:(_Bool)arg2;
+ (double)backlightFadeDurationForSource:(long long)arg1 isFadeIn:(_Bool)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_setDateViewAlpha:(double)arg1;
- (void)_runCompletionHandlerForFadeIn:(_Bool)arg1;
- (void)_handleAnimationCompletionIfNecessaryForFadeIn:(_Bool)arg1;
- (void)fadeOutForSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startFadeAnimationsForFadeIn:(_Bool)arg1 animationSettings:(id)arg2;
- (void)_setLastBacklightChangeSource:(long long)arg1;
- (void)_cleanupAnimationWhenInterruptingFadeIn:(_Bool)arg1;
- (void)_assistantVisibilityChanged;
- (void)_invertColorsChanged;
- (void)_startFadeInIfNecessary;
- (void)prepareToFadeInForSource:(long long)arg1 timeAlpha:(double)arg2 dateAlpha:(double)arg3 statusBarAlpha:(double)arg4 delegate:(id)arg5 existingDateView:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_setFakeAnimationDateView:(id)arg1;
- (id)_animationSettingsForBacklightChangeSource:(long long)arg1 isFadeIn:(_Bool)arg2;
- (void)_setRelevantLockScreenViewsHidden:(_Bool)arg1;
- (void)abortAnimatedDateFrameChange;
- (void)updateDateFrameHorizontalOffset:(double)arg1 verticalOffset:(double)arg2;
- (_Bool)isFadeOutAnimationInProgress;
- (_Bool)isFadeInAnimationInProgressForSource:(long long)arg1;
- (_Bool)isFadeInAnimationInProgress;
- (void)_createFadeWindowForFadeIn:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

