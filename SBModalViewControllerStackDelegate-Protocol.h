//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBModalViewControllerStack, UIViewController;

@protocol SBModalViewControllerStackDelegate <NSObject>

@optional
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 didDismissViewController:(UIViewController *)arg2;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)modalViewControllerStack:(SBModalViewControllerStack *)arg1 willPresentViewController:(UIViewController *)arg2;
@end
