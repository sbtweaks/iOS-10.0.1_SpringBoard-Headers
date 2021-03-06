//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBApplicationRestrictionObserver.h"
#import "SBFolderControllerDelegate.h"
#import "SBIconModelDelegate.h"
#import "SBIconViewDelegate.h"
#import "SBIconViewMapDelegate.h"
#import "SBLeafIconDataSource.h"

@class NSIndexPath, NSSet, NSString, SBCarPlayIconModel, SBIcon, SBIconLayoutOverrideStrategy, SBIconViewMap, SBStarkFakeIconOperationController, SBStarkFolderController, _UILegibilitySettings;

@interface SBStarkIconController : UIViewController <SBIconModelDelegate, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBIconViewMapDelegate, SBIconViewDelegate, SBLeafIconDataSource>
{
    id <SBStarkSessionConfiguring> _configuration;
    id <SBStarkIconControllerDelegate> _delegate;
    SBCarPlayIconModel *_iconModel;
    SBIconViewMap *_iconViewMap;
    SBStarkFolderController *_rootFolderController;
    _UILegibilitySettings *_legibilitySettings;
    SBIcon *_highlightedIcon;
    SBIcon *_launchingIcon;
    NSIndexPath *_indexPathToResetTo;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    SBIconLayoutOverrideStrategy *_iconLayoutOverrideStrategy;
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    _Bool _loaded;
    _Bool _invalidated;
    _Bool _hidden;
    NSIndexPath *_lastFocusedIndex;
    unsigned long long _cachedIconsPerHomeScreenPage;
}

+ (id)_iconImageCache;
@property(readonly, nonatomic) id <SBStarkSessionConfiguring> configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) SBStarkFakeIconOperationController *fakeIconOperationController; // @synthesize fakeIconOperationController=_fakeIconOperationController;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)_preferredFocusedItem;
- (_Bool)iconIsBeta:(id)arg1;
- (_Bool)iconIsRecentlyUpdated:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (id)iconFormattedAccessoryString:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (unsigned long long)iconPriority:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(int)arg2;
- (double)scale;
- (_Bool)iconViewDisplaysBadges:(id)arg1;
- (void)iconTapped:(id)arg1;
- (void)_launchIcon:(id)arg1;
- (void)_clearHighlightedIcon;
- (_Bool)iconShouldAllowTap:(id)arg1;
- (void)icon:(id)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(id)arg1 touchMoved:(id)arg2;
- (void)iconTouchBegan:(id)arg1;
- (int)viewMap:(id)arg1 locationForIcon:(id)arg2;
- (id)windowForRecycledViewsInViewMap:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (Class)iconViewClassForIcon:(id)arg1 location:(int)arg2;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
- (_Bool)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
- (_Bool)folderController:(id)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(id)arg3;
- (Class)controllerClassForFolder:(id)arg1;
- (Class)_controllerClassForFolderClass:(Class)arg1;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)didDeleteIconState:(id)arg1;
- (void)didSaveIconState:(id)arg1;
- (_Bool)canSaveIconState:(id)arg1;
- (void)willUnarchiveIconModel:(id)arg1 withMetadata:(id)arg2;
- (id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;
- (id)placeholdersByDisplayIDForIconModel:(id)arg1;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (_Bool)canAddDownloadingIconForApplication:(id)arg1;
- (_Bool)canAddWebClip:(id)arg1;
- (_Bool)supportsDock;
- (unsigned long long)maxColCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxIconCountForDock;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (unsigned long long)maxListCountForFolders;
- (void)_installedAppsDidChange:(id)arg1;
- (void)_iconModelDidLayout:(id)arg1;
- (void)_iconModelWillLayout:(id)arg1;
- (void)_iconModelDidReloadIcons:(id)arg1;
- (void)_iconModelWillReloadIcons:(id)arg1;
- (void)_iconVisibilityChanged:(id)arg1;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)scrollToIconListAtIndex:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)loadView;
- (void)setIconImage:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)iconImageForBundleIdentifier:(id)arg1;
- (id)_imageKeyForBundleIdentifier:(id)arg1;
- (void)_resetRootIconLists;
- (void)_prepareToResetRootIconLists;
- (void)_rebuildIconStore;
- (id)iconsView;
- (id)exportIconStateForCarKit;
- (void)resetIconModelState;
- (void)importIconState:(id)arg1;
- (void)setHidden:(_Bool)arg1 withAnimationFactory:(id)arg2;
- (_Bool)isHidden;
- (void)invalidate;
- (void)rebuildIconsAndLayout;
- (void)relayout;
- (id)leafIconForIdentifier:(id)arg1;
@property(readonly, nonatomic) SBStarkFolderController *rootFolderController;
- (id)currentFolderController;
- (id)rootFolder;
@property(retain, nonatomic) SBIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

