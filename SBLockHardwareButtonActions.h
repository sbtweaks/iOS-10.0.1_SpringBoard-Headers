//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLockHardwareButtonActions : NSObject
{
    _Bool _didPlayLockSound;
    _Bool _dontLockOnNextLockUp;
    _Bool _fadeOutInProgressFromLockButtonWhileUnlocked;
    _Bool _undidFadeOutFromLockButton;
    _Bool _useDashBoard;
    _Bool _isButtonDown;
}

@property(readonly, nonatomic) _Bool isButtonDown; // @synthesize isButtonDown=_isButtonDown;
- (void)_playLockSound;
- (void)performSinglePressAction;
- (_Bool)performButtonUpPreActions;
- (void)performLongPressActions;
- (void)performButtonDownActions;
- (_Bool)reverseFadeOutIfNeeded;
- (_Bool)performButtonDownPreActions;
- (id)init;

@end

