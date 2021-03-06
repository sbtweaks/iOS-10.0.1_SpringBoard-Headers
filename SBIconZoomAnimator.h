//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconAnimator.h"

#import "SBIconIndexNodeObserver.h"

@class NSMapTable, NSSet, NSString, SBIconListModel, SBIconListView, SBIconModel, SBIconZoomSettings;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver>
{
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    NSSet *_criticalIconNodeIdentifiers;
    SBIconListModel *_iconListModel;
    SBIconModel *_iconModel;
    _Bool *_phaseTwoCancelledPtr;
    SBIconListView *_iconListView;
    SBIconListView *_dockListView;
}

@property(readonly, nonatomic) SBIconListView *dockListView; // @synthesize dockListView=_dockListView;
@property(readonly, nonatomic) SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
@property(nonatomic) _Bool *phaseTwoCancelledPtr; // @synthesize phaseTwoCancelledPtr=_phaseTwoCancelledPtr;
@property(retain, nonatomic) NSSet *criticalIconNodeIdentifiers; // @synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers;
- (void).cxx_destruct;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1;
- (void)_iconModelDidReload:(id)arg1;
- (void)_iconModelDidRelayout:(id)arg1;
- (void)_clearObservers;
- (void)_setDockListView:(id)arg1;
- (void)_setIconListView:(id)arg1;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)_applyLabelAlphaFraction:(double)arg1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_cleanupZoom;
- (_Bool)isPastPointOfNoReturn;
- (void)cleanupZoom;
- (unsigned long long)dockIconCount;
- (unsigned long long)listIconCount;
- (void)enumerateIconsAndIconViewsWithHandler:(CDUnknownBlockType)arg1;
- (id)iconViewForIcon:(id)arg1;
- (void)dealloc;
- (id)initWithFolderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBIconZoomSettings *settings; // @dynamic settings;
@property(readonly) Class superclass;

@end

